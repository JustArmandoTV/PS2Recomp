#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E6B90
// Address: 0x3e6b90 - 0x3e6d70
void sub_003E6B90_0x3e6b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E6B90_0x3e6b90");
#endif

    switch (ctx->pc) {
        case 0x3e6c40u: goto label_3e6c40;
        case 0x3e6cccu: goto label_3e6ccc;
        case 0x3e6ce0u: goto label_3e6ce0;
        case 0x3e6d38u: goto label_3e6d38;
        case 0x3e6d50u: goto label_3e6d50;
        default: break;
    }

    ctx->pc = 0x3e6b90u;

    // 0x3e6b90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e6b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e6b94: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3e6b94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3e6b98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e6b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e6b9c: 0x24639c00  addiu       $v1, $v1, -0x6400
    ctx->pc = 0x3e6b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941696));
    // 0x3e6ba0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e6ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e6ba4: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x3e6ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3e6ba8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3e6ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x3e6bac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e6bacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6bb0: 0xa4800004  sh          $zero, 0x4($a0)
    ctx->pc = 0x3e6bb0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x3e6bb4: 0xa4850006  sh          $a1, 0x6($a0)
    ctx->pc = 0x3e6bb4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 5));
    // 0x3e6bb8: 0xac820084  sw          $v0, 0x84($a0)
    ctx->pc = 0x3e6bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
    // 0x3e6bbc: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x3e6bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x3e6bc0: 0xa487000c  sh          $a3, 0xC($a0)
    ctx->pc = 0x3e6bc0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 7));
    // 0x3e6bc4: 0xa488000e  sh          $t0, 0xE($a0)
    ctx->pc = 0x3e6bc4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 8));
    // 0x3e6bc8: 0xe48c0010  swc1        $f12, 0x10($a0)
    ctx->pc = 0x3e6bc8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x3e6bcc: 0xe48d0014  swc1        $f13, 0x14($a0)
    ctx->pc = 0x3e6bccu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x3e6bd0: 0xe48e0018  swc1        $f14, 0x18($a0)
    ctx->pc = 0x3e6bd0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x3e6bd4: 0xe48f001c  swc1        $f15, 0x1C($a0)
    ctx->pc = 0x3e6bd4u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x3e6bd8: 0xe4900020  swc1        $f16, 0x20($a0)
    ctx->pc = 0x3e6bd8u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x3e6bdc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3e6bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3e6be0: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x3e6be0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x3e6be4: 0x9482000c  lhu         $v0, 0xC($a0)
    ctx->pc = 0x3e6be4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3e6be8: 0xa4820028  sh          $v0, 0x28($a0)
    ctx->pc = 0x3e6be8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e6bec: 0x9482000e  lhu         $v0, 0xE($a0)
    ctx->pc = 0x3e6becu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x3e6bf0: 0xa482002a  sh          $v0, 0x2A($a0)
    ctx->pc = 0x3e6bf0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e6bf4: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x3e6bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e6bf8: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x3e6bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x3e6bfc: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x3e6bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e6c00: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x3e6c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x3e6c04: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x3e6c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e6c08: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x3e6c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e6c0c: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x3e6c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e6c10: 0xe4820034  swc1        $f2, 0x34($a0)
    ctx->pc = 0x3e6c10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x3e6c14: 0xe4810038  swc1        $f1, 0x38($a0)
    ctx->pc = 0x3e6c14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x3e6c18: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x3e6c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x3e6c1c: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x3e6c1cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3e6c20: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3e6c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x3e6c24: 0x11200004  beqz        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E6C24u;
    {
        const bool branch_taken_0x3e6c24 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6C24u;
            // 0x3e6c28: 0xa4820004  sh          $v0, 0x4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6c24) {
            ctx->pc = 0x3E6C38u;
            goto label_3e6c38;
        }
    }
    ctx->pc = 0x3E6C2Cu;
    // 0x3e6c2c: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x3e6c2cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3e6c30: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x3e6c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x3e6c34: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x3e6c34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
label_3e6c38:
    // 0x3e6c38: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x3E6C38u;
    SET_GPR_U32(ctx, 31, 0x3E6C40u);
    ctx->pc = 0x3E6C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6C38u;
            // 0x3e6c3c: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6C40u; }
        if (ctx->pc != 0x3E6C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6C40u; }
        if (ctx->pc != 0x3E6C40u) { return; }
    }
    ctx->pc = 0x3E6C40u;
label_3e6c40:
    // 0x3e6c40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3e6c40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6c44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e6c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e6c48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e6c48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e6c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E6C4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E6C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6C4Cu;
            // 0x3e6c50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E6C54u;
    // 0x3e6c54: 0x0  nop
    ctx->pc = 0x3e6c54u;
    // NOP
    // 0x3e6c58: 0x0  nop
    ctx->pc = 0x3e6c58u;
    // NOP
    // 0x3e6c5c: 0x0  nop
    ctx->pc = 0x3e6c5cu;
    // NOP
    // 0x3e6c60: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x3e6c60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x3e6c64: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x3e6c64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x3e6c68: 0x24846ef8  addiu       $a0, $a0, 0x6EF8
    ctx->pc = 0x3e6c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28408));
    // 0x3e6c6c: 0x24a55860  addiu       $a1, $a1, 0x5860
    ctx->pc = 0x3e6c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22624));
    // 0x3e6c70: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3e6c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3e6c74: 0x80407e8  j           func_101FA0
    ctx->pc = 0x3E6C74u;
    ctx->pc = 0x3E6C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6C74u;
            // 0x3e6c78: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00101FA0_0x101fa0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3E6C7Cu;
    // 0x3e6c7c: 0x0  nop
    ctx->pc = 0x3e6c7cu;
    // NOP
    // 0x3e6c80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e6c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e6c84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e6c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e6c88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e6c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e6c8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e6c8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6c90: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3E6C90u;
    {
        const bool branch_taken_0x3e6c90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e6c90) {
            ctx->pc = 0x3E6C94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6C90u;
            // 0x3e6c94: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E6CD0u;
            goto label_3e6cd0;
        }
    }
    ctx->pc = 0x3E6C98u;
    // 0x3e6c98: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3e6c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3e6c9c: 0x24429c10  addiu       $v0, $v0, -0x63F0
    ctx->pc = 0x3e6c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941712));
    // 0x3e6ca0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E6CA0u;
    {
        const bool branch_taken_0x3e6ca0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6CA0u;
            // 0x3e6ca4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6ca0) {
            ctx->pc = 0x3E6CB4u;
            goto label_3e6cb4;
        }
    }
    ctx->pc = 0x3E6CA8u;
    // 0x3e6ca8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3e6ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x3e6cac: 0x2442fcd0  addiu       $v0, $v0, -0x330
    ctx->pc = 0x3e6cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966480));
    // 0x3e6cb0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3e6cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3e6cb4:
    // 0x3e6cb4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x3e6cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x3e6cb8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3e6cb8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3e6cbc: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E6CBCu;
    {
        const bool branch_taken_0x3e6cbc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3e6cbc) {
            ctx->pc = 0x3E6CCCu;
            goto label_3e6ccc;
        }
    }
    ctx->pc = 0x3E6CC4u;
    // 0x3e6cc4: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3E6CC4u;
    SET_GPR_U32(ctx, 31, 0x3E6CCCu);
    ctx->pc = 0x3E6CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6CC4u;
            // 0x3e6cc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6CCCu; }
        if (ctx->pc != 0x3E6CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6CCCu; }
        if (ctx->pc != 0x3E6CCCu) { return; }
    }
    ctx->pc = 0x3E6CCCu;
label_3e6ccc:
    // 0x3e6ccc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3e6cccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e6cd0:
    // 0x3e6cd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e6cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e6cd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e6cd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e6cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E6CD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E6CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6CD8u;
            // 0x3e6cdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E6CE0u;
label_3e6ce0:
    // 0x3e6ce0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e6ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3e6ce4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3e6ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3e6ce8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e6ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3e6cec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e6cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e6cf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e6cf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6cf4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3E6CF4u;
    {
        const bool branch_taken_0x3e6cf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6CF4u;
            // 0x3e6cf8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6cf4) {
            ctx->pc = 0x3E6D50u;
            goto label_3e6d50;
        }
    }
    ctx->pc = 0x3E6CFCu;
    // 0x3e6cfc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3e6cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3e6d00: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3e6d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3e6d04: 0x24639c30  addiu       $v1, $v1, -0x63D0
    ctx->pc = 0x3e6d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941744));
    // 0x3e6d08: 0x24429c68  addiu       $v0, $v0, -0x6398
    ctx->pc = 0x3e6d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941800));
    // 0x3e6d0c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3e6d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3e6d10: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E6D10u;
    {
        const bool branch_taken_0x3e6d10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6D10u;
            // 0x3e6d14: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6d10) {
            ctx->pc = 0x3E6D38u;
            goto label_3e6d38;
        }
    }
    ctx->pc = 0x3E6D18u;
    // 0x3e6d18: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3e6d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3e6d1c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3e6d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3e6d20: 0x24639d90  addiu       $v1, $v1, -0x6270
    ctx->pc = 0x3e6d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942096));
    // 0x3e6d24: 0x24429dc8  addiu       $v0, $v0, -0x6238
    ctx->pc = 0x3e6d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942152));
    // 0x3e6d28: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3e6d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3e6d2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e6d2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6d30: 0xc0f9b5c  jal         func_3E6D70
    ctx->pc = 0x3E6D30u;
    SET_GPR_U32(ctx, 31, 0x3E6D38u);
    ctx->pc = 0x3E6D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6D30u;
            // 0x3e6d34: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E6D70u;
    if (runtime->hasFunction(0x3E6D70u)) {
        auto targetFn = runtime->lookupFunction(0x3E6D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6D38u; }
        if (ctx->pc != 0x3E6D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E6D70_0x3e6d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6D38u; }
        if (ctx->pc != 0x3E6D38u) { return; }
    }
    ctx->pc = 0x3E6D38u;
label_3e6d38:
    // 0x3e6d38: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x3e6d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x3e6d3c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3e6d3cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3e6d40: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E6D40u;
    {
        const bool branch_taken_0x3e6d40 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3e6d40) {
            ctx->pc = 0x3E6D44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6D40u;
            // 0x3e6d44: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E6D54u;
            goto label_3e6d54;
        }
    }
    ctx->pc = 0x3E6D48u;
    // 0x3e6d48: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3E6D48u;
    SET_GPR_U32(ctx, 31, 0x3E6D50u);
    ctx->pc = 0x3E6D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6D48u;
            // 0x3e6d4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6D50u; }
        if (ctx->pc != 0x3E6D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6D50u; }
        if (ctx->pc != 0x3E6D50u) { return; }
    }
    ctx->pc = 0x3E6D50u;
label_3e6d50:
    // 0x3e6d50: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3e6d50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e6d54:
    // 0x3e6d54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3e6d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e6d58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e6d58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e6d5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e6d5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e6d60: 0x3e00008  jr          $ra
    ctx->pc = 0x3E6D60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E6D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6D60u;
            // 0x3e6d64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E6D68u;
    // 0x3e6d68: 0x0  nop
    ctx->pc = 0x3e6d68u;
    // NOP
    // 0x3e6d6c: 0x0  nop
    ctx->pc = 0x3e6d6cu;
    // NOP
}
