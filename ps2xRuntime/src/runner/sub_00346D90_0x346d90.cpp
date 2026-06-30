#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00346D90
// Address: 0x346d90 - 0x347020
void sub_00346D90_0x346d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346D90_0x346d90");
#endif

    switch (ctx->pc) {
        case 0x346de8u: goto label_346de8;
        case 0x346df4u: goto label_346df4;
        case 0x346e18u: goto label_346e18;
        case 0x346e34u: goto label_346e34;
        case 0x346e40u: goto label_346e40;
        case 0x346e8cu: goto label_346e8c;
        case 0x346e94u: goto label_346e94;
        case 0x346ea0u: goto label_346ea0;
        case 0x346ec4u: goto label_346ec4;
        case 0x346ed4u: goto label_346ed4;
        case 0x346ee0u: goto label_346ee0;
        case 0x346f2cu: goto label_346f2c;
        case 0x346f58u: goto label_346f58;
        case 0x346fdcu: goto label_346fdc;
        case 0x346ff0u: goto label_346ff0;
        default: break;
    }

    ctx->pc = 0x346d90u;

    // 0x346d90: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x346d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x346d94: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x346d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x346d98: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x346d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x346d9c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x346d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x346da0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x346da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x346da4: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x346da4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346da8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x346da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x346dac: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x346dacu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346db0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x346db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x346db4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x346db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x346db8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x346db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x346dbc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x346dbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346dc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x346dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x346dc4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x346dc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346dc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x346dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x346dcc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x346dccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346dd0: 0x8c8401c0  lw          $a0, 0x1C0($a0)
    ctx->pc = 0x346dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x346dd4: 0x10830086  beq         $a0, $v1, . + 4 + (0x86 << 2)
    ctx->pc = 0x346DD4u;
    {
        const bool branch_taken_0x346dd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x346DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346DD4u;
            // 0x346dd8: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346dd4) {
            ctx->pc = 0x346FF0u;
            goto label_346ff0;
        }
    }
    ctx->pc = 0x346DDCu;
    // 0x346ddc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x346ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346de0: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x346DE0u;
    SET_GPR_U32(ctx, 31, 0x346DE8u);
    ctx->pc = 0x346DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346DE0u;
            // 0x346de4: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346DE8u; }
        if (ctx->pc != 0x346DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346DE8u; }
        if (ctx->pc != 0x346DE8u) { return; }
    }
    ctx->pc = 0x346DE8u;
label_346de8:
    // 0x346de8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x346de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346dec: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x346DECu;
    SET_GPR_U32(ctx, 31, 0x346DF4u);
    ctx->pc = 0x346DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346DECu;
            // 0x346df0: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346DF4u; }
        if (ctx->pc != 0x346DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346DF4u; }
        if (ctx->pc != 0x346DF4u) { return; }
    }
    ctx->pc = 0x346DF4u;
label_346df4:
    // 0x346df4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x346df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x346df8: 0x8e550000  lw          $s5, 0x0($s2)
    ctx->pc = 0x346df8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x346dfc: 0x8c43d130  lw          $v1, -0x2ED0($v0)
    ctx->pc = 0x346dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
    // 0x346e00: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x346e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x346e04: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x346e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x346e08: 0x8c740130  lw          $s4, 0x130($v1)
    ctx->pc = 0x346e08u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x346e0c: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x346e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
    // 0x346e10: 0xc07698c  jal         func_1DA630
    ctx->pc = 0x346E10u;
    SET_GPR_U32(ctx, 31, 0x346E18u);
    ctx->pc = 0x346E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346E10u;
            // 0x346e14: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346E18u; }
        if (ctx->pc != 0x346E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346E18u; }
        if (ctx->pc != 0x346E18u) { return; }
    }
    ctx->pc = 0x346E18u;
label_346e18:
    // 0x346e18: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x346e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x346e1c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x346E1Cu;
    {
        const bool branch_taken_0x346e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x346e1c) {
            ctx->pc = 0x346E2Cu;
            goto label_346e2c;
        }
    }
    ctx->pc = 0x346E24u;
    // 0x346e24: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x346E24u;
    {
        const bool branch_taken_0x346e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346E24u;
            // 0x346e28: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346e24) {
            ctx->pc = 0x346EF4u;
            goto label_346ef4;
        }
    }
    ctx->pc = 0x346E2Cu;
label_346e2c:
    // 0x346e2c: 0xc0576f4  jal         func_15DBD0
    ctx->pc = 0x346E2Cu;
    SET_GPR_U32(ctx, 31, 0x346E34u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346E34u; }
        if (ctx->pc != 0x346E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346E34u; }
        if (ctx->pc != 0x346E34u) { return; }
    }
    ctx->pc = 0x346E34u;
label_346e34:
    // 0x346e34: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x346e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346e38: 0xc076984  jal         func_1DA610
    ctx->pc = 0x346E38u;
    SET_GPR_U32(ctx, 31, 0x346E40u);
    ctx->pc = 0x346E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346E38u;
            // 0x346e3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346E40u; }
        if (ctx->pc != 0x346E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346E40u; }
        if (ctx->pc != 0x346E40u) { return; }
    }
    ctx->pc = 0x346E40u;
label_346e40:
    // 0x346e40: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x346e40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346e44: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x346e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x346e48: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x346e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x346e4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x346e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346e50: 0xc4421440  lwc1        $f2, 0x1440($v0)
    ctx->pc = 0x346e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x346e54: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x346e54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346e58: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x346e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x346e5c: 0xc4411448  lwc1        $f1, 0x1448($v0)
    ctx->pc = 0x346e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346e60: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x346e60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x346e64: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x346e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x346e68: 0xc440144c  lwc1        $f0, 0x144C($v0)
    ctx->pc = 0x346e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346e6c: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x346e6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x346e70: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x346e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x346e74: 0x8c421444  lw          $v0, 0x1444($v0)
    ctx->pc = 0x346e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5188)));
    // 0x346e78: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x346e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x346e7c: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x346e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x346e80: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x346e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346e84: 0xc04cca0  jal         func_133280
    ctx->pc = 0x346E84u;
    SET_GPR_U32(ctx, 31, 0x346E8Cu);
    ctx->pc = 0x346E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346E84u;
            // 0x346e88: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346E8Cu; }
        if (ctx->pc != 0x346E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346E8Cu; }
        if (ctx->pc != 0x346E8Cu) { return; }
    }
    ctx->pc = 0x346E8Cu;
label_346e8c:
    // 0x346e8c: 0xc076980  jal         func_1DA600
    ctx->pc = 0x346E8Cu;
    SET_GPR_U32(ctx, 31, 0x346E94u);
    ctx->pc = 0x346E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346E8Cu;
            // 0x346e90: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346E94u; }
        if (ctx->pc != 0x346E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346E94u; }
        if (ctx->pc != 0x346E94u) { return; }
    }
    ctx->pc = 0x346E94u;
label_346e94:
    // 0x346e94: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x346e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x346e98: 0xc04cc34  jal         func_1330D0
    ctx->pc = 0x346E98u;
    SET_GPR_U32(ctx, 31, 0x346EA0u);
    ctx->pc = 0x346E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346E98u;
            // 0x346e9c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346EA0u; }
        if (ctx->pc != 0x346EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346EA0u; }
        if (ctx->pc != 0x346EA0u) { return; }
    }
    ctx->pc = 0x346EA0u;
label_346ea0:
    // 0x346ea0: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x346ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x346ea4: 0xc4612f10  lwc1        $f1, 0x2F10($v1)
    ctx->pc = 0x346ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346ea8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x346ea8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x346eac: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x346EACu;
    {
        const bool branch_taken_0x346eac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x346eac) {
            ctx->pc = 0x346EB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x346EACu;
            // 0x346eb0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x346EBCu;
            goto label_346ebc;
        }
    }
    ctx->pc = 0x346EB4u;
    // 0x346eb4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x346EB4u;
    {
        const bool branch_taken_0x346eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346EB4u;
            // 0x346eb8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346eb4) {
            ctx->pc = 0x346EF4u;
            goto label_346ef4;
        }
    }
    ctx->pc = 0x346EBCu;
label_346ebc:
    // 0x346ebc: 0xc07697c  jal         func_1DA5F0
    ctx->pc = 0x346EBCu;
    SET_GPR_U32(ctx, 31, 0x346EC4u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346EC4u; }
        if (ctx->pc != 0x346EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346EC4u; }
        if (ctx->pc != 0x346EC4u) { return; }
    }
    ctx->pc = 0x346EC4u;
label_346ec4:
    // 0x346ec4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x346ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346ec8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x346ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x346ecc: 0xc04cd60  jal         func_133580
    ctx->pc = 0x346ECCu;
    SET_GPR_U32(ctx, 31, 0x346ED4u);
    ctx->pc = 0x346ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346ECCu;
            // 0x346ed0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346ED4u; }
        if (ctx->pc != 0x346ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346ED4u; }
        if (ctx->pc != 0x346ED4u) { return; }
    }
    ctx->pc = 0x346ED4u;
label_346ed4:
    // 0x346ed4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x346ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346ed8: 0xc04c650  jal         func_131940
    ctx->pc = 0x346ED8u;
    SET_GPR_U32(ctx, 31, 0x346EE0u);
    ctx->pc = 0x346EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346ED8u;
            // 0x346edc: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346EE0u; }
        if (ctx->pc != 0x346EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346EE0u; }
        if (ctx->pc != 0x346EE0u) { return; }
    }
    ctx->pc = 0x346EE0u;
label_346ee0:
    // 0x346ee0: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x346ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x346ee4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x346ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x346ee8: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x346ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
    // 0x346eec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x346eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x346ef0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x346ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_346ef4:
    // 0x346ef4: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x346ef4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x346ef8: 0x1020003d  beqz        $at, . + 4 + (0x3D << 2)
    ctx->pc = 0x346EF8u;
    {
        const bool branch_taken_0x346ef8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x346EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346EF8u;
            // 0x346efc: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346ef8) {
            ctx->pc = 0x346FF0u;
            goto label_346ff0;
        }
    }
    ctx->pc = 0x346F00u;
    // 0x346f00: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x346f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
    // 0x346f04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x346f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346f08: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x346f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
    // 0x346f0c: 0xc66001e4  lwc1        $f0, 0x1E4($s3)
    ctx->pc = 0x346f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346f10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x346f10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x346f14: 0x0  nop
    ctx->pc = 0x346f14u;
    // NOP
    // 0x346f18: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x346f18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x346f1c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x346f1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x346f20: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x346f20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x346f24: 0xc04cdd0  jal         func_133740
    ctx->pc = 0x346F24u;
    SET_GPR_U32(ctx, 31, 0x346F2Cu);
    ctx->pc = 0x346F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346F24u;
            // 0x346f28: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133740u;
    if (runtime->hasFunction(0x133740u)) {
        auto targetFn = runtime->lookupFunction(0x133740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346F2Cu; }
        if (ctx->pc != 0x346F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133740_0x133740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346F2Cu; }
        if (ctx->pc != 0x346F2Cu) { return; }
    }
    ctx->pc = 0x346F2Cu;
label_346f2c:
    // 0x346f2c: 0x8e630230  lw          $v1, 0x230($s3)
    ctx->pc = 0x346f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 560)));
    // 0x346f30: 0x266401f0  addiu       $a0, $s3, 0x1F0
    ctx->pc = 0x346f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 496));
    // 0x346f34: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x346f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x346f38: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x346f38u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x346f3c: 0x3042feff  andi        $v0, $v0, 0xFEFF
    ctx->pc = 0x346f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65279);
    // 0x346f40: 0xa4620064  sh          $v0, 0x64($v1)
    ctx->pc = 0x346f40u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
    // 0x346f44: 0x8e630234  lw          $v1, 0x234($s3)
    ctx->pc = 0x346f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 564)));
    // 0x346f48: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x346f48u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x346f4c: 0x3042feff  andi        $v0, $v0, 0xFEFF
    ctx->pc = 0x346f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65279);
    // 0x346f50: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x346F50u;
    SET_GPR_U32(ctx, 31, 0x346F58u);
    ctx->pc = 0x346F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346F50u;
            // 0x346f54: 0xa4620064  sh          $v0, 0x64($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346F58u; }
        if (ctx->pc != 0x346F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346F58u; }
        if (ctx->pc != 0x346F58u) { return; }
    }
    ctx->pc = 0x346F58u;
label_346f58:
    // 0x346f58: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x346f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x346f5c: 0x8e4b0000  lw          $t3, 0x0($s2)
    ctx->pc = 0x346f5cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x346f60: 0x8c43e3d8  lw          $v1, -0x1C28($v0)
    ctx->pc = 0x346f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
    // 0x346f64: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x346f64u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x346f68: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x346f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346f6c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x346f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x346f70: 0x33980  sll         $a3, $v1, 6
    ctx->pc = 0x346f70u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x346f74: 0x8c46e360  lw          $a2, -0x1CA0($v0)
    ctx->pc = 0x346f74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
    // 0x346f78: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x346f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x346f7c: 0xc78021  addu        $s0, $a2, $a3
    ctx->pc = 0x346f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x346f80: 0x8c44e3c0  lw          $a0, -0x1C40($v0)
    ctx->pc = 0x346f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
    // 0x346f84: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x346f84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
    // 0x346f88: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x346f88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x346f8c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x346f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x346f90: 0x45080  sll         $t2, $a0, 2
    ctx->pc = 0x346f90u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x346f94: 0x8c43e3b0  lw          $v1, -0x1C50($v0)
    ctx->pc = 0x346f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
    // 0x346f98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x346f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346f9c: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x346f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x346fa0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x346fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x346fa4: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x346fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x346fa8: 0x8c49e3b8  lw          $t1, -0x1C48($v0)
    ctx->pc = 0x346fa8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
    // 0x346fac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x346facu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x346fb0: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x346fb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x346fb4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x346fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x346fb8: 0xad310000  sw          $s1, 0x0($t1)
    ctx->pc = 0x346fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 17));
    // 0x346fbc: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x346fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
    // 0x346fc0: 0x8d690028  lw          $t1, 0x28($t3)
    ctx->pc = 0x346fc0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 40)));
    // 0x346fc4: 0x8d08e3d8  lw          $t0, -0x1C28($t0)
    ctx->pc = 0x346fc4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
    // 0x346fc8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x346fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x346fcc: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x346fccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
    // 0x346fd0: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x346fd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x346fd4: 0xc04cd60  jal         func_133580
    ctx->pc = 0x346FD4u;
    SET_GPR_U32(ctx, 31, 0x346FDCu);
    ctx->pc = 0x346FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346FD4u;
            // 0x346fd8: 0xace8e3d8  sw          $t0, -0x1C28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346FDCu; }
        if (ctx->pc != 0x346FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346FDCu; }
        if (ctx->pc != 0x346FDCu) { return; }
    }
    ctx->pc = 0x346FDCu;
label_346fdc:
    // 0x346fdc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x346fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x346fe0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x346fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346fe4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x346fe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346fe8: 0xc054fd4  jal         func_153F50
    ctx->pc = 0x346FE8u;
    SET_GPR_U32(ctx, 31, 0x346FF0u);
    ctx->pc = 0x346FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346FE8u;
            // 0x346fec: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346FF0u; }
        if (ctx->pc != 0x346FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346FF0u; }
        if (ctx->pc != 0x346FF0u) { return; }
    }
    ctx->pc = 0x346FF0u;
label_346ff0:
    // 0x346ff0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x346ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x346ff4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x346ff4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x346ff8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x346ff8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x346ffc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x346ffcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x347000: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x347000u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x347004: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x347004u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x347008: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x347008u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34700c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34700cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x347010: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x347010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347014: 0x3e00008  jr          $ra
    ctx->pc = 0x347014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x347014u;
            // 0x347018: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34701Cu;
    // 0x34701c: 0x0  nop
    ctx->pc = 0x34701cu;
    // NOP
}
