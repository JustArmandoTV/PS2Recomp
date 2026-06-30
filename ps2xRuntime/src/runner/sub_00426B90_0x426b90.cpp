#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00426B90
// Address: 0x426b90 - 0x426d30
void sub_00426B90_0x426b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00426B90_0x426b90");
#endif

    switch (ctx->pc) {
        case 0x426bacu: goto label_426bac;
        case 0x426bccu: goto label_426bcc;
        case 0x426c24u: goto label_426c24;
        case 0x426c40u: goto label_426c40;
        case 0x426c60u: goto label_426c60;
        case 0x426cc0u: goto label_426cc0;
        case 0x426cccu: goto label_426ccc;
        case 0x426cd8u: goto label_426cd8;
        case 0x426ce4u: goto label_426ce4;
        case 0x426cf0u: goto label_426cf0;
        case 0x426cfcu: goto label_426cfc;
        case 0x426d14u: goto label_426d14;
        default: break;
    }

    ctx->pc = 0x426b90u;

    // 0x426b90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x426b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x426b94: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x426b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x426b98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x426b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x426b9c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x426b9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x426ba0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x426ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x426ba4: 0xc109b84  jal         func_426E10
    ctx->pc = 0x426BA4u;
    SET_GPR_U32(ctx, 31, 0x426BACu);
    ctx->pc = 0x426BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x426BA4u;
            // 0x426ba8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x426E10u;
    if (runtime->hasFunction(0x426E10u)) {
        auto targetFn = runtime->lookupFunction(0x426E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426BACu; }
        if (ctx->pc != 0x426BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00426E10_0x426e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426BACu; }
        if (ctx->pc != 0x426BACu) { return; }
    }
    ctx->pc = 0x426BACu;
label_426bac:
    // 0x426bac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x426bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x426bb0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x426bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x426bb4: 0x2463bf10  addiu       $v1, $v1, -0x40F0
    ctx->pc = 0x426bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950672));
    // 0x426bb8: 0x2442bf48  addiu       $v0, $v0, -0x40B8
    ctx->pc = 0x426bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950728));
    // 0x426bbc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x426bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x426bc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x426bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426bc4: 0xc109b80  jal         func_426E00
    ctx->pc = 0x426BC4u;
    SET_GPR_U32(ctx, 31, 0x426BCCu);
    ctx->pc = 0x426BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x426BC4u;
            // 0x426bc8: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x426E00u;
    if (runtime->hasFunction(0x426E00u)) {
        auto targetFn = runtime->lookupFunction(0x426E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426BCCu; }
        if (ctx->pc != 0x426BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00426E00_0x426e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426BCCu; }
        if (ctx->pc != 0x426BCCu) { return; }
    }
    ctx->pc = 0x426BCCu;
label_426bcc:
    // 0x426bcc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x426bccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x426bd0: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x426bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x426bd4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x426bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x426bd8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x426bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x426bdc: 0x2442be60  addiu       $v0, $v0, -0x41A0
    ctx->pc = 0x426bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950496));
    // 0x426be0: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x426be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x426be4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x426be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x426be8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x426be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x426bec: 0x2442be98  addiu       $v0, $v0, -0x4168
    ctx->pc = 0x426becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950552));
    // 0x426bf0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x426bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x426bf4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x426bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x426bf8: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x426bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x426bfc: 0xc440c838  lwc1        $f0, -0x37C8($v0)
    ctx->pc = 0x426bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x426c00: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x426c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x426c04: 0xc441c83c  lwc1        $f1, -0x37C4($v0)
    ctx->pc = 0x426c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x426c08: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x426c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x426c0c: 0xc460c840  lwc1        $f0, -0x37C0($v1)
    ctx->pc = 0x426c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294953024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x426c10: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x426c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x426c14: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x426c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x426c18: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x426c18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x426c1c: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x426C1Cu;
    SET_GPR_U32(ctx, 31, 0x426C24u);
    ctx->pc = 0x426C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x426C1Cu;
            // 0x426c20: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426C24u; }
        if (ctx->pc != 0x426C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426C24u; }
        if (ctx->pc != 0x426C24u) { return; }
    }
    ctx->pc = 0x426C24u;
label_426c24:
    // 0x426c24: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x426c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x426c28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x426c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426c2c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x426C2Cu;
    {
        const bool branch_taken_0x426c2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x426C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x426C2Cu;
            // 0x426c30: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426c2c) {
            ctx->pc = 0x426C44u;
            goto label_426c44;
        }
    }
    ctx->pc = 0x426C34u;
    // 0x426c34: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x426c34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x426c38: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x426C38u;
    SET_GPR_U32(ctx, 31, 0x426C40u);
    ctx->pc = 0x426C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x426C38u;
            // 0x426c3c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426C40u; }
        if (ctx->pc != 0x426C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426C40u; }
        if (ctx->pc != 0x426C40u) { return; }
    }
    ctx->pc = 0x426C40u;
label_426c40:
    // 0x426c40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x426c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_426c44:
    // 0x426c44: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x426c44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x426c48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x426c48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426c4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x426c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x426c50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x426c50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x426c54: 0x3e00008  jr          $ra
    ctx->pc = 0x426C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x426C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x426C54u;
            // 0x426c58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x426C5Cu;
    // 0x426c5c: 0x0  nop
    ctx->pc = 0x426c5cu;
    // NOP
label_426c60:
    // 0x426c60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x426c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x426c64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x426c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x426c68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x426c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x426c6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x426c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x426c70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x426c70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426c74: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x426C74u;
    {
        const bool branch_taken_0x426c74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x426C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x426C74u;
            // 0x426c78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426c74) {
            ctx->pc = 0x426D14u;
            goto label_426d14;
        }
    }
    ctx->pc = 0x426C7Cu;
    // 0x426c7c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x426c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x426c80: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x426c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x426c84: 0x2463bf10  addiu       $v1, $v1, -0x40F0
    ctx->pc = 0x426c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950672));
    // 0x426c88: 0x2442bf48  addiu       $v0, $v0, -0x40B8
    ctx->pc = 0x426c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950728));
    // 0x426c8c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x426c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x426c90: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x426C90u;
    {
        const bool branch_taken_0x426c90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x426C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x426C90u;
            // 0x426c94: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426c90) {
            ctx->pc = 0x426CFCu;
            goto label_426cfc;
        }
    }
    ctx->pc = 0x426C98u;
    // 0x426c98: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x426c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x426c9c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x426c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x426ca0: 0x2463bec0  addiu       $v1, $v1, -0x4140
    ctx->pc = 0x426ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950592));
    // 0x426ca4: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x426ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x426ca8: 0x2442bef8  addiu       $v0, $v0, -0x4108
    ctx->pc = 0x426ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950648));
    // 0x426cac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x426cacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x426cb0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x426cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x426cb4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x426cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x426cb8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x426CB8u;
    SET_GPR_U32(ctx, 31, 0x426CC0u);
    ctx->pc = 0x426CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x426CB8u;
            // 0x426cbc: 0x24a55400  addiu       $a1, $a1, 0x5400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426CC0u; }
        if (ctx->pc != 0x426CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426CC0u; }
        if (ctx->pc != 0x426CC0u) { return; }
    }
    ctx->pc = 0x426CC0u;
label_426cc0:
    // 0x426cc0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x426cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x426cc4: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x426CC4u;
    SET_GPR_U32(ctx, 31, 0x426CCCu);
    ctx->pc = 0x426CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x426CC4u;
            // 0x426cc8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426CCCu; }
        if (ctx->pc != 0x426CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426CCCu; }
        if (ctx->pc != 0x426CCCu) { return; }
    }
    ctx->pc = 0x426CCCu;
label_426ccc:
    // 0x426ccc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x426cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x426cd0: 0xc109b64  jal         func_426D90
    ctx->pc = 0x426CD0u;
    SET_GPR_U32(ctx, 31, 0x426CD8u);
    ctx->pc = 0x426CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x426CD0u;
            // 0x426cd4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x426D90u;
    if (runtime->hasFunction(0x426D90u)) {
        auto targetFn = runtime->lookupFunction(0x426D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426CD8u; }
        if (ctx->pc != 0x426CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00426D90_0x426d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426CD8u; }
        if (ctx->pc != 0x426CD8u) { return; }
    }
    ctx->pc = 0x426CD8u;
label_426cd8:
    // 0x426cd8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x426cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x426cdc: 0xc109b64  jal         func_426D90
    ctx->pc = 0x426CDCu;
    SET_GPR_U32(ctx, 31, 0x426CE4u);
    ctx->pc = 0x426CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x426CDCu;
            // 0x426ce0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x426D90u;
    if (runtime->hasFunction(0x426D90u)) {
        auto targetFn = runtime->lookupFunction(0x426D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426CE4u; }
        if (ctx->pc != 0x426CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00426D90_0x426d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426CE4u; }
        if (ctx->pc != 0x426CE4u) { return; }
    }
    ctx->pc = 0x426CE4u;
label_426ce4:
    // 0x426ce4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x426ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x426ce8: 0xc109b4c  jal         func_426D30
    ctx->pc = 0x426CE8u;
    SET_GPR_U32(ctx, 31, 0x426CF0u);
    ctx->pc = 0x426CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x426CE8u;
            // 0x426cec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x426D30u;
    if (runtime->hasFunction(0x426D30u)) {
        auto targetFn = runtime->lookupFunction(0x426D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426CF0u; }
        if (ctx->pc != 0x426CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00426D30_0x426d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426CF0u; }
        if (ctx->pc != 0x426CF0u) { return; }
    }
    ctx->pc = 0x426CF0u;
label_426cf0:
    // 0x426cf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x426cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426cf4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x426CF4u;
    SET_GPR_U32(ctx, 31, 0x426CFCu);
    ctx->pc = 0x426CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x426CF4u;
            // 0x426cf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426CFCu; }
        if (ctx->pc != 0x426CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426CFCu; }
        if (ctx->pc != 0x426CFCu) { return; }
    }
    ctx->pc = 0x426CFCu;
label_426cfc:
    // 0x426cfc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x426cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x426d00: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x426d00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x426d04: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x426D04u;
    {
        const bool branch_taken_0x426d04 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x426d04) {
            ctx->pc = 0x426D08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x426D04u;
            // 0x426d08: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x426D18u;
            goto label_426d18;
        }
    }
    ctx->pc = 0x426D0Cu;
    // 0x426d0c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x426D0Cu;
    SET_GPR_U32(ctx, 31, 0x426D14u);
    ctx->pc = 0x426D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x426D0Cu;
            // 0x426d10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426D14u; }
        if (ctx->pc != 0x426D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426D14u; }
        if (ctx->pc != 0x426D14u) { return; }
    }
    ctx->pc = 0x426D14u;
label_426d14:
    // 0x426d14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x426d14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_426d18:
    // 0x426d18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x426d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x426d1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x426d1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x426d20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x426d20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x426d24: 0x3e00008  jr          $ra
    ctx->pc = 0x426D24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x426D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x426D24u;
            // 0x426d28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x426D2Cu;
    // 0x426d2c: 0x0  nop
    ctx->pc = 0x426d2cu;
    // NOP
}
