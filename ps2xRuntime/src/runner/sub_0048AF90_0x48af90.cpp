#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048AF90
// Address: 0x48af90 - 0x48b070
void sub_0048AF90_0x48af90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048AF90_0x48af90");
#endif

    switch (ctx->pc) {
        case 0x48afb8u: goto label_48afb8;
        case 0x48afccu: goto label_48afcc;
        case 0x48afd8u: goto label_48afd8;
        case 0x48afecu: goto label_48afec;
        case 0x48b000u: goto label_48b000;
        case 0x48b010u: goto label_48b010;
        case 0x48b028u: goto label_48b028;
        case 0x48b03cu: goto label_48b03c;
        case 0x48b050u: goto label_48b050;
        default: break;
    }

    ctx->pc = 0x48af90u;

    // 0x48af90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x48af90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x48af94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x48af94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x48af98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x48af98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x48af9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x48af9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x48afa0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x48afa0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x48afa4: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x48afa4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x48afa8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x48afa8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x48afac: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x48afacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x48afb0: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x48AFB0u;
    SET_GPR_U32(ctx, 31, 0x48AFB8u);
    ctx->pc = 0x48AFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48AFB0u;
            // 0x48afb4: 0x26300890  addiu       $s0, $s1, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AFB8u; }
        if (ctx->pc != 0x48AFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AFB8u; }
        if (ctx->pc != 0x48AFB8u) { return; }
    }
    ctx->pc = 0x48AFB8u;
label_48afb8:
    // 0x48afb8: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x48afb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x48afbc: 0x262402e0  addiu       $a0, $s1, 0x2E0
    ctx->pc = 0x48afbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
    // 0x48afc0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x48afc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x48afc4: 0xc04cca0  jal         func_133280
    ctx->pc = 0x48AFC4u;
    SET_GPR_U32(ctx, 31, 0x48AFCCu);
    ctx->pc = 0x48AFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48AFC4u;
            // 0x48afc8: 0x24c6ff60  addiu       $a2, $a2, -0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AFCCu; }
        if (ctx->pc != 0x48AFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AFCCu; }
        if (ctx->pc != 0x48AFCCu) { return; }
    }
    ctx->pc = 0x48AFCCu;
label_48afcc:
    // 0x48afcc: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x48afccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    // 0x48afd0: 0xc075318  jal         func_1D4C60
    ctx->pc = 0x48AFD0u;
    SET_GPR_U32(ctx, 31, 0x48AFD8u);
    ctx->pc = 0x48AFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48AFD0u;
            // 0x48afd4: 0x262502e0  addiu       $a1, $s1, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AFD8u; }
        if (ctx->pc != 0x48AFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AFD8u; }
        if (ctx->pc != 0x48AFD8u) { return; }
    }
    ctx->pc = 0x48AFD8u;
label_48afd8:
    // 0x48afd8: 0x26250560  addiu       $a1, $s1, 0x560
    ctx->pc = 0x48afd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    // 0x48afdc: 0x26240840  addiu       $a0, $s1, 0x840
    ctx->pc = 0x48afdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2112));
    // 0x48afe0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x48afe0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x48afe4: 0xc0c6250  jal         func_318940
    ctx->pc = 0x48AFE4u;
    SET_GPR_U32(ctx, 31, 0x48AFECu);
    ctx->pc = 0x48AFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48AFE4u;
            // 0x48afe8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AFECu; }
        if (ctx->pc != 0x48AFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AFECu; }
        if (ctx->pc != 0x48AFECu) { return; }
    }
    ctx->pc = 0x48AFECu;
label_48afec:
    // 0x48afec: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x48afecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x48aff0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x48aff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x48aff4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x48aff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x48aff8: 0xc04cca0  jal         func_133280
    ctx->pc = 0x48AFF8u;
    SET_GPR_U32(ctx, 31, 0x48B000u);
    ctx->pc = 0x48AFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48AFF8u;
            // 0x48affc: 0x24c6ff50  addiu       $a2, $a2, -0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48B000u; }
        if (ctx->pc != 0x48B000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48B000u; }
        if (ctx->pc != 0x48B000u) { return; }
    }
    ctx->pc = 0x48B000u;
label_48b000:
    // 0x48b000: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x48b000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    // 0x48b004: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x48b004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x48b008: 0xc075378  jal         func_1D4DE0
    ctx->pc = 0x48B008u;
    SET_GPR_U32(ctx, 31, 0x48B010u);
    ctx->pc = 0x48B00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48B008u;
            // 0x48b00c: 0x26260830  addiu       $a2, $s1, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48B010u; }
        if (ctx->pc != 0x48B010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48B010u; }
        if (ctx->pc != 0x48B010u) { return; }
    }
    ctx->pc = 0x48B010u;
label_48b010:
    // 0x48b010: 0xc6210880  lwc1        $f1, 0x880($s1)
    ctx->pc = 0x48b010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x48b014: 0x2624087c  addiu       $a0, $s1, 0x87C
    ctx->pc = 0x48b014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2172));
    // 0x48b018: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x48b018u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x48b01c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x48b01cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x48b020: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x48B020u;
    SET_GPR_U32(ctx, 31, 0x48B028u);
    ctx->pc = 0x48B024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48B020u;
            // 0x48b024: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48B028u; }
        if (ctx->pc != 0x48B028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48B028u; }
        if (ctx->pc != 0x48B028u) { return; }
    }
    ctx->pc = 0x48B028u;
label_48b028:
    // 0x48b028: 0xc62c0930  lwc1        $f12, 0x930($s1)
    ctx->pc = 0x48b028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x48b02c: 0x2604009c  addiu       $a0, $s0, 0x9C
    ctx->pc = 0x48b02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    // 0x48b030: 0xc62d0880  lwc1        $f13, 0x880($s1)
    ctx->pc = 0x48b030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x48b034: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x48B034u;
    SET_GPR_U32(ctx, 31, 0x48B03Cu);
    ctx->pc = 0x48B038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48B034u;
            // 0x48b038: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48B03Cu; }
        if (ctx->pc != 0x48B03Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48B03Cu; }
        if (ctx->pc != 0x48B03Cu) { return; }
    }
    ctx->pc = 0x48B03Cu;
label_48b03c:
    // 0x48b03c: 0x26260560  addiu       $a2, $s1, 0x560
    ctx->pc = 0x48b03cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    // 0x48b040: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x48b040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x48b044: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x48b044u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x48b048: 0xc0c6250  jal         func_318940
    ctx->pc = 0x48B048u;
    SET_GPR_U32(ctx, 31, 0x48B050u);
    ctx->pc = 0x48B04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48B048u;
            // 0x48b04c: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48B050u; }
        if (ctx->pc != 0x48B050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48B050u; }
        if (ctx->pc != 0x48B050u) { return; }
    }
    ctx->pc = 0x48B050u;
label_48b050:
    // 0x48b050: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x48b050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48b054: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x48b054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x48b058: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x48b058u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48b05c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x48b05cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48b060: 0x3e00008  jr          $ra
    ctx->pc = 0x48B060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48B064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48B060u;
            // 0x48b064: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48B068u;
    // 0x48b068: 0x0  nop
    ctx->pc = 0x48b068u;
    // NOP
    // 0x48b06c: 0x0  nop
    ctx->pc = 0x48b06cu;
    // NOP
}
