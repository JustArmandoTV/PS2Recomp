#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028DE20
// Address: 0x28de20 - 0x28deb0
void sub_0028DE20_0x28de20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028DE20_0x28de20");
#endif

    switch (ctx->pc) {
        case 0x28de50u: goto label_28de50;
        case 0x28de88u: goto label_28de88;
        default: break;
    }

    ctx->pc = 0x28de20u;

    // 0x28de20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28de20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28de24: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x28de24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x28de28: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28de28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28de2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28de2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28de30: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28de30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x28de34: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28de34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28de38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28de38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28de3c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x28de3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28de40: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28de40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28de44: 0x460c0502  mul.s       $f20, $f0, $f12
    ctx->pc = 0x28de44u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x28de48: 0xc0477a8  jal         func_11DEA0
    ctx->pc = 0x28DE48u;
    SET_GPR_U32(ctx, 31, 0x28DE50u);
    ctx->pc = 0x28DE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28DE48u;
            // 0x28de4c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DE50u; }
        if (ctx->pc != 0x28DE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DE50u; }
        if (ctx->pc != 0x28DE50u) { return; }
    }
    ctx->pc = 0x28DE50u;
label_28de50:
    // 0x28de50: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x28de50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28de54: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x28de54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28de58: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x28de58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28de5c: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x28de5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x28de60: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x28de60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28de64: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x28de64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28de68: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x28de68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x28de6c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x28de6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28de70: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x28de70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28de74: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x28de74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x28de78: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x28de78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28de7c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28de7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28de80: 0xc047714  jal         func_11DC50
    ctx->pc = 0x28DE80u;
    SET_GPR_U32(ctx, 31, 0x28DE88u);
    ctx->pc = 0x28DE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28DE80u;
            // 0x28de84: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DC50u;
    if (runtime->hasFunction(0x11DC50u)) {
        auto targetFn = runtime->lookupFunction(0x11DC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DE88u; }
        if (ctx->pc != 0x28DE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DC50_0x11dc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DE88u; }
        if (ctx->pc != 0x28DE88u) { return; }
    }
    ctx->pc = 0x28DE88u;
label_28de88:
    // 0x28de88: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x28de88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x28de8c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28de8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28de90: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x28de90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28de94: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28de94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28de98: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28de98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28de9c: 0x3e00008  jr          $ra
    ctx->pc = 0x28DE9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DE9Cu;
            // 0x28dea0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28DEA4u;
    // 0x28dea4: 0x0  nop
    ctx->pc = 0x28dea4u;
    // NOP
    // 0x28dea8: 0x0  nop
    ctx->pc = 0x28dea8u;
    // NOP
    // 0x28deac: 0x0  nop
    ctx->pc = 0x28deacu;
    // NOP
}
