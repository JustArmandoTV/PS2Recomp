#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00108D28
// Address: 0x108d28 - 0x108f98
void sub_00108D28_0x108d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108D28_0x108d28");
#endif

    switch (ctx->pc) {
        case 0x108d3cu: goto label_108d3c;
        case 0x108d90u: goto label_108d90;
        case 0x108d9cu: goto label_108d9c;
        case 0x108dacu: goto label_108dac;
        case 0x108db8u: goto label_108db8;
        case 0x108dc4u: goto label_108dc4;
        case 0x108dd4u: goto label_108dd4;
        case 0x108de4u: goto label_108de4;
        case 0x108df0u: goto label_108df0;
        case 0x108e20u: goto label_108e20;
        case 0x108e2cu: goto label_108e2c;
        case 0x108e38u: goto label_108e38;
        case 0x108e44u: goto label_108e44;
        case 0x108e50u: goto label_108e50;
        case 0x108e5cu: goto label_108e5c;
        case 0x108e68u: goto label_108e68;
        case 0x108e74u: goto label_108e74;
        case 0x108e80u: goto label_108e80;
        case 0x108e8cu: goto label_108e8c;
        case 0x108f20u: goto label_108f20;
        case 0x108f28u: goto label_108f28;
        case 0x108f40u: goto label_108f40;
        case 0x108f50u: goto label_108f50;
        case 0x108f64u: goto label_108f64;
        default: break;
    }

    ctx->pc = 0x108d28u;

    // 0x108d28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x108d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x108d2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x108d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x108d30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x108d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x108d34: 0xc0422e2  jal         func_108B88
    ctx->pc = 0x108D34u;
    SET_GPR_U32(ctx, 31, 0x108D3Cu);
    ctx->pc = 0x108D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108D34u;
            // 0x108d38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108B88u;
    if (runtime->hasFunction(0x108B88u)) {
        auto targetFn = runtime->lookupFunction(0x108B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108D3Cu; }
        if (ctx->pc != 0x108D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00108B88_0x108b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108D3Cu; }
        if (ctx->pc != 0x108D3Cu) { return; }
    }
    ctx->pc = 0x108D3Cu;
label_108d3c:
    // 0x108d3c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x108d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x108d40: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x108d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x108d44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x108d44u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x108d48: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x108d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x108d4c: 0x31823  negu        $v1, $v1
    ctx->pc = 0x108d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x108d50: 0x30650007  andi        $a1, $v1, 0x7
    ctx->pc = 0x108d50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x108d54: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x108D54u;
    {
        const bool branch_taken_0x108d54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x108D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108D54u;
            // 0x108d58: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108d54) {
            ctx->pc = 0x108D6Cu;
            goto label_108d6c;
        }
    }
    ctx->pc = 0x108D5Cu;
    // 0x108d5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x108d60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108d64: 0x80422f0  j           func_108BC0
    ctx->pc = 0x108D64u;
    ctx->pc = 0x108D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108D64u;
            // 0x108d68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108BC0u;
    if (runtime->hasFunction(0x108BC0u)) {
        auto targetFn = runtime->lookupFunction(0x108BC0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00108BC0_0x108bc0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x108D6Cu;
label_108d6c:
    // 0x108d6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x108d6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108d70: 0x3e00008  jr          $ra
    ctx->pc = 0x108D70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108D70u;
            // 0x108d74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x108D78u;
    // 0x108d78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x108d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x108d7c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x108d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x108d80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x108d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x108d84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x108d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x108d88: 0xc041a12  jal         func_106848
    ctx->pc = 0x108D88u;
    SET_GPR_U32(ctx, 31, 0x108D90u);
    ctx->pc = 0x108D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108D88u;
            // 0x108d8c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108D90u; }
        if (ctx->pc != 0x108D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108D90u; }
        if (ctx->pc != 0x108D90u) { return; }
    }
    ctx->pc = 0x108D90u;
label_108d90:
    // 0x108d90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d94: 0xc041a12  jal         func_106848
    ctx->pc = 0x108D94u;
    SET_GPR_U32(ctx, 31, 0x108D9Cu);
    ctx->pc = 0x108D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108D94u;
            // 0x108d98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108D9Cu; }
        if (ctx->pc != 0x108D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108D9Cu; }
        if (ctx->pc != 0x108D9Cu) { return; }
    }
    ctx->pc = 0x108D9Cu;
label_108d9c:
    // 0x108d9c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x108D9Cu;
    {
        const bool branch_taken_0x108d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108D9Cu;
            // 0x108da0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108d9c) {
            ctx->pc = 0x108DC8u;
            goto label_108dc8;
        }
    }
    ctx->pc = 0x108DA4u;
    // 0x108da4: 0xc041a12  jal         func_106848
    ctx->pc = 0x108DA4u;
    SET_GPR_U32(ctx, 31, 0x108DACu);
    ctx->pc = 0x108DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108DA4u;
            // 0x108da8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108DACu; }
        if (ctx->pc != 0x108DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108DACu; }
        if (ctx->pc != 0x108DACu) { return; }
    }
    ctx->pc = 0x108DACu;
label_108dac:
    // 0x108dac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108db0: 0xc041a12  jal         func_106848
    ctx->pc = 0x108DB0u;
    SET_GPR_U32(ctx, 31, 0x108DB8u);
    ctx->pc = 0x108DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108DB0u;
            // 0x108db4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108DB8u; }
        if (ctx->pc != 0x108DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108DB8u; }
        if (ctx->pc != 0x108DB8u) { return; }
    }
    ctx->pc = 0x108DB8u;
label_108db8:
    // 0x108db8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108dbc: 0xc041a12  jal         func_106848
    ctx->pc = 0x108DBCu;
    SET_GPR_U32(ctx, 31, 0x108DC4u);
    ctx->pc = 0x108DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108DBCu;
            // 0x108dc0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108DC4u; }
        if (ctx->pc != 0x108DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108DC4u; }
        if (ctx->pc != 0x108DC4u) { return; }
    }
    ctx->pc = 0x108DC4u;
label_108dc4:
    // 0x108dc4: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x108dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
label_108dc8:
    // 0x108dc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108dcc: 0xc041a12  jal         func_106848
    ctx->pc = 0x108DCCu;
    SET_GPR_U32(ctx, 31, 0x108DD4u);
    ctx->pc = 0x108DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108DCCu;
            // 0x108dd0: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108DD4u; }
        if (ctx->pc != 0x108DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108DD4u; }
        if (ctx->pc != 0x108DD4u) { return; }
    }
    ctx->pc = 0x108DD4u;
label_108dd4:
    // 0x108dd4: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x108dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
    // 0x108dd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ddc: 0xc041a12  jal         func_106848
    ctx->pc = 0x108DDCu;
    SET_GPR_U32(ctx, 31, 0x108DE4u);
    ctx->pc = 0x108DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108DDCu;
            // 0x108de0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108DE4u; }
        if (ctx->pc != 0x108DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108DE4u; }
        if (ctx->pc != 0x108DE4u) { return; }
    }
    ctx->pc = 0x108DE4u;
label_108de4:
    // 0x108de4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108de8: 0xc041a12  jal         func_106848
    ctx->pc = 0x108DE8u;
    SET_GPR_U32(ctx, 31, 0x108DF0u);
    ctx->pc = 0x108DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108DE8u;
            // 0x108dec: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108DF0u; }
        if (ctx->pc != 0x108DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108DF0u; }
        if (ctx->pc != 0x108DF0u) { return; }
    }
    ctx->pc = 0x108DF0u;
label_108df0:
    // 0x108df0: 0xae02015c  sw          $v0, 0x15C($s0)
    ctx->pc = 0x108df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 2));
    // 0x108df4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x108df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108df8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x108df8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x108DFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108DFCu;
            // 0x108e00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x108E04u;
    // 0x108e04: 0x0  nop
    ctx->pc = 0x108e04u;
    // NOP
    // 0x108e08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x108e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x108e0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x108e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108e10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x108e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x108e14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x108e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x108e18: 0xc041a12  jal         func_106848
    ctx->pc = 0x108E18u;
    SET_GPR_U32(ctx, 31, 0x108E20u);
    ctx->pc = 0x108E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108E18u;
            // 0x108e1c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108E20u; }
        if (ctx->pc != 0x108E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108E20u; }
        if (ctx->pc != 0x108E20u) { return; }
    }
    ctx->pc = 0x108E20u;
label_108e20:
    // 0x108e20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e24: 0xc041a12  jal         func_106848
    ctx->pc = 0x108E24u;
    SET_GPR_U32(ctx, 31, 0x108E2Cu);
    ctx->pc = 0x108E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108E24u;
            // 0x108e28: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108E2Cu; }
        if (ctx->pc != 0x108E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108E2Cu; }
        if (ctx->pc != 0x108E2Cu) { return; }
    }
    ctx->pc = 0x108E2Cu;
label_108e2c:
    // 0x108e2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e30: 0xc041a12  jal         func_106848
    ctx->pc = 0x108E30u;
    SET_GPR_U32(ctx, 31, 0x108E38u);
    ctx->pc = 0x108E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108E30u;
            // 0x108e34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108E38u; }
        if (ctx->pc != 0x108E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108E38u; }
        if (ctx->pc != 0x108E38u) { return; }
    }
    ctx->pc = 0x108E38u;
label_108e38:
    // 0x108e38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e3c: 0xc041a12  jal         func_106848
    ctx->pc = 0x108E3Cu;
    SET_GPR_U32(ctx, 31, 0x108E44u);
    ctx->pc = 0x108E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108E3Cu;
            // 0x108e40: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108E44u; }
        if (ctx->pc != 0x108E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108E44u; }
        if (ctx->pc != 0x108E44u) { return; }
    }
    ctx->pc = 0x108E44u;
label_108e44:
    // 0x108e44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e48: 0xc041a12  jal         func_106848
    ctx->pc = 0x108E48u;
    SET_GPR_U32(ctx, 31, 0x108E50u);
    ctx->pc = 0x108E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108E48u;
            // 0x108e4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108E50u; }
        if (ctx->pc != 0x108E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108E50u; }
        if (ctx->pc != 0x108E50u) { return; }
    }
    ctx->pc = 0x108E50u;
label_108e50:
    // 0x108e50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e54: 0xc041a12  jal         func_106848
    ctx->pc = 0x108E54u;
    SET_GPR_U32(ctx, 31, 0x108E5Cu);
    ctx->pc = 0x108E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108E54u;
            // 0x108e58: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108E5Cu; }
        if (ctx->pc != 0x108E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108E5Cu; }
        if (ctx->pc != 0x108E5Cu) { return; }
    }
    ctx->pc = 0x108E5Cu;
label_108e5c:
    // 0x108e5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e60: 0xc041a12  jal         func_106848
    ctx->pc = 0x108E60u;
    SET_GPR_U32(ctx, 31, 0x108E68u);
    ctx->pc = 0x108E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108E60u;
            // 0x108e64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108E68u; }
        if (ctx->pc != 0x108E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108E68u; }
        if (ctx->pc != 0x108E68u) { return; }
    }
    ctx->pc = 0x108E68u;
label_108e68:
    // 0x108e68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e6c: 0xc041a12  jal         func_106848
    ctx->pc = 0x108E6Cu;
    SET_GPR_U32(ctx, 31, 0x108E74u);
    ctx->pc = 0x108E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108E6Cu;
            // 0x108e70: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108E74u; }
        if (ctx->pc != 0x108E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108E74u; }
        if (ctx->pc != 0x108E74u) { return; }
    }
    ctx->pc = 0x108E74u;
label_108e74:
    // 0x108e74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e78: 0xc041a12  jal         func_106848
    ctx->pc = 0x108E78u;
    SET_GPR_U32(ctx, 31, 0x108E80u);
    ctx->pc = 0x108E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108E78u;
            // 0x108e7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108E80u; }
        if (ctx->pc != 0x108E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108E80u; }
        if (ctx->pc != 0x108E80u) { return; }
    }
    ctx->pc = 0x108E80u;
label_108e80:
    // 0x108e80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e84: 0xc041a12  jal         func_106848
    ctx->pc = 0x108E84u;
    SET_GPR_U32(ctx, 31, 0x108E8Cu);
    ctx->pc = 0x108E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108E84u;
            // 0x108e88: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108E8Cu; }
        if (ctx->pc != 0x108E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108E8Cu; }
        if (ctx->pc != 0x108E8Cu) { return; }
    }
    ctx->pc = 0x108E8Cu;
label_108e8c:
    // 0x108e8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x108e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108e90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x108e90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108e94: 0x3e00008  jr          $ra
    ctx->pc = 0x108E94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108E94u;
            // 0x108e98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x108E9Cu;
    // 0x108e9c: 0x0  nop
    ctx->pc = 0x108e9cu;
    // NOP
    // 0x108ea0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x108ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x108ea4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x108ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x108ea8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x108ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x108eac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x108eacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108eb0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x108eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x108eb4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x108eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x108eb8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x108eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x108ebc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x108ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x108ec0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x108ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x108ec4: 0x8e22014c  lw          $v0, 0x14C($s1)
    ctx->pc = 0x108ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x108ec8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x108EC8u;
    {
        const bool branch_taken_0x108ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x108ec8) {
            ctx->pc = 0x108ECCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x108EC8u;
            // 0x108ecc: 0x8e230184  lw          $v1, 0x184($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x108EECu;
            goto label_108eec;
        }
    }
    ctx->pc = 0x108ED0u;
    // 0x108ed0: 0x8e220194  lw          $v0, 0x194($s1)
    ctx->pc = 0x108ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x108ed4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x108ED4u;
    {
        const bool branch_taken_0x108ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108ED4u;
            // 0x108ed8: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108ed4) {
            ctx->pc = 0x108EF8u;
            goto label_108ef8;
        }
    }
    ctx->pc = 0x108EDCu;
    // 0x108edc: 0x8e230188  lw          $v1, 0x188($s1)
    ctx->pc = 0x108edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
    // 0x108ee0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x108ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x108ee4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x108EE4u;
    {
        const bool branch_taken_0x108ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108EE4u;
            // 0x108ee8: 0x43980b  movn        $s3, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108ee4) {
            ctx->pc = 0x108F08u;
            goto label_108f08;
        }
    }
    ctx->pc = 0x108EECu;
label_108eec:
    // 0x108eec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x108eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x108ef0: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x108EF0u;
    {
        const bool branch_taken_0x108ef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x108ef0) {
            ctx->pc = 0x108EF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x108EF0u;
            // 0x108ef4: 0x8e220194  lw          $v0, 0x194($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x108F00u;
            goto label_108f00;
        }
    }
    ctx->pc = 0x108EF8u;
label_108ef8:
    // 0x108ef8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x108EF8u;
    {
        const bool branch_taken_0x108ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108EF8u;
            // 0x108efc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108ef8) {
            ctx->pc = 0x108F08u;
            goto label_108f08;
        }
    }
    ctx->pc = 0x108F00u;
label_108f00:
    // 0x108f00: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x108f00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x108f04: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x108f04u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_108f08:
    // 0x108f08: 0x1a600019  blez        $s3, . + 4 + (0x19 << 2)
    ctx->pc = 0x108F08u;
    {
        const bool branch_taken_0x108f08 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x108F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108F08u;
            // 0x108f0c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108f08) {
            ctx->pc = 0x108F70u;
            goto label_108f70;
        }
    }
    ctx->pc = 0x108F10u;
    // 0x108f10: 0x2635019c  addiu       $s5, $s1, 0x19C
    ctx->pc = 0x108f10u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 412));
    // 0x108f14: 0x263401a8  addiu       $s4, $s1, 0x1A8
    ctx->pc = 0x108f14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 424));
    // 0x108f18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108f1c: 0x0  nop
    ctx->pc = 0x108f1cu;
    // NOP
label_108f20:
    // 0x108f20: 0xc041a12  jal         func_106848
    ctx->pc = 0x108F20u;
    SET_GPR_U32(ctx, 31, 0x108F28u);
    ctx->pc = 0x108F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108F20u;
            // 0x108f24: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108F28u; }
        if (ctx->pc != 0x108F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108F28u; }
        if (ctx->pc != 0x108F28u) { return; }
    }
    ctx->pc = 0x108F28u;
label_108f28:
    // 0x108f28: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x108f28u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x108f2c: 0x2b01821  addu        $v1, $s5, $s0
    ctx->pc = 0x108f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x108f30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108f34: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x108f34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x108f38: 0xc041a12  jal         func_106848
    ctx->pc = 0x108F38u;
    SET_GPR_U32(ctx, 31, 0x108F40u);
    ctx->pc = 0x108F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108F38u;
            // 0x108f3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108F40u; }
        if (ctx->pc != 0x108F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108F40u; }
        if (ctx->pc != 0x108F40u) { return; }
    }
    ctx->pc = 0x108F40u;
label_108f40:
    // 0x108f40: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x108f40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x108f44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108f48: 0xc041a12  jal         func_106848
    ctx->pc = 0x108F48u;
    SET_GPR_U32(ctx, 31, 0x108F50u);
    ctx->pc = 0x108F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108F48u;
            // 0x108f4c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108F50u; }
        if (ctx->pc != 0x108F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108F50u; }
        if (ctx->pc != 0x108F50u) { return; }
    }
    ctx->pc = 0x108F50u;
label_108f50:
    // 0x108f50: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x108f50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x108f54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108f58: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x108f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x108f5c: 0xc041a12  jal         func_106848
    ctx->pc = 0x108F5Cu;
    SET_GPR_U32(ctx, 31, 0x108F64u);
    ctx->pc = 0x108F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108F5Cu;
            // 0x108f60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108F64u; }
        if (ctx->pc != 0x108F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108F64u; }
        if (ctx->pc != 0x108F64u) { return; }
    }
    ctx->pc = 0x108F64u;
label_108f64:
    // 0x108f64: 0x253182a  slt         $v1, $s2, $s3
    ctx->pc = 0x108f64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x108f68: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x108F68u;
    {
        const bool branch_taken_0x108f68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x108F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108F68u;
            // 0x108f6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108f68) {
            ctx->pc = 0x108F20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_108f20;
        }
    }
    ctx->pc = 0x108F70u;
label_108f70:
    // 0x108f70: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x108f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x108f74: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x108f74u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x108f78: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x108f78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x108f7c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x108f7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x108f80: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x108f80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108f84: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x108f84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108f88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x108f88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x108F8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108F8Cu;
            // 0x108f90: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x108F94u;
    // 0x108f94: 0x0  nop
    ctx->pc = 0x108f94u;
    // NOP
}
