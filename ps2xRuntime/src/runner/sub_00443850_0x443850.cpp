#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00443850
// Address: 0x443850 - 0x443950
void sub_00443850_0x443850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00443850_0x443850");
#endif

    switch (ctx->pc) {
        case 0x443874u: goto label_443874;
        case 0x443880u: goto label_443880;
        case 0x44388cu: goto label_44388c;
        case 0x443898u: goto label_443898;
        case 0x4438acu: goto label_4438ac;
        case 0x4438b4u: goto label_4438b4;
        case 0x4438bcu: goto label_4438bc;
        case 0x4438d4u: goto label_4438d4;
        case 0x4438e4u: goto label_4438e4;
        case 0x44392cu: goto label_44392c;
        case 0x443938u: goto label_443938;
        default: break;
    }

    ctx->pc = 0x443850u;

    // 0x443850: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x443850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x443854: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x443854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x443858: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x443858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x44385c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44385cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x443860: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x443860u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443864: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x443864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443868: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x443868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x44386c: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x44386Cu;
    SET_GPR_U32(ctx, 31, 0x443874u);
    ctx->pc = 0x443870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44386Cu;
            // 0x443870: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443874u; }
        if (ctx->pc != 0x443874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443874u; }
        if (ctx->pc != 0x443874u) { return; }
    }
    ctx->pc = 0x443874u;
label_443874:
    // 0x443874: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x443874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x443878: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x443878u;
    SET_GPR_U32(ctx, 31, 0x443880u);
    ctx->pc = 0x44387Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443878u;
            // 0x44387c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443880u; }
        if (ctx->pc != 0x443880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443880u; }
        if (ctx->pc != 0x443880u) { return; }
    }
    ctx->pc = 0x443880u;
label_443880:
    // 0x443880: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x443880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x443884: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x443884u;
    SET_GPR_U32(ctx, 31, 0x44388Cu);
    ctx->pc = 0x443888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443884u;
            // 0x443888: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44388Cu; }
        if (ctx->pc != 0x44388Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44388Cu; }
        if (ctx->pc != 0x44388Cu) { return; }
    }
    ctx->pc = 0x44388Cu;
label_44388c:
    // 0x44388c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x44388cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x443890: 0xc04ccf4  jal         func_1333D0
    ctx->pc = 0x443890u;
    SET_GPR_U32(ctx, 31, 0x443898u);
    ctx->pc = 0x443894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443890u;
            // 0x443894: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443898u; }
        if (ctx->pc != 0x443898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443898u; }
        if (ctx->pc != 0x443898u) { return; }
    }
    ctx->pc = 0x443898u;
label_443898:
    // 0x443898: 0x8e220290  lw          $v0, 0x290($s1)
    ctx->pc = 0x443898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 656)));
    // 0x44389c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x44389cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x4438a0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x4438a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x4438a4: 0xc04cca0  jal         func_133280
    ctx->pc = 0x4438A4u;
    SET_GPR_U32(ctx, 31, 0x4438ACu);
    ctx->pc = 0x4438A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4438A4u;
            // 0x4438a8: 0x244602c0  addiu       $a2, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4438ACu; }
        if (ctx->pc != 0x4438ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4438ACu; }
        if (ctx->pc != 0x4438ACu) { return; }
    }
    ctx->pc = 0x4438ACu;
label_4438ac:
    // 0x4438ac: 0xc049514  jal         func_125450
    ctx->pc = 0x4438ACu;
    SET_GPR_U32(ctx, 31, 0x4438B4u);
    ctx->pc = 0x4438B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4438ACu;
            // 0x4438b0: 0xc7ac0108  lwc1        $f12, 0x108($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4438B4u; }
        if (ctx->pc != 0x4438B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4438B4u; }
        if (ctx->pc != 0x4438B4u) { return; }
    }
    ctx->pc = 0x4438B4u;
label_4438b4:
    // 0x4438b4: 0xc0474b6  jal         func_11D2D8
    ctx->pc = 0x4438B4u;
    SET_GPR_U32(ctx, 31, 0x4438BCu);
    ctx->pc = 0x4438B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4438B4u;
            // 0x4438b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4438BCu; }
        if (ctx->pc != 0x4438BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4438BCu; }
        if (ctx->pc != 0x4438BCu) { return; }
    }
    ctx->pc = 0x4438BCu;
label_4438bc:
    // 0x4438bc: 0x3c02422c  lui         $v0, 0x422C
    ctx->pc = 0x4438bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16940 << 16));
    // 0x4438c0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x4438c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x4438c4: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x4438c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
    // 0x4438c8: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x4438c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x4438cc: 0xc04cc04  jal         func_133010
    ctx->pc = 0x4438CCu;
    SET_GPR_U32(ctx, 31, 0x4438D4u);
    ctx->pc = 0x4438D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4438CCu;
            // 0x4438d0: 0xafa00104  sw          $zero, 0x104($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4438D4u; }
        if (ctx->pc != 0x4438D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4438D4u; }
        if (ctx->pc != 0x4438D4u) { return; }
    }
    ctx->pc = 0x4438D4u;
label_4438d4:
    // 0x4438d4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x4438d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x4438d8: 0xafa000f8  sw          $zero, 0xF8($sp)
    ctx->pc = 0x4438d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 0));
    // 0x4438dc: 0xc04cc44  jal         func_133110
    ctx->pc = 0x4438DCu;
    SET_GPR_U32(ctx, 31, 0x4438E4u);
    ctx->pc = 0x4438E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4438DCu;
            // 0x4438e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4438E4u; }
        if (ctx->pc != 0x4438E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4438E4u; }
        if (ctx->pc != 0x4438E4u) { return; }
    }
    ctx->pc = 0x4438E4u;
label_4438e4:
    // 0x4438e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4438e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4438e8: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4438e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x4438ec: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4438ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x4438f0: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x4438f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4438f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4438f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4438f8: 0x2463d448  addiu       $v1, $v1, -0x2BB8
    ctx->pc = 0x4438f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956104));
    // 0x4438fc: 0xc7a200f0  lwc1        $f2, 0xF0($sp)
    ctx->pc = 0x4438fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x443900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x443900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443904: 0x90420c6a  lbu         $v0, 0xC6A($v0)
    ctx->pc = 0x443904u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3178)));
    // 0x443908: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x443908u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x44390c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x44390cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x443910: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x443910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x443914: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x443914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x443918: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x443918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x44391c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x44391cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x443920: 0x4600101c  madd.s      $f0, $f2, $f0
    ctx->pc = 0x443920u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
    // 0x443924: 0xc04cca0  jal         func_133280
    ctx->pc = 0x443924u;
    SET_GPR_U32(ctx, 31, 0x44392Cu);
    ctx->pc = 0x443928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443924u;
            // 0x443928: 0xe7a00100  swc1        $f0, 0x100($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44392Cu; }
        if (ctx->pc != 0x44392Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44392Cu; }
        if (ctx->pc != 0x44392Cu) { return; }
    }
    ctx->pc = 0x44392Cu;
label_44392c:
    // 0x44392c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44392cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443930: 0xc04cc44  jal         func_133110
    ctx->pc = 0x443930u;
    SET_GPR_U32(ctx, 31, 0x443938u);
    ctx->pc = 0x443934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443930u;
            // 0x443934: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443938u; }
        if (ctx->pc != 0x443938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443938u; }
        if (ctx->pc != 0x443938u) { return; }
    }
    ctx->pc = 0x443938u;
label_443938:
    // 0x443938: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x443938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44393c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44393cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x443940: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x443940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x443944: 0x3e00008  jr          $ra
    ctx->pc = 0x443944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x443944u;
            // 0x443948: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44394Cu;
    // 0x44394c: 0x0  nop
    ctx->pc = 0x44394cu;
    // NOP
}
