#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00473FD0
// Address: 0x473fd0 - 0x4740d0
void sub_00473FD0_0x473fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00473FD0_0x473fd0");
#endif

    switch (ctx->pc) {
        case 0x473fd0u: goto label_473fd0;
        case 0x473fd4u: goto label_473fd4;
        case 0x473fd8u: goto label_473fd8;
        case 0x473fdcu: goto label_473fdc;
        case 0x473fe0u: goto label_473fe0;
        case 0x473fe4u: goto label_473fe4;
        case 0x473fe8u: goto label_473fe8;
        case 0x473fecu: goto label_473fec;
        case 0x473ff0u: goto label_473ff0;
        case 0x473ff4u: goto label_473ff4;
        case 0x473ff8u: goto label_473ff8;
        case 0x473ffcu: goto label_473ffc;
        case 0x474000u: goto label_474000;
        case 0x474004u: goto label_474004;
        case 0x474008u: goto label_474008;
        case 0x47400cu: goto label_47400c;
        case 0x474010u: goto label_474010;
        case 0x474014u: goto label_474014;
        case 0x474018u: goto label_474018;
        case 0x47401cu: goto label_47401c;
        case 0x474020u: goto label_474020;
        case 0x474024u: goto label_474024;
        case 0x474028u: goto label_474028;
        case 0x47402cu: goto label_47402c;
        case 0x474030u: goto label_474030;
        case 0x474034u: goto label_474034;
        case 0x474038u: goto label_474038;
        case 0x47403cu: goto label_47403c;
        case 0x474040u: goto label_474040;
        case 0x474044u: goto label_474044;
        case 0x474048u: goto label_474048;
        case 0x47404cu: goto label_47404c;
        case 0x474050u: goto label_474050;
        case 0x474054u: goto label_474054;
        case 0x474058u: goto label_474058;
        case 0x47405cu: goto label_47405c;
        case 0x474060u: goto label_474060;
        case 0x474064u: goto label_474064;
        case 0x474068u: goto label_474068;
        case 0x47406cu: goto label_47406c;
        case 0x474070u: goto label_474070;
        case 0x474074u: goto label_474074;
        case 0x474078u: goto label_474078;
        case 0x47407cu: goto label_47407c;
        case 0x474080u: goto label_474080;
        case 0x474084u: goto label_474084;
        case 0x474088u: goto label_474088;
        case 0x47408cu: goto label_47408c;
        case 0x474090u: goto label_474090;
        case 0x474094u: goto label_474094;
        case 0x474098u: goto label_474098;
        case 0x47409cu: goto label_47409c;
        case 0x4740a0u: goto label_4740a0;
        case 0x4740a4u: goto label_4740a4;
        case 0x4740a8u: goto label_4740a8;
        case 0x4740acu: goto label_4740ac;
        case 0x4740b0u: goto label_4740b0;
        case 0x4740b4u: goto label_4740b4;
        case 0x4740b8u: goto label_4740b8;
        case 0x4740bcu: goto label_4740bc;
        case 0x4740c0u: goto label_4740c0;
        case 0x4740c4u: goto label_4740c4;
        case 0x4740c8u: goto label_4740c8;
        case 0x4740ccu: goto label_4740cc;
        default: break;
    }

    ctx->pc = 0x473fd0u;

label_473fd0:
    // 0x473fd0: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x473fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_473fd4:
    // 0x473fd4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x473fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_473fd8:
    // 0x473fd8: 0x3e00008  jr          $ra
label_473fdc:
    if (ctx->pc == 0x473FDCu) {
        ctx->pc = 0x473FDCu;
            // 0x473fdc: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x473FE0u;
        goto label_473fe0;
    }
    ctx->pc = 0x473FD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x473FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x473FD8u;
            // 0x473fdc: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x473FE0u;
label_473fe0:
    // 0x473fe0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x473fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_473fe4:
    // 0x473fe4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x473fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_473fe8:
    // 0x473fe8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x473fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_473fec:
    // 0x473fec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x473fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_473ff0:
    // 0x473ff0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x473ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_473ff4:
    // 0x473ff4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x473ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_473ff8:
    // 0x473ff8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x473ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_473ffc:
    // 0x473ffc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x473ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_474000:
    // 0x474000: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x474000u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_474004:
    // 0x474004: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_474008:
    if (ctx->pc == 0x474008u) {
        ctx->pc = 0x474008u;
            // 0x474008: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47400Cu;
        goto label_47400c;
    }
    ctx->pc = 0x474004u;
    {
        const bool branch_taken_0x474004 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x474008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x474004u;
            // 0x474008: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474004) {
            ctx->pc = 0x474038u;
            goto label_474038;
        }
    }
    ctx->pc = 0x47400Cu;
label_47400c:
    // 0x47400c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x47400cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_474010:
    // 0x474010: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_474014:
    if (ctx->pc == 0x474014u) {
        ctx->pc = 0x474014u;
            // 0x474014: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x474018u;
        goto label_474018;
    }
    ctx->pc = 0x474010u;
    {
        const bool branch_taken_0x474010 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x474010) {
            ctx->pc = 0x474014u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x474010u;
            // 0x474014: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47402Cu;
            goto label_47402c;
        }
    }
    ctx->pc = 0x474018u;
label_474018:
    // 0x474018: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x474018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_47401c:
    // 0x47401c: 0x10a30022  beq         $a1, $v1, . + 4 + (0x22 << 2)
label_474020:
    if (ctx->pc == 0x474020u) {
        ctx->pc = 0x474024u;
        goto label_474024;
    }
    ctx->pc = 0x47401Cu;
    {
        const bool branch_taken_0x47401c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x47401c) {
            ctx->pc = 0x4740A8u;
            goto label_4740a8;
        }
    }
    ctx->pc = 0x474024u;
label_474024:
    // 0x474024: 0x10000020  b           . + 4 + (0x20 << 2)
label_474028:
    if (ctx->pc == 0x474028u) {
        ctx->pc = 0x47402Cu;
        goto label_47402c;
    }
    ctx->pc = 0x474024u;
    {
        const bool branch_taken_0x474024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x474024) {
            ctx->pc = 0x4740A8u;
            goto label_4740a8;
        }
    }
    ctx->pc = 0x47402Cu;
label_47402c:
    // 0x47402c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x47402cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_474030:
    // 0x474030: 0x320f809  jalr        $t9
label_474034:
    if (ctx->pc == 0x474034u) {
        ctx->pc = 0x474038u;
        goto label_474038;
    }
    ctx->pc = 0x474030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x474038u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x474038u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x474038u; }
            if (ctx->pc != 0x474038u) { return; }
        }
        }
    }
    ctx->pc = 0x474038u;
label_474038:
    // 0x474038: 0x8e700070  lw          $s0, 0x70($s3)
    ctx->pc = 0x474038u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_47403c:
    // 0x47403c: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_474040:
    if (ctx->pc == 0x474040u) {
        ctx->pc = 0x474044u;
        goto label_474044;
    }
    ctx->pc = 0x47403Cu;
    {
        const bool branch_taken_0x47403c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x47403c) {
            ctx->pc = 0x4740A8u;
            goto label_4740a8;
        }
    }
    ctx->pc = 0x474044u;
label_474044:
    // 0x474044: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x474044u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_474048:
    // 0x474048: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x474048u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47404c:
    // 0x47404c: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x47404cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_474050:
    // 0x474050: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x474050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_474054:
    // 0x474054: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x474054u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_474058:
    // 0x474058: 0xc11d12c  jal         func_4744B0
label_47405c:
    if (ctx->pc == 0x47405Cu) {
        ctx->pc = 0x47405Cu;
            // 0x47405c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x474060u;
        goto label_474060;
    }
    ctx->pc = 0x474058u;
    SET_GPR_U32(ctx, 31, 0x474060u);
    ctx->pc = 0x47405Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474058u;
            // 0x47405c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4744B0u;
    if (runtime->hasFunction(0x4744B0u)) {
        auto targetFn = runtime->lookupFunction(0x4744B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474060u; }
        if (ctx->pc != 0x474060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004744B0_0x4744b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474060u; }
        if (ctx->pc != 0x474060u) { return; }
    }
    ctx->pc = 0x474060u;
label_474060:
    // 0x474060: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x474060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_474064:
    // 0x474064: 0x10450008  beq         $v0, $a1, . + 4 + (0x8 << 2)
label_474068:
    if (ctx->pc == 0x474068u) {
        ctx->pc = 0x47406Cu;
        goto label_47406c;
    }
    ctx->pc = 0x474064u;
    {
        const bool branch_taken_0x474064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x474064) {
            ctx->pc = 0x474088u;
            goto label_474088;
        }
    }
    ctx->pc = 0x47406Cu;
label_47406c:
    // 0x47406c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_474070:
    if (ctx->pc == 0x474070u) {
        ctx->pc = 0x474074u;
        goto label_474074;
    }
    ctx->pc = 0x47406Cu;
    {
        const bool branch_taken_0x47406c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47406c) {
            ctx->pc = 0x474080u;
            goto label_474080;
        }
    }
    ctx->pc = 0x474074u;
label_474074:
    // 0x474074: 0x10000008  b           . + 4 + (0x8 << 2)
label_474078:
    if (ctx->pc == 0x474078u) {
        ctx->pc = 0x47407Cu;
        goto label_47407c;
    }
    ctx->pc = 0x474074u;
    {
        const bool branch_taken_0x474074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x474074) {
            ctx->pc = 0x474098u;
            goto label_474098;
        }
    }
    ctx->pc = 0x47407Cu;
label_47407c:
    // 0x47407c: 0x0  nop
    ctx->pc = 0x47407cu;
    // NOP
label_474080:
    // 0x474080: 0xc11d128  jal         func_4744A0
label_474084:
    if (ctx->pc == 0x474084u) {
        ctx->pc = 0x474084u;
            // 0x474084: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x474088u;
        goto label_474088;
    }
    ctx->pc = 0x474080u;
    SET_GPR_U32(ctx, 31, 0x474088u);
    ctx->pc = 0x474084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474080u;
            // 0x474084: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4744A0u;
    if (runtime->hasFunction(0x4744A0u)) {
        auto targetFn = runtime->lookupFunction(0x4744A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474088u; }
        if (ctx->pc != 0x474088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004744A0_0x4744a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474088u; }
        if (ctx->pc != 0x474088u) { return; }
    }
    ctx->pc = 0x474088u;
label_474088:
    // 0x474088: 0xc11d034  jal         func_4740D0
label_47408c:
    if (ctx->pc == 0x47408Cu) {
        ctx->pc = 0x47408Cu;
            // 0x47408c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x474090u;
        goto label_474090;
    }
    ctx->pc = 0x474088u;
    SET_GPR_U32(ctx, 31, 0x474090u);
    ctx->pc = 0x47408Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474088u;
            // 0x47408c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4740D0u;
    if (runtime->hasFunction(0x4740D0u)) {
        auto targetFn = runtime->lookupFunction(0x4740D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474090u; }
        if (ctx->pc != 0x474090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004740D0_0x4740d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474090u; }
        if (ctx->pc != 0x474090u) { return; }
    }
    ctx->pc = 0x474090u;
label_474090:
    // 0x474090: 0xc11d590  jal         func_475640
label_474094:
    if (ctx->pc == 0x474094u) {
        ctx->pc = 0x474094u;
            // 0x474094: 0x268400ac  addiu       $a0, $s4, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 172));
        ctx->pc = 0x474098u;
        goto label_474098;
    }
    ctx->pc = 0x474090u;
    SET_GPR_U32(ctx, 31, 0x474098u);
    ctx->pc = 0x474094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x474090u;
            // 0x474094: 0x268400ac  addiu       $a0, $s4, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 172));
        ctx->in_delay_slot = false;
    ctx->pc = 0x475640u;
    if (runtime->hasFunction(0x475640u)) {
        auto targetFn = runtime->lookupFunction(0x475640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474098u; }
        if (ctx->pc != 0x474098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00475640_0x475640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x474098u; }
        if (ctx->pc != 0x474098u) { return; }
    }
    ctx->pc = 0x474098u;
label_474098:
    // 0x474098: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x474098u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_47409c:
    // 0x47409c: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x47409cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4740a0:
    // 0x4740a0: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_4740a4:
    if (ctx->pc == 0x4740A4u) {
        ctx->pc = 0x4740A4u;
            // 0x4740a4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4740A8u;
        goto label_4740a8;
    }
    ctx->pc = 0x4740A0u;
    {
        const bool branch_taken_0x4740a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4740A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4740A0u;
            // 0x4740a4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4740a0) {
            ctx->pc = 0x47404Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_47404c;
        }
    }
    ctx->pc = 0x4740A8u;
label_4740a8:
    // 0x4740a8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4740a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4740ac:
    // 0x4740ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4740acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4740b0:
    // 0x4740b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4740b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4740b4:
    // 0x4740b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4740b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4740b8:
    // 0x4740b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4740b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4740bc:
    // 0x4740bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4740bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4740c0:
    // 0x4740c0: 0x3e00008  jr          $ra
label_4740c4:
    if (ctx->pc == 0x4740C4u) {
        ctx->pc = 0x4740C4u;
            // 0x4740c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4740C8u;
        goto label_4740c8;
    }
    ctx->pc = 0x4740C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4740C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4740C0u;
            // 0x4740c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4740C8u;
label_4740c8:
    // 0x4740c8: 0x0  nop
    ctx->pc = 0x4740c8u;
    // NOP
label_4740cc:
    // 0x4740cc: 0x0  nop
    ctx->pc = 0x4740ccu;
    // NOP
}
