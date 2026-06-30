#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028AA20
// Address: 0x28aa20 - 0x28ac70
void sub_0028AA20_0x28aa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028AA20_0x28aa20");
#endif

    switch (ctx->pc) {
        case 0x28aa78u: goto label_28aa78;
        case 0x28aa90u: goto label_28aa90;
        case 0x28aae8u: goto label_28aae8;
        case 0x28ac18u: goto label_28ac18;
        default: break;
    }

    ctx->pc = 0x28aa20u;

    // 0x28aa20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28aa20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28aa24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28aa24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28aa28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28aa28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28aa2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28aa2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28aa30: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x28aa30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x28aa34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28aa34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aa38: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x28aa38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x28aa3c: 0x320bc  dsll32      $a0, $v1, 2
    ctx->pc = 0x28aa3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 2));
    // 0x28aa40: 0x420be  dsrl32      $a0, $a0, 2
    ctx->pc = 0x28aa40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 2));
    // 0x28aa44: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x28aa44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28aa48: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x28AA48u;
    {
        const bool branch_taken_0x28aa48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AA48u;
            // 0x28aa4c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aa48) {
            ctx->pc = 0x28AAB0u;
            goto label_28aab0;
        }
    }
    ctx->pc = 0x28AA50u;
    // 0x28aa50: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x28aa50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x28aa54: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28aa58: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x28aa58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x28aa5c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28AA5Cu;
    {
        const bool branch_taken_0x28aa5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28AA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AA5Cu;
            // 0x28aa60: 0x430c0  sll         $a2, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aa5c) {
            ctx->pc = 0x28AA78u;
            goto label_28aa78;
        }
    }
    ctx->pc = 0x28AA64u;
    // 0x28aa64: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x28aa64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x28aa68: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x28aa68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x28aa6c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x28aa6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28aa70: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x28AA70u;
    SET_GPR_U32(ctx, 31, 0x28AA78u);
    ctx->pc = 0x28AA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28AA70u;
            // 0x28aa74: 0x24070015  addiu       $a3, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AA78u; }
        if (ctx->pc != 0x28AA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AA78u; }
        if (ctx->pc != 0x28AA78u) { return; }
    }
    ctx->pc = 0x28AA78u;
label_28aa78:
    // 0x28aa78: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x28aa78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28aa7c: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x28aa7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x28aa80: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x28aa80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x28aa84: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x28aa84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x28aa88: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x28AA88u;
    SET_GPR_U32(ctx, 31, 0x28AA90u);
    ctx->pc = 0x28AA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28AA88u;
            // 0x28aa8c: 0x228c0  sll         $a1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AA90u; }
        if (ctx->pc != 0x28AA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AA90u; }
        if (ctx->pc != 0x28AA90u) { return; }
    }
    ctx->pc = 0x28AA90u;
label_28aa90:
    // 0x28aa90: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x28aa90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x28aa94: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x28aa94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x28aa98: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x28aa98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x28aa9c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x28aa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28aaa0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x28aaa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x28aaa4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28aaa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28aaa8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x28aaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x28aaac: 0x0  nop
    ctx->pc = 0x28aaacu;
    // NOP
label_28aab0:
    // 0x28aab0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x28aab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28aab4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x28aab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x28aab8: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x28aab8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28aabc: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x28aabcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28aac0: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x28aac0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28aac4: 0x6082a  slt         $at, $zero, $a2
    ctx->pc = 0x28aac4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x28aac8: 0x10200061  beqz        $at, . + 4 + (0x61 << 2)
    ctx->pc = 0x28AAC8u;
    {
        const bool branch_taken_0x28aac8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AAC8u;
            // 0x28aacc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aac8) {
            ctx->pc = 0x28AC50u;
            goto label_28ac50;
        }
    }
    ctx->pc = 0x28AAD0u;
    // 0x28aad0: 0x28c10009  slti        $at, $a2, 0x9
    ctx->pc = 0x28aad0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x28aad4: 0x1420004a  bnez        $at, . + 4 + (0x4A << 2)
    ctx->pc = 0x28AAD4u;
    {
        const bool branch_taken_0x28aad4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x28AAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AAD4u;
            // 0x28aad8: 0x24c4fff8  addiu       $a0, $a2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aad4) {
            ctx->pc = 0x28AC00u;
            goto label_28ac00;
        }
    }
    ctx->pc = 0x28AADCu;
    // 0x28aadc: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x28aadcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aae0: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x28aae0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aae4: 0x0  nop
    ctx->pc = 0x28aae4u;
    // NOP
label_28aae8:
    // 0x28aae8: 0x946a0000  lhu         $t2, 0x0($v1)
    ctx->pc = 0x28aae8u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28aaec: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x28aaecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x28aaf0: 0xa4482a  slt         $t1, $a1, $a0
    ctx->pc = 0x28aaf0u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x28aaf4: 0xa44a0000  sh          $t2, 0x0($v0)
    ctx->pc = 0x28aaf4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x28aaf8: 0x946a0002  lhu         $t2, 0x2($v1)
    ctx->pc = 0x28aaf8u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x28aafc: 0xa44a0002  sh          $t2, 0x2($v0)
    ctx->pc = 0x28aafcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 10));
    // 0x28ab00: 0x946a0004  lhu         $t2, 0x4($v1)
    ctx->pc = 0x28ab00u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x28ab04: 0xa44a0004  sh          $t2, 0x4($v0)
    ctx->pc = 0x28ab04u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 10));
    // 0x28ab08: 0x946a0006  lhu         $t2, 0x6($v1)
    ctx->pc = 0x28ab08u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x28ab0c: 0xa44a0006  sh          $t2, 0x6($v0)
    ctx->pc = 0x28ab0cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 10));
    // 0x28ab10: 0x946a0008  lhu         $t2, 0x8($v1)
    ctx->pc = 0x28ab10u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x28ab14: 0xa44a0008  sh          $t2, 0x8($v0)
    ctx->pc = 0x28ab14u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 10));
    // 0x28ab18: 0x946a000a  lhu         $t2, 0xA($v1)
    ctx->pc = 0x28ab18u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x28ab1c: 0xa44a000a  sh          $t2, 0xA($v0)
    ctx->pc = 0x28ab1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 10));
    // 0x28ab20: 0x946a000c  lhu         $t2, 0xC($v1)
    ctx->pc = 0x28ab20u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x28ab24: 0xa44a000c  sh          $t2, 0xC($v0)
    ctx->pc = 0x28ab24u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 10));
    // 0x28ab28: 0x946a000e  lhu         $t2, 0xE($v1)
    ctx->pc = 0x28ab28u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x28ab2c: 0xa44a000e  sh          $t2, 0xE($v0)
    ctx->pc = 0x28ab2cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 10));
    // 0x28ab30: 0x946a0010  lhu         $t2, 0x10($v1)
    ctx->pc = 0x28ab30u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x28ab34: 0xa44a0010  sh          $t2, 0x10($v0)
    ctx->pc = 0x28ab34u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 16), (uint16_t)GPR_U32(ctx, 10));
    // 0x28ab38: 0x946a0012  lhu         $t2, 0x12($v1)
    ctx->pc = 0x28ab38u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x28ab3c: 0xa44a0012  sh          $t2, 0x12($v0)
    ctx->pc = 0x28ab3cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 18), (uint16_t)GPR_U32(ctx, 10));
    // 0x28ab40: 0x946a0014  lhu         $t2, 0x14($v1)
    ctx->pc = 0x28ab40u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x28ab44: 0xa44a0014  sh          $t2, 0x14($v0)
    ctx->pc = 0x28ab44u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 10));
    // 0x28ab48: 0x946a0016  lhu         $t2, 0x16($v1)
    ctx->pc = 0x28ab48u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
    // 0x28ab4c: 0xa44a0016  sh          $t2, 0x16($v0)
    ctx->pc = 0x28ab4cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22), (uint16_t)GPR_U32(ctx, 10));
    // 0x28ab50: 0x946a0018  lhu         $t2, 0x18($v1)
    ctx->pc = 0x28ab50u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x28ab54: 0xa44a0018  sh          $t2, 0x18($v0)
    ctx->pc = 0x28ab54u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 10));
    // 0x28ab58: 0x946a001a  lhu         $t2, 0x1A($v1)
    ctx->pc = 0x28ab58u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x28ab5c: 0xa44a001a  sh          $t2, 0x1A($v0)
    ctx->pc = 0x28ab5cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 26), (uint16_t)GPR_U32(ctx, 10));
    // 0x28ab60: 0x946a001c  lhu         $t2, 0x1C($v1)
    ctx->pc = 0x28ab60u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x28ab64: 0xa44a001c  sh          $t2, 0x1C($v0)
    ctx->pc = 0x28ab64u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 28), (uint16_t)GPR_U32(ctx, 10));
    // 0x28ab68: 0x946a001e  lhu         $t2, 0x1E($v1)
    ctx->pc = 0x28ab68u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
    // 0x28ab6c: 0xa44a001e  sh          $t2, 0x1E($v0)
    ctx->pc = 0x28ab6cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 30), (uint16_t)GPR_U32(ctx, 10));
    // 0x28ab70: 0x946a0020  lhu         $t2, 0x20($v1)
    ctx->pc = 0x28ab70u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x28ab74: 0xa44a0020  sh          $t2, 0x20($v0)
    ctx->pc = 0x28ab74u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 32), (uint16_t)GPR_U32(ctx, 10));
    // 0x28ab78: 0x946a0022  lhu         $t2, 0x22($v1)
    ctx->pc = 0x28ab78u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 34)));
    // 0x28ab7c: 0xa44a0022  sh          $t2, 0x22($v0)
    ctx->pc = 0x28ab7cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 34), (uint16_t)GPR_U32(ctx, 10));
    // 0x28ab80: 0x946a0024  lhu         $t2, 0x24($v1)
    ctx->pc = 0x28ab80u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x28ab84: 0xa44a0024  sh          $t2, 0x24($v0)
    ctx->pc = 0x28ab84u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 36), (uint16_t)GPR_U32(ctx, 10));
    // 0x28ab88: 0x946a0026  lhu         $t2, 0x26($v1)
    ctx->pc = 0x28ab88u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 38)));
    // 0x28ab8c: 0xa44a0026  sh          $t2, 0x26($v0)
    ctx->pc = 0x28ab8cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 38), (uint16_t)GPR_U32(ctx, 10));
    // 0x28ab90: 0x946a0028  lhu         $t2, 0x28($v1)
    ctx->pc = 0x28ab90u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x28ab94: 0xa44a0028  sh          $t2, 0x28($v0)
    ctx->pc = 0x28ab94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 40), (uint16_t)GPR_U32(ctx, 10));
    // 0x28ab98: 0x946a002a  lhu         $t2, 0x2A($v1)
    ctx->pc = 0x28ab98u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x28ab9c: 0xa44a002a  sh          $t2, 0x2A($v0)
    ctx->pc = 0x28ab9cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 42), (uint16_t)GPR_U32(ctx, 10));
    // 0x28aba0: 0x946a002c  lhu         $t2, 0x2C($v1)
    ctx->pc = 0x28aba0u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x28aba4: 0xa44a002c  sh          $t2, 0x2C($v0)
    ctx->pc = 0x28aba4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 44), (uint16_t)GPR_U32(ctx, 10));
    // 0x28aba8: 0x946a002e  lhu         $t2, 0x2E($v1)
    ctx->pc = 0x28aba8u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x28abac: 0xa44a002e  sh          $t2, 0x2E($v0)
    ctx->pc = 0x28abacu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 46), (uint16_t)GPR_U32(ctx, 10));
    // 0x28abb0: 0x946a0030  lhu         $t2, 0x30($v1)
    ctx->pc = 0x28abb0u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x28abb4: 0xa44a0030  sh          $t2, 0x30($v0)
    ctx->pc = 0x28abb4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 48), (uint16_t)GPR_U32(ctx, 10));
    // 0x28abb8: 0x946a0032  lhu         $t2, 0x32($v1)
    ctx->pc = 0x28abb8u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 50)));
    // 0x28abbc: 0xa44a0032  sh          $t2, 0x32($v0)
    ctx->pc = 0x28abbcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 50), (uint16_t)GPR_U32(ctx, 10));
    // 0x28abc0: 0x946a0034  lhu         $t2, 0x34($v1)
    ctx->pc = 0x28abc0u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x28abc4: 0xa44a0034  sh          $t2, 0x34($v0)
    ctx->pc = 0x28abc4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 52), (uint16_t)GPR_U32(ctx, 10));
    // 0x28abc8: 0x946a0036  lhu         $t2, 0x36($v1)
    ctx->pc = 0x28abc8u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 54)));
    // 0x28abcc: 0xa44a0036  sh          $t2, 0x36($v0)
    ctx->pc = 0x28abccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 54), (uint16_t)GPR_U32(ctx, 10));
    // 0x28abd0: 0x946a0038  lhu         $t2, 0x38($v1)
    ctx->pc = 0x28abd0u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x28abd4: 0xa44a0038  sh          $t2, 0x38($v0)
    ctx->pc = 0x28abd4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 56), (uint16_t)GPR_U32(ctx, 10));
    // 0x28abd8: 0x946a003a  lhu         $t2, 0x3A($v1)
    ctx->pc = 0x28abd8u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 58)));
    // 0x28abdc: 0xa44a003a  sh          $t2, 0x3A($v0)
    ctx->pc = 0x28abdcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 58), (uint16_t)GPR_U32(ctx, 10));
    // 0x28abe0: 0x946a003c  lhu         $t2, 0x3C($v1)
    ctx->pc = 0x28abe0u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x28abe4: 0xa44a003c  sh          $t2, 0x3C($v0)
    ctx->pc = 0x28abe4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 10));
    // 0x28abe8: 0x946a003e  lhu         $t2, 0x3E($v1)
    ctx->pc = 0x28abe8u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 62)));
    // 0x28abec: 0xa44a003e  sh          $t2, 0x3E($v0)
    ctx->pc = 0x28abecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 62), (uint16_t)GPR_U32(ctx, 10));
    // 0x28abf0: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x28abf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x28abf4: 0x1520ffbc  bnez        $t1, . + 4 + (-0x44 << 2)
    ctx->pc = 0x28ABF4u;
    {
        const bool branch_taken_0x28abf4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x28ABF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28ABF4u;
            // 0x28abf8: 0x24420040  addiu       $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28abf4) {
            ctx->pc = 0x28AAE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28aae8;
        }
    }
    ctx->pc = 0x28ABFCu;
    // 0x28abfc: 0x0  nop
    ctx->pc = 0x28abfcu;
    // NOP
label_28ac00:
    // 0x28ac00: 0xa6082a  slt         $at, $a1, $a2
    ctx->pc = 0x28ac00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x28ac04: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x28AC04u;
    {
        const bool branch_taken_0x28ac04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AC04u;
            // 0x28ac08: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ac04) {
            ctx->pc = 0x28AC50u;
            goto label_28ac50;
        }
    }
    ctx->pc = 0x28AC0Cu;
    // 0x28ac0c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x28ac0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x28ac10: 0x1022021  addu        $a0, $t0, $v0
    ctx->pc = 0x28ac10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x28ac14: 0x0  nop
    ctx->pc = 0x28ac14u;
    // NOP
label_28ac18:
    // 0x28ac18: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x28ac18u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x28ac1c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x28ac1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x28ac20: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x28ac20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x28ac24: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x28ac24u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x28ac28: 0x94e30002  lhu         $v1, 0x2($a3)
    ctx->pc = 0x28ac28u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x28ac2c: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x28ac2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x28ac30: 0x94e30004  lhu         $v1, 0x4($a3)
    ctx->pc = 0x28ac30u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x28ac34: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x28ac34u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x28ac38: 0x94e30006  lhu         $v1, 0x6($a3)
    ctx->pc = 0x28ac38u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x28ac3c: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x28ac3cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x28ac40: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x28ac40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x28ac44: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x28AC44u;
    {
        const bool branch_taken_0x28ac44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28AC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AC44u;
            // 0x28ac48: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ac44) {
            ctx->pc = 0x28AC18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28ac18;
        }
    }
    ctx->pc = 0x28AC4Cu;
    // 0x28ac4c: 0x0  nop
    ctx->pc = 0x28ac4cu;
    // NOP
label_28ac50:
    // 0x28ac50: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28ac50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ac54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28ac54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28ac58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28ac58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ac5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28ac5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ac60: 0x3e00008  jr          $ra
    ctx->pc = 0x28AC60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28AC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AC60u;
            // 0x28ac64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28AC68u;
    // 0x28ac68: 0x0  nop
    ctx->pc = 0x28ac68u;
    // NOP
    // 0x28ac6c: 0x0  nop
    ctx->pc = 0x28ac6cu;
    // NOP
}
