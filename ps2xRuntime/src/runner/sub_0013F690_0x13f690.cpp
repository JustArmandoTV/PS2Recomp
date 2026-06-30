#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013F690
// Address: 0x13f690 - 0x13f7d0
void sub_0013F690_0x13f690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F690_0x13f690");
#endif

    switch (ctx->pc) {
        case 0x13f6b8u: goto label_13f6b8;
        case 0x13f798u: goto label_13f798;
        case 0x13f7a0u: goto label_13f7a0;
        case 0x13f7b0u: goto label_13f7b0;
        default: break;
    }

    ctx->pc = 0x13f690u;

    // 0x13f690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13f690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13f694: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13f694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13f698: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13f698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13f69c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13f69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13f6a0: 0x8c910004  lw          $s1, 0x4($a0)
    ctx->pc = 0x13f6a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13f6a4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x13f6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f6a8: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x13f6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x13f6ac: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x13f6acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13f6b0: 0xc04fd70  jal         func_13F5C0
    ctx->pc = 0x13F6B0u;
    SET_GPR_U32(ctx, 31, 0x13F6B8u);
    ctx->pc = 0x13F6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F6B0u;
            // 0x13f6b4: 0x8e26000c  lw          $a2, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F5C0u;
    if (runtime->hasFunction(0x13F5C0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F6B8u; }
        if (ctx->pc != 0x13F6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F5C0_0x13f5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F6B8u; }
        if (ctx->pc != 0x13F6B8u) { return; }
    }
    ctx->pc = 0x13F6B8u;
label_13f6b8:
    // 0x13f6b8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13f6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13f6bc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x13f6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x13f6c0: 0x8c445824  lw          $a0, 0x5824($v0)
    ctx->pc = 0x13f6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22564)));
    // 0x13f6c4: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x13f6c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x13f6c8: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x13f6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13f6cc: 0x10430032  beq         $v0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x13F6CCu;
    {
        const bool branch_taken_0x13f6cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x13f6cc) {
            ctx->pc = 0x13F798u;
            goto label_13f798;
        }
    }
    ctx->pc = 0x13F6D4u;
    // 0x13f6d4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13f6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13f6d8: 0x8c4257f0  lw          $v0, 0x57F0($v0)
    ctx->pc = 0x13f6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22512)));
    // 0x13f6dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13F6DCu;
    {
        const bool branch_taken_0x13f6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f6dc) {
            ctx->pc = 0x13F700u;
            goto label_13f700;
        }
    }
    ctx->pc = 0x13F6E4u;
    // 0x13f6e4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13f6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13f6e8: 0x8c425830  lw          $v0, 0x5830($v0)
    ctx->pc = 0x13f6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22576)));
    // 0x13f6ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13F6ECu;
    {
        const bool branch_taken_0x13f6ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f6ec) {
            ctx->pc = 0x13F700u;
            goto label_13f700;
        }
    }
    ctx->pc = 0x13F6F4u;
    // 0x13f6f4: 0x34832000  ori         $v1, $a0, 0x2000
    ctx->pc = 0x13f6f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x13f6f8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13f6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13f6fc: 0xac435824  sw          $v1, 0x5824($v0)
    ctx->pc = 0x13f6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22564), GPR_U32(ctx, 3));
label_13f700:
    // 0x13f700: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13f700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13f704: 0x32030070  andi        $v1, $s0, 0x70
    ctx->pc = 0x13f704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)112);
    // 0x13f708: 0x8c455824  lw          $a1, 0x5824($v0)
    ctx->pc = 0x13f708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22564)));
    // 0x13f70c: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x13f70cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x13f710: 0x32030003  andi        $v1, $s0, 0x3
    ctx->pc = 0x13f710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    // 0x13f714: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x13f714u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x13f718: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13f718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13f71c: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x13f71cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x13f720: 0x8c425844  lw          $v0, 0x5844($v0)
    ctx->pc = 0x13f720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22596)));
    // 0x13f724: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x13f724u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x13f728: 0x1044001b  beq         $v0, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x13F728u;
    {
        const bool branch_taken_0x13f728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x13f728) {
            ctx->pc = 0x13F798u;
            goto label_13f798;
        }
    }
    ctx->pc = 0x13F730u;
    // 0x13f730: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13f730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13f734: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x13f734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x13f738: 0xac445844  sw          $a0, 0x5844($v0)
    ctx->pc = 0x13f738u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22596), GPR_U32(ctx, 4));
    // 0x13f73c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x13f73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13f740: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x13F740u;
    {
        const bool branch_taken_0x13f740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f740) {
            ctx->pc = 0x13F744u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13F740u;
            // 0x13f744: 0x41a02  srl         $v1, $a0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13F770u;
            goto label_13f770;
        }
    }
    ctx->pc = 0x13F748u;
    // 0x13f748: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x13f748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x13f74c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x13f74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x13f750: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x13f750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x13f754: 0x244242e0  addiu       $v0, $v0, 0x42E0
    ctx->pc = 0x13f754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17120));
    // 0x13f758: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13f758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13f75c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x13f75cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x13f760: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13f760u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13f764: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13f764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13f768: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13F768u;
    {
        const bool branch_taken_0x13f768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F768u;
            // 0x13f76c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f768) {
            ctx->pc = 0x13F784u;
            goto label_13f784;
        }
    }
    ctx->pc = 0x13F770u;
label_13f770:
    // 0x13f770: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x13f770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x13f774: 0x24423660  addiu       $v0, $v0, 0x3660
    ctx->pc = 0x13f774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13920));
    // 0x13f778: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13f778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13f77c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13f77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13f780: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13f780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13f784:
    // 0x13f784: 0x3082007f  andi        $v0, $a0, 0x7F
    ctx->pc = 0x13f784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x13f788: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13f788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13f78c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13f78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13f790: 0xc057548  jal         func_15D520
    ctx->pc = 0x13F790u;
    SET_GPR_U32(ctx, 31, 0x13F798u);
    ctx->pc = 0x13F794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F790u;
            // 0x13f794: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D520u;
    if (runtime->hasFunction(0x15D520u)) {
        auto targetFn = runtime->lookupFunction(0x15D520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F798u; }
        if (ctx->pc != 0x13F798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D520_0x15d520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F798u; }
        if (ctx->pc != 0x13F798u) { return; }
    }
    ctx->pc = 0x13F798u;
label_13f798:
    // 0x13f798: 0xc056b10  jal         func_15AC40
    ctx->pc = 0x13F798u;
    SET_GPR_U32(ctx, 31, 0x13F7A0u);
    ctx->pc = 0x15AC40u;
    if (runtime->hasFunction(0x15AC40u)) {
        auto targetFn = runtime->lookupFunction(0x15AC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F7A0u; }
        if (ctx->pc != 0x13F7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC40_0x15ac40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F7A0u; }
        if (ctx->pc != 0x13F7A0u) { return; }
    }
    ctx->pc = 0x13F7A0u;
label_13f7a0:
    // 0x13f7a0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x13f7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13f7a4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x13f7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x13f7a8: 0xc056b18  jal         func_15AC60
    ctx->pc = 0x13F7A8u;
    SET_GPR_U32(ctx, 31, 0x13F7B0u);
    ctx->pc = 0x13F7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F7A8u;
            // 0x13f7ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AC60u;
    if (runtime->hasFunction(0x15AC60u)) {
        auto targetFn = runtime->lookupFunction(0x15AC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F7B0u; }
        if (ctx->pc != 0x13F7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC60_0x15ac60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F7B0u; }
        if (ctx->pc != 0x13F7B0u) { return; }
    }
    ctx->pc = 0x13F7B0u;
label_13f7b0:
    // 0x13f7b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13f7b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13f7b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13f7b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f7b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13f7b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f7bc: 0x3e00008  jr          $ra
    ctx->pc = 0x13F7BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F7BCu;
            // 0x13f7c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13F7C4u;
    // 0x13f7c4: 0x0  nop
    ctx->pc = 0x13f7c4u;
    // NOP
    // 0x13f7c8: 0x0  nop
    ctx->pc = 0x13f7c8u;
    // NOP
    // 0x13f7cc: 0x0  nop
    ctx->pc = 0x13f7ccu;
    // NOP
}
