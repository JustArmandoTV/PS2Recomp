#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00173240
// Address: 0x173240 - 0x173300
void sub_00173240_0x173240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173240_0x173240");
#endif

    switch (ctx->pc) {
        case 0x173240u: goto label_173240;
        case 0x173244u: goto label_173244;
        case 0x173248u: goto label_173248;
        case 0x17324cu: goto label_17324c;
        case 0x173250u: goto label_173250;
        case 0x173254u: goto label_173254;
        case 0x173258u: goto label_173258;
        case 0x17325cu: goto label_17325c;
        case 0x173260u: goto label_173260;
        case 0x173264u: goto label_173264;
        case 0x173268u: goto label_173268;
        case 0x17326cu: goto label_17326c;
        case 0x173270u: goto label_173270;
        case 0x173274u: goto label_173274;
        case 0x173278u: goto label_173278;
        case 0x17327cu: goto label_17327c;
        case 0x173280u: goto label_173280;
        case 0x173284u: goto label_173284;
        case 0x173288u: goto label_173288;
        case 0x17328cu: goto label_17328c;
        case 0x173290u: goto label_173290;
        case 0x173294u: goto label_173294;
        case 0x173298u: goto label_173298;
        case 0x17329cu: goto label_17329c;
        case 0x1732a0u: goto label_1732a0;
        case 0x1732a4u: goto label_1732a4;
        case 0x1732a8u: goto label_1732a8;
        case 0x1732acu: goto label_1732ac;
        case 0x1732b0u: goto label_1732b0;
        case 0x1732b4u: goto label_1732b4;
        case 0x1732b8u: goto label_1732b8;
        case 0x1732bcu: goto label_1732bc;
        case 0x1732c0u: goto label_1732c0;
        case 0x1732c4u: goto label_1732c4;
        case 0x1732c8u: goto label_1732c8;
        case 0x1732ccu: goto label_1732cc;
        case 0x1732d0u: goto label_1732d0;
        case 0x1732d4u: goto label_1732d4;
        case 0x1732d8u: goto label_1732d8;
        case 0x1732dcu: goto label_1732dc;
        case 0x1732e0u: goto label_1732e0;
        case 0x1732e4u: goto label_1732e4;
        case 0x1732e8u: goto label_1732e8;
        case 0x1732ecu: goto label_1732ec;
        case 0x1732f0u: goto label_1732f0;
        case 0x1732f4u: goto label_1732f4;
        case 0x1732f8u: goto label_1732f8;
        case 0x1732fcu: goto label_1732fc;
        default: break;
    }

    ctx->pc = 0x173240u;

label_173240:
    // 0x173240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x173240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_173244:
    // 0x173244: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x173244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_173248:
    // 0x173248: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x173248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17324c:
    // 0x17324c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17324cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_173250:
    // 0x173250: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
label_173254:
    if (ctx->pc == 0x173254u) {
        ctx->pc = 0x173254u;
            // 0x173254: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->pc = 0x173258u;
        goto label_173258;
    }
    ctx->pc = 0x173250u;
    {
        const bool branch_taken_0x173250 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x173254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173250u;
            // 0x173254: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173250) {
            ctx->pc = 0x173278u;
            goto label_173278;
        }
    }
    ctx->pc = 0x173258u;
label_173258:
    // 0x173258: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x173258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_17325c:
    // 0x17325c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17325cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_173260:
    // 0x173260: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x173260u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_173264:
    // 0x173264: 0x248441a0  addiu       $a0, $a0, 0x41A0
    ctx->pc = 0x173264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16800));
label_173268:
    // 0x173268: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x173268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17326c:
    // 0x17326c: 0x8059f4e  j           func_167D38
label_173270:
    if (ctx->pc == 0x173270u) {
        ctx->pc = 0x173270u;
            // 0x173270: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x173274u;
        goto label_173274;
    }
    ctx->pc = 0x17326Cu;
    ctx->pc = 0x173270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17326Cu;
            // 0x173270: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00167D38_0x167d38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x173274u;
label_173274:
    // 0x173274: 0x0  nop
    ctx->pc = 0x173274u;
    // NOP
label_173278:
    // 0x173278: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x173278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_17327c:
    // 0x17327c: 0x24513f34  addiu       $s1, $v0, 0x3F34
    ctx->pc = 0x17327cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16180));
label_173280:
    // 0x173280: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x173280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_173284:
    // 0x173284: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_173288:
    if (ctx->pc == 0x173288u) {
        ctx->pc = 0x173288u;
            // 0x173288: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x17328Cu;
        goto label_17328c;
    }
    ctx->pc = 0x173284u;
    {
        const bool branch_taken_0x173284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x173284) {
            ctx->pc = 0x173288u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x173284u;
            // 0x173288: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1732A4u;
            goto label_1732a4;
        }
    }
    ctx->pc = 0x17328Cu;
label_17328c:
    // 0x17328c: 0xc05bc0e  jal         func_16F038
label_173290:
    if (ctx->pc == 0x173290u) {
        ctx->pc = 0x173290u;
            // 0x173290: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x173294u;
        goto label_173294;
    }
    ctx->pc = 0x17328Cu;
    SET_GPR_U32(ctx, 31, 0x173294u);
    ctx->pc = 0x173290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17328Cu;
            // 0x173290: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F038u;
    if (runtime->hasFunction(0x16F038u)) {
        auto targetFn = runtime->lookupFunction(0x16F038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173294u; }
        if (ctx->pc != 0x173294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F038_0x16f038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173294u; }
        if (ctx->pc != 0x173294u) { return; }
    }
    ctx->pc = 0x173294u;
label_173294:
    // 0x173294: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x173294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_173298:
    // 0x173298: 0x40f809  jalr        $v0
label_17329c:
    if (ctx->pc == 0x17329Cu) {
        ctx->pc = 0x17329Cu;
            // 0x17329c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1732A0u;
        goto label_1732a0;
    }
    ctx->pc = 0x173298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1732A0u);
        ctx->pc = 0x17329Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173298u;
            // 0x17329c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1732A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1732A0u; }
            if (ctx->pc != 0x1732A0u) { return; }
        }
        }
    }
    ctx->pc = 0x1732A0u;
label_1732a0:
    // 0x1732a0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1732a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1732a4:
    // 0x1732a4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_1732a8:
    if (ctx->pc == 0x1732A8u) {
        ctx->pc = 0x1732A8u;
            // 0x1732a8: 0x82030002  lb          $v1, 0x2($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->pc = 0x1732ACu;
        goto label_1732ac;
    }
    ctx->pc = 0x1732A4u;
    {
        const bool branch_taken_0x1732a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1732a4) {
            ctx->pc = 0x1732A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1732A4u;
            // 0x1732a8: 0x82030002  lb          $v1, 0x2($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1732B8u;
            goto label_1732b8;
        }
    }
    ctx->pc = 0x1732ACu;
label_1732ac:
    // 0x1732ac: 0xc05c296  jal         func_170A58
label_1732b0:
    if (ctx->pc == 0x1732B0u) {
        ctx->pc = 0x1732B4u;
        goto label_1732b4;
    }
    ctx->pc = 0x1732ACu;
    SET_GPR_U32(ctx, 31, 0x1732B4u);
    ctx->pc = 0x170A58u;
    if (runtime->hasFunction(0x170A58u)) {
        auto targetFn = runtime->lookupFunction(0x170A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1732B4u; }
        if (ctx->pc != 0x1732B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A58_0x170a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1732B4u; }
        if (ctx->pc != 0x1732B4u) { return; }
    }
    ctx->pc = 0x1732B4u;
label_1732b4:
    // 0x1732b4: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x1732b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_1732b8:
    // 0x1732b8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1732b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1732bc:
    // 0x1732bc: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
label_1732c0:
    if (ctx->pc == 0x1732C0u) {
        ctx->pc = 0x1732C0u;
            // 0x1732c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1732C4u;
        goto label_1732c4;
    }
    ctx->pc = 0x1732BCu;
    {
        const bool branch_taken_0x1732bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1732bc) {
            ctx->pc = 0x1732C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1732BCu;
            // 0x1732c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1732ECu;
            goto label_1732ec;
        }
    }
    ctx->pc = 0x1732C4u;
label_1732c4:
    // 0x1732c4: 0xc06011a  jal         func_180468
label_1732c8:
    if (ctx->pc == 0x1732C8u) {
        ctx->pc = 0x1732C8u;
            // 0x1732c8: 0x8e040094  lw          $a0, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->pc = 0x1732CCu;
        goto label_1732cc;
    }
    ctx->pc = 0x1732C4u;
    SET_GPR_U32(ctx, 31, 0x1732CCu);
    ctx->pc = 0x1732C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1732C4u;
            // 0x1732c8: 0x8e040094  lw          $a0, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180468u;
    if (runtime->hasFunction(0x180468u)) {
        auto targetFn = runtime->lookupFunction(0x180468u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1732CCu; }
        if (ctx->pc != 0x1732CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180468_0x180468(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1732CCu; }
        if (ctx->pc != 0x1732CCu) { return; }
    }
    ctx->pc = 0x1732CCu;
label_1732cc:
    // 0x1732cc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1732ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1732d0:
    // 0x1732d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1732d4:
    if (ctx->pc == 0x1732D4u) {
        ctx->pc = 0x1732D4u;
            // 0x1732d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1732D8u;
        goto label_1732d8;
    }
    ctx->pc = 0x1732D0u;
    {
        const bool branch_taken_0x1732d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1732D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1732D0u;
            // 0x1732d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1732d0) {
            ctx->pc = 0x1732E8u;
            goto label_1732e8;
        }
    }
    ctx->pc = 0x1732D8u;
label_1732d8:
    // 0x1732d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1732d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1732dc:
    // 0x1732dc: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1732dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1732e0:
    // 0x1732e0: 0x60f809  jalr        $v1
label_1732e4:
    if (ctx->pc == 0x1732E4u) {
        ctx->pc = 0x1732E8u;
        goto label_1732e8;
    }
    ctx->pc = 0x1732E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1732E8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1732E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1732E8u; }
            if (ctx->pc != 0x1732E8u) { return; }
        }
        }
    }
    ctx->pc = 0x1732E8u;
label_1732e8:
    // 0x1732e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1732e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1732ec:
    // 0x1732ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1732ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1732f0:
    // 0x1732f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1732f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1732f4:
    // 0x1732f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1732f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1732f8:
    // 0x1732f8: 0x805cc5c  j           func_173170
label_1732fc:
    if (ctx->pc == 0x1732FCu) {
        ctx->pc = 0x1732FCu;
            // 0x1732fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x173300u;
        goto label_fallthrough_0x1732f8;
    }
    ctx->pc = 0x1732F8u;
    ctx->pc = 0x1732FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1732F8u;
            // 0x1732fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173170u;
    if (runtime->hasFunction(0x173170u)) {
        auto targetFn = runtime->lookupFunction(0x173170u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00173170_0x173170(rdram, ctx, runtime); return;
    }
label_fallthrough_0x1732f8:
    ctx->pc = 0x173300u;
}
