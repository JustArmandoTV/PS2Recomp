#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00422A10
// Address: 0x422a10 - 0x422c60
void sub_00422A10_0x422a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00422A10_0x422a10");
#endif

    switch (ctx->pc) {
        case 0x422a94u: goto label_422a94;
        case 0x422ab0u: goto label_422ab0;
        case 0x422abcu: goto label_422abc;
        case 0x422b08u: goto label_422b08;
        case 0x422b10u: goto label_422b10;
        case 0x422b1cu: goto label_422b1c;
        case 0x422b40u: goto label_422b40;
        case 0x422b50u: goto label_422b50;
        case 0x422b5cu: goto label_422b5c;
        case 0x422b84u: goto label_422b84;
        case 0x422b94u: goto label_422b94;
        case 0x422bacu: goto label_422bac;
        case 0x422bbcu: goto label_422bbc;
        case 0x422be0u: goto label_422be0;
        case 0x422c00u: goto label_422c00;
        case 0x422c14u: goto label_422c14;
        case 0x422c2cu: goto label_422c2c;
        default: break;
    }

    ctx->pc = 0x422a10u;

    // 0x422a10: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x422a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x422a14: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x422a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x422a18: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x422a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x422a1c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x422a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x422a20: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x422a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x422a24: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x422a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x422a28: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x422a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x422a2c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x422a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x422a30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x422a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x422a34: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x422a34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422a38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x422a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x422a3c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x422a3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422a40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x422a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x422a44: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x422a44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422a48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x422a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x422a4c: 0x8c46d130  lw          $a2, -0x2ED0($v0)
    ctx->pc = 0x422a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
    // 0x422a50: 0x8c64d120  lw          $a0, -0x2EE0($v1)
    ctx->pc = 0x422a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
    // 0x422a54: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x422a54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x422a58: 0x8cd50130  lw          $s5, 0x130($a2)
    ctx->pc = 0x422a58u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
    // 0x422a5c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x422a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x422a60: 0x8c56e370  lw          $s6, -0x1C90($v0)
    ctx->pc = 0x422a60u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
    // 0x422a64: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x422a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x422a68: 0x8c71e378  lw          $s1, -0x1C88($v1)
    ctx->pc = 0x422a68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
    // 0x422a6c: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x422a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x422a70: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x422a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422a74: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x422a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x422a78: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x422a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
    // 0x422a7c: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x422a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x422a80: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x422a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x422a84: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x422a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x422a88: 0x9286004c  lbu         $a2, 0x4C($s4)
    ctx->pc = 0x422a88u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x422a8c: 0xc07698c  jal         func_1DA630
    ctx->pc = 0x422A8Cu;
    SET_GPR_U32(ctx, 31, 0x422A94u);
    ctx->pc = 0x422A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422A8Cu;
            // 0x422a90: 0x24570010  addiu       $s7, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422A94u; }
        if (ctx->pc != 0x422A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422A94u; }
        if (ctx->pc != 0x422A94u) { return; }
    }
    ctx->pc = 0x422A94u;
label_422a94:
    // 0x422a94: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x422a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x422a98: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x422A98u;
    {
        const bool branch_taken_0x422a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x422a98) {
            ctx->pc = 0x422AA8u;
            goto label_422aa8;
        }
    }
    ctx->pc = 0x422AA0u;
    // 0x422aa0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x422AA0u;
    {
        const bool branch_taken_0x422aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x422AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x422AA0u;
            // 0x422aa4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422aa0) {
            ctx->pc = 0x422B70u;
            goto label_422b70;
        }
    }
    ctx->pc = 0x422AA8u;
label_422aa8:
    // 0x422aa8: 0xc0576f4  jal         func_15DBD0
    ctx->pc = 0x422AA8u;
    SET_GPR_U32(ctx, 31, 0x422AB0u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422AB0u; }
        if (ctx->pc != 0x422AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422AB0u; }
        if (ctx->pc != 0x422AB0u) { return; }
    }
    ctx->pc = 0x422AB0u;
label_422ab0:
    // 0x422ab0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x422ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422ab4: 0xc076984  jal         func_1DA610
    ctx->pc = 0x422AB4u;
    SET_GPR_U32(ctx, 31, 0x422ABCu);
    ctx->pc = 0x422AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422AB4u;
            // 0x422ab8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422ABCu; }
        if (ctx->pc != 0x422ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422ABCu; }
        if (ctx->pc != 0x422ABCu) { return; }
    }
    ctx->pc = 0x422ABCu;
label_422abc:
    // 0x422abc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x422abcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422ac0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x422ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x422ac4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x422ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x422ac8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x422ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422acc: 0xc442ffb0  lwc1        $f2, -0x50($v0)
    ctx->pc = 0x422accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x422ad0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x422ad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422ad4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x422ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x422ad8: 0xc441ffb8  lwc1        $f1, -0x48($v0)
    ctx->pc = 0x422ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x422adc: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x422adcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x422ae0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x422ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x422ae4: 0xc440ffbc  lwc1        $f0, -0x44($v0)
    ctx->pc = 0x422ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x422ae8: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x422ae8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x422aec: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x422aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x422af0: 0x8c42ffb4  lw          $v0, -0x4C($v0)
    ctx->pc = 0x422af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967220)));
    // 0x422af4: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x422af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x422af8: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x422af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x422afc: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x422afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x422b00: 0xc04cca0  jal         func_133280
    ctx->pc = 0x422B00u;
    SET_GPR_U32(ctx, 31, 0x422B08u);
    ctx->pc = 0x422B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422B00u;
            // 0x422b04: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422B08u; }
        if (ctx->pc != 0x422B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422B08u; }
        if (ctx->pc != 0x422B08u) { return; }
    }
    ctx->pc = 0x422B08u;
label_422b08:
    // 0x422b08: 0xc076980  jal         func_1DA600
    ctx->pc = 0x422B08u;
    SET_GPR_U32(ctx, 31, 0x422B10u);
    ctx->pc = 0x422B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422B08u;
            // 0x422b0c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422B10u; }
        if (ctx->pc != 0x422B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422B10u; }
        if (ctx->pc != 0x422B10u) { return; }
    }
    ctx->pc = 0x422B10u;
label_422b10:
    // 0x422b10: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x422b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x422b14: 0xc04cc34  jal         func_1330D0
    ctx->pc = 0x422B14u;
    SET_GPR_U32(ctx, 31, 0x422B1Cu);
    ctx->pc = 0x422B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422B14u;
            // 0x422b18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422B1Cu; }
        if (ctx->pc != 0x422B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422B1Cu; }
        if (ctx->pc != 0x422B1Cu) { return; }
    }
    ctx->pc = 0x422B1Cu;
label_422b1c:
    // 0x422b1c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x422b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x422b20: 0xc461c7b0  lwc1        $f1, -0x3850($v1)
    ctx->pc = 0x422b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x422b24: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x422b24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x422b28: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x422B28u;
    {
        const bool branch_taken_0x422b28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x422b28) {
            ctx->pc = 0x422B2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x422B28u;
            // 0x422b2c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x422B38u;
            goto label_422b38;
        }
    }
    ctx->pc = 0x422B30u;
    // 0x422b30: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x422B30u;
    {
        const bool branch_taken_0x422b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x422B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x422B30u;
            // 0x422b34: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422b30) {
            ctx->pc = 0x422B70u;
            goto label_422b70;
        }
    }
    ctx->pc = 0x422B38u;
label_422b38:
    // 0x422b38: 0xc07697c  jal         func_1DA5F0
    ctx->pc = 0x422B38u;
    SET_GPR_U32(ctx, 31, 0x422B40u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422B40u; }
        if (ctx->pc != 0x422B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422B40u; }
        if (ctx->pc != 0x422B40u) { return; }
    }
    ctx->pc = 0x422B40u;
label_422b40:
    // 0x422b40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x422b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422b44: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x422b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x422b48: 0xc04cd60  jal         func_133580
    ctx->pc = 0x422B48u;
    SET_GPR_U32(ctx, 31, 0x422B50u);
    ctx->pc = 0x422B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422B48u;
            // 0x422b4c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422B50u; }
        if (ctx->pc != 0x422B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422B50u; }
        if (ctx->pc != 0x422B50u) { return; }
    }
    ctx->pc = 0x422B50u;
label_422b50:
    // 0x422b50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x422b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422b54: 0xc04c650  jal         func_131940
    ctx->pc = 0x422B54u;
    SET_GPR_U32(ctx, 31, 0x422B5Cu);
    ctx->pc = 0x422B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422B54u;
            // 0x422b58: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422B5Cu; }
        if (ctx->pc != 0x422B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422B5Cu; }
        if (ctx->pc != 0x422B5Cu) { return; }
    }
    ctx->pc = 0x422B5Cu;
label_422b5c:
    // 0x422b5c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x422b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x422b60: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x422b60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x422b64: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x422b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
    // 0x422b68: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x422b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x422b6c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x422b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_422b70:
    // 0x422b70: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x422b70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x422b74: 0x1020002d  beqz        $at, . + 4 + (0x2D << 2)
    ctx->pc = 0x422B74u;
    {
        const bool branch_taken_0x422b74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x422B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x422B74u;
            // 0x422b78: 0xae830044  sw          $v1, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422b74) {
            ctx->pc = 0x422C2Cu;
            goto label_422c2c;
        }
    }
    ctx->pc = 0x422B7Cu;
    // 0x422b7c: 0xc04e738  jal         func_139CE0
    ctx->pc = 0x422B7Cu;
    SET_GPR_U32(ctx, 31, 0x422B84u);
    ctx->pc = 0x422B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422B7Cu;
            // 0x422b80: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422B84u; }
        if (ctx->pc != 0x422B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422B84u; }
        if (ctx->pc != 0x422B84u) { return; }
    }
    ctx->pc = 0x422B84u;
label_422b84:
    // 0x422b84: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x422b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x422b88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x422b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422b8c: 0xc04e4a4  jal         func_139290
    ctx->pc = 0x422B8Cu;
    SET_GPR_U32(ctx, 31, 0x422B94u);
    ctx->pc = 0x422B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422B8Cu;
            // 0x422b90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422B94u; }
        if (ctx->pc != 0x422B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422B94u; }
        if (ctx->pc != 0x422B94u) { return; }
    }
    ctx->pc = 0x422B94u;
label_422b94:
    // 0x422b94: 0xc68c00f0  lwc1        $f12, 0xF0($s4)
    ctx->pc = 0x422b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x422b98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x422b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422b9c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x422b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x422ba0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x422ba0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x422ba4: 0xc04ce50  jal         func_133940
    ctx->pc = 0x422BA4u;
    SET_GPR_U32(ctx, 31, 0x422BACu);
    ctx->pc = 0x422BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422BA4u;
            // 0x422ba8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422BACu; }
        if (ctx->pc != 0x422BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422BACu; }
        if (ctx->pc != 0x422BACu) { return; }
    }
    ctx->pc = 0x422BACu;
label_422bac:
    // 0x422bac: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x422bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x422bb0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x422bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422bb4: 0xc04cd60  jal         func_133580
    ctx->pc = 0x422BB4u;
    SET_GPR_U32(ctx, 31, 0x422BBCu);
    ctx->pc = 0x422BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422BB4u;
            // 0x422bb8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422BBCu; }
        if (ctx->pc != 0x422BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422BBCu; }
        if (ctx->pc != 0x422BBCu) { return; }
    }
    ctx->pc = 0x422BBCu;
label_422bbc:
    // 0x422bbc: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x422bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x422bc0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x422bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x422bc4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x422bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x422bc8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x422bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422bcc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x422bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x422bd0: 0x0  nop
    ctx->pc = 0x422bd0u;
    // NOP
    // 0x422bd4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x422bd4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x422bd8: 0xc04ce50  jal         func_133940
    ctx->pc = 0x422BD8u;
    SET_GPR_U32(ctx, 31, 0x422BE0u);
    ctx->pc = 0x422BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422BD8u;
            // 0x422bdc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422BE0u; }
        if (ctx->pc != 0x422BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422BE0u; }
        if (ctx->pc != 0x422BE0u) { return; }
    }
    ctx->pc = 0x422BE0u;
label_422be0:
    // 0x422be0: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x422be0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x422be4: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x422be4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x422be8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x422be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422bec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x422becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422bf0: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x422bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x422bf4: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x422bf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
    // 0x422bf8: 0xc04cfcc  jal         func_133F30
    ctx->pc = 0x422BF8u;
    SET_GPR_U32(ctx, 31, 0x422C00u);
    ctx->pc = 0x422BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422BF8u;
            // 0x422bfc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422C00u; }
        if (ctx->pc != 0x422C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422C00u; }
        if (ctx->pc != 0x422C00u) { return; }
    }
    ctx->pc = 0x422C00u;
label_422c00:
    // 0x422c00: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x422c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x422c04: 0xc66c001c  lwc1        $f12, 0x1C($s3)
    ctx->pc = 0x422c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x422c08: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x422c08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x422c0c: 0xc054bbc  jal         func_152EF0
    ctx->pc = 0x422C0Cu;
    SET_GPR_U32(ctx, 31, 0x422C14u);
    ctx->pc = 0x422C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422C0Cu;
            // 0x422c10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422C14u; }
        if (ctx->pc != 0x422C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422C14u; }
        if (ctx->pc != 0x422C14u) { return; }
    }
    ctx->pc = 0x422C14u;
label_422c14:
    // 0x422c14: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x422c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x422c18: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x422c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422c1c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x422c1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422c20: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x422c20u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x422c24: 0xc054c2c  jal         func_1530B0
    ctx->pc = 0x422C24u;
    SET_GPR_U32(ctx, 31, 0x422C2Cu);
    ctx->pc = 0x422C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422C24u;
            // 0x422c28: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422C2Cu; }
        if (ctx->pc != 0x422C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422C2Cu; }
        if (ctx->pc != 0x422C2Cu) { return; }
    }
    ctx->pc = 0x422C2Cu;
label_422c2c:
    // 0x422c2c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x422c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x422c30: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x422c30u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x422c34: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x422c34u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x422c38: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x422c38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x422c3c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x422c3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x422c40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x422c40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x422c44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x422c44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x422c48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x422c48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x422c4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x422c4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x422c50: 0x3e00008  jr          $ra
    ctx->pc = 0x422C50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x422C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x422C50u;
            // 0x422c54: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x422C58u;
    // 0x422c58: 0x0  nop
    ctx->pc = 0x422c58u;
    // NOP
    // 0x422c5c: 0x0  nop
    ctx->pc = 0x422c5cu;
    // NOP
}
