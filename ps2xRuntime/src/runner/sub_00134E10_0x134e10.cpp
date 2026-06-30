#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00134E10
// Address: 0x134e10 - 0x134fd0
void sub_00134E10_0x134e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134E10_0x134e10");
#endif

    switch (ctx->pc) {
        case 0x134e44u: goto label_134e44;
        case 0x134ec8u: goto label_134ec8;
        case 0x134f4cu: goto label_134f4c;
        default: break;
    }

    ctx->pc = 0x134e10u;

    // 0x134e10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x134e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x134e14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x134e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x134e18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x134e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x134e1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x134e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x134e20: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x134e20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134e24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x134e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x134e28: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x134e28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134e2c: 0x10e00020  beqz        $a3, . + 4 + (0x20 << 2)
    ctx->pc = 0x134E2Cu;
    {
        const bool branch_taken_0x134e2c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x134E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134E2Cu;
            // 0x134e30: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134e2c) {
            ctx->pc = 0x134EB0u;
            goto label_134eb0;
        }
    }
    ctx->pc = 0x134E34u;
    // 0x134e34: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x134e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134e38: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x134e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x134e3c: 0xc04ceb0  jal         func_133AC0
    ctx->pc = 0x134E3Cu;
    SET_GPR_U32(ctx, 31, 0x134E44u);
    ctx->pc = 0x134E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134E3Cu;
            // 0x134e40: 0x27a60048  addiu       $a2, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133AC0u;
    if (runtime->hasFunction(0x133AC0u)) {
        auto targetFn = runtime->lookupFunction(0x133AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134E44u; }
        if (ctx->pc != 0x134E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133AC0_0x133ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134E44u; }
        if (ctx->pc != 0x134E44u) { return; }
    }
    ctx->pc = 0x134E44u;
label_134e44:
    // 0x134e44: 0xc7a5004c  lwc1        $f5, 0x4C($sp)
    ctx->pc = 0x134e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x134e48: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x134e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134e4c: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x134e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x134e50: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x134e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x134e54: 0x4605081a  mula.s      $f1, $f5
    ctx->pc = 0x134e54u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x134e58: 0x460028c7  neg.s       $f3, $f5
    ctx->pc = 0x134e58u;
    ctx->f[3] = FPU_NEG_S(ctx->f[5]);
    // 0x134e5c: 0x4604101c  madd.s      $f0, $f2, $f4
    ctx->pc = 0x134e5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x134e60: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x134e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x134e64: 0x4604081a  mula.s      $f1, $f4
    ctx->pc = 0x134e64u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x134e68: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x134e68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x134e6c: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x134e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x134e70: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x134e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134e74: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x134e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x134e78: 0x4605081a  mula.s      $f1, $f5
    ctx->pc = 0x134e78u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x134e7c: 0x4604101c  madd.s      $f0, $f2, $f4
    ctx->pc = 0x134e7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x134e80: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x134e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x134e84: 0x4604081a  mula.s      $f1, $f4
    ctx->pc = 0x134e84u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x134e88: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x134e88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x134e8c: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x134e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x134e90: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x134e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134e94: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x134e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x134e98: 0x4605001a  mula.s      $f0, $f5
    ctx->pc = 0x134e98u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x134e9c: 0x4604105c  madd.s      $f1, $f2, $f4
    ctx->pc = 0x134e9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x134ea0: 0x4604001a  mula.s      $f0, $f4
    ctx->pc = 0x134ea0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x134ea4: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x134ea4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x134ea8: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x134ea8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x134eac: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x134eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_134eb0:
    // 0x134eb0: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x134EB0u;
    {
        const bool branch_taken_0x134eb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x134eb0) {
            ctx->pc = 0x134F34u;
            goto label_134f34;
        }
    }
    ctx->pc = 0x134EB8u;
    // 0x134eb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134ebc: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x134ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x134ec0: 0xc04ceb0  jal         func_133AC0
    ctx->pc = 0x134EC0u;
    SET_GPR_U32(ctx, 31, 0x134EC8u);
    ctx->pc = 0x134EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134EC0u;
            // 0x134ec4: 0x27a60048  addiu       $a2, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133AC0u;
    if (runtime->hasFunction(0x133AC0u)) {
        auto targetFn = runtime->lookupFunction(0x133AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134EC8u; }
        if (ctx->pc != 0x134EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133AC0_0x133ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134EC8u; }
        if (ctx->pc != 0x134EC8u) { return; }
    }
    ctx->pc = 0x134EC8u;
label_134ec8:
    // 0x134ec8: 0xc7a5004c  lwc1        $f5, 0x4C($sp)
    ctx->pc = 0x134ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x134ecc: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x134eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134ed0: 0xc6420020  lwc1        $f2, 0x20($s2)
    ctx->pc = 0x134ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x134ed4: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x134ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x134ed8: 0x4605081a  mula.s      $f1, $f5
    ctx->pc = 0x134ed8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x134edc: 0x460028c7  neg.s       $f3, $f5
    ctx->pc = 0x134edcu;
    ctx->f[3] = FPU_NEG_S(ctx->f[5]);
    // 0x134ee0: 0x4604101c  madd.s      $f0, $f2, $f4
    ctx->pc = 0x134ee0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x134ee4: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x134ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x134ee8: 0x4604081a  mula.s      $f1, $f4
    ctx->pc = 0x134ee8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x134eec: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x134eecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x134ef0: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x134ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x134ef4: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x134ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134ef8: 0xc6420024  lwc1        $f2, 0x24($s2)
    ctx->pc = 0x134ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x134efc: 0x4605081a  mula.s      $f1, $f5
    ctx->pc = 0x134efcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x134f00: 0x4604101c  madd.s      $f0, $f2, $f4
    ctx->pc = 0x134f00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x134f04: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x134f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x134f08: 0x4604081a  mula.s      $f1, $f4
    ctx->pc = 0x134f08u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x134f0c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x134f0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x134f10: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x134f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x134f14: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x134f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134f18: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x134f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x134f1c: 0x4605001a  mula.s      $f0, $f5
    ctx->pc = 0x134f1cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x134f20: 0x4604105c  madd.s      $f1, $f2, $f4
    ctx->pc = 0x134f20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x134f24: 0x4604001a  mula.s      $f0, $f4
    ctx->pc = 0x134f24u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x134f28: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x134f28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x134f2c: 0xe6410028  swc1        $f1, 0x28($s2)
    ctx->pc = 0x134f2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x134f30: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x134f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_134f34:
    // 0x134f34: 0x52200021  beql        $s1, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x134F34u;
    {
        const bool branch_taken_0x134f34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x134f34) {
            ctx->pc = 0x134F38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134F34u;
            // 0x134f38: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134FBCu;
            goto label_134fbc;
        }
    }
    ctx->pc = 0x134F3Cu;
    // 0x134f3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x134f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134f40: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x134f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x134f44: 0xc04ceb0  jal         func_133AC0
    ctx->pc = 0x134F44u;
    SET_GPR_U32(ctx, 31, 0x134F4Cu);
    ctx->pc = 0x134F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134F44u;
            // 0x134f48: 0x27a60048  addiu       $a2, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133AC0u;
    if (runtime->hasFunction(0x133AC0u)) {
        auto targetFn = runtime->lookupFunction(0x133AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134F4Cu; }
        if (ctx->pc != 0x134F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133AC0_0x133ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134F4Cu; }
        if (ctx->pc != 0x134F4Cu) { return; }
    }
    ctx->pc = 0x134F4Cu;
label_134f4c:
    // 0x134f4c: 0xc7a5004c  lwc1        $f5, 0x4C($sp)
    ctx->pc = 0x134f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x134f50: 0xc6410020  lwc1        $f1, 0x20($s2)
    ctx->pc = 0x134f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134f54: 0xc6420010  lwc1        $f2, 0x10($s2)
    ctx->pc = 0x134f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x134f58: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x134f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x134f5c: 0x4605081a  mula.s      $f1, $f5
    ctx->pc = 0x134f5cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x134f60: 0x460028c7  neg.s       $f3, $f5
    ctx->pc = 0x134f60u;
    ctx->f[3] = FPU_NEG_S(ctx->f[5]);
    // 0x134f64: 0x4604101c  madd.s      $f0, $f2, $f4
    ctx->pc = 0x134f64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x134f68: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x134f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x134f6c: 0x4604081a  mula.s      $f1, $f4
    ctx->pc = 0x134f6cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x134f70: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x134f70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x134f74: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x134f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x134f78: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x134f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134f7c: 0xc6420014  lwc1        $f2, 0x14($s2)
    ctx->pc = 0x134f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x134f80: 0x4605081a  mula.s      $f1, $f5
    ctx->pc = 0x134f80u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x134f84: 0x4604101c  madd.s      $f0, $f2, $f4
    ctx->pc = 0x134f84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x134f88: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x134f88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x134f8c: 0x4604081a  mula.s      $f1, $f4
    ctx->pc = 0x134f8cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x134f90: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x134f90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x134f94: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x134f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x134f98: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x134f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134f9c: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x134f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x134fa0: 0x4605001a  mula.s      $f0, $f5
    ctx->pc = 0x134fa0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x134fa4: 0x4604105c  madd.s      $f1, $f2, $f4
    ctx->pc = 0x134fa4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x134fa8: 0x4604001a  mula.s      $f0, $f4
    ctx->pc = 0x134fa8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x134fac: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x134facu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x134fb0: 0xe6410018  swc1        $f1, 0x18($s2)
    ctx->pc = 0x134fb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x134fb4: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x134fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x134fb8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x134fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_134fbc:
    // 0x134fbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x134fbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x134fc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x134fc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134fc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x134fc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x134FC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134FC8u;
            // 0x134fcc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x134FD0u;
}
