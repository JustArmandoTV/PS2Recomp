#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00266ED0
// Address: 0x266ed0 - 0x267130
void sub_00266ED0_0x266ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266ED0_0x266ed0");
#endif

    switch (ctx->pc) {
        case 0x266fe0u: goto label_266fe0;
        case 0x26709cu: goto label_26709c;
        case 0x2670f0u: goto label_2670f0;
        default: break;
    }

    ctx->pc = 0x266ed0u;

    // 0x266ed0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x266ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x266ed4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x266ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x266ed8: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x266ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x266edc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x266edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x266ee0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x266ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x266ee4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x266ee4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266ee8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x266ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x266eec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x266eecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266ef0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x266ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x266ef4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x266ef4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266ef8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x266ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x266efc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x266efcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266f00: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x266f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x266f04: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x266f04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266f08: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x266f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x266f0c: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x266f0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x266f10: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x266f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x266f14: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x266f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x266f18: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x266f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266f1c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x266f1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x266f20: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x266f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x266f24: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x266f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x266f28: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x266f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266f2c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x266f2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x266f30: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x266f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x266f34: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x266f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x266f38: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x266f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266f3c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x266f3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x266f40: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x266f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x266f44: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x266f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266f48: 0xc4e1000c  lwc1        $f1, 0xC($a3)
    ctx->pc = 0x266f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x266f4c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x266f4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x266f50: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x266f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x266f54: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x266f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x266f58: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x266f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x266f5c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x266f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266f60: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x266f60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x266f64: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x266f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x266f68: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x266f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x266f6c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x266f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266f70: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x266f70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x266f74: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x266f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x266f78: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x266f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x266f7c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x266f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266f80: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x266f80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x266f84: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x266f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x266f88: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x266f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266f8c: 0xc4e1000c  lwc1        $f1, 0xC($a3)
    ctx->pc = 0x266f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x266f90: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x266f90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x266f94: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x266f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x266f98: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x266f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x266f9c: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x266f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x266fa0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x266fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266fa4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x266fa4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x266fa8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x266fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x266fac: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x266facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x266fb0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x266fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266fb4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x266fb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x266fb8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x266fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x266fbc: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x266fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x266fc0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x266fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266fc4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x266fc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x266fc8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x266fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x266fcc: 0xc4e1000c  lwc1        $f1, 0xC($a3)
    ctx->pc = 0x266fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x266fd0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x266fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266fd4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x266fd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x266fd8: 0xc0a4644  jal         func_291910
    ctx->pc = 0x266FD8u;
    SET_GPR_U32(ctx, 31, 0x266FE0u);
    ctx->pc = 0x266FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266FD8u;
            // 0x266fdc: 0xe460000c  swc1        $f0, 0xC($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x291910u;
    if (runtime->hasFunction(0x291910u)) {
        auto targetFn = runtime->lookupFunction(0x291910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266FE0u; }
        if (ctx->pc != 0x266FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291910_0x291910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266FE0u; }
        if (ctx->pc != 0x266FE0u) { return; }
    }
    ctx->pc = 0x266FE0u;
label_266fe0:
    // 0x266fe0: 0xc6810044  lwc1        $f1, 0x44($s4)
    ctx->pc = 0x266fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x266fe4: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x266fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266fe8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x266fe8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x266fec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x266FECu;
    {
        const bool branch_taken_0x266fec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x266FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266FECu;
            // 0x266ff0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266fec) {
            ctx->pc = 0x266FF8u;
            goto label_266ff8;
        }
    }
    ctx->pc = 0x266FF4u;
    // 0x266ff4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x266ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_266ff8:
    // 0x266ff8: 0xc6810040  lwc1        $f1, 0x40($s4)
    ctx->pc = 0x266ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x266ffc: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x266ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267000: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x267000u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x267004: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x267004u;
    {
        const bool branch_taken_0x267004 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x267008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267004u;
            // 0x267008: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267004) {
            ctx->pc = 0x267010u;
            goto label_267010;
        }
    }
    ctx->pc = 0x26700Cu;
    // 0x26700c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x26700cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_267010:
    // 0x267010: 0xc6810048  lwc1        $f1, 0x48($s4)
    ctx->pc = 0x267010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267014: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x267014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267018: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x267018u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26701c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x26701Cu;
    {
        const bool branch_taken_0x26701c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x267020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26701Cu;
            // 0x267020: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26701c) {
            ctx->pc = 0x267028u;
            goto label_267028;
        }
    }
    ctx->pc = 0x267024u;
    // 0x267024: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x267024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_267028:
    // 0x267028: 0xc681004c  lwc1        $f1, 0x4C($s4)
    ctx->pc = 0x267028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26702c: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x26702cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267030: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x267030u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x267034: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x267034u;
    {
        const bool branch_taken_0x267034 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x267038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267034u;
            // 0x267038: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267034) {
            ctx->pc = 0x267040u;
            goto label_267040;
        }
    }
    ctx->pc = 0x26703Cu;
    // 0x26703c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x26703cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_267040:
    // 0x267040: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x267040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x267044: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x267044u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x267048: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x267048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x26704c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x26704cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x267050: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x267050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x267054: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x267054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x267058: 0x27a200a4  addiu       $v0, $sp, 0xA4
    ctx->pc = 0x267058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x26705c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x26705cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267060: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x267060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x267064: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x267064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x267068: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x267068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x26706c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26706Cu;
    {
        const bool branch_taken_0x26706c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26706c) {
            ctx->pc = 0x267080u;
            goto label_267080;
        }
    }
    ctx->pc = 0x267074u;
    // 0x267074: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x267074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x267078: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x267078u;
    {
        const bool branch_taken_0x267078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26707Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267078u;
            // 0x26707c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267078) {
            ctx->pc = 0x267110u;
            goto label_267110;
        }
    }
    ctx->pc = 0x267080u;
label_267080:
    // 0x267080: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x267080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267084: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x267084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267088: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x267088u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26708c: 0x27a700ac  addiu       $a3, $sp, 0xAC
    ctx->pc = 0x26708cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x267090: 0x27a800a8  addiu       $t0, $sp, 0xA8
    ctx->pc = 0x267090u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x267094: 0xc09a43c  jal         func_2690F0
    ctx->pc = 0x267094u;
    SET_GPR_U32(ctx, 31, 0x26709Cu);
    ctx->pc = 0x267098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267094u;
            // 0x267098: 0xafa000ac  sw          $zero, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2690F0u;
    if (runtime->hasFunction(0x2690F0u)) {
        auto targetFn = runtime->lookupFunction(0x2690F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26709Cu; }
        if (ctx->pc != 0x26709Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002690F0_0x2690f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26709Cu; }
        if (ctx->pc != 0x26709Cu) { return; }
    }
    ctx->pc = 0x26709Cu;
label_26709c:
    // 0x26709c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26709Cu;
    {
        const bool branch_taken_0x26709c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2670A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26709Cu;
            // 0x2670a0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26709c) {
            ctx->pc = 0x2670B0u;
            goto label_2670b0;
        }
    }
    ctx->pc = 0x2670A4u;
    // 0x2670a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2670a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2670a8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2670A8u;
    {
        const bool branch_taken_0x2670a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2670ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2670A8u;
            // 0x2670ac: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2670a8) {
            ctx->pc = 0x267110u;
            goto label_267110;
        }
    }
    ctx->pc = 0x2670B0u;
label_2670b0:
    // 0x2670b0: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x2670b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2670b4: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x2670b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2670b8: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x2670b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2670bc: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x2670bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2670c0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2670c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2670c4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2670c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2670c8: 0x45082a  slt         $at, $v0, $a1
    ctx->pc = 0x2670c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2670cc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2670CCu;
    {
        const bool branch_taken_0x2670cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2670D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2670CCu;
            // 0x2670d0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2670cc) {
            ctx->pc = 0x2670E0u;
            goto label_2670e0;
        }
    }
    ctx->pc = 0x2670D4u;
    // 0x2670d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2670d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2670d8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2670D8u;
    {
        const bool branch_taken_0x2670d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2670DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2670D8u;
            // 0x2670dc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2670d8) {
            ctx->pc = 0x267110u;
            goto label_267110;
        }
    }
    ctx->pc = 0x2670E0u;
label_2670e0:
    // 0x2670e0: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x2670e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2670e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2670e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2670e8: 0xc09a5b0  jal         func_2696C0
    ctx->pc = 0x2670E8u;
    SET_GPR_U32(ctx, 31, 0x2670F0u);
    ctx->pc = 0x2670ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2670E8u;
            // 0x2670ec: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2696C0u;
    if (runtime->hasFunction(0x2696C0u)) {
        auto targetFn = runtime->lookupFunction(0x2696C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2670F0u; }
        if (ctx->pc != 0x2670F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002696C0_0x2696c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2670F0u; }
        if (ctx->pc != 0x2670F0u) { return; }
    }
    ctx->pc = 0x2670F0u;
label_2670f0:
    // 0x2670f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2670F0u;
    {
        const bool branch_taken_0x2670f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2670F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2670F0u;
            // 0x2670f4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2670f0) {
            ctx->pc = 0x267108u;
            goto label_267108;
        }
    }
    ctx->pc = 0x2670F8u;
    // 0x2670f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2670f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2670fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2670FCu;
    {
        const bool branch_taken_0x2670fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2670FCu;
            // 0x267100: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2670fc) {
            ctx->pc = 0x267110u;
            goto label_267110;
        }
    }
    ctx->pc = 0x267104u;
    // 0x267104: 0x0  nop
    ctx->pc = 0x267104u;
    // NOP
label_267108:
    // 0x267108: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x267108u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26710c: 0x0  nop
    ctx->pc = 0x26710cu;
    // NOP
label_267110:
    // 0x267110: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x267110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x267114: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x267114u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x267118: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x267118u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26711c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26711cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x267120: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x267120u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267124: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x267124u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x267128: 0x3e00008  jr          $ra
    ctx->pc = 0x267128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26712Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267128u;
            // 0x26712c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x267130u;
}
