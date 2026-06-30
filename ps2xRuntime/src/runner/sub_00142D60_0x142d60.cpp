#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00142D60
// Address: 0x142d60 - 0x143700
void sub_00142D60_0x142d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142D60_0x142d60");
#endif

    switch (ctx->pc) {
        case 0x142db8u: goto label_142db8;
        case 0x143000u: goto label_143000;
        case 0x143604u: goto label_143604;
        default: break;
    }

    ctx->pc = 0x142d60u;

    // 0x142d60: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x142d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x142d64: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x142d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x142d68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x142d68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142d6c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x142d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x142d70: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x142d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x142d74: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x142d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x142d78: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x142d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x142d7c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x142d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x142d80: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x142d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x142d84: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x142d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x142d88: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x142d88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142d8c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x142d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x142d90: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x142d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x142d94: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x142d94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142d98: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x142d98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x142d9c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x142d9cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x142da0: 0xdf9282a0  ld          $s2, -0x7D60($gp)
    ctx->pc = 0x142da0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 28), 4294935200)));
    // 0x142da4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x142da4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142da8: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x142DA8u;
    {
        const bool branch_taken_0x142da8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x142DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142DA8u;
            // 0x142dac: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142da8) {
            ctx->pc = 0x142E30u;
            goto label_142e30;
        }
    }
    ctx->pc = 0x142DB0u;
    // 0x142db0: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x142DB0u;
    SET_GPR_U32(ctx, 31, 0x142DB8u);
    ctx->pc = 0x142DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142DB0u;
            // 0x142db4: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF60u;
    if (runtime->hasFunction(0x15CF60u)) {
        auto targetFn = runtime->lookupFunction(0x15CF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142DB8u; }
        if (ctx->pc != 0x142DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF60_0x15cf60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142DB8u; }
        if (ctx->pc != 0x142DB8u) { return; }
    }
    ctx->pc = 0x142DB8u;
label_142db8:
    // 0x142db8: 0x8f838160  lw          $v1, -0x7EA0($gp)
    ctx->pc = 0x142db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934880)));
    // 0x142dbc: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x142DBCu;
    {
        const bool branch_taken_0x142dbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x142dbc) {
            ctx->pc = 0x142DC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x142DBCu;
            // 0x142dc0: 0xc7a201d8  lwc1        $f2, 0x1D8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x142DD8u;
            goto label_142dd8;
        }
    }
    ctx->pc = 0x142DC4u;
    // 0x142dc4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x142dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x142dc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x142dc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142dcc: 0x0  nop
    ctx->pc = 0x142dccu;
    // NOP
    // 0x142dd0: 0x46140503  div.s       $f20, $f0, $f20
    ctx->pc = 0x142dd0u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[20];
    // 0x142dd4: 0xc7a201d8  lwc1        $f2, 0x1D8($sp)
    ctx->pc = 0x142dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_142dd8:
    // 0x142dd8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x142dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x142ddc: 0xc7a301c8  lwc1        $f3, 0x1C8($sp)
    ctx->pc = 0x142ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x142de0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x142de0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x142de4: 0x4600a107  neg.s       $f4, $f20
    ctx->pc = 0x142de4u;
    ctx->f[4] = FPU_NEG_S(ctx->f[20]);
    // 0x142de8: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x142de8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x142dec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x142decu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142df0: 0x4603205c  madd.s      $f1, $f4, $f3
    ctx->pc = 0x142df0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x142df4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x142df4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142df8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x142DF8u;
    {
        const bool branch_taken_0x142df8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x142df8) {
            ctx->pc = 0x142DFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x142DF8u;
            // 0x142dfc: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x142E10u;
            goto label_142e10;
        }
    }
    ctx->pc = 0x142E00u;
    // 0x142e00: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x142e00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x142e04: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x142e04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x142e08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x142E08u;
    {
        const bool branch_taken_0x142e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142E08u;
            // 0x142e0c: 0x4a100  sll         $s4, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142e08) {
            ctx->pc = 0x142E28u;
            goto label_142e28;
        }
    }
    ctx->pc = 0x142E10u;
label_142e10:
    // 0x142e10: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x142e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x142e14: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x142e14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x142e18: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x142e18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x142e1c: 0x0  nop
    ctx->pc = 0x142e1cu;
    // NOP
    // 0x142e20: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x142e20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x142e24: 0x4a100  sll         $s4, $a0, 4
    ctx->pc = 0x142e24u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_142e28:
    // 0x142e28: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x142E28u;
    {
        const bool branch_taken_0x142e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142E28u;
            // 0x142e2c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142e28) {
            ctx->pc = 0x142E90u;
            goto label_142e90;
        }
    }
    ctx->pc = 0x142E30u;
label_142e30:
    // 0x142e30: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x142e30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
    // 0x142e34: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x142e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x142e38: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x142e38u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142e3c: 0x0  nop
    ctx->pc = 0x142e3cu;
    // NOP
    // 0x142e40: 0x46140042  mul.s       $f1, $f0, $f20
    ctx->pc = 0x142e40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x142e44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x142e44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142e48: 0x0  nop
    ctx->pc = 0x142e48u;
    // NOP
    // 0x142e4c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x142e4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142e50: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x142E50u;
    {
        const bool branch_taken_0x142e50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x142e50) {
            ctx->pc = 0x142E54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x142E50u;
            // 0x142e54: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x142E68u;
            goto label_142e68;
        }
    }
    ctx->pc = 0x142E58u;
    // 0x142e58: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x142e58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x142e5c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x142e5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x142e60: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x142E60u;
    {
        const bool branch_taken_0x142e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142E60u;
            // 0x142e64: 0x3c0300ff  lui         $v1, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142e60) {
            ctx->pc = 0x142E80u;
            goto label_142e80;
        }
    }
    ctx->pc = 0x142E68u;
label_142e68:
    // 0x142e68: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x142e68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x142e6c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x142e6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x142e70: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x142e70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x142e74: 0x0  nop
    ctx->pc = 0x142e74u;
    // NOP
    // 0x142e78: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x142e78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x142e7c: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x142e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
label_142e80:
    // 0x142e80: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x142e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x142e84: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x142e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x142e88: 0x3a100  sll         $s4, $v1, 4
    ctx->pc = 0x142e88u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x142e8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x142e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_142e90:
    // 0x142e90: 0x52630005  beql        $s3, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x142E90u;
    {
        const bool branch_taken_0x142e90 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x142e90) {
            ctx->pc = 0x142E94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x142E90u;
            // 0x142e94: 0x36430002  ori         $v1, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x142EA8u;
            goto label_142ea8;
        }
    }
    ctx->pc = 0x142E98u;
    // 0x142e98: 0x52600003  beql        $s3, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x142E98u;
    {
        const bool branch_taken_0x142e98 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x142e98) {
            ctx->pc = 0x142E9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x142E98u;
            // 0x142e9c: 0x36430001  ori         $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x142EA8u;
            goto label_142ea8;
        }
    }
    ctx->pc = 0x142EA0u;
    // 0x142ea0: 0x1000020a  b           . + 4 + (0x20A << 2)
    ctx->pc = 0x142EA0u;
    {
        const bool branch_taken_0x142ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142EA0u;
            // 0x142ea4: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142ea0) {
            ctx->pc = 0x1436CCu;
            goto label_1436cc;
        }
    }
    ctx->pc = 0x142EA8u;
label_142ea8:
    // 0x142ea8: 0x32bfc  dsll32      $a1, $v1, 15
    ctx->pc = 0x142ea8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 15));
    // 0x142eac: 0x10303c  dsll32      $a2, $s0, 0
    ctx->pc = 0x142eacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 0));
    // 0x142eb0: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x142eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x142eb4: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x142eb4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x142eb8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x142eb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x142ebc: 0x8f8782b4  lw          $a3, -0x7D4C($gp)
    ctx->pc = 0x142ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
    // 0x142ec0: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x142ec0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x142ec4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x142ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x142ec8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x142ec8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x142ecc: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x142eccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x142ed0: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x142ed0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x142ed4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x142ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x142ed8: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x142ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x142edc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x142edcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142ee0: 0xfce30008  sd          $v1, 0x8($a3)
    ctx->pc = 0x142ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
    // 0x142ee4: 0x8f8382b4  lw          $v1, -0x7D4C($gp)
    ctx->pc = 0x142ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
    // 0x142ee8: 0xaf8782b8  sw          $a3, -0x7D48($gp)
    ctx->pc = 0x142ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935224), GPR_U32(ctx, 7));
    // 0x142eec: 0x24780010  addiu       $t8, $v1, 0x10
    ctx->pc = 0x142eecu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x142ef0: 0x1a0001f5  blez        $s0, . + 4 + (0x1F5 << 2)
    ctx->pc = 0x142EF0u;
    {
        const bool branch_taken_0x142ef0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x142EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142EF0u;
            // 0x142ef4: 0xaf9882b4  sw          $t8, -0x7D4C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935220), GPR_U32(ctx, 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142ef0) {
            ctx->pc = 0x1436C8u;
            goto label_1436c8;
        }
    }
    ctx->pc = 0x142EF8u;
    // 0x142ef8: 0x2a010009  slti        $at, $s0, 0x9
    ctx->pc = 0x142ef8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x142efc: 0x142001b6  bnez        $at, . + 4 + (0x1B6 << 2)
    ctx->pc = 0x142EFCu;
    {
        const bool branch_taken_0x142efc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x142F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142EFCu;
            // 0x142f00: 0x2613fff8  addiu       $s3, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142efc) {
            ctx->pc = 0x1435D8u;
            goto label_1435d8;
        }
    }
    ctx->pc = 0x142F04u;
    // 0x142f04: 0x6000007  bltz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x142F04u;
    {
        const bool branch_taken_0x142f04 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x142F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142F04u;
            // 0x142f08: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142f04) {
            ctx->pc = 0x142F24u;
            goto label_142f24;
        }
    }
    ctx->pc = 0x142F0Cu;
    // 0x142f0c: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x142f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
    // 0x142f10: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x142f10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x142f14: 0x201082a  slt         $at, $s0, $at
    ctx->pc = 0x142f14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x142f18: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x142F18u;
    {
        const bool branch_taken_0x142f18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x142f18) {
            ctx->pc = 0x142F24u;
            goto label_142f24;
        }
    }
    ctx->pc = 0x142F20u;
    // 0x142f20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x142f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_142f24:
    // 0x142f24: 0x106001ac  beqz        $v1, . + 4 + (0x1AC << 2)
    ctx->pc = 0x142F24u;
    {
        const bool branch_taken_0x142f24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x142f24) {
            ctx->pc = 0x1435D8u;
            goto label_1435d8;
        }
    }
    ctx->pc = 0x142F2Cu;
    // 0x142f2c: 0x3c0d006c  lui         $t5, 0x6C
    ctx->pc = 0x142f2cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)108 << 16));
    // 0x142f30: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x142f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x142f34: 0x7fad01b0  sq          $t5, 0x1B0($sp)
    ctx->pc = 0x142f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 13));
    // 0x142f38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x142f38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142f3c: 0x3c0d006c  lui         $t5, 0x6C
    ctx->pc = 0x142f3cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)108 << 16));
    // 0x142f40: 0x3c128000  lui         $s2, 0x8000
    ctx->pc = 0x142f40u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
    // 0x142f44: 0x7fad01a0  sq          $t5, 0x1A0($sp)
    ctx->pc = 0x142f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 13));
    // 0x142f48: 0x3c0c006c  lui         $t4, 0x6C
    ctx->pc = 0x142f48u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)108 << 16));
    // 0x142f4c: 0x3c0d006c  lui         $t5, 0x6C
    ctx->pc = 0x142f4cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)108 << 16));
    // 0x142f50: 0x3c0b006c  lui         $t3, 0x6C
    ctx->pc = 0x142f50u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)108 << 16));
    // 0x142f54: 0x7fad0190  sq          $t5, 0x190($sp)
    ctx->pc = 0x142f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 13));
    // 0x142f58: 0x3c0a006c  lui         $t2, 0x6C
    ctx->pc = 0x142f58u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)108 << 16));
    // 0x142f5c: 0x3c0d006c  lui         $t5, 0x6C
    ctx->pc = 0x142f5cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)108 << 16));
    // 0x142f60: 0x3c09006c  lui         $t1, 0x6C
    ctx->pc = 0x142f60u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)108 << 16));
    // 0x142f64: 0x7fad0180  sq          $t5, 0x180($sp)
    ctx->pc = 0x142f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 13));
    // 0x142f68: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x142f68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x142f6c: 0x3c0d006c  lui         $t5, 0x6C
    ctx->pc = 0x142f6cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)108 << 16));
    // 0x142f70: 0x3c08006c  lui         $t0, 0x6C
    ctx->pc = 0x142f70u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)108 << 16));
    // 0x142f74: 0x7fad0170  sq          $t5, 0x170($sp)
    ctx->pc = 0x142f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 13));
    // 0x142f78: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x142f78u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
    // 0x142f7c: 0x3c0d006c  lui         $t5, 0x6C
    ctx->pc = 0x142f7cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)108 << 16));
    // 0x142f80: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x142f80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x142f84: 0x7fad0160  sq          $t5, 0x160($sp)
    ctx->pc = 0x142f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 13));
    // 0x142f88: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x142f88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x142f8c: 0x3c0d006c  lui         $t5, 0x6C
    ctx->pc = 0x142f8cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)108 << 16));
    // 0x142f90: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x142f90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x142f94: 0x7fad0150  sq          $t5, 0x150($sp)
    ctx->pc = 0x142f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 13));
    // 0x142f98: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x142f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x142f9c: 0x3c0d006c  lui         $t5, 0x6C
    ctx->pc = 0x142f9cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)108 << 16));
    // 0x142fa0: 0x3c16006c  lui         $s6, 0x6C
    ctx->pc = 0x142fa0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)108 << 16));
    // 0x142fa4: 0x7fad0140  sq          $t5, 0x140($sp)
    ctx->pc = 0x142fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 13));
    // 0x142fa8: 0x3c17006c  lui         $s7, 0x6C
    ctx->pc = 0x142fa8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)108 << 16));
    // 0x142fac: 0x3c0d006c  lui         $t5, 0x6C
    ctx->pc = 0x142facu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)108 << 16));
    // 0x142fb0: 0x3c1e006c  lui         $fp, 0x6C
    ctx->pc = 0x142fb0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)108 << 16));
    // 0x142fb4: 0x7fad0130  sq          $t5, 0x130($sp)
    ctx->pc = 0x142fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 13));
    // 0x142fb8: 0x3c0e006c  lui         $t6, 0x6C
    ctx->pc = 0x142fb8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)108 << 16));
    // 0x142fbc: 0x3c0d006c  lui         $t5, 0x6C
    ctx->pc = 0x142fbcu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)108 << 16));
    // 0x142fc0: 0x7fad0120  sq          $t5, 0x120($sp)
    ctx->pc = 0x142fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 13));
    // 0x142fc4: 0x3c0d006c  lui         $t5, 0x6C
    ctx->pc = 0x142fc4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)108 << 16));
    // 0x142fc8: 0x7fad0110  sq          $t5, 0x110($sp)
    ctx->pc = 0x142fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 13));
    // 0x142fcc: 0x3c0d006c  lui         $t5, 0x6C
    ctx->pc = 0x142fccu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)108 << 16));
    // 0x142fd0: 0x7fad0100  sq          $t5, 0x100($sp)
    ctx->pc = 0x142fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 13));
    // 0x142fd4: 0x3c0d006c  lui         $t5, 0x6C
    ctx->pc = 0x142fd4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)108 << 16));
    // 0x142fd8: 0x7fad00f0  sq          $t5, 0xF0($sp)
    ctx->pc = 0x142fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 13));
    // 0x142fdc: 0x3c0d006c  lui         $t5, 0x6C
    ctx->pc = 0x142fdcu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)108 << 16));
    // 0x142fe0: 0x7fad00e0  sq          $t5, 0xE0($sp)
    ctx->pc = 0x142fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 13));
    // 0x142fe4: 0x3c0d006c  lui         $t5, 0x6C
    ctx->pc = 0x142fe4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)108 << 16));
    // 0x142fe8: 0x7fad00d0  sq          $t5, 0xD0($sp)
    ctx->pc = 0x142fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 13));
    // 0x142fec: 0x3c0d006c  lui         $t5, 0x6C
    ctx->pc = 0x142fecu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)108 << 16));
    // 0x142ff0: 0x7fad00c0  sq          $t5, 0xC0($sp)
    ctx->pc = 0x142ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 13));
    // 0x142ff4: 0x3c0d006c  lui         $t5, 0x6C
    ctx->pc = 0x142ff4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)108 << 16));
    // 0x142ff8: 0x7fad00b0  sq          $t5, 0xB0($sp)
    ctx->pc = 0x142ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 13));
    // 0x142ffc: 0x3c0d006c  lui         $t5, 0x6C
    ctx->pc = 0x142ffcu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)108 << 16));
label_143000:
    // 0x143000: 0xc5a255f0  lwc1        $f2, 0x55F0($t5)
    ctx->pc = 0x143000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 22000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x143004: 0xc6240000  lwc1        $f4, 0x0($s1)
    ctx->pc = 0x143004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x143008: 0xc5c355f4  lwc1        $f3, 0x55F4($t6)
    ctx->pc = 0x143008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 22004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14300c: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x14300cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x143010: 0x4603209c  madd.s      $f2, $f4, $f3
    ctx->pc = 0x143010u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x143014: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x143014u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x143018: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x143018u;
    {
        const bool branch_taken_0x143018 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x143018) {
            ctx->pc = 0x14301Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x143018u;
            // 0x14301c: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x143030u;
            goto label_143030;
        }
    }
    ctx->pc = 0x143020u;
    // 0x143020: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x143020u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x143024: 0x440f1000  mfc1        $t7, $f2
    ctx->pc = 0x143024u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x143028: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x143028u;
    {
        const bool branch_taken_0x143028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14302Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143028u;
            // 0x14302c: 0x18c03c  dsll32      $t8, $t8, 0 (Delay Slot)
        SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143028) {
            ctx->pc = 0x143044u;
            goto label_143044;
        }
    }
    ctx->pc = 0x143030u;
label_143030:
    // 0x143030: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x143030u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x143034: 0x440f1000  mfc1        $t7, $f2
    ctx->pc = 0x143034u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x143038: 0x0  nop
    ctx->pc = 0x143038u;
    // NOP
    // 0x14303c: 0x1f27825  or          $t7, $t7, $s2
    ctx->pc = 0x14303cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 18));
    // 0x143040: 0x18c03c  dsll32      $t8, $t8, 0
    ctx->pc = 0x143040u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 0));
label_143044:
    // 0x143044: 0x18c03f  dsra32      $t8, $t8, 0
    ctx->pc = 0x143044u;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 24) >> (32 + 0));
    // 0x143048: 0xaf0f0000  sw          $t7, 0x0($t8)
    ctx->pc = 0x143048u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 15));
    // 0x14304c: 0xc56255f8  lwc1        $f2, 0x55F8($t3)
    ctx->pc = 0x14304cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 22008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x143050: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x143050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x143054: 0xc58355fc  lwc1        $f3, 0x55FC($t4)
    ctx->pc = 0x143054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 22012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x143058: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x143058u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x14305c: 0x4603209c  madd.s      $f2, $f4, $f3
    ctx->pc = 0x14305cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x143060: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x143060u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x143064: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x143064u;
    {
        const bool branch_taken_0x143064 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x143064) {
            ctx->pc = 0x143068u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x143064u;
            // 0x143068: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14307Cu;
            goto label_14307c;
        }
    }
    ctx->pc = 0x14306Cu;
    // 0x14306c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14306cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x143070: 0x44181000  mfc1        $t8, $f2
    ctx->pc = 0x143070u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 24, bits); }
    // 0x143074: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x143074u;
    {
        const bool branch_taken_0x143074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143074u;
            // 0x143078: 0x8f8f82b4  lw          $t7, -0x7D4C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143074) {
            ctx->pc = 0x143090u;
            goto label_143090;
        }
    }
    ctx->pc = 0x14307Cu;
label_14307c:
    // 0x14307c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14307cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x143080: 0x44181000  mfc1        $t8, $f2
    ctx->pc = 0x143080u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 24, bits); }
    // 0x143084: 0x0  nop
    ctx->pc = 0x143084u;
    // NOP
    // 0x143088: 0x312c025  or          $t8, $t8, $s2
    ctx->pc = 0x143088u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 18));
    // 0x14308c: 0x8f8f82b4  lw          $t7, -0x7D4C($gp)
    ctx->pc = 0x14308cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
label_143090:
    // 0x143090: 0xadf80004  sw          $t8, 0x4($t7)
    ctx->pc = 0x143090u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 24));
    // 0x143094: 0x8f8f82b4  lw          $t7, -0x7D4C($gp)
    ctx->pc = 0x143094u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
    // 0x143098: 0xadf40008  sw          $s4, 0x8($t7)
    ctx->pc = 0x143098u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 20));
    // 0x14309c: 0x8f8f82b4  lw          $t7, -0x7D4C($gp)
    ctx->pc = 0x14309cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
    // 0x1430a0: 0xade0000c  sw          $zero, 0xC($t7)
    ctx->pc = 0x1430a0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 0));
    // 0x1430a4: 0x8f8f82b4  lw          $t7, -0x7D4C($gp)
    ctx->pc = 0x1430a4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
    // 0x1430a8: 0xc52255f0  lwc1        $f2, 0x55F0($t1)
    ctx->pc = 0x1430a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 22000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1430ac: 0xc54355f4  lwc1        $f3, 0x55F4($t2)
    ctx->pc = 0x1430acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 22004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1430b0: 0x25f80010  addiu       $t8, $t7, 0x10
    ctx->pc = 0x1430b0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 15), 16));
    // 0x1430b4: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x1430b4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1430b8: 0xaf9882b4  sw          $t8, -0x7D4C($gp)
    ctx->pc = 0x1430b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935220), GPR_U32(ctx, 24));
    // 0x1430bc: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x1430bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1430c0: 0x4603109c  madd.s      $f2, $f2, $f3
    ctx->pc = 0x1430c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1430c4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1430c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1430c8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1430C8u;
    {
        const bool branch_taken_0x1430c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1430c8) {
            ctx->pc = 0x1430CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1430C8u;
            // 0x1430cc: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1430E0u;
            goto label_1430e0;
        }
    }
    ctx->pc = 0x1430D0u;
    // 0x1430d0: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1430d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1430d4: 0x440f1000  mfc1        $t7, $f2
    ctx->pc = 0x1430d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x1430d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1430D8u;
    {
        const bool branch_taken_0x1430d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1430DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1430D8u;
            // 0x1430dc: 0x18c03c  dsll32      $t8, $t8, 0 (Delay Slot)
        SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1430d8) {
            ctx->pc = 0x1430F4u;
            goto label_1430f4;
        }
    }
    ctx->pc = 0x1430E0u;
label_1430e0:
    // 0x1430e0: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1430e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1430e4: 0x440f1000  mfc1        $t7, $f2
    ctx->pc = 0x1430e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x1430e8: 0x0  nop
    ctx->pc = 0x1430e8u;
    // NOP
    // 0x1430ec: 0x1f27825  or          $t7, $t7, $s2
    ctx->pc = 0x1430ecu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 18));
    // 0x1430f0: 0x18c03c  dsll32      $t8, $t8, 0
    ctx->pc = 0x1430f0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 0));
label_1430f4:
    // 0x1430f4: 0x18c03f  dsra32      $t8, $t8, 0
    ctx->pc = 0x1430f4u;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 24) >> (32 + 0));
    // 0x1430f8: 0xaf0f0000  sw          $t7, 0x0($t8)
    ctx->pc = 0x1430f8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 15));
    // 0x1430fc: 0xc4e255f8  lwc1        $f2, 0x55F8($a3)
    ctx->pc = 0x1430fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 22008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x143100: 0xc624000c  lwc1        $f4, 0xC($s1)
    ctx->pc = 0x143100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x143104: 0xc50355fc  lwc1        $f3, 0x55FC($t0)
    ctx->pc = 0x143104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 22012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x143108: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x143108u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x14310c: 0x4603209c  madd.s      $f2, $f4, $f3
    ctx->pc = 0x14310cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x143110: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x143110u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x143114: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x143114u;
    {
        const bool branch_taken_0x143114 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x143114) {
            ctx->pc = 0x143118u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x143114u;
            // 0x143118: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14312Cu;
            goto label_14312c;
        }
    }
    ctx->pc = 0x14311Cu;
    // 0x14311c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14311cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x143120: 0x44181000  mfc1        $t8, $f2
    ctx->pc = 0x143120u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 24, bits); }
    // 0x143124: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x143124u;
    {
        const bool branch_taken_0x143124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143124u;
            // 0x143128: 0x8f8f82b4  lw          $t7, -0x7D4C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143124) {
            ctx->pc = 0x143140u;
            goto label_143140;
        }
    }
    ctx->pc = 0x14312Cu;
label_14312c:
    // 0x14312c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14312cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x143130: 0x44181000  mfc1        $t8, $f2
    ctx->pc = 0x143130u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 24, bits); }
    // 0x143134: 0x0  nop
    ctx->pc = 0x143134u;
    // NOP
    // 0x143138: 0x312c025  or          $t8, $t8, $s2
    ctx->pc = 0x143138u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 18));
    // 0x14313c: 0x8f8f82b4  lw          $t7, -0x7D4C($gp)
    ctx->pc = 0x14313cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
label_143140:
    // 0x143140: 0xadf80004  sw          $t8, 0x4($t7)
    ctx->pc = 0x143140u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 24));
    // 0x143144: 0x8f8f82b4  lw          $t7, -0x7D4C($gp)
    ctx->pc = 0x143144u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
    // 0x143148: 0xadf40008  sw          $s4, 0x8($t7)
    ctx->pc = 0x143148u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 20));
    // 0x14314c: 0x8f8f82b4  lw          $t7, -0x7D4C($gp)
    ctx->pc = 0x14314cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
    // 0x143150: 0xade0000c  sw          $zero, 0xC($t7)
    ctx->pc = 0x143150u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 0));
    // 0x143154: 0x8f8f82b4  lw          $t7, -0x7D4C($gp)
    ctx->pc = 0x143154u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
    // 0x143158: 0xc4a255f0  lwc1        $f2, 0x55F0($a1)
    ctx->pc = 0x143158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 22000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14315c: 0xc4c355f4  lwc1        $f3, 0x55F4($a2)
    ctx->pc = 0x14315cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 22004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x143160: 0x25f80010  addiu       $t8, $t7, 0x10
    ctx->pc = 0x143160u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 15), 16));
    // 0x143164: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x143164u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x143168: 0xaf9882b4  sw          $t8, -0x7D4C($gp)
    ctx->pc = 0x143168u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935220), GPR_U32(ctx, 24));
    // 0x14316c: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x14316cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x143170: 0x4603109c  madd.s      $f2, $f2, $f3
    ctx->pc = 0x143170u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x143174: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x143174u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x143178: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x143178u;
    {
        const bool branch_taken_0x143178 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x143178) {
            ctx->pc = 0x14317Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x143178u;
            // 0x14317c: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x143190u;
            goto label_143190;
        }
    }
    ctx->pc = 0x143180u;
    // 0x143180: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x143180u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x143184: 0x440f1000  mfc1        $t7, $f2
    ctx->pc = 0x143184u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x143188: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x143188u;
    {
        const bool branch_taken_0x143188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14318Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143188u;
            // 0x14318c: 0x18c03c  dsll32      $t8, $t8, 0 (Delay Slot)
        SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143188) {
            ctx->pc = 0x1431A4u;
            goto label_1431a4;
        }
    }
    ctx->pc = 0x143190u;
label_143190:
    // 0x143190: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x143190u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x143194: 0x440f1000  mfc1        $t7, $f2
    ctx->pc = 0x143194u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x143198: 0x0  nop
    ctx->pc = 0x143198u;
    // NOP
    // 0x14319c: 0x1f27825  or          $t7, $t7, $s2
    ctx->pc = 0x14319cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 18));
    // 0x1431a0: 0x18c03c  dsll32      $t8, $t8, 0
    ctx->pc = 0x1431a0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 0));
label_1431a4:
    // 0x1431a4: 0x18c03f  dsra32      $t8, $t8, 0
    ctx->pc = 0x1431a4u;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 24) >> (32 + 0));
    // 0x1431a8: 0xaf0f0000  sw          $t7, 0x0($t8)
    ctx->pc = 0x1431a8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 15));
    // 0x1431ac: 0xc46255f8  lwc1        $f2, 0x55F8($v1)
    ctx->pc = 0x1431acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 22008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1431b0: 0xc6240014  lwc1        $f4, 0x14($s1)
    ctx->pc = 0x1431b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1431b4: 0xc48355fc  lwc1        $f3, 0x55FC($a0)
    ctx->pc = 0x1431b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 22012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1431b8: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x1431b8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1431bc: 0x4603209c  madd.s      $f2, $f4, $f3
    ctx->pc = 0x1431bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x1431c0: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1431c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1431c4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1431C4u;
    {
        const bool branch_taken_0x1431c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1431c4) {
            ctx->pc = 0x1431C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1431C4u;
            // 0x1431c8: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1431DCu;
            goto label_1431dc;
        }
    }
    ctx->pc = 0x1431CCu;
    // 0x1431cc: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1431ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1431d0: 0x44181000  mfc1        $t8, $f2
    ctx->pc = 0x1431d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 24, bits); }
    // 0x1431d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1431D4u;
    {
        const bool branch_taken_0x1431d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1431D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1431D4u;
            // 0x1431d8: 0x8f8f82b4  lw          $t7, -0x7D4C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1431d4) {
            ctx->pc = 0x1431F0u;
            goto label_1431f0;
        }
    }
    ctx->pc = 0x1431DCu;
label_1431dc:
    // 0x1431dc: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1431dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1431e0: 0x44181000  mfc1        $t8, $f2
    ctx->pc = 0x1431e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 24, bits); }
    // 0x1431e4: 0x0  nop
    ctx->pc = 0x1431e4u;
    // NOP
    // 0x1431e8: 0x312c025  or          $t8, $t8, $s2
    ctx->pc = 0x1431e8u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 18));
    // 0x1431ec: 0x8f8f82b4  lw          $t7, -0x7D4C($gp)
    ctx->pc = 0x1431ecu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
label_1431f0:
    // 0x1431f0: 0xadf80004  sw          $t8, 0x4($t7)
    ctx->pc = 0x1431f0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 24));
    // 0x1431f4: 0x8f8f82b4  lw          $t7, -0x7D4C($gp)
    ctx->pc = 0x1431f4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
    // 0x1431f8: 0xadf40008  sw          $s4, 0x8($t7)
    ctx->pc = 0x1431f8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 20));
    // 0x1431fc: 0x8f8f82b4  lw          $t7, -0x7D4C($gp)
    ctx->pc = 0x1431fcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
    // 0x143200: 0xade0000c  sw          $zero, 0xC($t7)
    ctx->pc = 0x143200u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 0));
    // 0x143204: 0x8f8f82b4  lw          $t7, -0x7D4C($gp)
    ctx->pc = 0x143204u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
    // 0x143208: 0xc6e255f0  lwc1        $f2, 0x55F0($s7)
    ctx->pc = 0x143208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 22000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14320c: 0xc6c355f4  lwc1        $f3, 0x55F4($s6)
    ctx->pc = 0x14320cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 22004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x143210: 0x25f80010  addiu       $t8, $t7, 0x10
    ctx->pc = 0x143210u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 15), 16));
    // 0x143214: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x143214u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x143218: 0xaf9882b4  sw          $t8, -0x7D4C($gp)
    ctx->pc = 0x143218u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935220), GPR_U32(ctx, 24));
    // 0x14321c: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x14321cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x143220: 0x4603109c  madd.s      $f2, $f2, $f3
    ctx->pc = 0x143220u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x143224: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x143224u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x143228: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x143228u;
    {
        const bool branch_taken_0x143228 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x143228) {
            ctx->pc = 0x14322Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x143228u;
            // 0x14322c: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x143240u;
            goto label_143240;
        }
    }
    ctx->pc = 0x143230u;
    // 0x143230: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x143230u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x143234: 0x440f1000  mfc1        $t7, $f2
    ctx->pc = 0x143234u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x143238: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x143238u;
    {
        const bool branch_taken_0x143238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14323Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143238u;
            // 0x14323c: 0x18c03c  dsll32      $t8, $t8, 0 (Delay Slot)
        SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143238) {
            ctx->pc = 0x143254u;
            goto label_143254;
        }
    }
    ctx->pc = 0x143240u;
label_143240:
    // 0x143240: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x143240u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x143244: 0x440f1000  mfc1        $t7, $f2
    ctx->pc = 0x143244u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x143248: 0x0  nop
    ctx->pc = 0x143248u;
    // NOP
    // 0x14324c: 0x1f27825  or          $t7, $t7, $s2
    ctx->pc = 0x14324cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 18));
    // 0x143250: 0x18c03c  dsll32      $t8, $t8, 0
    ctx->pc = 0x143250u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 0));
label_143254:
    // 0x143254: 0x18c03f  dsra32      $t8, $t8, 0
    ctx->pc = 0x143254u;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 24) >> (32 + 0));
    // 0x143258: 0xaf0f0000  sw          $t7, 0x0($t8)
    ctx->pc = 0x143258u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 15));
    // 0x14325c: 0x7baf01b0  lq          $t7, 0x1B0($sp)
    ctx->pc = 0x14325cu;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x143260: 0xc624001c  lwc1        $f4, 0x1C($s1)
    ctx->pc = 0x143260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x143264: 0xc7c355fc  lwc1        $f3, 0x55FC($fp)
    ctx->pc = 0x143264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 22012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x143268: 0xc5e255f8  lwc1        $f2, 0x55F8($t7)
    ctx->pc = 0x143268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 22008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14326c: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x14326cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x143270: 0x4603209c  madd.s      $f2, $f4, $f3
    ctx->pc = 0x143270u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x143274: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x143274u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x143278: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x143278u;
    {
        const bool branch_taken_0x143278 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x143278) {
            ctx->pc = 0x14327Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x143278u;
            // 0x14327c: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x143290u;
            goto label_143290;
        }
    }
    ctx->pc = 0x143280u;
    // 0x143280: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x143280u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x143284: 0x44181000  mfc1        $t8, $f2
    ctx->pc = 0x143284u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 24, bits); }
    // 0x143288: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x143288u;
    {
        const bool branch_taken_0x143288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14328Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143288u;
            // 0x14328c: 0x8f8f82b4  lw          $t7, -0x7D4C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143288) {
            ctx->pc = 0x1432A4u;
            goto label_1432a4;
        }
    }
    ctx->pc = 0x143290u;
label_143290:
    // 0x143290: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x143290u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x143294: 0x44181000  mfc1        $t8, $f2
    ctx->pc = 0x143294u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 24, bits); }
    // 0x143298: 0x0  nop
    ctx->pc = 0x143298u;
    // NOP
    // 0x14329c: 0x312c025  or          $t8, $t8, $s2
    ctx->pc = 0x14329cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 18));
    // 0x1432a0: 0x8f8f82b4  lw          $t7, -0x7D4C($gp)
    ctx->pc = 0x1432a0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
label_1432a4:
    // 0x1432a4: 0xadf80004  sw          $t8, 0x4($t7)
    ctx->pc = 0x1432a4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 24));
    // 0x1432a8: 0x8f8f82b4  lw          $t7, -0x7D4C($gp)
    ctx->pc = 0x1432a8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
    // 0x1432ac: 0xadf40008  sw          $s4, 0x8($t7)
    ctx->pc = 0x1432acu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 20));
    // 0x1432b0: 0x8f8f82b4  lw          $t7, -0x7D4C($gp)
    ctx->pc = 0x1432b0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
    // 0x1432b4: 0xade0000c  sw          $zero, 0xC($t7)
    ctx->pc = 0x1432b4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 0));
    // 0x1432b8: 0x7baf01a0  lq          $t7, 0x1A0($sp)
    ctx->pc = 0x1432b8u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1432bc: 0x8f9882b4  lw          $t8, -0x7D4C($gp)
    ctx->pc = 0x1432bcu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
    // 0x1432c0: 0xc5e355f4  lwc1        $f3, 0x55F4($t7)
    ctx->pc = 0x1432c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 22004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1432c4: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x1432c4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x1432c8: 0xaf9882b4  sw          $t8, -0x7D4C($gp)
    ctx->pc = 0x1432c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935220), GPR_U32(ctx, 24));
    // 0x1432cc: 0x7baf0190  lq          $t7, 0x190($sp)
    ctx->pc = 0x1432ccu;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1432d0: 0xc5e255f0  lwc1        $f2, 0x55F0($t7)
    ctx->pc = 0x1432d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 22000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1432d4: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x1432d4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1432d8: 0xc6220020  lwc1        $f2, 0x20($s1)
    ctx->pc = 0x1432d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1432dc: 0x4603109c  madd.s      $f2, $f2, $f3
    ctx->pc = 0x1432dcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1432e0: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1432e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1432e4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1432E4u;
    {
        const bool branch_taken_0x1432e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1432e4) {
            ctx->pc = 0x1432E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1432E4u;
            // 0x1432e8: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1432FCu;
            goto label_1432fc;
        }
    }
    ctx->pc = 0x1432ECu;
    // 0x1432ec: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1432ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1432f0: 0x440f1000  mfc1        $t7, $f2
    ctx->pc = 0x1432f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x1432f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1432F4u;
    {
        const bool branch_taken_0x1432f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1432F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1432F4u;
            // 0x1432f8: 0x18c03c  dsll32      $t8, $t8, 0 (Delay Slot)
        SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1432f4) {
            ctx->pc = 0x143310u;
            goto label_143310;
        }
    }
    ctx->pc = 0x1432FCu;
label_1432fc:
    // 0x1432fc: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1432fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x143300: 0x440f1000  mfc1        $t7, $f2
    ctx->pc = 0x143300u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x143304: 0x0  nop
    ctx->pc = 0x143304u;
    // NOP
    // 0x143308: 0x1f27825  or          $t7, $t7, $s2
    ctx->pc = 0x143308u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 18));
    // 0x14330c: 0x18c03c  dsll32      $t8, $t8, 0
    ctx->pc = 0x14330cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 0));
label_143310:
    // 0x143310: 0x18c03f  dsra32      $t8, $t8, 0
    ctx->pc = 0x143310u;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 24) >> (32 + 0));
    // 0x143314: 0xaf0f0000  sw          $t7, 0x0($t8)
    ctx->pc = 0x143314u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 15));
    // 0x143318: 0x7baf0180  lq          $t7, 0x180($sp)
    ctx->pc = 0x143318u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x14331c: 0xc6240024  lwc1        $f4, 0x24($s1)
    ctx->pc = 0x14331cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x143320: 0xc5e355fc  lwc1        $f3, 0x55FC($t7)
    ctx->pc = 0x143320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 22012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x143324: 0x7baf0170  lq          $t7, 0x170($sp)
    ctx->pc = 0x143324u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x143328: 0xc5e255f8  lwc1        $f2, 0x55F8($t7)
    ctx->pc = 0x143328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 22008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14332c: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x14332cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x143330: 0x4603209c  madd.s      $f2, $f4, $f3
    ctx->pc = 0x143330u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x143334: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x143334u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x143338: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x143338u;
    {
        const bool branch_taken_0x143338 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x143338) {
            ctx->pc = 0x14333Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x143338u;
            // 0x14333c: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x143350u;
            goto label_143350;
        }
    }
    ctx->pc = 0x143340u;
    // 0x143340: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x143340u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x143344: 0x44181000  mfc1        $t8, $f2
    ctx->pc = 0x143344u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 24, bits); }
    // 0x143348: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x143348u;
    {
        const bool branch_taken_0x143348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14334Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143348u;
            // 0x14334c: 0x8f8f82b4  lw          $t7, -0x7D4C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143348) {
            ctx->pc = 0x143364u;
            goto label_143364;
        }
    }
    ctx->pc = 0x143350u;
label_143350:
    // 0x143350: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x143350u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x143354: 0x44181000  mfc1        $t8, $f2
    ctx->pc = 0x143354u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 24, bits); }
    // 0x143358: 0x0  nop
    ctx->pc = 0x143358u;
    // NOP
    // 0x14335c: 0x312c025  or          $t8, $t8, $s2
    ctx->pc = 0x14335cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 18));
    // 0x143360: 0x8f8f82b4  lw          $t7, -0x7D4C($gp)
    ctx->pc = 0x143360u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
label_143364:
    // 0x143364: 0xadf80004  sw          $t8, 0x4($t7)
    ctx->pc = 0x143364u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 24));
    // 0x143368: 0x8f8f82b4  lw          $t7, -0x7D4C($gp)
    ctx->pc = 0x143368u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
    // 0x14336c: 0xadf40008  sw          $s4, 0x8($t7)
    ctx->pc = 0x14336cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 20));
    // 0x143370: 0x8f8f82b4  lw          $t7, -0x7D4C($gp)
    ctx->pc = 0x143370u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
    // 0x143374: 0xade0000c  sw          $zero, 0xC($t7)
    ctx->pc = 0x143374u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 0));
    // 0x143378: 0x7baf0160  lq          $t7, 0x160($sp)
    ctx->pc = 0x143378u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x14337c: 0x8f9882b4  lw          $t8, -0x7D4C($gp)
    ctx->pc = 0x14337cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
    // 0x143380: 0xc5e355f4  lwc1        $f3, 0x55F4($t7)
    ctx->pc = 0x143380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 22004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x143384: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x143384u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x143388: 0xaf9882b4  sw          $t8, -0x7D4C($gp)
    ctx->pc = 0x143388u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935220), GPR_U32(ctx, 24));
    // 0x14338c: 0x7baf0150  lq          $t7, 0x150($sp)
    ctx->pc = 0x14338cu;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x143390: 0xc5e255f0  lwc1        $f2, 0x55F0($t7)
    ctx->pc = 0x143390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 22000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x143394: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x143394u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x143398: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x143398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14339c: 0x4603109c  madd.s      $f2, $f2, $f3
    ctx->pc = 0x14339cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1433a0: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1433a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1433a4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1433A4u;
    {
        const bool branch_taken_0x1433a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1433a4) {
            ctx->pc = 0x1433A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1433A4u;
            // 0x1433a8: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1433BCu;
            goto label_1433bc;
        }
    }
    ctx->pc = 0x1433ACu;
    // 0x1433ac: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1433acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1433b0: 0x440f1000  mfc1        $t7, $f2
    ctx->pc = 0x1433b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x1433b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1433B4u;
    {
        const bool branch_taken_0x1433b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1433B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1433B4u;
            // 0x1433b8: 0x18c03c  dsll32      $t8, $t8, 0 (Delay Slot)
        SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1433b4) {
            ctx->pc = 0x1433D0u;
            goto label_1433d0;
        }
    }
    ctx->pc = 0x1433BCu;
label_1433bc:
    // 0x1433bc: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1433bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1433c0: 0x440f1000  mfc1        $t7, $f2
    ctx->pc = 0x1433c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x1433c4: 0x0  nop
    ctx->pc = 0x1433c4u;
    // NOP
    // 0x1433c8: 0x1f27825  or          $t7, $t7, $s2
    ctx->pc = 0x1433c8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 18));
    // 0x1433cc: 0x18c03c  dsll32      $t8, $t8, 0
    ctx->pc = 0x1433ccu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 0));
label_1433d0:
    // 0x1433d0: 0x18c03f  dsra32      $t8, $t8, 0
    ctx->pc = 0x1433d0u;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 24) >> (32 + 0));
    // 0x1433d4: 0xaf0f0000  sw          $t7, 0x0($t8)
    ctx->pc = 0x1433d4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 15));
    // 0x1433d8: 0x7baf0140  lq          $t7, 0x140($sp)
    ctx->pc = 0x1433d8u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1433dc: 0xc624002c  lwc1        $f4, 0x2C($s1)
    ctx->pc = 0x1433dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1433e0: 0xc5e355fc  lwc1        $f3, 0x55FC($t7)
    ctx->pc = 0x1433e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 22012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1433e4: 0x7baf0130  lq          $t7, 0x130($sp)
    ctx->pc = 0x1433e4u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1433e8: 0xc5e255f8  lwc1        $f2, 0x55F8($t7)
    ctx->pc = 0x1433e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 22008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1433ec: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x1433ecu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1433f0: 0x4603209c  madd.s      $f2, $f4, $f3
    ctx->pc = 0x1433f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x1433f4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1433f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1433f8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1433F8u;
    {
        const bool branch_taken_0x1433f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1433f8) {
            ctx->pc = 0x1433FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1433F8u;
            // 0x1433fc: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x143410u;
            goto label_143410;
        }
    }
    ctx->pc = 0x143400u;
    // 0x143400: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x143400u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x143404: 0x44181000  mfc1        $t8, $f2
    ctx->pc = 0x143404u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 24, bits); }
    // 0x143408: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x143408u;
    {
        const bool branch_taken_0x143408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14340Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143408u;
            // 0x14340c: 0x8f8f82b4  lw          $t7, -0x7D4C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143408) {
            ctx->pc = 0x143424u;
            goto label_143424;
        }
    }
    ctx->pc = 0x143410u;
label_143410:
    // 0x143410: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x143410u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x143414: 0x44181000  mfc1        $t8, $f2
    ctx->pc = 0x143414u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 24, bits); }
    // 0x143418: 0x0  nop
    ctx->pc = 0x143418u;
    // NOP
    // 0x14341c: 0x312c025  or          $t8, $t8, $s2
    ctx->pc = 0x14341cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 18));
    // 0x143420: 0x8f8f82b4  lw          $t7, -0x7D4C($gp)
    ctx->pc = 0x143420u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
label_143424:
    // 0x143424: 0xadf80004  sw          $t8, 0x4($t7)
    ctx->pc = 0x143424u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 24));
    // 0x143428: 0x8f8f82b4  lw          $t7, -0x7D4C($gp)
    ctx->pc = 0x143428u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
    // 0x14342c: 0xadf40008  sw          $s4, 0x8($t7)
    ctx->pc = 0x14342cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 20));
    // 0x143430: 0x8f8f82b4  lw          $t7, -0x7D4C($gp)
    ctx->pc = 0x143430u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
    // 0x143434: 0xade0000c  sw          $zero, 0xC($t7)
    ctx->pc = 0x143434u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 0));
    // 0x143438: 0x7baf0120  lq          $t7, 0x120($sp)
    ctx->pc = 0x143438u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x14343c: 0x8f9882b4  lw          $t8, -0x7D4C($gp)
    ctx->pc = 0x14343cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
    // 0x143440: 0xc5e355f4  lwc1        $f3, 0x55F4($t7)
    ctx->pc = 0x143440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 22004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x143444: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x143444u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x143448: 0xaf9882b4  sw          $t8, -0x7D4C($gp)
    ctx->pc = 0x143448u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935220), GPR_U32(ctx, 24));
    // 0x14344c: 0x7baf0110  lq          $t7, 0x110($sp)
    ctx->pc = 0x14344cu;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x143450: 0xc5e255f0  lwc1        $f2, 0x55F0($t7)
    ctx->pc = 0x143450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 22000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x143454: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x143454u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x143458: 0xc6220030  lwc1        $f2, 0x30($s1)
    ctx->pc = 0x143458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14345c: 0x4603109c  madd.s      $f2, $f2, $f3
    ctx->pc = 0x14345cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x143460: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x143460u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x143464: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x143464u;
    {
        const bool branch_taken_0x143464 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x143464) {
            ctx->pc = 0x143468u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x143464u;
            // 0x143468: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14347Cu;
            goto label_14347c;
        }
    }
    ctx->pc = 0x14346Cu;
    // 0x14346c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14346cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x143470: 0x440f1000  mfc1        $t7, $f2
    ctx->pc = 0x143470u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x143474: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x143474u;
    {
        const bool branch_taken_0x143474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143474u;
            // 0x143478: 0x18c03c  dsll32      $t8, $t8, 0 (Delay Slot)
        SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143474) {
            ctx->pc = 0x143490u;
            goto label_143490;
        }
    }
    ctx->pc = 0x14347Cu;
label_14347c:
    // 0x14347c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14347cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x143480: 0x440f1000  mfc1        $t7, $f2
    ctx->pc = 0x143480u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x143484: 0x0  nop
    ctx->pc = 0x143484u;
    // NOP
    // 0x143488: 0x1f27825  or          $t7, $t7, $s2
    ctx->pc = 0x143488u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 18));
    // 0x14348c: 0x18c03c  dsll32      $t8, $t8, 0
    ctx->pc = 0x14348cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 0));
label_143490:
    // 0x143490: 0x18c03f  dsra32      $t8, $t8, 0
    ctx->pc = 0x143490u;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 24) >> (32 + 0));
    // 0x143494: 0xaf0f0000  sw          $t7, 0x0($t8)
    ctx->pc = 0x143494u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 15));
    // 0x143498: 0x7baf0100  lq          $t7, 0x100($sp)
    ctx->pc = 0x143498u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x14349c: 0xc6240034  lwc1        $f4, 0x34($s1)
    ctx->pc = 0x14349cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1434a0: 0xc5e355fc  lwc1        $f3, 0x55FC($t7)
    ctx->pc = 0x1434a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 22012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1434a4: 0x7baf00f0  lq          $t7, 0xF0($sp)
    ctx->pc = 0x1434a4u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1434a8: 0xc5e255f8  lwc1        $f2, 0x55F8($t7)
    ctx->pc = 0x1434a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 22008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1434ac: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x1434acu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1434b0: 0x4603209c  madd.s      $f2, $f4, $f3
    ctx->pc = 0x1434b0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x1434b4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1434b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1434b8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1434B8u;
    {
        const bool branch_taken_0x1434b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1434b8) {
            ctx->pc = 0x1434BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1434B8u;
            // 0x1434bc: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1434D0u;
            goto label_1434d0;
        }
    }
    ctx->pc = 0x1434C0u;
    // 0x1434c0: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1434c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1434c4: 0x44181000  mfc1        $t8, $f2
    ctx->pc = 0x1434c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 24, bits); }
    // 0x1434c8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1434C8u;
    {
        const bool branch_taken_0x1434c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1434CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1434C8u;
            // 0x1434cc: 0x8f8f82b4  lw          $t7, -0x7D4C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1434c8) {
            ctx->pc = 0x1434E4u;
            goto label_1434e4;
        }
    }
    ctx->pc = 0x1434D0u;
label_1434d0:
    // 0x1434d0: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1434d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1434d4: 0x44181000  mfc1        $t8, $f2
    ctx->pc = 0x1434d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 24, bits); }
    // 0x1434d8: 0x0  nop
    ctx->pc = 0x1434d8u;
    // NOP
    // 0x1434dc: 0x312c025  or          $t8, $t8, $s2
    ctx->pc = 0x1434dcu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 18));
    // 0x1434e0: 0x8f8f82b4  lw          $t7, -0x7D4C($gp)
    ctx->pc = 0x1434e0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
label_1434e4:
    // 0x1434e4: 0xadf80004  sw          $t8, 0x4($t7)
    ctx->pc = 0x1434e4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 24));
    // 0x1434e8: 0x8f8f82b4  lw          $t7, -0x7D4C($gp)
    ctx->pc = 0x1434e8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
    // 0x1434ec: 0xadf40008  sw          $s4, 0x8($t7)
    ctx->pc = 0x1434ecu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 20));
    // 0x1434f0: 0x8f8f82b4  lw          $t7, -0x7D4C($gp)
    ctx->pc = 0x1434f0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
    // 0x1434f4: 0xade0000c  sw          $zero, 0xC($t7)
    ctx->pc = 0x1434f4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 0));
    // 0x1434f8: 0x7baf00e0  lq          $t7, 0xE0($sp)
    ctx->pc = 0x1434f8u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1434fc: 0x8f9882b4  lw          $t8, -0x7D4C($gp)
    ctx->pc = 0x1434fcu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
    // 0x143500: 0xc5e355f4  lwc1        $f3, 0x55F4($t7)
    ctx->pc = 0x143500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 22004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x143504: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x143504u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x143508: 0xaf9882b4  sw          $t8, -0x7D4C($gp)
    ctx->pc = 0x143508u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935220), GPR_U32(ctx, 24));
    // 0x14350c: 0x7baf00d0  lq          $t7, 0xD0($sp)
    ctx->pc = 0x14350cu;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x143510: 0xc5e255f0  lwc1        $f2, 0x55F0($t7)
    ctx->pc = 0x143510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 22000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x143514: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x143514u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x143518: 0xc6220038  lwc1        $f2, 0x38($s1)
    ctx->pc = 0x143518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14351c: 0x4603109c  madd.s      $f2, $f2, $f3
    ctx->pc = 0x14351cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x143520: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x143520u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x143524: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x143524u;
    {
        const bool branch_taken_0x143524 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x143524) {
            ctx->pc = 0x143528u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x143524u;
            // 0x143528: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14353Cu;
            goto label_14353c;
        }
    }
    ctx->pc = 0x14352Cu;
    // 0x14352c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14352cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x143530: 0x440f1000  mfc1        $t7, $f2
    ctx->pc = 0x143530u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x143534: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x143534u;
    {
        const bool branch_taken_0x143534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143534u;
            // 0x143538: 0x18c03c  dsll32      $t8, $t8, 0 (Delay Slot)
        SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143534) {
            ctx->pc = 0x143550u;
            goto label_143550;
        }
    }
    ctx->pc = 0x14353Cu;
label_14353c:
    // 0x14353c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14353cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x143540: 0x440f1000  mfc1        $t7, $f2
    ctx->pc = 0x143540u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x143544: 0x0  nop
    ctx->pc = 0x143544u;
    // NOP
    // 0x143548: 0x1f27825  or          $t7, $t7, $s2
    ctx->pc = 0x143548u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 18));
    // 0x14354c: 0x18c03c  dsll32      $t8, $t8, 0
    ctx->pc = 0x14354cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 0));
label_143550:
    // 0x143550: 0x18c03f  dsra32      $t8, $t8, 0
    ctx->pc = 0x143550u;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 24) >> (32 + 0));
    // 0x143554: 0xaf0f0000  sw          $t7, 0x0($t8)
    ctx->pc = 0x143554u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 15));
    // 0x143558: 0x7baf00c0  lq          $t7, 0xC0($sp)
    ctx->pc = 0x143558u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x14355c: 0xc624003c  lwc1        $f4, 0x3C($s1)
    ctx->pc = 0x14355cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x143560: 0xc5e355fc  lwc1        $f3, 0x55FC($t7)
    ctx->pc = 0x143560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 22012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x143564: 0x7baf00b0  lq          $t7, 0xB0($sp)
    ctx->pc = 0x143564u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x143568: 0xc5e255f8  lwc1        $f2, 0x55F8($t7)
    ctx->pc = 0x143568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 22008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14356c: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x14356cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x143570: 0x4603209c  madd.s      $f2, $f4, $f3
    ctx->pc = 0x143570u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x143574: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x143574u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x143578: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x143578u;
    {
        const bool branch_taken_0x143578 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x143578) {
            ctx->pc = 0x14357Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x143578u;
            // 0x14357c: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x143590u;
            goto label_143590;
        }
    }
    ctx->pc = 0x143580u;
    // 0x143580: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x143580u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x143584: 0x44191000  mfc1        $t9, $f2
    ctx->pc = 0x143584u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 25, bits); }
    // 0x143588: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x143588u;
    {
        const bool branch_taken_0x143588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14358Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143588u;
            // 0x14358c: 0x8f9882b4  lw          $t8, -0x7D4C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143588) {
            ctx->pc = 0x1435A4u;
            goto label_1435a4;
        }
    }
    ctx->pc = 0x143590u;
label_143590:
    // 0x143590: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x143590u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x143594: 0x44191000  mfc1        $t9, $f2
    ctx->pc = 0x143594u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 25, bits); }
    // 0x143598: 0x0  nop
    ctx->pc = 0x143598u;
    // NOP
    // 0x14359c: 0x332c825  or          $t9, $t9, $s2
    ctx->pc = 0x14359cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | GPR_U64(ctx, 18));
    // 0x1435a0: 0x8f9882b4  lw          $t8, -0x7D4C($gp)
    ctx->pc = 0x1435a0u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
label_1435a4:
    // 0x1435a4: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x1435a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x1435a8: 0x2b3782a  slt         $t7, $s5, $s3
    ctx->pc = 0x1435a8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1435ac: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x1435acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1435b0: 0xaf190004  sw          $t9, 0x4($t8)
    ctx->pc = 0x1435b0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4), GPR_U32(ctx, 25));
    // 0x1435b4: 0x8f9882b4  lw          $t8, -0x7D4C($gp)
    ctx->pc = 0x1435b4u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
    // 0x1435b8: 0xaf140008  sw          $s4, 0x8($t8)
    ctx->pc = 0x1435b8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 20));
    // 0x1435bc: 0x8f9882b4  lw          $t8, -0x7D4C($gp)
    ctx->pc = 0x1435bcu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
    // 0x1435c0: 0xaf00000c  sw          $zero, 0xC($t8)
    ctx->pc = 0x1435c0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 0));
    // 0x1435c4: 0x8f9882b4  lw          $t8, -0x7D4C($gp)
    ctx->pc = 0x1435c4u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
    // 0x1435c8: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x1435c8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x1435cc: 0x15e0fe8c  bnez        $t7, . + 4 + (-0x174 << 2)
    ctx->pc = 0x1435CCu;
    {
        const bool branch_taken_0x1435cc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1435D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1435CCu;
            // 0x1435d0: 0xaf9882b4  sw          $t8, -0x7D4C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935220), GPR_U32(ctx, 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1435cc) {
            ctx->pc = 0x143000u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_143000;
        }
    }
    ctx->pc = 0x1435D4u;
    // 0x1435d4: 0x0  nop
    ctx->pc = 0x1435d4u;
    // NOP
label_1435d8:
    // 0x1435d8: 0x2b0082a  slt         $at, $s5, $s0
    ctx->pc = 0x1435d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1435dc: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
    ctx->pc = 0x1435DCu;
    {
        const bool branch_taken_0x1435dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1435dc) {
            ctx->pc = 0x1436C8u;
            goto label_1436c8;
        }
    }
    ctx->pc = 0x1435E4u;
    // 0x1435e4: 0x3c054f00  lui         $a1, 0x4F00
    ctx->pc = 0x1435e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20224 << 16));
    // 0x1435e8: 0x3c0a8000  lui         $t2, 0x8000
    ctx->pc = 0x1435e8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32768 << 16));
    // 0x1435ec: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x1435ecu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1435f0: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1435f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1435f4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1435f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1435f8: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x1435f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x1435fc: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x1435fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x143600: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x143600u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_143604:
    // 0x143604: 0xc4a055f0  lwc1        $f0, 0x55F0($a1)
    ctx->pc = 0x143604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 22000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143608: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x143608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14360c: 0xc4c155f4  lwc1        $f1, 0x55F4($a2)
    ctx->pc = 0x14360cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 22004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x143610: 0x46002018  adda.s      $f4, $f0
    ctx->pc = 0x143610u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x143614: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x143614u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x143618: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x143618u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14361c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x14361Cu;
    {
        const bool branch_taken_0x14361c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14361c) {
            ctx->pc = 0x143620u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14361Cu;
            // 0x143620: 0x46030001  sub.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x143634u;
            goto label_143634;
        }
    }
    ctx->pc = 0x143624u;
    // 0x143624: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x143624u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x143628: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x143628u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x14362c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14362Cu;
    {
        const bool branch_taken_0x14362c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14362Cu;
            // 0x143630: 0x18383c  dsll32      $a3, $t8, 0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 24) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14362c) {
            ctx->pc = 0x143648u;
            goto label_143648;
        }
    }
    ctx->pc = 0x143634u;
label_143634:
    // 0x143634: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x143634u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x143638: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x143638u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x14363c: 0x0  nop
    ctx->pc = 0x14363cu;
    // NOP
    // 0x143640: 0x10a4025  or          $t0, $t0, $t2
    ctx->pc = 0x143640u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 10));
    // 0x143644: 0x18383c  dsll32      $a3, $t8, 0
    ctx->pc = 0x143644u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 24) << (32 + 0));
label_143648:
    // 0x143648: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x143648u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x14364c: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x14364cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x143650: 0xc46055f8  lwc1        $f0, 0x55F8($v1)
    ctx->pc = 0x143650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 22008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143654: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x143654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x143658: 0xc48155fc  lwc1        $f1, 0x55FC($a0)
    ctx->pc = 0x143658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 22012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14365c: 0x46002018  adda.s      $f4, $f0
    ctx->pc = 0x14365cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x143660: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x143660u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x143664: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x143664u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x143668: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x143668u;
    {
        const bool branch_taken_0x143668 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x143668) {
            ctx->pc = 0x14366Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x143668u;
            // 0x14366c: 0x46030001  sub.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x143680u;
            goto label_143680;
        }
    }
    ctx->pc = 0x143670u;
    // 0x143670: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x143670u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x143674: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x143674u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x143678: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x143678u;
    {
        const bool branch_taken_0x143678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14367Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143678u;
            // 0x14367c: 0x8f8882b4  lw          $t0, -0x7D4C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143678) {
            ctx->pc = 0x143694u;
            goto label_143694;
        }
    }
    ctx->pc = 0x143680u;
label_143680:
    // 0x143680: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x143680u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x143684: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x143684u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x143688: 0x0  nop
    ctx->pc = 0x143688u;
    // NOP
    // 0x14368c: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x14368cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x143690: 0x8f8882b4  lw          $t0, -0x7D4C($gp)
    ctx->pc = 0x143690u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
label_143694:
    // 0x143694: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x143694u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x143698: 0x2b0382a  slt         $a3, $s5, $s0
    ctx->pc = 0x143698u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x14369c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x14369cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1436a0: 0xad090004  sw          $t1, 0x4($t0)
    ctx->pc = 0x1436a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 9));
    // 0x1436a4: 0x8f8882b4  lw          $t0, -0x7D4C($gp)
    ctx->pc = 0x1436a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
    // 0x1436a8: 0xad140008  sw          $s4, 0x8($t0)
    ctx->pc = 0x1436a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 20));
    // 0x1436ac: 0x8f8882b4  lw          $t0, -0x7D4C($gp)
    ctx->pc = 0x1436acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
    // 0x1436b0: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x1436b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
    // 0x1436b4: 0x8f8882b4  lw          $t0, -0x7D4C($gp)
    ctx->pc = 0x1436b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
    // 0x1436b8: 0x25180010  addiu       $t8, $t0, 0x10
    ctx->pc = 0x1436b8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x1436bc: 0x14e0ffd1  bnez        $a3, . + 4 + (-0x2F << 2)
    ctx->pc = 0x1436BCu;
    {
        const bool branch_taken_0x1436bc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1436C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1436BCu;
            // 0x1436c0: 0xaf9882b4  sw          $t8, -0x7D4C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935220), GPR_U32(ctx, 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1436bc) {
            ctx->pc = 0x143604u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_143604;
        }
    }
    ctx->pc = 0x1436C4u;
    // 0x1436c4: 0x0  nop
    ctx->pc = 0x1436c4u;
    // NOP
label_1436c8:
    // 0x1436c8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1436c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1436cc:
    // 0x1436cc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1436ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1436d0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1436d0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1436d4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1436d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1436d8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1436d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1436dc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1436dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1436e0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1436e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1436e4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1436e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1436e8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1436e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1436ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1436ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1436f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1436f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1436f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1436F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1436F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1436F4u;
            // 0x1436f8: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1436FCu;
    // 0x1436fc: 0x0  nop
    ctx->pc = 0x1436fcu;
    // NOP
}
