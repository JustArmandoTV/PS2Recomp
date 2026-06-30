#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022E320
// Address: 0x22e320 - 0x22e5a0
void sub_0022E320_0x22e320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E320_0x22e320");
#endif

    switch (ctx->pc) {
        case 0x22e320u: goto label_22e320;
        case 0x22e324u: goto label_22e324;
        case 0x22e328u: goto label_22e328;
        case 0x22e32cu: goto label_22e32c;
        case 0x22e330u: goto label_22e330;
        case 0x22e334u: goto label_22e334;
        case 0x22e338u: goto label_22e338;
        case 0x22e33cu: goto label_22e33c;
        case 0x22e340u: goto label_22e340;
        case 0x22e344u: goto label_22e344;
        case 0x22e348u: goto label_22e348;
        case 0x22e34cu: goto label_22e34c;
        case 0x22e350u: goto label_22e350;
        case 0x22e354u: goto label_22e354;
        case 0x22e358u: goto label_22e358;
        case 0x22e35cu: goto label_22e35c;
        case 0x22e360u: goto label_22e360;
        case 0x22e364u: goto label_22e364;
        case 0x22e368u: goto label_22e368;
        case 0x22e36cu: goto label_22e36c;
        case 0x22e370u: goto label_22e370;
        case 0x22e374u: goto label_22e374;
        case 0x22e378u: goto label_22e378;
        case 0x22e37cu: goto label_22e37c;
        case 0x22e380u: goto label_22e380;
        case 0x22e384u: goto label_22e384;
        case 0x22e388u: goto label_22e388;
        case 0x22e38cu: goto label_22e38c;
        case 0x22e390u: goto label_22e390;
        case 0x22e394u: goto label_22e394;
        case 0x22e398u: goto label_22e398;
        case 0x22e39cu: goto label_22e39c;
        case 0x22e3a0u: goto label_22e3a0;
        case 0x22e3a4u: goto label_22e3a4;
        case 0x22e3a8u: goto label_22e3a8;
        case 0x22e3acu: goto label_22e3ac;
        case 0x22e3b0u: goto label_22e3b0;
        case 0x22e3b4u: goto label_22e3b4;
        case 0x22e3b8u: goto label_22e3b8;
        case 0x22e3bcu: goto label_22e3bc;
        case 0x22e3c0u: goto label_22e3c0;
        case 0x22e3c4u: goto label_22e3c4;
        case 0x22e3c8u: goto label_22e3c8;
        case 0x22e3ccu: goto label_22e3cc;
        case 0x22e3d0u: goto label_22e3d0;
        case 0x22e3d4u: goto label_22e3d4;
        case 0x22e3d8u: goto label_22e3d8;
        case 0x22e3dcu: goto label_22e3dc;
        case 0x22e3e0u: goto label_22e3e0;
        case 0x22e3e4u: goto label_22e3e4;
        case 0x22e3e8u: goto label_22e3e8;
        case 0x22e3ecu: goto label_22e3ec;
        case 0x22e3f0u: goto label_22e3f0;
        case 0x22e3f4u: goto label_22e3f4;
        case 0x22e3f8u: goto label_22e3f8;
        case 0x22e3fcu: goto label_22e3fc;
        case 0x22e400u: goto label_22e400;
        case 0x22e404u: goto label_22e404;
        case 0x22e408u: goto label_22e408;
        case 0x22e40cu: goto label_22e40c;
        case 0x22e410u: goto label_22e410;
        case 0x22e414u: goto label_22e414;
        case 0x22e418u: goto label_22e418;
        case 0x22e41cu: goto label_22e41c;
        case 0x22e420u: goto label_22e420;
        case 0x22e424u: goto label_22e424;
        case 0x22e428u: goto label_22e428;
        case 0x22e42cu: goto label_22e42c;
        case 0x22e430u: goto label_22e430;
        case 0x22e434u: goto label_22e434;
        case 0x22e438u: goto label_22e438;
        case 0x22e43cu: goto label_22e43c;
        case 0x22e440u: goto label_22e440;
        case 0x22e444u: goto label_22e444;
        case 0x22e448u: goto label_22e448;
        case 0x22e44cu: goto label_22e44c;
        case 0x22e450u: goto label_22e450;
        case 0x22e454u: goto label_22e454;
        case 0x22e458u: goto label_22e458;
        case 0x22e45cu: goto label_22e45c;
        case 0x22e460u: goto label_22e460;
        case 0x22e464u: goto label_22e464;
        case 0x22e468u: goto label_22e468;
        case 0x22e46cu: goto label_22e46c;
        case 0x22e470u: goto label_22e470;
        case 0x22e474u: goto label_22e474;
        case 0x22e478u: goto label_22e478;
        case 0x22e47cu: goto label_22e47c;
        case 0x22e480u: goto label_22e480;
        case 0x22e484u: goto label_22e484;
        case 0x22e488u: goto label_22e488;
        case 0x22e48cu: goto label_22e48c;
        case 0x22e490u: goto label_22e490;
        case 0x22e494u: goto label_22e494;
        case 0x22e498u: goto label_22e498;
        case 0x22e49cu: goto label_22e49c;
        case 0x22e4a0u: goto label_22e4a0;
        case 0x22e4a4u: goto label_22e4a4;
        case 0x22e4a8u: goto label_22e4a8;
        case 0x22e4acu: goto label_22e4ac;
        case 0x22e4b0u: goto label_22e4b0;
        case 0x22e4b4u: goto label_22e4b4;
        case 0x22e4b8u: goto label_22e4b8;
        case 0x22e4bcu: goto label_22e4bc;
        case 0x22e4c0u: goto label_22e4c0;
        case 0x22e4c4u: goto label_22e4c4;
        case 0x22e4c8u: goto label_22e4c8;
        case 0x22e4ccu: goto label_22e4cc;
        case 0x22e4d0u: goto label_22e4d0;
        case 0x22e4d4u: goto label_22e4d4;
        case 0x22e4d8u: goto label_22e4d8;
        case 0x22e4dcu: goto label_22e4dc;
        case 0x22e4e0u: goto label_22e4e0;
        case 0x22e4e4u: goto label_22e4e4;
        case 0x22e4e8u: goto label_22e4e8;
        case 0x22e4ecu: goto label_22e4ec;
        case 0x22e4f0u: goto label_22e4f0;
        case 0x22e4f4u: goto label_22e4f4;
        case 0x22e4f8u: goto label_22e4f8;
        case 0x22e4fcu: goto label_22e4fc;
        case 0x22e500u: goto label_22e500;
        case 0x22e504u: goto label_22e504;
        case 0x22e508u: goto label_22e508;
        case 0x22e50cu: goto label_22e50c;
        case 0x22e510u: goto label_22e510;
        case 0x22e514u: goto label_22e514;
        case 0x22e518u: goto label_22e518;
        case 0x22e51cu: goto label_22e51c;
        case 0x22e520u: goto label_22e520;
        case 0x22e524u: goto label_22e524;
        case 0x22e528u: goto label_22e528;
        case 0x22e52cu: goto label_22e52c;
        case 0x22e530u: goto label_22e530;
        case 0x22e534u: goto label_22e534;
        case 0x22e538u: goto label_22e538;
        case 0x22e53cu: goto label_22e53c;
        case 0x22e540u: goto label_22e540;
        case 0x22e544u: goto label_22e544;
        case 0x22e548u: goto label_22e548;
        case 0x22e54cu: goto label_22e54c;
        case 0x22e550u: goto label_22e550;
        case 0x22e554u: goto label_22e554;
        case 0x22e558u: goto label_22e558;
        case 0x22e55cu: goto label_22e55c;
        case 0x22e560u: goto label_22e560;
        case 0x22e564u: goto label_22e564;
        case 0x22e568u: goto label_22e568;
        case 0x22e56cu: goto label_22e56c;
        case 0x22e570u: goto label_22e570;
        case 0x22e574u: goto label_22e574;
        case 0x22e578u: goto label_22e578;
        case 0x22e57cu: goto label_22e57c;
        case 0x22e580u: goto label_22e580;
        case 0x22e584u: goto label_22e584;
        case 0x22e588u: goto label_22e588;
        case 0x22e58cu: goto label_22e58c;
        case 0x22e590u: goto label_22e590;
        case 0x22e594u: goto label_22e594;
        case 0x22e598u: goto label_22e598;
        case 0x22e59cu: goto label_22e59c;
        default: break;
    }

    ctx->pc = 0x22e320u;

label_22e320:
    // 0x22e320: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x22e320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_22e324:
    // 0x22e324: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x22e324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_22e328:
    // 0x22e328: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22e328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_22e32c:
    // 0x22e32c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22e32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22e330:
    // 0x22e330: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22e330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22e334:
    // 0x22e334: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x22e334u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22e338:
    // 0x22e338: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22e338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22e33c:
    // 0x22e33c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x22e33cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22e340:
    // 0x22e340: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22e340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22e344:
    // 0x22e344: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x22e344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22e348:
    // 0x22e348: 0xc4a00034  lwc1        $f0, 0x34($a1)
    ctx->pc = 0x22e348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e34c:
    // 0x22e34c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22e34cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22e350:
    // 0x22e350: 0xe4a00034  swc1        $f0, 0x34($a1)
    ctx->pc = 0x22e350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
label_22e354:
    // 0x22e354: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x22e354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22e358:
    // 0x22e358: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x22e358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e35c:
    // 0x22e35c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22e35cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22e360:
    // 0x22e360: 0xe4a00038  swc1        $f0, 0x38($a1)
    ctx->pc = 0x22e360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
label_22e364:
    // 0x22e364: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x22e364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_22e368:
    // 0x22e368: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x22e368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e36c:
    // 0x22e36c: 0xc46100d8  lwc1        $f1, 0xD8($v1)
    ctx->pc = 0x22e36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22e370:
    // 0x22e370: 0xc46200d4  lwc1        $f2, 0xD4($v1)
    ctx->pc = 0x22e370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22e374:
    // 0x22e374: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x22e374u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22e378:
    // 0x22e378: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_22e37c:
    if (ctx->pc == 0x22E37Cu) {
        ctx->pc = 0x22E37Cu;
            // 0x22e37c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x22E380u;
        goto label_22e380;
    }
    ctx->pc = 0x22E378u;
    {
        const bool branch_taken_0x22e378 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22E37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E378u;
            // 0x22e37c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e378) {
            ctx->pc = 0x22E384u;
            goto label_22e384;
        }
    }
    ctx->pc = 0x22E380u;
label_22e380:
    // 0x22e380: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22e380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e384:
    // 0x22e384: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x22e384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e388:
    // 0x22e388: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x22e388u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22e38c:
    // 0x22e38c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_22e390:
    if (ctx->pc == 0x22E390u) {
        ctx->pc = 0x22E390u;
            // 0x22e390: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x22E394u;
        goto label_22e394;
    }
    ctx->pc = 0x22E38Cu;
    {
        const bool branch_taken_0x22e38c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22E390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E38Cu;
            // 0x22e390: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e38c) {
            ctx->pc = 0x22E398u;
            goto label_22e398;
        }
    }
    ctx->pc = 0x22E394u;
label_22e394:
    // 0x22e394: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x22e394u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e398:
    // 0x22e398: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x22e398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
label_22e39c:
    // 0x22e39c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x22e39cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_22e3a0:
    // 0x22e3a0: 0x5060002e  beql        $v1, $zero, . + 4 + (0x2E << 2)
label_22e3a4:
    if (ctx->pc == 0x22E3A4u) {
        ctx->pc = 0x22E3A4u;
            // 0x22e3a4: 0x41e3c  dsll32      $v1, $a0, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
        ctx->pc = 0x22E3A8u;
        goto label_22e3a8;
    }
    ctx->pc = 0x22E3A0u;
    {
        const bool branch_taken_0x22e3a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e3a0) {
            ctx->pc = 0x22E3A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22E3A0u;
            // 0x22e3a4: 0x41e3c  dsll32      $v1, $a0, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22E45Cu;
            goto label_22e45c;
        }
    }
    ctx->pc = 0x22E3A8u;
label_22e3a8:
    // 0x22e3a8: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x22e3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e3ac:
    // 0x22e3ac: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x22e3acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22e3b0:
    // 0x22e3b0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x22e3b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_22e3b4:
    // 0x22e3b4: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x22e3b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
label_22e3b8:
    // 0x22e3b8: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x22e3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_22e3bc:
    // 0x22e3bc: 0x18600018  blez        $v1, . + 4 + (0x18 << 2)
label_22e3c0:
    if (ctx->pc == 0x22E3C0u) {
        ctx->pc = 0x22E3C0u;
            // 0x22e3c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E3C4u;
        goto label_22e3c4;
    }
    ctx->pc = 0x22E3BCu;
    {
        const bool branch_taken_0x22e3bc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x22E3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E3BCu;
            // 0x22e3c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e3bc) {
            ctx->pc = 0x22E420u;
            goto label_22e420;
        }
    }
    ctx->pc = 0x22E3C4u;
label_22e3c4:
    // 0x22e3c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22e3c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e3c8:
    // 0x22e3c8: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x22e3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_22e3cc:
    // 0x22e3cc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x22e3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_22e3d0:
    // 0x22e3d0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x22e3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22e3d4:
    // 0x22e3d4: 0x8cc50090  lw          $a1, 0x90($a2)
    ctx->pc = 0x22e3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 144)));
label_22e3d8:
    // 0x22e3d8: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_22e3dc:
    if (ctx->pc == 0x22E3DCu) {
        ctx->pc = 0x22E3E0u;
        goto label_22e3e0;
    }
    ctx->pc = 0x22E3D8u;
    {
        const bool branch_taken_0x22e3d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e3d8) {
            ctx->pc = 0x22E400u;
            goto label_22e400;
        }
    }
    ctx->pc = 0x22E3E0u;
label_22e3e0:
    // 0x22e3e0: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x22e3e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_22e3e4:
    // 0x22e3e4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x22e3e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_22e3e8:
    // 0x22e3e8: 0x320f809  jalr        $t9
label_22e3ec:
    if (ctx->pc == 0x22E3ECu) {
        ctx->pc = 0x22E3ECu;
            // 0x22e3ec: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x22E3F0u;
        goto label_22e3f0;
    }
    ctx->pc = 0x22E3E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22E3F0u);
        ctx->pc = 0x22E3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E3E8u;
            // 0x22e3ec: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22E3F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22E3F0u; }
            if (ctx->pc != 0x22E3F0u) { return; }
        }
        }
    }
    ctx->pc = 0x22E3F0u;
label_22e3f0:
    // 0x22e3f0: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x22e3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_22e3f4:
    // 0x22e3f4: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x22e3f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_22e3f8:
    // 0x22e3f8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_22e3fc:
    if (ctx->pc == 0x22E3FCu) {
        ctx->pc = 0x22E400u;
        goto label_22e400;
    }
    ctx->pc = 0x22E3F8u;
    {
        const bool branch_taken_0x22e3f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e3f8) {
            ctx->pc = 0x22E408u;
            goto label_22e408;
        }
    }
    ctx->pc = 0x22E400u;
label_22e400:
    // 0x22e400: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x22e400u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e404:
    // 0x22e404: 0x0  nop
    ctx->pc = 0x22e404u;
    // NOP
label_22e408:
    // 0x22e408: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x22e408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_22e40c:
    // 0x22e40c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22e40cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_22e410:
    // 0x22e410: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x22e410u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_22e414:
    // 0x22e414: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_22e418:
    if (ctx->pc == 0x22E418u) {
        ctx->pc = 0x22E418u;
            // 0x22e418: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x22E41Cu;
        goto label_22e41c;
    }
    ctx->pc = 0x22E414u;
    {
        const bool branch_taken_0x22e414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E414u;
            // 0x22e418: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e414) {
            ctx->pc = 0x22E3C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22e3c8;
        }
    }
    ctx->pc = 0x22E41Cu;
label_22e41c:
    // 0x22e41c: 0x0  nop
    ctx->pc = 0x22e41cu;
    // NOP
label_22e420:
    // 0x22e420: 0x141e3c  dsll32      $v1, $s4, 24
    ctx->pc = 0x22e420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 24));
label_22e424:
    // 0x22e424: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x22e424u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_22e428:
    // 0x22e428: 0x5060003c  beql        $v1, $zero, . + 4 + (0x3C << 2)
label_22e42c:
    if (ctx->pc == 0x22E42Cu) {
        ctx->pc = 0x22E42Cu;
            // 0x22e42c: 0xa2400025  sb          $zero, 0x25($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 37), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x22E430u;
        goto label_22e430;
    }
    ctx->pc = 0x22E428u;
    {
        const bool branch_taken_0x22e428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e428) {
            ctx->pc = 0x22E42Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22E428u;
            // 0x22e42c: 0xa2400025  sb          $zero, 0x25($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 37), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22E51Cu;
            goto label_22e51c;
        }
    }
    ctx->pc = 0x22E430u;
label_22e430:
    // 0x22e430: 0x92430025  lbu         $v1, 0x25($s2)
    ctx->pc = 0x22e430u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 37)));
label_22e434:
    // 0x22e434: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22e434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_22e438:
    // 0x22e438: 0xa2430025  sb          $v1, 0x25($s2)
    ctx->pc = 0x22e438u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 37), (uint8_t)GPR_U32(ctx, 3));
label_22e43c:
    // 0x22e43c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x22e43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_22e440:
    // 0x22e440: 0x28630005  slti        $v1, $v1, 0x5
    ctx->pc = 0x22e440u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_22e444:
    // 0x22e444: 0x54600036  bnel        $v1, $zero, . + 4 + (0x36 << 2)
label_22e448:
    if (ctx->pc == 0x22E448u) {
        ctx->pc = 0x22E448u;
            // 0x22e448: 0xa2600000  sb          $zero, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x22E44Cu;
        goto label_22e44c;
    }
    ctx->pc = 0x22E444u;
    {
        const bool branch_taken_0x22e444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e444) {
            ctx->pc = 0x22E448u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22E444u;
            // 0x22e448: 0xa2600000  sb          $zero, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22E520u;
            goto label_22e520;
        }
    }
    ctx->pc = 0x22E44Cu;
label_22e44c:
    // 0x22e44c: 0xa2400025  sb          $zero, 0x25($s2)
    ctx->pc = 0x22e44cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 37), (uint8_t)GPR_U32(ctx, 0));
label_22e450:
    // 0x22e450: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22e450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22e454:
    // 0x22e454: 0x10000032  b           . + 4 + (0x32 << 2)
label_22e458:
    if (ctx->pc == 0x22E458u) {
        ctx->pc = 0x22E458u;
            // 0x22e458: 0xa2630000  sb          $v1, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x22E45Cu;
        goto label_22e45c;
    }
    ctx->pc = 0x22E454u;
    {
        const bool branch_taken_0x22e454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E454u;
            // 0x22e458: 0xa2630000  sb          $v1, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e454) {
            ctx->pc = 0x22E520u;
            goto label_22e520;
        }
    }
    ctx->pc = 0x22E45Cu;
label_22e45c:
    // 0x22e45c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x22e45cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_22e460:
    // 0x22e460: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
label_22e464:
    if (ctx->pc == 0x22E464u) {
        ctx->pc = 0x22E468u;
        goto label_22e468;
    }
    ctx->pc = 0x22E460u;
    {
        const bool branch_taken_0x22e460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e460) {
            ctx->pc = 0x22E51Cu;
            goto label_22e51c;
        }
    }
    ctx->pc = 0x22E468u;
label_22e468:
    // 0x22e468: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x22e468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e46c:
    // 0x22e46c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x22e46cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22e470:
    // 0x22e470: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22e470u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_22e474:
    // 0x22e474: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x22e474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
label_22e478:
    // 0x22e478: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x22e478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_22e47c:
    // 0x22e47c: 0x18600018  blez        $v1, . + 4 + (0x18 << 2)
label_22e480:
    if (ctx->pc == 0x22E480u) {
        ctx->pc = 0x22E480u;
            // 0x22e480: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E484u;
        goto label_22e484;
    }
    ctx->pc = 0x22E47Cu;
    {
        const bool branch_taken_0x22e47c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x22E480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E47Cu;
            // 0x22e480: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e47c) {
            ctx->pc = 0x22E4E0u;
            goto label_22e4e0;
        }
    }
    ctx->pc = 0x22E484u;
label_22e484:
    // 0x22e484: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22e484u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e488:
    // 0x22e488: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x22e488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_22e48c:
    // 0x22e48c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x22e48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_22e490:
    // 0x22e490: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x22e490u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22e494:
    // 0x22e494: 0x8cc50090  lw          $a1, 0x90($a2)
    ctx->pc = 0x22e494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 144)));
label_22e498:
    // 0x22e498: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_22e49c:
    if (ctx->pc == 0x22E49Cu) {
        ctx->pc = 0x22E4A0u;
        goto label_22e4a0;
    }
    ctx->pc = 0x22E498u;
    {
        const bool branch_taken_0x22e498 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e498) {
            ctx->pc = 0x22E4C0u;
            goto label_22e4c0;
        }
    }
    ctx->pc = 0x22E4A0u;
label_22e4a0:
    // 0x22e4a0: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x22e4a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_22e4a4:
    // 0x22e4a4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x22e4a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_22e4a8:
    // 0x22e4a8: 0x320f809  jalr        $t9
label_22e4ac:
    if (ctx->pc == 0x22E4ACu) {
        ctx->pc = 0x22E4ACu;
            // 0x22e4ac: 0x27a4006c  addiu       $a0, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->pc = 0x22E4B0u;
        goto label_22e4b0;
    }
    ctx->pc = 0x22E4A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22E4B0u);
        ctx->pc = 0x22E4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E4A8u;
            // 0x22e4ac: 0x27a4006c  addiu       $a0, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22E4B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22E4B0u; }
            if (ctx->pc != 0x22E4B0u) { return; }
        }
        }
    }
    ctx->pc = 0x22E4B0u;
label_22e4b0:
    // 0x22e4b0: 0x27a3006c  addiu       $v1, $sp, 0x6C
    ctx->pc = 0x22e4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_22e4b4:
    // 0x22e4b4: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x22e4b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_22e4b8:
    // 0x22e4b8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_22e4bc:
    if (ctx->pc == 0x22E4BCu) {
        ctx->pc = 0x22E4C0u;
        goto label_22e4c0;
    }
    ctx->pc = 0x22E4B8u;
    {
        const bool branch_taken_0x22e4b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e4b8) {
            ctx->pc = 0x22E4C8u;
            goto label_22e4c8;
        }
    }
    ctx->pc = 0x22E4C0u;
label_22e4c0:
    // 0x22e4c0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x22e4c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e4c4:
    // 0x22e4c4: 0x0  nop
    ctx->pc = 0x22e4c4u;
    // NOP
label_22e4c8:
    // 0x22e4c8: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x22e4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_22e4cc:
    // 0x22e4cc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22e4ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_22e4d0:
    // 0x22e4d0: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x22e4d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_22e4d4:
    // 0x22e4d4: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_22e4d8:
    if (ctx->pc == 0x22E4D8u) {
        ctx->pc = 0x22E4D8u;
            // 0x22e4d8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x22E4DCu;
        goto label_22e4dc;
    }
    ctx->pc = 0x22E4D4u;
    {
        const bool branch_taken_0x22e4d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E4D4u;
            // 0x22e4d8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e4d4) {
            ctx->pc = 0x22E488u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22e488;
        }
    }
    ctx->pc = 0x22E4DCu;
label_22e4dc:
    // 0x22e4dc: 0x0  nop
    ctx->pc = 0x22e4dcu;
    // NOP
label_22e4e0:
    // 0x22e4e0: 0x141e3c  dsll32      $v1, $s4, 24
    ctx->pc = 0x22e4e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 24));
label_22e4e4:
    // 0x22e4e4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x22e4e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_22e4e8:
    // 0x22e4e8: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
label_22e4ec:
    if (ctx->pc == 0x22E4ECu) {
        ctx->pc = 0x22E4ECu;
            // 0x22e4ec: 0xa2400026  sb          $zero, 0x26($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 38), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x22E4F0u;
        goto label_22e4f0;
    }
    ctx->pc = 0x22E4E8u;
    {
        const bool branch_taken_0x22e4e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e4e8) {
            ctx->pc = 0x22E4ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22E4E8u;
            // 0x22e4ec: 0xa2400026  sb          $zero, 0x26($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 38), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22E51Cu;
            goto label_22e51c;
        }
    }
    ctx->pc = 0x22E4F0u;
label_22e4f0:
    // 0x22e4f0: 0x92430026  lbu         $v1, 0x26($s2)
    ctx->pc = 0x22e4f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 38)));
label_22e4f4:
    // 0x22e4f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22e4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_22e4f8:
    // 0x22e4f8: 0xa2430026  sb          $v1, 0x26($s2)
    ctx->pc = 0x22e4f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 38), (uint8_t)GPR_U32(ctx, 3));
label_22e4fc:
    // 0x22e4fc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x22e4fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_22e500:
    // 0x22e500: 0x28630005  slti        $v1, $v1, 0x5
    ctx->pc = 0x22e500u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_22e504:
    // 0x22e504: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_22e508:
    if (ctx->pc == 0x22E508u) {
        ctx->pc = 0x22E50Cu;
        goto label_22e50c;
    }
    ctx->pc = 0x22E504u;
    {
        const bool branch_taken_0x22e504 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e504) {
            ctx->pc = 0x22E51Cu;
            goto label_22e51c;
        }
    }
    ctx->pc = 0x22E50Cu;
label_22e50c:
    // 0x22e50c: 0xa2400026  sb          $zero, 0x26($s2)
    ctx->pc = 0x22e50cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 38), (uint8_t)GPR_U32(ctx, 0));
label_22e510:
    // 0x22e510: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22e510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22e514:
    // 0x22e514: 0x10000002  b           . + 4 + (0x2 << 2)
label_22e518:
    if (ctx->pc == 0x22E518u) {
        ctx->pc = 0x22E518u;
            // 0x22e518: 0xa2630000  sb          $v1, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x22E51Cu;
        goto label_22e51c;
    }
    ctx->pc = 0x22E514u;
    {
        const bool branch_taken_0x22e514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E514u;
            // 0x22e518: 0xa2630000  sb          $v1, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e514) {
            ctx->pc = 0x22E520u;
            goto label_22e520;
        }
    }
    ctx->pc = 0x22E51Cu;
label_22e51c:
    // 0x22e51c: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x22e51cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
label_22e520:
    // 0x22e520: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x22e520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_22e524:
    // 0x22e524: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22e524u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22e528:
    // 0x22e528: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22e528u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22e52c:
    // 0x22e52c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22e52cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22e530:
    // 0x22e530: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22e530u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22e534:
    // 0x22e534: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22e534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22e538:
    // 0x22e538: 0x3e00008  jr          $ra
label_22e53c:
    if (ctx->pc == 0x22E53Cu) {
        ctx->pc = 0x22E53Cu;
            // 0x22e53c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x22E540u;
        goto label_22e540;
    }
    ctx->pc = 0x22E538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E538u;
            // 0x22e53c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22E540u;
label_22e540:
    // 0x22e540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22e540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_22e544:
    // 0x22e544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22e544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22e548:
    // 0x22e548: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x22e548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_22e54c:
    // 0x22e54c: 0xc08faf0  jal         func_23EBC0
label_22e550:
    if (ctx->pc == 0x22E550u) {
        ctx->pc = 0x22E550u;
            // 0x22e550: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->pc = 0x22E554u;
        goto label_22e554;
    }
    ctx->pc = 0x22E54Cu;
    SET_GPR_U32(ctx, 31, 0x22E554u);
    ctx->pc = 0x22E550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E54Cu;
            // 0x22e550: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EBC0u;
    if (runtime->hasFunction(0x23EBC0u)) {
        auto targetFn = runtime->lookupFunction(0x23EBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E554u; }
        if (ctx->pc != 0x22E554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023EBC0_0x23ebc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E554u; }
        if (ctx->pc != 0x22E554u) { return; }
    }
    ctx->pc = 0x22E554u;
label_22e554:
    // 0x22e554: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22e554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22e558:
    // 0x22e558: 0x3e00008  jr          $ra
label_22e55c:
    if (ctx->pc == 0x22E55Cu) {
        ctx->pc = 0x22E55Cu;
            // 0x22e55c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x22E560u;
        goto label_22e560;
    }
    ctx->pc = 0x22E558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E558u;
            // 0x22e55c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22E560u;
label_22e560:
    // 0x22e560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22e560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_22e564:
    // 0x22e564: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22e564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22e568:
    // 0x22e568: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x22e568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_22e56c:
    // 0x22e56c: 0xc08fb00  jal         func_23EC00
label_22e570:
    if (ctx->pc == 0x22E570u) {
        ctx->pc = 0x22E570u;
            // 0x22e570: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->pc = 0x22E574u;
        goto label_22e574;
    }
    ctx->pc = 0x22E56Cu;
    SET_GPR_U32(ctx, 31, 0x22E574u);
    ctx->pc = 0x22E570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E56Cu;
            // 0x22e570: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EC00u;
    if (runtime->hasFunction(0x23EC00u)) {
        auto targetFn = runtime->lookupFunction(0x23EC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E574u; }
        if (ctx->pc != 0x22E574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023EC00_0x23ec00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E574u; }
        if (ctx->pc != 0x22E574u) { return; }
    }
    ctx->pc = 0x22E574u;
label_22e574:
    // 0x22e574: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22e574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22e578:
    // 0x22e578: 0x3e00008  jr          $ra
label_22e57c:
    if (ctx->pc == 0x22E57Cu) {
        ctx->pc = 0x22E57Cu;
            // 0x22e57c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x22E580u;
        goto label_22e580;
    }
    ctx->pc = 0x22E578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E578u;
            // 0x22e57c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22E580u;
label_22e580:
    // 0x22e580: 0x8ca50028  lw          $a1, 0x28($a1)
    ctx->pc = 0x22e580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_22e584:
    // 0x22e584: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x22e584u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_22e588:
    // 0x22e588: 0x90a30012  lbu         $v1, 0x12($a1)
    ctx->pc = 0x22e588u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 18)));
label_22e58c:
    // 0x22e58c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x22e58cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_22e590:
    // 0x22e590: 0x3e00008  jr          $ra
label_22e594:
    if (ctx->pc == 0x22E594u) {
        ctx->pc = 0x22E594u;
            // 0x22e594: 0xa0a30012  sb          $v1, 0x12($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 18), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x22E598u;
        goto label_22e598;
    }
    ctx->pc = 0x22E590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E590u;
            // 0x22e594: 0xa0a30012  sb          $v1, 0x12($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 18), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22E598u;
label_22e598:
    // 0x22e598: 0x0  nop
    ctx->pc = 0x22e598u;
    // NOP
label_22e59c:
    // 0x22e59c: 0x0  nop
    ctx->pc = 0x22e59cu;
    // NOP
}
