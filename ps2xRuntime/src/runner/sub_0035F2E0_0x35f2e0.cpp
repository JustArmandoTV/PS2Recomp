#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0035F2E0
// Address: 0x35f2e0 - 0x35f520
void sub_0035F2E0_0x35f2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035F2E0_0x35f2e0");
#endif

    switch (ctx->pc) {
        case 0x35f350u: goto label_35f350;
        case 0x35f358u: goto label_35f358;
        case 0x35f378u: goto label_35f378;
        case 0x35f398u: goto label_35f398;
        case 0x35f3a8u: goto label_35f3a8;
        case 0x35f4a4u: goto label_35f4a4;
        case 0x35f4acu: goto label_35f4ac;
        case 0x35f4c8u: goto label_35f4c8;
        case 0x35f4f0u: goto label_35f4f0;
        case 0x35f500u: goto label_35f500;
        default: break;
    }

    ctx->pc = 0x35f2e0u;

    // 0x35f2e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35f2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35f2e4: 0x3c033eef  lui         $v1, 0x3EEF
    ctx->pc = 0x35f2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16111 << 16));
    // 0x35f2e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x35f2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x35f2ec: 0x3463684c  ori         $v1, $v1, 0x684C
    ctx->pc = 0x35f2ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26700);
    // 0x35f2f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x35f2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x35f2f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35f2f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35f2f8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x35f2f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x35f2fc: 0xc4840de4  lwc1        $f4, 0xDE4($a0)
    ctx->pc = 0x35f2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x35f300: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x35f300u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35f304: 0x4501002a  bc1t        . + 4 + (0x2A << 2)
    ctx->pc = 0x35F304u;
    {
        const bool branch_taken_0x35f304 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x35F308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35F304u;
            // 0x35f308: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f304) {
            ctx->pc = 0x35F3B0u;
            goto label_35f3b0;
        }
    }
    ctx->pc = 0x35F30Cu;
    // 0x35f30c: 0x2ca10086  sltiu       $at, $a1, 0x86
    ctx->pc = 0x35f30cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)134) ? 1 : 0);
    // 0x35f310: 0x50200028  beql        $at, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x35F310u;
    {
        const bool branch_taken_0x35f310 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f310) {
            ctx->pc = 0x35F314u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35F310u;
            // 0x35f314: 0x3c033e84  lui         $v1, 0x3E84 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16004 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35F3B4u;
            goto label_35f3b4;
        }
    }
    ctx->pc = 0x35F318u;
    // 0x35f318: 0x3c023f88  lui         $v0, 0x3F88
    ctx->pc = 0x35f318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16264 << 16));
    // 0x35f31c: 0x3442e38e  ori         $v0, $v0, 0xE38E
    ctx->pc = 0x35f31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58254);
    // 0x35f320: 0xae020de4  sw          $v0, 0xDE4($s0)
    ctx->pc = 0x35f320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3556), GPR_U32(ctx, 2));
    // 0x35f324: 0x8e020518  lw          $v0, 0x518($s0)
    ctx->pc = 0x35f324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1304)));
    // 0x35f328: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x35f328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x35f32c: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x35F32Cu;
    {
        const bool branch_taken_0x35f32c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f32c) {
            ctx->pc = 0x35F330u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35F32Cu;
            // 0x35f330: 0x8e030e34  lw          $v1, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35F380u;
            goto label_35f380;
        }
    }
    ctx->pc = 0x35F334u;
    // 0x35f334: 0xc6010a7c  lwc1        $f1, 0xA7C($s0)
    ctx->pc = 0x35f334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35f338: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x35f338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x35f33c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35f33cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35f340: 0x26040a50  addiu       $a0, $s0, 0xA50
    ctx->pc = 0x35f340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
    // 0x35f344: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x35f344u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x35f348: 0xc0eea24  jal         func_3BA890
    ctx->pc = 0x35F348u;
    SET_GPR_U32(ctx, 31, 0x35F350u);
    ctx->pc = 0x35F34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35F348u;
            // 0x35f34c: 0xe6000a7c  swc1        $f0, 0xA7C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2684), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BA890u;
    if (runtime->hasFunction(0x3BA890u)) {
        auto targetFn = runtime->lookupFunction(0x3BA890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35F350u; }
        if (ctx->pc != 0x35F350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BA890_0x3ba890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35F350u; }
        if (ctx->pc != 0x35F350u) { return; }
    }
    ctx->pc = 0x35F350u;
label_35f350:
    // 0x35f350: 0xc040180  jal         func_100600
    ctx->pc = 0x35F350u;
    SET_GPR_U32(ctx, 31, 0x35F358u);
    ctx->pc = 0x35F354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35F350u;
            // 0x35f354: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35F358u; }
        if (ctx->pc != 0x35F358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35F358u; }
        if (ctx->pc != 0x35F358u) { return; }
    }
    ctx->pc = 0x35F358u;
label_35f358:
    // 0x35f358: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x35f358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f35c: 0x50800069  beql        $a0, $zero, . + 4 + (0x69 << 2)
    ctx->pc = 0x35F35Cu;
    {
        const bool branch_taken_0x35f35c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f35c) {
            ctx->pc = 0x35F360u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35F35Cu;
            // 0x35f360: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35F504u;
            goto label_35f504;
        }
    }
    ctx->pc = 0x35F364u;
    // 0x35f364: 0x8e050d98  lw          $a1, 0xD98($s0)
    ctx->pc = 0x35f364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
    // 0x35f368: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x35f368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x35f36c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x35f36cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x35f370: 0xc11ebc4  jal         func_47AF10
    ctx->pc = 0x35F370u;
    SET_GPR_U32(ctx, 31, 0x35F378u);
    ctx->pc = 0x35F374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35F370u;
            // 0x35f374: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47AF10u;
    if (runtime->hasFunction(0x47AF10u)) {
        auto targetFn = runtime->lookupFunction(0x47AF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35F378u; }
        if (ctx->pc != 0x35F378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047AF10_0x47af10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35F378u; }
        if (ctx->pc != 0x35F378u) { return; }
    }
    ctx->pc = 0x35F378u;
label_35f378:
    // 0x35f378: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x35F378u;
    {
        const bool branch_taken_0x35f378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f378) {
            ctx->pc = 0x35F500u;
            goto label_35f500;
        }
    }
    ctx->pc = 0x35F380u;
label_35f380:
    // 0x35f380: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x35f380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35f384: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35F384u;
    {
        const bool branch_taken_0x35f384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x35f384) {
            ctx->pc = 0x35F388u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35F384u;
            // 0x35f388: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35F3A0u;
            goto label_35f3a0;
        }
    }
    ctx->pc = 0x35F38Cu;
    // 0x35f38c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x35f38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x35f390: 0xc075ecc  jal         func_1D7B30
    ctx->pc = 0x35F390u;
    SET_GPR_U32(ctx, 31, 0x35F398u);
    ctx->pc = 0x35F394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35F390u;
            // 0x35f394: 0x8c45cf88  lw          $a1, -0x3078($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954888)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7B30u;
    if (runtime->hasFunction(0x1D7B30u)) {
        auto targetFn = runtime->lookupFunction(0x1D7B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35F398u; }
        if (ctx->pc != 0x35F398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7B30_0x1d7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35F398u; }
        if (ctx->pc != 0x35F398u) { return; }
    }
    ctx->pc = 0x35F398u;
label_35f398:
    // 0x35f398: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x35F398u;
    {
        const bool branch_taken_0x35f398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f398) {
            ctx->pc = 0x35F500u;
            goto label_35f500;
        }
    }
    ctx->pc = 0x35F3A0u;
label_35f3a0:
    // 0x35f3a0: 0xc075ecc  jal         func_1D7B30
    ctx->pc = 0x35F3A0u;
    SET_GPR_U32(ctx, 31, 0x35F3A8u);
    ctx->pc = 0x1D7B30u;
    if (runtime->hasFunction(0x1D7B30u)) {
        auto targetFn = runtime->lookupFunction(0x1D7B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35F3A8u; }
        if (ctx->pc != 0x35F3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7B30_0x1d7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35F3A8u; }
        if (ctx->pc != 0x35F3A8u) { return; }
    }
    ctx->pc = 0x35F3A8u;
label_35f3a8:
    // 0x35f3a8: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x35F3A8u;
    {
        const bool branch_taken_0x35f3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f3a8) {
            ctx->pc = 0x35F500u;
            goto label_35f500;
        }
    }
    ctx->pc = 0x35F3B0u;
label_35f3b0:
    // 0x35f3b0: 0x3c033e84  lui         $v1, 0x3E84
    ctx->pc = 0x35f3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16004 << 16));
label_35f3b4:
    // 0x35f3b4: 0x3463bda1  ori         $v1, $v1, 0xBDA1
    ctx->pc = 0x35f3b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48545);
    // 0x35f3b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x35f3b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35f3bc: 0x0  nop
    ctx->pc = 0x35f3bcu;
    // NOP
    // 0x35f3c0: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x35f3c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35f3c4: 0x4501004e  bc1t        . + 4 + (0x4E << 2)
    ctx->pc = 0x35F3C4u;
    {
        const bool branch_taken_0x35f3c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x35f3c4) {
            ctx->pc = 0x35F500u;
            goto label_35f500;
        }
    }
    ctx->pc = 0x35F3CCu;
    // 0x35f3cc: 0x2ca109c5  sltiu       $at, $a1, 0x9C5
    ctx->pc = 0x35f3ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2501) ? 1 : 0);
    // 0x35f3d0: 0x1020004b  beqz        $at, . + 4 + (0x4B << 2)
    ctx->pc = 0x35F3D0u;
    {
        const bool branch_taken_0x35f3d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f3d0) {
            ctx->pc = 0x35F500u;
            goto label_35f500;
        }
    }
    ctx->pc = 0x35F3D8u;
    // 0x35f3d8: 0x3c023eef  lui         $v0, 0x3EEF
    ctx->pc = 0x35f3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16111 << 16));
    // 0x35f3dc: 0x3442684c  ori         $v0, $v0, 0x684C
    ctx->pc = 0x35f3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26700);
    // 0x35f3e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35f3e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35f3e4: 0x0  nop
    ctx->pc = 0x35f3e4u;
    // NOP
    // 0x35f3e8: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x35f3e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35f3ec: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x35F3ECu;
    {
        const bool branch_taken_0x35f3ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x35f3ec) {
            ctx->pc = 0x35F3F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35F3ECu;
            // 0x35f3f0: 0x46012041  sub.s       $f1, $f4, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x35F3FCu;
            goto label_35f3fc;
        }
    }
    ctx->pc = 0x35F3F4u;
    // 0x35f3f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x35F3F4u;
    {
        const bool branch_taken_0x35f3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35F3F4u;
            // 0x35f3f8: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f3f4) {
            ctx->pc = 0x35F418u;
            goto label_35f418;
        }
    }
    ctx->pc = 0x35F3FCu;
label_35f3fc:
    // 0x35f3fc: 0x3c023cbd  lui         $v0, 0x3CBD
    ctx->pc = 0x35f3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15549 << 16));
    // 0x35f400: 0x3442a130  ori         $v0, $v0, 0xA130
    ctx->pc = 0x35f400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41264);
    // 0x35f404: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35f404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35f408: 0x0  nop
    ctx->pc = 0x35f408u;
    // NOP
    // 0x35f40c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x35f40cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x35f410: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35f410u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x35f414: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x35f414u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_35f418:
    // 0x35f418: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x35f418u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35f41c: 0x240209c4  addiu       $v0, $zero, 0x9C4
    ctx->pc = 0x35f41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2500));
    // 0x35f420: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x35f420u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x35f424: 0x3c021062  lui         $v0, 0x1062
    ctx->pc = 0x35f424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4194 << 16));
    // 0x35f428: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x35f428u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x35f42c: 0x34424dd3  ori         $v0, $v0, 0x4DD3
    ctx->pc = 0x35f42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19923);
    // 0x35f430: 0x24a54650  addiu       $a1, $a1, 0x4650
    ctx->pc = 0x35f430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18000));
    // 0x35f434: 0x430019  multu       $v0, $v1
    ctx->pc = 0x35f434u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x35f438: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35f438u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35f43c: 0x0  nop
    ctx->pc = 0x35f43cu;
    // NOP
    // 0x35f440: 0x46040018  adda.s      $f0, $f4
    ctx->pc = 0x35f440u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x35f444: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x35f444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x35f448: 0x24424620  addiu       $v0, $v0, 0x4620
    ctx->pc = 0x35f448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17952));
    // 0x35f44c: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x35f44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35f450: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x35f450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x35f454: 0x244245f0  addiu       $v0, $v0, 0x45F0
    ctx->pc = 0x35f454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17904));
    // 0x35f458: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35f458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35f45c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x35f45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35f460: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x35f460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35f464: 0x1010  mfhi        $v0
    ctx->pc = 0x35f464u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x35f468: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x35f468u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x35f46c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35f46cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35f470: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x35f470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x35f474: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x35f474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35f478: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x35f478u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x35f47c: 0xe6000de4  swc1        $f0, 0xDE4($s0)
    ctx->pc = 0x35f47cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3556), bits); }
    // 0x35f480: 0x8e020518  lw          $v0, 0x518($s0)
    ctx->pc = 0x35f480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1304)));
    // 0x35f484: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x35f484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x35f488: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x35F488u;
    {
        const bool branch_taken_0x35f488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35F48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35F488u;
            // 0x35f48c: 0x46031502  mul.s       $f20, $f2, $f3 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f488) {
            ctx->pc = 0x35F4D0u;
            goto label_35f4d0;
        }
    }
    ctx->pc = 0x35F490u;
    // 0x35f490: 0xc6000a7c  lwc1        $f0, 0xA7C($s0)
    ctx->pc = 0x35f490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35f494: 0x26040a50  addiu       $a0, $s0, 0xA50
    ctx->pc = 0x35f494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
    // 0x35f498: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x35f498u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x35f49c: 0xc0eea24  jal         func_3BA890
    ctx->pc = 0x35F49Cu;
    SET_GPR_U32(ctx, 31, 0x35F4A4u);
    ctx->pc = 0x35F4A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35F49Cu;
            // 0x35f4a0: 0xe6000a7c  swc1        $f0, 0xA7C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2684), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BA890u;
    if (runtime->hasFunction(0x3BA890u)) {
        auto targetFn = runtime->lookupFunction(0x3BA890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35F4A4u; }
        if (ctx->pc != 0x35F4A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BA890_0x3ba890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35F4A4u; }
        if (ctx->pc != 0x35F4A4u) { return; }
    }
    ctx->pc = 0x35F4A4u;
label_35f4a4:
    // 0x35f4a4: 0xc040180  jal         func_100600
    ctx->pc = 0x35F4A4u;
    SET_GPR_U32(ctx, 31, 0x35F4ACu);
    ctx->pc = 0x35F4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35F4A4u;
            // 0x35f4a8: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35F4ACu; }
        if (ctx->pc != 0x35F4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35F4ACu; }
        if (ctx->pc != 0x35F4ACu) { return; }
    }
    ctx->pc = 0x35F4ACu;
label_35f4ac:
    // 0x35f4ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x35f4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f4b0: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x35F4B0u;
    {
        const bool branch_taken_0x35f4b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f4b0) {
            ctx->pc = 0x35F500u;
            goto label_35f500;
        }
    }
    ctx->pc = 0x35F4B8u;
    // 0x35f4b8: 0x8e050d98  lw          $a1, 0xD98($s0)
    ctx->pc = 0x35f4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
    // 0x35f4bc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x35f4bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x35f4c0: 0xc11ebc4  jal         func_47AF10
    ctx->pc = 0x35F4C0u;
    SET_GPR_U32(ctx, 31, 0x35F4C8u);
    ctx->pc = 0x35F4C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35F4C0u;
            // 0x35f4c4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47AF10u;
    if (runtime->hasFunction(0x47AF10u)) {
        auto targetFn = runtime->lookupFunction(0x47AF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35F4C8u; }
        if (ctx->pc != 0x35F4C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047AF10_0x47af10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35F4C8u; }
        if (ctx->pc != 0x35F4C8u) { return; }
    }
    ctx->pc = 0x35F4C8u;
label_35f4c8:
    // 0x35f4c8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x35F4C8u;
    {
        const bool branch_taken_0x35f4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f4c8) {
            ctx->pc = 0x35F500u;
            goto label_35f500;
        }
    }
    ctx->pc = 0x35F4D0u;
label_35f4d0:
    // 0x35f4d0: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x35f4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
    // 0x35f4d4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x35f4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35f4d8: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35F4D8u;
    {
        const bool branch_taken_0x35f4d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x35f4d8) {
            ctx->pc = 0x35F4DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35F4D8u;
            // 0x35f4dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35F4F8u;
            goto label_35f4f8;
        }
    }
    ctx->pc = 0x35F4E0u;
    // 0x35f4e0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x35f4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x35f4e4: 0x8c45cf88  lw          $a1, -0x3078($v0)
    ctx->pc = 0x35f4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954888)));
    // 0x35f4e8: 0xc075ecc  jal         func_1D7B30
    ctx->pc = 0x35F4E8u;
    SET_GPR_U32(ctx, 31, 0x35F4F0u);
    ctx->pc = 0x35F4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35F4E8u;
            // 0x35f4ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7B30u;
    if (runtime->hasFunction(0x1D7B30u)) {
        auto targetFn = runtime->lookupFunction(0x1D7B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35F4F0u; }
        if (ctx->pc != 0x35F4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7B30_0x1d7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35F4F0u; }
        if (ctx->pc != 0x35F4F0u) { return; }
    }
    ctx->pc = 0x35F4F0u;
label_35f4f0:
    // 0x35f4f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x35F4F0u;
    {
        const bool branch_taken_0x35f4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f4f0) {
            ctx->pc = 0x35F500u;
            goto label_35f500;
        }
    }
    ctx->pc = 0x35F4F8u;
label_35f4f8:
    // 0x35f4f8: 0xc075ecc  jal         func_1D7B30
    ctx->pc = 0x35F4F8u;
    SET_GPR_U32(ctx, 31, 0x35F500u);
    ctx->pc = 0x35F4FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35F4F8u;
            // 0x35f4fc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7B30u;
    if (runtime->hasFunction(0x1D7B30u)) {
        auto targetFn = runtime->lookupFunction(0x1D7B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35F500u; }
        if (ctx->pc != 0x35F500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7B30_0x1d7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35F500u; }
        if (ctx->pc != 0x35F500u) { return; }
    }
    ctx->pc = 0x35F500u;
label_35f500:
    // 0x35f500: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35f500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_35f504:
    // 0x35f504: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x35f504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x35f508: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35f508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35f50c: 0x3e00008  jr          $ra
    ctx->pc = 0x35F50Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35F50Cu;
            // 0x35f510: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35F514u;
    // 0x35f514: 0x0  nop
    ctx->pc = 0x35f514u;
    // NOP
    // 0x35f518: 0x0  nop
    ctx->pc = 0x35f518u;
    // NOP
    // 0x35f51c: 0x0  nop
    ctx->pc = 0x35f51cu;
    // NOP
}
