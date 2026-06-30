#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019AE10
// Address: 0x19ae10 - 0x19b1a0
void sub_0019AE10_0x19ae10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019AE10_0x19ae10");
#endif

    switch (ctx->pc) {
        case 0x19ae30u: goto label_19ae30;
        case 0x19ae5cu: goto label_19ae5c;
        case 0x19ae88u: goto label_19ae88;
        case 0x19aeecu: goto label_19aeec;
        case 0x19af04u: goto label_19af04;
        case 0x19af18u: goto label_19af18;
        case 0x19af64u: goto label_19af64;
        case 0x19af88u: goto label_19af88;
        case 0x19afe4u: goto label_19afe4;
        case 0x19b02cu: goto label_19b02c;
        case 0x19b044u: goto label_19b044;
        case 0x19b078u: goto label_19b078;
        case 0x19b084u: goto label_19b084;
        case 0x19b0b0u: goto label_19b0b0;
        default: break;
    }

    ctx->pc = 0x19ae10u;

    // 0x19ae10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19ae10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19ae14: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x19ae14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x19ae18: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19ae18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ae1c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x19ae1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x19ae20: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x19ae20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x19ae24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19ae24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19ae28: 0xc06e98e  jal         func_1BA638
    ctx->pc = 0x19AE28u;
    SET_GPR_U32(ctx, 31, 0x19AE30u);
    ctx->pc = 0x19AE2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AE28u;
            // 0x19ae2c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA638u;
    if (runtime->hasFunction(0x1BA638u)) {
        auto targetFn = runtime->lookupFunction(0x1BA638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AE30u; }
        if (ctx->pc != 0x19AE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA638_0x1ba638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AE30u; }
        if (ctx->pc != 0x19AE30u) { return; }
    }
    ctx->pc = 0x19AE30u;
label_19ae30:
    // 0x19ae30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19ae30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ae34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19ae34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ae38: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x19AE38u;
    {
        const bool branch_taken_0x19ae38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x19AE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AE38u;
            // 0x19ae3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ae38) {
            ctx->pc = 0x19AE70u;
            goto label_19ae70;
        }
    }
    ctx->pc = 0x19AE40u;
    // 0x19ae40: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x19ae40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ae44: 0x5604000b  bnel        $s0, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x19AE44u;
    {
        const bool branch_taken_0x19ae44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        if (branch_taken_0x19ae44) {
            ctx->pc = 0x19AE48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19AE44u;
            // 0x19ae48: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19AE74u;
            goto label_19ae74;
        }
    }
    ctx->pc = 0x19AE4Cu;
    // 0x19ae4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19ae4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ae50: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x19ae50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x19ae54: 0xc06eca0  jal         func_1BB280
    ctx->pc = 0x19AE54u;
    SET_GPR_U32(ctx, 31, 0x19AE5Cu);
    ctx->pc = 0x19AE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AE54u;
            // 0x19ae58: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB280u;
    if (runtime->hasFunction(0x1BB280u)) {
        auto targetFn = runtime->lookupFunction(0x1BB280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AE5Cu; }
        if (ctx->pc != 0x19AE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB280_0x1bb280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AE5Cu; }
        if (ctx->pc != 0x19AE5Cu) { return; }
    }
    ctx->pc = 0x19AE5Cu;
label_19ae5c:
    // 0x19ae5c: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19AE5Cu;
    {
        const bool branch_taken_0x19ae5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x19AE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AE5Cu;
            // 0x19ae60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ae5c) {
            ctx->pc = 0x19AE70u;
            goto label_19ae70;
        }
    }
    ctx->pc = 0x19AE64u;
    // 0x19ae64: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x19ae64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x19ae68: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x19ae68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x19ae6c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x19ae6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_19ae70:
    // 0x19ae70: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x19ae70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19ae74:
    // 0x19ae74: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x19ae74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19ae78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19ae78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ae7c: 0x3e00008  jr          $ra
    ctx->pc = 0x19AE7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AE7Cu;
            // 0x19ae80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19AE84u;
    // 0x19ae84: 0x0  nop
    ctx->pc = 0x19ae84u;
    // NOP
label_19ae88:
    // 0x19ae88: 0x8c8700c8  lw          $a3, 0xC8($a0)
    ctx->pc = 0x19ae88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
    // 0x19ae8c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x19ae8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ae90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19ae90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ae94: 0x24e60007  addiu       $a2, $a3, 0x7
    ctx->pc = 0x19ae94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
    // 0x19ae98: 0x28e50000  slti        $a1, $a3, 0x0
    ctx->pc = 0x19ae98u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x19ae9c: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x19ae9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aea0: 0xc5180b  movn        $v1, $a2, $a1
    ctx->pc = 0x19aea0u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x19aea4: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x19aea4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x19aea8: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x19aea8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19aeac: 0xe51823  subu        $v1, $a3, $a1
    ctx->pc = 0x19aeacu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x19aeb0: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x19aeb0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x19aeb4: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x19aeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x19aeb8: 0x8ca300d0  lw          $v1, 0xD0($a1)
    ctx->pc = 0x19aeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 208)));
    // 0x19aebc: 0x14680002  bne         $v1, $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19AEBCu;
    {
        const bool branch_taken_0x19aebc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        ctx->pc = 0x19AEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AEBCu;
            // 0x19aec0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aebc) {
            ctx->pc = 0x19AEC8u;
            goto label_19aec8;
        }
    }
    ctx->pc = 0x19AEC4u;
    // 0x19aec4: 0x8cc200e4  lw          $v0, 0xE4($a2)
    ctx->pc = 0x19aec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 228)));
label_19aec8:
    // 0x19aec8: 0x3e00008  jr          $ra
    ctx->pc = 0x19AEC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19AED0u;
    // 0x19aed0: 0x3e00008  jr          $ra
    ctx->pc = 0x19AED0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AED0u;
            // 0x19aed4: 0x8c8200c8  lw          $v0, 0xC8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19AED8u;
    // 0x19aed8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19aed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19aedc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19aedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19aee0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19aee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19aee4: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19AEE4u;
    SET_GPR_U32(ctx, 31, 0x19AEECu);
    ctx->pc = 0x19AEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AEE4u;
            // 0x19aee8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AEECu; }
        if (ctx->pc != 0x19AEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AEECu; }
        if (ctx->pc != 0x19AEECu) { return; }
    }
    ctx->pc = 0x19AEECu;
label_19aeec:
    // 0x19aeec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19aeecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19aef0: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19AEF0u;
    {
        const bool branch_taken_0x19aef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19AEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AEF0u;
            // 0x19aef4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aef0) {
            ctx->pc = 0x19AF10u;
            goto label_19af10;
        }
    }
    ctx->pc = 0x19AEF8u;
    // 0x19aef8: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19aef8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19aefc: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19AEFCu;
    SET_GPR_U32(ctx, 31, 0x19AF04u);
    ctx->pc = 0x19AF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AEFCu;
            // 0x19af00: 0x24848e50  addiu       $a0, $a0, -0x71B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AF04u; }
        if (ctx->pc != 0x19AF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AF04u; }
        if (ctx->pc != 0x19AF04u) { return; }
    }
    ctx->pc = 0x19AF04u;
label_19af04:
    // 0x19af04: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x19AF04u;
    {
        const bool branch_taken_0x19af04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AF04u;
            // 0x19af08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19af04) {
            ctx->pc = 0x19AF38u;
            goto label_19af38;
        }
    }
    ctx->pc = 0x19AF0Cu;
    // 0x19af0c: 0x0  nop
    ctx->pc = 0x19af0cu;
    // NOP
label_19af10:
    // 0x19af10: 0xc0673f2  jal         func_19CFC8
    ctx->pc = 0x19AF10u;
    SET_GPR_U32(ctx, 31, 0x19AF18u);
    ctx->pc = 0x19CFC8u;
    if (runtime->hasFunction(0x19CFC8u)) {
        auto targetFn = runtime->lookupFunction(0x19CFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AF18u; }
        if (ctx->pc != 0x19AF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CFC8_0x19cfc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AF18u; }
        if (ctx->pc != 0x19AF18u) { return; }
    }
    ctx->pc = 0x19AF18u;
label_19af18:
    // 0x19af18: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19af18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19af1c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19AF1Cu;
    {
        const bool branch_taken_0x19af1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AF1Cu;
            // 0x19af20: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19af1c) {
            ctx->pc = 0x19AF38u;
            goto label_19af38;
        }
    }
    ctx->pc = 0x19AF24u;
    // 0x19af24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19af24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19af28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19af28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19af2c: 0x806c168  j           func_1B05A0
    ctx->pc = 0x19AF2Cu;
    ctx->pc = 0x19AF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AF2Cu;
            // 0x19af30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B05A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1B05A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19AF34u;
    // 0x19af34: 0x0  nop
    ctx->pc = 0x19af34u;
    // NOP
label_19af38:
    // 0x19af38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19af38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19af3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19af3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19af40: 0x3e00008  jr          $ra
    ctx->pc = 0x19AF40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AF40u;
            // 0x19af44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19AF48u;
    // 0x19af48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19af48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19af4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19af4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19af50: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x19af50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19af54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19af54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19af58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19af58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19af5c: 0xc0673f2  jal         func_19CFC8
    ctx->pc = 0x19AF5Cu;
    SET_GPR_U32(ctx, 31, 0x19AF64u);
    ctx->pc = 0x19AF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AF5Cu;
            // 0x19af60: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CFC8u;
    if (runtime->hasFunction(0x19CFC8u)) {
        auto targetFn = runtime->lookupFunction(0x19CFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AF64u; }
        if (ctx->pc != 0x19AF64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CFC8_0x19cfc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AF64u; }
        if (ctx->pc != 0x19AF64u) { return; }
    }
    ctx->pc = 0x19AF64u;
label_19af64:
    // 0x19af64: 0x8c452590  lw          $a1, 0x2590($v0)
    ctx->pc = 0x19af64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9616)));
    // 0x19af68: 0x24422598  addiu       $v0, $v0, 0x2598
    ctx->pc = 0x19af68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9624));
    // 0x19af6c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x19af6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19af70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19af70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19af74: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x19af74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x19af78: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x19AF78u;
    {
        const bool branch_taken_0x19af78 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x19AF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AF78u;
            // 0x19af7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19af78) {
            ctx->pc = 0x19AFACu;
            goto label_19afac;
        }
    }
    ctx->pc = 0x19AF80u;
    // 0x19af80: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19af80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19af84: 0x0  nop
    ctx->pc = 0x19af84u;
    // NOP
label_19af88:
    // 0x19af88: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x19af88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x19af8c: 0x56220004  bnel        $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19AF8Cu;
    {
        const bool branch_taken_0x19af8c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x19af8c) {
            ctx->pc = 0x19AF90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19AF8Cu;
            // 0x19af90: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19AFA0u;
            goto label_19afa0;
        }
    }
    ctx->pc = 0x19AF94u;
    // 0x19af94: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x19af94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x19af98: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x19af98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19af9c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19af9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19afa0:
    // 0x19afa0: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x19afa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x19afa4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x19AFA4u;
    {
        const bool branch_taken_0x19afa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AFA4u;
            // 0x19afa8: 0x246300f0  addiu       $v1, $v1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19afa4) {
            ctx->pc = 0x19AF88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19af88;
        }
    }
    ctx->pc = 0x19AFACu;
label_19afac:
    // 0x19afac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19afacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19afb0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19afb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19afb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19afb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19afb8: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x19afb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x19afbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19afbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19afc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19afc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19afc4: 0xc3100b  movn        $v0, $a2, $v1
    ctx->pc = 0x19afc4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x19afc8: 0x3e00008  jr          $ra
    ctx->pc = 0x19AFC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AFC8u;
            // 0x19afcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19AFD0u;
    // 0x19afd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19afd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19afd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19afd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19afd8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19afd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19afdc: 0xc0673f2  jal         func_19CFC8
    ctx->pc = 0x19AFDCu;
    SET_GPR_U32(ctx, 31, 0x19AFE4u);
    ctx->pc = 0x19AFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AFDCu;
            // 0x19afe0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CFC8u;
    if (runtime->hasFunction(0x19CFC8u)) {
        auto targetFn = runtime->lookupFunction(0x19CFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AFE4u; }
        if (ctx->pc != 0x19AFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CFC8_0x19cfc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AFE4u; }
        if (ctx->pc != 0x19AFE4u) { return; }
    }
    ctx->pc = 0x19AFE4u;
label_19afe4:
    // 0x19afe4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x19afe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x19afe8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19afe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19afec: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x19afecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19aff0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19aff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19aff4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x19aff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x19aff8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19aff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19affc: 0x8c422598  lw          $v0, 0x2598($v0)
    ctx->pc = 0x19affcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9624)));
    // 0x19b000: 0x3e00008  jr          $ra
    ctx->pc = 0x19B000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B000u;
            // 0x19b004: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B008u;
    // 0x19b008: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x19b008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x19b00c: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x19b00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x19b010: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19b010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b014: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x19b014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x19b018: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x19b018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x19b01c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x19b01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x19b020: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x19b020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x19b024: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19B024u;
    SET_GPR_U32(ctx, 31, 0x19B02Cu);
    ctx->pc = 0x19B028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B024u;
            // 0x19b028: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B02Cu; }
        if (ctx->pc != 0x19B02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B02Cu; }
        if (ctx->pc != 0x19B02Cu) { return; }
    }
    ctx->pc = 0x19B02Cu;
label_19b02c:
    // 0x19b02c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x19b02cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b030: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19b030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b034: 0x12620006  beq         $s3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19B034u;
    {
        const bool branch_taken_0x19b034 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x19B038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B034u;
            // 0x19b038: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b034) {
            ctx->pc = 0x19B050u;
            goto label_19b050;
        }
    }
    ctx->pc = 0x19B03Cu;
    // 0x19b03c: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19B03Cu;
    SET_GPR_U32(ctx, 31, 0x19B044u);
    ctx->pc = 0x19B040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B03Cu;
            // 0x19b040: 0x24848e88  addiu       $a0, $a0, -0x7178 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B044u; }
        if (ctx->pc != 0x19B044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B044u; }
        if (ctx->pc != 0x19B044u) { return; }
    }
    ctx->pc = 0x19B044u;
label_19b044:
    // 0x19b044: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x19B044u;
    {
        const bool branch_taken_0x19b044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B044u;
            // 0x19b048: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b044) {
            ctx->pc = 0x19B178u;
            goto label_19b178;
        }
    }
    ctx->pc = 0x19B04Cu;
    // 0x19b04c: 0x0  nop
    ctx->pc = 0x19b04cu;
    // NOP
label_19b050:
    // 0x19b050: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x19b050u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x19b054: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x19b054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x19b058: 0x10730003  beq         $v1, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B058u;
    {
        const bool branch_taken_0x19b058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x19B05Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B058u;
            // 0x19b05c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b058) {
            ctx->pc = 0x19B068u;
            goto label_19b068;
        }
    }
    ctx->pc = 0x19B060u;
    // 0x19b060: 0x14620045  bne         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x19B060u;
    {
        const bool branch_taken_0x19b060 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19B064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B060u;
            // 0x19b064: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b060) {
            ctx->pc = 0x19B178u;
            goto label_19b178;
        }
    }
    ctx->pc = 0x19B068u;
label_19b068:
    // 0x19b068: 0x8e500048  lw          $s0, 0x48($s2)
    ctx->pc = 0x19b068u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x19b06c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x19b06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19b070: 0xc06dee0  jal         func_1B7B80
    ctx->pc = 0x19B070u;
    SET_GPR_U32(ctx, 31, 0x19B078u);
    ctx->pc = 0x19B074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B070u;
            // 0x19b074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7B80u;
    if (runtime->hasFunction(0x1B7B80u)) {
        auto targetFn = runtime->lookupFunction(0x1B7B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B078u; }
        if (ctx->pc != 0x19B078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7B80_0x1b7b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B078u; }
        if (ctx->pc != 0x19B078u) { return; }
    }
    ctx->pc = 0x19B078u;
label_19b078:
    // 0x19b078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b07c: 0xc06d848  jal         func_1B6120
    ctx->pc = 0x19B07Cu;
    SET_GPR_U32(ctx, 31, 0x19B084u);
    ctx->pc = 0x19B080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B07Cu;
            // 0x19b080: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6120u;
    if (runtime->hasFunction(0x1B6120u)) {
        auto targetFn = runtime->lookupFunction(0x1B6120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B084u; }
        if (ctx->pc != 0x19B084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6120_0x1b6120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B084u; }
        if (ctx->pc != 0x19B084u) { return; }
    }
    ctx->pc = 0x19B084u;
label_19b084:
    // 0x19b084: 0x8e4500c8  lw          $a1, 0xC8($s2)
    ctx->pc = 0x19b084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
    // 0x19b088: 0x8e4201d4  lw          $v0, 0x1D4($s2)
    ctx->pc = 0x19b088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 468)));
    // 0x19b08c: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x19b08cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19b090: 0x14530005  bne         $v0, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x19B090u;
    {
        const bool branch_taken_0x19b090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x19B094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B090u;
            // 0x19b094: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b090) {
            ctx->pc = 0x19B0A8u;
            goto label_19b0a8;
        }
    }
    ctx->pc = 0x19B098u;
    // 0x19b098: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x19b098u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b09c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x19B09Cu;
    {
        const bool branch_taken_0x19b09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B09Cu;
            // 0x19b0a0: 0x26480004  addiu       $t0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b09c) {
            ctx->pc = 0x19B0D8u;
            goto label_19b0d8;
        }
    }
    ctx->pc = 0x19B0A4u;
    // 0x19b0a4: 0x0  nop
    ctx->pc = 0x19b0a4u;
    // NOP
label_19b0a8:
    // 0x19b0a8: 0x26480004  addiu       $t0, $s2, 0x4
    ctx->pc = 0x19b0a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x19b0ac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19b0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19b0b0:
    // 0x19b0b0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x19b0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x19b0b4: 0x28830020  slti        $v1, $a0, 0x20
    ctx->pc = 0x19b0b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x19b0b8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19B0B8u;
    {
        const bool branch_taken_0x19b0b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B0B8u;
            // 0x19b0bc: 0x481021  addu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b0b8) {
            ctx->pc = 0x19B0D8u;
            goto label_19b0d8;
        }
    }
    ctx->pc = 0x19B0C0u;
    // 0x19b0c0: 0x8c4301d0  lw          $v1, 0x1D0($v0)
    ctx->pc = 0x19b0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 464)));
    // 0x19b0c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19b0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b0c8: 0x0  nop
    ctx->pc = 0x19b0c8u;
    // NOP
    // 0x19b0cc: 0x5462fff8  bnel        $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x19B0CCu;
    {
        const bool branch_taken_0x19b0cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19b0cc) {
            ctx->pc = 0x19B0D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19B0CCu;
            // 0x19b0d0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19B0B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19b0b0;
        }
    }
    ctx->pc = 0x19B0D4u;
    // 0x19b0d4: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x19b0d4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19b0d8:
    // 0x19b0d8: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x19b0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x19b0dc: 0x26450008  addiu       $a1, $s2, 0x8
    ctx->pc = 0x19b0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x19b0e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b0e4: 0x246400d0  addiu       $a0, $v1, 0xD0
    ctx->pc = 0x19b0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x19b0e8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x19b0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x19b0ec: 0x264a000c  addiu       $t2, $s2, 0xC
    ctx->pc = 0x19b0ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x19b0f0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x19b0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x19b0f4: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x19b0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x19b0f8: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x19b0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x19b0fc: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x19b0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x19b100: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x19b100u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19b104: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x19b104u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x19b108: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x19b108u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b10c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x19b10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x19b110: 0xae260008  sw          $a2, 0x8($s1)
    ctx->pc = 0x19b110u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 6));
    // 0x19b114: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x19b114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x19b118: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x19b118u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19b11c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19b11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19b120: 0xae270010  sw          $a3, 0x10($s1)
    ctx->pc = 0x19b120u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 7));
    // 0x19b124: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x19b124u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x19b128: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x19b128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19b12c: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x19b12cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19b130: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x19b130u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x19b134: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x19b134u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
    // 0x19b138: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19b138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19b13c: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x19b13cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x19b140: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x19b140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19b144: 0xae260020  sw          $a2, 0x20($s1)
    ctx->pc = 0x19b144u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 6));
    // 0x19b148: 0xae24001c  sw          $a0, 0x1C($s1)
    ctx->pc = 0x19b148u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 4));
    // 0x19b14c: 0x11690009  beq         $t3, $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19B14Cu;
    {
        const bool branch_taken_0x19b14c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 9));
        ctx->pc = 0x19B150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B14Cu;
            // 0x19b150: 0xae270024  sw          $a3, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b14c) {
            ctx->pc = 0x19B174u;
            goto label_19b174;
        }
    }
    ctx->pc = 0x19B154u;
    // 0x19b154: 0xb1100  sll         $v0, $t3, 4
    ctx->pc = 0x19b154u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x19b158: 0x244201d0  addiu       $v0, $v0, 0x1D0
    ctx->pc = 0x19b158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 464));
    // 0x19b15c: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x19b15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x19b160: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x19b160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x19b164: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x19b164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x19b168: 0xae230028  sw          $v1, 0x28($s1)
    ctx->pc = 0x19b168u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
    // 0x19b16c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19b16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19b170: 0xae24002c  sw          $a0, 0x2C($s1)
    ctx->pc = 0x19b170u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 4));
label_19b174:
    // 0x19b174: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x19b174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19b178:
    // 0x19b178: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x19b178u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x19b17c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x19b17cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19b180: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x19b180u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19b184: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x19b184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19b188: 0x3e00008  jr          $ra
    ctx->pc = 0x19B188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B188u;
            // 0x19b18c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B190u;
    // 0x19b190: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x19b190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x19b194: 0x3e00008  jr          $ra
    ctx->pc = 0x19B194u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B194u;
            // 0x19b198: 0x24428ec0  addiu       $v0, $v0, -0x7140 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B19Cu;
    // 0x19b19c: 0x0  nop
    ctx->pc = 0x19b19cu;
    // NOP
}
