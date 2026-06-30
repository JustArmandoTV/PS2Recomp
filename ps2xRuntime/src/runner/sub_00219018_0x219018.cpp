#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00219018
// Address: 0x219018 - 0x219390
void sub_00219018_0x219018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219018_0x219018");
#endif

    switch (ctx->pc) {
        case 0x219090u: goto label_219090;
        case 0x2190b8u: goto label_2190b8;
        case 0x2190d4u: goto label_2190d4;
        case 0x2190f8u: goto label_2190f8;
        case 0x21911cu: goto label_21911c;
        case 0x219128u: goto label_219128;
        case 0x219140u: goto label_219140;
        case 0x219150u: goto label_219150;
        case 0x219168u: goto label_219168;
        case 0x219180u: goto label_219180;
        case 0x21918cu: goto label_21918c;
        case 0x2191a4u: goto label_2191a4;
        case 0x2191acu: goto label_2191ac;
        case 0x2191bcu: goto label_2191bc;
        case 0x2191d0u: goto label_2191d0;
        case 0x2191d8u: goto label_2191d8;
        case 0x2191e8u: goto label_2191e8;
        case 0x219230u: goto label_219230;
        case 0x2192a8u: goto label_2192a8;
        case 0x219340u: goto label_219340;
        default: break;
    }

    ctx->pc = 0x219018u;

    // 0x219018: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x219018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x21901c: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x21901cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x219020: 0x8c45ca48  lw          $a1, -0x35B8($v0)
    ctx->pc = 0x219020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953544)));
    // 0x219024: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x219024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x219028: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x219028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x21902c: 0x7fb60150  sq          $s6, 0x150($sp)
    ctx->pc = 0x21902cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 22));
    // 0x219030: 0xafa50104  sw          $a1, 0x104($sp)
    ctx->pc = 0x219030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 5));
    // 0x219034: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x219034u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219038: 0xafa30108  sw          $v1, 0x108($sp)
    ctx->pc = 0x219038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 3));
    // 0x21903c: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x21903cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x219040: 0xafa50100  sw          $a1, 0x100($sp)
    ctx->pc = 0x219040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
    // 0x219044: 0x26c3ffff  addiu       $v1, $s6, -0x1
    ctx->pc = 0x219044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x219048: 0x7fbe0130  sq          $fp, 0x130($sp)
    ctx->pc = 0x219048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 30));
    // 0x21904c: 0x8fa40104  lw          $a0, 0x104($sp)
    ctx->pc = 0x21904cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x219050: 0x2c7e0002  sltiu       $fp, $v1, 0x2
    ctx->pc = 0x219050u;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x219054: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x219054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x219058: 0x7fb50160  sq          $s5, 0x160($sp)
    ctx->pc = 0x219058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 21));
    // 0x21905c: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x21905cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x219060: 0x7fb001b0  sq          $s0, 0x1B0($sp)
    ctx->pc = 0x219060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 16));
    // 0x219064: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x219064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x219068: 0x7fb101a0  sq          $s1, 0x1A0($sp)
    ctx->pc = 0x219068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 17));
    // 0x21906c: 0x7fb20190  sq          $s2, 0x190($sp)
    ctx->pc = 0x21906cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 18));
    // 0x219070: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x219070u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219074: 0x7fb30180  sq          $s3, 0x180($sp)
    ctx->pc = 0x219074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 19));
    // 0x219078: 0x7fb40170  sq          $s4, 0x170($sp)
    ctx->pc = 0x219078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 20));
    // 0x21907c: 0x7fb70140  sq          $s7, 0x140($sp)
    ctx->pc = 0x21907cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 23));
    // 0x219080: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x219080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x219084: 0xffa30110  sd          $v1, 0x110($sp)
    ctx->pc = 0x219084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 3));
    // 0x219088: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x219088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x21908c: 0x0  nop
    ctx->pc = 0x21908cu;
    // NOP
label_219090:
    // 0x219090: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x219090u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x219094: 0x2462eae8  addiu       $v0, $v1, -0x1518
    ctx->pc = 0x219094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961896));
    // 0x219098: 0x80a4ca30  lb          $a0, -0x35D0($a1)
    ctx->pc = 0x219098u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294953520)));
    // 0x21909c: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x21909cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x2190a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2190a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2190a4: 0x8c770000  lw          $s7, 0x0($v1)
    ctx->pc = 0x2190a4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2190a8: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x2190a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x2190ac: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2190ACu;
    {
        const bool branch_taken_0x2190ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2190B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2190ACu;
            // 0x2190b0: 0x24a3ca30  addiu       $v1, $a1, -0x35D0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2190ac) {
            ctx->pc = 0x2190D0u;
            goto label_2190d0;
        }
    }
    ctx->pc = 0x2190B4u;
    // 0x2190b4: 0x2404002e  addiu       $a0, $zero, 0x2E
    ctx->pc = 0x2190b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_2190b8:
    // 0x2190b8: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2190b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2190bc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2190BCu;
    {
        const bool branch_taken_0x2190bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2190C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2190BCu;
            // 0x2190c0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2190bc) {
            ctx->pc = 0x2190E4u;
            goto label_2190e4;
        }
    }
    ctx->pc = 0x2190C4u;
    // 0x2190c4: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2190c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2190c8: 0x1444fffb  bne         $v0, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2190C8u;
    {
        const bool branch_taken_0x2190c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2190c8) {
            ctx->pc = 0x2190B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2190b8;
        }
    }
    ctx->pc = 0x2190D0u;
label_2190d0:
    // 0x2190d0: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x2190d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2190d4:
    // 0x2190d4: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2190D4u;
    {
        const bool branch_taken_0x2190d4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2190D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2190D4u;
            // 0x2190d8: 0x3c020064  lui         $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2190d4) {
            ctx->pc = 0x2190ECu;
            goto label_2190ec;
        }
    }
    ctx->pc = 0x2190DCu;
    // 0x2190dc: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x2190DCu;
    {
        const bool branch_taken_0x2190dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2190E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2190DCu;
            // 0x2190e0: 0x3c030064  lui         $v1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2190dc) {
            ctx->pc = 0x219330u;
            goto label_219330;
        }
    }
    ctx->pc = 0x2190E4u;
label_2190e4:
    // 0x2190e4: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x2190E4u;
    {
        const bool branch_taken_0x2190e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2190E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2190E4u;
            // 0x2190e8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2190e4) {
            ctx->pc = 0x2190D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2190d4;
        }
    }
    ctx->pc = 0x2190ECu;
label_2190ec:
    // 0x2190ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2190ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2190f0: 0xc04b1c6  jal         func_12C718
    ctx->pc = 0x2190F0u;
    SET_GPR_U32(ctx, 31, 0x2190F8u);
    ctx->pc = 0x2190F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2190F0u;
            // 0x2190f4: 0x2445e998  addiu       $a1, $v0, -0x1668 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C718u;
    if (runtime->hasFunction(0x12C718u)) {
        auto targetFn = runtime->lookupFunction(0x12C718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2190F8u; }
        if (ctx->pc != 0x2190F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C718_0x12c718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2190F8u; }
        if (ctx->pc != 0x2190F8u) { return; }
    }
    ctx->pc = 0x2190F8u;
label_2190f8:
    // 0x2190f8: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2190F8u;
    {
        const bool branch_taken_0x2190f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2190FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2190F8u;
            // 0x2190fc: 0x26440001  addiu       $a0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2190f8) {
            ctx->pc = 0x2191DCu;
            goto label_2191dc;
        }
    }
    ctx->pc = 0x219100u;
    // 0x219100: 0x13c00036  beqz        $fp, . + 4 + (0x36 << 2)
    ctx->pc = 0x219100u;
    {
        const bool branch_taken_0x219100 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x219104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219100u;
            // 0x219104: 0x3c020064  lui         $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219100) {
            ctx->pc = 0x2191DCu;
            goto label_2191dc;
        }
    }
    ctx->pc = 0x219108u;
    // 0x219108: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x219108u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x21910c: 0x2451e9a0  addiu       $s1, $v0, -0x1660
    ctx->pc = 0x21910cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961568));
    // 0x219110: 0x241300fe  addiu       $s3, $zero, 0xFE
    ctx->pc = 0x219110u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x219114: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x219114u;
    SET_GPR_U32(ctx, 31, 0x21911Cu);
    ctx->pc = 0x219118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219114u;
            // 0x219118: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21911Cu; }
        if (ctx->pc != 0x21911Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21911Cu; }
        if (ctx->pc != 0x21911Cu) { return; }
    }
    ctx->pc = 0x21911Cu;
label_21911c:
    // 0x21911c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21911cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219120: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x219120u;
    SET_GPR_U32(ctx, 31, 0x219128u);
    ctx->pc = 0x219124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219120u;
            // 0x219124: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219128u; }
        if (ctx->pc != 0x219128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219128u; }
        if (ctx->pc != 0x219128u) { return; }
    }
    ctx->pc = 0x219128u;
label_219128:
    // 0x219128: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x219128u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x21912c: 0x202802b  sltu        $s0, $s0, $v0
    ctx->pc = 0x21912cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x219130: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x219130u;
    {
        const bool branch_taken_0x219130 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x219130) {
            ctx->pc = 0x219148u;
            goto label_219148;
        }
    }
    ctx->pc = 0x219138u;
    // 0x219138: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x219138u;
    SET_GPR_U32(ctx, 31, 0x219140u);
    ctx->pc = 0x21913Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219138u;
            // 0x21913c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219140u; }
        if (ctx->pc != 0x219140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219140u; }
        if (ctx->pc != 0x219140u) { return; }
    }
    ctx->pc = 0x219140u;
label_219140:
    // 0x219140: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x219140u;
    {
        const bool branch_taken_0x219140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219140u;
            // 0x219144: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219140) {
            ctx->pc = 0x219158u;
            goto label_219158;
        }
    }
    ctx->pc = 0x219148u;
label_219148:
    // 0x219148: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x219148u;
    SET_GPR_U32(ctx, 31, 0x219150u);
    ctx->pc = 0x21914Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219148u;
            // 0x21914c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219150u; }
        if (ctx->pc != 0x219150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219150u; }
        if (ctx->pc != 0x219150u) { return; }
    }
    ctx->pc = 0x219150u;
label_219150:
    // 0x219150: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x219150u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x219154: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x219154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_219158:
    // 0x219158: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x219158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21915c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x21915cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219160: 0xc04b07c  jal         func_12C1F0
    ctx->pc = 0x219160u;
    SET_GPR_U32(ctx, 31, 0x219168u);
    ctx->pc = 0x219164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219160u;
            // 0x219164: 0x241400fe  addiu       $s4, $zero, 0xFE (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1F0u;
    if (runtime->hasFunction(0x12C1F0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219168u; }
        if (ctx->pc != 0x219168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C1F0_0x12c1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219168u; }
        if (ctx->pc != 0x219168u) { return; }
    }
    ctx->pc = 0x219168u;
label_219168:
    // 0x219168: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x219168u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x21916c: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x21916cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x219170: 0x24a5c1f0  addiu       $a1, $a1, -0x3E10
    ctx->pc = 0x219170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951408));
    // 0x219174: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x219174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219178: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x219178u;
    SET_GPR_U32(ctx, 31, 0x219180u);
    ctx->pc = 0x21917Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219178u;
            // 0x21917c: 0x659821  addu        $s3, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219180u; }
        if (ctx->pc != 0x219180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219180u; }
        if (ctx->pc != 0x219180u) { return; }
    }
    ctx->pc = 0x219180u;
label_219180:
    // 0x219180: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x219180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219184: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x219184u;
    SET_GPR_U32(ctx, 31, 0x21918Cu);
    ctx->pc = 0x219188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219184u;
            // 0x219188: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21918Cu; }
        if (ctx->pc != 0x21918Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21918Cu; }
        if (ctx->pc != 0x21918Cu) { return; }
    }
    ctx->pc = 0x21918Cu;
label_21918c:
    // 0x21918c: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x21918cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x219190: 0x202802b  sltu        $s0, $s0, $v0
    ctx->pc = 0x219190u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x219194: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x219194u;
    {
        const bool branch_taken_0x219194 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x219194) {
            ctx->pc = 0x2191B4u;
            goto label_2191b4;
        }
    }
    ctx->pc = 0x21919Cu;
    // 0x21919c: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x21919Cu;
    SET_GPR_U32(ctx, 31, 0x2191A4u);
    ctx->pc = 0x2191A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21919Cu;
            // 0x2191a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2191A4u; }
        if (ctx->pc != 0x2191A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2191A4u; }
        if (ctx->pc != 0x2191A4u) { return; }
    }
    ctx->pc = 0x2191A4u;
label_2191a4:
    // 0x2191a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2191A4u;
    {
        const bool branch_taken_0x2191a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2191A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2191A4u;
            // 0x2191a8: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2191a4) {
            ctx->pc = 0x2191C4u;
            goto label_2191c4;
        }
    }
    ctx->pc = 0x2191ACu;
label_2191ac:
    // 0x2191ac: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2191ACu;
    {
        const bool branch_taken_0x2191ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2191B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2191ACu;
            // 0x2191b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2191ac) {
            ctx->pc = 0x219200u;
            goto label_219200;
        }
    }
    ctx->pc = 0x2191B4u;
label_2191b4:
    // 0x2191b4: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x2191B4u;
    SET_GPR_U32(ctx, 31, 0x2191BCu);
    ctx->pc = 0x2191B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2191B4u;
            // 0x2191b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2191BCu; }
        if (ctx->pc != 0x2191BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2191BCu; }
        if (ctx->pc != 0x2191BCu) { return; }
    }
    ctx->pc = 0x2191BCu;
label_2191bc:
    // 0x2191bc: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x2191bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2191c0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2191c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2191c4:
    // 0x2191c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2191c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2191c8: 0xc04b07c  jal         func_12C1F0
    ctx->pc = 0x2191C8u;
    SET_GPR_U32(ctx, 31, 0x2191D0u);
    ctx->pc = 0x2191CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2191C8u;
            // 0x2191cc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1F0u;
    if (runtime->hasFunction(0x12C1F0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2191D0u; }
        if (ctx->pc != 0x2191D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C1F0_0x12c1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2191D0u; }
        if (ctx->pc != 0x2191D0u) { return; }
    }
    ctx->pc = 0x2191D0u;
label_2191d0:
    // 0x2191d0: 0xc0a7238  jal         func_29C8E0
    ctx->pc = 0x2191D0u;
    SET_GPR_U32(ctx, 31, 0x2191D8u);
    ctx->pc = 0x2191D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2191D0u;
            // 0x2191d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C8E0u;
    if (runtime->hasFunction(0x29C8E0u)) {
        auto targetFn = runtime->lookupFunction(0x29C8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2191D8u; }
        if (ctx->pc != 0x2191D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C8E0_0x29c8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2191D8u; }
        if (ctx->pc != 0x2191D8u) { return; }
    }
    ctx->pc = 0x2191D8u;
label_2191d8:
    // 0x2191d8: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x2191d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2191dc:
    // 0x2191dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2191DCu;
    {
        const bool branch_taken_0x2191dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2191E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2191DCu;
            // 0x2191e0: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2191dc) {
            ctx->pc = 0x2191F0u;
            goto label_2191f0;
        }
    }
    ctx->pc = 0x2191E4u;
    // 0x2191e4: 0x0  nop
    ctx->pc = 0x2191e4u;
    // NOP
label_2191e8:
    // 0x2191e8: 0x1060fff0  beqz        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2191E8u;
    {
        const bool branch_taken_0x2191e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2191ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2191E8u;
            // 0x2191ec: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2191e8) {
            ctx->pc = 0x2191ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2191ac;
        }
    }
    ctx->pc = 0x2191F0u;
label_2191f0:
    // 0x2191f0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x2191f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2191f4: 0x0  nop
    ctx->pc = 0x2191f4u;
    // NOP
    // 0x2191f8: 0x1445fffb  bne         $v0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2191F8u;
    {
        const bool branch_taken_0x2191f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2191FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2191F8u;
            // 0x2191fc: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2191f8) {
            ctx->pc = 0x2191E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2191e8;
        }
    }
    ctx->pc = 0x219200u;
label_219200:
    // 0x219200: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x219200u;
    {
        const bool branch_taken_0x219200 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x219204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219200u;
            // 0x219204: 0x8fa30100  lw          $v1, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219200) {
            ctx->pc = 0x219214u;
            goto label_219214;
        }
    }
    ctx->pc = 0x219208u;
    // 0x219208: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x219208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x21920c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x21920Cu;
    {
        const bool branch_taken_0x21920c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21920Cu;
            // 0x219210: 0x2444e918  addiu       $a0, $v0, -0x16E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21920c) {
            ctx->pc = 0x219338u;
            goto label_219338;
        }
    }
    ctx->pc = 0x219214u;
label_219214:
    // 0x219214: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x219214u;
    {
        const bool branch_taken_0x219214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x219218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219214u;
            // 0x219218: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219214) {
            ctx->pc = 0x219290u;
            goto label_219290;
        }
    }
    ctx->pc = 0x21921Cu;
    // 0x21921c: 0xdfa40110  ld          $a0, 0x110($sp)
    ctx->pc = 0x21921cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x219220: 0x17103c  dsll32      $v0, $s7, 0
    ctx->pc = 0x219220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) << (32 + 0));
    // 0x219224: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x219224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x219228: 0xc086908  jal         func_21A420
    ctx->pc = 0x219228u;
    SET_GPR_U32(ctx, 31, 0x219230u);
    ctx->pc = 0x21922Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219228u;
            // 0x21922c: 0x2803e  dsrl32      $s0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A420u;
    if (runtime->hasFunction(0x21A420u)) {
        auto targetFn = runtime->lookupFunction(0x21A420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219230u; }
        if (ctx->pc != 0x219230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A420_0x21a420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219230u; }
        if (ctx->pc != 0x219230u) { return; }
    }
    ctx->pc = 0x219230u;
label_219230:
    // 0x219230: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x219230u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219234: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x219234u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x219238: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x219238u;
    {
        const bool branch_taken_0x219238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21923Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219238u;
            // 0x21923c: 0x203182f  dsubu       $v1, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) - GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219238) {
            ctx->pc = 0x21931Cu;
            goto label_21931c;
        }
    }
    ctx->pc = 0x219240u;
    // 0x219240: 0x3c020209  lui         $v0, 0x209
    ctx->pc = 0x219240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)521 << 16));
    // 0x219244: 0x3442a5ac  ori         $v0, $v0, 0xA5AC
    ctx->pc = 0x219244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42412);
    // 0x219248: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x219248u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x21924c: 0x54400034  bnel        $v0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x21924Cu;
    {
        const bool branch_taken_0x21924c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21924c) {
            ctx->pc = 0x219250u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21924Cu;
            // 0x219250: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x219320u;
            goto label_219320;
        }
    }
    ctx->pc = 0x219254u;
    // 0x219254: 0x13c00006  beqz        $fp, . + 4 + (0x6 << 2)
    ctx->pc = 0x219254u;
    {
        const bool branch_taken_0x219254 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x219258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219254u;
            // 0x219258: 0x26a2fffa  addiu       $v0, $s5, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219254) {
            ctx->pc = 0x219270u;
            goto label_219270;
        }
    }
    ctx->pc = 0x21925Cu;
    // 0x21925c: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x21925cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x219260: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x219260u;
    {
        const bool branch_taken_0x219260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219260u;
            // 0x219264: 0x3c050064  lui         $a1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219260) {
            ctx->pc = 0x219270u;
            goto label_219270;
        }
    }
    ctx->pc = 0x219268u;
    // 0x219268: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x219268u;
    {
        const bool branch_taken_0x219268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21926Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219268u;
            // 0x21926c: 0x24a4e9e0  addiu       $a0, $a1, -0x1620 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219268) {
            ctx->pc = 0x219338u;
            goto label_219338;
        }
    }
    ctx->pc = 0x219270u;
label_219270:
    // 0x219270: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x219270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x219274: 0x12c20027  beq         $s6, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x219274u;
    {
        const bool branch_taken_0x219274 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x219278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219274u;
            // 0x219278: 0x2aa2000a  slti        $v0, $s5, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x219274) {
            ctx->pc = 0x219314u;
            goto label_219314;
        }
    }
    ctx->pc = 0x21927Cu;
    // 0x21927c: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x21927Cu;
    {
        const bool branch_taken_0x21927c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21927Cu;
            // 0x219280: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21927c) {
            ctx->pc = 0x219344u;
            goto label_219344;
        }
    }
    ctx->pc = 0x219284u;
    // 0x219284: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x219284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x219288: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x219288u;
    {
        const bool branch_taken_0x219288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21928Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219288u;
            // 0x21928c: 0x2464ea68  addiu       $a0, $v1, -0x1598 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219288) {
            ctx->pc = 0x219338u;
            goto label_219338;
        }
    }
    ctx->pc = 0x219290u;
label_219290:
    // 0x219290: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x219290u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x219294: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x219294u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219298: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x219298u;
    {
        const bool branch_taken_0x219298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21929Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219298u;
            // 0x21929c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219298) {
            ctx->pc = 0x2192C0u;
            goto label_2192c0;
        }
    }
    ctx->pc = 0x2192A0u;
    // 0x2192a0: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x2192a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2192a4: 0x0  nop
    ctx->pc = 0x2192a4u;
    // NOP
label_2192a8:
    // 0x2192a8: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x2192a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2192ac: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x2192acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2192b0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2192b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2192b4: 0x0  nop
    ctx->pc = 0x2192b4u;
    // NOP
    // 0x2192b8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2192B8u;
    {
        const bool branch_taken_0x2192b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2192BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2192B8u;
            // 0x2192bc: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2192b8) {
            ctx->pc = 0x2192A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2192a8;
        }
    }
    ctx->pc = 0x2192C0u;
label_2192c0:
    // 0x2192c0: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2192c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2192c4: 0x771826  xor         $v1, $v1, $s7
    ctx->pc = 0x2192c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 23));
    // 0x2192c8: 0x8fa50104  lw          $a1, 0x104($sp)
    ctx->pc = 0x2192c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x2192cc: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x2192ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2192d0: 0x54a20013  bnel        $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2192D0u;
    {
        const bool branch_taken_0x2192d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2192d0) {
            ctx->pc = 0x2192D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2192D0u;
            // 0x2192d4: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x219320u;
            goto label_219320;
        }
    }
    ctx->pc = 0x2192D8u;
    // 0x2192d8: 0x13c00006  beqz        $fp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2192D8u;
    {
        const bool branch_taken_0x2192d8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2192DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2192D8u;
            // 0x2192dc: 0x26a2fffa  addiu       $v0, $s5, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2192d8) {
            ctx->pc = 0x2192F4u;
            goto label_2192f4;
        }
    }
    ctx->pc = 0x2192E0u;
    // 0x2192e0: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x2192e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2192e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2192E4u;
    {
        const bool branch_taken_0x2192e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2192E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2192E4u;
            // 0x2192e8: 0x3c020064  lui         $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2192e4) {
            ctx->pc = 0x2192F4u;
            goto label_2192f4;
        }
    }
    ctx->pc = 0x2192ECu;
    // 0x2192ec: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2192ECu;
    {
        const bool branch_taken_0x2192ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2192F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2192ECu;
            // 0x2192f0: 0x2444e9e0  addiu       $a0, $v0, -0x1620 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2192ec) {
            ctx->pc = 0x219338u;
            goto label_219338;
        }
    }
    ctx->pc = 0x2192F4u;
label_2192f4:
    // 0x2192f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2192f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2192f8: 0x12c30006  beq         $s6, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2192F8u;
    {
        const bool branch_taken_0x2192f8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 3));
        ctx->pc = 0x2192FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2192F8u;
            // 0x2192fc: 0x2aa2000a  slti        $v0, $s5, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2192f8) {
            ctx->pc = 0x219314u;
            goto label_219314;
        }
    }
    ctx->pc = 0x219300u;
    // 0x219300: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x219300u;
    {
        const bool branch_taken_0x219300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219300u;
            // 0x219304: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219300) {
            ctx->pc = 0x219344u;
            goto label_219344;
        }
    }
    ctx->pc = 0x219308u;
    // 0x219308: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x219308u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x21930c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x21930Cu;
    {
        const bool branch_taken_0x21930c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21930Cu;
            // 0x219310: 0x24a4ea68  addiu       $a0, $a1, -0x1598 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21930c) {
            ctx->pc = 0x219338u;
            goto label_219338;
        }
    }
    ctx->pc = 0x219314u;
label_219314:
    // 0x219314: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x219314u;
    {
        const bool branch_taken_0x219314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219314u;
            // 0x219318: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219314) {
            ctx->pc = 0x219344u;
            goto label_219344;
        }
    }
    ctx->pc = 0x21931Cu;
label_21931c:
    // 0x21931c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x21931cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_219320:
    // 0x219320: 0x2aa2000c  slti        $v0, $s5, 0xC
    ctx->pc = 0x219320u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x219324: 0x1440ff5a  bnez        $v0, . + 4 + (-0xA6 << 2)
    ctx->pc = 0x219324u;
    {
        const bool branch_taken_0x219324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219324u;
            // 0x219328: 0x3c030064  lui         $v1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219324) {
            ctx->pc = 0x219090u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_219090;
        }
    }
    ctx->pc = 0x21932Cu;
    // 0x21932c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x21932cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_219330:
    // 0x219330: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x219330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x219334: 0x2484e918  addiu       $a0, $a0, -0x16E8
    ctx->pc = 0x219334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961432));
label_219338:
    // 0x219338: 0xc0a7238  jal         func_29C8E0
    ctx->pc = 0x219338u;
    SET_GPR_U32(ctx, 31, 0x219340u);
    ctx->pc = 0x29C8E0u;
    if (runtime->hasFunction(0x29C8E0u)) {
        auto targetFn = runtime->lookupFunction(0x29C8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219340u; }
        if (ctx->pc != 0x219340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C8E0_0x29c8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219340u; }
        if (ctx->pc != 0x219340u) { return; }
    }
    ctx->pc = 0x219340u;
label_219340:
    // 0x219340: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x219340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219344:
    // 0x219344: 0x7bb001b0  lq          $s0, 0x1B0($sp)
    ctx->pc = 0x219344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x219348: 0x7bb101a0  lq          $s1, 0x1A0($sp)
    ctx->pc = 0x219348u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x21934c: 0x7bb20190  lq          $s2, 0x190($sp)
    ctx->pc = 0x21934cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x219350: 0x7bb30180  lq          $s3, 0x180($sp)
    ctx->pc = 0x219350u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x219354: 0x7bb40170  lq          $s4, 0x170($sp)
    ctx->pc = 0x219354u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x219358: 0x7bb50160  lq          $s5, 0x160($sp)
    ctx->pc = 0x219358u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x21935c: 0x7bb60150  lq          $s6, 0x150($sp)
    ctx->pc = 0x21935cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x219360: 0x7bb70140  lq          $s7, 0x140($sp)
    ctx->pc = 0x219360u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x219364: 0x7bbe0130  lq          $fp, 0x130($sp)
    ctx->pc = 0x219364u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x219368: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x219368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x21936c: 0x3e00008  jr          $ra
    ctx->pc = 0x21936Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21936Cu;
            // 0x219370: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x219374u;
    // 0x219374: 0x0  nop
    ctx->pc = 0x219374u;
    // NOP
    // 0x219378: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x219378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x21937c: 0x8c62e7b0  lw          $v0, -0x1850($v1)
    ctx->pc = 0x21937cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961072)));
    // 0x219380: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x219380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x219384: 0x3e00008  jr          $ra
    ctx->pc = 0x219384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219384u;
            // 0x219388: 0xac62e7b0  sw          $v0, -0x1850($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21938Cu;
    // 0x21938c: 0x0  nop
    ctx->pc = 0x21938cu;
    // NOP
}
