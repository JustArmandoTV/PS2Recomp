#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026AC90
// Address: 0x26ac90 - 0x26b340
void sub_0026AC90_0x26ac90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026AC90_0x26ac90");
#endif

    switch (ctx->pc) {
        case 0x26ad08u: goto label_26ad08;
        case 0x26ad5cu: goto label_26ad5c;
        case 0x26adccu: goto label_26adcc;
        case 0x26add8u: goto label_26add8;
        case 0x26ae40u: goto label_26ae40;
        case 0x26aeb0u: goto label_26aeb0;
        case 0x26aedcu: goto label_26aedc;
        case 0x26af28u: goto label_26af28;
        case 0x26b028u: goto label_26b028;
        case 0x26b070u: goto label_26b070;
        case 0x26b088u: goto label_26b088;
        case 0x26b0a4u: goto label_26b0a4;
        case 0x26b148u: goto label_26b148;
        case 0x26b180u: goto label_26b180;
        case 0x26b190u: goto label_26b190;
        case 0x26b1f4u: goto label_26b1f4;
        case 0x26b278u: goto label_26b278;
        default: break;
    }

    ctx->pc = 0x26ac90u;

label_26ac90:
    // 0x26ac90: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x26ac90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x26ac94: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x26ac94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x26ac98: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x26ac98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x26ac9c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x26ac9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x26aca0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x26aca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x26aca4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x26aca4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aca8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x26aca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x26acac: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x26acacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x26acb0: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x26acb0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26acb4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x26acb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x26acb8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x26acb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x26acbc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x26acbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x26acc0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26acc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x26acc4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x26acc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26acc8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x26acc8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26accc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x26acccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26acd0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x26acd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26acd4: 0x80a30004  lb          $v1, 0x4($a1)
    ctx->pc = 0x26acd4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x26acd8: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x26acd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x26acdc: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x26acdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x26ace0: 0x26020038  addiu       $v0, $s0, 0x38
    ctx->pc = 0x26ace0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x26ace4: 0x1060004a  beqz        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x26ACE4u;
    {
        const bool branch_taken_0x26ace4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ACE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26ACE4u;
            // 0x26ace8: 0xafa200f0  sw          $v0, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ace4) {
            ctx->pc = 0x26AE10u;
            goto label_26ae10;
        }
    }
    ctx->pc = 0x26ACECu;
    // 0x26acec: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x26acecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x26acf0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26acf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26acf4: 0xc6f50048  lwc1        $f21, 0x48($s7)
    ctx->pc = 0x26acf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x26acf8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x26acf8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26acfc: 0x2e0982d  daddu       $s3, $s7, $zero
    ctx->pc = 0x26acfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ad00: 0x26f2003c  addiu       $s2, $s7, 0x3C
    ctx->pc = 0x26ad00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 60));
    // 0x26ad04: 0x438804  sllv        $s1, $v1, $v0
    ctx->pc = 0x26ad04u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_26ad08:
    // 0x26ad08: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x26ad08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x26ad0c: 0x80420001  lb          $v0, 0x1($v0)
    ctx->pc = 0x26ad0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x26ad10: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26AD10u;
    {
        const bool branch_taken_0x26ad10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ad10) {
            ctx->pc = 0x26AD28u;
            goto label_26ad28;
        }
    }
    ctx->pc = 0x26AD18u;
    // 0x26ad18: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x26ad18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x26ad1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26ad1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ad20: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x26ad20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x26ad24: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x26ad24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
label_26ad28:
    // 0x26ad28: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x26ad28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ad2c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x26ad2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ad30: 0xc6740050  lwc1        $f20, 0x50($s3)
    ctx->pc = 0x26ad30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26ad34: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26ad34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26ad38: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x26ad38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ad3c: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x26AD3Cu;
    {
        const bool branch_taken_0x26ad3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ad3c) {
            ctx->pc = 0x26AD98u;
            goto label_26ad98;
        }
    }
    ctx->pc = 0x26AD44u;
    // 0x26ad44: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x26ad44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ad48: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x26AD48u;
    {
        const bool branch_taken_0x26ad48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ad48) {
            ctx->pc = 0x26AD98u;
            goto label_26ad98;
        }
    }
    ctx->pc = 0x26AD50u;
    // 0x26ad50: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x26ad50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ad54: 0xc0a32a0  jal         func_28CA80
    ctx->pc = 0x26AD54u;
    SET_GPR_U32(ctx, 31, 0x26AD5Cu);
    ctx->pc = 0x26AD58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AD54u;
            // 0x26ad58: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CA80u;
    if (runtime->hasFunction(0x28CA80u)) {
        auto targetFn = runtime->lookupFunction(0x28CA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AD5Cu; }
        if (ctx->pc != 0x26AD5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CA80_0x28ca80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AD5Cu; }
        if (ctx->pc != 0x26AD5Cu) { return; }
    }
    ctx->pc = 0x26AD5Cu;
label_26ad5c:
    // 0x26ad5c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x26ad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x26ad60: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x26ad60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x26ad64: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26AD64u;
    {
        const bool branch_taken_0x26ad64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ad64) {
            ctx->pc = 0x26AD78u;
            goto label_26ad78;
        }
    }
    ctx->pc = 0x26AD6Cu;
    // 0x26ad6c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x26AD6Cu;
    {
        const bool branch_taken_0x26ad6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AD6Cu;
            // 0x26ad70: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ad6c) {
            ctx->pc = 0x26AD98u;
            goto label_26ad98;
        }
    }
    ctx->pc = 0x26AD74u;
    // 0x26ad74: 0x0  nop
    ctx->pc = 0x26ad74u;
    // NOP
label_26ad78:
    // 0x26ad78: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x26ad78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x26ad7c: 0x80420001  lb          $v0, 0x1($v0)
    ctx->pc = 0x26ad7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x26ad80: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26AD80u;
    {
        const bool branch_taken_0x26ad80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ad80) {
            ctx->pc = 0x26AD98u;
            goto label_26ad98;
        }
    }
    ctx->pc = 0x26AD88u;
    // 0x26ad88: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x26ad88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x26ad8c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x26ad8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26ad90: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x26ad90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x26ad94: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x26ad94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
label_26ad98:
    // 0x26ad98: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x26ad98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x26ad9c: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x26ad9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26ada0: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x26ada0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x26ada4: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x26ADA4u;
    {
        const bool branch_taken_0x26ada4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26ADA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26ADA4u;
            // 0x26ada8: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ada4) {
            ctx->pc = 0x26AD08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26ad08;
        }
    }
    ctx->pc = 0x26ADACu;
    // 0x26adac: 0xc6e1003c  lwc1        $f1, 0x3C($s7)
    ctx->pc = 0x26adacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26adb0: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x26adb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x26adb4: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x26adb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x26adb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26adb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26adbc: 0x0  nop
    ctx->pc = 0x26adbcu;
    // NOP
    // 0x26adc0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26adc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26adc4: 0xc0a32a0  jal         func_28CA80
    ctx->pc = 0x26ADC4u;
    SET_GPR_U32(ctx, 31, 0x26ADCCu);
    ctx->pc = 0x26ADC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26ADC4u;
            // 0x26adc8: 0x4600ab02  mul.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CA80u;
    if (runtime->hasFunction(0x28CA80u)) {
        auto targetFn = runtime->lookupFunction(0x28CA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ADCCu; }
        if (ctx->pc != 0x26ADCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CA80_0x28ca80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ADCCu; }
        if (ctx->pc != 0x26ADCCu) { return; }
    }
    ctx->pc = 0x26ADCCu;
label_26adcc:
    // 0x26adcc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26ADCCu;
    {
        const bool branch_taken_0x26adcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ADD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26ADCCu;
            // 0x26add0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26adcc) {
            ctx->pc = 0x26ADF8u;
            goto label_26adf8;
        }
    }
    ctx->pc = 0x26ADD4u;
    // 0x26add4: 0x0  nop
    ctx->pc = 0x26add4u;
    // NOP
label_26add8:
    // 0x26add8: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x26add8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x26addc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26addcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26ade0: 0x0  nop
    ctx->pc = 0x26ade0u;
    // NOP
    // 0x26ade4: 0x0  nop
    ctx->pc = 0x26ade4u;
    // NOP
    // 0x26ade8: 0x0  nop
    ctx->pc = 0x26ade8u;
    // NOP
    // 0x26adec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26ADECu;
    {
        const bool branch_taken_0x26adec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26adec) {
            ctx->pc = 0x26ADD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26add8;
        }
    }
    ctx->pc = 0x26ADF4u;
    // 0x26adf4: 0x0  nop
    ctx->pc = 0x26adf4u;
    // NOP
label_26adf8:
    // 0x26adf8: 0x24620006  addiu       $v0, $v1, 0x6
    ctx->pc = 0x26adf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x26adfc: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x26adfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x26ae00: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x26ae00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26ae04: 0x61100a  movz        $v0, $v1, $at
    ctx->pc = 0x26ae04u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x26ae08: 0x1000013f  b           . + 4 + (0x13F << 2)
    ctx->pc = 0x26AE08u;
    {
        const bool branch_taken_0x26ae08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ae08) {
            ctx->pc = 0x26B308u;
            goto label_26b308;
        }
    }
    ctx->pc = 0x26AE10u;
label_26ae10:
    // 0x26ae10: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x26ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x26ae14: 0x80420001  lb          $v0, 0x1($v0)
    ctx->pc = 0x26ae14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x26ae18: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x26AE18u;
    {
        const bool branch_taken_0x26ae18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ae18) {
            ctx->pc = 0x26AE80u;
            goto label_26ae80;
        }
    }
    ctx->pc = 0x26AE20u;
    // 0x26ae20: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x26ae20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x26ae24: 0x8ee2001c  lw          $v0, 0x1C($s7)
    ctx->pc = 0x26ae24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 28)));
    // 0x26ae28: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x26ae28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26ae2c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x26AE2Cu;
    {
        const bool branch_taken_0x26ae2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ae2c) {
            ctx->pc = 0x26AE80u;
            goto label_26ae80;
        }
    }
    ctx->pc = 0x26AE34u;
    // 0x26ae34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26ae34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ae38: 0xc09aacc  jal         func_26AB30
    ctx->pc = 0x26AE38u;
    SET_GPR_U32(ctx, 31, 0x26AE40u);
    ctx->pc = 0x26AE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AE38u;
            // 0x26ae3c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26AB30u;
    if (runtime->hasFunction(0x26AB30u)) {
        auto targetFn = runtime->lookupFunction(0x26AB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AE40u; }
        if (ctx->pc != 0x26AE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026AB30_0x26ab30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AE40u; }
        if (ctx->pc != 0x26AE40u) { return; }
    }
    ctx->pc = 0x26AE40u;
label_26ae40:
    // 0x26ae40: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x26ae40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26ae44: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x26AE44u;
    {
        const bool branch_taken_0x26ae44 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ae44) {
            ctx->pc = 0x26AE60u;
            goto label_26ae60;
        }
    }
    ctx->pc = 0x26AE4Cu;
    // 0x26ae4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26ae4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ae50: 0x27a3018c  addiu       $v1, $sp, 0x18C
    ctx->pc = 0x26ae50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
    // 0x26ae54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26AE54u;
    {
        const bool branch_taken_0x26ae54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AE54u;
            // 0x26ae58: 0xa3a2018c  sb          $v0, 0x18C($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 396), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ae54) {
            ctx->pc = 0x26AE68u;
            goto label_26ae68;
        }
    }
    ctx->pc = 0x26AE5Cu;
    // 0x26ae5c: 0x0  nop
    ctx->pc = 0x26ae5cu;
    // NOP
label_26ae60:
    // 0x26ae60: 0xa3a0018c  sb          $zero, 0x18C($sp)
    ctx->pc = 0x26ae60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 396), (uint8_t)GPR_U32(ctx, 0));
    // 0x26ae64: 0x27a3018c  addiu       $v1, $sp, 0x18C
    ctx->pc = 0x26ae64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
label_26ae68:
    // 0x26ae68: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x26ae68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26ae6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26AE6Cu;
    {
        const bool branch_taken_0x26ae6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ae6c) {
            ctx->pc = 0x26AE80u;
            goto label_26ae80;
        }
    }
    ctx->pc = 0x26AE74u;
    // 0x26ae74: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x26ae74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x26ae78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26ae78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ae7c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x26ae7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_26ae80:
    // 0x26ae80: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x26ae80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x26ae84: 0x80420002  lb          $v0, 0x2($v0)
    ctx->pc = 0x26ae84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x26ae88: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x26ae88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x26ae8c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x26ae8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x26ae90: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26AE90u;
    {
        const bool branch_taken_0x26ae90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ae90) {
            ctx->pc = 0x26AEB0u;
            goto label_26aeb0;
        }
    }
    ctx->pc = 0x26AE98u;
    // 0x26ae98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26ae98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ae9c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26ae9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aea0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x26aea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aea4: 0x27a70160  addiu       $a3, $sp, 0x160
    ctx->pc = 0x26aea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x26aea8: 0xc09aadc  jal         func_26AB70
    ctx->pc = 0x26AEA8u;
    SET_GPR_U32(ctx, 31, 0x26AEB0u);
    ctx->pc = 0x26AEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AEA8u;
            // 0x26aeac: 0xa3a00160  sb          $zero, 0x160($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 352), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26AB70u;
    if (runtime->hasFunction(0x26AB70u)) {
        auto targetFn = runtime->lookupFunction(0x26AB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AEB0u; }
        if (ctx->pc != 0x26AEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026AB70_0x26ab70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AEB0u; }
        if (ctx->pc != 0x26AEB0u) { return; }
    }
    ctx->pc = 0x26AEB0u;
label_26aeb0:
    // 0x26aeb0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x26aeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x26aeb4: 0x2442d028  addiu       $v0, $v0, -0x2FD8
    ctx->pc = 0x26aeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955048));
    // 0x26aeb8: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x26aeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x26aebc: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x26aebcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26aec0: 0x27a30178  addiu       $v1, $sp, 0x178
    ctx->pc = 0x26aec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x26aec4: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x26aec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x26aec8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26aec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26aecc: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x26aeccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x26aed0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x26aed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x26aed4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x26AED4u;
    {
        const bool branch_taken_0x26aed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AED4u;
            // 0x26aed8: 0xfca40000  sd          $a0, 0x0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aed4) {
            ctx->pc = 0x26AEF8u;
            goto label_26aef8;
        }
    }
    ctx->pc = 0x26AEDCu;
label_26aedc:
    // 0x26aedc: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x26aedcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x26aee0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x26aee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x26aee4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26aee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26aee8: 0x0  nop
    ctx->pc = 0x26aee8u;
    // NOP
    // 0x26aeec: 0x0  nop
    ctx->pc = 0x26aeecu;
    // NOP
    // 0x26aef0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26AEF0u;
    {
        const bool branch_taken_0x26aef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26aef0) {
            ctx->pc = 0x26AEDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26aedc;
        }
    }
    ctx->pc = 0x26AEF8u;
label_26aef8:
    // 0x26aef8: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x26aef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x26aefc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26aefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26af00: 0x26fe003c  addiu       $fp, $s7, 0x3C
    ctx->pc = 0x26af00u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 23), 60));
    // 0x26af04: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x26af04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x26af08: 0x27a2017c  addiu       $v0, $sp, 0x17C
    ctx->pc = 0x26af08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
    // 0x26af0c: 0xafa30178  sw          $v1, 0x178($sp)
    ctx->pc = 0x26af0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 3));
    // 0x26af10: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x26af10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x26af14: 0x27a20184  addiu       $v0, $sp, 0x184
    ctx->pc = 0x26af14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x26af18: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x26af18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x26af1c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x26af1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x26af20: 0xafa2017c  sw          $v0, 0x17C($sp)
    ctx->pc = 0x26af20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 2));
    // 0x26af24: 0x0  nop
    ctx->pc = 0x26af24u;
    // NOP
label_26af28:
    // 0x26af28: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x26af28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x26af2c: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x26af2cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26af30: 0x12c000bb  beqz        $s6, . + 4 + (0xBB << 2)
    ctx->pc = 0x26AF30u;
    {
        const bool branch_taken_0x26af30 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x26af30) {
            ctx->pc = 0x26B220u;
            goto label_26b220;
        }
    }
    ctx->pc = 0x26AF38u;
    // 0x26af38: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x26af38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x26af3c: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x26af3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
    // 0x26af40: 0x92a40004  lbu         $a0, 0x4($s5)
    ctx->pc = 0x26af40u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x26af44: 0x27a30114  addiu       $v1, $sp, 0x114
    ctx->pc = 0x26af44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x26af48: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x26af48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x26af4c: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x26af4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x26af50: 0x27a30118  addiu       $v1, $sp, 0x118
    ctx->pc = 0x26af50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x26af54: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x26af54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x26af58: 0xc6a3000c  lwc1        $f3, 0xC($s5)
    ctx->pc = 0x26af58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26af5c: 0x27a3011c  addiu       $v1, $sp, 0x11C
    ctx->pc = 0x26af5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x26af60: 0xc6a20010  lwc1        $f2, 0x10($s5)
    ctx->pc = 0x26af60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26af64: 0xc6a10014  lwc1        $f1, 0x14($s5)
    ctx->pc = 0x26af64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26af68: 0xc6a00018  lwc1        $f0, 0x18($s5)
    ctx->pc = 0x26af68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26af6c: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x26af6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x26af70: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x26af70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x26af74: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x26af74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x26af78: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x26af78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x26af7c: 0xc6a1001c  lwc1        $f1, 0x1C($s5)
    ctx->pc = 0x26af7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26af80: 0xc6a00020  lwc1        $f0, 0x20($s5)
    ctx->pc = 0x26af80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26af84: 0xe4610010  swc1        $f1, 0x10($v1)
    ctx->pc = 0x26af84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x26af88: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x26af88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x26af8c: 0x8ea40024  lw          $a0, 0x24($s5)
    ctx->pc = 0x26af8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x26af90: 0x27a30134  addiu       $v1, $sp, 0x134
    ctx->pc = 0x26af90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x26af94: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x26af94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x26af98: 0xc6a20028  lwc1        $f2, 0x28($s5)
    ctx->pc = 0x26af98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26af9c: 0x27a30138  addiu       $v1, $sp, 0x138
    ctx->pc = 0x26af9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x26afa0: 0xc6a1002c  lwc1        $f1, 0x2C($s5)
    ctx->pc = 0x26afa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26afa4: 0xc6a00030  lwc1        $f0, 0x30($s5)
    ctx->pc = 0x26afa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26afa8: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x26afa8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x26afac: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x26afacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x26afb0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x26afb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x26afb4: 0x8ea40034  lw          $a0, 0x34($s5)
    ctx->pc = 0x26afb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x26afb8: 0x27a30144  addiu       $v1, $sp, 0x144
    ctx->pc = 0x26afb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
    // 0x26afbc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x26afbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x26afc0: 0x8ea40038  lw          $a0, 0x38($s5)
    ctx->pc = 0x26afc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x26afc4: 0x27a30148  addiu       $v1, $sp, 0x148
    ctx->pc = 0x26afc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x26afc8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x26afc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x26afcc: 0x8ea4003c  lw          $a0, 0x3C($s5)
    ctx->pc = 0x26afccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
    // 0x26afd0: 0x27a3014c  addiu       $v1, $sp, 0x14C
    ctx->pc = 0x26afd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    // 0x26afd4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x26afd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x26afd8: 0xc6a00040  lwc1        $f0, 0x40($s5)
    ctx->pc = 0x26afd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26afdc: 0x27a30150  addiu       $v1, $sp, 0x150
    ctx->pc = 0x26afdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x26afe0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x26afe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x26afe4: 0xc6a00044  lwc1        $f0, 0x44($s5)
    ctx->pc = 0x26afe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26afe8: 0x27a30154  addiu       $v1, $sp, 0x154
    ctx->pc = 0x26afe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
    // 0x26afec: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x26afecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x26aff0: 0x8ec40028  lw          $a0, 0x28($s6)
    ctx->pc = 0x26aff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x26aff4: 0x8ec30024  lw          $v1, 0x24($s6)
    ctx->pc = 0x26aff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
    // 0x26aff8: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x26aff8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26affc: 0x27a30148  addiu       $v1, $sp, 0x148
    ctx->pc = 0x26affcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x26b000: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x26b000u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x26b004: 0x8ec4002c  lw          $a0, 0x2C($s6)
    ctx->pc = 0x26b004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x26b008: 0x27a3014c  addiu       $v1, $sp, 0x14C
    ctx->pc = 0x26b008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    // 0x26b00c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x26b00cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x26b010: 0x8ec3002c  lw          $v1, 0x2C($s6)
    ctx->pc = 0x26b010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x26b014: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x26b014u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26b018: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x26B018u;
    {
        const bool branch_taken_0x26b018 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B018u;
            // 0x26b01c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b018) {
            ctx->pc = 0x26B058u;
            goto label_26b058;
        }
    }
    ctx->pc = 0x26B020u;
    // 0x26b020: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x26b020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b024: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x26b024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_26b028:
    // 0x26b028: 0x8cc30030  lw          $v1, 0x30($a2)
    ctx->pc = 0x26b028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x26b02c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26b030: 0xaca30040  sw          $v1, 0x40($a1)
    ctx->pc = 0x26b030u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 3));
    // 0x26b034: 0x8cc40034  lw          $a0, 0x34($a2)
    ctx->pc = 0x26b034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x26b038: 0x8cc30030  lw          $v1, 0x30($a2)
    ctx->pc = 0x26b038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x26b03c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x26b03cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26b040: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x26b040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x26b044: 0xaca30044  sw          $v1, 0x44($a1)
    ctx->pc = 0x26b044u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 3));
    // 0x26b048: 0x8ec3002c  lw          $v1, 0x2C($s6)
    ctx->pc = 0x26b048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x26b04c: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x26b04cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26b050: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x26B050u;
    {
        const bool branch_taken_0x26b050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B050u;
            // 0x26b054: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b050) {
            ctx->pc = 0x26B028u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26b028;
        }
    }
    ctx->pc = 0x26B058u;
label_26b058:
    // 0x26b058: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x26b058u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b05c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x26b05cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b060: 0x26f20030  addiu       $s2, $s7, 0x30
    ctx->pc = 0x26b060u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 48));
    // 0x26b064: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x26b064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b068: 0x27b00110  addiu       $s0, $sp, 0x110
    ctx->pc = 0x26b068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x26b06c: 0x0  nop
    ctx->pc = 0x26b06cu;
    // NOP
label_26b070:
    // 0x26b070: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x26b070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26b074: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x26b074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26b078: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x26b078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b07c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x26b07cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x26b080: 0xc0a3264  jal         func_28C990
    ctx->pc = 0x26B080u;
    SET_GPR_U32(ctx, 31, 0x26B088u);
    ctx->pc = 0x26B084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B080u;
            // 0x26b084: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C990u;
    if (runtime->hasFunction(0x28C990u)) {
        auto targetFn = runtime->lookupFunction(0x28C990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B088u; }
        if (ctx->pc != 0x26B088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C990_0x28c990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B088u; }
        if (ctx->pc != 0x26B088u) { return; }
    }
    ctx->pc = 0x26B088u;
label_26b088:
    // 0x26b088: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x26b088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x26b08c: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x26b08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26b090: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x26b090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26b094: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x26b094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b098: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x26b098u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x26b09c: 0xc0a3264  jal         func_28C990
    ctx->pc = 0x26B09Cu;
    SET_GPR_U32(ctx, 31, 0x26B0A4u);
    ctx->pc = 0x26B0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B09Cu;
            // 0x26b0a0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C990u;
    if (runtime->hasFunction(0x28C990u)) {
        auto targetFn = runtime->lookupFunction(0x28C990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B0A4u; }
        if (ctx->pc != 0x26B0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C990_0x28c990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B0A4u; }
        if (ctx->pc != 0x26B0A4u) { return; }
    }
    ctx->pc = 0x26B0A4u;
label_26b0a4:
    // 0x26b0a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26b0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26b0a8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x26b0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x26b0ac: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x26b0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26b0b0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x26b0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26b0b4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x26b0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26b0b8: 0x54082a  slt         $at, $v0, $s4
    ctx->pc = 0x26b0b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x26b0bc: 0x41a00a  movz        $s4, $v0, $at
    ctx->pc = 0x26b0bcu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
    // 0x26b0c0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x26b0c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x26b0c4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x26b0c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x26b0c8: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x26b0c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26b0cc: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x26b0ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x26b0d0: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x26B0D0u;
    {
        const bool branch_taken_0x26b0d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B0D0u;
            // 0x26b0d4: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b0d0) {
            ctx->pc = 0x26B070u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26b070;
        }
    }
    ctx->pc = 0x26B0D8u;
    // 0x26b0d8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x26b0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x26b0dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26b0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26b0e0: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x26b0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x26b0e4: 0x27a20114  addiu       $v0, $sp, 0x114
    ctx->pc = 0x26b0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x26b0e8: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x26b0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x26b0ec: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x26b0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x26b0f0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x26b0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26b0f4: 0x27a2011c  addiu       $v0, $sp, 0x11C
    ctx->pc = 0x26b0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x26b0f8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x26b0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26b0fc: 0x27a20128  addiu       $v0, $sp, 0x128
    ctx->pc = 0x26b0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x26b100: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26b100u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26b104: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26b104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26b108: 0x27a20124  addiu       $v0, $sp, 0x124
    ctx->pc = 0x26b108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x26b10c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26b10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26b110: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x26b110u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26b114: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x26b114u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26b118: 0x41200a  movz        $a0, $v0, $at
    ctx->pc = 0x26b118u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x26b11c: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x26b11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x26b120: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26b120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26b124: 0x27a2012c  addiu       $v0, $sp, 0x12C
    ctx->pc = 0x26b124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
    // 0x26b128: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26b128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26b12c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x26b12cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26b130: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x26b130u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26b134: 0x41200a  movz        $a0, $v0, $at
    ctx->pc = 0x26b134u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x26b138: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x26b138u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b13c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x26B13Cu;
    {
        const bool branch_taken_0x26b13c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B13Cu;
            // 0x26b140: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b13c) {
            ctx->pc = 0x26B168u;
            goto label_26b168;
        }
    }
    ctx->pc = 0x26B144u;
    // 0x26b144: 0x0  nop
    ctx->pc = 0x26b144u;
    // NOP
label_26b148:
    // 0x26b148: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x26b148u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x26b14c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26b14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26b150: 0x0  nop
    ctx->pc = 0x26b150u;
    // NOP
    // 0x26b154: 0x0  nop
    ctx->pc = 0x26b154u;
    // NOP
    // 0x26b158: 0x0  nop
    ctx->pc = 0x26b158u;
    // NOP
    // 0x26b15c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26B15Cu;
    {
        const bool branch_taken_0x26b15c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26b15c) {
            ctx->pc = 0x26B148u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26b148;
        }
    }
    ctx->pc = 0x26B164u;
    // 0x26b164: 0x0  nop
    ctx->pc = 0x26b164u;
    // NOP
label_26b168:
    // 0x26b168: 0x2443fffc  addiu       $v1, $v0, -0x4
    ctx->pc = 0x26b168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x26b16c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26b16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26b170: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x26b170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26b174: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x26b174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x26b178: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26b178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b17c: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x26b17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_26b180:
    // 0x26b180: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x26b180u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b184: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x26B184u;
    {
        const bool branch_taken_0x26b184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B184u;
            // 0x26b188: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b184) {
            ctx->pc = 0x26B1B0u;
            goto label_26b1b0;
        }
    }
    ctx->pc = 0x26B18Cu;
    // 0x26b18c: 0x0  nop
    ctx->pc = 0x26b18cu;
    // NOP
label_26b190:
    // 0x26b190: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x26b190u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x26b194: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x26b194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x26b198: 0x0  nop
    ctx->pc = 0x26b198u;
    // NOP
    // 0x26b19c: 0x0  nop
    ctx->pc = 0x26b19cu;
    // NOP
    // 0x26b1a0: 0x0  nop
    ctx->pc = 0x26b1a0u;
    // NOP
    // 0x26b1a4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26B1A4u;
    {
        const bool branch_taken_0x26b1a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26b1a4) {
            ctx->pc = 0x26B190u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26b190;
        }
    }
    ctx->pc = 0x26B1ACu;
    // 0x26b1ac: 0x0  nop
    ctx->pc = 0x26b1acu;
    // NOP
label_26b1b0:
    // 0x26b1b0: 0xc4082a  slt         $at, $a2, $a0
    ctx->pc = 0x26b1b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26b1b4: 0xc1200a  movz        $a0, $a2, $at
    ctx->pc = 0x26b1b4u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
    // 0x26b1b8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x26b1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x26b1bc: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x26b1bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26b1c0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x26B1C0u;
    {
        const bool branch_taken_0x26b1c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B1C0u;
            // 0x26b1c4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b1c0) {
            ctx->pc = 0x26B180u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26b180;
        }
    }
    ctx->pc = 0x26B1C8u;
    // 0x26b1c8: 0x28810019  slti        $at, $a0, 0x19
    ctx->pc = 0x26b1c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x26b1cc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x26B1CCu;
    {
        const bool branch_taken_0x26b1cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x26b1cc) {
            ctx->pc = 0x26B1D8u;
            goto label_26b1d8;
        }
    }
    ctx->pc = 0x26B1D4u;
    // 0x26b1d4: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x26b1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_26b1d8:
    // 0x26b1d8: 0x27a20118  addiu       $v0, $sp, 0x118
    ctx->pc = 0x26b1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x26b1dc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x26b1dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b1e0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x26b1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x26b1e4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x26b1e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b1e8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26b1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b1ec: 0xc09ab24  jal         func_26AC90
    ctx->pc = 0x26B1ECu;
    SET_GPR_U32(ctx, 31, 0x26B1F4u);
    ctx->pc = 0x26B1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B1ECu;
            // 0x26b1f0: 0x27a70110  addiu       $a3, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26AC90u;
    goto label_26ac90;
    ctx->pc = 0x26B1F4u;
label_26b1f4:
    // 0x26b1f4: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x26b1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x26b1f8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x26b1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x26b1fc: 0x27a20118  addiu       $v0, $sp, 0x118
    ctx->pc = 0x26b1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x26b200: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26b200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26b204: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x26b204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x26b208: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x26b208u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26b20c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x26B20Cu;
    {
        const bool branch_taken_0x26b20c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b20c) {
            ctx->pc = 0x26B21Cu;
            goto label_26b21c;
        }
    }
    ctx->pc = 0x26B214u;
    // 0x26b214: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26B214u;
    {
        const bool branch_taken_0x26b214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b214) {
            ctx->pc = 0x26B220u;
            goto label_26b220;
        }
    }
    ctx->pc = 0x26B21Cu;
label_26b21c:
    // 0x26b21c: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x26b21cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_26b220:
    // 0x26b220: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x26b220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x26b224: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x26b224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x26b228: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x26b228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x26b22c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x26b22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x26b230: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x26b230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x26b234: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x26b234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x26b238: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x26b238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x26b23c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x26b23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x26b240: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x26b240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x26b244: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x26b244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x26b248: 0x441ff37  bgez        $v0, . + 4 + (-0xC9 << 2)
    ctx->pc = 0x26B248u;
    {
        const bool branch_taken_0x26b248 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x26b248) {
            ctx->pc = 0x26AF28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26af28;
        }
    }
    ctx->pc = 0x26B250u;
    // 0x26b250: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x26b250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x26b254: 0x24430002  addiu       $v1, $v0, 0x2
    ctx->pc = 0x26b254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x26b258: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x26b258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x26b25c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x26b25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x26b260: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x26b260u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26b264: 0x61100a  movz        $v0, $v1, $at
    ctx->pc = 0x26b264u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x26b268: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26b268u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b26c: 0x27a60178  addiu       $a2, $sp, 0x178
    ctx->pc = 0x26b26cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x26b270: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x26b270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x26b274: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26b274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26b278:
    // 0x26b278: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x26b278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x26b27c: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x26B27Cu;
    {
        const bool branch_taken_0x26b27c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B27Cu;
            // 0x26b280: 0x8ca80000  lw          $t0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b27c) {
            ctx->pc = 0x26B2F0u;
            goto label_26b2f0;
        }
    }
    ctx->pc = 0x26B284u;
    // 0x26b284: 0x24670038  addiu       $a3, $v1, 0x38
    ctx->pc = 0x26b284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x26b288: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x26b288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x26b28c: 0x80630001  lb          $v1, 0x1($v1)
    ctx->pc = 0x26b28cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x26b290: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x26B290u;
    {
        const bool branch_taken_0x26b290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b290) {
            ctx->pc = 0x26B2B8u;
            goto label_26b2b8;
        }
    }
    ctx->pc = 0x26B298u;
    // 0x26b298: 0x80e30001  lb          $v1, 0x1($a3)
    ctx->pc = 0x26b298u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x26b29c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x26B29Cu;
    {
        const bool branch_taken_0x26b29c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26b29c) {
            ctx->pc = 0x26B2D0u;
            goto label_26b2d0;
        }
    }
    ctx->pc = 0x26B2A4u;
    // 0x26b2a4: 0x102082a  slt         $at, $t0, $v0
    ctx->pc = 0x26b2a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26b2a8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x26B2A8u;
    {
        const bool branch_taken_0x26b2a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b2a8) {
            ctx->pc = 0x26B2D0u;
            goto label_26b2d0;
        }
    }
    ctx->pc = 0x26B2B0u;
    // 0x26b2b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26B2B0u;
    {
        const bool branch_taken_0x26b2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B2B0u;
            // 0x26b2b4: 0xa0e40002  sb          $a0, 0x2($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b2b0) {
            ctx->pc = 0x26B2D0u;
            goto label_26b2d0;
        }
    }
    ctx->pc = 0x26B2B8u;
label_26b2b8:
    // 0x26b2b8: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x26b2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x26b2bc: 0x103082a  slt         $at, $t0, $v1
    ctx->pc = 0x26b2bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26b2c0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x26B2C0u;
    {
        const bool branch_taken_0x26b2c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b2c0) {
            ctx->pc = 0x26B2D0u;
            goto label_26b2d0;
        }
    }
    ctx->pc = 0x26B2C8u;
    // 0x26b2c8: 0xa0e40002  sb          $a0, 0x2($a3)
    ctx->pc = 0x26b2c8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x26b2cc: 0x0  nop
    ctx->pc = 0x26b2ccu;
    // NOP
label_26b2d0:
    // 0x26b2d0: 0x80e30002  lb          $v1, 0x2($a3)
    ctx->pc = 0x26b2d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x26b2d4: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x26b2d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
    // 0x26b2d8: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x26b2d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x26b2dc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26B2DCu;
    {
        const bool branch_taken_0x26b2dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b2dc) {
            ctx->pc = 0x26B2F0u;
            goto label_26b2f0;
        }
    }
    ctx->pc = 0x26B2E4u;
    // 0x26b2e4: 0x48082a  slt         $at, $v0, $t0
    ctx->pc = 0x26b2e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x26b2e8: 0x101100a  movz        $v0, $t0, $at
    ctx->pc = 0x26b2e8u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 8));
    // 0x26b2ec: 0x0  nop
    ctx->pc = 0x26b2ecu;
    // NOP
label_26b2f0:
    // 0x26b2f0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x26b2f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x26b2f4: 0x29230002  slti        $v1, $t1, 0x2
    ctx->pc = 0x26b2f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x26b2f8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x26b2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x26b2fc: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x26B2FCu;
    {
        const bool branch_taken_0x26b2fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B2FCu;
            // 0x26b300: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b2fc) {
            ctx->pc = 0x26B278u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26b278;
        }
    }
    ctx->pc = 0x26B304u;
    // 0x26b304: 0x0  nop
    ctx->pc = 0x26b304u;
    // NOP
label_26b308:
    // 0x26b308: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x26b308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26b30c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x26b30cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26b310: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x26b310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x26b314: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x26b314u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26b318: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x26b318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26b31c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x26b31cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26b320: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x26b320u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26b324: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x26b324u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26b328: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x26b328u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26b32c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x26b32cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26b330: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x26b330u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26b334: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26b334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b338: 0x3e00008  jr          $ra
    ctx->pc = 0x26B338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B338u;
            // 0x26b33c: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26B340u;
}
