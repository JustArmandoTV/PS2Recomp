#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015FF20
// Address: 0x15ff20 - 0x160170
void sub_0015FF20_0x15ff20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015FF20_0x15ff20");
#endif

    switch (ctx->pc) {
        case 0x15ff68u: goto label_15ff68;
        case 0x15ff7cu: goto label_15ff7c;
        case 0x15ff88u: goto label_15ff88;
        case 0x15ff94u: goto label_15ff94;
        case 0x15ff9cu: goto label_15ff9c;
        case 0x15ffacu: goto label_15ffac;
        case 0x15ffccu: goto label_15ffcc;
        case 0x15ffe0u: goto label_15ffe0;
        case 0x15ffecu: goto label_15ffec;
        case 0x15fff8u: goto label_15fff8;
        case 0x160000u: goto label_160000;
        case 0x160010u: goto label_160010;
        case 0x16001cu: goto label_16001c;
        case 0x160024u: goto label_160024;
        case 0x160038u: goto label_160038;
        case 0x160064u: goto label_160064;
        case 0x160078u: goto label_160078;
        case 0x160084u: goto label_160084;
        case 0x160090u: goto label_160090;
        case 0x160098u: goto label_160098;
        case 0x1600a8u: goto label_1600a8;
        case 0x1600c8u: goto label_1600c8;
        case 0x1600dcu: goto label_1600dc;
        case 0x1600e8u: goto label_1600e8;
        case 0x1600f4u: goto label_1600f4;
        case 0x1600fcu: goto label_1600fc;
        case 0x16010cu: goto label_16010c;
        case 0x160118u: goto label_160118;
        case 0x160120u: goto label_160120;
        case 0x160134u: goto label_160134;
        case 0x16014cu: goto label_16014c;
        default: break;
    }

    ctx->pc = 0x15ff20u;

label_15ff20:
    // 0x15ff20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15ff20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15ff24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x15ff24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x15ff28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15ff28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15ff2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15ff2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15ff30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15ff30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15ff34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15ff34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15ff38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15ff38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ff3c: 0x8cb30000  lw          $s3, 0x0($a1)
    ctx->pc = 0x15ff3cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15ff40: 0x1260003d  beqz        $s3, . + 4 + (0x3D << 2)
    ctx->pc = 0x15FF40u;
    {
        const bool branch_taken_0x15ff40 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FF40u;
            // 0x15ff44: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ff40) {
            ctx->pc = 0x160038u;
            goto label_160038;
        }
    }
    ctx->pc = 0x15FF48u;
    // 0x15ff48: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x15ff48u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15ff4c: 0x52400018  beql        $s2, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x15FF4Cu;
    {
        const bool branch_taken_0x15ff4c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ff4c) {
            ctx->pc = 0x15FF50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15FF4Cu;
            // 0x15ff50: 0x8e720004  lw          $s2, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15FFB0u;
            goto label_15ffb0;
        }
    }
    ctx->pc = 0x15FF54u;
    // 0x15ff54: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x15ff54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15ff58: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15FF58u;
    {
        const bool branch_taken_0x15ff58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ff58) {
            ctx->pc = 0x15FF5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15FF58u;
            // 0x15ff5c: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15FF6Cu;
            goto label_15ff6c;
        }
    }
    ctx->pc = 0x15FF60u;
    // 0x15ff60: 0xc057fc8  jal         func_15FF20
    ctx->pc = 0x15FF60u;
    SET_GPR_U32(ctx, 31, 0x15FF68u);
    ctx->pc = 0x15FF20u;
    goto label_15ff20;
    ctx->pc = 0x15FF68u;
label_15ff68:
    // 0x15ff68: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x15ff68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_15ff6c:
    // 0x15ff6c: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15FF6Cu;
    {
        const bool branch_taken_0x15ff6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ff6c) {
            ctx->pc = 0x15FF70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15FF6Cu;
            // 0x15ff70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15FF80u;
            goto label_15ff80;
        }
    }
    ctx->pc = 0x15FF74u;
    // 0x15ff74: 0xc057fc8  jal         func_15FF20
    ctx->pc = 0x15FF74u;
    SET_GPR_U32(ctx, 31, 0x15FF7Cu);
    ctx->pc = 0x15FF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FF74u;
            // 0x15ff78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15FF20u;
    goto label_15ff20;
    ctx->pc = 0x15FF7Cu;
label_15ff7c:
    // 0x15ff7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15ff7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15ff80:
    // 0x15ff80: 0xc05806c  jal         func_1601B0
    ctx->pc = 0x15FF80u;
    SET_GPR_U32(ctx, 31, 0x15FF88u);
    ctx->pc = 0x1601B0u;
    if (runtime->hasFunction(0x1601B0u)) {
        auto targetFn = runtime->lookupFunction(0x1601B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FF88u; }
        if (ctx->pc != 0x15FF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001601B0_0x1601b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FF88u; }
        if (ctx->pc != 0x15FF88u) { return; }
    }
    ctx->pc = 0x15FF88u;
label_15ff88:
    // 0x15ff88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15ff88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ff8c: 0xc058068  jal         func_1601A0
    ctx->pc = 0x15FF8Cu;
    SET_GPR_U32(ctx, 31, 0x15FF94u);
    ctx->pc = 0x15FF90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FF8Cu;
            // 0x15ff90: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1601A0u;
    if (runtime->hasFunction(0x1601A0u)) {
        auto targetFn = runtime->lookupFunction(0x1601A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FF94u; }
        if (ctx->pc != 0x15FF94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001601A0_0x1601a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FF94u; }
        if (ctx->pc != 0x15FF94u) { return; }
    }
    ctx->pc = 0x15FF94u;
label_15ff94:
    // 0x15ff94: 0xc058064  jal         func_160190
    ctx->pc = 0x15FF94u;
    SET_GPR_U32(ctx, 31, 0x15FF9Cu);
    ctx->pc = 0x15FF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FF94u;
            // 0x15ff98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160190u;
    if (runtime->hasFunction(0x160190u)) {
        auto targetFn = runtime->lookupFunction(0x160190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FF9Cu; }
        if (ctx->pc != 0x15FF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160190_0x160190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FF9Cu; }
        if (ctx->pc != 0x15FF9Cu) { return; }
    }
    ctx->pc = 0x15FF9Cu;
label_15ff9c:
    // 0x15ff9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15ff9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ffa0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15ffa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ffa4: 0xc05805c  jal         func_160170
    ctx->pc = 0x15FFA4u;
    SET_GPR_U32(ctx, 31, 0x15FFACu);
    ctx->pc = 0x15FFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FFA4u;
            // 0x15ffa8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160170u;
    if (runtime->hasFunction(0x160170u)) {
        auto targetFn = runtime->lookupFunction(0x160170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FFACu; }
        if (ctx->pc != 0x15FFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160170_0x160170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FFACu; }
        if (ctx->pc != 0x15FFACu) { return; }
    }
    ctx->pc = 0x15FFACu;
label_15ffac:
    // 0x15ffac: 0x8e720004  lw          $s2, 0x4($s3)
    ctx->pc = 0x15ffacu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_15ffb0:
    // 0x15ffb0: 0x52400018  beql        $s2, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x15FFB0u;
    {
        const bool branch_taken_0x15ffb0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ffb0) {
            ctx->pc = 0x15FFB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15FFB0u;
            // 0x15ffb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160014u;
            goto label_160014;
        }
    }
    ctx->pc = 0x15FFB8u;
    // 0x15ffb8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x15ffb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15ffbc: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15FFBCu;
    {
        const bool branch_taken_0x15ffbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ffbc) {
            ctx->pc = 0x15FFC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15FFBCu;
            // 0x15ffc0: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15FFD0u;
            goto label_15ffd0;
        }
    }
    ctx->pc = 0x15FFC4u;
    // 0x15ffc4: 0xc057fc8  jal         func_15FF20
    ctx->pc = 0x15FFC4u;
    SET_GPR_U32(ctx, 31, 0x15FFCCu);
    ctx->pc = 0x15FFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FFC4u;
            // 0x15ffc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15FF20u;
    goto label_15ff20;
    ctx->pc = 0x15FFCCu;
label_15ffcc:
    // 0x15ffcc: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x15ffccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_15ffd0:
    // 0x15ffd0: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15FFD0u;
    {
        const bool branch_taken_0x15ffd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ffd0) {
            ctx->pc = 0x15FFD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15FFD0u;
            // 0x15ffd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15FFE4u;
            goto label_15ffe4;
        }
    }
    ctx->pc = 0x15FFD8u;
    // 0x15ffd8: 0xc057fc8  jal         func_15FF20
    ctx->pc = 0x15FFD8u;
    SET_GPR_U32(ctx, 31, 0x15FFE0u);
    ctx->pc = 0x15FFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FFD8u;
            // 0x15ffdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15FF20u;
    goto label_15ff20;
    ctx->pc = 0x15FFE0u;
label_15ffe0:
    // 0x15ffe0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15ffe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15ffe4:
    // 0x15ffe4: 0xc05806c  jal         func_1601B0
    ctx->pc = 0x15FFE4u;
    SET_GPR_U32(ctx, 31, 0x15FFECu);
    ctx->pc = 0x1601B0u;
    if (runtime->hasFunction(0x1601B0u)) {
        auto targetFn = runtime->lookupFunction(0x1601B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FFECu; }
        if (ctx->pc != 0x15FFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001601B0_0x1601b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FFECu; }
        if (ctx->pc != 0x15FFECu) { return; }
    }
    ctx->pc = 0x15FFECu;
label_15ffec:
    // 0x15ffec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15ffecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fff0: 0xc058068  jal         func_1601A0
    ctx->pc = 0x15FFF0u;
    SET_GPR_U32(ctx, 31, 0x15FFF8u);
    ctx->pc = 0x15FFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FFF0u;
            // 0x15fff4: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1601A0u;
    if (runtime->hasFunction(0x1601A0u)) {
        auto targetFn = runtime->lookupFunction(0x1601A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FFF8u; }
        if (ctx->pc != 0x15FFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001601A0_0x1601a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FFF8u; }
        if (ctx->pc != 0x15FFF8u) { return; }
    }
    ctx->pc = 0x15FFF8u;
label_15fff8:
    // 0x15fff8: 0xc058064  jal         func_160190
    ctx->pc = 0x15FFF8u;
    SET_GPR_U32(ctx, 31, 0x160000u);
    ctx->pc = 0x15FFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FFF8u;
            // 0x15fffc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160190u;
    if (runtime->hasFunction(0x160190u)) {
        auto targetFn = runtime->lookupFunction(0x160190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160000u; }
        if (ctx->pc != 0x160000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160190_0x160190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160000u; }
        if (ctx->pc != 0x160000u) { return; }
    }
    ctx->pc = 0x160000u;
label_160000:
    // 0x160000: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x160000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160004: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x160004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160008: 0xc05805c  jal         func_160170
    ctx->pc = 0x160008u;
    SET_GPR_U32(ctx, 31, 0x160010u);
    ctx->pc = 0x16000Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160008u;
            // 0x16000c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160170u;
    if (runtime->hasFunction(0x160170u)) {
        auto targetFn = runtime->lookupFunction(0x160170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160010u; }
        if (ctx->pc != 0x160010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160170_0x160170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160010u; }
        if (ctx->pc != 0x160010u) { return; }
    }
    ctx->pc = 0x160010u;
label_160010:
    // 0x160010: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x160010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_160014:
    // 0x160014: 0xc05806c  jal         func_1601B0
    ctx->pc = 0x160014u;
    SET_GPR_U32(ctx, 31, 0x16001Cu);
    ctx->pc = 0x1601B0u;
    if (runtime->hasFunction(0x1601B0u)) {
        auto targetFn = runtime->lookupFunction(0x1601B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16001Cu; }
        if (ctx->pc != 0x16001Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001601B0_0x1601b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16001Cu; }
        if (ctx->pc != 0x16001Cu) { return; }
    }
    ctx->pc = 0x16001Cu;
label_16001c:
    // 0x16001c: 0xc058064  jal         func_160190
    ctx->pc = 0x16001Cu;
    SET_GPR_U32(ctx, 31, 0x160024u);
    ctx->pc = 0x160020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16001Cu;
            // 0x160020: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160190u;
    if (runtime->hasFunction(0x160190u)) {
        auto targetFn = runtime->lookupFunction(0x160190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160024u; }
        if (ctx->pc != 0x160024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160190_0x160190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160024u; }
        if (ctx->pc != 0x160024u) { return; }
    }
    ctx->pc = 0x160024u;
label_160024:
    // 0x160024: 0x52600005  beql        $s3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x160024u;
    {
        const bool branch_taken_0x160024 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x160024) {
            ctx->pc = 0x160028u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160024u;
            // 0x160028: 0x8e130004  lw          $s3, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16003Cu;
            goto label_16003c;
        }
    }
    ctx->pc = 0x16002Cu;
    // 0x16002c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16002cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160030: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x160030u;
    SET_GPR_U32(ctx, 31, 0x160038u);
    ctx->pc = 0x160034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160030u;
            // 0x160034: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160038u; }
        if (ctx->pc != 0x160038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160038u; }
        if (ctx->pc != 0x160038u) { return; }
    }
    ctx->pc = 0x160038u;
label_160038:
    // 0x160038: 0x8e130004  lw          $s3, 0x4($s0)
    ctx->pc = 0x160038u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_16003c:
    // 0x16003c: 0x5260003e  beql        $s3, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x16003Cu;
    {
        const bool branch_taken_0x16003c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x16003c) {
            ctx->pc = 0x160040u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16003Cu;
            // 0x160040: 0x26230008  addiu       $v1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160138u;
            goto label_160138;
        }
    }
    ctx->pc = 0x160044u;
    // 0x160044: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x160044u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x160048: 0x52400018  beql        $s2, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x160048u;
    {
        const bool branch_taken_0x160048 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x160048) {
            ctx->pc = 0x16004Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160048u;
            // 0x16004c: 0x8e720004  lw          $s2, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1600ACu;
            goto label_1600ac;
        }
    }
    ctx->pc = 0x160050u;
    // 0x160050: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x160050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x160054: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x160054u;
    {
        const bool branch_taken_0x160054 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x160054) {
            ctx->pc = 0x160058u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160054u;
            // 0x160058: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160068u;
            goto label_160068;
        }
    }
    ctx->pc = 0x16005Cu;
    // 0x16005c: 0xc057fc8  jal         func_15FF20
    ctx->pc = 0x16005Cu;
    SET_GPR_U32(ctx, 31, 0x160064u);
    ctx->pc = 0x160060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16005Cu;
            // 0x160060: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15FF20u;
    goto label_15ff20;
    ctx->pc = 0x160064u;
label_160064:
    // 0x160064: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x160064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_160068:
    // 0x160068: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x160068u;
    {
        const bool branch_taken_0x160068 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x160068) {
            ctx->pc = 0x16006Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160068u;
            // 0x16006c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16007Cu;
            goto label_16007c;
        }
    }
    ctx->pc = 0x160070u;
    // 0x160070: 0xc057fc8  jal         func_15FF20
    ctx->pc = 0x160070u;
    SET_GPR_U32(ctx, 31, 0x160078u);
    ctx->pc = 0x160074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160070u;
            // 0x160074: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15FF20u;
    goto label_15ff20;
    ctx->pc = 0x160078u;
label_160078:
    // 0x160078: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x160078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16007c:
    // 0x16007c: 0xc05806c  jal         func_1601B0
    ctx->pc = 0x16007Cu;
    SET_GPR_U32(ctx, 31, 0x160084u);
    ctx->pc = 0x1601B0u;
    if (runtime->hasFunction(0x1601B0u)) {
        auto targetFn = runtime->lookupFunction(0x1601B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160084u; }
        if (ctx->pc != 0x160084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001601B0_0x1601b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160084u; }
        if (ctx->pc != 0x160084u) { return; }
    }
    ctx->pc = 0x160084u;
label_160084:
    // 0x160084: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x160084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160088: 0xc058068  jal         func_1601A0
    ctx->pc = 0x160088u;
    SET_GPR_U32(ctx, 31, 0x160090u);
    ctx->pc = 0x16008Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160088u;
            // 0x16008c: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1601A0u;
    if (runtime->hasFunction(0x1601A0u)) {
        auto targetFn = runtime->lookupFunction(0x1601A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160090u; }
        if (ctx->pc != 0x160090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001601A0_0x1601a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160090u; }
        if (ctx->pc != 0x160090u) { return; }
    }
    ctx->pc = 0x160090u;
label_160090:
    // 0x160090: 0xc058064  jal         func_160190
    ctx->pc = 0x160090u;
    SET_GPR_U32(ctx, 31, 0x160098u);
    ctx->pc = 0x160094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160090u;
            // 0x160094: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160190u;
    if (runtime->hasFunction(0x160190u)) {
        auto targetFn = runtime->lookupFunction(0x160190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160098u; }
        if (ctx->pc != 0x160098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160190_0x160190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160098u; }
        if (ctx->pc != 0x160098u) { return; }
    }
    ctx->pc = 0x160098u;
label_160098:
    // 0x160098: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x160098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16009c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16009cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1600a0: 0xc05805c  jal         func_160170
    ctx->pc = 0x1600A0u;
    SET_GPR_U32(ctx, 31, 0x1600A8u);
    ctx->pc = 0x1600A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1600A0u;
            // 0x1600a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160170u;
    if (runtime->hasFunction(0x160170u)) {
        auto targetFn = runtime->lookupFunction(0x160170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1600A8u; }
        if (ctx->pc != 0x1600A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160170_0x160170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1600A8u; }
        if (ctx->pc != 0x1600A8u) { return; }
    }
    ctx->pc = 0x1600A8u;
label_1600a8:
    // 0x1600a8: 0x8e720004  lw          $s2, 0x4($s3)
    ctx->pc = 0x1600a8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1600ac:
    // 0x1600ac: 0x52400018  beql        $s2, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1600ACu;
    {
        const bool branch_taken_0x1600ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1600ac) {
            ctx->pc = 0x1600B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1600ACu;
            // 0x1600b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160110u;
            goto label_160110;
        }
    }
    ctx->pc = 0x1600B4u;
    // 0x1600b4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1600b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1600b8: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1600B8u;
    {
        const bool branch_taken_0x1600b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1600b8) {
            ctx->pc = 0x1600BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1600B8u;
            // 0x1600bc: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1600CCu;
            goto label_1600cc;
        }
    }
    ctx->pc = 0x1600C0u;
    // 0x1600c0: 0xc057fc8  jal         func_15FF20
    ctx->pc = 0x1600C0u;
    SET_GPR_U32(ctx, 31, 0x1600C8u);
    ctx->pc = 0x1600C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1600C0u;
            // 0x1600c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15FF20u;
    goto label_15ff20;
    ctx->pc = 0x1600C8u;
label_1600c8:
    // 0x1600c8: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1600c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1600cc:
    // 0x1600cc: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1600CCu;
    {
        const bool branch_taken_0x1600cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1600cc) {
            ctx->pc = 0x1600D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1600CCu;
            // 0x1600d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1600E0u;
            goto label_1600e0;
        }
    }
    ctx->pc = 0x1600D4u;
    // 0x1600d4: 0xc057fc8  jal         func_15FF20
    ctx->pc = 0x1600D4u;
    SET_GPR_U32(ctx, 31, 0x1600DCu);
    ctx->pc = 0x1600D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1600D4u;
            // 0x1600d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15FF20u;
    goto label_15ff20;
    ctx->pc = 0x1600DCu;
label_1600dc:
    // 0x1600dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1600dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1600e0:
    // 0x1600e0: 0xc05806c  jal         func_1601B0
    ctx->pc = 0x1600E0u;
    SET_GPR_U32(ctx, 31, 0x1600E8u);
    ctx->pc = 0x1601B0u;
    if (runtime->hasFunction(0x1601B0u)) {
        auto targetFn = runtime->lookupFunction(0x1601B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1600E8u; }
        if (ctx->pc != 0x1600E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001601B0_0x1601b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1600E8u; }
        if (ctx->pc != 0x1600E8u) { return; }
    }
    ctx->pc = 0x1600E8u;
label_1600e8:
    // 0x1600e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1600e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1600ec: 0xc058068  jal         func_1601A0
    ctx->pc = 0x1600ECu;
    SET_GPR_U32(ctx, 31, 0x1600F4u);
    ctx->pc = 0x1600F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1600ECu;
            // 0x1600f0: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1601A0u;
    if (runtime->hasFunction(0x1601A0u)) {
        auto targetFn = runtime->lookupFunction(0x1601A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1600F4u; }
        if (ctx->pc != 0x1600F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001601A0_0x1601a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1600F4u; }
        if (ctx->pc != 0x1600F4u) { return; }
    }
    ctx->pc = 0x1600F4u;
label_1600f4:
    // 0x1600f4: 0xc058064  jal         func_160190
    ctx->pc = 0x1600F4u;
    SET_GPR_U32(ctx, 31, 0x1600FCu);
    ctx->pc = 0x1600F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1600F4u;
            // 0x1600f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160190u;
    if (runtime->hasFunction(0x160190u)) {
        auto targetFn = runtime->lookupFunction(0x160190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1600FCu; }
        if (ctx->pc != 0x1600FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160190_0x160190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1600FCu; }
        if (ctx->pc != 0x1600FCu) { return; }
    }
    ctx->pc = 0x1600FCu;
label_1600fc:
    // 0x1600fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1600fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160100: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x160100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160104: 0xc05805c  jal         func_160170
    ctx->pc = 0x160104u;
    SET_GPR_U32(ctx, 31, 0x16010Cu);
    ctx->pc = 0x160108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160104u;
            // 0x160108: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160170u;
    if (runtime->hasFunction(0x160170u)) {
        auto targetFn = runtime->lookupFunction(0x160170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16010Cu; }
        if (ctx->pc != 0x16010Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160170_0x160170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16010Cu; }
        if (ctx->pc != 0x16010Cu) { return; }
    }
    ctx->pc = 0x16010Cu;
label_16010c:
    // 0x16010c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16010cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_160110:
    // 0x160110: 0xc05806c  jal         func_1601B0
    ctx->pc = 0x160110u;
    SET_GPR_U32(ctx, 31, 0x160118u);
    ctx->pc = 0x1601B0u;
    if (runtime->hasFunction(0x1601B0u)) {
        auto targetFn = runtime->lookupFunction(0x1601B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160118u; }
        if (ctx->pc != 0x160118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001601B0_0x1601b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160118u; }
        if (ctx->pc != 0x160118u) { return; }
    }
    ctx->pc = 0x160118u;
label_160118:
    // 0x160118: 0xc058064  jal         func_160190
    ctx->pc = 0x160118u;
    SET_GPR_U32(ctx, 31, 0x160120u);
    ctx->pc = 0x16011Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160118u;
            // 0x16011c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160190u;
    if (runtime->hasFunction(0x160190u)) {
        auto targetFn = runtime->lookupFunction(0x160190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160120u; }
        if (ctx->pc != 0x160120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160190_0x160190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160120u; }
        if (ctx->pc != 0x160120u) { return; }
    }
    ctx->pc = 0x160120u;
label_160120:
    // 0x160120: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x160120u;
    {
        const bool branch_taken_0x160120 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x160120) {
            ctx->pc = 0x160134u;
            goto label_160134;
        }
    }
    ctx->pc = 0x160128u;
    // 0x160128: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x160128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16012c: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x16012Cu;
    SET_GPR_U32(ctx, 31, 0x160134u);
    ctx->pc = 0x160130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16012Cu;
            // 0x160130: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160134u; }
        if (ctx->pc != 0x160134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160134u; }
        if (ctx->pc != 0x160134u) { return; }
    }
    ctx->pc = 0x160134u;
label_160134:
    // 0x160134: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x160134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_160138:
    // 0x160138: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x160138u;
    {
        const bool branch_taken_0x160138 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x160138) {
            ctx->pc = 0x16013Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160138u;
            // 0x16013c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160150u;
            goto label_160150;
        }
    }
    ctx->pc = 0x160140u;
    // 0x160140: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x160140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x160144: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x160144u;
    SET_GPR_U32(ctx, 31, 0x16014Cu);
    ctx->pc = 0x160148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160144u;
            // 0x160148: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16014Cu; }
        if (ctx->pc != 0x16014Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16014Cu; }
        if (ctx->pc != 0x16014Cu) { return; }
    }
    ctx->pc = 0x16014Cu;
label_16014c:
    // 0x16014c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16014cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_160150:
    // 0x160150: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x160150u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x160154: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x160154u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x160158: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x160158u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16015c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16015cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160160: 0x3e00008  jr          $ra
    ctx->pc = 0x160160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160160u;
            // 0x160164: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x160168u;
    // 0x160168: 0x0  nop
    ctx->pc = 0x160168u;
    // NOP
    // 0x16016c: 0x0  nop
    ctx->pc = 0x16016cu;
    // NOP
}
