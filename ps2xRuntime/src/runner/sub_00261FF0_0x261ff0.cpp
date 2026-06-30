#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00261FF0
// Address: 0x261ff0 - 0x2622f0
void sub_00261FF0_0x261ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261FF0_0x261ff0");
#endif

    ctx->pc = 0x261ff0u;

    // 0x261ff0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x261ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x261ff4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x261ff4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x261ff8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x261ff8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x261ffc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x261ffcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x262000: 0xc4c60010  lwc1        $f6, 0x10($a2)
    ctx->pc = 0x262000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x262004: 0xc4c50020  lwc1        $f5, 0x20($a2)
    ctx->pc = 0x262004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x262008: 0xc4cb0000  lwc1        $f11, 0x0($a2)
    ctx->pc = 0x262008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x26200c: 0xc4c90014  lwc1        $f9, 0x14($a2)
    ctx->pc = 0x26200cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x262010: 0xc4c40024  lwc1        $f4, 0x24($a2)
    ctx->pc = 0x262010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x262014: 0xc4ca0004  lwc1        $f10, 0x4($a2)
    ctx->pc = 0x262014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x262018: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x262018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26201c: 0x46062c81  sub.s       $f18, $f5, $f6
    ctx->pc = 0x26201cu;
    ctx->f[18] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
    // 0x262020: 0x46055bc1  sub.s       $f15, $f11, $f5
    ctx->pc = 0x262020u;
    ctx->f[15] = FPU_SUB_S(ctx->f[11], ctx->f[5]);
    // 0x262024: 0x460b3301  sub.s       $f12, $f6, $f11
    ctx->pc = 0x262024u;
    ctx->f[12] = FPU_SUB_S(ctx->f[6], ctx->f[11]);
    // 0x262028: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x262028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26202c: 0xc4c70018  lwc1        $f7, 0x18($a2)
    ctx->pc = 0x26202cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x262030: 0xc4c30028  lwc1        $f3, 0x28($a2)
    ctx->pc = 0x262030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x262034: 0xc4c80008  lwc1        $f8, 0x8($a2)
    ctx->pc = 0x262034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x262038: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x262038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26203c: 0x46092441  sub.s       $f17, $f4, $f9
    ctx->pc = 0x26203cu;
    ctx->f[17] = FPU_SUB_S(ctx->f[4], ctx->f[9]);
    // 0x262040: 0x46045381  sub.s       $f14, $f10, $f4
    ctx->pc = 0x262040u;
    ctx->f[14] = FPU_SUB_S(ctx->f[10], ctx->f[4]);
    // 0x262044: 0x46034341  sub.s       $f13, $f8, $f3
    ctx->pc = 0x262044u;
    ctx->f[13] = FPU_SUB_S(ctx->f[8], ctx->f[3]);
    // 0x262048: 0x46071c01  sub.s       $f16, $f3, $f7
    ctx->pc = 0x262048u;
    ctx->f[16] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x26204c: 0x46051141  sub.s       $f5, $f2, $f5
    ctx->pc = 0x26204cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x262050: 0x46061181  sub.s       $f6, $f2, $f6
    ctx->pc = 0x262050u;
    ctx->f[6] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x262054: 0x460b1081  sub.s       $f2, $f2, $f11
    ctx->pc = 0x262054u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[11]);
    // 0x262058: 0x46040901  sub.s       $f4, $f1, $f4
    ctx->pc = 0x262058u;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x26205c: 0x46090d01  sub.s       $f20, $f1, $f9
    ctx->pc = 0x26205cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[9]);
    // 0x262060: 0x460300c1  sub.s       $f3, $f0, $f3
    ctx->pc = 0x262060u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x262064: 0x46070581  sub.s       $f22, $f0, $f7
    ctx->pc = 0x262064u;
    ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x262068: 0x460a4ac1  sub.s       $f11, $f9, $f10
    ctx->pc = 0x262068u;
    ctx->f[11] = FPU_SUB_S(ctx->f[9], ctx->f[10]);
    // 0x26206c: 0x460a0841  sub.s       $f1, $f1, $f10
    ctx->pc = 0x26206cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[10]);
    // 0x262070: 0x460d881a  mula.s      $f17, $f13
    ctx->pc = 0x262070u;
    ctx->f[31] = FPU_MUL_S(ctx->f[17], ctx->f[13]);
    // 0x262074: 0x460e825d  msub.s      $f9, $f16, $f14
    ctx->pc = 0x262074u;
    ctx->f[9] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[16], ctx->f[14]));
    // 0x262078: 0x46083a81  sub.s       $f10, $f7, $f8
    ctx->pc = 0x262078u;
    ctx->f[10] = FPU_SUB_S(ctx->f[7], ctx->f[8]);
    // 0x26207c: 0x46080001  sub.s       $f0, $f0, $f8
    ctx->pc = 0x26207cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x262080: 0x460f801a  mula.s      $f16, $f15
    ctx->pc = 0x262080u;
    ctx->f[31] = FPU_MUL_S(ctx->f[16], ctx->f[15]);
    // 0x262084: 0x460d921d  msub.s      $f8, $f18, $f13
    ctx->pc = 0x262084u;
    ctx->f[8] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[18], ctx->f[13]));
    // 0x262088: 0x460e901a  mula.s      $f18, $f14
    ctx->pc = 0x262088u;
    ctx->f[31] = FPU_MUL_S(ctx->f[18], ctx->f[14]);
    // 0x26208c: 0x460f89dd  msub.s      $f7, $f17, $f15
    ctx->pc = 0x26208cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[17], ctx->f[15]));
    // 0x262090: 0x4610a01a  mula.s      $f20, $f16
    ctx->pc = 0x262090u;
    ctx->f[31] = FPU_MUL_S(ctx->f[20], ctx->f[16]);
    // 0x262094: 0x4611b55d  msub.s      $f21, $f22, $f17
    ctx->pc = 0x262094u;
    ctx->f[21] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[17]));
    // 0x262098: 0x4612b01a  mula.s      $f22, $f18
    ctx->pc = 0x262098u;
    ctx->f[31] = FPU_MUL_S(ctx->f[22], ctx->f[18]);
    // 0x26209c: 0x4610341d  msub.s      $f16, $f6, $f16
    ctx->pc = 0x26209cu;
    ctx->f[16] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[16]));
    // 0x2620a0: 0x4612a502  mul.s       $f20, $f20, $f18
    ctx->pc = 0x2620a0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[18]);
    // 0x2620a4: 0x46113182  mul.s       $f6, $f6, $f17
    ctx->pc = 0x2620a4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[17]);
    // 0x2620a8: 0x4609ac82  mul.s       $f18, $f21, $f9
    ctx->pc = 0x2620a8u;
    ctx->f[18] = FPU_MUL_S(ctx->f[21], ctx->f[9]);
    // 0x2620ac: 0x46088402  mul.s       $f16, $f16, $f8
    ctx->pc = 0x2620acu;
    ctx->f[16] = FPU_MUL_S(ctx->f[16], ctx->f[8]);
    // 0x2620b0: 0x46143181  sub.s       $f6, $f6, $f20
    ctx->pc = 0x2620b0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[20]);
    // 0x2620b4: 0x46109018  adda.s      $f18, $f16
    ctx->pc = 0x2620b4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[18], ctx->f[16]);
    // 0x2620b8: 0x4607319c  madd.s      $f6, $f6, $f7
    ctx->pc = 0x2620b8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[7]));
    // 0x2620bc: 0x460d201a  mula.s      $f4, $f13
    ctx->pc = 0x2620bcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[13]);
    // 0x2620c0: 0x460e1c1d  msub.s      $f16, $f3, $f14
    ctx->pc = 0x2620c0u;
    ctx->f[16] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[14]));
    // 0x2620c4: 0x460f181a  mula.s      $f3, $f15
    ctx->pc = 0x2620c4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[15]);
    // 0x2620c8: 0x460f2102  mul.s       $f4, $f4, $f15
    ctx->pc = 0x2620c8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[15]);
    // 0x2620cc: 0x460e28c2  mul.s       $f3, $f5, $f14
    ctx->pc = 0x2620ccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[14]);
    // 0x2620d0: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x2620d0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x2620d4: 0x460d2b5d  msub.s      $f13, $f5, $f13
    ctx->pc = 0x2620d4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[13]));
    // 0x2620d8: 0x460983c2  mul.s       $f15, $f16, $f9
    ctx->pc = 0x2620d8u;
    ctx->f[15] = FPU_MUL_S(ctx->f[16], ctx->f[9]);
    // 0x2620dc: 0x46086902  mul.s       $f4, $f13, $f8
    ctx->pc = 0x2620dcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[13], ctx->f[8]);
    // 0x2620e0: 0x46047818  adda.s      $f15, $f4
    ctx->pc = 0x2620e0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[15], ctx->f[4]);
    // 0x2620e4: 0x460718dc  madd.s      $f3, $f3, $f7
    ctx->pc = 0x2620e4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[7]));
    // 0x2620e8: 0x44809800  mtc1        $zero, $f19
    ctx->pc = 0x2620e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x2620ec: 0xe4860160  swc1        $f6, 0x160($a0)
    ctx->pc = 0x2620ecu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 352), bits); }
    // 0x2620f0: 0x460a081a  mula.s      $f1, $f10
    ctx->pc = 0x2620f0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x2620f4: 0x46131834  c.lt.s      $f3, $f19
    ctx->pc = 0x2620f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[19])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2620f8: 0xe4830164  swc1        $f3, 0x164($a0)
    ctx->pc = 0x2620f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 356), bits); }
    // 0x2620fc: 0x460b00dd  msub.s      $f3, $f0, $f11
    ctx->pc = 0x2620fcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[11]));
    // 0x262100: 0x460c001a  mula.s      $f0, $f12
    ctx->pc = 0x262100u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x262104: 0x46091902  mul.s       $f4, $f3, $f9
    ctx->pc = 0x262104u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[9]);
    // 0x262108: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x262108u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x26210c: 0x460b1002  mul.s       $f0, $f2, $f11
    ctx->pc = 0x26210cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[11]);
    // 0x262110: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x262110u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x262114: 0x460a10dd  msub.s      $f3, $f2, $f10
    ctx->pc = 0x262114u;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[10]));
    // 0x262118: 0x46081842  mul.s       $f1, $f3, $f8
    ctx->pc = 0x262118u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x26211c: 0x46012018  adda.s      $f4, $f1
    ctx->pc = 0x26211cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x262120: 0x4607005c  madd.s      $f1, $f0, $f7
    ctx->pc = 0x262120u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[7]));
    // 0x262124: 0xe4810168  swc1        $f1, 0x168($a0)
    ctx->pc = 0x262124u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 360), bits); }
    // 0x262128: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x262128u;
    {
        const bool branch_taken_0x262128 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26212Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262128u;
            // 0x26212c: 0xac80016c  sw          $zero, 0x16C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 364), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262128) {
            ctx->pc = 0x262138u;
            goto label_262138;
        }
    }
    ctx->pc = 0x262130u;
    // 0x262130: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x262130u;
    {
        const bool branch_taken_0x262130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262130u;
            // 0x262134: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262130) {
            ctx->pc = 0x26213Cu;
            goto label_26213c;
        }
    }
    ctx->pc = 0x262138u;
label_262138:
    // 0x262138: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x262138u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26213c:
    // 0x26213c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26213cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262140: 0x0  nop
    ctx->pc = 0x262140u;
    // NOP
    // 0x262144: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x262144u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x262148: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x262148u;
    {
        const bool branch_taken_0x262148 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26214Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262148u;
            // 0x26214c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262148) {
            ctx->pc = 0x262154u;
            goto label_262154;
        }
    }
    ctx->pc = 0x262150u;
    // 0x262150: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x262150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_262154:
    // 0x262154: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x262154u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262158: 0x0  nop
    ctx->pc = 0x262158u;
    // NOP
    // 0x26215c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26215cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x262160: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x262160u;
    {
        const bool branch_taken_0x262160 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x262164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262160u;
            // 0x262164: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262160) {
            ctx->pc = 0x26216Cu;
            goto label_26216c;
        }
    }
    ctx->pc = 0x262168u;
    // 0x262168: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x262168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26216c:
    // 0x26216c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26216cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x262170: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x262170u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x262174: 0x27a30038  addiu       $v1, $sp, 0x38
    ctx->pc = 0x262174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x262178: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x262178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x26217c: 0x27a2003c  addiu       $v0, $sp, 0x3C
    ctx->pc = 0x26217cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x262180: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x262180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262184: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x262184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x262188: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x262188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x26218c: 0x10e00050  beqz        $a3, . + 4 + (0x50 << 2)
    ctx->pc = 0x26218Cu;
    {
        const bool branch_taken_0x26218c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x262190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26218Cu;
            // 0x262190: 0x3042000e  andi        $v0, $v0, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26218c) {
            ctx->pc = 0x2622D0u;
            goto label_2622d0;
        }
    }
    ctx->pc = 0x262194u;
    // 0x262194: 0xe4890120  swc1        $f9, 0x120($a0)
    ctx->pc = 0x262194u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 288), bits); }
    // 0x262198: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x262198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x26219c: 0xe4880124  swc1        $f8, 0x124($a0)
    ctx->pc = 0x26219cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    // 0x2621a0: 0xe4870128  swc1        $f7, 0x128($a0)
    ctx->pc = 0x2621a0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 296), bits); }
    // 0x2621a4: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x2621a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2621a8: 0x14430049  bne         $v0, $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x2621A8u;
    {
        const bool branch_taken_0x2621a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2621ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2621A8u;
            // 0x2621ac: 0xac80012c  sw          $zero, 0x12C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 300), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2621a8) {
            ctx->pc = 0x2622D0u;
            goto label_2622d0;
        }
    }
    ctx->pc = 0x2621B0u;
    // 0x2621b0: 0xc4850020  lwc1        $f5, 0x20($a0)
    ctx->pc = 0x2621b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2621b4: 0xc48400a0  lwc1        $f4, 0xA0($a0)
    ctx->pc = 0x2621b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2621b8: 0xc4830024  lwc1        $f3, 0x24($a0)
    ctx->pc = 0x2621b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2621bc: 0xc48200a4  lwc1        $f2, 0xA4($a0)
    ctx->pc = 0x2621bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2621c0: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x2621c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2621c4: 0xc48000a8  lwc1        $f0, 0xA8($a0)
    ctx->pc = 0x2621c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2621c8: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x2621c8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x2621cc: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x2621ccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x2621d0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2621d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2621d4: 0x460448c2  mul.s       $f3, $f9, $f4
    ctx->pc = 0x2621d4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[9], ctx->f[4]);
    // 0x2621d8: 0x46024042  mul.s       $f1, $f8, $f2
    ctx->pc = 0x2621d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x2621dc: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x2621dcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2621e0: 0x4600381c  madd.s      $f0, $f7, $f0
    ctx->pc = 0x2621e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[0]));
    // 0x2621e4: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x2621e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2621e8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2621E8u;
    {
        const bool branch_taken_0x2621e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2621ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2621E8u;
            // 0x2621ec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2621e8) {
            ctx->pc = 0x2621F4u;
            goto label_2621f4;
        }
    }
    ctx->pc = 0x2621F0u;
    // 0x2621f0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2621f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2621f4:
    // 0x2621f4: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x2621F4u;
    {
        const bool branch_taken_0x2621f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2621F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2621F4u;
            // 0x2621f8: 0x46004807  neg.s       $f0, $f9 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[9]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2621f4) {
            ctx->pc = 0x2622D0u;
            goto label_2622d0;
        }
    }
    ctx->pc = 0x2621FCu;
    // 0x2621fc: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x2621fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x262200: 0xe4800120  swc1        $f0, 0x120($a0)
    ctx->pc = 0x262200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 288), bits); }
    // 0x262204: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x262204u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x262208: 0x46004007  neg.s       $f0, $f8
    ctx->pc = 0x262208u;
    ctx->f[0] = FPU_NEG_S(ctx->f[8]);
    // 0x26220c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26220cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262210: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x262210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    // 0x262214: 0x46003807  neg.s       $f0, $f7
    ctx->pc = 0x262214u;
    ctx->f[0] = FPU_NEG_S(ctx->f[7]);
    // 0x262218: 0xe4800128  swc1        $f0, 0x128($a0)
    ctx->pc = 0x262218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 296), bits); }
    // 0x26221c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26221cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262220: 0x0  nop
    ctx->pc = 0x262220u;
    // NOP
    // 0x262224: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x262224u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x262228: 0xe480012c  swc1        $f0, 0x12C($a0)
    ctx->pc = 0x262228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 300), bits); }
    // 0x26222c: 0x78c50000  lq          $a1, 0x0($a2)
    ctx->pc = 0x26222cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x262230: 0x7d050000  sq          $a1, 0x0($t0)
    ctx->pc = 0x262230u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 5));
    // 0x262234: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x262234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262238: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x262238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x26223c: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x26223cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262240: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x262240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x262244: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x262244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262248: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x262248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x26224c: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x26224cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262250: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x262250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x262254: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x262254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262258: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x262258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x26225c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x26225cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262260: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x262260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x262264: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x262264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262268: 0xe4c00018  swc1        $f0, 0x18($a2)
    ctx->pc = 0x262268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
    // 0x26226c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x26226cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262270: 0xe4c0001c  swc1        $f0, 0x1C($a2)
    ctx->pc = 0x262270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
    // 0x262274: 0x78c50040  lq          $a1, 0x40($a2)
    ctx->pc = 0x262274u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x262278: 0x7ce50000  sq          $a1, 0x0($a3)
    ctx->pc = 0x262278u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 5));
    // 0x26227c: 0xc4c00050  lwc1        $f0, 0x50($a2)
    ctx->pc = 0x26227cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262280: 0xe4c00040  swc1        $f0, 0x40($a2)
    ctx->pc = 0x262280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 64), bits); }
    // 0x262284: 0xc4c00054  lwc1        $f0, 0x54($a2)
    ctx->pc = 0x262284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262288: 0xe4c00044  swc1        $f0, 0x44($a2)
    ctx->pc = 0x262288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 68), bits); }
    // 0x26228c: 0xc4c00058  lwc1        $f0, 0x58($a2)
    ctx->pc = 0x26228cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262290: 0xe4c00048  swc1        $f0, 0x48($a2)
    ctx->pc = 0x262290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 72), bits); }
    // 0x262294: 0xc4c0005c  lwc1        $f0, 0x5C($a2)
    ctx->pc = 0x262294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262298: 0xe4c0004c  swc1        $f0, 0x4C($a2)
    ctx->pc = 0x262298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 76), bits); }
    // 0x26229c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x26229cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2622a0: 0xe4c00050  swc1        $f0, 0x50($a2)
    ctx->pc = 0x2622a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 80), bits); }
    // 0x2622a4: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2622a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2622a8: 0xe4c00054  swc1        $f0, 0x54($a2)
    ctx->pc = 0x2622a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 84), bits); }
    // 0x2622ac: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2622acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2622b0: 0xe4c00058  swc1        $f0, 0x58($a2)
    ctx->pc = 0x2622b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 88), bits); }
    // 0x2622b4: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2622b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2622b8: 0xe4c0005c  swc1        $f0, 0x5C($a2)
    ctx->pc = 0x2622b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 92), bits); }
    // 0x2622bc: 0xc4810160  lwc1        $f1, 0x160($a0)
    ctx->pc = 0x2622bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2622c0: 0xc4800164  lwc1        $f0, 0x164($a0)
    ctx->pc = 0x2622c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2622c4: 0xe4800160  swc1        $f0, 0x160($a0)
    ctx->pc = 0x2622c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 352), bits); }
    // 0x2622c8: 0xe4810164  swc1        $f1, 0x164($a0)
    ctx->pc = 0x2622c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 356), bits); }
    // 0x2622cc: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x2622ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_2622d0:
    // 0x2622d0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2622d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2622d4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2622d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2622d8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2622d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2622dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2622DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2622E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2622DCu;
            // 0x2622e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2622E4u;
    // 0x2622e4: 0x0  nop
    ctx->pc = 0x2622e4u;
    // NOP
    // 0x2622e8: 0x0  nop
    ctx->pc = 0x2622e8u;
    // NOP
    // 0x2622ec: 0x0  nop
    ctx->pc = 0x2622ecu;
    // NOP
}
