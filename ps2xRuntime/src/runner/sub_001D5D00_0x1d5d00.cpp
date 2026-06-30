#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D5D00
// Address: 0x1d5d00 - 0x1d5e50
void sub_001D5D00_0x1d5d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5D00_0x1d5d00");
#endif

    switch (ctx->pc) {
        case 0x1d5d24u: goto label_1d5d24;
        case 0x1d5d48u: goto label_1d5d48;
        case 0x1d5d50u: goto label_1d5d50;
        case 0x1d5da8u: goto label_1d5da8;
        case 0x1d5db8u: goto label_1d5db8;
        case 0x1d5dc8u: goto label_1d5dc8;
        case 0x1d5dd0u: goto label_1d5dd0;
        case 0x1d5e1cu: goto label_1d5e1c;
        case 0x1d5e2cu: goto label_1d5e2c;
        case 0x1d5e38u: goto label_1d5e38;
        default: break;
    }

    ctx->pc = 0x1d5d00u;

    // 0x1d5d00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d5d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d5d04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d5d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d5d08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d5d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d5d0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d5d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d5d10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d5d10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5d14: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d5d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d5d18: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1d5d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d5d1c: 0xc04e738  jal         func_139CE0
    ctx->pc = 0x1D5D1Cu;
    SET_GPR_U32(ctx, 31, 0x1D5D24u);
    ctx->pc = 0x1D5D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5D1Cu;
            // 0x1d5d20: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5D24u; }
        if (ctx->pc != 0x1D5D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5D24u; }
        if (ctx->pc != 0x1D5D24u) { return; }
    }
    ctx->pc = 0x1D5D24u;
label_1d5d24:
    // 0x1d5d24: 0xc62c0020  lwc1        $f12, 0x20($s1)
    ctx->pc = 0x1d5d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d5d28: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d5d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d5d2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d5d2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5d30: 0x0  nop
    ctx->pc = 0x1d5d30u;
    // NOP
    // 0x1d5d34: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1d5d34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d5d38: 0x45020027  bc1fl       . + 4 + (0x27 << 2)
    ctx->pc = 0x1D5D38u;
    {
        const bool branch_taken_0x1d5d38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d5d38) {
            ctx->pc = 0x1D5D3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5D38u;
            // 0x1d5d3c: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D5DD8u;
            goto label_1d5dd8;
        }
    }
    ctx->pc = 0x1D5D40u;
    // 0x1d5d40: 0xc054c3c  jal         func_1530F0
    ctx->pc = 0x1D5D40u;
    SET_GPR_U32(ctx, 31, 0x1D5D48u);
    ctx->pc = 0x1D5D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5D40u;
            // 0x1d5d44: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530F0u;
    if (runtime->hasFunction(0x1530F0u)) {
        auto targetFn = runtime->lookupFunction(0x1530F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5D48u; }
        if (ctx->pc != 0x1D5D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530F0_0x1530f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5D48u; }
        if (ctx->pc != 0x1D5D48u) { return; }
    }
    ctx->pc = 0x1D5D48u;
label_1d5d48:
    // 0x1d5d48: 0xc054c40  jal         func_153100
    ctx->pc = 0x1D5D48u;
    SET_GPR_U32(ctx, 31, 0x1D5D50u);
    ctx->pc = 0x1D5D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5D48u;
            // 0x1d5d4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153100u;
    if (runtime->hasFunction(0x153100u)) {
        auto targetFn = runtime->lookupFunction(0x153100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5D50u; }
        if (ctx->pc != 0x1D5D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153100_0x153100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5D50u; }
        if (ctx->pc != 0x1D5D50u) { return; }
    }
    ctx->pc = 0x1D5D50u;
label_1d5d50:
    // 0x1d5d50: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1d5d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d5d54: 0x3c020280  lui         $v0, 0x280
    ctx->pc = 0x1d5d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)640 << 16));
    // 0x1d5d58: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1d5d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d5d5c: 0x34420480  ori         $v0, $v0, 0x480
    ctx->pc = 0x1d5d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1152);
    // 0x1d5d60: 0x2023825  or          $a3, $s0, $v0
    ctx->pc = 0x1d5d60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d5d64: 0x90660008  lbu         $a2, 0x8($v1)
    ctx->pc = 0x1d5d64u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d5d68: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1d5d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1d5d6c: 0x8c45e370  lw          $a1, -0x1C90($v0)
    ctx->pc = 0x1d5d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
    // 0x1d5d70: 0x8c840550  lw          $a0, 0x550($a0)
    ctx->pc = 0x1d5d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
    // 0x1d5d74: 0x38c60001  xori        $a2, $a2, 0x1
    ctx->pc = 0x1d5d74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
    // 0x1d5d78: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x1d5d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1d5d7c: 0x2cc80001  sltiu       $t0, $a2, 0x1
    ctx->pc = 0x1d5d7cu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1d5d80: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d5d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d5d84: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x1d5d84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d5d88: 0x82180  sll         $a0, $t0, 6
    ctx->pc = 0x1d5d88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x1d5d8c: 0xe44025  or          $t0, $a3, $a0
    ctx->pc = 0x1d5d8cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x1d5d90: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1d5d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d5d94: 0x1031024  and         $v0, $t0, $v1
    ctx->pc = 0x1d5d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x1d5d98: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D5D98u;
    {
        const bool branch_taken_0x1d5d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5d98) {
            ctx->pc = 0x1D5D9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5D98u;
            // 0x1d5d9c: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D5DB0u;
            goto label_1d5db0;
        }
    }
    ctx->pc = 0x1D5DA0u;
    // 0x1d5da0: 0xc0538d8  jal         func_14E360
    ctx->pc = 0x1D5DA0u;
    SET_GPR_U32(ctx, 31, 0x1D5DA8u);
    ctx->pc = 0x1D5DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5DA0u;
            // 0x1d5da4: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5DA8u; }
        if (ctx->pc != 0x1D5DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5DA8u; }
        if (ctx->pc != 0x1D5DA8u) { return; }
    }
    ctx->pc = 0x1D5DA8u;
label_1d5da8:
    // 0x1d5da8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5DA8u;
    {
        const bool branch_taken_0x1d5da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5DA8u;
            // 0x1d5dac: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5da8) {
            ctx->pc = 0x1D5DBCu;
            goto label_1d5dbc;
        }
    }
    ctx->pc = 0x1D5DB0u;
label_1d5db0:
    // 0x1d5db0: 0xc050044  jal         func_140110
    ctx->pc = 0x1D5DB0u;
    SET_GPR_U32(ctx, 31, 0x1D5DB8u);
    ctx->pc = 0x140110u;
    if (runtime->hasFunction(0x140110u)) {
        auto targetFn = runtime->lookupFunction(0x140110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5DB8u; }
        if (ctx->pc != 0x1D5DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140110_0x140110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5DB8u; }
        if (ctx->pc != 0x1D5DB8u) { return; }
    }
    ctx->pc = 0x1D5DB8u;
label_1d5db8:
    // 0x1d5db8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d5db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d5dbc:
    // 0x1d5dbc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d5dbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d5dc0: 0xc054c3c  jal         func_1530F0
    ctx->pc = 0x1D5DC0u;
    SET_GPR_U32(ctx, 31, 0x1D5DC8u);
    ctx->pc = 0x1D5DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5DC0u;
            // 0x1d5dc4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530F0u;
    if (runtime->hasFunction(0x1530F0u)) {
        auto targetFn = runtime->lookupFunction(0x1530F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5DC8u; }
        if (ctx->pc != 0x1D5DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530F0_0x1530f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5DC8u; }
        if (ctx->pc != 0x1D5DC8u) { return; }
    }
    ctx->pc = 0x1D5DC8u;
label_1d5dc8:
    // 0x1d5dc8: 0xc054c40  jal         func_153100
    ctx->pc = 0x1D5DC8u;
    SET_GPR_U32(ctx, 31, 0x1D5DD0u);
    ctx->pc = 0x1D5DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5DC8u;
            // 0x1d5dcc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153100u;
    if (runtime->hasFunction(0x153100u)) {
        auto targetFn = runtime->lookupFunction(0x153100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5DD0u; }
        if (ctx->pc != 0x1D5DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153100_0x153100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5DD0u; }
        if (ctx->pc != 0x1D5DD0u) { return; }
    }
    ctx->pc = 0x1D5DD0u;
label_1d5dd0:
    // 0x1d5dd0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1D5DD0u;
    {
        const bool branch_taken_0x1d5dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5DD0u;
            // 0x1d5dd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5dd0) {
            ctx->pc = 0x1D5E30u;
            goto label_1d5e30;
        }
    }
    ctx->pc = 0x1D5DD8u;
label_1d5dd8:
    // 0x1d5dd8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1d5dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1d5ddc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1d5ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d5de0: 0x8c45e370  lw          $a1, -0x1C90($v0)
    ctx->pc = 0x1d5de0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
    // 0x1d5de4: 0x90670008  lbu         $a3, 0x8($v1)
    ctx->pc = 0x1d5de4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d5de8: 0x8c860550  lw          $a2, 0x550($a0)
    ctx->pc = 0x1d5de8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
    // 0x1d5dec: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1d5decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1d5df0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d5df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d5df4: 0x38e40001  xori        $a0, $a3, 0x1
    ctx->pc = 0x1d5df4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)1);
    // 0x1d5df8: 0x2c870001  sltiu       $a3, $a0, 0x1
    ctx->pc = 0x1d5df8u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1d5dfc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d5dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d5e00: 0x71980  sll         $v1, $a3, 6
    ctx->pc = 0x1d5e00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x1d5e04: 0x2034025  or          $t0, $s0, $v1
    ctx->pc = 0x1d5e04u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d5e08: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x1d5e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x1d5e0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D5E0Cu;
    {
        const bool branch_taken_0x1d5e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5E0Cu;
            // 0x1d5e10: 0x8cc60010  lw          $a2, 0x10($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5e0c) {
            ctx->pc = 0x1D5E24u;
            goto label_1d5e24;
        }
    }
    ctx->pc = 0x1D5E14u;
    // 0x1d5e14: 0xc0538d8  jal         func_14E360
    ctx->pc = 0x1D5E14u;
    SET_GPR_U32(ctx, 31, 0x1D5E1Cu);
    ctx->pc = 0x1D5E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5E14u;
            // 0x1d5e18: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5E1Cu; }
        if (ctx->pc != 0x1D5E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5E1Cu; }
        if (ctx->pc != 0x1D5E1Cu) { return; }
    }
    ctx->pc = 0x1D5E1Cu;
label_1d5e1c:
    // 0x1d5e1c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5E1Cu;
    {
        const bool branch_taken_0x1d5e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5e1c) {
            ctx->pc = 0x1D5E2Cu;
            goto label_1d5e2c;
        }
    }
    ctx->pc = 0x1D5E24u;
label_1d5e24:
    // 0x1d5e24: 0xc050044  jal         func_140110
    ctx->pc = 0x1D5E24u;
    SET_GPR_U32(ctx, 31, 0x1D5E2Cu);
    ctx->pc = 0x1D5E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5E24u;
            // 0x1d5e28: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140110u;
    if (runtime->hasFunction(0x140110u)) {
        auto targetFn = runtime->lookupFunction(0x140110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5E2Cu; }
        if (ctx->pc != 0x1D5E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140110_0x140110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5E2Cu; }
        if (ctx->pc != 0x1D5E2Cu) { return; }
    }
    ctx->pc = 0x1D5E2Cu;
label_1d5e2c:
    // 0x1d5e2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d5e30:
    // 0x1d5e30: 0xc0756ac  jal         func_1D5AB0
    ctx->pc = 0x1D5E30u;
    SET_GPR_U32(ctx, 31, 0x1D5E38u);
    ctx->pc = 0x1D5AB0u;
    if (runtime->hasFunction(0x1D5AB0u)) {
        auto targetFn = runtime->lookupFunction(0x1D5AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5E38u; }
        if (ctx->pc != 0x1D5E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5AB0_0x1d5ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5E38u; }
        if (ctx->pc != 0x1D5E38u) { return; }
    }
    ctx->pc = 0x1D5E38u;
label_1d5e38:
    // 0x1d5e38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d5e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5e3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d5e3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5e40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d5e40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5e44: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5E44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5E44u;
            // 0x1d5e48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D5E4Cu;
    // 0x1d5e4c: 0x0  nop
    ctx->pc = 0x1d5e4cu;
    // NOP
}
