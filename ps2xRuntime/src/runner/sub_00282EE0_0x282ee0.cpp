#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00282EE0
// Address: 0x282ee0 - 0x283270
void sub_00282EE0_0x282ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282EE0_0x282ee0");
#endif

    switch (ctx->pc) {
        case 0x282f10u: goto label_282f10;
        case 0x282f50u: goto label_282f50;
        case 0x282f68u: goto label_282f68;
        case 0x282f78u: goto label_282f78;
        case 0x283248u: goto label_283248;
        default: break;
    }

    ctx->pc = 0x282ee0u;

    // 0x282ee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x282ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x282ee4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x282ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x282ee8: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x282ee8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x282eec: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x282eecu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x282ef0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x282ef0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x282ef4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x282ef4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x282ef8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x282ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x282efc: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x282efcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x282f00: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x282F00u;
    {
        const bool branch_taken_0x282f00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x282F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282F00u;
            // 0x282f04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282f00) {
            ctx->pc = 0x282F30u;
            goto label_282f30;
        }
    }
    ctx->pc = 0x282F08u;
    // 0x282f08: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x282f08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282f0c: 0x0  nop
    ctx->pc = 0x282f0cu;
    // NOP
label_282f10:
    // 0x282f10: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x282f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x282f14: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x282f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x282f18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x282f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x282f1c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x282f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x282f20: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x282f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x282f24: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x282f24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x282f28: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x282F28u;
    {
        const bool branch_taken_0x282f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282F28u;
            // 0x282f2c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282f28) {
            ctx->pc = 0x282F10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_282f10;
        }
    }
    ctx->pc = 0x282F30u;
label_282f30:
    // 0x282f30: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x282f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x282f34: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x282f34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x282f38: 0x102000c1  beqz        $at, . + 4 + (0xC1 << 2)
    ctx->pc = 0x282F38u;
    {
        const bool branch_taken_0x282f38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x282F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282F38u;
            // 0x282f3c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282f38) {
            ctx->pc = 0x283240u;
            goto label_283240;
        }
    }
    ctx->pc = 0x282F40u;
    // 0x282f40: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x282f40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x282f44: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x282f44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282f48: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x282f48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x282f4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x282f4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_282f50:
    // 0x282f50: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x282f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x282f54: 0x258b0001  addiu       $t3, $t4, 0x1
    ctx->pc = 0x282f54u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x282f58: 0x165082a  slt         $at, $t3, $a1
    ctx->pc = 0x282f58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x282f5c: 0x102000b4  beqz        $at, . + 4 + (0xB4 << 2)
    ctx->pc = 0x282F5Cu;
    {
        const bool branch_taken_0x282f5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x282F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282F5Cu;
            // 0x282f60: 0xb4100  sll         $t0, $t3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282f5c) {
            ctx->pc = 0x283230u;
            goto label_283230;
        }
    }
    ctx->pc = 0x282F64u;
    // 0x282f64: 0x0  nop
    ctx->pc = 0x282f64u;
    // NOP
label_282f68:
    // 0x282f68: 0x256a0001  addiu       $t2, $t3, 0x1
    ctx->pc = 0x282f68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x282f6c: 0x145082a  slt         $at, $t2, $a1
    ctx->pc = 0x282f6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x282f70: 0x102000ab  beqz        $at, . + 4 + (0xAB << 2)
    ctx->pc = 0x282F70u;
    {
        const bool branch_taken_0x282f70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x282F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282F70u;
            // 0x282f74: 0xa3900  sll         $a3, $t2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282f70) {
            ctx->pc = 0x283220u;
            goto label_283220;
        }
    }
    ctx->pc = 0x282F78u;
label_282f78:
    // 0x282f78: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x282f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x282f7c: 0x492821  addu        $a1, $v0, $t1
    ctx->pc = 0x282f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x282f80: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x282f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x282f84: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x282f84u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282f88: 0x4501009f  bc1t        . + 4 + (0x9F << 2)
    ctx->pc = 0x282F88u;
    {
        const bool branch_taken_0x282f88 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x282F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282F88u;
            // 0x282f8c: 0x483021  addu        $a2, $v0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282f88) {
            ctx->pc = 0x283208u;
            goto label_283208;
        }
    }
    ctx->pc = 0x282F90u;
    // 0x282f90: 0xc4c2000c  lwc1        $f2, 0xC($a2)
    ctx->pc = 0x282f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x282f94: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x282f94u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282f98: 0x4501009b  bc1t        . + 4 + (0x9B << 2)
    ctx->pc = 0x282F98u;
    {
        const bool branch_taken_0x282f98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x282f98) {
            ctx->pc = 0x283208u;
            goto label_283208;
        }
    }
    ctx->pc = 0x282FA0u;
    // 0x282fa0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x282fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x282fa4: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x282fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x282fa8: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x282fa8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282fac: 0x45010096  bc1t        . + 4 + (0x96 << 2)
    ctx->pc = 0x282FACu;
    {
        const bool branch_taken_0x282fac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x282fac) {
            ctx->pc = 0x283208u;
            goto label_283208;
        }
    }
    ctx->pc = 0x282FB4u;
    // 0x282fb4: 0xc4c90000  lwc1        $f9, 0x0($a2)
    ctx->pc = 0x282fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x282fb8: 0xc4ad0000  lwc1        $f13, 0x0($a1)
    ctx->pc = 0x282fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x282fbc: 0xc4c80004  lwc1        $f8, 0x4($a2)
    ctx->pc = 0x282fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x282fc0: 0xc4ab0004  lwc1        $f11, 0x4($a1)
    ctx->pc = 0x282fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x282fc4: 0xc4c50008  lwc1        $f5, 0x8($a2)
    ctx->pc = 0x282fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x282fc8: 0xc4aa0008  lwc1        $f10, 0x8($a1)
    ctx->pc = 0x282fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x282fcc: 0x46096d01  sub.s       $f20, $f13, $f9
    ctx->pc = 0x282fccu;
    ctx->f[20] = FPU_SUB_S(ctx->f[13], ctx->f[9]);
    // 0x282fd0: 0x46085cc1  sub.s       $f19, $f11, $f8
    ctx->pc = 0x282fd0u;
    ctx->f[19] = FPU_SUB_S(ctx->f[11], ctx->f[8]);
    // 0x282fd4: 0x4614a0c2  mul.s       $f3, $f20, $f20
    ctx->pc = 0x282fd4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x282fd8: 0x46139882  mul.s       $f2, $f19, $f19
    ctx->pc = 0x282fd8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[19], ctx->f[19]);
    // 0x282fdc: 0x46055481  sub.s       $f18, $f10, $f5
    ctx->pc = 0x282fdcu;
    ctx->f[18] = FPU_SUB_S(ctx->f[10], ctx->f[5]);
    // 0x282fe0: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x282fe0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x282fe4: 0x4612909c  madd.s      $f2, $f18, $f18
    ctx->pc = 0x282fe4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[18], ctx->f[18]));
    // 0x282fe8: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x282fe8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282fec: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x282FECu;
    {
        const bool branch_taken_0x282fec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x282fec) {
            ctx->pc = 0x283010u;
            goto label_283010;
        }
    }
    ctx->pc = 0x282FF4u;
    // 0x282ff4: 0x0  nop
    ctx->pc = 0x282ff4u;
    // NOP
    // 0x282ff8: 0x0  nop
    ctx->pc = 0x282ff8u;
    // NOP
    // 0x282ffc: 0x46020896  rsqrt.s     $f2, $f1, $f2
    ctx->pc = 0x282ffcu;
    ctx->f[2] = 1.0f / sqrtf(ctx->f[1]);
    // 0x283000: 0x0  nop
    ctx->pc = 0x283000u;
    // NOP
    // 0x283004: 0x0  nop
    ctx->pc = 0x283004u;
    // NOP
    // 0x283008: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x283008u;
    {
        const bool branch_taken_0x283008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x283008) {
            ctx->pc = 0x283018u;
            goto label_283018;
        }
    }
    ctx->pc = 0x283010u;
label_283010:
    // 0x283010: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x283010u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x283014: 0x0  nop
    ctx->pc = 0x283014u;
    // NOP
label_283018:
    // 0x283018: 0xc4470000  lwc1        $f7, 0x0($v0)
    ctx->pc = 0x283018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x28301c: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x28301cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x283020: 0x46076b81  sub.s       $f14, $f13, $f7
    ctx->pc = 0x283020u;
    ctx->f[14] = FPU_SUB_S(ctx->f[13], ctx->f[7]);
    // 0x283024: 0xc4460004  lwc1        $f6, 0x4($v0)
    ctx->pc = 0x283024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x283028: 0x46029cc2  mul.s       $f19, $f19, $f2
    ctx->pc = 0x283028u;
    ctx->f[19] = FPU_MUL_S(ctx->f[19], ctx->f[2]);
    // 0x28302c: 0x46029482  mul.s       $f18, $f18, $f2
    ctx->pc = 0x28302cu;
    ctx->f[18] = FPU_MUL_S(ctx->f[18], ctx->f[2]);
    // 0x283030: 0x46065b41  sub.s       $f13, $f11, $f6
    ctx->pc = 0x283030u;
    ctx->f[13] = FPU_SUB_S(ctx->f[11], ctx->f[6]);
    // 0x283034: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x283034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x283038: 0x460e70c2  mul.s       $f3, $f14, $f14
    ctx->pc = 0x283038u;
    ctx->f[3] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x28303c: 0x460d6882  mul.s       $f2, $f13, $f13
    ctx->pc = 0x28303cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x283040: 0x460452c1  sub.s       $f11, $f10, $f4
    ctx->pc = 0x283040u;
    ctx->f[11] = FPU_SUB_S(ctx->f[10], ctx->f[4]);
    // 0x283044: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x283044u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x283048: 0x460b589c  madd.s      $f2, $f11, $f11
    ctx->pc = 0x283048u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[11]));
    // 0x28304c: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x28304cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283050: 0x4600a447  neg.s       $f17, $f20
    ctx->pc = 0x283050u;
    ctx->f[17] = FPU_NEG_S(ctx->f[20]);
    // 0x283054: 0x46009c07  neg.s       $f16, $f19
    ctx->pc = 0x283054u;
    ctx->f[16] = FPU_NEG_S(ctx->f[19]);
    // 0x283058: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x283058u;
    {
        const bool branch_taken_0x283058 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28305Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283058u;
            // 0x28305c: 0x460093c7  neg.s       $f15, $f18 (Delay Slot)
        ctx->f[15] = FPU_NEG_S(ctx->f[18]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x283058) {
            ctx->pc = 0x283080u;
            goto label_283080;
        }
    }
    ctx->pc = 0x283060u;
    // 0x283060: 0x0  nop
    ctx->pc = 0x283060u;
    // NOP
    // 0x283064: 0x0  nop
    ctx->pc = 0x283064u;
    // NOP
    // 0x283068: 0x46020896  rsqrt.s     $f2, $f1, $f2
    ctx->pc = 0x283068u;
    ctx->f[2] = 1.0f / sqrtf(ctx->f[1]);
    // 0x28306c: 0x0  nop
    ctx->pc = 0x28306cu;
    // NOP
    // 0x283070: 0x0  nop
    ctx->pc = 0x283070u;
    // NOP
    // 0x283074: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x283074u;
    {
        const bool branch_taken_0x283074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x283074) {
            ctx->pc = 0x283088u;
            goto label_283088;
        }
    }
    ctx->pc = 0x28307Cu;
    // 0x28307c: 0x0  nop
    ctx->pc = 0x28307cu;
    // NOP
label_283080:
    // 0x283080: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x283080u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x283084: 0x0  nop
    ctx->pc = 0x283084u;
    // NOP
label_283088:
    // 0x283088: 0x46027382  mul.s       $f14, $f14, $f2
    ctx->pc = 0x283088u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    // 0x28308c: 0x460939c1  sub.s       $f7, $f7, $f9
    ctx->pc = 0x28308cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[9]);
    // 0x283090: 0x46026b42  mul.s       $f13, $f13, $f2
    ctx->pc = 0x283090u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[2]);
    // 0x283094: 0x46025ac2  mul.s       $f11, $f11, $f2
    ctx->pc = 0x283094u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[2]);
    // 0x283098: 0x46083181  sub.s       $f6, $f6, $f8
    ctx->pc = 0x283098u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[8]);
    // 0x28309c: 0x460738c2  mul.s       $f3, $f7, $f7
    ctx->pc = 0x28309cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x2830a0: 0x46063082  mul.s       $f2, $f6, $f6
    ctx->pc = 0x2830a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x2830a4: 0x46052141  sub.s       $f5, $f4, $f5
    ctx->pc = 0x2830a4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x2830a8: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x2830a8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2830ac: 0x4605289c  madd.s      $f2, $f5, $f5
    ctx->pc = 0x2830acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[5]));
    // 0x2830b0: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x2830b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2830b4: 0x46007287  neg.s       $f10, $f14
    ctx->pc = 0x2830b4u;
    ctx->f[10] = FPU_NEG_S(ctx->f[14]);
    // 0x2830b8: 0x46006a47  neg.s       $f9, $f13
    ctx->pc = 0x2830b8u;
    ctx->f[9] = FPU_NEG_S(ctx->f[13]);
    // 0x2830bc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x2830BCu;
    {
        const bool branch_taken_0x2830bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2830C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2830BCu;
            // 0x2830c0: 0x46005a07  neg.s       $f8, $f11 (Delay Slot)
        ctx->f[8] = FPU_NEG_S(ctx->f[11]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2830bc) {
            ctx->pc = 0x2830E0u;
            goto label_2830e0;
        }
    }
    ctx->pc = 0x2830C4u;
    // 0x2830c4: 0x0  nop
    ctx->pc = 0x2830c4u;
    // NOP
    // 0x2830c8: 0x0  nop
    ctx->pc = 0x2830c8u;
    // NOP
    // 0x2830cc: 0x46020896  rsqrt.s     $f2, $f1, $f2
    ctx->pc = 0x2830ccu;
    ctx->f[2] = 1.0f / sqrtf(ctx->f[1]);
    // 0x2830d0: 0x0  nop
    ctx->pc = 0x2830d0u;
    // NOP
    // 0x2830d4: 0x0  nop
    ctx->pc = 0x2830d4u;
    // NOP
    // 0x2830d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2830D8u;
    {
        const bool branch_taken_0x2830d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2830d8) {
            ctx->pc = 0x2830E8u;
            goto label_2830e8;
        }
    }
    ctx->pc = 0x2830E0u;
label_2830e0:
    // 0x2830e0: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2830e0u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x2830e4: 0x0  nop
    ctx->pc = 0x2830e4u;
    // NOP
label_2830e8:
    // 0x2830e8: 0x460b981a  mula.s      $f19, $f11
    ctx->pc = 0x2830e8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[19], ctx->f[11]);
    // 0x2830ec: 0x460d955d  msub.s      $f21, $f18, $f13
    ctx->pc = 0x2830ecu;
    ctx->f[21] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[18], ctx->f[13]));
    // 0x2830f0: 0x4615ad82  mul.s       $f22, $f21, $f21
    ctx->pc = 0x2830f0u;
    ctx->f[22] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x2830f4: 0x460e901a  mula.s      $f18, $f14
    ctx->pc = 0x2830f4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[18], ctx->f[14]);
    // 0x2830f8: 0x460ba55d  msub.s      $f21, $f20, $f11
    ctx->pc = 0x2830f8u;
    ctx->f[21] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[11]));
    // 0x2830fc: 0x4615ad42  mul.s       $f21, $f21, $f21
    ctx->pc = 0x2830fcu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x283100: 0x460da01a  mula.s      $f20, $f13
    ctx->pc = 0x283100u;
    ctx->f[31] = FPU_MUL_S(ctx->f[20], ctx->f[13]);
    // 0x283104: 0x460239c2  mul.s       $f7, $f7, $f2
    ctx->pc = 0x283104u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x283108: 0x46023182  mul.s       $f6, $f6, $f2
    ctx->pc = 0x283108u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x28310c: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x28310cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x283110: 0x460e9ddd  msub.s      $f23, $f19, $f14
    ctx->pc = 0x283110u;
    ctx->f[23] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[19], ctx->f[14]));
    // 0x283114: 0x4615b018  adda.s      $f22, $f21
    ctx->pc = 0x283114u;
    ctx->f[31] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
    // 0x283118: 0x4617bd5c  madd.s      $f21, $f23, $f23
    ctx->pc = 0x283118u;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[23], ctx->f[23]));
    // 0x28311c: 0x460ca834  c.lt.s      $f21, $f12
    ctx->pc = 0x28311cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283120: 0x46003907  neg.s       $f4, $f7
    ctx->pc = 0x283120u;
    ctx->f[4] = FPU_NEG_S(ctx->f[7]);
    // 0x283124: 0x460030c7  neg.s       $f3, $f6
    ctx->pc = 0x283124u;
    ctx->f[3] = FPU_NEG_S(ctx->f[6]);
    // 0x283128: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x283128u;
    {
        const bool branch_taken_0x283128 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28312Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283128u;
            // 0x28312c: 0x46002887  neg.s       $f2, $f5 (Delay Slot)
        ctx->f[2] = FPU_NEG_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x283128) {
            ctx->pc = 0x283158u;
            goto label_283158;
        }
    }
    ctx->pc = 0x283130u;
    // 0x283130: 0x460ea382  mul.s       $f14, $f20, $f14
    ctx->pc = 0x283130u;
    ctx->f[14] = FPU_MUL_S(ctx->f[20], ctx->f[14]);
    // 0x283134: 0x460d9b42  mul.s       $f13, $f19, $f13
    ctx->pc = 0x283134u;
    ctx->f[13] = FPU_MUL_S(ctx->f[19], ctx->f[13]);
    // 0x283138: 0x460d7018  adda.s      $f14, $f13
    ctx->pc = 0x283138u;
    ctx->f[31] = FPU_ADD_S(ctx->f[14], ctx->f[13]);
    // 0x28313c: 0x460b92dc  madd.s      $f11, $f18, $f11
    ctx->pc = 0x28313cu;
    ctx->f[11] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[18], ctx->f[11]));
    // 0x283140: 0x46005834  c.lt.s      $f11, $f0
    ctx->pc = 0x283140u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[11], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283144: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x283144u;
    {
        const bool branch_taken_0x283144 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x283144) {
            ctx->pc = 0x283158u;
            goto label_283158;
        }
    }
    ctx->pc = 0x28314Cu;
    // 0x28314c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x28314Cu;
    {
        const bool branch_taken_0x28314c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28314Cu;
            // 0x283150: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28314c) {
            ctx->pc = 0x283208u;
            goto label_283208;
        }
    }
    ctx->pc = 0x283154u;
    // 0x283154: 0x0  nop
    ctx->pc = 0x283154u;
    // NOP
label_283158:
    // 0x283158: 0x4608301a  mula.s      $f6, $f8
    ctx->pc = 0x283158u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
    // 0x28315c: 0x46092add  msub.s      $f11, $f5, $f9
    ctx->pc = 0x28315cu;
    ctx->f[11] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[9]));
    // 0x283160: 0x460b5b42  mul.s       $f13, $f11, $f11
    ctx->pc = 0x283160u;
    ctx->f[13] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x283164: 0x460a281a  mula.s      $f5, $f10
    ctx->pc = 0x283164u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x283168: 0x46083add  msub.s      $f11, $f7, $f8
    ctx->pc = 0x283168u;
    ctx->f[11] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[8]));
    // 0x28316c: 0x460b5ac2  mul.s       $f11, $f11, $f11
    ctx->pc = 0x28316cu;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x283170: 0x4609381a  mula.s      $f7, $f9
    ctx->pc = 0x283170u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[9]);
    // 0x283174: 0x460a339d  msub.s      $f14, $f6, $f10
    ctx->pc = 0x283174u;
    ctx->f[14] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[10]));
    // 0x283178: 0x460b6818  adda.s      $f13, $f11
    ctx->pc = 0x283178u;
    ctx->f[31] = FPU_ADD_S(ctx->f[13], ctx->f[11]);
    // 0x28317c: 0x460e72dc  madd.s      $f11, $f14, $f14
    ctx->pc = 0x28317cu;
    ctx->f[11] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[14], ctx->f[14]));
    // 0x283180: 0x460c5834  c.lt.s      $f11, $f12
    ctx->pc = 0x283180u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[11], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283184: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x283184u;
    {
        const bool branch_taken_0x283184 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x283184) {
            ctx->pc = 0x2831B0u;
            goto label_2831b0;
        }
    }
    ctx->pc = 0x28318Cu;
    // 0x28318c: 0x460a39c2  mul.s       $f7, $f7, $f10
    ctx->pc = 0x28318cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[10]);
    // 0x283190: 0x46093182  mul.s       $f6, $f6, $f9
    ctx->pc = 0x283190u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[9]);
    // 0x283194: 0x46063818  adda.s      $f7, $f6
    ctx->pc = 0x283194u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x283198: 0x4608295c  madd.s      $f5, $f5, $f8
    ctx->pc = 0x283198u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[8]));
    // 0x28319c: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x28319cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2831a0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2831A0u;
    {
        const bool branch_taken_0x2831a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2831a0) {
            ctx->pc = 0x2831B0u;
            goto label_2831b0;
        }
    }
    ctx->pc = 0x2831A8u;
    // 0x2831a8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2831A8u;
    {
        const bool branch_taken_0x2831a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2831ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2831A8u;
            // 0x2831ac: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2831a8) {
            ctx->pc = 0x283208u;
            goto label_283208;
        }
    }
    ctx->pc = 0x2831B0u;
label_2831b0:
    // 0x2831b0: 0x4602801a  mula.s      $f16, $f2
    ctx->pc = 0x2831b0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[16], ctx->f[2]);
    // 0x2831b4: 0x4603795d  msub.s      $f5, $f15, $f3
    ctx->pc = 0x2831b4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[3]));
    // 0x2831b8: 0x46052982  mul.s       $f6, $f5, $f5
    ctx->pc = 0x2831b8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2831bc: 0x4604781a  mula.s      $f15, $f4
    ctx->pc = 0x2831bcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[15], ctx->f[4]);
    // 0x2831c0: 0x4602895d  msub.s      $f5, $f17, $f2
    ctx->pc = 0x2831c0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[17], ctx->f[2]));
    // 0x2831c4: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x2831c4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2831c8: 0x4603881a  mula.s      $f17, $f3
    ctx->pc = 0x2831c8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[17], ctx->f[3]);
    // 0x2831cc: 0x460481dd  msub.s      $f7, $f16, $f4
    ctx->pc = 0x2831ccu;
    ctx->f[7] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[16], ctx->f[4]));
    // 0x2831d0: 0x46053018  adda.s      $f6, $f5
    ctx->pc = 0x2831d0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x2831d4: 0x4607395c  madd.s      $f5, $f7, $f7
    ctx->pc = 0x2831d4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[7]));
    // 0x2831d8: 0x460c2834  c.lt.s      $f5, $f12
    ctx->pc = 0x2831d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2831dc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2831DCu;
    {
        const bool branch_taken_0x2831dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2831dc) {
            ctx->pc = 0x283208u;
            goto label_283208;
        }
    }
    ctx->pc = 0x2831E4u;
    // 0x2831e4: 0x46048902  mul.s       $f4, $f17, $f4
    ctx->pc = 0x2831e4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[17], ctx->f[4]);
    // 0x2831e8: 0x460380c2  mul.s       $f3, $f16, $f3
    ctx->pc = 0x2831e8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[16], ctx->f[3]);
    // 0x2831ec: 0x46032018  adda.s      $f4, $f3
    ctx->pc = 0x2831ecu;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x2831f0: 0x4602789c  madd.s      $f2, $f15, $f2
    ctx->pc = 0x2831f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[2]));
    // 0x2831f4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2831f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2831f8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2831F8u;
    {
        const bool branch_taken_0x2831f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2831f8) {
            ctx->pc = 0x283208u;
            goto label_283208;
        }
    }
    ctx->pc = 0x283200u;
    // 0x283200: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x283200u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x283204: 0x0  nop
    ctx->pc = 0x283204u;
    // NOP
label_283208:
    // 0x283208: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x283208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x28320c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x28320cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x283210: 0x145102a  slt         $v0, $t2, $a1
    ctx->pc = 0x283210u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x283214: 0x1440ff58  bnez        $v0, . + 4 + (-0xA8 << 2)
    ctx->pc = 0x283214u;
    {
        const bool branch_taken_0x283214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283214u;
            // 0x283218: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283214) {
            ctx->pc = 0x282F78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_282f78;
        }
    }
    ctx->pc = 0x28321Cu;
    // 0x28321c: 0x0  nop
    ctx->pc = 0x28321cu;
    // NOP
label_283220:
    // 0x283220: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x283220u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x283224: 0x165102a  slt         $v0, $t3, $a1
    ctx->pc = 0x283224u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x283228: 0x1440ff4f  bnez        $v0, . + 4 + (-0xB1 << 2)
    ctx->pc = 0x283228u;
    {
        const bool branch_taken_0x283228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28322Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283228u;
            // 0x28322c: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283228) {
            ctx->pc = 0x282F68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_282f68;
        }
    }
    ctx->pc = 0x283230u;
label_283230:
    // 0x283230: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x283230u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x283234: 0x185102a  slt         $v0, $t4, $a1
    ctx->pc = 0x283234u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x283238: 0x1440ff45  bnez        $v0, . + 4 + (-0xBB << 2)
    ctx->pc = 0x283238u;
    {
        const bool branch_taken_0x283238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28323Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283238u;
            // 0x28323c: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283238) {
            ctx->pc = 0x282F50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_282f50;
        }
    }
    ctx->pc = 0x283240u;
label_283240:
    // 0x283240: 0xc0a1cac  jal         func_2872B0
    ctx->pc = 0x283240u;
    SET_GPR_U32(ctx, 31, 0x283248u);
    ctx->pc = 0x2872B0u;
    if (runtime->hasFunction(0x2872B0u)) {
        auto targetFn = runtime->lookupFunction(0x2872B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283248u; }
        if (ctx->pc != 0x283248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002872B0_0x2872b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283248u; }
        if (ctx->pc != 0x283248u) { return; }
    }
    ctx->pc = 0x283248u;
label_283248:
    // 0x283248: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x283248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28324c: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x28324cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x283250: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x283250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x283254: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x283254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x283258: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x283258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28325c: 0x3e00008  jr          $ra
    ctx->pc = 0x28325Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28325Cu;
            // 0x283260: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x283264u;
    // 0x283264: 0x0  nop
    ctx->pc = 0x283264u;
    // NOP
    // 0x283268: 0x0  nop
    ctx->pc = 0x283268u;
    // NOP
    // 0x28326c: 0x0  nop
    ctx->pc = 0x28326cu;
    // NOP
}
