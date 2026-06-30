#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002666C0
// Address: 0x2666c0 - 0x266840
void sub_002666C0_0x2666c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002666C0_0x2666c0");
#endif

    switch (ctx->pc) {
        case 0x266778u: goto label_266778;
        case 0x266784u: goto label_266784;
        default: break;
    }

    ctx->pc = 0x2666c0u;

    // 0x2666c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2666c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2666c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2666c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2666c8: 0x27a30088  addiu       $v1, $sp, 0x88
    ctx->pc = 0x2666c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x2666cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2666ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2666d0: 0x27a2008c  addiu       $v0, $sp, 0x8C
    ctx->pc = 0x2666d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x2666d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2666d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2666d8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2666d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2666dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2666dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2666e0: 0x27a40084  addiu       $a0, $sp, 0x84
    ctx->pc = 0x2666e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x2666e4: 0xc4a10030  lwc1        $f1, 0x30($a1)
    ctx->pc = 0x2666e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2666e8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2666e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2666ec: 0xc4a00034  lwc1        $f0, 0x34($a1)
    ctx->pc = 0x2666ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2666f0: 0xc4a30038  lwc1        $f3, 0x38($a1)
    ctx->pc = 0x2666f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2666f4: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x2666f4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
    // 0x2666f8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2666f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2666fc: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x2666fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x266700: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x266700u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x266704: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x266704u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x266708: 0xc4a20034  lwc1        $f2, 0x34($a1)
    ctx->pc = 0x266708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26670c: 0x4603185c  madd.s      $f1, $f3, $f3
    ctx->pc = 0x26670cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x266710: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x266710u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x266714: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x266714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x266718: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x266718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26671c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x26671cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x266720: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x266720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x266724: 0xc4a0003c  lwc1        $f0, 0x3C($a1)
    ctx->pc = 0x266724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266728: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x266728u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x26672c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x26672cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x266730: 0xc4a00050  lwc1        $f0, 0x50($a1)
    ctx->pc = 0x266730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266734: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x266734u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x266738: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x266738u;
    {
        const bool branch_taken_0x266738 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26673Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266738u;
            // 0x26673c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266738) {
            ctx->pc = 0x266768u;
            goto label_266768;
        }
    }
    ctx->pc = 0x266740u;
    // 0x266740: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x266740u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x266744: 0x24a5d6f0  addiu       $a1, $a1, -0x2910
    ctx->pc = 0x266744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956784));
    // 0x266748: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x266748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26674c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x26674cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x266750: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x266750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266754: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x266754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x266758: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x266758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26675c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x26675cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x266760: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x266760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266764: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x266764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_266768:
    // 0x266768: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x266768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26676c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x26676cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x266770: 0xc099b1c  jal         func_266C70
    ctx->pc = 0x266770u;
    SET_GPR_U32(ctx, 31, 0x266778u);
    ctx->pc = 0x266774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266770u;
            // 0x266774: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x266C70u;
    if (runtime->hasFunction(0x266C70u)) {
        auto targetFn = runtime->lookupFunction(0x266C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266778u; }
        if (ctx->pc != 0x266778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00266C70_0x266c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266778u; }
        if (ctx->pc != 0x266778u) { return; }
    }
    ctx->pc = 0x266778u;
label_266778:
    // 0x266778: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x266778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26677c: 0xc099b88  jal         func_266E20
    ctx->pc = 0x26677Cu;
    SET_GPR_U32(ctx, 31, 0x266784u);
    ctx->pc = 0x266780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26677Cu;
            // 0x266780: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x266E20u;
    if (runtime->hasFunction(0x266E20u)) {
        auto targetFn = runtime->lookupFunction(0x266E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266784u; }
        if (ctx->pc != 0x266784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00266E20_0x266e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266784u; }
        if (ctx->pc != 0x266784u) { return; }
    }
    ctx->pc = 0x266784u;
label_266784:
    // 0x266784: 0x8e230068  lw          $v1, 0x68($s1)
    ctx->pc = 0x266784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x266788: 0xc6200050  lwc1        $f0, 0x50($s1)
    ctx->pc = 0x266788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26678c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x26678cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x266790: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x266790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x266794: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x266794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x266798: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x266798u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x26679c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x26679cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2667a0: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2667a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2667a4: 0x46031842  mul.s       $f1, $f3, $f3
    ctx->pc = 0x2667a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2667a8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2667a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2667ac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2667acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2667b0: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x2667B0u;
    {
        const bool branch_taken_0x2667b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2667b0) {
            ctx->pc = 0x266818u;
            goto label_266818;
        }
    }
    ctx->pc = 0x2667B8u;
    // 0x2667b8: 0x0  nop
    ctx->pc = 0x2667b8u;
    // NOP
    // 0x2667bc: 0x0  nop
    ctx->pc = 0x2667bcu;
    // NOP
    // 0x2667c0: 0x46010004  c1          0x10004
    ctx->pc = 0x2667c0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2667c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2667c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2667c8: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x2667c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2667cc: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2667ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2667d0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2667d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2667d4: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x2667d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2667d8: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2667d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2667dc: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2667dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2667e0: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2667e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2667e4: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x2667e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2667e8: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x2667e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2667ec: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2667ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2667f0: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x2667f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2667f4: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x2667f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2667f8: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x2667f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2667fc: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2667fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266800: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x266800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x266804: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x266804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266808: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x266808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x26680c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26680Cu;
    {
        const bool branch_taken_0x26680c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26680Cu;
            // 0x266810: 0xa2430000  sb          $v1, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26680c) {
            ctx->pc = 0x266820u;
            goto label_266820;
        }
    }
    ctx->pc = 0x266814u;
    // 0x266814: 0x0  nop
    ctx->pc = 0x266814u;
    // NOP
label_266818:
    // 0x266818: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x266818u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x26681c: 0x0  nop
    ctx->pc = 0x26681cu;
    // NOP
label_266820:
    // 0x266820: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x266820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x266824: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x266824u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266828: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x266828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26682c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26682cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266830: 0x3e00008  jr          $ra
    ctx->pc = 0x266830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266830u;
            // 0x266834: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x266838u;
    // 0x266838: 0x0  nop
    ctx->pc = 0x266838u;
    // NOP
    // 0x26683c: 0x0  nop
    ctx->pc = 0x26683cu;
    // NOP
}
