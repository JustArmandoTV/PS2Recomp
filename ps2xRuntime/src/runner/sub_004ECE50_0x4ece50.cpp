#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004ECE50
// Address: 0x4ece50 - 0x4ecf20
void sub_004ECE50_0x4ece50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECE50_0x4ece50");
#endif

    switch (ctx->pc) {
        case 0x4ece74u: goto label_4ece74;
        case 0x4ece84u: goto label_4ece84;
        case 0x4eceacu: goto label_4eceac;
        case 0x4eced8u: goto label_4eced8;
        case 0x4ecf04u: goto label_4ecf04;
        default: break;
    }

    ctx->pc = 0x4ece50u;

    // 0x4ece50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ece50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4ece54: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4ece54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ece58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4ece58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4ece5c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4ece5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4ece60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ece60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4ece64: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ece64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ece68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ece68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4ece6c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x4ECE6Cu;
    SET_GPR_U32(ctx, 31, 0x4ECE74u);
    ctx->pc = 0x4ECE70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECE6Cu;
            // 0x4ece70: 0x24450100  addiu       $a1, $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECE74u; }
        if (ctx->pc != 0x4ECE74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECE74u; }
        if (ctx->pc != 0x4ECE74u) { return; }
    }
    ctx->pc = 0x4ECE74u;
label_4ece74:
    // 0x4ece74: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4ece74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4ece78: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x4ece78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x4ece7c: 0xc04cc44  jal         func_133110
    ctx->pc = 0x4ECE7Cu;
    SET_GPR_U32(ctx, 31, 0x4ECE84u);
    ctx->pc = 0x4ECE80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECE7Cu;
            // 0x4ece80: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECE84u; }
        if (ctx->pc != 0x4ECE84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECE84u; }
        if (ctx->pc != 0x4ECE84u) { return; }
    }
    ctx->pc = 0x4ECE84u;
label_4ece84:
    // 0x4ece84: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x4ece84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4ece88: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x4ece88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ece8c: 0xc7ac0034  lwc1        $f12, 0x34($sp)
    ctx->pc = 0x4ece8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4ece90: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x4ece90u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x4ece94: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x4ece94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x4ece98: 0x46000344  c1          0x344
    ctx->pc = 0x4ece98u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x4ece9c: 0x0  nop
    ctx->pc = 0x4ece9cu;
    // NOP
    // 0x4ecea0: 0x0  nop
    ctx->pc = 0x4ecea0u;
    // NOP
    // 0x4ecea4: 0xc04780a  jal         func_11E028
    ctx->pc = 0x4ECEA4u;
    SET_GPR_U32(ctx, 31, 0x4ECEACu);
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECEACu; }
        if (ctx->pc != 0x4ECEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECEACu; }
        if (ctx->pc != 0x4ECEACu) { return; }
    }
    ctx->pc = 0x4ECEACu;
label_4eceac:
    // 0x4eceac: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x4eceacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
    // 0x4eceb0: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x4eceb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
    // 0x4eceb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4eceb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4eceb8: 0x0  nop
    ctx->pc = 0x4eceb8u;
    // NOP
    // 0x4ecebc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4ecebcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4ecec0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4ecec0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4ecec4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x4ecec4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4ecec8: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x4ecec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4ececc: 0xc7ad0038  lwc1        $f13, 0x38($sp)
    ctx->pc = 0x4ececcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4eced0: 0xc04780a  jal         func_11E028
    ctx->pc = 0x4ECED0u;
    SET_GPR_U32(ctx, 31, 0x4ECED8u);
    ctx->pc = 0x4ECED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECED0u;
            // 0x4eced4: 0x28023  negu        $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECED8u; }
        if (ctx->pc != 0x4ECED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECED8u; }
        if (ctx->pc != 0x4ECED8u) { return; }
    }
    ctx->pc = 0x4ECED8u;
label_4eced8:
    // 0x4eced8: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x4eced8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
    // 0x4ecedc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ecedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ecee0: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x4ecee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
    // 0x4ecee4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4ecee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ecee8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4ecee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4eceec: 0x0  nop
    ctx->pc = 0x4eceecu;
    // NOP
    // 0x4ecef0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4ecef0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4ecef4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4ecef4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4ecef8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x4ecef8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x4ecefc: 0xc04ca18  jal         func_132860
    ctx->pc = 0x4ECEFCu;
    SET_GPR_U32(ctx, 31, 0x4ECF04u);
    ctx->pc = 0x4ECF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECEFCu;
            // 0x4ecf00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECF04u; }
        if (ctx->pc != 0x4ECF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECF04u; }
        if (ctx->pc != 0x4ECF04u) { return; }
    }
    ctx->pc = 0x4ECF04u;
label_4ecf04:
    // 0x4ecf04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4ecf04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ecf08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ecf08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ecf0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ecf0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ecf10: 0x3e00008  jr          $ra
    ctx->pc = 0x4ECF10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ECF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECF10u;
            // 0x4ecf14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4ECF18u;
    // 0x4ecf18: 0x0  nop
    ctx->pc = 0x4ecf18u;
    // NOP
    // 0x4ecf1c: 0x0  nop
    ctx->pc = 0x4ecf1cu;
    // NOP
}
