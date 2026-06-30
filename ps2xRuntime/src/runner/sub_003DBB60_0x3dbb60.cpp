#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003DBB60
// Address: 0x3dbb60 - 0x3dbda0
void sub_003DBB60_0x3dbb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DBB60_0x3dbb60");
#endif

    switch (ctx->pc) {
        case 0x3dbbb8u: goto label_3dbbb8;
        case 0x3dbbc4u: goto label_3dbbc4;
        case 0x3dbbe8u: goto label_3dbbe8;
        case 0x3dbc04u: goto label_3dbc04;
        case 0x3dbc10u: goto label_3dbc10;
        case 0x3dbc5cu: goto label_3dbc5c;
        case 0x3dbc64u: goto label_3dbc64;
        case 0x3dbc70u: goto label_3dbc70;
        case 0x3dbc94u: goto label_3dbc94;
        case 0x3dbca4u: goto label_3dbca4;
        case 0x3dbcb0u: goto label_3dbcb0;
        case 0x3dbd54u: goto label_3dbd54;
        case 0x3dbd68u: goto label_3dbd68;
        default: break;
    }

    ctx->pc = 0x3dbb60u;

    // 0x3dbb60: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3dbb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x3dbb64: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3dbb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3dbb68: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3dbb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3dbb6c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3dbb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3dbb70: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3dbb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3dbb74: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x3dbb74u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dbb78: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3dbb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3dbb7c: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x3dbb7cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dbb80: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3dbb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3dbb84: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3dbb84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3dbb88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3dbb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3dbb8c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3dbb8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dbb90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3dbb90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3dbb94: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3dbb94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dbb98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dbb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3dbb9c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x3dbb9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dbba0: 0x8c8401c0  lw          $a0, 0x1C0($a0)
    ctx->pc = 0x3dbba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x3dbba4: 0x10830070  beq         $a0, $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x3DBBA4u;
    {
        const bool branch_taken_0x3dbba4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3DBBA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBBA4u;
            // 0x3dbba8: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbba4) {
            ctx->pc = 0x3DBD68u;
            goto label_3dbd68;
        }
    }
    ctx->pc = 0x3DBBACu;
    // 0x3dbbac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dbbacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dbbb0: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x3DBBB0u;
    SET_GPR_U32(ctx, 31, 0x3DBBB8u);
    ctx->pc = 0x3DBBB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBBB0u;
            // 0x3dbbb4: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBBB8u; }
        if (ctx->pc != 0x3DBBB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBBB8u; }
        if (ctx->pc != 0x3DBBB8u) { return; }
    }
    ctx->pc = 0x3DBBB8u;
label_3dbbb8:
    // 0x3dbbb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dbbb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dbbbc: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x3DBBBCu;
    SET_GPR_U32(ctx, 31, 0x3DBBC4u);
    ctx->pc = 0x3DBBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBBBCu;
            // 0x3dbbc0: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBBC4u; }
        if (ctx->pc != 0x3DBBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBBC4u; }
        if (ctx->pc != 0x3DBBC4u) { return; }
    }
    ctx->pc = 0x3DBBC4u;
label_3dbbc4:
    // 0x3dbbc4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3dbbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x3dbbc8: 0x8e550000  lw          $s5, 0x0($s2)
    ctx->pc = 0x3dbbc8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3dbbcc: 0x8c43d130  lw          $v1, -0x2ED0($v0)
    ctx->pc = 0x3dbbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
    // 0x3dbbd0: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x3dbbd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x3dbbd4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3dbbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3dbbd8: 0x8c740130  lw          $s4, 0x130($v1)
    ctx->pc = 0x3dbbd8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x3dbbdc: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x3dbbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
    // 0x3dbbe0: 0xc07698c  jal         func_1DA630
    ctx->pc = 0x3DBBE0u;
    SET_GPR_U32(ctx, 31, 0x3DBBE8u);
    ctx->pc = 0x3DBBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBBE0u;
            // 0x3dbbe4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBBE8u; }
        if (ctx->pc != 0x3DBBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBBE8u; }
        if (ctx->pc != 0x3DBBE8u) { return; }
    }
    ctx->pc = 0x3DBBE8u;
label_3dbbe8:
    // 0x3dbbe8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3dbbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3dbbec: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DBBECu;
    {
        const bool branch_taken_0x3dbbec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3dbbec) {
            ctx->pc = 0x3DBBFCu;
            goto label_3dbbfc;
        }
    }
    ctx->pc = 0x3DBBF4u;
    // 0x3dbbf4: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x3DBBF4u;
    {
        const bool branch_taken_0x3dbbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBBF4u;
            // 0x3dbbf8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbbf4) {
            ctx->pc = 0x3DBCC4u;
            goto label_3dbcc4;
        }
    }
    ctx->pc = 0x3DBBFCu;
label_3dbbfc:
    // 0x3dbbfc: 0xc0576f4  jal         func_15DBD0
    ctx->pc = 0x3DBBFCu;
    SET_GPR_U32(ctx, 31, 0x3DBC04u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBC04u; }
        if (ctx->pc != 0x3DBC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBC04u; }
        if (ctx->pc != 0x3DBC04u) { return; }
    }
    ctx->pc = 0x3DBC04u;
label_3dbc04:
    // 0x3dbc04: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3dbc04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dbc08: 0xc076984  jal         func_1DA610
    ctx->pc = 0x3DBC08u;
    SET_GPR_U32(ctx, 31, 0x3DBC10u);
    ctx->pc = 0x3DBC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBC08u;
            // 0x3dbc0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBC10u; }
        if (ctx->pc != 0x3DBC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBC10u; }
        if (ctx->pc != 0x3DBC10u) { return; }
    }
    ctx->pc = 0x3DBC10u;
label_3dbc10:
    // 0x3dbc10: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3dbc10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dbc14: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3dbc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3dbc18: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3dbc18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x3dbc1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3dbc1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dbc20: 0xc442f840  lwc1        $f2, -0x7C0($v0)
    ctx->pc = 0x3dbc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3dbc24: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3dbc24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dbc28: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3dbc28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x3dbc2c: 0xc441f848  lwc1        $f1, -0x7B8($v0)
    ctx->pc = 0x3dbc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3dbc30: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x3dbc30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x3dbc34: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3dbc34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x3dbc38: 0xc440f84c  lwc1        $f0, -0x7B4($v0)
    ctx->pc = 0x3dbc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3dbc3c: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x3dbc3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x3dbc40: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3dbc40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x3dbc44: 0x8c42f844  lw          $v0, -0x7BC($v0)
    ctx->pc = 0x3dbc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965316)));
    // 0x3dbc48: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x3dbc48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x3dbc4c: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x3dbc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x3dbc50: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x3dbc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3dbc54: 0xc04cca0  jal         func_133280
    ctx->pc = 0x3DBC54u;
    SET_GPR_U32(ctx, 31, 0x3DBC5Cu);
    ctx->pc = 0x3DBC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBC54u;
            // 0x3dbc58: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBC5Cu; }
        if (ctx->pc != 0x3DBC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBC5Cu; }
        if (ctx->pc != 0x3DBC5Cu) { return; }
    }
    ctx->pc = 0x3DBC5Cu;
label_3dbc5c:
    // 0x3dbc5c: 0xc076980  jal         func_1DA600
    ctx->pc = 0x3DBC5Cu;
    SET_GPR_U32(ctx, 31, 0x3DBC64u);
    ctx->pc = 0x3DBC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBC5Cu;
            // 0x3dbc60: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBC64u; }
        if (ctx->pc != 0x3DBC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBC64u; }
        if (ctx->pc != 0x3DBC64u) { return; }
    }
    ctx->pc = 0x3DBC64u;
label_3dbc64:
    // 0x3dbc64: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3dbc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3dbc68: 0xc04cc34  jal         func_1330D0
    ctx->pc = 0x3DBC68u;
    SET_GPR_U32(ctx, 31, 0x3DBC70u);
    ctx->pc = 0x3DBC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBC68u;
            // 0x3dbc6c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBC70u; }
        if (ctx->pc != 0x3DBC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBC70u; }
        if (ctx->pc != 0x3DBC70u) { return; }
    }
    ctx->pc = 0x3DBC70u;
label_3dbc70:
    // 0x3dbc70: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3dbc70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3dbc74: 0xc4619c20  lwc1        $f1, -0x63E0($v1)
    ctx->pc = 0x3dbc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294941728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3dbc78: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3dbc78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3dbc7c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3DBC7Cu;
    {
        const bool branch_taken_0x3dbc7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3dbc7c) {
            ctx->pc = 0x3DBC80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBC7Cu;
            // 0x3dbc80: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DBC8Cu;
            goto label_3dbc8c;
        }
    }
    ctx->pc = 0x3DBC84u;
    // 0x3dbc84: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3DBC84u;
    {
        const bool branch_taken_0x3dbc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBC84u;
            // 0x3dbc88: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbc84) {
            ctx->pc = 0x3DBCC4u;
            goto label_3dbcc4;
        }
    }
    ctx->pc = 0x3DBC8Cu;
label_3dbc8c:
    // 0x3dbc8c: 0xc07697c  jal         func_1DA5F0
    ctx->pc = 0x3DBC8Cu;
    SET_GPR_U32(ctx, 31, 0x3DBC94u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBC94u; }
        if (ctx->pc != 0x3DBC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBC94u; }
        if (ctx->pc != 0x3DBC94u) { return; }
    }
    ctx->pc = 0x3DBC94u;
label_3dbc94:
    // 0x3dbc94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3dbc94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dbc98: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3dbc98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3dbc9c: 0xc04cd60  jal         func_133580
    ctx->pc = 0x3DBC9Cu;
    SET_GPR_U32(ctx, 31, 0x3DBCA4u);
    ctx->pc = 0x3DBCA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBC9Cu;
            // 0x3dbca0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBCA4u; }
        if (ctx->pc != 0x3DBCA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBCA4u; }
        if (ctx->pc != 0x3DBCA4u) { return; }
    }
    ctx->pc = 0x3DBCA4u;
label_3dbca4:
    // 0x3dbca4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3dbca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dbca8: 0xc04c650  jal         func_131940
    ctx->pc = 0x3DBCA8u;
    SET_GPR_U32(ctx, 31, 0x3DBCB0u);
    ctx->pc = 0x3DBCACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBCA8u;
            // 0x3dbcac: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBCB0u; }
        if (ctx->pc != 0x3DBCB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBCB0u; }
        if (ctx->pc != 0x3DBCB0u) { return; }
    }
    ctx->pc = 0x3DBCB0u;
label_3dbcb0:
    // 0x3dbcb0: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x3dbcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x3dbcb4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x3dbcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3dbcb8: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x3dbcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
    // 0x3dbcbc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3dbcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3dbcc0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3dbcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3dbcc4:
    // 0x3dbcc4: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x3dbcc4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3dbcc8: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x3DBCC8u;
    {
        const bool branch_taken_0x3dbcc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBCCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBCC8u;
            // 0x3dbccc: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbcc8) {
            ctx->pc = 0x3DBD68u;
            goto label_3dbd68;
        }
    }
    ctx->pc = 0x3DBCD0u;
    // 0x3dbcd0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3dbcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3dbcd4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3dbcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3dbcd8: 0x8c48e3d8  lw          $t0, -0x1C28($v0)
    ctx->pc = 0x3dbcd8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
    // 0x3dbcdc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3dbcdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dbce0: 0x8c67e360  lw          $a3, -0x1CA0($v1)
    ctx->pc = 0x3dbce0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
    // 0x3dbce4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3dbce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dbce8: 0x8e4b0000  lw          $t3, 0x0($s2)
    ctx->pc = 0x3dbce8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3dbcec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3dbcecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3dbcf0: 0x84180  sll         $t0, $t0, 6
    ctx->pc = 0x3dbcf0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x3dbcf4: 0x8c44e3c0  lw          $a0, -0x1C40($v0)
    ctx->pc = 0x3dbcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
    // 0x3dbcf8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3dbcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3dbcfc: 0x8c63e3b0  lw          $v1, -0x1C50($v1)
    ctx->pc = 0x3dbcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
    // 0x3dbd00: 0xe88021  addu        $s0, $a3, $t0
    ctx->pc = 0x3dbd00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x3dbd04: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x3dbd04u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x3dbd08: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x3dbd08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
    // 0x3dbd0c: 0x45080  sll         $t2, $a0, 2
    ctx->pc = 0x3dbd0cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3dbd10: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3dbd10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3dbd14: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x3dbd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x3dbd18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dbd18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dbd1c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x3dbd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x3dbd20: 0x8c49e3b8  lw          $t1, -0x1C48($v0)
    ctx->pc = 0x3dbd20u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
    // 0x3dbd24: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3dbd24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3dbd28: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x3dbd28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x3dbd2c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3dbd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3dbd30: 0xad310000  sw          $s1, 0x0($t1)
    ctx->pc = 0x3dbd30u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 17));
    // 0x3dbd34: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x3dbd34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
    // 0x3dbd38: 0x8d690028  lw          $t1, 0x28($t3)
    ctx->pc = 0x3dbd38u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 40)));
    // 0x3dbd3c: 0x8d08e3d8  lw          $t0, -0x1C28($t0)
    ctx->pc = 0x3dbd3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
    // 0x3dbd40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3dbd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3dbd44: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x3dbd44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
    // 0x3dbd48: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x3dbd48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x3dbd4c: 0xc04cd60  jal         func_133580
    ctx->pc = 0x3DBD4Cu;
    SET_GPR_U32(ctx, 31, 0x3DBD54u);
    ctx->pc = 0x3DBD50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBD4Cu;
            // 0x3dbd50: 0xace8e3d8  sw          $t0, -0x1C28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBD54u; }
        if (ctx->pc != 0x3DBD54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBD54u; }
        if (ctx->pc != 0x3DBD54u) { return; }
    }
    ctx->pc = 0x3DBD54u;
label_3dbd54:
    // 0x3dbd54: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3dbd54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3dbd58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3dbd58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dbd5c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3dbd5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dbd60: 0xc054fd4  jal         func_153F50
    ctx->pc = 0x3DBD60u;
    SET_GPR_U32(ctx, 31, 0x3DBD68u);
    ctx->pc = 0x3DBD64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBD60u;
            // 0x3dbd64: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBD68u; }
        if (ctx->pc != 0x3DBD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DBD68u; }
        if (ctx->pc != 0x3DBD68u) { return; }
    }
    ctx->pc = 0x3DBD68u;
label_3dbd68:
    // 0x3dbd68: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3dbd68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3dbd6c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3dbd6cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3dbd70: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3dbd70u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3dbd74: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3dbd74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3dbd78: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3dbd78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3dbd7c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3dbd7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3dbd80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3dbd80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3dbd84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3dbd84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dbd88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dbd88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dbd8c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DBD8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DBD90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DBD8Cu;
            // 0x3dbd90: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DBD94u;
    // 0x3dbd94: 0x0  nop
    ctx->pc = 0x3dbd94u;
    // NOP
    // 0x3dbd98: 0x0  nop
    ctx->pc = 0x3dbd98u;
    // NOP
    // 0x3dbd9c: 0x0  nop
    ctx->pc = 0x3dbd9cu;
    // NOP
}
