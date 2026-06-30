#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0037D360
// Address: 0x37d360 - 0x37d3e0
void sub_0037D360_0x37d360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037D360_0x37d360");
#endif

    ctx->pc = 0x37d360u;

    // 0x37d360: 0xc4810078  lwc1        $f1, 0x78($a0)
    ctx->pc = 0x37d360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37d364: 0xc4800074  lwc1        $f0, 0x74($a0)
    ctx->pc = 0x37d364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37d368: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x37d368u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37d36c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x37D36Cu;
    {
        const bool branch_taken_0x37d36c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x37D370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37D36Cu;
            // 0x37d370: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d36c) {
            ctx->pc = 0x37D378u;
            goto label_37d378;
        }
    }
    ctx->pc = 0x37D374u;
    // 0x37d374: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37d374u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37d378:
    // 0x37d378: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x37d378u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x37d37c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x37d37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x37d380: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x37d380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x37d384: 0xc4800078  lwc1        $f0, 0x78($a0)
    ctx->pc = 0x37d384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37d388: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x37d388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37d38c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x37d38cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x37d390: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x37D390u;
    {
        const bool branch_taken_0x37d390 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x37D394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37D390u;
            // 0x37d394: 0xe4800078  swc1        $f0, 0x78($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d390) {
            ctx->pc = 0x37D3A4u;
            goto label_37d3a4;
        }
    }
    ctx->pc = 0x37D398u;
    // 0x37d398: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x37d398u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37d39c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37D39Cu;
    {
        const bool branch_taken_0x37d39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37D39Cu;
            // 0x37d3a0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d39c) {
            ctx->pc = 0x37D3C0u;
            goto label_37d3c0;
        }
    }
    ctx->pc = 0x37D3A4u;
label_37d3a4:
    // 0x37d3a4: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x37d3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x37d3a8: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x37d3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x37d3ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37d3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37d3b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37d3b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37d3b4: 0x0  nop
    ctx->pc = 0x37d3b4u;
    // NOP
    // 0x37d3b8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x37d3b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x37d3bc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x37d3bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_37d3c0:
    // 0x37d3c0: 0xc4800078  lwc1        $f0, 0x78($a0)
    ctx->pc = 0x37d3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37d3c4: 0x5102b  sltu        $v0, $zero, $a1
    ctx->pc = 0x37d3c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x37d3c8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x37d3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x37d3cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x37d3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x37d3d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x37d3d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x37d3d4: 0x3e00008  jr          $ra
    ctx->pc = 0x37D3D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37D3D4u;
            // 0x37d3d8: 0xe4800078  swc1        $f0, 0x78($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37D3DCu;
    // 0x37d3dc: 0x0  nop
    ctx->pc = 0x37d3dcu;
    // NOP
}
