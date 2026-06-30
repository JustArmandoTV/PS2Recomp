#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00131DD0
// Address: 0x131dd0 - 0x131e70
void sub_00131DD0_0x131dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131DD0_0x131dd0");
#endif

    ctx->pc = 0x131dd0u;

    // 0x131dd0: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x131dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x131dd4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x131dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x131dd8: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x131dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x131ddc: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x131ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131de0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x131de0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x131de4: 0x4604201e  madda.s     $f4, $f4
    ctx->pc = 0x131de4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x131de8: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x131de8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x131dec: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x131decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131df0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x131df0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131df4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x131df4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x131df8: 0x4601089c  madd.s      $f2, $f1, $f1
    ctx->pc = 0x131df8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x131dfc: 0x46020043  div.s       $f1, $f0, $f2
    ctx->pc = 0x131dfcu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[2];
    // 0x131e00: 0x0  nop
    ctx->pc = 0x131e00u;
    // NOP
    // 0x131e04: 0x0  nop
    ctx->pc = 0x131e04u;
    // NOP
    // 0x131e08: 0x46021832  c.eq.s      $f3, $f2
    ctx->pc = 0x131e08u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131e0c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x131E0Cu;
    {
        const bool branch_taken_0x131e0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x131e0c) {
            ctx->pc = 0x131E10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x131E0Cu;
            // 0x131e10: 0x46012002  mul.s       $f0, $f4, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x131E2Cu;
            goto label_131e2c;
        }
    }
    ctx->pc = 0x131E14u;
    // 0x131e14: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x131e14u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x131e18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x131e18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131e1c: 0xe4830004  swc1        $f3, 0x4($a0)
    ctx->pc = 0x131e1cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x131e20: 0xe4830008  swc1        $f3, 0x8($a0)
    ctx->pc = 0x131e20u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x131e24: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x131E24u;
    {
        const bool branch_taken_0x131e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131E24u;
            // 0x131e28: 0xe483000c  swc1        $f3, 0xC($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x131e24) {
            ctx->pc = 0x131E5Cu;
            goto label_131e5c;
        }
    }
    ctx->pc = 0x131E2Cu;
label_131e2c:
    // 0x131e2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x131e2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131e30: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x131e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x131e34: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x131e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131e38: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x131e38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x131e3c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x131e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x131e40: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x131e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131e44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x131e44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x131e48: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x131e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x131e4c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x131e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131e50: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x131e50u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x131e54: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x131e54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x131e58: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x131e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_131e5c:
    // 0x131e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x131E5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x131E64u;
    // 0x131e64: 0x0  nop
    ctx->pc = 0x131e64u;
    // NOP
    // 0x131e68: 0x0  nop
    ctx->pc = 0x131e68u;
    // NOP
    // 0x131e6c: 0x0  nop
    ctx->pc = 0x131e6cu;
    // NOP
}
