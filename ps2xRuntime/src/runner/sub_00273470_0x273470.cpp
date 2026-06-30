#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00273470
// Address: 0x273470 - 0x273ad0
void sub_00273470_0x273470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273470_0x273470");
#endif

    switch (ctx->pc) {
        case 0x2735a8u: goto label_2735a8;
        case 0x2735e0u: goto label_2735e0;
        case 0x273658u: goto label_273658;
        case 0x273800u: goto label_273800;
        case 0x2739f8u: goto label_2739f8;
        case 0x273a80u: goto label_273a80;
        default: break;
    }

    ctx->pc = 0x273470u;

    // 0x273470: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x273470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x273474: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x273474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x273478: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x273478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x27347c: 0x44835800  mtc1        $v1, $f11
    ctx->pc = 0x27347cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x273480: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x273480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x273484: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x273484u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273488: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x273488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x27348c: 0x3c033a83  lui         $v1, 0x3A83
    ctx->pc = 0x27348cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14979 << 16));
    // 0x273490: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x273490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x273494: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x273494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x273498: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x273498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x27349c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27349cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2734a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2734a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2734a4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2734a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2734a8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2734a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2734ac: 0xc5030000  lwc1        $f3, 0x0($t0)
    ctx->pc = 0x2734acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2734b0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2734b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2734b4: 0xc5020004  lwc1        $f2, 0x4($t0)
    ctx->pc = 0x2734b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2734b8: 0x8cea0008  lw          $t2, 0x8($a3)
    ctx->pc = 0x2734b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2734bc: 0x8c8f0038  lw          $t7, 0x38($a0)
    ctx->pc = 0x2734bcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x2734c0: 0x8c790000  lw          $t9, 0x0($v1)
    ctx->pc = 0x2734c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2734c4: 0x46031041  sub.s       $f1, $f2, $f3
    ctx->pc = 0x2734c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2734c8: 0x8ce80004  lw          $t0, 0x4($a3)
    ctx->pc = 0x2734c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2734cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2734ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2734d0: 0x320c02d  daddu       $t8, $t9, $zero
    ctx->pc = 0x2734d0u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2734d4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2734d4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2734d8: 0x0  nop
    ctx->pc = 0x2734d8u;
    // NOP
    // 0x2734dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2734dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2734e0: 0x46005b03  div.s       $f12, $f11, $f0
    ctx->pc = 0x2734e0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[11] * 0.0f); } else ctx->f[12] = ctx->f[11] / ctx->f[0];
    // 0x2734e4: 0x0  nop
    ctx->pc = 0x2734e4u;
    // NOP
    // 0x2734e8: 0x0  nop
    ctx->pc = 0x2734e8u;
    // NOP
    // 0x2734ec: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2734ECu;
    {
        const bool branch_taken_0x2734ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2734ec) {
            ctx->pc = 0x2734FCu;
            goto label_2734fc;
        }
    }
    ctx->pc = 0x2734F4u;
    // 0x2734f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2734F4u;
    {
        const bool branch_taken_0x2734f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2734F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2734F4u;
            // 0x2734f8: 0x8c830008  lw          $v1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2734f4) {
            ctx->pc = 0x27350Cu;
            goto label_27350c;
        }
    }
    ctx->pc = 0x2734FCu;
label_2734fc:
    // 0x2734fc: 0x0  nop
    ctx->pc = 0x2734fcu;
    // NOP
    // 0x273500: 0x0  nop
    ctx->pc = 0x273500u;
    // NOP
    // 0x273504: 0x46015ac3  div.s       $f11, $f11, $f1
    ctx->pc = 0x273504u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[11] = copysignf(INFINITY, ctx->f[11] * 0.0f); } else ctx->f[11] = ctx->f[11] / ctx->f[1];
    // 0x273508: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x273508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_27350c:
    // 0x27350c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x27350cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x273510: 0x6a082a  slt         $at, $v1, $t2
    ctx->pc = 0x273510u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x273514: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x273514u;
    {
        const bool branch_taken_0x273514 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x273514) {
            ctx->pc = 0x273520u;
            goto label_273520;
        }
    }
    ctx->pc = 0x27351Cu;
    // 0x27351c: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x27351cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_273520:
    // 0x273520: 0x8082a  slt         $at, $zero, $t0
    ctx->pc = 0x273520u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x273524: 0x10200150  beqz        $at, . + 4 + (0x150 << 2)
    ctx->pc = 0x273524u;
    {
        const bool branch_taken_0x273524 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x273528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273524u;
            // 0x273528: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273524) {
            ctx->pc = 0x273A68u;
            goto label_273a68;
        }
    }
    ctx->pc = 0x27352Cu;
    // 0x27352c: 0x46031040  add.s       $f1, $f2, $f3
    ctx->pc = 0x27352cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x273530: 0x3c083f00  lui         $t0, 0x3F00
    ctx->pc = 0x273530u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16128 << 16));
    // 0x273534: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x273534u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273538: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x273538u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27353c: 0x46031201  sub.s       $f8, $f2, $f3
    ctx->pc = 0x27353cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x273540: 0x46010242  mul.s       $f9, $f0, $f1
    ctx->pc = 0x273540u;
    ctx->f[9] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x273544: 0x3c087dcc  lui         $t0, 0x7DCC
    ctx->pc = 0x273544u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32204 << 16));
    // 0x273548: 0x3c1040c0  lui         $s0, 0x40C0
    ctx->pc = 0x273548u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)16576 << 16));
    // 0x27354c: 0x350cccbf  ori         $t4, $t0, 0xCCBF
    ctx->pc = 0x27354cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)52415);
    // 0x273550: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x273550u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x273554: 0x44883000  mtc1        $t0, $f6
    ctx->pc = 0x273554u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x273558: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x273558u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x27355c: 0x3c0844bb  lui         $t0, 0x44BB
    ctx->pc = 0x27355cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17595 << 16));
    // 0x273560: 0x350d8000  ori         $t5, $t0, 0x8000
    ctx->pc = 0x273560u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32768);
    // 0x273564: 0x3c084039  lui         $t0, 0x4039
    ctx->pc = 0x273564u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16441 << 16));
    // 0x273568: 0x3508999a  ori         $t0, $t0, 0x999A
    ctx->pc = 0x273568u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)39322);
    // 0x27356c: 0x44882000  mtc1        $t0, $f4
    ctx->pc = 0x27356cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x273570: 0x448d2800  mtc1        $t5, $f5
    ctx->pc = 0x273570u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x273574: 0x3c084040  lui         $t0, 0x4040
    ctx->pc = 0x273574u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16448 << 16));
    // 0x273578: 0x44881800  mtc1        $t0, $f3
    ctx->pc = 0x273578u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x27357c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x27357cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273580: 0x3c08bcf5  lui         $t0, 0xBCF5
    ctx->pc = 0x273580u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)48373 << 16));
    // 0x273584: 0x350dc28f  ori         $t5, $t0, 0xC28F
    ctx->pc = 0x273584u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)49807);
    // 0x273588: 0x448d1000  mtc1        $t5, $f2
    ctx->pc = 0x273588u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27358c: 0x3c084b18  lui         $t0, 0x4B18
    ctx->pc = 0x27358cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)19224 << 16));
    // 0x273590: 0x35089680  ori         $t0, $t0, 0x9680
    ctx->pc = 0x273590u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)38528);
    // 0x273594: 0x3c0d3f40  lui         $t5, 0x3F40
    ctx->pc = 0x273594u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)16192 << 16));
    // 0x273598: 0x448d0800  mtc1        $t5, $f1
    ctx->pc = 0x273598u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27359c: 0x3c0d40a0  lui         $t5, 0x40A0
    ctx->pc = 0x27359cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)16544 << 16));
    // 0x2735a0: 0x448da800  mtc1        $t5, $f21
    ctx->pc = 0x2735a0u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2735a4: 0x0  nop
    ctx->pc = 0x2735a4u;
    // NOP
label_2735a8:
    // 0x2735a8: 0x8ced0000  lw          $t5, 0x0($a3)
    ctx->pc = 0x2735a8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2735ac: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x2735acu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x2735b0: 0xc5af0008  lwc1        $f15, 0x8($t5)
    ctx->pc = 0x2735b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2735b4: 0x8dad0000  lw          $t5, 0x0($t5)
    ctx->pc = 0x2735b4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x2735b8: 0x32d082b  sltu        $at, $t9, $t5
    ctx->pc = 0x2735b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x2735bc: 0x1a1c80a  movz        $t9, $t5, $at
    ctx->pc = 0x2735bcu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 13));
    // 0x2735c0: 0x1b8082b  sltu        $at, $t5, $t8
    ctx->pc = 0x2735c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x2735c4: 0x1a1c00a  movz        $t8, $t5, $at
    ctx->pc = 0x2735c4u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 13));
    // 0x2735c8: 0x8c91000c  lw          $s1, 0xC($a0)
    ctx->pc = 0x2735c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2735cc: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x2735ccu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2735d0: 0x25b0ffff  addiu       $s0, $t5, -0x1
    ctx->pc = 0x2735d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x2735d4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2735D4u;
    {
        const bool branch_taken_0x2735d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2735D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2735D4u;
            // 0x2735d8: 0x106880  sll         $t5, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2735d4) {
            ctx->pc = 0x273608u;
            goto label_273608;
        }
    }
    ctx->pc = 0x2735DCu;
    // 0x2735dc: 0x0  nop
    ctx->pc = 0x2735dcu;
    // NOP
label_2735e0:
    // 0x2735e0: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x2735e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
    // 0x2735e4: 0x8e320008  lw          $s2, 0x8($s1)
    ctx->pc = 0x2735e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2735e8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2735e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2735ec: 0x24d9021  addu        $s2, $s2, $t5
    ctx->pc = 0x2735ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 13)));
    // 0x2735f0: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2735f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x2735f4: 0x25adfffc  addiu       $t5, $t5, -0x4
    ctx->pc = 0x2735f4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967292));
    // 0x2735f8: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x2735f8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2735fc: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2735fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x273600: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x273600u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x273604: 0x0  nop
    ctx->pc = 0x273604u;
    // NOP
label_273608:
    // 0x273608: 0x600000b  bltz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x273608u;
    {
        const bool branch_taken_0x273608 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x273608) {
            ctx->pc = 0x273638u;
            goto label_273638;
        }
    }
    ctx->pc = 0x273610u;
    // 0x273610: 0x8e320008  lw          $s2, 0x8($s1)
    ctx->pc = 0x273610u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x273614: 0x24d9021  addu        $s2, $s2, $t5
    ctx->pc = 0x273614u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 13)));
    // 0x273618: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x273618u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x27361c: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x27361Cu;
    {
        const bool branch_taken_0x27361c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x27361c) {
            ctx->pc = 0x273638u;
            goto label_273638;
        }
    }
    ctx->pc = 0x273624u;
    // 0x273624: 0xc64a000c  lwc1        $f10, 0xC($s2)
    ctx->pc = 0x273624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x273628: 0x460f5034  c.lt.s      $f10, $f15
    ctx->pc = 0x273628u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27362c: 0x4501ffec  bc1t        . + 4 + (-0x14 << 2)
    ctx->pc = 0x27362Cu;
    {
        const bool branch_taken_0x27362c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27362c) {
            ctx->pc = 0x2735E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2735e0;
        }
    }
    ctx->pc = 0x273634u;
    // 0x273634: 0x0  nop
    ctx->pc = 0x273634u;
    // NOP
label_273638:
    // 0x273638: 0x8c91000c  lw          $s1, 0xC($a0)
    ctx->pc = 0x273638u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x27363c: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x27363cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x273640: 0x25b0ffff  addiu       $s0, $t5, -0x1
    ctx->pc = 0x273640u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x273644: 0x150082a  slt         $at, $t2, $s0
    ctx->pc = 0x273644u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x273648: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x273648u;
    {
        const bool branch_taken_0x273648 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x273648) {
            ctx->pc = 0x273690u;
            goto label_273690;
        }
    }
    ctx->pc = 0x273650u;
    // 0x273650: 0x106880  sll         $t5, $s0, 2
    ctx->pc = 0x273650u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x273654: 0x0  nop
    ctx->pc = 0x273654u;
    // NOP
label_273658:
    // 0x273658: 0x8e320008  lw          $s2, 0x8($s1)
    ctx->pc = 0x273658u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x27365c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x27365cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x273660: 0x150082a  slt         $at, $t2, $s0
    ctx->pc = 0x273660u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x273664: 0x24d9021  addu        $s2, $s2, $t5
    ctx->pc = 0x273664u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 13)));
    // 0x273668: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x273668u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x27366c: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x27366cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
    // 0x273670: 0x8e320008  lw          $s2, 0x8($s1)
    ctx->pc = 0x273670u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x273674: 0x24d9021  addu        $s2, $s2, $t5
    ctx->pc = 0x273674u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 13)));
    // 0x273678: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x273678u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x27367c: 0x25adfffc  addiu       $t5, $t5, -0x4
    ctx->pc = 0x27367cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967292));
    // 0x273680: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x273680u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x273684: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x273684u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x273688: 0x1420fff3  bnez        $at, . + 4 + (-0xD << 2)
    ctx->pc = 0x273688u;
    {
        const bool branch_taken_0x273688 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x27368Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273688u;
            // 0x27368c: 0xae320000  sw          $s2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273688) {
            ctx->pc = 0x273658u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_273658;
        }
    }
    ctx->pc = 0x273690u;
label_273690:
    // 0x273690: 0x8c8d0008  lw          $t5, 0x8($a0)
    ctx->pc = 0x273690u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x273694: 0x8c920020  lw          $s2, 0x20($a0)
    ctx->pc = 0x273694u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x273698: 0x12f082a  slt         $at, $t1, $t7
    ctx->pc = 0x273698u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x27369c: 0x8db0000c  lw          $s0, 0xC($t5)
    ctx->pc = 0x27369cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x2736a0: 0x8db50010  lw          $s5, 0x10($t5)
    ctx->pc = 0x2736a0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x2736a4: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x2736A4u;
    {
        const bool branch_taken_0x2736a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2736A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2736A4u;
            // 0x2736a8: 0x46097b41  sub.s       $f13, $f15, $f9 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[9]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2736a4) {
            ctx->pc = 0x273708u;
            goto label_273708;
        }
    }
    ctx->pc = 0x2736ACu;
    // 0x2736ac: 0xc64a001c  lwc1        $f10, 0x1C($s2)
    ctx->pc = 0x2736acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2736b0: 0x46085034  c.lt.s      $f10, $f8
    ctx->pc = 0x2736b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2736b4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2736B4u;
    {
        const bool branch_taken_0x2736b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2736b4) {
            ctx->pc = 0x2736C4u;
            goto label_2736c4;
        }
    }
    ctx->pc = 0x2736BCu;
    // 0x2736bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2736BCu;
    {
        const bool branch_taken_0x2736bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2736C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2736BCu;
            // 0x2736c0: 0x460a4280  add.s       $f10, $f8, $f10 (Delay Slot)
        ctx->f[10] = FPU_ADD_S(ctx->f[8], ctx->f[10]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2736bc) {
            ctx->pc = 0x2736CCu;
            goto label_2736cc;
        }
    }
    ctx->pc = 0x2736C4u;
label_2736c4:
    // 0x2736c4: 0x46004286  mov.s       $f10, $f8
    ctx->pc = 0x2736c4u;
    ctx->f[10] = FPU_MOV_S(ctx->f[8]);
    // 0x2736c8: 0x460a4280  add.s       $f10, $f8, $f10
    ctx->pc = 0x2736c8u;
    ctx->f[10] = FPU_ADD_S(ctx->f[8], ctx->f[10]);
label_2736cc:
    // 0x2736cc: 0x46075036  c.le.s      $f10, $f7
    ctx->pc = 0x2736ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[10], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2736d0: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x2736D0u;
    {
        const bool branch_taken_0x2736d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2736d0) {
            ctx->pc = 0x2736F8u;
            goto label_2736f8;
        }
    }
    ctx->pc = 0x2736D8u;
    // 0x2736d8: 0x0  nop
    ctx->pc = 0x2736d8u;
    // NOP
    // 0x2736dc: 0x0  nop
    ctx->pc = 0x2736dcu;
    // NOP
    // 0x2736e0: 0x460a3283  div.s       $f10, $f6, $f10
    ctx->pc = 0x2736e0u;
    if (ctx->f[10] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[10] = copysignf(INFINITY, ctx->f[6] * 0.0f); } else ctx->f[10] = ctx->f[6] / ctx->f[10];
    // 0x2736e4: 0x0  nop
    ctx->pc = 0x2736e4u;
    // NOP
    // 0x2736e8: 0x0  nop
    ctx->pc = 0x2736e8u;
    // NOP
    // 0x2736ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2736ECu;
    {
        const bool branch_taken_0x2736ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2736ec) {
            ctx->pc = 0x273710u;
            goto label_273710;
        }
    }
    ctx->pc = 0x2736F4u;
    // 0x2736f4: 0x0  nop
    ctx->pc = 0x2736f4u;
    // NOP
label_2736f8:
    // 0x2736f8: 0x448c5000  mtc1        $t4, $f10
    ctx->pc = 0x2736f8u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x2736fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2736FCu;
    {
        const bool branch_taken_0x2736fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2736fc) {
            ctx->pc = 0x273710u;
            goto label_273710;
        }
    }
    ctx->pc = 0x273704u;
    // 0x273704: 0x0  nop
    ctx->pc = 0x273704u;
    // NOP
label_273708:
    // 0x273708: 0x46005a86  mov.s       $f10, $f11
    ctx->pc = 0x273708u;
    ctx->f[10] = FPU_MOV_S(ctx->f[11]);
    // 0x27370c: 0x0  nop
    ctx->pc = 0x27370cu;
    // NOP
label_273710:
    // 0x273710: 0x460a6b42  mul.s       $f13, $f13, $f10
    ctx->pc = 0x273710u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[10]);
    // 0x273714: 0x46076834  c.lt.s      $f13, $f7
    ctx->pc = 0x273714u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273718: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x273718u;
    {
        const bool branch_taken_0x273718 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x273718) {
            ctx->pc = 0x273728u;
            goto label_273728;
        }
    }
    ctx->pc = 0x273720u;
    // 0x273720: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x273720u;
    {
        const bool branch_taken_0x273720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273720u;
            // 0x273724: 0x46003b86  mov.s       $f14, $f7 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x273720) {
            ctx->pc = 0x273750u;
            goto label_273750;
        }
    }
    ctx->pc = 0x273728u;
label_273728:
    // 0x273728: 0x460d6b42  mul.s       $f13, $f13, $f13
    ctx->pc = 0x273728u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x27372c: 0x460d6c02  mul.s       $f16, $f13, $f13
    ctx->pc = 0x27372cu;
    ctx->f[16] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x273730: 0x460d201a  mula.s      $f4, $f13
    ctx->pc = 0x273730u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[13]);
    // 0x273734: 0x46108342  mul.s       $f13, $f16, $f16
    ctx->pc = 0x273734u;
    ctx->f[13] = FPU_MUL_S(ctx->f[16], ctx->f[16]);
    // 0x273738: 0x460d2b82  mul.s       $f14, $f5, $f13
    ctx->pc = 0x273738u;
    ctx->f[14] = FPU_MUL_S(ctx->f[5], ctx->f[13]);
    // 0x27373c: 0x46101b5c  madd.s      $f13, $f3, $f16
    ctx->pc = 0x27373cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[16]));
    // 0x273740: 0xc64a0014  lwc1        $f10, 0x14($s2)
    ctx->pc = 0x273740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x273744: 0x460d7340  add.s       $f13, $f14, $f13
    ctx->pc = 0x273744u;
    ctx->f[13] = FPU_ADD_S(ctx->f[14], ctx->f[13]);
    // 0x273748: 0x460a6b82  mul.s       $f14, $f13, $f10
    ctx->pc = 0x273748u;
    ctx->f[14] = FPU_MUL_S(ctx->f[13], ctx->f[10]);
    // 0x27374c: 0x0  nop
    ctx->pc = 0x27374cu;
    // NOP
label_273750:
    // 0x273750: 0x3196823  subu        $t5, $t8, $t9
    ctx->pc = 0x273750u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 25)));
    // 0x273754: 0x29a10010  slti        $at, $t5, 0x10
    ctx->pc = 0x273754u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x273758: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x273758u;
    {
        const bool branch_taken_0x273758 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27375Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273758u;
            // 0x27375c: 0xc4d00010  lwc1        $f16, 0x10($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x273758) {
            ctx->pc = 0x27376Cu;
            goto label_27376c;
        }
    }
    ctx->pc = 0x273760u;
    // 0x273760: 0xc64a0018  lwc1        $f10, 0x18($s2)
    ctx->pc = 0x273760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x273764: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x273764u;
    {
        const bool branch_taken_0x273764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273764u;
            // 0x273768: 0x460a1342  mul.s       $f13, $f2, $f10 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x273764) {
            ctx->pc = 0x273770u;
            goto label_273770;
        }
    }
    ctx->pc = 0x27376Cu;
label_27376c:
    // 0x27376c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x27376cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_273770:
    // 0x273770: 0x8c94000c  lw          $s4, 0xC($a0)
    ctx->pc = 0x273770u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x273774: 0x46107280  add.s       $f10, $f14, $f16
    ctx->pc = 0x273774u;
    ctx->f[10] = FPU_ADD_S(ctx->f[14], ctx->f[16]);
    // 0x273778: 0x106843  sra         $t5, $s0, 1
    ctx->pc = 0x273778u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 16), 1));
    // 0x27377c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x27377cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273780: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x273780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273784: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x273784u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x273788: 0x44887000  mtc1        $t0, $f14
    ctx->pc = 0x273788u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x27378c: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x27378Cu;
    {
        const bool branch_taken_0x27378c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x273790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27378Cu;
            // 0x273790: 0x460a6b40  add.s       $f13, $f13, $f10 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[10]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27378c) {
            ctx->pc = 0x2737A8u;
            goto label_2737a8;
        }
    }
    ctx->pc = 0x273794u;
    // 0x273794: 0x8e93000c  lw          $s3, 0xC($s4)
    ctx->pc = 0x273794u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x273798: 0x1260008f  beqz        $s3, . + 4 + (0x8F << 2)
    ctx->pc = 0x273798u;
    {
        const bool branch_taken_0x273798 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x273798) {
            ctx->pc = 0x2739D8u;
            goto label_2739d8;
        }
    }
    ctx->pc = 0x2737A0u;
    // 0x2737a0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2737A0u;
    {
        const bool branch_taken_0x2737a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2737A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2737A0u;
            // 0x2737a4: 0xc66a000c  lwc1        $f10, 0xC($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2737a0) {
            ctx->pc = 0x273830u;
            goto label_273830;
        }
    }
    ctx->pc = 0x2737A8u;
label_2737a8:
    // 0x2737a8: 0xc4aa006c  lwc1        $f10, 0x6C($a1)
    ctx->pc = 0x2737a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2737ac: 0x460a6836  c.le.s      $f13, $f10
    ctx->pc = 0x2737acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2737b0: 0x45000089  bc1f        . + 4 + (0x89 << 2)
    ctx->pc = 0x2737B0u;
    {
        const bool branch_taken_0x2737b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2737b0) {
            ctx->pc = 0x2739D8u;
            goto label_2739d8;
        }
    }
    ctx->pc = 0x2737B8u;
    // 0x2737b8: 0x1aa0000d  blez        $s5, . + 4 + (0xD << 2)
    ctx->pc = 0x2737B8u;
    {
        const bool branch_taken_0x2737b8 = (GPR_S32(ctx, 21) <= 0);
        if (branch_taken_0x2737b8) {
            ctx->pc = 0x2737F0u;
            goto label_2737f0;
        }
    }
    ctx->pc = 0x2737C0u;
    // 0x2737c0: 0x16d8821  addu        $s1, $t3, $t5
    ctx->pc = 0x2737c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x2737c4: 0x271082a  slt         $at, $s3, $s1
    ctx->pc = 0x2737c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2737c8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2737C8u;
    {
        const bool branch_taken_0x2737c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2737c8) {
            ctx->pc = 0x2737D8u;
            goto label_2737d8;
        }
    }
    ctx->pc = 0x2737D0u;
    // 0x2737d0: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x2737d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2737d4: 0x0  nop
    ctx->pc = 0x2737d4u;
    // NOP
label_2737d8:
    // 0x2737d8: 0x16d8023  subu        $s0, $t3, $t5
    ctx->pc = 0x2737d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x2737dc: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2737DCu;
    {
        const bool branch_taken_0x2737dc = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2737dc) {
            ctx->pc = 0x2737F8u;
            goto label_2737f8;
        }
    }
    ctx->pc = 0x2737E4u;
    // 0x2737e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2737E4u;
    {
        const bool branch_taken_0x2737e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2737E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2737E4u;
            // 0x2737e8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2737e4) {
            ctx->pc = 0x2737F8u;
            goto label_2737f8;
        }
    }
    ctx->pc = 0x2737ECu;
    // 0x2737ec: 0x0  nop
    ctx->pc = 0x2737ecu;
    // NOP
label_2737f0:
    // 0x2737f0: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x2737f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2737f4: 0x0  nop
    ctx->pc = 0x2737f4u;
    // NOP
label_2737f8:
    // 0x2737f8: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x2737F8u;
    {
        const bool branch_taken_0x2737f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2737FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2737F8u;
            // 0x2737fc: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2737f8) {
            ctx->pc = 0x2739C8u;
            goto label_2739c8;
        }
    }
    ctx->pc = 0x273800u;
label_273800:
    // 0x273800: 0x8c94000c  lw          $s4, 0xC($a0)
    ctx->pc = 0x273800u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x273804: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x273804u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x273808: 0x271082a  slt         $at, $s3, $s1
    ctx->pc = 0x273808u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x27380c: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x27380Cu;
    {
        const bool branch_taken_0x27380c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x273810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27380Cu;
            // 0x273810: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27380c) {
            ctx->pc = 0x27382Cu;
            goto label_27382c;
        }
    }
    ctx->pc = 0x273814u;
    // 0x273814: 0x8e930008  lw          $s3, 0x8($s4)
    ctx->pc = 0x273814u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x273818: 0x11a080  sll         $s4, $s1, 2
    ctx->pc = 0x273818u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x27381c: 0x2749821  addu        $s3, $s3, $s4
    ctx->pc = 0x27381cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x273820: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x273820u;
    {
        const bool branch_taken_0x273820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273820u;
            // 0x273824: 0x8e730000  lw          $s3, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273820) {
            ctx->pc = 0x27382Cu;
            goto label_27382c;
        }
    }
    ctx->pc = 0x273828u;
    // 0x273828: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x273828u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27382c:
    // 0x27382c: 0xc66a000c  lwc1        $f10, 0xC($s3)
    ctx->pc = 0x27382cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_273830:
    // 0x273830: 0x8cf30004  lw          $s3, 0x4($a3)
    ctx->pc = 0x273830u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x273834: 0x46095441  sub.s       $f17, $f10, $f9
    ctx->pc = 0x273834u;
    ctx->f[17] = FPU_SUB_S(ctx->f[10], ctx->f[9]);
    // 0x273838: 0x12f082a  slt         $at, $t1, $t7
    ctx->pc = 0x273838u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x27383c: 0x2639823  subu        $s3, $s3, $v1
    ctx->pc = 0x27383cu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x273840: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x273840u;
    {
        const bool branch_taken_0x273840 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x273844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273840u;
            // 0x273844: 0x2339821  addu        $s3, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273840) {
            ctx->pc = 0x2738A0u;
            goto label_2738a0;
        }
    }
    ctx->pc = 0x273848u;
    // 0x273848: 0xc650001c  lwc1        $f16, 0x1C($s2)
    ctx->pc = 0x273848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x27384c: 0x46088034  c.lt.s      $f16, $f8
    ctx->pc = 0x27384cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[16], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273850: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x273850u;
    {
        const bool branch_taken_0x273850 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x273850) {
            ctx->pc = 0x273860u;
            goto label_273860;
        }
    }
    ctx->pc = 0x273858u;
    // 0x273858: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x273858u;
    {
        const bool branch_taken_0x273858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27385Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273858u;
            // 0x27385c: 0x46104400  add.s       $f16, $f8, $f16 (Delay Slot)
        ctx->f[16] = FPU_ADD_S(ctx->f[8], ctx->f[16]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x273858) {
            ctx->pc = 0x273868u;
            goto label_273868;
        }
    }
    ctx->pc = 0x273860u;
label_273860:
    // 0x273860: 0x46004406  mov.s       $f16, $f8
    ctx->pc = 0x273860u;
    ctx->f[16] = FPU_MOV_S(ctx->f[8]);
    // 0x273864: 0x46104400  add.s       $f16, $f8, $f16
    ctx->pc = 0x273864u;
    ctx->f[16] = FPU_ADD_S(ctx->f[8], ctx->f[16]);
label_273868:
    // 0x273868: 0x46078036  c.le.s      $f16, $f7
    ctx->pc = 0x273868u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[16], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27386c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x27386Cu;
    {
        const bool branch_taken_0x27386c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27386c) {
            ctx->pc = 0x273890u;
            goto label_273890;
        }
    }
    ctx->pc = 0x273874u;
    // 0x273874: 0x0  nop
    ctx->pc = 0x273874u;
    // NOP
    // 0x273878: 0x0  nop
    ctx->pc = 0x273878u;
    // NOP
    // 0x27387c: 0x46103403  div.s       $f16, $f6, $f16
    ctx->pc = 0x27387cu;
    if (ctx->f[16] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[16] = copysignf(INFINITY, ctx->f[6] * 0.0f); } else ctx->f[16] = ctx->f[6] / ctx->f[16];
    // 0x273880: 0x0  nop
    ctx->pc = 0x273880u;
    // NOP
    // 0x273884: 0x0  nop
    ctx->pc = 0x273884u;
    // NOP
    // 0x273888: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x273888u;
    {
        const bool branch_taken_0x273888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273888) {
            ctx->pc = 0x2738A8u;
            goto label_2738a8;
        }
    }
    ctx->pc = 0x273890u;
label_273890:
    // 0x273890: 0x448c8000  mtc1        $t4, $f16
    ctx->pc = 0x273890u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x273894: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x273894u;
    {
        const bool branch_taken_0x273894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273894) {
            ctx->pc = 0x2738A8u;
            goto label_2738a8;
        }
    }
    ctx->pc = 0x27389Cu;
    // 0x27389c: 0x0  nop
    ctx->pc = 0x27389cu;
    // NOP
label_2738a0:
    // 0x2738a0: 0x46005c06  mov.s       $f16, $f11
    ctx->pc = 0x2738a0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[11]);
    // 0x2738a4: 0x0  nop
    ctx->pc = 0x2738a4u;
    // NOP
label_2738a8:
    // 0x2738a8: 0x46108c42  mul.s       $f17, $f17, $f16
    ctx->pc = 0x2738a8u;
    ctx->f[17] = FPU_MUL_S(ctx->f[17], ctx->f[16]);
    // 0x2738ac: 0x46078836  c.le.s      $f17, $f7
    ctx->pc = 0x2738acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[17], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2738b0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2738B0u;
    {
        const bool branch_taken_0x2738b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2738b0) {
            ctx->pc = 0x2738C0u;
            goto label_2738c0;
        }
    }
    ctx->pc = 0x2738B8u;
    // 0x2738b8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2738B8u;
    {
        const bool branch_taken_0x2738b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2738BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2738B8u;
            // 0x2738bc: 0x46003d06  mov.s       $f20, $f7 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2738b8) {
            ctx->pc = 0x2738E8u;
            goto label_2738e8;
        }
    }
    ctx->pc = 0x2738C0u;
label_2738c0:
    // 0x2738c0: 0x46118c42  mul.s       $f17, $f17, $f17
    ctx->pc = 0x2738c0u;
    ctx->f[17] = FPU_MUL_S(ctx->f[17], ctx->f[17]);
    // 0x2738c4: 0x46118cc2  mul.s       $f19, $f17, $f17
    ctx->pc = 0x2738c4u;
    ctx->f[19] = FPU_MUL_S(ctx->f[17], ctx->f[17]);
    // 0x2738c8: 0x4611201a  mula.s      $f4, $f17
    ctx->pc = 0x2738c8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[17]);
    // 0x2738cc: 0x46139c42  mul.s       $f17, $f19, $f19
    ctx->pc = 0x2738ccu;
    ctx->f[17] = FPU_MUL_S(ctx->f[19], ctx->f[19]);
    // 0x2738d0: 0x46112c82  mul.s       $f18, $f5, $f17
    ctx->pc = 0x2738d0u;
    ctx->f[18] = FPU_MUL_S(ctx->f[5], ctx->f[17]);
    // 0x2738d4: 0x46131c5c  madd.s      $f17, $f3, $f19
    ctx->pc = 0x2738d4u;
    ctx->f[17] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[19]));
    // 0x2738d8: 0xc6500014  lwc1        $f16, 0x14($s2)
    ctx->pc = 0x2738d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x2738dc: 0x46119440  add.s       $f17, $f18, $f17
    ctx->pc = 0x2738dcu;
    ctx->f[17] = FPU_ADD_S(ctx->f[18], ctx->f[17]);
    // 0x2738e0: 0x46108d02  mul.s       $f20, $f17, $f16
    ctx->pc = 0x2738e0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[17], ctx->f[16]);
    // 0x2738e4: 0x0  nop
    ctx->pc = 0x2738e4u;
    // NOP
label_2738e8:
    // 0x2738e8: 0x739823  subu        $s3, $v1, $s3
    ctx->pc = 0x2738e8u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2738ec: 0x44938000  mtc1        $s3, $f16
    ctx->pc = 0x2738ecu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x2738f0: 0x12f082a  slt         $at, $t1, $t7
    ctx->pc = 0x2738f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x2738f4: 0x46808420  cvt.s.w     $f16, $f16
    ctx->pc = 0x2738f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[16], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x2738f8: 0x46008405  abs.s       $f16, $f16
    ctx->pc = 0x2738f8u;
    ctx->f[16] = FPU_ABS_S(ctx->f[16]);
    // 0x2738fc: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2738FCu;
    {
        const bool branch_taken_0x2738fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x273900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2738FCu;
            // 0x273900: 0x460c8402  mul.s       $f16, $f16, $f12 (Delay Slot)
        ctx->f[16] = FPU_MUL_S(ctx->f[16], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2738fc) {
            ctx->pc = 0x273920u;
            goto label_273920;
        }
    }
    ctx->pc = 0x273904u;
    // 0x273904: 0x46018481  sub.s       $f18, $f16, $f1
    ctx->pc = 0x273904u;
    ctx->f[18] = FPU_SUB_S(ctx->f[16], ctx->f[1]);
    // 0x273908: 0x46009482  mul.s       $f18, $f18, $f0
    ctx->pc = 0x273908u;
    ctx->f[18] = FPU_MUL_S(ctx->f[18], ctx->f[0]);
    // 0x27390c: 0x46079034  c.lt.s      $f18, $f7
    ctx->pc = 0x27390cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[18], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273910: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x273910u;
    {
        const bool branch_taken_0x273910 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x273910) {
            ctx->pc = 0x273928u;
            goto label_273928;
        }
    }
    ctx->pc = 0x273918u;
    // 0x273918: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x273918u;
    {
        const bool branch_taken_0x273918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27391Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273918u;
            // 0x27391c: 0x46003c06  mov.s       $f16, $f7 (Delay Slot)
        ctx->f[16] = FPU_MOV_S(ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x273918) {
            ctx->pc = 0x273940u;
            goto label_273940;
        }
    }
    ctx->pc = 0x273920u;
label_273920:
    // 0x273920: 0x46108482  mul.s       $f18, $f16, $f16
    ctx->pc = 0x273920u;
    ctx->f[18] = FPU_MUL_S(ctx->f[16], ctx->f[16]);
    // 0x273924: 0x0  nop
    ctx->pc = 0x273924u;
    // NOP
label_273928:
    // 0x273928: 0x46129442  mul.s       $f17, $f18, $f18
    ctx->pc = 0x273928u;
    ctx->f[17] = FPU_MUL_S(ctx->f[18], ctx->f[18]);
    // 0x27392c: 0x46119442  mul.s       $f17, $f18, $f17
    ctx->pc = 0x27392cu;
    ctx->f[17] = FPU_MUL_S(ctx->f[18], ctx->f[17]);
    // 0x273930: 0xc6500010  lwc1        $f16, 0x10($s2)
    ctx->pc = 0x273930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x273934: 0x46119442  mul.s       $f17, $f18, $f17
    ctx->pc = 0x273934u;
    ctx->f[17] = FPU_MUL_S(ctx->f[18], ctx->f[17]);
    // 0x273938: 0x46108c02  mul.s       $f16, $f17, $f16
    ctx->pc = 0x273938u;
    ctx->f[16] = FPU_MUL_S(ctx->f[17], ctx->f[16]);
    // 0x27393c: 0x0  nop
    ctx->pc = 0x27393cu;
    // NOP
label_273940:
    // 0x273940: 0x4610a480  add.s       $f18, $f20, $f16
    ctx->pc = 0x273940u;
    ctx->f[18] = FPU_ADD_S(ctx->f[20], ctx->f[16]);
    // 0x273944: 0x4491a000  mtc1        $s1, $f20
    ctx->pc = 0x273944u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x273948: 0x460f5441  sub.s       $f17, $f10, $f15
    ctx->pc = 0x273948u;
    ctx->f[17] = FPU_SUB_S(ctx->f[10], ctx->f[15]);
    // 0x27394c: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x27394cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x273950: 0x460ca502  mul.s       $f20, $f20, $f12
    ctx->pc = 0x273950u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    // 0x273954: 0xc6530008  lwc1        $f19, 0x8($s2)
    ctx->pc = 0x273954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x273958: 0x4614ad02  mul.s       $f20, $f21, $f20
    ctx->pc = 0x273958u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x27395c: 0x46149cc2  mul.s       $f19, $f19, $f20
    ctx->pc = 0x27395cu;
    ctx->f[19] = FPU_MUL_S(ctx->f[19], ctx->f[20]);
    // 0x273960: 0xc650000c  lwc1        $f16, 0xC($s2)
    ctx->pc = 0x273960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x273964: 0x460b8c42  mul.s       $f17, $f17, $f11
    ctx->pc = 0x273964u;
    ctx->f[17] = FPU_MUL_S(ctx->f[17], ctx->f[11]);
    // 0x273968: 0x46129818  adda.s      $f19, $f18
    ctx->pc = 0x273968u;
    ctx->f[31] = FPU_ADD_S(ctx->f[19], ctx->f[18]);
    // 0x27396c: 0x46108c1c  madd.s      $f16, $f17, $f16
    ctx->pc = 0x27396cu;
    ctx->f[16] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[17], ctx->f[16]));
    // 0x273970: 0x46106c40  add.s       $f17, $f13, $f16
    ctx->pc = 0x273970u;
    ctx->f[17] = FPU_ADD_S(ctx->f[13], ctx->f[16]);
    // 0x273974: 0x460e8834  c.lt.s      $f17, $f14
    ctx->pc = 0x273974u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[17], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273978: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x273978u;
    {
        const bool branch_taken_0x273978 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x273978) {
            ctx->pc = 0x2739C0u;
            goto label_2739c0;
        }
    }
    ctx->pc = 0x273980u;
    // 0x273980: 0xc4b0006c  lwc1        $f16, 0x6C($a1)
    ctx->pc = 0x273980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x273984: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x273984u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273988: 0x46108834  c.lt.s      $f17, $f16
    ctx->pc = 0x273988u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[17], ctx->f[16])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27398c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x27398Cu;
    {
        const bool branch_taken_0x27398c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x273990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27398Cu;
            // 0x273990: 0x46008b86  mov.s       $f14, $f17 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[17]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27398c) {
            ctx->pc = 0x2739C0u;
            goto label_2739c0;
        }
    }
    ctx->pc = 0x273994u;
    // 0x273994: 0xe4b1006c  swc1        $f17, 0x6C($a1)
    ctx->pc = 0x273994u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 108), bits); }
    // 0x273998: 0x22d9823  subu        $s3, $s1, $t5
    ctx->pc = 0x273998u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 13)));
    // 0x27399c: 0xaca60060  sw          $a2, 0x60($a1)
    ctx->pc = 0x27399cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 6));
    // 0x2739a0: 0x270082a  slt         $at, $s3, $s0
    ctx->pc = 0x2739a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2739a4: 0xe4af0064  swc1        $f15, 0x64($a1)
    ctx->pc = 0x2739a4u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 100), bits); }
    // 0x2739a8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2739A8u;
    {
        const bool branch_taken_0x2739a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2739ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2739A8u;
            // 0x2739ac: 0xe4aa0068  swc1        $f10, 0x68($a1) (Delay Slot)
        { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2739a8) {
            ctx->pc = 0x2739C0u;
            goto label_2739c0;
        }
    }
    ctx->pc = 0x2739B0u;
    // 0x2739b0: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2739B0u;
    {
        const bool branch_taken_0x2739b0 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x2739B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2739B0u;
            // 0x2739b4: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2739b0) {
            ctx->pc = 0x2739C0u;
            goto label_2739c0;
        }
    }
    ctx->pc = 0x2739B8u;
    // 0x2739b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2739b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2739bc: 0x0  nop
    ctx->pc = 0x2739bcu;
    // NOP
label_2739c0:
    // 0x2739c0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2739c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2739c4: 0x0  nop
    ctx->pc = 0x2739c4u;
    // NOP
label_2739c8:
    // 0x2739c8: 0x230082a  slt         $at, $s1, $s0
    ctx->pc = 0x2739c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2739cc: 0x1020ff8c  beqz        $at, . + 4 + (-0x74 << 2)
    ctx->pc = 0x2739CCu;
    {
        const bool branch_taken_0x2739cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2739cc) {
            ctx->pc = 0x273800u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_273800;
        }
    }
    ctx->pc = 0x2739D4u;
    // 0x2739d4: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x2739d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
label_2739d8:
    // 0x2739d8: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x2739d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2739dc: 0x8ced0000  lw          $t5, 0x0($a3)
    ctx->pc = 0x2739dcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2739e0: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x2739e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2739e4: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x2739e4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x2739e8: 0xc5ad000c  lwc1        $f13, 0xC($t5)
    ctx->pc = 0x2739e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2739ec: 0x2634ffff  addiu       $s4, $s1, -0x1
    ctx->pc = 0x2739ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2739f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2739F0u;
    {
        const bool branch_taken_0x2739f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2739F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2739F0u;
            // 0x2739f4: 0x149880  sll         $s3, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2739f0) {
            ctx->pc = 0x273A08u;
            goto label_273a08;
        }
    }
    ctx->pc = 0x2739F8u;
label_2739f8:
    // 0x2739f8: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x2739f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x2739fc: 0x2673fffc  addiu       $s3, $s3, -0x4
    ctx->pc = 0x2739fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x273a00: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x273a00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x273a04: 0x0  nop
    ctx->pc = 0x273a04u;
    // NOP
label_273a08:
    // 0x273a08: 0x680000b  bltz        $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x273A08u;
    {
        const bool branch_taken_0x273a08 = (GPR_S32(ctx, 20) < 0);
        if (branch_taken_0x273a08) {
            ctx->pc = 0x273A38u;
            goto label_273a38;
        }
    }
    ctx->pc = 0x273A10u;
    // 0x273a10: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x273a10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x273a14: 0x2338821  addu        $s1, $s1, $s3
    ctx->pc = 0x273a14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x273a18: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x273a18u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x273a1c: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x273A1Cu;
    {
        const bool branch_taken_0x273a1c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x273a1c) {
            ctx->pc = 0x273A38u;
            goto label_273a38;
        }
    }
    ctx->pc = 0x273A24u;
    // 0x273a24: 0xc64a000c  lwc1        $f10, 0xC($s2)
    ctx->pc = 0x273a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x273a28: 0x460d5034  c.lt.s      $f10, $f13
    ctx->pc = 0x273a28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273a2c: 0x4501fff2  bc1t        . + 4 + (-0xE << 2)
    ctx->pc = 0x273A2Cu;
    {
        const bool branch_taken_0x273a2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x273a2c) {
            ctx->pc = 0x2739F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2739f8;
        }
    }
    ctx->pc = 0x273A34u;
    // 0x273a34: 0x0  nop
    ctx->pc = 0x273a34u;
    // NOP
label_273a38:
    // 0x273a38: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x273a38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x273a3c: 0x149080  sll         $s2, $s4, 2
    ctx->pc = 0x273a3cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x273a40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x273a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x273a44: 0x2328821  addu        $s1, $s1, $s2
    ctx->pc = 0x273a44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x273a48: 0xae2d0004  sw          $t5, 0x4($s1)
    ctx->pc = 0x273a48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 13));
    // 0x273a4c: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x273a4cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x273a50: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x273a50u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x273a54: 0xae0d0000  sw          $t5, 0x0($s0)
    ctx->pc = 0x273a54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 13));
    // 0x273a58: 0x8ced0004  lw          $t5, 0x4($a3)
    ctx->pc = 0x273a58u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x273a5c: 0x6d682a  slt         $t5, $v1, $t5
    ctx->pc = 0x273a5cu;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x273a60: 0x15a0fed1  bnez        $t5, . + 4 + (-0x12F << 2)
    ctx->pc = 0x273A60u;
    {
        const bool branch_taken_0x273a60 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x273A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273A60u;
            // 0x273a64: 0x25ce0014  addiu       $t6, $t6, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273a60) {
            ctx->pc = 0x2735A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2735a8;
        }
    }
    ctx->pc = 0x273A68u;
label_273a68:
    // 0x273a68: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x273a68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x273a6c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x273a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x273a70: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x273a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x273a74: 0x18a0000a  blez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x273A74u;
    {
        const bool branch_taken_0x273a74 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x273a74) {
            ctx->pc = 0x273AA0u;
            goto label_273aa0;
        }
    }
    ctx->pc = 0x273A7Cu;
    // 0x273a7c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x273a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_273a80:
    // 0x273a80: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x273a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x273a84: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x273a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x273a88: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x273a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x273a8c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x273a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x273a90: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x273a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x273a94: 0x1ca0fffa  bgtz        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x273A94u;
    {
        const bool branch_taken_0x273a94 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x273a94) {
            ctx->pc = 0x273A80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_273a80;
        }
    }
    ctx->pc = 0x273A9Cu;
    // 0x273a9c: 0x0  nop
    ctx->pc = 0x273a9cu;
    // NOP
label_273aa0:
    // 0x273aa0: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x273aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x273aa4: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x273aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x273aa8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x273aa8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x273aac: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x273aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x273ab0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x273ab0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x273ab4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x273ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x273ab8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x273ab8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x273abc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x273abcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x273ac0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x273ac0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x273ac4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x273ac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x273ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x273AC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273AC8u;
            // 0x273acc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x273AD0u;
}
