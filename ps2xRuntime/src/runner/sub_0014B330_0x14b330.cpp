#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014B330
// Address: 0x14b330 - 0x14b520
void sub_0014B330_0x14b330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B330_0x14b330");
#endif

    switch (ctx->pc) {
        case 0x14b350u: goto label_14b350;
        case 0x14b490u: goto label_14b490;
        case 0x14b498u: goto label_14b498;
        case 0x14b4a8u: goto label_14b4a8;
        case 0x14b4b8u: goto label_14b4b8;
        case 0x14b4c0u: goto label_14b4c0;
        case 0x14b4d0u: goto label_14b4d0;
        case 0x14b4e0u: goto label_14b4e0;
        case 0x14b4e8u: goto label_14b4e8;
        case 0x14b4f8u: goto label_14b4f8;
        case 0x14b508u: goto label_14b508;
        case 0x14b510u: goto label_14b510;
        default: break;
    }

    ctx->pc = 0x14b330u;

    // 0x14b330: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x14b330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x14b334: 0x3c07005d  lui         $a3, 0x5D
    ctx->pc = 0x14b334u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)93 << 16));
    // 0x14b338: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14b338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14b33c: 0x24e74d80  addiu       $a3, $a3, 0x4D80
    ctx->pc = 0x14b33cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19840));
    // 0x14b340: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14b340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14b344: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x14b344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14b348: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14b348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b34c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x14b34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_14b350:
    // 0x14b350: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x14b350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14b354: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x14b354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x14b358: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x14b358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x14b35c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x14b35cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x14b360: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x14b360u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x14b364: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x14b364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x14b368: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x14B368u;
    {
        const bool branch_taken_0x14b368 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x14B36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B368u;
            // 0x14b36c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b368) {
            ctx->pc = 0x14B350u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14b350;
        }
    }
    ctx->pc = 0x14B370u;
    // 0x14b370: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x14b370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b374: 0xc7a4002c  lwc1        $f4, 0x2C($sp)
    ctx->pc = 0x14b374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14b378: 0xc7a3003c  lwc1        $f3, 0x3C($sp)
    ctx->pc = 0x14b378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14b37c: 0x460c0182  mul.s       $f6, $f0, $f12
    ctx->pc = 0x14b37cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x14b380: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x14b380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14b384: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x14b384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b388: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x14b388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b38c: 0x460c2142  mul.s       $f5, $f4, $f12
    ctx->pc = 0x14b38cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[12]);
    // 0x14b390: 0x460c1c82  mul.s       $f18, $f3, $f12
    ctx->pc = 0x14b390u;
    ctx->f[18] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x14b394: 0x460c1082  mul.s       $f2, $f2, $f12
    ctx->pc = 0x14b394u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x14b398: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x14b398u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x14b39c: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x14b39cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x14b3a0: 0xe7a60020  swc1        $f6, 0x20($sp)
    ctx->pc = 0x14b3a0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x14b3a4: 0xe7a5002c  swc1        $f5, 0x2C($sp)
    ctx->pc = 0x14b3a4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x14b3a8: 0xe7b2003c  swc1        $f18, 0x3C($sp)
    ctx->pc = 0x14b3a8u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x14b3ac: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x14b3acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x14b3b0: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x14b3b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x14b3b4: 0x10800034  beqz        $a0, . + 4 + (0x34 << 2)
    ctx->pc = 0x14B3B4u;
    {
        const bool branch_taken_0x14b3b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B3B4u;
            // 0x14b3b8: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b3b4) {
            ctx->pc = 0x14B488u;
            goto label_14b488;
        }
    }
    ctx->pc = 0x14B3BCu;
    // 0x14b3bc: 0xc4900000  lwc1        $f16, 0x0($a0)
    ctx->pc = 0x14b3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x14b3c0: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x14b3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14b3c4: 0xc7a80044  lwc1        $f8, 0x44($sp)
    ctx->pc = 0x14b3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x14b3c8: 0x46103100  add.s       $f4, $f6, $f16
    ctx->pc = 0x14b3c8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[6], ctx->f[16]);
    // 0x14b3cc: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x14b3ccu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x14b3d0: 0xc4910004  lwc1        $f17, 0x4($a0)
    ctx->pc = 0x14b3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x14b3d4: 0xc7ad0024  lwc1        $f13, 0x24($sp)
    ctx->pc = 0x14b3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14b3d8: 0xc7a60050  lwc1        $f6, 0x50($sp)
    ctx->pc = 0x14b3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x14b3dc: 0xc7a4005c  lwc1        $f4, 0x5C($sp)
    ctx->pc = 0x14b3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14b3e0: 0x46116b40  add.s       $f13, $f13, $f17
    ctx->pc = 0x14b3e0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[17]);
    // 0x14b3e4: 0x46102b80  add.s       $f14, $f5, $f16
    ctx->pc = 0x14b3e4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[5], ctx->f[16]);
    // 0x14b3e8: 0x46101ac0  add.s       $f11, $f3, $f16
    ctx->pc = 0x14b3e8u;
    ctx->f[11] = FPU_ADD_S(ctx->f[3], ctx->f[16]);
    // 0x14b3ec: 0x46104200  add.s       $f8, $f8, $f16
    ctx->pc = 0x14b3ecu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[16]);
    // 0x14b3f0: 0x46103180  add.s       $f6, $f6, $f16
    ctx->pc = 0x14b3f0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[16]);
    // 0x14b3f4: 0x46102100  add.s       $f4, $f4, $f16
    ctx->pc = 0x14b3f4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[16]);
    // 0x14b3f8: 0xe7ad0024  swc1        $f13, 0x24($sp)
    ctx->pc = 0x14b3f8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x14b3fc: 0xc4900008  lwc1        $f16, 0x8($a0)
    ctx->pc = 0x14b3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x14b400: 0x46111080  add.s       $f2, $f2, $f17
    ctx->pc = 0x14b400u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[17]);
    // 0x14b404: 0xc7aa0030  lwc1        $f10, 0x30($sp)
    ctx->pc = 0x14b404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x14b408: 0x46100840  add.s       $f1, $f1, $f16
    ctx->pc = 0x14b408u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[16]);
    // 0x14b40c: 0x46115340  add.s       $f13, $f10, $f17
    ctx->pc = 0x14b40cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[10], ctx->f[17]);
    // 0x14b410: 0x46119280  add.s       $f10, $f18, $f17
    ctx->pc = 0x14b410u;
    ctx->f[10] = FPU_ADD_S(ctx->f[18], ctx->f[17]);
    // 0x14b414: 0x46100000  add.s       $f0, $f0, $f16
    ctx->pc = 0x14b414u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[16]);
    // 0x14b418: 0xc7a90040  lwc1        $f9, 0x40($sp)
    ctx->pc = 0x14b418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x14b41c: 0xe7a4005c  swc1        $f4, 0x5C($sp)
    ctx->pc = 0x14b41cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x14b420: 0xc7a7004c  lwc1        $f7, 0x4C($sp)
    ctx->pc = 0x14b420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x14b424: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x14b424u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x14b428: 0x46104900  add.s       $f4, $f9, $f16
    ctx->pc = 0x14b428u;
    ctx->f[4] = FPU_ADD_S(ctx->f[9], ctx->f[16]);
    // 0x14b42c: 0x46103880  add.s       $f2, $f7, $f16
    ctx->pc = 0x14b42cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[7], ctx->f[16]);
    // 0x14b430: 0xc7af0028  lwc1        $f15, 0x28($sp)
    ctx->pc = 0x14b430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x14b434: 0xe7ab0038  swc1        $f11, 0x38($sp)
    ctx->pc = 0x14b434u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x14b438: 0xc7ac0034  lwc1        $f12, 0x34($sp)
    ctx->pc = 0x14b438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14b43c: 0xe7a60050  swc1        $f6, 0x50($sp)
    ctx->pc = 0x14b43cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x14b440: 0x46107ac0  add.s       $f11, $f15, $f16
    ctx->pc = 0x14b440u;
    ctx->f[11] = FPU_ADD_S(ctx->f[15], ctx->f[16]);
    // 0x14b444: 0x46106180  add.s       $f6, $f12, $f16
    ctx->pc = 0x14b444u;
    ctx->f[6] = FPU_ADD_S(ctx->f[12], ctx->f[16]);
    // 0x14b448: 0xc7a50054  lwc1        $f5, 0x54($sp)
    ctx->pc = 0x14b448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x14b44c: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x14b44cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x14b450: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x14b450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14b454: 0xe7a2004c  swc1        $f2, 0x4C($sp)
    ctx->pc = 0x14b454u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x14b458: 0x46112900  add.s       $f4, $f5, $f17
    ctx->pc = 0x14b458u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[17]);
    // 0x14b45c: 0x46111880  add.s       $f2, $f3, $f17
    ctx->pc = 0x14b45cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[17]);
    // 0x14b460: 0xe7ae002c  swc1        $f14, 0x2C($sp)
    ctx->pc = 0x14b460u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x14b464: 0xe7ad0030  swc1        $f13, 0x30($sp)
    ctx->pc = 0x14b464u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x14b468: 0xe7aa003c  swc1        $f10, 0x3C($sp)
    ctx->pc = 0x14b468u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x14b46c: 0xe7a80044  swc1        $f8, 0x44($sp)
    ctx->pc = 0x14b46cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x14b470: 0xe7ab0028  swc1        $f11, 0x28($sp)
    ctx->pc = 0x14b470u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x14b474: 0xe7a60034  swc1        $f6, 0x34($sp)
    ctx->pc = 0x14b474u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x14b478: 0xe7a40054  swc1        $f4, 0x54($sp)
    ctx->pc = 0x14b478u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x14b47c: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x14b47cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x14b480: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x14b480u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x14b484: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x14b484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_14b488:
    // 0x14b488: 0xc05068c  jal         func_141A30
    ctx->pc = 0x14B488u;
    SET_GPR_U32(ctx, 31, 0x14B490u);
    ctx->pc = 0x14B48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B488u;
            // 0x14b48c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B490u; }
        if (ctx->pc != 0x14B490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B490u; }
        if (ctx->pc != 0x14B490u) { return; }
    }
    ctx->pc = 0x14B490u;
label_14b490:
    // 0x14b490: 0xc0508b0  jal         func_1422C0
    ctx->pc = 0x14B490u;
    SET_GPR_U32(ctx, 31, 0x14B498u);
    ctx->pc = 0x14B494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B490u;
            // 0x14b494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422C0u;
    if (runtime->hasFunction(0x1422C0u)) {
        auto targetFn = runtime->lookupFunction(0x1422C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B498u; }
        if (ctx->pc != 0x14B498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422C0_0x1422c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B498u; }
        if (ctx->pc != 0x14B498u) { return; }
    }
    ctx->pc = 0x14B498u;
label_14b498:
    // 0x14b498: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x14b498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x14b49c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14b49cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b4a0: 0xc050dcc  jal         func_143730
    ctx->pc = 0x14B4A0u;
    SET_GPR_U32(ctx, 31, 0x14B4A8u);
    ctx->pc = 0x14B4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B4A0u;
            // 0x14b4a4: 0x24844d50  addiu       $a0, $a0, 0x4D50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143730u;
    if (runtime->hasFunction(0x143730u)) {
        auto targetFn = runtime->lookupFunction(0x143730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B4A8u; }
        if (ctx->pc != 0x14B4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143730_0x143730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B4A8u; }
        if (ctx->pc != 0x14B4A8u) { return; }
    }
    ctx->pc = 0x14B4A8u;
label_14b4a8:
    // 0x14b4a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14b4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b4ac: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x14b4acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14b4b0: 0xc050e7c  jal         func_1439F0
    ctx->pc = 0x14B4B0u;
    SET_GPR_U32(ctx, 31, 0x14B4B8u);
    ctx->pc = 0x14B4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B4B0u;
            // 0x14b4b4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1439F0u;
    if (runtime->hasFunction(0x1439F0u)) {
        auto targetFn = runtime->lookupFunction(0x1439F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B4B8u; }
        if (ctx->pc != 0x14B4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001439F0_0x1439f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B4B8u; }
        if (ctx->pc != 0x14B4B8u) { return; }
    }
    ctx->pc = 0x14B4B8u;
label_14b4b8:
    // 0x14b4b8: 0xc050f6c  jal         func_143DB0
    ctx->pc = 0x14B4B8u;
    SET_GPR_U32(ctx, 31, 0x14B4C0u);
    ctx->pc = 0x143DB0u;
    if (runtime->hasFunction(0x143DB0u)) {
        auto targetFn = runtime->lookupFunction(0x143DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B4C0u; }
        if (ctx->pc != 0x14B4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143DB0_0x143db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B4C0u; }
        if (ctx->pc != 0x14B4C0u) { return; }
    }
    ctx->pc = 0x14B4C0u;
label_14b4c0:
    // 0x14b4c0: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x14b4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x14b4c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14b4c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b4c8: 0xc050dcc  jal         func_143730
    ctx->pc = 0x14B4C8u;
    SET_GPR_U32(ctx, 31, 0x14B4D0u);
    ctx->pc = 0x14B4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B4C8u;
            // 0x14b4cc: 0x24844d60  addiu       $a0, $a0, 0x4D60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143730u;
    if (runtime->hasFunction(0x143730u)) {
        auto targetFn = runtime->lookupFunction(0x143730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B4D0u; }
        if (ctx->pc != 0x14B4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143730_0x143730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B4D0u; }
        if (ctx->pc != 0x14B4D0u) { return; }
    }
    ctx->pc = 0x14B4D0u;
label_14b4d0:
    // 0x14b4d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14b4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b4d4: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x14b4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x14b4d8: 0xc050e7c  jal         func_1439F0
    ctx->pc = 0x14B4D8u;
    SET_GPR_U32(ctx, 31, 0x14B4E0u);
    ctx->pc = 0x14B4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B4D8u;
            // 0x14b4dc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1439F0u;
    if (runtime->hasFunction(0x1439F0u)) {
        auto targetFn = runtime->lookupFunction(0x1439F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B4E0u; }
        if (ctx->pc != 0x14B4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001439F0_0x1439f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B4E0u; }
        if (ctx->pc != 0x14B4E0u) { return; }
    }
    ctx->pc = 0x14B4E0u;
label_14b4e0:
    // 0x14b4e0: 0xc050f6c  jal         func_143DB0
    ctx->pc = 0x14B4E0u;
    SET_GPR_U32(ctx, 31, 0x14B4E8u);
    ctx->pc = 0x143DB0u;
    if (runtime->hasFunction(0x143DB0u)) {
        auto targetFn = runtime->lookupFunction(0x143DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B4E8u; }
        if (ctx->pc != 0x14B4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143DB0_0x143db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B4E8u; }
        if (ctx->pc != 0x14B4E8u) { return; }
    }
    ctx->pc = 0x14B4E8u;
label_14b4e8:
    // 0x14b4e8: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x14b4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x14b4ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14b4ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b4f0: 0xc050dcc  jal         func_143730
    ctx->pc = 0x14B4F0u;
    SET_GPR_U32(ctx, 31, 0x14B4F8u);
    ctx->pc = 0x14B4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B4F0u;
            // 0x14b4f4: 0x24844d70  addiu       $a0, $a0, 0x4D70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143730u;
    if (runtime->hasFunction(0x143730u)) {
        auto targetFn = runtime->lookupFunction(0x143730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B4F8u; }
        if (ctx->pc != 0x14B4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143730_0x143730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B4F8u; }
        if (ctx->pc != 0x14B4F8u) { return; }
    }
    ctx->pc = 0x14B4F8u;
label_14b4f8:
    // 0x14b4f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14b4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b4fc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x14b4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14b500: 0xc050e7c  jal         func_1439F0
    ctx->pc = 0x14B500u;
    SET_GPR_U32(ctx, 31, 0x14B508u);
    ctx->pc = 0x14B504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B500u;
            // 0x14b504: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1439F0u;
    if (runtime->hasFunction(0x1439F0u)) {
        auto targetFn = runtime->lookupFunction(0x1439F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B508u; }
        if (ctx->pc != 0x14B508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001439F0_0x1439f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B508u; }
        if (ctx->pc != 0x14B508u) { return; }
    }
    ctx->pc = 0x14B508u;
label_14b508:
    // 0x14b508: 0xc050f6c  jal         func_143DB0
    ctx->pc = 0x14B508u;
    SET_GPR_U32(ctx, 31, 0x14B510u);
    ctx->pc = 0x143DB0u;
    if (runtime->hasFunction(0x143DB0u)) {
        auto targetFn = runtime->lookupFunction(0x143DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B510u; }
        if (ctx->pc != 0x14B510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143DB0_0x143db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B510u; }
        if (ctx->pc != 0x14B510u) { return; }
    }
    ctx->pc = 0x14B510u;
label_14b510:
    // 0x14b510: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14b510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b514: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14b514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b518: 0x3e00008  jr          $ra
    ctx->pc = 0x14B518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B518u;
            // 0x14b51c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B520u;
}
