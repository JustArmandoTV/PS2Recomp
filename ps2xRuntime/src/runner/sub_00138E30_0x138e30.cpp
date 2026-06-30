#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00138E30
// Address: 0x138e30 - 0x138f60
void sub_00138E30_0x138e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138E30_0x138e30");
#endif

    switch (ctx->pc) {
        case 0x138e6cu: goto label_138e6c;
        case 0x138f14u: goto label_138f14;
        default: break;
    }

    ctx->pc = 0x138e30u;

    // 0x138e30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x138e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x138e34: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x138e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x138e38: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x138e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x138e3c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x138e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x138e40: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x138e40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138e44: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x138e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x138e48: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x138e48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138e4c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x138e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x138e50: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x138e50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138e54: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x138e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x138e58: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x138e58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138e5c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x138e5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x138e60: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x138e60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138e64: 0x1a200032  blez        $s1, . + 4 + (0x32 << 2)
    ctx->pc = 0x138E64u;
    {
        const bool branch_taken_0x138e64 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x138E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138E64u;
            // 0x138e68: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x138e64) {
            ctx->pc = 0x138F30u;
            goto label_138f30;
        }
    }
    ctx->pc = 0x138E6Cu;
label_138e6c:
    // 0x138e6c: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x138e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138e70: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x138e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x138e74: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x138e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138e78: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x138e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x138e7c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x138e7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x138e80: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x138e80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x138e84: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x138e84u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x138e88: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x138e88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x138e8c: 0x4600a01c  madd.s      $f0, $f20, $f0
    ctx->pc = 0x138e8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[0]));
    // 0x138e90: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x138e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x138e94: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x138e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138e98: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x138e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138e9c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x138e9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x138ea0: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x138ea0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x138ea4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x138ea4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x138ea8: 0x4600a01c  madd.s      $f0, $f20, $f0
    ctx->pc = 0x138ea8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[0]));
    // 0x138eac: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x138eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x138eb0: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x138eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138eb4: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x138eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138eb8: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x138eb8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x138ebc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x138ebcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x138ec0: 0x4600a01c  madd.s      $f0, $f20, $f0
    ctx->pc = 0x138ec0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[0]));
    // 0x138ec4: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x138ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x138ec8: 0xc6610020  lwc1        $f1, 0x20($s3)
    ctx->pc = 0x138ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138ecc: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x138eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138ed0: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x138ed0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x138ed4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x138ed4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x138ed8: 0x4600a01c  madd.s      $f0, $f20, $f0
    ctx->pc = 0x138ed8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[0]));
    // 0x138edc: 0xe6800020  swc1        $f0, 0x20($s4)
    ctx->pc = 0x138edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
    // 0x138ee0: 0xc6610024  lwc1        $f1, 0x24($s3)
    ctx->pc = 0x138ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138ee4: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x138ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138ee8: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x138ee8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x138eec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x138eecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x138ef0: 0x4600a01c  madd.s      $f0, $f20, $f0
    ctx->pc = 0x138ef0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[0]));
    // 0x138ef4: 0xe6800024  swc1        $f0, 0x24($s4)
    ctx->pc = 0x138ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
    // 0x138ef8: 0xc6610028  lwc1        $f1, 0x28($s3)
    ctx->pc = 0x138ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138efc: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x138efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138f00: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x138f00u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x138f04: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x138f04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x138f08: 0x4600a01c  madd.s      $f0, $f20, $f0
    ctx->pc = 0x138f08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[0]));
    // 0x138f0c: 0xc04c8f0  jal         func_1323C0
    ctx->pc = 0x138F0Cu;
    SET_GPR_U32(ctx, 31, 0x138F14u);
    ctx->pc = 0x138F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138F0Cu;
            // 0x138f10: 0xe6800028  swc1        $f0, 0x28($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1323C0u;
    if (runtime->hasFunction(0x1323C0u)) {
        auto targetFn = runtime->lookupFunction(0x1323C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138F14u; }
        if (ctx->pc != 0x138F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001323C0_0x1323c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138F14u; }
        if (ctx->pc != 0x138F14u) { return; }
    }
    ctx->pc = 0x138F14u;
label_138f14:
    // 0x138f14: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x138f14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x138f18: 0x26940030  addiu       $s4, $s4, 0x30
    ctx->pc = 0x138f18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x138f1c: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x138f1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x138f20: 0x26730030  addiu       $s3, $s3, 0x30
    ctx->pc = 0x138f20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x138f24: 0x1460ffd1  bnez        $v1, . + 4 + (-0x2F << 2)
    ctx->pc = 0x138F24u;
    {
        const bool branch_taken_0x138f24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x138F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138F24u;
            // 0x138f28: 0x26520030  addiu       $s2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138f24) {
            ctx->pc = 0x138E6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_138e6c;
        }
    }
    ctx->pc = 0x138F2Cu;
    // 0x138f2c: 0x0  nop
    ctx->pc = 0x138f2cu;
    // NOP
label_138f30:
    // 0x138f30: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x138f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x138f34: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x138f34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x138f38: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x138f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x138f3c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x138f3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x138f40: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x138f40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x138f44: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x138f44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x138f48: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x138f48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x138F4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138F4Cu;
            // 0x138f50: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x138F54u;
    // 0x138f54: 0x0  nop
    ctx->pc = 0x138f54u;
    // NOP
    // 0x138f58: 0x0  nop
    ctx->pc = 0x138f58u;
    // NOP
    // 0x138f5c: 0x0  nop
    ctx->pc = 0x138f5cu;
    // NOP
}
