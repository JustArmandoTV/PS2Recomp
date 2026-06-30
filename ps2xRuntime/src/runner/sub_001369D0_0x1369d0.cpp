#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001369D0
// Address: 0x1369d0 - 0x136b10
void sub_001369D0_0x1369d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001369D0_0x1369d0");
#endif

    switch (ctx->pc) {
        case 0x136a00u: goto label_136a00;
        case 0x136a88u: goto label_136a88;
        default: break;
    }

    ctx->pc = 0x1369d0u;

    // 0x1369d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1369d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1369d4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1369d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1369d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1369d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1369dc: 0x2ce10002  sltiu       $at, $a3, 0x2
    ctx->pc = 0x1369dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1369e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1369e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1369e4: 0x46006406  mov.s       $f16, $f12
    ctx->pc = 0x1369e4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[12]);
    // 0x1369e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1369e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1369ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1369ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1369f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1369f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1369f4: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x1369F4u;
    {
        const bool branch_taken_0x1369f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1369F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1369F4u;
            // 0x1369f8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1369f4) {
            ctx->pc = 0x136A48u;
            goto label_136a48;
        }
    }
    ctx->pc = 0x1369FCu;
    // 0x1369fc: 0x1071821  addu        $v1, $t0, $a3
    ctx->pc = 0x1369fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_136a00:
    // 0x136a00: 0x33042  srl         $a2, $v1, 1
    ctx->pc = 0x136a00u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x136a04: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x136a04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x136a08: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x136a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x136a0c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x136a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x136a10: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x136a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x136a14: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x136a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136a18: 0x46008034  c.lt.s      $f16, $f0
    ctx->pc = 0x136a18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[16], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136a1c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x136A1Cu;
    {
        const bool branch_taken_0x136a1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x136a1c) {
            ctx->pc = 0x136A30u;
            goto label_136a30;
        }
    }
    ctx->pc = 0x136A24u;
    // 0x136a24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x136A24u;
    {
        const bool branch_taken_0x136a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136A24u;
            // 0x136a28: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136a24) {
            ctx->pc = 0x136A38u;
            goto label_136a38;
        }
    }
    ctx->pc = 0x136A2Cu;
    // 0x136a2c: 0x0  nop
    ctx->pc = 0x136a2cu;
    // NOP
label_136a30:
    // 0x136a30: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x136a30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136a34: 0x0  nop
    ctx->pc = 0x136a34u;
    // NOP
label_136a38:
    // 0x136a38: 0xe81823  subu        $v1, $a3, $t0
    ctx->pc = 0x136a38u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x136a3c: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x136a3cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x136a40: 0x5020ffef  beql        $at, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x136A40u;
    {
        const bool branch_taken_0x136a40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x136a40) {
            ctx->pc = 0x136A44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x136A40u;
            // 0x136a44: 0x1071821  addu        $v1, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x136A00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_136a00;
        }
    }
    ctx->pc = 0x136A48u;
label_136a48:
    // 0x136a48: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x136a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x136a4c: 0x82840  sll         $a1, $t0, 1
    ctx->pc = 0x136a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x136a50: 0x103182a  slt         $v1, $t0, $v1
    ctx->pc = 0x136a50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x136a54: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x136a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x136a58: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x136a58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x136a5c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x136A5Cu;
    {
        const bool branch_taken_0x136a5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x136A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136A5Cu;
            // 0x136a60: 0x859021  addu        $s2, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136a5c) {
            ctx->pc = 0x136A70u;
            goto label_136a70;
        }
    }
    ctx->pc = 0x136A64u;
    // 0x136a64: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x136a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136a68: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x136A68u;
    {
        const bool branch_taken_0x136a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136A68u;
            // 0x136a6c: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x136a68) {
            ctx->pc = 0x136AECu;
            goto label_136aec;
        }
    }
    ctx->pc = 0x136A70u;
label_136a70:
    // 0x136a70: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x136a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x136a74: 0xc64d0010  lwc1        $f13, 0x10($s2)
    ctx->pc = 0x136a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x136a78: 0xc64e0018  lwc1        $f14, 0x18($s2)
    ctx->pc = 0x136a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x136a7c: 0xc64f0020  lwc1        $f15, 0x20($s2)
    ctx->pc = 0x136a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x136a80: 0xc04d9ec  jal         func_1367B0
    ctx->pc = 0x136A80u;
    SET_GPR_U32(ctx, 31, 0x136A88u);
    ctx->pc = 0x136A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136A80u;
            // 0x136a84: 0x26510018  addiu       $s1, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1367B0u;
    if (runtime->hasFunction(0x1367B0u)) {
        auto targetFn = runtime->lookupFunction(0x1367B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136A88u; }
        if (ctx->pc != 0x136A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001367B0_0x1367b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136A88u; }
        if (ctx->pc != 0x136A88u) { return; }
    }
    ctx->pc = 0x136A88u;
label_136a88:
    // 0x136a88: 0xc6470004  lwc1        $f7, 0x4($s2)
    ctx->pc = 0x136a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x136a8c: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x136a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
    // 0x136a90: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x136a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x136a94: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x136a94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
    // 0x136a98: 0xc6460014  lwc1        $f6, 0x14($s2)
    ctx->pc = 0x136a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x136a9c: 0xc625000c  lwc1        $f5, 0xC($s1)
    ctx->pc = 0x136a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x136aa0: 0x46072101  sub.s       $f4, $f4, $f7
    ctx->pc = 0x136aa0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
    // 0x136aa4: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x136aa4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
    // 0x136aa8: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x136aa8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x136aac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x136aacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x136ab0: 0x0  nop
    ctx->pc = 0x136ab0u;
    // NOP
    // 0x136ab4: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x136ab4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x136ab8: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x136ab8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x136abc: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x136abcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x136ac0: 0x46062041  sub.s       $f1, $f4, $f6
    ctx->pc = 0x136ac0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
    // 0x136ac4: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x136ac4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x136ac8: 0x0  nop
    ctx->pc = 0x136ac8u;
    // NOP
    // 0x136acc: 0x4601185c  madd.s      $f1, $f3, $f1
    ctx->pc = 0x136accu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x136ad0: 0x4601001a  mula.s      $f0, $f1
    ctx->pc = 0x136ad0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x136ad4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x136ad4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x136ad8: 0x0  nop
    ctx->pc = 0x136ad8u;
    // NOP
    // 0x136adc: 0x4606185c  madd.s      $f1, $f3, $f6
    ctx->pc = 0x136adcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[6]));
    // 0x136ae0: 0x46071018  adda.s      $f2, $f7
    ctx->pc = 0x136ae0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x136ae4: 0x4601001c  madd.s      $f0, $f0, $f1
    ctx->pc = 0x136ae4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
    // 0x136ae8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x136ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_136aec:
    // 0x136aec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x136aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x136af0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x136af0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136af4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x136af4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136af8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x136af8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136afc: 0x3e00008  jr          $ra
    ctx->pc = 0x136AFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136AFCu;
            // 0x136b00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x136B04u;
    // 0x136b04: 0x0  nop
    ctx->pc = 0x136b04u;
    // NOP
    // 0x136b08: 0x0  nop
    ctx->pc = 0x136b08u;
    // NOP
    // 0x136b0c: 0x0  nop
    ctx->pc = 0x136b0cu;
    // NOP
}
