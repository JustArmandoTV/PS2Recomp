#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D6AB0
// Address: 0x4d6ab0 - 0x4d6c50
void sub_004D6AB0_0x4d6ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D6AB0_0x4d6ab0");
#endif

    switch (ctx->pc) {
        case 0x4d6accu: goto label_4d6acc;
        case 0x4d6aecu: goto label_4d6aec;
        case 0x4d6b44u: goto label_4d6b44;
        case 0x4d6b64u: goto label_4d6b64;
        case 0x4d6b80u: goto label_4d6b80;
        case 0x4d6be0u: goto label_4d6be0;
        case 0x4d6becu: goto label_4d6bec;
        case 0x4d6bf8u: goto label_4d6bf8;
        case 0x4d6c04u: goto label_4d6c04;
        case 0x4d6c10u: goto label_4d6c10;
        case 0x4d6c1cu: goto label_4d6c1c;
        case 0x4d6c34u: goto label_4d6c34;
        default: break;
    }

    ctx->pc = 0x4d6ab0u;

    // 0x4d6ab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d6ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4d6ab4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4d6ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4d6ab8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d6ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4d6abc: 0x34468702  ori         $a2, $v0, 0x8702
    ctx->pc = 0x4d6abcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34562);
    // 0x4d6ac0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d6ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4d6ac4: 0xc135b4c  jal         func_4D6D30
    ctx->pc = 0x4D6AC4u;
    SET_GPR_U32(ctx, 31, 0x4D6ACCu);
    ctx->pc = 0x4D6AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6AC4u;
            // 0x4d6ac8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D6D30u;
    if (runtime->hasFunction(0x4D6D30u)) {
        auto targetFn = runtime->lookupFunction(0x4D6D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6ACCu; }
        if (ctx->pc != 0x4D6ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D6D30_0x4d6d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6ACCu; }
        if (ctx->pc != 0x4D6ACCu) { return; }
    }
    ctx->pc = 0x4D6ACCu;
label_4d6acc:
    // 0x4d6acc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d6accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4d6ad0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d6ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4d6ad4: 0x24632800  addiu       $v1, $v1, 0x2800
    ctx->pc = 0x4d6ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10240));
    // 0x4d6ad8: 0x24422838  addiu       $v0, $v0, 0x2838
    ctx->pc = 0x4d6ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10296));
    // 0x4d6adc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d6adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d6ae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d6ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6ae4: 0xc135b48  jal         func_4D6D20
    ctx->pc = 0x4D6AE4u;
    SET_GPR_U32(ctx, 31, 0x4D6AECu);
    ctx->pc = 0x4D6AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6AE4u;
            // 0x4d6ae8: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D6D20u;
    if (runtime->hasFunction(0x4D6D20u)) {
        auto targetFn = runtime->lookupFunction(0x4D6D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6AECu; }
        if (ctx->pc != 0x4D6AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D6D20_0x4d6d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6AECu; }
        if (ctx->pc != 0x4D6AECu) { return; }
    }
    ctx->pc = 0x4D6AECu;
label_4d6aec:
    // 0x4d6aec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4d6aecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x4d6af0: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4d6af0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x4d6af4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d6af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4d6af8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4d6af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4d6afc: 0x24422750  addiu       $v0, $v0, 0x2750
    ctx->pc = 0x4d6afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10064));
    // 0x4d6b00: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4d6b00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x4d6b04: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4d6b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4d6b08: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d6b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4d6b0c: 0x24422788  addiu       $v0, $v0, 0x2788
    ctx->pc = 0x4d6b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10120));
    // 0x4d6b10: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4d6b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4d6b14: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4d6b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4d6b18: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x4d6b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x4d6b1c: 0xc4407e28  lwc1        $f0, 0x7E28($v0)
    ctx->pc = 0x4d6b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d6b20: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4d6b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4d6b24: 0xc4417e2c  lwc1        $f1, 0x7E2C($v0)
    ctx->pc = 0x4d6b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d6b28: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4d6b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x4d6b2c: 0xc4607e30  lwc1        $f0, 0x7E30($v1)
    ctx->pc = 0x4d6b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d6b30: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d6b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4d6b34: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4d6b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x4d6b38: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x4d6b38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x4d6b3c: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x4D6B3Cu;
    SET_GPR_U32(ctx, 31, 0x4D6B44u);
    ctx->pc = 0x4D6B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6B3Cu;
            // 0x4d6b40: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6B44u; }
        if (ctx->pc != 0x4D6B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6B44u; }
        if (ctx->pc != 0x4D6B44u) { return; }
    }
    ctx->pc = 0x4D6B44u;
label_4d6b44:
    // 0x4d6b44: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4d6b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4d6b48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4d6b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6b4c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D6B4Cu;
    {
        const bool branch_taken_0x4d6b4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D6B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6B4Cu;
            // 0x4d6b50: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d6b4c) {
            ctx->pc = 0x4D6B68u;
            goto label_4d6b68;
        }
    }
    ctx->pc = 0x4D6B54u;
    // 0x4d6b54: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x4d6b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x4d6b58: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x4d6b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d6b5c: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x4D6B5Cu;
    SET_GPR_U32(ctx, 31, 0x4D6B64u);
    ctx->pc = 0x4D6B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6B5Cu;
            // 0x4d6b60: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6B64u; }
        if (ctx->pc != 0x4D6B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6B64u; }
        if (ctx->pc != 0x4D6B64u) { return; }
    }
    ctx->pc = 0x4D6B64u;
label_4d6b64:
    // 0x4d6b64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4d6b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d6b68:
    // 0x4d6b68: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x4d6b68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x4d6b6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4d6b6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6b70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d6b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d6b74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d6b74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d6b78: 0x3e00008  jr          $ra
    ctx->pc = 0x4D6B78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D6B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6B78u;
            // 0x4d6b7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D6B80u;
label_4d6b80:
    // 0x4d6b80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d6b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4d6b84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d6b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4d6b88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d6b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4d6b8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d6b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4d6b90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d6b90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6b94: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x4D6B94u;
    {
        const bool branch_taken_0x4d6b94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D6B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6B94u;
            // 0x4d6b98: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d6b94) {
            ctx->pc = 0x4D6C34u;
            goto label_4d6c34;
        }
    }
    ctx->pc = 0x4D6B9Cu;
    // 0x4d6b9c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d6b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4d6ba0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d6ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4d6ba4: 0x24632800  addiu       $v1, $v1, 0x2800
    ctx->pc = 0x4d6ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10240));
    // 0x4d6ba8: 0x24422838  addiu       $v0, $v0, 0x2838
    ctx->pc = 0x4d6ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10296));
    // 0x4d6bac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d6bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d6bb0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4D6BB0u;
    {
        const bool branch_taken_0x4d6bb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D6BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6BB0u;
            // 0x4d6bb4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d6bb0) {
            ctx->pc = 0x4D6C1Cu;
            goto label_4d6c1c;
        }
    }
    ctx->pc = 0x4D6BB8u;
    // 0x4d6bb8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d6bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4d6bbc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d6bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4d6bc0: 0x246327b0  addiu       $v1, $v1, 0x27B0
    ctx->pc = 0x4d6bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10160));
    // 0x4d6bc4: 0x3c05004d  lui         $a1, 0x4D
    ctx->pc = 0x4d6bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)77 << 16));
    // 0x4d6bc8: 0x244227e8  addiu       $v0, $v0, 0x27E8
    ctx->pc = 0x4d6bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10216));
    // 0x4d6bcc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d6bccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d6bd0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4d6bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4d6bd4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x4d6bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x4d6bd8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x4D6BD8u;
    SET_GPR_U32(ctx, 31, 0x4D6BE0u);
    ctx->pc = 0x4D6BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6BD8u;
            // 0x4d6bdc: 0x24a56670  addiu       $a1, $a1, 0x6670 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6BE0u; }
        if (ctx->pc != 0x4D6BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6BE0u; }
        if (ctx->pc != 0x4D6BE0u) { return; }
    }
    ctx->pc = 0x4D6BE0u;
label_4d6be0:
    // 0x4d6be0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4d6be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x4d6be4: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x4D6BE4u;
    SET_GPR_U32(ctx, 31, 0x4D6BECu);
    ctx->pc = 0x4D6BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6BE4u;
            // 0x4d6be8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6BECu; }
        if (ctx->pc != 0x4D6BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6BECu; }
        if (ctx->pc != 0x4D6BECu) { return; }
    }
    ctx->pc = 0x4D6BECu;
label_4d6bec:
    // 0x4d6bec: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x4d6becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x4d6bf0: 0xc135b2c  jal         func_4D6CB0
    ctx->pc = 0x4D6BF0u;
    SET_GPR_U32(ctx, 31, 0x4D6BF8u);
    ctx->pc = 0x4D6BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6BF0u;
            // 0x4d6bf4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D6CB0u;
    if (runtime->hasFunction(0x4D6CB0u)) {
        auto targetFn = runtime->lookupFunction(0x4D6CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6BF8u; }
        if (ctx->pc != 0x4D6BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D6CB0_0x4d6cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6BF8u; }
        if (ctx->pc != 0x4D6BF8u) { return; }
    }
    ctx->pc = 0x4D6BF8u;
label_4d6bf8:
    // 0x4d6bf8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4d6bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x4d6bfc: 0xc135b2c  jal         func_4D6CB0
    ctx->pc = 0x4D6BFCu;
    SET_GPR_U32(ctx, 31, 0x4D6C04u);
    ctx->pc = 0x4D6C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6BFCu;
            // 0x4d6c00: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D6CB0u;
    if (runtime->hasFunction(0x4D6CB0u)) {
        auto targetFn = runtime->lookupFunction(0x4D6CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6C04u; }
        if (ctx->pc != 0x4D6C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D6CB0_0x4d6cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6C04u; }
        if (ctx->pc != 0x4D6C04u) { return; }
    }
    ctx->pc = 0x4D6C04u;
label_4d6c04:
    // 0x4d6c04: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x4d6c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x4d6c08: 0xc135b14  jal         func_4D6C50
    ctx->pc = 0x4D6C08u;
    SET_GPR_U32(ctx, 31, 0x4D6C10u);
    ctx->pc = 0x4D6C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6C08u;
            // 0x4d6c0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D6C50u;
    if (runtime->hasFunction(0x4D6C50u)) {
        auto targetFn = runtime->lookupFunction(0x4D6C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6C10u; }
        if (ctx->pc != 0x4D6C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D6C50_0x4d6c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6C10u; }
        if (ctx->pc != 0x4D6C10u) { return; }
    }
    ctx->pc = 0x4D6C10u;
label_4d6c10:
    // 0x4d6c10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d6c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6c14: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x4D6C14u;
    SET_GPR_U32(ctx, 31, 0x4D6C1Cu);
    ctx->pc = 0x4D6C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6C14u;
            // 0x4d6c18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6C1Cu; }
        if (ctx->pc != 0x4D6C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6C1Cu; }
        if (ctx->pc != 0x4D6C1Cu) { return; }
    }
    ctx->pc = 0x4D6C1Cu;
label_4d6c1c:
    // 0x4d6c1c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4d6c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x4d6c20: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4d6c20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4d6c24: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4D6C24u;
    {
        const bool branch_taken_0x4d6c24 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4d6c24) {
            ctx->pc = 0x4D6C28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6C24u;
            // 0x4d6c28: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D6C38u;
            goto label_4d6c38;
        }
    }
    ctx->pc = 0x4D6C2Cu;
    // 0x4d6c2c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4D6C2Cu;
    SET_GPR_U32(ctx, 31, 0x4D6C34u);
    ctx->pc = 0x4D6C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6C2Cu;
            // 0x4d6c30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6C34u; }
        if (ctx->pc != 0x4D6C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D6C34u; }
        if (ctx->pc != 0x4D6C34u) { return; }
    }
    ctx->pc = 0x4D6C34u;
label_4d6c34:
    // 0x4d6c34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4d6c34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d6c38:
    // 0x4d6c38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d6c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d6c3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d6c3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d6c40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d6c40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d6c44: 0x3e00008  jr          $ra
    ctx->pc = 0x4D6C44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D6C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D6C44u;
            // 0x4d6c48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D6C4Cu;
    // 0x4d6c4c: 0x0  nop
    ctx->pc = 0x4d6c4cu;
    // NOP
}
