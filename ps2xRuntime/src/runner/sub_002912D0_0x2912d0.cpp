#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002912D0
// Address: 0x2912d0 - 0x2913f0
void sub_002912D0_0x2912d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002912D0_0x2912d0");
#endif

    ctx->pc = 0x2912d0u;

    // 0x2912d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2912d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2912d4: 0xaca0009c  sw          $zero, 0x9C($a1)
    ctx->pc = 0x2912d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 156), GPR_U32(ctx, 0));
    // 0x2912d8: 0xaca00098  sw          $zero, 0x98($a1)
    ctx->pc = 0x2912d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 152), GPR_U32(ctx, 0));
    // 0x2912dc: 0x44805000  mtc1        $zero, $f10
    ctx->pc = 0x2912dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x2912e0: 0xaca00094  sw          $zero, 0x94($a1)
    ctx->pc = 0x2912e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 148), GPR_U32(ctx, 0));
    // 0x2912e4: 0xaca00090  sw          $zero, 0x90($a1)
    ctx->pc = 0x2912e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 0));
    // 0x2912e8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2912e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2912ec: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2912ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x2912f0: 0xe4a00030  swc1        $f0, 0x30($a1)
    ctx->pc = 0x2912f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
    // 0x2912f4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2912f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2912f8: 0xe4a00034  swc1        $f0, 0x34($a1)
    ctx->pc = 0x2912f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
    // 0x2912fc: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2912fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291300: 0xe4a00038  swc1        $f0, 0x38($a1)
    ctx->pc = 0x291300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
    // 0x291304: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x291304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291308: 0xe4a0003c  swc1        $f0, 0x3C($a1)
    ctx->pc = 0x291308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
    // 0x29130c: 0xc4a80084  lwc1        $f8, 0x84($a1)
    ctx->pc = 0x29130cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x291310: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x291310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291314: 0xc4a90080  lwc1        $f9, 0x80($a1)
    ctx->pc = 0x291314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x291318: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x291318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29131c: 0x4600401a  mula.s      $f8, $f0
    ctx->pc = 0x29131cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x291320: 0xc4a70088  lwc1        $f7, 0x88($a1)
    ctx->pc = 0x291320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x291324: 0x4603481e  madda.s     $f9, $f3
    ctx->pc = 0x291324u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[3]));
    // 0x291328: 0xc4a40020  lwc1        $f4, 0x20($a1)
    ctx->pc = 0x291328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x29132c: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x29132cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291330: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x291330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291334: 0x4604399c  madd.s      $f6, $f7, $f4
    ctx->pc = 0x291334u;
    ctx->f[6] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[4]));
    // 0x291338: 0x4600401a  mula.s      $f8, $f0
    ctx->pc = 0x291338u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x29133c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x29133cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291340: 0x4601481e  madda.s     $f9, $f1
    ctx->pc = 0x291340u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[1]));
    // 0x291344: 0xc4a20024  lwc1        $f2, 0x24($a1)
    ctx->pc = 0x291344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x291348: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x291348u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x29134c: 0x4602395c  madd.s      $f5, $f7, $f2
    ctx->pc = 0x29134cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[2]));
    // 0x291350: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x291350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x291354: 0xc4a40028  lwc1        $f4, 0x28($a1)
    ctx->pc = 0x291354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x291358: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x291358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29135c: 0xc4a1004c  lwc1        $f1, 0x4C($a1)
    ctx->pc = 0x29135cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291360: 0x4602401a  mula.s      $f8, $f2
    ctx->pc = 0x291360u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x291364: 0x4603481e  madda.s     $f9, $f3
    ctx->pc = 0x291364u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[3]));
    // 0x291368: 0xe4a00040  swc1        $f0, 0x40($a1)
    ctx->pc = 0x291368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
    // 0x29136c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x29136cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291370: 0x4604389c  madd.s      $f2, $f7, $f4
    ctx->pc = 0x291370u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[4]));
    // 0x291374: 0xe7a60000  swc1        $f6, 0x0($sp)
    ctx->pc = 0x291374u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x291378: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x291378u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x29137c: 0xe4a00044  swc1        $f0, 0x44($a1)
    ctx->pc = 0x29137cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
    // 0x291380: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x291380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291384: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x291384u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x291388: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x291388u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x29138c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x29138cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x291390: 0xe4a00048  swc1        $f0, 0x48($a1)
    ctx->pc = 0x291390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 72), bits); }
    // 0x291394: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x291394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291398: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x291398u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x29139c: 0xe4a0004c  swc1        $f0, 0x4C($a1)
    ctx->pc = 0x29139cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 76), bits); }
    // 0x2913a0: 0xc4a00040  lwc1        $f0, 0x40($a1)
    ctx->pc = 0x2913a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2913a4: 0xe4a00050  swc1        $f0, 0x50($a1)
    ctx->pc = 0x2913a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 80), bits); }
    // 0x2913a8: 0xc4a00044  lwc1        $f0, 0x44($a1)
    ctx->pc = 0x2913a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2913ac: 0xe4a00054  swc1        $f0, 0x54($a1)
    ctx->pc = 0x2913acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 84), bits); }
    // 0x2913b0: 0xc4a00048  lwc1        $f0, 0x48($a1)
    ctx->pc = 0x2913b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2913b4: 0xe4a00058  swc1        $f0, 0x58($a1)
    ctx->pc = 0x2913b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 88), bits); }
    // 0x2913b8: 0xc4a0004c  lwc1        $f0, 0x4C($a1)
    ctx->pc = 0x2913b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2913bc: 0xe4a0005c  swc1        $f0, 0x5C($a1)
    ctx->pc = 0x2913bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 92), bits); }
    // 0x2913c0: 0xc4a00070  lwc1        $f0, 0x70($a1)
    ctx->pc = 0x2913c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2913c4: 0xe4a00060  swc1        $f0, 0x60($a1)
    ctx->pc = 0x2913c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 96), bits); }
    // 0x2913c8: 0xc4a00074  lwc1        $f0, 0x74($a1)
    ctx->pc = 0x2913c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2913cc: 0xe4a00064  swc1        $f0, 0x64($a1)
    ctx->pc = 0x2913ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 100), bits); }
    // 0x2913d0: 0xc4a00078  lwc1        $f0, 0x78($a1)
    ctx->pc = 0x2913d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2913d4: 0xe4a00068  swc1        $f0, 0x68($a1)
    ctx->pc = 0x2913d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 104), bits); }
    // 0x2913d8: 0xc4a0007c  lwc1        $f0, 0x7C($a1)
    ctx->pc = 0x2913d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2913dc: 0xe4a0006c  swc1        $f0, 0x6C($a1)
    ctx->pc = 0x2913dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 108), bits); }
    // 0x2913e0: 0xe4a1004c  swc1        $f1, 0x4C($a1)
    ctx->pc = 0x2913e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 76), bits); }
    // 0x2913e4: 0xaca0005c  sw          $zero, 0x5C($a1)
    ctx->pc = 0x2913e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 92), GPR_U32(ctx, 0));
    // 0x2913e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2913E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2913ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2913E8u;
            // 0x2913ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2913F0u;
}
