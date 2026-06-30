#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00139590
// Address: 0x139590 - 0x139710
void sub_00139590_0x139590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139590_0x139590");
#endif

    ctx->pc = 0x139590u;

    // 0x139590: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x139590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x139594: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x139594u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139598: 0x0  nop
    ctx->pc = 0x139598u;
    // NOP
    // 0x13959c: 0x460c0102  mul.s       $f4, $f0, $f12
    ctx->pc = 0x13959cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1395a0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1395a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1395a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1395a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1395a8: 0x0  nop
    ctx->pc = 0x1395a8u;
    // NOP
    // 0x1395ac: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x1395acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1395b0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1395B0u;
    {
        const bool branch_taken_0x1395b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1395b0) {
            ctx->pc = 0x1395B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1395B0u;
            // 0x1395b4: 0x46002001  sub.s       $f0, $f4, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1395C8u;
            goto label_1395c8;
        }
    }
    ctx->pc = 0x1395B8u;
    // 0x1395b8: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1395b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1395bc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1395bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1395c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1395C0u;
    {
        const bool branch_taken_0x1395c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1395C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1395C0u;
            // 0x1395c4: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1395c0) {
            ctx->pc = 0x1395E0u;
            goto label_1395e0;
        }
    }
    ctx->pc = 0x1395C8u;
label_1395c8:
    // 0x1395c8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1395c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1395cc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1395ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1395d0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1395d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1395d4: 0x0  nop
    ctx->pc = 0x1395d4u;
    // NOP
    // 0x1395d8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1395d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1395dc: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1395dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1395e0:
    // 0x1395e0: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x1395e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x1395e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1395e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1395e8: 0x0  nop
    ctx->pc = 0x1395e8u;
    // NOP
    // 0x1395ec: 0x460d00c2  mul.s       $f3, $f0, $f13
    ctx->pc = 0x1395ecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x1395f0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1395f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1395f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1395f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1395f8: 0x0  nop
    ctx->pc = 0x1395f8u;
    // NOP
    // 0x1395fc: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1395fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x139600: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x139600u;
    {
        const bool branch_taken_0x139600 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x139604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139600u;
            // 0x139604: 0xa3848354  sb          $a0, -0x7CAC($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935380), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139600) {
            ctx->pc = 0x139618u;
            goto label_139618;
        }
    }
    ctx->pc = 0x139608u;
    // 0x139608: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x139608u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13960c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x13960cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x139610: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x139610u;
    {
        const bool branch_taken_0x139610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139610u;
            // 0x139614: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x139610) {
            ctx->pc = 0x139634u;
            goto label_139634;
        }
    }
    ctx->pc = 0x139618u;
label_139618:
    // 0x139618: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x139618u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x13961c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x13961cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x139620: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x139620u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x139624: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x139624u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x139628: 0x0  nop
    ctx->pc = 0x139628u;
    // NOP
    // 0x13962c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x13962cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x139630: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x139630u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_139634:
    // 0x139634: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x139634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x139638: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x139638u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13963c: 0x0  nop
    ctx->pc = 0x13963cu;
    // NOP
    // 0x139640: 0x460e0082  mul.s       $f2, $f0, $f14
    ctx->pc = 0x139640u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    // 0x139644: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x139644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x139648: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x139648u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13964c: 0x0  nop
    ctx->pc = 0x13964cu;
    // NOP
    // 0x139650: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x139650u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x139654: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x139654u;
    {
        const bool branch_taken_0x139654 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x139658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139654u;
            // 0x139658: 0xa3848355  sb          $a0, -0x7CAB($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935381), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139654) {
            ctx->pc = 0x13966Cu;
            goto label_13966c;
        }
    }
    ctx->pc = 0x13965Cu;
    // 0x13965c: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13965cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x139660: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x139660u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x139664: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x139664u;
    {
        const bool branch_taken_0x139664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139664u;
            // 0x139668: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x139664) {
            ctx->pc = 0x139688u;
            goto label_139688;
        }
    }
    ctx->pc = 0x13966Cu;
label_13966c:
    // 0x13966c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x13966cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x139670: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x139670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x139674: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x139674u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x139678: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x139678u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x13967c: 0x0  nop
    ctx->pc = 0x13967cu;
    // NOP
    // 0x139680: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x139680u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x139684: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x139684u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_139688:
    // 0x139688: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x139688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x13968c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13968cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139690: 0x0  nop
    ctx->pc = 0x139690u;
    // NOP
    // 0x139694: 0x460f0042  mul.s       $f1, $f0, $f15
    ctx->pc = 0x139694u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[15]);
    // 0x139698: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x139698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x13969c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13969cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1396a0: 0x0  nop
    ctx->pc = 0x1396a0u;
    // NOP
    // 0x1396a4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1396a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1396a8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1396A8u;
    {
        const bool branch_taken_0x1396a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1396ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1396A8u;
            // 0x1396ac: 0xa3848356  sb          $a0, -0x7CAA($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935382), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1396a8) {
            ctx->pc = 0x1396C0u;
            goto label_1396c0;
        }
    }
    ctx->pc = 0x1396B0u;
    // 0x1396b0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1396b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1396b4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1396b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1396b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1396B8u;
    {
        const bool branch_taken_0x1396b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1396BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1396B8u;
            // 0x1396bc: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1396b8) {
            ctx->pc = 0x1396DCu;
            goto label_1396dc;
        }
    }
    ctx->pc = 0x1396C0u;
label_1396c0:
    // 0x1396c0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1396c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1396c4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1396c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1396c8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1396c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1396cc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1396ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1396d0: 0x0  nop
    ctx->pc = 0x1396d0u;
    // NOP
    // 0x1396d4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1396d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1396d8: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1396d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1396dc:
    // 0x1396dc: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1396dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1396e0: 0xa3848357  sb          $a0, -0x7CA9($gp)
    ctx->pc = 0x1396e0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935383), (uint8_t)GPR_U32(ctx, 4));
    // 0x1396e4: 0xe4644a10  swc1        $f4, 0x4A10($v1)
    ctx->pc = 0x1396e4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 18960), bits); }
    // 0x1396e8: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1396e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1396ec: 0xe4634a14  swc1        $f3, 0x4A14($v1)
    ctx->pc = 0x1396ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 18964), bits); }
    // 0x1396f0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1396f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1396f4: 0xe4624a18  swc1        $f2, 0x4A18($v1)
    ctx->pc = 0x1396f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 18968), bits); }
    // 0x1396f8: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1396f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1396fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1396FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1396FCu;
            // 0x139700: 0xe4614a1c  swc1        $f1, 0x4A1C($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 18972), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x139704u;
    // 0x139704: 0x0  nop
    ctx->pc = 0x139704u;
    // NOP
    // 0x139708: 0x0  nop
    ctx->pc = 0x139708u;
    // NOP
    // 0x13970c: 0x0  nop
    ctx->pc = 0x13970cu;
    // NOP
}
