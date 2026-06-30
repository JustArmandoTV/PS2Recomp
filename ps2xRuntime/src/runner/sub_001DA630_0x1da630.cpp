#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DA630
// Address: 0x1da630 - 0x1da7d0
void sub_001DA630_0x1da630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA630_0x1da630");
#endif

    switch (ctx->pc) {
        case 0x1da674u: goto label_1da674;
        case 0x1da6c8u: goto label_1da6c8;
        case 0x1da6f0u: goto label_1da6f0;
        case 0x1da740u: goto label_1da740;
        case 0x1da768u: goto label_1da768;
        default: break;
    }

    ctx->pc = 0x1da630u;

    // 0x1da630: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1da630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1da634: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1da634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1da638: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1da638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1da63c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1da63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1da640: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1da640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1da644: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1da644u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da648: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1da648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1da64c: 0x26a40074  addiu       $a0, $s5, 0x74
    ctx->pc = 0x1da64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 116));
    // 0x1da650: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1da650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1da654: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1da654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1da658: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1da658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1da65c: 0x58880  sll         $s1, $a1, 2
    ctx->pc = 0x1da65cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1da660: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1da660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da664: 0x2351021  addu        $v0, $s1, $s5
    ctx->pc = 0x1da664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x1da668: 0x2452007c  addiu       $s2, $v0, 0x7C
    ctx->pc = 0x1da668u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
    // 0x1da66c: 0xc0769f4  jal         func_1DA7D0
    ctx->pc = 0x1DA66Cu;
    SET_GPR_U32(ctx, 31, 0x1DA674u);
    ctx->pc = 0x1DA670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA66Cu;
            // 0x1da670: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA7D0u;
    if (runtime->hasFunction(0x1DA7D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA7D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA674u; }
        if (ctx->pc != 0x1DA674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA7D0_0x1da7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA674u; }
        if (ctx->pc != 0x1DA674u) { return; }
    }
    ctx->pc = 0x1DA674u;
label_1da674:
    // 0x1da674: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1da674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1da678: 0x2351021  addu        $v0, $s1, $s5
    ctx->pc = 0x1da678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x1da67c: 0x8c540090  lw          $s4, 0x90($v0)
    ctx->pc = 0x1da67cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x1da680: 0x8c5300a0  lw          $s3, 0xA0($v0)
    ctx->pc = 0x1da680u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1da684: 0x8c5100c0  lw          $s1, 0xC0($v0)
    ctx->pc = 0x1da684u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1da688: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x1da688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x1da68c: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x1DA68Cu;
    {
        const bool branch_taken_0x1da68c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da68c) {
            ctx->pc = 0x1DA690u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA68Cu;
            // 0x1da690: 0x92420001  lbu         $v0, 0x1($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA720u;
            goto label_1da720;
        }
    }
    ctx->pc = 0x1DA694u;
    // 0x1da694: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DA694u;
    {
        const bool branch_taken_0x1da694 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da694) {
            ctx->pc = 0x1DA698u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA694u;
            // 0x1da698: 0x92420001  lbu         $v0, 0x1($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA6A8u;
            goto label_1da6a8;
        }
    }
    ctx->pc = 0x1DA69Cu;
    // 0x1da69c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1da69cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da6a0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1da6a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da6a4: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x1da6a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_1da6a8:
    // 0x1da6a8: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x1da6a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1da6ac: 0x54500003  bnel        $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA6ACu;
    {
        const bool branch_taken_0x1da6ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1da6ac) {
            ctx->pc = 0x1DA6B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA6ACu;
            // 0x1da6b0: 0x92450000  lbu         $a1, 0x0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA6BCu;
            goto label_1da6bc;
        }
    }
    ctx->pc = 0x1DA6B4u;
    // 0x1da6b4: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1DA6B4u;
    {
        const bool branch_taken_0x1da6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA6B4u;
            // 0x1da6b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da6b4) {
            ctx->pc = 0x1DA79Cu;
            goto label_1da79c;
        }
    }
    ctx->pc = 0x1DA6BCu;
label_1da6bc:
    // 0x1da6bc: 0x307600ff  andi        $s6, $v1, 0xFF
    ctx->pc = 0x1da6bcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1da6c0: 0xc0769f4  jal         func_1DA7D0
    ctx->pc = 0x1DA6C0u;
    SET_GPR_U32(ctx, 31, 0x1DA6C8u);
    ctx->pc = 0x1DA6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA6C0u;
            // 0x1da6c4: 0x26a40074  addiu       $a0, $s5, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA7D0u;
    if (runtime->hasFunction(0x1DA7D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA7D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA6C8u; }
        if (ctx->pc != 0x1DA6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA7D0_0x1da7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA6C8u; }
        if (ctx->pc != 0x1DA6C8u) { return; }
    }
    ctx->pc = 0x1DA6C8u;
label_1da6c8:
    // 0x1da6c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1da6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1da6cc: 0x56c20006  bnel        $s6, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DA6CCu;
    {
        const bool branch_taken_0x1da6cc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x1da6cc) {
            ctx->pc = 0x1DA6D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA6CCu;
            // 0x1da6d0: 0x92450002  lbu         $a1, 0x2($s2) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA6E8u;
            goto label_1da6e8;
        }
    }
    ctx->pc = 0x1DA6D4u;
    // 0x1da6d4: 0x2331024  and         $v0, $s1, $s3
    ctx->pc = 0x1da6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 19));
    // 0x1da6d8: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x1DA6D8u;
    {
        const bool branch_taken_0x1da6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da6d8) {
            ctx->pc = 0x1DA6DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA6D8u;
            // 0x1da6dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA79Cu;
            goto label_1da79c;
        }
    }
    ctx->pc = 0x1DA6E0u;
    // 0x1da6e0: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1DA6E0u;
    {
        const bool branch_taken_0x1da6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA6E0u;
            // 0x1da6e4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da6e0) {
            ctx->pc = 0x1DA79Cu;
            goto label_1da79c;
        }
    }
    ctx->pc = 0x1DA6E8u;
label_1da6e8:
    // 0x1da6e8: 0xc0769f4  jal         func_1DA7D0
    ctx->pc = 0x1DA6E8u;
    SET_GPR_U32(ctx, 31, 0x1DA6F0u);
    ctx->pc = 0x1DA6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA6E8u;
            // 0x1da6ec: 0x26a40074  addiu       $a0, $s5, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA7D0u;
    if (runtime->hasFunction(0x1DA7D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA7D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA6F0u; }
        if (ctx->pc != 0x1DA6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA7D0_0x1da7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA6F0u; }
        if (ctx->pc != 0x1DA6F0u) { return; }
    }
    ctx->pc = 0x1DA6F0u;
label_1da6f0:
    // 0x1da6f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1da6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1da6f4: 0x56c20006  bnel        $s6, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DA6F4u;
    {
        const bool branch_taken_0x1da6f4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x1da6f4) {
            ctx->pc = 0x1DA6F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA6F4u;
            // 0x1da6f8: 0x2402003f  addiu       $v0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA710u;
            goto label_1da710;
        }
    }
    ctx->pc = 0x1DA6FCu;
    // 0x1da6fc: 0x2341025  or          $v0, $s1, $s4
    ctx->pc = 0x1da6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 20));
    // 0x1da700: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x1DA700u;
    {
        const bool branch_taken_0x1da700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da700) {
            ctx->pc = 0x1DA704u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA700u;
            // 0x1da704: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA79Cu;
            goto label_1da79c;
        }
    }
    ctx->pc = 0x1DA708u;
    // 0x1da708: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1DA708u;
    {
        const bool branch_taken_0x1da708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA708u;
            // 0x1da70c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da708) {
            ctx->pc = 0x1DA79Cu;
            goto label_1da79c;
        }
    }
    ctx->pc = 0x1DA710u;
label_1da710:
    // 0x1da710: 0x56020022  bnel        $s0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1DA710u;
    {
        const bool branch_taken_0x1da710 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1da710) {
            ctx->pc = 0x1DA714u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA710u;
            // 0x1da714: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA79Cu;
            goto label_1da79c;
        }
    }
    ctx->pc = 0x1DA718u;
    // 0x1da718: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1DA718u;
    {
        const bool branch_taken_0x1da718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA718u;
            // 0x1da71c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da718) {
            ctx->pc = 0x1DA79Cu;
            goto label_1da79c;
        }
    }
    ctx->pc = 0x1DA720u;
label_1da720:
    // 0x1da720: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x1da720u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1da724: 0x54500003  bnel        $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA724u;
    {
        const bool branch_taken_0x1da724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1da724) {
            ctx->pc = 0x1DA728u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA724u;
            // 0x1da728: 0x92450000  lbu         $a1, 0x0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA734u;
            goto label_1da734;
        }
    }
    ctx->pc = 0x1DA72Cu;
    // 0x1da72c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1DA72Cu;
    {
        const bool branch_taken_0x1da72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA72Cu;
            // 0x1da730: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da72c) {
            ctx->pc = 0x1DA79Cu;
            goto label_1da79c;
        }
    }
    ctx->pc = 0x1DA734u;
label_1da734:
    // 0x1da734: 0x307600ff  andi        $s6, $v1, 0xFF
    ctx->pc = 0x1da734u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1da738: 0xc0769f4  jal         func_1DA7D0
    ctx->pc = 0x1DA738u;
    SET_GPR_U32(ctx, 31, 0x1DA740u);
    ctx->pc = 0x1DA73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA738u;
            // 0x1da73c: 0x26a40074  addiu       $a0, $s5, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA7D0u;
    if (runtime->hasFunction(0x1DA7D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA7D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA740u; }
        if (ctx->pc != 0x1DA740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA7D0_0x1da7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA740u; }
        if (ctx->pc != 0x1DA740u) { return; }
    }
    ctx->pc = 0x1DA740u;
label_1da740:
    // 0x1da740: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1da740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1da744: 0x56c20006  bnel        $s6, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DA744u;
    {
        const bool branch_taken_0x1da744 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x1da744) {
            ctx->pc = 0x1DA748u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA744u;
            // 0x1da748: 0x92450002  lbu         $a1, 0x2($s2) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA760u;
            goto label_1da760;
        }
    }
    ctx->pc = 0x1DA74Cu;
    // 0x1da74c: 0x2331024  and         $v0, $s1, $s3
    ctx->pc = 0x1da74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 19));
    // 0x1da750: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DA750u;
    {
        const bool branch_taken_0x1da750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da750) {
            ctx->pc = 0x1DA754u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA750u;
            // 0x1da754: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA79Cu;
            goto label_1da79c;
        }
    }
    ctx->pc = 0x1DA758u;
    // 0x1da758: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1DA758u;
    {
        const bool branch_taken_0x1da758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA758u;
            // 0x1da75c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da758) {
            ctx->pc = 0x1DA79Cu;
            goto label_1da79c;
        }
    }
    ctx->pc = 0x1DA760u;
label_1da760:
    // 0x1da760: 0xc0769f4  jal         func_1DA7D0
    ctx->pc = 0x1DA760u;
    SET_GPR_U32(ctx, 31, 0x1DA768u);
    ctx->pc = 0x1DA764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA760u;
            // 0x1da764: 0x26a40074  addiu       $a0, $s5, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA7D0u;
    if (runtime->hasFunction(0x1DA7D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA7D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA768u; }
        if (ctx->pc != 0x1DA768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA7D0_0x1da7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA768u; }
        if (ctx->pc != 0x1DA768u) { return; }
    }
    ctx->pc = 0x1DA768u;
label_1da768:
    // 0x1da768: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1da768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1da76c: 0x56c20006  bnel        $s6, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DA76Cu;
    {
        const bool branch_taken_0x1da76c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x1da76c) {
            ctx->pc = 0x1DA770u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA76Cu;
            // 0x1da770: 0x2402003f  addiu       $v0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA788u;
            goto label_1da788;
        }
    }
    ctx->pc = 0x1DA774u;
    // 0x1da774: 0x2341025  or          $v0, $s1, $s4
    ctx->pc = 0x1da774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 20));
    // 0x1da778: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DA778u;
    {
        const bool branch_taken_0x1da778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da778) {
            ctx->pc = 0x1DA77Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA778u;
            // 0x1da77c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA79Cu;
            goto label_1da79c;
        }
    }
    ctx->pc = 0x1DA780u;
    // 0x1da780: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1DA780u;
    {
        const bool branch_taken_0x1da780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA780u;
            // 0x1da784: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da780) {
            ctx->pc = 0x1DA79Cu;
            goto label_1da79c;
        }
    }
    ctx->pc = 0x1DA788u;
label_1da788:
    // 0x1da788: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA788u;
    {
        const bool branch_taken_0x1da788 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1da788) {
            ctx->pc = 0x1DA798u;
            goto label_1da798;
        }
    }
    ctx->pc = 0x1DA790u;
    // 0x1da790: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DA790u;
    {
        const bool branch_taken_0x1da790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA790u;
            // 0x1da794: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da790) {
            ctx->pc = 0x1DA79Cu;
            goto label_1da79c;
        }
    }
    ctx->pc = 0x1DA798u;
label_1da798:
    // 0x1da798: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1da798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1da79c:
    // 0x1da79c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1da79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1da7a0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1da7a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1da7a4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1da7a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1da7a8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1da7a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1da7ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1da7acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1da7b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1da7b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1da7b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1da7b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da7b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1da7b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da7bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA7BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA7BCu;
            // 0x1da7c0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DA7C4u;
    // 0x1da7c4: 0x0  nop
    ctx->pc = 0x1da7c4u;
    // NOP
    // 0x1da7c8: 0x0  nop
    ctx->pc = 0x1da7c8u;
    // NOP
    // 0x1da7cc: 0x0  nop
    ctx->pc = 0x1da7ccu;
    // NOP
}
