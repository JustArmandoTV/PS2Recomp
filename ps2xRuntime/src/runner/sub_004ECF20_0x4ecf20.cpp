#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004ECF20
// Address: 0x4ecf20 - 0x4ed050
void sub_004ECF20_0x4ecf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECF20_0x4ecf20");
#endif

    switch (ctx->pc) {
        case 0x4ecf50u: goto label_4ecf50;
        case 0x4ecf5cu: goto label_4ecf5c;
        case 0x4ecf74u: goto label_4ecf74;
        case 0x4ecf80u: goto label_4ecf80;
        case 0x4ecf90u: goto label_4ecf90;
        case 0x4ecfb8u: goto label_4ecfb8;
        case 0x4ecfe4u: goto label_4ecfe4;
        case 0x4ed010u: goto label_4ed010;
        case 0x4ed01cu: goto label_4ed01c;
        case 0x4ed028u: goto label_4ed028;
        default: break;
    }

    ctx->pc = 0x4ecf20u;

    // 0x4ecf20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4ecf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4ecf24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4ecf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4ecf28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4ecf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4ecf2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ecf2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4ecf30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ecf30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4ecf34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ecf34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ecf38: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x4ECF38u;
    {
        const bool branch_taken_0x4ecf38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ECF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECF38u;
            // 0x4ecf3c: 0x26300030  addiu       $s0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ecf38) {
            ctx->pc = 0x4ECF64u;
            goto label_4ecf64;
        }
    }
    ctx->pc = 0x4ECF40u;
    // 0x4ecf40: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x4ecf40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x4ecf44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4ecf44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4ecf48: 0xc0d87e0  jal         func_361F80
    ctx->pc = 0x4ECF48u;
    SET_GPR_U32(ctx, 31, 0x4ECF50u);
    ctx->pc = 0x4ECF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECF48u;
            // 0x4ecf4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361F80u;
    if (runtime->hasFunction(0x361F80u)) {
        auto targetFn = runtime->lookupFunction(0x361F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECF50u; }
        if (ctx->pc != 0x4ECF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361F80_0x361f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECF50u; }
        if (ctx->pc != 0x4ECF50u) { return; }
    }
    ctx->pc = 0x4ECF50u;
label_4ecf50:
    // 0x4ecf50: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x4ecf50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x4ecf54: 0xc04c720  jal         func_131C80
    ctx->pc = 0x4ECF54u;
    SET_GPR_U32(ctx, 31, 0x4ECF5Cu);
    ctx->pc = 0x4ECF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECF54u;
            // 0x4ecf58: 0x26050090  addiu       $a1, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECF5Cu; }
        if (ctx->pc != 0x4ECF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECF5Cu; }
        if (ctx->pc != 0x4ECF5Cu) { return; }
    }
    ctx->pc = 0x4ECF5Cu;
label_4ecf5c:
    // 0x4ecf5c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x4ECF5Cu;
    {
        const bool branch_taken_0x4ecf5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ECF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECF5Cu;
            // 0x4ecf60: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ecf5c) {
            ctx->pc = 0x4ED014u;
            goto label_4ed014;
        }
    }
    ctx->pc = 0x4ECF64u;
label_4ecf64:
    // 0x4ecf64: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x4ecf64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x4ecf68: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4ecf68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4ecf6c: 0xc0d8834  jal         func_3620D0
    ctx->pc = 0x4ECF6Cu;
    SET_GPR_U32(ctx, 31, 0x4ECF74u);
    ctx->pc = 0x4ECF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECF6Cu;
            // 0x4ecf70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3620D0u;
    if (runtime->hasFunction(0x3620D0u)) {
        auto targetFn = runtime->lookupFunction(0x3620D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECF74u; }
        if (ctx->pc != 0x4ECF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003620D0_0x3620d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECF74u; }
        if (ctx->pc != 0x4ECF74u) { return; }
    }
    ctx->pc = 0x4ECF74u;
label_4ecf74:
    // 0x4ecf74: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4ecf74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4ecf78: 0xc04cc04  jal         func_133010
    ctx->pc = 0x4ECF78u;
    SET_GPR_U32(ctx, 31, 0x4ECF80u);
    ctx->pc = 0x4ECF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECF78u;
            // 0x4ecf7c: 0x26250100  addiu       $a1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECF80u; }
        if (ctx->pc != 0x4ECF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECF80u; }
        if (ctx->pc != 0x4ECF80u) { return; }
    }
    ctx->pc = 0x4ECF80u;
label_4ecf80:
    // 0x4ecf80: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4ecf80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4ecf84: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x4ecf84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x4ecf88: 0xc04cc44  jal         func_133110
    ctx->pc = 0x4ECF88u;
    SET_GPR_U32(ctx, 31, 0x4ECF90u);
    ctx->pc = 0x4ECF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECF88u;
            // 0x4ecf8c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECF90u; }
        if (ctx->pc != 0x4ECF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECF90u; }
        if (ctx->pc != 0x4ECF90u) { return; }
    }
    ctx->pc = 0x4ECF90u;
label_4ecf90:
    // 0x4ecf90: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x4ecf90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4ecf94: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x4ecf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ecf98: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x4ecf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4ecf9c: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x4ecf9cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x4ecfa0: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x4ecfa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x4ecfa4: 0x46000344  c1          0x344
    ctx->pc = 0x4ecfa4u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x4ecfa8: 0x0  nop
    ctx->pc = 0x4ecfa8u;
    // NOP
    // 0x4ecfac: 0x0  nop
    ctx->pc = 0x4ecfacu;
    // NOP
    // 0x4ecfb0: 0xc04780a  jal         func_11E028
    ctx->pc = 0x4ECFB0u;
    SET_GPR_U32(ctx, 31, 0x4ECFB8u);
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECFB8u; }
        if (ctx->pc != 0x4ECFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECFB8u; }
        if (ctx->pc != 0x4ECFB8u) { return; }
    }
    ctx->pc = 0x4ECFB8u;
label_4ecfb8:
    // 0x4ecfb8: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x4ecfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
    // 0x4ecfbc: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x4ecfbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
    // 0x4ecfc0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4ecfc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4ecfc4: 0x0  nop
    ctx->pc = 0x4ecfc4u;
    // NOP
    // 0x4ecfc8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4ecfc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4ecfcc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4ecfccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4ecfd0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x4ecfd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4ecfd4: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x4ecfd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4ecfd8: 0xc7ad0048  lwc1        $f13, 0x48($sp)
    ctx->pc = 0x4ecfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4ecfdc: 0xc04780a  jal         func_11E028
    ctx->pc = 0x4ECFDCu;
    SET_GPR_U32(ctx, 31, 0x4ECFE4u);
    ctx->pc = 0x4ECFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECFDCu;
            // 0x4ecfe0: 0x29023  negu        $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECFE4u; }
        if (ctx->pc != 0x4ECFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ECFE4u; }
        if (ctx->pc != 0x4ECFE4u) { return; }
    }
    ctx->pc = 0x4ECFE4u;
label_4ecfe4:
    // 0x4ecfe4: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x4ecfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
    // 0x4ecfe8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4ecfe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ecfec: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x4ecfecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
    // 0x4ecff0: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x4ecff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x4ecff4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4ecff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4ecff8: 0x0  nop
    ctx->pc = 0x4ecff8u;
    // NOP
    // 0x4ecffc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4ecffcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4ed000: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4ed000u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4ed004: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x4ed004u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x4ed008: 0xc04ca18  jal         func_132860
    ctx->pc = 0x4ED008u;
    SET_GPR_U32(ctx, 31, 0x4ED010u);
    ctx->pc = 0x4ED00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED008u;
            // 0x4ed00c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED010u; }
        if (ctx->pc != 0x4ED010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED010u; }
        if (ctx->pc != 0x4ED010u) { return; }
    }
    ctx->pc = 0x4ED010u;
label_4ed010:
    // 0x4ed010: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x4ed010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_4ed014:
    // 0x4ed014: 0xc04cc04  jal         func_133010
    ctx->pc = 0x4ED014u;
    SET_GPR_U32(ctx, 31, 0x4ED01Cu);
    ctx->pc = 0x4ED018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED014u;
            // 0x4ed018: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED01Cu; }
        if (ctx->pc != 0x4ED01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED01Cu; }
        if (ctx->pc != 0x4ED01Cu) { return; }
    }
    ctx->pc = 0x4ED01Cu;
label_4ed01c:
    // 0x4ed01c: 0x262401dc  addiu       $a0, $s1, 0x1DC
    ctx->pc = 0x4ed01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 476));
    // 0x4ed020: 0xc04c720  jal         func_131C80
    ctx->pc = 0x4ED020u;
    SET_GPR_U32(ctx, 31, 0x4ED028u);
    ctx->pc = 0x4ED024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED020u;
            // 0x4ed024: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED028u; }
        if (ctx->pc != 0x4ED028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED028u; }
        if (ctx->pc != 0x4ED028u) { return; }
    }
    ctx->pc = 0x4ED028u;
label_4ed028:
    // 0x4ed028: 0x96020110  lhu         $v0, 0x110($s0)
    ctx->pc = 0x4ed028u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x4ed02c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4ed02cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ed030: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4ed030u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ed034: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ed034u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ed038: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x4ed038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x4ed03c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ed03cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ed040: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4ed040u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x4ed044: 0x3e00008  jr          $ra
    ctx->pc = 0x4ED044u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ED048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED044u;
            // 0x4ed048: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4ED04Cu;
    // 0x4ed04c: 0x0  nop
    ctx->pc = 0x4ed04cu;
    // NOP
}
