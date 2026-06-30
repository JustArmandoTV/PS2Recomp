#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0037D0E0
// Address: 0x37d0e0 - 0x37d360
void sub_0037D0E0_0x37d0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037D0E0_0x37d0e0");
#endif

    switch (ctx->pc) {
        case 0x37d10cu: goto label_37d10c;
        case 0x37d118u: goto label_37d118;
        case 0x37d160u: goto label_37d160;
        case 0x37d16cu: goto label_37d16c;
        case 0x37d188u: goto label_37d188;
        case 0x37d194u: goto label_37d194;
        case 0x37d1a4u: goto label_37d1a4;
        case 0x37d1b4u: goto label_37d1b4;
        case 0x37d230u: goto label_37d230;
        case 0x37d2f0u: goto label_37d2f0;
        case 0x37d300u: goto label_37d300;
        case 0x37d328u: goto label_37d328;
        case 0x37d334u: goto label_37d334;
        default: break;
    }

    ctx->pc = 0x37d0e0u;

    // 0x37d0e0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x37d0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x37d0e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x37d0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x37d0e8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x37d0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x37d0ec: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x37d0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x37d0f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37d0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x37d0f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37d0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37d0f8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x37d0f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x37d0fc: 0x80910082  lb          $s1, 0x82($a0)
    ctx->pc = 0x37d0fcu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 130)));
    // 0x37d100: 0x80900081  lb          $s0, 0x81($a0)
    ctx->pc = 0x37d100u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 129)));
    // 0x37d104: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x37D104u;
    SET_GPR_U32(ctx, 31, 0x37D10Cu);
    ctx->pc = 0x37D108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37D104u;
            // 0x37d108: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D10Cu; }
        if (ctx->pc != 0x37D10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D10Cu; }
        if (ctx->pc != 0x37D10Cu) { return; }
    }
    ctx->pc = 0x37D10Cu;
label_37d10c:
    // 0x37d10c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x37d10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x37d110: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x37D110u;
    SET_GPR_U32(ctx, 31, 0x37D118u);
    ctx->pc = 0x37D114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37D110u;
            // 0x37d114: 0x29f40  sll         $s3, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D118u; }
        if (ctx->pc != 0x37D118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D118u; }
        if (ctx->pc != 0x37D118u) { return; }
    }
    ctx->pc = 0x37D118u;
label_37d118:
    // 0x37d118: 0x532025  or          $a0, $v0, $s3
    ctx->pc = 0x37d118u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x37d11c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37d11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37d120: 0x90001b  divu        $zero, $a0, $s0
    ctx->pc = 0x37d120u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x37d124: 0x2010  mfhi        $a0
    ctx->pc = 0x37d124u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x37d128: 0xa2440082  sb          $a0, 0x82($s2)
    ctx->pc = 0x37d128u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 130), (uint8_t)GPR_U32(ctx, 4));
    // 0x37d12c: 0xae430070  sw          $v1, 0x70($s2)
    ctx->pc = 0x37d12cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 3));
    // 0x37d130: 0xae400078  sw          $zero, 0x78($s2)
    ctx->pc = 0x37d130u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 0));
    // 0x37d134: 0x82430082  lb          $v1, 0x82($s2)
    ctx->pc = 0x37d134u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 130)));
    // 0x37d138: 0x56230004  bnel        $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x37D138u;
    {
        const bool branch_taken_0x37d138 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x37d138) {
            ctx->pc = 0x37D13Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37D138u;
            // 0x37d13c: 0x8e420050  lw          $v0, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37D14Cu;
            goto label_37d14c;
        }
    }
    ctx->pc = 0x37D140u;
    // 0x37d140: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37d140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37d144: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x37D144u;
    {
        const bool branch_taken_0x37d144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37D144u;
            // 0x37d148: 0xae430070  sw          $v1, 0x70($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d144) {
            ctx->pc = 0x37D334u;
            goto label_37d334;
        }
    }
    ctx->pc = 0x37D14Cu;
label_37d14c:
    // 0x37d14c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x37d14cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x37d150: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x37d150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x37d154: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x37d154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x37d158: 0xc04cc90  jal         func_133240
    ctx->pc = 0x37D158u;
    SET_GPR_U32(ctx, 31, 0x37D160u);
    ctx->pc = 0x37D15Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37D158u;
            // 0x37d15c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D160u; }
        if (ctx->pc != 0x37D160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D160u; }
        if (ctx->pc != 0x37D160u) { return; }
    }
    ctx->pc = 0x37D160u;
label_37d160:
    // 0x37d160: 0xc654007c  lwc1        $f20, 0x7C($s2)
    ctx->pc = 0x37d160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x37d164: 0xc04cc14  jal         func_133050
    ctx->pc = 0x37D164u;
    SET_GPR_U32(ctx, 31, 0x37D16Cu);
    ctx->pc = 0x37D168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37D164u;
            // 0x37d168: 0x26440060  addiu       $a0, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D16Cu; }
        if (ctx->pc != 0x37D16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D16Cu; }
        if (ctx->pc != 0x37D16Cu) { return; }
    }
    ctx->pc = 0x37D16Cu;
label_37d16c:
    // 0x37d16c: 0x0  nop
    ctx->pc = 0x37d16cu;
    // NOP
    // 0x37d170: 0x0  nop
    ctx->pc = 0x37d170u;
    // NOP
    // 0x37d174: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x37d174u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x37d178: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x37d178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x37d17c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x37d17cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d180: 0xc04cc44  jal         func_133110
    ctx->pc = 0x37D180u;
    SET_GPR_U32(ctx, 31, 0x37D188u);
    ctx->pc = 0x37D184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37D180u;
            // 0x37d184: 0xe6400078  swc1        $f0, 0x78($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D188u; }
        if (ctx->pc != 0x37D188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D188u; }
        if (ctx->pc != 0x37D188u) { return; }
    }
    ctx->pc = 0x37D188u;
label_37d188:
    // 0x37d188: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x37d188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x37d18c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x37D18Cu;
    SET_GPR_U32(ctx, 31, 0x37D194u);
    ctx->pc = 0x37D190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37D18Cu;
            // 0x37d190: 0x26450060  addiu       $a1, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D194u; }
        if (ctx->pc != 0x37D194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D194u; }
        if (ctx->pc != 0x37D194u) { return; }
    }
    ctx->pc = 0x37D194u;
label_37d194:
    // 0x37d194: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x37d194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x37d198: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x37d198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
    // 0x37d19c: 0xc04cc44  jal         func_133110
    ctx->pc = 0x37D19Cu;
    SET_GPR_U32(ctx, 31, 0x37D1A4u);
    ctx->pc = 0x37D1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37D19Cu;
            // 0x37d1a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D1A4u; }
        if (ctx->pc != 0x37D1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D1A4u; }
        if (ctx->pc != 0x37D1A4u) { return; }
    }
    ctx->pc = 0x37D1A4u;
label_37d1a4:
    // 0x37d1a4: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x37d1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x37d1a8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x37d1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x37d1ac: 0xc04cc08  jal         func_133020
    ctx->pc = 0x37D1ACu;
    SET_GPR_U32(ctx, 31, 0x37D1B4u);
    ctx->pc = 0x37D1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37D1ACu;
            // 0x37d1b0: 0x24a55720  addiu       $a1, $a1, 0x5720 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D1B4u; }
        if (ctx->pc != 0x37D1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D1B4u; }
        if (ctx->pc != 0x37D1B4u) { return; }
    }
    ctx->pc = 0x37D1B4u;
label_37d1b4:
    // 0x37d1b4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x37d1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x37d1b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x37d1b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37d1bc: 0x0  nop
    ctx->pc = 0x37d1bcu;
    // NOP
    // 0x37d1c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x37d1c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37d1c4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x37D1C4u;
    {
        const bool branch_taken_0x37d1c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x37D1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37D1C4u;
            // 0x37d1c8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d1c4) {
            ctx->pc = 0x37D1D0u;
            goto label_37d1d0;
        }
    }
    ctx->pc = 0x37D1CCu;
    // 0x37d1cc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x37d1ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37d1d0:
    // 0x37d1d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x37d1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x37d1d4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x37d1d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x37d1d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x37d1d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37d1dc: 0x0  nop
    ctx->pc = 0x37d1dcu;
    // NOP
    // 0x37d1e0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x37d1e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37d1e4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x37D1E4u;
    {
        const bool branch_taken_0x37d1e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x37D1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37D1E4u;
            // 0x37d1e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d1e4) {
            ctx->pc = 0x37D1F0u;
            goto label_37d1f0;
        }
    }
    ctx->pc = 0x37D1ECu;
    // 0x37d1ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37d1ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37d1f0:
    // 0x37d1f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x37d1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x37d1f4: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x37d1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x37d1f8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x37d1f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x37d1fc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x37d1fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37d200: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x37d200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x37d204: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x37d204u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x37d208: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x37d208u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x37d20c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37d20cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37d210: 0x0  nop
    ctx->pc = 0x37d210u;
    // NOP
    // 0x37d214: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37d214u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x37d218: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x37d218u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x37d21c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37d21cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37d220: 0x0  nop
    ctx->pc = 0x37d220u;
    // NOP
    // 0x37d224: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37d224u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x37d228: 0xc0477fe  jal         func_11DFF8
    ctx->pc = 0x37D228u;
    SET_GPR_U32(ctx, 31, 0x37D230u);
    ctx->pc = 0x37D22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37D228u;
            // 0x37d22c: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DFF8u;
    if (runtime->hasFunction(0x11DFF8u)) {
        auto targetFn = runtime->lookupFunction(0x11DFF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D230u; }
        if (ctx->pc != 0x37D230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DFF8_0x11dff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D230u; }
        if (ctx->pc != 0x37D230u) { return; }
    }
    ctx->pc = 0x37D230u;
label_37d230:
    // 0x37d230: 0x3c024265  lui         $v0, 0x4265
    ctx->pc = 0x37d230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16997 << 16));
    // 0x37d234: 0x34432ee1  ori         $v1, $v0, 0x2EE1
    ctx->pc = 0x37d234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12001);
    // 0x37d238: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x37d238u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37d23c: 0x0  nop
    ctx->pc = 0x37d23cu;
    // NOP
    // 0x37d240: 0x46010102  mul.s       $f4, $f0, $f1
    ctx->pc = 0x37d240u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x37d244: 0xc7a300e0  lwc1        $f3, 0xE0($sp)
    ctx->pc = 0x37d244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x37d248: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x37d248u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37d24c: 0x0  nop
    ctx->pc = 0x37d24cu;
    // NOP
    // 0x37d250: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x37d250u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37d254: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x37D254u;
    {
        const bool branch_taken_0x37d254 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x37D258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37D254u;
            // 0x37d258: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d254) {
            ctx->pc = 0x37D260u;
            goto label_37d260;
        }
    }
    ctx->pc = 0x37D25Cu;
    // 0x37d25c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37d25cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37d260:
    // 0x37d260: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37D260u;
    {
        const bool branch_taken_0x37d260 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x37d260) {
            ctx->pc = 0x37D264u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37D260u;
            // 0x37d264: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37D274u;
            goto label_37d274;
        }
    }
    ctx->pc = 0x37D268u;
    // 0x37d268: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37d268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37d26c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x37D26Cu;
    {
        const bool branch_taken_0x37d26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37D26Cu;
            // 0x37d270: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d26c) {
            ctx->pc = 0x37D28Cu;
            goto label_37d28c;
        }
    }
    ctx->pc = 0x37D274u;
label_37d274:
    // 0x37d274: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x37d274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x37d278: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37d278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37d27c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37d27cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37d280: 0x0  nop
    ctx->pc = 0x37d280u;
    // NOP
    // 0x37d284: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x37d284u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x37d288: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x37d288u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_37d28c:
    // 0x37d28c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x37d28cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37d290: 0x0  nop
    ctx->pc = 0x37d290u;
    // NOP
    // 0x37d294: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x37d294u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37d298: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x37D298u;
    {
        const bool branch_taken_0x37d298 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x37D29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37D298u;
            // 0x37d29c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d298) {
            ctx->pc = 0x37D2A4u;
            goto label_37d2a4;
        }
    }
    ctx->pc = 0x37D2A0u;
    // 0x37d2a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37d2a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37d2a4:
    // 0x37d2a4: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37D2A4u;
    {
        const bool branch_taken_0x37d2a4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x37d2a4) {
            ctx->pc = 0x37D2A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37D2A4u;
            // 0x37d2a8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37D2B8u;
            goto label_37d2b8;
        }
    }
    ctx->pc = 0x37D2ACu;
    // 0x37d2ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37d2acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37d2b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x37D2B0u;
    {
        const bool branch_taken_0x37d2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37D2B0u;
            // 0x37d2b4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d2b0) {
            ctx->pc = 0x37D2D0u;
            goto label_37d2d0;
        }
    }
    ctx->pc = 0x37D2B8u;
label_37d2b8:
    // 0x37d2b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x37d2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x37d2bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37d2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37d2c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37d2c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37d2c4: 0x0  nop
    ctx->pc = 0x37d2c4u;
    // NOP
    // 0x37d2c8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x37d2c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x37d2cc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x37d2ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_37d2d0:
    // 0x37d2d0: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x37d2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x37d2d4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x37d2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x37d2d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37d2d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37d2dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37d2dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d2e0: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x37d2e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x37d2e4: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x37d2e4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x37d2e8: 0xc04f29c  jal         func_13CA70
    ctx->pc = 0x37D2E8u;
    SET_GPR_U32(ctx, 31, 0x37D2F0u);
    ctx->pc = 0x37D2ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37D2E8u;
            // 0x37d2ec: 0x4602251c  madd.s      $f20, $f4, $f2 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CA70u;
    if (runtime->hasFunction(0x13CA70u)) {
        auto targetFn = runtime->lookupFunction(0x13CA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D2F0u; }
        if (ctx->pc != 0x37D2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CA70_0x13ca70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D2F0u; }
        if (ctx->pc != 0x37D2F0u) { return; }
    }
    ctx->pc = 0x37D2F0u;
label_37d2f0:
    // 0x37d2f0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x37d2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x37d2f4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x37d2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x37d2f8: 0xc04cdf0  jal         func_1337C0
    ctx->pc = 0x37D2F8u;
    SET_GPR_U32(ctx, 31, 0x37D300u);
    ctx->pc = 0x37D2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37D2F8u;
            // 0x37d2fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1337C0u;
    if (runtime->hasFunction(0x1337C0u)) {
        auto targetFn = runtime->lookupFunction(0x1337C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D300u; }
        if (ctx->pc != 0x37D300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001337C0_0x1337c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D300u; }
        if (ctx->pc != 0x37D300u) { return; }
    }
    ctx->pc = 0x37D300u;
label_37d300:
    // 0x37d300: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x37d300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
    // 0x37d304: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x37d304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x37d308: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x37d308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
    // 0x37d30c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37d30cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37d310: 0x0  nop
    ctx->pc = 0x37d310u;
    // NOP
    // 0x37d314: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x37d314u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x37d318: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37d318u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x37d31c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x37d31cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x37d320: 0xc04cdd0  jal         func_133740
    ctx->pc = 0x37D320u;
    SET_GPR_U32(ctx, 31, 0x37D328u);
    ctx->pc = 0x37D324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37D320u;
            // 0x37d324: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133740u;
    if (runtime->hasFunction(0x133740u)) {
        auto targetFn = runtime->lookupFunction(0x133740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D328u; }
        if (ctx->pc != 0x37D328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133740_0x133740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D328u; }
        if (ctx->pc != 0x37D328u) { return; }
    }
    ctx->pc = 0x37D328u;
label_37d328:
    // 0x37d328: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x37d328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x37d32c: 0xc04c994  jal         func_132650
    ctx->pc = 0x37D32Cu;
    SET_GPR_U32(ctx, 31, 0x37D334u);
    ctx->pc = 0x37D330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37D32Cu;
            // 0x37d330: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132650u;
    if (runtime->hasFunction(0x132650u)) {
        auto targetFn = runtime->lookupFunction(0x132650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D334u; }
        if (ctx->pc != 0x37D334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132650_0x132650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D334u; }
        if (ctx->pc != 0x37D334u) { return; }
    }
    ctx->pc = 0x37D334u;
label_37d334:
    // 0x37d334: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x37d334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37d338: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x37d338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x37d33c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x37d33cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37d340: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x37d340u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37d344: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37d344u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37d348: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37d348u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37d34c: 0x3e00008  jr          $ra
    ctx->pc = 0x37D34Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37D34Cu;
            // 0x37d350: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37D354u;
    // 0x37d354: 0x0  nop
    ctx->pc = 0x37d354u;
    // NOP
    // 0x37d358: 0x0  nop
    ctx->pc = 0x37d358u;
    // NOP
    // 0x37d35c: 0x0  nop
    ctx->pc = 0x37d35cu;
    // NOP
}
