#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00131AB0
// Address: 0x131ab0 - 0x131c40
void sub_00131AB0_0x131ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131AB0_0x131ab0");
#endif

    switch (ctx->pc) {
        case 0x131adcu: goto label_131adc;
        case 0x131ae8u: goto label_131ae8;
        case 0x131b04u: goto label_131b04;
        case 0x131b14u: goto label_131b14;
        case 0x131b30u: goto label_131b30;
        case 0x131b40u: goto label_131b40;
        case 0x131b48u: goto label_131b48;
        case 0x131b58u: goto label_131b58;
        case 0x131b60u: goto label_131b60;
        case 0x131b7cu: goto label_131b7c;
        case 0x131b84u: goto label_131b84;
        case 0x131b94u: goto label_131b94;
        case 0x131b9cu: goto label_131b9c;
        case 0x131bb8u: goto label_131bb8;
        case 0x131bc0u: goto label_131bc0;
        case 0x131c20u: goto label_131c20;
        default: break;
    }

    ctx->pc = 0x131ab0u;

    // 0x131ab0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x131ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x131ab4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x131ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x131ab8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x131ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x131abc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x131abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x131ac0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x131ac0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131ac4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x131ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x131ac8: 0x24910010  addiu       $s1, $a0, 0x10
    ctx->pc = 0x131ac8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x131acc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x131accu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x131ad0: 0x24900020  addiu       $s0, $a0, 0x20
    ctx->pc = 0x131ad0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x131ad4: 0xc04cc2c  jal         func_1330B0
    ctx->pc = 0x131AD4u;
    SET_GPR_U32(ctx, 31, 0x131ADCu);
    ctx->pc = 0x131AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131AD4u;
            // 0x131ad8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330B0u;
    if (runtime->hasFunction(0x1330B0u)) {
        auto targetFn = runtime->lookupFunction(0x1330B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131ADCu; }
        if (ctx->pc != 0x131ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330B0_0x1330b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131ADCu; }
        if (ctx->pc != 0x131ADCu) { return; }
    }
    ctx->pc = 0x131ADCu;
label_131adc:
    // 0x131adc: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x131adcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x131ae0: 0xc04cc2c  jal         func_1330B0
    ctx->pc = 0x131AE0u;
    SET_GPR_U32(ctx, 31, 0x131AE8u);
    ctx->pc = 0x131AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131AE0u;
            // 0x131ae4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330B0u;
    if (runtime->hasFunction(0x1330B0u)) {
        auto targetFn = runtime->lookupFunction(0x1330B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131AE8u; }
        if (ctx->pc != 0x131AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330B0_0x1330b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131AE8u; }
        if (ctx->pc != 0x131AE8u) { return; }
    }
    ctx->pc = 0x131AE8u;
label_131ae8:
    // 0x131ae8: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x131ae8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131aec: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x131AECu;
    {
        const bool branch_taken_0x131aec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x131aec) {
            ctx->pc = 0x131AF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x131AECu;
            // 0x131af0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x131AFCu;
            goto label_131afc;
        }
    }
    ctx->pc = 0x131AF4u;
    // 0x131af4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x131AF4u;
    {
        const bool branch_taken_0x131af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131AF4u;
            // 0x131af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131af4) {
            ctx->pc = 0x131B0Cu;
            goto label_131b0c;
        }
    }
    ctx->pc = 0x131AFCu;
label_131afc:
    // 0x131afc: 0xc04cc2c  jal         func_1330B0
    ctx->pc = 0x131AFCu;
    SET_GPR_U32(ctx, 31, 0x131B04u);
    ctx->pc = 0x1330B0u;
    if (runtime->hasFunction(0x1330B0u)) {
        auto targetFn = runtime->lookupFunction(0x1330B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131B04u; }
        if (ctx->pc != 0x131B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330B0_0x1330b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131B04u; }
        if (ctx->pc != 0x131B04u) { return; }
    }
    ctx->pc = 0x131B04u;
label_131b04:
    // 0x131b04: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x131b04u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x131b08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x131b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_131b0c:
    // 0x131b0c: 0xc04cc2c  jal         func_1330B0
    ctx->pc = 0x131B0Cu;
    SET_GPR_U32(ctx, 31, 0x131B14u);
    ctx->pc = 0x1330B0u;
    if (runtime->hasFunction(0x1330B0u)) {
        auto targetFn = runtime->lookupFunction(0x1330B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131B14u; }
        if (ctx->pc != 0x131B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330B0_0x1330b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131B14u; }
        if (ctx->pc != 0x131B14u) { return; }
    }
    ctx->pc = 0x131B14u;
label_131b14:
    // 0x131b14: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x131b14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131b18: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x131B18u;
    {
        const bool branch_taken_0x131b18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x131b18) {
            ctx->pc = 0x131B1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x131B18u;
            // 0x131b1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x131B28u;
            goto label_131b28;
        }
    }
    ctx->pc = 0x131B20u;
    // 0x131b20: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x131B20u;
    {
        const bool branch_taken_0x131b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131B20u;
            // 0x131b24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131b20) {
            ctx->pc = 0x131B38u;
            goto label_131b38;
        }
    }
    ctx->pc = 0x131B28u;
label_131b28:
    // 0x131b28: 0xc04cc2c  jal         func_1330B0
    ctx->pc = 0x131B28u;
    SET_GPR_U32(ctx, 31, 0x131B30u);
    ctx->pc = 0x1330B0u;
    if (runtime->hasFunction(0x1330B0u)) {
        auto targetFn = runtime->lookupFunction(0x1330B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131B30u; }
        if (ctx->pc != 0x131B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330B0_0x1330b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131B30u; }
        if (ctx->pc != 0x131B30u) { return; }
    }
    ctx->pc = 0x131B30u;
label_131b30:
    // 0x131b30: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x131b30u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x131b34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x131b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_131b38:
    // 0x131b38: 0xc04cc08  jal         func_133020
    ctx->pc = 0x131B38u;
    SET_GPR_U32(ctx, 31, 0x131B40u);
    ctx->pc = 0x131B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131B38u;
            // 0x131b3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131B40u; }
        if (ctx->pc != 0x131B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131B40u; }
        if (ctx->pc != 0x131B40u) { return; }
    }
    ctx->pc = 0x131B40u;
label_131b40:
    // 0x131b40: 0xc047740  jal         func_11DD00
    ctx->pc = 0x131B40u;
    SET_GPR_U32(ctx, 31, 0x131B48u);
    ctx->pc = 0x131B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131B40u;
            // 0x131b44: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131B48u; }
        if (ctx->pc != 0x131B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131B48u; }
        if (ctx->pc != 0x131B48u) { return; }
    }
    ctx->pc = 0x131B48u;
label_131b48:
    // 0x131b48: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x131b48u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x131b4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x131b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131b50: 0xc04cc08  jal         func_133020
    ctx->pc = 0x131B50u;
    SET_GPR_U32(ctx, 31, 0x131B58u);
    ctx->pc = 0x131B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131B50u;
            // 0x131b54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131B58u; }
        if (ctx->pc != 0x131B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131B58u; }
        if (ctx->pc != 0x131B58u) { return; }
    }
    ctx->pc = 0x131B58u;
label_131b58:
    // 0x131b58: 0xc047740  jal         func_11DD00
    ctx->pc = 0x131B58u;
    SET_GPR_U32(ctx, 31, 0x131B60u);
    ctx->pc = 0x131B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131B58u;
            // 0x131b5c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131B60u; }
        if (ctx->pc != 0x131B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131B60u; }
        if (ctx->pc != 0x131B60u) { return; }
    }
    ctx->pc = 0x131B60u;
label_131b60:
    // 0x131b60: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x131b60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131b64: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x131B64u;
    {
        const bool branch_taken_0x131b64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x131b64) {
            ctx->pc = 0x131B68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x131B64u;
            // 0x131b68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x131B74u;
            goto label_131b74;
        }
    }
    ctx->pc = 0x131B6Cu;
    // 0x131b6c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x131B6Cu;
    {
        const bool branch_taken_0x131b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131B6Cu;
            // 0x131b70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131b6c) {
            ctx->pc = 0x131B8Cu;
            goto label_131b8c;
        }
    }
    ctx->pc = 0x131B74u;
label_131b74:
    // 0x131b74: 0xc04cc08  jal         func_133020
    ctx->pc = 0x131B74u;
    SET_GPR_U32(ctx, 31, 0x131B7Cu);
    ctx->pc = 0x131B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131B74u;
            // 0x131b78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131B7Cu; }
        if (ctx->pc != 0x131B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131B7Cu; }
        if (ctx->pc != 0x131B7Cu) { return; }
    }
    ctx->pc = 0x131B7Cu;
label_131b7c:
    // 0x131b7c: 0xc047740  jal         func_11DD00
    ctx->pc = 0x131B7Cu;
    SET_GPR_U32(ctx, 31, 0x131B84u);
    ctx->pc = 0x131B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131B7Cu;
            // 0x131b80: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131B84u; }
        if (ctx->pc != 0x131B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131B84u; }
        if (ctx->pc != 0x131B84u) { return; }
    }
    ctx->pc = 0x131B84u;
label_131b84:
    // 0x131b84: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x131b84u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x131b88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x131b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_131b8c:
    // 0x131b8c: 0xc04cc08  jal         func_133020
    ctx->pc = 0x131B8Cu;
    SET_GPR_U32(ctx, 31, 0x131B94u);
    ctx->pc = 0x131B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131B8Cu;
            // 0x131b90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131B94u; }
        if (ctx->pc != 0x131B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131B94u; }
        if (ctx->pc != 0x131B94u) { return; }
    }
    ctx->pc = 0x131B94u;
label_131b94:
    // 0x131b94: 0xc047740  jal         func_11DD00
    ctx->pc = 0x131B94u;
    SET_GPR_U32(ctx, 31, 0x131B9Cu);
    ctx->pc = 0x131B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131B94u;
            // 0x131b98: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131B9Cu; }
        if (ctx->pc != 0x131B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131B9Cu; }
        if (ctx->pc != 0x131B9Cu) { return; }
    }
    ctx->pc = 0x131B9Cu;
label_131b9c:
    // 0x131b9c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x131b9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131ba0: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x131BA0u;
    {
        const bool branch_taken_0x131ba0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x131ba0) {
            ctx->pc = 0x131BA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x131BA0u;
            // 0x131ba4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x131BB0u;
            goto label_131bb0;
        }
    }
    ctx->pc = 0x131BA8u;
    // 0x131ba8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x131BA8u;
    {
        const bool branch_taken_0x131ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131BA8u;
            // 0x131bac: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131ba8) {
            ctx->pc = 0x131BC8u;
            goto label_131bc8;
        }
    }
    ctx->pc = 0x131BB0u;
label_131bb0:
    // 0x131bb0: 0xc04cc08  jal         func_133020
    ctx->pc = 0x131BB0u;
    SET_GPR_U32(ctx, 31, 0x131BB8u);
    ctx->pc = 0x131BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131BB0u;
            // 0x131bb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131BB8u; }
        if (ctx->pc != 0x131BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131BB8u; }
        if (ctx->pc != 0x131BB8u) { return; }
    }
    ctx->pc = 0x131BB8u;
label_131bb8:
    // 0x131bb8: 0xc047740  jal         func_11DD00
    ctx->pc = 0x131BB8u;
    SET_GPR_U32(ctx, 31, 0x131BC0u);
    ctx->pc = 0x131BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131BB8u;
            // 0x131bbc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131BC0u; }
        if (ctx->pc != 0x131BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131BC0u; }
        if (ctx->pc != 0x131BC0u) { return; }
    }
    ctx->pc = 0x131BC0u;
label_131bc0:
    // 0x131bc0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x131bc0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x131bc4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x131bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_131bc8:
    // 0x131bc8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x131bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x131bcc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x131bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x131bd0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x131bd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x131bd4: 0x34620347  ori         $v0, $v1, 0x347
    ctx->pc = 0x131bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)839);
    // 0x131bd8: 0x46150818  adda.s      $f1, $f21
    ctx->pc = 0x131bd8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
    // 0x131bdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x131bdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131be0: 0x4614131c  madd.s      $f12, $f2, $f20
    ctx->pc = 0x131be0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[20]));
    // 0x131be4: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x131be4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131be8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x131BE8u;
    {
        const bool branch_taken_0x131be8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x131be8) {
            ctx->pc = 0x131C18u;
            goto label_131c18;
        }
    }
    ctx->pc = 0x131BF0u;
    // 0x131bf0: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x131bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
    // 0x131bf4: 0x3442f972  ori         $v0, $v0, 0xF972
    ctx->pc = 0x131bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63858);
    // 0x131bf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x131bf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131bfc: 0x0  nop
    ctx->pc = 0x131bfcu;
    // NOP
    // 0x131c00: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x131c00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131c04: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x131C04u;
    {
        const bool branch_taken_0x131c04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x131c04) {
            ctx->pc = 0x131C18u;
            goto label_131c18;
        }
    }
    ctx->pc = 0x131C0Cu;
    // 0x131c0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x131c0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131c10: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x131C10u;
    {
        const bool branch_taken_0x131c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131C10u;
            // 0x131c14: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131c10) {
            ctx->pc = 0x131C24u;
            goto label_131c24;
        }
    }
    ctx->pc = 0x131C18u;
label_131c18:
    // 0x131c18: 0xc04c710  jal         func_131C40
    ctx->pc = 0x131C18u;
    SET_GPR_U32(ctx, 31, 0x131C20u);
    ctx->pc = 0x131C40u;
    if (runtime->hasFunction(0x131C40u)) {
        auto targetFn = runtime->lookupFunction(0x131C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131C20u; }
        if (ctx->pc != 0x131C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C40_0x131c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131C20u; }
        if (ctx->pc != 0x131C20u) { return; }
    }
    ctx->pc = 0x131C20u;
label_131c20:
    // 0x131c20: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x131c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_131c24:
    // 0x131c24: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x131c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x131c28: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x131c28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131c2c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x131c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x131c30: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x131c30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131c34: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x131c34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131c38: 0x3e00008  jr          $ra
    ctx->pc = 0x131C38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131C38u;
            // 0x131c3c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x131C40u;
}
