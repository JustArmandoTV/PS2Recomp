#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0038EC30
// Address: 0x38ec30 - 0x38eca0
void sub_0038EC30_0x38ec30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038EC30_0x38ec30");
#endif

    switch (ctx->pc) {
        case 0x38ec50u: goto label_38ec50;
        case 0x38ec5cu: goto label_38ec5c;
        default: break;
    }

    ctx->pc = 0x38ec30u;

    // 0x38ec30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38ec30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38ec34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38ec34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x38ec38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38ec38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x38ec3c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x38ec3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x38ec40: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x38ec40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x38ec44: 0xc4940008  lwc1        $f20, 0x8($a0)
    ctx->pc = 0x38ec44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x38ec48: 0xc049514  jal         func_125450
    ctx->pc = 0x38EC48u;
    SET_GPR_U32(ctx, 31, 0x38EC50u);
    ctx->pc = 0x38EC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38EC48u;
            // 0x38ec4c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EC50u; }
        if (ctx->pc != 0x38EC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EC50u; }
        if (ctx->pc != 0x38EC50u) { return; }
    }
    ctx->pc = 0x38EC50u;
label_38ec50:
    // 0x38ec50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x38ec50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ec54: 0xc04020c  jal         func_100830
    ctx->pc = 0x38EC54u;
    SET_GPR_U32(ctx, 31, 0x38EC5Cu);
    ctx->pc = 0x38EC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38EC54u;
            // 0x38ec58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100830u;
    if (runtime->hasFunction(0x100830u)) {
        auto targetFn = runtime->lookupFunction(0x100830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EC5Cu; }
        if (ctx->pc != 0x38EC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100830_0x100830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38EC5Cu; }
        if (ctx->pc != 0x38EC5Cu) { return; }
    }
    ctx->pc = 0x38EC5Cu;
label_38ec5c:
    // 0x38ec5c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x38EC5Cu;
    {
        const bool branch_taken_0x38ec5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ec5c) {
            ctx->pc = 0x38EC80u;
            goto label_38ec80;
        }
    }
    ctx->pc = 0x38EC64u;
    // 0x38ec64: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x38ec64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38ec68: 0x0  nop
    ctx->pc = 0x38ec68u;
    // NOP
    // 0x38ec6c: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x38ec6cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[0];
    // 0x38ec70: 0x0  nop
    ctx->pc = 0x38ec70u;
    // NOP
    // 0x38ec74: 0x0  nop
    ctx->pc = 0x38ec74u;
    // NOP
    // 0x38ec78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38EC78u;
    {
        const bool branch_taken_0x38ec78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ec78) {
            ctx->pc = 0x38EC84u;
            goto label_38ec84;
        }
    }
    ctx->pc = 0x38EC80u;
label_38ec80:
    // 0x38ec80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x38ec80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38ec84:
    // 0x38ec84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38ec84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38ec88: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x38ec88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x38ec8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38ec8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38ec90: 0x3e00008  jr          $ra
    ctx->pc = 0x38EC90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38EC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38EC90u;
            // 0x38ec94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38EC98u;
    // 0x38ec98: 0x0  nop
    ctx->pc = 0x38ec98u;
    // NOP
    // 0x38ec9c: 0x0  nop
    ctx->pc = 0x38ec9cu;
    // NOP
}
