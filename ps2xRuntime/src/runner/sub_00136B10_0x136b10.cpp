#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00136B10
// Address: 0x136b10 - 0x136c60
void sub_00136B10_0x136b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136B10_0x136b10");
#endif

    switch (ctx->pc) {
        case 0x136b40u: goto label_136b40;
        case 0x136bc8u: goto label_136bc8;
        default: break;
    }

    ctx->pc = 0x136b10u;

    // 0x136b10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x136b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x136b14: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x136b14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136b18: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x136b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x136b1c: 0x2ce10002  sltiu       $at, $a3, 0x2
    ctx->pc = 0x136b1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x136b20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x136b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x136b24: 0x46006406  mov.s       $f16, $f12
    ctx->pc = 0x136b24u;
    ctx->f[16] = FPU_MOV_S(ctx->f[12]);
    // 0x136b28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x136b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x136b2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x136b2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136b30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x136b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x136b34: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x136B34u;
    {
        const bool branch_taken_0x136b34 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x136B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136B34u;
            // 0x136b38: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136b34) {
            ctx->pc = 0x136B88u;
            goto label_136b88;
        }
    }
    ctx->pc = 0x136B3Cu;
    // 0x136b3c: 0x1071821  addu        $v1, $t0, $a3
    ctx->pc = 0x136b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_136b40:
    // 0x136b40: 0x33042  srl         $a2, $v1, 1
    ctx->pc = 0x136b40u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x136b44: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x136b44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x136b48: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x136b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x136b4c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x136b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x136b50: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x136b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x136b54: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x136b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136b58: 0x46008034  c.lt.s      $f16, $f0
    ctx->pc = 0x136b58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[16], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136b5c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x136B5Cu;
    {
        const bool branch_taken_0x136b5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x136b5c) {
            ctx->pc = 0x136B70u;
            goto label_136b70;
        }
    }
    ctx->pc = 0x136B64u;
    // 0x136b64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x136B64u;
    {
        const bool branch_taken_0x136b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136B64u;
            // 0x136b68: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136b64) {
            ctx->pc = 0x136B78u;
            goto label_136b78;
        }
    }
    ctx->pc = 0x136B6Cu;
    // 0x136b6c: 0x0  nop
    ctx->pc = 0x136b6cu;
    // NOP
label_136b70:
    // 0x136b70: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x136b70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136b74: 0x0  nop
    ctx->pc = 0x136b74u;
    // NOP
label_136b78:
    // 0x136b78: 0xe81823  subu        $v1, $a3, $t0
    ctx->pc = 0x136b78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x136b7c: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x136b7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x136b80: 0x5020ffef  beql        $at, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x136B80u;
    {
        const bool branch_taken_0x136b80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x136b80) {
            ctx->pc = 0x136B84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x136B80u;
            // 0x136b84: 0x1071821  addu        $v1, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x136B40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_136b40;
        }
    }
    ctx->pc = 0x136B88u;
label_136b88:
    // 0x136b88: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x136b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x136b8c: 0x82840  sll         $a1, $t0, 1
    ctx->pc = 0x136b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x136b90: 0x103182a  slt         $v1, $t0, $v1
    ctx->pc = 0x136b90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x136b94: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x136b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x136b98: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x136b98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x136b9c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x136B9Cu;
    {
        const bool branch_taken_0x136b9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x136BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136B9Cu;
            // 0x136ba0: 0x859021  addu        $s2, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136b9c) {
            ctx->pc = 0x136BB0u;
            goto label_136bb0;
        }
    }
    ctx->pc = 0x136BA4u;
    // 0x136ba4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x136ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x136ba8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x136BA8u;
    {
        const bool branch_taken_0x136ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136BA8u;
            // 0x136bac: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136ba8) {
            ctx->pc = 0x136C40u;
            goto label_136c40;
        }
    }
    ctx->pc = 0x136BB0u;
label_136bb0:
    // 0x136bb0: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x136bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x136bb4: 0xc64d0010  lwc1        $f13, 0x10($s2)
    ctx->pc = 0x136bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x136bb8: 0xc64e0018  lwc1        $f14, 0x18($s2)
    ctx->pc = 0x136bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x136bbc: 0xc64f0020  lwc1        $f15, 0x20($s2)
    ctx->pc = 0x136bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x136bc0: 0xc04d9ec  jal         func_1367B0
    ctx->pc = 0x136BC0u;
    SET_GPR_U32(ctx, 31, 0x136BC8u);
    ctx->pc = 0x136BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136BC0u;
            // 0x136bc4: 0x26510018  addiu       $s1, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1367B0u;
    if (runtime->hasFunction(0x1367B0u)) {
        auto targetFn = runtime->lookupFunction(0x1367B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136BC8u; }
        if (ctx->pc != 0x136BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001367B0_0x1367b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136BC8u; }
        if (ctx->pc != 0x136BC8u) { return; }
    }
    ctx->pc = 0x136BC8u;
label_136bc8:
    // 0x136bc8: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x136bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136bcc: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x136bccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
    // 0x136bd0: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x136bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x136bd4: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x136bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
    // 0x136bd8: 0xc6460014  lwc1        $f6, 0x14($s2)
    ctx->pc = 0x136bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x136bdc: 0x468009e0  cvt.s.w     $f7, $f1
    ctx->pc = 0x136bdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x136be0: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x136be0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x136be4: 0xc625000c  lwc1        $f5, 0xC($s1)
    ctx->pc = 0x136be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x136be8: 0x46072101  sub.s       $f4, $f4, $f7
    ctx->pc = 0x136be8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
    // 0x136bec: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x136becu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
    // 0x136bf0: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x136bf0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x136bf4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x136bf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x136bf8: 0x0  nop
    ctx->pc = 0x136bf8u;
    // NOP
    // 0x136bfc: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x136bfcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x136c00: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x136c00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x136c04: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x136c04u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x136c08: 0x46062041  sub.s       $f1, $f4, $f6
    ctx->pc = 0x136c08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
    // 0x136c0c: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x136c0cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x136c10: 0x0  nop
    ctx->pc = 0x136c10u;
    // NOP
    // 0x136c14: 0x4601185c  madd.s      $f1, $f3, $f1
    ctx->pc = 0x136c14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x136c18: 0x4601001a  mula.s      $f0, $f1
    ctx->pc = 0x136c18u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x136c1c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x136c1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x136c20: 0x0  nop
    ctx->pc = 0x136c20u;
    // NOP
    // 0x136c24: 0x4606185c  madd.s      $f1, $f3, $f6
    ctx->pc = 0x136c24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[6]));
    // 0x136c28: 0x46071018  adda.s      $f2, $f7
    ctx->pc = 0x136c28u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x136c2c: 0x4601001c  madd.s      $f0, $f0, $f1
    ctx->pc = 0x136c2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
    // 0x136c30: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x136c30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x136c34: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x136c34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x136c38: 0x0  nop
    ctx->pc = 0x136c38u;
    // NOP
    // 0x136c3c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x136c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_136c40:
    // 0x136c40: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x136c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x136c44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x136c44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136c48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x136c48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136c4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x136c4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136c50: 0x3e00008  jr          $ra
    ctx->pc = 0x136C50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136C50u;
            // 0x136c54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x136C58u;
    // 0x136c58: 0x0  nop
    ctx->pc = 0x136c58u;
    // NOP
    // 0x136c5c: 0x0  nop
    ctx->pc = 0x136c5cu;
    // NOP
}
