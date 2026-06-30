#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00135A80
// Address: 0x135a80 - 0x135cd0
void sub_00135A80_0x135a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135A80_0x135a80");
#endif

    switch (ctx->pc) {
        case 0x135adcu: goto label_135adc;
        case 0x135ae8u: goto label_135ae8;
        case 0x135af0u: goto label_135af0;
        case 0x135b14u: goto label_135b14;
        case 0x135b20u: goto label_135b20;
        case 0x135b44u: goto label_135b44;
        case 0x135b54u: goto label_135b54;
        case 0x135b64u: goto label_135b64;
        case 0x135b70u: goto label_135b70;
        case 0x135b84u: goto label_135b84;
        case 0x135ba0u: goto label_135ba0;
        case 0x135bc8u: goto label_135bc8;
        case 0x135bf0u: goto label_135bf0;
        case 0x135c14u: goto label_135c14;
        case 0x135c30u: goto label_135c30;
        case 0x135c4cu: goto label_135c4c;
        case 0x135c54u: goto label_135c54;
        case 0x135c5cu: goto label_135c5c;
        case 0x135c78u: goto label_135c78;
        case 0x135c80u: goto label_135c80;
        case 0x135c88u: goto label_135c88;
        case 0x135ca0u: goto label_135ca0;
        default: break;
    }

    ctx->pc = 0x135a80u;

    // 0x135a80: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x135a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x135a84: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x135a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x135a88: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x135a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x135a8c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x135a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x135a90: 0x27b50100  addiu       $s5, $sp, 0x100
    ctx->pc = 0x135a90u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x135a94: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x135a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x135a98: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x135a98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135a9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x135a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x135aa0: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x135aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x135aa4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x135aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x135aa8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x135aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x135aac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x135aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x135ab0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x135ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x135ab4: 0x8f8380f0  lw          $v1, -0x7F10($gp)
    ctx->pc = 0x135ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934768)));
    // 0x135ab8: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x135ab8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x135abc: 0x8f8480f4  lw          $a0, -0x7F0C($gp)
    ctx->pc = 0x135abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934772)));
    // 0x135ac0: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x135ac0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x135ac4: 0x86710008  lh          $s1, 0x8($s3)
    ctx->pc = 0x135ac4u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x135ac8: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x135ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x135acc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x135accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x135ad0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x135ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x135ad4: 0xc04e1b0  jal         func_1386C0
    ctx->pc = 0x135AD4u;
    SET_GPR_U32(ctx, 31, 0x135ADCu);
    ctx->pc = 0x135AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135AD4u;
            // 0x135ad8: 0x629021  addu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1386C0u;
    if (runtime->hasFunction(0x1386C0u)) {
        auto targetFn = runtime->lookupFunction(0x1386C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135ADCu; }
        if (ctx->pc != 0x135ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001386C0_0x1386c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135ADCu; }
        if (ctx->pc != 0x135ADCu) { return; }
    }
    ctx->pc = 0x135ADCu;
label_135adc:
    // 0x135adc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x135adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135ae0: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x135AE0u;
    SET_GPR_U32(ctx, 31, 0x135AE8u);
    ctx->pc = 0x135AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135AE0u;
            // 0x135ae4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135AE8u; }
        if (ctx->pc != 0x135AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135AE8u; }
        if (ctx->pc != 0x135AE8u) { return; }
    }
    ctx->pc = 0x135AE8u;
label_135ae8:
    // 0x135ae8: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x135AE8u;
    SET_GPR_U32(ctx, 31, 0x135AF0u);
    ctx->pc = 0x135AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135AE8u;
            // 0x135aec: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135AF0u; }
        if (ctx->pc != 0x135AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135AF0u; }
        if (ctx->pc != 0x135AF0u) { return; }
    }
    ctx->pc = 0x135AF0u;
label_135af0:
    // 0x135af0: 0x8f8980f8  lw          $t1, -0x7F08($gp)
    ctx->pc = 0x135af0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934776)));
    // 0x135af4: 0xc78c80fc  lwc1        $f12, -0x7F04($gp)
    ctx->pc = 0x135af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x135af8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x135af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x135afc: 0x8f8a80c4  lw          $t2, -0x7F3C($gp)
    ctx->pc = 0x135afcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934724)));
    // 0x135b00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x135b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135b04: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x135b04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135b08: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x135b08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135b0c: 0xc04d134  jal         func_1344D0
    ctx->pc = 0x135B0Cu;
    SET_GPR_U32(ctx, 31, 0x135B14u);
    ctx->pc = 0x135B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135B0Cu;
            // 0x135b10: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344D0u;
    if (runtime->hasFunction(0x1344D0u)) {
        auto targetFn = runtime->lookupFunction(0x1344D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135B14u; }
        if (ctx->pc != 0x135B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001344D0_0x1344d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135B14u; }
        if (ctx->pc != 0x135B14u) { return; }
    }
    ctx->pc = 0x135B14u;
label_135b14:
    // 0x135b14: 0xaf8280c4  sw          $v0, -0x7F3C($gp)
    ctx->pc = 0x135b14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934724), GPR_U32(ctx, 2));
    // 0x135b18: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x135B18u;
    SET_GPR_U32(ctx, 31, 0x135B20u);
    ctx->pc = 0x135B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135B18u;
            // 0x135b1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135B20u; }
        if (ctx->pc != 0x135B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135B20u; }
        if (ctx->pc != 0x135B20u) { return; }
    }
    ctx->pc = 0x135B20u;
label_135b20:
    // 0x135b20: 0x8f8980f8  lw          $t1, -0x7F08($gp)
    ctx->pc = 0x135b20u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934776)));
    // 0x135b24: 0xc78c80fc  lwc1        $f12, -0x7F04($gp)
    ctx->pc = 0x135b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x135b28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x135b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135b2c: 0x8f8a80c4  lw          $t2, -0x7F3C($gp)
    ctx->pc = 0x135b2cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934724)));
    // 0x135b30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x135b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135b34: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x135b34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135b38: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x135b38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135b3c: 0xc04d134  jal         func_1344D0
    ctx->pc = 0x135B3Cu;
    SET_GPR_U32(ctx, 31, 0x135B44u);
    ctx->pc = 0x135B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135B3Cu;
            // 0x135b40: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344D0u;
    if (runtime->hasFunction(0x1344D0u)) {
        auto targetFn = runtime->lookupFunction(0x1344D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135B44u; }
        if (ctx->pc != 0x135B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001344D0_0x1344d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135B44u; }
        if (ctx->pc != 0x135B44u) { return; }
    }
    ctx->pc = 0x135B44u;
label_135b44:
    // 0x135b44: 0xaf8280c4  sw          $v0, -0x7F3C($gp)
    ctx->pc = 0x135b44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934724), GPR_U32(ctx, 2));
    // 0x135b48: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x135b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x135b4c: 0xc04cce4  jal         func_133390
    ctx->pc = 0x135B4Cu;
    SET_GPR_U32(ctx, 31, 0x135B54u);
    ctx->pc = 0x135B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135B4Cu;
            // 0x135b50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135B54u; }
        if (ctx->pc != 0x135B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135B54u; }
        if (ctx->pc != 0x135B54u) { return; }
    }
    ctx->pc = 0x135B54u;
label_135b54:
    // 0x135b54: 0x8f8580d0  lw          $a1, -0x7F30($gp)
    ctx->pc = 0x135b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934736)));
    // 0x135b58: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x135b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x135b5c: 0xc04cca0  jal         func_133280
    ctx->pc = 0x135B5Cu;
    SET_GPR_U32(ctx, 31, 0x135B64u);
    ctx->pc = 0x135B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135B5Cu;
            // 0x135b60: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135B64u; }
        if (ctx->pc != 0x135B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135B64u; }
        if (ctx->pc != 0x135B64u) { return; }
    }
    ctx->pc = 0x135B64u;
label_135b64:
    // 0x135b64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x135b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135b68: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x135B68u;
    SET_GPR_U32(ctx, 31, 0x135B70u);
    ctx->pc = 0x135B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135B68u;
            // 0x135b6c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135B70u; }
        if (ctx->pc != 0x135B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135B70u; }
        if (ctx->pc != 0x135B70u) { return; }
    }
    ctx->pc = 0x135B70u;
label_135b70:
    // 0x135b70: 0xc66c0084  lwc1        $f12, 0x84($s3)
    ctx->pc = 0x135b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x135b74: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x135b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135b78: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x135b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x135b7c: 0xc052af4  jal         func_14ABD0
    ctx->pc = 0x135B7Cu;
    SET_GPR_U32(ctx, 31, 0x135B84u);
    ctx->pc = 0x135B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135B7Cu;
            // 0x135b80: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14ABD0u;
    if (runtime->hasFunction(0x14ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x14ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135B84u; }
        if (ctx->pc != 0x135B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014ABD0_0x14abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135B84u; }
        if (ctx->pc != 0x135B84u) { return; }
    }
    ctx->pc = 0x135B84u;
label_135b84:
    // 0x135b84: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x135b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x135b88: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x135b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x135b8c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x135B8Cu;
    {
        const bool branch_taken_0x135b8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x135b8c) {
            ctx->pc = 0x135B90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135B8Cu;
            // 0x135b90: 0x86640004  lh          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135BA4u;
            goto label_135ba4;
        }
    }
    ctx->pc = 0x135B94u;
    // 0x135b94: 0x8f8580d0  lw          $a1, -0x7F30($gp)
    ctx->pc = 0x135b94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934736)));
    // 0x135b98: 0xc04cee8  jal         func_133BA0
    ctx->pc = 0x135B98u;
    SET_GPR_U32(ctx, 31, 0x135BA0u);
    ctx->pc = 0x135B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135B98u;
            // 0x135b9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133BA0u;
    if (runtime->hasFunction(0x133BA0u)) {
        auto targetFn = runtime->lookupFunction(0x133BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135BA0u; }
        if (ctx->pc != 0x135BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133BA0_0x133ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135BA0u; }
        if (ctx->pc != 0x135BA0u) { return; }
    }
    ctx->pc = 0x135BA0u;
label_135ba0:
    // 0x135ba0: 0x86640004  lh          $a0, 0x4($s3)
    ctx->pc = 0x135ba0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
label_135ba4:
    // 0x135ba4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x135ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x135ba8: 0x50830008  beql        $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x135BA8u;
    {
        const bool branch_taken_0x135ba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x135ba8) {
            ctx->pc = 0x135BACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135BA8u;
            // 0x135bac: 0x86440004  lh          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135BCCu;
            goto label_135bcc;
        }
    }
    ctx->pc = 0x135BB0u;
    // 0x135bb0: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x135bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x135bb4: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x135bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x135bb8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x135bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135bbc: 0x26660030  addiu       $a2, $s3, 0x30
    ctx->pc = 0x135bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x135bc0: 0xc04cd60  jal         func_133580
    ctx->pc = 0x135BC0u;
    SET_GPR_U32(ctx, 31, 0x135BC8u);
    ctx->pc = 0x135BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135BC0u;
            // 0x135bc4: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135BC8u; }
        if (ctx->pc != 0x135BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135BC8u; }
        if (ctx->pc != 0x135BC8u) { return; }
    }
    ctx->pc = 0x135BC8u;
label_135bc8:
    // 0x135bc8: 0x86440004  lh          $a0, 0x4($s2)
    ctx->pc = 0x135bc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_135bcc:
    // 0x135bcc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x135bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x135bd0: 0x50830008  beql        $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x135BD0u;
    {
        const bool branch_taken_0x135bd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x135bd0) {
            ctx->pc = 0x135BD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135BD0u;
            // 0x135bd4: 0x8f8480e4  lw          $a0, -0x7F1C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934756)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135BF4u;
            goto label_135bf4;
        }
    }
    ctx->pc = 0x135BD8u;
    // 0x135bd8: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x135bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x135bdc: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x135bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x135be0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x135be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135be4: 0x26460030  addiu       $a2, $s2, 0x30
    ctx->pc = 0x135be4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x135be8: 0xc04cd60  jal         func_133580
    ctx->pc = 0x135BE8u;
    SET_GPR_U32(ctx, 31, 0x135BF0u);
    ctx->pc = 0x135BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135BE8u;
            // 0x135bec: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135BF0u; }
        if (ctx->pc != 0x135BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135BF0u; }
        if (ctx->pc != 0x135BF0u) { return; }
    }
    ctx->pc = 0x135BF0u;
label_135bf0:
    // 0x135bf0: 0x8f8480e4  lw          $a0, -0x7F1C($gp)
    ctx->pc = 0x135bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934756)));
label_135bf4:
    // 0x135bf4: 0x5080000f  beql        $a0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x135BF4u;
    {
        const bool branch_taken_0x135bf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x135bf4) {
            ctx->pc = 0x135BF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135BF4u;
            // 0x135bf8: 0x86440008  lh          $a0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135C34u;
            goto label_135c34;
        }
    }
    ctx->pc = 0x135BFCu;
    // 0x135bfc: 0x8f8580f0  lw          $a1, -0x7F10($gp)
    ctx->pc = 0x135bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934768)));
    // 0x135c00: 0xc78c8014  lwc1        $f12, -0x7FEC($gp)
    ctx->pc = 0x135c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x135c04: 0x8f8880e8  lw          $t0, -0x7F18($gp)
    ctx->pc = 0x135c04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934760)));
    // 0x135c08: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x135c08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135c0c: 0xc04c54c  jal         func_131530
    ctx->pc = 0x135C0Cu;
    SET_GPR_U32(ctx, 31, 0x135C14u);
    ctx->pc = 0x135C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135C0Cu;
            // 0x135c10: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131530u;
    if (runtime->hasFunction(0x131530u)) {
        auto targetFn = runtime->lookupFunction(0x131530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135C14u; }
        if (ctx->pc != 0x135C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131530_0x131530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135C14u; }
        if (ctx->pc != 0x135C14u) { return; }
    }
    ctx->pc = 0x135C14u;
label_135c14:
    // 0x135c14: 0x8f8480e4  lw          $a0, -0x7F1C($gp)
    ctx->pc = 0x135c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934756)));
    // 0x135c18: 0xc78c8014  lwc1        $f12, -0x7FEC($gp)
    ctx->pc = 0x135c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x135c1c: 0x8f8580f0  lw          $a1, -0x7F10($gp)
    ctx->pc = 0x135c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934768)));
    // 0x135c20: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x135c20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135c24: 0x8f8880e8  lw          $t0, -0x7F18($gp)
    ctx->pc = 0x135c24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934760)));
    // 0x135c28: 0xc04c54c  jal         func_131530
    ctx->pc = 0x135C28u;
    SET_GPR_U32(ctx, 31, 0x135C30u);
    ctx->pc = 0x135C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135C28u;
            // 0x135c2c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131530u;
    if (runtime->hasFunction(0x131530u)) {
        auto targetFn = runtime->lookupFunction(0x131530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135C30u; }
        if (ctx->pc != 0x135C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131530_0x131530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135C30u; }
        if (ctx->pc != 0x135C30u) { return; }
    }
    ctx->pc = 0x135C30u;
label_135c30:
    // 0x135c30: 0x86440008  lh          $a0, 0x8($s2)
    ctx->pc = 0x135c30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
label_135c34:
    // 0x135c34: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x135c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x135c38: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x135C38u;
    {
        const bool branch_taken_0x135c38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x135c38) {
            ctx->pc = 0x135C3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135C38u;
            // 0x135c3c: 0x8644000a  lh          $a0, 0xA($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135C60u;
            goto label_135c60;
        }
    }
    ctx->pc = 0x135C40u;
    // 0x135c40: 0x8f8480f4  lw          $a0, -0x7F0C($gp)
    ctx->pc = 0x135c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934772)));
    // 0x135c44: 0xc04e1b8  jal         func_1386E0
    ctx->pc = 0x135C44u;
    SET_GPR_U32(ctx, 31, 0x135C4Cu);
    ctx->pc = 0x135C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135C44u;
            // 0x135c48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1386E0u;
    if (runtime->hasFunction(0x1386E0u)) {
        auto targetFn = runtime->lookupFunction(0x1386E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135C4Cu; }
        if (ctx->pc != 0x135C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001386E0_0x1386e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135C4Cu; }
        if (ctx->pc != 0x135C4Cu) { return; }
    }
    ctx->pc = 0x135C4Cu;
label_135c4c:
    // 0x135c4c: 0xc04d0b8  jal         func_1342E0
    ctx->pc = 0x135C4Cu;
    SET_GPR_U32(ctx, 31, 0x135C54u);
    ctx->pc = 0x135C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135C4Cu;
            // 0x135c50: 0x86440008  lh          $a0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1342E0u;
    if (runtime->hasFunction(0x1342E0u)) {
        auto targetFn = runtime->lookupFunction(0x1342E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135C54u; }
        if (ctx->pc != 0x135C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001342E0_0x1342e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135C54u; }
        if (ctx->pc != 0x135C54u) { return; }
    }
    ctx->pc = 0x135C54u;
label_135c54:
    // 0x135c54: 0xc04e1d4  jal         func_138750
    ctx->pc = 0x135C54u;
    SET_GPR_U32(ctx, 31, 0x135C5Cu);
    ctx->pc = 0x135C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135C54u;
            // 0x135c58: 0x8f8480f4  lw          $a0, -0x7F0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934772)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138750u;
    if (runtime->hasFunction(0x138750u)) {
        auto targetFn = runtime->lookupFunction(0x138750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135C5Cu; }
        if (ctx->pc != 0x135C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138750_0x138750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135C5Cu; }
        if (ctx->pc != 0x135C5Cu) { return; }
    }
    ctx->pc = 0x135C5Cu;
label_135c5c:
    // 0x135c5c: 0x8644000a  lh          $a0, 0xA($s2)
    ctx->pc = 0x135c5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
label_135c60:
    // 0x135c60: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x135c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x135c64: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x135C64u;
    {
        const bool branch_taken_0x135c64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x135c64) {
            ctx->pc = 0x135C68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135C64u;
            // 0x135c68: 0x8664000a  lh          $a0, 0xA($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135C8Cu;
            goto label_135c8c;
        }
    }
    ctx->pc = 0x135C6Cu;
    // 0x135c6c: 0x8f8480f4  lw          $a0, -0x7F0C($gp)
    ctx->pc = 0x135c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934772)));
    // 0x135c70: 0xc04e1b8  jal         func_1386E0
    ctx->pc = 0x135C70u;
    SET_GPR_U32(ctx, 31, 0x135C78u);
    ctx->pc = 0x135C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135C70u;
            // 0x135c74: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1386E0u;
    if (runtime->hasFunction(0x1386E0u)) {
        auto targetFn = runtime->lookupFunction(0x1386E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135C78u; }
        if (ctx->pc != 0x135C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001386E0_0x1386e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135C78u; }
        if (ctx->pc != 0x135C78u) { return; }
    }
    ctx->pc = 0x135C78u;
label_135c78:
    // 0x135c78: 0xc04d0b8  jal         func_1342E0
    ctx->pc = 0x135C78u;
    SET_GPR_U32(ctx, 31, 0x135C80u);
    ctx->pc = 0x135C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135C78u;
            // 0x135c7c: 0x8644000a  lh          $a0, 0xA($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1342E0u;
    if (runtime->hasFunction(0x1342E0u)) {
        auto targetFn = runtime->lookupFunction(0x1342E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135C80u; }
        if (ctx->pc != 0x135C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001342E0_0x1342e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135C80u; }
        if (ctx->pc != 0x135C80u) { return; }
    }
    ctx->pc = 0x135C80u;
label_135c80:
    // 0x135c80: 0xc04e1d4  jal         func_138750
    ctx->pc = 0x135C80u;
    SET_GPR_U32(ctx, 31, 0x135C88u);
    ctx->pc = 0x135C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135C80u;
            // 0x135c84: 0x8f8480f4  lw          $a0, -0x7F0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934772)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138750u;
    if (runtime->hasFunction(0x138750u)) {
        auto targetFn = runtime->lookupFunction(0x138750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135C88u; }
        if (ctx->pc != 0x135C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138750_0x138750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135C88u; }
        if (ctx->pc != 0x135C88u) { return; }
    }
    ctx->pc = 0x135C88u;
label_135c88:
    // 0x135c88: 0x8664000a  lh          $a0, 0xA($s3)
    ctx->pc = 0x135c88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
label_135c8c:
    // 0x135c8c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x135c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x135c90: 0x50830004  beql        $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x135C90u;
    {
        const bool branch_taken_0x135c90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x135c90) {
            ctx->pc = 0x135C94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135C90u;
            // 0x135c94: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135CA4u;
            goto label_135ca4;
        }
    }
    ctx->pc = 0x135C98u;
    // 0x135c98: 0xc04d0b8  jal         func_1342E0
    ctx->pc = 0x135C98u;
    SET_GPR_U32(ctx, 31, 0x135CA0u);
    ctx->pc = 0x1342E0u;
    if (runtime->hasFunction(0x1342E0u)) {
        auto targetFn = runtime->lookupFunction(0x1342E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135CA0u; }
        if (ctx->pc != 0x135CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001342E0_0x1342e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135CA0u; }
        if (ctx->pc != 0x135CA0u) { return; }
    }
    ctx->pc = 0x135CA0u;
label_135ca0:
    // 0x135ca0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x135ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_135ca4:
    // 0x135ca4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x135ca4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x135ca8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x135ca8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x135cac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x135cacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135cb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x135cb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135cb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x135cb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135cb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x135cb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x135CBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135CBCu;
            // 0x135cc0: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x135CC4u;
    // 0x135cc4: 0x0  nop
    ctx->pc = 0x135cc4u;
    // NOP
    // 0x135cc8: 0x0  nop
    ctx->pc = 0x135cc8u;
    // NOP
    // 0x135ccc: 0x0  nop
    ctx->pc = 0x135cccu;
    // NOP
}
