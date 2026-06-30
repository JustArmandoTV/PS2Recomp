#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015AD50
// Address: 0x15ad50 - 0x15aee0
void sub_0015AD50_0x15ad50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015AD50_0x15ad50");
#endif

    switch (ctx->pc) {
        case 0x15adc8u: goto label_15adc8;
        case 0x15ade8u: goto label_15ade8;
        case 0x15ae64u: goto label_15ae64;
        case 0x15ae70u: goto label_15ae70;
        case 0x15aea0u: goto label_15aea0;
        default: break;
    }

    ctx->pc = 0x15ad50u;

    // 0x15ad50: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x15ad50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x15ad54: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x15ad54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x15ad58: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15ad58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x15ad5c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15ad5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15ad60: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x15ad60u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ad64: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15ad64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15ad68: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x15ad68u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ad6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15ad6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15ad70: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x15ad70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ad74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15ad74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15ad78: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x15ad78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ad7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15ad7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15ad80: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AD80u;
    {
        const bool branch_taken_0x15ad80 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x15AD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AD80u;
            // 0x15ad84: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ad80) {
            ctx->pc = 0x15AD90u;
            goto label_15ad90;
        }
    }
    ctx->pc = 0x15AD88u;
    // 0x15ad88: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x15AD88u;
    {
        const bool branch_taken_0x15ad88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AD88u;
            // 0x15ad8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ad88) {
            ctx->pc = 0x15AEB8u;
            goto label_15aeb8;
        }
    }
    ctx->pc = 0x15AD90u;
label_15ad90:
    // 0x15ad90: 0x2d48021  addu        $s0, $s6, $s4
    ctx->pc = 0x15ad90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x15ad94: 0x32710003  andi        $s1, $s3, 0x3
    ctx->pc = 0x15ad94u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
    // 0x15ad98: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x15ad98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x15ad9c: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x15ad9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15ada0: 0x102082b  sltu        $at, $t0, $v0
    ctx->pc = 0x15ada0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15ada4: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15ADA4u;
    {
        const bool branch_taken_0x15ada4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ada4) {
            ctx->pc = 0x15ADA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15ADA4u;
            // 0x15ada8: 0x24e3007f  addiu       $v1, $a3, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 127));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15ADB4u;
            goto label_15adb4;
        }
    }
    ctx->pc = 0x15ADACu;
    // 0x15adac: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x15ADACu;
    {
        const bool branch_taken_0x15adac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ADB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15ADACu;
            // 0x15adb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15adac) {
            ctx->pc = 0x15AEB8u;
            goto label_15aeb8;
        }
    }
    ctx->pc = 0x15ADB4u;
label_15adb4:
    // 0x15adb4: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x15adb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x15adb8: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x15adb8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15adbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15adbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15adc0: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x15ADC0u;
    SET_GPR_U32(ctx, 31, 0x15ADC8u);
    ctx->pc = 0x15ADC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15ADC0u;
            // 0x15adc4: 0x240600a0  addiu       $a2, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ADC8u; }
        if (ctx->pc != 0x15ADC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ADC8u; }
        if (ctx->pc != 0x15ADC8u) { return; }
    }
    ctx->pc = 0x15ADC8u;
label_15adc8:
    // 0x15adc8: 0xaeb30000  sw          $s3, 0x0($s5)
    ctx->pc = 0x15adc8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 19));
    // 0x15adcc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15adccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15add0: 0xa6a00004  sh          $zero, 0x4($s5)
    ctx->pc = 0x15add0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x15add4: 0x26a70020  addiu       $a3, $s5, 0x20
    ctx->pc = 0x15add4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x15add8: 0xa6a50006  sh          $a1, 0x6($s5)
    ctx->pc = 0x15add8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 6), (uint16_t)GPR_U32(ctx, 5));
    // 0x15addc: 0x1a20001c  blez        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x15ADDCu;
    {
        const bool branch_taken_0x15addc = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x15ADE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15ADDCu;
            // 0x15ade0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15addc) {
            ctx->pc = 0x15AE50u;
            goto label_15ae50;
        }
    }
    ctx->pc = 0x15ADE4u;
    // 0x15ade4: 0x162102  srl         $a0, $s6, 4
    ctx->pc = 0x15ade4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 22), 4));
label_15ade8:
    // 0x15ade8: 0xace40018  sw          $a0, 0x18($a3)
    ctx->pc = 0x15ade8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 4));
    // 0x15adec: 0xacf20000  sw          $s2, 0x0($a3)
    ctx->pc = 0x15adecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 18));
    // 0x15adf0: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x15ADF0u;
    {
        const bool branch_taken_0x15adf0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ADF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15ADF0u;
            // 0x15adf4: 0xacf20004  sw          $s2, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15adf0) {
            ctx->pc = 0x15AE10u;
            goto label_15ae10;
        }
    }
    ctx->pc = 0x15ADF8u;
    // 0x15adf8: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x15adf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x15adfc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x15adfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x15ae00: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15ae00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15ae04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15ae04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15ae08: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x15ae08u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x15ae0c: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x15ae0cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_15ae10:
    // 0x15ae10: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x15AE10u;
    {
        const bool branch_taken_0x15ae10 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AE10u;
            // 0x15ae14: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae10) {
            ctx->pc = 0x15AE38u;
            goto label_15ae38;
        }
    }
    ctx->pc = 0x15AE18u;
    // 0x15ae18: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x15ae18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x15ae1c: 0x2421823  subu        $v1, $s2, $v0
    ctx->pc = 0x15ae1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x15ae20: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AE20u;
    {
        const bool branch_taken_0x15ae20 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x15AE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AE20u;
            // 0x15ae24: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae20) {
            ctx->pc = 0x15AE30u;
            goto label_15ae30;
        }
    }
    ctx->pc = 0x15AE28u;
    // 0x15ae28: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x15ae28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x15ae2c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x15ae2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_15ae30:
    // 0x15ae30: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x15ae30u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
    // 0x15ae34: 0x0  nop
    ctx->pc = 0x15ae34u;
    // NOP
label_15ae38:
    // 0x15ae38: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15ae38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15ae3c: 0xace5002c  sw          $a1, 0x2C($a3)
    ctx->pc = 0x15ae3cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 5));
    // 0x15ae40: 0xd1102a  slt         $v0, $a2, $s1
    ctx->pc = 0x15ae40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x15ae44: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x15AE44u;
    {
        const bool branch_taken_0x15ae44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15AE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AE44u;
            // 0x15ae48: 0x24e70040  addiu       $a3, $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae44) {
            ctx->pc = 0x15ADE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15ade8;
        }
    }
    ctx->pc = 0x15AE4Cu;
    // 0x15ae4c: 0x0  nop
    ctx->pc = 0x15ae4cu;
    // NOP
label_15ae50:
    // 0x15ae50: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x15ae50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x15ae54: 0x26b00020  addiu       $s0, $s5, 0x20
    ctx->pc = 0x15ae54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x15ae58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15ae58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ae5c: 0xc056cf0  jal         func_15B3C0
    ctx->pc = 0x15AE5Cu;
    SET_GPR_U32(ctx, 31, 0x15AE64u);
    ctx->pc = 0x15AE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AE5Cu;
            // 0x15ae60: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B3C0u;
    if (runtime->hasFunction(0x15B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x15B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AE64u; }
        if (ctx->pc != 0x15AE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B3C0_0x15b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AE64u; }
        if (ctx->pc != 0x15AE64u) { return; }
    }
    ctx->pc = 0x15AE64u;
label_15ae64:
    // 0x15ae64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15ae64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ae68: 0xc056bb8  jal         func_15AEE0
    ctx->pc = 0x15AE68u;
    SET_GPR_U32(ctx, 31, 0x15AE70u);
    ctx->pc = 0x15AE6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AE68u;
            // 0x15ae6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AEE0u;
    if (runtime->hasFunction(0x15AEE0u)) {
        auto targetFn = runtime->lookupFunction(0x15AEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AE70u; }
        if (ctx->pc != 0x15AE70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AEE0_0x15aee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AE70u; }
        if (ctx->pc != 0x15AE70u) { return; }
    }
    ctx->pc = 0x15AE70u;
label_15ae70:
    // 0x15ae70: 0x2a210002  slti        $at, $s1, 0x2
    ctx->pc = 0x15ae70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15ae74: 0x54200010  bnel        $at, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x15AE74u;
    {
        const bool branch_taken_0x15ae74 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ae74) {
            ctx->pc = 0x15AE78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15AE74u;
            // 0x15ae78: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15AEB8u;
            goto label_15aeb8;
        }
    }
    ctx->pc = 0x15AE7Cu;
    // 0x15ae7c: 0x32620200  andi        $v0, $s3, 0x200
    ctx->pc = 0x15ae7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
    // 0x15ae80: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x15AE80u;
    {
        const bool branch_taken_0x15ae80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AE80u;
            // 0x15ae84: 0x26b00060  addiu       $s0, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae80) {
            ctx->pc = 0x15AEB4u;
            goto label_15aeb4;
        }
    }
    ctx->pc = 0x15AE88u;
    // 0x15ae88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15ae88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ae8c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15ae8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ae90: 0xa6a20004  sh          $v0, 0x4($s5)
    ctx->pc = 0x15ae90u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x15ae94: 0x24050061  addiu       $a1, $zero, 0x61
    ctx->pc = 0x15ae94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x15ae98: 0xc056e0c  jal         func_15B830
    ctx->pc = 0x15AE98u;
    SET_GPR_U32(ctx, 31, 0x15AEA0u);
    ctx->pc = 0x15AE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AE98u;
            // 0x15ae9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B830u;
    if (runtime->hasFunction(0x15B830u)) {
        auto targetFn = runtime->lookupFunction(0x15B830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AEA0u; }
        if (ctx->pc != 0x15AEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B830_0x15b830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AEA0u; }
        if (ctx->pc != 0x15AEA0u) { return; }
    }
    ctx->pc = 0x15AEA0u;
label_15aea0:
    // 0x15aea0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15aea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15aea4: 0x24027000  addiu       $v0, $zero, 0x7000
    ctx->pc = 0x15aea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x15aea8: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x15aea8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x15aeac: 0xa4620002  sh          $v0, 0x2($v1)
    ctx->pc = 0x15aeacu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x15aeb0: 0xa6a00004  sh          $zero, 0x4($s5)
    ctx->pc = 0x15aeb0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 4), (uint16_t)GPR_U32(ctx, 0));
label_15aeb4:
    // 0x15aeb4: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x15aeb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15aeb8:
    // 0x15aeb8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x15aeb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15aebc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15aebcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15aec0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15aec0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15aec4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15aec4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15aec8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15aec8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15aecc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15aeccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15aed0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15aed0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15aed4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15aed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15aed8: 0x3e00008  jr          $ra
    ctx->pc = 0x15AED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15AEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AED8u;
            // 0x15aedc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15AEE0u;
}
