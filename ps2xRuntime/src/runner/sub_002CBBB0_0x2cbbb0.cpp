#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CBBB0
// Address: 0x2cbbb0 - 0x2cbd50
void sub_002CBBB0_0x2cbbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CBBB0_0x2cbbb0");
#endif

    switch (ctx->pc) {
        case 0x2cbbccu: goto label_2cbbcc;
        case 0x2cbbecu: goto label_2cbbec;
        case 0x2cbc3cu: goto label_2cbc3c;
        case 0x2cbc60u: goto label_2cbc60;
        case 0x2cbc80u: goto label_2cbc80;
        case 0x2cbce0u: goto label_2cbce0;
        case 0x2cbcecu: goto label_2cbcec;
        case 0x2cbcf8u: goto label_2cbcf8;
        case 0x2cbd04u: goto label_2cbd04;
        case 0x2cbd10u: goto label_2cbd10;
        case 0x2cbd1cu: goto label_2cbd1c;
        case 0x2cbd34u: goto label_2cbd34;
        default: break;
    }

    ctx->pc = 0x2cbbb0u;

    // 0x2cbbb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cbbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cbbb4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2cbbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2cbbb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cbbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cbbbc: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x2cbbbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x2cbbc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cbbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cbbc4: 0xc0b3024  jal         func_2CC090
    ctx->pc = 0x2CBBC4u;
    SET_GPR_U32(ctx, 31, 0x2CBBCCu);
    ctx->pc = 0x2CBBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBBC4u;
            // 0x2cbbc8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CC090u;
    if (runtime->hasFunction(0x2CC090u)) {
        auto targetFn = runtime->lookupFunction(0x2CC090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBBCCu; }
        if (ctx->pc != 0x2CBBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CC090_0x2cc090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBBCCu; }
        if (ctx->pc != 0x2CBBCCu) { return; }
    }
    ctx->pc = 0x2CBBCCu;
label_2cbbcc:
    // 0x2cbbcc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cbbccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2cbbd0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cbbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2cbbd4: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x2cbbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x2cbbd8: 0x24420138  addiu       $v0, $v0, 0x138
    ctx->pc = 0x2cbbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 312));
    // 0x2cbbdc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2cbbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2cbbe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cbbe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbbe4: 0xc0b3020  jal         func_2CC080
    ctx->pc = 0x2CBBE4u;
    SET_GPR_U32(ctx, 31, 0x2CBBECu);
    ctx->pc = 0x2CBBE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBBE4u;
            // 0x2cbbe8: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CC080u;
    if (runtime->hasFunction(0x2CC080u)) {
        auto targetFn = runtime->lookupFunction(0x2CC080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBBECu; }
        if (ctx->pc != 0x2CBBECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CC080_0x2cc080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBBECu; }
        if (ctx->pc != 0x2CBBECu) { return; }
    }
    ctx->pc = 0x2CBBECu;
label_2cbbec:
    // 0x2cbbec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2cbbecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2cbbf0: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x2cbbf0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x2cbbf4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2cbbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2cbbf8: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x2cbbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x2cbbfc: 0x8c460e80  lw          $a2, 0xE80($v0)
    ctx->pc = 0x2cbbfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x2cbc00: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cbc00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2cbc04: 0x24e7c4f0  addiu       $a3, $a3, -0x3B10
    ctx->pc = 0x2cbc04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952176));
    // 0x2cbc08: 0x248464a0  addiu       $a0, $a0, 0x64A0
    ctx->pc = 0x2cbc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25760));
    // 0x2cbc0c: 0x246364d8  addiu       $v1, $v1, 0x64D8
    ctx->pc = 0x2cbc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25816));
    // 0x2cbc10: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2cbc10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2cbc14: 0x8cc80968  lw          $t0, 0x968($a2)
    ctx->pc = 0x2cbc14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2408)));
    // 0x2cbc18: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2cbc18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2cbc1c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2cbc1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2cbc20: 0x90e70000  lbu         $a3, 0x0($a3)
    ctx->pc = 0x2cbc20u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2cbc24: 0xa2070090  sb          $a3, 0x90($s0)
    ctx->pc = 0x2cbc24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 144), (uint8_t)GPR_U32(ctx, 7));
    // 0x2cbc28: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2cbc28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x2cbc2c: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x2cbc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x2cbc30: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2cbc30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x2cbc34: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x2CBC34u;
    SET_GPR_U32(ctx, 31, 0x2CBC3Cu);
    ctx->pc = 0x2CBC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBC34u;
            // 0x2cbc38: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBC3Cu; }
        if (ctx->pc != 0x2CBC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBC3Cu; }
        if (ctx->pc != 0x2CBC3Cu) { return; }
    }
    ctx->pc = 0x2CBC3Cu;
label_2cbc3c:
    // 0x2cbc3c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2cbc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2cbc40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cbc40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbc44: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CBC44u;
    {
        const bool branch_taken_0x2cbc44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBC44u;
            // 0x2cbc48: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbc44) {
            ctx->pc = 0x2CBC64u;
            goto label_2cbc64;
        }
    }
    ctx->pc = 0x2CBC4Cu;
    // 0x2cbc4c: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x2cbc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
    // 0x2cbc50: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2cbc50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2cbc54: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2cbc54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cbc58: 0xc0827ac  jal         func_209EB0
    ctx->pc = 0x2CBC58u;
    SET_GPR_U32(ctx, 31, 0x2CBC60u);
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBC60u; }
        if (ctx->pc != 0x2CBC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBC60u; }
        if (ctx->pc != 0x2CBC60u) { return; }
    }
    ctx->pc = 0x2CBC60u;
label_2cbc60:
    // 0x2cbc60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cbc60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cbc64:
    // 0x2cbc64: 0xae04005c  sw          $a0, 0x5C($s0)
    ctx->pc = 0x2cbc64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
    // 0x2cbc68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2cbc68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbc6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cbc6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cbc70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cbc70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cbc74: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBC74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBC74u;
            // 0x2cbc78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CBC7Cu;
    // 0x2cbc7c: 0x0  nop
    ctx->pc = 0x2cbc7cu;
    // NOP
label_2cbc80:
    // 0x2cbc80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cbc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cbc84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cbc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cbc88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cbc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cbc8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cbc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cbc90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cbc90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbc94: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2CBC94u;
    {
        const bool branch_taken_0x2cbc94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBC94u;
            // 0x2cbc98: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbc94) {
            ctx->pc = 0x2CBD34u;
            goto label_2cbd34;
        }
    }
    ctx->pc = 0x2CBC9Cu;
    // 0x2cbc9c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cbc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2cbca0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cbca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2cbca4: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x2cbca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x2cbca8: 0x24420138  addiu       $v0, $v0, 0x138
    ctx->pc = 0x2cbca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 312));
    // 0x2cbcac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2cbcacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2cbcb0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2CBCB0u;
    {
        const bool branch_taken_0x2cbcb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBCB0u;
            // 0x2cbcb4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbcb0) {
            ctx->pc = 0x2CBD1Cu;
            goto label_2cbd1c;
        }
    }
    ctx->pc = 0x2CBCB8u;
    // 0x2cbcb8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cbcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2cbcbc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cbcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2cbcc0: 0x246300b0  addiu       $v1, $v1, 0xB0
    ctx->pc = 0x2cbcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x2cbcc4: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2cbcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x2cbcc8: 0x244200e8  addiu       $v0, $v0, 0xE8
    ctx->pc = 0x2cbcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x2cbccc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2cbcccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2cbcd0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2cbcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2cbcd4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x2cbcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2cbcd8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x2CBCD8u;
    SET_GPR_U32(ctx, 31, 0x2CBCE0u);
    ctx->pc = 0x2CBCDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBCD8u;
            // 0x2cbcdc: 0x24a5be20  addiu       $a1, $a1, -0x41E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBCE0u; }
        if (ctx->pc != 0x2CBCE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBCE0u; }
        if (ctx->pc != 0x2CBCE0u) { return; }
    }
    ctx->pc = 0x2CBCE0u;
label_2cbce0:
    // 0x2cbce0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x2cbce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x2cbce4: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x2CBCE4u;
    SET_GPR_U32(ctx, 31, 0x2CBCECu);
    ctx->pc = 0x2CBCE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBCE4u;
            // 0x2cbce8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBCECu; }
        if (ctx->pc != 0x2CBCECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBCECu; }
        if (ctx->pc != 0x2CBCECu) { return; }
    }
    ctx->pc = 0x2CBCECu;
label_2cbcec:
    // 0x2cbcec: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x2cbcecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2cbcf0: 0xc0b2f6c  jal         func_2CBDB0
    ctx->pc = 0x2CBCF0u;
    SET_GPR_U32(ctx, 31, 0x2CBCF8u);
    ctx->pc = 0x2CBCF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBCF0u;
            // 0x2cbcf4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CBDB0u;
    if (runtime->hasFunction(0x2CBDB0u)) {
        auto targetFn = runtime->lookupFunction(0x2CBDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBCF8u; }
        if (ctx->pc != 0x2CBCF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CBDB0_0x2cbdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBCF8u; }
        if (ctx->pc != 0x2CBCF8u) { return; }
    }
    ctx->pc = 0x2CBCF8u;
label_2cbcf8:
    // 0x2cbcf8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2cbcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x2cbcfc: 0xc0b2f6c  jal         func_2CBDB0
    ctx->pc = 0x2CBCFCu;
    SET_GPR_U32(ctx, 31, 0x2CBD04u);
    ctx->pc = 0x2CBD00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBCFCu;
            // 0x2cbd00: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CBDB0u;
    if (runtime->hasFunction(0x2CBDB0u)) {
        auto targetFn = runtime->lookupFunction(0x2CBDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBD04u; }
        if (ctx->pc != 0x2CBD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CBDB0_0x2cbdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBD04u; }
        if (ctx->pc != 0x2CBD04u) { return; }
    }
    ctx->pc = 0x2CBD04u;
label_2cbd04:
    // 0x2cbd04: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x2cbd04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x2cbd08: 0xc0b2f54  jal         func_2CBD50
    ctx->pc = 0x2CBD08u;
    SET_GPR_U32(ctx, 31, 0x2CBD10u);
    ctx->pc = 0x2CBD0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBD08u;
            // 0x2cbd0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CBD50u;
    if (runtime->hasFunction(0x2CBD50u)) {
        auto targetFn = runtime->lookupFunction(0x2CBD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBD10u; }
        if (ctx->pc != 0x2CBD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CBD50_0x2cbd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBD10u; }
        if (ctx->pc != 0x2CBD10u) { return; }
    }
    ctx->pc = 0x2CBD10u;
label_2cbd10:
    // 0x2cbd10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cbd10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbd14: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x2CBD14u;
    SET_GPR_U32(ctx, 31, 0x2CBD1Cu);
    ctx->pc = 0x2CBD18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBD14u;
            // 0x2cbd18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBD1Cu; }
        if (ctx->pc != 0x2CBD1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBD1Cu; }
        if (ctx->pc != 0x2CBD1Cu) { return; }
    }
    ctx->pc = 0x2CBD1Cu;
label_2cbd1c:
    // 0x2cbd1c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2cbd1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2cbd20: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cbd20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2cbd24: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CBD24u;
    {
        const bool branch_taken_0x2cbd24 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cbd24) {
            ctx->pc = 0x2CBD28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBD24u;
            // 0x2cbd28: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CBD38u;
            goto label_2cbd38;
        }
    }
    ctx->pc = 0x2CBD2Cu;
    // 0x2cbd2c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2CBD2Cu;
    SET_GPR_U32(ctx, 31, 0x2CBD34u);
    ctx->pc = 0x2CBD30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBD2Cu;
            // 0x2cbd30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBD34u; }
        if (ctx->pc != 0x2CBD34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBD34u; }
        if (ctx->pc != 0x2CBD34u) { return; }
    }
    ctx->pc = 0x2CBD34u;
label_2cbd34:
    // 0x2cbd34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2cbd34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cbd38:
    // 0x2cbd38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cbd38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cbd3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cbd3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cbd40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cbd40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cbd44: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBD44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBD44u;
            // 0x2cbd48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CBD4Cu;
    // 0x2cbd4c: 0x0  nop
    ctx->pc = 0x2cbd4cu;
    // NOP
}
