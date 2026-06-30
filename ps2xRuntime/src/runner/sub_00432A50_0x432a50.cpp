#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00432A50
// Address: 0x432a50 - 0x432b90
void sub_00432A50_0x432a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00432A50_0x432a50");
#endif

    switch (ctx->pc) {
        case 0x432ae4u: goto label_432ae4;
        case 0x432af0u: goto label_432af0;
        case 0x432b00u: goto label_432b00;
        case 0x432b58u: goto label_432b58;
        case 0x432b70u: goto label_432b70;
        default: break;
    }

    ctx->pc = 0x432a50u;

    // 0x432a50: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x432a50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x432a54: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x432a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x432a58: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x432a58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432a5c: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x432a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x432a60: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x432a60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x432a64: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x432a64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x432a68: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x432a68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x432a6c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x432a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x432a70: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x432a70u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x432a74: 0xa0850010  sb          $a1, 0x10($a0)
    ctx->pc = 0x432a74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 5));
    // 0x432a78: 0x3e00008  jr          $ra
    ctx->pc = 0x432A78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x432A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x432A78u;
            // 0x432a7c: 0xac830014  sw          $v1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x432A80u;
    // 0x432a80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x432a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x432a84: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x432a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x432a88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x432a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x432a8c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x432a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x432a90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x432a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x432a94: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x432a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x432a98: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x432a98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432a9c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x432a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x432aa0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x432aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x432aa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x432aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x432aa8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x432aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x432aac: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x432aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x432ab0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x432ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x432ab4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x432ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x432ab8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x432ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x432abc: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x432abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x432ac0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x432ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x432ac4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x432ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x432ac8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x432ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
    // 0x432acc: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x432accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x432ad0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x432ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x432ad4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x432ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x432ad8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x432ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x432adc: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x432ADCu;
    SET_GPR_U32(ctx, 31, 0x432AE4u);
    ctx->pc = 0x432AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x432ADCu;
            // 0x432ae0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432AE4u; }
        if (ctx->pc != 0x432AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432AE4u; }
        if (ctx->pc != 0x432AE4u) { return; }
    }
    ctx->pc = 0x432AE4u;
label_432ae4:
    // 0x432ae4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x432ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x432ae8: 0xc0d879c  jal         func_361E70
    ctx->pc = 0x432AE8u;
    SET_GPR_U32(ctx, 31, 0x432AF0u);
    ctx->pc = 0x432AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x432AE8u;
            // 0x432aec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432AF0u; }
        if (ctx->pc != 0x432AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432AF0u; }
        if (ctx->pc != 0x432AF0u) { return; }
    }
    ctx->pc = 0x432AF0u;
label_432af0:
    // 0x432af0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x432af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x432af4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x432af4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x432af8: 0x3e00008  jr          $ra
    ctx->pc = 0x432AF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x432AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x432AF8u;
            // 0x432afc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x432B00u;
label_432b00:
    // 0x432b00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x432b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x432b04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x432b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x432b08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x432b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x432b0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x432b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x432b10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x432b10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432b14: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x432B14u;
    {
        const bool branch_taken_0x432b14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x432B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x432B14u;
            // 0x432b18: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432b14) {
            ctx->pc = 0x432B70u;
            goto label_432b70;
        }
    }
    ctx->pc = 0x432B1Cu;
    // 0x432b1c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x432b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x432b20: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x432b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x432b24: 0x2463c9b0  addiu       $v1, $v1, -0x3650
    ctx->pc = 0x432b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953392));
    // 0x432b28: 0x2442c9e8  addiu       $v0, $v0, -0x3618
    ctx->pc = 0x432b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953448));
    // 0x432b2c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x432b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x432b30: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x432B30u;
    {
        const bool branch_taken_0x432b30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x432B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x432B30u;
            // 0x432b34: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432b30) {
            ctx->pc = 0x432B58u;
            goto label_432b58;
        }
    }
    ctx->pc = 0x432B38u;
    // 0x432b38: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x432b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x432b3c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x432b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x432b40: 0x2463cb00  addiu       $v1, $v1, -0x3500
    ctx->pc = 0x432b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953728));
    // 0x432b44: 0x2442cb38  addiu       $v0, $v0, -0x34C8
    ctx->pc = 0x432b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953784));
    // 0x432b48: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x432b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x432b4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x432b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432b50: 0xc10cae4  jal         func_432B90
    ctx->pc = 0x432B50u;
    SET_GPR_U32(ctx, 31, 0x432B58u);
    ctx->pc = 0x432B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x432B50u;
            // 0x432b54: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x432B90u;
    if (runtime->hasFunction(0x432B90u)) {
        auto targetFn = runtime->lookupFunction(0x432B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432B58u; }
        if (ctx->pc != 0x432B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00432B90_0x432b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432B58u; }
        if (ctx->pc != 0x432B58u) { return; }
    }
    ctx->pc = 0x432B58u;
label_432b58:
    // 0x432b58: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x432b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x432b5c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x432b5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x432b60: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x432B60u;
    {
        const bool branch_taken_0x432b60 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x432b60) {
            ctx->pc = 0x432B64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x432B60u;
            // 0x432b64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x432B74u;
            goto label_432b74;
        }
    }
    ctx->pc = 0x432B68u;
    // 0x432b68: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x432B68u;
    SET_GPR_U32(ctx, 31, 0x432B70u);
    ctx->pc = 0x432B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x432B68u;
            // 0x432b6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432B70u; }
        if (ctx->pc != 0x432B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432B70u; }
        if (ctx->pc != 0x432B70u) { return; }
    }
    ctx->pc = 0x432B70u;
label_432b70:
    // 0x432b70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x432b70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_432b74:
    // 0x432b74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x432b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x432b78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x432b78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x432b7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x432b7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x432b80: 0x3e00008  jr          $ra
    ctx->pc = 0x432B80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x432B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x432B80u;
            // 0x432b84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x432B88u;
    // 0x432b88: 0x0  nop
    ctx->pc = 0x432b88u;
    // NOP
    // 0x432b8c: 0x0  nop
    ctx->pc = 0x432b8cu;
    // NOP
}
