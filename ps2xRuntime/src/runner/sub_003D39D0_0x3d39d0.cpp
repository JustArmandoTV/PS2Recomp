#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003D39D0
// Address: 0x3d39d0 - 0x3d3c00
void sub_003D39D0_0x3d39d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D39D0_0x3d39d0");
#endif

    switch (ctx->pc) {
        case 0x3d3a94u: goto label_3d3a94;
        case 0x3d3ab8u: goto label_3d3ab8;
        case 0x3d3b28u: goto label_3d3b28;
        case 0x3d3b34u: goto label_3d3b34;
        case 0x3d3b40u: goto label_3d3b40;
        case 0x3d3b74u: goto label_3d3b74;
        case 0x3d3b80u: goto label_3d3b80;
        case 0x3d3b8cu: goto label_3d3b8c;
        case 0x3d3ba4u: goto label_3d3ba4;
        case 0x3d3bb0u: goto label_3d3bb0;
        case 0x3d3bbcu: goto label_3d3bbc;
        default: break;
    }

    ctx->pc = 0x3d39d0u;

    // 0x3d39d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3d39d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3d39d4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3d39d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3d39d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d39d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3d39dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d39dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3d39e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d39e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d39e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d39e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d39e8: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x3d39e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x3d39ec: 0x8c450c78  lw          $a1, 0xC78($v0)
    ctx->pc = 0x3d39ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
    // 0x3d39f0: 0xc4620028  lwc1        $f2, 0x28($v1)
    ctx->pc = 0x3d39f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3d39f4: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x3d39f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x3d39f8: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x3d39f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3d39fc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3d39fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3d3a00: 0x0  nop
    ctx->pc = 0x3d3a00u;
    // NOP
    // 0x3d3a04: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3d3a04u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3d3a08: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x3d3a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
    // 0x3d3a0c: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x3d3a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x3d3a10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3d3a10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d3a14: 0x0  nop
    ctx->pc = 0x3d3a14u;
    // NOP
    // 0x3d3a18: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x3d3a18u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x3d3a1c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3d3a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3d3a20: 0xe4810200  swc1        $f1, 0x200($a0)
    ctx->pc = 0x3d3a20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 512), bits); }
    // 0x3d3a24: 0xc461002c  lwc1        $f1, 0x2C($v1)
    ctx->pc = 0x3d3a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d3a28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d3a28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d3a2c: 0x0  nop
    ctx->pc = 0x3d3a2cu;
    // NOP
    // 0x3d3a30: 0xe4810204  swc1        $f1, 0x204($a0)
    ctx->pc = 0x3d3a30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 516), bits); }
    // 0x3d3a34: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x3d3a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x3d3a38: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x3d3a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d3a3c: 0xe4810208  swc1        $f1, 0x208($a0)
    ctx->pc = 0x3d3a3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 520), bits); }
    // 0x3d3a40: 0xac80020c  sw          $zero, 0x20C($a0)
    ctx->pc = 0x3d3a40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 524), GPR_U32(ctx, 0));
    // 0x3d3a44: 0xac800210  sw          $zero, 0x210($a0)
    ctx->pc = 0x3d3a44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 528), GPR_U32(ctx, 0));
    // 0x3d3a48: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x3d3a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x3d3a4c: 0xac82021c  sw          $v0, 0x21C($a0)
    ctx->pc = 0x3d3a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 540), GPR_U32(ctx, 2));
    // 0x3d3a50: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x3d3a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d3a54: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3d3a54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d3a58: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3D3A58u;
    {
        const bool branch_taken_0x3d3a58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3D3A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3A58u;
            // 0x3d3a5c: 0x24700024  addiu       $s0, $v1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3a58) {
            ctx->pc = 0x3D3A70u;
            goto label_3d3a70;
        }
    }
    ctx->pc = 0x3D3A60u;
    // 0x3d3a60: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d3a60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3d3a64: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3d3a64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3d3a68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D3A68u;
    {
        const bool branch_taken_0x3d3a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3A68u;
            // 0x3d3a6c: 0x262401a0  addiu       $a0, $s1, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3a68) {
            ctx->pc = 0x3D3A8Cu;
            goto label_3d3a8c;
        }
    }
    ctx->pc = 0x3D3A70u;
label_3d3a70:
    // 0x3d3a70: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3d3a70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3d3a74: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3d3a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3d3a78: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d3a78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3d3a7c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3d3a7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3d3a80: 0x0  nop
    ctx->pc = 0x3d3a80u;
    // NOP
    // 0x3d3a84: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3d3a84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3d3a88: 0x262401a0  addiu       $a0, $s1, 0x1A0
    ctx->pc = 0x3d3a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
label_3d3a8c:
    // 0x3d3a8c: 0xc0b89e4  jal         func_2E2790
    ctx->pc = 0x3D3A8Cu;
    SET_GPR_U32(ctx, 31, 0x3D3A94u);
    ctx->pc = 0x3D3A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3A8Cu;
            // 0x3d3a90: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2790u;
    if (runtime->hasFunction(0x2E2790u)) {
        auto targetFn = runtime->lookupFunction(0x2E2790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3A94u; }
        if (ctx->pc != 0x3D3A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2790_0x2e2790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3A94u; }
        if (ctx->pc != 0x3D3A94u) { return; }
    }
    ctx->pc = 0x3D3A94u;
label_3d3a94:
    // 0x3d3a94: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x3d3a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x3d3a98: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x3d3a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x3d3a9c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x3d3a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x3d3aa0: 0xc62101d4  lwc1        $f1, 0x1D4($s1)
    ctx->pc = 0x3d3aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d3aa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d3aa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d3aa8: 0xc62c01d0  lwc1        $f12, 0x1D0($s1)
    ctx->pc = 0x3d3aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3d3aac: 0xc62e01d8  lwc1        $f14, 0x1D8($s1)
    ctx->pc = 0x3d3aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3d3ab0: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x3D3AB0u;
    SET_GPR_U32(ctx, 31, 0x3D3AB8u);
    ctx->pc = 0x3D3AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3AB0u;
            // 0x3d3ab4: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3AB8u; }
        if (ctx->pc != 0x3D3AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3AB8u; }
        if (ctx->pc != 0x3D3AB8u) { return; }
    }
    ctx->pc = 0x3D3AB8u;
label_3d3ab8:
    // 0x3d3ab8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3d3ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3d3abc: 0x8c430c78  lw          $v1, 0xC78($v0)
    ctx->pc = 0x3d3abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
    // 0x3d3ac0: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x3d3ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d3ac4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3d3ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3d3ac8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d3ac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d3acc: 0x0  nop
    ctx->pc = 0x3d3accu;
    // NOP
    // 0x3d3ad0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3d3ad0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d3ad4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3D3AD4u;
    {
        const bool branch_taken_0x3d3ad4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3D3AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3AD4u;
            // 0x3d3ad8: 0x8c650008  lw          $a1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3ad4) {
            ctx->pc = 0x3D3AECu;
            goto label_3d3aec;
        }
    }
    ctx->pc = 0x3D3ADCu;
    // 0x3d3adc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d3adcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3d3ae0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3d3ae0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3d3ae4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D3AE4u;
    {
        const bool branch_taken_0x3d3ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3AE4u;
            // 0x3d3ae8: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3ae4) {
            ctx->pc = 0x3D3B08u;
            goto label_3d3b08;
        }
    }
    ctx->pc = 0x3D3AECu;
label_3d3aec:
    // 0x3d3aec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3d3aecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3d3af0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3d3af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3d3af4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d3af4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3d3af8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3d3af8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3d3afc: 0x0  nop
    ctx->pc = 0x3d3afcu;
    // NOP
    // 0x3d3b00: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3d3b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3d3b04: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3d3b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3d3b08:
    // 0x3d3b08: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x3d3b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3d3b0c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3d3b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3d3b10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3d3b10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3d3b14: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3d3b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3d3b18: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x3d3b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3d3b1c: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x3d3b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3d3b20: 0xc04cc90  jal         func_133240
    ctx->pc = 0x3D3B20u;
    SET_GPR_U32(ctx, 31, 0x3D3B28u);
    ctx->pc = 0x3D3B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3B20u;
            // 0x3d3b24: 0x24c50010  addiu       $a1, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3B28u; }
        if (ctx->pc != 0x3D3B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3B28u; }
        if (ctx->pc != 0x3D3B28u) { return; }
    }
    ctx->pc = 0x3D3B28u;
label_3d3b28:
    // 0x3d3b28: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3d3b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3d3b2c: 0xc04cc44  jal         func_133110
    ctx->pc = 0x3D3B2Cu;
    SET_GPR_U32(ctx, 31, 0x3D3B34u);
    ctx->pc = 0x3D3B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3B2Cu;
            // 0x3d3b30: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3B34u; }
        if (ctx->pc != 0x3D3B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3B34u; }
        if (ctx->pc != 0x3D3B34u) { return; }
    }
    ctx->pc = 0x3D3B34u;
label_3d3b34:
    // 0x3d3b34: 0xc7ad0038  lwc1        $f13, 0x38($sp)
    ctx->pc = 0x3d3b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3d3b38: 0xc04780a  jal         func_11E028
    ctx->pc = 0x3D3B38u;
    SET_GPR_U32(ctx, 31, 0x3D3B40u);
    ctx->pc = 0x3D3B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3B38u;
            // 0x3d3b3c: 0xc7ac0030  lwc1        $f12, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3B40u; }
        if (ctx->pc != 0x3D3B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3B40u; }
        if (ctx->pc != 0x3D3B40u) { return; }
    }
    ctx->pc = 0x3D3B40u;
label_3d3b40:
    // 0x3d3b40: 0x3c034622  lui         $v1, 0x4622
    ctx->pc = 0x3d3b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17954 << 16));
    // 0x3d3b44: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3d3b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3d3b48: 0x3463f983  ori         $v1, $v1, 0xF983
    ctx->pc = 0x3d3b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63875);
    // 0x3d3b4c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3d3b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3d3b50: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3d3b50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d3b54: 0x0  nop
    ctx->pc = 0x3d3b54u;
    // NOP
    // 0x3d3b58: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3d3b58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3d3b5c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d3b5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3d3b60: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3d3b60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3d3b64: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3d3b64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3d3b68: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3d3b68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3d3b6c: 0xc04c970  jal         func_1325C0
    ctx->pc = 0x3D3B6Cu;
    SET_GPR_U32(ctx, 31, 0x3D3B74u);
    ctx->pc = 0x3D3B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3B6Cu;
            // 0x3d3b70: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3B74u; }
        if (ctx->pc != 0x3D3B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3B74u; }
        if (ctx->pc != 0x3D3B74u) { return; }
    }
    ctx->pc = 0x3D3B74u;
label_3d3b74:
    // 0x3d3b74: 0x26240150  addiu       $a0, $s1, 0x150
    ctx->pc = 0x3d3b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x3d3b78: 0xc04c74c  jal         func_131D30
    ctx->pc = 0x3D3B78u;
    SET_GPR_U32(ctx, 31, 0x3D3B80u);
    ctx->pc = 0x3D3B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3B78u;
            // 0x3d3b7c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3B80u; }
        if (ctx->pc != 0x3D3B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3B80u; }
        if (ctx->pc != 0x3D3B80u) { return; }
    }
    ctx->pc = 0x3D3B80u;
label_3d3b80:
    // 0x3d3b80: 0x26240160  addiu       $a0, $s1, 0x160
    ctx->pc = 0x3d3b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    // 0x3d3b84: 0xc04c74c  jal         func_131D30
    ctx->pc = 0x3D3B84u;
    SET_GPR_U32(ctx, 31, 0x3D3B8Cu);
    ctx->pc = 0x3D3B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3B84u;
            // 0x3d3b88: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3B8Cu; }
        if (ctx->pc != 0x3D3B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3B8Cu; }
        if (ctx->pc != 0x3D3B8Cu) { return; }
    }
    ctx->pc = 0x3D3B8Cu;
label_3d3b8c:
    // 0x3d3b8c: 0xae200180  sw          $zero, 0x180($s1)
    ctx->pc = 0x3d3b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 384), GPR_U32(ctx, 0));
    // 0x3d3b90: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3d3b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3d3b94: 0xae220184  sw          $v0, 0x184($s1)
    ctx->pc = 0x3d3b94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 2));
    // 0x3d3b98: 0x26240170  addiu       $a0, $s1, 0x170
    ctx->pc = 0x3d3b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
    // 0x3d3b9c: 0xc04c74c  jal         func_131D30
    ctx->pc = 0x3D3B9Cu;
    SET_GPR_U32(ctx, 31, 0x3D3BA4u);
    ctx->pc = 0x3D3BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3B9Cu;
            // 0x3d3ba0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3BA4u; }
        if (ctx->pc != 0x3D3BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3BA4u; }
        if (ctx->pc != 0x3D3BA4u) { return; }
    }
    ctx->pc = 0x3D3BA4u;
label_3d3ba4:
    // 0x3d3ba4: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3d3ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3d3ba8: 0xc04c720  jal         func_131C80
    ctx->pc = 0x3D3BA8u;
    SET_GPR_U32(ctx, 31, 0x3D3BB0u);
    ctx->pc = 0x3D3BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3BA8u;
            // 0x3d3bac: 0x26250170  addiu       $a1, $s1, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3BB0u; }
        if (ctx->pc != 0x3D3BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3BB0u; }
        if (ctx->pc != 0x3D3BB0u) { return; }
    }
    ctx->pc = 0x3D3BB0u;
label_3d3bb0:
    // 0x3d3bb0: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x3d3bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x3d3bb4: 0xc04c720  jal         func_131C80
    ctx->pc = 0x3D3BB4u;
    SET_GPR_U32(ctx, 31, 0x3D3BBCu);
    ctx->pc = 0x3D3BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3BB4u;
            // 0x3d3bb8: 0x26250170  addiu       $a1, $s1, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3BBCu; }
        if (ctx->pc != 0x3D3BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D3BBCu; }
        if (ctx->pc != 0x3D3BBCu) { return; }
    }
    ctx->pc = 0x3D3BBCu;
label_3d3bbc:
    // 0x3d3bbc: 0xa2200214  sb          $zero, 0x214($s1)
    ctx->pc = 0x3d3bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 532), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d3bc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d3bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d3bc4: 0xa2230215  sb          $v1, 0x215($s1)
    ctx->pc = 0x3d3bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 533), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d3bc8: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x3d3bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x3d3bcc: 0xa2200216  sb          $zero, 0x216($s1)
    ctx->pc = 0x3d3bccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 534), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d3bd0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3d3bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3d3bd4: 0xa224004c  sb          $a0, 0x4C($s1)
    ctx->pc = 0x3d3bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 76), (uint8_t)GPR_U32(ctx, 4));
    // 0x3d3bd8: 0xa2230064  sb          $v1, 0x64($s1)
    ctx->pc = 0x3d3bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d3bdc: 0xa2200065  sb          $zero, 0x65($s1)
    ctx->pc = 0x3d3bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 101), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d3be0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d3be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d3be4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d3be4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d3be8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d3be8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d3bec: 0x3e00008  jr          $ra
    ctx->pc = 0x3D3BECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D3BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3BECu;
            // 0x3d3bf0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D3BF4u;
    // 0x3d3bf4: 0x0  nop
    ctx->pc = 0x3d3bf4u;
    // NOP
    // 0x3d3bf8: 0x0  nop
    ctx->pc = 0x3d3bf8u;
    // NOP
    // 0x3d3bfc: 0x0  nop
    ctx->pc = 0x3d3bfcu;
    // NOP
}
