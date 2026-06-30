#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F23C0
// Address: 0x3f23c0 - 0x3f2470
void sub_003F23C0_0x3f23c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F23C0_0x3f23c0");
#endif

    ctx->pc = 0x3f23c0u;

    // 0x3f23c0: 0xc4810034  lwc1        $f1, 0x34($a0)
    ctx->pc = 0x3f23c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f23c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3f23c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f23c8: 0x0  nop
    ctx->pc = 0x3f23c8u;
    // NOP
    // 0x3f23cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3f23ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3f23d0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3F23D0u;
    {
        const bool branch_taken_0x3f23d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f23d0) {
            ctx->pc = 0x3F23D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F23D0u;
            // 0x3f23d4: 0x3c054f00  lui         $a1, 0x4F00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20224 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F23E0u;
            goto label_3f23e0;
        }
    }
    ctx->pc = 0x3F23D8u;
    // 0x3f23d8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x3f23d8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x3f23dc: 0x3c054f00  lui         $a1, 0x4F00
    ctx->pc = 0x3f23dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20224 << 16));
label_3f23e0:
    // 0x3f23e0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3f23e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3f23e4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3f23e4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f23e8: 0x0  nop
    ctx->pc = 0x3f23e8u;
    // NOP
    // 0x3f23ec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3f23ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3f23f0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3F23F0u;
    {
        const bool branch_taken_0x3f23f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3F23F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F23F0u;
            // 0x3f23f4: 0x8c676f10  lw          $a3, 0x6F10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f23f0) {
            ctx->pc = 0x3F2408u;
            goto label_3f2408;
        }
    }
    ctx->pc = 0x3F23F8u;
    // 0x3f23f8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f23f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3f23fc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3f23fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3f2400: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3F2400u;
    {
        const bool branch_taken_0x3f2400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2400u;
            // 0x3f2404: 0x53080  sll         $a2, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2400) {
            ctx->pc = 0x3F2424u;
            goto label_3f2424;
        }
    }
    ctx->pc = 0x3F2408u;
label_3f2408:
    // 0x3f2408: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3f2408u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3f240c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3f240cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3f2410: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f2410u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3f2414: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3f2414u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3f2418: 0x0  nop
    ctx->pc = 0x3f2418u;
    // NOP
    // 0x3f241c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3f241cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3f2420: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x3f2420u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3f2424:
    // 0x3f2424: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f2424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f2428: 0x8ce50074  lw          $a1, 0x74($a3)
    ctx->pc = 0x3f2428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 116)));
    // 0x3f242c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3f242cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3f2430: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3f2430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f2434: 0x8ca50054  lw          $a1, 0x54($a1)
    ctx->pc = 0x3f2434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x3f2438: 0x14a30008  bne         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3F2438u;
    {
        const bool branch_taken_0x3f2438 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f2438) {
            ctx->pc = 0x3F245Cu;
            goto label_3f245c;
        }
    }
    ctx->pc = 0x3F2440u;
    // 0x3f2440: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x3f2440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f2444: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3f2444u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f2448: 0x0  nop
    ctx->pc = 0x3f2448u;
    // NOP
    // 0x3f244c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3f244cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3f2450: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3F2450u;
    {
        const bool branch_taken_0x3f2450 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3F2454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2450u;
            // 0x3f2454: 0xe4810084  swc1        $f1, 0x84($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2450) {
            ctx->pc = 0x3F245Cu;
            goto label_3f245c;
        }
    }
    ctx->pc = 0x3F2458u;
    // 0x3f2458: 0xe4800084  swc1        $f0, 0x84($a0)
    ctx->pc = 0x3f2458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
label_3f245c:
    // 0x3f245c: 0x3e00008  jr          $ra
    ctx->pc = 0x3F245Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F2464u;
    // 0x3f2464: 0x0  nop
    ctx->pc = 0x3f2464u;
    // NOP
    // 0x3f2468: 0x0  nop
    ctx->pc = 0x3f2468u;
    // NOP
    // 0x3f246c: 0x0  nop
    ctx->pc = 0x3f246cu;
    // NOP
}
