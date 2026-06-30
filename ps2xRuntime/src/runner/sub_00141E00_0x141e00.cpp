#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00141E00
// Address: 0x141e00 - 0x142290
void sub_00141E00_0x141e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141E00_0x141e00");
#endif

    switch (ctx->pc) {
        case 0x141e44u: goto label_141e44;
        case 0x141fb4u: goto label_141fb4;
        case 0x142130u: goto label_142130;
        default: break;
    }

    ctx->pc = 0x141e00u;

    // 0x141e00: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x141e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x141e04: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x141e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x141e08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x141e08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x141e0c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x141e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x141e10: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x141e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x141e14: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x141e14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141e18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x141e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x141e1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x141e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x141e20: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x141e20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141e24: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x141e24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x141e28: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x141e28u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x141e2c: 0xdf928248  ld          $s2, -0x7DB8($gp)
    ctx->pc = 0x141e2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 28), 4294935112)));
    // 0x141e30: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x141e30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x141e34: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x141E34u;
    {
        const bool branch_taken_0x141e34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x141E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141E34u;
            // 0x141e38: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141e34) {
            ctx->pc = 0x141EBCu;
            goto label_141ebc;
        }
    }
    ctx->pc = 0x141E3Cu;
    // 0x141e3c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x141E3Cu;
    SET_GPR_U32(ctx, 31, 0x141E44u);
    ctx->pc = 0x141E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141E3Cu;
            // 0x141e40: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF60u;
    if (runtime->hasFunction(0x15CF60u)) {
        auto targetFn = runtime->lookupFunction(0x15CF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141E44u; }
        if (ctx->pc != 0x141E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF60_0x15cf60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141E44u; }
        if (ctx->pc != 0x141E44u) { return; }
    }
    ctx->pc = 0x141E44u;
label_141e44:
    // 0x141e44: 0x8f838160  lw          $v1, -0x7EA0($gp)
    ctx->pc = 0x141e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934880)));
    // 0x141e48: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x141E48u;
    {
        const bool branch_taken_0x141e48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x141e48) {
            ctx->pc = 0x141E4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141E48u;
            // 0x141e4c: 0xc7a20078  lwc1        $f2, 0x78($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x141E64u;
            goto label_141e64;
        }
    }
    ctx->pc = 0x141E50u;
    // 0x141e50: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x141e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x141e54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x141e54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x141e58: 0x0  nop
    ctx->pc = 0x141e58u;
    // NOP
    // 0x141e5c: 0x46140503  div.s       $f20, $f0, $f20
    ctx->pc = 0x141e5cu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[20];
    // 0x141e60: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x141e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_141e64:
    // 0x141e64: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x141e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x141e68: 0xc7a30068  lwc1        $f3, 0x68($sp)
    ctx->pc = 0x141e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x141e6c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x141e6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x141e70: 0x4600a107  neg.s       $f4, $f20
    ctx->pc = 0x141e70u;
    ctx->f[4] = FPU_NEG_S(ctx->f[20]);
    // 0x141e74: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x141e74u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x141e78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x141e78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x141e7c: 0x4603205c  madd.s      $f1, $f4, $f3
    ctx->pc = 0x141e7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x141e80: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x141e80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x141e84: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x141E84u;
    {
        const bool branch_taken_0x141e84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x141e84) {
            ctx->pc = 0x141E88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141E84u;
            // 0x141e88: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x141E9Cu;
            goto label_141e9c;
        }
    }
    ctx->pc = 0x141E8Cu;
    // 0x141e8c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x141e8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x141e90: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x141e90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x141e94: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x141E94u;
    {
        const bool branch_taken_0x141e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141E94u;
            // 0x141e98: 0x45100  sll         $t2, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141e94) {
            ctx->pc = 0x141EB4u;
            goto label_141eb4;
        }
    }
    ctx->pc = 0x141E9Cu;
label_141e9c:
    // 0x141e9c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x141e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x141ea0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x141ea0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x141ea4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x141ea4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x141ea8: 0x0  nop
    ctx->pc = 0x141ea8u;
    // NOP
    // 0x141eac: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x141eacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x141eb0: 0x45100  sll         $t2, $a0, 4
    ctx->pc = 0x141eb0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_141eb4:
    // 0x141eb4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x141EB4u;
    {
        const bool branch_taken_0x141eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141EB4u;
            // 0x141eb8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141eb4) {
            ctx->pc = 0x141F1Cu;
            goto label_141f1c;
        }
    }
    ctx->pc = 0x141EBCu;
label_141ebc:
    // 0x141ebc: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x141ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
    // 0x141ec0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x141ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x141ec4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x141ec4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x141ec8: 0x0  nop
    ctx->pc = 0x141ec8u;
    // NOP
    // 0x141ecc: 0x46140042  mul.s       $f1, $f0, $f20
    ctx->pc = 0x141eccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x141ed0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x141ed0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x141ed4: 0x0  nop
    ctx->pc = 0x141ed4u;
    // NOP
    // 0x141ed8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x141ed8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x141edc: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x141EDCu;
    {
        const bool branch_taken_0x141edc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x141edc) {
            ctx->pc = 0x141EE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141EDCu;
            // 0x141ee0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x141EF4u;
            goto label_141ef4;
        }
    }
    ctx->pc = 0x141EE4u;
    // 0x141ee4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x141ee4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x141ee8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x141ee8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x141eec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x141EECu;
    {
        const bool branch_taken_0x141eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141EECu;
            // 0x141ef0: 0x3c0300ff  lui         $v1, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141eec) {
            ctx->pc = 0x141F0Cu;
            goto label_141f0c;
        }
    }
    ctx->pc = 0x141EF4u;
label_141ef4:
    // 0x141ef4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x141ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x141ef8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x141ef8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x141efc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x141efcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x141f00: 0x0  nop
    ctx->pc = 0x141f00u;
    // NOP
    // 0x141f04: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x141f04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x141f08: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x141f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
label_141f0c:
    // 0x141f0c: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x141f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x141f10: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x141f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x141f14: 0x35100  sll         $t2, $v1, 4
    ctx->pc = 0x141f14u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x141f18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x141f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_141f1c:
    // 0x141f1c: 0x52630005  beql        $s3, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x141F1Cu;
    {
        const bool branch_taken_0x141f1c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x141f1c) {
            ctx->pc = 0x141F20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141F1Cu;
            // 0x141f20: 0x36450004  ori         $a1, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
            ctx->pc = 0x141F34u;
            goto label_141f34;
        }
    }
    ctx->pc = 0x141F24u;
    // 0x141f24: 0x52600003  beql        $s3, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x141F24u;
    {
        const bool branch_taken_0x141f24 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x141f24) {
            ctx->pc = 0x141F28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141F24u;
            // 0x141f28: 0x36450003  ori         $a1, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
            ctx->pc = 0x141F34u;
            goto label_141f34;
        }
    }
    ctx->pc = 0x141F2Cu;
    // 0x141f2c: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x141F2Cu;
    {
        const bool branch_taken_0x141f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141F2Cu;
            // 0x141f30: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141f2c) {
            ctx->pc = 0x142274u;
            goto label_142274;
        }
    }
    ctx->pc = 0x141F34u;
label_141f34:
    // 0x141f34: 0x8f848240  lw          $a0, -0x7DC0($gp)
    ctx->pc = 0x141f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935104)));
    // 0x141f38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x141f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141f3c: 0x54830060  bnel        $a0, $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x141F3Cu;
    {
        const bool branch_taken_0x141f3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x141f3c) {
            ctx->pc = 0x141F40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141F3Cu;
            // 0x141f40: 0x10303c  dsll32      $a2, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1420C0u;
            goto label_1420c0;
        }
    }
    ctx->pc = 0x141F44u;
    // 0x141f44: 0x10303c  dsll32      $a2, $s0, 0
    ctx->pc = 0x141f44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 0));
    // 0x141f48: 0x523fc  dsll32      $a0, $a1, 15
    ctx->pc = 0x141f48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 15));
    // 0x141f4c: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x141f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x141f50: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x141f50u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x141f54: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x141f54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x141f58: 0x8f878260  lw          $a3, -0x7DA0($gp)
    ctx->pc = 0x141f58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935136)));
    // 0x141f5c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x141f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x141f60: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x141f60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x141f64: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x141f64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x141f68: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x141f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x141f6c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x141f6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x141f70: 0x24040041  addiu       $a0, $zero, 0x41
    ctx->pc = 0x141f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x141f74: 0xfce50000  sd          $a1, 0x0($a3)
    ctx->pc = 0x141f74u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 5));
    // 0x141f78: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x141f78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141f7c: 0xfce40008  sd          $a0, 0x8($a3)
    ctx->pc = 0x141f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 4));
    // 0x141f80: 0x8f848260  lw          $a0, -0x7DA0($gp)
    ctx->pc = 0x141f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935136)));
    // 0x141f84: 0xaf878264  sw          $a3, -0x7D9C($gp)
    ctx->pc = 0x141f84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935140), GPR_U32(ctx, 7));
    // 0x141f88: 0x24880010  addiu       $t0, $a0, 0x10
    ctx->pc = 0x141f88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x141f8c: 0x1a0000b8  blez        $s0, . + 4 + (0xB8 << 2)
    ctx->pc = 0x141F8Cu;
    {
        const bool branch_taken_0x141f8c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x141F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141F8Cu;
            // 0x141f90: 0xaf888260  sw          $t0, -0x7DA0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935136), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141f8c) {
            ctx->pc = 0x142270u;
            goto label_142270;
        }
    }
    ctx->pc = 0x141F94u;
    // 0x141f94: 0x3c064f00  lui         $a2, 0x4F00
    ctx->pc = 0x141f94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20224 << 16));
    // 0x141f98: 0x3c0c8000  lui         $t4, 0x8000
    ctx->pc = 0x141f98u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)32768 << 16));
    // 0x141f9c: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x141f9cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x141fa0: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x141fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x141fa4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x141fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x141fa8: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x141fa8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
    // 0x141fac: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x141facu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x141fb0: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x141fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
label_141fb4:
    // 0x141fb4: 0x8e2e0008  lw          $t6, 0x8($s1)
    ctx->pc = 0x141fb4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x141fb8: 0x8483c  dsll32      $t1, $t0, 0
    ctx->pc = 0x141fb8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << (32 + 0));
    // 0x141fbc: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x141fbcu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x141fc0: 0xe5e02  srl         $t3, $t6, 24
    ctx->pc = 0x141fc0u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 14), 24));
    // 0x141fc4: 0xe4402  srl         $t0, $t6, 16
    ctx->pc = 0x141fc4u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 14), 16));
    // 0x141fc8: 0xad2b0000  sw          $t3, 0x0($t1)
    ctx->pc = 0x141fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
    // 0x141fcc: 0x310d00ff  andi        $t5, $t0, 0xFF
    ctx->pc = 0x141fccu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x141fd0: 0x8f898260  lw          $t1, -0x7DA0($gp)
    ctx->pc = 0x141fd0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935136)));
    // 0x141fd4: 0xe4202  srl         $t0, $t6, 8
    ctx->pc = 0x141fd4u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 14), 8));
    // 0x141fd8: 0x310b00ff  andi        $t3, $t0, 0xFF
    ctx->pc = 0x141fd8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x141fdc: 0x31c800ff  andi        $t0, $t6, 0xFF
    ctx->pc = 0x141fdcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x141fe0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x141fe0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x141fe4: 0xad2d0004  sw          $t5, 0x4($t1)
    ctx->pc = 0x141fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 13));
    // 0x141fe8: 0x84842  srl         $t1, $t0, 1
    ctx->pc = 0x141fe8u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x141fec: 0x8f888260  lw          $t0, -0x7DA0($gp)
    ctx->pc = 0x141fecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935136)));
    // 0x141ff0: 0xad0b0008  sw          $t3, 0x8($t0)
    ctx->pc = 0x141ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 11));
    // 0x141ff4: 0x8f888260  lw          $t0, -0x7DA0($gp)
    ctx->pc = 0x141ff4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935136)));
    // 0x141ff8: 0xad09000c  sw          $t1, 0xC($t0)
    ctx->pc = 0x141ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 9));
    // 0x141ffc: 0xc4c055f0  lwc1        $f0, 0x55F0($a2)
    ctx->pc = 0x141ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 22000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x142000: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x142000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x142004: 0xc4e155f4  lwc1        $f1, 0x55F4($a3)
    ctx->pc = 0x142004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 22004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x142008: 0x46002018  adda.s      $f4, $f0
    ctx->pc = 0x142008u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x14200c: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x14200cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x142010: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x142010u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142014: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x142014u;
    {
        const bool branch_taken_0x142014 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x142014) {
            ctx->pc = 0x142018u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x142014u;
            // 0x142018: 0x46030001  sub.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14202Cu;
            goto label_14202c;
        }
    }
    ctx->pc = 0x14201Cu;
    // 0x14201c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14201cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x142020: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x142020u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x142024: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x142024u;
    {
        const bool branch_taken_0x142024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142024u;
            // 0x142028: 0x8f888260  lw          $t0, -0x7DA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142024) {
            ctx->pc = 0x142040u;
            goto label_142040;
        }
    }
    ctx->pc = 0x14202Cu;
label_14202c:
    // 0x14202c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14202cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x142030: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x142030u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x142034: 0x0  nop
    ctx->pc = 0x142034u;
    // NOP
    // 0x142038: 0x12c4825  or          $t1, $t1, $t4
    ctx->pc = 0x142038u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 12));
    // 0x14203c: 0x8f888260  lw          $t0, -0x7DA0($gp)
    ctx->pc = 0x14203cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935136)));
label_142040:
    // 0x142040: 0xad090010  sw          $t1, 0x10($t0)
    ctx->pc = 0x142040u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 9));
    // 0x142044: 0xc48055f8  lwc1        $f0, 0x55F8($a0)
    ctx->pc = 0x142044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 22008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x142048: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x142048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14204c: 0xc4a155fc  lwc1        $f1, 0x55FC($a1)
    ctx->pc = 0x14204cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 22012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x142050: 0x46002018  adda.s      $f4, $f0
    ctx->pc = 0x142050u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x142054: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x142054u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x142058: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x142058u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14205c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x14205Cu;
    {
        const bool branch_taken_0x14205c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14205c) {
            ctx->pc = 0x142060u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14205Cu;
            // 0x142060: 0x46030001  sub.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x142074u;
            goto label_142074;
        }
    }
    ctx->pc = 0x142064u;
    // 0x142064: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x142064u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x142068: 0x440b0000  mfc1        $t3, $f0
    ctx->pc = 0x142068u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x14206c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14206Cu;
    {
        const bool branch_taken_0x14206c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14206Cu;
            // 0x142070: 0x8f888260  lw          $t0, -0x7DA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14206c) {
            ctx->pc = 0x142088u;
            goto label_142088;
        }
    }
    ctx->pc = 0x142074u;
label_142074:
    // 0x142074: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x142074u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x142078: 0x440b0000  mfc1        $t3, $f0
    ctx->pc = 0x142078u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x14207c: 0x0  nop
    ctx->pc = 0x14207cu;
    // NOP
    // 0x142080: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x142080u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x142084: 0x8f888260  lw          $t0, -0x7DA0($gp)
    ctx->pc = 0x142084u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935136)));
label_142088:
    // 0x142088: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x142088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14208c: 0x70482a  slt         $t1, $v1, $s0
    ctx->pc = 0x14208cu;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x142090: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x142090u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x142094: 0xad0b0014  sw          $t3, 0x14($t0)
    ctx->pc = 0x142094u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 11));
    // 0x142098: 0x8f888260  lw          $t0, -0x7DA0($gp)
    ctx->pc = 0x142098u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935136)));
    // 0x14209c: 0xad0a0018  sw          $t2, 0x18($t0)
    ctx->pc = 0x14209cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 10));
    // 0x1420a0: 0x8f888260  lw          $t0, -0x7DA0($gp)
    ctx->pc = 0x1420a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935136)));
    // 0x1420a4: 0xad00001c  sw          $zero, 0x1C($t0)
    ctx->pc = 0x1420a4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 0));
    // 0x1420a8: 0x8f888260  lw          $t0, -0x7DA0($gp)
    ctx->pc = 0x1420a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935136)));
    // 0x1420ac: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x1420acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x1420b0: 0x1520ffc0  bnez        $t1, . + 4 + (-0x40 << 2)
    ctx->pc = 0x1420B0u;
    {
        const bool branch_taken_0x1420b0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1420B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1420B0u;
            // 0x1420b4: 0xaf888260  sw          $t0, -0x7DA0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935136), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1420b0) {
            ctx->pc = 0x141FB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_141fb4;
        }
    }
    ctx->pc = 0x1420B8u;
    // 0x1420b8: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x1420B8u;
    {
        const bool branch_taken_0x1420b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1420b8) {
            ctx->pc = 0x142270u;
            goto label_142270;
        }
    }
    ctx->pc = 0x1420C0u;
label_1420c0:
    // 0x1420c0: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x1420c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1420c4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1420c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1420c8: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1420c8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1420cc: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1420ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1420d0: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x1420d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x1420d4: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1420d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1420d8: 0x8f878260  lw          $a3, -0x7DA0($gp)
    ctx->pc = 0x1420d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935136)));
    // 0x1420dc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1420dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1420e0: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1420e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x1420e4: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1420e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1420e8: 0x24030412  addiu       $v1, $zero, 0x412
    ctx->pc = 0x1420e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x1420ec: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x1420ecu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x1420f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1420f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1420f4: 0xfce30008  sd          $v1, 0x8($a3)
    ctx->pc = 0x1420f4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
    // 0x1420f8: 0x8f838260  lw          $v1, -0x7DA0($gp)
    ctx->pc = 0x1420f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935136)));
    // 0x1420fc: 0xaf878264  sw          $a3, -0x7D9C($gp)
    ctx->pc = 0x1420fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935140), GPR_U32(ctx, 7));
    // 0x142100: 0x24680010  addiu       $t0, $v1, 0x10
    ctx->pc = 0x142100u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x142104: 0x1a00005a  blez        $s0, . + 4 + (0x5A << 2)
    ctx->pc = 0x142104u;
    {
        const bool branch_taken_0x142104 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x142108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142104u;
            // 0x142108: 0xaf888260  sw          $t0, -0x7DA0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935136), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142104) {
            ctx->pc = 0x142270u;
            goto label_142270;
        }
    }
    ctx->pc = 0x14210Cu;
    // 0x14210c: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x14210cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
    // 0x142110: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x142110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x142114: 0x3c0c006c  lui         $t4, 0x6C
    ctx->pc = 0x142114u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)108 << 16));
    // 0x142118: 0x3c0b006c  lui         $t3, 0x6C
    ctx->pc = 0x142118u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)108 << 16));
    // 0x14211c: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x14211cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x142120: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x142120u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x142124: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x142124u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x142128: 0x3c0e006c  lui         $t6, 0x6C
    ctx->pc = 0x142128u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)108 << 16));
    // 0x14212c: 0x3c0d006c  lui         $t5, 0x6C
    ctx->pc = 0x14212cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)108 << 16));
label_142130:
    // 0x142130: 0x8383c  dsll32      $a3, $t0, 0
    ctx->pc = 0x142130u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << (32 + 0));
    // 0x142134: 0x8e280008  lw          $t0, 0x8($s1)
    ctx->pc = 0x142134u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x142138: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x142138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14213c: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x14213cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x142140: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x142140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x142144: 0x82e02  srl         $a1, $t0, 24
    ctx->pc = 0x142144u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 24));
    // 0x142148: 0x8f878260  lw          $a3, -0x7DA0($gp)
    ctx->pc = 0x142148u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935136)));
    // 0x14214c: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x14214cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x142150: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x142150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x142154: 0x82402  srl         $a0, $t0, 16
    ctx->pc = 0x142154u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x142158: 0x87a02  srl         $t7, $t0, 8
    ctx->pc = 0x142158u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 8), 8));
    // 0x14215c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x14215cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x142160: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x142160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x142164: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x142164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x142168: 0x8f878260  lw          $a3, -0x7DA0($gp)
    ctx->pc = 0x142168u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935136)));
    // 0x14216c: 0x31ef00ff  andi        $t7, $t7, 0xFF
    ctx->pc = 0x14216cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)255);
    // 0x142170: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x142170u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x142174: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x142174u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x142178: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x142178u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x14217c: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x14217cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x142180: 0xace60008  sw          $a2, 0x8($a3)
    ctx->pc = 0x142180u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 6));
    // 0x142184: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x142184u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x142188: 0x8f878260  lw          $a3, -0x7DA0($gp)
    ctx->pc = 0x142188u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935136)));
    // 0x14218c: 0xf7842  srl         $t7, $t7, 1
    ctx->pc = 0x14218cu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 1));
    // 0x142190: 0x84042  srl         $t0, $t0, 1
    ctx->pc = 0x142190u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x142194: 0xace50010  sw          $a1, 0x10($a3)
    ctx->pc = 0x142194u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 5));
    // 0x142198: 0x8f858260  lw          $a1, -0x7DA0($gp)
    ctx->pc = 0x142198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935136)));
    // 0x14219c: 0xaca40014  sw          $a0, 0x14($a1)
    ctx->pc = 0x14219cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 4));
    // 0x1421a0: 0x8f848260  lw          $a0, -0x7DA0($gp)
    ctx->pc = 0x1421a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935136)));
    // 0x1421a4: 0xac8f0018  sw          $t7, 0x18($a0)
    ctx->pc = 0x1421a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 15));
    // 0x1421a8: 0x8f848260  lw          $a0, -0x7DA0($gp)
    ctx->pc = 0x1421a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935136)));
    // 0x1421ac: 0xac88001c  sw          $t0, 0x1C($a0)
    ctx->pc = 0x1421acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 8));
    // 0x1421b0: 0xc5a055f0  lwc1        $f0, 0x55F0($t5)
    ctx->pc = 0x1421b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 22000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1421b4: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x1421b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1421b8: 0xc5c155f4  lwc1        $f1, 0x55F4($t6)
    ctx->pc = 0x1421b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 22004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1421bc: 0x46002018  adda.s      $f4, $f0
    ctx->pc = 0x1421bcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x1421c0: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x1421c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x1421c4: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1421c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1421c8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1421C8u;
    {
        const bool branch_taken_0x1421c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1421c8) {
            ctx->pc = 0x1421CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1421C8u;
            // 0x1421cc: 0x46030001  sub.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1421E0u;
            goto label_1421e0;
        }
    }
    ctx->pc = 0x1421D0u;
    // 0x1421d0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1421d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1421d4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1421d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1421d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1421D8u;
    {
        const bool branch_taken_0x1421d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1421DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1421D8u;
            // 0x1421dc: 0x8f848260  lw          $a0, -0x7DA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1421d8) {
            ctx->pc = 0x1421F4u;
            goto label_1421f4;
        }
    }
    ctx->pc = 0x1421E0u;
label_1421e0:
    // 0x1421e0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1421e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1421e4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1421e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1421e8: 0x0  nop
    ctx->pc = 0x1421e8u;
    // NOP
    // 0x1421ec: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1421ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1421f0: 0x8f848260  lw          $a0, -0x7DA0($gp)
    ctx->pc = 0x1421f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935136)));
label_1421f4:
    // 0x1421f4: 0xac850020  sw          $a1, 0x20($a0)
    ctx->pc = 0x1421f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
    // 0x1421f8: 0xc56055f8  lwc1        $f0, 0x55F8($t3)
    ctx->pc = 0x1421f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 22008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1421fc: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x1421fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x142200: 0xc58155fc  lwc1        $f1, 0x55FC($t4)
    ctx->pc = 0x142200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 22012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x142204: 0x46002018  adda.s      $f4, $f0
    ctx->pc = 0x142204u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x142208: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x142208u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x14220c: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x14220cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142210: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x142210u;
    {
        const bool branch_taken_0x142210 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x142210) {
            ctx->pc = 0x142214u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x142210u;
            // 0x142214: 0x46030001  sub.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x142228u;
            goto label_142228;
        }
    }
    ctx->pc = 0x142218u;
    // 0x142218: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x142218u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14221c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x14221cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x142220: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x142220u;
    {
        const bool branch_taken_0x142220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142220u;
            // 0x142224: 0x8f858260  lw          $a1, -0x7DA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142220) {
            ctx->pc = 0x14223Cu;
            goto label_14223c;
        }
    }
    ctx->pc = 0x142228u;
label_142228:
    // 0x142228: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x142228u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14222c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x14222cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x142230: 0x0  nop
    ctx->pc = 0x142230u;
    // NOP
    // 0x142234: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x142234u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x142238: 0x8f858260  lw          $a1, -0x7DA0($gp)
    ctx->pc = 0x142238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935136)));
label_14223c:
    // 0x14223c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x14223cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x142240: 0x130202a  slt         $a0, $t1, $s0
    ctx->pc = 0x142240u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x142244: 0x26310014  addiu       $s1, $s1, 0x14
    ctx->pc = 0x142244u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x142248: 0xaca70024  sw          $a3, 0x24($a1)
    ctx->pc = 0x142248u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 7));
    // 0x14224c: 0x8f858260  lw          $a1, -0x7DA0($gp)
    ctx->pc = 0x14224cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935136)));
    // 0x142250: 0xacaa0028  sw          $t2, 0x28($a1)
    ctx->pc = 0x142250u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 10));
    // 0x142254: 0x8f858260  lw          $a1, -0x7DA0($gp)
    ctx->pc = 0x142254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935136)));
    // 0x142258: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x142258u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x14225c: 0x8f858260  lw          $a1, -0x7DA0($gp)
    ctx->pc = 0x14225cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935136)));
    // 0x142260: 0x24a80030  addiu       $t0, $a1, 0x30
    ctx->pc = 0x142260u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x142264: 0x1480ffb2  bnez        $a0, . + 4 + (-0x4E << 2)
    ctx->pc = 0x142264u;
    {
        const bool branch_taken_0x142264 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x142268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142264u;
            // 0x142268: 0xaf888260  sw          $t0, -0x7DA0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935136), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142264) {
            ctx->pc = 0x142130u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_142130;
        }
    }
    ctx->pc = 0x14226Cu;
    // 0x14226c: 0x0  nop
    ctx->pc = 0x14226cu;
    // NOP
label_142270:
    // 0x142270: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x142270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_142274:
    // 0x142274: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x142274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x142278: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x142278u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14227c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14227cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x142280: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x142280u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x142284: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x142284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142288: 0x3e00008  jr          $ra
    ctx->pc = 0x142288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14228Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142288u;
            // 0x14228c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x142290u;
}
