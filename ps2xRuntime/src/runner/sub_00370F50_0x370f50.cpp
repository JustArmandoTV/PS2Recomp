#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00370F50
// Address: 0x370f50 - 0x370fd0
void sub_00370F50_0x370f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370F50_0x370f50");
#endif

    ctx->pc = 0x370f50u;

    // 0x370f50: 0xc4810060  lwc1        $f1, 0x60($a0)
    ctx->pc = 0x370f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370f54: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x370f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x370f58: 0xc4800058  lwc1        $f0, 0x58($a0)
    ctx->pc = 0x370f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370f5c: 0x24860058  addiu       $a2, $a0, 0x58
    ctx->pc = 0x370f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
    // 0x370f60: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x370f60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x370f64: 0xe4800058  swc1        $f0, 0x58($a0)
    ctx->pc = 0x370f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x370f68: 0x8c636050  lw          $v1, 0x6050($v1)
    ctx->pc = 0x370f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24656)));
    // 0x370f6c: 0xc4800058  lwc1        $f0, 0x58($a0)
    ctx->pc = 0x370f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370f70: 0x8c63008c  lw          $v1, 0x8C($v1)
    ctx->pc = 0x370f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x370f74: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x370f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370f78: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x370f78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x370f7c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x370F7Cu;
    {
        const bool branch_taken_0x370f7c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x370F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x370F7Cu;
            // 0x370f80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370f7c) {
            ctx->pc = 0x370F88u;
            goto label_370f88;
        }
    }
    ctx->pc = 0x370F84u;
    // 0x370f84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x370f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_370f88:
    // 0x370f88: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x370F88u;
    {
        const bool branch_taken_0x370f88 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x370f88) {
            ctx->pc = 0x370F8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x370F88u;
            // 0x370f8c: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x370F9Cu;
            goto label_370f9c;
        }
    }
    ctx->pc = 0x370F90u;
    // 0x370f90: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x370f90u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x370f94: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x370F94u;
    {
        const bool branch_taken_0x370f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x370F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x370F94u;
            // 0x370f98: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x370f94) {
            ctx->pc = 0x370FB4u;
            goto label_370fb4;
        }
    }
    ctx->pc = 0x370F9Cu;
label_370f9c:
    // 0x370f9c: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x370f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x370fa0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x370fa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x370fa4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x370fa4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x370fa8: 0x0  nop
    ctx->pc = 0x370fa8u;
    // NOP
    // 0x370fac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x370facu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x370fb0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x370fb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_370fb4:
    // 0x370fb4: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x370fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370fb8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x370fb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x370fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x370FBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x370FBCu;
            // 0x370fc0: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x370FC4u;
    // 0x370fc4: 0x0  nop
    ctx->pc = 0x370fc4u;
    // NOP
    // 0x370fc8: 0x0  nop
    ctx->pc = 0x370fc8u;
    // NOP
    // 0x370fcc: 0x0  nop
    ctx->pc = 0x370fccu;
    // NOP
}
