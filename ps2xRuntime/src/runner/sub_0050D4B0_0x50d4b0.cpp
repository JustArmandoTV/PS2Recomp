#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0050D4B0
// Address: 0x50d4b0 - 0x50d700
void sub_0050D4B0_0x50d4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050D4B0_0x50d4b0");
#endif

    switch (ctx->pc) {
        case 0x50d5a4u: goto label_50d5a4;
        case 0x50d5d8u: goto label_50d5d8;
        case 0x50d600u: goto label_50d600;
        case 0x50d608u: goto label_50d608;
        case 0x50d614u: goto label_50d614;
        case 0x50d63cu: goto label_50d63c;
        case 0x50d640u: goto label_50d640;
        case 0x50d648u: goto label_50d648;
        case 0x50d678u: goto label_50d678;
        case 0x50d690u: goto label_50d690;
        case 0x50d6c0u: goto label_50d6c0;
        default: break;
    }

    ctx->pc = 0x50d4b0u;

    // 0x50d4b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x50d4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x50d4b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x50d4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x50d4b8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x50d4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x50d4bc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x50d4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x50d4c0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x50d4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x50d4c4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x50d4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x50d4c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x50d4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x50d4cc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x50d4ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50d4d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x50d4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x50d4d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x50d4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x50d4d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x50d4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x50d4dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50d4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x50d4e0: 0x8c840068  lw          $a0, 0x68($a0)
    ctx->pc = 0x50d4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x50d4e4: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x50D4E4u;
    {
        const bool branch_taken_0x50d4e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x50d4e4) {
            ctx->pc = 0x50D4E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50D4E4u;
            // 0x50d4e8: 0xc6a0005c  lwc1        $f0, 0x5C($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x50D500u;
            goto label_50d500;
        }
    }
    ctx->pc = 0x50D4ECu;
    // 0x50d4ec: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x50D4ECu;
    {
        const bool branch_taken_0x50d4ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x50d4ec) {
            ctx->pc = 0x50D4F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50D4ECu;
            // 0x50d4f0: 0xaea30068  sw          $v1, 0x68($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50D4FCu;
            goto label_50d4fc;
        }
    }
    ctx->pc = 0x50D4F4u;
    // 0x50d4f4: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x50D4F4u;
    {
        const bool branch_taken_0x50d4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x50d4f4) {
            ctx->pc = 0x50D6D0u;
            goto label_50d6d0;
        }
    }
    ctx->pc = 0x50D4FCu;
label_50d4fc:
    // 0x50d4fc: 0xc6a0005c  lwc1        $f0, 0x5C($s5)
    ctx->pc = 0x50d4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50d500:
    // 0x50d500: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x50d500u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x50d504: 0x0  nop
    ctx->pc = 0x50d504u;
    // NOP
    // 0x50d508: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x50d508u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x50d50c: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x50D50Cu;
    {
        const bool branch_taken_0x50d50c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x50d50c) {
            ctx->pc = 0x50D53Cu;
            goto label_50d53c;
        }
    }
    ctx->pc = 0x50D514u;
    // 0x50d514: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x50d514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x50d518: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x50d518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x50d51c: 0xc6a0005c  lwc1        $f0, 0x5C($s5)
    ctx->pc = 0x50d51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x50d520: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x50d520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x50d524: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x50d524u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x50d528: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x50d528u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x50d52c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x50D52Cu;
    {
        const bool branch_taken_0x50d52c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x50D530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50D52Cu;
            // 0x50d530: 0xe6a0005c  swc1        $f0, 0x5C($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d52c) {
            ctx->pc = 0x50D550u;
            goto label_50d550;
        }
    }
    ctx->pc = 0x50D534u;
    // 0x50d534: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x50D534u;
    {
        const bool branch_taken_0x50d534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50D538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50D534u;
            // 0x50d538: 0xe6a2005c  swc1        $f2, 0x5C($s5) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d534) {
            ctx->pc = 0x50D550u;
            goto label_50d550;
        }
    }
    ctx->pc = 0x50D53Cu;
label_50d53c:
    // 0x50d53c: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x50d53cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x50d540: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x50D540u;
    {
        const bool branch_taken_0x50d540 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x50d540) {
            ctx->pc = 0x50D544u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50D540u;
            // 0x50d544: 0xc6a1005c  lwc1        $f1, 0x5C($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x50D554u;
            goto label_50d554;
        }
    }
    ctx->pc = 0x50D548u;
    // 0x50d548: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x50d548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x50d54c: 0xaea3005c  sw          $v1, 0x5C($s5)
    ctx->pc = 0x50d54cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 92), GPR_U32(ctx, 3));
label_50d550:
    // 0x50d550: 0xc6a1005c  lwc1        $f1, 0x5C($s5)
    ctx->pc = 0x50d550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50d554:
    // 0x50d554: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x50d554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x50d558: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x50d558u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x50d55c: 0x0  nop
    ctx->pc = 0x50d55cu;
    // NOP
    // 0x50d560: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x50d560u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x50d564: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x50D564u;
    {
        const bool branch_taken_0x50d564 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x50D568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50D564u;
            // 0x50d568: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d564) {
            ctx->pc = 0x50D584u;
            goto label_50d584;
        }
    }
    ctx->pc = 0x50D56Cu;
    // 0x50d56c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x50d56cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x50d570: 0x0  nop
    ctx->pc = 0x50d570u;
    // NOP
    // 0x50d574: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x50d574u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x50d578: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x50D578u;
    {
        const bool branch_taken_0x50d578 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x50d578) {
            ctx->pc = 0x50D584u;
            goto label_50d584;
        }
    }
    ctx->pc = 0x50D580u;
    // 0x50d580: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x50d580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50d584:
    // 0x50d584: 0x50800010  beql        $a0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x50D584u;
    {
        const bool branch_taken_0x50d584 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x50d584) {
            ctx->pc = 0x50D588u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50D584u;
            // 0x50d588: 0x8eb4006c  lw          $s4, 0x6C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50D5C8u;
            goto label_50d5c8;
        }
    }
    ctx->pc = 0x50D58Cu;
    // 0x50d58c: 0x82a30064  lb          $v1, 0x64($s5)
    ctx->pc = 0x50d58cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x50d590: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x50d590u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x50d594: 0x54200009  bnel        $at, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x50D594u;
    {
        const bool branch_taken_0x50d594 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x50d594) {
            ctx->pc = 0x50D598u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50D594u;
            // 0x50d598: 0x3c03c000  lui         $v1, 0xC000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50D5BCu;
            goto label_50d5bc;
        }
    }
    ctx->pc = 0x50D59Cu;
    // 0x50d59c: 0xc1435c0  jal         func_50D700
    ctx->pc = 0x50D59Cu;
    SET_GPR_U32(ctx, 31, 0x50D5A4u);
    ctx->pc = 0x50D5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50D59Cu;
            // 0x50d5a0: 0x8ea40058  lw          $a0, 0x58($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x50D700u;
    if (runtime->hasFunction(0x50D700u)) {
        auto targetFn = runtime->lookupFunction(0x50D700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D5A4u; }
        if (ctx->pc != 0x50D5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0050D700_0x50d700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D5A4u; }
        if (ctx->pc != 0x50D5A4u) { return; }
    }
    ctx->pc = 0x50D5A4u;
label_50d5a4:
    // 0x50d5a4: 0xc6a00060  lwc1        $f0, 0x60($s5)
    ctx->pc = 0x50d5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x50d5a8: 0xe6a0005c  swc1        $f0, 0x5C($s5)
    ctx->pc = 0x50d5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 92), bits); }
    // 0x50d5ac: 0x82a30064  lb          $v1, 0x64($s5)
    ctx->pc = 0x50d5acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x50d5b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x50d5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x50d5b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x50D5B4u;
    {
        const bool branch_taken_0x50d5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50D5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50D5B4u;
            // 0x50d5b8: 0xa2a30064  sb          $v1, 0x64($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 100), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d5b4) {
            ctx->pc = 0x50D5C4u;
            goto label_50d5c4;
        }
    }
    ctx->pc = 0x50D5BCu;
label_50d5bc:
    // 0x50d5bc: 0xaea3005c  sw          $v1, 0x5C($s5)
    ctx->pc = 0x50d5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 92), GPR_U32(ctx, 3));
    // 0x50d5c0: 0xa2a00064  sb          $zero, 0x64($s5)
    ctx->pc = 0x50d5c0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 100), (uint8_t)GPR_U32(ctx, 0));
label_50d5c4:
    // 0x50d5c4: 0x8eb4006c  lw          $s4, 0x6C($s5)
    ctx->pc = 0x50d5c4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_50d5c8:
    // 0x50d5c8: 0x1a800041  blez        $s4, . + 4 + (0x41 << 2)
    ctx->pc = 0x50D5C8u;
    {
        const bool branch_taken_0x50d5c8 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x50d5c8) {
            ctx->pc = 0x50D6D0u;
            goto label_50d6d0;
        }
    }
    ctx->pc = 0x50D5D0u;
    // 0x50d5d0: 0x8eb70070  lw          $s7, 0x70($s5)
    ctx->pc = 0x50d5d0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x50d5d4: 0x8eb20080  lw          $s2, 0x80($s5)
    ctx->pc = 0x50d5d4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
label_50d5d8:
    // 0x50d5d8: 0x92430010  lbu         $v1, 0x10($s2)
    ctx->pc = 0x50d5d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x50d5dc: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x50D5DCu;
    {
        const bool branch_taken_0x50d5dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x50d5dc) {
            ctx->pc = 0x50D660u;
            goto label_50d660;
        }
    }
    ctx->pc = 0x50D5E4u;
    // 0x50d5e4: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x50d5e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x50d5e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x50d5e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50d5ec: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x50d5ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x50d5f0: 0x2e0982d  daddu       $s3, $s7, $zero
    ctx->pc = 0x50d5f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50d5f4: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x50d5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x50d5f8: 0xc122d2c  jal         func_48B4B0
    ctx->pc = 0x50D5F8u;
    SET_GPR_U32(ctx, 31, 0x50D600u);
    ctx->pc = 0x50D5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50D5F8u;
            // 0x50d5fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D600u; }
        if (ctx->pc != 0x50D600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D600u; }
        if (ctx->pc != 0x50D600u) { return; }
    }
    ctx->pc = 0x50D600u;
label_50d600:
    // 0x50d600: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x50D600u;
    SET_GPR_U32(ctx, 31, 0x50D608u);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D608u; }
        if (ctx->pc != 0x50D608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D608u; }
        if (ctx->pc != 0x50D608u) { return; }
    }
    ctx->pc = 0x50D608u;
label_50d608:
    // 0x50d608: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x50d608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x50d60c: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x50D60Cu;
    SET_GPR_U32(ctx, 31, 0x50D614u);
    ctx->pc = 0x50D610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50D60Cu;
            // 0x50d610: 0x2b740  sll         $s6, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D614u; }
        if (ctx->pc != 0x50D614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D614u; }
        if (ctx->pc != 0x50D614u) { return; }
    }
    ctx->pc = 0x50D614u;
label_50d614:
    // 0x50d614: 0x561825  or          $v1, $v0, $s6
    ctx->pc = 0x50d614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x50d618: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x50d618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x50d61c: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x50d61cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x50d620: 0x1010  mfhi        $v0
    ctx->pc = 0x50d620u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x50d624: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x50D624u;
    {
        const bool branch_taken_0x50d624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x50d624) {
            ctx->pc = 0x50D640u;
            goto label_50d640;
        }
    }
    ctx->pc = 0x50D62Cu;
    // 0x50d62c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x50d62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50d630: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x50d630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x50d634: 0xc122d2c  jal         func_48B4B0
    ctx->pc = 0x50D634u;
    SET_GPR_U32(ctx, 31, 0x50D63Cu);
    ctx->pc = 0x50D638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50D634u;
            // 0x50d638: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D63Cu; }
        if (ctx->pc != 0x50D63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D63Cu; }
        if (ctx->pc != 0x50D63Cu) { return; }
    }
    ctx->pc = 0x50D63Cu;
label_50d63c:
    // 0x50d63c: 0x0  nop
    ctx->pc = 0x50d63cu;
    // NOP
label_50d640:
    // 0x50d640: 0xc0e3658  jal         func_38D960
    ctx->pc = 0x50D640u;
    SET_GPR_U32(ctx, 31, 0x50D648u);
    ctx->pc = 0x50D644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50D640u;
            // 0x50d644: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D648u; }
        if (ctx->pc != 0x50D648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D648u; }
        if (ctx->pc != 0x50D648u) { return; }
    }
    ctx->pc = 0x50D648u;
label_50d648:
    // 0x50d648: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x50d648u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x50d64c: 0x263102d0  addiu       $s1, $s1, 0x2D0
    ctx->pc = 0x50d64cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 720));
    // 0x50d650: 0x0  nop
    ctx->pc = 0x50d650u;
    // NOP
    // 0x50d654: 0x1660fffa  bnez        $s3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x50D654u;
    {
        const bool branch_taken_0x50d654 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x50d654) {
            ctx->pc = 0x50D640u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_50d640;
        }
    }
    ctx->pc = 0x50D65Cu;
    // 0x50d65c: 0x0  nop
    ctx->pc = 0x50d65cu;
    // NOP
label_50d660:
    // 0x50d660: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x50d660u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x50d664: 0x1680ffdc  bnez        $s4, . + 4 + (-0x24 << 2)
    ctx->pc = 0x50D664u;
    {
        const bool branch_taken_0x50d664 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x50D668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50D664u;
            // 0x50d668: 0x26520014  addiu       $s2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d664) {
            ctx->pc = 0x50D5D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_50d5d8;
        }
    }
    ctx->pc = 0x50D66Cu;
    // 0x50d66c: 0x8eb20080  lw          $s2, 0x80($s5)
    ctx->pc = 0x50d66cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x50d670: 0x8eb1006c  lw          $s1, 0x6C($s5)
    ctx->pc = 0x50d670u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
    // 0x50d674: 0x8eb00070  lw          $s0, 0x70($s5)
    ctx->pc = 0x50d674u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_50d678:
    // 0x50d678: 0x92430010  lbu         $v1, 0x10($s2)
    ctx->pc = 0x50d678u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x50d67c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x50D67Cu;
    {
        const bool branch_taken_0x50d67c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x50d67c) {
            ctx->pc = 0x50D6C0u;
            goto label_50d6c0;
        }
    }
    ctx->pc = 0x50D684u;
    // 0x50d684: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x50d684u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x50d688: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x50d688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50d68c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x50d68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50d690:
    // 0x50d690: 0x8cc300d0  lw          $v1, 0xD0($a2)
    ctx->pc = 0x50d690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 208)));
    // 0x50d694: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x50d694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x50d698: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x50d698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x50d69c: 0x24c602d0  addiu       $a2, $a2, 0x2D0
    ctx->pc = 0x50d69cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 720));
    // 0x50d6a0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x50d6a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x50d6a4: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x50D6A4u;
    {
        const bool branch_taken_0x50d6a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x50D6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50D6A4u;
            // 0x50d6a8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d6a4) {
            ctx->pc = 0x50D690u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_50d690;
        }
    }
    ctx->pc = 0x50D6ACu;
    // 0x50d6ac: 0x14900004  bne         $a0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x50D6ACu;
    {
        const bool branch_taken_0x50d6ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        if (branch_taken_0x50d6ac) {
            ctx->pc = 0x50D6C0u;
            goto label_50d6c0;
        }
    }
    ctx->pc = 0x50D6B4u;
    // 0x50d6b4: 0xa2400010  sb          $zero, 0x10($s2)
    ctx->pc = 0x50d6b4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x50d6b8: 0xc122c94  jal         func_48B250
    ctx->pc = 0x50D6B8u;
    SET_GPR_U32(ctx, 31, 0x50D6C0u);
    ctx->pc = 0x50D6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50D6B8u;
            // 0x50d6bc: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B250u;
    if (runtime->hasFunction(0x48B250u)) {
        auto targetFn = runtime->lookupFunction(0x48B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D6C0u; }
        if (ctx->pc != 0x50D6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B250_0x48b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D6C0u; }
        if (ctx->pc != 0x50D6C0u) { return; }
    }
    ctx->pc = 0x50D6C0u;
label_50d6c0:
    // 0x50d6c0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x50d6c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x50d6c4: 0x1620ffec  bnez        $s1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x50D6C4u;
    {
        const bool branch_taken_0x50d6c4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x50D6C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50D6C4u;
            // 0x50d6c8: 0x26520014  addiu       $s2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d6c4) {
            ctx->pc = 0x50D678u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_50d678;
        }
    }
    ctx->pc = 0x50D6CCu;
    // 0x50d6cc: 0x0  nop
    ctx->pc = 0x50d6ccu;
    // NOP
label_50d6d0:
    // 0x50d6d0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x50d6d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x50d6d4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x50d6d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x50d6d8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x50d6d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x50d6dc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x50d6dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x50d6e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x50d6e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x50d6e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x50d6e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x50d6e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x50d6e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x50d6ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x50d6ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50d6f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50d6f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50d6f4: 0x3e00008  jr          $ra
    ctx->pc = 0x50D6F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50D6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50D6F4u;
            // 0x50d6f8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50D6FCu;
    // 0x50d6fc: 0x0  nop
    ctx->pc = 0x50d6fcu;
    // NOP
}
