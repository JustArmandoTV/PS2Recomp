#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B6BF0
// Address: 0x2b6bf0 - 0x2b6de0
void sub_002B6BF0_0x2b6bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6BF0_0x2b6bf0");
#endif

    switch (ctx->pc) {
        case 0x2b6c64u: goto label_2b6c64;
        case 0x2b6c70u: goto label_2b6c70;
        case 0x2b6c84u: goto label_2b6c84;
        case 0x2b6c98u: goto label_2b6c98;
        case 0x2b6ca0u: goto label_2b6ca0;
        case 0x2b6cf0u: goto label_2b6cf0;
        case 0x2b6d00u: goto label_2b6d00;
        case 0x2b6d0cu: goto label_2b6d0c;
        case 0x2b6d20u: goto label_2b6d20;
        case 0x2b6d48u: goto label_2b6d48;
        case 0x2b6d54u: goto label_2b6d54;
        case 0x2b6d98u: goto label_2b6d98;
        case 0x2b6da8u: goto label_2b6da8;
        case 0x2b6db8u: goto label_2b6db8;
        default: break;
    }

    ctx->pc = 0x2b6bf0u;

    // 0x2b6bf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b6bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b6bf4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2b6bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x2b6bf8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b6bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b6bfc: 0xc4408348  lwc1        $f0, -0x7CB8($v0)
    ctx->pc = 0x2b6bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294935368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6c00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b6c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b6c04: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2b6c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b6c08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b6c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b6c0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b6c0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6c10: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2b6c10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2b6c14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b6c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6c18: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2b6c18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2b6c1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b6c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6c20: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2b6c20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2b6c24: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2b6c24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2b6c28: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x2b6c28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x2b6c2c: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x2b6c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x2b6c30: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x2b6c30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x2b6c34: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x2b6c34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x2b6c38: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x2b6c38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x2b6c3c: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x2b6c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x2b6c40: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x2b6c40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x2b6c44: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x2b6c44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x2b6c48: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x2b6c48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x2b6c4c: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x2b6c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x2b6c50: 0xe4800048  swc1        $f0, 0x48($a0)
    ctx->pc = 0x2b6c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x2b6c54: 0xe480004c  swc1        $f0, 0x4C($a0)
    ctx->pc = 0x2b6c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
    // 0x2b6c58: 0xa0820050  sb          $v0, 0x50($a0)
    ctx->pc = 0x2b6c58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b6c5c: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x2B6C5Cu;
    SET_GPR_U32(ctx, 31, 0x2B6C64u);
    ctx->pc = 0x2B6C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6C5Cu;
            // 0x2b6c60: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6C64u; }
        if (ctx->pc != 0x2B6C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6C64u; }
        if (ctx->pc != 0x2B6C64u) { return; }
    }
    ctx->pc = 0x2B6C64u;
label_2b6c64:
    // 0x2b6c64: 0x240401d0  addiu       $a0, $zero, 0x1D0
    ctx->pc = 0x2b6c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    // 0x2b6c68: 0xc040180  jal         func_100600
    ctx->pc = 0x2B6C68u;
    SET_GPR_U32(ctx, 31, 0x2B6C70u);
    ctx->pc = 0x2B6C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6C68u;
            // 0x2b6c6c: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6C70u; }
        if (ctx->pc != 0x2B6C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6C70u; }
        if (ctx->pc != 0x2B6C70u) { return; }
    }
    ctx->pc = 0x2B6C70u;
label_2b6c70:
    // 0x2b6c70: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2B6C70u;
    {
        const bool branch_taken_0x2b6c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6C70u;
            // 0x2b6c74: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6c70) {
            ctx->pc = 0x2B6D00u;
            goto label_2b6d00;
        }
    }
    ctx->pc = 0x2B6C78u;
    // 0x2b6c78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6c7c: 0xc0adb88  jal         func_2B6E20
    ctx->pc = 0x2B6C7Cu;
    SET_GPR_U32(ctx, 31, 0x2B6C84u);
    ctx->pc = 0x2B6C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6C7Cu;
            // 0x2b6c80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6E20u;
    if (runtime->hasFunction(0x2B6E20u)) {
        auto targetFn = runtime->lookupFunction(0x2B6E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6C84u; }
        if (ctx->pc != 0x2B6C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6E20_0x2b6e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6C84u; }
        if (ctx->pc != 0x2B6C84u) { return; }
    }
    ctx->pc = 0x2B6C84u;
label_2b6c84:
    // 0x2b6c84: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b6c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2b6c88: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x2b6c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x2b6c8c: 0x244229f0  addiu       $v0, $v0, 0x29F0
    ctx->pc = 0x2b6c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
    // 0x2b6c90: 0xc0ada8c  jal         func_2B6A30
    ctx->pc = 0x2B6C90u;
    SET_GPR_U32(ctx, 31, 0x2B6C98u);
    ctx->pc = 0x2B6C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6C90u;
            // 0x2b6c94: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6A30u;
    if (runtime->hasFunction(0x2B6A30u)) {
        auto targetFn = runtime->lookupFunction(0x2B6A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6C98u; }
        if (ctx->pc != 0x2B6C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6A30_0x2b6a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6C98u; }
        if (ctx->pc != 0x2B6C98u) { return; }
    }
    ctx->pc = 0x2B6C98u;
label_2b6c98:
    // 0x2b6c98: 0xc0adb80  jal         func_2B6E00
    ctx->pc = 0x2B6C98u;
    SET_GPR_U32(ctx, 31, 0x2B6CA0u);
    ctx->pc = 0x2B6C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6C98u;
            // 0x2b6c9c: 0x260400d0  addiu       $a0, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6E00u;
    if (runtime->hasFunction(0x2B6E00u)) {
        auto targetFn = runtime->lookupFunction(0x2B6E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6CA0u; }
        if (ctx->pc != 0x2B6CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6E00_0x2b6e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6CA0u; }
        if (ctx->pc != 0x2B6CA0u) { return; }
    }
    ctx->pc = 0x2B6CA0u;
label_2b6ca0:
    // 0x2b6ca0: 0xae0001a0  sw          $zero, 0x1A0($s0)
    ctx->pc = 0x2b6ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 0));
    // 0x2b6ca4: 0x3c023f94  lui         $v0, 0x3F94
    ctx->pc = 0x2b6ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16276 << 16));
    // 0x2b6ca8: 0xae0001a4  sw          $zero, 0x1A4($s0)
    ctx->pc = 0x2b6ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 0));
    // 0x2b6cac: 0x344625ed  ori         $a2, $v0, 0x25ED
    ctx->pc = 0x2b6cacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9709);
    // 0x2b6cb0: 0xae0001a8  sw          $zero, 0x1A8($s0)
    ctx->pc = 0x2b6cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 0));
    // 0x2b6cb4: 0x3c023e88  lui         $v0, 0x3E88
    ctx->pc = 0x2b6cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16008 << 16));
    // 0x2b6cb8: 0xae0001ac  sw          $zero, 0x1AC($s0)
    ctx->pc = 0x2b6cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 0));
    // 0x2b6cbc: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2b6cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2b6cc0: 0xae0001b0  sw          $zero, 0x1B0($s0)
    ctx->pc = 0x2b6cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 0));
    // 0x2b6cc4: 0x3c0540a0  lui         $a1, 0x40A0
    ctx->pc = 0x2b6cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16544 << 16));
    // 0x2b6cc8: 0xae0001b4  sw          $zero, 0x1B4($s0)
    ctx->pc = 0x2b6cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 0));
    // 0x2b6ccc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2b6cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2b6cd0: 0xae0001b8  sw          $zero, 0x1B8($s0)
    ctx->pc = 0x2b6cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 0));
    // 0x2b6cd4: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x2b6cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2b6cd8: 0xa20001bc  sb          $zero, 0x1BC($s0)
    ctx->pc = 0x2b6cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 444), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b6cdc: 0xae0601c0  sw          $a2, 0x1C0($s0)
    ctx->pc = 0x2b6cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 6));
    // 0x2b6ce0: 0xae0501c4  sw          $a1, 0x1C4($s0)
    ctx->pc = 0x2b6ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 5));
    // 0x2b6ce4: 0xae0301c8  sw          $v1, 0x1C8($s0)
    ctx->pc = 0x2b6ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 3));
    // 0x2b6ce8: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x2B6CE8u;
    SET_GPR_U32(ctx, 31, 0x2B6CF0u);
    ctx->pc = 0x2B6CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6CE8u;
            // 0x2b6cec: 0xae0201cc  sw          $v0, 0x1CC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 460), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6CF0u; }
        if (ctx->pc != 0x2B6CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6CF0u; }
        if (ctx->pc != 0x2B6CF0u) { return; }
    }
    ctx->pc = 0x2B6CF0u;
label_2b6cf0:
    // 0x2b6cf0: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b6cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b6cf4: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x2b6cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x2b6cf8: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B6CF8u;
    SET_GPR_U32(ctx, 31, 0x2B6D00u);
    ctx->pc = 0x2B6CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6CF8u;
            // 0x2b6cfc: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6D00u; }
        if (ctx->pc != 0x2B6D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6D00u; }
        if (ctx->pc != 0x2B6D00u) { return; }
    }
    ctx->pc = 0x2B6D00u;
label_2b6d00:
    // 0x2b6d00: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x2b6d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x2b6d04: 0xc040180  jal         func_100600
    ctx->pc = 0x2B6D04u;
    SET_GPR_U32(ctx, 31, 0x2B6D0Cu);
    ctx->pc = 0x2B6D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6D04u;
            // 0x2b6d08: 0xae30000c  sw          $s0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6D0Cu; }
        if (ctx->pc != 0x2B6D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6D0Cu; }
        if (ctx->pc != 0x2B6D0Cu) { return; }
    }
    ctx->pc = 0x2B6D0Cu;
label_2b6d0c:
    // 0x2b6d0c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2B6D0Cu;
    {
        const bool branch_taken_0x2b6d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6D0Cu;
            // 0x2b6d10: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6d0c) {
            ctx->pc = 0x2B6DB8u;
            goto label_2b6db8;
        }
    }
    ctx->pc = 0x2B6D14u;
    // 0x2b6d14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6d18: 0xc0adb88  jal         func_2B6E20
    ctx->pc = 0x2B6D18u;
    SET_GPR_U32(ctx, 31, 0x2B6D20u);
    ctx->pc = 0x2B6D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6D18u;
            // 0x2b6d1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6E20u;
    if (runtime->hasFunction(0x2B6E20u)) {
        auto targetFn = runtime->lookupFunction(0x2B6E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6D20u; }
        if (ctx->pc != 0x2B6D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6E20_0x2b6e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6D20u; }
        if (ctx->pc != 0x2B6D20u) { return; }
    }
    ctx->pc = 0x2B6D20u;
label_2b6d20:
    // 0x2b6d20: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b6d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2b6d24: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x2b6d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x2b6d28: 0x244229d0  addiu       $v0, $v0, 0x29D0
    ctx->pc = 0x2b6d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10704));
    // 0x2b6d2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b6d2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6d30: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2b6d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2b6d34: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x2b6d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x2b6d38: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x2b6d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x2b6d3c: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x2b6d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x2b6d40: 0xc0adb7c  jal         func_2B6DF0
    ctx->pc = 0x2B6D40u;
    SET_GPR_U32(ctx, 31, 0x2B6D48u);
    ctx->pc = 0x2B6D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6D40u;
            // 0x2b6d44: 0xae00004c  sw          $zero, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6DF0u;
    if (runtime->hasFunction(0x2B6DF0u)) {
        auto targetFn = runtime->lookupFunction(0x2B6DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6D48u; }
        if (ctx->pc != 0x2B6D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6DF0_0x2b6df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6D48u; }
        if (ctx->pc != 0x2B6D48u) { return; }
    }
    ctx->pc = 0x2B6D48u;
label_2b6d48:
    // 0x2b6d48: 0x26040054  addiu       $a0, $s0, 0x54
    ctx->pc = 0x2b6d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x2b6d4c: 0xc0adb78  jal         func_2B6DE0
    ctx->pc = 0x2B6D4Cu;
    SET_GPR_U32(ctx, 31, 0x2B6D54u);
    ctx->pc = 0x2B6D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6D4Cu;
            // 0x2b6d50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6DE0u;
    if (runtime->hasFunction(0x2B6DE0u)) {
        auto targetFn = runtime->lookupFunction(0x2B6DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6D54u; }
        if (ctx->pc != 0x2B6D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6DE0_0x2b6de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6D54u; }
        if (ctx->pc != 0x2B6D54u) { return; }
    }
    ctx->pc = 0x2B6D54u;
label_2b6d54:
    // 0x2b6d54: 0xa2000058  sb          $zero, 0x58($s0)
    ctx->pc = 0x2b6d54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b6d58: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b6d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2b6d5c: 0xa2000059  sb          $zero, 0x59($s0)
    ctx->pc = 0x2b6d5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 89), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b6d60: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x2b6d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2b6d64: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x2b6d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x2b6d68: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x2b6d68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x2b6d6c: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x2b6d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x2b6d70: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x2b6d70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x2b6d74: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x2b6d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x2b6d78: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x2b6d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x2b6d7c: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x2b6d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x2b6d80: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x2b6d80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x2b6d84: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x2b6d84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x2b6d88: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x2b6d88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x2b6d8c: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x2b6d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x2b6d90: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2B6D90u;
    SET_GPR_U32(ctx, 31, 0x2B6D98u);
    ctx->pc = 0x2B6D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6D90u;
            // 0x2b6d94: 0xae020088  sw          $v0, 0x88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6D98u; }
        if (ctx->pc != 0x2B6D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6D98u; }
        if (ctx->pc != 0x2B6D98u) { return; }
    }
    ctx->pc = 0x2B6D98u;
label_2b6d98:
    // 0x2b6d98: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b6d98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b6d9c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x2b6d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2b6da0: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B6DA0u;
    SET_GPR_U32(ctx, 31, 0x2B6DA8u);
    ctx->pc = 0x2B6DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6DA0u;
            // 0x2b6da4: 0x24a518d0  addiu       $a1, $a1, 0x18D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6DA8u; }
        if (ctx->pc != 0x2B6DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6DA8u; }
        if (ctx->pc != 0x2B6DA8u) { return; }
    }
    ctx->pc = 0x2B6DA8u;
label_2b6da8:
    // 0x2b6da8: 0x260400a4  addiu       $a0, $s0, 0xA4
    ctx->pc = 0x2b6da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 164));
    // 0x2b6dac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b6dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6db0: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x2B6DB0u;
    SET_GPR_U32(ctx, 31, 0x2B6DB8u);
    ctx->pc = 0x2B6DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6DB0u;
            // 0x2b6db4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6DB8u; }
        if (ctx->pc != 0x2B6DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6DB8u; }
        if (ctx->pc != 0x2B6DB8u) { return; }
    }
    ctx->pc = 0x2B6DB8u;
label_2b6db8:
    // 0x2b6db8: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x2b6db8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
    // 0x2b6dbc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2b6dbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6dc0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b6dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b6dc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b6dc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6dc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b6dc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6DCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6DCCu;
            // 0x2b6dd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B6DD4u;
    // 0x2b6dd4: 0x0  nop
    ctx->pc = 0x2b6dd4u;
    // NOP
    // 0x2b6dd8: 0x0  nop
    ctx->pc = 0x2b6dd8u;
    // NOP
    // 0x2b6ddc: 0x0  nop
    ctx->pc = 0x2b6ddcu;
    // NOP
}
