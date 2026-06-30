#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00261E50
// Address: 0x261e50 - 0x261ff0
void sub_00261E50_0x261e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261E50_0x261e50");
#endif

    switch (ctx->pc) {
        case 0x261e68u: goto label_261e68;
        default: break;
    }

    ctx->pc = 0x261e50u;

    // 0x261e50: 0x3c0c0064  lui         $t4, 0x64
    ctx->pc = 0x261e50u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)100 << 16));
    // 0x261e54: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x261e54u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261e58: 0x258c02f0  addiu       $t4, $t4, 0x2F0
    ctx->pc = 0x261e58u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 752));
    // 0x261e5c: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x261e5cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261e60: 0x44805000  mtc1        $zero, $f10
    ctx->pc = 0x261e60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x261e64: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x261e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_261e68:
    // 0x261e68: 0x81870002  lb          $a3, 0x2($t4)
    ctx->pc = 0x261e68u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x261e6c: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x261e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x261e70: 0xc24821  addu        $t1, $a2, $v0
    ctx->pc = 0x261e70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x261e74: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x261e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261e78: 0x460a0034  c.lt.s      $f0, $f10
    ctx->pc = 0x261e78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x261e7c: 0x45010040  bc1t        . + 4 + (0x40 << 2)
    ctx->pc = 0x261E7Cu;
    {
        const bool branch_taken_0x261e7c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x261E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261E7Cu;
            // 0x261e80: 0x81880000  lb          $t0, 0x0($t4) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261e7c) {
            ctx->pc = 0x261F80u;
            goto label_261f80;
        }
    }
    ctx->pc = 0x261E84u;
    // 0x261e84: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x261e84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x261e88: 0xc25021  addu        $t2, $a2, $v0
    ctx->pc = 0x261e88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x261e8c: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x261e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261e90: 0x460a0034  c.lt.s      $f0, $f10
    ctx->pc = 0x261e90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x261e94: 0x4501003a  bc1t        . + 4 + (0x3A << 2)
    ctx->pc = 0x261E94u;
    {
        const bool branch_taken_0x261e94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x261e94) {
            ctx->pc = 0x261F80u;
            goto label_261f80;
        }
    }
    ctx->pc = 0x261E9Cu;
    // 0x261e9c: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x261e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x261ea0: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x261ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x261ea4: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x261ea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x261ea8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x261ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x261eac: 0xc56c0004  lwc1        $f12, 0x4($t3)
    ctx->pc = 0x261eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x261eb0: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x261eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261eb4: 0xc4480004  lwc1        $f8, 0x4($v0)
    ctx->pc = 0x261eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x261eb8: 0xc56d0000  lwc1        $f13, 0x0($t3)
    ctx->pc = 0x261eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x261ebc: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x261ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x261ec0: 0xc4490000  lwc1        $f9, 0x0($v0)
    ctx->pc = 0x261ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x261ec4: 0xc4860000  lwc1        $f6, 0x0($a0)
    ctx->pc = 0x261ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x261ec8: 0x460c0c41  sub.s       $f17, $f1, $f12
    ctx->pc = 0x261ec8u;
    ctx->f[17] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x261ecc: 0x460d1481  sub.s       $f18, $f2, $f13
    ctx->pc = 0x261eccu;
    ctx->f[18] = FPU_SUB_S(ctx->f[2], ctx->f[13]);
    // 0x261ed0: 0xc4850004  lwc1        $f5, 0x4($a0)
    ctx->pc = 0x261ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x261ed4: 0xc56b0008  lwc1        $f11, 0x8($t3)
    ctx->pc = 0x261ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x261ed8: 0xc4470008  lwc1        $f7, 0x8($v0)
    ctx->pc = 0x261ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x261edc: 0xc4a30030  lwc1        $f3, 0x30($a1)
    ctx->pc = 0x261edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x261ee0: 0x460d4c01  sub.s       $f16, $f9, $f13
    ctx->pc = 0x261ee0u;
    ctx->f[16] = FPU_SUB_S(ctx->f[9], ctx->f[13]);
    // 0x261ee4: 0xc4a10038  lwc1        $f1, 0x38($a1)
    ctx->pc = 0x261ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261ee8: 0x460c43c1  sub.s       $f15, $f8, $f12
    ctx->pc = 0x261ee8u;
    ctx->f[15] = FPU_SUB_S(ctx->f[8], ctx->f[12]);
    // 0x261eec: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x261eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261ef0: 0xc4a20034  lwc1        $f2, 0x34($a1)
    ctx->pc = 0x261ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x261ef4: 0x460b3b81  sub.s       $f14, $f7, $f11
    ctx->pc = 0x261ef4u;
    ctx->f[14] = FPU_SUB_S(ctx->f[7], ctx->f[11]);
    // 0x261ef8: 0x460d3181  sub.s       $f6, $f6, $f13
    ctx->pc = 0x261ef8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[13]);
    // 0x261efc: 0x460d1a41  sub.s       $f9, $f3, $f13
    ctx->pc = 0x261efcu;
    ctx->f[9] = FPU_SUB_S(ctx->f[3], ctx->f[13]);
    // 0x261f00: 0x460c11c1  sub.s       $f7, $f2, $f12
    ctx->pc = 0x261f00u;
    ctx->f[7] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
    // 0x261f04: 0x460c2941  sub.s       $f5, $f5, $f12
    ctx->pc = 0x261f04u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[12]);
    // 0x261f08: 0x460b0a01  sub.s       $f8, $f1, $f11
    ctx->pc = 0x261f08u;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[11]);
    // 0x261f0c: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x261f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x261f10: 0x461230c2  mul.s       $f3, $f6, $f18
    ctx->pc = 0x261f10u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[18]);
    // 0x261f14: 0x46112842  mul.s       $f1, $f5, $f17
    ctx->pc = 0x261f14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[17]);
    // 0x261f18: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x261f18u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x261f1c: 0x460b2301  sub.s       $f12, $f4, $f11
    ctx->pc = 0x261f1cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[4], ctx->f[11]);
    // 0x261f20: 0x460f28c2  mul.s       $f3, $f5, $f15
    ctx->pc = 0x261f20u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[15]);
    // 0x261f24: 0x46103102  mul.s       $f4, $f6, $f16
    ctx->pc = 0x261f24u;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[16]);
    // 0x261f28: 0x460f3942  mul.s       $f5, $f7, $f15
    ctx->pc = 0x261f28u;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[15]);
    // 0x261f2c: 0x46113842  mul.s       $f1, $f7, $f17
    ctx->pc = 0x261f2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[17]);
    // 0x261f30: 0x460b0001  sub.s       $f0, $f0, $f11
    ctx->pc = 0x261f30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[11]);
    // 0x261f34: 0x46104982  mul.s       $f6, $f9, $f16
    ctx->pc = 0x261f34u;
    ctx->f[6] = FPU_MUL_S(ctx->f[9], ctx->f[16]);
    // 0x261f38: 0x460061dc  madd.s      $f7, $f12, $f0
    ctx->pc = 0x261f38u;
    ctx->f[7] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[0]));
    // 0x261f3c: 0x46053018  adda.s      $f6, $f5
    ctx->pc = 0x261f3cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x261f40: 0x460e415c  madd.s      $f5, $f8, $f14
    ctx->pc = 0x261f40u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[14]));
    // 0x261f44: 0x46032018  adda.s      $f4, $f3
    ctx->pc = 0x261f44u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x261f48: 0x46124882  mul.s       $f2, $f9, $f18
    ctx->pc = 0x261f48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[18]);
    // 0x261f4c: 0x460e60dc  madd.s      $f3, $f12, $f14
    ctx->pc = 0x261f4cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[14]));
    // 0x261f50: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x261f50u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x261f54: 0x4600401c  madd.s      $f0, $f8, $f0
    ctx->pc = 0x261f54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[0]));
    // 0x261f58: 0x46053902  mul.s       $f4, $f7, $f5
    ctx->pc = 0x261f58u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x261f5c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x261f5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x261f60: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x261f60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x261f64: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x261F64u;
    {
        const bool branch_taken_0x261f64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x261f64) {
            ctx->pc = 0x261F78u;
            goto label_261f78;
        }
    }
    ctx->pc = 0x261F6Cu;
    // 0x261f6c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x261F6Cu;
    {
        const bool branch_taken_0x261f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261F6Cu;
            // 0x261f70: 0xad430000  sw          $v1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f6c) {
            ctx->pc = 0x261F80u;
            goto label_261f80;
        }
    }
    ctx->pc = 0x261F74u;
    // 0x261f74: 0x0  nop
    ctx->pc = 0x261f74u;
    // NOP
label_261f78:
    // 0x261f78: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x261f78u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x261f7c: 0x0  nop
    ctx->pc = 0x261f7cu;
    // NOP
label_261f80:
    // 0x261f80: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x261f80u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x261f84: 0x29a20003  slti        $v0, $t5, 0x3
    ctx->pc = 0x261f84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x261f88: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x261f88u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x261f8c: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x261F8Cu;
    {
        const bool branch_taken_0x261f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261F8Cu;
            // 0x261f90: 0x256b0010  addiu       $t3, $t3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f8c) {
            ctx->pc = 0x261E68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_261e68;
        }
    }
    ctx->pc = 0x261F94u;
    // 0x261f94: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x261f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261f98: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x261f98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x261f9c: 0x0  nop
    ctx->pc = 0x261f9cu;
    // NOP
    // 0x261fa0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x261fa0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x261fa4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x261FA4u;
    {
        const bool branch_taken_0x261fa4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x261FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261FA4u;
            // 0x261fa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261fa4) {
            ctx->pc = 0x261FB8u;
            goto label_261fb8;
        }
    }
    ctx->pc = 0x261FACu;
    // 0x261fac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x261FACu;
    {
        const bool branch_taken_0x261fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x261fac) {
            ctx->pc = 0x261FE8u;
            goto label_261fe8;
        }
    }
    ctx->pc = 0x261FB4u;
    // 0x261fb4: 0x0  nop
    ctx->pc = 0x261fb4u;
    // NOP
label_261fb8:
    // 0x261fb8: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x261fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261fbc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x261fbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x261fc0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x261FC0u;
    {
        const bool branch_taken_0x261fc0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x261FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261FC0u;
            // 0x261fc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261fc0) {
            ctx->pc = 0x261FD0u;
            goto label_261fd0;
        }
    }
    ctx->pc = 0x261FC8u;
    // 0x261fc8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x261FC8u;
    {
        const bool branch_taken_0x261fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x261fc8) {
            ctx->pc = 0x261FE8u;
            goto label_261fe8;
        }
    }
    ctx->pc = 0x261FD0u;
label_261fd0:
    // 0x261fd0: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x261fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261fd4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x261fd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x261fd8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x261FD8u;
    {
        const bool branch_taken_0x261fd8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x261FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261FD8u;
            // 0x261fdc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261fd8) {
            ctx->pc = 0x261FE8u;
            goto label_261fe8;
        }
    }
    ctx->pc = 0x261FE0u;
    // 0x261fe0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x261FE0u;
    {
        const bool branch_taken_0x261fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261FE0u;
            // 0x261fe4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261fe0) {
            ctx->pc = 0x261FE8u;
            goto label_261fe8;
        }
    }
    ctx->pc = 0x261FE8u;
label_261fe8:
    // 0x261fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x261FE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x261FF0u;
}
