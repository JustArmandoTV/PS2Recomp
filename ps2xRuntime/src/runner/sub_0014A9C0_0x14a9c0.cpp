#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014A9C0
// Address: 0x14a9c0 - 0x14abd0
void sub_0014A9C0_0x14a9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A9C0_0x14a9c0");
#endif

    switch (ctx->pc) {
        case 0x14aa88u: goto label_14aa88;
        case 0x14aa90u: goto label_14aa90;
        case 0x14aab4u: goto label_14aab4;
        case 0x14aabcu: goto label_14aabc;
        case 0x14aae0u: goto label_14aae0;
        case 0x14aae8u: goto label_14aae8;
        case 0x14ab0cu: goto label_14ab0c;
        case 0x14ab18u: goto label_14ab18;
        case 0x14ab28u: goto label_14ab28;
        case 0x14ab34u: goto label_14ab34;
        case 0x14ab6cu: goto label_14ab6c;
        case 0x14ab8cu: goto label_14ab8c;
        default: break;
    }

    ctx->pc = 0x14a9c0u;

    // 0x14a9c0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x14a9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x14a9c4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x14a9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x14a9c8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x14a9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x14a9cc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x14a9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x14a9d0: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x14a9d0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a9d4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x14a9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x14a9d8: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x14a9d8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a9dc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x14a9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x14a9e0: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x14a9e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a9e4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x14a9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x14a9e8: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x14a9e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a9ec: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x14a9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x14a9f0: 0x1518c0  sll         $v1, $s5, 3
    ctx->pc = 0x14a9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x14a9f4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14a9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14a9f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14a9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14a9fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14a9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14aa00: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x14aa00u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x14aa04: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x14aa04u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x14aa08: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x14aa08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x14aa0c: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x14aa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x14aa10: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x14aa10u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x14aa14: 0x752821  addu        $a1, $v1, $s5
    ctx->pc = 0x14aa14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x14aa18: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x14aa18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x14aa1c: 0x151980  sll         $v1, $s5, 6
    ctx->pc = 0x14aa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x14aa20: 0x45a021  addu        $s4, $v0, $a1
    ctx->pc = 0x14aa20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x14aa24: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x14aa24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14aa28: 0x86920008  lh          $s2, 0x8($s4)
    ctx->pc = 0x14aa28u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x14aa2c: 0xc6950084  lwc1        $f21, 0x84($s4)
    ctx->pc = 0x14aa2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x14aa30: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x14aa30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x14aa34: 0x86850006  lh          $a1, 0x6($s4)
    ctx->pc = 0x14aa34u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x14aa38: 0x1230c0  sll         $a2, $s2, 3
    ctx->pc = 0x14aa38u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x14aa3c: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x14aa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x14aa40: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x14aa40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x14aa44: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x14aa44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14aa48: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x14aa48u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x14aa4c: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x14aa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x14aa50: 0x469821  addu        $s3, $v0, $a2
    ctx->pc = 0x14aa50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x14aa54: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x14aa54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x14aa58: 0x86710008  lh          $s1, 0x8($s3)
    ctx->pc = 0x14aa58u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x14aa5c: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x14aa5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14aa60: 0xc6740084  lwc1        $f20, 0x84($s3)
    ctx->pc = 0x14aa60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14aa64: 0x1130c0  sll         $a2, $s1, 3
    ctx->pc = 0x14aa64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x14aa68: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x14aa68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x14aa6c: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x14aa6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14aa70: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x14aa70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x14aa74: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x14aa74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x14aa78: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x14aa78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x14aa7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14aa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14aa80: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x14AA80u;
    SET_GPR_U32(ctx, 31, 0x14AA88u);
    ctx->pc = 0x14AA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AA80u;
            // 0x14aa84: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AA88u; }
        if (ctx->pc != 0x14AA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AA88u; }
        if (ctx->pc != 0x14AA88u) { return; }
    }
    ctx->pc = 0x14AA88u;
label_14aa88:
    // 0x14aa88: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x14AA88u;
    SET_GPR_U32(ctx, 31, 0x14AA90u);
    ctx->pc = 0x14AA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AA88u;
            // 0x14aa8c: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AA90u; }
        if (ctx->pc != 0x14AA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AA90u; }
        if (ctx->pc != 0x14AA90u) { return; }
    }
    ctx->pc = 0x14AA90u;
label_14aa90:
    // 0x14aa90: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x14aa90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x14aa94: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x14aa94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aa98: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x14aa98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aa9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14aa9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aaa0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x14aaa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aaa4: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x14aaa4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aaa8: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x14aaa8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aaac: 0xc04d134  jal         func_1344D0
    ctx->pc = 0x14AAACu;
    SET_GPR_U32(ctx, 31, 0x14AAB4u);
    ctx->pc = 0x14AAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AAACu;
            // 0x14aab0: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344D0u;
    if (runtime->hasFunction(0x1344D0u)) {
        auto targetFn = runtime->lookupFunction(0x1344D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AAB4u; }
        if (ctx->pc != 0x14AAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001344D0_0x1344d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AAB4u; }
        if (ctx->pc != 0x14AAB4u) { return; }
    }
    ctx->pc = 0x14AAB4u;
label_14aab4:
    // 0x14aab4: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x14AAB4u;
    SET_GPR_U32(ctx, 31, 0x14AABCu);
    ctx->pc = 0x14AAB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AAB4u;
            // 0x14aab8: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AABCu; }
        if (ctx->pc != 0x14AABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AABCu; }
        if (ctx->pc != 0x14AABCu) { return; }
    }
    ctx->pc = 0x14AABCu;
label_14aabc:
    // 0x14aabc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x14aabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x14aac0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x14aac0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aac4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14aac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aac8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x14aac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aacc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x14aaccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aad0: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x14aad0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aad4: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x14aad4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aad8: 0xc04d134  jal         func_1344D0
    ctx->pc = 0x14AAD8u;
    SET_GPR_U32(ctx, 31, 0x14AAE0u);
    ctx->pc = 0x14AADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AAD8u;
            // 0x14aadc: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344D0u;
    if (runtime->hasFunction(0x1344D0u)) {
        auto targetFn = runtime->lookupFunction(0x1344D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AAE0u; }
        if (ctx->pc != 0x14AAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001344D0_0x1344d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AAE0u; }
        if (ctx->pc != 0x14AAE0u) { return; }
    }
    ctx->pc = 0x14AAE0u;
label_14aae0:
    // 0x14aae0: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x14AAE0u;
    SET_GPR_U32(ctx, 31, 0x14AAE8u);
    ctx->pc = 0x14AAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AAE0u;
            // 0x14aae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AAE8u; }
        if (ctx->pc != 0x14AAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AAE8u; }
        if (ctx->pc != 0x14AAE8u) { return; }
    }
    ctx->pc = 0x14AAE8u;
label_14aae8:
    // 0x14aae8: 0x8fa700b0  lw          $a3, 0xB0($sp)
    ctx->pc = 0x14aae8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x14aaec: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x14aaecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aaf0: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x14aaf0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aaf4: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x14aaf4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aaf8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x14aaf8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x14aafc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14aafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ab00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14ab00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ab04: 0xc04d134  jal         func_1344D0
    ctx->pc = 0x14AB04u;
    SET_GPR_U32(ctx, 31, 0x14AB0Cu);
    ctx->pc = 0x14AB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AB04u;
            // 0x14ab08: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344D0u;
    if (runtime->hasFunction(0x1344D0u)) {
        auto targetFn = runtime->lookupFunction(0x1344D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB0Cu; }
        if (ctx->pc != 0x14AB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001344D0_0x1344d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB0Cu; }
        if (ctx->pc != 0x14AB0Cu) { return; }
    }
    ctx->pc = 0x14AB0Cu;
label_14ab0c:
    // 0x14ab0c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x14ab0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x14ab10: 0xc04cce4  jal         func_133390
    ctx->pc = 0x14AB10u;
    SET_GPR_U32(ctx, 31, 0x14AB18u);
    ctx->pc = 0x14AB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AB10u;
            // 0x14ab14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB18u; }
        if (ctx->pc != 0x14AB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB18u; }
        if (ctx->pc != 0x14AB18u) { return; }
    }
    ctx->pc = 0x14AB18u;
label_14ab18:
    // 0x14ab18: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x14ab18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x14ab1c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x14ab1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ab20: 0xc04cca0  jal         func_133280
    ctx->pc = 0x14AB20u;
    SET_GPR_U32(ctx, 31, 0x14AB28u);
    ctx->pc = 0x14AB24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AB20u;
            // 0x14ab24: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB28u; }
        if (ctx->pc != 0x14AB28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB28u; }
        if (ctx->pc != 0x14AB28u) { return; }
    }
    ctx->pc = 0x14AB28u;
label_14ab28:
    // 0x14ab28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ab28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ab2c: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x14AB2Cu;
    SET_GPR_U32(ctx, 31, 0x14AB34u);
    ctx->pc = 0x14AB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AB2Cu;
            // 0x14ab30: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB34u; }
        if (ctx->pc != 0x14AB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB34u; }
        if (ctx->pc != 0x14AB34u) { return; }
    }
    ctx->pc = 0x14AB34u;
label_14ab34:
    // 0x14ab34: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x14ab34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14ab38: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x14ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x14ab3c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14ab3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14ab40: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x14AB40u;
    {
        const bool branch_taken_0x14ab40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ab40) {
            ctx->pc = 0x14AB44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14AB40u;
            // 0x14ab44: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14AB4Cu;
            goto label_14ab4c;
        }
    }
    ctx->pc = 0x14AB48u;
    // 0x14ab48: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x14ab48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14ab4c:
    // 0x14ab4c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x14ab4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x14ab50: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x14ab50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x14ab54: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x14ab54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x14ab58: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x14ab58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x14ab5c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x14ab5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x14ab60: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x14ab60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ab64: 0xc052b4c  jal         func_14AD30
    ctx->pc = 0x14AB64u;
    SET_GPR_U32(ctx, 31, 0x14AB6Cu);
    ctx->pc = 0x14AB68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AB64u;
            // 0x14ab68: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14AD30u;
    if (runtime->hasFunction(0x14AD30u)) {
        auto targetFn = runtime->lookupFunction(0x14AD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB6Cu; }
        if (ctx->pc != 0x14AB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014AD30_0x14ad30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB6Cu; }
        if (ctx->pc != 0x14AB6Cu) { return; }
    }
    ctx->pc = 0x14AB6Cu;
label_14ab6c:
    // 0x14ab6c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x14ab6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x14ab70: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14ab70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14ab74: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x14ab74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x14ab78: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14AB78u;
    {
        const bool branch_taken_0x14ab78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ab78) {
            ctx->pc = 0x14AB7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14AB78u;
            // 0x14ab7c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14AB90u;
            goto label_14ab90;
        }
    }
    ctx->pc = 0x14AB80u;
    // 0x14ab80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ab80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ab84: 0xc04cee8  jal         func_133BA0
    ctx->pc = 0x14AB84u;
    SET_GPR_U32(ctx, 31, 0x14AB8Cu);
    ctx->pc = 0x14AB88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AB84u;
            // 0x14ab88: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133BA0u;
    if (runtime->hasFunction(0x133BA0u)) {
        auto targetFn = runtime->lookupFunction(0x133BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB8Cu; }
        if (ctx->pc != 0x14AB8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133BA0_0x133ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB8Cu; }
        if (ctx->pc != 0x14AB8Cu) { return; }
    }
    ctx->pc = 0x14AB8Cu;
label_14ab8c:
    // 0x14ab8c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x14ab8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_14ab90:
    // 0x14ab90: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x14ab90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x14ab94: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x14ab94u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14ab98: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x14ab98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x14ab9c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x14ab9cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14aba0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x14aba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14aba4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x14aba4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14aba8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x14aba8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14abac: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x14abacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14abb0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x14abb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14abb4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14abb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14abb8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14abb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14abbc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14abbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14abc0: 0x3e00008  jr          $ra
    ctx->pc = 0x14ABC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14ABC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14ABC0u;
            // 0x14abc4: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14ABC8u;
    // 0x14abc8: 0x0  nop
    ctx->pc = 0x14abc8u;
    // NOP
    // 0x14abcc: 0x0  nop
    ctx->pc = 0x14abccu;
    // NOP
}
