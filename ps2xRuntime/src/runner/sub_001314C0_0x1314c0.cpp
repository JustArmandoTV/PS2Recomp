#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001314C0
// Address: 0x1314c0 - 0x131530
void sub_001314C0_0x1314c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001314C0_0x1314c0");
#endif

    switch (ctx->pc) {
        case 0x1314fcu: goto label_1314fc;
        case 0x13150cu: goto label_13150c;
        default: break;
    }

    ctx->pc = 0x1314c0u;

    // 0x1314c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1314c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1314c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1314c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1314c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1314c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1314cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1314ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1314d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1314d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1314d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1314d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1314d8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1314d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1314dc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1314dcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1314e0: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1314e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1314e4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1314E4u;
    {
        const bool branch_taken_0x1314e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1314E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1314E4u;
            // 0x1314e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1314e4) {
            ctx->pc = 0x1314F4u;
            goto label_1314f4;
        }
    }
    ctx->pc = 0x1314ECu;
    // 0x1314ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1314ECu;
    {
        const bool branch_taken_0x1314ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1314F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1314ECu;
            // 0x1314f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1314ec) {
            ctx->pc = 0x13150Cu;
            goto label_13150c;
        }
    }
    ctx->pc = 0x1314F4u;
label_1314f4:
    // 0x1314f4: 0xc04c6ac  jal         func_131AB0
    ctx->pc = 0x1314F4u;
    SET_GPR_U32(ctx, 31, 0x1314FCu);
    ctx->pc = 0x1314F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1314F4u;
            // 0x1314f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131AB0u;
    if (runtime->hasFunction(0x131AB0u)) {
        auto targetFn = runtime->lookupFunction(0x131AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1314FCu; }
        if (ctx->pc != 0x1314FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131AB0_0x131ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1314FCu; }
        if (ctx->pc != 0x1314FCu) { return; }
    }
    ctx->pc = 0x1314FCu;
label_1314fc:
    // 0x1314fc: 0x4600a302  mul.s       $f12, $f20, $f0
    ctx->pc = 0x1314fcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x131500: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x131500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131504: 0xc04c408  jal         func_131020
    ctx->pc = 0x131504u;
    SET_GPR_U32(ctx, 31, 0x13150Cu);
    ctx->pc = 0x131508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131504u;
            // 0x131508: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131020u;
    if (runtime->hasFunction(0x131020u)) {
        auto targetFn = runtime->lookupFunction(0x131020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13150Cu; }
        if (ctx->pc != 0x13150Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131020_0x131020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13150Cu; }
        if (ctx->pc != 0x13150Cu) { return; }
    }
    ctx->pc = 0x13150Cu;
label_13150c:
    // 0x13150c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13150cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131510: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x131510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x131514: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x131514u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131518: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x131518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13151c: 0x3e00008  jr          $ra
    ctx->pc = 0x13151Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13151Cu;
            // 0x131520: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x131524u;
    // 0x131524: 0x0  nop
    ctx->pc = 0x131524u;
    // NOP
    // 0x131528: 0x0  nop
    ctx->pc = 0x131528u;
    // NOP
    // 0x13152c: 0x0  nop
    ctx->pc = 0x13152cu;
    // NOP
}
