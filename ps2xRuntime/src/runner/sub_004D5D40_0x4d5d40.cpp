#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D5D40
// Address: 0x4d5d40 - 0x4d5ee0
void sub_004D5D40_0x4d5d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D5D40_0x4d5d40");
#endif

    switch (ctx->pc) {
        case 0x4d5d5cu: goto label_4d5d5c;
        case 0x4d5d7cu: goto label_4d5d7c;
        case 0x4d5dd4u: goto label_4d5dd4;
        case 0x4d5df0u: goto label_4d5df0;
        case 0x4d5e10u: goto label_4d5e10;
        case 0x4d5e70u: goto label_4d5e70;
        case 0x4d5e7cu: goto label_4d5e7c;
        case 0x4d5e88u: goto label_4d5e88;
        case 0x4d5e94u: goto label_4d5e94;
        case 0x4d5ea0u: goto label_4d5ea0;
        case 0x4d5eacu: goto label_4d5eac;
        case 0x4d5ec4u: goto label_4d5ec4;
        default: break;
    }

    ctx->pc = 0x4d5d40u;

    // 0x4d5d40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d5d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4d5d44: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4d5d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4d5d48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d5d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4d5d4c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x4d5d4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x4d5d50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d5d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4d5d54: 0xc1357f0  jal         func_4D5FC0
    ctx->pc = 0x4D5D54u;
    SET_GPR_U32(ctx, 31, 0x4D5D5Cu);
    ctx->pc = 0x4D5D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5D54u;
            // 0x4d5d58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D5FC0u;
    if (runtime->hasFunction(0x4D5FC0u)) {
        auto targetFn = runtime->lookupFunction(0x4D5FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5D5Cu; }
        if (ctx->pc != 0x4D5D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D5FC0_0x4d5fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5D5Cu; }
        if (ctx->pc != 0x4D5D5Cu) { return; }
    }
    ctx->pc = 0x4D5D5Cu;
label_4d5d5c:
    // 0x4d5d5c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d5d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4d5d60: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d5d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4d5d64: 0x24632660  addiu       $v1, $v1, 0x2660
    ctx->pc = 0x4d5d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9824));
    // 0x4d5d68: 0x24422698  addiu       $v0, $v0, 0x2698
    ctx->pc = 0x4d5d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9880));
    // 0x4d5d6c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d5d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d5d70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d5d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5d74: 0xc1357ec  jal         func_4D5FB0
    ctx->pc = 0x4D5D74u;
    SET_GPR_U32(ctx, 31, 0x4D5D7Cu);
    ctx->pc = 0x4D5D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5D74u;
            // 0x4d5d78: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D5FB0u;
    if (runtime->hasFunction(0x4D5FB0u)) {
        auto targetFn = runtime->lookupFunction(0x4D5FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5D7Cu; }
        if (ctx->pc != 0x4D5D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D5FB0_0x4d5fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5D7Cu; }
        if (ctx->pc != 0x4D5D7Cu) { return; }
    }
    ctx->pc = 0x4D5D7Cu;
label_4d5d7c:
    // 0x4d5d7c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4d5d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x4d5d80: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4d5d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x4d5d84: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d5d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4d5d88: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4d5d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4d5d8c: 0x244225b0  addiu       $v0, $v0, 0x25B0
    ctx->pc = 0x4d5d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9648));
    // 0x4d5d90: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4d5d90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x4d5d94: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4d5d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4d5d98: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d5d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4d5d9c: 0x244225e8  addiu       $v0, $v0, 0x25E8
    ctx->pc = 0x4d5d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9704));
    // 0x4d5da0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4d5da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4d5da4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4d5da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4d5da8: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x4d5da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x4d5dac: 0xc4407df0  lwc1        $f0, 0x7DF0($v0)
    ctx->pc = 0x4d5dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d5db0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4d5db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4d5db4: 0xc4417df4  lwc1        $f1, 0x7DF4($v0)
    ctx->pc = 0x4d5db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d5db8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4d5db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x4d5dbc: 0xc4607df8  lwc1        $f0, 0x7DF8($v1)
    ctx->pc = 0x4d5dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d5dc0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d5dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4d5dc4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4d5dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x4d5dc8: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x4d5dc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x4d5dcc: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x4D5DCCu;
    SET_GPR_U32(ctx, 31, 0x4D5DD4u);
    ctx->pc = 0x4D5DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5DCCu;
            // 0x4d5dd0: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5DD4u; }
        if (ctx->pc != 0x4D5DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5DD4u; }
        if (ctx->pc != 0x4D5DD4u) { return; }
    }
    ctx->pc = 0x4D5DD4u;
label_4d5dd4:
    // 0x4d5dd4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4d5dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4d5dd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4d5dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5ddc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D5DDCu;
    {
        const bool branch_taken_0x4d5ddc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D5DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5DDCu;
            // 0x4d5de0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d5ddc) {
            ctx->pc = 0x4D5DF4u;
            goto label_4d5df4;
        }
    }
    ctx->pc = 0x4D5DE4u;
    // 0x4d5de4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4d5de4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4d5de8: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x4D5DE8u;
    SET_GPR_U32(ctx, 31, 0x4D5DF0u);
    ctx->pc = 0x4D5DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5DE8u;
            // 0x4d5dec: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5DF0u; }
        if (ctx->pc != 0x4D5DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5DF0u; }
        if (ctx->pc != 0x4D5DF0u) { return; }
    }
    ctx->pc = 0x4D5DF0u;
label_4d5df0:
    // 0x4d5df0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4d5df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d5df4:
    // 0x4d5df4: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x4d5df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x4d5df8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4d5df8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5dfc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d5dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d5e00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d5e00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d5e04: 0x3e00008  jr          $ra
    ctx->pc = 0x4D5E04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D5E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5E04u;
            // 0x4d5e08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D5E0Cu;
    // 0x4d5e0c: 0x0  nop
    ctx->pc = 0x4d5e0cu;
    // NOP
label_4d5e10:
    // 0x4d5e10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d5e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4d5e14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d5e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4d5e18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d5e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4d5e1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d5e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4d5e20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d5e20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5e24: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x4D5E24u;
    {
        const bool branch_taken_0x4d5e24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D5E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5E24u;
            // 0x4d5e28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d5e24) {
            ctx->pc = 0x4D5EC4u;
            goto label_4d5ec4;
        }
    }
    ctx->pc = 0x4D5E2Cu;
    // 0x4d5e2c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d5e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4d5e30: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d5e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4d5e34: 0x24632660  addiu       $v1, $v1, 0x2660
    ctx->pc = 0x4d5e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9824));
    // 0x4d5e38: 0x24422698  addiu       $v0, $v0, 0x2698
    ctx->pc = 0x4d5e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9880));
    // 0x4d5e3c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d5e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d5e40: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4D5E40u;
    {
        const bool branch_taken_0x4d5e40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D5E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5E40u;
            // 0x4d5e44: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d5e40) {
            ctx->pc = 0x4D5EACu;
            goto label_4d5eac;
        }
    }
    ctx->pc = 0x4D5E48u;
    // 0x4d5e48: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d5e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4d5e4c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d5e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4d5e50: 0x24632610  addiu       $v1, $v1, 0x2610
    ctx->pc = 0x4d5e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9744));
    // 0x4d5e54: 0x3c05004d  lui         $a1, 0x4D
    ctx->pc = 0x4d5e54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)77 << 16));
    // 0x4d5e58: 0x24422648  addiu       $v0, $v0, 0x2648
    ctx->pc = 0x4d5e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9800));
    // 0x4d5e5c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d5e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d5e60: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4d5e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4d5e64: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x4d5e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x4d5e68: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x4D5E68u;
    SET_GPR_U32(ctx, 31, 0x4D5E70u);
    ctx->pc = 0x4D5E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5E68u;
            // 0x4d5e6c: 0x24a55900  addiu       $a1, $a1, 0x5900 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5E70u; }
        if (ctx->pc != 0x4D5E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5E70u; }
        if (ctx->pc != 0x4D5E70u) { return; }
    }
    ctx->pc = 0x4D5E70u;
label_4d5e70:
    // 0x4d5e70: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4d5e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x4d5e74: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x4D5E74u;
    SET_GPR_U32(ctx, 31, 0x4D5E7Cu);
    ctx->pc = 0x4D5E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5E74u;
            // 0x4d5e78: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5E7Cu; }
        if (ctx->pc != 0x4D5E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5E7Cu; }
        if (ctx->pc != 0x4D5E7Cu) { return; }
    }
    ctx->pc = 0x4D5E7Cu;
label_4d5e7c:
    // 0x4d5e7c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x4d5e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x4d5e80: 0xc1357d0  jal         func_4D5F40
    ctx->pc = 0x4D5E80u;
    SET_GPR_U32(ctx, 31, 0x4D5E88u);
    ctx->pc = 0x4D5E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5E80u;
            // 0x4d5e84: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D5F40u;
    if (runtime->hasFunction(0x4D5F40u)) {
        auto targetFn = runtime->lookupFunction(0x4D5F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5E88u; }
        if (ctx->pc != 0x4D5E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D5F40_0x4d5f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5E88u; }
        if (ctx->pc != 0x4D5E88u) { return; }
    }
    ctx->pc = 0x4D5E88u;
label_4d5e88:
    // 0x4d5e88: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4d5e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x4d5e8c: 0xc1357d0  jal         func_4D5F40
    ctx->pc = 0x4D5E8Cu;
    SET_GPR_U32(ctx, 31, 0x4D5E94u);
    ctx->pc = 0x4D5E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5E8Cu;
            // 0x4d5e90: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D5F40u;
    if (runtime->hasFunction(0x4D5F40u)) {
        auto targetFn = runtime->lookupFunction(0x4D5F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5E94u; }
        if (ctx->pc != 0x4D5E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D5F40_0x4d5f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5E94u; }
        if (ctx->pc != 0x4D5E94u) { return; }
    }
    ctx->pc = 0x4D5E94u;
label_4d5e94:
    // 0x4d5e94: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x4d5e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x4d5e98: 0xc1357b8  jal         func_4D5EE0
    ctx->pc = 0x4D5E98u;
    SET_GPR_U32(ctx, 31, 0x4D5EA0u);
    ctx->pc = 0x4D5E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5E98u;
            // 0x4d5e9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D5EE0u;
    if (runtime->hasFunction(0x4D5EE0u)) {
        auto targetFn = runtime->lookupFunction(0x4D5EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5EA0u; }
        if (ctx->pc != 0x4D5EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D5EE0_0x4d5ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5EA0u; }
        if (ctx->pc != 0x4D5EA0u) { return; }
    }
    ctx->pc = 0x4D5EA0u;
label_4d5ea0:
    // 0x4d5ea0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d5ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5ea4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x4D5EA4u;
    SET_GPR_U32(ctx, 31, 0x4D5EACu);
    ctx->pc = 0x4D5EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5EA4u;
            // 0x4d5ea8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5EACu; }
        if (ctx->pc != 0x4D5EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5EACu; }
        if (ctx->pc != 0x4D5EACu) { return; }
    }
    ctx->pc = 0x4D5EACu;
label_4d5eac:
    // 0x4d5eac: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4d5eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x4d5eb0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4d5eb0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4d5eb4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4D5EB4u;
    {
        const bool branch_taken_0x4d5eb4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4d5eb4) {
            ctx->pc = 0x4D5EB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5EB4u;
            // 0x4d5eb8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D5EC8u;
            goto label_4d5ec8;
        }
    }
    ctx->pc = 0x4D5EBCu;
    // 0x4d5ebc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4D5EBCu;
    SET_GPR_U32(ctx, 31, 0x4D5EC4u);
    ctx->pc = 0x4D5EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5EBCu;
            // 0x4d5ec0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5EC4u; }
        if (ctx->pc != 0x4D5EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5EC4u; }
        if (ctx->pc != 0x4D5EC4u) { return; }
    }
    ctx->pc = 0x4D5EC4u;
label_4d5ec4:
    // 0x4d5ec4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4d5ec4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d5ec8:
    // 0x4d5ec8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d5ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d5ecc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d5eccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d5ed0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d5ed0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d5ed4: 0x3e00008  jr          $ra
    ctx->pc = 0x4D5ED4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D5ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5ED4u;
            // 0x4d5ed8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D5EDCu;
    // 0x4d5edc: 0x0  nop
    ctx->pc = 0x4d5edcu;
    // NOP
}
