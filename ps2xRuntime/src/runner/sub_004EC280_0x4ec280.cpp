#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004EC280
// Address: 0x4ec280 - 0x4ec520
void sub_004EC280_0x4ec280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EC280_0x4ec280");
#endif

    switch (ctx->pc) {
        case 0x4ec2dcu: goto label_4ec2dc;
        case 0x4ec2e8u: goto label_4ec2e8;
        case 0x4ec300u: goto label_4ec300;
        case 0x4ec31cu: goto label_4ec31c;
        case 0x4ec328u: goto label_4ec328;
        case 0x4ec374u: goto label_4ec374;
        case 0x4ec37cu: goto label_4ec37c;
        case 0x4ec388u: goto label_4ec388;
        case 0x4ec3acu: goto label_4ec3ac;
        case 0x4ec3bcu: goto label_4ec3bc;
        case 0x4ec3c8u: goto label_4ec3c8;
        case 0x4ec414u: goto label_4ec414;
        case 0x4ec424u: goto label_4ec424;
        case 0x4ec454u: goto label_4ec454;
        case 0x4ec45cu: goto label_4ec45c;
        case 0x4ec474u: goto label_4ec474;
        case 0x4ec484u: goto label_4ec484;
        case 0x4ec490u: goto label_4ec490;
        case 0x4ec4acu: goto label_4ec4ac;
        case 0x4ec4bcu: goto label_4ec4bc;
        case 0x4ec4c4u: goto label_4ec4c4;
        case 0x4ec4dcu: goto label_4ec4dc;
        default: break;
    }

    ctx->pc = 0x4ec280u;

    // 0x4ec280: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x4ec280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x4ec284: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x4ec284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x4ec288: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x4ec288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x4ec28c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4ec28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x4ec290: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x4ec290u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec294: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4ec294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x4ec298: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x4ec298u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec29c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4ec29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x4ec2a0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4ec2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x4ec2a4: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x4ec2a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec2a8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4ec2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x4ec2ac: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4ec2acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec2b0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4ec2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4ec2b4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4ec2b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec2b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4ec2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4ec2bc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4ec2bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec2c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4ec2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4ec2c4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x4ec2c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec2c8: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x4ec2c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec2cc: 0x268501dc  addiu       $a1, $s4, 0x1DC
    ctx->pc = 0x4ec2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 476));
    // 0x4ec2d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ec2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec2d4: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x4EC2D4u;
    SET_GPR_U32(ctx, 31, 0x4EC2DCu);
    ctx->pc = 0x4EC2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC2D4u;
            // 0x4ec2d8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC2DCu; }
        if (ctx->pc != 0x4EC2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC2DCu; }
        if (ctx->pc != 0x4EC2DCu) { return; }
    }
    ctx->pc = 0x4EC2DCu;
label_4ec2dc:
    // 0x4ec2dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ec2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec2e0: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x4EC2E0u;
    SET_GPR_U32(ctx, 31, 0x4EC2E8u);
    ctx->pc = 0x4EC2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC2E0u;
            // 0x4ec2e4: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC2E8u; }
        if (ctx->pc != 0x4EC2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC2E8u; }
        if (ctx->pc != 0x4EC2E8u) { return; }
    }
    ctx->pc = 0x4EC2E8u;
label_4ec2e8:
    // 0x4ec2e8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ec2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4ec2ec: 0x8e760000  lw          $s6, 0x0($s3)
    ctx->pc = 0x4ec2ecu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ec2f0: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x4ec2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
    // 0x4ec2f4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4ec2f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec2f8: 0xc07698c  jal         func_1DA630
    ctx->pc = 0x4EC2F8u;
    SET_GPR_U32(ctx, 31, 0x4EC300u);
    ctx->pc = 0x4EC2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC2F8u;
            // 0x4ec2fc: 0x2406003f  addiu       $a2, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC300u; }
        if (ctx->pc != 0x4EC300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC300u; }
        if (ctx->pc != 0x4EC300u) { return; }
    }
    ctx->pc = 0x4EC300u;
label_4ec300:
    // 0x4ec300: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4ec300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4ec304: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4EC304u;
    {
        const bool branch_taken_0x4ec304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4ec304) {
            ctx->pc = 0x4EC314u;
            goto label_4ec314;
        }
    }
    ctx->pc = 0x4EC30Cu;
    // 0x4ec30c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x4EC30Cu;
    {
        const bool branch_taken_0x4ec30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EC310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC30Cu;
            // 0x4ec310: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ec30c) {
            ctx->pc = 0x4EC3DCu;
            goto label_4ec3dc;
        }
    }
    ctx->pc = 0x4EC314u;
label_4ec314:
    // 0x4ec314: 0xc0576f4  jal         func_15DBD0
    ctx->pc = 0x4EC314u;
    SET_GPR_U32(ctx, 31, 0x4EC31Cu);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC31Cu; }
        if (ctx->pc != 0x4EC31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC31Cu; }
        if (ctx->pc != 0x4EC31Cu) { return; }
    }
    ctx->pc = 0x4EC31Cu;
label_4ec31c:
    // 0x4ec31c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4ec31cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec320: 0xc076984  jal         func_1DA610
    ctx->pc = 0x4EC320u;
    SET_GPR_U32(ctx, 31, 0x4EC328u);
    ctx->pc = 0x4EC324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC320u;
            // 0x4ec324: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC328u; }
        if (ctx->pc != 0x4EC328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC328u; }
        if (ctx->pc != 0x4EC328u) { return; }
    }
    ctx->pc = 0x4EC328u;
label_4ec328:
    // 0x4ec328: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4ec328u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec32c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x4ec32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x4ec330: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4ec330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x4ec334: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4ec334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec338: 0xc442cb40  lwc1        $f2, -0x34C0($v0)
    ctx->pc = 0x4ec338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4ec33c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4ec33cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec340: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4ec340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x4ec344: 0xc441cb48  lwc1        $f1, -0x34B8($v0)
    ctx->pc = 0x4ec344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4ec348: 0xe7a200f0  swc1        $f2, 0xF0($sp)
    ctx->pc = 0x4ec348u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x4ec34c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4ec34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x4ec350: 0xc440cb4c  lwc1        $f0, -0x34B4($v0)
    ctx->pc = 0x4ec350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ec354: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x4ec354u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x4ec358: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4ec358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x4ec35c: 0x8c42cb44  lw          $v0, -0x34BC($v0)
    ctx->pc = 0x4ec35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953796)));
    // 0x4ec360: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x4ec360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x4ec364: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x4ec364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    // 0x4ec368: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x4ec368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ec36c: 0xc04cca0  jal         func_133280
    ctx->pc = 0x4EC36Cu;
    SET_GPR_U32(ctx, 31, 0x4EC374u);
    ctx->pc = 0x4EC370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC36Cu;
            // 0x4ec370: 0xe7a000f4  swc1        $f0, 0xF4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC374u; }
        if (ctx->pc != 0x4EC374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC374u; }
        if (ctx->pc != 0x4EC374u) { return; }
    }
    ctx->pc = 0x4EC374u;
label_4ec374:
    // 0x4ec374: 0xc076980  jal         func_1DA600
    ctx->pc = 0x4EC374u;
    SET_GPR_U32(ctx, 31, 0x4EC37Cu);
    ctx->pc = 0x4EC378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC374u;
            // 0x4ec378: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC37Cu; }
        if (ctx->pc != 0x4EC37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC37Cu; }
        if (ctx->pc != 0x4EC37Cu) { return; }
    }
    ctx->pc = 0x4EC37Cu;
label_4ec37c:
    // 0x4ec37c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4ec37cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec380: 0xc04cc34  jal         func_1330D0
    ctx->pc = 0x4EC380u;
    SET_GPR_U32(ctx, 31, 0x4EC388u);
    ctx->pc = 0x4EC384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC380u;
            // 0x4ec384: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC388u; }
        if (ctx->pc != 0x4EC388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC388u; }
        if (ctx->pc != 0x4EC388u) { return; }
    }
    ctx->pc = 0x4EC388u;
label_4ec388:
    // 0x4ec388: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4ec388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x4ec38c: 0xc44187c8  lwc1        $f1, -0x7838($v0)
    ctx->pc = 0x4ec38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294936520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4ec390: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4ec390u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4ec394: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x4EC394u;
    {
        const bool branch_taken_0x4ec394 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ec394) {
            ctx->pc = 0x4EC398u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC394u;
            // 0x4ec398: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EC3A4u;
            goto label_4ec3a4;
        }
    }
    ctx->pc = 0x4EC39Cu;
    // 0x4ec39c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4EC39Cu;
    {
        const bool branch_taken_0x4ec39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EC3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC39Cu;
            // 0x4ec3a0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ec39c) {
            ctx->pc = 0x4EC3DCu;
            goto label_4ec3dc;
        }
    }
    ctx->pc = 0x4EC3A4u;
label_4ec3a4:
    // 0x4ec3a4: 0xc07697c  jal         func_1DA5F0
    ctx->pc = 0x4EC3A4u;
    SET_GPR_U32(ctx, 31, 0x4EC3ACu);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC3ACu; }
        if (ctx->pc != 0x4EC3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC3ACu; }
        if (ctx->pc != 0x4EC3ACu) { return; }
    }
    ctx->pc = 0x4EC3ACu;
label_4ec3ac:
    // 0x4ec3ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4ec3acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec3b0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4ec3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x4ec3b4: 0xc04cd60  jal         func_133580
    ctx->pc = 0x4EC3B4u;
    SET_GPR_U32(ctx, 31, 0x4EC3BCu);
    ctx->pc = 0x4EC3B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC3B4u;
            // 0x4ec3b8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC3BCu; }
        if (ctx->pc != 0x4EC3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC3BCu; }
        if (ctx->pc != 0x4EC3BCu) { return; }
    }
    ctx->pc = 0x4EC3BCu;
label_4ec3bc:
    // 0x4ec3bc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4ec3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec3c0: 0xc04c650  jal         func_131940
    ctx->pc = 0x4EC3C0u;
    SET_GPR_U32(ctx, 31, 0x4EC3C8u);
    ctx->pc = 0x4EC3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC3C0u;
            // 0x4ec3c4: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC3C8u; }
        if (ctx->pc != 0x4EC3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC3C8u; }
        if (ctx->pc != 0x4EC3C8u) { return; }
    }
    ctx->pc = 0x4EC3C8u;
label_4ec3c8:
    // 0x4ec3c8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4ec3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4ec3cc: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4ec3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x4ec3d0: 0x2442e320  addiu       $v0, $v0, -0x1CE0
    ctx->pc = 0x4ec3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959904));
    // 0x4ec3d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4ec3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4ec3d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4ec3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4ec3dc:
    // 0x4ec3dc: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x4ec3dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4ec3e0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x4EC3E0u;
    {
        const bool branch_taken_0x4ec3e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EC3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC3E0u;
            // 0x4ec3e4: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ec3e0) {
            ctx->pc = 0x4EC3F0u;
            goto label_4ec3f0;
        }
    }
    ctx->pc = 0x4EC3E8u;
    // 0x4ec3e8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x4EC3E8u;
    {
        const bool branch_taken_0x4ec3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EC3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC3E8u;
            // 0x4ec3ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ec3e8) {
            ctx->pc = 0x4EC4E0u;
            goto label_4ec4e0;
        }
    }
    ctx->pc = 0x4EC3F0u;
label_4ec3f0:
    // 0x4ec3f0: 0xc69401d8  lwc1        $f20, 0x1D8($s4)
    ctx->pc = 0x4ec3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4ec3f4: 0x8e750000  lw          $s5, 0x0($s3)
    ctx->pc = 0x4ec3f4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ec3f8: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x4ec3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ec3fc: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x4ec3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x4ec400: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4ec400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec404: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4ec404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec408: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x4ec408u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x4ec40c: 0xc04cd60  jal         func_133580
    ctx->pc = 0x4EC40Cu;
    SET_GPR_U32(ctx, 31, 0x4EC414u);
    ctx->pc = 0x4EC410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC40Cu;
            // 0x4ec410: 0xe6000034  swc1        $f0, 0x34($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC414u; }
        if (ctx->pc != 0x4EC414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC414u; }
        if (ctx->pc != 0x4EC414u) { return; }
    }
    ctx->pc = 0x4EC414u;
label_4ec414:
    // 0x4ec414: 0x8ea50028  lw          $a1, 0x28($s5)
    ctx->pc = 0x4ec414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x4ec418: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ec418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec41c: 0xc04e4a4  jal         func_139290
    ctx->pc = 0x4EC41Cu;
    SET_GPR_U32(ctx, 31, 0x4EC424u);
    ctx->pc = 0x4EC420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC41Cu;
            // 0x4ec420: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC424u; }
        if (ctx->pc != 0x4EC424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC424u; }
        if (ctx->pc != 0x4EC424u) { return; }
    }
    ctx->pc = 0x4EC424u;
label_4ec424:
    // 0x4ec424: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ec424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ec428: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4ec428u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
    // 0x4ec42c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x4ec42cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x4ec430: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x4ec430u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec434: 0x8e670008  lw          $a3, 0x8($s3)
    ctx->pc = 0x4ec434u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x4ec438: 0xc66c000c  lwc1        $f12, 0xC($s3)
    ctx->pc = 0x4ec438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4ec43c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4ec43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec440: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4ec440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec444: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x4ec444u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec448: 0x27a80100  addiu       $t0, $sp, 0x100
    ctx->pc = 0x4ec448u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x4ec44c: 0xc04cff4  jal         func_133FD0
    ctx->pc = 0x4EC44Cu;
    SET_GPR_U32(ctx, 31, 0x4EC454u);
    ctx->pc = 0x4EC450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC44Cu;
            // 0x4ec450: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC454u; }
        if (ctx->pc != 0x4EC454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC454u; }
        if (ctx->pc != 0x4EC454u) { return; }
    }
    ctx->pc = 0x4EC454u;
label_4ec454:
    // 0x4ec454: 0xc04e738  jal         func_139CE0
    ctx->pc = 0x4EC454u;
    SET_GPR_U32(ctx, 31, 0x4EC45Cu);
    ctx->pc = 0x4EC458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC454u;
            // 0x4ec458: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC45Cu; }
        if (ctx->pc != 0x4EC45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC45Cu; }
        if (ctx->pc != 0x4EC45Cu) { return; }
    }
    ctx->pc = 0x4EC45Cu;
label_4ec45c:
    // 0x4ec45c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4ec45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec460: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4ec460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec464: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4ec464u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec468: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4ec468u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x4ec46c: 0xc0538d8  jal         func_14E360
    ctx->pc = 0x4EC46Cu;
    SET_GPR_U32(ctx, 31, 0x4EC474u);
    ctx->pc = 0x4EC470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC46Cu;
            // 0x4ec470: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC474u; }
        if (ctx->pc != 0x4EC474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC474u; }
        if (ctx->pc != 0x4EC474u) { return; }
    }
    ctx->pc = 0x4EC474u;
label_4ec474:
    // 0x4ec474: 0x8e750010  lw          $s5, 0x10($s3)
    ctx->pc = 0x4ec474u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x4ec478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ec478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec47c: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x4EC47Cu;
    SET_GPR_U32(ctx, 31, 0x4EC484u);
    ctx->pc = 0x4EC480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC47Cu;
            // 0x4ec480: 0x268501dc  addiu       $a1, $s4, 0x1DC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 476));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC484u; }
        if (ctx->pc != 0x4EC484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC484u; }
        if (ctx->pc != 0x4EC484u) { return; }
    }
    ctx->pc = 0x4EC484u;
label_4ec484:
    // 0x4ec484: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x4ec484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x4ec488: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x4EC488u;
    SET_GPR_U32(ctx, 31, 0x4EC490u);
    ctx->pc = 0x4EC48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC488u;
            // 0x4ec48c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC490u; }
        if (ctx->pc != 0x4EC490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC490u; }
        if (ctx->pc != 0x4EC490u) { return; }
    }
    ctx->pc = 0x4EC490u;
label_4ec490:
    // 0x4ec490: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x4ec490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4ec494: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4ec494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec498: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4ec498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec49c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4ec49cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec4a0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x4ec4a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x4ec4a4: 0xc04cd60  jal         func_133580
    ctx->pc = 0x4EC4A4u;
    SET_GPR_U32(ctx, 31, 0x4EC4ACu);
    ctx->pc = 0x4EC4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC4A4u;
            // 0x4ec4a8: 0xe6000034  swc1        $f0, 0x34($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC4ACu; }
        if (ctx->pc != 0x4EC4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC4ACu; }
        if (ctx->pc != 0x4EC4ACu) { return; }
    }
    ctx->pc = 0x4EC4ACu;
label_4ec4ac:
    // 0x4ec4ac: 0x8ea50028  lw          $a1, 0x28($s5)
    ctx->pc = 0x4ec4acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x4ec4b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ec4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec4b4: 0xc04e4a4  jal         func_139290
    ctx->pc = 0x4EC4B4u;
    SET_GPR_U32(ctx, 31, 0x4EC4BCu);
    ctx->pc = 0x4EC4B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC4B4u;
            // 0x4ec4b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC4BCu; }
        if (ctx->pc != 0x4EC4BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC4BCu; }
        if (ctx->pc != 0x4EC4BCu) { return; }
    }
    ctx->pc = 0x4EC4BCu;
label_4ec4bc:
    // 0x4ec4bc: 0xc04e738  jal         func_139CE0
    ctx->pc = 0x4EC4BCu;
    SET_GPR_U32(ctx, 31, 0x4EC4C4u);
    ctx->pc = 0x4EC4C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC4BCu;
            // 0x4ec4c0: 0x8e640014  lw          $a0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC4C4u; }
        if (ctx->pc != 0x4EC4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC4C4u; }
        if (ctx->pc != 0x4EC4C4u) { return; }
    }
    ctx->pc = 0x4EC4C4u;
label_4ec4c4:
    // 0x4ec4c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4ec4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec4c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4ec4c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec4cc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4ec4ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec4d0: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4ec4d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x4ec4d4: 0xc0550f8  jal         func_1543E0
    ctx->pc = 0x4EC4D4u;
    SET_GPR_U32(ctx, 31, 0x4EC4DCu);
    ctx->pc = 0x4EC4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC4D4u;
            // 0x4ec4d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1543E0u;
    if (runtime->hasFunction(0x1543E0u)) {
        auto targetFn = runtime->lookupFunction(0x1543E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC4DCu; }
        if (ctx->pc != 0x4EC4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001543E0_0x1543e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC4DCu; }
        if (ctx->pc != 0x4EC4DCu) { return; }
    }
    ctx->pc = 0x4EC4DCu;
label_4ec4dc:
    // 0x4ec4dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ec4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ec4e0:
    // 0x4ec4e0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x4ec4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4ec4e4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4ec4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4ec4e8: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x4ec4e8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4ec4ec: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4ec4ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4ec4f0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4ec4f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4ec4f4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4ec4f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4ec4f8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4ec4f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4ec4fc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4ec4fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4ec500: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4ec500u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ec504: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4ec504u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ec508: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4ec508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ec50c: 0x3e00008  jr          $ra
    ctx->pc = 0x4EC50Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EC510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC50Cu;
            // 0x4ec510: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EC514u;
    // 0x4ec514: 0x0  nop
    ctx->pc = 0x4ec514u;
    // NOP
    // 0x4ec518: 0x0  nop
    ctx->pc = 0x4ec518u;
    // NOP
    // 0x4ec51c: 0x0  nop
    ctx->pc = 0x4ec51cu;
    // NOP
}
