#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028E2E0
// Address: 0x28e2e0 - 0x28e900
void sub_0028E2E0_0x28e2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E2E0_0x28e2e0");
#endif

    switch (ctx->pc) {
        case 0x28e5f4u: goto label_28e5f4;
        default: break;
    }

    ctx->pc = 0x28e2e0u;

    // 0x28e2e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x28e2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x28e2e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28e2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x28e2e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x28e2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x28e2ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28e2ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e2f0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x28e2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x28e2f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28e2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e2f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28e2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x28e2fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28e2fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e300: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28e300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28e304: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28e304u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e308: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x28e308u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x28e30c: 0x2650001c  addiu       $s0, $s2, 0x1C
    ctx->pc = 0x28e30cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x28e310: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x28e310u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28e314: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x28e314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28e318: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x28e318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e31c: 0xc4840030  lwc1        $f4, 0x30($a0)
    ctx->pc = 0x28e31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28e320: 0x46026081  sub.s       $f2, $f12, $f2
    ctx->pc = 0x28e320u;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x28e324: 0x46011542  mul.s       $f21, $f2, $f1
    ctx->pc = 0x28e324u;
    ctx->f[21] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x28e328: 0xc4830020  lwc1        $f3, 0x20($a0)
    ctx->pc = 0x28e328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28e32c: 0x46041832  c.eq.s      $f3, $f4
    ctx->pc = 0x28e32cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28e330: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28E330u;
    {
        const bool branch_taken_0x28e330 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28E334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E330u;
            // 0x28e334: 0x46150501  sub.s       $f20, $f0, $f21 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e330) {
            ctx->pc = 0x28E33Cu;
            goto label_28e33c;
        }
    }
    ctx->pc = 0x28E338u;
    // 0x28e338: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28e338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e33c:
    // 0x28e33c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E33Cu;
    {
        const bool branch_taken_0x28e33c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28e33c) {
            ctx->pc = 0x28E340u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28E33Cu;
            // 0x28e340: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28E350u;
            goto label_28e350;
        }
    }
    ctx->pc = 0x28E344u;
    // 0x28e344: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28e344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e348: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28E348u;
    {
        const bool branch_taken_0x28e348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E348u;
            // 0x28e34c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e348) {
            ctx->pc = 0x28E368u;
            goto label_28e368;
        }
    }
    ctx->pc = 0x28E350u;
label_28e350:
    // 0x28e350: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28e350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28e354: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28e354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28e358: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28e358u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e35c: 0x0  nop
    ctx->pc = 0x28e35cu;
    // NOP
    // 0x28e360: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x28e360u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x28e364: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x28e364u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_28e368:
    // 0x28e368: 0x46041832  c.eq.s      $f3, $f4
    ctx->pc = 0x28e368u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28e36c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28e36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e370: 0x4604a81a  mula.s      $f21, $f4
    ctx->pc = 0x28e370u;
    ctx->f[31] = FPU_MUL_S(ctx->f[21], ctx->f[4]);
    // 0x28e374: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28E374u;
    {
        const bool branch_taken_0x28e374 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28E378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E374u;
            // 0x28e378: 0x4603a05c  madd.s      $f1, $f20, $f3 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e374) {
            ctx->pc = 0x28E380u;
            goto label_28e380;
        }
    }
    ctx->pc = 0x28E37Cu;
    // 0x28e37c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28e37cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e380:
    // 0x28e380: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E380u;
    {
        const bool branch_taken_0x28e380 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28e380) {
            ctx->pc = 0x28E384u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28E380u;
            // 0x28e384: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28E394u;
            goto label_28e394;
        }
    }
    ctx->pc = 0x28E388u;
    // 0x28e388: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28e388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e38c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28E38Cu;
    {
        const bool branch_taken_0x28e38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E38Cu;
            // 0x28e390: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e38c) {
            ctx->pc = 0x28E3ACu;
            goto label_28e3ac;
        }
    }
    ctx->pc = 0x28E394u;
label_28e394:
    // 0x28e394: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28e394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28e398: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28e398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28e39c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28e39cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e3a0: 0x0  nop
    ctx->pc = 0x28e3a0u;
    // NOP
    // 0x28e3a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28e3a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28e3a8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28e3a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28e3ac:
    // 0x28e3ac: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x28e3acu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28e3b0: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x28e3b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x28e3b4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x28e3b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x28e3b8: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x28e3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e3bc: 0xc6430024  lwc1        $f3, 0x24($s2)
    ctx->pc = 0x28e3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28e3c0: 0x46011832  c.eq.s      $f3, $f1
    ctx->pc = 0x28e3c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28e3c4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28E3C4u;
    {
        const bool branch_taken_0x28e3c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28E3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E3C4u;
            // 0x28e3c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e3c4) {
            ctx->pc = 0x28E3D0u;
            goto label_28e3d0;
        }
    }
    ctx->pc = 0x28E3CCu;
    // 0x28e3cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28e3ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e3d0:
    // 0x28e3d0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E3D0u;
    {
        const bool branch_taken_0x28e3d0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28e3d0) {
            ctx->pc = 0x28E3D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28E3D0u;
            // 0x28e3d4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28E3E4u;
            goto label_28e3e4;
        }
    }
    ctx->pc = 0x28E3D8u;
    // 0x28e3d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28e3d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e3dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28E3DCu;
    {
        const bool branch_taken_0x28e3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E3DCu;
            // 0x28e3e0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e3dc) {
            ctx->pc = 0x28E3FCu;
            goto label_28e3fc;
        }
    }
    ctx->pc = 0x28E3E4u;
label_28e3e4:
    // 0x28e3e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28e3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28e3e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28e3e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28e3ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28e3ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e3f0: 0x0  nop
    ctx->pc = 0x28e3f0u;
    // NOP
    // 0x28e3f4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x28e3f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x28e3f8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x28e3f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_28e3fc:
    // 0x28e3fc: 0x46011832  c.eq.s      $f3, $f1
    ctx->pc = 0x28e3fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28e400: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28e400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e404: 0x4601a81a  mula.s      $f21, $f1
    ctx->pc = 0x28e404u;
    ctx->f[31] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x28e408: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28E408u;
    {
        const bool branch_taken_0x28e408 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28E40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E408u;
            // 0x28e40c: 0x4603a05c  madd.s      $f1, $f20, $f3 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e408) {
            ctx->pc = 0x28E414u;
            goto label_28e414;
        }
    }
    ctx->pc = 0x28E410u;
    // 0x28e410: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28e410u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e414:
    // 0x28e414: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E414u;
    {
        const bool branch_taken_0x28e414 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28e414) {
            ctx->pc = 0x28E418u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28E414u;
            // 0x28e418: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28E428u;
            goto label_28e428;
        }
    }
    ctx->pc = 0x28E41Cu;
    // 0x28e41c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28e41cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e420: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28E420u;
    {
        const bool branch_taken_0x28e420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E420u;
            // 0x28e424: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e420) {
            ctx->pc = 0x28E440u;
            goto label_28e440;
        }
    }
    ctx->pc = 0x28E428u;
label_28e428:
    // 0x28e428: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28e428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28e42c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28e42cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28e430: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28e430u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e434: 0x0  nop
    ctx->pc = 0x28e434u;
    // NOP
    // 0x28e438: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28e438u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28e43c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28e43cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28e440:
    // 0x28e440: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x28e440u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28e444: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x28e444u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x28e448: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x28e448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x28e44c: 0xc6410038  lwc1        $f1, 0x38($s2)
    ctx->pc = 0x28e44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e450: 0xc6430028  lwc1        $f3, 0x28($s2)
    ctx->pc = 0x28e450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28e454: 0x46011832  c.eq.s      $f3, $f1
    ctx->pc = 0x28e454u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28e458: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28E458u;
    {
        const bool branch_taken_0x28e458 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28E45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E458u;
            // 0x28e45c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e458) {
            ctx->pc = 0x28E464u;
            goto label_28e464;
        }
    }
    ctx->pc = 0x28E460u;
    // 0x28e460: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28e460u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e464:
    // 0x28e464: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E464u;
    {
        const bool branch_taken_0x28e464 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28e464) {
            ctx->pc = 0x28E468u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28E464u;
            // 0x28e468: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28E478u;
            goto label_28e478;
        }
    }
    ctx->pc = 0x28E46Cu;
    // 0x28e46c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28e46cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e470: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28E470u;
    {
        const bool branch_taken_0x28e470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E470u;
            // 0x28e474: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e470) {
            ctx->pc = 0x28E490u;
            goto label_28e490;
        }
    }
    ctx->pc = 0x28E478u;
label_28e478:
    // 0x28e478: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28e478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28e47c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28e47cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28e480: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28e480u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e484: 0x0  nop
    ctx->pc = 0x28e484u;
    // NOP
    // 0x28e488: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x28e488u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x28e48c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x28e48cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_28e490:
    // 0x28e490: 0x46011832  c.eq.s      $f3, $f1
    ctx->pc = 0x28e490u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28e494: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28e494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e498: 0x4601a81a  mula.s      $f21, $f1
    ctx->pc = 0x28e498u;
    ctx->f[31] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x28e49c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28E49Cu;
    {
        const bool branch_taken_0x28e49c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28E4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E49Cu;
            // 0x28e4a0: 0x4603a05c  madd.s      $f1, $f20, $f3 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e49c) {
            ctx->pc = 0x28E4A8u;
            goto label_28e4a8;
        }
    }
    ctx->pc = 0x28E4A4u;
    // 0x28e4a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28e4a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e4a8:
    // 0x28e4a8: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E4A8u;
    {
        const bool branch_taken_0x28e4a8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28e4a8) {
            ctx->pc = 0x28E4ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28E4A8u;
            // 0x28e4ac: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28E4BCu;
            goto label_28e4bc;
        }
    }
    ctx->pc = 0x28E4B0u;
    // 0x28e4b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28e4b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e4b4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28E4B4u;
    {
        const bool branch_taken_0x28e4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E4B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E4B4u;
            // 0x28e4b8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e4b4) {
            ctx->pc = 0x28E4D4u;
            goto label_28e4d4;
        }
    }
    ctx->pc = 0x28E4BCu;
label_28e4bc:
    // 0x28e4bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28e4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28e4c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28e4c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28e4c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28e4c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e4c8: 0x0  nop
    ctx->pc = 0x28e4c8u;
    // NOP
    // 0x28e4cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28e4ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28e4d0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28e4d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28e4d4:
    // 0x28e4d4: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x28e4d4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28e4d8: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x28e4d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x28e4dc: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x28e4dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x28e4e0: 0xc641003c  lwc1        $f1, 0x3C($s2)
    ctx->pc = 0x28e4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e4e4: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x28e4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28e4e8: 0x46011832  c.eq.s      $f3, $f1
    ctx->pc = 0x28e4e8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28e4ec: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28E4ECu;
    {
        const bool branch_taken_0x28e4ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28E4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E4ECu;
            // 0x28e4f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e4ec) {
            ctx->pc = 0x28E4F8u;
            goto label_28e4f8;
        }
    }
    ctx->pc = 0x28E4F4u;
    // 0x28e4f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28e4f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e4f8:
    // 0x28e4f8: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E4F8u;
    {
        const bool branch_taken_0x28e4f8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28e4f8) {
            ctx->pc = 0x28E4FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28E4F8u;
            // 0x28e4fc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28E50Cu;
            goto label_28e50c;
        }
    }
    ctx->pc = 0x28E500u;
    // 0x28e500: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28e500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e504: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28E504u;
    {
        const bool branch_taken_0x28e504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E504u;
            // 0x28e508: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e504) {
            ctx->pc = 0x28E524u;
            goto label_28e524;
        }
    }
    ctx->pc = 0x28E50Cu;
label_28e50c:
    // 0x28e50c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28e50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28e510: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28e510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28e514: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28e514u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e518: 0x0  nop
    ctx->pc = 0x28e518u;
    // NOP
    // 0x28e51c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x28e51cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x28e520: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x28e520u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_28e524:
    // 0x28e524: 0x46011832  c.eq.s      $f3, $f1
    ctx->pc = 0x28e524u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28e528: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28e528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e52c: 0x4601a81a  mula.s      $f21, $f1
    ctx->pc = 0x28e52cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x28e530: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28E530u;
    {
        const bool branch_taken_0x28e530 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28E534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E530u;
            // 0x28e534: 0x4603a05c  madd.s      $f1, $f20, $f3 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e530) {
            ctx->pc = 0x28E53Cu;
            goto label_28e53c;
        }
    }
    ctx->pc = 0x28E538u;
    // 0x28e538: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28e538u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e53c:
    // 0x28e53c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E53Cu;
    {
        const bool branch_taken_0x28e53c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28e53c) {
            ctx->pc = 0x28E540u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28E53Cu;
            // 0x28e540: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28E550u;
            goto label_28e550;
        }
    }
    ctx->pc = 0x28E544u;
    // 0x28e544: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28e544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e548: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28E548u;
    {
        const bool branch_taken_0x28e548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E54Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E548u;
            // 0x28e54c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e548) {
            ctx->pc = 0x28E568u;
            goto label_28e568;
        }
    }
    ctx->pc = 0x28E550u;
label_28e550:
    // 0x28e550: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28e550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28e554: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28e554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28e558: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28e558u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e55c: 0x0  nop
    ctx->pc = 0x28e55cu;
    // NOP
    // 0x28e560: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28e560u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28e564: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28e564u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28e568:
    // 0x28e568: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x28e568u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28e56c: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x28e56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e570: 0x4602189c  madd.s      $f2, $f3, $f2
    ctx->pc = 0x28e570u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x28e574: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x28e574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e578: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x28e578u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x28e57c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x28e57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e580: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x28e580u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x28e584: 0x4600001e  madda.s     $f0, $f0
    ctx->pc = 0x28e584u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x28e588: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x28e588u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x28e58c: 0x4602105c  madd.s      $f1, $f2, $f2
    ctx->pc = 0x28e58cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x28e590: 0x46040832  c.eq.s      $f1, $f4
    ctx->pc = 0x28e590u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28e594: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x28E594u;
    {
        const bool branch_taken_0x28e594 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28E598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E594u;
            // 0x28e598: 0xe7a2006c  swc1        $f2, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e594) {
            ctx->pc = 0x28E5B8u;
            goto label_28e5b8;
        }
    }
    ctx->pc = 0x28E59Cu;
    // 0x28e59c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28e59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x28e5a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28e5a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e5a4: 0x0  nop
    ctx->pc = 0x28e5a4u;
    // NOP
    // 0x28e5a8: 0x46010116  rsqrt.s     $f4, $f0, $f1
    ctx->pc = 0x28e5a8u;
    ctx->f[4] = 1.0f / sqrtf(ctx->f[0]);
    // 0x28e5ac: 0x0  nop
    ctx->pc = 0x28e5acu;
    // NOP
    // 0x28e5b0: 0x0  nop
    ctx->pc = 0x28e5b0u;
    // NOP
    // 0x28e5b4: 0x0  nop
    ctx->pc = 0x28e5b4u;
    // NOP
label_28e5b8:
    // 0x28e5b8: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x28e5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e5bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28e5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e5c0: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x28e5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28e5c4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x28e5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x28e5c8: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x28e5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e5cc: 0x460400c2  mul.s       $f3, $f0, $f4
    ctx->pc = 0x28e5ccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x28e5d0: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x28e5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e5d4: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x28e5d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x28e5d8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x28e5d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x28e5dc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x28e5dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x28e5e0: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x28e5e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x28e5e4: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x28e5e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x28e5e8: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x28e5e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x28e5ec: 0xc0a3830  jal         func_28E0C0
    ctx->pc = 0x28E5ECu;
    SET_GPR_U32(ctx, 31, 0x28E5F4u);
    ctx->pc = 0x28E5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E5ECu;
            // 0x28e5f0: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E5F4u; }
        if (ctx->pc != 0x28E5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E5F4u; }
        if (ctx->pc != 0x28E5F4u) { return; }
    }
    ctx->pc = 0x28E5F4u;
label_28e5f4:
    // 0x28e5f4: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x28e5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e5f8: 0x26230030  addiu       $v1, $s1, 0x30
    ctx->pc = 0x28e5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x28e5fc: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x28e5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28e600: 0x46011832  c.eq.s      $f3, $f1
    ctx->pc = 0x28e600u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28e604: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28E604u;
    {
        const bool branch_taken_0x28e604 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28E608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E604u;
            // 0x28e608: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e604) {
            ctx->pc = 0x28E610u;
            goto label_28e610;
        }
    }
    ctx->pc = 0x28E60Cu;
    // 0x28e60c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28e60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e610:
    // 0x28e610: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E610u;
    {
        const bool branch_taken_0x28e610 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28e610) {
            ctx->pc = 0x28E614u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28E610u;
            // 0x28e614: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28E624u;
            goto label_28e624;
        }
    }
    ctx->pc = 0x28E618u;
    // 0x28e618: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x28e618u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e61c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28E61Cu;
    {
        const bool branch_taken_0x28e61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E61Cu;
            // 0x28e620: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e61c) {
            ctx->pc = 0x28E63Cu;
            goto label_28e63c;
        }
    }
    ctx->pc = 0x28E624u;
label_28e624:
    // 0x28e624: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x28e624u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x28e628: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x28e628u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x28e62c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x28e62cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e630: 0x0  nop
    ctx->pc = 0x28e630u;
    // NOP
    // 0x28e634: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x28e634u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x28e638: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x28e638u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_28e63c:
    // 0x28e63c: 0x46011832  c.eq.s      $f3, $f1
    ctx->pc = 0x28e63cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28e640: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28e640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e644: 0x4601a81a  mula.s      $f21, $f1
    ctx->pc = 0x28e644u;
    ctx->f[31] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x28e648: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28E648u;
    {
        const bool branch_taken_0x28e648 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28E64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E648u;
            // 0x28e64c: 0x4603a05c  madd.s      $f1, $f20, $f3 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e648) {
            ctx->pc = 0x28E654u;
            goto label_28e654;
        }
    }
    ctx->pc = 0x28E650u;
    // 0x28e650: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28e650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e654:
    // 0x28e654: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E654u;
    {
        const bool branch_taken_0x28e654 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28e654) {
            ctx->pc = 0x28E658u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28E654u;
            // 0x28e658: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28E668u;
            goto label_28e668;
        }
    }
    ctx->pc = 0x28E65Cu;
    // 0x28e65c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x28e65cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e660: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28E660u;
    {
        const bool branch_taken_0x28e660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E660u;
            // 0x28e664: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e660) {
            ctx->pc = 0x28E680u;
            goto label_28e680;
        }
    }
    ctx->pc = 0x28E668u;
label_28e668:
    // 0x28e668: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x28e668u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x28e66c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x28e66cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x28e670: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x28e670u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e674: 0x0  nop
    ctx->pc = 0x28e674u;
    // NOP
    // 0x28e678: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28e678u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28e67c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28e67cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28e680:
    // 0x28e680: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x28e680u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28e684: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x28e684u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x28e688: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x28e688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x28e68c: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x28e68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e690: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x28e690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28e694: 0x46011832  c.eq.s      $f3, $f1
    ctx->pc = 0x28e694u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28e698: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28E698u;
    {
        const bool branch_taken_0x28e698 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28E69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E698u;
            // 0x28e69c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e698) {
            ctx->pc = 0x28E6A4u;
            goto label_28e6a4;
        }
    }
    ctx->pc = 0x28E6A0u;
    // 0x28e6a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28e6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e6a4:
    // 0x28e6a4: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E6A4u;
    {
        const bool branch_taken_0x28e6a4 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28e6a4) {
            ctx->pc = 0x28E6A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28E6A4u;
            // 0x28e6a8: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28E6B8u;
            goto label_28e6b8;
        }
    }
    ctx->pc = 0x28E6ACu;
    // 0x28e6ac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x28e6acu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e6b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28E6B0u;
    {
        const bool branch_taken_0x28e6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E6B0u;
            // 0x28e6b4: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e6b0) {
            ctx->pc = 0x28E6D0u;
            goto label_28e6d0;
        }
    }
    ctx->pc = 0x28E6B8u;
label_28e6b8:
    // 0x28e6b8: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x28e6b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x28e6bc: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x28e6bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x28e6c0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x28e6c0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e6c4: 0x0  nop
    ctx->pc = 0x28e6c4u;
    // NOP
    // 0x28e6c8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x28e6c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x28e6cc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x28e6ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_28e6d0:
    // 0x28e6d0: 0x46011832  c.eq.s      $f3, $f1
    ctx->pc = 0x28e6d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28e6d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28e6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e6d8: 0x4601a81a  mula.s      $f21, $f1
    ctx->pc = 0x28e6d8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x28e6dc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28E6DCu;
    {
        const bool branch_taken_0x28e6dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28E6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E6DCu;
            // 0x28e6e0: 0x4603a05c  madd.s      $f1, $f20, $f3 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e6dc) {
            ctx->pc = 0x28E6E8u;
            goto label_28e6e8;
        }
    }
    ctx->pc = 0x28E6E4u;
    // 0x28e6e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28e6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e6e8:
    // 0x28e6e8: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E6E8u;
    {
        const bool branch_taken_0x28e6e8 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28e6e8) {
            ctx->pc = 0x28E6ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28E6E8u;
            // 0x28e6ec: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28E6FCu;
            goto label_28e6fc;
        }
    }
    ctx->pc = 0x28E6F0u;
    // 0x28e6f0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x28e6f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e6f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28E6F4u;
    {
        const bool branch_taken_0x28e6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E6F4u;
            // 0x28e6f8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e6f4) {
            ctx->pc = 0x28E714u;
            goto label_28e714;
        }
    }
    ctx->pc = 0x28E6FCu;
label_28e6fc:
    // 0x28e6fc: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x28e6fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x28e700: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x28e700u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x28e704: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x28e704u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e708: 0x0  nop
    ctx->pc = 0x28e708u;
    // NOP
    // 0x28e70c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28e70cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28e710: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28e710u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28e714:
    // 0x28e714: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x28e714u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28e718: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x28e718u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x28e71c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x28e71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x28e720: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x28e720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e724: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x28e724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28e728: 0x46011832  c.eq.s      $f3, $f1
    ctx->pc = 0x28e728u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28e72c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28E72Cu;
    {
        const bool branch_taken_0x28e72c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28E730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E72Cu;
            // 0x28e730: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e72c) {
            ctx->pc = 0x28E738u;
            goto label_28e738;
        }
    }
    ctx->pc = 0x28E734u;
    // 0x28e734: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28e734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e738:
    // 0x28e738: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E738u;
    {
        const bool branch_taken_0x28e738 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28e738) {
            ctx->pc = 0x28E73Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28E738u;
            // 0x28e73c: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28E74Cu;
            goto label_28e74c;
        }
    }
    ctx->pc = 0x28E740u;
    // 0x28e740: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x28e740u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e744: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28E744u;
    {
        const bool branch_taken_0x28e744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E744u;
            // 0x28e748: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e744) {
            ctx->pc = 0x28E764u;
            goto label_28e764;
        }
    }
    ctx->pc = 0x28E74Cu;
label_28e74c:
    // 0x28e74c: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x28e74cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x28e750: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x28e750u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x28e754: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x28e754u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e758: 0x0  nop
    ctx->pc = 0x28e758u;
    // NOP
    // 0x28e75c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x28e75cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x28e760: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x28e760u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_28e764:
    // 0x28e764: 0x46011832  c.eq.s      $f3, $f1
    ctx->pc = 0x28e764u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28e768: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28e768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e76c: 0x4601a81a  mula.s      $f21, $f1
    ctx->pc = 0x28e76cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x28e770: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28E770u;
    {
        const bool branch_taken_0x28e770 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28E774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E770u;
            // 0x28e774: 0x4603a05c  madd.s      $f1, $f20, $f3 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e770) {
            ctx->pc = 0x28E77Cu;
            goto label_28e77c;
        }
    }
    ctx->pc = 0x28E778u;
    // 0x28e778: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28e778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e77c:
    // 0x28e77c: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E77Cu;
    {
        const bool branch_taken_0x28e77c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28e77c) {
            ctx->pc = 0x28E780u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28E77Cu;
            // 0x28e780: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28E790u;
            goto label_28e790;
        }
    }
    ctx->pc = 0x28E784u;
    // 0x28e784: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x28e784u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e788: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28E788u;
    {
        const bool branch_taken_0x28e788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E788u;
            // 0x28e78c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e788) {
            ctx->pc = 0x28E7A8u;
            goto label_28e7a8;
        }
    }
    ctx->pc = 0x28E790u;
label_28e790:
    // 0x28e790: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x28e790u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x28e794: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x28e794u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x28e798: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x28e798u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e79c: 0x0  nop
    ctx->pc = 0x28e79cu;
    // NOP
    // 0x28e7a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28e7a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28e7a4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28e7a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28e7a8:
    // 0x28e7a8: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x28e7a8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28e7ac: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x28e7acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x28e7b0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x28e7b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x28e7b4: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x28e7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e7b8: 0xc643000c  lwc1        $f3, 0xC($s2)
    ctx->pc = 0x28e7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28e7bc: 0x46011832  c.eq.s      $f3, $f1
    ctx->pc = 0x28e7bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28e7c0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28E7C0u;
    {
        const bool branch_taken_0x28e7c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28E7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E7C0u;
            // 0x28e7c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e7c0) {
            ctx->pc = 0x28E7CCu;
            goto label_28e7cc;
        }
    }
    ctx->pc = 0x28E7C8u;
    // 0x28e7c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28e7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e7cc:
    // 0x28e7cc: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E7CCu;
    {
        const bool branch_taken_0x28e7cc = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28e7cc) {
            ctx->pc = 0x28E7D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28E7CCu;
            // 0x28e7d0: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28E7E0u;
            goto label_28e7e0;
        }
    }
    ctx->pc = 0x28E7D4u;
    // 0x28e7d4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x28e7d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e7d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28E7D8u;
    {
        const bool branch_taken_0x28e7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E7D8u;
            // 0x28e7dc: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e7d8) {
            ctx->pc = 0x28E7F8u;
            goto label_28e7f8;
        }
    }
    ctx->pc = 0x28E7E0u;
label_28e7e0:
    // 0x28e7e0: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x28e7e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x28e7e4: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x28e7e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x28e7e8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x28e7e8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e7ec: 0x0  nop
    ctx->pc = 0x28e7ecu;
    // NOP
    // 0x28e7f0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x28e7f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x28e7f4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x28e7f4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_28e7f8:
    // 0x28e7f8: 0x46011832  c.eq.s      $f3, $f1
    ctx->pc = 0x28e7f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28e7fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28e7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e800: 0x4601a81a  mula.s      $f21, $f1
    ctx->pc = 0x28e800u;
    ctx->f[31] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x28e804: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28E804u;
    {
        const bool branch_taken_0x28e804 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28E808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E804u;
            // 0x28e808: 0x4603a05c  madd.s      $f1, $f20, $f3 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e804) {
            ctx->pc = 0x28E810u;
            goto label_28e810;
        }
    }
    ctx->pc = 0x28E80Cu;
    // 0x28e80c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28e80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e810:
    // 0x28e810: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E810u;
    {
        const bool branch_taken_0x28e810 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28e810) {
            ctx->pc = 0x28E814u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28E810u;
            // 0x28e814: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28E824u;
            goto label_28e824;
        }
    }
    ctx->pc = 0x28E818u;
    // 0x28e818: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x28e818u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e81c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28E81Cu;
    {
        const bool branch_taken_0x28e81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E81Cu;
            // 0x28e820: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e81c) {
            ctx->pc = 0x28E83Cu;
            goto label_28e83c;
        }
    }
    ctx->pc = 0x28E824u;
label_28e824:
    // 0x28e824: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x28e824u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x28e828: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x28e828u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x28e82c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x28e82cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e830: 0x0  nop
    ctx->pc = 0x28e830u;
    // NOP
    // 0x28e834: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28e834u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28e838: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28e838u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28e83c:
    // 0x28e83c: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x28e83cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28e840: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x28e840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x28e844: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x28e844u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x28e848: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x28e848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x28e84c: 0xc6470044  lwc1        $f7, 0x44($s2)
    ctx->pc = 0x28e84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x28e850: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x28e850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e854: 0xc6480040  lwc1        $f8, 0x40($s2)
    ctx->pc = 0x28e854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x28e858: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x28e858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28e85c: 0x4600381a  mula.s      $f7, $f0
    ctx->pc = 0x28e85cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x28e860: 0xc6460048  lwc1        $f6, 0x48($s2)
    ctx->pc = 0x28e860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x28e864: 0x4602401e  madda.s     $f8, $f2
    ctx->pc = 0x28e864u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[2]));
    // 0x28e868: 0xc6230020  lwc1        $f3, 0x20($s1)
    ctx->pc = 0x28e868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28e86c: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x28e86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e870: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x28e870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e874: 0x4603315c  madd.s      $f5, $f6, $f3
    ctx->pc = 0x28e874u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[3]));
    // 0x28e878: 0x4600381a  mula.s      $f7, $f0
    ctx->pc = 0x28e878u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x28e87c: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x28e87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e880: 0x4601401e  madda.s     $f8, $f1
    ctx->pc = 0x28e880u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[1]));
    // 0x28e884: 0xc6240024  lwc1        $f4, 0x24($s1)
    ctx->pc = 0x28e884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28e888: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x28e888u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x28e88c: 0x4604311c  madd.s      $f4, $f6, $f4
    ctx->pc = 0x28e88cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
    // 0x28e890: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x28e890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e894: 0xc6230028  lwc1        $f3, 0x28($s1)
    ctx->pc = 0x28e894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28e898: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x28e898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28e89c: 0x4601381a  mula.s      $f7, $f1
    ctx->pc = 0x28e89cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x28e8a0: 0x44804800  mtc1        $zero, $f9
    ctx->pc = 0x28e8a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x28e8a4: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x28e8a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x28e8a8: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x28e8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e8ac: 0x4602401e  madda.s     $f8, $f2
    ctx->pc = 0x28e8acu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[2]));
    // 0x28e8b0: 0x4603305c  madd.s      $f1, $f6, $f3
    ctx->pc = 0x28e8b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[3]));
    // 0x28e8b4: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x28e8b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x28e8b8: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x28e8b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x28e8bc: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x28e8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e8c0: 0xe7a50050  swc1        $f5, 0x50($sp)
    ctx->pc = 0x28e8c0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x28e8c4: 0xe7a40054  swc1        $f4, 0x54($sp)
    ctx->pc = 0x28e8c4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x28e8c8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28e8c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28e8cc: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x28e8ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x28e8d0: 0xc620003c  lwc1        $f0, 0x3C($s1)
    ctx->pc = 0x28e8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e8d4: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x28e8d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x28e8d8: 0x46090001  sub.s       $f0, $f0, $f9
    ctx->pc = 0x28e8d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
    // 0x28e8dc: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x28e8dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x28e8e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x28e8e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28e8e4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x28e8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x28e8e8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x28e8e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28e8ec: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x28e8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28e8f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28e8f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28e8f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28e8f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28e8f8: 0x3e00008  jr          $ra
    ctx->pc = 0x28E8F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E8F8u;
            // 0x28e8fc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28E900u;
}
