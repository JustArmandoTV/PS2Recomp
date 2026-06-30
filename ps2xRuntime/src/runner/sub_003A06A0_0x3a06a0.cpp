#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A06A0
// Address: 0x3a06a0 - 0x3a0740
void sub_003A06A0_0x3a06a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A06A0_0x3a06a0");
#endif

    ctx->pc = 0x3a06a0u;

    // 0x3a06a0: 0xc4810064  lwc1        $f1, 0x64($a0)
    ctx->pc = 0x3a06a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a06a4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3a06a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3a06a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a06a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a06ac: 0x0  nop
    ctx->pc = 0x3a06acu;
    // NOP
    // 0x3a06b0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3a06b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a06b4: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3A06B4u;
    {
        const bool branch_taken_0x3a06b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a06b4) {
            ctx->pc = 0x3A06B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A06B4u;
            // 0x3a06b8: 0xc4800068  lwc1        $f0, 0x68($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A06C4u;
            goto label_3a06c4;
        }
    }
    ctx->pc = 0x3A06BCu;
    // 0x3a06bc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3A06BCu;
    {
        const bool branch_taken_0x3a06bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A06C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A06BCu;
            // 0x3a06c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a06bc) {
            ctx->pc = 0x3A0734u;
            goto label_3a0734;
        }
    }
    ctx->pc = 0x3A06C4u;
label_3a06c4:
    // 0x3a06c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3a06c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a06c8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3A06C8u;
    {
        const bool branch_taken_0x3a06c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A06CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A06C8u;
            // 0x3a06cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a06c8) {
            ctx->pc = 0x3A06D4u;
            goto label_3a06d4;
        }
    }
    ctx->pc = 0x3A06D0u;
    // 0x3a06d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a06d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a06d4:
    // 0x3a06d4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3a06d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3a06d8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a06d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3a06dc: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x3a06dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x3a06e0: 0xc4800068  lwc1        $f0, 0x68($a0)
    ctx->pc = 0x3a06e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a06e4: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x3a06e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a06e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3a06e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3a06ec: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A06ECu;
    {
        const bool branch_taken_0x3a06ec = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x3A06F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A06ECu;
            // 0x3a06f0: 0xe4800068  swc1        $f0, 0x68($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a06ec) {
            ctx->pc = 0x3A0700u;
            goto label_3a0700;
        }
    }
    ctx->pc = 0x3A06F4u;
    // 0x3a06f4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3a06f4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a06f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A06F8u;
    {
        const bool branch_taken_0x3a06f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A06FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A06F8u;
            // 0x3a06fc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a06f8) {
            ctx->pc = 0x3A071Cu;
            goto label_3a071c;
        }
    }
    ctx->pc = 0x3A0700u;
label_3a0700:
    // 0x3a0700: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x3a0700u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x3a0704: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x3a0704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3a0708: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3a0708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a070c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a070cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a0710: 0x0  nop
    ctx->pc = 0x3a0710u;
    // NOP
    // 0x3a0714: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3a0714u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3a0718: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3a0718u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3a071c:
    // 0x3a071c: 0xc4800068  lwc1        $f0, 0x68($a0)
    ctx->pc = 0x3a071cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a0720: 0x5102b  sltu        $v0, $zero, $a1
    ctx->pc = 0x3a0720u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3a0724: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3a0724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3a0728: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3a0728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3a072c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3a072cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3a0730: 0xe4800068  swc1        $f0, 0x68($a0)
    ctx->pc = 0x3a0730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
label_3a0734:
    // 0x3a0734: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A073Cu;
    // 0x3a073c: 0x0  nop
    ctx->pc = 0x3a073cu;
    // NOP
}
