#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D2BD0
// Address: 0x4d2bd0 - 0x4d2d70
void sub_004D2BD0_0x4d2bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D2BD0_0x4d2bd0");
#endif

    switch (ctx->pc) {
        case 0x4d2becu: goto label_4d2bec;
        case 0x4d2c0cu: goto label_4d2c0c;
        case 0x4d2c64u: goto label_4d2c64;
        case 0x4d2c84u: goto label_4d2c84;
        case 0x4d2ca0u: goto label_4d2ca0;
        case 0x4d2d00u: goto label_4d2d00;
        case 0x4d2d0cu: goto label_4d2d0c;
        case 0x4d2d18u: goto label_4d2d18;
        case 0x4d2d24u: goto label_4d2d24;
        case 0x4d2d30u: goto label_4d2d30;
        case 0x4d2d3cu: goto label_4d2d3c;
        case 0x4d2d54u: goto label_4d2d54;
        default: break;
    }

    ctx->pc = 0x4d2bd0u;

    // 0x4d2bd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d2bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4d2bd4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4d2bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4d2bd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d2bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4d2bdc: 0x34468702  ori         $a2, $v0, 0x8702
    ctx->pc = 0x4d2bdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34562);
    // 0x4d2be0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d2be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4d2be4: 0xc134b94  jal         func_4D2E50
    ctx->pc = 0x4D2BE4u;
    SET_GPR_U32(ctx, 31, 0x4D2BECu);
    ctx->pc = 0x4D2BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2BE4u;
            // 0x4d2be8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D2E50u;
    if (runtime->hasFunction(0x4D2E50u)) {
        auto targetFn = runtime->lookupFunction(0x4D2E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2BECu; }
        if (ctx->pc != 0x4D2BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D2E50_0x4d2e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2BECu; }
        if (ctx->pc != 0x4D2BECu) { return; }
    }
    ctx->pc = 0x4D2BECu;
label_4d2bec:
    // 0x4d2bec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d2becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4d2bf0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d2bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4d2bf4: 0x246323c0  addiu       $v1, $v1, 0x23C0
    ctx->pc = 0x4d2bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9152));
    // 0x4d2bf8: 0x244223f8  addiu       $v0, $v0, 0x23F8
    ctx->pc = 0x4d2bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9208));
    // 0x4d2bfc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d2bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d2c00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d2c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d2c04: 0xc134b90  jal         func_4D2E40
    ctx->pc = 0x4D2C04u;
    SET_GPR_U32(ctx, 31, 0x4D2C0Cu);
    ctx->pc = 0x4D2C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2C04u;
            // 0x4d2c08: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D2E40u;
    if (runtime->hasFunction(0x4D2E40u)) {
        auto targetFn = runtime->lookupFunction(0x4D2E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2C0Cu; }
        if (ctx->pc != 0x4D2C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D2E40_0x4d2e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2C0Cu; }
        if (ctx->pc != 0x4D2C0Cu) { return; }
    }
    ctx->pc = 0x4D2C0Cu;
label_4d2c0c:
    // 0x4d2c0c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4d2c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x4d2c10: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4d2c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x4d2c14: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d2c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4d2c18: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4d2c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4d2c1c: 0x24422260  addiu       $v0, $v0, 0x2260
    ctx->pc = 0x4d2c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8800));
    // 0x4d2c20: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4d2c20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x4d2c24: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4d2c24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4d2c28: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d2c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4d2c2c: 0x24422298  addiu       $v0, $v0, 0x2298
    ctx->pc = 0x4d2c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8856));
    // 0x4d2c30: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4d2c30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4d2c34: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4d2c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4d2c38: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x4d2c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x4d2c3c: 0xc4407bf0  lwc1        $f0, 0x7BF0($v0)
    ctx->pc = 0x4d2c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 31728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d2c40: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4d2c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4d2c44: 0xc4417bf4  lwc1        $f1, 0x7BF4($v0)
    ctx->pc = 0x4d2c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 31732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d2c48: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4d2c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x4d2c4c: 0xc4607bf8  lwc1        $f0, 0x7BF8($v1)
    ctx->pc = 0x4d2c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 31736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d2c50: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d2c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4d2c54: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4d2c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x4d2c58: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x4d2c58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x4d2c5c: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x4D2C5Cu;
    SET_GPR_U32(ctx, 31, 0x4D2C64u);
    ctx->pc = 0x4D2C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2C5Cu;
            // 0x4d2c60: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2C64u; }
        if (ctx->pc != 0x4D2C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2C64u; }
        if (ctx->pc != 0x4D2C64u) { return; }
    }
    ctx->pc = 0x4D2C64u;
label_4d2c64:
    // 0x4d2c64: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4d2c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4d2c68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4d2c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d2c6c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D2C6Cu;
    {
        const bool branch_taken_0x4d2c6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D2C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2C6Cu;
            // 0x4d2c70: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2c6c) {
            ctx->pc = 0x4D2C88u;
            goto label_4d2c88;
        }
    }
    ctx->pc = 0x4D2C74u;
    // 0x4d2c74: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x4d2c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x4d2c78: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x4d2c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d2c7c: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x4D2C7Cu;
    SET_GPR_U32(ctx, 31, 0x4D2C84u);
    ctx->pc = 0x4D2C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2C7Cu;
            // 0x4d2c80: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2C84u; }
        if (ctx->pc != 0x4D2C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2C84u; }
        if (ctx->pc != 0x4D2C84u) { return; }
    }
    ctx->pc = 0x4D2C84u;
label_4d2c84:
    // 0x4d2c84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4d2c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d2c88:
    // 0x4d2c88: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x4d2c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x4d2c8c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4d2c8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d2c90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d2c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d2c94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d2c94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d2c98: 0x3e00008  jr          $ra
    ctx->pc = 0x4D2C98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D2C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2C98u;
            // 0x4d2c9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D2CA0u;
label_4d2ca0:
    // 0x4d2ca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d2ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4d2ca4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d2ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4d2ca8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d2ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4d2cac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d2cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4d2cb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d2cb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d2cb4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x4D2CB4u;
    {
        const bool branch_taken_0x4d2cb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D2CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2CB4u;
            // 0x4d2cb8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2cb4) {
            ctx->pc = 0x4D2D54u;
            goto label_4d2d54;
        }
    }
    ctx->pc = 0x4D2CBCu;
    // 0x4d2cbc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d2cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4d2cc0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d2cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4d2cc4: 0x246323c0  addiu       $v1, $v1, 0x23C0
    ctx->pc = 0x4d2cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9152));
    // 0x4d2cc8: 0x244223f8  addiu       $v0, $v0, 0x23F8
    ctx->pc = 0x4d2cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9208));
    // 0x4d2ccc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d2cccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d2cd0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4D2CD0u;
    {
        const bool branch_taken_0x4d2cd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D2CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2CD0u;
            // 0x4d2cd4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2cd0) {
            ctx->pc = 0x4D2D3Cu;
            goto label_4d2d3c;
        }
    }
    ctx->pc = 0x4D2CD8u;
    // 0x4d2cd8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d2cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4d2cdc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d2cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4d2ce0: 0x24632370  addiu       $v1, $v1, 0x2370
    ctx->pc = 0x4d2ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9072));
    // 0x4d2ce4: 0x3c05004d  lui         $a1, 0x4D
    ctx->pc = 0x4d2ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)77 << 16));
    // 0x4d2ce8: 0x244223a8  addiu       $v0, $v0, 0x23A8
    ctx->pc = 0x4d2ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9128));
    // 0x4d2cec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d2cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d2cf0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4d2cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4d2cf4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x4d2cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x4d2cf8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x4D2CF8u;
    SET_GPR_U32(ctx, 31, 0x4D2D00u);
    ctx->pc = 0x4D2CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2CF8u;
            // 0x4d2cfc: 0x24a527c0  addiu       $a1, $a1, 0x27C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2D00u; }
        if (ctx->pc != 0x4D2D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2D00u; }
        if (ctx->pc != 0x4D2D00u) { return; }
    }
    ctx->pc = 0x4D2D00u;
label_4d2d00:
    // 0x4d2d00: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4d2d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x4d2d04: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x4D2D04u;
    SET_GPR_U32(ctx, 31, 0x4D2D0Cu);
    ctx->pc = 0x4D2D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2D04u;
            // 0x4d2d08: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2D0Cu; }
        if (ctx->pc != 0x4D2D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2D0Cu; }
        if (ctx->pc != 0x4D2D0Cu) { return; }
    }
    ctx->pc = 0x4D2D0Cu;
label_4d2d0c:
    // 0x4d2d0c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x4d2d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x4d2d10: 0xc134b74  jal         func_4D2DD0
    ctx->pc = 0x4D2D10u;
    SET_GPR_U32(ctx, 31, 0x4D2D18u);
    ctx->pc = 0x4D2D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2D10u;
            // 0x4d2d14: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D2DD0u;
    if (runtime->hasFunction(0x4D2DD0u)) {
        auto targetFn = runtime->lookupFunction(0x4D2DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2D18u; }
        if (ctx->pc != 0x4D2D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D2DD0_0x4d2dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2D18u; }
        if (ctx->pc != 0x4D2D18u) { return; }
    }
    ctx->pc = 0x4D2D18u;
label_4d2d18:
    // 0x4d2d18: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4d2d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x4d2d1c: 0xc134b74  jal         func_4D2DD0
    ctx->pc = 0x4D2D1Cu;
    SET_GPR_U32(ctx, 31, 0x4D2D24u);
    ctx->pc = 0x4D2D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2D1Cu;
            // 0x4d2d20: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D2DD0u;
    if (runtime->hasFunction(0x4D2DD0u)) {
        auto targetFn = runtime->lookupFunction(0x4D2DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2D24u; }
        if (ctx->pc != 0x4D2D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D2DD0_0x4d2dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2D24u; }
        if (ctx->pc != 0x4D2D24u) { return; }
    }
    ctx->pc = 0x4D2D24u;
label_4d2d24:
    // 0x4d2d24: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x4d2d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x4d2d28: 0xc134b5c  jal         func_4D2D70
    ctx->pc = 0x4D2D28u;
    SET_GPR_U32(ctx, 31, 0x4D2D30u);
    ctx->pc = 0x4D2D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2D28u;
            // 0x4d2d2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D2D70u;
    if (runtime->hasFunction(0x4D2D70u)) {
        auto targetFn = runtime->lookupFunction(0x4D2D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2D30u; }
        if (ctx->pc != 0x4D2D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D2D70_0x4d2d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2D30u; }
        if (ctx->pc != 0x4D2D30u) { return; }
    }
    ctx->pc = 0x4D2D30u;
label_4d2d30:
    // 0x4d2d30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d2d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d2d34: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x4D2D34u;
    SET_GPR_U32(ctx, 31, 0x4D2D3Cu);
    ctx->pc = 0x4D2D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2D34u;
            // 0x4d2d38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2D3Cu; }
        if (ctx->pc != 0x4D2D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2D3Cu; }
        if (ctx->pc != 0x4D2D3Cu) { return; }
    }
    ctx->pc = 0x4D2D3Cu;
label_4d2d3c:
    // 0x4d2d3c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4d2d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x4d2d40: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4d2d40u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4d2d44: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4D2D44u;
    {
        const bool branch_taken_0x4d2d44 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4d2d44) {
            ctx->pc = 0x4D2D48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2D44u;
            // 0x4d2d48: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D2D58u;
            goto label_4d2d58;
        }
    }
    ctx->pc = 0x4D2D4Cu;
    // 0x4d2d4c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4D2D4Cu;
    SET_GPR_U32(ctx, 31, 0x4D2D54u);
    ctx->pc = 0x4D2D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2D4Cu;
            // 0x4d2d50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2D54u; }
        if (ctx->pc != 0x4D2D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2D54u; }
        if (ctx->pc != 0x4D2D54u) { return; }
    }
    ctx->pc = 0x4D2D54u;
label_4d2d54:
    // 0x4d2d54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4d2d54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d2d58:
    // 0x4d2d58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d2d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d2d5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d2d5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d2d60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d2d60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d2d64: 0x3e00008  jr          $ra
    ctx->pc = 0x4D2D64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D2D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2D64u;
            // 0x4d2d68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D2D6Cu;
    // 0x4d2d6c: 0x0  nop
    ctx->pc = 0x4d2d6cu;
    // NOP
}
