#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002794E0
// Address: 0x2794e0 - 0x2796a0
void sub_002794E0_0x2794e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002794E0_0x2794e0");
#endif

    switch (ctx->pc) {
        case 0x27968cu: goto label_27968c;
        default: break;
    }

    ctx->pc = 0x2794e0u;

    // 0x2794e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2794e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2794e4: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2794e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2794e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2794e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2794ec: 0xac850030  sw          $a1, 0x30($a0)
    ctx->pc = 0x2794ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
    // 0x2794f0: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x2794f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x2794f4: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x2794f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2794f8: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x2794f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2794fc: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2794fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279500: 0xc462001c  lwc1        $f2, 0x1C($v1)
    ctx->pc = 0x279500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x279504: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x279504u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x279508: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x279508u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x27950c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27950cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x279510: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x279510u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x279514: 0x0  nop
    ctx->pc = 0x279514u;
    // NOP
    // 0x279518: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x279518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x27951c: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x27951cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x279520: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x279520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x279524: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x279524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x279528: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x279528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27952c: 0xc462001c  lwc1        $f2, 0x1C($v1)
    ctx->pc = 0x27952cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x279530: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x279530u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x279534: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x279534u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x279538: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x279538u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x27953c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x27953cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x279540: 0x0  nop
    ctx->pc = 0x279540u;
    // NOP
    // 0x279544: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x279544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x279548: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x279548u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x27954c: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x27954cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x279550: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x279550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x279554: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x279554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x279558: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x279558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27955c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x27955cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x279560: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x279560u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x279564: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x279564u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x279568: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x279568u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x27956c: 0x0  nop
    ctx->pc = 0x27956cu;
    // NOP
    // 0x279570: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x279570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x279574: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x279574u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x279578: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x279578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x27957c: 0xc4c20014  lwc1        $f2, 0x14($a2)
    ctx->pc = 0x27957cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x279580: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x279580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x279584: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x279584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279588: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x279588u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x27958c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27958cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x279590: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x279590u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x279594: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x279594u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x279598: 0x0  nop
    ctx->pc = 0x279598u;
    // NOP
    // 0x27959c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x27959cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2795a0: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x2795a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x2795a4: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x2795a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2795a8: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x2795a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2795ac: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x2795acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2795b0: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x2795b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2795b4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2795b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2795b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2795b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2795bc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2795bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2795c0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2795c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2795c4: 0x0  nop
    ctx->pc = 0x2795c4u;
    // NOP
    // 0x2795c8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2795c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2795cc: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x2795ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x2795d0: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x2795d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2795d4: 0xc4c20018  lwc1        $f2, 0x18($a2)
    ctx->pc = 0x2795d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2795d8: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x2795d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2795dc: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x2795dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2795e0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2795e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2795e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2795e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2795e8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2795e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2795ec: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2795ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2795f0: 0x0  nop
    ctx->pc = 0x2795f0u;
    // NOP
    // 0x2795f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2795f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2795f8: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x2795f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x2795fc: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x2795fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x279600: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x279600u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x279604: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x279604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x279608: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x279608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x27960c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x27960cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x279610: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x279610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x279614: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x279614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x279618: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x279618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x27961c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x27961cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x279620: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x279620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x279624: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x279624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x279628: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x279628u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x27962c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x27962cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x279630: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x279630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x279634: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x279634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x279638: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x279638u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x27963c: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x27963cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x279640: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x279640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x279644: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x279644u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x279648: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x279648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x27964c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x27964cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x279650: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x279650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x279654: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x279654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x279658: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x279658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x27965c: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x27965cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x279660: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x279660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x279664: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x279664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x279668: 0x8ca60020  lw          $a2, 0x20($a1)
    ctx->pc = 0x279668u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x27966c: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x27966cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x279670: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x279670u;
    {
        const bool branch_taken_0x279670 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x279674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279670u;
            // 0x279674: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279670) {
            ctx->pc = 0x27967Cu;
            goto label_27967c;
        }
    }
    ctx->pc = 0x279678u;
    // 0x279678: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x279678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27967c:
    // 0x27967c: 0xac820034  sw          $v0, 0x34($a0)
    ctx->pc = 0x27967cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
    // 0x279680: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x279680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x279684: 0xc09e1f8  jal         func_2787E0
    ctx->pc = 0x279684u;
    SET_GPR_U32(ctx, 31, 0x27968Cu);
    ctx->pc = 0x279688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279684u;
            // 0x279688: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2787E0u;
    if (runtime->hasFunction(0x2787E0u)) {
        auto targetFn = runtime->lookupFunction(0x2787E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27968Cu; }
        if (ctx->pc != 0x27968Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002787E0_0x2787e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27968Cu; }
        if (ctx->pc != 0x27968Cu) { return; }
    }
    ctx->pc = 0x27968Cu;
label_27968c:
    // 0x27968c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27968cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279690: 0x3e00008  jr          $ra
    ctx->pc = 0x279690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279690u;
            // 0x279694: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x279698u;
    // 0x279698: 0x0  nop
    ctx->pc = 0x279698u;
    // NOP
    // 0x27969c: 0x0  nop
    ctx->pc = 0x27969cu;
    // NOP
}
