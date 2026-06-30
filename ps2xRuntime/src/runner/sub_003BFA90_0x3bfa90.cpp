#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BFA90
// Address: 0x3bfa90 - 0x3bfc70
void sub_003BFA90_0x3bfa90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BFA90_0x3bfa90");
#endif

    switch (ctx->pc) {
        case 0x3bfaccu: goto label_3bfacc;
        case 0x3bfb74u: goto label_3bfb74;
        case 0x3bfb84u: goto label_3bfb84;
        case 0x3bfb94u: goto label_3bfb94;
        case 0x3bfbc4u: goto label_3bfbc4;
        case 0x3bfc3cu: goto label_3bfc3c;
        case 0x3bfc4cu: goto label_3bfc4c;
        case 0x3bfc5cu: goto label_3bfc5c;
        default: break;
    }

    ctx->pc = 0x3bfa90u;

    // 0x3bfa90: 0x3e00008  jr          $ra
    ctx->pc = 0x3BFA90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BFA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFA90u;
            // 0x3bfa94: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BFA98u;
    // 0x3bfa98: 0x0  nop
    ctx->pc = 0x3bfa98u;
    // NOP
    // 0x3bfa9c: 0x0  nop
    ctx->pc = 0x3bfa9cu;
    // NOP
    // 0x3bfaa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3bfaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3bfaa4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3bfaa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfaa8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3bfaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3bfaac: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3bfaacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3bfab0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3bfab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3bfab4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bfab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3bfab8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3bfab8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfabc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3bfabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3bfac0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3bfac0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bfac4: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x3BFAC4u;
    SET_GPR_U32(ctx, 31, 0x3BFACCu);
    ctx->pc = 0x3BFAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFAC4u;
            // 0x3bfac8: 0x262400a4  addiu       $a0, $s1, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 164));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFACCu; }
        if (ctx->pc != 0x3BFACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFACCu; }
        if (ctx->pc != 0x3BFACCu) { return; }
    }
    ctx->pc = 0x3BFACCu;
label_3bfacc:
    // 0x3bfacc: 0xc6010dd4  lwc1        $f1, 0xDD4($s0)
    ctx->pc = 0x3bfaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bfad0: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x3bfad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x3bfad4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3bfad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bfad8: 0x0  nop
    ctx->pc = 0x3bfad8u;
    // NOP
    // 0x3bfadc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3bfadcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bfae0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3BFAE0u;
    {
        const bool branch_taken_0x3bfae0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3BFAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFAE0u;
            // 0x3bfae4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfae0) {
            ctx->pc = 0x3BFAECu;
            goto label_3bfaec;
        }
    }
    ctx->pc = 0x3BFAE8u;
    // 0x3bfae8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3bfae8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bfaec:
    // 0x3bfaec: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x3BFAECu;
    {
        const bool branch_taken_0x3bfaec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bfaec) {
            ctx->pc = 0x3BFAF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFAECu;
            // 0x3bfaf0: 0x3c023f02  lui         $v0, 0x3F02 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16130 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BFB1Cu;
            goto label_3bfb1c;
        }
    }
    ctx->pc = 0x3BFAF4u;
    // 0x3bfaf4: 0x3c023f05  lui         $v0, 0x3F05
    ctx->pc = 0x3bfaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16133 << 16));
    // 0x3bfaf8: 0x34421eb8  ori         $v0, $v0, 0x1EB8
    ctx->pc = 0x3bfaf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7864);
    // 0x3bfafc: 0xc6010dc4  lwc1        $f1, 0xDC4($s0)
    ctx->pc = 0x3bfafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bfb00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3bfb00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bfb04: 0x0  nop
    ctx->pc = 0x3bfb04u;
    // NOP
    // 0x3bfb08: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3bfb08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bfb0c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3BFB0Cu;
    {
        const bool branch_taken_0x3bfb0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3BFB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFB0Cu;
            // 0x3bfb10: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfb0c) {
            ctx->pc = 0x3BFB18u;
            goto label_3bfb18;
        }
    }
    ctx->pc = 0x3BFB14u;
    // 0x3bfb14: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3bfb14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bfb18:
    // 0x3bfb18: 0x3c023f02  lui         $v0, 0x3F02
    ctx->pc = 0x3bfb18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16130 << 16));
label_3bfb1c:
    // 0x3bfb1c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3bfb1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3bfb20: 0x34428f5c  ori         $v0, $v0, 0x8F5C
    ctx->pc = 0x3bfb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36700);
    // 0x3bfb24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3bfb24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bfb28: 0xc6010dc0  lwc1        $f1, 0xDC0($s0)
    ctx->pc = 0x3bfb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bfb2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3bfb2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bfb30: 0x0  nop
    ctx->pc = 0x3bfb30u;
    // NOP
    // 0x3bfb34: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3bfb34u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x3bfb38: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bfb38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3bfb3c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3bfb3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3bfb40: 0x0  nop
    ctx->pc = 0x3bfb40u;
    // NOP
    // 0x3bfb44: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x3bfb44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3bfb48: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x3bfb48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x3bfb4c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x3bfb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x3bfb50: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x3bfb50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3bfb54: 0xa22200a4  sb          $v0, 0xA4($s1)
    ctx->pc = 0x3bfb54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 164), (uint8_t)GPR_U32(ctx, 2));
    // 0x3bfb58: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3bfb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3bfb5c: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x3bfb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x3bfb60: 0xae000dc4  sw          $zero, 0xDC4($s0)
    ctx->pc = 0x3bfb60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3524), GPR_U32(ctx, 0));
    // 0x3bfb64: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3bfb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3bfb68: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3bfb68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bfb6c: 0xc07626c  jal         func_1D89B0
    ctx->pc = 0x3BFB6Cu;
    SET_GPR_U32(ctx, 31, 0x3BFB74u);
    ctx->pc = 0x3BFB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFB6Cu;
            // 0x3bfb70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D89B0u;
    if (runtime->hasFunction(0x1D89B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D89B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFB74u; }
        if (ctx->pc != 0x3BFB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D89B0_0x1d89b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFB74u; }
        if (ctx->pc != 0x3BFB74u) { return; }
    }
    ctx->pc = 0x3BFB74u;
label_3bfb74:
    // 0x3bfb74: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3bfb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3bfb78: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3bfb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bfb7c: 0xc07626c  jal         func_1D89B0
    ctx->pc = 0x3BFB7Cu;
    SET_GPR_U32(ctx, 31, 0x3BFB84u);
    ctx->pc = 0x3BFB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFB7Cu;
            // 0x3bfb80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D89B0u;
    if (runtime->hasFunction(0x1D89B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D89B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFB84u; }
        if (ctx->pc != 0x3BFB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D89B0_0x1d89b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFB84u; }
        if (ctx->pc != 0x3BFB84u) { return; }
    }
    ctx->pc = 0x3BFB84u;
label_3bfb84:
    // 0x3bfb84: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3bfb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3bfb88: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3bfb88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bfb8c: 0xc07626c  jal         func_1D89B0
    ctx->pc = 0x3BFB8Cu;
    SET_GPR_U32(ctx, 31, 0x3BFB94u);
    ctx->pc = 0x3BFB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFB8Cu;
            // 0x3bfb90: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D89B0u;
    if (runtime->hasFunction(0x1D89B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D89B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFB94u; }
        if (ctx->pc != 0x3BFB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D89B0_0x1d89b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFB94u; }
        if (ctx->pc != 0x3BFB94u) { return; }
    }
    ctx->pc = 0x3BFB94u;
label_3bfb94:
    // 0x3bfb94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3bfb94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bfb98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3bfb98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bfb9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bfb9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bfba0: 0x3e00008  jr          $ra
    ctx->pc = 0x3BFBA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BFBA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFBA0u;
            // 0x3bfba4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BFBA8u;
    // 0x3bfba8: 0x0  nop
    ctx->pc = 0x3bfba8u;
    // NOP
    // 0x3bfbac: 0x0  nop
    ctx->pc = 0x3bfbacu;
    // NOP
    // 0x3bfbb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3bfbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3bfbb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3bfbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3bfbb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bfbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3bfbbc: 0xc0eea1c  jal         func_3BA870
    ctx->pc = 0x3BFBBCu;
    SET_GPR_U32(ctx, 31, 0x3BFBC4u);
    ctx->pc = 0x3BFBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFBBCu;
            // 0x3bfbc0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BA870u;
    if (runtime->hasFunction(0x3BA870u)) {
        auto targetFn = runtime->lookupFunction(0x3BA870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFBC4u; }
        if (ctx->pc != 0x3BFBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BA870_0x3ba870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFBC4u; }
        if (ctx->pc != 0x3BFBC4u) { return; }
    }
    ctx->pc = 0x3BFBC4u;
label_3bfbc4:
    // 0x3bfbc4: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x3bfbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x3bfbc8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x3bfbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x3bfbcc: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x3bfbccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x3bfbd0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3bfbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3bfbd4: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x3bfbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x3bfbd8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3bfbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3bfbdc: 0xa2000058  sb          $zero, 0x58($s0)
    ctx->pc = 0x3bfbdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x3bfbe0: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x3bfbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3bfbe4: 0xa2000059  sb          $zero, 0x59($s0)
    ctx->pc = 0x3bfbe4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 89), (uint8_t)GPR_U32(ctx, 0));
    // 0x3bfbe8: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x3bfbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x3bfbec: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x3bfbecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x3bfbf0: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x3bfbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x3bfbf4: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x3bfbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x3bfbf8: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x3bfbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x3bfbfc: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x3bfbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x3bfc00: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x3bfc00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x3bfc04: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x3bfc04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x3bfc08: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x3bfc08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x3bfc0c: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x3bfc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x3bfc10: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x3bfc10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x3bfc14: 0xae050088  sw          $a1, 0x88($s0)
    ctx->pc = 0x3bfc14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 5));
    // 0x3bfc18: 0xc4606510  lwc1        $f0, 0x6510($v1)
    ctx->pc = 0x3bfc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 25872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bfc1c: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x3bfc1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x3bfc20: 0xc4406518  lwc1        $f0, 0x6518($v0)
    ctx->pc = 0x3bfc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 25880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bfc24: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x3bfc24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x3bfc28: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x3bfc28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x3bfc2c: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x3bfc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x3bfc30: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x3bfc30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x3bfc34: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x3BFC34u;
    SET_GPR_U32(ctx, 31, 0x3BFC3Cu);
    ctx->pc = 0x3BFC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFC34u;
            // 0x3bfc38: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFC3Cu; }
        if (ctx->pc != 0x3BFC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFC3Cu; }
        if (ctx->pc != 0x3BFC3Cu) { return; }
    }
    ctx->pc = 0x3BFC3Cu;
label_3bfc3c:
    // 0x3bfc3c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3bfc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3bfc40: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3bfc40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3bfc44: 0xc04cc04  jal         func_133010
    ctx->pc = 0x3BFC44u;
    SET_GPR_U32(ctx, 31, 0x3BFC4Cu);
    ctx->pc = 0x3BFC48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFC44u;
            // 0x3bfc48: 0x24a583e0  addiu       $a1, $a1, -0x7C20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFC4Cu; }
        if (ctx->pc != 0x3BFC4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFC4Cu; }
        if (ctx->pc != 0x3BFC4Cu) { return; }
    }
    ctx->pc = 0x3BFC4Cu;
label_3bfc4c:
    // 0x3bfc4c: 0x260400a4  addiu       $a0, $s0, 0xA4
    ctx->pc = 0x3bfc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 164));
    // 0x3bfc50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3bfc50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfc54: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x3BFC54u;
    SET_GPR_U32(ctx, 31, 0x3BFC5Cu);
    ctx->pc = 0x3BFC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFC54u;
            // 0x3bfc58: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFC5Cu; }
        if (ctx->pc != 0x3BFC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFC5Cu; }
        if (ctx->pc != 0x3BFC5Cu) { return; }
    }
    ctx->pc = 0x3BFC5Cu;
label_3bfc5c:
    // 0x3bfc5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3bfc5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bfc60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bfc60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bfc64: 0x3e00008  jr          $ra
    ctx->pc = 0x3BFC64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BFC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFC64u;
            // 0x3bfc68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BFC6Cu;
    // 0x3bfc6c: 0x0  nop
    ctx->pc = 0x3bfc6cu;
    // NOP
}
