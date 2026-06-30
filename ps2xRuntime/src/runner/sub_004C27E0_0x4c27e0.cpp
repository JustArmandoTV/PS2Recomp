#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004C27E0
// Address: 0x4c27e0 - 0x4c2b10
void sub_004C27E0_0x4c27e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C27E0_0x4c27e0");
#endif

    switch (ctx->pc) {
        case 0x4c2824u: goto label_4c2824;
        case 0x4c2884u: goto label_4c2884;
        case 0x4c28b0u: goto label_4c28b0;
        case 0x4c28e0u: goto label_4c28e0;
        case 0x4c2974u: goto label_4c2974;
        case 0x4c29a8u: goto label_4c29a8;
        case 0x4c29c4u: goto label_4c29c4;
        case 0x4c29d0u: goto label_4c29d0;
        case 0x4c2a04u: goto label_4c2a04;
        case 0x4c2a34u: goto label_4c2a34;
        case 0x4c2ab8u: goto label_4c2ab8;
        default: break;
    }

    ctx->pc = 0x4c27e0u;

    // 0x4c27e0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x4c27e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x4c27e4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x4c27e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x4c27e8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x4c27e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x4c27ec: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4c27ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x4c27f0: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x4c27f0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c27f4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4c27f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x4c27f8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4c27f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x4c27fc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4c27fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x4c2800: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4c2800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x4c2804: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4c2804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4c2808: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4c2808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4c280c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4c280cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4c2810: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4c2810u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x4c2814: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4c2814u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4c2818: 0x8ca40d70  lw          $a0, 0xD70($a1)
    ctx->pc = 0x4c2818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3440)));
    // 0x4c281c: 0xc0bd780  jal         func_2F5E00
    ctx->pc = 0x4C281Cu;
    SET_GPR_U32(ctx, 31, 0x4C2824u);
    ctx->pc = 0x4C2820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C281Cu;
            // 0x4c2820: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5E00u;
    if (runtime->hasFunction(0x2F5E00u)) {
        auto targetFn = runtime->lookupFunction(0x2F5E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2824u; }
        if (ctx->pc != 0x4C2824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5E00_0x2f5e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2824u; }
        if (ctx->pc != 0x4C2824u) { return; }
    }
    ctx->pc = 0x4C2824u;
label_4c2824:
    // 0x4c2824: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x4c2824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4c2828: 0x544300aa  bnel        $v0, $v1, . + 4 + (0xAA << 2)
    ctx->pc = 0x4C2828u;
    {
        const bool branch_taken_0x4c2828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4c2828) {
            ctx->pc = 0x4C282Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2828u;
            // 0x4c282c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C2AD4u;
            goto label_4c2ad4;
        }
    }
    ctx->pc = 0x4C2830u;
    // 0x4c2830: 0x8ec50d74  lw          $a1, 0xD74($s6)
    ctx->pc = 0x4c2830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 3444)));
    // 0x4c2834: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x4c2834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x4c2838: 0x90a402c5  lbu         $a0, 0x2C5($a1)
    ctx->pc = 0x4c2838u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 709)));
    // 0x4c283c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x4c283cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x4c2840: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x4c2840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x4c2844: 0x90840281  lbu         $a0, 0x281($a0)
    ctx->pc = 0x4c2844u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 641)));
    // 0x4c2848: 0x54830004  bnel        $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C2848u;
    {
        const bool branch_taken_0x4c2848 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4c2848) {
            ctx->pc = 0x4C284Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2848u;
            // 0x4c284c: 0xc6c002c0  lwc1        $f0, 0x2C0($s6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C285Cu;
            goto label_4c285c;
        }
    }
    ctx->pc = 0x4C2850u;
    // 0x4c2850: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x4C2850u;
    {
        const bool branch_taken_0x4c2850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c2850) {
            ctx->pc = 0x4C2AD0u;
            goto label_4c2ad0;
        }
    }
    ctx->pc = 0x4C2858u;
    // 0x4c2858: 0xc6c002c0  lwc1        $f0, 0x2C0($s6)
    ctx->pc = 0x4c2858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c285c:
    // 0x4c285c: 0x3c1200af  lui         $s2, 0xAF
    ctx->pc = 0x4c285cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)175 << 16));
    // 0x4c2860: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x4c2860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x4c2864: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4c2864u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2868: 0x26520e80  addiu       $s2, $s2, 0xE80
    ctx->pc = 0x4c2868u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3712));
    // 0x4c286c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x4c286cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x4c2870: 0xc6c002c4  lwc1        $f0, 0x2C4($s6)
    ctx->pc = 0x4c2870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4c2874: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x4c2874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x4c2878: 0xc6c002c8  lwc1        $f0, 0x2C8($s6)
    ctx->pc = 0x4c2878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4c287c: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x4c287cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x4c2880: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x4c2880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
label_4c2884:
    // 0x4c2884: 0x8ec30d98  lw          $v1, 0xD98($s6)
    ctx->pc = 0x4c2884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 3480)));
    // 0x4c2888: 0x12a3007b  beq         $s5, $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x4C2888u;
    {
        const bool branch_taken_0x4c2888 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x4c2888) {
            ctx->pc = 0x4C2A78u;
            goto label_4c2a78;
        }
    }
    ctx->pc = 0x4C2890u;
    // 0x4c2890: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x4c2890u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4c2894: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x4c2894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x4c2898: 0x8e240db0  lw          $a0, 0xDB0($s1)
    ctx->pc = 0x4c2898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3504)));
    // 0x4c289c: 0x14830076  bne         $a0, $v1, . + 4 + (0x76 << 2)
    ctx->pc = 0x4C289Cu;
    {
        const bool branch_taken_0x4c289c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4c289c) {
            ctx->pc = 0x4C2A78u;
            goto label_4c2a78;
        }
    }
    ctx->pc = 0x4C28A4u;
    // 0x4c28a4: 0x262402c0  addiu       $a0, $s1, 0x2C0
    ctx->pc = 0x4c28a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
    // 0x4c28a8: 0xc04cc34  jal         func_1330D0
    ctx->pc = 0x4C28A8u;
    SET_GPR_U32(ctx, 31, 0x4C28B0u);
    ctx->pc = 0x4C28ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C28A8u;
            // 0x4c28ac: 0x26c502c0  addiu       $a1, $s6, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C28B0u; }
        if (ctx->pc != 0x4C28B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C28B0u; }
        if (ctx->pc != 0x4C28B0u) { return; }
    }
    ctx->pc = 0x4C28B0u;
label_4c28b0:
    // 0x4c28b0: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x4c28b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x4c28b4: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x4c28b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x4c28b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4c28b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4c28bc: 0x0  nop
    ctx->pc = 0x4c28bcu;
    // NOP
    // 0x4c28c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4c28c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4c28c4: 0x4500006c  bc1f        . + 4 + (0x6C << 2)
    ctx->pc = 0x4C28C4u;
    {
        const bool branch_taken_0x4c28c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4c28c4) {
            ctx->pc = 0x4C2A78u;
            goto label_4c2a78;
        }
    }
    ctx->pc = 0x4C28CCu;
    // 0x4c28cc: 0x8e220d58  lw          $v0, 0xD58($s1)
    ctx->pc = 0x4c28ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3416)));
    // 0x4c28d0: 0x26300c90  addiu       $s0, $s1, 0xC90
    ctx->pc = 0x4c28d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3216));
    // 0x4c28d4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4c28d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c28d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4c28d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4c28dc: 0x30530003  andi        $s3, $v0, 0x3
    ctx->pc = 0x4c28dcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_4c28e0:
    // 0x4c28e0: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x4c28e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x4c28e4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x4c28e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x4c28e8: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x4c28e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x4c28ec: 0x30730003  andi        $s3, $v1, 0x3
    ctx->pc = 0x4c28ecu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x4c28f0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4c28f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4c28f4: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x4c28f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x4c28f8: 0x202b821  addu        $s7, $s0, $v0
    ctx->pc = 0x4c28f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x4c28fc: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x4c28fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x4c2900: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x4c2900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x4c2904: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x4c2904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x4c2908: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x4c2908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x4c290c: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x4c290cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x4c2910: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x4c2910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x4c2914: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x4c2914u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4c2918: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4c2918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x4c291c: 0xc4c40000  lwc1        $f4, 0x0($a2)
    ctx->pc = 0x4c291cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4c2920: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x4c2920u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x4c2924: 0xe7a400bc  swc1        $f4, 0xBC($sp)
    ctx->pc = 0x4c2924u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x4c2928: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x4c2928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4c292c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4c292cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4c2930: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4c2930u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4c2934: 0x0  nop
    ctx->pc = 0x4c2934u;
    // NOP
    // 0x4c2938: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4c2938u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4c293c: 0xe7a400c0  swc1        $f4, 0xC0($sp)
    ctx->pc = 0x4c293cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x4c2940: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x4c2940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4c2944: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4c2944u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4c2948: 0x0  nop
    ctx->pc = 0x4c2948u;
    // NOP
    // 0x4c294c: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x4c294cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x4c2950: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x4c2950u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x4c2954: 0xc6e10000  lwc1        $f1, 0x0($s7)
    ctx->pc = 0x4c2954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4c2958: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x4c2958u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x4c295c: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x4c295cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4c2960: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x4c2960u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x4c2964: 0xc6e10008  lwc1        $f1, 0x8($s7)
    ctx->pc = 0x4c2964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4c2968: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x4c2968u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x4c296c: 0xc05277c  jal         func_149DF0
    ctx->pc = 0x4C296Cu;
    SET_GPR_U32(ctx, 31, 0x4C2974u);
    ctx->pc = 0x4C2970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C296Cu;
            // 0x4c2970: 0xe7a000c8  swc1        $f0, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x149DF0u;
    if (runtime->hasFunction(0x149DF0u)) {
        auto targetFn = runtime->lookupFunction(0x149DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2974u; }
        if (ctx->pc != 0x4C2974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149DF0_0x149df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2974u; }
        if (ctx->pc != 0x4C2974u) { return; }
    }
    ctx->pc = 0x4C2974u;
label_4c2974:
    // 0x4c2974: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4c2974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4c2978: 0x5443003d  bnel        $v0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x4C2978u;
    {
        const bool branch_taken_0x4c2978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4c2978) {
            ctx->pc = 0x4C297Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2978u;
            // 0x4c297c: 0x8e0300c8  lw          $v1, 0xC8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C2A70u;
            goto label_4c2a70;
        }
    }
    ctx->pc = 0x4C2980u;
    // 0x4c2980: 0x8fc300c0  lw          $v1, 0xC0($fp)
    ctx->pc = 0x4c2980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 192)));
    // 0x4c2984: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C2984u;
    {
        const bool branch_taken_0x4c2984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c2984) {
            ctx->pc = 0x4C2988u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2984u;
            // 0x4c2988: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C299Cu;
            goto label_4c299c;
        }
    }
    ctx->pc = 0x4C298Cu;
    // 0x4c298c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4c298cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4c2990: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4C2990u;
    {
        const bool branch_taken_0x4c2990 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4c2990) {
            ctx->pc = 0x4C2994u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2990u;
            // 0x4c2994: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C29B4u;
            goto label_4c29b4;
        }
    }
    ctx->pc = 0x4C2998u;
    // 0x4c2998: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4c2998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c299c:
    // 0x4c299c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4c299cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c29a0: 0xc076184  jal         func_1D8610
    ctx->pc = 0x4C29A0u;
    SET_GPR_U32(ctx, 31, 0x4C29A8u);
    ctx->pc = 0x4C29A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C29A0u;
            // 0x4c29a4: 0xafc200c0  sw          $v0, 0xC0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8610u;
    if (runtime->hasFunction(0x1D8610u)) {
        auto targetFn = runtime->lookupFunction(0x1D8610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C29A8u; }
        if (ctx->pc != 0x4C29A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8610_0x1d8610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C29A8u; }
        if (ctx->pc != 0x4C29A8u) { return; }
    }
    ctx->pc = 0x4C29A8u;
label_4c29a8:
    // 0x4c29a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4C29A8u;
    {
        const bool branch_taken_0x4c29a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C29ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C29A8u;
            // 0x4c29ac: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c29a8) {
            ctx->pc = 0x4C29BCu;
            goto label_4c29bc;
        }
    }
    ctx->pc = 0x4C29B0u;
    // 0x4c29b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4c29b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4c29b4:
    // 0x4c29b4: 0xafc200c0  sw          $v0, 0xC0($fp)
    ctx->pc = 0x4c29b4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 192), GPR_U32(ctx, 2));
    // 0x4c29b8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4c29b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4c29bc:
    // 0x4c29bc: 0xc076174  jal         func_1D85D0
    ctx->pc = 0x4C29BCu;
    SET_GPR_U32(ctx, 31, 0x4C29C4u);
    ctx->pc = 0x1D85D0u;
    if (runtime->hasFunction(0x1D85D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D85D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C29C4u; }
        if (ctx->pc != 0x4C29C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D85D0_0x1d85d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C29C4u; }
        if (ctx->pc != 0x4C29C4u) { return; }
    }
    ctx->pc = 0x4C29C4u;
label_4c29c4:
    // 0x4c29c4: 0x26e40010  addiu       $a0, $s7, 0x10
    ctx->pc = 0x4c29c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x4c29c8: 0xc04cc08  jal         func_133020
    ctx->pc = 0x4C29C8u;
    SET_GPR_U32(ctx, 31, 0x4C29D0u);
    ctx->pc = 0x4C29CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C29C8u;
            // 0x4c29cc: 0x26c50820  addiu       $a1, $s6, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 2080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C29D0u; }
        if (ctx->pc != 0x4C29D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C29D0u; }
        if (ctx->pc != 0x4C29D0u) { return; }
    }
    ctx->pc = 0x4C29D0u;
label_4c29d0:
    // 0x4c29d0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x4c29d0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x4c29d4: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x4c29d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x4c29d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4c29d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4c29dc: 0x26240440  addiu       $a0, $s1, 0x440
    ctx->pc = 0x4c29dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
    // 0x4c29e0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4c29e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4c29e4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x4c29e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x4c29e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4c29e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4c29ec: 0x0  nop
    ctx->pc = 0x4c29ecu;
    // NOP
    // 0x4c29f0: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x4c29f0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
    // 0x4c29f4: 0x0  nop
    ctx->pc = 0x4c29f4u;
    // NOP
    // 0x4c29f8: 0x0  nop
    ctx->pc = 0x4c29f8u;
    // NOP
    // 0x4c29fc: 0xc0754b4  jal         func_1D52D0
    ctx->pc = 0x4C29FCu;
    SET_GPR_U32(ctx, 31, 0x4C2A04u);
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2A04u; }
        if (ctx->pc != 0x4C2A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2A04u; }
        if (ctx->pc != 0x4C2A04u) { return; }
    }
    ctx->pc = 0x4C2A04u;
label_4c2a04:
    // 0x4c2a04: 0xc6e30020  lwc1        $f3, 0x20($s7)
    ctx->pc = 0x4c2a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4c2a08: 0x26c40440  addiu       $a0, $s6, 0x440
    ctx->pc = 0x4c2a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 1088));
    // 0x4c2a0c: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x4c2a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4c2a10: 0xc6c10de8  lwc1        $f1, 0xDE8($s6)
    ctx->pc = 0x4c2a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 3560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4c2a14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4c2a14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4c2a18: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x4c2a18u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
    // 0x4c2a1c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4c2a1cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4c2a20: 0x46011002  mul.s       $f0, $f2, $f1
    ctx->pc = 0x4c2a20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x4c2a24: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x4c2a24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x4c2a28: 0x4600a81c  madd.s      $f0, $f21, $f0
    ctx->pc = 0x4c2a28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[0]));
    // 0x4c2a2c: 0xc0754b4  jal         func_1D52D0
    ctx->pc = 0x4C2A2Cu;
    SET_GPR_U32(ctx, 31, 0x4C2A34u);
    ctx->pc = 0x4C2A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2A2Cu;
            // 0x4c2a30: 0xe6c00de8  swc1        $f0, 0xDE8($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 3560), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2A34u; }
        if (ctx->pc != 0x4C2A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2A34u; }
        if (ctx->pc != 0x4C2A34u) { return; }
    }
    ctx->pc = 0x4C2A34u;
label_4c2a34:
    // 0x4c2a34: 0x3c033f8c  lui         $v1, 0x3F8C
    ctx->pc = 0x4c2a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16268 << 16));
    // 0x4c2a38: 0x3c043f33  lui         $a0, 0x3F33
    ctx->pc = 0x4c2a38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16179 << 16));
    // 0x4c2a3c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x4c2a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x4c2a40: 0x34843332  ori         $a0, $a0, 0x3332
    ctx->pc = 0x4c2a40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13106);
    // 0x4c2a44: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4c2a44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4c2a48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4c2a48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4c2a4c: 0x0  nop
    ctx->pc = 0x4c2a4cu;
    // NOP
    // 0x4c2a50: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4c2a50u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4c2a54: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x4c2a54u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4c2a58: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x4c2a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4c2a5c: 0x4614105c  madd.s      $f1, $f2, $f20
    ctx->pc = 0x4c2a5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[20]));
    // 0x4c2a60: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4c2a60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4c2a64: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x4C2A64u;
    {
        const bool branch_taken_0x4c2a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C2A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2A64u;
            // 0x4c2a68: 0xe6c00df4  swc1        $f0, 0xDF4($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 3572), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2a64) {
            ctx->pc = 0x4C2AD0u;
            goto label_4c2ad0;
        }
    }
    ctx->pc = 0x4C2A6Cu;
    // 0x4c2a6c: 0x8e0300c8  lw          $v1, 0xC8($s0)
    ctx->pc = 0x4c2a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_4c2a70:
    // 0x4c2a70: 0x1663ff9b  bne         $s3, $v1, . + 4 + (-0x65 << 2)
    ctx->pc = 0x4C2A70u;
    {
        const bool branch_taken_0x4c2a70 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x4C2A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2A70u;
            // 0x4c2a74: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2a70) {
            ctx->pc = 0x4C28E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4c28e0;
        }
    }
    ctx->pc = 0x4C2A78u;
label_4c2a78:
    // 0x4c2a78: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4c2a78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x4c2a7c: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x4c2a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x4c2a80: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x4c2a80u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x4c2a84: 0x8c63077c  lw          $v1, 0x77C($v1)
    ctx->pc = 0x4c2a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1916)));
    // 0x4c2a88: 0x2a3182a  slt         $v1, $s5, $v1
    ctx->pc = 0x4c2a88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x4c2a8c: 0x1460ff7d  bnez        $v1, . + 4 + (-0x83 << 2)
    ctx->pc = 0x4C2A8Cu;
    {
        const bool branch_taken_0x4c2a8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C2A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2A8Cu;
            // 0x4c2a90: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2a8c) {
            ctx->pc = 0x4C2884u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4c2884;
        }
    }
    ctx->pc = 0x4C2A94u;
    // 0x4c2a94: 0x8fc300c0  lw          $v1, 0xC0($fp)
    ctx->pc = 0x4c2a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 192)));
    // 0x4c2a98: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4c2a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4c2a9c: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x4c2a9cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4c2aa0: 0x50200008  beql        $at, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4C2AA0u;
    {
        const bool branch_taken_0x4c2aa0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c2aa0) {
            ctx->pc = 0x4C2AA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2AA0u;
            // 0x4c2aa4: 0xafc000c0  sw          $zero, 0xC0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C2AC4u;
            goto label_4c2ac4;
        }
    }
    ctx->pc = 0x4C2AA8u;
    // 0x4c2aa8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4c2aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4c2aac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4c2aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2ab0: 0xc076164  jal         func_1D8590
    ctx->pc = 0x4C2AB0u;
    SET_GPR_U32(ctx, 31, 0x4C2AB8u);
    ctx->pc = 0x4C2AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2AB0u;
            // 0x4c2ab4: 0xafc200c0  sw          $v0, 0xC0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8590u;
    if (runtime->hasFunction(0x1D8590u)) {
        auto targetFn = runtime->lookupFunction(0x1D8590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2AB8u; }
        if (ctx->pc != 0x4C2AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8590_0x1d8590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C2AB8u; }
        if (ctx->pc != 0x4C2AB8u) { return; }
    }
    ctx->pc = 0x4C2AB8u;
label_4c2ab8:
    // 0x4c2ab8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4C2AB8u;
    {
        const bool branch_taken_0x4c2ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C2ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2AB8u;
            // 0x4c2abc: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c2ab8) {
            ctx->pc = 0x4C2AC8u;
            goto label_4c2ac8;
        }
    }
    ctx->pc = 0x4C2AC0u;
    // 0x4c2ac0: 0xafc000c0  sw          $zero, 0xC0($fp)
    ctx->pc = 0x4c2ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 192), GPR_U32(ctx, 0));
label_4c2ac4:
    // 0x4c2ac4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4c2ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4c2ac8:
    // 0x4c2ac8: 0xaec30df0  sw          $v1, 0xDF0($s6)
    ctx->pc = 0x4c2ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 3568), GPR_U32(ctx, 3));
    // 0x4c2acc: 0xaec00df4  sw          $zero, 0xDF4($s6)
    ctx->pc = 0x4c2accu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 3572), GPR_U32(ctx, 0));
label_4c2ad0:
    // 0x4c2ad0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x4c2ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_4c2ad4:
    // 0x4c2ad4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4c2ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x4c2ad8: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x4c2ad8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4c2adc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4c2adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4c2ae0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4c2ae0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4c2ae4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4c2ae4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4c2ae8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4c2ae8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4c2aec: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4c2aecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4c2af0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4c2af0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4c2af4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4c2af4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4c2af8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4c2af8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c2afc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4c2afcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c2b00: 0x3e00008  jr          $ra
    ctx->pc = 0x4C2B00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C2B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C2B00u;
            // 0x4c2b04: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C2B08u;
    // 0x4c2b08: 0x0  nop
    ctx->pc = 0x4c2b08u;
    // NOP
    // 0x4c2b0c: 0x0  nop
    ctx->pc = 0x4c2b0cu;
    // NOP
}
