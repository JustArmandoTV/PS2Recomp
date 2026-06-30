#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015EE40
// Address: 0x15ee40 - 0x15f130
void sub_0015EE40_0x15ee40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015EE40_0x15ee40");
#endif

    switch (ctx->pc) {
        case 0x15ee98u: goto label_15ee98;
        case 0x15eeccu: goto label_15eecc;
        case 0x15ef10u: goto label_15ef10;
        case 0x15ef24u: goto label_15ef24;
        case 0x15ef34u: goto label_15ef34;
        case 0x15ef40u: goto label_15ef40;
        case 0x15ef54u: goto label_15ef54;
        case 0x15ef70u: goto label_15ef70;
        case 0x15ef7cu: goto label_15ef7c;
        case 0x15ef84u: goto label_15ef84;
        case 0x15ef94u: goto label_15ef94;
        case 0x15ef9cu: goto label_15ef9c;
        case 0x15efa8u: goto label_15efa8;
        case 0x15efb4u: goto label_15efb4;
        case 0x15efc0u: goto label_15efc0;
        case 0x15efccu: goto label_15efcc;
        case 0x15efd8u: goto label_15efd8;
        case 0x15efe0u: goto label_15efe0;
        case 0x15f008u: goto label_15f008;
        case 0x15f01cu: goto label_15f01c;
        case 0x15f028u: goto label_15f028;
        case 0x15f038u: goto label_15f038;
        case 0x15f044u: goto label_15f044;
        case 0x15f050u: goto label_15f050;
        case 0x15f064u: goto label_15f064;
        case 0x15f070u: goto label_15f070;
        case 0x15f084u: goto label_15f084;
        case 0x15f098u: goto label_15f098;
        case 0x15f0a4u: goto label_15f0a4;
        case 0x15f0bcu: goto label_15f0bc;
        case 0x15f0c8u: goto label_15f0c8;
        case 0x15f0dcu: goto label_15f0dc;
        case 0x15f10cu: goto label_15f10c;
        default: break;
    }

    ctx->pc = 0x15ee40u;

    // 0x15ee40: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x15ee40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x15ee44: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x15ee44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x15ee48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15ee48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15ee4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15ee4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15ee50: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x15ee50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ee54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15ee54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15ee58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15ee58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15ee5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15ee5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15ee60: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x15EE60u;
    {
        const bool branch_taken_0x15ee60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EE60u;
            // 0x15ee64: 0xafa50064  sw          $a1, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ee60) {
            ctx->pc = 0x15EEB0u;
            goto label_15eeb0;
        }
    }
    ctx->pc = 0x15EE68u;
    // 0x15ee68: 0xaca60018  sw          $a2, 0x18($a1)
    ctx->pc = 0x15ee68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 6));
    // 0x15ee6c: 0x24c20028  addiu       $v0, $a2, 0x28
    ctx->pc = 0x15ee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
    // 0x15ee70: 0x8cc80014  lw          $t0, 0x14($a2)
    ctx->pc = 0x15ee70u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x15ee74: 0x24c5001c  addiu       $a1, $a2, 0x1C
    ctx->pc = 0x15ee74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
    // 0x15ee78: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x15ee78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x15ee7c: 0x27a400d4  addiu       $a0, $sp, 0xD4
    ctx->pc = 0x15ee7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x15ee80: 0x27a70064  addiu       $a3, $sp, 0x64
    ctx->pc = 0x15ee80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x15ee84: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x15ee84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x15ee88: 0x27a600c4  addiu       $a2, $sp, 0xC4
    ctx->pc = 0x15ee88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x15ee8c: 0xac680014  sw          $t0, 0x14($v1)
    ctx->pc = 0x15ee8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 8));
    // 0x15ee90: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x15EE90u;
    SET_GPR_U32(ctx, 31, 0x15EE98u);
    ctx->pc = 0x15EE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EE90u;
            // 0x15ee94: 0xafa200c4  sw          $v0, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EE98u; }
        if (ctx->pc != 0x15EE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EE98u; }
        if (ctx->pc != 0x15EE98u) { return; }
    }
    ctx->pc = 0x15EE98u;
label_15ee98:
    // 0x15ee98: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x15ee98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x15ee9c: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x15ee9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x15eea0: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x15eea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
    // 0x15eea4: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x15eea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15eea8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x15EEA8u;
    {
        const bool branch_taken_0x15eea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EEA8u;
            // 0x15eeac: 0xe4400034  swc1        $f0, 0x34($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eea8) {
            ctx->pc = 0x15EEF0u;
            goto label_15eef0;
        }
    }
    ctx->pc = 0x15EEB0u;
label_15eeb0:
    // 0x15eeb0: 0x268200e8  addiu       $v0, $s4, 0xE8
    ctx->pc = 0x15eeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 232));
    // 0x15eeb4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x15eeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x15eeb8: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x15eeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x15eebc: 0x268500dc  addiu       $a1, $s4, 0xDC
    ctx->pc = 0x15eebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 220));
    // 0x15eec0: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x15eec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x15eec4: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x15EEC4u;
    SET_GPR_U32(ctx, 31, 0x15EECCu);
    ctx->pc = 0x15EEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EEC4u;
            // 0x15eec8: 0x27a70064  addiu       $a3, $sp, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EECCu; }
        if (ctx->pc != 0x15EECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EECCu; }
        if (ctx->pc != 0x15EECCu) { return; }
    }
    ctx->pc = 0x15EECCu;
label_15eecc:
    // 0x15eecc: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x15eeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x15eed0: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x15eed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x15eed4: 0xafa300d8  sw          $v1, 0xD8($sp)
    ctx->pc = 0x15eed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
    // 0x15eed8: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x15eed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15eedc: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x15eedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x15eee0: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x15eee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x15eee4: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x15eee4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x15eee8: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x15eee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x15eeec: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x15eeecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_15eef0:
    // 0x15eef0: 0x8e82011c  lw          $v0, 0x11C($s4)
    ctx->pc = 0x15eef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
    // 0x15eef4: 0x5440007f  bnel        $v0, $zero, . + 4 + (0x7F << 2)
    ctx->pc = 0x15EEF4u;
    {
        const bool branch_taken_0x15eef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15eef4) {
            ctx->pc = 0x15EEF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15EEF4u;
            // 0x15eef8: 0x268200bc  addiu       $v0, $s4, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 188));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F0F4u;
            goto label_15f0f4;
        }
    }
    ctx->pc = 0x15EEFCu;
    // 0x15eefc: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x15eefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x15ef00: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x15ef00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x15ef04: 0x2685009c  addiu       $a1, $s4, 0x9C
    ctx->pc = 0x15ef04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 156));
    // 0x15ef08: 0xc057ab4  jal         func_15EAD0
    ctx->pc = 0x15EF08u;
    SET_GPR_U32(ctx, 31, 0x15EF10u);
    ctx->pc = 0x15EF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EF08u;
            // 0x15ef0c: 0xafa200bc  sw          $v0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EAD0u;
    if (runtime->hasFunction(0x15EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x15EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EF10u; }
        if (ctx->pc != 0x15EF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAD0_0x15ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EF10u; }
        if (ctx->pc != 0x15EF10u) { return; }
    }
    ctx->pc = 0x15EF10u;
label_15ef10:
    // 0x15ef10: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x15ef10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x15ef14: 0x2685009c  addiu       $a1, $s4, 0x9C
    ctx->pc = 0x15ef14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 156));
    // 0x15ef18: 0x27a600a8  addiu       $a2, $sp, 0xA8
    ctx->pc = 0x15ef18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x15ef1c: 0xc057c78  jal         func_15F1E0
    ctx->pc = 0x15EF1Cu;
    SET_GPR_U32(ctx, 31, 0x15EF24u);
    ctx->pc = 0x15EF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EF1Cu;
            // 0x15ef20: 0x27a700bc  addiu       $a3, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F1E0u;
    if (runtime->hasFunction(0x15F1E0u)) {
        auto targetFn = runtime->lookupFunction(0x15F1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EF24u; }
        if (ctx->pc != 0x15EF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F1E0_0x15f1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EF24u; }
        if (ctx->pc != 0x15EF24u) { return; }
    }
    ctx->pc = 0x15EF24u;
label_15ef24:
    // 0x15ef24: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x15ef24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x15ef28: 0x27a500ac  addiu       $a1, $sp, 0xAC
    ctx->pc = 0x15ef28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x15ef2c: 0xc057a08  jal         func_15E820
    ctx->pc = 0x15EF2Cu;
    SET_GPR_U32(ctx, 31, 0x15EF34u);
    ctx->pc = 0x15EF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EF2Cu;
            // 0x15ef30: 0x24440038  addiu       $a0, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E820u;
    if (runtime->hasFunction(0x15E820u)) {
        auto targetFn = runtime->lookupFunction(0x15E820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EF34u; }
        if (ctx->pc != 0x15EF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E820_0x15e820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EF34u; }
        if (ctx->pc != 0x15EF34u) { return; }
    }
    ctx->pc = 0x15EF34u;
label_15ef34:
    // 0x15ef34: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x15ef34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x15ef38: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x15ef38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ef3c: 0x8c720004  lw          $s2, 0x4($v1)
    ctx->pc = 0x15ef3cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15ef40:
    // 0x15ef40: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x15ef40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x15ef44: 0x10600066  beqz        $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x15EF44u;
    {
        const bool branch_taken_0x15ef44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ef44) {
            ctx->pc = 0x15F0E0u;
            goto label_15f0e0;
        }
    }
    ctx->pc = 0x15EF4Cu;
    // 0x15ef4c: 0xc057c74  jal         func_15F1D0
    ctx->pc = 0x15EF4Cu;
    SET_GPR_U32(ctx, 31, 0x15EF54u);
    ctx->pc = 0x15EF50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EF4Cu;
            // 0x15ef50: 0x27a400b8  addiu       $a0, $sp, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F1D0u;
    if (runtime->hasFunction(0x15F1D0u)) {
        auto targetFn = runtime->lookupFunction(0x15F1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EF54u; }
        if (ctx->pc != 0x15EF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F1D0_0x15f1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EF54u; }
        if (ctx->pc != 0x15EF54u) { return; }
    }
    ctx->pc = 0x15EF54u;
label_15ef54:
    // 0x15ef54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15ef54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ef58: 0x27a400a4  addiu       $a0, $sp, 0xA4
    ctx->pc = 0x15ef58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x15ef5c: 0x2628004  sllv        $s0, $v0, $s3
    ctx->pc = 0x15ef5cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
    // 0x15ef60: 0x268500c4  addiu       $a1, $s4, 0xC4
    ctx->pc = 0x15ef60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 196));
    // 0x15ef64: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x15ef64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x15ef68: 0xc057c70  jal         func_15F1C0
    ctx->pc = 0x15EF68u;
    SET_GPR_U32(ctx, 31, 0x15EF70u);
    ctx->pc = 0x15EF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EF68u;
            // 0x15ef6c: 0xafb000a0  sw          $s0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F1C0u;
    if (runtime->hasFunction(0x15F1C0u)) {
        auto targetFn = runtime->lookupFunction(0x15F1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EF70u; }
        if (ctx->pc != 0x15EF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F1C0_0x15f1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EF70u; }
        if (ctx->pc != 0x15EF70u) { return; }
    }
    ctx->pc = 0x15EF70u;
label_15ef70:
    // 0x15ef70: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x15ef70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x15ef74: 0xc057c6c  jal         func_15F1B0
    ctx->pc = 0x15EF74u;
    SET_GPR_U32(ctx, 31, 0x15EF7Cu);
    ctx->pc = 0x15EF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EF74u;
            // 0x15ef78: 0x27a500a4  addiu       $a1, $sp, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F1B0u;
    if (runtime->hasFunction(0x15F1B0u)) {
        auto targetFn = runtime->lookupFunction(0x15F1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EF7Cu; }
        if (ctx->pc != 0x15EF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F1B0_0x15f1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EF7Cu; }
        if (ctx->pc != 0x15EF7Cu) { return; }
    }
    ctx->pc = 0x15EF7Cu;
label_15ef7c:
    // 0x15ef7c: 0xc057a0c  jal         func_15E830
    ctx->pc = 0x15EF7Cu;
    SET_GPR_U32(ctx, 31, 0x15EF84u);
    ctx->pc = 0x15EF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EF7Cu;
            // 0x15ef80: 0x27a400b8  addiu       $a0, $sp, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E830u;
    if (runtime->hasFunction(0x15E830u)) {
        auto targetFn = runtime->lookupFunction(0x15E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EF84u; }
        if (ctx->pc != 0x15EF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E830_0x15e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EF84u; }
        if (ctx->pc != 0x15EF84u) { return; }
    }
    ctx->pc = 0x15EF84u;
label_15ef84:
    // 0x15ef84: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x15ef84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15ef88: 0x8c51000c  lw          $s1, 0xC($v0)
    ctx->pc = 0x15ef88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x15ef8c: 0xc057a10  jal         func_15E840
    ctx->pc = 0x15EF8Cu;
    SET_GPR_U32(ctx, 31, 0x15EF94u);
    ctx->pc = 0x15EF90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EF8Cu;
            // 0x15ef90: 0x27a400b4  addiu       $a0, $sp, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E840u;
    if (runtime->hasFunction(0x15E840u)) {
        auto targetFn = runtime->lookupFunction(0x15E840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EF94u; }
        if (ctx->pc != 0x15EF94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E840_0x15e840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EF94u; }
        if (ctx->pc != 0x15EF94u) { return; }
    }
    ctx->pc = 0x15EF94u;
label_15ef94:
    // 0x15ef94: 0xc057a10  jal         func_15E840
    ctx->pc = 0x15EF94u;
    SET_GPR_U32(ctx, 31, 0x15EF9Cu);
    ctx->pc = 0x15EF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EF94u;
            // 0x15ef98: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E840u;
    if (runtime->hasFunction(0x15E840u)) {
        auto targetFn = runtime->lookupFunction(0x15E840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EF9Cu; }
        if (ctx->pc != 0x15EF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E840_0x15e840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EF9Cu; }
        if (ctx->pc != 0x15EF9Cu) { return; }
    }
    ctx->pc = 0x15EF9Cu;
label_15ef9c:
    // 0x15ef9c: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x15ef9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x15efa0: 0xc057b28  jal         func_15ECA0
    ctx->pc = 0x15EFA0u;
    SET_GPR_U32(ctx, 31, 0x15EFA8u);
    ctx->pc = 0x15EFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EFA0u;
            // 0x15efa4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ECA0u;
    if (runtime->hasFunction(0x15ECA0u)) {
        auto targetFn = runtime->lookupFunction(0x15ECA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EFA8u; }
        if (ctx->pc != 0x15EFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ECA0_0x15eca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EFA8u; }
        if (ctx->pc != 0x15EFA8u) { return; }
    }
    ctx->pc = 0x15EFA8u;
label_15efa8:
    // 0x15efa8: 0x27a400b4  addiu       $a0, $sp, 0xB4
    ctx->pc = 0x15efa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x15efac: 0xc057a08  jal         func_15E820
    ctx->pc = 0x15EFACu;
    SET_GPR_U32(ctx, 31, 0x15EFB4u);
    ctx->pc = 0x15EFB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EFACu;
            // 0x15efb0: 0x27a5009c  addiu       $a1, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E820u;
    if (runtime->hasFunction(0x15E820u)) {
        auto targetFn = runtime->lookupFunction(0x15E820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EFB4u; }
        if (ctx->pc != 0x15EFB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E820_0x15e820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EFB4u; }
        if (ctx->pc != 0x15EFB4u) { return; }
    }
    ctx->pc = 0x15EFB4u;
label_15efb4:
    // 0x15efb4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x15efb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x15efb8: 0xc057ab4  jal         func_15EAD0
    ctx->pc = 0x15EFB8u;
    SET_GPR_U32(ctx, 31, 0x15EFC0u);
    ctx->pc = 0x15EFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EFB8u;
            // 0x15efbc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EAD0u;
    if (runtime->hasFunction(0x15EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x15EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EFC0u; }
        if (ctx->pc != 0x15EFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAD0_0x15ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EFC0u; }
        if (ctx->pc != 0x15EFC0u) { return; }
    }
    ctx->pc = 0x15EFC0u;
label_15efc0:
    // 0x15efc0: 0x27a400b4  addiu       $a0, $sp, 0xB4
    ctx->pc = 0x15efc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x15efc4: 0xc057aac  jal         func_15EAB0
    ctx->pc = 0x15EFC4u;
    SET_GPR_U32(ctx, 31, 0x15EFCCu);
    ctx->pc = 0x15EFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EFC4u;
            // 0x15efc8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EAB0u;
    if (runtime->hasFunction(0x15EAB0u)) {
        auto targetFn = runtime->lookupFunction(0x15EAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EFCCu; }
        if (ctx->pc != 0x15EFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAB0_0x15eab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EFCCu; }
        if (ctx->pc != 0x15EFCCu) { return; }
    }
    ctx->pc = 0x15EFCCu;
label_15efcc:
    // 0x15efcc: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x15EFCCu;
    {
        const bool branch_taken_0x15efcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15efcc) {
            ctx->pc = 0x15F058u;
            goto label_15f058;
        }
    }
    ctx->pc = 0x15EFD4u;
    // 0x15efd4: 0x0  nop
    ctx->pc = 0x15efd4u;
    // NOP
label_15efd8:
    // 0x15efd8: 0xc057b24  jal         func_15EC90
    ctx->pc = 0x15EFD8u;
    SET_GPR_U32(ctx, 31, 0x15EFE0u);
    ctx->pc = 0x15EFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EFD8u;
            // 0x15efdc: 0x27a400b4  addiu       $a0, $sp, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EC90u;
    if (runtime->hasFunction(0x15EC90u)) {
        auto targetFn = runtime->lookupFunction(0x15EC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EFE0u; }
        if (ctx->pc != 0x15EFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EC90_0x15ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EFE0u; }
        if (ctx->pc != 0x15EFE0u) { return; }
    }
    ctx->pc = 0x15EFE0u;
label_15efe0:
    // 0x15efe0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15efe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15efe4: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x15efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x15efe8: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x15efe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x15efec: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x15efecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x15eff0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x15eff0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x15eff4: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x15EFF4u;
    {
        const bool branch_taken_0x15eff4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15eff4) {
            ctx->pc = 0x15F030u;
            goto label_15f030;
        }
    }
    ctx->pc = 0x15EFFCu;
    // 0x15effc: 0x27a40094  addiu       $a0, $sp, 0x94
    ctx->pc = 0x15effcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x15f000: 0xc057c68  jal         func_15F1A0
    ctx->pc = 0x15F000u;
    SET_GPR_U32(ctx, 31, 0x15F008u);
    ctx->pc = 0x15F004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F000u;
            // 0x15f004: 0x27a500b4  addiu       $a1, $sp, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F1A0u;
    if (runtime->hasFunction(0x15F1A0u)) {
        auto targetFn = runtime->lookupFunction(0x15F1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F008u; }
        if (ctx->pc != 0x15F008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F1A0_0x15f1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F008u; }
        if (ctx->pc != 0x15F008u) { return; }
    }
    ctx->pc = 0x15F008u;
label_15f008:
    // 0x15f008: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15f008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f00c: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x15f00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x15f010: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15f010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f014: 0xc057c78  jal         func_15F1E0
    ctx->pc = 0x15F014u;
    SET_GPR_U32(ctx, 31, 0x15F01Cu);
    ctx->pc = 0x15F018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F014u;
            // 0x15f018: 0x27a700bc  addiu       $a3, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F1E0u;
    if (runtime->hasFunction(0x15F1E0u)) {
        auto targetFn = runtime->lookupFunction(0x15F1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F01Cu; }
        if (ctx->pc != 0x15F01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F1E0_0x15f1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F01Cu; }
        if (ctx->pc != 0x15F01Cu) { return; }
    }
    ctx->pc = 0x15F01Cu;
label_15f01c:
    // 0x15f01c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x15f01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x15f020: 0xc057a08  jal         func_15E820
    ctx->pc = 0x15F020u;
    SET_GPR_U32(ctx, 31, 0x15F028u);
    ctx->pc = 0x15F024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F020u;
            // 0x15f024: 0x27a50098  addiu       $a1, $sp, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E820u;
    if (runtime->hasFunction(0x15E820u)) {
        auto targetFn = runtime->lookupFunction(0x15E820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F028u; }
        if (ctx->pc != 0x15F028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E820_0x15e820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F028u; }
        if (ctx->pc != 0x15F028u) { return; }
    }
    ctx->pc = 0x15F028u;
label_15f028:
    // 0x15f028: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15F028u;
    {
        const bool branch_taken_0x15f028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f028) {
            ctx->pc = 0x15F058u;
            goto label_15f058;
        }
    }
    ctx->pc = 0x15F030u;
label_15f030:
    // 0x15f030: 0xc057ab8  jal         func_15EAE0
    ctx->pc = 0x15F030u;
    SET_GPR_U32(ctx, 31, 0x15F038u);
    ctx->pc = 0x15F034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F030u;
            // 0x15f034: 0x27a400b4  addiu       $a0, $sp, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EAE0u;
    if (runtime->hasFunction(0x15EAE0u)) {
        auto targetFn = runtime->lookupFunction(0x15EAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F038u; }
        if (ctx->pc != 0x15F038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAE0_0x15eae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F038u; }
        if (ctx->pc != 0x15F038u) { return; }
    }
    ctx->pc = 0x15F038u;
label_15f038:
    // 0x15f038: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x15f038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x15f03c: 0xc057ab4  jal         func_15EAD0
    ctx->pc = 0x15F03Cu;
    SET_GPR_U32(ctx, 31, 0x15F044u);
    ctx->pc = 0x15F040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F03Cu;
            // 0x15f040: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EAD0u;
    if (runtime->hasFunction(0x15EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x15EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F044u; }
        if (ctx->pc != 0x15F044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAD0_0x15ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F044u; }
        if (ctx->pc != 0x15F044u) { return; }
    }
    ctx->pc = 0x15F044u;
label_15f044:
    // 0x15f044: 0x27a400b4  addiu       $a0, $sp, 0xB4
    ctx->pc = 0x15f044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x15f048: 0xc057aac  jal         func_15EAB0
    ctx->pc = 0x15F048u;
    SET_GPR_U32(ctx, 31, 0x15F050u);
    ctx->pc = 0x15F04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F048u;
            // 0x15f04c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EAB0u;
    if (runtime->hasFunction(0x15EAB0u)) {
        auto targetFn = runtime->lookupFunction(0x15EAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F050u; }
        if (ctx->pc != 0x15F050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAB0_0x15eab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F050u; }
        if (ctx->pc != 0x15F050u) { return; }
    }
    ctx->pc = 0x15F050u;
label_15f050:
    // 0x15f050: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x15F050u;
    {
        const bool branch_taken_0x15f050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f050) {
            ctx->pc = 0x15EFD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15efd8;
        }
    }
    ctx->pc = 0x15F058u;
label_15f058:
    // 0x15f058: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x15f058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x15f05c: 0xc057ab4  jal         func_15EAD0
    ctx->pc = 0x15F05Cu;
    SET_GPR_U32(ctx, 31, 0x15F064u);
    ctx->pc = 0x15F060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F05Cu;
            // 0x15f060: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EAD0u;
    if (runtime->hasFunction(0x15EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x15EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F064u; }
        if (ctx->pc != 0x15F064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAD0_0x15ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F064u; }
        if (ctx->pc != 0x15F064u) { return; }
    }
    ctx->pc = 0x15F064u;
label_15f064:
    // 0x15f064: 0x27a400b4  addiu       $a0, $sp, 0xB4
    ctx->pc = 0x15f064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x15f068: 0xc057c60  jal         func_15F180
    ctx->pc = 0x15F068u;
    SET_GPR_U32(ctx, 31, 0x15F070u);
    ctx->pc = 0x15F06Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F068u;
            // 0x15f06c: 0x27a5008c  addiu       $a1, $sp, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F180u;
    if (runtime->hasFunction(0x15F180u)) {
        auto targetFn = runtime->lookupFunction(0x15F180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F070u; }
        if (ctx->pc != 0x15F070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F180_0x15f180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F070u; }
        if (ctx->pc != 0x15F070u) { return; }
    }
    ctx->pc = 0x15F070u;
label_15f070:
    // 0x15f070: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x15F070u;
    {
        const bool branch_taken_0x15f070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f070) {
            ctx->pc = 0x15F0A8u;
            goto label_15f0a8;
        }
    }
    ctx->pc = 0x15F078u;
    // 0x15f078: 0x27a40084  addiu       $a0, $sp, 0x84
    ctx->pc = 0x15f078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x15f07c: 0xc057ab4  jal         func_15EAD0
    ctx->pc = 0x15F07Cu;
    SET_GPR_U32(ctx, 31, 0x15F084u);
    ctx->pc = 0x15F080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F07Cu;
            // 0x15f080: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EAD0u;
    if (runtime->hasFunction(0x15EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x15EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F084u; }
        if (ctx->pc != 0x15F084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAD0_0x15ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F084u; }
        if (ctx->pc != 0x15F084u) { return; }
    }
    ctx->pc = 0x15F084u;
label_15f084:
    // 0x15f084: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15f084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f088: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x15f088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x15f08c: 0x27a60084  addiu       $a2, $sp, 0x84
    ctx->pc = 0x15f08cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x15f090: 0xc057c78  jal         func_15F1E0
    ctx->pc = 0x15F090u;
    SET_GPR_U32(ctx, 31, 0x15F098u);
    ctx->pc = 0x15F094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F090u;
            // 0x15f094: 0x27a700bc  addiu       $a3, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F1E0u;
    if (runtime->hasFunction(0x15F1E0u)) {
        auto targetFn = runtime->lookupFunction(0x15F1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F098u; }
        if (ctx->pc != 0x15F098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F1E0_0x15f1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F098u; }
        if (ctx->pc != 0x15F098u) { return; }
    }
    ctx->pc = 0x15F098u;
label_15f098:
    // 0x15f098: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x15f098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x15f09c: 0xc057a08  jal         func_15E820
    ctx->pc = 0x15F09Cu;
    SET_GPR_U32(ctx, 31, 0x15F0A4u);
    ctx->pc = 0x15F0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F09Cu;
            // 0x15f0a0: 0x27a50088  addiu       $a1, $sp, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E820u;
    if (runtime->hasFunction(0x15E820u)) {
        auto targetFn = runtime->lookupFunction(0x15E820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F0A4u; }
        if (ctx->pc != 0x15F0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E820_0x15e820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F0A4u; }
        if (ctx->pc != 0x15F0A4u) { return; }
    }
    ctx->pc = 0x15F0A4u;
label_15f0a4:
    // 0x15f0a4: 0x0  nop
    ctx->pc = 0x15f0a4u;
    // NOP
label_15f0a8:
    // 0x15f0a8: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x15f0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x15f0ac: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x15f0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15f0b0: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x15f0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x15f0b4: 0xc057c58  jal         func_15F160
    ctx->pc = 0x15F0B4u;
    SET_GPR_U32(ctx, 31, 0x15F0BCu);
    ctx->pc = 0x15F0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F0B4u;
            // 0x15f0b8: 0xafb00080  sw          $s0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F160u;
    if (runtime->hasFunction(0x15F160u)) {
        auto targetFn = runtime->lookupFunction(0x15F160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F0BCu; }
        if (ctx->pc != 0x15F0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F160_0x15f160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F0BCu; }
        if (ctx->pc != 0x15F0BCu) { return; }
    }
    ctx->pc = 0x15F0BCu;
label_15f0bc:
    // 0x15f0bc: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x15f0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x15f0c0: 0xc057c50  jal         func_15F140
    ctx->pc = 0x15F0C0u;
    SET_GPR_U32(ctx, 31, 0x15F0C8u);
    ctx->pc = 0x15F0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F0C0u;
            // 0x15f0c4: 0x27a50078  addiu       $a1, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F140u;
    if (runtime->hasFunction(0x15F140u)) {
        auto targetFn = runtime->lookupFunction(0x15F140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F0C8u; }
        if (ctx->pc != 0x15F0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F140_0x15f140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F0C8u; }
        if (ctx->pc != 0x15F0C8u) { return; }
    }
    ctx->pc = 0x15F0C8u;
label_15f0c8:
    // 0x15f0c8: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x15f0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x15f0cc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x15f0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15f0d0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15f0d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f0d4: 0xc057c4c  jal         func_15F130
    ctx->pc = 0x15F0D4u;
    SET_GPR_U32(ctx, 31, 0x15F0DCu);
    ctx->pc = 0x15F0D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F0D4u;
            // 0x15f0d8: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F130u;
    if (runtime->hasFunction(0x15F130u)) {
        auto targetFn = runtime->lookupFunction(0x15F130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F0DCu; }
        if (ctx->pc != 0x15F0DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F130_0x15f130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F0DCu; }
        if (ctx->pc != 0x15F0DCu) { return; }
    }
    ctx->pc = 0x15F0DCu;
label_15f0dc:
    // 0x15f0dc: 0x0  nop
    ctx->pc = 0x15f0dcu;
    // NOP
label_15f0e0:
    // 0x15f0e0: 0x129042  srl         $s2, $s2, 1
    ctx->pc = 0x15f0e0u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x15f0e4: 0x1640ff96  bnez        $s2, . + 4 + (-0x6A << 2)
    ctx->pc = 0x15F0E4u;
    {
        const bool branch_taken_0x15f0e4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F0E4u;
            // 0x15f0e8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f0e4) {
            ctx->pc = 0x15EF40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15ef40;
        }
    }
    ctx->pc = 0x15F0ECu;
    // 0x15f0ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15F0ECu;
    {
        const bool branch_taken_0x15f0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F0ECu;
            // 0x15f0f0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f0ec) {
            ctx->pc = 0x15F110u;
            goto label_15f110;
        }
    }
    ctx->pc = 0x15F0F4u;
label_15f0f4:
    // 0x15f0f4: 0x268500b0  addiu       $a1, $s4, 0xB0
    ctx->pc = 0x15f0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
    // 0x15f0f8: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x15f0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x15f0fc: 0x27a400cc  addiu       $a0, $sp, 0xCC
    ctx->pc = 0x15f0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x15f100: 0x27a600c8  addiu       $a2, $sp, 0xC8
    ctx->pc = 0x15f100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x15f104: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x15F104u;
    SET_GPR_U32(ctx, 31, 0x15F10Cu);
    ctx->pc = 0x15F108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F104u;
            // 0x15f108: 0x27a70064  addiu       $a3, $sp, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F10Cu; }
        if (ctx->pc != 0x15F10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F10Cu; }
        if (ctx->pc != 0x15F10Cu) { return; }
    }
    ctx->pc = 0x15F10Cu;
label_15f10c:
    // 0x15f10c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x15f10cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_15f110:
    // 0x15f110: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15f110u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15f114: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15f114u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15f118: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15f118u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15f11c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15f11cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f120: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15f120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f124: 0x3e00008  jr          $ra
    ctx->pc = 0x15F124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F124u;
            // 0x15f128: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15F12Cu;
    // 0x15f12c: 0x0  nop
    ctx->pc = 0x15f12cu;
    // NOP
}
