#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001390B0
// Address: 0x1390b0 - 0x139290
void sub_001390B0_0x1390b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001390B0_0x1390b0");
#endif

    switch (ctx->pc) {
        case 0x139170u: goto label_139170;
        case 0x13918cu: goto label_13918c;
        case 0x139198u: goto label_139198;
        case 0x1391b4u: goto label_1391b4;
        case 0x1391c8u: goto label_1391c8;
        case 0x1391e0u: goto label_1391e0;
        case 0x1391f0u: goto label_1391f0;
        case 0x1391fcu: goto label_1391fc;
        case 0x139234u: goto label_139234;
        case 0x139254u: goto label_139254;
        default: break;
    }

    ctx->pc = 0x1390b0u;

    // 0x1390b0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1390b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x1390b4: 0xa1840  sll         $v1, $t2, 1
    ctx->pc = 0x1390b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x1390b8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1390b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1390bc: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x1390bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1390c0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1390c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1390c4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1390c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1390c8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1390c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1390cc: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1390ccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1390d0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1390d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1390d4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1390d4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1390d8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1390d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1390dc: 0xa20c0  sll         $a0, $t2, 3
    ctx->pc = 0x1390dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x1390e0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1390e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1390e4: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x1390e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x1390e8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1390e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1390ec: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1390ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1390f0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1390f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1390f4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1390f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1390f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1390f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1390fc: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x1390fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139100: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x139100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x139104: 0x1038821  addu        $s1, $t0, $v1
    ctx->pc = 0x139104u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x139108: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x139108u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x13910c: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x13910cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x139110: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x139110u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x139114: 0x8ce20030  lw          $v0, 0x30($a3)
    ctx->pc = 0x139114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x139118: 0x449021  addu        $s2, $v0, $a0
    ctx->pc = 0x139118u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13911c: 0x86470008  lh          $a3, 0x8($s2)
    ctx->pc = 0x13911cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x139120: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x139120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x139124: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x139124u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x139128: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x139128u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x13912c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x13912cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x139130: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x139130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x139134: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x139134u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x139138: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x139138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13913c: 0x468021  addu        $s0, $v0, $a2
    ctx->pc = 0x13913cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x139140: 0x103b021  addu        $s6, $t0, $v1
    ctx->pc = 0x139140u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x139144: 0x86070008  lh          $a3, 0x8($s0)
    ctx->pc = 0x139144u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x139148: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x139148u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x13914c: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x13914cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x139150: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x139150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x139154: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x139154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x139158: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x139158u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x13915c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x13915cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x139160: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x139160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x139164: 0x1039821  addu        $s3, $t0, $v1
    ctx->pc = 0x139164u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x139168: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x139168u;
    SET_GPR_U32(ctx, 31, 0x139170u);
    ctx->pc = 0x13916Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139168u;
            // 0x13916c: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139170u; }
        if (ctx->pc != 0x139170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139170u; }
        if (ctx->pc != 0x139170u) { return; }
    }
    ctx->pc = 0x139170u;
label_139170:
    // 0x139170: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x139170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x139174: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x139174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x139178: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x139178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x13917c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x13917cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139180: 0xc62c0020  lwc1        $f12, 0x20($s1)
    ctx->pc = 0x139180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x139184: 0xc04ce50  jal         func_133940
    ctx->pc = 0x139184u;
    SET_GPR_U32(ctx, 31, 0x13918Cu);
    ctx->pc = 0x139188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139184u;
            // 0x139188: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13918Cu; }
        if (ctx->pc != 0x13918Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13918Cu; }
        if (ctx->pc != 0x13918Cu) { return; }
    }
    ctx->pc = 0x13918Cu;
label_13918c:
    // 0x13918c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x13918cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x139190: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x139190u;
    SET_GPR_U32(ctx, 31, 0x139198u);
    ctx->pc = 0x139194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139190u;
            // 0x139194: 0x26c50010  addiu       $a1, $s6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139198u; }
        if (ctx->pc != 0x139198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139198u; }
        if (ctx->pc != 0x139198u) { return; }
    }
    ctx->pc = 0x139198u;
label_139198:
    // 0x139198: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x139198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13919c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x13919cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1391a0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1391a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1391a4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1391a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1391a8: 0xc6cc0020  lwc1        $f12, 0x20($s6)
    ctx->pc = 0x1391a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1391ac: 0xc04ce50  jal         func_133940
    ctx->pc = 0x1391ACu;
    SET_GPR_U32(ctx, 31, 0x1391B4u);
    ctx->pc = 0x1391B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1391ACu;
            // 0x1391b0: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1391B4u; }
        if (ctx->pc != 0x1391B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1391B4u; }
        if (ctx->pc != 0x1391B4u) { return; }
    }
    ctx->pc = 0x1391B4u;
label_1391b4:
    // 0x1391b4: 0xc6550084  lwc1        $f21, 0x84($s2)
    ctx->pc = 0x1391b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1391b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1391b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1391bc: 0xc6140084  lwc1        $f20, 0x84($s0)
    ctx->pc = 0x1391bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1391c0: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x1391C0u;
    SET_GPR_U32(ctx, 31, 0x1391C8u);
    ctx->pc = 0x1391C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1391C0u;
            // 0x1391c4: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1391C8u; }
        if (ctx->pc != 0x1391C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1391C8u; }
        if (ctx->pc != 0x1391C8u) { return; }
    }
    ctx->pc = 0x1391C8u;
label_1391c8:
    // 0x1391c8: 0xc66c0020  lwc1        $f12, 0x20($s3)
    ctx->pc = 0x1391c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1391cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1391ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1391d0: 0xc66d0024  lwc1        $f13, 0x24($s3)
    ctx->pc = 0x1391d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1391d4: 0xc66e0028  lwc1        $f14, 0x28($s3)
    ctx->pc = 0x1391d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1391d8: 0xc04ce50  jal         func_133940
    ctx->pc = 0x1391D8u;
    SET_GPR_U32(ctx, 31, 0x1391E0u);
    ctx->pc = 0x1391DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1391D8u;
            // 0x1391dc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1391E0u; }
        if (ctx->pc != 0x1391E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1391E0u; }
        if (ctx->pc != 0x1391E0u) { return; }
    }
    ctx->pc = 0x1391E0u;
label_1391e0:
    // 0x1391e0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1391e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1391e4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1391e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1391e8: 0xc04cca0  jal         func_133280
    ctx->pc = 0x1391E8u;
    SET_GPR_U32(ctx, 31, 0x1391F0u);
    ctx->pc = 0x1391ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1391E8u;
            // 0x1391ec: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1391F0u; }
        if (ctx->pc != 0x1391F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1391F0u; }
        if (ctx->pc != 0x1391F0u) { return; }
    }
    ctx->pc = 0x1391F0u;
label_1391f0:
    // 0x1391f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1391f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1391f4: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x1391F4u;
    SET_GPR_U32(ctx, 31, 0x1391FCu);
    ctx->pc = 0x1391F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1391F4u;
            // 0x1391f8: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1391FCu; }
        if (ctx->pc != 0x1391FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1391FCu; }
        if (ctx->pc != 0x1391FCu) { return; }
    }
    ctx->pc = 0x1391FCu;
label_1391fc:
    // 0x1391fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1391fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x139200: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x139200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x139204: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x139204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x139208: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x139208u;
    {
        const bool branch_taken_0x139208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x139208) {
            ctx->pc = 0x13920Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x139208u;
            // 0x13920c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x139214u;
            goto label_139214;
        }
    }
    ctx->pc = 0x139210u;
    // 0x139210: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x139210u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_139214:
    // 0x139214: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x139214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139218: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x139218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x13921c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x13921cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139220: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x139220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x139224: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x139224u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x139228: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x139228u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13922c: 0xc052b4c  jal         func_14AD30
    ctx->pc = 0x13922Cu;
    SET_GPR_U32(ctx, 31, 0x139234u);
    ctx->pc = 0x139230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13922Cu;
            // 0x139230: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14AD30u;
    if (runtime->hasFunction(0x14AD30u)) {
        auto targetFn = runtime->lookupFunction(0x14AD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139234u; }
        if (ctx->pc != 0x139234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014AD30_0x14ad30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139234u; }
        if (ctx->pc != 0x139234u) { return; }
    }
    ctx->pc = 0x139234u;
label_139234:
    // 0x139234: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x139234u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x139238: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x139238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13923c: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x13923cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x139240: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x139240u;
    {
        const bool branch_taken_0x139240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x139240) {
            ctx->pc = 0x139244u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x139240u;
            // 0x139244: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x139258u;
            goto label_139258;
        }
    }
    ctx->pc = 0x139248u;
    // 0x139248: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x139248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13924c: 0xc04cee8  jal         func_133BA0
    ctx->pc = 0x13924Cu;
    SET_GPR_U32(ctx, 31, 0x139254u);
    ctx->pc = 0x139250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13924Cu;
            // 0x139250: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133BA0u;
    if (runtime->hasFunction(0x133BA0u)) {
        auto targetFn = runtime->lookupFunction(0x133BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139254u; }
        if (ctx->pc != 0x139254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133BA0_0x133ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139254u; }
        if (ctx->pc != 0x139254u) { return; }
    }
    ctx->pc = 0x139254u;
label_139254:
    // 0x139254: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x139254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_139258:
    // 0x139258: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x139258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13925c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x13925cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x139260: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x139260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x139264: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x139264u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x139268: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x139268u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13926c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x13926cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x139270: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x139270u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x139274: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x139274u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x139278: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x139278u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13927c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13927cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139280: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x139280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139284: 0x3e00008  jr          $ra
    ctx->pc = 0x139284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139284u;
            // 0x139288: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13928Cu;
    // 0x13928c: 0x0  nop
    ctx->pc = 0x13928cu;
    // NOP
}
