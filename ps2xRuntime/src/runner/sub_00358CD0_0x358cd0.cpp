#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00358CD0
// Address: 0x358cd0 - 0x358e70
void sub_00358CD0_0x358cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358CD0_0x358cd0");
#endif

    switch (ctx->pc) {
        case 0x358d20u: goto label_358d20;
        case 0x358d54u: goto label_358d54;
        case 0x358d60u: goto label_358d60;
        case 0x358dacu: goto label_358dac;
        case 0x358db4u: goto label_358db4;
        case 0x358dc0u: goto label_358dc0;
        case 0x358dd0u: goto label_358dd0;
        case 0x358df0u: goto label_358df0;
        case 0x358e00u: goto label_358e00;
        case 0x358e0cu: goto label_358e0c;
        default: break;
    }

    ctx->pc = 0x358cd0u;

    // 0x358cd0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x358cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x358cd4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x358cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x358cd8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x358cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x358cdc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x358cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x358ce0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x358ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x358ce4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x358ce4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358ce8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x358ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x358cec: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x358cecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358cf0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x358cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x358cf4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x358cf4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358cf8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x358cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x358cfc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x358cfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358d00: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x358d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x358d04: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x358d04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358d08: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x358d08u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x358d0c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x358d0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x358d10: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x358d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
    // 0x358d14: 0x92a6004c  lbu         $a2, 0x4C($s5)
    ctx->pc = 0x358d14u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 76)));
    // 0x358d18: 0xc07698c  jal         func_1DA630
    ctx->pc = 0x358D18u;
    SET_GPR_U32(ctx, 31, 0x358D20u);
    ctx->pc = 0x358D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358D18u;
            // 0x358d1c: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358D20u; }
        if (ctx->pc != 0x358D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358D20u; }
        if (ctx->pc != 0x358D20u) { return; }
    }
    ctx->pc = 0x358D20u;
label_358d20:
    // 0x358d20: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x358d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x358d24: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x358D24u;
    {
        const bool branch_taken_0x358d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x358d24) {
            ctx->pc = 0x358D4Cu;
            goto label_358d4c;
        }
    }
    ctx->pc = 0x358D2Cu;
    // 0x358d2c: 0x5220003c  beql        $s1, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x358D2Cu;
    {
        const bool branch_taken_0x358d2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x358d2c) {
            ctx->pc = 0x358D30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x358D2Cu;
            // 0x358d30: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x358E20u;
            goto label_358e20;
        }
    }
    ctx->pc = 0x358D34u;
    // 0x358d34: 0x3c024cbe  lui         $v0, 0x4CBE
    ctx->pc = 0x358d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19646 << 16));
    // 0x358d38: 0x3442bc20  ori         $v0, $v0, 0xBC20
    ctx->pc = 0x358d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48160);
    // 0x358d3c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x358d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x358d40: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x358d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x358d44: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x358D44u;
    {
        const bool branch_taken_0x358d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358d44) {
            ctx->pc = 0x358E20u;
            goto label_358e20;
        }
    }
    ctx->pc = 0x358D4Cu;
label_358d4c:
    // 0x358d4c: 0xc0576f4  jal         func_15DBD0
    ctx->pc = 0x358D4Cu;
    SET_GPR_U32(ctx, 31, 0x358D54u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358D54u; }
        if (ctx->pc != 0x358D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358D54u; }
        if (ctx->pc != 0x358D54u) { return; }
    }
    ctx->pc = 0x358D54u;
label_358d54:
    // 0x358d54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x358d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358d58: 0xc076984  jal         func_1DA610
    ctx->pc = 0x358D58u;
    SET_GPR_U32(ctx, 31, 0x358D60u);
    ctx->pc = 0x358D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358D58u;
            // 0x358d5c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358D60u; }
        if (ctx->pc != 0x358D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358D60u; }
        if (ctx->pc != 0x358D60u) { return; }
    }
    ctx->pc = 0x358D60u;
label_358d60:
    // 0x358d60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x358d60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358d64: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x358d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x358d68: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x358d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x358d6c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x358d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358d70: 0xc44217d0  lwc1        $f2, 0x17D0($v0)
    ctx->pc = 0x358d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x358d74: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x358d74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358d78: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x358d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x358d7c: 0xc44117d8  lwc1        $f1, 0x17D8($v0)
    ctx->pc = 0x358d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x358d80: 0xe7a200c0  swc1        $f2, 0xC0($sp)
    ctx->pc = 0x358d80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x358d84: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x358d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x358d88: 0xc44017dc  lwc1        $f0, 0x17DC($v0)
    ctx->pc = 0x358d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x358d8c: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x358d8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x358d90: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x358d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x358d94: 0x8c4217d4  lw          $v0, 0x17D4($v0)
    ctx->pc = 0x358d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6100)));
    // 0x358d98: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x358d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x358d9c: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x358d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x358da0: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x358da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x358da4: 0xc04cca0  jal         func_133280
    ctx->pc = 0x358DA4u;
    SET_GPR_U32(ctx, 31, 0x358DACu);
    ctx->pc = 0x358DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358DA4u;
            // 0x358da8: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358DACu; }
        if (ctx->pc != 0x358DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358DACu; }
        if (ctx->pc != 0x358DACu) { return; }
    }
    ctx->pc = 0x358DACu;
label_358dac:
    // 0x358dac: 0xc076980  jal         func_1DA600
    ctx->pc = 0x358DACu;
    SET_GPR_U32(ctx, 31, 0x358DB4u);
    ctx->pc = 0x358DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358DACu;
            // 0x358db0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358DB4u; }
        if (ctx->pc != 0x358DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358DB4u; }
        if (ctx->pc != 0x358DB4u) { return; }
    }
    ctx->pc = 0x358DB4u;
label_358db4:
    // 0x358db4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x358db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358db8: 0xc04cc34  jal         func_1330D0
    ctx->pc = 0x358DB8u;
    SET_GPR_U32(ctx, 31, 0x358DC0u);
    ctx->pc = 0x358DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358DB8u;
            // 0x358dbc: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358DC0u; }
        if (ctx->pc != 0x358DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358DC0u; }
        if (ctx->pc != 0x358DC0u) { return; }
    }
    ctx->pc = 0x358DC0u;
label_358dc0:
    // 0x358dc0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x358DC0u;
    {
        const bool branch_taken_0x358dc0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x358DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358DC0u;
            // 0x358dc4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x358dc0) {
            ctx->pc = 0x358DD4u;
            goto label_358dd4;
        }
    }
    ctx->pc = 0x358DC8u;
    // 0x358dc8: 0xc04c710  jal         func_131C40
    ctx->pc = 0x358DC8u;
    SET_GPR_U32(ctx, 31, 0x358DD0u);
    ctx->pc = 0x358DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358DC8u;
            // 0x358dcc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C40u;
    if (runtime->hasFunction(0x131C40u)) {
        auto targetFn = runtime->lookupFunction(0x131C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358DD0u; }
        if (ctx->pc != 0x358DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C40_0x131c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358DD0u; }
        if (ctx->pc != 0x358DD0u) { return; }
    }
    ctx->pc = 0x358DD0u;
label_358dd0:
    // 0x358dd0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x358dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_358dd4:
    // 0x358dd4: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x358dd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x358dd8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x358DD8u;
    {
        const bool branch_taken_0x358dd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x358dd8) {
            ctx->pc = 0x358DDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x358DD8u;
            // 0x358ddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x358DE8u;
            goto label_358de8;
        }
    }
    ctx->pc = 0x358DE0u;
    // 0x358de0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x358DE0u;
    {
        const bool branch_taken_0x358de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358DE0u;
            // 0x358de4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358de0) {
            ctx->pc = 0x358E20u;
            goto label_358e20;
        }
    }
    ctx->pc = 0x358DE8u;
label_358de8:
    // 0x358de8: 0xc07697c  jal         func_1DA5F0
    ctx->pc = 0x358DE8u;
    SET_GPR_U32(ctx, 31, 0x358DF0u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358DF0u; }
        if (ctx->pc != 0x358DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358DF0u; }
        if (ctx->pc != 0x358DF0u) { return; }
    }
    ctx->pc = 0x358DF0u;
label_358df0:
    // 0x358df0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x358df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358df4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x358df4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358df8: 0xc04cd60  jal         func_133580
    ctx->pc = 0x358DF8u;
    SET_GPR_U32(ctx, 31, 0x358E00u);
    ctx->pc = 0x358DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358DF8u;
            // 0x358dfc: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358E00u; }
        if (ctx->pc != 0x358E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358E00u; }
        if (ctx->pc != 0x358E00u) { return; }
    }
    ctx->pc = 0x358E00u;
label_358e00:
    // 0x358e00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x358e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358e04: 0xc04c650  jal         func_131940
    ctx->pc = 0x358E04u;
    SET_GPR_U32(ctx, 31, 0x358E0Cu);
    ctx->pc = 0x358E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358E04u;
            // 0x358e08: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358E0Cu; }
        if (ctx->pc != 0x358E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358E0Cu; }
        if (ctx->pc != 0x358E0Cu) { return; }
    }
    ctx->pc = 0x358E0Cu;
label_358e0c:
    // 0x358e0c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x358e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x358e10: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x358e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x358e14: 0x2442e320  addiu       $v0, $v0, -0x1CE0
    ctx->pc = 0x358e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959904));
    // 0x358e18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x358e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x358e1c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x358e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_358e20:
    // 0x358e20: 0xaea20044  sw          $v0, 0x44($s5)
    ctx->pc = 0x358e20u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 2));
    // 0x358e24: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x358e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x358e28: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x358e28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x358e2c: 0x2842004  sllv        $a0, $a0, $s4
    ctx->pc = 0x358e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 20) & 0x1F));
    // 0x358e30: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x358e30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x358e34: 0x92a3004d  lbu         $v1, 0x4D($s5)
    ctx->pc = 0x358e34u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 77)));
    // 0x358e38: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x358e38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x358e3c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x358e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x358e40: 0xa2a3004d  sb          $v1, 0x4D($s5)
    ctx->pc = 0x358e40u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 77), (uint8_t)GPR_U32(ctx, 3));
    // 0x358e44: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x358e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x358e48: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x358e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x358e4c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x358e4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x358e50: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x358e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x358e54: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x358e54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x358e58: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x358e58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x358e5c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x358e5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x358e60: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x358e60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x358e64: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x358e64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358e68: 0x3e00008  jr          $ra
    ctx->pc = 0x358E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358E68u;
            // 0x358e6c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x358E70u;
}
