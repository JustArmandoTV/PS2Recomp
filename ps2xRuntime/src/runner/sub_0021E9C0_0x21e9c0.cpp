#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021E9C0
// Address: 0x21e9c0 - 0x21ebb0
void sub_0021E9C0_0x21e9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E9C0_0x21e9c0");
#endif

    switch (ctx->pc) {
        case 0x21ea64u: goto label_21ea64;
        case 0x21ea98u: goto label_21ea98;
        case 0x21eab4u: goto label_21eab4;
        case 0x21eb60u: goto label_21eb60;
        default: break;
    }

    ctx->pc = 0x21e9c0u;

    // 0x21e9c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x21e9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x21e9c4: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x21e9c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x21e9c8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x21e9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x21e9cc: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x21e9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x21e9d0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x21e9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x21e9d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21e9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21e9d8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x21e9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x21e9dc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x21e9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x21e9e0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x21e9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x21e9e4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x21e9e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e9e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21e9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x21e9ec: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x21e9ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e9f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21e9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21e9f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21e9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21e9f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21e9f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e9fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21e9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21ea00: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21ea00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ea04: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x21ea04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x21ea08: 0x8c960028  lw          $s6, 0x28($a0)
    ctx->pc = 0x21ea08u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x21ea0c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x21ea0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x21ea10: 0x90b30000  lbu         $s3, 0x0($a1)
    ctx->pc = 0x21ea10u;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21ea14: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x21ea14u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x21ea18: 0x96c30004  lhu         $v1, 0x4($s6)
    ctx->pc = 0x21ea18u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x21ea1c: 0x8c970028  lw          $s7, 0x28($a0)
    ctx->pc = 0x21ea1cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x21ea20: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21EA20u;
    {
        const bool branch_taken_0x21ea20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21EA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EA20u;
            // 0x21ea24: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ea20) {
            ctx->pc = 0x21EA34u;
            goto label_21ea34;
        }
    }
    ctx->pc = 0x21EA28u;
    // 0x21ea28: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21ea28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21ea2c: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x21ea2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x21ea30: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x21ea30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21ea34:
    // 0x21ea34: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x21ea34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x21ea38: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21EA38u;
    {
        const bool branch_taken_0x21ea38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ea38) {
            ctx->pc = 0x21EA3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21EA38u;
            // 0x21ea3c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21EA50u;
            goto label_21ea50;
        }
    }
    ctx->pc = 0x21EA40u;
    // 0x21ea40: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x21ea40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x21ea44: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21ea44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21ea48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21EA48u;
    {
        const bool branch_taken_0x21ea48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EA48u;
            // 0x21ea4c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ea48) {
            ctx->pc = 0x21EA58u;
            goto label_21ea58;
        }
    }
    ctx->pc = 0x21EA50u;
label_21ea50:
    // 0x21ea50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21ea50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21ea54: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x21ea54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_21ea58:
    // 0x21ea58: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x21ea58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ea5c: 0xc08746c  jal         func_21D1B0
    ctx->pc = 0x21EA5Cu;
    SET_GPR_U32(ctx, 31, 0x21EA64u);
    ctx->pc = 0x21EA60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EA5Cu;
            // 0x21ea60: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D1B0u;
    if (runtime->hasFunction(0x21D1B0u)) {
        auto targetFn = runtime->lookupFunction(0x21D1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EA64u; }
        if (ctx->pc != 0x21EA64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D1B0_0x21d1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EA64u; }
        if (ctx->pc != 0x21EA64u) { return; }
    }
    ctx->pc = 0x21EA64u;
label_21ea64:
    // 0x21ea64: 0x96c30006  lhu         $v1, 0x6($s6)
    ctx->pc = 0x21ea64u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x21ea68: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x21ea68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x21ea6c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x21ea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x21ea70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21ea70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21ea74: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x21ea74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x21ea78: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x21ea78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x21ea7c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x21ea7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21ea80: 0x9062003f  lbu         $v0, 0x3F($v1)
    ctx->pc = 0x21ea80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 63)));
    // 0x21ea84: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x21ea84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
    // 0x21ea88: 0xa062003f  sb          $v0, 0x3F($v1)
    ctx->pc = 0x21ea88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 63), (uint8_t)GPR_U32(ctx, 2));
    // 0x21ea8c: 0x8ea40028  lw          $a0, 0x28($s5)
    ctx->pc = 0x21ea8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x21ea90: 0xc0874a8  jal         func_21D2A0
    ctx->pc = 0x21EA90u;
    SET_GPR_U32(ctx, 31, 0x21EA98u);
    ctx->pc = 0x21EA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EA90u;
            // 0x21ea94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D2A0u;
    if (runtime->hasFunction(0x21D2A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EA98u; }
        if (ctx->pc != 0x21EA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D2A0_0x21d2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EA98u; }
        if (ctx->pc != 0x21EA98u) { return; }
    }
    ctx->pc = 0x21EA98u;
label_21ea98:
    // 0x21ea98: 0xaea20028  sw          $v0, 0x28($s5)
    ctx->pc = 0x21ea98u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 2));
    // 0x21ea9c: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x21ea9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x21eaa0: 0x2466ffff  addiu       $a2, $v1, -0x1
    ctx->pc = 0x21eaa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x21eaa4: 0x4c00010  bltz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x21EAA4u;
    {
        const bool branch_taken_0x21eaa4 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x21EAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EAA4u;
            // 0x21eaa8: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eaa4) {
            ctx->pc = 0x21EAE8u;
            goto label_21eae8;
        }
    }
    ctx->pc = 0x21EAACu;
    // 0x21eaac: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x21eaacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x21eab0: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x21eab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_21eab4:
    // 0x21eab4: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x21eab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x21eab8: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x21eab8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21eabc: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21EABCu;
    {
        const bool branch_taken_0x21eabc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x21eabc) {
            ctx->pc = 0x21EAD8u;
            goto label_21ead8;
        }
    }
    ctx->pc = 0x21EAC4u;
    // 0x21eac4: 0x263082a  slt         $at, $s3, $v1
    ctx->pc = 0x21eac4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x21eac8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x21EAC8u;
    {
        const bool branch_taken_0x21eac8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21eac8) {
            ctx->pc = 0x21EAD8u;
            goto label_21ead8;
        }
    }
    ctx->pc = 0x21EAD0u;
    // 0x21ead0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x21ead0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x21ead4: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x21ead4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_21ead8:
    // 0x21ead8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x21ead8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x21eadc: 0x4c3fff5  bgezl       $a2, . + 4 + (-0xB << 2)
    ctx->pc = 0x21EADCu;
    {
        const bool branch_taken_0x21eadc = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x21eadc) {
            ctx->pc = 0x21EAE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21EADCu;
            // 0x21eae0: 0x8ea3000c  lw          $v1, 0xC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21EAB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21eab4;
        }
    }
    ctx->pc = 0x21EAE4u;
    // 0x21eae4: 0x0  nop
    ctx->pc = 0x21eae4u;
    // NOP
label_21eae8:
    // 0x21eae8: 0x8ea40024  lw          $a0, 0x24($s5)
    ctx->pc = 0x21eae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x21eaec: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x21eaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x21eaf0: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x21EAF0u;
    {
        const bool branch_taken_0x21eaf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21eaf0) {
            ctx->pc = 0x21EAF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21EAF0u;
            // 0x21eaf4: 0x8ea60028  lw          $a2, 0x28($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21EB48u;
            goto label_21eb48;
        }
    }
    ctx->pc = 0x21EAF8u;
    // 0x21eaf8: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x21eaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x21eafc: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x21eafcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x21eb00: 0xae83000c  sw          $v1, 0xC($s4)
    ctx->pc = 0x21eb00u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 3));
    // 0x21eb04: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x21eb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x21eb08: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x21eb08u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x21eb0c: 0xae830010  sw          $v1, 0x10($s4)
    ctx->pc = 0x21eb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 3));
    // 0x21eb10: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x21eb10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x21eb14: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x21eb14u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x21eb18: 0xae830014  sw          $v1, 0x14($s4)
    ctx->pc = 0x21eb18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 3));
    // 0x21eb1c: 0x8c860028  lw          $a2, 0x28($a0)
    ctx->pc = 0x21eb1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x21eb20: 0x94c30016  lhu         $v1, 0x16($a2)
    ctx->pc = 0x21eb20u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 22)));
    // 0x21eb24: 0x94c50018  lhu         $a1, 0x18($a2)
    ctx->pc = 0x21eb24u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x21eb28: 0x94c40014  lhu         $a0, 0x14($a2)
    ctx->pc = 0x21eb28u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x21eb2c: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x21eb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x21eb30: 0xb22823  subu        $a1, $a1, $s2
    ctx->pc = 0x21eb30u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x21eb34: 0xa4c30016  sh          $v1, 0x16($a2)
    ctx->pc = 0x21eb34u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x21eb38: 0x902023  subu        $a0, $a0, $s0
    ctx->pc = 0x21eb38u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x21eb3c: 0xa4c50018  sh          $a1, 0x18($a2)
    ctx->pc = 0x21eb3cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 24), (uint16_t)GPR_U32(ctx, 5));
    // 0x21eb40: 0xa4c40014  sh          $a0, 0x14($a2)
    ctx->pc = 0x21eb40u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x21eb44: 0x8ea60028  lw          $a2, 0x28($s5)
    ctx->pc = 0x21eb44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_21eb48:
    // 0x21eb48: 0x52e60009  beql        $s7, $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x21EB48u;
    {
        const bool branch_taken_0x21eb48 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 6));
        if (branch_taken_0x21eb48) {
            ctx->pc = 0x21EB4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21EB48u;
            // 0x21eb4c: 0x96c30010  lhu         $v1, 0x10($s6) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21EB70u;
            goto label_21eb70;
        }
    }
    ctx->pc = 0x21EB50u;
    // 0x21eb50: 0x94c70002  lhu         $a3, 0x2($a2)
    ctx->pc = 0x21eb50u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x21eb54: 0x8ea40024  lw          $a0, 0x24($s5)
    ctx->pc = 0x21eb54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x21eb58: 0xc08ecb8  jal         func_23B2E0
    ctx->pc = 0x21EB58u;
    SET_GPR_U32(ctx, 31, 0x21EB60u);
    ctx->pc = 0x21EB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EB58u;
            // 0x21eb5c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B2E0u;
    if (runtime->hasFunction(0x23B2E0u)) {
        auto targetFn = runtime->lookupFunction(0x23B2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EB60u; }
        if (ctx->pc != 0x21EB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023B2E0_0x23b2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EB60u; }
        if (ctx->pc != 0x21EB60u) { return; }
    }
    ctx->pc = 0x21EB60u;
label_21eb60:
    // 0x21eb60: 0x8ea30028  lw          $v1, 0x28($s5)
    ctx->pc = 0x21eb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x21eb64: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x21eb64u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x21eb68: 0xaea3002c  sw          $v1, 0x2C($s5)
    ctx->pc = 0x21eb68u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 3));
    // 0x21eb6c: 0x96c30010  lhu         $v1, 0x10($s6)
    ctx->pc = 0x21eb6cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 16)));
label_21eb70:
    // 0x21eb70: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x21eb70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x21eb74: 0xa6c30010  sh          $v1, 0x10($s6)
    ctx->pc = 0x21eb74u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x21eb78: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x21eb78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21eb7c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x21eb7cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21eb80: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x21eb80u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21eb84: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x21eb84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21eb88: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x21eb88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21eb8c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21eb8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21eb90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21eb90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21eb94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21eb94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21eb98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21eb98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21eb9c: 0x3e00008  jr          $ra
    ctx->pc = 0x21EB9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EBA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EB9Cu;
            // 0x21eba0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21EBA4u;
    // 0x21eba4: 0x0  nop
    ctx->pc = 0x21eba4u;
    // NOP
    // 0x21eba8: 0x0  nop
    ctx->pc = 0x21eba8u;
    // NOP
    // 0x21ebac: 0x0  nop
    ctx->pc = 0x21ebacu;
    // NOP
}
