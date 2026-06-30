#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003FCAD0
// Address: 0x3fcad0 - 0x3fd130
void sub_003FCAD0_0x3fcad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FCAD0_0x3fcad0");
#endif

    switch (ctx->pc) {
        case 0x3fcb20u: goto label_3fcb20;
        case 0x3fcb2cu: goto label_3fcb2c;
        case 0x3fcb50u: goto label_3fcb50;
        case 0x3fcb6cu: goto label_3fcb6c;
        case 0x3fcb78u: goto label_3fcb78;
        case 0x3fcbc4u: goto label_3fcbc4;
        case 0x3fcbccu: goto label_3fcbcc;
        case 0x3fcbd8u: goto label_3fcbd8;
        case 0x3fcbfcu: goto label_3fcbfc;
        case 0x3fcc0cu: goto label_3fcc0c;
        case 0x3fcc18u: goto label_3fcc18;
        case 0x3fcc84u: goto label_3fcc84;
        case 0x3fcce8u: goto label_3fcce8;
        case 0x3fccfcu: goto label_3fccfc;
        case 0x3fcd0cu: goto label_3fcd0c;
        case 0x3fcd24u: goto label_3fcd24;
        case 0x3fcd58u: goto label_3fcd58;
        case 0x3fcdbcu: goto label_3fcdbc;
        case 0x3fcdd0u: goto label_3fcdd0;
        case 0x3fcde0u: goto label_3fcde0;
        case 0x3fcdf8u: goto label_3fcdf8;
        case 0x3fce14u: goto label_3fce14;
        case 0x3fce28u: goto label_3fce28;
        case 0x3fce30u: goto label_3fce30;
        case 0x3fce44u: goto label_3fce44;
        case 0x3fce64u: goto label_3fce64;
        case 0x3fce8cu: goto label_3fce8c;
        case 0x3fceacu: goto label_3fceac;
        case 0x3fcee0u: goto label_3fcee0;
        case 0x3fcef0u: goto label_3fcef0;
        case 0x3fcf0cu: goto label_3fcf0c;
        case 0x3fcf1cu: goto label_3fcf1c;
        case 0x3fcf24u: goto label_3fcf24;
        case 0x3fcf38u: goto label_3fcf38;
        case 0x3fcf74u: goto label_3fcf74;
        case 0x3fcf9cu: goto label_3fcf9c;
        case 0x3fcfc4u: goto label_3fcfc4;
        case 0x3fcfe0u: goto label_3fcfe0;
        case 0x3fcfe8u: goto label_3fcfe8;
        case 0x3fd008u: goto label_3fd008;
        case 0x3fd018u: goto label_3fd018;
        case 0x3fd034u: goto label_3fd034;
        case 0x3fd044u: goto label_3fd044;
        case 0x3fd058u: goto label_3fd058;
        case 0x3fd094u: goto label_3fd094;
        case 0x3fd0bcu: goto label_3fd0bc;
        case 0x3fd0e4u: goto label_3fd0e4;
        case 0x3fd100u: goto label_3fd100;
        default: break;
    }

    ctx->pc = 0x3fcad0u;

    // 0x3fcad0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x3fcad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x3fcad4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3fcad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3fcad8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3fcad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3fcadc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3fcadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3fcae0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3fcae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3fcae4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3fcae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3fcae8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3fcae8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fcaec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3fcaecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3fcaf0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3fcaf0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fcaf4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3fcaf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3fcaf8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3fcaf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fcafc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3fcafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3fcb00: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x3fcb00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fcb04: 0x8c830060  lw          $v1, 0x60($a0)
    ctx->pc = 0x3fcb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x3fcb08: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x3fcb08u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3fcb0c: 0x1420017c  bnez        $at, . + 4 + (0x17C << 2)
    ctx->pc = 0x3FCB0Cu;
    {
        const bool branch_taken_0x3fcb0c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FCB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCB0Cu;
            // 0x3fcb10: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fcb0c) {
            ctx->pc = 0x3FD100u;
            goto label_3fd100;
        }
    }
    ctx->pc = 0x3FCB14u;
    // 0x3fcb14: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x3fcb14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x3fcb18: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x3FCB18u;
    SET_GPR_U32(ctx, 31, 0x3FCB20u);
    ctx->pc = 0x3FCB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCB18u;
            // 0x3fcb1c: 0x268500c4  addiu       $a1, $s4, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCB20u; }
        if (ctx->pc != 0x3FCB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCB20u; }
        if (ctx->pc != 0x3FCB20u) { return; }
    }
    ctx->pc = 0x3FCB20u;
label_3fcb20:
    // 0x3fcb20: 0x8e8500c0  lw          $a1, 0xC0($s4)
    ctx->pc = 0x3fcb20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 192)));
    // 0x3fcb24: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x3FCB24u;
    SET_GPR_U32(ctx, 31, 0x3FCB2Cu);
    ctx->pc = 0x3FCB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCB24u;
            // 0x3fcb28: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCB2Cu; }
        if (ctx->pc != 0x3FCB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCB2Cu; }
        if (ctx->pc != 0x3FCB2Cu) { return; }
    }
    ctx->pc = 0x3FCB2Cu;
label_3fcb2c:
    // 0x3fcb2c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3fcb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x3fcb30: 0x9286004c  lbu         $a2, 0x4C($s4)
    ctx->pc = 0x3fcb30u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x3fcb34: 0x8c43d130  lw          $v1, -0x2ED0($v0)
    ctx->pc = 0x3fcb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
    // 0x3fcb38: 0x8e760000  lw          $s6, 0x0($s3)
    ctx->pc = 0x3fcb38u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3fcb3c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3fcb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3fcb40: 0x8c750130  lw          $s5, 0x130($v1)
    ctx->pc = 0x3fcb40u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x3fcb44: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x3fcb44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
    // 0x3fcb48: 0xc07698c  jal         func_1DA630
    ctx->pc = 0x3FCB48u;
    SET_GPR_U32(ctx, 31, 0x3FCB50u);
    ctx->pc = 0x3FCB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCB48u;
            // 0x3fcb4c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCB50u; }
        if (ctx->pc != 0x3FCB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCB50u; }
        if (ctx->pc != 0x3FCB50u) { return; }
    }
    ctx->pc = 0x3FCB50u;
label_3fcb50:
    // 0x3fcb50: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3fcb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3fcb54: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3FCB54u;
    {
        const bool branch_taken_0x3fcb54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3fcb54) {
            ctx->pc = 0x3FCB64u;
            goto label_3fcb64;
        }
    }
    ctx->pc = 0x3FCB5Cu;
    // 0x3fcb5c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x3FCB5Cu;
    {
        const bool branch_taken_0x3fcb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FCB60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCB5Cu;
            // 0x3fcb60: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fcb5c) {
            ctx->pc = 0x3FCC2Cu;
            goto label_3fcc2c;
        }
    }
    ctx->pc = 0x3FCB64u;
label_3fcb64:
    // 0x3fcb64: 0xc0576f4  jal         func_15DBD0
    ctx->pc = 0x3FCB64u;
    SET_GPR_U32(ctx, 31, 0x3FCB6Cu);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCB6Cu; }
        if (ctx->pc != 0x3FCB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCB6Cu; }
        if (ctx->pc != 0x3FCB6Cu) { return; }
    }
    ctx->pc = 0x3FCB6Cu;
label_3fcb6c:
    // 0x3fcb6c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3fcb6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fcb70: 0xc076984  jal         func_1DA610
    ctx->pc = 0x3FCB70u;
    SET_GPR_U32(ctx, 31, 0x3FCB78u);
    ctx->pc = 0x3FCB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCB70u;
            // 0x3fcb74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCB78u; }
        if (ctx->pc != 0x3FCB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCB78u; }
        if (ctx->pc != 0x3FCB78u) { return; }
    }
    ctx->pc = 0x3FCB78u;
label_3fcb78:
    // 0x3fcb78: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3fcb78u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fcb7c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x3fcb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3fcb80: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3fcb80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x3fcb84: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x3fcb84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x3fcb88: 0xc442fba0  lwc1        $f2, -0x460($v0)
    ctx->pc = 0x3fcb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3fcb8c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3fcb8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fcb90: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3fcb90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x3fcb94: 0xc441fba8  lwc1        $f1, -0x458($v0)
    ctx->pc = 0x3fcb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3fcb98: 0xe7a200c0  swc1        $f2, 0xC0($sp)
    ctx->pc = 0x3fcb98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x3fcb9c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3fcb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x3fcba0: 0xc440fbac  lwc1        $f0, -0x454($v0)
    ctx->pc = 0x3fcba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3fcba4: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x3fcba4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x3fcba8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3fcba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x3fcbac: 0x8c42fba4  lw          $v0, -0x45C($v0)
    ctx->pc = 0x3fcbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966180)));
    // 0x3fcbb0: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x3fcbb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x3fcbb4: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x3fcbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x3fcbb8: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x3fcbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3fcbbc: 0xc04cca0  jal         func_133280
    ctx->pc = 0x3FCBBCu;
    SET_GPR_U32(ctx, 31, 0x3FCBC4u);
    ctx->pc = 0x3FCBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCBBCu;
            // 0x3fcbc0: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCBC4u; }
        if (ctx->pc != 0x3FCBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCBC4u; }
        if (ctx->pc != 0x3FCBC4u) { return; }
    }
    ctx->pc = 0x3FCBC4u;
label_3fcbc4:
    // 0x3fcbc4: 0xc076980  jal         func_1DA600
    ctx->pc = 0x3FCBC4u;
    SET_GPR_U32(ctx, 31, 0x3FCBCCu);
    ctx->pc = 0x3FCBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCBC4u;
            // 0x3fcbc8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCBCCu; }
        if (ctx->pc != 0x3FCBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCBCCu; }
        if (ctx->pc != 0x3FCBCCu) { return; }
    }
    ctx->pc = 0x3FCBCCu;
label_3fcbcc:
    // 0x3fcbcc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x3fcbccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3fcbd0: 0xc04cc34  jal         func_1330D0
    ctx->pc = 0x3FCBD0u;
    SET_GPR_U32(ctx, 31, 0x3FCBD8u);
    ctx->pc = 0x3FCBD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCBD0u;
            // 0x3fcbd4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCBD8u; }
        if (ctx->pc != 0x3FCBD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCBD8u; }
        if (ctx->pc != 0x3FCBD8u) { return; }
    }
    ctx->pc = 0x3FCBD8u;
label_3fcbd8:
    // 0x3fcbd8: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3fcbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3fcbdc: 0xc461b840  lwc1        $f1, -0x47C0($v1)
    ctx->pc = 0x3fcbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294948928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3fcbe0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3fcbe0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3fcbe4: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3FCBE4u;
    {
        const bool branch_taken_0x3fcbe4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3fcbe4) {
            ctx->pc = 0x3FCBE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCBE4u;
            // 0x3fcbe8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FCBF4u;
            goto label_3fcbf4;
        }
    }
    ctx->pc = 0x3FCBECu;
    // 0x3fcbec: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3FCBECu;
    {
        const bool branch_taken_0x3fcbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FCBF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCBECu;
            // 0x3fcbf0: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fcbec) {
            ctx->pc = 0x3FCC2Cu;
            goto label_3fcc2c;
        }
    }
    ctx->pc = 0x3FCBF4u;
label_3fcbf4:
    // 0x3fcbf4: 0xc07697c  jal         func_1DA5F0
    ctx->pc = 0x3FCBF4u;
    SET_GPR_U32(ctx, 31, 0x3FCBFCu);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCBFCu; }
        if (ctx->pc != 0x3FCBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCBFCu; }
        if (ctx->pc != 0x3FCBFCu) { return; }
    }
    ctx->pc = 0x3FCBFCu;
label_3fcbfc:
    // 0x3fcbfc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3fcbfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fcc00: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3fcc00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3fcc04: 0xc04cd60  jal         func_133580
    ctx->pc = 0x3FCC04u;
    SET_GPR_U32(ctx, 31, 0x3FCC0Cu);
    ctx->pc = 0x3FCC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCC04u;
            // 0x3fcc08: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCC0Cu; }
        if (ctx->pc != 0x3FCC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCC0Cu; }
        if (ctx->pc != 0x3FCC0Cu) { return; }
    }
    ctx->pc = 0x3FCC0Cu;
label_3fcc0c:
    // 0x3fcc0c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3fcc0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fcc10: 0xc04c650  jal         func_131940
    ctx->pc = 0x3FCC10u;
    SET_GPR_U32(ctx, 31, 0x3FCC18u);
    ctx->pc = 0x3FCC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCC10u;
            // 0x3fcc14: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCC18u; }
        if (ctx->pc != 0x3FCC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCC18u; }
        if (ctx->pc != 0x3FCC18u) { return; }
    }
    ctx->pc = 0x3FCC18u;
label_3fcc18:
    // 0x3fcc18: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x3fcc18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x3fcc1c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x3fcc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3fcc20: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x3fcc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
    // 0x3fcc24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3fcc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3fcc28: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3fcc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3fcc2c:
    // 0x3fcc2c: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x3fcc2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3fcc30: 0x10200133  beqz        $at, . + 4 + (0x133 << 2)
    ctx->pc = 0x3FCC30u;
    {
        const bool branch_taken_0x3fcc30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FCC34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCC30u;
            // 0x3fcc34: 0xae830044  sw          $v1, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fcc30) {
            ctx->pc = 0x3FD100u;
            goto label_3fd100;
        }
    }
    ctx->pc = 0x3FCC38u;
    // 0x3fcc38: 0x8e840060  lw          $a0, 0x60($s4)
    ctx->pc = 0x3fcc38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x3fcc3c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3fcc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3fcc40: 0x5083000d  beql        $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3FCC40u;
    {
        const bool branch_taken_0x3fcc40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fcc40) {
            ctx->pc = 0x3FCC44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCC40u;
            // 0x3fcc44: 0x8e830100  lw          $v1, 0x100($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FCC78u;
            goto label_3fcc78;
        }
    }
    ctx->pc = 0x3FCC48u;
    // 0x3fcc48: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3fcc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3fcc4c: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3FCC4Cu;
    {
        const bool branch_taken_0x3fcc4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fcc4c) {
            ctx->pc = 0x3FCC74u;
            goto label_3fcc74;
        }
    }
    ctx->pc = 0x3FCC54u;
    // 0x3fcc54: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3fcc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3fcc58: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3FCC58u;
    {
        const bool branch_taken_0x3fcc58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fcc58) {
            ctx->pc = 0x3FCC74u;
            goto label_3fcc74;
        }
    }
    ctx->pc = 0x3FCC60u;
    // 0x3fcc60: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3fcc60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3fcc64: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3FCC64u;
    {
        const bool branch_taken_0x3fcc64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3fcc64) {
            ctx->pc = 0x3FCC74u;
            goto label_3fcc74;
        }
    }
    ctx->pc = 0x3FCC6Cu;
    // 0x3fcc6c: 0x10000125  b           . + 4 + (0x125 << 2)
    ctx->pc = 0x3FCC6Cu;
    {
        const bool branch_taken_0x3fcc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FCC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCC6Cu;
            // 0x3fcc70: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fcc6c) {
            ctx->pc = 0x3FD104u;
            goto label_3fd104;
        }
    }
    ctx->pc = 0x3FCC74u;
label_3fcc74:
    // 0x3fcc74: 0x8e830100  lw          $v1, 0x100($s4)
    ctx->pc = 0x3fcc74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
label_3fcc78:
    // 0x3fcc78: 0x10600091  beqz        $v1, . + 4 + (0x91 << 2)
    ctx->pc = 0x3FCC78u;
    {
        const bool branch_taken_0x3fcc78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FCC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCC78u;
            // 0x3fcc7c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fcc78) {
            ctx->pc = 0x3FCEC0u;
            goto label_3fcec0;
        }
    }
    ctx->pc = 0x3FCC80u;
    // 0x3fcc80: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x3fcc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3fcc84:
    // 0x3fcc84: 0x16a20036  bne         $s5, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x3FCC84u;
    {
        const bool branch_taken_0x3fcc84 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x3fcc84) {
            ctx->pc = 0x3FCD60u;
            goto label_3fcd60;
        }
    }
    ctx->pc = 0x3FCC8Cu;
    // 0x3fcc8c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3fcc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x3fcc90: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3fcc90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3fcc94: 0x6a20004  bltzl       $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x3FCC94u;
    {
        const bool branch_taken_0x3fcc94 = (GPR_S32(ctx, 21) < 0);
        if (branch_taken_0x3fcc94) {
            ctx->pc = 0x3FCC98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCC94u;
            // 0x3fcc98: 0x151842  srl         $v1, $s5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FCCA8u;
            goto label_3fcca8;
        }
    }
    ctx->pc = 0x3FCC9Cu;
    // 0x3fcc9c: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x3fcc9cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3fcca0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3FCCA0u;
    {
        const bool branch_taken_0x3fcca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FCCA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCCA0u;
            // 0x3fcca4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fcca0) {
            ctx->pc = 0x3FCCC0u;
            goto label_3fccc0;
        }
    }
    ctx->pc = 0x3FCCA8u;
label_3fcca8:
    // 0x3fcca8: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x3fcca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x3fccac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3fccacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3fccb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3fccb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3fccb4: 0x0  nop
    ctx->pc = 0x3fccb4u;
    // NOP
    // 0x3fccb8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3fccb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3fccbc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3fccbcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3fccc0:
    // 0x3fccc0: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x3fccc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x3fccc4: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x3fccc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
    // 0x3fccc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3fccc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3fcccc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x3fccccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3fccd0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3fccd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3fccd4: 0x0  nop
    ctx->pc = 0x3fccd4u;
    // NOP
    // 0x3fccd8: 0x46006018  adda.s      $f12, $f0
    ctx->pc = 0x3fccd8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x3fccdc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3fccdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3fcce0: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x3FCCE0u;
    SET_GPR_U32(ctx, 31, 0x3FCCE8u);
    ctx->pc = 0x3FCCE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCCE0u;
            // 0x3fcce4: 0x4601139c  madd.s      $f14, $f2, $f1 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCCE8u; }
        if (ctx->pc != 0x3FCCE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCCE8u; }
        if (ctx->pc != 0x3FCCE8u) { return; }
    }
    ctx->pc = 0x3FCCE8u;
label_3fcce8:
    // 0x3fcce8: 0xc68c0070  lwc1        $f12, 0x70($s4)
    ctx->pc = 0x3fcce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3fccec: 0xc68d0074  lwc1        $f13, 0x74($s4)
    ctx->pc = 0x3fccecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3fccf0: 0xc68e0078  lwc1        $f14, 0x78($s4)
    ctx->pc = 0x3fccf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3fccf4: 0xc04f3fc  jal         func_13CFF0
    ctx->pc = 0x3FCCF4u;
    SET_GPR_U32(ctx, 31, 0x3FCCFCu);
    ctx->pc = 0x3FCCF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCCF4u;
            // 0x3fccf8: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCCFCu; }
        if (ctx->pc != 0x3FCCFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCCFCu; }
        if (ctx->pc != 0x3FCCFCu) { return; }
    }
    ctx->pc = 0x3FCCFCu;
label_3fccfc:
    // 0x3fccfc: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3fccfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3fcd00: 0x268600c4  addiu       $a2, $s4, 0xC4
    ctx->pc = 0x3fcd00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 196));
    // 0x3fcd04: 0xc04cd80  jal         func_133600
    ctx->pc = 0x3FCD04u;
    SET_GPR_U32(ctx, 31, 0x3FCD0Cu);
    ctx->pc = 0x3FCD08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCD04u;
            // 0x3fcd08: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133600u;
    if (runtime->hasFunction(0x133600u)) {
        auto targetFn = runtime->lookupFunction(0x133600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCD0Cu; }
        if (ctx->pc != 0x3FCD0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133600_0x133600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCD0Cu; }
        if (ctx->pc != 0x3FCD0Cu) { return; }
    }
    ctx->pc = 0x3FCD0Cu;
label_3fcd0c:
    // 0x3fcd0c: 0xc7ac00e0  lwc1        $f12, 0xE0($sp)
    ctx->pc = 0x3fcd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3fcd10: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3fcd10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3fcd14: 0xc7ad00e4  lwc1        $f13, 0xE4($sp)
    ctx->pc = 0x3fcd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3fcd18: 0xc7ae00e8  lwc1        $f14, 0xE8($sp)
    ctx->pc = 0x3fcd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3fcd1c: 0xc04ce64  jal         func_133990
    ctx->pc = 0x3FCD1Cu;
    SET_GPR_U32(ctx, 31, 0x3FCD24u);
    ctx->pc = 0x3FCD20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCD1Cu;
            // 0x3fcd20: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCD24u; }
        if (ctx->pc != 0x3FCD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCD24u; }
        if (ctx->pc != 0x3FCD24u) { return; }
    }
    ctx->pc = 0x3FCD24u;
label_3fcd24:
    // 0x3fcd24: 0xc6800104  lwc1        $f0, 0x104($s4)
    ctx->pc = 0x3fcd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3fcd28: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3fcd28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x3fcd2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3fcd2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3fcd30: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3fcd30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3fcd34: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3fcd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3fcd38: 0x46010383  div.s       $f14, $f0, $f1
    ctx->pc = 0x3fcd38u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[14] = ctx->f[0] / ctx->f[1];
    // 0x3fcd3c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3fcd3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fcd40: 0xc68d0094  lwc1        $f13, 0x94($s4)
    ctx->pc = 0x3fcd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3fcd44: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3fcd44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3fcd48: 0x0  nop
    ctx->pc = 0x3fcd48u;
    // NOP
    // 0x3fcd4c: 0x0  nop
    ctx->pc = 0x3fcd4cu;
    // NOP
    // 0x3fcd50: 0xc04ce50  jal         func_133940
    ctx->pc = 0x3FCD50u;
    SET_GPR_U32(ctx, 31, 0x3FCD58u);
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCD58u; }
        if (ctx->pc != 0x3FCD58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCD58u; }
        if (ctx->pc != 0x3FCD58u) { return; }
    }
    ctx->pc = 0x3FCD58u;
label_3fcd58:
    // 0x3fcd58: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x3FCD58u;
    {
        const bool branch_taken_0x3fcd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fcd58) {
            ctx->pc = 0x3FCE18u;
            goto label_3fce18;
        }
    }
    ctx->pc = 0x3FCD60u;
label_3fcd60:
    // 0x3fcd60: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3fcd60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x3fcd64: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3fcd64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3fcd68: 0x6a20004  bltzl       $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x3FCD68u;
    {
        const bool branch_taken_0x3fcd68 = (GPR_S32(ctx, 21) < 0);
        if (branch_taken_0x3fcd68) {
            ctx->pc = 0x3FCD6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCD68u;
            // 0x3fcd6c: 0x151842  srl         $v1, $s5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FCD7Cu;
            goto label_3fcd7c;
        }
    }
    ctx->pc = 0x3FCD70u;
    // 0x3fcd70: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x3fcd70u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3fcd74: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3FCD74u;
    {
        const bool branch_taken_0x3fcd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FCD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCD74u;
            // 0x3fcd78: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fcd74) {
            ctx->pc = 0x3FCD94u;
            goto label_3fcd94;
        }
    }
    ctx->pc = 0x3FCD7Cu;
label_3fcd7c:
    // 0x3fcd7c: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x3fcd7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x3fcd80: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3fcd80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3fcd84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3fcd84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3fcd88: 0x0  nop
    ctx->pc = 0x3fcd88u;
    // NOP
    // 0x3fcd8c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3fcd8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3fcd90: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3fcd90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3fcd94:
    // 0x3fcd94: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x3fcd94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x3fcd98: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x3fcd98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
    // 0x3fcd9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3fcd9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3fcda0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3fcda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3fcda4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3fcda4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3fcda8: 0x0  nop
    ctx->pc = 0x3fcda8u;
    // NOP
    // 0x3fcdac: 0x46006018  adda.s      $f12, $f0
    ctx->pc = 0x3fcdacu;
    ctx->f[31] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x3fcdb0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3fcdb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3fcdb4: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x3FCDB4u;
    SET_GPR_U32(ctx, 31, 0x3FCDBCu);
    ctx->pc = 0x3FCDB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCDB4u;
            // 0x3fcdb8: 0x4601139c  madd.s      $f14, $f2, $f1 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCDBCu; }
        if (ctx->pc != 0x3FCDBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCDBCu; }
        if (ctx->pc != 0x3FCDBCu) { return; }
    }
    ctx->pc = 0x3FCDBCu;
label_3fcdbc:
    // 0x3fcdbc: 0xc68c0070  lwc1        $f12, 0x70($s4)
    ctx->pc = 0x3fcdbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3fcdc0: 0xc68d0074  lwc1        $f13, 0x74($s4)
    ctx->pc = 0x3fcdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3fcdc4: 0xc68e0078  lwc1        $f14, 0x78($s4)
    ctx->pc = 0x3fcdc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3fcdc8: 0xc04f3fc  jal         func_13CFF0
    ctx->pc = 0x3FCDC8u;
    SET_GPR_U32(ctx, 31, 0x3FCDD0u);
    ctx->pc = 0x3FCDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCDC8u;
            // 0x3fcdcc: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCDD0u; }
        if (ctx->pc != 0x3FCDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCDD0u; }
        if (ctx->pc != 0x3FCDD0u) { return; }
    }
    ctx->pc = 0x3FCDD0u;
label_3fcdd0:
    // 0x3fcdd0: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3fcdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3fcdd4: 0x268600c4  addiu       $a2, $s4, 0xC4
    ctx->pc = 0x3fcdd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 196));
    // 0x3fcdd8: 0xc04cd80  jal         func_133600
    ctx->pc = 0x3FCDD8u;
    SET_GPR_U32(ctx, 31, 0x3FCDE0u);
    ctx->pc = 0x3FCDDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCDD8u;
            // 0x3fcddc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133600u;
    if (runtime->hasFunction(0x133600u)) {
        auto targetFn = runtime->lookupFunction(0x133600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCDE0u; }
        if (ctx->pc != 0x3FCDE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133600_0x133600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCDE0u; }
        if (ctx->pc != 0x3FCDE0u) { return; }
    }
    ctx->pc = 0x3FCDE0u;
label_3fcde0:
    // 0x3fcde0: 0xc7ac00d0  lwc1        $f12, 0xD0($sp)
    ctx->pc = 0x3fcde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3fcde4: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3fcde4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3fcde8: 0xc7ad00d4  lwc1        $f13, 0xD4($sp)
    ctx->pc = 0x3fcde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3fcdec: 0xc7ae00d8  lwc1        $f14, 0xD8($sp)
    ctx->pc = 0x3fcdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3fcdf0: 0xc04ce64  jal         func_133990
    ctx->pc = 0x3FCDF0u;
    SET_GPR_U32(ctx, 31, 0x3FCDF8u);
    ctx->pc = 0x3FCDF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCDF0u;
            // 0x3fcdf4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCDF8u; }
        if (ctx->pc != 0x3FCDF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCDF8u; }
        if (ctx->pc != 0x3FCDF8u) { return; }
    }
    ctx->pc = 0x3FCDF8u;
label_3fcdf8:
    // 0x3fcdf8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3fcdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3fcdfc: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3fcdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3fce00: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3fce00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3fce04: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3fce04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fce08: 0xc68d0094  lwc1        $f13, 0x94($s4)
    ctx->pc = 0x3fce08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3fce0c: 0xc04ce50  jal         func_133940
    ctx->pc = 0x3FCE0Cu;
    SET_GPR_U32(ctx, 31, 0x3FCE14u);
    ctx->pc = 0x3FCE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCE0Cu;
            // 0x3fce10: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCE14u; }
        if (ctx->pc != 0x3FCE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCE14u; }
        if (ctx->pc != 0x3FCE14u) { return; }
    }
    ctx->pc = 0x3FCE14u;
label_3fce14:
    // 0x3fce14: 0x0  nop
    ctx->pc = 0x3fce14u;
    // NOP
label_3fce18:
    // 0x3fce18: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3fce18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3fce1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fce1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fce20: 0xc04cd60  jal         func_133580
    ctx->pc = 0x3FCE20u;
    SET_GPR_U32(ctx, 31, 0x3FCE28u);
    ctx->pc = 0x3FCE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCE20u;
            // 0x3fce24: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCE28u; }
        if (ctx->pc != 0x3FCE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCE28u; }
        if (ctx->pc != 0x3FCE28u) { return; }
    }
    ctx->pc = 0x3FCE28u;
label_3fce28:
    // 0x3fce28: 0xc04e738  jal         func_139CE0
    ctx->pc = 0x3FCE28u;
    SET_GPR_U32(ctx, 31, 0x3FCE30u);
    ctx->pc = 0x3FCE2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCE28u;
            // 0x3fce2c: 0x8e640024  lw          $a0, 0x24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCE30u; }
        if (ctx->pc != 0x3FCE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCE30u; }
        if (ctx->pc != 0x3FCE30u) { return; }
    }
    ctx->pc = 0x3FCE30u;
label_3fce30:
    // 0x3fce30: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x3fce30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x3fce34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fce34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fce38: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x3fce38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x3fce3c: 0xc04e4a4  jal         func_139290
    ctx->pc = 0x3FCE3Cu;
    SET_GPR_U32(ctx, 31, 0x3FCE44u);
    ctx->pc = 0x3FCE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCE3Cu;
            // 0x3fce40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCE44u; }
        if (ctx->pc != 0x3FCE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCE44u; }
        if (ctx->pc != 0x3FCE44u) { return; }
    }
    ctx->pc = 0x3FCE44u;
label_3fce44:
    // 0x3fce44: 0x8e660020  lw          $a2, 0x20($s3)
    ctx->pc = 0x3fce44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x3fce48: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x3fce48u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x3fce4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3fce4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fce50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3fce50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fce54: 0x27a70130  addiu       $a3, $sp, 0x130
    ctx->pc = 0x3fce54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3fce58: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x3fce58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
    // 0x3fce5c: 0xc04cfcc  jal         func_133F30
    ctx->pc = 0x3FCE5Cu;
    SET_GPR_U32(ctx, 31, 0x3FCE64u);
    ctx->pc = 0x3FCE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCE5Cu;
            // 0x3fce60: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCE64u; }
        if (ctx->pc != 0x3FCE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCE64u; }
        if (ctx->pc != 0x3FCE64u) { return; }
    }
    ctx->pc = 0x3FCE64u;
label_3fce64:
    // 0x3fce64: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3fce64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x3fce68: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x3fce68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
    // 0x3fce6c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3fce6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3fce70: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3FCE70u;
    {
        const bool branch_taken_0x3fce70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fce70) {
            ctx->pc = 0x3FCE90u;
            goto label_3fce90;
        }
    }
    ctx->pc = 0x3FCE78u;
    // 0x3fce78: 0xc68c00f8  lwc1        $f12, 0xF8($s4)
    ctx->pc = 0x3fce78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3fce7c: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x3fce7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x3fce80: 0x8e660034  lw          $a2, 0x34($s3)
    ctx->pc = 0x3fce80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x3fce84: 0xc054bbc  jal         func_152EF0
    ctx->pc = 0x3FCE84u;
    SET_GPR_U32(ctx, 31, 0x3FCE8Cu);
    ctx->pc = 0x3FCE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCE84u;
            // 0x3fce88: 0x8e640030  lw          $a0, 0x30($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCE8Cu; }
        if (ctx->pc != 0x3FCE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCE8Cu; }
        if (ctx->pc != 0x3FCE8Cu) { return; }
    }
    ctx->pc = 0x3FCE8Cu;
label_3fce8c:
    // 0x3fce8c: 0x0  nop
    ctx->pc = 0x3fce8cu;
    // NOP
label_3fce90:
    // 0x3fce90: 0x8e640030  lw          $a0, 0x30($s3)
    ctx->pc = 0x3fce90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x3fce94: 0x3c020280  lui         $v0, 0x280
    ctx->pc = 0x3fce94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)640 << 16));
    // 0x3fce98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3fce98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fce9c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3fce9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fcea0: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3fcea0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x3fcea4: 0xc054c2c  jal         func_1530B0
    ctx->pc = 0x3FCEA4u;
    SET_GPR_U32(ctx, 31, 0x3FCEACu);
    ctx->pc = 0x3FCEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCEA4u;
            // 0x3fcea8: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCEACu; }
        if (ctx->pc != 0x3FCEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCEACu; }
        if (ctx->pc != 0x3FCEACu) { return; }
    }
    ctx->pc = 0x3FCEACu;
label_3fceac:
    // 0x3fceac: 0x8e830100  lw          $v1, 0x100($s4)
    ctx->pc = 0x3fceacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
    // 0x3fceb0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3fceb0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3fceb4: 0x2a3102b  sltu        $v0, $s5, $v1
    ctx->pc = 0x3fceb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3fceb8: 0x5440ff72  bnel        $v0, $zero, . + 4 + (-0x8E << 2)
    ctx->pc = 0x3FCEB8u;
    {
        const bool branch_taken_0x3fceb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fceb8) {
            ctx->pc = 0x3FCEBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCEB8u;
            // 0x3fcebc: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FCC84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3fcc84;
        }
    }
    ctx->pc = 0x3FCEC0u;
label_3fcec0:
    // 0x3fcec0: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x3fcec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
    // 0x3fcec4: 0xc68100a4  lwc1        $f1, 0xA4($s4)
    ctx->pc = 0x3fcec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3fcec8: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3fcec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3fcecc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3fceccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3fced0: 0xc68c00a0  lwc1        $f12, 0xA0($s4)
    ctx->pc = 0x3fced0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3fced4: 0xc68e00a8  lwc1        $f14, 0xA8($s4)
    ctx->pc = 0x3fced4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3fced8: 0xc04f3fc  jal         func_13CFF0
    ctx->pc = 0x3FCED8u;
    SET_GPR_U32(ctx, 31, 0x3FCEE0u);
    ctx->pc = 0x3FCEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCED8u;
            // 0x3fcedc: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCEE0u; }
        if (ctx->pc != 0x3FCEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCEE0u; }
        if (ctx->pc != 0x3FCEE0u) { return; }
    }
    ctx->pc = 0x3FCEE0u;
label_3fcee0:
    // 0x3fcee0: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3fcee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3fcee4: 0x268600c4  addiu       $a2, $s4, 0xC4
    ctx->pc = 0x3fcee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 196));
    // 0x3fcee8: 0xc04cd80  jal         func_133600
    ctx->pc = 0x3FCEE8u;
    SET_GPR_U32(ctx, 31, 0x3FCEF0u);
    ctx->pc = 0x3FCEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCEE8u;
            // 0x3fceec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133600u;
    if (runtime->hasFunction(0x133600u)) {
        auto targetFn = runtime->lookupFunction(0x133600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCEF0u; }
        if (ctx->pc != 0x3FCEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133600_0x133600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCEF0u; }
        if (ctx->pc != 0x3FCEF0u) { return; }
    }
    ctx->pc = 0x3FCEF0u;
label_3fcef0:
    // 0x3fcef0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3fcef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3fcef4: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3fcef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3fcef8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3fcef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3fcefc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3fcefcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fcf00: 0xc68d0094  lwc1        $f13, 0x94($s4)
    ctx->pc = 0x3fcf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3fcf04: 0xc04ce50  jal         func_133940
    ctx->pc = 0x3FCF04u;
    SET_GPR_U32(ctx, 31, 0x3FCF0Cu);
    ctx->pc = 0x3FCF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCF04u;
            // 0x3fcf08: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCF0Cu; }
        if (ctx->pc != 0x3FCF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCF0Cu; }
        if (ctx->pc != 0x3FCF0Cu) { return; }
    }
    ctx->pc = 0x3FCF0Cu;
label_3fcf0c:
    // 0x3fcf0c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3fcf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3fcf10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fcf10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fcf14: 0xc04cd60  jal         func_133580
    ctx->pc = 0x3FCF14u;
    SET_GPR_U32(ctx, 31, 0x3FCF1Cu);
    ctx->pc = 0x3FCF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCF14u;
            // 0x3fcf18: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCF1Cu; }
        if (ctx->pc != 0x3FCF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCF1Cu; }
        if (ctx->pc != 0x3FCF1Cu) { return; }
    }
    ctx->pc = 0x3FCF1Cu;
label_3fcf1c:
    // 0x3fcf1c: 0xc04e738  jal         func_139CE0
    ctx->pc = 0x3FCF1Cu;
    SET_GPR_U32(ctx, 31, 0x3FCF24u);
    ctx->pc = 0x3FCF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCF1Cu;
            // 0x3fcf20: 0x8e640044  lw          $a0, 0x44($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCF24u; }
        if (ctx->pc != 0x3FCF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCF24u; }
        if (ctx->pc != 0x3FCF24u) { return; }
    }
    ctx->pc = 0x3FCF24u;
label_3fcf24:
    // 0x3fcf24: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x3fcf24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x3fcf28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fcf28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fcf2c: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x3fcf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x3fcf30: 0xc04e4a4  jal         func_139290
    ctx->pc = 0x3FCF30u;
    SET_GPR_U32(ctx, 31, 0x3FCF38u);
    ctx->pc = 0x3FCF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCF30u;
            // 0x3fcf34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCF38u; }
        if (ctx->pc != 0x3FCF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCF38u; }
        if (ctx->pc != 0x3FCF38u) { return; }
    }
    ctx->pc = 0x3FCF38u;
label_3fcf38:
    // 0x3fcf38: 0x8e8200ec  lw          $v0, 0xEC($s4)
    ctx->pc = 0x3fcf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 236)));
    // 0x3fcf3c: 0xc68c00f4  lwc1        $f12, 0xF4($s4)
    ctx->pc = 0x3fcf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3fcf40: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x3fcf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x3fcf44: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3fcf44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3fcf48: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x3fcf48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3fcf4c: 0x4503000b  bc1tl       . + 4 + (0xB << 2)
    ctx->pc = 0x3FCF4Cu;
    {
        const bool branch_taken_0x3fcf4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3fcf4c) {
            ctx->pc = 0x3FCF50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCF4Cu;
            // 0x3fcf50: 0x8e660040  lw          $a2, 0x40($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FCF7Cu;
            goto label_3fcf7c;
        }
    }
    ctx->pc = 0x3FCF54u;
    // 0x3fcf54: 0x8e660040  lw          $a2, 0x40($s3)
    ctx->pc = 0x3fcf54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x3fcf58: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x3fcf58u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x3fcf5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3fcf5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fcf60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3fcf60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fcf64: 0x27a70130  addiu       $a3, $sp, 0x130
    ctx->pc = 0x3fcf64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3fcf68: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x3fcf68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
    // 0x3fcf6c: 0xc04cfcc  jal         func_133F30
    ctx->pc = 0x3FCF6Cu;
    SET_GPR_U32(ctx, 31, 0x3FCF74u);
    ctx->pc = 0x3FCF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCF6Cu;
            // 0x3fcf70: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCF74u; }
        if (ctx->pc != 0x3FCF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCF74u; }
        if (ctx->pc != 0x3FCF74u) { return; }
    }
    ctx->pc = 0x3FCF74u;
label_3fcf74:
    // 0x3fcf74: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3FCF74u;
    {
        const bool branch_taken_0x3fcf74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fcf74) {
            ctx->pc = 0x3FCF9Cu;
            goto label_3fcf9c;
        }
    }
    ctx->pc = 0x3FCF7Cu;
label_3fcf7c:
    // 0x3fcf7c: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x3fcf7cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
    // 0x3fcf80: 0x8e670048  lw          $a3, 0x48($s3)
    ctx->pc = 0x3fcf80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x3fcf84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3fcf84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fcf88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3fcf88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fcf8c: 0x27a80130  addiu       $t0, $sp, 0x130
    ctx->pc = 0x3fcf8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3fcf90: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x3fcf90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
    // 0x3fcf94: 0xc04cff4  jal         func_133FD0
    ctx->pc = 0x3FCF94u;
    SET_GPR_U32(ctx, 31, 0x3FCF9Cu);
    ctx->pc = 0x3FCF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCF94u;
            // 0x3fcf98: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCF9Cu; }
        if (ctx->pc != 0x3FCF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCF9Cu; }
        if (ctx->pc != 0x3FCF9Cu) { return; }
    }
    ctx->pc = 0x3FCF9Cu;
label_3fcf9c:
    // 0x3fcf9c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3fcf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x3fcfa0: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x3fcfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
    // 0x3fcfa4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3fcfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3fcfa8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3FCFA8u;
    {
        const bool branch_taken_0x3fcfa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fcfa8) {
            ctx->pc = 0x3FCFACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCFA8u;
            // 0x3fcfac: 0x8e640050  lw          $a0, 0x50($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FCFC8u;
            goto label_3fcfc8;
        }
    }
    ctx->pc = 0x3FCFB0u;
    // 0x3fcfb0: 0xc68c00f8  lwc1        $f12, 0xF8($s4)
    ctx->pc = 0x3fcfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3fcfb4: 0x8e650040  lw          $a1, 0x40($s3)
    ctx->pc = 0x3fcfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x3fcfb8: 0x8e660054  lw          $a2, 0x54($s3)
    ctx->pc = 0x3fcfb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x3fcfbc: 0xc054bbc  jal         func_152EF0
    ctx->pc = 0x3FCFBCu;
    SET_GPR_U32(ctx, 31, 0x3FCFC4u);
    ctx->pc = 0x3FCFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCFBCu;
            // 0x3fcfc0: 0x8e640050  lw          $a0, 0x50($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCFC4u; }
        if (ctx->pc != 0x3FCFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCFC4u; }
        if (ctx->pc != 0x3FCFC4u) { return; }
    }
    ctx->pc = 0x3FCFC4u;
label_3fcfc4:
    // 0x3fcfc4: 0x8e640050  lw          $a0, 0x50($s3)
    ctx->pc = 0x3fcfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_3fcfc8:
    // 0x3fcfc8: 0x3c020280  lui         $v0, 0x280
    ctx->pc = 0x3fcfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)640 << 16));
    // 0x3fcfcc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3fcfccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fcfd0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3fcfd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fcfd4: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3fcfd4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x3fcfd8: 0xc054c2c  jal         func_1530B0
    ctx->pc = 0x3FCFD8u;
    SET_GPR_U32(ctx, 31, 0x3FCFE0u);
    ctx->pc = 0x3FCFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCFD8u;
            // 0x3fcfdc: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCFE0u; }
        if (ctx->pc != 0x3FCFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCFE0u; }
        if (ctx->pc != 0x3FCFE0u) { return; }
    }
    ctx->pc = 0x3FCFE0u;
label_3fcfe0:
    // 0x3fcfe0: 0xc04e738  jal         func_139CE0
    ctx->pc = 0x3FCFE0u;
    SET_GPR_U32(ctx, 31, 0x3FCFE8u);
    ctx->pc = 0x3FCFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FCFE0u;
            // 0x3fcfe4: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCFE8u; }
        if (ctx->pc != 0x3FCFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FCFE8u; }
        if (ctx->pc != 0x3FCFE8u) { return; }
    }
    ctx->pc = 0x3FCFE8u;
label_3fcfe8:
    // 0x3fcfe8: 0xc6810074  lwc1        $f1, 0x74($s4)
    ctx->pc = 0x3fcfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3fcfec: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x3fcfecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
    // 0x3fcff0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3fcff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3fcff4: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3fcff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3fcff8: 0xc68c0070  lwc1        $f12, 0x70($s4)
    ctx->pc = 0x3fcff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3fcffc: 0xc68e0078  lwc1        $f14, 0x78($s4)
    ctx->pc = 0x3fcffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3fd000: 0xc04f3fc  jal         func_13CFF0
    ctx->pc = 0x3FD000u;
    SET_GPR_U32(ctx, 31, 0x3FD008u);
    ctx->pc = 0x3FD004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD000u;
            // 0x3fd004: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD008u; }
        if (ctx->pc != 0x3FD008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD008u; }
        if (ctx->pc != 0x3FD008u) { return; }
    }
    ctx->pc = 0x3FD008u;
label_3fd008:
    // 0x3fd008: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3fd008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3fd00c: 0x268600c4  addiu       $a2, $s4, 0xC4
    ctx->pc = 0x3fd00cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 196));
    // 0x3fd010: 0xc04cd80  jal         func_133600
    ctx->pc = 0x3FD010u;
    SET_GPR_U32(ctx, 31, 0x3FD018u);
    ctx->pc = 0x3FD014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD010u;
            // 0x3fd014: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133600u;
    if (runtime->hasFunction(0x133600u)) {
        auto targetFn = runtime->lookupFunction(0x133600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD018u; }
        if (ctx->pc != 0x3FD018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133600_0x133600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD018u; }
        if (ctx->pc != 0x3FD018u) { return; }
    }
    ctx->pc = 0x3FD018u;
label_3fd018:
    // 0x3fd018: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3fd018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3fd01c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3fd01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3fd020: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3fd020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3fd024: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3fd024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fd028: 0xc68d0094  lwc1        $f13, 0x94($s4)
    ctx->pc = 0x3fd028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3fd02c: 0xc04ce50  jal         func_133940
    ctx->pc = 0x3FD02Cu;
    SET_GPR_U32(ctx, 31, 0x3FD034u);
    ctx->pc = 0x3FD030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD02Cu;
            // 0x3fd030: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD034u; }
        if (ctx->pc != 0x3FD034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD034u; }
        if (ctx->pc != 0x3FD034u) { return; }
    }
    ctx->pc = 0x3FD034u;
label_3fd034:
    // 0x3fd034: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3fd034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3fd038: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fd038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fd03c: 0xc04cd60  jal         func_133580
    ctx->pc = 0x3FD03Cu;
    SET_GPR_U32(ctx, 31, 0x3FD044u);
    ctx->pc = 0x3FD040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD03Cu;
            // 0x3fd040: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD044u; }
        if (ctx->pc != 0x3FD044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD044u; }
        if (ctx->pc != 0x3FD044u) { return; }
    }
    ctx->pc = 0x3FD044u;
label_3fd044:
    // 0x3fd044: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3fd044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3fd048: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fd048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fd04c: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x3fd04cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x3fd050: 0xc04e4a4  jal         func_139290
    ctx->pc = 0x3FD050u;
    SET_GPR_U32(ctx, 31, 0x3FD058u);
    ctx->pc = 0x3FD054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD050u;
            // 0x3fd054: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD058u; }
        if (ctx->pc != 0x3FD058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD058u; }
        if (ctx->pc != 0x3FD058u) { return; }
    }
    ctx->pc = 0x3FD058u;
label_3fd058:
    // 0x3fd058: 0x8e8200ec  lw          $v0, 0xEC($s4)
    ctx->pc = 0x3fd058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 236)));
    // 0x3fd05c: 0xc68c00f0  lwc1        $f12, 0xF0($s4)
    ctx->pc = 0x3fd05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3fd060: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x3fd060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3fd064: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3fd064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3fd068: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x3fd068u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3fd06c: 0x4503000b  bc1tl       . + 4 + (0xB << 2)
    ctx->pc = 0x3FD06Cu;
    {
        const bool branch_taken_0x3fd06c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3fd06c) {
            ctx->pc = 0x3FD070u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD06Cu;
            // 0x3fd070: 0x8e660000  lw          $a2, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FD09Cu;
            goto label_3fd09c;
        }
    }
    ctx->pc = 0x3FD074u;
    // 0x3fd074: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x3fd074u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3fd078: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x3fd078u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x3fd07c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3fd07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fd080: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3fd080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fd084: 0x27a70130  addiu       $a3, $sp, 0x130
    ctx->pc = 0x3fd084u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3fd088: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x3fd088u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
    // 0x3fd08c: 0xc04cfcc  jal         func_133F30
    ctx->pc = 0x3FD08Cu;
    SET_GPR_U32(ctx, 31, 0x3FD094u);
    ctx->pc = 0x3FD090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD08Cu;
            // 0x3fd090: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD094u; }
        if (ctx->pc != 0x3FD094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD094u; }
        if (ctx->pc != 0x3FD094u) { return; }
    }
    ctx->pc = 0x3FD094u;
label_3fd094:
    // 0x3fd094: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3FD094u;
    {
        const bool branch_taken_0x3fd094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fd094) {
            ctx->pc = 0x3FD0BCu;
            goto label_3fd0bc;
        }
    }
    ctx->pc = 0x3FD09Cu;
label_3fd09c:
    // 0x3fd09c: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x3fd09cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
    // 0x3fd0a0: 0x8e670008  lw          $a3, 0x8($s3)
    ctx->pc = 0x3fd0a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x3fd0a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3fd0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fd0a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3fd0a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fd0ac: 0x27a80130  addiu       $t0, $sp, 0x130
    ctx->pc = 0x3fd0acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3fd0b0: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x3fd0b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
    // 0x3fd0b4: 0xc04cff4  jal         func_133FD0
    ctx->pc = 0x3FD0B4u;
    SET_GPR_U32(ctx, 31, 0x3FD0BCu);
    ctx->pc = 0x3FD0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD0B4u;
            // 0x3fd0b8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD0BCu; }
        if (ctx->pc != 0x3FD0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD0BCu; }
        if (ctx->pc != 0x3FD0BCu) { return; }
    }
    ctx->pc = 0x3FD0BCu;
label_3fd0bc:
    // 0x3fd0bc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3fd0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x3fd0c0: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x3fd0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
    // 0x3fd0c4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3fd0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3fd0c8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3FD0C8u;
    {
        const bool branch_taken_0x3fd0c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fd0c8) {
            ctx->pc = 0x3FD0CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD0C8u;
            // 0x3fd0cc: 0x8e640010  lw          $a0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FD0E8u;
            goto label_3fd0e8;
        }
    }
    ctx->pc = 0x3FD0D0u;
    // 0x3fd0d0: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x3fd0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x3fd0d4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x3fd0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3fd0d8: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x3fd0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x3fd0dc: 0xc054bbc  jal         func_152EF0
    ctx->pc = 0x3FD0DCu;
    SET_GPR_U32(ctx, 31, 0x3FD0E4u);
    ctx->pc = 0x3FD0E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD0DCu;
            // 0x3fd0e0: 0xc68c00f8  lwc1        $f12, 0xF8($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD0E4u; }
        if (ctx->pc != 0x3FD0E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD0E4u; }
        if (ctx->pc != 0x3FD0E4u) { return; }
    }
    ctx->pc = 0x3FD0E4u;
label_3fd0e4:
    // 0x3fd0e4: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x3fd0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_3fd0e8:
    // 0x3fd0e8: 0x3c020280  lui         $v0, 0x280
    ctx->pc = 0x3fd0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)640 << 16));
    // 0x3fd0ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3fd0ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fd0f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3fd0f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fd0f4: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3fd0f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x3fd0f8: 0xc054c2c  jal         func_1530B0
    ctx->pc = 0x3FD0F8u;
    SET_GPR_U32(ctx, 31, 0x3FD100u);
    ctx->pc = 0x3FD0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD0F8u;
            // 0x3fd0fc: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD100u; }
        if (ctx->pc != 0x3FD100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD100u; }
        if (ctx->pc != 0x3FD100u) { return; }
    }
    ctx->pc = 0x3FD100u;
label_3fd100:
    // 0x3fd100: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3fd100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3fd104:
    // 0x3fd104: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3fd104u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3fd108: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3fd108u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3fd10c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3fd10cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3fd110: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3fd110u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3fd114: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3fd114u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3fd118: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3fd118u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3fd11c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3fd11cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3fd120: 0x3e00008  jr          $ra
    ctx->pc = 0x3FD120u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FD124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD120u;
            // 0x3fd124: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3FD128u;
    // 0x3fd128: 0x0  nop
    ctx->pc = 0x3fd128u;
    // NOP
    // 0x3fd12c: 0x0  nop
    ctx->pc = 0x3fd12cu;
    // NOP
}
