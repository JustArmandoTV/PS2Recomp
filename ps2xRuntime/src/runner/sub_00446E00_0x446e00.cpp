#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00446E00
// Address: 0x446e00 - 0x447080
void sub_00446E00_0x446e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00446E00_0x446e00");
#endif

    switch (ctx->pc) {
        case 0x446e64u: goto label_446e64;
        case 0x446e70u: goto label_446e70;
        case 0x446e8cu: goto label_446e8c;
        case 0x446ea8u: goto label_446ea8;
        case 0x446eb4u: goto label_446eb4;
        case 0x446f00u: goto label_446f00;
        case 0x446f08u: goto label_446f08;
        case 0x446f14u: goto label_446f14;
        case 0x446f38u: goto label_446f38;
        case 0x446f48u: goto label_446f48;
        case 0x446f54u: goto label_446f54;
        case 0x446f98u: goto label_446f98;
        case 0x447030u: goto label_447030;
        case 0x447050u: goto label_447050;
        default: break;
    }

    ctx->pc = 0x446e00u;

    // 0x446e00: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x446e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x446e04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x446e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x446e08: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x446e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x446e0c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x446e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x446e10: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x446e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x446e14: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x446e14u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446e18: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x446e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x446e1c: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x446e1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446e20: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x446e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x446e24: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x446e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x446e28: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x446e28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446e2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x446e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x446e30: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x446e30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446e34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x446e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x446e38: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x446e38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446e3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x446e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x446e40: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x446e40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446e44: 0x8c8301c0  lw          $v1, 0x1C0($a0)
    ctx->pc = 0x446e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x446e48: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x446E48u;
    {
        const bool branch_taken_0x446e48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x446E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x446E48u;
            // 0x446e4c: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446e48) {
            ctx->pc = 0x446E58u;
            goto label_446e58;
        }
    }
    ctx->pc = 0x446E50u;
    // 0x446e50: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x446E50u;
    {
        const bool branch_taken_0x446e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x446E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x446E50u;
            // 0x446e54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446e50) {
            ctx->pc = 0x447054u;
            goto label_447054;
        }
    }
    ctx->pc = 0x446E58u;
label_446e58:
    // 0x446e58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x446e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446e5c: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x446E5Cu;
    SET_GPR_U32(ctx, 31, 0x446E64u);
    ctx->pc = 0x446E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x446E5Cu;
            // 0x446e60: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446E64u; }
        if (ctx->pc != 0x446E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446E64u; }
        if (ctx->pc != 0x446E64u) { return; }
    }
    ctx->pc = 0x446E64u;
label_446e64:
    // 0x446e64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x446e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446e68: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x446E68u;
    SET_GPR_U32(ctx, 31, 0x446E70u);
    ctx->pc = 0x446E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x446E68u;
            // 0x446e6c: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446E70u; }
        if (ctx->pc != 0x446E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446E70u; }
        if (ctx->pc != 0x446E70u) { return; }
    }
    ctx->pc = 0x446E70u;
label_446e70:
    // 0x446e70: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x446e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x446e74: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x446e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x446e78: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x446e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
    // 0x446e7c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x446e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446e80: 0x8c750000  lw          $s5, 0x0($v1)
    ctx->pc = 0x446e80u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x446e84: 0xc07698c  jal         func_1DA630
    ctx->pc = 0x446E84u;
    SET_GPR_U32(ctx, 31, 0x446E8Cu);
    ctx->pc = 0x446E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x446E84u;
            // 0x446e88: 0x2406003f  addiu       $a2, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446E8Cu; }
        if (ctx->pc != 0x446E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446E8Cu; }
        if (ctx->pc != 0x446E8Cu) { return; }
    }
    ctx->pc = 0x446E8Cu;
label_446e8c:
    // 0x446e8c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x446e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x446e90: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x446E90u;
    {
        const bool branch_taken_0x446e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x446e90) {
            ctx->pc = 0x446EA0u;
            goto label_446ea0;
        }
    }
    ctx->pc = 0x446E98u;
    // 0x446e98: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x446E98u;
    {
        const bool branch_taken_0x446e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x446E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x446E98u;
            // 0x446e9c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446e98) {
            ctx->pc = 0x446F68u;
            goto label_446f68;
        }
    }
    ctx->pc = 0x446EA0u;
label_446ea0:
    // 0x446ea0: 0xc0576f4  jal         func_15DBD0
    ctx->pc = 0x446EA0u;
    SET_GPR_U32(ctx, 31, 0x446EA8u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446EA8u; }
        if (ctx->pc != 0x446EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446EA8u; }
        if (ctx->pc != 0x446EA8u) { return; }
    }
    ctx->pc = 0x446EA8u;
label_446ea8:
    // 0x446ea8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x446ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446eac: 0xc076984  jal         func_1DA610
    ctx->pc = 0x446EACu;
    SET_GPR_U32(ctx, 31, 0x446EB4u);
    ctx->pc = 0x446EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x446EACu;
            // 0x446eb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446EB4u; }
        if (ctx->pc != 0x446EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446EB4u; }
        if (ctx->pc != 0x446EB4u) { return; }
    }
    ctx->pc = 0x446EB4u;
label_446eb4:
    // 0x446eb4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x446eb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446eb8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x446eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x446ebc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x446ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x446ec0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x446ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446ec4: 0xc44203b0  lwc1        $f2, 0x3B0($v0)
    ctx->pc = 0x446ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x446ec8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x446ec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446ecc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x446eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x446ed0: 0xc44103b8  lwc1        $f1, 0x3B8($v0)
    ctx->pc = 0x446ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x446ed4: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x446ed4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x446ed8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x446ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x446edc: 0xc44003bc  lwc1        $f0, 0x3BC($v0)
    ctx->pc = 0x446edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x446ee0: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x446ee0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x446ee4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x446ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x446ee8: 0x8c4203b4  lw          $v0, 0x3B4($v0)
    ctx->pc = 0x446ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 948)));
    // 0x446eec: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x446eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x446ef0: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x446ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x446ef4: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x446ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x446ef8: 0xc04cca0  jal         func_133280
    ctx->pc = 0x446EF8u;
    SET_GPR_U32(ctx, 31, 0x446F00u);
    ctx->pc = 0x446EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x446EF8u;
            // 0x446efc: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446F00u; }
        if (ctx->pc != 0x446F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446F00u; }
        if (ctx->pc != 0x446F00u) { return; }
    }
    ctx->pc = 0x446F00u;
label_446f00:
    // 0x446f00: 0xc076980  jal         func_1DA600
    ctx->pc = 0x446F00u;
    SET_GPR_U32(ctx, 31, 0x446F08u);
    ctx->pc = 0x446F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x446F00u;
            // 0x446f04: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446F08u; }
        if (ctx->pc != 0x446F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446F08u; }
        if (ctx->pc != 0x446F08u) { return; }
    }
    ctx->pc = 0x446F08u;
label_446f08:
    // 0x446f08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x446f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446f0c: 0xc04cc34  jal         func_1330D0
    ctx->pc = 0x446F0Cu;
    SET_GPR_U32(ctx, 31, 0x446F14u);
    ctx->pc = 0x446F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x446F0Cu;
            // 0x446f10: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446F14u; }
        if (ctx->pc != 0x446F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446F14u; }
        if (ctx->pc != 0x446F14u) { return; }
    }
    ctx->pc = 0x446F14u;
label_446f14:
    // 0x446f14: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x446f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x446f18: 0xc441d5f0  lwc1        $f1, -0x2A10($v0)
    ctx->pc = 0x446f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x446f1c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x446f1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x446f20: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x446F20u;
    {
        const bool branch_taken_0x446f20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x446f20) {
            ctx->pc = 0x446F24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x446F20u;
            // 0x446f24: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x446F30u;
            goto label_446f30;
        }
    }
    ctx->pc = 0x446F28u;
    // 0x446f28: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x446F28u;
    {
        const bool branch_taken_0x446f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x446F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x446F28u;
            // 0x446f2c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446f28) {
            ctx->pc = 0x446F68u;
            goto label_446f68;
        }
    }
    ctx->pc = 0x446F30u;
label_446f30:
    // 0x446f30: 0xc07697c  jal         func_1DA5F0
    ctx->pc = 0x446F30u;
    SET_GPR_U32(ctx, 31, 0x446F38u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446F38u; }
        if (ctx->pc != 0x446F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446F38u; }
        if (ctx->pc != 0x446F38u) { return; }
    }
    ctx->pc = 0x446F38u;
label_446f38:
    // 0x446f38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x446f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446f3c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x446f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x446f40: 0xc04cd60  jal         func_133580
    ctx->pc = 0x446F40u;
    SET_GPR_U32(ctx, 31, 0x446F48u);
    ctx->pc = 0x446F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x446F40u;
            // 0x446f44: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446F48u; }
        if (ctx->pc != 0x446F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446F48u; }
        if (ctx->pc != 0x446F48u) { return; }
    }
    ctx->pc = 0x446F48u;
label_446f48:
    // 0x446f48: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x446f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446f4c: 0xc04c650  jal         func_131940
    ctx->pc = 0x446F4Cu;
    SET_GPR_U32(ctx, 31, 0x446F54u);
    ctx->pc = 0x446F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x446F4Cu;
            // 0x446f50: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446F54u; }
        if (ctx->pc != 0x446F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446F54u; }
        if (ctx->pc != 0x446F54u) { return; }
    }
    ctx->pc = 0x446F54u;
label_446f54:
    // 0x446f54: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x446f54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x446f58: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x446f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x446f5c: 0x2442e320  addiu       $v0, $v0, -0x1CE0
    ctx->pc = 0x446f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959904));
    // 0x446f60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x446f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x446f64: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x446f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_446f68:
    // 0x446f68: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x446f68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x446f6c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x446F6Cu;
    {
        const bool branch_taken_0x446f6c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x446F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x446F6Cu;
            // 0x446f70: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446f6c) {
            ctx->pc = 0x446F7Cu;
            goto label_446f7c;
        }
    }
    ctx->pc = 0x446F74u;
    // 0x446f74: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x446F74u;
    {
        const bool branch_taken_0x446f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x446F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x446F74u;
            // 0x446f78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446f74) {
            ctx->pc = 0x447054u;
            goto label_447054;
        }
    }
    ctx->pc = 0x446F7Cu;
label_446f7c:
    // 0x446f7c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x446f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x446f80: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x446f80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446f84: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x446f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446f88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x446f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446f8c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x446f8cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x446f90: 0xc04cd60  jal         func_133580
    ctx->pc = 0x446F90u;
    SET_GPR_U32(ctx, 31, 0x446F98u);
    ctx->pc = 0x446F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x446F90u;
            // 0x446f94: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446F98u; }
        if (ctx->pc != 0x446F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x446F98u; }
        if (ctx->pc != 0x446F98u) { return; }
    }
    ctx->pc = 0x446F98u;
label_446f98:
    // 0x446f98: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x446f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x446f9c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x446f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x446fa0: 0x8c65e3c0  lw          $a1, -0x1C40($v1)
    ctx->pc = 0x446fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
    // 0x446fa4: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x446fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
    // 0x446fa8: 0x8c46e3d8  lw          $a2, -0x1C28($v0)
    ctx->pc = 0x446fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
    // 0x446fac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x446facu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x446fb0: 0x55080  sll         $t2, $a1, 2
    ctx->pc = 0x446fb0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x446fb4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x446fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x446fb8: 0x8c64e360  lw          $a0, -0x1CA0($v1)
    ctx->pc = 0x446fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
    // 0x446fbc: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x446fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
    // 0x446fc0: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x446fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x446fc4: 0x868821  addu        $s1, $a0, $a2
    ctx->pc = 0x446fc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x446fc8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x446fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x446fcc: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x446fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x446fd0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x446fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x446fd4: 0xacb10000  sw          $s1, 0x0($a1)
    ctx->pc = 0x446fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 17));
    // 0x446fd8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x446fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x446fdc: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x446fdcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
    // 0x446fe0: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x446fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x446fe4: 0x8c48e378  lw          $t0, -0x1C88($v0)
    ctx->pc = 0x446fe4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
    // 0x446fe8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x446fe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446fec: 0x8c84e3b8  lw          $a0, -0x1C48($a0)
    ctx->pc = 0x446fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960056)));
    // 0x446ff0: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x446ff0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x446ff4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x446ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x446ff8: 0x1099821  addu        $s3, $t0, $t1
    ctx->pc = 0x446ff8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x446ffc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x446ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x447000: 0x8a4021  addu        $t0, $a0, $t2
    ctx->pc = 0x447000u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x447004: 0xad130000  sw          $s3, 0x0($t0)
    ctx->pc = 0x447004u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 19));
    // 0x447008: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x447008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
    // 0x44700c: 0x8e480028  lw          $t0, 0x28($s2)
    ctx->pc = 0x44700cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x447010: 0x8ce7e3d8  lw          $a3, -0x1C28($a3)
    ctx->pc = 0x447010u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960088)));
    // 0x447014: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x447014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x447018: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x447018u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
    // 0x44701c: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x44701cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x447020: 0xaca2e3d8  sw          $v0, -0x1C28($a1)
    ctx->pc = 0x447020u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 2));
    // 0x447024: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x447024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x447028: 0xc04e4a4  jal         func_139290
    ctx->pc = 0x447028u;
    SET_GPR_U32(ctx, 31, 0x447030u);
    ctx->pc = 0x44702Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x447028u;
            // 0x44702c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447030u; }
        if (ctx->pc != 0x447030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447030u; }
        if (ctx->pc != 0x447030u) { return; }
    }
    ctx->pc = 0x447030u;
label_447030:
    // 0x447030: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x447030u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x447034: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x447034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x447038: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x447038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44703c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x44703cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x447040: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x447040u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x447044: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x447044u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x447048: 0xc04cfcc  jal         func_133F30
    ctx->pc = 0x447048u;
    SET_GPR_U32(ctx, 31, 0x447050u);
    ctx->pc = 0x44704Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x447048u;
            // 0x44704c: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447050u; }
        if (ctx->pc != 0x447050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447050u; }
        if (ctx->pc != 0x447050u) { return; }
    }
    ctx->pc = 0x447050u;
label_447050:
    // 0x447050: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x447050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_447054:
    // 0x447054: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x447054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x447058: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x447058u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x44705c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x44705cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x447060: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x447060u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x447064: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x447064u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x447068: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x447068u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x44706c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x44706cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x447070: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x447070u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x447074: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x447074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x447078: 0x3e00008  jr          $ra
    ctx->pc = 0x447078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44707Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x447078u;
            // 0x44707c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x447080u;
}
