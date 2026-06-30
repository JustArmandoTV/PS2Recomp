#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017FF10
// Address: 0x17ff10 - 0x180018
void sub_0017FF10_0x17ff10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017FF10_0x17ff10");
#endif

    switch (ctx->pc) {
        case 0x17ff10u: goto label_17ff10;
        case 0x17ff14u: goto label_17ff14;
        case 0x17ff18u: goto label_17ff18;
        case 0x17ff1cu: goto label_17ff1c;
        case 0x17ff20u: goto label_17ff20;
        case 0x17ff24u: goto label_17ff24;
        case 0x17ff28u: goto label_17ff28;
        case 0x17ff2cu: goto label_17ff2c;
        case 0x17ff30u: goto label_17ff30;
        case 0x17ff34u: goto label_17ff34;
        case 0x17ff38u: goto label_17ff38;
        case 0x17ff3cu: goto label_17ff3c;
        case 0x17ff40u: goto label_17ff40;
        case 0x17ff44u: goto label_17ff44;
        case 0x17ff48u: goto label_17ff48;
        case 0x17ff4cu: goto label_17ff4c;
        case 0x17ff50u: goto label_17ff50;
        case 0x17ff54u: goto label_17ff54;
        case 0x17ff58u: goto label_17ff58;
        case 0x17ff5cu: goto label_17ff5c;
        case 0x17ff60u: goto label_17ff60;
        case 0x17ff64u: goto label_17ff64;
        case 0x17ff68u: goto label_17ff68;
        case 0x17ff6cu: goto label_17ff6c;
        case 0x17ff70u: goto label_17ff70;
        case 0x17ff74u: goto label_17ff74;
        case 0x17ff78u: goto label_17ff78;
        case 0x17ff7cu: goto label_17ff7c;
        case 0x17ff80u: goto label_17ff80;
        case 0x17ff84u: goto label_17ff84;
        case 0x17ff88u: goto label_17ff88;
        case 0x17ff8cu: goto label_17ff8c;
        case 0x17ff90u: goto label_17ff90;
        case 0x17ff94u: goto label_17ff94;
        case 0x17ff98u: goto label_17ff98;
        case 0x17ff9cu: goto label_17ff9c;
        case 0x17ffa0u: goto label_17ffa0;
        case 0x17ffa4u: goto label_17ffa4;
        case 0x17ffa8u: goto label_17ffa8;
        case 0x17ffacu: goto label_17ffac;
        case 0x17ffb0u: goto label_17ffb0;
        case 0x17ffb4u: goto label_17ffb4;
        case 0x17ffb8u: goto label_17ffb8;
        case 0x17ffbcu: goto label_17ffbc;
        case 0x17ffc0u: goto label_17ffc0;
        case 0x17ffc4u: goto label_17ffc4;
        case 0x17ffc8u: goto label_17ffc8;
        case 0x17ffccu: goto label_17ffcc;
        case 0x17ffd0u: goto label_17ffd0;
        case 0x17ffd4u: goto label_17ffd4;
        case 0x17ffd8u: goto label_17ffd8;
        case 0x17ffdcu: goto label_17ffdc;
        case 0x17ffe0u: goto label_17ffe0;
        case 0x17ffe4u: goto label_17ffe4;
        case 0x17ffe8u: goto label_17ffe8;
        case 0x17ffecu: goto label_17ffec;
        case 0x17fff0u: goto label_17fff0;
        case 0x17fff4u: goto label_17fff4;
        case 0x17fff8u: goto label_17fff8;
        case 0x17fffcu: goto label_17fffc;
        case 0x180000u: goto label_180000;
        case 0x180004u: goto label_180004;
        case 0x180008u: goto label_180008;
        case 0x18000cu: goto label_18000c;
        case 0x180010u: goto label_180010;
        case 0x180014u: goto label_180014;
        default: break;
    }

    ctx->pc = 0x17ff10u;

label_17ff10:
    // 0x17ff10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17ff10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_17ff14:
    // 0x17ff14: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x17ff14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_17ff18:
    // 0x17ff18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17ff18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17ff1c:
    // 0x17ff1c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17ff1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_17ff20:
    // 0x17ff20: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x17ff20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_17ff24:
    // 0x17ff24: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
label_17ff28:
    if (ctx->pc == 0x17FF28u) {
        ctx->pc = 0x17FF28u;
            // 0x17ff28: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->pc = 0x17FF2Cu;
        goto label_17ff2c;
    }
    ctx->pc = 0x17FF24u;
    {
        const bool branch_taken_0x17ff24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FF24u;
            // 0x17ff28: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ff24) {
            ctx->pc = 0x17FF40u;
            goto label_17ff40;
        }
    }
    ctx->pc = 0x17FF2Cu;
label_17ff2c:
    // 0x17ff2c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17ff2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_17ff30:
    // 0x17ff30: 0xc060334  jal         func_180CD0
label_17ff34:
    if (ctx->pc == 0x17FF34u) {
        ctx->pc = 0x17FF34u;
            // 0x17ff34: 0x248466f8  addiu       $a0, $a0, 0x66F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26360));
        ctx->pc = 0x17FF38u;
        goto label_17ff38;
    }
    ctx->pc = 0x17FF30u;
    SET_GPR_U32(ctx, 31, 0x17FF38u);
    ctx->pc = 0x17FF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FF30u;
            // 0x17ff34: 0x248466f8  addiu       $a0, $a0, 0x66F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180CD0u;
    if (runtime->hasFunction(0x180CD0u)) {
        auto targetFn = runtime->lookupFunction(0x180CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FF38u; }
        if (ctx->pc != 0x17FF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180CD0_0x180cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FF38u; }
        if (ctx->pc != 0x17FF38u) { return; }
    }
    ctx->pc = 0x17FF38u;
label_17ff38:
    // 0x17ff38: 0x10000031  b           . + 4 + (0x31 << 2)
label_17ff3c:
    if (ctx->pc == 0x17FF3Cu) {
        ctx->pc = 0x17FF3Cu;
            // 0x17ff3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17FF40u;
        goto label_17ff40;
    }
    ctx->pc = 0x17FF38u;
    {
        const bool branch_taken_0x17ff38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FF38u;
            // 0x17ff3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ff38) {
            ctx->pc = 0x180000u;
            goto label_180000;
        }
    }
    ctx->pc = 0x17FF40u;
label_17ff40:
    // 0x17ff40: 0xc06031e  jal         func_180C78
label_17ff44:
    if (ctx->pc == 0x17FF44u) {
        ctx->pc = 0x17FF44u;
            // 0x17ff44: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17FF48u;
        goto label_17ff48;
    }
    ctx->pc = 0x17FF40u;
    SET_GPR_U32(ctx, 31, 0x17FF48u);
    ctx->pc = 0x17FF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FF40u;
            // 0x17ff44: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180C78u;
    if (runtime->hasFunction(0x180C78u)) {
        auto targetFn = runtime->lookupFunction(0x180C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FF48u; }
        if (ctx->pc != 0x17FF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180C78_0x180c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FF48u; }
        if (ctx->pc != 0x17FF48u) { return; }
    }
    ctx->pc = 0x17FF48u;
label_17ff48:
    // 0x17ff48: 0xc05ff9e  jal         func_17FE78
label_17ff4c:
    if (ctx->pc == 0x17FF4Cu) {
        ctx->pc = 0x17FF50u;
        goto label_17ff50;
    }
    ctx->pc = 0x17FF48u;
    SET_GPR_U32(ctx, 31, 0x17FF50u);
    ctx->pc = 0x17FE78u;
    if (runtime->hasFunction(0x17FE78u)) {
        auto targetFn = runtime->lookupFunction(0x17FE78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FF50u; }
        if (ctx->pc != 0x17FF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017FE78_0x17fe78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FF50u; }
        if (ctx->pc != 0x17FF50u) { return; }
    }
    ctx->pc = 0x17FF50u;
label_17ff50:
    // 0x17ff50: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x17ff50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17ff54:
    // 0x17ff54: 0x56400006  bnel        $s2, $zero, . + 4 + (0x6 << 2)
label_17ff58:
    if (ctx->pc == 0x17FF58u) {
        ctx->pc = 0x17FF58u;
            // 0x17ff58: 0xa2400001  sb          $zero, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x17FF5Cu;
        goto label_17ff5c;
    }
    ctx->pc = 0x17FF54u;
    {
        const bool branch_taken_0x17ff54 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ff54) {
            ctx->pc = 0x17FF58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17FF54u;
            // 0x17ff58: 0xa2400001  sb          $zero, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17FF70u;
            goto label_17ff70;
        }
    }
    ctx->pc = 0x17FF5Cu;
label_17ff5c:
    // 0x17ff5c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17ff5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_17ff60:
    // 0x17ff60: 0xc060334  jal         func_180CD0
label_17ff64:
    if (ctx->pc == 0x17FF64u) {
        ctx->pc = 0x17FF64u;
            // 0x17ff64: 0x24846728  addiu       $a0, $a0, 0x6728 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26408));
        ctx->pc = 0x17FF68u;
        goto label_17ff68;
    }
    ctx->pc = 0x17FF60u;
    SET_GPR_U32(ctx, 31, 0x17FF68u);
    ctx->pc = 0x17FF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FF60u;
            // 0x17ff64: 0x24846728  addiu       $a0, $a0, 0x6728 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180CD0u;
    if (runtime->hasFunction(0x180CD0u)) {
        auto targetFn = runtime->lookupFunction(0x180CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FF68u; }
        if (ctx->pc != 0x17FF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180CD0_0x180cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FF68u; }
        if (ctx->pc != 0x17FF68u) { return; }
    }
    ctx->pc = 0x17FF68u;
label_17ff68:
    // 0x17ff68: 0x10000022  b           . + 4 + (0x22 << 2)
label_17ff6c:
    if (ctx->pc == 0x17FF6Cu) {
        ctx->pc = 0x17FF70u;
        goto label_17ff70;
    }
    ctx->pc = 0x17FF68u;
    {
        const bool branch_taken_0x17ff68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ff68) {
            ctx->pc = 0x17FFF4u;
            goto label_17fff4;
        }
    }
    ctx->pc = 0x17FF70u;
label_17ff70:
    // 0x17ff70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17ff70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17ff74:
    // 0x17ff74: 0xae510008  sw          $s1, 0x8($s2)
    ctx->pc = 0x17ff74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 17));
label_17ff78:
    // 0x17ff78: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x17ff78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17ff7c:
    // 0x17ff7c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x17ff7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_17ff80:
    // 0x17ff80: 0x40f809  jalr        $v0
label_17ff84:
    if (ctx->pc == 0x17FF84u) {
        ctx->pc = 0x17FF84u;
            // 0x17ff84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17FF88u;
        goto label_17ff88;
    }
    ctx->pc = 0x17FF80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17FF88u);
        ctx->pc = 0x17FF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FF80u;
            // 0x17ff84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17FF88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17FF88u; }
            if (ctx->pc != 0x17FF88u) { return; }
        }
        }
    }
    ctx->pc = 0x17FF88u;
label_17ff88:
    // 0x17ff88: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x17ff88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17ff8c:
    // 0x17ff8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17ff8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17ff90:
    // 0x17ff90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17ff90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17ff94:
    // 0x17ff94: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x17ff94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_17ff98:
    // 0x17ff98: 0x40f809  jalr        $v0
label_17ff9c:
    if (ctx->pc == 0x17FF9Cu) {
        ctx->pc = 0x17FF9Cu;
            // 0x17ff9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x17FFA0u;
        goto label_17ffa0;
    }
    ctx->pc = 0x17FF98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17FFA0u);
        ctx->pc = 0x17FF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FF98u;
            // 0x17ff9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17FFA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17FFA0u; }
            if (ctx->pc != 0x17FFA0u) { return; }
        }
        }
    }
    ctx->pc = 0x17FFA0u;
label_17ffa0:
    // 0x17ffa0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x17ffa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_17ffa4:
    // 0x17ffa4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x17ffa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_17ffa8:
    // 0x17ffa8: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x17ffa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_17ffac:
    // 0x17ffac: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x17ffacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_17ffb0:
    // 0x17ffb0: 0xae500018  sw          $s0, 0x18($s2)
    ctx->pc = 0x17ffb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 16));
label_17ffb4:
    // 0x17ffb4: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x17ffb4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_17ffb8:
    // 0x17ffb8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_17ffbc:
    if (ctx->pc == 0x17FFBCu) {
        ctx->pc = 0x17FFBCu;
            // 0x17ffbc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x17FFC0u;
        goto label_17ffc0;
    }
    ctx->pc = 0x17FFB8u;
    {
        const bool branch_taken_0x17ffb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ffb8) {
            ctx->pc = 0x17FFBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17FFB8u;
            // 0x17ffbc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x17FFC0u;
            goto label_17ffc0;
        }
    }
    ctx->pc = 0x17FFC0u;
label_17ffc0:
    // 0x17ffc0: 0x26430230  addiu       $v1, $s2, 0x230
    ctx->pc = 0x17ffc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 560));
label_17ffc4:
    // 0x17ffc4: 0x1012  mflo        $v0
    ctx->pc = 0x17ffc4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_17ffc8:
    // 0x17ffc8: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x17ffc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_17ffcc:
    // 0x17ffcc: 0x0  nop
    ctx->pc = 0x17ffccu;
    // NOP
label_17ffd0:
    // 0x17ffd0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x17ffd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_17ffd4:
    // 0x17ffd4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x17ffd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_17ffd8:
    // 0x17ffd8: 0x0  nop
    ctx->pc = 0x17ffd8u;
    // NOP
label_17ffdc:
    // 0x17ffdc: 0x0  nop
    ctx->pc = 0x17ffdcu;
    // NOP
label_17ffe0:
    // 0x17ffe0: 0x0  nop
    ctx->pc = 0x17ffe0u;
    // NOP
label_17ffe4:
    // 0x17ffe4: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
label_17ffe8:
    if (ctx->pc == 0x17FFE8u) {
        ctx->pc = 0x17FFE8u;
            // 0x17ffe8: 0x2463ffe0  addiu       $v1, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->pc = 0x17FFECu;
        goto label_17ffec;
    }
    ctx->pc = 0x17FFE4u;
    {
        const bool branch_taken_0x17ffe4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x17FFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FFE4u;
            // 0x17ffe8: 0x2463ffe0  addiu       $v1, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ffe4) {
            ctx->pc = 0x17FFD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17ffd0;
        }
    }
    ctx->pc = 0x17FFECu;
label_17ffec:
    // 0x17ffec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17ffecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17fff0:
    // 0x17fff0: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x17fff0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
label_17fff4:
    // 0x17fff4: 0xc060324  jal         func_180C90
label_17fff8:
    if (ctx->pc == 0x17FFF8u) {
        ctx->pc = 0x17FFF8u;
            // 0x17fff8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17FFFCu;
        goto label_17fffc;
    }
    ctx->pc = 0x17FFF4u;
    SET_GPR_U32(ctx, 31, 0x17FFFCu);
    ctx->pc = 0x17FFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FFF4u;
            // 0x17fff8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180C90u;
    if (runtime->hasFunction(0x180C90u)) {
        auto targetFn = runtime->lookupFunction(0x180C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FFFCu; }
        if (ctx->pc != 0x17FFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180C90_0x180c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FFFCu; }
        if (ctx->pc != 0x17FFFCu) { return; }
    }
    ctx->pc = 0x17FFFCu;
label_17fffc:
    // 0x17fffc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x17fffcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_180000:
    // 0x180000: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x180000u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_180004:
    // 0x180004: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x180004u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_180008:
    // 0x180008: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x180008u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18000c:
    // 0x18000c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x18000cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_180010:
    // 0x180010: 0x3e00008  jr          $ra
label_180014:
    if (ctx->pc == 0x180014u) {
        ctx->pc = 0x180014u;
            // 0x180014: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x180018u;
        goto label_fallthrough_0x180010;
    }
    ctx->pc = 0x180010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180010u;
            // 0x180014: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x180010:
    ctx->pc = 0x180018u;
}
