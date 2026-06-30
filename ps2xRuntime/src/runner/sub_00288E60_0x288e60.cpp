#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00288E60
// Address: 0x288e60 - 0x289260
void sub_00288E60_0x288e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288E60_0x288e60");
#endif

    switch (ctx->pc) {
        case 0x288f18u: goto label_288f18;
        case 0x288f70u: goto label_288f70;
        case 0x289040u: goto label_289040;
        case 0x2890a8u: goto label_2890a8;
        case 0x289100u: goto label_289100;
        case 0x2891d0u: goto label_2891d0;
        default: break;
    }

    ctx->pc = 0x288e60u;

    // 0x288e60: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x288e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x288e64: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x288e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x288e68: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x288e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x288e6c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x288e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x288e70: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x288e70u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288e74: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x288e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x288e78: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x288e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x288e7c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x288e7cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288e80: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x288e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x288e84: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x288e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x288e88: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x288e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x288e8c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x288e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x288e90: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x288e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x288e94: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x288e94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288e98: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x288e98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x288e9c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x288e9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x288ea0: 0xafa400bc  sw          $a0, 0xBC($sp)
    ctx->pc = 0x288ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 4));
    // 0x288ea4: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x288ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x288ea8: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x288EA8u;
    {
        const bool branch_taken_0x288ea8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x288EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288EA8u;
            // 0x288eac: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288ea8) {
            ctx->pc = 0x288EC0u;
            goto label_288ec0;
        }
    }
    ctx->pc = 0x288EB0u;
    // 0x288eb0: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x288eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x288eb4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x288EB4u;
    {
        const bool branch_taken_0x288eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288EB4u;
            // 0x288eb8: 0xc4740004  lwc1        $f20, 0x4($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x288eb4) {
            ctx->pc = 0x288F00u;
            goto label_288f00;
        }
    }
    ctx->pc = 0x288EBCu;
    // 0x288ebc: 0x0  nop
    ctx->pc = 0x288ebcu;
    // NOP
label_288ec0:
    // 0x288ec0: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x288ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x288ec4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x288EC4u;
    {
        const bool branch_taken_0x288ec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x288ec4) {
            ctx->pc = 0x288ED8u;
            goto label_288ed8;
        }
    }
    ctx->pc = 0x288ECCu;
    // 0x288ecc: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x288eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x288ed0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x288ED0u;
    {
        const bool branch_taken_0x288ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288ED0u;
            // 0x288ed4: 0xc4740004  lwc1        $f20, 0x4($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x288ed0) {
            ctx->pc = 0x288F00u;
            goto label_288f00;
        }
    }
    ctx->pc = 0x288ED8u;
label_288ed8:
    // 0x288ed8: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x288ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x288edc: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x288edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x288ee0: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x288ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288ee4: 0xc4740004  lwc1        $f20, 0x4($v1)
    ctx->pc = 0x288ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x288ee8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x288ee8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x288eec: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x288EECu;
    {
        const bool branch_taken_0x288eec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x288eec) {
            ctx->pc = 0x288EFCu;
            goto label_288efc;
        }
    }
    ctx->pc = 0x288EF4u;
    // 0x288ef4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x288EF4u;
    {
        const bool branch_taken_0x288ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x288ef4) {
            ctx->pc = 0x288F00u;
            goto label_288f00;
        }
    }
    ctx->pc = 0x288EFCu;
label_288efc:
    // 0x288efc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x288efcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_288f00:
    // 0x288f00: 0x8e350004  lw          $s5, 0x4($s1)
    ctx->pc = 0x288f00u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x288f04: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x288f04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x288f08: 0x10200061  beqz        $at, . + 4 + (0x61 << 2)
    ctx->pc = 0x288F08u;
    {
        const bool branch_taken_0x288f08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x288F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288F08u;
            // 0x288f0c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288f08) {
            ctx->pc = 0x289090u;
            goto label_289090;
        }
    }
    ctx->pc = 0x288F10u;
    // 0x288f10: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x288f10u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288f14: 0x0  nop
    ctx->pc = 0x288f14u;
    // NOP
label_288f18:
    // 0x288f18: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x288f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x288f1c: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x288f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x288f20: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x288f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288f24: 0x971821  addu        $v1, $a0, $s7
    ctx->pc = 0x288f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x288f28: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x288f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x288f2c: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x288f2cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x288f30: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x288f30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x288f34: 0x45000056  bc1f        . + 4 + (0x56 << 2)
    ctx->pc = 0x288F34u;
    {
        const bool branch_taken_0x288f34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x288f34) {
            ctx->pc = 0x289090u;
            goto label_289090;
        }
    }
    ctx->pc = 0x288F3Cu;
    // 0x288f3c: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x288f3cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x288f40: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x288f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288f44: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x288f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x288f48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x288f48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288f4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x288f4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288f50: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x288f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x288f54: 0x94920000  lhu         $s2, 0x0($a0)
    ctx->pc = 0x288f54u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x288f58: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x288f58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x288f5c: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x288F5Cu;
    {
        const bool branch_taken_0x288f5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x288F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288F5Cu;
            // 0x288f60: 0x46000d40  add.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x288f5c) {
            ctx->pc = 0x289010u;
            goto label_289010;
        }
    }
    ctx->pc = 0x288F64u;
    // 0x288f64: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x288f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x288f68: 0x96650000  lhu         $a1, 0x0($s3)
    ctx->pc = 0x288f68u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x288f6c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x288f6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_288f70:
    // 0x288f70: 0x8cc90000  lw          $t1, 0x0($a2)
    ctx->pc = 0x288f70u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x288f74: 0x95290000  lhu         $t1, 0x0($t1)
    ctx->pc = 0x288f74u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x288f78: 0x1254826  xor         $t1, $t1, $a1
    ctx->pc = 0x288f78u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 5));
    // 0x288f7c: 0x2d290001  sltiu       $t1, $t1, 0x1
    ctx->pc = 0x288f7cu;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x288f80: 0x11200006  beqz        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x288F80u;
    {
        const bool branch_taken_0x288f80 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x288f80) {
            ctx->pc = 0x288F9Cu;
            goto label_288f9c;
        }
    }
    ctx->pc = 0x288F88u;
    // 0x288f88: 0x8cca0004  lw          $t2, 0x4($a2)
    ctx->pc = 0x288f88u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x288f8c: 0x96a90000  lhu         $t1, 0x0($s5)
    ctx->pc = 0x288f8cu;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x288f90: 0x954a0000  lhu         $t2, 0x0($t2)
    ctx->pc = 0x288f90u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x288f94: 0x1494826  xor         $t1, $t2, $t1
    ctx->pc = 0x288f94u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 9));
    // 0x288f98: 0x2d290001  sltiu       $t1, $t1, 0x1
    ctx->pc = 0x288f98u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_288f9c:
    // 0x288f9c: 0x11200004  beqz        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x288F9Cu;
    {
        const bool branch_taken_0x288f9c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x288f9c) {
            ctx->pc = 0x288FB0u;
            goto label_288fb0;
        }
    }
    ctx->pc = 0x288FA4u;
    // 0x288fa4: 0x8cc9000c  lw          $t1, 0xC($a2)
    ctx->pc = 0x288fa4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x288fa8: 0x1324826  xor         $t1, $t1, $s2
    ctx->pc = 0x288fa8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 18));
    // 0x288fac: 0x2d290001  sltiu       $t1, $t1, 0x1
    ctx->pc = 0x288facu;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_288fb0:
    // 0x288fb0: 0x94e3c  dsll32      $t1, $t1, 24
    ctx->pc = 0x288fb0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 24));
    // 0x288fb4: 0x94e3f  dsra32      $t1, $t1, 24
    ctx->pc = 0x288fb4u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 24));
    // 0x288fb8: 0x11200011  beqz        $t1, . + 4 + (0x11 << 2)
    ctx->pc = 0x288FB8u;
    {
        const bool branch_taken_0x288fb8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x288fb8) {
            ctx->pc = 0x289000u;
            goto label_289000;
        }
    }
    ctx->pc = 0x288FC0u;
    // 0x288fc0: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x288fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x288fc4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x288fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x288fc8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x288fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x288fcc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x288fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x288fd0: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x288fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288fd4: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x288fd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x288fd8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x288FD8u;
    {
        const bool branch_taken_0x288fd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x288fd8) {
            ctx->pc = 0x288FF8u;
            goto label_288ff8;
        }
    }
    ctx->pc = 0x288FE0u;
    // 0x288fe0: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x288fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
    // 0x288fe4: 0xac750004  sw          $s5, 0x4($v1)
    ctx->pc = 0x288fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 21));
    // 0x288fe8: 0xac710008  sw          $s1, 0x8($v1)
    ctx->pc = 0x288fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 17));
    // 0x288fec: 0xac72000c  sw          $s2, 0xC($v1)
    ctx->pc = 0x288fecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 18));
    // 0x288ff0: 0xe4750010  swc1        $f21, 0x10($v1)
    ctx->pc = 0x288ff0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x288ff4: 0x0  nop
    ctx->pc = 0x288ff4u;
    // NOP
label_288ff8:
    // 0x288ff8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x288FF8u;
    {
        const bool branch_taken_0x288ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288FF8u;
            // 0x288ffc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288ff8) {
            ctx->pc = 0x289010u;
            goto label_289010;
        }
    }
    ctx->pc = 0x289000u;
label_289000:
    // 0x289000: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x289000u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x289004: 0x103482a  slt         $t1, $t0, $v1
    ctx->pc = 0x289004u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x289008: 0x1520ffd9  bnez        $t1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x289008u;
    {
        const bool branch_taken_0x289008 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x28900Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289008u;
            // 0x28900c: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289008) {
            ctx->pc = 0x288F70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_288f70;
        }
    }
    ctx->pc = 0x289010u;
label_289010:
    // 0x289010: 0x71e3c  dsll32      $v1, $a3, 24
    ctx->pc = 0x289010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 24));
    // 0x289014: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x289014u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x289018: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x289018u;
    {
        const bool branch_taken_0x289018 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x289018) {
            ctx->pc = 0x289078u;
            goto label_289078;
        }
    }
    ctx->pc = 0x289020u;
    // 0x289020: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x289020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x289024: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x289024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x289028: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x289028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x28902c: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x28902cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x289030: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x289030u;
    {
        const bool branch_taken_0x289030 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x289034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289030u;
            // 0x289034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289030) {
            ctx->pc = 0x289040u;
            goto label_289040;
        }
    }
    ctx->pc = 0x289038u;
    // 0x289038: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x289038u;
    SET_GPR_U32(ctx, 31, 0x289040u);
    ctx->pc = 0x28903Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289038u;
            // 0x28903c: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289040u; }
        if (ctx->pc != 0x289040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289040u; }
        if (ctx->pc != 0x289040u) { return; }
    }
    ctx->pc = 0x289040u;
label_289040:
    // 0x289040: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x289040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x289044: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x289044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x289048: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x289048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x28904c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x28904cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x289050: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x289050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x289054: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x289054u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x289058: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x289058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28905c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28905cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x289060: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x289060u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
    // 0x289064: 0xac750004  sw          $s5, 0x4($v1)
    ctx->pc = 0x289064u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 21));
    // 0x289068: 0xac710008  sw          $s1, 0x8($v1)
    ctx->pc = 0x289068u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 17));
    // 0x28906c: 0xac72000c  sw          $s2, 0xC($v1)
    ctx->pc = 0x28906cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 18));
    // 0x289070: 0xe4750010  swc1        $f21, 0x10($v1)
    ctx->pc = 0x289070u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x289074: 0x0  nop
    ctx->pc = 0x289074u;
    // NOP
label_289078:
    // 0x289078: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x289078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x28907c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x28907cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x289080: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x289080u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x289084: 0x1460ffa4  bnez        $v1, . + 4 + (-0x5C << 2)
    ctx->pc = 0x289084u;
    {
        const bool branch_taken_0x289084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x289088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289084u;
            // 0x289088: 0x26f70008  addiu       $s7, $s7, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289084) {
            ctx->pc = 0x288F18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_288f18;
        }
    }
    ctx->pc = 0x28908Cu;
    // 0x28908c: 0x0  nop
    ctx->pc = 0x28908cu;
    // NOP
label_289090:
    // 0x289090: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x289090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x289094: 0x8e350000  lw          $s5, 0x0($s1)
    ctx->pc = 0x289094u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x289098: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x289098u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28909c: 0x10200060  beqz        $at, . + 4 + (0x60 << 2)
    ctx->pc = 0x28909Cu;
    {
        const bool branch_taken_0x28909c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2890A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28909Cu;
            // 0x2890a0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28909c) {
            ctx->pc = 0x289220u;
            goto label_289220;
        }
    }
    ctx->pc = 0x2890A4u;
    // 0x2890a4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2890a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2890a8:
    // 0x2890a8: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x2890a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2890ac: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x2890acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2890b0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2890b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2890b4: 0x971821  addu        $v1, $a0, $s7
    ctx->pc = 0x2890b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x2890b8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2890b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2890bc: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x2890bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x2890c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2890c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2890c4: 0x45000056  bc1f        . + 4 + (0x56 << 2)
    ctx->pc = 0x2890C4u;
    {
        const bool branch_taken_0x2890c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2890c4) {
            ctx->pc = 0x289220u;
            goto label_289220;
        }
    }
    ctx->pc = 0x2890CCu;
    // 0x2890cc: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x2890ccu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2890d0: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x2890d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2890d4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2890d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2890d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2890d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2890dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2890dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2890e0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2890e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2890e4: 0x94920000  lhu         $s2, 0x0($a0)
    ctx->pc = 0x2890e4u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2890e8: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2890e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2890ec: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x2890ECu;
    {
        const bool branch_taken_0x2890ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2890F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2890ECu;
            // 0x2890f0: 0x46000d40  add.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2890ec) {
            ctx->pc = 0x2891A0u;
            goto label_2891a0;
        }
    }
    ctx->pc = 0x2890F4u;
    // 0x2890f4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2890f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2890f8: 0x96a50000  lhu         $a1, 0x0($s5)
    ctx->pc = 0x2890f8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2890fc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2890fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_289100:
    // 0x289100: 0x8cc90000  lw          $t1, 0x0($a2)
    ctx->pc = 0x289100u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x289104: 0x95290000  lhu         $t1, 0x0($t1)
    ctx->pc = 0x289104u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x289108: 0x1254826  xor         $t1, $t1, $a1
    ctx->pc = 0x289108u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 5));
    // 0x28910c: 0x2d290001  sltiu       $t1, $t1, 0x1
    ctx->pc = 0x28910cu;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x289110: 0x11200006  beqz        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x289110u;
    {
        const bool branch_taken_0x289110 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x289110) {
            ctx->pc = 0x28912Cu;
            goto label_28912c;
        }
    }
    ctx->pc = 0x289118u;
    // 0x289118: 0x8cca0004  lw          $t2, 0x4($a2)
    ctx->pc = 0x289118u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x28911c: 0x96690000  lhu         $t1, 0x0($s3)
    ctx->pc = 0x28911cu;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x289120: 0x954a0000  lhu         $t2, 0x0($t2)
    ctx->pc = 0x289120u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x289124: 0x1494826  xor         $t1, $t2, $t1
    ctx->pc = 0x289124u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 9));
    // 0x289128: 0x2d290001  sltiu       $t1, $t1, 0x1
    ctx->pc = 0x289128u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_28912c:
    // 0x28912c: 0x11200004  beqz        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28912Cu;
    {
        const bool branch_taken_0x28912c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x28912c) {
            ctx->pc = 0x289140u;
            goto label_289140;
        }
    }
    ctx->pc = 0x289134u;
    // 0x289134: 0x8cc9000c  lw          $t1, 0xC($a2)
    ctx->pc = 0x289134u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x289138: 0x1324826  xor         $t1, $t1, $s2
    ctx->pc = 0x289138u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 18));
    // 0x28913c: 0x2d290001  sltiu       $t1, $t1, 0x1
    ctx->pc = 0x28913cu;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_289140:
    // 0x289140: 0x94e3c  dsll32      $t1, $t1, 24
    ctx->pc = 0x289140u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 24));
    // 0x289144: 0x94e3f  dsra32      $t1, $t1, 24
    ctx->pc = 0x289144u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 24));
    // 0x289148: 0x11200011  beqz        $t1, . + 4 + (0x11 << 2)
    ctx->pc = 0x289148u;
    {
        const bool branch_taken_0x289148 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x289148) {
            ctx->pc = 0x289190u;
            goto label_289190;
        }
    }
    ctx->pc = 0x289150u;
    // 0x289150: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x289150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x289154: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x289154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x289158: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x289158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28915c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x28915cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x289160: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x289160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289164: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x289164u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x289168: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x289168u;
    {
        const bool branch_taken_0x289168 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x289168) {
            ctx->pc = 0x289188u;
            goto label_289188;
        }
    }
    ctx->pc = 0x289170u;
    // 0x289170: 0xac750000  sw          $s5, 0x0($v1)
    ctx->pc = 0x289170u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 21));
    // 0x289174: 0xac730004  sw          $s3, 0x4($v1)
    ctx->pc = 0x289174u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 19));
    // 0x289178: 0xac710008  sw          $s1, 0x8($v1)
    ctx->pc = 0x289178u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 17));
    // 0x28917c: 0xac72000c  sw          $s2, 0xC($v1)
    ctx->pc = 0x28917cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 18));
    // 0x289180: 0xe4750010  swc1        $f21, 0x10($v1)
    ctx->pc = 0x289180u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x289184: 0x0  nop
    ctx->pc = 0x289184u;
    // NOP
label_289188:
    // 0x289188: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x289188u;
    {
        const bool branch_taken_0x289188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28918Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289188u;
            // 0x28918c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289188) {
            ctx->pc = 0x2891A0u;
            goto label_2891a0;
        }
    }
    ctx->pc = 0x289190u;
label_289190:
    // 0x289190: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x289190u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x289194: 0x103482a  slt         $t1, $t0, $v1
    ctx->pc = 0x289194u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x289198: 0x1520ffd9  bnez        $t1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x289198u;
    {
        const bool branch_taken_0x289198 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x28919Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289198u;
            // 0x28919c: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289198) {
            ctx->pc = 0x289100u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_289100;
        }
    }
    ctx->pc = 0x2891A0u;
label_2891a0:
    // 0x2891a0: 0x71e3c  dsll32      $v1, $a3, 24
    ctx->pc = 0x2891a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 24));
    // 0x2891a4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2891a4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2891a8: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2891A8u;
    {
        const bool branch_taken_0x2891a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2891a8) {
            ctx->pc = 0x289208u;
            goto label_289208;
        }
    }
    ctx->pc = 0x2891B0u;
    // 0x2891b0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2891b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2891b4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2891b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2891b8: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x2891b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x2891bc: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x2891bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x2891c0: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2891C0u;
    {
        const bool branch_taken_0x2891c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2891C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2891C0u;
            // 0x2891c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2891c0) {
            ctx->pc = 0x2891D0u;
            goto label_2891d0;
        }
    }
    ctx->pc = 0x2891C8u;
    // 0x2891c8: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x2891C8u;
    SET_GPR_U32(ctx, 31, 0x2891D0u);
    ctx->pc = 0x2891CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2891C8u;
            // 0x2891cc: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2891D0u; }
        if (ctx->pc != 0x2891D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2891D0u; }
        if (ctx->pc != 0x2891D0u) { return; }
    }
    ctx->pc = 0x2891D0u;
label_2891d0:
    // 0x2891d0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2891d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2891d4: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x2891d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2891d8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2891d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2891dc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2891dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2891e0: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x2891e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x2891e4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2891e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2891e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2891e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2891ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2891ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2891f0: 0xac750000  sw          $s5, 0x0($v1)
    ctx->pc = 0x2891f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 21));
    // 0x2891f4: 0xac730004  sw          $s3, 0x4($v1)
    ctx->pc = 0x2891f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 19));
    // 0x2891f8: 0xac710008  sw          $s1, 0x8($v1)
    ctx->pc = 0x2891f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 17));
    // 0x2891fc: 0xac72000c  sw          $s2, 0xC($v1)
    ctx->pc = 0x2891fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 18));
    // 0x289200: 0xe4750010  swc1        $f21, 0x10($v1)
    ctx->pc = 0x289200u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x289204: 0x0  nop
    ctx->pc = 0x289204u;
    // NOP
label_289208:
    // 0x289208: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x289208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x28920c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x28920cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x289210: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x289210u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x289214: 0x1460ffa4  bnez        $v1, . + 4 + (-0x5C << 2)
    ctx->pc = 0x289214u;
    {
        const bool branch_taken_0x289214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x289218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289214u;
            // 0x289218: 0x26f70008  addiu       $s7, $s7, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289214) {
            ctx->pc = 0x2890A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2890a8;
        }
    }
    ctx->pc = 0x28921Cu;
    // 0x28921c: 0x0  nop
    ctx->pc = 0x28921cu;
    // NOP
label_289220:
    // 0x289220: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x289220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x289224: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x289224u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x289228: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x289228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x28922c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x28922cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x289230: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x289230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x289234: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x289234u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x289238: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x289238u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28923c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x28923cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x289240: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x289240u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x289244: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x289244u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x289248: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x289248u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28924c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28924cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x289250: 0x3e00008  jr          $ra
    ctx->pc = 0x289250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289250u;
            // 0x289254: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x289258u;
    // 0x289258: 0x0  nop
    ctx->pc = 0x289258u;
    // NOP
    // 0x28925c: 0x0  nop
    ctx->pc = 0x28925cu;
    // NOP
}
