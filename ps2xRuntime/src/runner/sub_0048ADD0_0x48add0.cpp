#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048ADD0
// Address: 0x48add0 - 0x48af90
void sub_0048ADD0_0x48add0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048ADD0_0x48add0");
#endif

    switch (ctx->pc) {
        case 0x48ae7cu: goto label_48ae7c;
        case 0x48ae8cu: goto label_48ae8c;
        case 0x48ae98u: goto label_48ae98;
        case 0x48aea4u: goto label_48aea4;
        case 0x48aeb0u: goto label_48aeb0;
        case 0x48aec0u: goto label_48aec0;
        case 0x48aed0u: goto label_48aed0;
        case 0x48aedcu: goto label_48aedc;
        case 0x48aef0u: goto label_48aef0;
        case 0x48aefcu: goto label_48aefc;
        case 0x48af10u: goto label_48af10;
        case 0x48af20u: goto label_48af20;
        case 0x48af38u: goto label_48af38;
        case 0x48af4cu: goto label_48af4c;
        case 0x48af60u: goto label_48af60;
        default: break;
    }

    ctx->pc = 0x48add0u;

    // 0x48add0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x48add0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x48add4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x48add4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x48add8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x48add8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x48addc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x48addcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x48ade0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x48ade0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48ade4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x48ade4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x48ade8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x48ade8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48adec: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x48adecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x48adf0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x48adf0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48adf4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x48adf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x48adf8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x48adf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x48adfc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x48adfcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x48ae00: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x48ae00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x48ae04: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x48ae04u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x48ae08: 0x8e220d6c  lw          $v0, 0xD6C($s1)
    ctx->pc = 0x48ae08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
    // 0x48ae0c: 0x26320340  addiu       $s2, $s1, 0x340
    ctx->pc = 0x48ae0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x48ae10: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x48ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x48ae14: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x48ae14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x48ae18: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x48ae18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x48ae1c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x48ae1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x48ae20: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x48AE20u;
    {
        const bool branch_taken_0x48ae20 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x48AE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48AE20u;
            // 0x48ae24: 0x26300890  addiu       $s0, $s1, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ae20) {
            ctx->pc = 0x48AE34u;
            goto label_48ae34;
        }
    }
    ctx->pc = 0x48AE28u;
    // 0x48ae28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x48ae28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x48ae2c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x48AE2Cu;
    {
        const bool branch_taken_0x48ae2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48AE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48AE2Cu;
            // 0x48ae30: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ae2c) {
            ctx->pc = 0x48AE50u;
            goto label_48ae50;
        }
    }
    ctx->pc = 0x48AE34u;
label_48ae34:
    // 0x48ae34: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x48ae34u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x48ae38: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x48ae38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x48ae3c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x48ae3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x48ae40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x48ae40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x48ae44: 0x0  nop
    ctx->pc = 0x48ae44u;
    // NOP
    // 0x48ae48: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x48ae48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x48ae4c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x48ae4cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_48ae50:
    // 0x48ae50: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x48ae50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x48ae54: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x48ae54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
    // 0x48ae58: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x48ae58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x48ae5c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x48ae5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x48ae60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48ae60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x48ae64: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x48ae64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x48ae68: 0x0  nop
    ctx->pc = 0x48ae68u;
    // NOP
    // 0x48ae6c: 0x460d0018  adda.s      $f0, $f13
    ctx->pc = 0x48ae6cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x48ae70: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x48ae70u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x48ae74: 0xc04f3f4  jal         func_13CFD0
    ctx->pc = 0x48AE74u;
    SET_GPR_U32(ctx, 31, 0x48AE7Cu);
    ctx->pc = 0x48AE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48AE74u;
            // 0x48ae78: 0x46020b1c  madd.s      $f12, $f1, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFD0u;
    if (runtime->hasFunction(0x13CFD0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AE7Cu; }
        if (ctx->pc != 0x48AE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFD0_0x13cfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AE7Cu; }
        if (ctx->pc != 0x48AE7Cu) { return; }
    }
    ctx->pc = 0x48AE7Cu;
label_48ae7c:
    // 0x48ae7c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x48ae7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48ae80: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x48ae80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x48ae84: 0xc04cca0  jal         func_133280
    ctx->pc = 0x48AE84u;
    SET_GPR_U32(ctx, 31, 0x48AE8Cu);
    ctx->pc = 0x48AE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48AE84u;
            // 0x48ae88: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AE8Cu; }
        if (ctx->pc != 0x48AE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AE8Cu; }
        if (ctx->pc != 0x48AE8Cu) { return; }
    }
    ctx->pc = 0x48AE8Cu;
label_48ae8c:
    // 0x48ae8c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x48ae8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48ae90: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x48AE90u;
    SET_GPR_U32(ctx, 31, 0x48AE98u);
    ctx->pc = 0x48AE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48AE90u;
            // 0x48ae94: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AE98u; }
        if (ctx->pc != 0x48AE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AE98u; }
        if (ctx->pc != 0x48AE98u) { return; }
    }
    ctx->pc = 0x48AE98u;
label_48ae98:
    // 0x48ae98: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x48ae98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x48ae9c: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x48AE9Cu;
    SET_GPR_U32(ctx, 31, 0x48AEA4u);
    ctx->pc = 0x48AEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48AE9Cu;
            // 0x48aea0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AEA4u; }
        if (ctx->pc != 0x48AEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AEA4u; }
        if (ctx->pc != 0x48AEA4u) { return; }
    }
    ctx->pc = 0x48AEA4u;
label_48aea4:
    // 0x48aea4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x48aea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48aea8: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x48AEA8u;
    SET_GPR_U32(ctx, 31, 0x48AEB0u);
    ctx->pc = 0x48AEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48AEA8u;
            // 0x48aeac: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AEB0u; }
        if (ctx->pc != 0x48AEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AEB0u; }
        if (ctx->pc != 0x48AEB0u) { return; }
    }
    ctx->pc = 0x48AEB0u;
label_48aeb0:
    // 0x48aeb0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x48aeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x48aeb4: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x48aeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x48aeb8: 0xc04cca0  jal         func_133280
    ctx->pc = 0x48AEB8u;
    SET_GPR_U32(ctx, 31, 0x48AEC0u);
    ctx->pc = 0x48AEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48AEB8u;
            // 0x48aebc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AEC0u; }
        if (ctx->pc != 0x48AEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AEC0u; }
        if (ctx->pc != 0x48AEC0u) { return; }
    }
    ctx->pc = 0x48AEC0u;
label_48aec0:
    // 0x48aec0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x48aec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48aec4: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x48aec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x48aec8: 0xc04cc90  jal         func_133240
    ctx->pc = 0x48AEC8u;
    SET_GPR_U32(ctx, 31, 0x48AED0u);
    ctx->pc = 0x48AECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48AEC8u;
            // 0x48aecc: 0x262602c0  addiu       $a2, $s1, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AED0u; }
        if (ctx->pc != 0x48AED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AED0u; }
        if (ctx->pc != 0x48AED0u) { return; }
    }
    ctx->pc = 0x48AED0u;
label_48aed0:
    // 0x48aed0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x48aed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48aed4: 0xc04cc44  jal         func_133110
    ctx->pc = 0x48AED4u;
    SET_GPR_U32(ctx, 31, 0x48AEDCu);
    ctx->pc = 0x48AED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48AED4u;
            // 0x48aed8: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AEDCu; }
        if (ctx->pc != 0x48AEDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AEDCu; }
        if (ctx->pc != 0x48AEDCu) { return; }
    }
    ctx->pc = 0x48AEDCu;
label_48aedc:
    // 0x48aedc: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x48aedcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x48aee0: 0x262402e0  addiu       $a0, $s1, 0x2E0
    ctx->pc = 0x48aee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
    // 0x48aee4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x48aee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x48aee8: 0xc04cca0  jal         func_133280
    ctx->pc = 0x48AEE8u;
    SET_GPR_U32(ctx, 31, 0x48AEF0u);
    ctx->pc = 0x48AEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48AEE8u;
            // 0x48aeec: 0x24c6ff60  addiu       $a2, $a2, -0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AEF0u; }
        if (ctx->pc != 0x48AEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AEF0u; }
        if (ctx->pc != 0x48AEF0u) { return; }
    }
    ctx->pc = 0x48AEF0u;
label_48aef0:
    // 0x48aef0: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x48aef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    // 0x48aef4: 0xc075318  jal         func_1D4C60
    ctx->pc = 0x48AEF4u;
    SET_GPR_U32(ctx, 31, 0x48AEFCu);
    ctx->pc = 0x48AEF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48AEF4u;
            // 0x48aef8: 0x262502e0  addiu       $a1, $s1, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AEFCu; }
        if (ctx->pc != 0x48AEFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AEFCu; }
        if (ctx->pc != 0x48AEFCu) { return; }
    }
    ctx->pc = 0x48AEFCu;
label_48aefc:
    // 0x48aefc: 0x26250560  addiu       $a1, $s1, 0x560
    ctx->pc = 0x48aefcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    // 0x48af00: 0x26240840  addiu       $a0, $s1, 0x840
    ctx->pc = 0x48af00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2112));
    // 0x48af04: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x48af04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x48af08: 0xc0c6250  jal         func_318940
    ctx->pc = 0x48AF08u;
    SET_GPR_U32(ctx, 31, 0x48AF10u);
    ctx->pc = 0x48AF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48AF08u;
            // 0x48af0c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AF10u; }
        if (ctx->pc != 0x48AF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AF10u; }
        if (ctx->pc != 0x48AF10u) { return; }
    }
    ctx->pc = 0x48AF10u;
label_48af10:
    // 0x48af10: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x48af10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    // 0x48af14: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x48af14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x48af18: 0xc075378  jal         func_1D4DE0
    ctx->pc = 0x48AF18u;
    SET_GPR_U32(ctx, 31, 0x48AF20u);
    ctx->pc = 0x48AF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48AF18u;
            // 0x48af1c: 0x26260830  addiu       $a2, $s1, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AF20u; }
        if (ctx->pc != 0x48AF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AF20u; }
        if (ctx->pc != 0x48AF20u) { return; }
    }
    ctx->pc = 0x48AF20u;
label_48af20:
    // 0x48af20: 0xc6210880  lwc1        $f1, 0x880($s1)
    ctx->pc = 0x48af20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48af24: 0x2624087c  addiu       $a0, $s1, 0x87C
    ctx->pc = 0x48af24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2172));
    // 0x48af28: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x48af28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x48af2c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x48af2cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x48af30: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x48AF30u;
    SET_GPR_U32(ctx, 31, 0x48AF38u);
    ctx->pc = 0x48AF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48AF30u;
            // 0x48af34: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AF38u; }
        if (ctx->pc != 0x48AF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AF38u; }
        if (ctx->pc != 0x48AF38u) { return; }
    }
    ctx->pc = 0x48AF38u;
label_48af38:
    // 0x48af38: 0xc62c0930  lwc1        $f12, 0x930($s1)
    ctx->pc = 0x48af38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x48af3c: 0x2604009c  addiu       $a0, $s0, 0x9C
    ctx->pc = 0x48af3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    // 0x48af40: 0xc62d0880  lwc1        $f13, 0x880($s1)
    ctx->pc = 0x48af40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x48af44: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x48AF44u;
    SET_GPR_U32(ctx, 31, 0x48AF4Cu);
    ctx->pc = 0x48AF48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48AF44u;
            // 0x48af48: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AF4Cu; }
        if (ctx->pc != 0x48AF4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AF4Cu; }
        if (ctx->pc != 0x48AF4Cu) { return; }
    }
    ctx->pc = 0x48AF4Cu;
label_48af4c:
    // 0x48af4c: 0x26260560  addiu       $a2, $s1, 0x560
    ctx->pc = 0x48af4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    // 0x48af50: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x48af50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x48af54: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x48af54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x48af58: 0xc0c6250  jal         func_318940
    ctx->pc = 0x48AF58u;
    SET_GPR_U32(ctx, 31, 0x48AF60u);
    ctx->pc = 0x48AF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48AF58u;
            // 0x48af5c: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AF60u; }
        if (ctx->pc != 0x48AF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AF60u; }
        if (ctx->pc != 0x48AF60u) { return; }
    }
    ctx->pc = 0x48AF60u;
label_48af60:
    // 0x48af60: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x48af60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x48af64: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x48af64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x48af68: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x48af68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x48af6c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x48af6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x48af70: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x48af70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48af74: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x48af74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48af78: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x48af78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48af7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x48af7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48af80: 0x3e00008  jr          $ra
    ctx->pc = 0x48AF80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48AF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48AF80u;
            // 0x48af84: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48AF88u;
    // 0x48af88: 0x0  nop
    ctx->pc = 0x48af88u;
    // NOP
    // 0x48af8c: 0x0  nop
    ctx->pc = 0x48af8cu;
    // NOP
}
