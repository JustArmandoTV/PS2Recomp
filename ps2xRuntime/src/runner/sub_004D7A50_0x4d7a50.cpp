#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D7A50
// Address: 0x4d7a50 - 0x4d7bf0
void sub_004D7A50_0x4d7a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D7A50_0x4d7a50");
#endif

    switch (ctx->pc) {
        case 0x4d7a6cu: goto label_4d7a6c;
        case 0x4d7a8cu: goto label_4d7a8c;
        case 0x4d7ae4u: goto label_4d7ae4;
        case 0x4d7b00u: goto label_4d7b00;
        case 0x4d7b20u: goto label_4d7b20;
        case 0x4d7b80u: goto label_4d7b80;
        case 0x4d7b8cu: goto label_4d7b8c;
        case 0x4d7b98u: goto label_4d7b98;
        case 0x4d7ba4u: goto label_4d7ba4;
        case 0x4d7bb0u: goto label_4d7bb0;
        case 0x4d7bbcu: goto label_4d7bbc;
        case 0x4d7bd4u: goto label_4d7bd4;
        default: break;
    }

    ctx->pc = 0x4d7a50u;

    // 0x4d7a50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d7a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4d7a54: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4d7a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4d7a58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d7a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4d7a5c: 0x34468a9c  ori         $a2, $v0, 0x8A9C
    ctx->pc = 0x4d7a5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35484);
    // 0x4d7a60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d7a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4d7a64: 0xc135f34  jal         func_4D7CD0
    ctx->pc = 0x4D7A64u;
    SET_GPR_U32(ctx, 31, 0x4D7A6Cu);
    ctx->pc = 0x4D7A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7A64u;
            // 0x4d7a68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D7CD0u;
    if (runtime->hasFunction(0x4D7CD0u)) {
        auto targetFn = runtime->lookupFunction(0x4D7CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7A6Cu; }
        if (ctx->pc != 0x4D7A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D7CD0_0x4d7cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7A6Cu; }
        if (ctx->pc != 0x4D7A6Cu) { return; }
    }
    ctx->pc = 0x4D7A6Cu;
label_4d7a6c:
    // 0x4d7a6c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d7a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4d7a70: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d7a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4d7a74: 0x246329a0  addiu       $v1, $v1, 0x29A0
    ctx->pc = 0x4d7a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10656));
    // 0x4d7a78: 0x244229d8  addiu       $v0, $v0, 0x29D8
    ctx->pc = 0x4d7a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10712));
    // 0x4d7a7c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d7a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d7a80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d7a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7a84: 0xc135f30  jal         func_4D7CC0
    ctx->pc = 0x4D7A84u;
    SET_GPR_U32(ctx, 31, 0x4D7A8Cu);
    ctx->pc = 0x4D7A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7A84u;
            // 0x4d7a88: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D7CC0u;
    if (runtime->hasFunction(0x4D7CC0u)) {
        auto targetFn = runtime->lookupFunction(0x4D7CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7A8Cu; }
        if (ctx->pc != 0x4D7A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D7CC0_0x4d7cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7A8Cu; }
        if (ctx->pc != 0x4D7A8Cu) { return; }
    }
    ctx->pc = 0x4D7A8Cu;
label_4d7a8c:
    // 0x4d7a8c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4d7a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x4d7a90: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4d7a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x4d7a94: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d7a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4d7a98: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4d7a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4d7a9c: 0x244228f0  addiu       $v0, $v0, 0x28F0
    ctx->pc = 0x4d7a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10480));
    // 0x4d7aa0: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4d7aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x4d7aa4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4d7aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4d7aa8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d7aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4d7aac: 0x24422928  addiu       $v0, $v0, 0x2928
    ctx->pc = 0x4d7aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10536));
    // 0x4d7ab0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4d7ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4d7ab4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4d7ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4d7ab8: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x4d7ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x4d7abc: 0xc4407e60  lwc1        $f0, 0x7E60($v0)
    ctx->pc = 0x4d7abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d7ac0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4d7ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4d7ac4: 0xc4417e64  lwc1        $f1, 0x7E64($v0)
    ctx->pc = 0x4d7ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d7ac8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4d7ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x4d7acc: 0xc4607e68  lwc1        $f0, 0x7E68($v1)
    ctx->pc = 0x4d7accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d7ad0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d7ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4d7ad4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4d7ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x4d7ad8: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x4d7ad8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x4d7adc: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x4D7ADCu;
    SET_GPR_U32(ctx, 31, 0x4D7AE4u);
    ctx->pc = 0x4D7AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7ADCu;
            // 0x4d7ae0: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7AE4u; }
        if (ctx->pc != 0x4D7AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7AE4u; }
        if (ctx->pc != 0x4D7AE4u) { return; }
    }
    ctx->pc = 0x4D7AE4u;
label_4d7ae4:
    // 0x4d7ae4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4d7ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4d7ae8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4d7ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7aec: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D7AECu;
    {
        const bool branch_taken_0x4d7aec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D7AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7AECu;
            // 0x4d7af0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7aec) {
            ctx->pc = 0x4D7B04u;
            goto label_4d7b04;
        }
    }
    ctx->pc = 0x4D7AF4u;
    // 0x4d7af4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4d7af4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4d7af8: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x4D7AF8u;
    SET_GPR_U32(ctx, 31, 0x4D7B00u);
    ctx->pc = 0x4D7AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7AF8u;
            // 0x4d7afc: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7B00u; }
        if (ctx->pc != 0x4D7B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7B00u; }
        if (ctx->pc != 0x4D7B00u) { return; }
    }
    ctx->pc = 0x4D7B00u;
label_4d7b00:
    // 0x4d7b00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4d7b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d7b04:
    // 0x4d7b04: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x4d7b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x4d7b08: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4d7b08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7b0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d7b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d7b10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d7b10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d7b14: 0x3e00008  jr          $ra
    ctx->pc = 0x4D7B14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D7B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7B14u;
            // 0x4d7b18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D7B1Cu;
    // 0x4d7b1c: 0x0  nop
    ctx->pc = 0x4d7b1cu;
    // NOP
label_4d7b20:
    // 0x4d7b20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d7b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4d7b24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d7b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4d7b28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d7b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4d7b2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d7b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4d7b30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d7b30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7b34: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x4D7B34u;
    {
        const bool branch_taken_0x4d7b34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D7B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7B34u;
            // 0x4d7b38: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7b34) {
            ctx->pc = 0x4D7BD4u;
            goto label_4d7bd4;
        }
    }
    ctx->pc = 0x4D7B3Cu;
    // 0x4d7b3c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d7b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4d7b40: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d7b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4d7b44: 0x246329a0  addiu       $v1, $v1, 0x29A0
    ctx->pc = 0x4d7b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10656));
    // 0x4d7b48: 0x244229d8  addiu       $v0, $v0, 0x29D8
    ctx->pc = 0x4d7b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10712));
    // 0x4d7b4c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d7b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d7b50: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4D7B50u;
    {
        const bool branch_taken_0x4d7b50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D7B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7B50u;
            // 0x4d7b54: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7b50) {
            ctx->pc = 0x4D7BBCu;
            goto label_4d7bbc;
        }
    }
    ctx->pc = 0x4D7B58u;
    // 0x4d7b58: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d7b58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4d7b5c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d7b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4d7b60: 0x24632950  addiu       $v1, $v1, 0x2950
    ctx->pc = 0x4d7b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10576));
    // 0x4d7b64: 0x3c05004d  lui         $a1, 0x4D
    ctx->pc = 0x4d7b64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)77 << 16));
    // 0x4d7b68: 0x24422988  addiu       $v0, $v0, 0x2988
    ctx->pc = 0x4d7b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10632));
    // 0x4d7b6c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d7b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d7b70: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4d7b70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4d7b74: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x4d7b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x4d7b78: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x4D7B78u;
    SET_GPR_U32(ctx, 31, 0x4D7B80u);
    ctx->pc = 0x4D7B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7B78u;
            // 0x4d7b7c: 0x24a573d0  addiu       $a1, $a1, 0x73D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7B80u; }
        if (ctx->pc != 0x4D7B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7B80u; }
        if (ctx->pc != 0x4D7B80u) { return; }
    }
    ctx->pc = 0x4D7B80u;
label_4d7b80:
    // 0x4d7b80: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4d7b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x4d7b84: 0xc0a8c98  jal         func_2A3260
    ctx->pc = 0x4D7B84u;
    SET_GPR_U32(ctx, 31, 0x4D7B8Cu);
    ctx->pc = 0x4D7B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7B84u;
            // 0x4d7b88: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7B8Cu; }
        if (ctx->pc != 0x4D7B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7B8Cu; }
        if (ctx->pc != 0x4D7B8Cu) { return; }
    }
    ctx->pc = 0x4D7B8Cu;
label_4d7b8c:
    // 0x4d7b8c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x4d7b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x4d7b90: 0xc135f14  jal         func_4D7C50
    ctx->pc = 0x4D7B90u;
    SET_GPR_U32(ctx, 31, 0x4D7B98u);
    ctx->pc = 0x4D7B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7B90u;
            // 0x4d7b94: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D7C50u;
    if (runtime->hasFunction(0x4D7C50u)) {
        auto targetFn = runtime->lookupFunction(0x4D7C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7B98u; }
        if (ctx->pc != 0x4D7B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D7C50_0x4d7c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7B98u; }
        if (ctx->pc != 0x4D7B98u) { return; }
    }
    ctx->pc = 0x4D7B98u;
label_4d7b98:
    // 0x4d7b98: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4d7b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x4d7b9c: 0xc135f14  jal         func_4D7C50
    ctx->pc = 0x4D7B9Cu;
    SET_GPR_U32(ctx, 31, 0x4D7BA4u);
    ctx->pc = 0x4D7BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7B9Cu;
            // 0x4d7ba0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D7C50u;
    if (runtime->hasFunction(0x4D7C50u)) {
        auto targetFn = runtime->lookupFunction(0x4D7C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7BA4u; }
        if (ctx->pc != 0x4D7BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D7C50_0x4d7c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7BA4u; }
        if (ctx->pc != 0x4D7BA4u) { return; }
    }
    ctx->pc = 0x4D7BA4u;
label_4d7ba4:
    // 0x4d7ba4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x4d7ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x4d7ba8: 0xc135efc  jal         func_4D7BF0
    ctx->pc = 0x4D7BA8u;
    SET_GPR_U32(ctx, 31, 0x4D7BB0u);
    ctx->pc = 0x4D7BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7BA8u;
            // 0x4d7bac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D7BF0u;
    if (runtime->hasFunction(0x4D7BF0u)) {
        auto targetFn = runtime->lookupFunction(0x4D7BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7BB0u; }
        if (ctx->pc != 0x4D7BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D7BF0_0x4d7bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7BB0u; }
        if (ctx->pc != 0x4D7BB0u) { return; }
    }
    ctx->pc = 0x4D7BB0u;
label_4d7bb0:
    // 0x4d7bb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d7bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7bb4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x4D7BB4u;
    SET_GPR_U32(ctx, 31, 0x4D7BBCu);
    ctx->pc = 0x4D7BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7BB4u;
            // 0x4d7bb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7BBCu; }
        if (ctx->pc != 0x4D7BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7BBCu; }
        if (ctx->pc != 0x4D7BBCu) { return; }
    }
    ctx->pc = 0x4D7BBCu;
label_4d7bbc:
    // 0x4d7bbc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4d7bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x4d7bc0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4d7bc0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4d7bc4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4D7BC4u;
    {
        const bool branch_taken_0x4d7bc4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4d7bc4) {
            ctx->pc = 0x4D7BC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7BC4u;
            // 0x4d7bc8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D7BD8u;
            goto label_4d7bd8;
        }
    }
    ctx->pc = 0x4D7BCCu;
    // 0x4d7bcc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4D7BCCu;
    SET_GPR_U32(ctx, 31, 0x4D7BD4u);
    ctx->pc = 0x4D7BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7BCCu;
            // 0x4d7bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7BD4u; }
        if (ctx->pc != 0x4D7BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D7BD4u; }
        if (ctx->pc != 0x4D7BD4u) { return; }
    }
    ctx->pc = 0x4D7BD4u;
label_4d7bd4:
    // 0x4d7bd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4d7bd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d7bd8:
    // 0x4d7bd8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d7bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d7bdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d7bdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d7be0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d7be0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d7be4: 0x3e00008  jr          $ra
    ctx->pc = 0x4D7BE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D7BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7BE4u;
            // 0x4d7be8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D7BECu;
    // 0x4d7bec: 0x0  nop
    ctx->pc = 0x4d7becu;
    // NOP
}
