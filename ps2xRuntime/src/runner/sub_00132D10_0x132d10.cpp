#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00132D10
// Address: 0x132d10 - 0x132db0
void sub_00132D10_0x132d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132D10_0x132d10");
#endif

    switch (ctx->pc) {
        case 0x132d6cu: goto label_132d6c;
        default: break;
    }

    ctx->pc = 0x132d10u;

    // 0x132d10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x132d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x132d14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x132d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x132d18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x132d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x132d1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x132d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x132d20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x132d20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132d24: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x132d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x132d28: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x132d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132d2c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x132d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132d30: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x132d30u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x132d34: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x132d34u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x132d38: 0x4600031c  madd.s      $f12, $f0, $f0
    ctx->pc = 0x132d38u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x132d3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x132d3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x132d40: 0x0  nop
    ctx->pc = 0x132d40u;
    // NOP
    // 0x132d44: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x132d44u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x132d48: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x132D48u;
    {
        const bool branch_taken_0x132d48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x132D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132D48u;
            // 0x132d4c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132d48) {
            ctx->pc = 0x132D64u;
            goto label_132d64;
        }
    }
    ctx->pc = 0x132D50u;
    // 0x132d50: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x132d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x132d54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x132d54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132d58: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x132d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x132d5c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x132D5Cu;
    {
        const bool branch_taken_0x132d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132D5Cu;
            // 0x132d60: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x132d5c) {
            ctx->pc = 0x132D94u;
            goto label_132d94;
        }
    }
    ctx->pc = 0x132D64u;
label_132d64:
    // 0x132d64: 0xc04c718  jal         func_131C60
    ctx->pc = 0x132D64u;
    SET_GPR_U32(ctx, 31, 0x132D6Cu);
    ctx->pc = 0x131C60u;
    if (runtime->hasFunction(0x131C60u)) {
        auto targetFn = runtime->lookupFunction(0x131C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132D6Cu; }
        if (ctx->pc != 0x132D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C60_0x131c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132D6Cu; }
        if (ctx->pc != 0x132D6Cu) { return; }
    }
    ctx->pc = 0x132D6Cu;
label_132d6c:
    // 0x132d6c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x132d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132d70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x132d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132d74: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x132d74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x132d78: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x132d78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x132d7c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x132d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132d80: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x132d80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x132d84: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x132d84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x132d88: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x132d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132d8c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x132d8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x132d90: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x132d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_132d94:
    // 0x132d94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x132d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x132d98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x132d98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132d9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x132d9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132da0: 0x3e00008  jr          $ra
    ctx->pc = 0x132DA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132DA0u;
            // 0x132da4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x132DA8u;
    // 0x132da8: 0x0  nop
    ctx->pc = 0x132da8u;
    // NOP
    // 0x132dac: 0x0  nop
    ctx->pc = 0x132dacu;
    // NOP
}
