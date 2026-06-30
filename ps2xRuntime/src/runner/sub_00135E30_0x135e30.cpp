#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00135E30
// Address: 0x135e30 - 0x135eb0
void sub_00135E30_0x135e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135E30_0x135e30");
#endif

    switch (ctx->pc) {
        case 0x135e70u: goto label_135e70;
        default: break;
    }

    ctx->pc = 0x135e30u;

    // 0x135e30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x135e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x135e34: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x135e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x135e38: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x135e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x135e3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x135e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x135e40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x135e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x135e44: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x135e44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x135e48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x135e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x135e4c: 0x26510004  addiu       $s1, $s2, 0x4
    ctx->pc = 0x135e4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x135e50: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x135e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135e54: 0x26500008  addiu       $s0, $s2, 0x8
    ctx->pc = 0x135e54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x135e58: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x135e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135e5c: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x135e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135e60: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x135e60u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x135e64: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x135e64u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x135e68: 0xc04c718  jal         func_131C60
    ctx->pc = 0x135E68u;
    SET_GPR_U32(ctx, 31, 0x135E70u);
    ctx->pc = 0x135E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135E68u;
            // 0x135e6c: 0x4600031c  madd.s      $f12, $f0, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C60u;
    if (runtime->hasFunction(0x131C60u)) {
        auto targetFn = runtime->lookupFunction(0x131C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135E70u; }
        if (ctx->pc != 0x135E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C60_0x131c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135E70u; }
        if (ctx->pc != 0x135E70u) { return; }
    }
    ctx->pc = 0x135E70u;
label_135e70:
    // 0x135e70: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x135e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135e74: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x135e74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x135e78: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x135e78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x135e7c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x135e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135e80: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x135e80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x135e84: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x135e84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x135e88: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x135e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135e8c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x135e8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x135e90: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x135e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x135e94: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x135e94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135e98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x135e98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135e9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x135e9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135ea0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x135ea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x135EA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135EA4u;
            // 0x135ea8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x135EACu;
    // 0x135eac: 0x0  nop
    ctx->pc = 0x135eacu;
    // NOP
}
