#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F67B0
// Address: 0x3f67b0 - 0x3f68f0
void sub_003F67B0_0x3f67b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F67B0_0x3f67b0");
#endif

    switch (ctx->pc) {
        case 0x3f6808u: goto label_3f6808;
        case 0x3f6828u: goto label_3f6828;
        case 0x3f6858u: goto label_3f6858;
        case 0x3f6864u: goto label_3f6864;
        case 0x3f6878u: goto label_3f6878;
        case 0x3f6894u: goto label_3f6894;
        case 0x3f68a8u: goto label_3f68a8;
        default: break;
    }

    ctx->pc = 0x3f67b0u;

    // 0x3f67b0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3f67b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3f67b4: 0x3c0243b5  lui         $v0, 0x43B5
    ctx->pc = 0x3f67b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17333 << 16));
    // 0x3f67b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3f67b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3f67bc: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x3f67bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x3f67c0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3f67c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3f67c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3f67c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3f67c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3f67c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3f67cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3f67ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f67d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3f67d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3f67d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3f67d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f67d8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3f67d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3f67dc: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x3f67dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
    // 0x3f67e0: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x3f67e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x3f67e4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3f67e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f67e8: 0xafa400b4  sw          $a0, 0xB4($sp)
    ctx->pc = 0x3f67e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 4));
    // 0x3f67ec: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3f67ecu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x3f67f0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3f67f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x3f67f4: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3f67f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3f67f8: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x3f67f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
    // 0x3f67fc: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x3f67fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x3f6800: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x3F6800u;
    SET_GPR_U32(ctx, 31, 0x3F6808u);
    ctx->pc = 0x3F6804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6800u;
            // 0x3f6804: 0xafa000bc  sw          $zero, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6808u; }
        if (ctx->pc != 0x3F6808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6808u; }
        if (ctx->pc != 0x3F6808u) { return; }
    }
    ctx->pc = 0x3F6808u;
label_3f6808:
    // 0x3f6808: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x3f6808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3f680c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f680cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6810: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F6810u;
    {
        const bool branch_taken_0x3f6810 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6810u;
            // 0x3f6814: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6810) {
            ctx->pc = 0x3F682Cu;
            goto label_3f682c;
        }
    }
    ctx->pc = 0x3F6818u;
    // 0x3f6818: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3f6818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3f681c: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x3f681cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3f6820: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x3F6820u;
    SET_GPR_U32(ctx, 31, 0x3F6828u);
    ctx->pc = 0x3F6824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6820u;
            // 0x3f6824: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6828u; }
        if (ctx->pc != 0x3F6828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6828u; }
        if (ctx->pc != 0x3F6828u) { return; }
    }
    ctx->pc = 0x3F6828u;
label_3f6828:
    // 0x3f6828: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f6828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f682c:
    // 0x3f682c: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x3f682cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
    // 0x3f6830: 0xae44000c  sw          $a0, 0xC($s2)
    ctx->pc = 0x3f6830u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 4));
    // 0x3f6834: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x3f6834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
    // 0x3f6838: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3f6838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3f683c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f683cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f6840: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f6840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6844: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3f6844u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x3f6848: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f6848u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3f684c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3f684cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3f6850: 0xc04ca18  jal         func_132860
    ctx->pc = 0x3F6850u;
    SET_GPR_U32(ctx, 31, 0x3F6858u);
    ctx->pc = 0x3F6854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6850u;
            // 0x3f6854: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6858u; }
        if (ctx->pc != 0x3F6858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6858u; }
        if (ctx->pc != 0x3F6858u) { return; }
    }
    ctx->pc = 0x3F6858u;
label_3f6858:
    // 0x3f6858: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3f6858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3f685c: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x3F685Cu;
    SET_GPR_U32(ctx, 31, 0x3F6864u);
    ctx->pc = 0x3F6860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F685Cu;
            // 0x3f6860: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6864u; }
        if (ctx->pc != 0x3F6864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6864u; }
        if (ctx->pc != 0x3F6864u) { return; }
    }
    ctx->pc = 0x3F6864u;
label_3f6864:
    // 0x3f6864: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3f6864u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x3f6868: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3f6868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3f686c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3f686cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3f6870: 0xc04cca0  jal         func_133280
    ctx->pc = 0x3F6870u;
    SET_GPR_U32(ctx, 31, 0x3F6878u);
    ctx->pc = 0x3F6874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6870u;
            // 0x3f6874: 0x24c6b320  addiu       $a2, $a2, -0x4CE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6878u; }
        if (ctx->pc != 0x3F6878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6878u; }
        if (ctx->pc != 0x3F6878u) { return; }
    }
    ctx->pc = 0x3F6878u;
label_3f6878:
    // 0x3f6878: 0x3c0243b5  lui         $v0, 0x43B5
    ctx->pc = 0x3f6878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17333 << 16));
    // 0x3f687c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3f687cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3f6880: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x3f6880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x3f6884: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f6884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6888: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3f6888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3f688c: 0xc04cc7c  jal         func_1331F0
    ctx->pc = 0x3F688Cu;
    SET_GPR_U32(ctx, 31, 0x3F6894u);
    ctx->pc = 0x3F6890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F688Cu;
            // 0x3f6890: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6894u; }
        if (ctx->pc != 0x3F6894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6894u; }
        if (ctx->pc != 0x3F6894u) { return; }
    }
    ctx->pc = 0x3F6894u;
label_3f6894:
    // 0x3f6894: 0x8e47000c  lw          $a3, 0xC($s2)
    ctx->pc = 0x3f6894u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x3f6898: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f6898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f689c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3f689cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3f68a0: 0xc0d37ec  jal         func_34DFB0
    ctx->pc = 0x3F68A0u;
    SET_GPR_U32(ctx, 31, 0x3F68A8u);
    ctx->pc = 0x3F68A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F68A0u;
            // 0x3f68a4: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F68A8u; }
        if (ctx->pc != 0x3F68A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F68A8u; }
        if (ctx->pc != 0x3F68A8u) { return; }
    }
    ctx->pc = 0x3F68A8u;
label_3f68a8:
    // 0x3f68a8: 0xae500008  sw          $s0, 0x8($s2)
    ctx->pc = 0x3f68a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
    // 0x3f68ac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3f68acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3f68b0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3f68b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3f68b4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3f68b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f68b8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3f68b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f68bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3f68bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f68c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3F68C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F68C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F68C0u;
            // 0x3f68c4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F68C8u;
    // 0x3f68c8: 0x0  nop
    ctx->pc = 0x3f68c8u;
    // NOP
    // 0x3f68cc: 0x0  nop
    ctx->pc = 0x3f68ccu;
    // NOP
    // 0x3f68d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3F68D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F68D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F68D0u;
            // 0x3f68d4: 0x24023a98  addiu       $v0, $zero, 0x3A98 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15000));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F68D8u;
    // 0x3f68d8: 0x0  nop
    ctx->pc = 0x3f68d8u;
    // NOP
    // 0x3f68dc: 0x0  nop
    ctx->pc = 0x3f68dcu;
    // NOP
    // 0x3f68e0: 0x80fd680  j           func_3F5A00
    ctx->pc = 0x3F68E0u;
    ctx->pc = 0x3F68E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F68E0u;
            // 0x3f68e4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F5A00u;
    {
        auto targetFn = runtime->lookupFunction(0x3F5A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3F68E8u;
    // 0x3f68e8: 0x0  nop
    ctx->pc = 0x3f68e8u;
    // NOP
    // 0x3f68ec: 0x0  nop
    ctx->pc = 0x3f68ecu;
    // NOP
}
