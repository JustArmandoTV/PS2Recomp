#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ADC98
// Address: 0x1adc98 - 0x1ade50
void sub_001ADC98_0x1adc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ADC98_0x1adc98");
#endif

    switch (ctx->pc) {
        case 0x1addd8u: goto label_1addd8;
        case 0x1ade10u: goto label_1ade10;
        case 0x1ade40u: goto label_1ade40;
        default: break;
    }

    ctx->pc = 0x1adc98u;

    // 0x1adc98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1adc98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1adc9c: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x1adc9cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adca0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1adca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1adca4: 0x8dac2030  lw          $t4, 0x2030($t5)
    ctx->pc = 0x1adca4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8240)));
    // 0x1adca8: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x1adca8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1adcac: 0x258b0004  addiu       $t3, $t4, 0x4
    ctx->pc = 0x1adcacu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x1adcb0: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1adcb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1adcb4: 0x8d620008  lw          $v0, 0x8($t3)
    ctx->pc = 0x1adcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x1adcb8: 0x8d63000c  lw          $v1, 0xC($t3)
    ctx->pc = 0x1adcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x1adcbc: 0xc72818  mult        $a1, $a2, $a3
    ctx->pc = 0x1adcbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1adcc0: 0x8dae0038  lw          $t6, 0x38($t5)
    ctx->pc = 0x1adcc0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 56)));
    // 0x1adcc4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1adcc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1adcc8: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x1adcc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1adccc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ADCCCu;
    {
        const bool branch_taken_0x1adccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADCD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADCCCu;
            // 0x1adcd0: 0x8d69001c  lw          $t1, 0x1C($t3) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adccc) {
            ctx->pc = 0x1ADCE8u;
            goto label_1adce8;
        }
    }
    ctx->pc = 0x1ADCD4u;
    // 0x1adcd4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1adcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1adcd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1adcd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adcdc: 0x34a50f17  ori         $a1, $a1, 0xF17
    ctx->pc = 0x1adcdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3863);
    // 0x1adce0: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1ADCE0u;
    ctx->pc = 0x1ADCE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADCE0u;
            // 0x1adce4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1ADCE8u;
label_1adce8:
    // 0x1adce8: 0x24c5000f  addiu       $a1, $a2, 0xF
    ctx->pc = 0x1adce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x1adcec: 0x28c30000  slti        $v1, $a2, 0x0
    ctx->pc = 0x1adcecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1adcf0: 0x28e20000  slti        $v0, $a3, 0x0
    ctx->pc = 0x1adcf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1adcf4: 0x24e4000f  addiu       $a0, $a3, 0xF
    ctx->pc = 0x1adcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x1adcf8: 0xa3300b  movn        $a2, $a1, $v1
    ctx->pc = 0x1adcf8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
    // 0x1adcfc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1adcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1add00: 0x82380b  movn        $a3, $a0, $v0
    ctx->pc = 0x1add00u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x1add04: 0x62903  sra         $a1, $a2, 4
    ctx->pc = 0x1add04u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 4));
    // 0x1add08: 0x15c30005  bne         $t6, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ADD08u;
    {
        const bool branch_taken_0x1add08 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 3));
        ctx->pc = 0x1ADD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADD08u;
            // 0x1add0c: 0x71103  sra         $v0, $a3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1add08) {
            ctx->pc = 0x1ADD20u;
            goto label_1add20;
        }
    }
    ctx->pc = 0x1ADD10u;
    // 0x1add10: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x1add10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1add14: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1ADD14u;
    {
        const bool branch_taken_0x1add14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADD14u;
            // 0x1add18: 0x21280  sll         $v0, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1add14) {
            ctx->pc = 0x1ADD30u;
            goto label_1add30;
        }
    }
    ctx->pc = 0x1ADD1Cu;
    // 0x1add1c: 0x0  nop
    ctx->pc = 0x1add1cu;
    // NOP
label_1add20:
    // 0x1add20: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x1add20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1add24: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1add24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1add28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1add28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1add2c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1add2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1add30:
    // 0x1add30: 0x244a0040  addiu       $t2, $v0, 0x40
    ctx->pc = 0x1add30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1add34: 0x8d630014  lw          $v1, 0x14($t3)
    ctx->pc = 0x1add34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 20)));
    // 0x1add38: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1add38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1add3c: 0x8d620018  lw          $v0, 0x18($t3)
    ctx->pc = 0x1add3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 24)));
    // 0x1add40: 0x2467000f  addiu       $a3, $v1, 0xF
    ctx->pc = 0x1add40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1add44: 0x28650000  slti        $a1, $v1, 0x0
    ctx->pc = 0x1add44u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1add48: 0x2446000f  addiu       $a2, $v0, 0xF
    ctx->pc = 0x1add48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1add4c: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x1add4cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1add50: 0xe5180b  movn        $v1, $a3, $a1
    ctx->pc = 0x1add50u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x1add54: 0xc4100b  movn        $v0, $a2, $a0
    ctx->pc = 0x1add54u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x1add58: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1add58u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1add5c: 0x15c8000a  bne         $t6, $t0, . + 4 + (0xA << 2)
    ctx->pc = 0x1ADD5Cu;
    {
        const bool branch_taken_0x1add5c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 8));
        ctx->pc = 0x1ADD60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADD5Cu;
            // 0x1add60: 0x21103  sra         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1add5c) {
            ctx->pc = 0x1ADD88u;
            goto label_1add88;
        }
    }
    ctx->pc = 0x1ADD64u;
    // 0x1add64: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1add64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1add68: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x1add68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x1add6c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1add6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1add70: 0x4a102b  sltu        $v0, $v0, $t2
    ctx->pc = 0x1add70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1add74: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1ADD74u;
    {
        const bool branch_taken_0x1add74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1add74) {
            ctx->pc = 0x1ADDA8u;
            goto label_1adda8;
        }
    }
    ctx->pc = 0x1ADD7Cu;
    // 0x1add7c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1ADD7Cu;
    {
        const bool branch_taken_0x1add7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADD7Cu;
            // 0x1add80: 0x8d620020  lw          $v0, 0x20($t3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1add7c) {
            ctx->pc = 0x1ADDC0u;
            goto label_1addc0;
        }
    }
    ctx->pc = 0x1ADD84u;
    // 0x1add84: 0x0  nop
    ctx->pc = 0x1add84u;
    // NOP
label_1add88:
    // 0x1add88: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1add88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1add8c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1add8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1add90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1add90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1add94: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1add94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1add98: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1add98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1add9c: 0x4a102b  sltu        $v0, $v0, $t2
    ctx->pc = 0x1add9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1adda0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1ADDA0u;
    {
        const bool branch_taken_0x1adda0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adda0) {
            ctx->pc = 0x1ADDA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADDA0u;
            // 0x1adda4: 0x8d620020  lw          $v0, 0x20($t3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ADDC0u;
            goto label_1addc0;
        }
    }
    ctx->pc = 0x1ADDA8u;
label_1adda8:
    // 0x1adda8: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1adda8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1addac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1addacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1addb0: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x1addb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1addb4: 0x34a50f18  ori         $a1, $a1, 0xF18
    ctx->pc = 0x1addb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3864);
    // 0x1addb8: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1ADDB8u;
    ctx->pc = 0x1ADDBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADDB8u;
            // 0x1addbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1ADDC0u;
label_1addc0:
    // 0x1addc0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1ADDC0u;
    {
        const bool branch_taken_0x1addc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1addc0) {
            ctx->pc = 0x1ADE00u;
            goto label_1ade00;
        }
    }
    ctx->pc = 0x1ADDC8u;
    // 0x1addc8: 0x19200018  blez        $t1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1ADDC8u;
    {
        const bool branch_taken_0x1addc8 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x1ADDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADDC8u;
            // 0x1addcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1addc8) {
            ctx->pc = 0x1ADE2Cu;
            goto label_1ade2c;
        }
    }
    ctx->pc = 0x1ADDD0u;
    // 0x1addd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1addd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1addd4: 0x25830030  addiu       $v1, $t4, 0x30
    ctx->pc = 0x1addd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 48));
label_1addd8:
    // 0x1addd8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1addd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1adddc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1adddcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1adde0: 0xa9102a  slt         $v0, $a1, $t1
    ctx->pc = 0x1adde0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1adde4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1adde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1adde8: 0x0  nop
    ctx->pc = 0x1adde8u;
    // NOP
    // 0x1addec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1ADDECu;
    {
        const bool branch_taken_0x1addec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADDF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADDECu;
            // 0x1addf0: 0x8a2021  addu        $a0, $a0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1addec) {
            ctx->pc = 0x1ADDD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1addd8;
        }
    }
    ctx->pc = 0x1ADDF4u;
    // 0x1addf4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1ADDF4u;
    {
        const bool branch_taken_0x1addf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADDF4u;
            // 0x1addf8: 0xad890178  sw          $t1, 0x178($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 376), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1addf4) {
            ctx->pc = 0x1ADE30u;
            goto label_1ade30;
        }
    }
    ctx->pc = 0x1ADDFCu;
    // 0x1addfc: 0x0  nop
    ctx->pc = 0x1addfcu;
    // NOP
label_1ade00:
    // 0x1ade00: 0x5920000b  blezl       $t1, . + 4 + (0xB << 2)
    ctx->pc = 0x1ADE00u;
    {
        const bool branch_taken_0x1ade00 = (GPR_S32(ctx, 9) <= 0);
        if (branch_taken_0x1ade00) {
            ctx->pc = 0x1ADE04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADE00u;
            // 0x1ade04: 0xad890178  sw          $t1, 0x178($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 376), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ADE30u;
            goto label_1ade30;
        }
    }
    ctx->pc = 0x1ADE08u;
    // 0x1ade08: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1ade08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ade0c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1ade0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1ade10:
    // 0x1ade10: 0x0  nop
    ctx->pc = 0x1ade10u;
    // NOP
    // 0x1ade14: 0x0  nop
    ctx->pc = 0x1ade14u;
    // NOP
    // 0x1ade18: 0x0  nop
    ctx->pc = 0x1ade18u;
    // NOP
    // 0x1ade1c: 0x0  nop
    ctx->pc = 0x1ade1cu;
    // NOP
    // 0x1ade20: 0x0  nop
    ctx->pc = 0x1ade20u;
    // NOP
    // 0x1ade24: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1ADE24u;
    {
        const bool branch_taken_0x1ade24 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADE24u;
            // 0x1ade28: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ade24) {
            ctx->pc = 0x1ADE10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ade10;
        }
    }
    ctx->pc = 0x1ADE2Cu;
label_1ade2c:
    // 0x1ade2c: 0xad890178  sw          $t1, 0x178($t4)
    ctx->pc = 0x1ade2cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 376), GPR_U32(ctx, 9));
label_1ade30:
    // 0x1ade30: 0x25850030  addiu       $a1, $t4, 0x30
    ctx->pc = 0x1ade30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 48));
    // 0x1ade34: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x1ade34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ade38: 0xc06bdae  jal         func_1AF6B8
    ctx->pc = 0x1ADE38u;
    SET_GPR_U32(ctx, 31, 0x1ADE40u);
    ctx->pc = 0x1ADE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADE38u;
            // 0x1ade3c: 0x25840180  addiu       $a0, $t4, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6B8u;
    if (runtime->hasFunction(0x1AF6B8u)) {
        auto targetFn = runtime->lookupFunction(0x1AF6B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADE40u; }
        if (ctx->pc != 0x1ADE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF6B8_0x1af6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADE40u; }
        if (ctx->pc != 0x1ADE40u) { return; }
    }
    ctx->pc = 0x1ADE40u;
label_1ade40:
    // 0x1ade40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ade40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ade44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ade44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ade48: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADE48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADE48u;
            // 0x1ade4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ADE50u;
}
