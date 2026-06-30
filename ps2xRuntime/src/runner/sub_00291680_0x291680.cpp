#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00291680
// Address: 0x291680 - 0x2917a0
void sub_00291680_0x291680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291680_0x291680");
#endif

    switch (ctx->pc) {
        case 0x2916b4u: goto label_2916b4;
        default: break;
    }

    ctx->pc = 0x291680u;

    // 0x291680: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x291680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x291684: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x291684u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x291688: 0xc4ad0004  lwc1        $f13, 0x4($a1)
    ctx->pc = 0x291688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x29168c: 0x24c70020  addiu       $a3, $a2, 0x20
    ctx->pc = 0x29168cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x291690: 0xc4ac0008  lwc1        $f12, 0x8($a1)
    ctx->pc = 0x291690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x291694: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x291694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x291698: 0xc4aa0010  lwc1        $f10, 0x10($a1)
    ctx->pc = 0x291698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x29169c: 0xc4ab0014  lwc1        $f11, 0x14($a1)
    ctx->pc = 0x29169cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2916a0: 0xc4a90018  lwc1        $f9, 0x18($a1)
    ctx->pc = 0x2916a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2916a4: 0xc4a70020  lwc1        $f7, 0x20($a1)
    ctx->pc = 0x2916a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2916a8: 0xc4a80024  lwc1        $f8, 0x24($a1)
    ctx->pc = 0x2916a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2916ac: 0xc4a50028  lwc1        $f5, 0x28($a1)
    ctx->pc = 0x2916acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2916b0: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x2916b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_2916b4:
    // 0x2916b4: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x2916b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2916b8: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x2916b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2916bc: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x2916bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2916c0: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x2916c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2916c4: 0x460d101a  mula.s      $f2, $f13
    ctx->pc = 0x2916c4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[13]);
    // 0x2916c8: 0x4604181e  madda.s     $f3, $f4
    ctx->pc = 0x2916c8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x2916cc: 0x460c081c  madd.s      $f0, $f1, $f12
    ctx->pc = 0x2916ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[12]));
    // 0x2916d0: 0x24e7fff0  addiu       $a3, $a3, -0x10
    ctx->pc = 0x2916d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
    // 0x2916d4: 0x460b101a  mula.s      $f2, $f11
    ctx->pc = 0x2916d4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[11]);
    // 0x2916d8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2916d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2916dc: 0x460a181e  madda.s     $f3, $f10
    ctx->pc = 0x2916dcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[10]));
    // 0x2916e0: 0x4609081c  madd.s      $f0, $f1, $f9
    ctx->pc = 0x2916e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[9]));
    // 0x2916e4: 0x4608101a  mula.s      $f2, $f8
    ctx->pc = 0x2916e4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x2916e8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2916e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2916ec: 0x4607181e  madda.s     $f3, $f7
    ctx->pc = 0x2916ecu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[7]));
    // 0x2916f0: 0x4605081c  madd.s      $f0, $f1, $f5
    ctx->pc = 0x2916f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[5]));
    // 0x2916f4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2916f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2916f8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x2916f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x2916fc: 0x501ffed  bgez        $t0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2916FCu;
    {
        const bool branch_taken_0x2916fc = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x291700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2916FCu;
            // 0x291700: 0x2463fff0  addiu       $v1, $v1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2916fc) {
            ctx->pc = 0x2916B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2916b4;
        }
    }
    ctx->pc = 0x291704u;
    // 0x291704: 0xc4c20030  lwc1        $f2, 0x30($a2)
    ctx->pc = 0x291704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x291708: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x291708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29170c: 0xc4c40034  lwc1        $f4, 0x34($a2)
    ctx->pc = 0x29170cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x291710: 0xc4a30034  lwc1        $f3, 0x34($a1)
    ctx->pc = 0x291710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x291714: 0x46001141  sub.s       $f5, $f2, $f0
    ctx->pc = 0x291714u;
    ctx->f[5] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x291718: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x291718u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x29171c: 0xc4c10038  lwc1        $f1, 0x38($a2)
    ctx->pc = 0x29171cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291720: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x291720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291724: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x291724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x291728: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x291728u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29172c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x29172cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291730: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x291730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291734: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x291734u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x291738: 0x46003018  adda.s      $f6, $f0
    ctx->pc = 0x291738u;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x29173c: 0x4601281c  madd.s      $f0, $f5, $f1
    ctx->pc = 0x29173cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x291740: 0x46003018  adda.s      $f6, $f0
    ctx->pc = 0x291740u;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x291744: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x291744u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x291748: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x291748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x29174c: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x29174cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291750: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x291750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291754: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x291754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x291758: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x291758u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x29175c: 0x46003018  adda.s      $f6, $f0
    ctx->pc = 0x29175cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x291760: 0x4601281c  madd.s      $f0, $f5, $f1
    ctx->pc = 0x291760u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x291764: 0x46003018  adda.s      $f6, $f0
    ctx->pc = 0x291764u;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x291768: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x291768u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x29176c: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x29176cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x291770: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x291770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291774: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x291774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291778: 0xc4a20028  lwc1        $f2, 0x28($a1)
    ctx->pc = 0x291778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29177c: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x29177cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x291780: 0x46003018  adda.s      $f6, $f0
    ctx->pc = 0x291780u;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x291784: 0x4601281c  madd.s      $f0, $f5, $f1
    ctx->pc = 0x291784u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x291788: 0x46003018  adda.s      $f6, $f0
    ctx->pc = 0x291788u;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x29178c: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x29178cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x291790: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x291790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x291794: 0x3e00008  jr          $ra
    ctx->pc = 0x291794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291794u;
            // 0x291798: 0xe486003c  swc1        $f6, 0x3C($a0) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29179Cu;
    // 0x29179c: 0x0  nop
    ctx->pc = 0x29179cu;
    // NOP
}
