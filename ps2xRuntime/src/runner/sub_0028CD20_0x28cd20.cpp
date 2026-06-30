#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028CD20
// Address: 0x28cd20 - 0x28cde0
void sub_0028CD20_0x28cd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028CD20_0x28cd20");
#endif

    switch (ctx->pc) {
        case 0x28cd44u: goto label_28cd44;
        case 0x28cd78u: goto label_28cd78;
        default: break;
    }

    ctx->pc = 0x28cd20u;

    // 0x28cd20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28cd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x28cd24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28cd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28cd28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28cd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28cd2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28cd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28cd30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28cd30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cd34: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28cd34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cd38: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x28cd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28cd3c: 0xc0a330c  jal         func_28CC30
    ctx->pc = 0x28CD3Cu;
    SET_GPR_U32(ctx, 31, 0x28CD44u);
    ctx->pc = 0x28CD40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CD3Cu;
            // 0x28cd40: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CC30u;
    if (runtime->hasFunction(0x28CC30u)) {
        auto targetFn = runtime->lookupFunction(0x28CC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CD44u; }
        if (ctx->pc != 0x28CD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CC30_0x28cc30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CD44u; }
        if (ctx->pc != 0x28CD44u) { return; }
    }
    ctx->pc = 0x28CD44u;
label_28cd44:
    // 0x28cd44: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x28cd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28cd48: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x28cd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28cd4c: 0xc6090004  lwc1        $f9, 0x4($s0)
    ctx->pc = 0x28cd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x28cd50: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x28cd50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x28cd54: 0xc6060008  lwc1        $f6, 0x8($s0)
    ctx->pc = 0x28cd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x28cd58: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x28cd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x28cd5c: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x28cd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28cd60: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x28cd60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28cd64: 0xc60a0014  lwc1        $f10, 0x14($s0)
    ctx->pc = 0x28cd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x28cd68: 0xc6070018  lwc1        $f7, 0x18($s0)
    ctx->pc = 0x28cd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x28cd6c: 0xc60b0020  lwc1        $f11, 0x20($s0)
    ctx->pc = 0x28cd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x28cd70: 0xc6080024  lwc1        $f8, 0x24($s0)
    ctx->pc = 0x28cd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x28cd74: 0xc6050028  lwc1        $f5, 0x28($s0)
    ctx->pc = 0x28cd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_28cd78:
    // 0x28cd78: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x28cd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28cd7c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x28cd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x28cd80: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x28cd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28cd84: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x28cd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28cd88: 0x460c101a  mula.s      $f2, $f12
    ctx->pc = 0x28cd88u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x28cd8c: 0x4604181e  madda.s     $f3, $f4
    ctx->pc = 0x28cd8cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x28cd90: 0x460b081c  madd.s      $f0, $f1, $f11
    ctx->pc = 0x28cd90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[11]));
    // 0x28cd94: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x28cd94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x28cd98: 0x460a101a  mula.s      $f2, $f10
    ctx->pc = 0x28cd98u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
    // 0x28cd9c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x28cd9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x28cda0: 0x4609181e  madda.s     $f3, $f9
    ctx->pc = 0x28cda0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[9]));
    // 0x28cda4: 0x4608081c  madd.s      $f0, $f1, $f8
    ctx->pc = 0x28cda4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[8]));
    // 0x28cda8: 0x4607101a  mula.s      $f2, $f7
    ctx->pc = 0x28cda8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x28cdac: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x28cdacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x28cdb0: 0x4606181e  madda.s     $f3, $f6
    ctx->pc = 0x28cdb0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[6]));
    // 0x28cdb4: 0x4605081c  madd.s      $f0, $f1, $f5
    ctx->pc = 0x28cdb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[5]));
    // 0x28cdb8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x28cdb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x28cdbc: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x28cdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x28cdc0: 0x4a1ffed  bgez        $a1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x28CDC0u;
    {
        const bool branch_taken_0x28cdc0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x28CDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CDC0u;
            // 0x28cdc4: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cdc0) {
            ctx->pc = 0x28CD78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28cd78;
        }
    }
    ctx->pc = 0x28CDC8u;
    // 0x28cdc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28cdc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28cdcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28cdccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28cdd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28cdd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28cdd4: 0x3e00008  jr          $ra
    ctx->pc = 0x28CDD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CDD4u;
            // 0x28cdd8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28CDDCu;
    // 0x28cddc: 0x0  nop
    ctx->pc = 0x28cddcu;
    // NOP
}
