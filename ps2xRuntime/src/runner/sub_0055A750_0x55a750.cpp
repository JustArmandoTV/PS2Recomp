#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0055A750
// Address: 0x55a750 - 0x55a870
void sub_0055A750_0x55a750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0055A750_0x55a750");
#endif

    ctx->pc = 0x55a750u;

    // 0x55a750: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x55a750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x55a754: 0x8c870058  lw          $a3, 0x58($a0)
    ctx->pc = 0x55a754u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x55a758: 0x8c658a08  lw          $a1, -0x75F8($v1)
    ctx->pc = 0x55a758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x55a75c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x55a75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x55a760: 0x10e30032  beq         $a3, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x55A760u;
    {
        const bool branch_taken_0x55a760 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x55A764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55A760u;
            // 0x55a764: 0xc4a40018  lwc1        $f4, 0x18($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x55a760) {
            ctx->pc = 0x55A82Cu;
            goto label_55a82c;
        }
    }
    ctx->pc = 0x55A768u;
    // 0x55a768: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x55a768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x55a76c: 0x50e60024  beql        $a3, $a2, . + 4 + (0x24 << 2)
    ctx->pc = 0x55A76Cu;
    {
        const bool branch_taken_0x55a76c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x55a76c) {
            ctx->pc = 0x55A770u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55A76Cu;
            // 0x55a770: 0xc481006c  lwc1        $f1, 0x6C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x55A800u;
            goto label_55a800;
        }
    }
    ctx->pc = 0x55A774u;
    // 0x55a774: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x55a774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x55a778: 0x50e50014  beql        $a3, $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x55A778u;
    {
        const bool branch_taken_0x55a778 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x55a778) {
            ctx->pc = 0x55A77Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55A778u;
            // 0x55a77c: 0xc4800084  lwc1        $f0, 0x84($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x55A7CCu;
            goto label_55a7cc;
        }
    }
    ctx->pc = 0x55A780u;
    // 0x55a780: 0x50e00003  beql        $a3, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x55A780u;
    {
        const bool branch_taken_0x55a780 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x55a780) {
            ctx->pc = 0x55A784u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55A780u;
            // 0x55a784: 0xc482006c  lwc1        $f2, 0x6C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x55A790u;
            goto label_55a790;
        }
    }
    ctx->pc = 0x55A788u;
    // 0x55a788: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x55A788u;
    {
        const bool branch_taken_0x55a788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x55a788) {
            ctx->pc = 0x55A860u;
            goto label_55a860;
        }
    }
    ctx->pc = 0x55A790u;
label_55a790:
    // 0x55a790: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x55a790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x55a794: 0xc4830070  lwc1        $f3, 0x70($a0)
    ctx->pc = 0x55a794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x55a798: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x55a798u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x55a79c: 0x0  nop
    ctx->pc = 0x55a79cu;
    // NOP
    // 0x55a7a0: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x55a7a0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x55a7a4: 0x4604185c  madd.s      $f1, $f3, $f4
    ctx->pc = 0x55a7a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x55a7a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55a7a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x55a7ac: 0x0  nop
    ctx->pc = 0x55a7acu;
    // NOP
    // 0x55a7b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x55a7b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x55a7b4: 0x4501002a  bc1t        . + 4 + (0x2A << 2)
    ctx->pc = 0x55A7B4u;
    {
        const bool branch_taken_0x55a7b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x55A7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55A7B4u;
            // 0x55a7b8: 0xe481006c  swc1        $f1, 0x6C($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x55a7b4) {
            ctx->pc = 0x55A860u;
            goto label_55a860;
        }
    }
    ctx->pc = 0x55A7BCu;
    // 0x55a7bc: 0xe480006c  swc1        $f0, 0x6C($a0)
    ctx->pc = 0x55a7bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
    // 0x55a7c0: 0xac850058  sw          $a1, 0x58($a0)
    ctx->pc = 0x55a7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 5));
    // 0x55a7c4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x55A7C4u;
    {
        const bool branch_taken_0x55a7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55A7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55A7C4u;
            // 0x55a7c8: 0xac800084  sw          $zero, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55a7c4) {
            ctx->pc = 0x55A860u;
            goto label_55a860;
        }
    }
    ctx->pc = 0x55A7CCu;
label_55a7cc:
    // 0x55a7cc: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x55a7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x55a7d0: 0x8c63f3b0  lw          $v1, -0xC50($v1)
    ctx->pc = 0x55a7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964144)));
    // 0x55a7d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x55a7d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x55a7d8: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x55a7d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x55a7dc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x55a7dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x55a7e0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x55a7e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x55a7e4: 0x0  nop
    ctx->pc = 0x55a7e4u;
    // NOP
    // 0x55a7e8: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x55a7e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x55a7ec: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x55A7ECu;
    {
        const bool branch_taken_0x55a7ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x55A7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55A7ECu;
            // 0x55a7f0: 0xac850084  sw          $a1, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55a7ec) {
            ctx->pc = 0x55A860u;
            goto label_55a860;
        }
    }
    ctx->pc = 0x55A7F4u;
    // 0x55a7f4: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x55a7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x55a7f8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x55A7F8u;
    {
        const bool branch_taken_0x55a7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55A7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55A7F8u;
            // 0x55a7fc: 0xac860058  sw          $a2, 0x58($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55a7f8) {
            ctx->pc = 0x55A860u;
            goto label_55a860;
        }
    }
    ctx->pc = 0x55A800u;
label_55a800:
    // 0x55a800: 0xc4820070  lwc1        $f2, 0x70($a0)
    ctx->pc = 0x55a800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x55a804: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x55a804u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x55a808: 0x0  nop
    ctx->pc = 0x55a808u;
    // NOP
    // 0x55a80c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x55a80cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x55a810: 0x4604105d  msub.s      $f1, $f2, $f4
    ctx->pc = 0x55a810u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x55a814: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x55a814u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x55a818: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x55A818u;
    {
        const bool branch_taken_0x55a818 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x55A81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55A818u;
            // 0x55a81c: 0xe481006c  swc1        $f1, 0x6C($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x55a818) {
            ctx->pc = 0x55A860u;
            goto label_55a860;
        }
    }
    ctx->pc = 0x55A820u;
    // 0x55a820: 0xe480006c  swc1        $f0, 0x6C($a0)
    ctx->pc = 0x55a820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
    // 0x55a824: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x55A824u;
    {
        const bool branch_taken_0x55a824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55A828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55A824u;
            // 0x55a828: 0xac830058  sw          $v1, 0x58($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55a824) {
            ctx->pc = 0x55A860u;
            goto label_55a860;
        }
    }
    ctx->pc = 0x55A82Cu;
label_55a82c:
    // 0x55a82c: 0xc4800084  lwc1        $f0, 0x84($a0)
    ctx->pc = 0x55a82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x55a830: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x55a830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x55a834: 0x8c63f3b0  lw          $v1, -0xC50($v1)
    ctx->pc = 0x55a834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964144)));
    // 0x55a838: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x55a838u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x55a83c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x55a83cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x55a840: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x55a840u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x55a844: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x55a844u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x55a848: 0x0  nop
    ctx->pc = 0x55a848u;
    // NOP
    // 0x55a84c: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x55a84cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x55a850: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x55A850u;
    {
        const bool branch_taken_0x55a850 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x55A854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55A850u;
            // 0x55a854: 0xac850084  sw          $a1, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55a850) {
            ctx->pc = 0x55A860u;
            goto label_55a860;
        }
    }
    ctx->pc = 0x55A858u;
    // 0x55a858: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x55a858u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x55a85c: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x55a85cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
label_55a860:
    // 0x55a860: 0x3e00008  jr          $ra
    ctx->pc = 0x55A860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55A868u;
    // 0x55a868: 0x0  nop
    ctx->pc = 0x55a868u;
    // NOP
    // 0x55a86c: 0x0  nop
    ctx->pc = 0x55a86cu;
    // NOP
}
