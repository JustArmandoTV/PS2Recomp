#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002699B0
// Address: 0x2699b0 - 0x269b30
void sub_002699B0_0x2699b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002699B0_0x2699b0");
#endif

    switch (ctx->pc) {
        case 0x2699f8u: goto label_2699f8;
        case 0x269a30u: goto label_269a30;
        case 0x269a88u: goto label_269a88;
        case 0x269b00u: goto label_269b00;
        case 0x269b08u: goto label_269b08;
        default: break;
    }

    ctx->pc = 0x2699b0u;

    // 0x2699b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2699b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2699b4: 0x3c080064  lui         $t0, 0x64
    ctx->pc = 0x2699b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)100 << 16));
    // 0x2699b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2699b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2699bc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2699bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2699c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2699c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2699c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2699c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2699c8: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x2699c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x2699cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2699ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2699d0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2699d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2699d4: 0x26060f70  addiu       $a2, $s0, 0xF70
    ctx->pc = 0x2699d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 3952));
    // 0x2699d8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2699d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2699dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2699dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2699e0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2699e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2699e4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2699e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2699e8: 0x24470f70  addiu       $a3, $v0, 0xF70
    ctx->pc = 0x2699e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 3952));
    // 0x2699ec: 0x10c70024  beq         $a2, $a3, . + 4 + (0x24 << 2)
    ctx->pc = 0x2699ECu;
    {
        const bool branch_taken_0x2699ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x2699F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2699ECu;
            // 0x2699f0: 0x2508f9a0  addiu       $t0, $t0, -0x660 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2699ec) {
            ctx->pc = 0x269A80u;
            goto label_269a80;
        }
    }
    ctx->pc = 0x2699F4u;
    // 0x2699f4: 0x0  nop
    ctx->pc = 0x2699f4u;
    // NOP
label_2699f8:
    // 0x2699f8: 0xacc00044  sw          $zero, 0x44($a2)
    ctx->pc = 0x2699f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 0));
    // 0x2699fc: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x2699fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x269a00: 0x24c20030  addiu       $v0, $a2, 0x30
    ctx->pc = 0x269a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x269a04: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x269a04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x269a08: 0x24c50010  addiu       $a1, $a2, 0x10
    ctx->pc = 0x269a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x269a0c: 0x24c40040  addiu       $a0, $a2, 0x40
    ctx->pc = 0x269a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x269a10: 0xacc20024  sw          $v0, 0x24($a2)
    ctx->pc = 0x269a10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 2));
    // 0x269a14: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x269a14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x269a18: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x269A18u;
    {
        const bool branch_taken_0x269a18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x269A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269A18u;
            // 0x269a1c: 0xacc50034  sw          $a1, 0x34($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269a18) {
            ctx->pc = 0x269A70u;
            goto label_269a70;
        }
    }
    ctx->pc = 0x269A20u;
    // 0x269a20: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x269a20u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x269a24: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x269A24u;
    {
        const bool branch_taken_0x269a24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x269a24) {
            ctx->pc = 0x269A70u;
            goto label_269a70;
        }
    }
    ctx->pc = 0x269A2Cu;
    // 0x269a2c: 0x0  nop
    ctx->pc = 0x269a2cu;
    // NOP
label_269a30:
    // 0x269a30: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x269a30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
    // 0x269a34: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x269a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x269a38: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x269a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x269a3c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x269a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x269a40: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x269a40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x269a44: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x269a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x269a48: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x269a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x269a4c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x269a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x269a50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x269a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x269a54: 0x24420f80  addiu       $v0, $v0, 0xF80
    ctx->pc = 0x269a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3968));
    // 0x269a58: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x269a58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x269a5c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x269a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x269a60: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x269a60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x269a64: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x269A64u;
    {
        const bool branch_taken_0x269a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269A64u;
            // 0x269a68: 0x2508000c  addiu       $t0, $t0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269a64) {
            ctx->pc = 0x269A30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_269a30;
        }
    }
    ctx->pc = 0x269A6Cu;
    // 0x269a6c: 0x0  nop
    ctx->pc = 0x269a6cu;
    // NOP
label_269a70:
    // 0x269a70: 0x24c60050  addiu       $a2, $a2, 0x50
    ctx->pc = 0x269a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x269a74: 0x14c7ffe0  bne         $a2, $a3, . + 4 + (-0x20 << 2)
    ctx->pc = 0x269A74u;
    {
        const bool branch_taken_0x269a74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x269a74) {
            ctx->pc = 0x2699F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2699f8;
        }
    }
    ctx->pc = 0x269A7Cu;
    // 0x269a7c: 0x0  nop
    ctx->pc = 0x269a7cu;
    // NOP
label_269a80:
    // 0x269a80: 0xc09a6cc  jal         func_269B30
    ctx->pc = 0x269A80u;
    SET_GPR_U32(ctx, 31, 0x269A88u);
    ctx->pc = 0x269A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269A80u;
            // 0x269a84: 0x26041060  addiu       $a0, $s0, 0x1060 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x269B30u;
    if (runtime->hasFunction(0x269B30u)) {
        auto targetFn = runtime->lookupFunction(0x269B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269A88u; }
        if (ctx->pc != 0x269A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00269B30_0x269b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269A88u; }
        if (ctx->pc != 0x269A88u) { return; }
    }
    ctx->pc = 0x269A88u;
label_269a88:
    // 0x269a88: 0xc6020020  lwc1        $f2, 0x20($s0)
    ctx->pc = 0x269a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x269a8c: 0xc6010060  lwc1        $f1, 0x60($s0)
    ctx->pc = 0x269a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269a90: 0xc6060024  lwc1        $f6, 0x24($s0)
    ctx->pc = 0x269a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x269a94: 0xc6050064  lwc1        $f5, 0x64($s0)
    ctx->pc = 0x269a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x269a98: 0xc6071060  lwc1        $f7, 0x1060($s0)
    ctx->pc = 0x269a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x269a9c: 0xc6041064  lwc1        $f4, 0x1064($s0)
    ctx->pc = 0x269a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x269aa0: 0xc6030028  lwc1        $f3, 0x28($s0)
    ctx->pc = 0x269aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x269aa4: 0x46011201  sub.s       $f8, $f2, $f1
    ctx->pc = 0x269aa4u;
    ctx->f[8] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x269aa8: 0xc6020068  lwc1        $f2, 0x68($s0)
    ctx->pc = 0x269aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x269aac: 0x46053141  sub.s       $f5, $f6, $f5
    ctx->pc = 0x269aacu;
    ctx->f[5] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x269ab0: 0xc6011068  lwc1        $f1, 0x1068($s0)
    ctx->pc = 0x269ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269ab4: 0x460741c2  mul.s       $f7, $f8, $f7
    ctx->pc = 0x269ab4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x269ab8: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x269ab8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x269abc: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x269abcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x269ac0: 0x46043818  adda.s      $f7, $f4
    ctx->pc = 0x269ac0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[4]);
    // 0x269ac4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x269ac4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269ac8: 0x0  nop
    ctx->pc = 0x269ac8u;
    // NOP
    // 0x269acc: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x269accu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x269ad0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x269ad0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269ad4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x269AD4u;
    {
        const bool branch_taken_0x269ad4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x269AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269AD4u;
            // 0x269ad8: 0x26030060  addiu       $v1, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269ad4) {
            ctx->pc = 0x269AF8u;
            goto label_269af8;
        }
    }
    ctx->pc = 0x269ADCu;
    // 0x269adc: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x269adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x269ae0: 0xae031020  sw          $v1, 0x1020($s0)
    ctx->pc = 0x269ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4128), GPR_U32(ctx, 3));
    // 0x269ae4: 0xae030fd0  sw          $v1, 0xFD0($s0)
    ctx->pc = 0x269ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4048), GPR_U32(ctx, 3));
    // 0x269ae8: 0xae030f80  sw          $v1, 0xF80($s0)
    ctx->pc = 0x269ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3968), GPR_U32(ctx, 3));
    // 0x269aec: 0xae021070  sw          $v0, 0x1070($s0)
    ctx->pc = 0x269aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4208), GPR_U32(ctx, 2));
    // 0x269af0: 0xae020fe0  sw          $v0, 0xFE0($s0)
    ctx->pc = 0x269af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4064), GPR_U32(ctx, 2));
    // 0x269af4: 0xae020fa0  sw          $v0, 0xFA0($s0)
    ctx->pc = 0x269af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4000), GPR_U32(ctx, 2));
label_269af8:
    // 0x269af8: 0x26110f70  addiu       $s1, $s0, 0xF70
    ctx->pc = 0x269af8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 3952));
    // 0x269afc: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x269afcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_269b00:
    // 0x269b00: 0xc09a6cc  jal         func_269B30
    ctx->pc = 0x269B00u;
    SET_GPR_U32(ctx, 31, 0x269B08u);
    ctx->pc = 0x269B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269B00u;
            // 0x269b04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x269B30u;
    if (runtime->hasFunction(0x269B30u)) {
        auto targetFn = runtime->lookupFunction(0x269B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269B08u; }
        if (ctx->pc != 0x269B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00269B30_0x269b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269B08u; }
        if (ctx->pc != 0x269B08u) { return; }
    }
    ctx->pc = 0x269B08u;
label_269b08:
    // 0x269b08: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x269b08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x269b0c: 0x26310050  addiu       $s1, $s1, 0x50
    ctx->pc = 0x269b0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x269b10: 0x0  nop
    ctx->pc = 0x269b10u;
    // NOP
    // 0x269b14: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x269B14u;
    {
        const bool branch_taken_0x269b14 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x269b14) {
            ctx->pc = 0x269B00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_269b00;
        }
    }
    ctx->pc = 0x269B1Cu;
    // 0x269b1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x269b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x269b20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x269b20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x269b24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x269b24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x269b28: 0x3e00008  jr          $ra
    ctx->pc = 0x269B28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269B28u;
            // 0x269b2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x269B30u;
}
