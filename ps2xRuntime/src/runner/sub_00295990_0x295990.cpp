#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00295990
// Address: 0x295990 - 0x2969a0
void sub_00295990_0x295990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295990_0x295990");
#endif

    switch (ctx->pc) {
        case 0x295cbcu: goto label_295cbc;
        case 0x295ea8u: goto label_295ea8;
        case 0x295f08u: goto label_295f08;
        case 0x29621cu: goto label_29621c;
        case 0x296238u: goto label_296238;
        case 0x296290u: goto label_296290;
        case 0x2963c0u: goto label_2963c0;
        case 0x296434u: goto label_296434;
        case 0x29649cu: goto label_29649c;
        case 0x296508u: goto label_296508;
        case 0x29656cu: goto label_29656c;
        case 0x2965d4u: goto label_2965d4;
        case 0x29663cu: goto label_29663c;
        case 0x2966a8u: goto label_2966a8;
        case 0x296710u: goto label_296710;
        case 0x296750u: goto label_296750;
        case 0x29679cu: goto label_29679c;
        case 0x2967d8u: goto label_2967d8;
        case 0x2968a0u: goto label_2968a0;
        default: break;
    }

    ctx->pc = 0x295990u;

    // 0x295990: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x295990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x295994: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x295994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x295998: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x295998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x29599c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x29599cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x2959a0: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x2959a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x2959a4: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x2959a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x2959a8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2959a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2959ac: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2959acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2959b0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2959b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2959b4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2959b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2959b8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2959b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2959bc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2959bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2959c0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2959c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2959c4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2959c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2959c8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2959c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2959cc: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x2959ccu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2959d0: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x2959d0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2959d4: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x2959d4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2959d8: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x2959d8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2959dc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2959dcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2959e0: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x2959e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2959e4: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x2959e4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x2959e8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2959e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2959ec: 0x4617b036  c.le.s      $f22, $f23
    ctx->pc = 0x2959ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2959f0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2959f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2959f4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2959F4u;
    {
        const bool branch_taken_0x2959f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2959F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2959F4u;
            // 0x2959f8: 0x46006d46  mov.s       $f21, $f13 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2959f4) {
            ctx->pc = 0x295A08u;
            goto label_295a08;
        }
    }
    ctx->pc = 0x2959FCu;
    // 0x2959fc: 0x100003d2  b           . + 4 + (0x3D2 << 2)
    ctx->pc = 0x2959FCu;
    {
        const bool branch_taken_0x2959fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2959FCu;
            // 0x295a00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2959fc) {
            ctx->pc = 0x296948u;
            goto label_296948;
        }
    }
    ctx->pc = 0x295A04u;
    // 0x295a04: 0x0  nop
    ctx->pc = 0x295a04u;
    // NOP
label_295a08:
    // 0x295a08: 0x4617a834  c.lt.s      $f21, $f23
    ctx->pc = 0x295a08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x295a0c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x295A0Cu;
    {
        const bool branch_taken_0x295a0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x295a0c) {
            ctx->pc = 0x295A20u;
            goto label_295a20;
        }
    }
    ctx->pc = 0x295A14u;
    // 0x295a14: 0x100003cc  b           . + 4 + (0x3CC << 2)
    ctx->pc = 0x295A14u;
    {
        const bool branch_taken_0x295a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295A14u;
            // 0x295a18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295a14) {
            ctx->pc = 0x296948u;
            goto label_296948;
        }
    }
    ctx->pc = 0x295A1Cu;
    // 0x295a1c: 0x0  nop
    ctx->pc = 0x295a1cu;
    // NOP
label_295a20:
    // 0x295a20: 0x3c023727  lui         $v0, 0x3727
    ctx->pc = 0x295a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14119 << 16));
    // 0x295a24: 0xc6880000  lwc1        $f8, 0x0($s4)
    ctx->pc = 0x295a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x295a28: 0x3442c5ac  ori         $v0, $v0, 0xC5AC
    ctx->pc = 0x295a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50604);
    // 0x295a2c: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x295a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295a30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x295a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x295a34: 0xc6870004  lwc1        $f7, 0x4($s4)
    ctx->pc = 0x295a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x295a38: 0xc6640004  lwc1        $f4, 0x4($s3)
    ctx->pc = 0x295a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x295a3c: 0xc6a20004  lwc1        $f2, 0x4($s5)
    ctx->pc = 0x295a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x295a40: 0xc6860008  lwc1        $f6, 0x8($s4)
    ctx->pc = 0x295a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x295a44: 0x46080a81  sub.s       $f10, $f1, $f8
    ctx->pc = 0x295a44u;
    ctx->f[10] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x295a48: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x295a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295a4c: 0xc6630008  lwc1        $f3, 0x8($s3)
    ctx->pc = 0x295a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x295a50: 0x46072241  sub.s       $f9, $f4, $f7
    ctx->pc = 0x295a50u;
    ctx->f[9] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
    // 0x295a54: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x295a54u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x295a58: 0xc6a50000  lwc1        $f5, 0x0($s5)
    ctx->pc = 0x295a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x295a5c: 0x46061901  sub.s       $f4, $f3, $f6
    ctx->pc = 0x295a5cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x295a60: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x295a60u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
    // 0x295a64: 0x4601481a  mula.s      $f9, $f1
    ctx->pc = 0x295a64u;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x295a68: 0x460828c1  sub.s       $f3, $f5, $f8
    ctx->pc = 0x295a68u;
    ctx->f[3] = FPU_SUB_S(ctx->f[5], ctx->f[8]);
    // 0x295a6c: 0x4602269d  msub.s      $f26, $f4, $f2
    ctx->pc = 0x295a6cu;
    ctx->f[26] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
    // 0x295a70: 0x4603201a  mula.s      $f4, $f3
    ctx->pc = 0x295a70u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x295a74: 0x4601565d  msub.s      $f25, $f10, $f1
    ctx->pc = 0x295a74u;
    ctx->f[25] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[1]));
    // 0x295a78: 0x4602501a  mula.s      $f10, $f2
    ctx->pc = 0x295a78u;
    ctx->f[31] = FPU_MUL_S(ctx->f[10], ctx->f[2]);
    // 0x295a7c: 0x461ad082  mul.s       $f2, $f26, $f26
    ctx->pc = 0x295a7cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[26], ctx->f[26]);
    // 0x295a80: 0x4619c842  mul.s       $f1, $f25, $f25
    ctx->pc = 0x295a80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[25], ctx->f[25]);
    // 0x295a84: 0x46034e1d  msub.s      $f24, $f9, $f3
    ctx->pc = 0x295a84u;
    ctx->f[24] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[3]));
    // 0x295a88: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x295a88u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x295a8c: 0x4618c05c  madd.s      $f1, $f24, $f24
    ctx->pc = 0x295a8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[24], ctx->f[24]));
    // 0x295a90: 0x46010504  c1          0x10504
    ctx->pc = 0x295a90u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x295a94: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x295a94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x295a98: 0x0  nop
    ctx->pc = 0x295a98u;
    // NOP
    // 0x295a9c: 0x0  nop
    ctx->pc = 0x295a9cu;
    // NOP
    // 0x295aa0: 0x45000089  bc1f        . + 4 + (0x89 << 2)
    ctx->pc = 0x295AA0u;
    {
        const bool branch_taken_0x295aa0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x295aa0) {
            ctx->pc = 0x295CC8u;
            goto label_295cc8;
        }
    }
    ctx->pc = 0x295AA8u;
    // 0x295aa8: 0x3c023eaa  lui         $v0, 0x3EAA
    ctx->pc = 0x295aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16042 << 16));
    // 0x295aac: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x295aacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x295ab0: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x295ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x295ab4: 0x27a801d4  addiu       $t0, $sp, 0x1D4
    ctx->pc = 0x295ab4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 468));
    // 0x295ab8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x295ab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x295abc: 0x27a701d8  addiu       $a3, $sp, 0x1D8
    ctx->pc = 0x295abcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
    // 0x295ac0: 0xe7a501d0  swc1        $f5, 0x1D0($sp)
    ctx->pc = 0x295ac0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x295ac4: 0x27a601dc  addiu       $a2, $sp, 0x1DC
    ctx->pc = 0x295ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
    // 0x295ac8: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x295ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x295acc: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x295accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x295ad0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x295ad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x295ad4: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x295ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x295ad8: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x295ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295adc: 0x4600b183  div.s       $f6, $f22, $f0
    ctx->pc = 0x295adcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[6] = ctx->f[22] / ctx->f[0];
    // 0x295ae0: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x295ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x295ae4: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x295ae4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x295ae8: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x295ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295aec: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x295aecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x295af0: 0x27a301b0  addiu       $v1, $sp, 0x1B0
    ctx->pc = 0x295af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x295af4: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x295af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x295af8: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x295af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295afc: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x295afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x295b00: 0xc7a101d0  lwc1        $f1, 0x1D0($sp)
    ctx->pc = 0x295b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295b04: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x295b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295b08: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x295b08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x295b0c: 0xe7a001d0  swc1        $f0, 0x1D0($sp)
    ctx->pc = 0x295b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x295b10: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x295b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295b14: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x295b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295b18: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x295b18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x295b1c: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x295b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x295b20: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x295b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295b24: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x295b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295b28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x295b28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x295b2c: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x295b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x295b30: 0xc681000c  lwc1        $f1, 0xC($s4)
    ctx->pc = 0x295b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295b34: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x295b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295b38: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x295b38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x295b3c: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x295b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x295b40: 0xc7a101d0  lwc1        $f1, 0x1D0($sp)
    ctx->pc = 0x295b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295b44: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x295b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295b48: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x295b48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x295b4c: 0xe7a001d0  swc1        $f0, 0x1D0($sp)
    ctx->pc = 0x295b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x295b50: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x295b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295b54: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x295b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295b58: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x295b58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x295b5c: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x295b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x295b60: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x295b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295b64: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x295b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295b68: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x295b68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x295b6c: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x295b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x295b70: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x295b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295b74: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x295b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295b78: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x295b78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x295b7c: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x295b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x295b80: 0xc7a101d0  lwc1        $f1, 0x1D0($sp)
    ctx->pc = 0x295b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295b84: 0xc7a001d4  lwc1        $f0, 0x1D4($sp)
    ctx->pc = 0x295b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295b88: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x295b88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x295b8c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x295b8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x295b90: 0xe7a101d0  swc1        $f1, 0x1D0($sp)
    ctx->pc = 0x295b90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x295b94: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x295b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x295b98: 0xc7a001d8  lwc1        $f0, 0x1D8($sp)
    ctx->pc = 0x295b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295b9c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x295b9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x295ba0: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x295ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x295ba4: 0xc7a001dc  lwc1        $f0, 0x1DC($sp)
    ctx->pc = 0x295ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295ba8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x295ba8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x295bac: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x295bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x295bb0: 0xc7a001d0  lwc1        $f0, 0x1D0($sp)
    ctx->pc = 0x295bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295bb4: 0xc68b0000  lwc1        $f11, 0x0($s4)
    ctx->pc = 0x295bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x295bb8: 0xc6ad0000  lwc1        $f13, 0x0($s5)
    ctx->pc = 0x295bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x295bbc: 0xc66a0000  lwc1        $f10, 0x0($s3)
    ctx->pc = 0x295bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x295bc0: 0xc7b101d4  lwc1        $f17, 0x1D4($sp)
    ctx->pc = 0x295bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x295bc4: 0xc7a401d8  lwc1        $f4, 0x1D8($sp)
    ctx->pc = 0x295bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x295bc8: 0x46007842  mul.s       $f1, $f15, $f0
    ctx->pc = 0x295bc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x295bcc: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x295bccu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x295bd0: 0x460b5802  mul.s       $f0, $f11, $f11
    ctx->pc = 0x295bd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x295bd4: 0x460d6b9c  madd.s      $f14, $f13, $f13
    ctx->pc = 0x295bd4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[13]));
    // 0x295bd8: 0x460e0018  adda.s      $f0, $f14
    ctx->pc = 0x295bd8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[14]);
    // 0x295bdc: 0x460a501c  madd.s      $f0, $f10, $f10
    ctx->pc = 0x295bdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[10]));
    // 0x295be0: 0x46003482  mul.s       $f18, $f6, $f0
    ctx->pc = 0x295be0u;
    ctx->f[18] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x295be4: 0x46117802  mul.s       $f0, $f15, $f17
    ctx->pc = 0x295be4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[15], ctx->f[17]);
    // 0x295be8: 0xc6880004  lwc1        $f8, 0x4($s4)
    ctx->pc = 0x295be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x295bec: 0x46047b82  mul.s       $f14, $f15, $f4
    ctx->pc = 0x295becu;
    ctx->f[14] = FPU_MUL_S(ctx->f[15], ctx->f[4]);
    // 0x295bf0: 0xc6a90004  lwc1        $f9, 0x4($s5)
    ctx->pc = 0x295bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x295bf4: 0x4611001a  mula.s      $f0, $f17
    ctx->pc = 0x295bf4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[17]);
    // 0x295bf8: 0xc6670004  lwc1        $f7, 0x4($s3)
    ctx->pc = 0x295bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x295bfc: 0x460843c2  mul.s       $f15, $f8, $f8
    ctx->pc = 0x295bfcu;
    ctx->f[15] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x295c00: 0x46094c1c  madd.s      $f16, $f9, $f9
    ctx->pc = 0x295c00u;
    ctx->f[16] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[9]));
    // 0x295c04: 0x46107818  adda.s      $f15, $f16
    ctx->pc = 0x295c04u;
    ctx->f[31] = FPU_ADD_S(ctx->f[15], ctx->f[16]);
    // 0x295c08: 0x46073bdc  madd.s      $f15, $f7, $f7
    ctx->pc = 0x295c08u;
    ctx->f[15] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[7]));
    // 0x295c0c: 0xc6830008  lwc1        $f3, 0x8($s4)
    ctx->pc = 0x295c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x295c10: 0x4604701a  mula.s      $f14, $f4
    ctx->pc = 0x295c10u;
    ctx->f[31] = FPU_MUL_S(ctx->f[14], ctx->f[4]);
    // 0x295c14: 0xc6a50008  lwc1        $f5, 0x8($s5)
    ctx->pc = 0x295c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x295c18: 0x460f3402  mul.s       $f16, $f6, $f15
    ctx->pc = 0x295c18u;
    ctx->f[16] = FPU_MUL_S(ctx->f[6], ctx->f[15]);
    // 0x295c1c: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x295c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x295c20: 0x46031b82  mul.s       $f14, $f3, $f3
    ctx->pc = 0x295c20u;
    ctx->f[14] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x295c24: 0x46052bdc  madd.s      $f15, $f5, $f5
    ctx->pc = 0x295c24u;
    ctx->f[15] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[5]));
    // 0x295c28: 0x460f7018  adda.s      $f14, $f15
    ctx->pc = 0x295c28u;
    ctx->f[31] = FPU_ADD_S(ctx->f[14], ctx->f[15]);
    // 0x295c2c: 0x4602139c  madd.s      $f14, $f2, $f2
    ctx->pc = 0x295c2cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x295c30: 0x460e33c2  mul.s       $f15, $f6, $f14
    ctx->pc = 0x295c30u;
    ctx->f[15] = FPU_MUL_S(ctx->f[6], ctx->f[14]);
    // 0x295c34: 0x460f8380  add.s       $f14, $f16, $f15
    ctx->pc = 0x295c34u;
    ctx->f[14] = FPU_ADD_S(ctx->f[16], ctx->f[15]);
    // 0x295c38: 0xe7ae01a0  swc1        $f14, 0x1A0($sp)
    ctx->pc = 0x295c38u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x295c3c: 0x460f93c0  add.s       $f15, $f18, $f15
    ctx->pc = 0x295c3cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[18], ctx->f[15]);
    // 0x295c40: 0x46109380  add.s       $f14, $f18, $f16
    ctx->pc = 0x295c40u;
    ctx->f[14] = FPU_ADD_S(ctx->f[18], ctx->f[16]);
    // 0x295c44: 0xe46f0004  swc1        $f15, 0x4($v1)
    ctx->pc = 0x295c44u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x295c48: 0xe44e0008  swc1        $f14, 0x8($v0)
    ctx->pc = 0x295c48u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x295c4c: 0x46085b82  mul.s       $f14, $f11, $f8
    ctx->pc = 0x295c4cu;
    ctx->f[14] = FPU_MUL_S(ctx->f[11], ctx->f[8]);
    // 0x295c50: 0x46035ac2  mul.s       $f11, $f11, $f3
    ctx->pc = 0x295c50u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[3]);
    // 0x295c54: 0x4611081a  mula.s      $f1, $f17
    ctx->pc = 0x295c54u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[17]);
    // 0x295c58: 0x46096bdc  madd.s      $f15, $f13, $f9
    ctx->pc = 0x295c58u;
    ctx->f[15] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[9]));
    // 0x295c5c: 0x460340c2  mul.s       $f3, $f8, $f3
    ctx->pc = 0x295c5cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x295c60: 0x460f7018  adda.s      $f14, $f15
    ctx->pc = 0x295c60u;
    ctx->f[31] = FPU_ADD_S(ctx->f[14], ctx->f[15]);
    // 0x295c64: 0x4607521c  madd.s      $f8, $f10, $f7
    ctx->pc = 0x295c64u;
    ctx->f[8] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[7]));
    // 0x295c68: 0x4604081a  mula.s      $f1, $f4
    ctx->pc = 0x295c68u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x295c6c: 0x46083042  mul.s       $f1, $f6, $f8
    ctx->pc = 0x295c6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
    // 0x295c70: 0x46000a07  neg.s       $f8, $f1
    ctx->pc = 0x295c70u;
    ctx->f[8] = FPU_NEG_S(ctx->f[1]);
    // 0x295c74: 0x4605685c  madd.s      $f1, $f13, $f5
    ctx->pc = 0x295c74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[5]));
    // 0x295c78: 0x46015818  adda.s      $f11, $f1
    ctx->pc = 0x295c78u;
    ctx->f[31] = FPU_ADD_S(ctx->f[11], ctx->f[1]);
    // 0x295c7c: 0x4602505c  madd.s      $f1, $f10, $f2
    ctx->pc = 0x295c7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[2]));
    // 0x295c80: 0x4604001a  mula.s      $f0, $f4
    ctx->pc = 0x295c80u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x295c84: 0x4605481c  madd.s      $f0, $f9, $f5
    ctx->pc = 0x295c84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[5]));
    // 0x295c88: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x295c88u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x295c8c: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x295c8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x295c90: 0x4602381c  madd.s      $f0, $f7, $f2
    ctx->pc = 0x295c90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[2]));
    // 0x295c94: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x295c94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x295c98: 0xe7a801a4  swc1        $f8, 0x1A4($sp)
    ctx->pc = 0x295c98u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
    // 0x295c9c: 0xe4680000  swc1        $f8, 0x0($v1)
    ctx->pc = 0x295c9cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x295ca0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x295ca0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x295ca4: 0xe7a101a8  swc1        $f1, 0x1A8($sp)
    ctx->pc = 0x295ca4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x295ca8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x295ca8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x295cac: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x295cacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x295cb0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x295cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x295cb4: 0xc0a665c  jal         func_299970
    ctx->pc = 0x295CB4u;
    SET_GPR_U32(ctx, 31, 0x295CBCu);
    ctx->pc = 0x295CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295CB4u;
            // 0x295cb8: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x299970u;
    if (runtime->hasFunction(0x299970u)) {
        auto targetFn = runtime->lookupFunction(0x299970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295CBCu; }
        if (ctx->pc != 0x295CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00299970_0x299970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295CBCu; }
        if (ctx->pc != 0x295CBCu) { return; }
    }
    ctx->pc = 0x295CBCu;
label_295cbc:
    // 0x295cbc: 0x100002f8  b           . + 4 + (0x2F8 << 2)
    ctx->pc = 0x295CBCu;
    {
        const bool branch_taken_0x295cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295cbc) {
            ctx->pc = 0x2968A0u;
            goto label_2968a0;
        }
    }
    ctx->pc = 0x295CC4u;
    // 0x295cc4: 0x0  nop
    ctx->pc = 0x295cc4u;
    // NOP
label_295cc8:
    // 0x295cc8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x295cc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x295ccc: 0x4500005a  bc1f        . + 4 + (0x5A << 2)
    ctx->pc = 0x295CCCu;
    {
        const bool branch_taken_0x295ccc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x295ccc) {
            ctx->pc = 0x295E38u;
            goto label_295e38;
        }
    }
    ctx->pc = 0x295CD4u;
    // 0x295cd4: 0xe7a501d0  swc1        $f5, 0x1D0($sp)
    ctx->pc = 0x295cd4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x295cd8: 0x3c023eaa  lui         $v0, 0x3EAA
    ctx->pc = 0x295cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16042 << 16));
    // 0x295cdc: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x295cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295ce0: 0x27a601d4  addiu       $a2, $sp, 0x1D4
    ctx->pc = 0x295ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 468));
    // 0x295ce4: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x295ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x295ce8: 0x27a501d8  addiu       $a1, $sp, 0x1D8
    ctx->pc = 0x295ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
    // 0x295cec: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x295cecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x295cf0: 0x27a401dc  addiu       $a0, $sp, 0x1DC
    ctx->pc = 0x295cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
    // 0x295cf4: 0x27a301b0  addiu       $v1, $sp, 0x1B0
    ctx->pc = 0x295cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x295cf8: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x295cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x295cfc: 0x4600b007  neg.s       $f0, $f22
    ctx->pc = 0x295cfcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[22]);
    // 0x295d00: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x295d00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x295d04: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x295d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295d08: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x295d08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x295d0c: 0xc6a1000c  lwc1        $f1, 0xC($s5)
    ctx->pc = 0x295d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295d10: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x295d10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x295d14: 0xc7a201d0  lwc1        $f2, 0x1D0($sp)
    ctx->pc = 0x295d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x295d18: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x295d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295d1c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x295d1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x295d20: 0xe7a101d0  swc1        $f1, 0x1D0($sp)
    ctx->pc = 0x295d20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x295d24: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x295d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x295d28: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x295d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295d2c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x295d2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x295d30: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x295d30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x295d34: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x295d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x295d38: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x295d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295d3c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x295d3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x295d40: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x295d40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x295d44: 0xc682000c  lwc1        $f2, 0xC($s4)
    ctx->pc = 0x295d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x295d48: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x295d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295d4c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x295d4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x295d50: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x295d50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x295d54: 0xc7a201d0  lwc1        $f2, 0x1D0($sp)
    ctx->pc = 0x295d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x295d58: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x295d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295d5c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x295d5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x295d60: 0xe7a101d0  swc1        $f1, 0x1D0($sp)
    ctx->pc = 0x295d60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x295d64: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x295d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x295d68: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x295d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295d6c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x295d6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x295d70: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x295d70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x295d74: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x295d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x295d78: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x295d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295d7c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x295d7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x295d80: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x295d80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x295d84: 0xc662000c  lwc1        $f2, 0xC($s3)
    ctx->pc = 0x295d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x295d88: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x295d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295d8c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x295d8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x295d90: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x295d90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x295d94: 0xc7a201d0  lwc1        $f2, 0x1D0($sp)
    ctx->pc = 0x295d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x295d98: 0xc7a101d4  lwc1        $f1, 0x1D4($sp)
    ctx->pc = 0x295d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295d9c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x295d9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x295da0: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x295da0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x295da4: 0xe7a201d0  swc1        $f2, 0x1D0($sp)
    ctx->pc = 0x295da4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x295da8: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x295da8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x295dac: 0xc7a101d8  lwc1        $f1, 0x1D8($sp)
    ctx->pc = 0x295dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295db0: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x295db0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x295db4: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x295db4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x295db8: 0xc7a101dc  lwc1        $f1, 0x1DC($sp)
    ctx->pc = 0x295db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295dbc: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x295dbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x295dc0: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x295dc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x295dc4: 0xc7a601d4  lwc1        $f6, 0x1D4($sp)
    ctx->pc = 0x295dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x295dc8: 0xc7a501d8  lwc1        $f5, 0x1D8($sp)
    ctx->pc = 0x295dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x295dcc: 0xc7a301d0  lwc1        $f3, 0x1D0($sp)
    ctx->pc = 0x295dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x295dd0: 0x46063102  mul.s       $f4, $f6, $f6
    ctx->pc = 0x295dd0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x295dd4: 0x46052882  mul.s       $f2, $f5, $f5
    ctx->pc = 0x295dd4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x295dd8: 0x46022040  add.s       $f1, $f4, $f2
    ctx->pc = 0x295dd8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x295ddc: 0x4601b042  mul.s       $f1, $f22, $f1
    ctx->pc = 0x295ddcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
    // 0x295de0: 0xe7a101a0  swc1        $f1, 0x1A0($sp)
    ctx->pc = 0x295de0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x295de4: 0x46031842  mul.s       $f1, $f3, $f3
    ctx->pc = 0x295de4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x295de8: 0x46020880  add.s       $f2, $f1, $f2
    ctx->pc = 0x295de8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x295dec: 0x46012040  add.s       $f1, $f4, $f1
    ctx->pc = 0x295decu;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x295df0: 0x4602b082  mul.s       $f2, $f22, $f2
    ctx->pc = 0x295df0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[2]);
    // 0x295df4: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x295df4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x295df8: 0x4601b042  mul.s       $f1, $f22, $f1
    ctx->pc = 0x295df8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
    // 0x295dfc: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x295dfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x295e00: 0x46033042  mul.s       $f1, $f6, $f3
    ctx->pc = 0x295e00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x295e04: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x295e04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x295e08: 0x46032882  mul.s       $f2, $f5, $f3
    ctx->pc = 0x295e08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x295e0c: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x295e0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x295e10: 0xe7a101a4  swc1        $f1, 0x1A4($sp)
    ctx->pc = 0x295e10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
    // 0x295e14: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x295e14u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x295e18: 0x46053042  mul.s       $f1, $f6, $f5
    ctx->pc = 0x295e18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x295e1c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x295e1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x295e20: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x295e20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x295e24: 0xe7a201a8  swc1        $f2, 0x1A8($sp)
    ctx->pc = 0x295e24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x295e28: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x295e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x295e2c: 0x1000029c  b           . + 4 + (0x29C << 2)
    ctx->pc = 0x295E2Cu;
    {
        const bool branch_taken_0x295e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295E2Cu;
            // 0x295e30: 0xe4400004  swc1        $f0, 0x4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x295e2c) {
            ctx->pc = 0x2968A0u;
            goto label_2968a0;
        }
    }
    ctx->pc = 0x295E34u;
    // 0x295e34: 0x0  nop
    ctx->pc = 0x295e34u;
    // NOP
label_295e38:
    // 0x295e38: 0x46170832  c.eq.s      $f1, $f23
    ctx->pc = 0x295e38u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x295e3c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x295E3Cu;
    {
        const bool branch_taken_0x295e3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x295e3c) {
            ctx->pc = 0x295E68u;
            goto label_295e68;
        }
    }
    ctx->pc = 0x295E44u;
    // 0x295e44: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x295e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x295e48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x295e48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x295e4c: 0x0  nop
    ctx->pc = 0x295e4cu;
    // NOP
    // 0x295e50: 0x46010016  rsqrt.s     $f0, $f0, $f1
    ctx->pc = 0x295e50u;
    ctx->f[0] = 1.0f / sqrtf(ctx->f[0]);
    // 0x295e54: 0x0  nop
    ctx->pc = 0x295e54u;
    // NOP
    // 0x295e58: 0x0  nop
    ctx->pc = 0x295e58u;
    // NOP
    // 0x295e5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x295E5Cu;
    {
        const bool branch_taken_0x295e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295e5c) {
            ctx->pc = 0x295E70u;
            goto label_295e70;
        }
    }
    ctx->pc = 0x295E64u;
    // 0x295e64: 0x0  nop
    ctx->pc = 0x295e64u;
    // NOP
label_295e68:
    // 0x295e68: 0x4600b806  mov.s       $f0, $f23
    ctx->pc = 0x295e68u;
    ctx->f[0] = FPU_MOV_S(ctx->f[23]);
    // 0x295e6c: 0x0  nop
    ctx->pc = 0x295e6cu;
    // NOP
label_295e70:
    // 0x295e70: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x295e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x295e74: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x295e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x295e78: 0xafa40130  sw          $a0, 0x130($sp)
    ctx->pc = 0x295e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 4));
    // 0x295e7c: 0x27b00134  addiu       $s0, $sp, 0x134
    ctx->pc = 0x295e7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x295e80: 0x34430006  ori         $v1, $v0, 0x6
    ctx->pc = 0x295e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x295e84: 0x4600d682  mul.s       $f26, $f26, $f0
    ctx->pc = 0x295e84u;
    ctx->f[26] = FPU_MUL_S(ctx->f[26], ctx->f[0]);
    // 0x295e88: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x295e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x295e8c: 0x27a20138  addiu       $v0, $sp, 0x138
    ctx->pc = 0x295e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x295e90: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x295e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x295e94: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x295e94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x295e98: 0x4600ce42  mul.s       $f25, $f25, $f0
    ctx->pc = 0x295e98u;
    ctx->f[25] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x295e9c: 0x4600c602  mul.s       $f24, $f24, $f0
    ctx->pc = 0x295e9cu;
    ctx->f[24] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x295ea0: 0x4600bdc2  mul.s       $f23, $f23, $f0
    ctx->pc = 0x295ea0u;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x295ea4: 0x24a20070  addiu       $v0, $a1, 0x70
    ctx->pc = 0x295ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
label_295ea8:
    // 0x295ea8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x295ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x295eac: 0x0  nop
    ctx->pc = 0x295eacu;
    // NOP
    // 0x295eb0: 0x0  nop
    ctx->pc = 0x295eb0u;
    // NOP
    // 0x295eb4: 0x0  nop
    ctx->pc = 0x295eb4u;
    // NOP
    // 0x295eb8: 0x0  nop
    ctx->pc = 0x295eb8u;
    // NOP
    // 0x295ebc: 0x1482fffa  bne         $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x295EBCu;
    {
        const bool branch_taken_0x295ebc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x295ebc) {
            ctx->pc = 0x295EA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_295ea8;
        }
    }
    ctx->pc = 0x295EC4u;
    // 0x295ec4: 0x27a20138  addiu       $v0, $sp, 0x138
    ctx->pc = 0x295ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x295ec8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x295ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x295ecc: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x295eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x295ed0: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x295ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x295ed4: 0x28410006  slti        $at, $v0, 0x6
    ctx->pc = 0x295ed4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x295ed8: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x295ED8u;
    {
        const bool branch_taken_0x295ed8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x295ed8) {
            ctx->pc = 0x295F08u;
            goto label_295f08;
        }
    }
    ctx->pc = 0x295EE0u;
    // 0x295ee0: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x295ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x295ee4: 0x28a10007  slti        $at, $a1, 0x7
    ctx->pc = 0x295ee4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x295ee8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x295EE8u;
    {
        const bool branch_taken_0x295ee8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x295ee8) {
            ctx->pc = 0x295EF8u;
            goto label_295ef8;
        }
    }
    ctx->pc = 0x295EF0u;
    // 0x295ef0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x295EF0u;
    {
        const bool branch_taken_0x295ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295EF0u;
            // 0x295ef4: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295ef0) {
            ctx->pc = 0x295F00u;
            goto label_295f00;
        }
    }
    ctx->pc = 0x295EF8u;
label_295ef8:
    // 0x295ef8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x295ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x295efc: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x295efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_295f00:
    // 0x295f00: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x295F00u;
    SET_GPR_U32(ctx, 31, 0x295F08u);
    ctx->pc = 0x295F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295F00u;
            // 0x295f04: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295F08u; }
        if (ctx->pc != 0x295F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295F08u; }
        if (ctx->pc != 0x295F08u) { return; }
    }
    ctx->pc = 0x295F08u;
label_295f08:
    // 0x295f08: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x295f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x295f0c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x295f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x295f10: 0x4600a807  neg.s       $f0, $f21
    ctx->pc = 0x295f10u;
    ctx->f[0] = FPU_NEG_S(ctx->f[21]);
    // 0x295f14: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x295f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x295f18: 0x27b00100  addiu       $s0, $sp, 0x100
    ctx->pc = 0x295f18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x295f1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x295f1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x295f20: 0x27b700c8  addiu       $s7, $sp, 0xC8
    ctx->pc = 0x295f20u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x295f24: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x295f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x295f28: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x295f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x295f2c: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x295f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x295f30: 0x46000a42  mul.s       $f9, $f1, $f0
    ctx->pc = 0x295f30u;
    ctx->f[9] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x295f34: 0x27b600cc  addiu       $s6, $sp, 0xCC
    ctx->pc = 0x295f34u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x295f38: 0x27b100d0  addiu       $s1, $sp, 0xD0
    ctx->pc = 0x295f38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x295f3c: 0x27be0134  addiu       $fp, $sp, 0x134
    ctx->pc = 0x295f3cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x295f40: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x295f40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x295f44: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x295f44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x295f48: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x295f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295f4c: 0x461a09c2  mul.s       $f7, $f1, $f26
    ctx->pc = 0x295f4cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[1], ctx->f[26]);
    // 0x295f50: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x295f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x295f54: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x295f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295f58: 0x46190982  mul.s       $f6, $f1, $f25
    ctx->pc = 0x295f58u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[25]);
    // 0x295f5c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x295f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x295f60: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x295f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295f64: 0x46180942  mul.s       $f5, $f1, $f24
    ctx->pc = 0x295f64u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
    // 0x295f68: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x295f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x295f6c: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x295f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x295f70: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x295f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295f74: 0x46170902  mul.s       $f4, $f1, $f23
    ctx->pc = 0x295f74u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
    // 0x295f78: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x295f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x295f7c: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x295f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295f80: 0x461a48c2  mul.s       $f3, $f9, $f26
    ctx->pc = 0x295f80u;
    ctx->f[3] = FPU_MUL_S(ctx->f[9], ctx->f[26]);
    // 0x295f84: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x295f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x295f88: 0xc6a80008  lwc1        $f8, 0x8($s5)
    ctx->pc = 0x295f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x295f8c: 0x46194882  mul.s       $f2, $f9, $f25
    ctx->pc = 0x295f8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[25]);
    // 0x295f90: 0xe4480018  swc1        $f8, 0x18($v0)
    ctx->pc = 0x295f90u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x295f94: 0xc6a8000c  lwc1        $f8, 0xC($s5)
    ctx->pc = 0x295f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x295f98: 0x46184842  mul.s       $f1, $f9, $f24
    ctx->pc = 0x295f98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[24]);
    // 0x295f9c: 0xe448001c  swc1        $f8, 0x1C($v0)
    ctx->pc = 0x295f9cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x295fa0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x295fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x295fa4: 0x46174802  mul.s       $f0, $f9, $f23
    ctx->pc = 0x295fa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[23]);
    // 0x295fa8: 0xc4480000  lwc1        $f8, 0x0($v0)
    ctx->pc = 0x295fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x295fac: 0x46074200  add.s       $f8, $f8, $f7
    ctx->pc = 0x295facu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[7]);
    // 0x295fb0: 0xe4480000  swc1        $f8, 0x0($v0)
    ctx->pc = 0x295fb0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x295fb4: 0xc4480004  lwc1        $f8, 0x4($v0)
    ctx->pc = 0x295fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x295fb8: 0x46064200  add.s       $f8, $f8, $f6
    ctx->pc = 0x295fb8u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[6]);
    // 0x295fbc: 0xe4480004  swc1        $f8, 0x4($v0)
    ctx->pc = 0x295fbcu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x295fc0: 0xc4480008  lwc1        $f8, 0x8($v0)
    ctx->pc = 0x295fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x295fc4: 0x46054200  add.s       $f8, $f8, $f5
    ctx->pc = 0x295fc4u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[5]);
    // 0x295fc8: 0xe4480008  swc1        $f8, 0x8($v0)
    ctx->pc = 0x295fc8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x295fcc: 0xc448000c  lwc1        $f8, 0xC($v0)
    ctx->pc = 0x295fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x295fd0: 0x46044200  add.s       $f8, $f8, $f4
    ctx->pc = 0x295fd0u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[4]);
    // 0x295fd4: 0xe448000c  swc1        $f8, 0xC($v0)
    ctx->pc = 0x295fd4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x295fd8: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x295fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x295fdc: 0xc4480010  lwc1        $f8, 0x10($v0)
    ctx->pc = 0x295fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x295fe0: 0x46034200  add.s       $f8, $f8, $f3
    ctx->pc = 0x295fe0u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[3]);
    // 0x295fe4: 0xe4480010  swc1        $f8, 0x10($v0)
    ctx->pc = 0x295fe4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x295fe8: 0xc4480014  lwc1        $f8, 0x14($v0)
    ctx->pc = 0x295fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x295fec: 0x46024200  add.s       $f8, $f8, $f2
    ctx->pc = 0x295fecu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[2]);
    // 0x295ff0: 0xe4480014  swc1        $f8, 0x14($v0)
    ctx->pc = 0x295ff0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x295ff4: 0xc4480018  lwc1        $f8, 0x18($v0)
    ctx->pc = 0x295ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x295ff8: 0x46014200  add.s       $f8, $f8, $f1
    ctx->pc = 0x295ff8u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[1]);
    // 0x295ffc: 0xe4480018  swc1        $f8, 0x18($v0)
    ctx->pc = 0x295ffcu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x296000: 0xc448001c  lwc1        $f8, 0x1C($v0)
    ctx->pc = 0x296000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x296004: 0x46004200  add.s       $f8, $f8, $f0
    ctx->pc = 0x296004u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x296008: 0xe448001c  swc1        $f8, 0x1C($v0)
    ctx->pc = 0x296008u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x29600c: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x29600cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x296010: 0xc6880000  lwc1        $f8, 0x0($s4)
    ctx->pc = 0x296010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x296014: 0xe4480020  swc1        $f8, 0x20($v0)
    ctx->pc = 0x296014u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x296018: 0xc6880004  lwc1        $f8, 0x4($s4)
    ctx->pc = 0x296018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x29601c: 0xe4480024  swc1        $f8, 0x24($v0)
    ctx->pc = 0x29601cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x296020: 0xc6880008  lwc1        $f8, 0x8($s4)
    ctx->pc = 0x296020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x296024: 0xe4480028  swc1        $f8, 0x28($v0)
    ctx->pc = 0x296024u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x296028: 0xc688000c  lwc1        $f8, 0xC($s4)
    ctx->pc = 0x296028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x29602c: 0xe448002c  swc1        $f8, 0x2C($v0)
    ctx->pc = 0x29602cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x296030: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x296030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x296034: 0xc6880000  lwc1        $f8, 0x0($s4)
    ctx->pc = 0x296034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x296038: 0xe4480030  swc1        $f8, 0x30($v0)
    ctx->pc = 0x296038u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x29603c: 0xc6880004  lwc1        $f8, 0x4($s4)
    ctx->pc = 0x29603cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x296040: 0xe4480034  swc1        $f8, 0x34($v0)
    ctx->pc = 0x296040u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x296044: 0xc6880008  lwc1        $f8, 0x8($s4)
    ctx->pc = 0x296044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x296048: 0xe4480038  swc1        $f8, 0x38($v0)
    ctx->pc = 0x296048u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x29604c: 0xc688000c  lwc1        $f8, 0xC($s4)
    ctx->pc = 0x29604cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x296050: 0xe448003c  swc1        $f8, 0x3C($v0)
    ctx->pc = 0x296050u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x296054: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x296054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x296058: 0xc4480020  lwc1        $f8, 0x20($v0)
    ctx->pc = 0x296058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x29605c: 0x46074200  add.s       $f8, $f8, $f7
    ctx->pc = 0x29605cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[7]);
    // 0x296060: 0xe4480020  swc1        $f8, 0x20($v0)
    ctx->pc = 0x296060u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x296064: 0xc4480024  lwc1        $f8, 0x24($v0)
    ctx->pc = 0x296064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x296068: 0x46064200  add.s       $f8, $f8, $f6
    ctx->pc = 0x296068u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[6]);
    // 0x29606c: 0xe4480024  swc1        $f8, 0x24($v0)
    ctx->pc = 0x29606cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x296070: 0xc4480028  lwc1        $f8, 0x28($v0)
    ctx->pc = 0x296070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x296074: 0x46054200  add.s       $f8, $f8, $f5
    ctx->pc = 0x296074u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[5]);
    // 0x296078: 0xe4480028  swc1        $f8, 0x28($v0)
    ctx->pc = 0x296078u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x29607c: 0xc448002c  lwc1        $f8, 0x2C($v0)
    ctx->pc = 0x29607cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x296080: 0x46044200  add.s       $f8, $f8, $f4
    ctx->pc = 0x296080u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[4]);
    // 0x296084: 0xe448002c  swc1        $f8, 0x2C($v0)
    ctx->pc = 0x296084u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x296088: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x296088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x29608c: 0xc4480030  lwc1        $f8, 0x30($v0)
    ctx->pc = 0x29608cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x296090: 0x46034200  add.s       $f8, $f8, $f3
    ctx->pc = 0x296090u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[3]);
    // 0x296094: 0xe4480030  swc1        $f8, 0x30($v0)
    ctx->pc = 0x296094u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x296098: 0xc4480034  lwc1        $f8, 0x34($v0)
    ctx->pc = 0x296098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x29609c: 0x46024200  add.s       $f8, $f8, $f2
    ctx->pc = 0x29609cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[2]);
    // 0x2960a0: 0xe4480034  swc1        $f8, 0x34($v0)
    ctx->pc = 0x2960a0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x2960a4: 0xc4480038  lwc1        $f8, 0x38($v0)
    ctx->pc = 0x2960a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2960a8: 0x46014200  add.s       $f8, $f8, $f1
    ctx->pc = 0x2960a8u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[1]);
    // 0x2960ac: 0xe4480038  swc1        $f8, 0x38($v0)
    ctx->pc = 0x2960acu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x2960b0: 0xc448003c  lwc1        $f8, 0x3C($v0)
    ctx->pc = 0x2960b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2960b4: 0x46004200  add.s       $f8, $f8, $f0
    ctx->pc = 0x2960b4u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x2960b8: 0xe448003c  swc1        $f8, 0x3C($v0)
    ctx->pc = 0x2960b8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x2960bc: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2960bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2960c0: 0xc6680000  lwc1        $f8, 0x0($s3)
    ctx->pc = 0x2960c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2960c4: 0xe4480040  swc1        $f8, 0x40($v0)
    ctx->pc = 0x2960c4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2960c8: 0xc6680004  lwc1        $f8, 0x4($s3)
    ctx->pc = 0x2960c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2960cc: 0xe4480044  swc1        $f8, 0x44($v0)
    ctx->pc = 0x2960ccu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2960d0: 0xc6680008  lwc1        $f8, 0x8($s3)
    ctx->pc = 0x2960d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2960d4: 0xe4480048  swc1        $f8, 0x48($v0)
    ctx->pc = 0x2960d4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2960d8: 0xc668000c  lwc1        $f8, 0xC($s3)
    ctx->pc = 0x2960d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2960dc: 0xe448004c  swc1        $f8, 0x4C($v0)
    ctx->pc = 0x2960dcu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    // 0x2960e0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2960e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2960e4: 0xc6680000  lwc1        $f8, 0x0($s3)
    ctx->pc = 0x2960e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2960e8: 0xe4480050  swc1        $f8, 0x50($v0)
    ctx->pc = 0x2960e8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x2960ec: 0xc6680004  lwc1        $f8, 0x4($s3)
    ctx->pc = 0x2960ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2960f0: 0xe4480054  swc1        $f8, 0x54($v0)
    ctx->pc = 0x2960f0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2960f4: 0xc6680008  lwc1        $f8, 0x8($s3)
    ctx->pc = 0x2960f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2960f8: 0xe4480058  swc1        $f8, 0x58($v0)
    ctx->pc = 0x2960f8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x2960fc: 0xc668000c  lwc1        $f8, 0xC($s3)
    ctx->pc = 0x2960fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x296100: 0xe448005c  swc1        $f8, 0x5C($v0)
    ctx->pc = 0x296100u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 92), bits); }
    // 0x296104: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x296104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x296108: 0xc4480040  lwc1        $f8, 0x40($v0)
    ctx->pc = 0x296108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x29610c: 0x460741c0  add.s       $f7, $f8, $f7
    ctx->pc = 0x29610cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[8], ctx->f[7]);
    // 0x296110: 0xe4470040  swc1        $f7, 0x40($v0)
    ctx->pc = 0x296110u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x296114: 0xc4470044  lwc1        $f7, 0x44($v0)
    ctx->pc = 0x296114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x296118: 0x46063980  add.s       $f6, $f7, $f6
    ctx->pc = 0x296118u;
    ctx->f[6] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x29611c: 0xe4460044  swc1        $f6, 0x44($v0)
    ctx->pc = 0x29611cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x296120: 0xc4460048  lwc1        $f6, 0x48($v0)
    ctx->pc = 0x296120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x296124: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x296124u;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x296128: 0xe4450048  swc1        $f5, 0x48($v0)
    ctx->pc = 0x296128u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x29612c: 0xc445004c  lwc1        $f5, 0x4C($v0)
    ctx->pc = 0x29612cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x296130: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x296130u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x296134: 0xe444004c  swc1        $f4, 0x4C($v0)
    ctx->pc = 0x296134u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    // 0x296138: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x296138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x29613c: 0xc4440050  lwc1        $f4, 0x50($v0)
    ctx->pc = 0x29613cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x296140: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x296140u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x296144: 0xe4430050  swc1        $f3, 0x50($v0)
    ctx->pc = 0x296144u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x296148: 0xc4430054  lwc1        $f3, 0x54($v0)
    ctx->pc = 0x296148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29614c: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x29614cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x296150: 0xe4420054  swc1        $f2, 0x54($v0)
    ctx->pc = 0x296150u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x296154: 0xc4420058  lwc1        $f2, 0x58($v0)
    ctx->pc = 0x296154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x296158: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x296158u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x29615c: 0xe4410058  swc1        $f1, 0x58($v0)
    ctx->pc = 0x29615cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x296160: 0xc441005c  lwc1        $f1, 0x5C($v0)
    ctx->pc = 0x296160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x296164: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x296164u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x296168: 0xe440005c  swc1        $f0, 0x5C($v0)
    ctx->pc = 0x296168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 92), bits); }
    // 0x29616c: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x29616cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x296170: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x296170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x296174: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x296174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
    // 0x296178: 0xafa000fc  sw          $zero, 0xFC($sp)
    ctx->pc = 0x296178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
    // 0x29617c: 0xafa000f8  sw          $zero, 0xF8($sp)
    ctx->pc = 0x29617cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 0));
    // 0x296180: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x296180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
    // 0x296184: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x296184u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x296188: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x296188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x29618c: 0x27a200c4  addiu       $v0, $sp, 0xC4
    ctx->pc = 0x29618cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x296190: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x296190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x296194: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x296194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x296198: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x296198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x29619c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x29619cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2961a0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2961a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2961a4: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2961a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2961a8: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2961a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x2961ac: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2961acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2961b0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x2961b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x2961b4: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x2961b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x2961b8: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x2961b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x2961bc: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x2961bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x2961c0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2961c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2961c4: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x2961c4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x2961c8: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x2961c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x2961cc: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x2961ccu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x2961d0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2961d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2961d4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2961d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2961d8: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x2961d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2961dc: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x2961dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2961e0: 0x228bc  dsll32      $a1, $v0, 2
    ctx->pc = 0x2961e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 2));
    // 0x2961e4: 0x528be  dsrl32      $a1, $a1, 2
    ctx->pc = 0x2961e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 2));
    // 0x2961e8: 0xa4082a  slt         $at, $a1, $a0
    ctx->pc = 0x2961e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2961ec: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x2961ECu;
    {
        const bool branch_taken_0x2961ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2961ec) {
            ctx->pc = 0x296258u;
            goto label_296258;
        }
    }
    ctx->pc = 0x2961F4u;
    // 0x2961f4: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x2961f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2961f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2961f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2961fc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2961FCu;
    {
        const bool branch_taken_0x2961fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2961fc) {
            ctx->pc = 0x296220u;
            goto label_296220;
        }
    }
    ctx->pc = 0x296204u;
    // 0x296204: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x296204u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x296208: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x296208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x29620c: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x29620cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x296210: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x296210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x296214: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x296214u;
    SET_GPR_U32(ctx, 31, 0x29621Cu);
    ctx->pc = 0x296218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296214u;
            // 0x296218: 0x24070015  addiu       $a3, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29621Cu; }
        if (ctx->pc != 0x29621Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29621Cu; }
        if (ctx->pc != 0x29621Cu) { return; }
    }
    ctx->pc = 0x29621Cu;
label_29621c:
    // 0x29621c: 0x0  nop
    ctx->pc = 0x29621cu;
    // NOP
label_296220:
    // 0x296220: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x296220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x296224: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x296224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x296228: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x296228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x29622c: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x29622cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x296230: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x296230u;
    SET_GPR_U32(ctx, 31, 0x296238u);
    ctx->pc = 0x296234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296230u;
            // 0x296234: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296238u; }
        if (ctx->pc != 0x296238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296238u; }
        if (ctx->pc != 0x296238u) { return; }
    }
    ctx->pc = 0x296238u;
label_296238:
    // 0x296238: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x296238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x29623c: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x29623cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x296240: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x296240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x296244: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x296244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x296248: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x296248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x29624c: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x29624cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x296250: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x296250u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x296254: 0x0  nop
    ctx->pc = 0x296254u;
    // NOP
label_296258:
    // 0x296258: 0x27a200c4  addiu       $v0, $sp, 0xC4
    ctx->pc = 0x296258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x29625c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x29625cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x296260: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x296260u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x296264: 0x8fa80130  lw          $t0, 0x130($sp)
    ctx->pc = 0x296264u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x296268: 0x8fa900c0  lw          $t1, 0xC0($sp)
    ctx->pc = 0x296268u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x29626c: 0x7082a  slt         $at, $zero, $a3
    ctx->pc = 0x29626cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x296270: 0x10200061  beqz        $at, . + 4 + (0x61 << 2)
    ctx->pc = 0x296270u;
    {
        const bool branch_taken_0x296270 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x296274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296270u;
            // 0x296274: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296270) {
            ctx->pc = 0x2963F8u;
            goto label_2963f8;
        }
    }
    ctx->pc = 0x296278u;
    // 0x296278: 0x28e10009  slti        $at, $a3, 0x9
    ctx->pc = 0x296278u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x29627c: 0x1420004a  bnez        $at, . + 4 + (0x4A << 2)
    ctx->pc = 0x29627Cu;
    {
        const bool branch_taken_0x29627c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x296280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29627Cu;
            // 0x296280: 0x24e5fff8  addiu       $a1, $a3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29627c) {
            ctx->pc = 0x2963A8u;
            goto label_2963a8;
        }
    }
    ctx->pc = 0x296284u;
    // 0x296284: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x296284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296288: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x296288u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29628c: 0x0  nop
    ctx->pc = 0x29628cu;
    // NOP
label_296290:
    // 0x296290: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x296290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x296294: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x296294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296298: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x296298u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x29629c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x29629cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2962a0: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2962a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2962a4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2962a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2962a8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2962a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2962ac: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2962acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2962b0: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2962b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2962b4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2962b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2962b8: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x2962b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2962bc: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x2962bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x2962c0: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x2962c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2962c4: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x2962c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x2962c8: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x2962c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2962cc: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x2962ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x2962d0: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x2962d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2962d4: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x2962d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x2962d8: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x2962d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2962dc: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x2962dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x2962e0: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x2962e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2962e4: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x2962e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x2962e8: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x2962e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2962ec: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x2962ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x2962f0: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x2962f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2962f4: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x2962f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
    // 0x2962f8: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x2962f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2962fc: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x2962fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x296300: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x296300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296304: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x296304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x296308: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x296308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29630c: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x29630cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x296310: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x296310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296314: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x296314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x296318: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x296318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29631c: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x29631cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x296320: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x296320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296324: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x296324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x296328: 0xc4800048  lwc1        $f0, 0x48($a0)
    ctx->pc = 0x296328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29632c: 0xe4600048  swc1        $f0, 0x48($v1)
    ctx->pc = 0x29632cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x296330: 0xc480004c  lwc1        $f0, 0x4C($a0)
    ctx->pc = 0x296330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296334: 0xe460004c  swc1        $f0, 0x4C($v1)
    ctx->pc = 0x296334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 76), bits); }
    // 0x296338: 0xc4800050  lwc1        $f0, 0x50($a0)
    ctx->pc = 0x296338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29633c: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x29633cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x296340: 0xc4800054  lwc1        $f0, 0x54($a0)
    ctx->pc = 0x296340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296344: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x296344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x296348: 0xc4800058  lwc1        $f0, 0x58($a0)
    ctx->pc = 0x296348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29634c: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x29634cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x296350: 0xc480005c  lwc1        $f0, 0x5C($a0)
    ctx->pc = 0x296350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296354: 0xe460005c  swc1        $f0, 0x5C($v1)
    ctx->pc = 0x296354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 92), bits); }
    // 0x296358: 0xc4800060  lwc1        $f0, 0x60($a0)
    ctx->pc = 0x296358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29635c: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x29635cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x296360: 0xc4800064  lwc1        $f0, 0x64($a0)
    ctx->pc = 0x296360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296364: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x296364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x296368: 0xc4800068  lwc1        $f0, 0x68($a0)
    ctx->pc = 0x296368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29636c: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x29636cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x296370: 0xc480006c  lwc1        $f0, 0x6C($a0)
    ctx->pc = 0x296370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296374: 0xe460006c  swc1        $f0, 0x6C($v1)
    ctx->pc = 0x296374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 108), bits); }
    // 0x296378: 0xc4800070  lwc1        $f0, 0x70($a0)
    ctx->pc = 0x296378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29637c: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x29637cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x296380: 0xc4800074  lwc1        $f0, 0x74($a0)
    ctx->pc = 0x296380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296384: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x296384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    // 0x296388: 0xc4800078  lwc1        $f0, 0x78($a0)
    ctx->pc = 0x296388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29638c: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x29638cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x296390: 0xc480007c  lwc1        $f0, 0x7C($a0)
    ctx->pc = 0x296390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296394: 0xe460007c  swc1        $f0, 0x7C($v1)
    ctx->pc = 0x296394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 124), bits); }
    // 0x296398: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x296398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x29639c: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x29639Cu;
    {
        const bool branch_taken_0x29639c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2963A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29639Cu;
            // 0x2963a0: 0x24630080  addiu       $v1, $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29639c) {
            ctx->pc = 0x296290u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_296290;
        }
    }
    ctx->pc = 0x2963A4u;
    // 0x2963a4: 0x0  nop
    ctx->pc = 0x2963a4u;
    // NOP
label_2963a8:
    // 0x2963a8: 0xc7082a  slt         $at, $a2, $a3
    ctx->pc = 0x2963a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2963ac: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x2963ACu;
    {
        const bool branch_taken_0x2963ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2963ac) {
            ctx->pc = 0x2963F8u;
            goto label_2963f8;
        }
    }
    ctx->pc = 0x2963B4u;
    // 0x2963b4: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x2963b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2963b8: 0x1022021  addu        $a0, $t0, $v0
    ctx->pc = 0x2963b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2963bc: 0x1221821  addu        $v1, $t1, $v0
    ctx->pc = 0x2963bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_2963c0:
    // 0x2963c0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2963c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2963c4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2963c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2963c8: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x2963c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2963cc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2963ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2963d0: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2963d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2963d4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2963d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2963d8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2963d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2963dc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2963dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2963e0: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2963e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2963e4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2963e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2963e8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x2963e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2963ec: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2963ECu;
    {
        const bool branch_taken_0x2963ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2963F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2963ECu;
            // 0x2963f0: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2963ec) {
            ctx->pc = 0x2963C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2963c0;
        }
    }
    ctx->pc = 0x2963F4u;
    // 0x2963f4: 0x0  nop
    ctx->pc = 0x2963f4u;
    // NOP
label_2963f8:
    // 0x2963f8: 0x27b500d4  addiu       $s5, $sp, 0xD4
    ctx->pc = 0x2963f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x2963fc: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2963fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x296400: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x296400u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x296404: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x296404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x296408: 0x26930001  addiu       $s3, $s4, 0x1
    ctx->pc = 0x296408u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x29640c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x29640cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x296410: 0x53082a  slt         $at, $v0, $s3
    ctx->pc = 0x296410u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x296414: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x296414u;
    {
        const bool branch_taken_0x296414 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x296414) {
            ctx->pc = 0x296438u;
            goto label_296438;
        }
    }
    ctx->pc = 0x29641Cu;
    // 0x29641c: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x29641cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x296420: 0x265082a  slt         $at, $s3, $a1
    ctx->pc = 0x296420u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x296424: 0x261280a  movz        $a1, $s3, $at
    ctx->pc = 0x296424u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 19));
    // 0x296428: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x296428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29642c: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x29642Cu;
    SET_GPR_U32(ctx, 31, 0x296434u);
    ctx->pc = 0x296430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29642Cu;
            // 0x296430: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296434u; }
        if (ctx->pc != 0x296434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296434u; }
        if (ctx->pc != 0x296434u) { return; }
    }
    ctx->pc = 0x296434u;
label_296434:
    // 0x296434: 0x0  nop
    ctx->pc = 0x296434u;
    // NOP
label_296438:
    // 0x296438: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x296438u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x29643c: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x29643cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x296440: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x296440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x296444: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x296444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x296448: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x296448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29644c: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x29644cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x296450: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x296450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x296454: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x296454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x296458: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x296458u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x29645c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x29645cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x296460: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x296460u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x296464: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x296464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x296468: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x296468u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29646c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x29646cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x296470: 0x26930001  addiu       $s3, $s4, 0x1
    ctx->pc = 0x296470u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x296474: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x296474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x296478: 0x53082a  slt         $at, $v0, $s3
    ctx->pc = 0x296478u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x29647c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x29647Cu;
    {
        const bool branch_taken_0x29647c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29647c) {
            ctx->pc = 0x2964A0u;
            goto label_2964a0;
        }
    }
    ctx->pc = 0x296484u;
    // 0x296484: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x296484u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x296488: 0x265082a  slt         $at, $s3, $a1
    ctx->pc = 0x296488u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x29648c: 0x261280a  movz        $a1, $s3, $at
    ctx->pc = 0x29648cu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 19));
    // 0x296490: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x296490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296494: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x296494u;
    SET_GPR_U32(ctx, 31, 0x29649Cu);
    ctx->pc = 0x296498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296494u;
            // 0x296498: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29649Cu; }
        if (ctx->pc != 0x29649Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29649Cu; }
        if (ctx->pc != 0x29649Cu) { return; }
    }
    ctx->pc = 0x29649Cu;
label_29649c:
    // 0x29649c: 0x0  nop
    ctx->pc = 0x29649cu;
    // NOP
label_2964a0:
    // 0x2964a0: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x2964a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x2964a4: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x2964a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2964a8: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x2964a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x2964ac: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2964acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2964b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2964b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2964b4: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x2964b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2964b8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2964b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2964bc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2964bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2964c0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2964c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2964c4: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x2964c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x2964c8: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x2964c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x2964cc: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x2964ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x2964d0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2964d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2964d4: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x2964d4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2964d8: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x2964d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x2964dc: 0x26930001  addiu       $s3, $s4, 0x1
    ctx->pc = 0x2964dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2964e0: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2964e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x2964e4: 0x53082a  slt         $at, $v0, $s3
    ctx->pc = 0x2964e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2964e8: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x2964E8u;
    {
        const bool branch_taken_0x2964e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2964e8) {
            ctx->pc = 0x296508u;
            goto label_296508;
        }
    }
    ctx->pc = 0x2964F0u;
    // 0x2964f0: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x2964f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2964f4: 0x265082a  slt         $at, $s3, $a1
    ctx->pc = 0x2964f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2964f8: 0x261280a  movz        $a1, $s3, $at
    ctx->pc = 0x2964f8u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 19));
    // 0x2964fc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2964fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296500: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x296500u;
    SET_GPR_U32(ctx, 31, 0x296508u);
    ctx->pc = 0x296504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296500u;
            // 0x296504: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296508u; }
        if (ctx->pc != 0x296508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296508u; }
        if (ctx->pc != 0x296508u) { return; }
    }
    ctx->pc = 0x296508u;
label_296508:
    // 0x296508: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x296508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x29650c: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x29650cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x296510: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x296510u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x296514: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x296514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x296518: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x296518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29651c: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x29651cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x296520: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x296520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x296524: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x296524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x296528: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x296528u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x29652c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x29652cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x296530: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x296530u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x296534: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x296534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x296538: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x296538u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29653c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x29653cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x296540: 0x26930001  addiu       $s3, $s4, 0x1
    ctx->pc = 0x296540u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x296544: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x296544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x296548: 0x53082a  slt         $at, $v0, $s3
    ctx->pc = 0x296548u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x29654c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x29654Cu;
    {
        const bool branch_taken_0x29654c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29654c) {
            ctx->pc = 0x296570u;
            goto label_296570;
        }
    }
    ctx->pc = 0x296554u;
    // 0x296554: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x296554u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x296558: 0x265082a  slt         $at, $s3, $a1
    ctx->pc = 0x296558u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x29655c: 0x261280a  movz        $a1, $s3, $at
    ctx->pc = 0x29655cu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 19));
    // 0x296560: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x296560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296564: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x296564u;
    SET_GPR_U32(ctx, 31, 0x29656Cu);
    ctx->pc = 0x296568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296564u;
            // 0x296568: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29656Cu; }
        if (ctx->pc != 0x29656Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29656Cu; }
        if (ctx->pc != 0x29656Cu) { return; }
    }
    ctx->pc = 0x29656Cu;
label_29656c:
    // 0x29656c: 0x0  nop
    ctx->pc = 0x29656cu;
    // NOP
label_296570:
    // 0x296570: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x296570u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x296574: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x296574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x296578: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x296578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x29657c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x29657cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x296580: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x296580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296584: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x296584u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x296588: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x296588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29658c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x29658cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x296590: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x296590u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x296594: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x296594u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x296598: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x296598u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x29659c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x29659cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2965a0: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x2965a0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2965a4: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x2965a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x2965a8: 0x26930001  addiu       $s3, $s4, 0x1
    ctx->pc = 0x2965a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2965ac: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2965acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x2965b0: 0x53082a  slt         $at, $v0, $s3
    ctx->pc = 0x2965b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2965b4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2965B4u;
    {
        const bool branch_taken_0x2965b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2965b4) {
            ctx->pc = 0x2965D8u;
            goto label_2965d8;
        }
    }
    ctx->pc = 0x2965BCu;
    // 0x2965bc: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x2965bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2965c0: 0x265082a  slt         $at, $s3, $a1
    ctx->pc = 0x2965c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2965c4: 0x261280a  movz        $a1, $s3, $at
    ctx->pc = 0x2965c4u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 19));
    // 0x2965c8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2965c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2965cc: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x2965CCu;
    SET_GPR_U32(ctx, 31, 0x2965D4u);
    ctx->pc = 0x2965D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2965CCu;
            // 0x2965d0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2965D4u; }
        if (ctx->pc != 0x2965D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2965D4u; }
        if (ctx->pc != 0x2965D4u) { return; }
    }
    ctx->pc = 0x2965D4u;
label_2965d4:
    // 0x2965d4: 0x0  nop
    ctx->pc = 0x2965d4u;
    // NOP
label_2965d8:
    // 0x2965d8: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x2965d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x2965dc: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x2965dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2965e0: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x2965e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x2965e4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2965e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2965e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2965e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2965ec: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x2965ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2965f0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2965f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2965f4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2965f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2965f8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2965f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2965fc: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2965fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x296600: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x296600u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x296604: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x296604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x296608: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x296608u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29660c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x29660cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x296610: 0x26930001  addiu       $s3, $s4, 0x1
    ctx->pc = 0x296610u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x296614: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x296614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x296618: 0x53082a  slt         $at, $v0, $s3
    ctx->pc = 0x296618u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x29661c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x29661Cu;
    {
        const bool branch_taken_0x29661c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29661c) {
            ctx->pc = 0x296640u;
            goto label_296640;
        }
    }
    ctx->pc = 0x296624u;
    // 0x296624: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x296624u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x296628: 0x265082a  slt         $at, $s3, $a1
    ctx->pc = 0x296628u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x29662c: 0x261280a  movz        $a1, $s3, $at
    ctx->pc = 0x29662cu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 19));
    // 0x296630: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x296630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296634: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x296634u;
    SET_GPR_U32(ctx, 31, 0x29663Cu);
    ctx->pc = 0x296638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296634u;
            // 0x296638: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29663Cu; }
        if (ctx->pc != 0x29663Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29663Cu; }
        if (ctx->pc != 0x29663Cu) { return; }
    }
    ctx->pc = 0x29663Cu;
label_29663c:
    // 0x29663c: 0x0  nop
    ctx->pc = 0x29663cu;
    // NOP
label_296640:
    // 0x296640: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x296640u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x296644: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x296644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x296648: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x296648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x29664c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x29664cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x296650: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x296650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296654: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x296654u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x296658: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x296658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29665c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x29665cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x296660: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x296660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x296664: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x296664u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x296668: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x296668u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x29666c: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x29666cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x296670: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x296670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x296674: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x296674u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x296678: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x296678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x29667c: 0x26930001  addiu       $s3, $s4, 0x1
    ctx->pc = 0x29667cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x296680: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x296680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x296684: 0x53082a  slt         $at, $v0, $s3
    ctx->pc = 0x296684u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x296688: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x296688u;
    {
        const bool branch_taken_0x296688 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x296688) {
            ctx->pc = 0x2966A8u;
            goto label_2966a8;
        }
    }
    ctx->pc = 0x296690u;
    // 0x296690: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x296690u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x296694: 0x265082a  slt         $at, $s3, $a1
    ctx->pc = 0x296694u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x296698: 0x261280a  movz        $a1, $s3, $at
    ctx->pc = 0x296698u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 19));
    // 0x29669c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29669cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2966a0: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x2966A0u;
    SET_GPR_U32(ctx, 31, 0x2966A8u);
    ctx->pc = 0x2966A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2966A0u;
            // 0x2966a4: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2966A8u; }
        if (ctx->pc != 0x2966A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2966A8u; }
        if (ctx->pc != 0x2966A8u) { return; }
    }
    ctx->pc = 0x2966A8u;
label_2966a8:
    // 0x2966a8: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x2966a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x2966ac: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x2966acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2966b0: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x2966b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x2966b4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2966b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2966b8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2966b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2966bc: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x2966bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2966c0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2966c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2966c4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2966c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2966c8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2966c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2966cc: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x2966ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x2966d0: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x2966d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x2966d4: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x2966d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x2966d8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2966d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2966dc: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x2966dcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2966e0: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x2966e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x2966e4: 0x26930001  addiu       $s3, $s4, 0x1
    ctx->pc = 0x2966e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2966e8: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2966e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x2966ec: 0x53082a  slt         $at, $v0, $s3
    ctx->pc = 0x2966ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2966f0: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x2966F0u;
    {
        const bool branch_taken_0x2966f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2966f0) {
            ctx->pc = 0x296710u;
            goto label_296710;
        }
    }
    ctx->pc = 0x2966F8u;
    // 0x2966f8: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x2966f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2966fc: 0x265082a  slt         $at, $s3, $a1
    ctx->pc = 0x2966fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x296700: 0x261280a  movz        $a1, $s3, $at
    ctx->pc = 0x296700u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 19));
    // 0x296704: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x296704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296708: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x296708u;
    SET_GPR_U32(ctx, 31, 0x296710u);
    ctx->pc = 0x29670Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296708u;
            // 0x29670c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296710u; }
        if (ctx->pc != 0x296710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296710u; }
        if (ctx->pc != 0x296710u) { return; }
    }
    ctx->pc = 0x296710u;
label_296710:
    // 0x296710: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x296710u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x296714: 0x8ec70000  lw          $a3, 0x0($s6)
    ctx->pc = 0x296714u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x296718: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x296718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x29671c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x29671cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x296720: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x296720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x296724: 0x24080  sll         $t0, $v0, 2
    ctx->pc = 0x296724u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x296728: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x296728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29672c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x29672cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x296730: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x296730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x296734: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x296734u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x296738: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x296738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x29673c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x29673cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x296740: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x296740u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x296744: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x296744u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x296748: 0xc0a6acc  jal         func_29AB30
    ctx->pc = 0x296748u;
    SET_GPR_U32(ctx, 31, 0x296750u);
    ctx->pc = 0x29674Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296748u;
            // 0x29674c: 0xace20008  sw          $v0, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29AB30u;
    if (runtime->hasFunction(0x29AB30u)) {
        auto targetFn = runtime->lookupFunction(0x29AB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296750u; }
        if (ctx->pc != 0x296750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029AB30_0x29ab30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296750u; }
        if (ctx->pc != 0x296750u) { return; }
    }
    ctx->pc = 0x296750u;
label_296750:
    // 0x296750: 0x12c00013  beqz        $s6, . + 4 + (0x13 << 2)
    ctx->pc = 0x296750u;
    {
        const bool branch_taken_0x296750 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x296750) {
            ctx->pc = 0x2967A0u;
            goto label_2967a0;
        }
    }
    ctx->pc = 0x296758u;
    // 0x296758: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x296758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x29675c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29675cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x296760: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x296760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x296764: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x296764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x296768: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x296768u;
    {
        const bool branch_taken_0x296768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x296768) {
            ctx->pc = 0x2967A0u;
            goto label_2967a0;
        }
    }
    ctx->pc = 0x296770u;
    // 0x296770: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x296770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x296774: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x296774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x296778: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x296778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x29677c: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x29677cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x296780: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x296780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x296784: 0x218bc  dsll32      $v1, $v0, 2
    ctx->pc = 0x296784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 2));
    // 0x296788: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x296788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x29678c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x29678cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x296790: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x296790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x296794: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x296794u;
    SET_GPR_U32(ctx, 31, 0x29679Cu);
    ctx->pc = 0x296798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296794u;
            // 0x296798: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29679Cu; }
        if (ctx->pc != 0x29679Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29679Cu; }
        if (ctx->pc != 0x29679Cu) { return; }
    }
    ctx->pc = 0x29679Cu;
label_29679c:
    // 0x29679c: 0x0  nop
    ctx->pc = 0x29679cu;
    // NOP
label_2967a0:
    // 0x2967a0: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x2967a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2967a4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2967a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2967a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2967a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2967ac: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2967ACu;
    {
        const bool branch_taken_0x2967ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2967ac) {
            ctx->pc = 0x2967D8u;
            goto label_2967d8;
        }
    }
    ctx->pc = 0x2967B4u;
    // 0x2967b4: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x2967b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2967b8: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2967b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x2967bc: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x2967bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x2967c0: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2967c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2967c4: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x2967c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2967c8: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x2967c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x2967cc: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2967ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x2967d0: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x2967D0u;
    SET_GPR_U32(ctx, 31, 0x2967D8u);
    ctx->pc = 0x2967D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2967D0u;
            // 0x2967d4: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2967D8u; }
        if (ctx->pc != 0x2967D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2967D8u; }
        if (ctx->pc != 0x2967D8u) { return; }
    }
    ctx->pc = 0x2967D8u;
label_2967d8:
    // 0x2967d8: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x2967d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2967dc: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2967dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2967e0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2967e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2967e4: 0xc7a200f4  lwc1        $f2, 0xF4($sp)
    ctx->pc = 0x2967e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2967e8: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x2967e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2967ec: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x2967ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2967f0: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x2967f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2967f4: 0xe7a301d0  swc1        $f3, 0x1D0($sp)
    ctx->pc = 0x2967f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x2967f8: 0xe7a201d4  swc1        $f2, 0x1D4($sp)
    ctx->pc = 0x2967f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
    // 0x2967fc: 0xe7a101d8  swc1        $f1, 0x1D8($sp)
    ctx->pc = 0x2967fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x296800: 0xe7a001dc  swc1        $f0, 0x1DC($sp)
    ctx->pc = 0x296800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 476), bits); }
    // 0x296804: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x296804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296808: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x296808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x29680c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x29680cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296810: 0xe7a001a4  swc1        $f0, 0x1A4($sp)
    ctx->pc = 0x296810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
    // 0x296814: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x296814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296818: 0xe7a001a8  swc1        $f0, 0x1A8($sp)
    ctx->pc = 0x296818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x29681c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x29681cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296820: 0xe7a001ac  swc1        $f0, 0x1AC($sp)
    ctx->pc = 0x296820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 428), bits); }
    // 0x296824: 0x27a20138  addiu       $v0, $sp, 0x138
    ctx->pc = 0x296824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x296828: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x296828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29682c: 0xe7a001b0  swc1        $f0, 0x1B0($sp)
    ctx->pc = 0x29682cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x296830: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x296830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296834: 0xe7a001b4  swc1        $f0, 0x1B4($sp)
    ctx->pc = 0x296834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
    // 0x296838: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x296838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29683c: 0xe7a001b8  swc1        $f0, 0x1B8($sp)
    ctx->pc = 0x29683cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x296840: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x296840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296844: 0xe7a001bc  swc1        $f0, 0x1BC($sp)
    ctx->pc = 0x296844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
    // 0x296848: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x296848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29684c: 0xe7a001c0  swc1        $f0, 0x1C0($sp)
    ctx->pc = 0x29684cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x296850: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x296850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296854: 0xe7a001c4  swc1        $f0, 0x1C4($sp)
    ctx->pc = 0x296854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
    // 0x296858: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x296858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29685c: 0xe7a001c8  swc1        $f0, 0x1C8($sp)
    ctx->pc = 0x29685cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x296860: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x296860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296864: 0xe7a001cc  swc1        $f0, 0x1CC($sp)
    ctx->pc = 0x296864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
    // 0x296868: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x296868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29686c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29686cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x296870: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x296870u;
    {
        const bool branch_taken_0x296870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x296870) {
            ctx->pc = 0x2968A0u;
            goto label_2968a0;
        }
    }
    ctx->pc = 0x296878u;
    // 0x296878: 0x27a20138  addiu       $v0, $sp, 0x138
    ctx->pc = 0x296878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x29687c: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x29687cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x296880: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x296880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x296884: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x296884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x296888: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x296888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x29688c: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x29688cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x296890: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x296890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x296894: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x296894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x296898: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x296898u;
    SET_GPR_U32(ctx, 31, 0x2968A0u);
    ctx->pc = 0x29689Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296898u;
            // 0x29689c: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2968A0u; }
        if (ctx->pc != 0x2968A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2968A0u; }
        if (ctx->pc != 0x2968A0u) { return; }
    }
    ctx->pc = 0x2968A0u;
label_2968a0:
    // 0x2968a0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2968a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2968a4: 0xe6560004  swc1        $f22, 0x4($s2)
    ctx->pc = 0x2968a4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2968a8: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x2968a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2968ac: 0xc7a101a0  lwc1        $f1, 0x1A0($sp)
    ctx->pc = 0x2968acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2968b0: 0x27a301c0  addiu       $v1, $sp, 0x1C0
    ctx->pc = 0x2968b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2968b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2968b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2968b8: 0x0  nop
    ctx->pc = 0x2968b8u;
    // NOP
    // 0x2968bc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2968bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2968c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2968c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2968c4: 0xe6410020  swc1        $f1, 0x20($s2)
    ctx->pc = 0x2968c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x2968c8: 0xc7a101a4  lwc1        $f1, 0x1A4($sp)
    ctx->pc = 0x2968c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2968cc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2968ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2968d0: 0xe6410024  swc1        $f1, 0x24($s2)
    ctx->pc = 0x2968d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x2968d4: 0xc7a101a8  lwc1        $f1, 0x1A8($sp)
    ctx->pc = 0x2968d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2968d8: 0xe6410028  swc1        $f1, 0x28($s2)
    ctx->pc = 0x2968d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x2968dc: 0xc7a101ac  lwc1        $f1, 0x1AC($sp)
    ctx->pc = 0x2968dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2968e0: 0xe641002c  swc1        $f1, 0x2C($s2)
    ctx->pc = 0x2968e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
    // 0x2968e4: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2968e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2968e8: 0xe6410030  swc1        $f1, 0x30($s2)
    ctx->pc = 0x2968e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x2968ec: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2968ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2968f0: 0xe6410034  swc1        $f1, 0x34($s2)
    ctx->pc = 0x2968f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x2968f4: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2968f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2968f8: 0xe6410038  swc1        $f1, 0x38($s2)
    ctx->pc = 0x2968f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x2968fc: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x2968fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x296900: 0xe641003c  swc1        $f1, 0x3C($s2)
    ctx->pc = 0x296900u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
    // 0x296904: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x296904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x296908: 0xe6410040  swc1        $f1, 0x40($s2)
    ctx->pc = 0x296908u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    // 0x29690c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x29690cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x296910: 0xe6410044  swc1        $f1, 0x44($s2)
    ctx->pc = 0x296910u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
    // 0x296914: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x296914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x296918: 0xe6410048  swc1        $f1, 0x48($s2)
    ctx->pc = 0x296918u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
    // 0x29691c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x29691cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x296920: 0xe641004c  swc1        $f1, 0x4C($s2)
    ctx->pc = 0x296920u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 76), bits); }
    // 0x296924: 0xc7a101d0  lwc1        $f1, 0x1D0($sp)
    ctx->pc = 0x296924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x296928: 0xe6410010  swc1        $f1, 0x10($s2)
    ctx->pc = 0x296928u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x29692c: 0xc7a101d4  lwc1        $f1, 0x1D4($sp)
    ctx->pc = 0x29692cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x296930: 0xe6410014  swc1        $f1, 0x14($s2)
    ctx->pc = 0x296930u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x296934: 0xc7a101d8  lwc1        $f1, 0x1D8($sp)
    ctx->pc = 0x296934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x296938: 0xe6410018  swc1        $f1, 0x18($s2)
    ctx->pc = 0x296938u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x29693c: 0xc7a101dc  lwc1        $f1, 0x1DC($sp)
    ctx->pc = 0x29693cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x296940: 0xe641001c  swc1        $f1, 0x1C($s2)
    ctx->pc = 0x296940u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x296944: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x296944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_296948:
    // 0x296948: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x296948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x29694c: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x29694cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x296950: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x296950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x296954: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x296954u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x296958: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x296958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x29695c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x29695cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x296960: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x296960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x296964: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x296964u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x296968: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x296968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x29696c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x29696cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x296970: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x296970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x296974: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x296974u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x296978: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x296978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29697c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x29697cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x296980: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x296980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x296984: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x296984u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296988: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x296988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29698c: 0x3e00008  jr          $ra
    ctx->pc = 0x29698Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29698Cu;
            // 0x296990: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x296994u;
    // 0x296994: 0x0  nop
    ctx->pc = 0x296994u;
    // NOP
    // 0x296998: 0x0  nop
    ctx->pc = 0x296998u;
    // NOP
    // 0x29699c: 0x0  nop
    ctx->pc = 0x29699cu;
    // NOP
}
