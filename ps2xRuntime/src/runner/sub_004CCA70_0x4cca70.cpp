#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004CCA70
// Address: 0x4cca70 - 0x4ccd00
void sub_004CCA70_0x4cca70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CCA70_0x4cca70");
#endif

    switch (ctx->pc) {
        case 0x4ccb04u: goto label_4ccb04;
        case 0x4ccb14u: goto label_4ccb14;
        case 0x4ccb28u: goto label_4ccb28;
        case 0x4ccb48u: goto label_4ccb48;
        case 0x4ccb68u: goto label_4ccb68;
        case 0x4ccb74u: goto label_4ccb74;
        case 0x4ccbc0u: goto label_4ccbc0;
        case 0x4ccbc8u: goto label_4ccbc8;
        case 0x4ccbd4u: goto label_4ccbd4;
        case 0x4ccbf0u: goto label_4ccbf0;
        case 0x4ccc00u: goto label_4ccc00;
        case 0x4ccc0cu: goto label_4ccc0c;
        case 0x4ccc3cu: goto label_4ccc3c;
        case 0x4ccc60u: goto label_4ccc60;
        case 0x4ccc80u: goto label_4ccc80;
        case 0x4ccc94u: goto label_4ccc94;
        case 0x4cccacu: goto label_4cccac;
        default: break;
    }

    ctx->pc = 0x4cca70u;

    // 0x4cca70: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x4cca70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x4cca74: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4cca74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x4cca78: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x4cca78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x4cca7c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4cca7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x4cca80: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x4cca80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x4cca84: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4cca84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x4cca88: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x4cca88u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cca8c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4cca8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x4cca90: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4cca90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x4cca94: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4cca94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x4cca98: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4cca98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x4cca9c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4cca9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4ccaa0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4ccaa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4ccaa4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4ccaa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4ccaa8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4ccaa8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4ccaac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4ccaacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ccab0: 0x8c46d130  lw          $a2, -0x2ED0($v0)
    ctx->pc = 0x4ccab0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
    // 0x4ccab4: 0x8c65d120  lw          $a1, -0x2EE0($v1)
    ctx->pc = 0x4ccab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
    // 0x4ccab8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ccab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4ccabc: 0x8cc70130  lw          $a3, 0x130($a2)
    ctx->pc = 0x4ccabcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
    // 0x4ccac0: 0x8c440cd0  lw          $a0, 0xCD0($v0)
    ctx->pc = 0x4ccac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3280)));
    // 0x4ccac4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4ccac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x4ccac8: 0x8c77e370  lw          $s7, -0x1C90($v1)
    ctx->pc = 0x4ccac8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959984)));
    // 0x4ccacc: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x4ccaccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x4ccad0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4ccad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ccad4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ccad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4ccad8: 0x8c910114  lw          $s1, 0x114($a0)
    ctx->pc = 0x4ccad8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x4ccadc: 0x8c56e378  lw          $s6, -0x1C88($v0)
    ctx->pc = 0x4ccadcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
    // 0x4ccae0: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x4ccae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4ccae4: 0x24920114  addiu       $s2, $a0, 0x114
    ctx->pc = 0x4ccae4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 276));
    // 0x4ccae8: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x4ccae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4ccaec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4ccaecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ccaf0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4ccaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4ccaf4: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x4ccaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x4ccaf8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4ccaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4ccafc: 0xc04e4a4  jal         func_139290
    ctx->pc = 0x4CCAFCu;
    SET_GPR_U32(ctx, 31, 0x4CCB04u);
    ctx->pc = 0x4CCB00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCAFCu;
            // 0x4ccb00: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCB04u; }
        if (ctx->pc != 0x4CCB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCB04u; }
        if (ctx->pc != 0x4CCB04u) { return; }
    }
    ctx->pc = 0x4CCB04u;
label_4ccb04:
    // 0x4ccb04: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4ccb04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4ccb08: 0x3c0a02d  daddu       $s4, $fp, $zero
    ctx->pc = 0x4ccb08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ccb0c: 0xc4547550  lwc1        $f20, 0x7550($v0)
    ctx->pc = 0x4ccb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 30032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4ccb10: 0x3c0982d  daddu       $s3, $fp, $zero
    ctx->pc = 0x4ccb10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4ccb14:
    // 0x4ccb14: 0xc68c0070  lwc1        $f12, 0x70($s4)
    ctx->pc = 0x4ccb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4ccb18: 0xc68d0074  lwc1        $f13, 0x74($s4)
    ctx->pc = 0x4ccb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4ccb1c: 0xc68e0078  lwc1        $f14, 0x78($s4)
    ctx->pc = 0x4ccb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x4ccb20: 0xc04f3fc  jal         func_13CFF0
    ctx->pc = 0x4CCB20u;
    SET_GPR_U32(ctx, 31, 0x4CCB28u);
    ctx->pc = 0x4CCB24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCB20u;
            // 0x4ccb24: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCB28u; }
        if (ctx->pc != 0x4CCB28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCB28u; }
        if (ctx->pc != 0x4CCB28u) { return; }
    }
    ctx->pc = 0x4CCB28u;
label_4ccb28:
    // 0x4ccb28: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4ccb28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x4ccb2c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ccb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4ccb30: 0x8c63d130  lw          $v1, -0x2ED0($v1)
    ctx->pc = 0x4ccb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
    // 0x4ccb34: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x4ccb34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x4ccb38: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x4ccb38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
    // 0x4ccb3c: 0x8c750130  lw          $s5, 0x130($v1)
    ctx->pc = 0x4ccb3cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x4ccb40: 0xc07698c  jal         func_1DA630
    ctx->pc = 0x4CCB40u;
    SET_GPR_U32(ctx, 31, 0x4CCB48u);
    ctx->pc = 0x4CCB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCB40u;
            // 0x4ccb44: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCB48u; }
        if (ctx->pc != 0x4CCB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCB48u; }
        if (ctx->pc != 0x4CCB48u) { return; }
    }
    ctx->pc = 0x4CCB48u;
label_4ccb48:
    // 0x4ccb48: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4ccb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4ccb4c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4CCB4Cu;
    {
        const bool branch_taken_0x4ccb4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4ccb4c) {
            ctx->pc = 0x4CCB60u;
            goto label_4ccb60;
        }
    }
    ctx->pc = 0x4CCB54u;
    // 0x4ccb54: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x4CCB54u;
    {
        const bool branch_taken_0x4ccb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CCB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCB54u;
            // 0x4ccb58: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ccb54) {
            ctx->pc = 0x4CCC20u;
            goto label_4ccc20;
        }
    }
    ctx->pc = 0x4CCB5Cu;
    // 0x4ccb5c: 0x0  nop
    ctx->pc = 0x4ccb5cu;
    // NOP
label_4ccb60:
    // 0x4ccb60: 0xc0576f4  jal         func_15DBD0
    ctx->pc = 0x4CCB60u;
    SET_GPR_U32(ctx, 31, 0x4CCB68u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCB68u; }
        if (ctx->pc != 0x4CCB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCB68u; }
        if (ctx->pc != 0x4CCB68u) { return; }
    }
    ctx->pc = 0x4CCB68u;
label_4ccb68:
    // 0x4ccb68: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4ccb68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ccb6c: 0xc076984  jal         func_1DA610
    ctx->pc = 0x4CCB6Cu;
    SET_GPR_U32(ctx, 31, 0x4CCB74u);
    ctx->pc = 0x4CCB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCB6Cu;
            // 0x4ccb70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCB74u; }
        if (ctx->pc != 0x4CCB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCB74u; }
        if (ctx->pc != 0x4CCB74u) { return; }
    }
    ctx->pc = 0x4CCB74u;
label_4ccb74:
    // 0x4ccb74: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4ccb74u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ccb78: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x4ccb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x4ccb7c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4ccb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x4ccb80: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x4ccb80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x4ccb84: 0xc442c990  lwc1        $f2, -0x3670($v0)
    ctx->pc = 0x4ccb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4ccb88: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4ccb88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ccb8c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4ccb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x4ccb90: 0xc441c998  lwc1        $f1, -0x3668($v0)
    ctx->pc = 0x4ccb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4ccb94: 0xe7a20100  swc1        $f2, 0x100($sp)
    ctx->pc = 0x4ccb94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x4ccb98: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4ccb98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x4ccb9c: 0xc440c99c  lwc1        $f0, -0x3664($v0)
    ctx->pc = 0x4ccb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ccba0: 0xe7a10108  swc1        $f1, 0x108($sp)
    ctx->pc = 0x4ccba0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x4ccba4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4ccba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x4ccba8: 0x8c42c994  lw          $v0, -0x366C($v0)
    ctx->pc = 0x4ccba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953364)));
    // 0x4ccbac: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x4ccbacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x4ccbb0: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x4ccbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
    // 0x4ccbb4: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x4ccbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ccbb8: 0xc04cca0  jal         func_133280
    ctx->pc = 0x4CCBB8u;
    SET_GPR_U32(ctx, 31, 0x4CCBC0u);
    ctx->pc = 0x4CCBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCBB8u;
            // 0x4ccbbc: 0xe7a00104  swc1        $f0, 0x104($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCBC0u; }
        if (ctx->pc != 0x4CCBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCBC0u; }
        if (ctx->pc != 0x4CCBC0u) { return; }
    }
    ctx->pc = 0x4CCBC0u;
label_4ccbc0:
    // 0x4ccbc0: 0xc076980  jal         func_1DA600
    ctx->pc = 0x4CCBC0u;
    SET_GPR_U32(ctx, 31, 0x4CCBC8u);
    ctx->pc = 0x4CCBC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCBC0u;
            // 0x4ccbc4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCBC8u; }
        if (ctx->pc != 0x4CCBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCBC8u; }
        if (ctx->pc != 0x4CCBC8u) { return; }
    }
    ctx->pc = 0x4CCBC8u;
label_4ccbc8:
    // 0x4ccbc8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x4ccbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x4ccbcc: 0xc04cc34  jal         func_1330D0
    ctx->pc = 0x4CCBCCu;
    SET_GPR_U32(ctx, 31, 0x4CCBD4u);
    ctx->pc = 0x4CCBD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCBCCu;
            // 0x4ccbd0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCBD4u; }
        if (ctx->pc != 0x4CCBD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCBD4u; }
        if (ctx->pc != 0x4CCBD4u) { return; }
    }
    ctx->pc = 0x4CCBD4u;
label_4ccbd4:
    // 0x4ccbd4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x4ccbd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4ccbd8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x4CCBD8u;
    {
        const bool branch_taken_0x4ccbd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ccbd8) {
            ctx->pc = 0x4CCBE8u;
            goto label_4ccbe8;
        }
    }
    ctx->pc = 0x4CCBE0u;
    // 0x4ccbe0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4CCBE0u;
    {
        const bool branch_taken_0x4ccbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CCBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCBE0u;
            // 0x4ccbe4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ccbe0) {
            ctx->pc = 0x4CCC20u;
            goto label_4ccc20;
        }
    }
    ctx->pc = 0x4CCBE8u;
label_4ccbe8:
    // 0x4ccbe8: 0xc07697c  jal         func_1DA5F0
    ctx->pc = 0x4CCBE8u;
    SET_GPR_U32(ctx, 31, 0x4CCBF0u);
    ctx->pc = 0x4CCBECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCBE8u;
            // 0x4ccbec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCBF0u; }
        if (ctx->pc != 0x4CCBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCBF0u; }
        if (ctx->pc != 0x4CCBF0u) { return; }
    }
    ctx->pc = 0x4CCBF0u;
label_4ccbf0:
    // 0x4ccbf0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4ccbf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ccbf4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x4ccbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x4ccbf8: 0xc04cd60  jal         func_133580
    ctx->pc = 0x4CCBF8u;
    SET_GPR_U32(ctx, 31, 0x4CCC00u);
    ctx->pc = 0x4CCBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCBF8u;
            // 0x4ccbfc: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCC00u; }
        if (ctx->pc != 0x4CCC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCC00u; }
        if (ctx->pc != 0x4CCC00u) { return; }
    }
    ctx->pc = 0x4CCC00u;
label_4ccc00:
    // 0x4ccc00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ccc00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ccc04: 0xc04c650  jal         func_131940
    ctx->pc = 0x4CCC04u;
    SET_GPR_U32(ctx, 31, 0x4CCC0Cu);
    ctx->pc = 0x4CCC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCC04u;
            // 0x4ccc08: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCC0Cu; }
        if (ctx->pc != 0x4CCC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCC0Cu; }
        if (ctx->pc != 0x4CCC0Cu) { return; }
    }
    ctx->pc = 0x4CCC0Cu;
label_4ccc0c:
    // 0x4ccc0c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4ccc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x4ccc10: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x4ccc10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4ccc14: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x4ccc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
    // 0x4ccc18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4ccc18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4ccc1c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4ccc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4ccc20:
    // 0x4ccc20: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x4ccc20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4ccc24: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x4CCC24u;
    {
        const bool branch_taken_0x4ccc24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ccc24) {
            ctx->pc = 0x4CCCB0u;
            goto label_4cccb0;
        }
    }
    ctx->pc = 0x4CCC2Cu;
    // 0x4ccc2c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x4ccc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4ccc30: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x4ccc30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x4ccc34: 0xc04cd60  jal         func_133580
    ctx->pc = 0x4CCC34u;
    SET_GPR_U32(ctx, 31, 0x4CCC3Cu);
    ctx->pc = 0x4CCC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCC34u;
            // 0x4ccc38: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCC3Cu; }
        if (ctx->pc != 0x4CCC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCC3Cu; }
        if (ctx->pc != 0x4CCC3Cu) { return; }
    }
    ctx->pc = 0x4CCC3Cu;
label_4ccc3c:
    // 0x4ccc3c: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x4ccc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x4ccc40: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x4ccc40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x4ccc44: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4ccc44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x4ccc48: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4ccc48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ccc4c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4ccc4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4ccc50: 0x0  nop
    ctx->pc = 0x4ccc50u;
    // NOP
    // 0x4ccc54: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4ccc54u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x4ccc58: 0xc04ce50  jal         func_133940
    ctx->pc = 0x4CCC58u;
    SET_GPR_U32(ctx, 31, 0x4CCC60u);
    ctx->pc = 0x4CCC5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCC58u;
            // 0x4ccc5c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCC60u; }
        if (ctx->pc != 0x4CCC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCC60u; }
        if (ctx->pc != 0x4CCC60u) { return; }
    }
    ctx->pc = 0x4CCC60u;
label_4ccc60:
    // 0x4ccc60: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x4ccc60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x4ccc64: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4ccc64u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x4ccc68: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4ccc68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ccc6c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4ccc6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ccc70: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x4ccc70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x4ccc74: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x4ccc74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
    // 0x4ccc78: 0xc04cfcc  jal         func_133F30
    ctx->pc = 0x4CCC78u;
    SET_GPR_U32(ctx, 31, 0x4CCC80u);
    ctx->pc = 0x4CCC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCC78u;
            // 0x4ccc7c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCC80u; }
        if (ctx->pc != 0x4CCC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCC80u; }
        if (ctx->pc != 0x4CCC80u) { return; }
    }
    ctx->pc = 0x4CCC80u;
label_4ccc80:
    // 0x4ccc80: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x4ccc80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x4ccc84: 0xc66c01b0  lwc1        $f12, 0x1B0($s3)
    ctx->pc = 0x4ccc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4ccc88: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x4ccc88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x4ccc8c: 0xc054bbc  jal         func_152EF0
    ctx->pc = 0x4CCC8Cu;
    SET_GPR_U32(ctx, 31, 0x4CCC94u);
    ctx->pc = 0x4CCC90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCC8Cu;
            // 0x4ccc90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCC94u; }
        if (ctx->pc != 0x4CCC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCC94u; }
        if (ctx->pc != 0x4CCC94u) { return; }
    }
    ctx->pc = 0x4CCC94u;
label_4ccc94:
    // 0x4ccc94: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x4ccc94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x4ccc98: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4ccc98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ccc9c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4ccc9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ccca0: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4ccca0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x4ccca4: 0xc054c2c  jal         func_1530B0
    ctx->pc = 0x4CCCA4u;
    SET_GPR_U32(ctx, 31, 0x4CCCACu);
    ctx->pc = 0x4CCCA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCCA4u;
            // 0x4ccca8: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCCACu; }
        if (ctx->pc != 0x4CCCACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCCACu; }
        if (ctx->pc != 0x4CCCACu) { return; }
    }
    ctx->pc = 0x4CCCACu;
label_4cccac:
    // 0x4cccac: 0x0  nop
    ctx->pc = 0x4cccacu;
    // NOP
label_4cccb0:
    // 0x4cccb0: 0x8fc3022c  lw          $v1, 0x22C($fp)
    ctx->pc = 0x4cccb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 556)));
    // 0x4cccb4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4cccb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x4cccb8: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x4cccb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x4cccbc: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x4cccbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x4cccc0: 0x1460ff94  bnez        $v1, . + 4 + (-0x6C << 2)
    ctx->pc = 0x4CCCC0u;
    {
        const bool branch_taken_0x4cccc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CCCC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCCC0u;
            // 0x4cccc4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cccc0) {
            ctx->pc = 0x4CCB14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ccb14;
        }
    }
    ctx->pc = 0x4CCCC8u;
    // 0x4cccc8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x4cccc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4ccccc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4cccccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4cccd0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x4cccd0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4cccd4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4cccd4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4cccd8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4cccd8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4cccdc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4cccdcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4ccce0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4ccce0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4ccce4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4ccce4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4ccce8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4ccce8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4cccec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4cccecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4cccf0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4cccf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cccf4: 0x3e00008  jr          $ra
    ctx->pc = 0x4CCCF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CCCF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCCF4u;
            // 0x4cccf8: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CCCFCu;
    // 0x4cccfc: 0x0  nop
    ctx->pc = 0x4cccfcu;
    // NOP
}
