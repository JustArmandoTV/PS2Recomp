#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BFF30
// Address: 0x3bff30 - 0x3c0300
void sub_003BFF30_0x3bff30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BFF30_0x3bff30");
#endif

    switch (ctx->pc) {
        case 0x3bff60u: goto label_3bff60;
        case 0x3bff70u: goto label_3bff70;
        case 0x3bff84u: goto label_3bff84;
        case 0x3bff9cu: goto label_3bff9c;
        case 0x3bffb8u: goto label_3bffb8;
        case 0x3bffc4u: goto label_3bffc4;
        case 0x3bffdcu: goto label_3bffdc;
        case 0x3bffecu: goto label_3bffec;
        case 0x3bfff8u: goto label_3bfff8;
        case 0x3c0004u: goto label_3c0004;
        case 0x3c0010u: goto label_3c0010;
        case 0x3c0030u: goto label_3c0030;
        case 0x3c003cu: goto label_3c003c;
        case 0x3c0054u: goto label_3c0054;
        case 0x3c0078u: goto label_3c0078;
        case 0x3c008cu: goto label_3c008c;
        case 0x3c00a0u: goto label_3c00a0;
        case 0x3c00b4u: goto label_3c00b4;
        case 0x3c00c8u: goto label_3c00c8;
        case 0x3c00d8u: goto label_3c00d8;
        case 0x3c00ecu: goto label_3c00ec;
        case 0x3c00f4u: goto label_3c00f4;
        case 0x3c0100u: goto label_3c0100;
        case 0x3c010cu: goto label_3c010c;
        case 0x3c0118u: goto label_3c0118;
        case 0x3c0138u: goto label_3c0138;
        case 0x3c0144u: goto label_3c0144;
        case 0x3c015cu: goto label_3c015c;
        case 0x3c0180u: goto label_3c0180;
        case 0x3c0190u: goto label_3c0190;
        case 0x3c0198u: goto label_3c0198;
        case 0x3c01acu: goto label_3c01ac;
        case 0x3c01b4u: goto label_3c01b4;
        case 0x3c01bcu: goto label_3c01bc;
        case 0x3c01d4u: goto label_3c01d4;
        case 0x3c01dcu: goto label_3c01dc;
        case 0x3c01e4u: goto label_3c01e4;
        case 0x3c0200u: goto label_3c0200;
        case 0x3c0208u: goto label_3c0208;
        case 0x3c021cu: goto label_3c021c;
        case 0x3c0230u: goto label_3c0230;
        case 0x3c0244u: goto label_3c0244;
        case 0x3c0254u: goto label_3c0254;
        case 0x3c0260u: goto label_3c0260;
        case 0x3c026cu: goto label_3c026c;
        case 0x3c0280u: goto label_3c0280;
        case 0x3c029cu: goto label_3c029c;
        case 0x3c02acu: goto label_3c02ac;
        case 0x3c02c4u: goto label_3c02c4;
        case 0x3c02d8u: goto label_3c02d8;
        default: break;
    }

    ctx->pc = 0x3bff30u;

    // 0x3bff30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3bff30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3bff34: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3bff34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3bff38: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3bff38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3bff3c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3bff3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3bff40: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3bff40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3bff44: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3bff44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3bff48: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3bff48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bff4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3bff4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3bff50: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3bff50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3bff54: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3bff54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3bff58: 0xc0efea4  jal         func_3BFA90
    ctx->pc = 0x3BFF58u;
    SET_GPR_U32(ctx, 31, 0x3BFF60u);
    ctx->pc = 0x3BFF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFF58u;
            // 0x3bff5c: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BFA90u;
    if (runtime->hasFunction(0x3BFA90u)) {
        auto targetFn = runtime->lookupFunction(0x3BFA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFF60u; }
        if (ctx->pc != 0x3BFF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BFA90_0x3bfa90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFF60u; }
        if (ctx->pc != 0x3BFF60u) { return; }
    }
    ctx->pc = 0x3BFF60u;
label_3bff60:
    // 0x3bff60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3bff60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bff64: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3bff64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3bff68: 0xc0770e4  jal         func_1DC390
    ctx->pc = 0x3BFF68u;
    SET_GPR_U32(ctx, 31, 0x3BFF70u);
    ctx->pc = 0x3BFF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFF68u;
            // 0x3bff6c: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC390u;
    if (runtime->hasFunction(0x1DC390u)) {
        auto targetFn = runtime->lookupFunction(0x1DC390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFF70u; }
        if (ctx->pc != 0x3BFF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC390_0x1dc390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFF70u; }
        if (ctx->pc != 0x3BFF70u) { return; }
    }
    ctx->pc = 0x3BFF70u;
label_3bff70:
    // 0x3bff70: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x3bff70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3bff74: 0x1443004c  bne         $v0, $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x3BFF74u;
    {
        const bool branch_taken_0x3bff74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3bff74) {
            ctx->pc = 0x3C00A8u;
            goto label_3c00a8;
        }
    }
    ctx->pc = 0x3BFF7Cu;
    // 0x3bff7c: 0xc0efc4c  jal         func_3BF130
    ctx->pc = 0x3BFF7Cu;
    SET_GPR_U32(ctx, 31, 0x3BFF84u);
    ctx->pc = 0x3BFF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFF7Cu;
            // 0x3bff80: 0x26440070  addiu       $a0, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF130u;
    if (runtime->hasFunction(0x3BF130u)) {
        auto targetFn = runtime->lookupFunction(0x3BF130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFF84u; }
        if (ctx->pc != 0x3BFF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF130_0x3bf130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFF84u; }
        if (ctx->pc != 0x3BFF84u) { return; }
    }
    ctx->pc = 0x3BFF84u;
label_3bff84:
    // 0x3bff84: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3bff84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3bff88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bff88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bff8c: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3BFF8Cu;
    {
        const bool branch_taken_0x3bff8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3bff8c) {
            ctx->pc = 0x3BFF90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFF8Cu;
            // 0x3bff90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BFFB0u;
            goto label_3bffb0;
        }
    }
    ctx->pc = 0x3BFF94u;
    // 0x3bff94: 0xc0efc4c  jal         func_3BF130
    ctx->pc = 0x3BFF94u;
    SET_GPR_U32(ctx, 31, 0x3BFF9Cu);
    ctx->pc = 0x3BFF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFF94u;
            // 0x3bff98: 0x26440070  addiu       $a0, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF130u;
    if (runtime->hasFunction(0x3BF130u)) {
        auto targetFn = runtime->lookupFunction(0x3BF130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFF9Cu; }
        if (ctx->pc != 0x3BFF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF130_0x3bf130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFF9Cu; }
        if (ctx->pc != 0x3BFF9Cu) { return; }
    }
    ctx->pc = 0x3BFF9Cu;
label_3bff9c:
    // 0x3bff9c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3bff9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3bffa0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3bffa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3bffa4: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3BFFA4u;
    {
        const bool branch_taken_0x3bffa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3bffa4) {
            ctx->pc = 0x3BFFE4u;
            goto label_3bffe4;
        }
    }
    ctx->pc = 0x3BFFACu;
    // 0x3bffac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bffacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bffb0:
    // 0x3bffb0: 0xc077264  jal         func_1DC990
    ctx->pc = 0x3BFFB0u;
    SET_GPR_U32(ctx, 31, 0x3BFFB8u);
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFFB8u; }
        if (ctx->pc != 0x3BFFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFFB8u; }
        if (ctx->pc != 0x3BFFB8u) { return; }
    }
    ctx->pc = 0x3BFFB8u;
label_3bffb8:
    // 0x3bffb8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3bffb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bffbc: 0xc0cef94  jal         func_33BE50
    ctx->pc = 0x3BFFBCu;
    SET_GPR_U32(ctx, 31, 0x3BFFC4u);
    ctx->pc = 0x3BFFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFFBCu;
            // 0x3bffc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BE50u;
    if (runtime->hasFunction(0x33BE50u)) {
        auto targetFn = runtime->lookupFunction(0x33BE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFFC4u; }
        if (ctx->pc != 0x3BFFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BE50_0x33be50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFFC4u; }
        if (ctx->pc != 0x3BFFC4u) { return; }
    }
    ctx->pc = 0x3BFFC4u;
label_3bffc4:
    // 0x3bffc4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3bffc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bffc8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3bffc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bffcc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3bffccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3bffd0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3bffd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3bffd4: 0xc0b82c4  jal         func_2E0B10
    ctx->pc = 0x3BFFD4u;
    SET_GPR_U32(ctx, 31, 0x3BFFDCu);
    ctx->pc = 0x3BFFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFFD4u;
            // 0x3bffd8: 0x26440070  addiu       $a0, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B10u;
    if (runtime->hasFunction(0x2E0B10u)) {
        auto targetFn = runtime->lookupFunction(0x2E0B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFFDCu; }
        if (ctx->pc != 0x3BFFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0B10_0x2e0b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFFDCu; }
        if (ctx->pc != 0x3BFFDCu) { return; }
    }
    ctx->pc = 0x3BFFDCu;
label_3bffdc:
    // 0x3bffdc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3BFFDCu;
    {
        const bool branch_taken_0x3bffdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFFDCu;
            // 0x3bffe0: 0x26440070  addiu       $a0, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bffdc) {
            ctx->pc = 0x3C0034u;
            goto label_3c0034;
        }
    }
    ctx->pc = 0x3BFFE4u;
label_3bffe4:
    // 0x3bffe4: 0xc0cf0e4  jal         func_33C390
    ctx->pc = 0x3BFFE4u;
    SET_GPR_U32(ctx, 31, 0x3BFFECu);
    ctx->pc = 0x33C390u;
    if (runtime->hasFunction(0x33C390u)) {
        auto targetFn = runtime->lookupFunction(0x33C390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFFECu; }
        if (ctx->pc != 0x3BFFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033C390_0x33c390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFFECu; }
        if (ctx->pc != 0x3BFFECu) { return; }
    }
    ctx->pc = 0x3BFFECu;
label_3bffec:
    // 0x3bffec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3bffecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfff0: 0xc0ceff0  jal         func_33BFC0
    ctx->pc = 0x3BFFF0u;
    SET_GPR_U32(ctx, 31, 0x3BFFF8u);
    ctx->pc = 0x3BFFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFFF0u;
            // 0x3bfff4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BFC0u;
    if (runtime->hasFunction(0x33BFC0u)) {
        auto targetFn = runtime->lookupFunction(0x33BFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFFF8u; }
        if (ctx->pc != 0x3BFFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BFC0_0x33bfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFFF8u; }
        if (ctx->pc != 0x3BFFF8u) { return; }
    }
    ctx->pc = 0x3BFFF8u;
label_3bfff8:
    // 0x3bfff8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3bfff8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfffc: 0xc077264  jal         func_1DC990
    ctx->pc = 0x3BFFFCu;
    SET_GPR_U32(ctx, 31, 0x3C0004u);
    ctx->pc = 0x3C0000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFFFCu;
            // 0x3c0000: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0004u; }
        if (ctx->pc != 0x3C0004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0004u; }
        if (ctx->pc != 0x3C0004u) { return; }
    }
    ctx->pc = 0x3C0004u;
label_3c0004:
    // 0x3c0004: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3c0004u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0008: 0xc0cef94  jal         func_33BE50
    ctx->pc = 0x3C0008u;
    SET_GPR_U32(ctx, 31, 0x3C0010u);
    ctx->pc = 0x3C000Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0008u;
            // 0x3c000c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BE50u;
    if (runtime->hasFunction(0x33BE50u)) {
        auto targetFn = runtime->lookupFunction(0x33BE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0010u; }
        if (ctx->pc != 0x3C0010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BE50_0x33be50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0010u; }
        if (ctx->pc != 0x3C0010u) { return; }
    }
    ctx->pc = 0x3C0010u;
label_3c0010:
    // 0x3c0010: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3c0010u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0014: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3c0014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0018: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3c0018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3c001c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3c001cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0020: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c0020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c0024: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x3c0024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x3c0028: 0xc0b884c  jal         func_2E2130
    ctx->pc = 0x3C0028u;
    SET_GPR_U32(ctx, 31, 0x3C0030u);
    ctx->pc = 0x3C002Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0028u;
            // 0x3c002c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2130u;
    if (runtime->hasFunction(0x2E2130u)) {
        auto targetFn = runtime->lookupFunction(0x2E2130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0030u; }
        if (ctx->pc != 0x3C0030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2130_0x2e2130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0030u; }
        if (ctx->pc != 0x3C0030u) { return; }
    }
    ctx->pc = 0x3C0030u;
label_3c0030:
    // 0x3c0030: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x3c0030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_3c0034:
    // 0x3c0034: 0xc0f00cc  jal         func_3C0330
    ctx->pc = 0x3C0034u;
    SET_GPR_U32(ctx, 31, 0x3C003Cu);
    ctx->pc = 0x3C0330u;
    if (runtime->hasFunction(0x3C0330u)) {
        auto targetFn = runtime->lookupFunction(0x3C0330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C003Cu; }
        if (ctx->pc != 0x3C003Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C0330_0x3c0330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C003Cu; }
        if (ctx->pc != 0x3C003Cu) { return; }
    }
    ctx->pc = 0x3C003Cu;
label_3c003c:
    // 0x3c003c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3c003cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3c0040: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c0040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c0044: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C0044u;
    {
        const bool branch_taken_0x3c0044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3c0044) {
            ctx->pc = 0x3C0048u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0044u;
            // 0x3c0048: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C0068u;
            goto label_3c0068;
        }
    }
    ctx->pc = 0x3C004Cu;
    // 0x3c004c: 0xc0f00cc  jal         func_3C0330
    ctx->pc = 0x3C004Cu;
    SET_GPR_U32(ctx, 31, 0x3C0054u);
    ctx->pc = 0x3C0050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C004Cu;
            // 0x3c0050: 0x26440070  addiu       $a0, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C0330u;
    if (runtime->hasFunction(0x3C0330u)) {
        auto targetFn = runtime->lookupFunction(0x3C0330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0054u; }
        if (ctx->pc != 0x3C0054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C0330_0x3c0330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0054u; }
        if (ctx->pc != 0x3C0054u) { return; }
    }
    ctx->pc = 0x3C0054u;
label_3c0054:
    // 0x3c0054: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3c0054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3c0058: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3c0058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c005c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C005Cu;
    {
        const bool branch_taken_0x3c005c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c005c) {
            ctx->pc = 0x3C0080u;
            goto label_3c0080;
        }
    }
    ctx->pc = 0x3C0064u;
    // 0x3c0064: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c0064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c0068:
    // 0x3c0068: 0x264400d0  addiu       $a0, $s2, 0xD0
    ctx->pc = 0x3c0068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x3c006c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c006cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0070: 0xc0fece8  jal         func_3FB3A0
    ctx->pc = 0x3C0070u;
    SET_GPR_U32(ctx, 31, 0x3C0078u);
    ctx->pc = 0x3C0074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0070u;
            // 0x3c0074: 0x26470070  addiu       $a3, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FB3A0u;
    if (runtime->hasFunction(0x3FB3A0u)) {
        auto targetFn = runtime->lookupFunction(0x3FB3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0078u; }
        if (ctx->pc != 0x3C0078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FB3A0_0x3fb3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0078u; }
        if (ctx->pc != 0x3C0078u) { return; }
    }
    ctx->pc = 0x3C0078u;
label_3c0078:
    // 0x3c0078: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x3C0078u;
    {
        const bool branch_taken_0x3c0078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C007Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0078u;
            // 0x3c007c: 0x260402e0  addiu       $a0, $s0, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0078) {
            ctx->pc = 0x3C0258u;
            goto label_3c0258;
        }
    }
    ctx->pc = 0x3C0080u;
label_3c0080:
    // 0x3c0080: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c0080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3c0084: 0xc0770d8  jal         func_1DC360
    ctx->pc = 0x3C0084u;
    SET_GPR_U32(ctx, 31, 0x3C008Cu);
    ctx->pc = 0x3C0088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0084u;
            // 0x3c0088: 0x8c440ea4  lw          $a0, 0xEA4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC360u;
    if (runtime->hasFunction(0x1DC360u)) {
        auto targetFn = runtime->lookupFunction(0x1DC360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C008Cu; }
        if (ctx->pc != 0x3C008Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC360_0x1dc360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C008Cu; }
        if (ctx->pc != 0x3C008Cu) { return; }
    }
    ctx->pc = 0x3C008Cu;
label_3c008c:
    // 0x3c008c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c008cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0090: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3c0090u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0094: 0x264400d0  addiu       $a0, $s2, 0xD0
    ctx->pc = 0x3c0094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x3c0098: 0xc0fec1c  jal         func_3FB070
    ctx->pc = 0x3C0098u;
    SET_GPR_U32(ctx, 31, 0x3C00A0u);
    ctx->pc = 0x3C009Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0098u;
            // 0x3c009c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FB070u;
    if (runtime->hasFunction(0x3FB070u)) {
        auto targetFn = runtime->lookupFunction(0x3FB070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C00A0u; }
        if (ctx->pc != 0x3C00A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FB070_0x3fb070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C00A0u; }
        if (ctx->pc != 0x3C00A0u) { return; }
    }
    ctx->pc = 0x3C00A0u;
label_3c00a0:
    // 0x3c00a0: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x3C00A0u;
    {
        const bool branch_taken_0x3c00a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c00a0) {
            ctx->pc = 0x3C0254u;
            goto label_3c0254;
        }
    }
    ctx->pc = 0x3C00A8u;
label_3c00a8:
    // 0x3c00a8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c00a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3c00ac: 0xc0770e8  jal         func_1DC3A0
    ctx->pc = 0x3C00ACu;
    SET_GPR_U32(ctx, 31, 0x3C00B4u);
    ctx->pc = 0x3C00B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C00ACu;
            // 0x3c00b0: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC3A0u;
    if (runtime->hasFunction(0x1DC3A0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C00B4u; }
        if (ctx->pc != 0x3C00B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC3A0_0x1dc3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C00B4u; }
        if (ctx->pc != 0x3C00B4u) { return; }
    }
    ctx->pc = 0x3C00B4u;
label_3c00b4:
    // 0x3c00b4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3c00b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3c00b8: 0x50400064  beql        $v0, $zero, . + 4 + (0x64 << 2)
    ctx->pc = 0x3C00B8u;
    {
        const bool branch_taken_0x3c00b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c00b8) {
            ctx->pc = 0x3C00BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C00B8u;
            // 0x3c00bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C024Cu;
            goto label_3c024c;
        }
    }
    ctx->pc = 0x3C00C0u;
    // 0x3c00c0: 0xc0f00c8  jal         func_3C0320
    ctx->pc = 0x3C00C0u;
    SET_GPR_U32(ctx, 31, 0x3C00C8u);
    ctx->pc = 0x3C00C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C00C0u;
            // 0x3c00c4: 0x264400d0  addiu       $a0, $s2, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C0320u;
    if (runtime->hasFunction(0x3C0320u)) {
        auto targetFn = runtime->lookupFunction(0x3C0320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C00C8u; }
        if (ctx->pc != 0x3C00C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C0320_0x3c0320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C00C8u; }
        if (ctx->pc != 0x3C00C8u) { return; }
    }
    ctx->pc = 0x3C00C8u;
label_3c00c8:
    // 0x3c00c8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C00C8u;
    {
        const bool branch_taken_0x3c00c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c00c8) {
            ctx->pc = 0x3C00CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C00C8u;
            // 0x3c00cc: 0x26440070  addiu       $a0, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C00E4u;
            goto label_3c00e4;
        }
    }
    ctx->pc = 0x3C00D0u;
    // 0x3c00d0: 0xc0f00c4  jal         func_3C0310
    ctx->pc = 0x3C00D0u;
    SET_GPR_U32(ctx, 31, 0x3C00D8u);
    ctx->pc = 0x3C00D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C00D0u;
            // 0x3c00d4: 0x264400d0  addiu       $a0, $s2, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C0310u;
    if (runtime->hasFunction(0x3C0310u)) {
        auto targetFn = runtime->lookupFunction(0x3C0310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C00D8u; }
        if (ctx->pc != 0x3C00D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C0310_0x3c0310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C00D8u; }
        if (ctx->pc != 0x3C00D8u) { return; }
    }
    ctx->pc = 0x3C00D8u;
label_3c00d8:
    // 0x3c00d8: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3C00D8u;
    {
        const bool branch_taken_0x3c00d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c00d8) {
            ctx->pc = 0x3C00DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C00D8u;
            // 0x3c00dc: 0x26440070  addiu       $a0, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C013Cu;
            goto label_3c013c;
        }
    }
    ctx->pc = 0x3C00E0u;
    // 0x3c00e0: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x3c00e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_3c00e4:
    // 0x3c00e4: 0xc0f00c0  jal         func_3C0300
    ctx->pc = 0x3C00E4u;
    SET_GPR_U32(ctx, 31, 0x3C00ECu);
    ctx->pc = 0x3C0300u;
    if (runtime->hasFunction(0x3C0300u)) {
        auto targetFn = runtime->lookupFunction(0x3C0300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C00ECu; }
        if (ctx->pc != 0x3C00ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C0300_0x3c0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C00ECu; }
        if (ctx->pc != 0x3C00ECu) { return; }
    }
    ctx->pc = 0x3C00ECu;
label_3c00ec:
    // 0x3c00ec: 0xc0cf0e4  jal         func_33C390
    ctx->pc = 0x3C00ECu;
    SET_GPR_U32(ctx, 31, 0x3C00F4u);
    ctx->pc = 0x33C390u;
    if (runtime->hasFunction(0x33C390u)) {
        auto targetFn = runtime->lookupFunction(0x33C390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C00F4u; }
        if (ctx->pc != 0x3C00F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033C390_0x33c390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C00F4u; }
        if (ctx->pc != 0x3C00F4u) { return; }
    }
    ctx->pc = 0x3C00F4u;
label_3c00f4:
    // 0x3c00f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c00f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c00f8: 0xc0ceff0  jal         func_33BFC0
    ctx->pc = 0x3C00F8u;
    SET_GPR_U32(ctx, 31, 0x3C0100u);
    ctx->pc = 0x3C00FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C00F8u;
            // 0x3c00fc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BFC0u;
    if (runtime->hasFunction(0x33BFC0u)) {
        auto targetFn = runtime->lookupFunction(0x33BFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0100u; }
        if (ctx->pc != 0x3C0100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BFC0_0x33bfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0100u; }
        if (ctx->pc != 0x3C0100u) { return; }
    }
    ctx->pc = 0x3C0100u;
label_3c0100:
    // 0x3c0100: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3c0100u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0104: 0xc077264  jal         func_1DC990
    ctx->pc = 0x3C0104u;
    SET_GPR_U32(ctx, 31, 0x3C010Cu);
    ctx->pc = 0x3C0108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0104u;
            // 0x3c0108: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C010Cu; }
        if (ctx->pc != 0x3C010Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C010Cu; }
        if (ctx->pc != 0x3C010Cu) { return; }
    }
    ctx->pc = 0x3C010Cu;
label_3c010c:
    // 0x3c010c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3c010cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0110: 0xc0cef94  jal         func_33BE50
    ctx->pc = 0x3C0110u;
    SET_GPR_U32(ctx, 31, 0x3C0118u);
    ctx->pc = 0x3C0114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0110u;
            // 0x3c0114: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BE50u;
    if (runtime->hasFunction(0x33BE50u)) {
        auto targetFn = runtime->lookupFunction(0x33BE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0118u; }
        if (ctx->pc != 0x3C0118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BE50_0x33be50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0118u; }
        if (ctx->pc != 0x3C0118u) { return; }
    }
    ctx->pc = 0x3C0118u;
label_3c0118:
    // 0x3c0118: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3c0118u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c011c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3c011cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0120: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3c0120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3c0124: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3c0124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0128: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c0128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c012c: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x3c012cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x3c0130: 0xc0b884c  jal         func_2E2130
    ctx->pc = 0x3C0130u;
    SET_GPR_U32(ctx, 31, 0x3C0138u);
    ctx->pc = 0x3C0134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0130u;
            // 0x3c0134: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2130u;
    if (runtime->hasFunction(0x2E2130u)) {
        auto targetFn = runtime->lookupFunction(0x2E2130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0138u; }
        if (ctx->pc != 0x3C0138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2130_0x2e2130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0138u; }
        if (ctx->pc != 0x3C0138u) { return; }
    }
    ctx->pc = 0x3C0138u;
label_3c0138:
    // 0x3c0138: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x3c0138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_3c013c:
    // 0x3c013c: 0xc0f00cc  jal         func_3C0330
    ctx->pc = 0x3C013Cu;
    SET_GPR_U32(ctx, 31, 0x3C0144u);
    ctx->pc = 0x3C0330u;
    if (runtime->hasFunction(0x3C0330u)) {
        auto targetFn = runtime->lookupFunction(0x3C0330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0144u; }
        if (ctx->pc != 0x3C0144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C0330_0x3c0330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0144u; }
        if (ctx->pc != 0x3C0144u) { return; }
    }
    ctx->pc = 0x3C0144u;
label_3c0144:
    // 0x3c0144: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3c0144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3c0148: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c0148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c014c: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C014Cu;
    {
        const bool branch_taken_0x3c014c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3c014c) {
            ctx->pc = 0x3C0150u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C014Cu;
            // 0x3c0150: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C0170u;
            goto label_3c0170;
        }
    }
    ctx->pc = 0x3C0154u;
    // 0x3c0154: 0xc0f00cc  jal         func_3C0330
    ctx->pc = 0x3C0154u;
    SET_GPR_U32(ctx, 31, 0x3C015Cu);
    ctx->pc = 0x3C0158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0154u;
            // 0x3c0158: 0x26440070  addiu       $a0, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C0330u;
    if (runtime->hasFunction(0x3C0330u)) {
        auto targetFn = runtime->lookupFunction(0x3C0330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C015Cu; }
        if (ctx->pc != 0x3C015Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C0330_0x3c0330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C015Cu; }
        if (ctx->pc != 0x3C015Cu) { return; }
    }
    ctx->pc = 0x3C015Cu;
label_3c015c:
    // 0x3c015c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3c015cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3c0160: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3c0160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c0164: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C0164u;
    {
        const bool branch_taken_0x3c0164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c0164) {
            ctx->pc = 0x3C0168u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0164u;
            // 0x3c0168: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C0188u;
            goto label_3c0188;
        }
    }
    ctx->pc = 0x3C016Cu;
    // 0x3c016c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c016cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c0170:
    // 0x3c0170: 0x264400d0  addiu       $a0, $s2, 0xD0
    ctx->pc = 0x3c0170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x3c0174: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c0174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0178: 0xc0fece8  jal         func_3FB3A0
    ctx->pc = 0x3C0178u;
    SET_GPR_U32(ctx, 31, 0x3C0180u);
    ctx->pc = 0x3C017Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0178u;
            // 0x3c017c: 0x26470070  addiu       $a3, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FB3A0u;
    if (runtime->hasFunction(0x3FB3A0u)) {
        auto targetFn = runtime->lookupFunction(0x3FB3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0180u; }
        if (ctx->pc != 0x3C0180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FB3A0_0x3fb3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0180u; }
        if (ctx->pc != 0x3C0180u) { return; }
    }
    ctx->pc = 0x3C0180u;
label_3c0180:
    // 0x3c0180: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x3C0180u;
    {
        const bool branch_taken_0x3c0180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c0180) {
            ctx->pc = 0x3C0254u;
            goto label_3c0254;
        }
    }
    ctx->pc = 0x3C0188u;
label_3c0188:
    // 0x3c0188: 0xc0770c0  jal         func_1DC300
    ctx->pc = 0x3C0188u;
    SET_GPR_U32(ctx, 31, 0x3C0190u);
    ctx->pc = 0x1DC300u;
    if (runtime->hasFunction(0x1DC300u)) {
        auto targetFn = runtime->lookupFunction(0x1DC300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0190u; }
        if (ctx->pc != 0x3C0190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC300_0x1dc300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0190u; }
        if (ctx->pc != 0x3C0190u) { return; }
    }
    ctx->pc = 0x3C0190u;
label_3c0190:
    // 0x3c0190: 0xc0cef5c  jal         func_33BD70
    ctx->pc = 0x3C0190u;
    SET_GPR_U32(ctx, 31, 0x3C0198u);
    ctx->pc = 0x3C0194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0190u;
            // 0x3c0194: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BD70u;
    if (runtime->hasFunction(0x33BD70u)) {
        auto targetFn = runtime->lookupFunction(0x33BD70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0198u; }
        if (ctx->pc != 0x3C0198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BD70_0x33bd70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0198u; }
        if (ctx->pc != 0x3C0198u) { return; }
    }
    ctx->pc = 0x3C0198u;
label_3c0198:
    // 0x3c0198: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3c0198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c019c: 0x14430021  bne         $v0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x3C019Cu;
    {
        const bool branch_taken_0x3c019c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c019c) {
            ctx->pc = 0x3C0224u;
            goto label_3c0224;
        }
    }
    ctx->pc = 0x3C01A4u;
    // 0x3c01a4: 0xc0770c0  jal         func_1DC300
    ctx->pc = 0x3C01A4u;
    SET_GPR_U32(ctx, 31, 0x3C01ACu);
    ctx->pc = 0x3C01A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C01A4u;
            // 0x3c01a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC300u;
    if (runtime->hasFunction(0x1DC300u)) {
        auto targetFn = runtime->lookupFunction(0x1DC300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C01ACu; }
        if (ctx->pc != 0x3C01ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC300_0x1dc300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C01ACu; }
        if (ctx->pc != 0x3C01ACu) { return; }
    }
    ctx->pc = 0x3C01ACu;
label_3c01ac:
    // 0x3c01ac: 0xc0cef98  jal         func_33BE60
    ctx->pc = 0x3C01ACu;
    SET_GPR_U32(ctx, 31, 0x3C01B4u);
    ctx->pc = 0x3C01B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C01ACu;
            // 0x3c01b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BE60u;
    if (runtime->hasFunction(0x33BE60u)) {
        auto targetFn = runtime->lookupFunction(0x33BE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C01B4u; }
        if (ctx->pc != 0x3C01B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BE60_0x33be60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C01B4u; }
        if (ctx->pc != 0x3C01B4u) { return; }
    }
    ctx->pc = 0x3C01B4u;
label_3c01b4:
    // 0x3c01b4: 0xc0efc4c  jal         func_3BF130
    ctx->pc = 0x3C01B4u;
    SET_GPR_U32(ctx, 31, 0x3C01BCu);
    ctx->pc = 0x3C01B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C01B4u;
            // 0x3c01b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF130u;
    if (runtime->hasFunction(0x3BF130u)) {
        auto targetFn = runtime->lookupFunction(0x3BF130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C01BCu; }
        if (ctx->pc != 0x3C01BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF130_0x3bf130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C01BCu; }
        if (ctx->pc != 0x3C01BCu) { return; }
    }
    ctx->pc = 0x3C01BCu;
label_3c01bc:
    // 0x3c01bc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3c01bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3c01c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c01c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c01c4: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3C01C4u;
    {
        const bool branch_taken_0x3c01c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3c01c4) {
            ctx->pc = 0x3C01C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C01C4u;
            // 0x3c01c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C01F8u;
            goto label_3c01f8;
        }
    }
    ctx->pc = 0x3C01CCu;
    // 0x3c01cc: 0xc0770c0  jal         func_1DC300
    ctx->pc = 0x3C01CCu;
    SET_GPR_U32(ctx, 31, 0x3C01D4u);
    ctx->pc = 0x3C01D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C01CCu;
            // 0x3c01d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC300u;
    if (runtime->hasFunction(0x1DC300u)) {
        auto targetFn = runtime->lookupFunction(0x1DC300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C01D4u; }
        if (ctx->pc != 0x3C01D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC300_0x1dc300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C01D4u; }
        if (ctx->pc != 0x3C01D4u) { return; }
    }
    ctx->pc = 0x3C01D4u;
label_3c01d4:
    // 0x3c01d4: 0xc0cef98  jal         func_33BE60
    ctx->pc = 0x3C01D4u;
    SET_GPR_U32(ctx, 31, 0x3C01DCu);
    ctx->pc = 0x3C01D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C01D4u;
            // 0x3c01d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BE60u;
    if (runtime->hasFunction(0x33BE60u)) {
        auto targetFn = runtime->lookupFunction(0x33BE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C01DCu; }
        if (ctx->pc != 0x3C01DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BE60_0x33be60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C01DCu; }
        if (ctx->pc != 0x3C01DCu) { return; }
    }
    ctx->pc = 0x3C01DCu;
label_3c01dc:
    // 0x3c01dc: 0xc0efc4c  jal         func_3BF130
    ctx->pc = 0x3C01DCu;
    SET_GPR_U32(ctx, 31, 0x3C01E4u);
    ctx->pc = 0x3C01E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C01DCu;
            // 0x3c01e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF130u;
    if (runtime->hasFunction(0x3BF130u)) {
        auto targetFn = runtime->lookupFunction(0x3BF130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C01E4u; }
        if (ctx->pc != 0x3C01E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF130_0x3bf130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C01E4u; }
        if (ctx->pc != 0x3C01E4u) { return; }
    }
    ctx->pc = 0x3C01E4u;
label_3c01e4:
    // 0x3c01e4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3c01e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3c01e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3c01e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c01ec: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3C01ECu;
    {
        const bool branch_taken_0x3c01ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c01ec) {
            ctx->pc = 0x3C0224u;
            goto label_3c0224;
        }
    }
    ctx->pc = 0x3C01F4u;
    // 0x3c01f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c01f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c01f8:
    // 0x3c01f8: 0xc0770c0  jal         func_1DC300
    ctx->pc = 0x3C01F8u;
    SET_GPR_U32(ctx, 31, 0x3C0200u);
    ctx->pc = 0x1DC300u;
    if (runtime->hasFunction(0x1DC300u)) {
        auto targetFn = runtime->lookupFunction(0x1DC300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0200u; }
        if (ctx->pc != 0x3C0200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC300_0x1dc300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0200u; }
        if (ctx->pc != 0x3C0200u) { return; }
    }
    ctx->pc = 0x3C0200u;
label_3c0200:
    // 0x3c0200: 0xc0cef98  jal         func_33BE60
    ctx->pc = 0x3C0200u;
    SET_GPR_U32(ctx, 31, 0x3C0208u);
    ctx->pc = 0x3C0204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0200u;
            // 0x3c0204: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BE60u;
    if (runtime->hasFunction(0x33BE60u)) {
        auto targetFn = runtime->lookupFunction(0x33BE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0208u; }
        if (ctx->pc != 0x3C0208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BE60_0x33be60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0208u; }
        if (ctx->pc != 0x3C0208u) { return; }
    }
    ctx->pc = 0x3C0208u;
label_3c0208:
    // 0x3c0208: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c0208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c020c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3c020cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0210: 0x264400d0  addiu       $a0, $s2, 0xD0
    ctx->pc = 0x3c0210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x3c0214: 0xc0fece8  jal         func_3FB3A0
    ctx->pc = 0x3C0214u;
    SET_GPR_U32(ctx, 31, 0x3C021Cu);
    ctx->pc = 0x3C0218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0214u;
            // 0x3c0218: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FB3A0u;
    if (runtime->hasFunction(0x3FB3A0u)) {
        auto targetFn = runtime->lookupFunction(0x3FB3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C021Cu; }
        if (ctx->pc != 0x3C021Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FB3A0_0x3fb3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C021Cu; }
        if (ctx->pc != 0x3C021Cu) { return; }
    }
    ctx->pc = 0x3C021Cu;
label_3c021c:
    // 0x3c021c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3C021Cu;
    {
        const bool branch_taken_0x3c021c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c021c) {
            ctx->pc = 0x3C0254u;
            goto label_3c0254;
        }
    }
    ctx->pc = 0x3C0224u;
label_3c0224:
    // 0x3c0224: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c0224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3c0228: 0xc0770d8  jal         func_1DC360
    ctx->pc = 0x3C0228u;
    SET_GPR_U32(ctx, 31, 0x3C0230u);
    ctx->pc = 0x3C022Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0228u;
            // 0x3c022c: 0x8c440ea4  lw          $a0, 0xEA4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC360u;
    if (runtime->hasFunction(0x1DC360u)) {
        auto targetFn = runtime->lookupFunction(0x1DC360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0230u; }
        if (ctx->pc != 0x3C0230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC360_0x1dc360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0230u; }
        if (ctx->pc != 0x3C0230u) { return; }
    }
    ctx->pc = 0x3C0230u;
label_3c0230:
    // 0x3c0230: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c0230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0234: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3c0234u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0238: 0x264400d0  addiu       $a0, $s2, 0xD0
    ctx->pc = 0x3c0238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x3c023c: 0xc0fec1c  jal         func_3FB070
    ctx->pc = 0x3C023Cu;
    SET_GPR_U32(ctx, 31, 0x3C0244u);
    ctx->pc = 0x3C0240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C023Cu;
            // 0x3c0240: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FB070u;
    if (runtime->hasFunction(0x3FB070u)) {
        auto targetFn = runtime->lookupFunction(0x3FB070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0244u; }
        if (ctx->pc != 0x3C0244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FB070_0x3fb070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0244u; }
        if (ctx->pc != 0x3C0244u) { return; }
    }
    ctx->pc = 0x3C0244u;
label_3c0244:
    // 0x3c0244: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3C0244u;
    {
        const bool branch_taken_0x3c0244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c0244) {
            ctx->pc = 0x3C0254u;
            goto label_3c0254;
        }
    }
    ctx->pc = 0x3C024Cu;
label_3c024c:
    // 0x3c024c: 0xc0febe0  jal         func_3FAF80
    ctx->pc = 0x3C024Cu;
    SET_GPR_U32(ctx, 31, 0x3C0254u);
    ctx->pc = 0x3C0250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C024Cu;
            // 0x3c0250: 0x264400d0  addiu       $a0, $s2, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FAF80u;
    if (runtime->hasFunction(0x3FAF80u)) {
        auto targetFn = runtime->lookupFunction(0x3FAF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0254u; }
        if (ctx->pc != 0x3C0254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FAF80_0x3faf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0254u; }
        if (ctx->pc != 0x3C0254u) { return; }
    }
    ctx->pc = 0x3C0254u;
label_3c0254:
    // 0x3c0254: 0x260402e0  addiu       $a0, $s0, 0x2E0
    ctx->pc = 0x3c0254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 736));
label_3c0258:
    // 0x3c0258: 0xc04cc04  jal         func_133010
    ctx->pc = 0x3C0258u;
    SET_GPR_U32(ctx, 31, 0x3C0260u);
    ctx->pc = 0x3C025Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0258u;
            // 0x3c025c: 0x26450160  addiu       $a1, $s2, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0260u; }
        if (ctx->pc != 0x3C0260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0260u; }
        if (ctx->pc != 0x3C0260u) { return; }
    }
    ctx->pc = 0x3C0260u;
label_3c0260:
    // 0x3c0260: 0x26040560  addiu       $a0, $s0, 0x560
    ctx->pc = 0x3c0260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
    // 0x3c0264: 0xc075318  jal         func_1D4C60
    ctx->pc = 0x3C0264u;
    SET_GPR_U32(ctx, 31, 0x3C026Cu);
    ctx->pc = 0x3C0268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0264u;
            // 0x3c0268: 0x260502e0  addiu       $a1, $s0, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C026Cu; }
        if (ctx->pc != 0x3C026Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C026Cu; }
        if (ctx->pc != 0x3C026Cu) { return; }
    }
    ctx->pc = 0x3C026Cu;
label_3c026c:
    // 0x3c026c: 0x26050560  addiu       $a1, $s0, 0x560
    ctx->pc = 0x3c026cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
    // 0x3c0270: 0x26040840  addiu       $a0, $s0, 0x840
    ctx->pc = 0x3c0270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
    // 0x3c0274: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3c0274u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c0278: 0xc0c6250  jal         func_318940
    ctx->pc = 0x3C0278u;
    SET_GPR_U32(ctx, 31, 0x3C0280u);
    ctx->pc = 0x3C027Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0278u;
            // 0x3c027c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0280u; }
        if (ctx->pc != 0x3C0280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C0280u; }
        if (ctx->pc != 0x3C0280u) { return; }
    }
    ctx->pc = 0x3C0280u;
label_3c0280:
    // 0x3c0280: 0x26030890  addiu       $v1, $s0, 0x890
    ctx->pc = 0x3c0280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
    // 0x3c0284: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3c0284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x3c0288: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c0288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c028c: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x3c028cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x3c0290: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x3c0290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x3c0294: 0xc0c6250  jal         func_318940
    ctx->pc = 0x3C0294u;
    SET_GPR_U32(ctx, 31, 0x3C029Cu);
    ctx->pc = 0x3C0298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0294u;
            // 0x3c0298: 0x26060560  addiu       $a2, $s0, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C029Cu; }
        if (ctx->pc != 0x3C029Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C029Cu; }
        if (ctx->pc != 0x3C029Cu) { return; }
    }
    ctx->pc = 0x3C029Cu;
label_3c029c:
    // 0x3c029c: 0x26040560  addiu       $a0, $s0, 0x560
    ctx->pc = 0x3c029cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
    // 0x3c02a0: 0x26450150  addiu       $a1, $s2, 0x150
    ctx->pc = 0x3c02a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x3c02a4: 0xc075378  jal         func_1D4DE0
    ctx->pc = 0x3C02A4u;
    SET_GPR_U32(ctx, 31, 0x3C02ACu);
    ctx->pc = 0x3C02A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C02A4u;
            // 0x3c02a8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C02ACu; }
        if (ctx->pc != 0x3C02ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C02ACu; }
        if (ctx->pc != 0x3C02ACu) { return; }
    }
    ctx->pc = 0x3C02ACu;
label_3c02ac:
    // 0x3c02ac: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3c02acu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3c02b0: 0x2604087c  addiu       $a0, $s0, 0x87C
    ctx->pc = 0x3c02b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2172));
    // 0x3c02b4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3c02b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3c02b8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3c02b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3c02bc: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x3C02BCu;
    SET_GPR_U32(ctx, 31, 0x3C02C4u);
    ctx->pc = 0x3C02C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C02BCu;
            // 0x3c02c0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C02C4u; }
        if (ctx->pc != 0x3C02C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C02C4u; }
        if (ctx->pc != 0x3C02C4u) { return; }
    }
    ctx->pc = 0x3C02C4u;
label_3c02c4:
    // 0x3c02c4: 0x2604092c  addiu       $a0, $s0, 0x92C
    ctx->pc = 0x3c02c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2348));
    // 0x3c02c8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3c02c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3c02cc: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3c02ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3c02d0: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x3C02D0u;
    SET_GPR_U32(ctx, 31, 0x3C02D8u);
    ctx->pc = 0x3C02D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C02D0u;
            // 0x3c02d4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C02D8u; }
        if (ctx->pc != 0x3C02D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C02D8u; }
        if (ctx->pc != 0x3C02D8u) { return; }
    }
    ctx->pc = 0x3C02D8u;
label_3c02d8:
    // 0x3c02d8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3c02d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3c02dc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3c02dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3c02e0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3c02e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c02e4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3c02e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c02e8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3c02e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c02ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c02ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c02f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c02f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c02f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3C02F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C02F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C02F4u;
            // 0x3c02f8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C02FCu;
    // 0x3c02fc: 0x0  nop
    ctx->pc = 0x3c02fcu;
    // NOP
}
