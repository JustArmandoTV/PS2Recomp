#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00137EC0
// Address: 0x137ec0 - 0x137fc0
void sub_00137EC0_0x137ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137EC0_0x137ec0");
#endif

    switch (ctx->pc) {
        case 0x137ed4u: goto label_137ed4;
        default: break;
    }

    ctx->pc = 0x137ec0u;

    // 0x137ec0: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x137ec0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137ec4: 0x2d010002  sltiu       $at, $t0, 0x2
    ctx->pc = 0x137ec4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x137ec8: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x137EC8u;
    {
        const bool branch_taken_0x137ec8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x137ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137EC8u;
            // 0x137ecc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137ec8) {
            ctx->pc = 0x137F10u;
            goto label_137f10;
        }
    }
    ctx->pc = 0x137ED0u;
    // 0x137ed0: 0x1281821  addu        $v1, $t1, $t0
    ctx->pc = 0x137ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_137ed4:
    // 0x137ed4: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x137ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x137ed8: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x137ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x137edc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x137edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x137ee0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x137ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137ee4: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x137ee4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137ee8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x137EE8u;
    {
        const bool branch_taken_0x137ee8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x137ee8) {
            ctx->pc = 0x137EF8u;
            goto label_137ef8;
        }
    }
    ctx->pc = 0x137EF0u;
    // 0x137ef0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x137EF0u;
    {
        const bool branch_taken_0x137ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137EF0u;
            // 0x137ef4: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137ef0) {
            ctx->pc = 0x137F00u;
            goto label_137f00;
        }
    }
    ctx->pc = 0x137EF8u;
label_137ef8:
    // 0x137ef8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x137ef8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137efc: 0x0  nop
    ctx->pc = 0x137efcu;
    // NOP
label_137f00:
    // 0x137f00: 0x1091823  subu        $v1, $t0, $t1
    ctx->pc = 0x137f00u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x137f04: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x137f04u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x137f08: 0x5020fff2  beql        $at, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x137F08u;
    {
        const bool branch_taken_0x137f08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x137f08) {
            ctx->pc = 0x137F0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x137F08u;
            // 0x137f0c: 0x1281821  addu        $v1, $t1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x137ED4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_137ed4;
        }
    }
    ctx->pc = 0x137F10u;
label_137f10:
    // 0x137f10: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x137f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x137f14: 0x92900  sll         $a1, $t1, 4
    ctx->pc = 0x137f14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x137f18: 0x123182a  slt         $v1, $t1, $v1
    ctx->pc = 0x137f18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x137f1c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x137F1Cu;
    {
        const bool branch_taken_0x137f1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x137F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137F1Cu;
            // 0x137f20: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137f1c) {
            ctx->pc = 0x137F30u;
            goto label_137f30;
        }
    }
    ctx->pc = 0x137F24u;
    // 0x137f24: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x137f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137f28: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x137F28u;
    {
        const bool branch_taken_0x137f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137F28u;
            // 0x137f2c: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x137f28) {
            ctx->pc = 0x137FACu;
            goto label_137fac;
        }
    }
    ctx->pc = 0x137F30u;
label_137f30:
    // 0x137f30: 0xc4860000  lwc1        $f6, 0x0($a0)
    ctx->pc = 0x137f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x137f34: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x137f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
    // 0x137f38: 0xc4850010  lwc1        $f5, 0x10($a0)
    ctx->pc = 0x137f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x137f3c: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x137f3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x137f40: 0x46066081  sub.s       $f2, $f12, $f6
    ctx->pc = 0x137f40u;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[6]);
    // 0x137f44: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x137f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x137f48: 0x46062a81  sub.s       $f10, $f5, $f6
    ctx->pc = 0x137f48u;
    ctx->f[10] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
    // 0x137f4c: 0x460a11c3  div.s       $f7, $f2, $f10
    ctx->pc = 0x137f4cu;
    if (ctx->f[10] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[7] = ctx->f[2] / ctx->f[10];
    // 0x137f50: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x137f50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x137f54: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x137f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x137f58: 0xc4890004  lwc1        $f9, 0x4($a0)
    ctx->pc = 0x137f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x137f5c: 0xc4830014  lwc1        $f3, 0x14($a0)
    ctx->pc = 0x137f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x137f60: 0xc4860018  lwc1        $f6, 0x18($a0)
    ctx->pc = 0x137f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x137f64: 0xc485000c  lwc1        $f5, 0xC($a0)
    ctx->pc = 0x137f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x137f68: 0x46091a01  sub.s       $f8, $f3, $f9
    ctx->pc = 0x137f68u;
    ctx->f[8] = FPU_SUB_S(ctx->f[3], ctx->f[9]);
    // 0x137f6c: 0x460628c0  add.s       $f3, $f5, $f6
    ctx->pc = 0x137f6cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x137f70: 0x4603501a  mula.s      $f10, $f3
    ctx->pc = 0x137f70u;
    ctx->f[31] = FPU_MUL_S(ctx->f[10], ctx->f[3]);
    // 0x137f74: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x137f74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x137f78: 0x460820dc  madd.s      $f3, $f4, $f8
    ctx->pc = 0x137f78u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[8]));
    // 0x137f7c: 0x46061018  adda.s      $f2, $f6
    ctx->pc = 0x137f7cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x137f80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x137f80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137f84: 0x0  nop
    ctx->pc = 0x137f84u;
    // NOP
    // 0x137f88: 0x4605085c  madd.s      $f1, $f1, $f5
    ctx->pc = 0x137f88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[5]));
    // 0x137f8c: 0x4608001a  mula.s      $f0, $f8
    ctx->pc = 0x137f8cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x137f90: 0x4601501f  msuba.s     $f10, $f1
    ctx->pc = 0x137f90u;
    ctx->f[31] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[1]));
    // 0x137f94: 0x4607181c  madd.s      $f0, $f3, $f7
    ctx->pc = 0x137f94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[7]));
    // 0x137f98: 0x4600381a  mula.s      $f7, $f0
    ctx->pc = 0x137f98u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x137f9c: 0x4605501c  madd.s      $f0, $f10, $f5
    ctx->pc = 0x137f9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[5]));
    // 0x137fa0: 0x46091018  adda.s      $f2, $f9
    ctx->pc = 0x137fa0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[9]);
    // 0x137fa4: 0x4600381c  madd.s      $f0, $f7, $f0
    ctx->pc = 0x137fa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[0]));
    // 0x137fa8: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x137fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_137fac:
    // 0x137fac: 0x3e00008  jr          $ra
    ctx->pc = 0x137FACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x137FB4u;
    // 0x137fb4: 0x0  nop
    ctx->pc = 0x137fb4u;
    // NOP
    // 0x137fb8: 0x0  nop
    ctx->pc = 0x137fb8u;
    // NOP
    // 0x137fbc: 0x0  nop
    ctx->pc = 0x137fbcu;
    // NOP
}
