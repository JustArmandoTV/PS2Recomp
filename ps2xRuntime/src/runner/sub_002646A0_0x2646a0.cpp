#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002646A0
// Address: 0x2646a0 - 0x264790
void sub_002646A0_0x2646a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002646A0_0x2646a0");
#endif

    ctx->pc = 0x2646a0u;

    // 0x2646a0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2646a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2646a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2646a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2646a8: 0xe4c00020  swc1        $f0, 0x20($a2)
    ctx->pc = 0x2646a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    // 0x2646ac: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2646acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2646b0: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x2646b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2646b4: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2646b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2646b8: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x2646b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x2646bc: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2646bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2646c0: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x2646c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x2646c4: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2646c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2646c8: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x2646c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x2646cc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2646ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2646d0: 0x1467000b  bne         $v1, $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x2646D0u;
    {
        const bool branch_taken_0x2646d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x2646d0) {
            ctx->pc = 0x264700u;
            goto label_264700;
        }
    }
    ctx->pc = 0x2646D8u;
    // 0x2646d8: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x2646d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2646dc: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x2646dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x2646e0: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x2646e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2646e4: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x2646e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x2646e8: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x2646e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2646ec: 0xe4c00018  swc1        $f0, 0x18($a2)
    ctx->pc = 0x2646ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
    // 0x2646f0: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x2646f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2646f4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2646F4u;
    {
        const bool branch_taken_0x2646f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2646F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2646F4u;
            // 0x2646f8: 0xe4c0001c  swc1        $f0, 0x1C($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2646f4) {
            ctx->pc = 0x264788u;
            goto label_264788;
        }
    }
    ctx->pc = 0x2646FCu;
    // 0x2646fc: 0x0  nop
    ctx->pc = 0x2646fcu;
    // NOP
label_264700:
    // 0x264700: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x264700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x264704: 0x14670018  bne         $v1, $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x264704u;
    {
        const bool branch_taken_0x264704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x264704) {
            ctx->pc = 0x264768u;
            goto label_264768;
        }
    }
    ctx->pc = 0x26470Cu;
    // 0x26470c: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x26470cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x264710: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x264710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264714: 0xc48100a0  lwc1        $f1, 0xA0($a0)
    ctx->pc = 0x264714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x264718: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x264718u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26471c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26471cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x264720: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x264720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x264724: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x264724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264728: 0xc48100a4  lwc1        $f1, 0xA4($a0)
    ctx->pc = 0x264728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26472c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x26472cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x264730: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x264730u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x264734: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x264734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x264738: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x264738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26473c: 0xc48100a8  lwc1        $f1, 0xA8($a0)
    ctx->pc = 0x26473cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x264740: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x264740u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x264744: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x264744u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x264748: 0xe4c00018  swc1        $f0, 0x18($a2)
    ctx->pc = 0x264748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
    // 0x26474c: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x26474cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264750: 0xc48100ac  lwc1        $f1, 0xAC($a0)
    ctx->pc = 0x264750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x264754: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x264754u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x264758: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x264758u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26475c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x26475Cu;
    {
        const bool branch_taken_0x26475c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26475Cu;
            // 0x264760: 0xe4c0001c  swc1        $f0, 0x1C($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26475c) {
            ctx->pc = 0x264788u;
            goto label_264788;
        }
    }
    ctx->pc = 0x264764u;
    // 0x264764: 0x0  nop
    ctx->pc = 0x264764u;
    // NOP
label_264768:
    // 0x264768: 0xc4800130  lwc1        $f0, 0x130($a0)
    ctx->pc = 0x264768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26476c: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x26476cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x264770: 0xc4800134  lwc1        $f0, 0x134($a0)
    ctx->pc = 0x264770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264774: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x264774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x264778: 0xc4800138  lwc1        $f0, 0x138($a0)
    ctx->pc = 0x264778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26477c: 0xe4c00018  swc1        $f0, 0x18($a2)
    ctx->pc = 0x26477cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
    // 0x264780: 0xc480013c  lwc1        $f0, 0x13C($a0)
    ctx->pc = 0x264780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264784: 0xe4c0001c  swc1        $f0, 0x1C($a2)
    ctx->pc = 0x264784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
label_264788:
    // 0x264788: 0x3e00008  jr          $ra
    ctx->pc = 0x264788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x264790u;
}
