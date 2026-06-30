#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00498040
// Address: 0x498040 - 0x498190
void sub_00498040_0x498040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00498040_0x498040");
#endif

    switch (ctx->pc) {
        case 0x498074u: goto label_498074;
        case 0x49808cu: goto label_49808c;
        case 0x4980a0u: goto label_4980a0;
        case 0x4980c8u: goto label_4980c8;
        case 0x4980d4u: goto label_4980d4;
        case 0x498114u: goto label_498114;
        case 0x498138u: goto label_498138;
        default: break;
    }

    ctx->pc = 0x498040u;

    // 0x498040: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x498040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x498044: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x498044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x498048: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x498048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x49804c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x49804cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x498050: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x498050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x498054: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x498054u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498058: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x498058u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49805c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x49805cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x498060: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x498060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x498064: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x498064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498068: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x498068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49806c: 0xc04a508  jal         func_129420
    ctx->pc = 0x49806Cu;
    SET_GPR_U32(ctx, 31, 0x498074u);
    ctx->pc = 0x498070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49806Cu;
            // 0x498070: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498074u; }
        if (ctx->pc != 0x498074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498074u; }
        if (ctx->pc != 0x498074u) { return; }
    }
    ctx->pc = 0x498074u;
label_498074:
    // 0x498074: 0x96640000  lhu         $a0, 0x0($s3)
    ctx->pc = 0x498074u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x498078: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x498078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x49807c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x49807cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x498080: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x498080u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498084: 0xc0400c4  jal         func_100310
    ctx->pc = 0x498084u;
    SET_GPR_U32(ctx, 31, 0x49808Cu);
    ctx->pc = 0x498088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498084u;
            // 0x498088: 0x26920004  addiu       $s2, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100310u;
    if (runtime->hasFunction(0x100310u)) {
        auto targetFn = runtime->lookupFunction(0x100310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49808Cu; }
        if (ctx->pc != 0x49808Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100310_0x100310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49808Cu; }
        if (ctx->pc != 0x49808Cu) { return; }
    }
    ctx->pc = 0x49808Cu;
label_49808c:
    // 0x49808c: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x49808cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x498090: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x498090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498094: 0x96660000  lhu         $a2, 0x0($s3)
    ctx->pc = 0x498094u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x498098: 0xc04a508  jal         func_129420
    ctx->pc = 0x498098u;
    SET_GPR_U32(ctx, 31, 0x4980A0u);
    ctx->pc = 0x49809Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498098u;
            // 0x49809c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4980A0u; }
        if (ctx->pc != 0x4980A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4980A0u; }
        if (ctx->pc != 0x4980A0u) { return; }
    }
    ctx->pc = 0x4980A0u;
label_4980a0:
    // 0x4980a0: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4980a0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4980a4: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x4980a4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x4980a8: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x4980A8u;
    {
        const bool branch_taken_0x4980a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4980ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4980A8u;
            // 0x4980ac: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4980a8) {
            ctx->pc = 0x498160u;
            goto label_498160;
        }
    }
    ctx->pc = 0x4980B0u;
    // 0x4980b0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4980b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4980b4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x4980b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4980b8: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x4980b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4980bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4980bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4980c0: 0xc0400c4  jal         func_100310
    ctx->pc = 0x4980C0u;
    SET_GPR_U32(ctx, 31, 0x4980C8u);
    ctx->pc = 0x4980C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4980C0u;
            // 0x4980c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100310u;
    if (runtime->hasFunction(0x100310u)) {
        auto targetFn = runtime->lookupFunction(0x100310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4980C8u; }
        if (ctx->pc != 0x4980C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100310_0x100310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4980C8u; }
        if (ctx->pc != 0x4980C8u) { return; }
    }
    ctx->pc = 0x4980C8u;
label_4980c8:
    // 0x4980c8: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x4980c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x4980cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4980ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4980d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4980d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4980d4:
    // 0x4980d4: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x4980d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x4980d8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x4980d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4980dc: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4980dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4980e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4980e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4980e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4980e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4980e8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4980e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4980ec: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4980ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4980f0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x4980f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x4980f4: 0x96430002  lhu         $v1, 0x2($s2)
    ctx->pc = 0x4980f4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x4980f8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4980f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4980fc: 0xa4430002  sh          $v1, 0x2($v0)
    ctx->pc = 0x4980fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x498100: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x498100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x498104: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x498104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x498108: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x498108u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x49810c: 0xc0400c4  jal         func_100310
    ctx->pc = 0x49810Cu;
    SET_GPR_U32(ctx, 31, 0x498114u);
    ctx->pc = 0x498110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49810Cu;
            // 0x498110: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100310u;
    if (runtime->hasFunction(0x100310u)) {
        auto targetFn = runtime->lookupFunction(0x100310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498114u; }
        if (ctx->pc != 0x498114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100310_0x100310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498114u; }
        if (ctx->pc != 0x498114u) { return; }
    }
    ctx->pc = 0x498114u;
label_498114:
    // 0x498114: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x498114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x498118: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x498118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x49811c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x49811cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x498120: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x498120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x498124: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x498124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x498128: 0x94460002  lhu         $a2, 0x2($v0)
    ctx->pc = 0x498128u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x49812c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x49812cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x498130: 0xc04a508  jal         func_129420
    ctx->pc = 0x498130u;
    SET_GPR_U32(ctx, 31, 0x498138u);
    ctx->pc = 0x498134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498130u;
            // 0x498134: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498138u; }
        if (ctx->pc != 0x498138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498138u; }
        if (ctx->pc != 0x498138u) { return; }
    }
    ctx->pc = 0x498138u;
label_498138:
    // 0x498138: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x498138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x49813c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x49813cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x498140: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x498140u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x498144: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x498144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x498148: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x498148u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x49814c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x49814cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x498150: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x498150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x498154: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x498154u;
    {
        const bool branch_taken_0x498154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x498158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x498154u;
            // 0x498158: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498154) {
            ctx->pc = 0x4980D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4980d4;
        }
    }
    ctx->pc = 0x49815Cu;
    // 0x49815c: 0x0  nop
    ctx->pc = 0x49815cu;
    // NOP
label_498160:
    // 0x498160: 0x2541023  subu        $v0, $s2, $s4
    ctx->pc = 0x498160u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x498164: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x498164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x498168: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x498168u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x49816c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x49816cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x498170: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x498170u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x498174: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x498174u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x498178: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x498178u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49817c: 0x3e00008  jr          $ra
    ctx->pc = 0x49817Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49817Cu;
            // 0x498180: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x498184u;
    // 0x498184: 0x0  nop
    ctx->pc = 0x498184u;
    // NOP
    // 0x498188: 0x0  nop
    ctx->pc = 0x498188u;
    // NOP
    // 0x49818c: 0x0  nop
    ctx->pc = 0x49818cu;
    // NOP
}
