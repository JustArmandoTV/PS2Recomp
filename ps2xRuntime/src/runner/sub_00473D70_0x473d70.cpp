#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00473D70
// Address: 0x473d70 - 0x473fd0
void sub_00473D70_0x473d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00473D70_0x473d70");
#endif

    switch (ctx->pc) {
        case 0x473dc8u: goto label_473dc8;
        case 0x473dd4u: goto label_473dd4;
        case 0x473df4u: goto label_473df4;
        case 0x473e18u: goto label_473e18;
        case 0x473e34u: goto label_473e34;
        case 0x473e40u: goto label_473e40;
        case 0x473e8cu: goto label_473e8c;
        case 0x473e94u: goto label_473e94;
        case 0x473ea0u: goto label_473ea0;
        case 0x473ec4u: goto label_473ec4;
        case 0x473ed4u: goto label_473ed4;
        case 0x473ee0u: goto label_473ee0;
        case 0x473f84u: goto label_473f84;
        case 0x473f98u: goto label_473f98;
        default: break;
    }

    ctx->pc = 0x473d70u;

    // 0x473d70: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x473d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x473d74: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x473d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x473d78: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x473d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x473d7c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x473d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x473d80: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x473d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x473d84: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x473d84u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473d88: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x473d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x473d8c: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x473d8cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473d90: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x473d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x473d94: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x473d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x473d98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x473d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x473d9c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x473d9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473da0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x473da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x473da4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x473da4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473da8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x473da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x473dac: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x473dacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473db0: 0x8c8401c0  lw          $a0, 0x1C0($a0)
    ctx->pc = 0x473db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x473db4: 0x10830078  beq         $a0, $v1, . + 4 + (0x78 << 2)
    ctx->pc = 0x473DB4u;
    {
        const bool branch_taken_0x473db4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x473DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x473DB4u;
            // 0x473db8: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473db4) {
            ctx->pc = 0x473F98u;
            goto label_473f98;
        }
    }
    ctx->pc = 0x473DBCu;
    // 0x473dbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x473dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473dc0: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x473DC0u;
    SET_GPR_U32(ctx, 31, 0x473DC8u);
    ctx->pc = 0x473DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x473DC0u;
            // 0x473dc4: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473DC8u; }
        if (ctx->pc != 0x473DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473DC8u; }
        if (ctx->pc != 0x473DC8u) { return; }
    }
    ctx->pc = 0x473DC8u;
label_473dc8:
    // 0x473dc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x473dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473dcc: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x473DCCu;
    SET_GPR_U32(ctx, 31, 0x473DD4u);
    ctx->pc = 0x473DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x473DCCu;
            // 0x473dd0: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473DD4u; }
        if (ctx->pc != 0x473DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473DD4u; }
        if (ctx->pc != 0x473DD4u) { return; }
    }
    ctx->pc = 0x473DD4u;
label_473dd4:
    // 0x473dd4: 0x3c02bf99  lui         $v0, 0xBF99
    ctx->pc = 0x473dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49049 << 16));
    // 0x473dd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x473dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473ddc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x473ddcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x473de0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x473de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x473de4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x473de4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x473de8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x473de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473dec: 0xc04ce64  jal         func_133990
    ctx->pc = 0x473DECu;
    SET_GPR_U32(ctx, 31, 0x473DF4u);
    ctx->pc = 0x473DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x473DECu;
            // 0x473df0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473DF4u; }
        if (ctx->pc != 0x473DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473DF4u; }
        if (ctx->pc != 0x473DF4u) { return; }
    }
    ctx->pc = 0x473DF4u;
label_473df4:
    // 0x473df4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x473df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x473df8: 0x8e550000  lw          $s5, 0x0($s2)
    ctx->pc = 0x473df8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x473dfc: 0x8c43d130  lw          $v1, -0x2ED0($v0)
    ctx->pc = 0x473dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
    // 0x473e00: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x473e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x473e04: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x473e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x473e08: 0x8c740130  lw          $s4, 0x130($v1)
    ctx->pc = 0x473e08u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x473e0c: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x473e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
    // 0x473e10: 0xc07698c  jal         func_1DA630
    ctx->pc = 0x473E10u;
    SET_GPR_U32(ctx, 31, 0x473E18u);
    ctx->pc = 0x473E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x473E10u;
            // 0x473e14: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473E18u; }
        if (ctx->pc != 0x473E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473E18u; }
        if (ctx->pc != 0x473E18u) { return; }
    }
    ctx->pc = 0x473E18u;
label_473e18:
    // 0x473e18: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x473e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x473e1c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x473E1Cu;
    {
        const bool branch_taken_0x473e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x473e1c) {
            ctx->pc = 0x473E2Cu;
            goto label_473e2c;
        }
    }
    ctx->pc = 0x473E24u;
    // 0x473e24: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x473E24u;
    {
        const bool branch_taken_0x473e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x473E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x473E24u;
            // 0x473e28: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473e24) {
            ctx->pc = 0x473EF4u;
            goto label_473ef4;
        }
    }
    ctx->pc = 0x473E2Cu;
label_473e2c:
    // 0x473e2c: 0xc0576f4  jal         func_15DBD0
    ctx->pc = 0x473E2Cu;
    SET_GPR_U32(ctx, 31, 0x473E34u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473E34u; }
        if (ctx->pc != 0x473E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473E34u; }
        if (ctx->pc != 0x473E34u) { return; }
    }
    ctx->pc = 0x473E34u;
label_473e34:
    // 0x473e34: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x473e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473e38: 0xc076984  jal         func_1DA610
    ctx->pc = 0x473E38u;
    SET_GPR_U32(ctx, 31, 0x473E40u);
    ctx->pc = 0x473E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x473E38u;
            // 0x473e3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473E40u; }
        if (ctx->pc != 0x473E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473E40u; }
        if (ctx->pc != 0x473E40u) { return; }
    }
    ctx->pc = 0x473E40u;
label_473e40:
    // 0x473e40: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x473e40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473e44: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x473e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x473e48: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x473e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x473e4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x473e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473e50: 0xc4420860  lwc1        $f2, 0x860($v0)
    ctx->pc = 0x473e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x473e54: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x473e54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473e58: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x473e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x473e5c: 0xc4410868  lwc1        $f1, 0x868($v0)
    ctx->pc = 0x473e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x473e60: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x473e60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x473e64: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x473e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x473e68: 0xc440086c  lwc1        $f0, 0x86C($v0)
    ctx->pc = 0x473e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x473e6c: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x473e6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x473e70: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x473e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x473e74: 0x8c420864  lw          $v0, 0x864($v0)
    ctx->pc = 0x473e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2148)));
    // 0x473e78: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x473e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x473e7c: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x473e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x473e80: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x473e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x473e84: 0xc04cca0  jal         func_133280
    ctx->pc = 0x473E84u;
    SET_GPR_U32(ctx, 31, 0x473E8Cu);
    ctx->pc = 0x473E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x473E84u;
            // 0x473e88: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473E8Cu; }
        if (ctx->pc != 0x473E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473E8Cu; }
        if (ctx->pc != 0x473E8Cu) { return; }
    }
    ctx->pc = 0x473E8Cu;
label_473e8c:
    // 0x473e8c: 0xc076980  jal         func_1DA600
    ctx->pc = 0x473E8Cu;
    SET_GPR_U32(ctx, 31, 0x473E94u);
    ctx->pc = 0x473E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x473E8Cu;
            // 0x473e90: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473E94u; }
        if (ctx->pc != 0x473E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473E94u; }
        if (ctx->pc != 0x473E94u) { return; }
    }
    ctx->pc = 0x473E94u;
label_473e94:
    // 0x473e94: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x473e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x473e98: 0xc04cc34  jal         func_1330D0
    ctx->pc = 0x473E98u;
    SET_GPR_U32(ctx, 31, 0x473EA0u);
    ctx->pc = 0x473E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x473E98u;
            // 0x473e9c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473EA0u; }
        if (ctx->pc != 0x473EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473EA0u; }
        if (ctx->pc != 0x473EA0u) { return; }
    }
    ctx->pc = 0x473EA0u;
label_473ea0:
    // 0x473ea0: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x473ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x473ea4: 0xc461f250  lwc1        $f1, -0xDB0($v1)
    ctx->pc = 0x473ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294963792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x473ea8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x473ea8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x473eac: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x473EACu;
    {
        const bool branch_taken_0x473eac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x473eac) {
            ctx->pc = 0x473EB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x473EACu;
            // 0x473eb0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x473EBCu;
            goto label_473ebc;
        }
    }
    ctx->pc = 0x473EB4u;
    // 0x473eb4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x473EB4u;
    {
        const bool branch_taken_0x473eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x473EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x473EB4u;
            // 0x473eb8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473eb4) {
            ctx->pc = 0x473EF4u;
            goto label_473ef4;
        }
    }
    ctx->pc = 0x473EBCu;
label_473ebc:
    // 0x473ebc: 0xc07697c  jal         func_1DA5F0
    ctx->pc = 0x473EBCu;
    SET_GPR_U32(ctx, 31, 0x473EC4u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473EC4u; }
        if (ctx->pc != 0x473EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473EC4u; }
        if (ctx->pc != 0x473EC4u) { return; }
    }
    ctx->pc = 0x473EC4u;
label_473ec4:
    // 0x473ec4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x473ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473ec8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x473ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x473ecc: 0xc04cd60  jal         func_133580
    ctx->pc = 0x473ECCu;
    SET_GPR_U32(ctx, 31, 0x473ED4u);
    ctx->pc = 0x473ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x473ECCu;
            // 0x473ed0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473ED4u; }
        if (ctx->pc != 0x473ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473ED4u; }
        if (ctx->pc != 0x473ED4u) { return; }
    }
    ctx->pc = 0x473ED4u;
label_473ed4:
    // 0x473ed4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x473ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473ed8: 0xc04c650  jal         func_131940
    ctx->pc = 0x473ED8u;
    SET_GPR_U32(ctx, 31, 0x473EE0u);
    ctx->pc = 0x473EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x473ED8u;
            // 0x473edc: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473EE0u; }
        if (ctx->pc != 0x473EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473EE0u; }
        if (ctx->pc != 0x473EE0u) { return; }
    }
    ctx->pc = 0x473EE0u;
label_473ee0:
    // 0x473ee0: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x473ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x473ee4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x473ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x473ee8: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x473ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
    // 0x473eec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x473eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x473ef0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x473ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_473ef4:
    // 0x473ef4: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x473ef4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x473ef8: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x473EF8u;
    {
        const bool branch_taken_0x473ef8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x473EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x473EF8u;
            // 0x473efc: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473ef8) {
            ctx->pc = 0x473F98u;
            goto label_473f98;
        }
    }
    ctx->pc = 0x473F00u;
    // 0x473f00: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x473f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x473f04: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x473f04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x473f08: 0x8c48e3d8  lw          $t0, -0x1C28($v0)
    ctx->pc = 0x473f08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
    // 0x473f0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x473f0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473f10: 0x8c67e360  lw          $a3, -0x1CA0($v1)
    ctx->pc = 0x473f10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
    // 0x473f14: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x473f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473f18: 0x8e4b0000  lw          $t3, 0x0($s2)
    ctx->pc = 0x473f18u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x473f1c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x473f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x473f20: 0x84180  sll         $t0, $t0, 6
    ctx->pc = 0x473f20u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x473f24: 0x8c44e3c0  lw          $a0, -0x1C40($v0)
    ctx->pc = 0x473f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
    // 0x473f28: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x473f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x473f2c: 0x8c63e3b0  lw          $v1, -0x1C50($v1)
    ctx->pc = 0x473f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
    // 0x473f30: 0xe88021  addu        $s0, $a3, $t0
    ctx->pc = 0x473f30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x473f34: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x473f34u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x473f38: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x473f38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
    // 0x473f3c: 0x45080  sll         $t2, $a0, 2
    ctx->pc = 0x473f3cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x473f40: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x473f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x473f44: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x473f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x473f48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x473f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473f4c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x473f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x473f50: 0x8c49e3b8  lw          $t1, -0x1C48($v0)
    ctx->pc = 0x473f50u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
    // 0x473f54: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x473f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x473f58: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x473f58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x473f5c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x473f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x473f60: 0xad310000  sw          $s1, 0x0($t1)
    ctx->pc = 0x473f60u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 17));
    // 0x473f64: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x473f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
    // 0x473f68: 0x8d690028  lw          $t1, 0x28($t3)
    ctx->pc = 0x473f68u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 40)));
    // 0x473f6c: 0x8d08e3d8  lw          $t0, -0x1C28($t0)
    ctx->pc = 0x473f6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
    // 0x473f70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x473f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x473f74: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x473f74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
    // 0x473f78: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x473f78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x473f7c: 0xc04cd60  jal         func_133580
    ctx->pc = 0x473F7Cu;
    SET_GPR_U32(ctx, 31, 0x473F84u);
    ctx->pc = 0x473F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x473F7Cu;
            // 0x473f80: 0xace8e3d8  sw          $t0, -0x1C28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473F84u; }
        if (ctx->pc != 0x473F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473F84u; }
        if (ctx->pc != 0x473F84u) { return; }
    }
    ctx->pc = 0x473F84u;
label_473f84:
    // 0x473f84: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x473f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x473f88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x473f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473f8c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x473f8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473f90: 0xc054fd4  jal         func_153F50
    ctx->pc = 0x473F90u;
    SET_GPR_U32(ctx, 31, 0x473F98u);
    ctx->pc = 0x473F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x473F90u;
            // 0x473f94: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473F98u; }
        if (ctx->pc != 0x473F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x473F98u; }
        if (ctx->pc != 0x473F98u) { return; }
    }
    ctx->pc = 0x473F98u;
label_473f98:
    // 0x473f98: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x473f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x473f9c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x473f9cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x473fa0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x473fa0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x473fa4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x473fa4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x473fa8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x473fa8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x473fac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x473facu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x473fb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x473fb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x473fb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x473fb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x473fb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x473fb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x473fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x473FBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x473FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x473FBCu;
            // 0x473fc0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x473FC4u;
    // 0x473fc4: 0x0  nop
    ctx->pc = 0x473fc4u;
    // NOP
    // 0x473fc8: 0x0  nop
    ctx->pc = 0x473fc8u;
    // NOP
    // 0x473fcc: 0x0  nop
    ctx->pc = 0x473fccu;
    // NOP
}
