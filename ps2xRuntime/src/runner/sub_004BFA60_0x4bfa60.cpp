#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004BFA60
// Address: 0x4bfa60 - 0x4bfc00
void sub_004BFA60_0x4bfa60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BFA60_0x4bfa60");
#endif

    switch (ctx->pc) {
        case 0x4bfa7cu: goto label_4bfa7c;
        case 0x4bfa9cu: goto label_4bfa9c;
        case 0x4bfaf4u: goto label_4bfaf4;
        case 0x4bfb10u: goto label_4bfb10;
        case 0x4bfb30u: goto label_4bfb30;
        case 0x4bfb90u: goto label_4bfb90;
        case 0x4bfb9cu: goto label_4bfb9c;
        case 0x4bfba8u: goto label_4bfba8;
        case 0x4bfbb4u: goto label_4bfbb4;
        case 0x4bfbc0u: goto label_4bfbc0;
        case 0x4bfbccu: goto label_4bfbcc;
        case 0x4bfbe4u: goto label_4bfbe4;
        default: break;
    }

    ctx->pc = 0x4bfa60u;

    // 0x4bfa60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4bfa60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4bfa64: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4bfa64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4bfa68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4bfa68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4bfa6c: 0x34468a92  ori         $a2, $v0, 0x8A92
    ctx->pc = 0x4bfa6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35474);
    // 0x4bfa70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4bfa70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4bfa74: 0xc12ff38  jal         func_4BFCE0
    ctx->pc = 0x4BFA74u;
    SET_GPR_U32(ctx, 31, 0x4BFA7Cu);
    ctx->pc = 0x4BFA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFA74u;
            // 0x4bfa78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4BFCE0u;
    if (runtime->hasFunction(0x4BFCE0u)) {
        auto targetFn = runtime->lookupFunction(0x4BFCE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFA7Cu; }
        if (ctx->pc != 0x4BFA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004BFCE0_0x4bfce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFA7Cu; }
        if (ctx->pc != 0x4BFA7Cu) { return; }
    }
    ctx->pc = 0x4BFA7Cu;
label_4bfa7c:
    // 0x4bfa7c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4bfa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4bfa80: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4bfa80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4bfa84: 0x246311a0  addiu       $v1, $v1, 0x11A0
    ctx->pc = 0x4bfa84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4512));
    // 0x4bfa88: 0x244211d8  addiu       $v0, $v0, 0x11D8
    ctx->pc = 0x4bfa88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4568));
    // 0x4bfa8c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4bfa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4bfa90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bfa90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bfa94: 0xc12ff34  jal         func_4BFCD0
    ctx->pc = 0x4BFA94u;
    SET_GPR_U32(ctx, 31, 0x4BFA9Cu);
    ctx->pc = 0x4BFA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFA94u;
            // 0x4bfa98: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4BFCD0u;
    if (runtime->hasFunction(0x4BFCD0u)) {
        auto targetFn = runtime->lookupFunction(0x4BFCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFA9Cu; }
        if (ctx->pc != 0x4BFA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004BFCD0_0x4bfcd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFA9Cu; }
        if (ctx->pc != 0x4BFA9Cu) { return; }
    }
    ctx->pc = 0x4BFA9Cu;
label_4bfa9c:
    // 0x4bfa9c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4bfa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x4bfaa0: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4bfaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x4bfaa4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4bfaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4bfaa8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4bfaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4bfaac: 0x244210f0  addiu       $v0, $v0, 0x10F0
    ctx->pc = 0x4bfaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4336));
    // 0x4bfab0: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4bfab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x4bfab4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4bfab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4bfab8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4bfab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4bfabc: 0x24421128  addiu       $v0, $v0, 0x1128
    ctx->pc = 0x4bfabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4392));
    // 0x4bfac0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4bfac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4bfac4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4bfac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4bfac8: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x4bfac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x4bfacc: 0xc4409948  lwc1        $f0, -0x66B8($v0)
    ctx->pc = 0x4bfaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294941000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4bfad0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4bfad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4bfad4: 0xc441994c  lwc1        $f1, -0x66B4($v0)
    ctx->pc = 0x4bfad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294941004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4bfad8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4bfad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x4bfadc: 0xc4609950  lwc1        $f0, -0x66B0($v1)
    ctx->pc = 0x4bfadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294941008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4bfae0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4bfae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4bfae4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4bfae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x4bfae8: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x4bfae8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x4bfaec: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x4BFAECu;
    SET_GPR_U32(ctx, 31, 0x4BFAF4u);
    ctx->pc = 0x4BFAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFAECu;
            // 0x4bfaf0: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFAF4u; }
        if (ctx->pc != 0x4BFAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFAF4u; }
        if (ctx->pc != 0x4BFAF4u) { return; }
    }
    ctx->pc = 0x4BFAF4u;
label_4bfaf4:
    // 0x4bfaf4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4bfaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4bfaf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4bfaf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bfafc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4BFAFCu;
    {
        const bool branch_taken_0x4bfafc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BFB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFAFCu;
            // 0x4bfb00: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bfafc) {
            ctx->pc = 0x4BFB14u;
            goto label_4bfb14;
        }
    }
    ctx->pc = 0x4BFB04u;
    // 0x4bfb04: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4bfb04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4bfb08: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x4BFB08u;
    SET_GPR_U32(ctx, 31, 0x4BFB10u);
    ctx->pc = 0x4BFB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFB08u;
            // 0x4bfb0c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFB10u; }
        if (ctx->pc != 0x4BFB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFB10u; }
        if (ctx->pc != 0x4BFB10u) { return; }
    }
    ctx->pc = 0x4BFB10u;
label_4bfb10:
    // 0x4bfb10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4bfb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4bfb14:
    // 0x4bfb14: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x4bfb14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x4bfb18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4bfb18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bfb1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4bfb1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bfb20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4bfb20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bfb24: 0x3e00008  jr          $ra
    ctx->pc = 0x4BFB24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BFB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFB24u;
            // 0x4bfb28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BFB2Cu;
    // 0x4bfb2c: 0x0  nop
    ctx->pc = 0x4bfb2cu;
    // NOP
label_4bfb30:
    // 0x4bfb30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4bfb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4bfb34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4bfb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4bfb38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4bfb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4bfb3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4bfb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4bfb40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4bfb40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bfb44: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x4BFB44u;
    {
        const bool branch_taken_0x4bfb44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BFB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFB44u;
            // 0x4bfb48: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bfb44) {
            ctx->pc = 0x4BFBE4u;
            goto label_4bfbe4;
        }
    }
    ctx->pc = 0x4BFB4Cu;
    // 0x4bfb4c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4bfb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4bfb50: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4bfb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4bfb54: 0x246311a0  addiu       $v1, $v1, 0x11A0
    ctx->pc = 0x4bfb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4512));
    // 0x4bfb58: 0x244211d8  addiu       $v0, $v0, 0x11D8
    ctx->pc = 0x4bfb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4568));
    // 0x4bfb5c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4bfb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4bfb60: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4BFB60u;
    {
        const bool branch_taken_0x4bfb60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BFB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFB60u;
            // 0x4bfb64: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bfb60) {
            ctx->pc = 0x4BFBCCu;
            goto label_4bfbcc;
        }
    }
    ctx->pc = 0x4BFB68u;
    // 0x4bfb68: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4bfb68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4bfb6c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4bfb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4bfb70: 0x24631150  addiu       $v1, $v1, 0x1150
    ctx->pc = 0x4bfb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4432));
    // 0x4bfb74: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x4bfb74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x4bfb78: 0x24421188  addiu       $v0, $v0, 0x1188
    ctx->pc = 0x4bfb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4488));
    // 0x4bfb7c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4bfb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4bfb80: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4bfb80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4bfb84: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x4bfb84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x4bfb88: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x4BFB88u;
    SET_GPR_U32(ctx, 31, 0x4BFB90u);
    ctx->pc = 0x4BFB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFB88u;
            // 0x4bfb8c: 0x24a5f6b0  addiu       $a1, $a1, -0x950 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFB90u; }
        if (ctx->pc != 0x4BFB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFB90u; }
        if (ctx->pc != 0x4BFB90u) { return; }
    }
    ctx->pc = 0x4BFB90u;
label_4bfb90:
    // 0x4bfb90: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4bfb90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x4bfb94: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x4BFB94u;
    SET_GPR_U32(ctx, 31, 0x4BFB9Cu);
    ctx->pc = 0x4BFB98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFB94u;
            // 0x4bfb98: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFB9Cu; }
        if (ctx->pc != 0x4BFB9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFB9Cu; }
        if (ctx->pc != 0x4BFB9Cu) { return; }
    }
    ctx->pc = 0x4BFB9Cu;
label_4bfb9c:
    // 0x4bfb9c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x4bfb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x4bfba0: 0xc12ff18  jal         func_4BFC60
    ctx->pc = 0x4BFBA0u;
    SET_GPR_U32(ctx, 31, 0x4BFBA8u);
    ctx->pc = 0x4BFBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFBA0u;
            // 0x4bfba4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4BFC60u;
    if (runtime->hasFunction(0x4BFC60u)) {
        auto targetFn = runtime->lookupFunction(0x4BFC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFBA8u; }
        if (ctx->pc != 0x4BFBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004BFC60_0x4bfc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFBA8u; }
        if (ctx->pc != 0x4BFBA8u) { return; }
    }
    ctx->pc = 0x4BFBA8u;
label_4bfba8:
    // 0x4bfba8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4bfba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x4bfbac: 0xc12ff18  jal         func_4BFC60
    ctx->pc = 0x4BFBACu;
    SET_GPR_U32(ctx, 31, 0x4BFBB4u);
    ctx->pc = 0x4BFBB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFBACu;
            // 0x4bfbb0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4BFC60u;
    if (runtime->hasFunction(0x4BFC60u)) {
        auto targetFn = runtime->lookupFunction(0x4BFC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFBB4u; }
        if (ctx->pc != 0x4BFBB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004BFC60_0x4bfc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFBB4u; }
        if (ctx->pc != 0x4BFBB4u) { return; }
    }
    ctx->pc = 0x4BFBB4u;
label_4bfbb4:
    // 0x4bfbb4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x4bfbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x4bfbb8: 0xc12ff00  jal         func_4BFC00
    ctx->pc = 0x4BFBB8u;
    SET_GPR_U32(ctx, 31, 0x4BFBC0u);
    ctx->pc = 0x4BFBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFBB8u;
            // 0x4bfbbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4BFC00u;
    if (runtime->hasFunction(0x4BFC00u)) {
        auto targetFn = runtime->lookupFunction(0x4BFC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFBC0u; }
        if (ctx->pc != 0x4BFBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004BFC00_0x4bfc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFBC0u; }
        if (ctx->pc != 0x4BFBC0u) { return; }
    }
    ctx->pc = 0x4BFBC0u;
label_4bfbc0:
    // 0x4bfbc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bfbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bfbc4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x4BFBC4u;
    SET_GPR_U32(ctx, 31, 0x4BFBCCu);
    ctx->pc = 0x4BFBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFBC4u;
            // 0x4bfbc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFBCCu; }
        if (ctx->pc != 0x4BFBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFBCCu; }
        if (ctx->pc != 0x4BFBCCu) { return; }
    }
    ctx->pc = 0x4BFBCCu;
label_4bfbcc:
    // 0x4bfbcc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4bfbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x4bfbd0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4bfbd0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4bfbd4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4BFBD4u;
    {
        const bool branch_taken_0x4bfbd4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4bfbd4) {
            ctx->pc = 0x4BFBD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFBD4u;
            // 0x4bfbd8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BFBE8u;
            goto label_4bfbe8;
        }
    }
    ctx->pc = 0x4BFBDCu;
    // 0x4bfbdc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4BFBDCu;
    SET_GPR_U32(ctx, 31, 0x4BFBE4u);
    ctx->pc = 0x4BFBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFBDCu;
            // 0x4bfbe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFBE4u; }
        if (ctx->pc != 0x4BFBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFBE4u; }
        if (ctx->pc != 0x4BFBE4u) { return; }
    }
    ctx->pc = 0x4BFBE4u;
label_4bfbe4:
    // 0x4bfbe4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4bfbe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4bfbe8:
    // 0x4bfbe8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4bfbe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bfbec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4bfbecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bfbf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4bfbf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bfbf4: 0x3e00008  jr          $ra
    ctx->pc = 0x4BFBF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BFBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFBF4u;
            // 0x4bfbf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BFBFCu;
    // 0x4bfbfc: 0x0  nop
    ctx->pc = 0x4bfbfcu;
    // NOP
}
