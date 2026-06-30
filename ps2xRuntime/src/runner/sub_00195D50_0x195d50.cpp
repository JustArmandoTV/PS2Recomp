#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00195D50
// Address: 0x195d50 - 0x195e60
void sub_00195D50_0x195d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195D50_0x195d50");
#endif

    switch (ctx->pc) {
        case 0x195d50u: goto label_195d50;
        case 0x195d54u: goto label_195d54;
        case 0x195d58u: goto label_195d58;
        case 0x195d5cu: goto label_195d5c;
        case 0x195d60u: goto label_195d60;
        case 0x195d64u: goto label_195d64;
        case 0x195d68u: goto label_195d68;
        case 0x195d6cu: goto label_195d6c;
        case 0x195d70u: goto label_195d70;
        case 0x195d74u: goto label_195d74;
        case 0x195d78u: goto label_195d78;
        case 0x195d7cu: goto label_195d7c;
        case 0x195d80u: goto label_195d80;
        case 0x195d84u: goto label_195d84;
        case 0x195d88u: goto label_195d88;
        case 0x195d8cu: goto label_195d8c;
        case 0x195d90u: goto label_195d90;
        case 0x195d94u: goto label_195d94;
        case 0x195d98u: goto label_195d98;
        case 0x195d9cu: goto label_195d9c;
        case 0x195da0u: goto label_195da0;
        case 0x195da4u: goto label_195da4;
        case 0x195da8u: goto label_195da8;
        case 0x195dacu: goto label_195dac;
        case 0x195db0u: goto label_195db0;
        case 0x195db4u: goto label_195db4;
        case 0x195db8u: goto label_195db8;
        case 0x195dbcu: goto label_195dbc;
        case 0x195dc0u: goto label_195dc0;
        case 0x195dc4u: goto label_195dc4;
        case 0x195dc8u: goto label_195dc8;
        case 0x195dccu: goto label_195dcc;
        case 0x195dd0u: goto label_195dd0;
        case 0x195dd4u: goto label_195dd4;
        case 0x195dd8u: goto label_195dd8;
        case 0x195ddcu: goto label_195ddc;
        case 0x195de0u: goto label_195de0;
        case 0x195de4u: goto label_195de4;
        case 0x195de8u: goto label_195de8;
        case 0x195decu: goto label_195dec;
        case 0x195df0u: goto label_195df0;
        case 0x195df4u: goto label_195df4;
        case 0x195df8u: goto label_195df8;
        case 0x195dfcu: goto label_195dfc;
        case 0x195e00u: goto label_195e00;
        case 0x195e04u: goto label_195e04;
        case 0x195e08u: goto label_195e08;
        case 0x195e0cu: goto label_195e0c;
        case 0x195e10u: goto label_195e10;
        case 0x195e14u: goto label_195e14;
        case 0x195e18u: goto label_195e18;
        case 0x195e1cu: goto label_195e1c;
        case 0x195e20u: goto label_195e20;
        case 0x195e24u: goto label_195e24;
        case 0x195e28u: goto label_195e28;
        case 0x195e2cu: goto label_195e2c;
        case 0x195e30u: goto label_195e30;
        case 0x195e34u: goto label_195e34;
        case 0x195e38u: goto label_195e38;
        case 0x195e3cu: goto label_195e3c;
        case 0x195e40u: goto label_195e40;
        case 0x195e44u: goto label_195e44;
        case 0x195e48u: goto label_195e48;
        case 0x195e4cu: goto label_195e4c;
        case 0x195e50u: goto label_195e50;
        case 0x195e54u: goto label_195e54;
        case 0x195e58u: goto label_195e58;
        case 0x195e5cu: goto label_195e5c;
        default: break;
    }

    ctx->pc = 0x195d50u;

label_195d50:
    // 0x195d50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x195d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_195d54:
    // 0x195d54: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x195d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_195d58:
    // 0x195d58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x195d58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_195d5c:
    // 0x195d5c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x195d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_195d60:
    // 0x195d60: 0x2cb10001  sltiu       $s1, $a1, 0x1
    ctx->pc = 0x195d60u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_195d64:
    // 0x195d64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x195d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_195d68:
    // 0x195d68: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x195d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_195d6c:
    // 0x195d6c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x195d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_195d70:
    // 0x195d70: 0x40f809  jalr        $v0
label_195d74:
    if (ctx->pc == 0x195D74u) {
        ctx->pc = 0x195D74u;
            // 0x195d74: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x195D78u;
        goto label_195d78;
    }
    ctx->pc = 0x195D70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195D78u);
        ctx->pc = 0x195D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195D70u;
            // 0x195d74: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x195D78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x195D78u; }
            if (ctx->pc != 0x195D78u) { return; }
        }
        }
    }
    ctx->pc = 0x195D78u;
label_195d78:
    // 0x195d78: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x195d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_195d7c:
    // 0x195d7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_195d80:
    // 0x195d80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x195d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_195d84:
    // 0x195d84: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x195d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_195d88:
    // 0x195d88: 0x40f809  jalr        $v0
label_195d8c:
    if (ctx->pc == 0x195D8Cu) {
        ctx->pc = 0x195D8Cu;
            // 0x195d8c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x195D90u;
        goto label_195d90;
    }
    ctx->pc = 0x195D88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195D90u);
        ctx->pc = 0x195D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195D88u;
            // 0x195d8c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x195D90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x195D90u; }
            if (ctx->pc != 0x195D90u) { return; }
        }
        }
    }
    ctx->pc = 0x195D90u;
label_195d90:
    // 0x195d90: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x195d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_195d94:
    // 0x195d94: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x195d94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_195d98:
    // 0x195d98: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x195d98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_195d9c:
    // 0x195d9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x195d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_195da0:
    // 0x195da0: 0x3e00008  jr          $ra
label_195da4:
    if (ctx->pc == 0x195DA4u) {
        ctx->pc = 0x195DA4u;
            // 0x195da4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x195DA8u;
        goto label_195da8;
    }
    ctx->pc = 0x195DA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195DA0u;
            // 0x195da4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x195DA8u;
label_195da8:
    // 0x195da8: 0x3e00008  jr          $ra
label_195dac:
    if (ctx->pc == 0x195DACu) {
        ctx->pc = 0x195DACu;
            // 0x195dac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x195DB0u;
        goto label_195db0;
    }
    ctx->pc = 0x195DA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195DA8u;
            // 0x195dac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x195DB0u;
label_195db0:
    // 0x195db0: 0x3e00008  jr          $ra
label_195db4:
    if (ctx->pc == 0x195DB4u) {
        ctx->pc = 0x195DB4u;
            // 0x195db4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x195DB8u;
        goto label_195db8;
    }
    ctx->pc = 0x195DB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195DB0u;
            // 0x195db4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x195DB8u;
label_195db8:
    // 0x195db8: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x195db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_195dbc:
    // 0x195dbc: 0x3e00008  jr          $ra
label_195dc0:
    if (ctx->pc == 0x195DC0u) {
        ctx->pc = 0x195DC0u;
            // 0x195dc0: 0x24428390  addiu       $v0, $v0, -0x7C70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935440));
        ctx->pc = 0x195DC4u;
        goto label_195dc4;
    }
    ctx->pc = 0x195DBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195DBCu;
            // 0x195dc0: 0x24428390  addiu       $v0, $v0, -0x7C70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935440));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x195DC4u;
label_195dc4:
    // 0x195dc4: 0x0  nop
    ctx->pc = 0x195dc4u;
    // NOP
label_195dc8:
    // 0x195dc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x195dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_195dcc:
    // 0x195dcc: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x195dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_195dd0:
    // 0x195dd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x195dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_195dd4:
    // 0x195dd4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x195dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_195dd8:
    // 0x195dd8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x195dd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_195ddc:
    // 0x195ddc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x195ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_195de0:
    // 0x195de0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x195de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_195de4:
    // 0x195de4: 0xc064bc8  jal         func_192F20
label_195de8:
    if (ctx->pc == 0x195DE8u) {
        ctx->pc = 0x195DE8u;
            // 0x195de8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x195DECu;
        goto label_195dec;
    }
    ctx->pc = 0x195DE4u;
    SET_GPR_U32(ctx, 31, 0x195DECu);
    ctx->pc = 0x195DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195DE4u;
            // 0x195de8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192F20u;
    if (runtime->hasFunction(0x192F20u)) {
        auto targetFn = runtime->lookupFunction(0x192F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195DECu; }
        if (ctx->pc != 0x195DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192F20_0x192f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195DECu; }
        if (ctx->pc != 0x195DECu) { return; }
    }
    ctx->pc = 0x195DECu;
label_195dec:
    // 0x195dec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x195decu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_195df0:
    // 0x195df0: 0x52000016  beql        $s0, $zero, . + 4 + (0x16 << 2)
label_195df4:
    if (ctx->pc == 0x195DF4u) {
        ctx->pc = 0x195DF4u;
            // 0x195df4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x195DF8u;
        goto label_195df8;
    }
    ctx->pc = 0x195DF0u;
    {
        const bool branch_taken_0x195df0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x195df0) {
            ctx->pc = 0x195DF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x195DF0u;
            // 0x195df4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x195E4Cu;
            goto label_195e4c;
        }
    }
    ctx->pc = 0x195DF8u;
label_195df8:
    // 0x195df8: 0xc0659a4  jal         func_196690
label_195dfc:
    if (ctx->pc == 0x195DFCu) {
        ctx->pc = 0x195E00u;
        goto label_195e00;
    }
    ctx->pc = 0x195DF8u;
    SET_GPR_U32(ctx, 31, 0x195E00u);
    ctx->pc = 0x196690u;
    if (runtime->hasFunction(0x196690u)) {
        auto targetFn = runtime->lookupFunction(0x196690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195E00u; }
        if (ctx->pc != 0x195E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196690_0x196690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195E00u; }
        if (ctx->pc != 0x195E00u) { return; }
    }
    ctx->pc = 0x195E00u;
label_195e00:
    // 0x195e00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_195e04:
    if (ctx->pc == 0x195E04u) {
        ctx->pc = 0x195E04u;
            // 0x195e04: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x195E08u;
        goto label_195e08;
    }
    ctx->pc = 0x195E00u;
    {
        const bool branch_taken_0x195e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195E00u;
            // 0x195e04: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195e00) {
            ctx->pc = 0x195E10u;
            goto label_195e10;
        }
    }
    ctx->pc = 0x195E08u;
label_195e08:
    // 0x195e08: 0x1000000f  b           . + 4 + (0xF << 2)
label_195e0c:
    if (ctx->pc == 0x195E0Cu) {
        ctx->pc = 0x195E0Cu;
            // 0x195e0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x195E10u;
        goto label_195e10;
    }
    ctx->pc = 0x195E08u;
    {
        const bool branch_taken_0x195e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195E08u;
            // 0x195e0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195e08) {
            ctx->pc = 0x195E48u;
            goto label_195e48;
        }
    }
    ctx->pc = 0x195E10u;
label_195e10:
    // 0x195e10: 0x2121823  subu        $v1, $s0, $s2
    ctx->pc = 0x195e10u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_195e14:
    // 0x195e14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_195e18:
    // 0x195e18: 0x2238823  subu        $s1, $s1, $v1
    ctx->pc = 0x195e18u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_195e1c:
    // 0x195e1c: 0x1a20000a  blez        $s1, . + 4 + (0xA << 2)
label_195e20:
    if (ctx->pc == 0x195E20u) {
        ctx->pc = 0x195E20u;
            // 0x195e20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x195E24u;
        goto label_195e24;
    }
    ctx->pc = 0x195E1Cu;
    {
        const bool branch_taken_0x195e1c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x195E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195E1Cu;
            // 0x195e20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195e1c) {
            ctx->pc = 0x195E48u;
            goto label_195e48;
        }
    }
    ctx->pc = 0x195E24u;
label_195e24:
    // 0x195e24: 0xc064bc8  jal         func_192F20
label_195e28:
    if (ctx->pc == 0x195E28u) {
        ctx->pc = 0x195E28u;
            // 0x195e28: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x195E2Cu;
        goto label_195e2c;
    }
    ctx->pc = 0x195E24u;
    SET_GPR_U32(ctx, 31, 0x195E2Cu);
    ctx->pc = 0x195E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195E24u;
            // 0x195e28: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192F20u;
    if (runtime->hasFunction(0x192F20u)) {
        auto targetFn = runtime->lookupFunction(0x192F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195E2Cu; }
        if (ctx->pc != 0x195E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192F20_0x192f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195E2Cu; }
        if (ctx->pc != 0x195E2Cu) { return; }
    }
    ctx->pc = 0x195E2Cu;
label_195e2c:
    // 0x195e2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x195e2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_195e30:
    // 0x195e30: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_195e34:
    if (ctx->pc == 0x195E34u) {
        ctx->pc = 0x195E34u;
            // 0x195e34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x195E38u;
        goto label_195e38;
    }
    ctx->pc = 0x195E30u;
    {
        const bool branch_taken_0x195e30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x195E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195E30u;
            // 0x195e34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195e30) {
            ctx->pc = 0x195E48u;
            goto label_195e48;
        }
    }
    ctx->pc = 0x195E38u;
label_195e38:
    // 0x195e38: 0xc064b62  jal         func_192D88
label_195e3c:
    if (ctx->pc == 0x195E3Cu) {
        ctx->pc = 0x195E40u;
        goto label_195e40;
    }
    ctx->pc = 0x195E38u;
    SET_GPR_U32(ctx, 31, 0x195E40u);
    ctx->pc = 0x192D88u;
    if (runtime->hasFunction(0x192D88u)) {
        auto targetFn = runtime->lookupFunction(0x192D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195E40u; }
        if (ctx->pc != 0x195E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192D88_0x192d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195E40u; }
        if (ctx->pc != 0x195E40u) { return; }
    }
    ctx->pc = 0x195E40u;
label_195e40:
    // 0x195e40: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x195e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_195e44:
    // 0x195e44: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x195e44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_195e48:
    // 0x195e48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x195e48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_195e4c:
    // 0x195e4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x195e4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_195e50:
    // 0x195e50: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x195e50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_195e54:
    // 0x195e54: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x195e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_195e58:
    // 0x195e58: 0x3e00008  jr          $ra
label_195e5c:
    if (ctx->pc == 0x195E5Cu) {
        ctx->pc = 0x195E5Cu;
            // 0x195e5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x195E60u;
        goto label_fallthrough_0x195e58;
    }
    ctx->pc = 0x195E58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195E58u;
            // 0x195e5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x195e58:
    ctx->pc = 0x195E60u;
}
