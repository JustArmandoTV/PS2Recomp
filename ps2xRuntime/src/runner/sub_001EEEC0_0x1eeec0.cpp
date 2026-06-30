#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EEEC0
// Address: 0x1eeec0 - 0x1eefc0
void sub_001EEEC0_0x1eeec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EEEC0_0x1eeec0");
#endif

    switch (ctx->pc) {
        case 0x1eef00u: goto label_1eef00;
        case 0x1eef18u: goto label_1eef18;
        default: break;
    }

    ctx->pc = 0x1eeec0u;

    // 0x1eeec0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1eeec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1eeec4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1eeec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1eeec8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1eeec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1eeecc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1eeeccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1eeed0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1eeed0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eeed4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1eeed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1eeed8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1eeed8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eeedc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1eeedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1eeee0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1eeee0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eeee4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1eeee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1eeee8: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x1eeee8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1eeeec: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x1eeeecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1eeef0: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x1eeef0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1eeef4: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x1eeef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1eeef8: 0xc0a45a0  jal         func_291680
    ctx->pc = 0x1EEEF8u;
    SET_GPR_U32(ctx, 31, 0x1EEF00u);
    ctx->pc = 0x1EEEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEEF8u;
            // 0x1eeefc: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291680u;
    if (runtime->hasFunction(0x291680u)) {
        auto targetFn = runtime->lookupFunction(0x291680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEF00u; }
        if (ctx->pc != 0x1EEF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291680_0x291680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEF00u; }
        if (ctx->pc != 0x1EEF00u) { return; }
    }
    ctx->pc = 0x1EEF00u;
label_1eef00:
    // 0x1eef00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1eef00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eef04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1eef04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eef08: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1eef08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eef0c: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x1eef0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1eef10: 0xc098b60  jal         func_262D80
    ctx->pc = 0x1EEF10u;
    SET_GPR_U32(ctx, 31, 0x1EEF18u);
    ctx->pc = 0x1EEF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEF10u;
            // 0x1eef14: 0x27a80060  addiu       $t0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262D80u;
    if (runtime->hasFunction(0x262D80u)) {
        auto targetFn = runtime->lookupFunction(0x262D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEF18u; }
        if (ctx->pc != 0x1EEF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262D80_0x262d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEF18u; }
        if (ctx->pc != 0x1EEF18u) { return; }
    }
    ctx->pc = 0x1EEF18u;
label_1eef18:
    // 0x1eef18: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x1eef18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1eef1c: 0xc7a40064  lwc1        $f4, 0x64($sp)
    ctx->pc = 0x1eef1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1eef20: 0xc7a50060  lwc1        $f5, 0x60($sp)
    ctx->pc = 0x1eef20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1eef24: 0xc7a30068  lwc1        $f3, 0x68($sp)
    ctx->pc = 0x1eef24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1eef28: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x1eef28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eef2c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1eef2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eef30: 0xc4620020  lwc1        $f2, 0x20($v1)
    ctx->pc = 0x1eef30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1eef34: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x1eef34u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1eef38: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x1eef38u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x1eef3c: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1eef3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1eef40: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1eef40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1eef44: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x1eef44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eef48: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1eef48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eef4c: 0xc4620024  lwc1        $f2, 0x24($v1)
    ctx->pc = 0x1eef4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1eef50: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x1eef50u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1eef54: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x1eef54u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x1eef58: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1eef58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1eef5c: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x1eef5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1eef60: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1eef60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eef64: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1eef64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eef68: 0xc4620028  lwc1        $f2, 0x28($v1)
    ctx->pc = 0x1eef68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1eef6c: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x1eef6cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1eef70: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x1eef70u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x1eef74: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1eef74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1eef78: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1eef78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1eef7c: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1eef7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x1eef80: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x1eef80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1eef84: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x1eef84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eef88: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1eef88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eef8c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1eef8cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1eef90: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1eef90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1eef94: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x1eef94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1eef98: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1eef98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1eef9c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1eef9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1eefa0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1eefa0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eefa4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1eefa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eefa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1eefa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eefac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eefacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eefb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EEFB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEFB0u;
            // 0x1eefb4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EEFB8u;
    // 0x1eefb8: 0x0  nop
    ctx->pc = 0x1eefb8u;
    // NOP
    // 0x1eefbc: 0x0  nop
    ctx->pc = 0x1eefbcu;
    // NOP
}
