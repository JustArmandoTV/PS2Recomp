#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0037E710
// Address: 0x37e710 - 0x37e880
void sub_0037E710_0x37e710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037E710_0x37e710");
#endif

    switch (ctx->pc) {
        case 0x37e710u: goto label_37e710;
        case 0x37e714u: goto label_37e714;
        case 0x37e718u: goto label_37e718;
        case 0x37e71cu: goto label_37e71c;
        case 0x37e720u: goto label_37e720;
        case 0x37e724u: goto label_37e724;
        case 0x37e728u: goto label_37e728;
        case 0x37e72cu: goto label_37e72c;
        case 0x37e730u: goto label_37e730;
        case 0x37e734u: goto label_37e734;
        case 0x37e738u: goto label_37e738;
        case 0x37e73cu: goto label_37e73c;
        case 0x37e740u: goto label_37e740;
        case 0x37e744u: goto label_37e744;
        case 0x37e748u: goto label_37e748;
        case 0x37e74cu: goto label_37e74c;
        case 0x37e750u: goto label_37e750;
        case 0x37e754u: goto label_37e754;
        case 0x37e758u: goto label_37e758;
        case 0x37e75cu: goto label_37e75c;
        case 0x37e760u: goto label_37e760;
        case 0x37e764u: goto label_37e764;
        case 0x37e768u: goto label_37e768;
        case 0x37e76cu: goto label_37e76c;
        case 0x37e770u: goto label_37e770;
        case 0x37e774u: goto label_37e774;
        case 0x37e778u: goto label_37e778;
        case 0x37e77cu: goto label_37e77c;
        case 0x37e780u: goto label_37e780;
        case 0x37e784u: goto label_37e784;
        case 0x37e788u: goto label_37e788;
        case 0x37e78cu: goto label_37e78c;
        case 0x37e790u: goto label_37e790;
        case 0x37e794u: goto label_37e794;
        case 0x37e798u: goto label_37e798;
        case 0x37e79cu: goto label_37e79c;
        case 0x37e7a0u: goto label_37e7a0;
        case 0x37e7a4u: goto label_37e7a4;
        case 0x37e7a8u: goto label_37e7a8;
        case 0x37e7acu: goto label_37e7ac;
        case 0x37e7b0u: goto label_37e7b0;
        case 0x37e7b4u: goto label_37e7b4;
        case 0x37e7b8u: goto label_37e7b8;
        case 0x37e7bcu: goto label_37e7bc;
        case 0x37e7c0u: goto label_37e7c0;
        case 0x37e7c4u: goto label_37e7c4;
        case 0x37e7c8u: goto label_37e7c8;
        case 0x37e7ccu: goto label_37e7cc;
        case 0x37e7d0u: goto label_37e7d0;
        case 0x37e7d4u: goto label_37e7d4;
        case 0x37e7d8u: goto label_37e7d8;
        case 0x37e7dcu: goto label_37e7dc;
        case 0x37e7e0u: goto label_37e7e0;
        case 0x37e7e4u: goto label_37e7e4;
        case 0x37e7e8u: goto label_37e7e8;
        case 0x37e7ecu: goto label_37e7ec;
        case 0x37e7f0u: goto label_37e7f0;
        case 0x37e7f4u: goto label_37e7f4;
        case 0x37e7f8u: goto label_37e7f8;
        case 0x37e7fcu: goto label_37e7fc;
        case 0x37e800u: goto label_37e800;
        case 0x37e804u: goto label_37e804;
        case 0x37e808u: goto label_37e808;
        case 0x37e80cu: goto label_37e80c;
        case 0x37e810u: goto label_37e810;
        case 0x37e814u: goto label_37e814;
        case 0x37e818u: goto label_37e818;
        case 0x37e81cu: goto label_37e81c;
        case 0x37e820u: goto label_37e820;
        case 0x37e824u: goto label_37e824;
        case 0x37e828u: goto label_37e828;
        case 0x37e82cu: goto label_37e82c;
        case 0x37e830u: goto label_37e830;
        case 0x37e834u: goto label_37e834;
        case 0x37e838u: goto label_37e838;
        case 0x37e83cu: goto label_37e83c;
        case 0x37e840u: goto label_37e840;
        case 0x37e844u: goto label_37e844;
        case 0x37e848u: goto label_37e848;
        case 0x37e84cu: goto label_37e84c;
        case 0x37e850u: goto label_37e850;
        case 0x37e854u: goto label_37e854;
        case 0x37e858u: goto label_37e858;
        case 0x37e85cu: goto label_37e85c;
        case 0x37e860u: goto label_37e860;
        case 0x37e864u: goto label_37e864;
        case 0x37e868u: goto label_37e868;
        case 0x37e86cu: goto label_37e86c;
        case 0x37e870u: goto label_37e870;
        case 0x37e874u: goto label_37e874;
        case 0x37e878u: goto label_37e878;
        case 0x37e87cu: goto label_37e87c;
        default: break;
    }

    ctx->pc = 0x37e710u;

label_37e710:
    // 0x37e710: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x37e710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_37e714:
    // 0x37e714: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x37e714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_37e718:
    // 0x37e718: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x37e718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_37e71c:
    // 0x37e71c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37e71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37e720:
    // 0x37e720: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x37e720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_37e724:
    // 0x37e724: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37e724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_37e728:
    // 0x37e728: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37e728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_37e72c:
    // 0x37e72c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37e72cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37e730:
    // 0x37e730: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x37e730u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_37e734:
    // 0x37e734: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x37e734u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_37e738:
    // 0x37e738: 0x8c8300d8  lw          $v1, 0xD8($a0)
    ctx->pc = 0x37e738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
label_37e73c:
    // 0x37e73c: 0x8c5089e0  lw          $s0, -0x7620($v0)
    ctx->pc = 0x37e73cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_37e740:
    // 0x37e740: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x37e740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_37e744:
    // 0x37e744: 0x8c8400dc  lw          $a0, 0xDC($a0)
    ctx->pc = 0x37e744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
label_37e748:
    // 0x37e748: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37e748u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37e74c:
    // 0x37e74c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37e74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37e750:
    // 0x37e750: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x37e750u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_37e754:
    // 0x37e754: 0x2483ffd3  addiu       $v1, $a0, -0x2D
    ctx->pc = 0x37e754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967251));
label_37e758:
    // 0x37e758: 0x8c4460a8  lw          $a0, 0x60A8($v0)
    ctx->pc = 0x37e758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24744)));
label_37e75c:
    // 0x37e75c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37e75cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37e760:
    // 0x37e760: 0xc0506ac  jal         func_141AB0
label_37e764:
    if (ctx->pc == 0x37E764u) {
        ctx->pc = 0x37E764u;
            // 0x37e764: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x37E768u;
        goto label_37e768;
    }
    ctx->pc = 0x37E760u;
    SET_GPR_U32(ctx, 31, 0x37E768u);
    ctx->pc = 0x37E764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37E760u;
            // 0x37e764: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E768u; }
        if (ctx->pc != 0x37E768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E768u; }
        if (ctx->pc != 0x37E768u) { return; }
    }
    ctx->pc = 0x37E768u;
label_37e768:
    // 0x37e768: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x37e768u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_37e76c:
    // 0x37e76c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37e76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37e770:
    // 0x37e770: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x37e770u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_37e774:
    // 0x37e774: 0x320f809  jalr        $t9
label_37e778:
    if (ctx->pc == 0x37E778u) {
        ctx->pc = 0x37E778u;
            // 0x37e778: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x37E77Cu;
        goto label_37e77c;
    }
    ctx->pc = 0x37E774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37E77Cu);
        ctx->pc = 0x37E778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37E774u;
            // 0x37e778: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37E77Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37E77Cu; }
            if (ctx->pc != 0x37E77Cu) { return; }
        }
        }
    }
    ctx->pc = 0x37E77Cu;
label_37e77c:
    // 0x37e77c: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x37e77cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_37e780:
    // 0x37e780: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x37e780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_37e784:
    // 0x37e784: 0x24a55750  addiu       $a1, $a1, 0x5750
    ctx->pc = 0x37e784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22352));
label_37e788:
    // 0x37e788: 0x84445730  lh          $a0, 0x5730($v0)
    ctx->pc = 0x37e788u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22320)));
label_37e78c:
    // 0x37e78c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x37e78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37e790:
    // 0x37e790: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x37e790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_37e794:
    // 0x37e794: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x37e794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37e798:
    // 0x37e798: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37e798u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37e79c:
    // 0x37e79c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x37e79cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_37e7a0:
    // 0x37e7a0: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x37e7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_37e7a4:
    // 0x37e7a4: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x37e7a4u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_37e7a8:
    // 0x37e7a8: 0x84485732  lh          $t0, 0x5732($v0)
    ctx->pc = 0x37e7a8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22322)));
label_37e7ac:
    // 0x37e7ac: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x37e7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37e7b0:
    // 0x37e7b0: 0x3c0223ff  lui         $v0, 0x23FF
    ctx->pc = 0x37e7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9215 << 16));
label_37e7b4:
    // 0x37e7b4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x37e7b4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37e7b8:
    // 0x37e7b8: 0x344623ff  ori         $a2, $v0, 0x23FF
    ctx->pc = 0x37e7b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9215);
label_37e7bc:
    // 0x37e7bc: 0x46801420  cvt.s.w     $f16, $f2
    ctx->pc = 0x37e7bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_37e7c0:
    // 0x37e7c0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x37e7c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_37e7c4:
    // 0x37e7c4: 0x4601ab80  add.s       $f14, $f21, $f1
    ctx->pc = 0x37e7c4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_37e7c8:
    // 0x37e7c8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x37e7c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_37e7cc:
    // 0x37e7cc: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x37e7ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_37e7d0:
    // 0x37e7d0: 0xc0bc284  jal         func_2F0A10
label_37e7d4:
    if (ctx->pc == 0x37E7D4u) {
        ctx->pc = 0x37E7D4u;
            // 0x37e7d4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x37E7D8u;
        goto label_37e7d8;
    }
    ctx->pc = 0x37E7D0u;
    SET_GPR_U32(ctx, 31, 0x37E7D8u);
    ctx->pc = 0x37E7D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37E7D0u;
            // 0x37e7d4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E7D8u; }
        if (ctx->pc != 0x37E7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E7D8u; }
        if (ctx->pc != 0x37E7D8u) { return; }
    }
    ctx->pc = 0x37E7D8u;
label_37e7d8:
    // 0x37e7d8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x37e7d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_37e7dc:
    // 0x37e7dc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x37e7dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_37e7e0:
    // 0x37e7e0: 0x320f809  jalr        $t9
label_37e7e4:
    if (ctx->pc == 0x37E7E4u) {
        ctx->pc = 0x37E7E4u;
            // 0x37e7e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37E7E8u;
        goto label_37e7e8;
    }
    ctx->pc = 0x37E7E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37E7E8u);
        ctx->pc = 0x37E7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37E7E0u;
            // 0x37e7e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37E7E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37E7E8u; }
            if (ctx->pc != 0x37E7E8u) { return; }
        }
        }
    }
    ctx->pc = 0x37E7E8u;
label_37e7e8:
    // 0x37e7e8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37e7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37e7ec:
    // 0x37e7ec: 0x8c420eac  lw          $v0, 0xEAC($v0)
    ctx->pc = 0x37e7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_37e7f0:
    // 0x37e7f0: 0x8c520080  lw          $s2, 0x80($v0)
    ctx->pc = 0x37e7f0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_37e7f4:
    // 0x37e7f4: 0xc156e20  jal         func_55B880
label_37e7f8:
    if (ctx->pc == 0x37E7F8u) {
        ctx->pc = 0x37E7F8u;
            // 0x37e7f8: 0x8e3000dc  lw          $s0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->pc = 0x37E7FCu;
        goto label_37e7fc;
    }
    ctx->pc = 0x37E7F4u;
    SET_GPR_U32(ctx, 31, 0x37E7FCu);
    ctx->pc = 0x37E7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37E7F4u;
            // 0x37e7f8: 0x8e3000dc  lw          $s0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55B880u;
    if (runtime->hasFunction(0x55B880u)) {
        auto targetFn = runtime->lookupFunction(0x55B880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E7FCu; }
        if (ctx->pc != 0x37E7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055B880_0x55b880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E7FCu; }
        if (ctx->pc != 0x37E7FCu) { return; }
    }
    ctx->pc = 0x37E7FCu;
label_37e7fc:
    // 0x37e7fc: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x37e7fcu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_37e800:
    // 0x37e800: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x37e800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_37e804:
    // 0x37e804: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x37e804u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_37e808:
    // 0x37e808: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x37e808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_37e80c:
    // 0x37e80c: 0x3c0641c0  lui         $a2, 0x41C0
    ctx->pc = 0x37e80cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16832 << 16));
label_37e810:
    // 0x37e810: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x37e810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_37e814:
    // 0x37e814: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x37e814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_37e818:
    // 0x37e818: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x37e818u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_37e81c:
    // 0x37e81c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37e81cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_37e820:
    // 0x37e820: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x37e820u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_37e824:
    // 0x37e824: 0x0  nop
    ctx->pc = 0x37e824u;
    // NOP
label_37e828:
    // 0x37e828: 0x24e7fff8  addiu       $a3, $a3, -0x8
    ctx->pc = 0x37e828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
label_37e82c:
    // 0x37e82c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x37e82cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37e830:
    // 0x37e830: 0x0  nop
    ctx->pc = 0x37e830u;
    // NOP
label_37e834:
    // 0x37e834: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x37e834u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_37e838:
    // 0x37e838: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x37e838u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37e83c:
    // 0x37e83c: 0x0  nop
    ctx->pc = 0x37e83cu;
    // NOP
label_37e840:
    // 0x37e840: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x37e840u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_37e844:
    // 0x37e844: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x37e844u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37e848:
    // 0x37e848: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x37e848u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_37e84c:
    // 0x37e84c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x37e84cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_37e850:
    // 0x37e850: 0xc156e30  jal         func_55B8C0
label_37e854:
    if (ctx->pc == 0x37E854u) {
        ctx->pc = 0x37E854u;
            // 0x37e854: 0x46000b41  sub.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x37E858u;
        goto label_37e858;
    }
    ctx->pc = 0x37E850u;
    SET_GPR_U32(ctx, 31, 0x37E858u);
    ctx->pc = 0x37E854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37E850u;
            // 0x37e854: 0x46000b41  sub.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x55B8C0u;
    if (runtime->hasFunction(0x55B8C0u)) {
        auto targetFn = runtime->lookupFunction(0x55B8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E858u; }
        if (ctx->pc != 0x37E858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055B8C0_0x55b8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E858u; }
        if (ctx->pc != 0x37E858u) { return; }
    }
    ctx->pc = 0x37E858u;
label_37e858:
    // 0x37e858: 0xc0df888  jal         func_37E220
label_37e85c:
    if (ctx->pc == 0x37E85Cu) {
        ctx->pc = 0x37E85Cu;
            // 0x37e85c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37E860u;
        goto label_37e860;
    }
    ctx->pc = 0x37E858u;
    SET_GPR_U32(ctx, 31, 0x37E860u);
    ctx->pc = 0x37E85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37E858u;
            // 0x37e85c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37E220u;
    if (runtime->hasFunction(0x37E220u)) {
        auto targetFn = runtime->lookupFunction(0x37E220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E860u; }
        if (ctx->pc != 0x37E860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037E220_0x37e220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E860u; }
        if (ctx->pc != 0x37E860u) { return; }
    }
    ctx->pc = 0x37E860u;
label_37e860:
    // 0x37e860: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x37e860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_37e864:
    // 0x37e864: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x37e864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_37e868:
    // 0x37e868: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x37e868u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37e86c:
    // 0x37e86c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x37e86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_37e870:
    // 0x37e870: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37e870u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37e874:
    // 0x37e874: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37e874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37e878:
    // 0x37e878: 0x3e00008  jr          $ra
label_37e87c:
    if (ctx->pc == 0x37E87Cu) {
        ctx->pc = 0x37E87Cu;
            // 0x37e87c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x37E880u;
        goto label_fallthrough_0x37e878;
    }
    ctx->pc = 0x37E878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37E87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37E878u;
            // 0x37e87c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x37e878:
    ctx->pc = 0x37E880u;
}
