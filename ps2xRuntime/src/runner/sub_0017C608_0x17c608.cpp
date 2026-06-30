#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017C608
// Address: 0x17c608 - 0x17c6f8
void sub_0017C608_0x17c608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C608_0x17c608");
#endif

    switch (ctx->pc) {
        case 0x17c648u: goto label_17c648;
        case 0x17c654u: goto label_17c654;
        case 0x17c664u: goto label_17c664;
        case 0x17c668u: goto label_17c668;
        case 0x17c6a0u: goto label_17c6a0;
        default: break;
    }

    ctx->pc = 0x17c608u;

    // 0x17c608: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17c608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17c60c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17c60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17c610: 0x3c13005e  lui         $s3, 0x5E
    ctx->pc = 0x17c610u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)94 << 16));
    // 0x17c614: 0x8e624c3c  lw          $v0, 0x4C3C($s3)
    ctx->pc = 0x17c614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 19516)));
    // 0x17c618: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17c618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17c61c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17c61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17c620: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17c620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17c624: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17c624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17c628: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x17C628u;
    {
        const bool branch_taken_0x17c628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C628u;
            // 0x17c62c: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c628) {
            ctx->pc = 0x17C6C8u;
            goto label_17c6c8;
        }
    }
    ctx->pc = 0x17C630u;
    // 0x17c630: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x17c630u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    // 0x17c634: 0x3c12005e  lui         $s2, 0x5E
    ctx->pc = 0x17c634u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)94 << 16));
    // 0x17c638: 0x3c140063  lui         $s4, 0x63
    ctx->pc = 0x17c638u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)99 << 16));
    // 0x17c63c: 0x261154c0  addiu       $s1, $s0, 0x54C0
    ctx->pc = 0x17c63cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 21696));
    // 0x17c640: 0x8e454c24  lw          $a1, 0x4C24($s2)
    ctx->pc = 0x17c640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 19492)));
    // 0x17c644: 0x0  nop
    ctx->pc = 0x17c644u;
    // NOP
label_17c648:
    // 0x17c648: 0x260454c0  addiu       $a0, $s0, 0x54C0
    ctx->pc = 0x17c648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 21696));
    // 0x17c64c: 0xc044094  jal         func_110250
    ctx->pc = 0x17C64Cu;
    SET_GPR_U32(ctx, 31, 0x17C654u);
    ctx->pc = 0x17C650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C64Cu;
            // 0x17c650: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110250u;
    if (runtime->hasFunction(0x110250u)) {
        auto targetFn = runtime->lookupFunction(0x110250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C654u; }
        if (ctx->pc != 0x17C654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110250_0x110250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C654u; }
        if (ctx->pc != 0x17C654u) { return; }
    }
    ctx->pc = 0x17C654u;
label_17c654:
    // 0x17c654: 0x443000c  bgezl       $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x17C654u;
    {
        const bool branch_taken_0x17c654 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x17c654) {
            ctx->pc = 0x17C658u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17C654u;
            // 0x17c658: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17C688u;
            goto label_17c688;
        }
    }
    ctx->pc = 0x17C65Cu;
    // 0x17c65c: 0xc05b99c  jal         func_16E670
    ctx->pc = 0x17C65Cu;
    SET_GPR_U32(ctx, 31, 0x17C664u);
    ctx->pc = 0x17C660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C65Cu;
            // 0x17c660: 0x26845da8  addiu       $a0, $s4, 0x5DA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 23976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C664u; }
        if (ctx->pc != 0x17C664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C664u; }
        if (ctx->pc != 0x17C664u) { return; }
    }
    ctx->pc = 0x17C664u;
label_17c664:
    // 0x17c664: 0x0  nop
    ctx->pc = 0x17c664u;
    // NOP
label_17c668:
    // 0x17c668: 0x0  nop
    ctx->pc = 0x17c668u;
    // NOP
    // 0x17c66c: 0x0  nop
    ctx->pc = 0x17c66cu;
    // NOP
    // 0x17c670: 0x0  nop
    ctx->pc = 0x17c670u;
    // NOP
    // 0x17c674: 0x0  nop
    ctx->pc = 0x17c674u;
    // NOP
    // 0x17c678: 0x0  nop
    ctx->pc = 0x17c678u;
    // NOP
    // 0x17c67c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x17C67Cu;
    {
        const bool branch_taken_0x17c67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c67c) {
            ctx->pc = 0x17C668u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17c668;
        }
    }
    ctx->pc = 0x17C684u;
    // 0x17c684: 0x0  nop
    ctx->pc = 0x17c684u;
    // NOP
label_17c688:
    // 0x17c688: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x17C688u;
    {
        const bool branch_taken_0x17c688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C688u;
            // 0x17c68c: 0x26634c3c  addiu       $v1, $s3, 0x4C3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 19516));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c688) {
            ctx->pc = 0x17C6CCu;
            goto label_17c6cc;
        }
    }
    ctx->pc = 0x17C690u;
    // 0x17c690: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17c690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17c694: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x17c694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x17c698: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x17c698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x17c69c: 0x0  nop
    ctx->pc = 0x17c69cu;
    // NOP
label_17c6a0:
    // 0x17c6a0: 0x0  nop
    ctx->pc = 0x17c6a0u;
    // NOP
    // 0x17c6a4: 0x0  nop
    ctx->pc = 0x17c6a4u;
    // NOP
    // 0x17c6a8: 0x0  nop
    ctx->pc = 0x17c6a8u;
    // NOP
    // 0x17c6ac: 0x0  nop
    ctx->pc = 0x17c6acu;
    // NOP
    // 0x17c6b0: 0x0  nop
    ctx->pc = 0x17c6b0u;
    // NOP
    // 0x17c6b4: 0x5443fffa  bnel        $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17C6B4u;
    {
        const bool branch_taken_0x17c6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17c6b4) {
            ctx->pc = 0x17C6B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17C6B4u;
            // 0x17c6b8: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17C6A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17c6a0;
        }
    }
    ctx->pc = 0x17C6BCu;
    // 0x17c6bc: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x17C6BCu;
    {
        const bool branch_taken_0x17c6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C6BCu;
            // 0x17c6c0: 0x8e454c24  lw          $a1, 0x4C24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 19492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c6bc) {
            ctx->pc = 0x17C648u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17c648;
        }
    }
    ctx->pc = 0x17C6C4u;
    // 0x17c6c4: 0x0  nop
    ctx->pc = 0x17c6c4u;
    // NOP
label_17c6c8:
    // 0x17c6c8: 0x26634c3c  addiu       $v1, $s3, 0x4C3C
    ctx->pc = 0x17c6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 19516));
label_17c6cc:
    // 0x17c6cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17c6ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17c6d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17c6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17c6d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17c6d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c6d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17c6d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17c6dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17c6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17c6e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17c6e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c6e4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17c6e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c6e8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x17c6e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17c6ec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x17c6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x17c6f0: 0x3e00008  jr          $ra
    ctx->pc = 0x17C6F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C6F0u;
            // 0x17c6f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17C6F8u;
}
