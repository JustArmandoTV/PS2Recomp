#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00139780
// Address: 0x139780 - 0x1398e0
void sub_00139780_0x139780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139780_0x139780");
#endif

    ctx->pc = 0x139780u;

    // 0x139780: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x139780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x139784: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x139784u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139788: 0x0  nop
    ctx->pc = 0x139788u;
    // NOP
    // 0x13978c: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x13978cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x139790: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x139790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x139794: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x139794u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139798: 0x0  nop
    ctx->pc = 0x139798u;
    // NOP
    // 0x13979c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13979cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1397a0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1397A0u;
    {
        const bool branch_taken_0x1397a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1397a0) {
            ctx->pc = 0x1397A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1397A0u;
            // 0x1397a4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1397B8u;
            goto label_1397b8;
        }
    }
    ctx->pc = 0x1397A8u;
    // 0x1397a8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1397a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1397ac: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1397acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1397b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1397B0u;
    {
        const bool branch_taken_0x1397b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1397B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1397B0u;
            // 0x1397b4: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1397b0) {
            ctx->pc = 0x1397D0u;
            goto label_1397d0;
        }
    }
    ctx->pc = 0x1397B8u;
label_1397b8:
    // 0x1397b8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1397b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1397bc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1397bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1397c0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1397c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1397c4: 0x0  nop
    ctx->pc = 0x1397c4u;
    // NOP
    // 0x1397c8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1397c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1397cc: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1397ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1397d0:
    // 0x1397d0: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x1397d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x1397d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1397d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1397d8: 0x0  nop
    ctx->pc = 0x1397d8u;
    // NOP
    // 0x1397dc: 0x460d0042  mul.s       $f1, $f0, $f13
    ctx->pc = 0x1397dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x1397e0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1397e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1397e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1397e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1397e8: 0x0  nop
    ctx->pc = 0x1397e8u;
    // NOP
    // 0x1397ec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1397ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1397f0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1397F0u;
    {
        const bool branch_taken_0x1397f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1397F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1397F0u;
            // 0x1397f4: 0xa384835c  sb          $a0, -0x7CA4($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935388), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1397f0) {
            ctx->pc = 0x139808u;
            goto label_139808;
        }
    }
    ctx->pc = 0x1397F8u;
    // 0x1397f8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1397f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1397fc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1397fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x139800: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x139800u;
    {
        const bool branch_taken_0x139800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139800u;
            // 0x139804: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x139800) {
            ctx->pc = 0x139824u;
            goto label_139824;
        }
    }
    ctx->pc = 0x139808u;
label_139808:
    // 0x139808: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x139808u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13980c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x13980cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x139810: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x139810u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x139814: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x139814u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x139818: 0x0  nop
    ctx->pc = 0x139818u;
    // NOP
    // 0x13981c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x13981cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x139820: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x139820u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_139824:
    // 0x139824: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x139824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x139828: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x139828u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13982c: 0x0  nop
    ctx->pc = 0x13982cu;
    // NOP
    // 0x139830: 0x460e0042  mul.s       $f1, $f0, $f14
    ctx->pc = 0x139830u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    // 0x139834: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x139834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x139838: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x139838u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13983c: 0x0  nop
    ctx->pc = 0x13983cu;
    // NOP
    // 0x139840: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x139840u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x139844: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x139844u;
    {
        const bool branch_taken_0x139844 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x139848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139844u;
            // 0x139848: 0xa384835d  sb          $a0, -0x7CA3($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935389), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139844) {
            ctx->pc = 0x13985Cu;
            goto label_13985c;
        }
    }
    ctx->pc = 0x13984Cu;
    // 0x13984c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13984cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x139850: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x139850u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x139854: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x139854u;
    {
        const bool branch_taken_0x139854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139854u;
            // 0x139858: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x139854) {
            ctx->pc = 0x139878u;
            goto label_139878;
        }
    }
    ctx->pc = 0x13985Cu;
label_13985c:
    // 0x13985c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13985cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x139860: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x139860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x139864: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x139864u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x139868: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x139868u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x13986c: 0x0  nop
    ctx->pc = 0x13986cu;
    // NOP
    // 0x139870: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x139870u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x139874: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x139874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_139878:
    // 0x139878: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x139878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x13987c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13987cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139880: 0x0  nop
    ctx->pc = 0x139880u;
    // NOP
    // 0x139884: 0x460f0042  mul.s       $f1, $f0, $f15
    ctx->pc = 0x139884u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[15]);
    // 0x139888: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x139888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x13988c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13988cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139890: 0x0  nop
    ctx->pc = 0x139890u;
    // NOP
    // 0x139894: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x139894u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x139898: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x139898u;
    {
        const bool branch_taken_0x139898 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13989Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139898u;
            // 0x13989c: 0xa384835e  sb          $a0, -0x7CA2($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935390), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139898) {
            ctx->pc = 0x1398B0u;
            goto label_1398b0;
        }
    }
    ctx->pc = 0x1398A0u;
    // 0x1398a0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1398a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1398a4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1398a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1398a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1398A8u;
    {
        const bool branch_taken_0x1398a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1398ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1398A8u;
            // 0x1398ac: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1398a8) {
            ctx->pc = 0x1398CCu;
            goto label_1398cc;
        }
    }
    ctx->pc = 0x1398B0u;
label_1398b0:
    // 0x1398b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1398b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1398b4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1398b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1398b8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1398b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1398bc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1398bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1398c0: 0x0  nop
    ctx->pc = 0x1398c0u;
    // NOP
    // 0x1398c4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1398c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1398c8: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1398c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1398cc:
    // 0x1398cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1398CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1398D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1398CCu;
            // 0x1398d0: 0xa384835f  sb          $a0, -0x7CA1($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935391), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1398D4u;
    // 0x1398d4: 0x0  nop
    ctx->pc = 0x1398d4u;
    // NOP
    // 0x1398d8: 0x0  nop
    ctx->pc = 0x1398d8u;
    // NOP
    // 0x1398dc: 0x0  nop
    ctx->pc = 0x1398dcu;
    // NOP
}
