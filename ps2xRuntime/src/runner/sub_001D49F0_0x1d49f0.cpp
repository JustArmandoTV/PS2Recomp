#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D49F0
// Address: 0x1d49f0 - 0x1d4bf0
void sub_001D49F0_0x1d49f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D49F0_0x1d49f0");
#endif

    switch (ctx->pc) {
        case 0x1d4a2cu: goto label_1d4a2c;
        case 0x1d4a40u: goto label_1d4a40;
        case 0x1d4a4cu: goto label_1d4a4c;
        case 0x1d4a58u: goto label_1d4a58;
        case 0x1d4a64u: goto label_1d4a64;
        case 0x1d4a70u: goto label_1d4a70;
        case 0x1d4a80u: goto label_1d4a80;
        case 0x1d4a8cu: goto label_1d4a8c;
        case 0x1d4aa0u: goto label_1d4aa0;
        case 0x1d4ab0u: goto label_1d4ab0;
        case 0x1d4abcu: goto label_1d4abc;
        case 0x1d4accu: goto label_1d4acc;
        case 0x1d4b58u: goto label_1d4b58;
        default: break;
    }

    ctx->pc = 0x1d49f0u;

    // 0x1d49f0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1d49f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1d49f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1d49f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1d49f8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1d49f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1d49fc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1d49fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1d4a00: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d4a00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4a04: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d4a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d4a08: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d4a08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4a0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d4a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d4a10: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1d4a10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4a14: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1d4a14u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1d4a18: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1d4a18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4a1c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1d4a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d4a20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d4a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4a24: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x1D4A24u;
    SET_GPR_U32(ctx, 31, 0x1D4A2Cu);
    ctx->pc = 0x1D4A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4A24u;
            // 0x1d4a28: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4A2Cu; }
        if (ctx->pc != 0x1D4A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4A2Cu; }
        if (ctx->pc != 0x1D4A2Cu) { return; }
    }
    ctx->pc = 0x1D4A2Cu;
label_1d4a2c:
    // 0x1d4a2c: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1d4a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1d4a30: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1d4a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1d4a34: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1d4a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d4a38: 0xc04cca0  jal         func_133280
    ctx->pc = 0x1D4A38u;
    SET_GPR_U32(ctx, 31, 0x1D4A40u);
    ctx->pc = 0x1D4A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4A38u;
            // 0x1d4a3c: 0x24c6c550  addiu       $a2, $a2, -0x3AB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4A40u; }
        if (ctx->pc != 0x1D4A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4A40u; }
        if (ctx->pc != 0x1D4A40u) { return; }
    }
    ctx->pc = 0x1D4A40u;
label_1d4a40:
    // 0x1d4a40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d4a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4a44: 0xc075328  jal         func_1D4CA0
    ctx->pc = 0x1D4A44u;
    SET_GPR_U32(ctx, 31, 0x1D4A4Cu);
    ctx->pc = 0x1D4A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4A44u;
            // 0x1d4a48: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4CA0u;
    if (runtime->hasFunction(0x1D4CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4A4Cu; }
        if (ctx->pc != 0x1D4A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4CA0_0x1d4ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4A4Cu; }
        if (ctx->pc != 0x1D4A4Cu) { return; }
    }
    ctx->pc = 0x1D4A4Cu;
label_1d4a4c:
    // 0x1d4a4c: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x1d4a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1d4a50: 0xc04cc44  jal         func_133110
    ctx->pc = 0x1D4A50u;
    SET_GPR_U32(ctx, 31, 0x1D4A58u);
    ctx->pc = 0x1D4A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4A50u;
            // 0x1d4a54: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4A58u; }
        if (ctx->pc != 0x1D4A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4A58u; }
        if (ctx->pc != 0x1D4A58u) { return; }
    }
    ctx->pc = 0x1D4A58u;
label_1d4a58:
    // 0x1d4a58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d4a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4a5c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x1D4A5Cu;
    SET_GPR_U32(ctx, 31, 0x1D4A64u);
    ctx->pc = 0x1D4A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4A5Cu;
            // 0x1d4a60: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4A64u; }
        if (ctx->pc != 0x1D4A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4A64u; }
        if (ctx->pc != 0x1D4A64u) { return; }
    }
    ctx->pc = 0x1D4A64u;
label_1d4a64:
    // 0x1d4a64: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d4a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4a68: 0xc04c774  jal         func_131DD0
    ctx->pc = 0x1D4A68u;
    SET_GPR_U32(ctx, 31, 0x1D4A70u);
    ctx->pc = 0x1D4A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4A68u;
            // 0x1d4a6c: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131DD0u;
    if (runtime->hasFunction(0x131DD0u)) {
        auto targetFn = runtime->lookupFunction(0x131DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4A70u; }
        if (ctx->pc != 0x1D4A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131DD0_0x131dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4A70u; }
        if (ctx->pc != 0x1D4A70u) { return; }
    }
    ctx->pc = 0x1D4A70u;
label_1d4a70:
    // 0x1d4a70: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d4a70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4a74: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1d4a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d4a78: 0xc04c72c  jal         func_131CB0
    ctx->pc = 0x1D4A78u;
    SET_GPR_U32(ctx, 31, 0x1D4A80u);
    ctx->pc = 0x1D4A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4A78u;
            // 0x1d4a7c: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4A80u; }
        if (ctx->pc != 0x1D4A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4A80u; }
        if (ctx->pc != 0x1D4A80u) { return; }
    }
    ctx->pc = 0x1D4A80u;
label_1d4a80:
    // 0x1d4a80: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1d4a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1d4a84: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x1D4A84u;
    SET_GPR_U32(ctx, 31, 0x1D4A8Cu);
    ctx->pc = 0x1D4A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4A84u;
            // 0x1d4a88: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4A8Cu; }
        if (ctx->pc != 0x1D4A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4A8Cu; }
        if (ctx->pc != 0x1D4A8Cu) { return; }
    }
    ctx->pc = 0x1D4A8Cu;
label_1d4a8c:
    // 0x1d4a8c: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1d4a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1d4a90: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1d4a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1d4a94: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1d4a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1d4a98: 0xc04cca0  jal         func_133280
    ctx->pc = 0x1D4A98u;
    SET_GPR_U32(ctx, 31, 0x1D4AA0u);
    ctx->pc = 0x1D4A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4A98u;
            // 0x1d4a9c: 0x24c6c540  addiu       $a2, $a2, -0x3AC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4AA0u; }
        if (ctx->pc != 0x1D4AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4AA0u; }
        if (ctx->pc != 0x1D4AA0u) { return; }
    }
    ctx->pc = 0x1D4AA0u;
label_1d4aa0:
    // 0x1d4aa0: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1d4aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x1d4aa4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1d4aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1d4aa8: 0xc04cc08  jal         func_133020
    ctx->pc = 0x1D4AA8u;
    SET_GPR_U32(ctx, 31, 0x1D4AB0u);
    ctx->pc = 0x1D4AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4AA8u;
            // 0x1d4aac: 0x24a5c540  addiu       $a1, $a1, -0x3AC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4AB0u; }
        if (ctx->pc != 0x1D4AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4AB0u; }
        if (ctx->pc != 0x1D4AB0u) { return; }
    }
    ctx->pc = 0x1D4AB0u;
label_1d4ab0:
    // 0x1d4ab0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1d4ab0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x1d4ab4: 0xc04cc14  jal         func_133050
    ctx->pc = 0x1D4AB4u;
    SET_GPR_U32(ctx, 31, 0x1D4ABCu);
    ctx->pc = 0x1D4AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4AB4u;
            // 0x1d4ab8: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4ABCu; }
        if (ctx->pc != 0x1D4ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4ABCu; }
        if (ctx->pc != 0x1D4ABCu) { return; }
    }
    ctx->pc = 0x1D4ABCu;
label_1d4abc:
    // 0x1d4abc: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1d4abcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1d4ac0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1d4ac0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1d4ac4: 0xc04cc14  jal         func_133050
    ctx->pc = 0x1D4AC4u;
    SET_GPR_U32(ctx, 31, 0x1D4ACCu);
    ctx->pc = 0x1D4AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4AC4u;
            // 0x1d4ac8: 0x2484c540  addiu       $a0, $a0, -0x3AC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4ACCu; }
        if (ctx->pc != 0x1D4ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4ACCu; }
        if (ctx->pc != 0x1D4ACCu) { return; }
    }
    ctx->pc = 0x1D4ACCu;
label_1d4acc:
    // 0x1d4acc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1d4accu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1d4ad0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1d4ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1d4ad4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d4ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d4ad8: 0x4600a843  div.s       $f1, $f21, $f0
    ctx->pc = 0x1d4ad8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[1] = ctx->f[21] / ctx->f[0];
    // 0x1d4adc: 0x0  nop
    ctx->pc = 0x1d4adcu;
    // NOP
    // 0x1d4ae0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4ae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4ae4: 0x0  nop
    ctx->pc = 0x1d4ae4u;
    // NOP
    // 0x1d4ae8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d4ae8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d4aec: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4AECu;
    {
        const bool branch_taken_0x1d4aec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d4aec) {
            ctx->pc = 0x1D4AF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4AECu;
            // 0x1d4af0: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D4AFCu;
            goto label_1d4afc;
        }
    }
    ctx->pc = 0x1D4AF4u;
    // 0x1d4af4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d4af4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4af8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d4af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d4afc:
    // 0x1d4afc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1d4afcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d4b00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4b00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4b04: 0x0  nop
    ctx->pc = 0x1d4b04u;
    // NOP
    // 0x1d4b08: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d4b08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d4b0c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1D4B0Cu;
    {
        const bool branch_taken_0x1d4b0c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D4B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4B0Cu;
            // 0x1d4b10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b0c) {
            ctx->pc = 0x1D4B18u;
            goto label_1d4b18;
        }
    }
    ctx->pc = 0x1D4B14u;
    // 0x1d4b14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d4b14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4b18:
    // 0x1d4b18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d4b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d4b1c: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x1d4b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x1d4b20: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1d4b20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1d4b24: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d4b24u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4b28: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1d4b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1d4b2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d4b2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d4b30: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1d4b30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d4b34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d4b34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4b38: 0x0  nop
    ctx->pc = 0x1d4b38u;
    // NOP
    // 0x1d4b3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d4b3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d4b40: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1d4b40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d4b44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4b44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4b48: 0x0  nop
    ctx->pc = 0x1d4b48u;
    // NOP
    // 0x1d4b4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d4b4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d4b50: 0xc0477fe  jal         func_11DFF8
    ctx->pc = 0x1D4B50u;
    SET_GPR_U32(ctx, 31, 0x1D4B58u);
    ctx->pc = 0x1D4B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4B50u;
            // 0x1d4b54: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DFF8u;
    if (runtime->hasFunction(0x11DFF8u)) {
        auto targetFn = runtime->lookupFunction(0x11DFF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4B58u; }
        if (ctx->pc != 0x1D4B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DFF8_0x11dff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4B58u; }
        if (ctx->pc != 0x1D4B58u) { return; }
    }
    ctx->pc = 0x1D4B58u;
label_1d4b58:
    // 0x1d4b58: 0xc7a20100  lwc1        $f2, 0x100($sp)
    ctx->pc = 0x1d4b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d4b5c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d4b5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d4b60: 0x0  nop
    ctx->pc = 0x1d4b60u;
    // NOP
    // 0x1d4b64: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1d4b64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d4b68: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1D4B68u;
    {
        const bool branch_taken_0x1d4b68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D4B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4B68u;
            // 0x1d4b6c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b68) {
            ctx->pc = 0x1D4B74u;
            goto label_1d4b74;
        }
    }
    ctx->pc = 0x1D4B70u;
    // 0x1d4b70: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d4b70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4b74:
    // 0x1d4b74: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4B74u;
    {
        const bool branch_taken_0x1d4b74 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1d4b74) {
            ctx->pc = 0x1D4B78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4B74u;
            // 0x1d4b78: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D4B88u;
            goto label_1d4b88;
        }
    }
    ctx->pc = 0x1D4B7Cu;
    // 0x1d4b7c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d4b7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d4b80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D4B80u;
    {
        const bool branch_taken_0x1d4b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4B80u;
            // 0x1d4b84: 0x46800920  cvt.s.w     $f4, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b80) {
            ctx->pc = 0x1D4BA0u;
            goto label_1d4ba0;
        }
    }
    ctx->pc = 0x1D4B88u;
label_1d4b88:
    // 0x1d4b88: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1d4b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1d4b8c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1d4b8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d4b90: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1d4b90u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d4b94: 0x0  nop
    ctx->pc = 0x1d4b94u;
    // NOP
    // 0x1d4b98: 0x46800920  cvt.s.w     $f4, $f1
    ctx->pc = 0x1d4b98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1d4b9c: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x1d4b9cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_1d4ba0:
    // 0x1d4ba0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d4ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d4ba4: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x1d4ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x1d4ba8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1d4ba8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d4bac: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d4bacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d4bb0: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x1d4bb0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1d4bb4: 0x0  nop
    ctx->pc = 0x1d4bb4u;
    // NOP
    // 0x1d4bb8: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x1d4bb8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1d4bbc: 0x4604185d  msub.s      $f1, $f3, $f4
    ctx->pc = 0x1d4bbcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x1d4bc0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d4bc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d4bc4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1d4bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1d4bc8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1d4bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d4bcc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1d4bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d4bd0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1d4bd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d4bd4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d4bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d4bd8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1d4bd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d4bdc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d4bdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d4be0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d4be0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4be4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4BE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4BE4u;
            // 0x1d4be8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D4BECu;
    // 0x1d4bec: 0x0  nop
    ctx->pc = 0x1d4becu;
    // NOP
}
