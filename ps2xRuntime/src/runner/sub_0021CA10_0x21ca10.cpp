#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021CA10
// Address: 0x21ca10 - 0x21ca70
void sub_0021CA10_0x21ca10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CA10_0x21ca10");
#endif

    switch (ctx->pc) {
        case 0x21ca40u: goto label_21ca40;
        case 0x21ca58u: goto label_21ca58;
        default: break;
    }

    ctx->pc = 0x21ca10u;

    // 0x21ca10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21ca10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21ca14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21ca14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21ca18: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x21ca18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x21ca1c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x21ca1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x21ca20: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x21ca20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ca24: 0xc48c0020  lwc1        $f12, 0x20($a0)
    ctx->pc = 0x21ca24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21ca28: 0xc4c00040  lwc1        $f0, 0x40($a2)
    ctx->pc = 0x21ca28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ca2c: 0xc4940024  lwc1        $f20, 0x24($a0)
    ctx->pc = 0x21ca2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x21ca30: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x21ca30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x21ca34: 0x24c40010  addiu       $a0, $a2, 0x10
    ctx->pc = 0x21ca34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x21ca38: 0xc0a3414  jal         func_28D050
    ctx->pc = 0x21CA38u;
    SET_GPR_U32(ctx, 31, 0x21CA40u);
    ctx->pc = 0x21CA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CA38u;
            // 0x21ca3c: 0xe4c00040  swc1        $f0, 0x40($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 64), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D050u;
    if (runtime->hasFunction(0x28D050u)) {
        auto targetFn = runtime->lookupFunction(0x28D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA40u; }
        if (ctx->pc != 0x21CA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D050_0x28d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA40u; }
        if (ctx->pc != 0x21CA40u) { return; }
    }
    ctx->pc = 0x21CA40u;
label_21ca40:
    // 0x21ca40: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x21ca40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ca44: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x21ca44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x21ca48: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x21ca48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x21ca4c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x21ca4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x21ca50: 0xc0a3414  jal         func_28D050
    ctx->pc = 0x21CA50u;
    SET_GPR_U32(ctx, 31, 0x21CA58u);
    ctx->pc = 0x21CA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CA50u;
            // 0x21ca54: 0xe6000040  swc1        $f0, 0x40($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D050u;
    if (runtime->hasFunction(0x28D050u)) {
        auto targetFn = runtime->lookupFunction(0x28D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA58u; }
        if (ctx->pc != 0x21CA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D050_0x28d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA58u; }
        if (ctx->pc != 0x21CA58u) { return; }
    }
    ctx->pc = 0x21CA58u;
label_21ca58:
    // 0x21ca58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21ca58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21ca5c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x21ca5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x21ca60: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x21ca60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ca64: 0x3e00008  jr          $ra
    ctx->pc = 0x21CA64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CA64u;
            // 0x21ca68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21CA6Cu;
    // 0x21ca6c: 0x0  nop
    ctx->pc = 0x21ca6cu;
    // NOP
}
