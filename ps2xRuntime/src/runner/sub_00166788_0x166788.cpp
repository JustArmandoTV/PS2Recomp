#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00166788
// Address: 0x166788 - 0x1668e8
void sub_00166788_0x166788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166788_0x166788");
#endif

    switch (ctx->pc) {
        case 0x1667e8u: goto label_1667e8;
        case 0x166820u: goto label_166820;
        case 0x16683cu: goto label_16683c;
        case 0x166878u: goto label_166878;
        default: break;
    }

    ctx->pc = 0x166788u;

    // 0x166788: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x166788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16678c: 0xe7b60038  swc1        $f22, 0x38($sp)
    ctx->pc = 0x16678cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x166790: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x166790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x166794: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x166794u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x166798: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x166798u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x16679c: 0x0  nop
    ctx->pc = 0x16679cu;
    // NOP
    // 0x1667a0: 0x0  nop
    ctx->pc = 0x1667a0u;
    // NOP
    // 0x1667a4: 0x46160504  c1          0x160504
    ctx->pc = 0x1667a4u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x1667a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1667a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1667ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1667acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1667b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1667b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1667b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1667b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1667b8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1667b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1667bc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1667bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1667c0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1667c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1667c4: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x1667c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1667c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1667c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1667cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1667ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1667d0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1667d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1667d4: 0x4614a032  c.eq.s      $f20, $f20
    ctx->pc = 0x1667d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1667d8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1667D8u;
    {
        const bool branch_taken_0x1667d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1667DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1667D8u;
            // 0x1667dc: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1667d8) {
            ctx->pc = 0x1667ECu;
            goto label_1667ec;
        }
    }
    ctx->pc = 0x1667E0u;
    // 0x1667e0: 0xc047822  jal         func_11E088
    ctx->pc = 0x1667E0u;
    SET_GPR_U32(ctx, 31, 0x1667E8u);
    ctx->pc = 0x11E088u;
    if (runtime->hasFunction(0x11E088u)) {
        auto targetFn = runtime->lookupFunction(0x11E088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1667E8u; }
        if (ctx->pc != 0x1667E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E088_0x11e088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1667E8u; }
        if (ctx->pc != 0x1667E8u) { return; }
    }
    ctx->pc = 0x1667E8u;
label_1667e8:
    // 0x1667e8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1667e8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_1667ec:
    // 0x1667ec: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x1667ecu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1667f0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1667f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1667f4: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x1667f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x1667f8: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x1667f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x1667fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1667fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166800: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x166800u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x166804: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x166804u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x166808: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x166808u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x16680c: 0x0  nop
    ctx->pc = 0x16680cu;
    // NOP
    // 0x166810: 0x0  nop
    ctx->pc = 0x166810u;
    // NOP
    // 0x166814: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x166814u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[1];
    // 0x166818: 0xc047714  jal         func_11DC50
    ctx->pc = 0x166818u;
    SET_GPR_U32(ctx, 31, 0x166820u);
    ctx->pc = 0x11DC50u;
    if (runtime->hasFunction(0x11DC50u)) {
        auto targetFn = runtime->lookupFunction(0x11DC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166820u; }
        if (ctx->pc != 0x166820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DC50_0x11dc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166820u; }
        if (ctx->pc != 0x166820u) { return; }
    }
    ctx->pc = 0x166820u;
label_166820:
    // 0x166820: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x166820u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x166824: 0x4600a046  mov.s       $f1, $f20
    ctx->pc = 0x166824u;
    ctx->f[1] = FPU_MOV_S(ctx->f[20]);
    // 0x166828: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x166828u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16682c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x16682Cu;
    {
        const bool branch_taken_0x16682c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x166830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16682Cu;
            // 0x166830: 0x4600ad41  sub.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16682c) {
            ctx->pc = 0x166840u;
            goto label_166840;
        }
    }
    ctx->pc = 0x166834u;
    // 0x166834: 0xc047822  jal         func_11E088
    ctx->pc = 0x166834u;
    SET_GPR_U32(ctx, 31, 0x16683Cu);
    ctx->pc = 0x11E088u;
    if (runtime->hasFunction(0x11E088u)) {
        auto targetFn = runtime->lookupFunction(0x11E088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16683Cu; }
        if (ctx->pc != 0x16683Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E088_0x11e088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16683Cu; }
        if (ctx->pc != 0x16683Cu) { return; }
    }
    ctx->pc = 0x16683Cu;
label_16683c:
    // 0x16683c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x16683cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_166840:
    // 0x166840: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x166840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x166844: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x166844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166848: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x166848u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16684c: 0x4614a801  sub.s       $f0, $f21, $f20
    ctx->pc = 0x16684cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x166850: 0x4614ab00  add.s       $f12, $f21, $f20
    ctx->pc = 0x166850u;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    // 0x166854: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x166854u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x166858: 0x0  nop
    ctx->pc = 0x166858u;
    // NOP
    // 0x16685c: 0x0  nop
    ctx->pc = 0x16685cu;
    // NOP
    // 0x166860: 0x460c0004  c1          0xC0004
    ctx->pc = 0x166860u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x166864: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x166864u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x166868: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x166868u;
    {
        const bool branch_taken_0x166868 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x166868) {
            ctx->pc = 0x16686Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x166868u;
            // 0x16686c: 0x4600a801  sub.s       $f0, $f21, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x16687Cu;
            goto label_16687c;
        }
    }
    ctx->pc = 0x166870u;
    // 0x166870: 0xc047822  jal         func_11E088
    ctx->pc = 0x166870u;
    SET_GPR_U32(ctx, 31, 0x166878u);
    ctx->pc = 0x11E088u;
    if (runtime->hasFunction(0x11E088u)) {
        auto targetFn = runtime->lookupFunction(0x11E088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166878u; }
        if (ctx->pc != 0x166878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E088_0x11e088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166878u; }
        if (ctx->pc != 0x166878u) { return; }
    }
    ctx->pc = 0x166878u;
label_166878:
    // 0x166878: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x166878u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_16687c:
    // 0x16687c: 0xc7b50030  lwc1        $f21, 0x30($sp)
    ctx->pc = 0x16687cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x166880: 0x3c014580  lui         $at, 0x4580
    ctx->pc = 0x166880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17792 << 16));
    // 0x166884: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x166884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x166888: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x166888u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16688c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16688cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x166890: 0x0  nop
    ctx->pc = 0x166890u;
    // NOP
    // 0x166894: 0x0  nop
    ctx->pc = 0x166894u;
    // NOP
    // 0x166898: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x166898u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x16689c: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x16689cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1668a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1668a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1668a4: 0xc7b60038  lwc1        $f22, 0x38($sp)
    ctx->pc = 0x1668a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1668a8: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1668a8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x1668ac: 0x46000080  add.s       $f2, $f0, $f0
    ctx->pc = 0x1668acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1668b0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1668b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1668b4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1668b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1668b8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1668b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1668bc: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1668bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1668c0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1668c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1668c4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1668c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1668c8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1668c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1668cc: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x1668ccu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1668d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1668d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1668d4: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x1668d4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1668d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1668d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1668dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1668DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1668E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1668DCu;
            // 0x1668e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1668E4u;
    // 0x1668e4: 0x0  nop
    ctx->pc = 0x1668e4u;
    // NOP
}
