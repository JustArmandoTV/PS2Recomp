#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00131F70
// Address: 0x131f70 - 0x1322d0
void sub_00131F70_0x131f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131F70_0x131f70");
#endif

    switch (ctx->pc) {
        case 0x1320b4u: goto label_1320b4;
        case 0x1320d8u: goto label_1320d8;
        case 0x132148u: goto label_132148;
        case 0x13216cu: goto label_13216c;
        case 0x13221cu: goto label_13221c;
        default: break;
    }

    ctx->pc = 0x131f70u;

    // 0x131f70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x131f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x131f74: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x131f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x131f78: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x131f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x131f7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x131f7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131f80: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x131f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x131f84: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x131f84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x131f88: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x131f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x131f8c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x131f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x131f90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x131f90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131f94: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x131f94u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x131f98: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x131f98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131f9c: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x131f9cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x131fa0: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x131fa0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x131fa4: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x131fa4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x131fa8: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x131fa8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x131fac: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x131facu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x131fb0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x131fb0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x131fb4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x131fb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x131fb8: 0xc4c60004  lwc1        $f6, 0x4($a2)
    ctx->pc = 0x131fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x131fbc: 0xc4c50000  lwc1        $f5, 0x0($a2)
    ctx->pc = 0x131fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x131fc0: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x131fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x131fc4: 0x4606301a  mula.s      $f6, $f6
    ctx->pc = 0x131fc4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x131fc8: 0x4605281e  madda.s     $f5, $f5
    ctx->pc = 0x131fc8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[5]));
    // 0x131fcc: 0xc4c3000c  lwc1        $f3, 0xC($a2)
    ctx->pc = 0x131fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x131fd0: 0x4604201e  madda.s     $f4, $f4
    ctx->pc = 0x131fd0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x131fd4: 0x4603189c  madd.s      $f2, $f3, $f3
    ctx->pc = 0x131fd4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x131fd8: 0x46020043  div.s       $f1, $f0, $f2
    ctx->pc = 0x131fd8u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[2];
    // 0x131fdc: 0x0  nop
    ctx->pc = 0x131fdcu;
    // NOP
    // 0x131fe0: 0x0  nop
    ctx->pc = 0x131fe0u;
    // NOP
    // 0x131fe4: 0x46024032  c.eq.s      $f8, $f2
    ctx->pc = 0x131fe4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[8], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131fe8: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x131FE8u;
    {
        const bool branch_taken_0x131fe8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x131fe8) {
            ctx->pc = 0x131FECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x131FE8u;
            // 0x131fec: 0x46001807  neg.s       $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[3]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x132000u;
            goto label_132000;
        }
    }
    ctx->pc = 0x131FF0u;
    // 0x131ff0: 0x46004246  mov.s       $f9, $f8
    ctx->pc = 0x131ff0u;
    ctx->f[9] = FPU_MOV_S(ctx->f[8]);
    // 0x131ff4: 0x46004286  mov.s       $f10, $f8
    ctx->pc = 0x131ff4u;
    ctx->f[10] = FPU_MOV_S(ctx->f[8]);
    // 0x131ff8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x131FF8u;
    {
        const bool branch_taken_0x131ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131FF8u;
            // 0x131ffc: 0x460042c6  mov.s       $f11, $f8 (Delay Slot)
        ctx->f[11] = FPU_MOV_S(ctx->f[8]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x131ff8) {
            ctx->pc = 0x132010u;
            goto label_132010;
        }
    }
    ctx->pc = 0x132000u;
label_132000:
    // 0x132000: 0x46012a02  mul.s       $f8, $f5, $f1
    ctx->pc = 0x132000u;
    ctx->f[8] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x132004: 0x46013242  mul.s       $f9, $f6, $f1
    ctx->pc = 0x132004u;
    ctx->f[9] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x132008: 0x46012282  mul.s       $f10, $f4, $f1
    ctx->pc = 0x132008u;
    ctx->f[10] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x13200c: 0x460102c2  mul.s       $f11, $f0, $f1
    ctx->pc = 0x13200cu;
    ctx->f[11] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_132010:
    // 0x132010: 0xc4a4000c  lwc1        $f4, 0xC($a1)
    ctx->pc = 0x132010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x132014: 0xc4a70000  lwc1        $f7, 0x0($a1)
    ctx->pc = 0x132014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x132018: 0xc4a50008  lwc1        $f5, 0x8($a1)
    ctx->pc = 0x132018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x13201c: 0x4604401a  mula.s      $f8, $f4
    ctx->pc = 0x13201cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
    // 0x132020: 0x4607581e  madda.s     $f11, $f7
    ctx->pc = 0x132020u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[7]));
    // 0x132024: 0xc4a60004  lwc1        $f6, 0x4($a1)
    ctx->pc = 0x132024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x132028: 0x4605481e  madda.s     $f9, $f5
    ctx->pc = 0x132028u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[5]));
    // 0x13202c: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x13202cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132030: 0x4606559d  msub.s      $f22, $f10, $f6
    ctx->pc = 0x132030u;
    ctx->f[22] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[6]));
    // 0x132034: 0x4606581a  mula.s      $f11, $f6
    ctx->pc = 0x132034u;
    ctx->f[31] = FPU_MUL_S(ctx->f[11], ctx->f[6]);
    // 0x132038: 0x4605401f  msuba.s     $f8, $f5
    ctx->pc = 0x132038u;
    ctx->f[31] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[5]));
    // 0x13203c: 0x4604481e  madda.s     $f9, $f4
    ctx->pc = 0x13203cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[4]));
    // 0x132040: 0x4607555c  madd.s      $f21, $f10, $f7
    ctx->pc = 0x132040u;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[7]));
    // 0x132044: 0x4606401a  mula.s      $f8, $f6
    ctx->pc = 0x132044u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x132048: 0x4605581e  madda.s     $f11, $f5
    ctx->pc = 0x132048u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[5]));
    // 0x13204c: 0x4607481f  msuba.s     $f9, $f7
    ctx->pc = 0x13204cu;
    ctx->f[31] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[7]));
    // 0x132050: 0x4604551c  madd.s      $f20, $f10, $f4
    ctx->pc = 0x132050u;
    ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[4]));
    // 0x132054: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x132054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x132058: 0x4600401a  mula.s      $f8, $f0
    ctx->pc = 0x132058u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x13205c: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x13205cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132060: 0x4603581e  madda.s     $f11, $f3
    ctx->pc = 0x132060u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[3]));
    // 0x132064: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x132064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x132068: 0x4601481e  madda.s     $f9, $f1
    ctx->pc = 0x132068u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[1]));
    // 0x13206c: 0x460255dd  msub.s      $f23, $f10, $f2
    ctx->pc = 0x13206cu;
    ctx->f[23] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[2]));
    // 0x132070: 0x4602581a  mula.s      $f11, $f2
    ctx->pc = 0x132070u;
    ctx->f[31] = FPU_MUL_S(ctx->f[11], ctx->f[2]);
    // 0x132074: 0x4601401f  msuba.s     $f8, $f1
    ctx->pc = 0x132074u;
    ctx->f[31] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[1]));
    // 0x132078: 0x4600481e  madda.s     $f9, $f0
    ctx->pc = 0x132078u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[0]));
    // 0x13207c: 0x4603561c  madd.s      $f24, $f10, $f3
    ctx->pc = 0x13207cu;
    ctx->f[24] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[3]));
    // 0x132080: 0x4602401a  mula.s      $f8, $f2
    ctx->pc = 0x132080u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x132084: 0x4601581e  madda.s     $f11, $f1
    ctx->pc = 0x132084u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[1]));
    // 0x132088: 0x4603481f  msuba.s     $f9, $f3
    ctx->pc = 0x132088u;
    ctx->f[31] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[3]));
    // 0x13208c: 0x4600565c  madd.s      $f25, $f10, $f0
    ctx->pc = 0x13208cu;
    ctx->f[25] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[0]));
    // 0x132090: 0x4600581a  mula.s      $f11, $f0
    ctx->pc = 0x132090u;
    ctx->f[31] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x132094: 0x4603401f  msuba.s     $f8, $f3
    ctx->pc = 0x132094u;
    ctx->f[31] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[3]));
    // 0x132098: 0x4602481f  msuba.s     $f9, $f2
    ctx->pc = 0x132098u;
    ctx->f[31] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[2]));
    // 0x13209c: 0x4601569d  msub.s      $f26, $f10, $f1
    ctx->pc = 0x13209cu;
    ctx->f[26] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[1]));
    // 0x1320a0: 0x4604581a  mula.s      $f11, $f4
    ctx->pc = 0x1320a0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[11], ctx->f[4]);
    // 0x1320a4: 0x4607401f  msuba.s     $f8, $f7
    ctx->pc = 0x1320a4u;
    ctx->f[31] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[7]));
    // 0x1320a8: 0x4606481f  msuba.s     $f9, $f6
    ctx->pc = 0x1320a8u;
    ctx->f[31] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[6]));
    // 0x1320ac: 0xc0477fe  jal         func_11DFF8
    ctx->pc = 0x1320ACu;
    SET_GPR_U32(ctx, 31, 0x1320B4u);
    ctx->pc = 0x1320B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1320ACu;
            // 0x1320b0: 0x4605531d  msub.s      $f12, $f10, $f5 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[5]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DFF8u;
    if (runtime->hasFunction(0x11DFF8u)) {
        auto targetFn = runtime->lookupFunction(0x11DFF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1320B4u; }
        if (ctx->pc != 0x1320B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DFF8_0x11dff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1320B4u; }
        if (ctx->pc != 0x1320B4u) { return; }
    }
    ctx->pc = 0x1320B4u;
label_1320b4:
    // 0x1320b4: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x1320b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
    // 0x1320b8: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x1320b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
    // 0x1320bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1320bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1320c0: 0x0  nop
    ctx->pc = 0x1320c0u;
    // NOP
    // 0x1320c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1320c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1320c8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1320c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1320cc: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x1320ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x1320d0: 0xc04ce84  jal         func_133A10
    ctx->pc = 0x1320D0u;
    SET_GPR_U32(ctx, 31, 0x1320D8u);
    ctx->pc = 0x1320D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1320D0u;
            // 0x1320d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A10u;
    if (runtime->hasFunction(0x133A10u)) {
        auto targetFn = runtime->lookupFunction(0x133A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1320D8u; }
        if (ctx->pc != 0x1320D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A10_0x133a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1320D8u; }
        if (ctx->pc != 0x1320D8u) { return; }
    }
    ctx->pc = 0x1320D8u;
label_1320d8:
    // 0x1320d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1320d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1320dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1320dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1320e0: 0x0  nop
    ctx->pc = 0x1320e0u;
    // NOP
    // 0x1320e4: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x1320e4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[3] = ctx->f[1] / ctx->f[0];
    // 0x1320e8: 0x0  nop
    ctx->pc = 0x1320e8u;
    // NOP
    // 0x1320ec: 0x4480d800  mtc1        $zero, $f27
    ctx->pc = 0x1320ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x1320f0: 0x0  nop
    ctx->pc = 0x1320f0u;
    // NOP
    // 0x1320f4: 0x461b0036  c.le.s      $f0, $f27
    ctx->pc = 0x1320f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[27])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1320f8: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
    ctx->pc = 0x1320F8u;
    {
        const bool branch_taken_0x1320f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1320f8) {
            ctx->pc = 0x1320FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1320F8u;
            // 0x1320fc: 0x4600dd86  mov.s       $f22, $f27 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[27]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x132138u;
            goto label_132138;
        }
    }
    ctx->pc = 0x132100u;
    // 0x132100: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x132100u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x132104: 0x3c0238c9  lui         $v0, 0x38C9
    ctx->pc = 0x132104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14537 << 16));
    // 0x132108: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x132108u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13210c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x13210cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x132110: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x132110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x132114: 0x0  nop
    ctx->pc = 0x132114u;
    // NOP
    // 0x132118: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x132118u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13211c: 0x46161002  mul.s       $f0, $f2, $f22
    ctx->pc = 0x13211cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
    // 0x132120: 0x46001d82  mul.s       $f22, $f3, $f0
    ctx->pc = 0x132120u;
    ctx->f[22] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x132124: 0x46151042  mul.s       $f1, $f2, $f21
    ctx->pc = 0x132124u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x132128: 0x46141002  mul.s       $f0, $f2, $f20
    ctx->pc = 0x132128u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x13212c: 0x46011d02  mul.s       $f20, $f3, $f1
    ctx->pc = 0x13212cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x132130: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x132130u;
    {
        const bool branch_taken_0x132130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132130u;
            // 0x132134: 0x46001d42  mul.s       $f21, $f3, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x132130) {
            ctx->pc = 0x132140u;
            goto label_132140;
        }
    }
    ctx->pc = 0x132138u;
label_132138:
    // 0x132138: 0x4600dd06  mov.s       $f20, $f27
    ctx->pc = 0x132138u;
    ctx->f[20] = FPU_MOV_S(ctx->f[27]);
    // 0x13213c: 0x4600dd46  mov.s       $f21, $f27
    ctx->pc = 0x13213cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[27]);
label_132140:
    // 0x132140: 0xc0477fe  jal         func_11DFF8
    ctx->pc = 0x132140u;
    SET_GPR_U32(ctx, 31, 0x132148u);
    ctx->pc = 0x132144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x132140u;
            // 0x132144: 0x4600d306  mov.s       $f12, $f26 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[26]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DFF8u;
    if (runtime->hasFunction(0x11DFF8u)) {
        auto targetFn = runtime->lookupFunction(0x11DFF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132148u; }
        if (ctx->pc != 0x132148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DFF8_0x11dff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132148u; }
        if (ctx->pc != 0x132148u) { return; }
    }
    ctx->pc = 0x132148u;
label_132148:
    // 0x132148: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x132148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
    // 0x13214c: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x13214cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
    // 0x132150: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x132150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x132154: 0x0  nop
    ctx->pc = 0x132154u;
    // NOP
    // 0x132158: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x132158u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13215c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13215cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x132160: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x132160u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x132164: 0xc04ce84  jal         func_133A10
    ctx->pc = 0x132164u;
    SET_GPR_U32(ctx, 31, 0x13216Cu);
    ctx->pc = 0x132168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x132164u;
            // 0x132168: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A10u;
    if (runtime->hasFunction(0x133A10u)) {
        auto targetFn = runtime->lookupFunction(0x133A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13216Cu; }
        if (ctx->pc != 0x13216Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A10_0x133a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13216Cu; }
        if (ctx->pc != 0x13216Cu) { return; }
    }
    ctx->pc = 0x13216Cu;
label_13216c:
    // 0x13216c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13216cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x132170: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x132170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x132174: 0x0  nop
    ctx->pc = 0x132174u;
    // NOP
    // 0x132178: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x132178u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[3] = ctx->f[1] / ctx->f[0];
    // 0x13217c: 0x0  nop
    ctx->pc = 0x13217cu;
    // NOP
    // 0x132180: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x132180u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x132184: 0x0  nop
    ctx->pc = 0x132184u;
    // NOP
    // 0x132188: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x132188u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13218c: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
    ctx->pc = 0x13218Cu;
    {
        const bool branch_taken_0x13218c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13218c) {
            ctx->pc = 0x132190u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13218Cu;
            // 0x132190: 0x46002906  mov.s       $f4, $f5 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1321CCu;
            goto label_1321cc;
        }
    }
    ctx->pc = 0x132194u;
    // 0x132194: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x132194u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x132198: 0x3c0238c9  lui         $v0, 0x38C9
    ctx->pc = 0x132198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14537 << 16));
    // 0x13219c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13219cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1321a0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1321a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1321a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1321a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1321a8: 0x0  nop
    ctx->pc = 0x1321a8u;
    // NOP
    // 0x1321ac: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1321acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1321b0: 0x46171002  mul.s       $f0, $f2, $f23
    ctx->pc = 0x1321b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[23]);
    // 0x1321b4: 0x46001902  mul.s       $f4, $f3, $f0
    ctx->pc = 0x1321b4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1321b8: 0x46181042  mul.s       $f1, $f2, $f24
    ctx->pc = 0x1321b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[24]);
    // 0x1321bc: 0x46191002  mul.s       $f0, $f2, $f25
    ctx->pc = 0x1321bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[25]);
    // 0x1321c0: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x1321c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1321c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1321C4u;
    {
        const bool branch_taken_0x1321c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1321C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1321C4u;
            // 0x1321c8: 0x46001802  mul.s       $f0, $f3, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1321c4) {
            ctx->pc = 0x1321D4u;
            goto label_1321d4;
        }
    }
    ctx->pc = 0x1321CCu;
label_1321cc:
    // 0x1321cc: 0x46002846  mov.s       $f1, $f5
    ctx->pc = 0x1321ccu;
    ctx->f[1] = FPU_MOV_S(ctx->f[5]);
    // 0x1321d0: 0x46002806  mov.s       $f0, $f5
    ctx->pc = 0x1321d0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[5]);
label_1321d4:
    // 0x1321d4: 0x4601a080  add.s       $f2, $f20, $f1
    ctx->pc = 0x1321d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x1321d8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1321d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1321dc: 0x3c02be80  lui         $v0, 0xBE80
    ctx->pc = 0x1321dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48768 << 16));
    // 0x1321e0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1321e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1321e4: 0x4600a840  add.s       $f1, $f21, $f0
    ctx->pc = 0x1321e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x1321e8: 0x4604b0c0  add.s       $f3, $f22, $f4
    ctx->pc = 0x1321e8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[22], ctx->f[4]);
    // 0x1321ec: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1321ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1321f0: 0x0  nop
    ctx->pc = 0x1321f0u;
    // NOP
    // 0x1321f4: 0x4605d800  add.s       $f0, $f27, $f5
    ctx->pc = 0x1321f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[27], ctx->f[5]);
    // 0x1321f8: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x1321f8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x1321fc: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x1321fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x132200: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x132200u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x132204: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x132204u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x132208: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x132208u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x13220c: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x13220cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x132210: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x132210u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x132214: 0xc04c79c  jal         func_131E70
    ctx->pc = 0x132214u;
    SET_GPR_U32(ctx, 31, 0x13221Cu);
    ctx->pc = 0x132218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x132214u;
            // 0x132218: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x131E70u;
    if (runtime->hasFunction(0x131E70u)) {
        auto targetFn = runtime->lookupFunction(0x131E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13221Cu; }
        if (ctx->pc != 0x13221Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131E70_0x131e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13221Cu; }
        if (ctx->pc != 0x13221Cu) { return; }
    }
    ctx->pc = 0x13221Cu;
label_13221c:
    // 0x13221c: 0xc6090000  lwc1        $f9, 0x0($s0)
    ctx->pc = 0x13221cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x132220: 0xc7a2006c  lwc1        $f2, 0x6C($sp)
    ctx->pc = 0x132220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x132224: 0xc7a50060  lwc1        $f5, 0x60($sp)
    ctx->pc = 0x132224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x132228: 0xc606000c  lwc1        $f6, 0xC($s0)
    ctx->pc = 0x132228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x13222c: 0x4602481a  mula.s      $f9, $f2
    ctx->pc = 0x13222cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x132230: 0xc6080004  lwc1        $f8, 0x4($s0)
    ctx->pc = 0x132230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x132234: 0xc7a30068  lwc1        $f3, 0x68($sp)
    ctx->pc = 0x132234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x132238: 0x4605301e  madda.s     $f6, $f5
    ctx->pc = 0x132238u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[5]));
    // 0x13223c: 0xc7a40064  lwc1        $f4, 0x64($sp)
    ctx->pc = 0x13223cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x132240: 0xc6070008  lwc1        $f7, 0x8($s0)
    ctx->pc = 0x132240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x132244: 0x4603401e  madda.s     $f8, $f3
    ctx->pc = 0x132244u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[3]));
    // 0x132248: 0x4604381d  msub.s      $f0, $f7, $f4
    ctx->pc = 0x132248u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[4]));
    // 0x13224c: 0x4604301a  mula.s      $f6, $f4
    ctx->pc = 0x13224cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x132250: 0x4603481f  msuba.s     $f9, $f3
    ctx->pc = 0x132250u;
    ctx->f[31] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[3]));
    // 0x132254: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x132254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x132258: 0x4602401e  madda.s     $f8, $f2
    ctx->pc = 0x132258u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[2]));
    // 0x13225c: 0x4605381c  madd.s      $f0, $f7, $f5
    ctx->pc = 0x13225cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[5]));
    // 0x132260: 0x4604481a  mula.s      $f9, $f4
    ctx->pc = 0x132260u;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[4]);
    // 0x132264: 0x4603301e  madda.s     $f6, $f3
    ctx->pc = 0x132264u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[3]));
    // 0x132268: 0x4605401f  msuba.s     $f8, $f5
    ctx->pc = 0x132268u;
    ctx->f[31] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[5]));
    // 0x13226c: 0x4602385c  madd.s      $f1, $f7, $f2
    ctx->pc = 0x13226cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[2]));
    // 0x132270: 0x4602301a  mula.s      $f6, $f2
    ctx->pc = 0x132270u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x132274: 0x4605481f  msuba.s     $f9, $f5
    ctx->pc = 0x132274u;
    ctx->f[31] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[5]));
    // 0x132278: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x132278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x13227c: 0x4604401f  msuba.s     $f8, $f4
    ctx->pc = 0x13227cu;
    ctx->f[31] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[4]));
    // 0x132280: 0x4603381d  msub.s      $f0, $f7, $f3
    ctx->pc = 0x132280u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[3]));
    // 0x132284: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x132284u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x132288: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x132288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x13228c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x13228cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x132290: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x132290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x132294: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x132294u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x132298: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x132298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x13229c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x13229cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1322a0: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x1322a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1322a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1322a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1322a8: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x1322a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1322ac: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1322acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1322b0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1322b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1322b4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1322b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1322b8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1322b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1322bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1322BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1322C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1322BCu;
            // 0x1322c0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1322C4u;
    // 0x1322c4: 0x0  nop
    ctx->pc = 0x1322c4u;
    // NOP
    // 0x1322c8: 0x0  nop
    ctx->pc = 0x1322c8u;
    // NOP
    // 0x1322cc: 0x0  nop
    ctx->pc = 0x1322ccu;
    // NOP
}
