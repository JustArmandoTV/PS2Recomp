#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00173170
// Address: 0x173170 - 0x173210
void sub_00173170_0x173170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173170_0x173170");
#endif

    switch (ctx->pc) {
        case 0x173170u: goto label_173170;
        case 0x173174u: goto label_173174;
        case 0x173178u: goto label_173178;
        case 0x17317cu: goto label_17317c;
        case 0x173180u: goto label_173180;
        case 0x173184u: goto label_173184;
        case 0x173188u: goto label_173188;
        case 0x17318cu: goto label_17318c;
        case 0x173190u: goto label_173190;
        case 0x173194u: goto label_173194;
        case 0x173198u: goto label_173198;
        case 0x17319cu: goto label_17319c;
        case 0x1731a0u: goto label_1731a0;
        case 0x1731a4u: goto label_1731a4;
        case 0x1731a8u: goto label_1731a8;
        case 0x1731acu: goto label_1731ac;
        case 0x1731b0u: goto label_1731b0;
        case 0x1731b4u: goto label_1731b4;
        case 0x1731b8u: goto label_1731b8;
        case 0x1731bcu: goto label_1731bc;
        case 0x1731c0u: goto label_1731c0;
        case 0x1731c4u: goto label_1731c4;
        case 0x1731c8u: goto label_1731c8;
        case 0x1731ccu: goto label_1731cc;
        case 0x1731d0u: goto label_1731d0;
        case 0x1731d4u: goto label_1731d4;
        case 0x1731d8u: goto label_1731d8;
        case 0x1731dcu: goto label_1731dc;
        case 0x1731e0u: goto label_1731e0;
        case 0x1731e4u: goto label_1731e4;
        case 0x1731e8u: goto label_1731e8;
        case 0x1731ecu: goto label_1731ec;
        case 0x1731f0u: goto label_1731f0;
        case 0x1731f4u: goto label_1731f4;
        case 0x1731f8u: goto label_1731f8;
        case 0x1731fcu: goto label_1731fc;
        case 0x173200u: goto label_173200;
        case 0x173204u: goto label_173204;
        case 0x173208u: goto label_173208;
        case 0x17320cu: goto label_17320c;
        default: break;
    }

    ctx->pc = 0x173170u;

label_173170:
    // 0x173170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x173170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_173174:
    // 0x173174: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x173174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_173178:
    // 0x173178: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x173178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_17317c:
    // 0x17317c: 0xc0599d2  jal         func_166748
label_173180:
    if (ctx->pc == 0x173180u) {
        ctx->pc = 0x173180u;
            // 0x173180: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173184u;
        goto label_173184;
    }
    ctx->pc = 0x17317Cu;
    SET_GPR_U32(ctx, 31, 0x173184u);
    ctx->pc = 0x173180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17317Cu;
            // 0x173180: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166748u;
    if (runtime->hasFunction(0x166748u)) {
        auto targetFn = runtime->lookupFunction(0x166748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173184u; }
        if (ctx->pc != 0x173184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166748_0x166748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173184u; }
        if (ctx->pc != 0x173184u) { return; }
    }
    ctx->pc = 0x173184u;
label_173184:
    // 0x173184: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x173184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_173188:
    // 0x173188: 0xc05ba70  jal         func_16E9C0
label_17318c:
    if (ctx->pc == 0x17318Cu) {
        ctx->pc = 0x17318Cu;
            // 0x17318c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173190u;
        goto label_173190;
    }
    ctx->pc = 0x173188u;
    SET_GPR_U32(ctx, 31, 0x173190u);
    ctx->pc = 0x17318Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173188u;
            // 0x17318c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E9C0u;
    if (runtime->hasFunction(0x16E9C0u)) {
        auto targetFn = runtime->lookupFunction(0x16E9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173190u; }
        if (ctx->pc != 0x173190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E9C0_0x16e9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173190u; }
        if (ctx->pc != 0x173190u) { return; }
    }
    ctx->pc = 0x173190u;
label_173190:
    // 0x173190: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x173190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_173194:
    // 0x173194: 0xc05ba76  jal         func_16E9D8
label_173198:
    if (ctx->pc == 0x173198u) {
        ctx->pc = 0x173198u;
            // 0x173198: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17319Cu;
        goto label_17319c;
    }
    ctx->pc = 0x173194u;
    SET_GPR_U32(ctx, 31, 0x17319Cu);
    ctx->pc = 0x173198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173194u;
            // 0x173198: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E9D8u;
    if (runtime->hasFunction(0x16E9D8u)) {
        auto targetFn = runtime->lookupFunction(0x16E9D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17319Cu; }
        if (ctx->pc != 0x17319Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E9D8_0x16e9d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17319Cu; }
        if (ctx->pc != 0x17319Cu) { return; }
    }
    ctx->pc = 0x17319Cu;
label_17319c:
    // 0x17319c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x17319cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1731a0:
    // 0x1731a0: 0xc060ffa  jal         func_183FE8
label_1731a4:
    if (ctx->pc == 0x1731A4u) {
        ctx->pc = 0x1731A4u;
            // 0x1731a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1731A8u;
        goto label_1731a8;
    }
    ctx->pc = 0x1731A0u;
    SET_GPR_U32(ctx, 31, 0x1731A8u);
    ctx->pc = 0x1731A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1731A0u;
            // 0x1731a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183FE8u;
    if (runtime->hasFunction(0x183FE8u)) {
        auto targetFn = runtime->lookupFunction(0x183FE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1731A8u; }
        if (ctx->pc != 0x1731A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183FE8_0x183fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1731A8u; }
        if (ctx->pc != 0x1731A8u) { return; }
    }
    ctx->pc = 0x1731A8u;
label_1731a8:
    // 0x1731a8: 0xc05bc0e  jal         func_16F038
label_1731ac:
    if (ctx->pc == 0x1731ACu) {
        ctx->pc = 0x1731ACu;
            // 0x1731ac: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x1731B0u;
        goto label_1731b0;
    }
    ctx->pc = 0x1731A8u;
    SET_GPR_U32(ctx, 31, 0x1731B0u);
    ctx->pc = 0x1731ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1731A8u;
            // 0x1731ac: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F038u;
    if (runtime->hasFunction(0x16F038u)) {
        auto targetFn = runtime->lookupFunction(0x16F038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1731B0u; }
        if (ctx->pc != 0x1731B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F038_0x16f038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1731B0u; }
        if (ctx->pc != 0x1731B0u) { return; }
    }
    ctx->pc = 0x1731B0u;
label_1731b0:
    // 0x1731b0: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x1731b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_1731b4:
    // 0x1731b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1731b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1731b8:
    // 0x1731b8: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
label_1731bc:
    if (ctx->pc == 0x1731BCu) {
        ctx->pc = 0x1731BCu;
            // 0x1731bc: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->pc = 0x1731C0u;
        goto label_1731c0;
    }
    ctx->pc = 0x1731B8u;
    {
        const bool branch_taken_0x1731b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1731b8) {
            ctx->pc = 0x1731BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1731B8u;
            // 0x1731bc: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1731E4u;
            goto label_1731e4;
        }
    }
    ctx->pc = 0x1731C0u;
label_1731c0:
    // 0x1731c0: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1731c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1731c4:
    // 0x1731c4: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_1731c8:
    if (ctx->pc == 0x1731C8u) {
        ctx->pc = 0x1731C8u;
            // 0x1731c8: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->pc = 0x1731CCu;
        goto label_1731cc;
    }
    ctx->pc = 0x1731C4u;
    {
        const bool branch_taken_0x1731c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1731c4) {
            ctx->pc = 0x1731C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1731C4u;
            // 0x1731c8: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1731E4u;
            goto label_1731e4;
        }
    }
    ctx->pc = 0x1731CCu;
label_1731cc:
    // 0x1731cc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1731ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1731d0:
    // 0x1731d0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1731d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_1731d4:
    // 0x1731d4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1731d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1731d8:
    // 0x1731d8: 0x40f809  jalr        $v0
label_1731dc:
    if (ctx->pc == 0x1731DCu) {
        ctx->pc = 0x1731E0u;
        goto label_1731e0;
    }
    ctx->pc = 0x1731D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1731E0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1731E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1731E0u; }
            if (ctx->pc != 0x1731E0u) { return; }
        }
        }
    }
    ctx->pc = 0x1731E0u;
label_1731e0:
    // 0x1731e0: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x1731e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_1731e4:
    // 0x1731e4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_1731e8:
    if (ctx->pc == 0x1731E8u) {
        ctx->pc = 0x1731E8u;
            // 0x1731e8: 0xa20000ac  sb          $zero, 0xAC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 172), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1731ECu;
        goto label_1731ec;
    }
    ctx->pc = 0x1731E4u;
    {
        const bool branch_taken_0x1731e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1731e4) {
            ctx->pc = 0x1731E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1731E4u;
            // 0x1731e8: 0xa20000ac  sb          $zero, 0xAC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 172), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1731F8u;
            goto label_1731f8;
        }
    }
    ctx->pc = 0x1731ECu;
label_1731ec:
    // 0x1731ec: 0xc058a4a  jal         func_162928
label_1731f0:
    if (ctx->pc == 0x1731F0u) {
        ctx->pc = 0x1731F4u;
        goto label_1731f4;
    }
    ctx->pc = 0x1731ECu;
    SET_GPR_U32(ctx, 31, 0x1731F4u);
    ctx->pc = 0x162928u;
    if (runtime->hasFunction(0x162928u)) {
        auto targetFn = runtime->lookupFunction(0x162928u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1731F4u; }
        if (ctx->pc != 0x1731F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00162928_0x162928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1731F4u; }
        if (ctx->pc != 0x1731F4u) { return; }
    }
    ctx->pc = 0x1731F4u;
label_1731f4:
    // 0x1731f4: 0xa20000ac  sb          $zero, 0xAC($s0)
    ctx->pc = 0x1731f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 172), (uint8_t)GPR_U32(ctx, 0));
label_1731f8:
    // 0x1731f8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1731f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_1731fc:
    // 0x1731fc: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1731fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_173200:
    // 0x173200: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x173200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_173204:
    // 0x173204: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x173204u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_173208:
    // 0x173208: 0x80599d8  j           func_166760
label_17320c:
    if (ctx->pc == 0x17320Cu) {
        ctx->pc = 0x17320Cu;
            // 0x17320c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x173210u;
        goto label_fallthrough_0x173208;
    }
    ctx->pc = 0x173208u;
    ctx->pc = 0x17320Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173208u;
            // 0x17320c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166760u;
    if (runtime->hasFunction(0x166760u)) {
        auto targetFn = runtime->lookupFunction(0x166760u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166760_0x166760(rdram, ctx, runtime); return;
    }
label_fallthrough_0x173208:
    ctx->pc = 0x173210u;
}
