#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00527330
// Address: 0x527330 - 0x527480
void sub_00527330_0x527330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00527330_0x527330");
#endif

    switch (ctx->pc) {
        case 0x527330u: goto label_527330;
        case 0x527334u: goto label_527334;
        case 0x527338u: goto label_527338;
        case 0x52733cu: goto label_52733c;
        case 0x527340u: goto label_527340;
        case 0x527344u: goto label_527344;
        case 0x527348u: goto label_527348;
        case 0x52734cu: goto label_52734c;
        case 0x527350u: goto label_527350;
        case 0x527354u: goto label_527354;
        case 0x527358u: goto label_527358;
        case 0x52735cu: goto label_52735c;
        case 0x527360u: goto label_527360;
        case 0x527364u: goto label_527364;
        case 0x527368u: goto label_527368;
        case 0x52736cu: goto label_52736c;
        case 0x527370u: goto label_527370;
        case 0x527374u: goto label_527374;
        case 0x527378u: goto label_527378;
        case 0x52737cu: goto label_52737c;
        case 0x527380u: goto label_527380;
        case 0x527384u: goto label_527384;
        case 0x527388u: goto label_527388;
        case 0x52738cu: goto label_52738c;
        case 0x527390u: goto label_527390;
        case 0x527394u: goto label_527394;
        case 0x527398u: goto label_527398;
        case 0x52739cu: goto label_52739c;
        case 0x5273a0u: goto label_5273a0;
        case 0x5273a4u: goto label_5273a4;
        case 0x5273a8u: goto label_5273a8;
        case 0x5273acu: goto label_5273ac;
        case 0x5273b0u: goto label_5273b0;
        case 0x5273b4u: goto label_5273b4;
        case 0x5273b8u: goto label_5273b8;
        case 0x5273bcu: goto label_5273bc;
        case 0x5273c0u: goto label_5273c0;
        case 0x5273c4u: goto label_5273c4;
        case 0x5273c8u: goto label_5273c8;
        case 0x5273ccu: goto label_5273cc;
        case 0x5273d0u: goto label_5273d0;
        case 0x5273d4u: goto label_5273d4;
        case 0x5273d8u: goto label_5273d8;
        case 0x5273dcu: goto label_5273dc;
        case 0x5273e0u: goto label_5273e0;
        case 0x5273e4u: goto label_5273e4;
        case 0x5273e8u: goto label_5273e8;
        case 0x5273ecu: goto label_5273ec;
        case 0x5273f0u: goto label_5273f0;
        case 0x5273f4u: goto label_5273f4;
        case 0x5273f8u: goto label_5273f8;
        case 0x5273fcu: goto label_5273fc;
        case 0x527400u: goto label_527400;
        case 0x527404u: goto label_527404;
        case 0x527408u: goto label_527408;
        case 0x52740cu: goto label_52740c;
        case 0x527410u: goto label_527410;
        case 0x527414u: goto label_527414;
        case 0x527418u: goto label_527418;
        case 0x52741cu: goto label_52741c;
        case 0x527420u: goto label_527420;
        case 0x527424u: goto label_527424;
        case 0x527428u: goto label_527428;
        case 0x52742cu: goto label_52742c;
        case 0x527430u: goto label_527430;
        case 0x527434u: goto label_527434;
        case 0x527438u: goto label_527438;
        case 0x52743cu: goto label_52743c;
        case 0x527440u: goto label_527440;
        case 0x527444u: goto label_527444;
        case 0x527448u: goto label_527448;
        case 0x52744cu: goto label_52744c;
        case 0x527450u: goto label_527450;
        case 0x527454u: goto label_527454;
        case 0x527458u: goto label_527458;
        case 0x52745cu: goto label_52745c;
        case 0x527460u: goto label_527460;
        case 0x527464u: goto label_527464;
        case 0x527468u: goto label_527468;
        case 0x52746cu: goto label_52746c;
        case 0x527470u: goto label_527470;
        case 0x527474u: goto label_527474;
        case 0x527478u: goto label_527478;
        case 0x52747cu: goto label_52747c;
        default: break;
    }

    ctx->pc = 0x527330u;

label_527330:
    // 0x527330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x527330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_527334:
    // 0x527334: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x527334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_527338:
    // 0x527338: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x527338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52733c:
    // 0x52733c: 0xc0eb104  jal         func_3AC410
label_527340:
    if (ctx->pc == 0x527340u) {
        ctx->pc = 0x527340u;
            // 0x527340: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x527344u;
        goto label_527344;
    }
    ctx->pc = 0x52733Cu;
    SET_GPR_U32(ctx, 31, 0x527344u);
    ctx->pc = 0x527340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52733Cu;
            // 0x527340: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AC410u;
    if (runtime->hasFunction(0x3AC410u)) {
        auto targetFn = runtime->lookupFunction(0x3AC410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527344u; }
        if (ctx->pc != 0x527344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AC410_0x3ac410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527344u; }
        if (ctx->pc != 0x527344u) { return; }
    }
    ctx->pc = 0x527344u;
label_527344:
    // 0x527344: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x527344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_527348:
    // 0x527348: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x527348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52734c:
    // 0x52734c: 0x24636450  addiu       $v1, $v1, 0x6450
    ctx->pc = 0x52734cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25680));
label_527350:
    // 0x527350: 0xae030128  sw          $v1, 0x128($s0)
    ctx->pc = 0x527350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
label_527354:
    // 0x527354: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x527354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_527358:
    // 0x527358: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x527358u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52735c:
    // 0x52735c: 0x3e00008  jr          $ra
label_527360:
    if (ctx->pc == 0x527360u) {
        ctx->pc = 0x527360u;
            // 0x527360: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x527364u;
        goto label_527364;
    }
    ctx->pc = 0x52735Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x527360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52735Cu;
            // 0x527360: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x527364u;
label_527364:
    // 0x527364: 0x0  nop
    ctx->pc = 0x527364u;
    // NOP
label_527368:
    // 0x527368: 0x0  nop
    ctx->pc = 0x527368u;
    // NOP
label_52736c:
    // 0x52736c: 0x0  nop
    ctx->pc = 0x52736cu;
    // NOP
label_527370:
    // 0x527370: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x527370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_527374:
    // 0x527374: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x527374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_527378:
    // 0x527378: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x527378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_52737c:
    // 0x52737c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x52737cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_527380:
    // 0x527380: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x527380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_527384:
    // 0x527384: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x527384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_527388:
    // 0x527388: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x527388u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_52738c:
    // 0x52738c: 0x90840370  lbu         $a0, 0x370($a0)
    ctx->pc = 0x52738cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 880)));
label_527390:
    // 0x527390: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
label_527394:
    if (ctx->pc == 0x527394u) {
        ctx->pc = 0x527394u;
            // 0x527394: 0x8c700e80  lw          $s0, 0xE80($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
        ctx->pc = 0x527398u;
        goto label_527398;
    }
    ctx->pc = 0x527390u;
    {
        const bool branch_taken_0x527390 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x527394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527390u;
            // 0x527394: 0x8c700e80  lw          $s0, 0xE80($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x527390) {
            ctx->pc = 0x527400u;
            goto label_527400;
        }
    }
    ctx->pc = 0x527398u;
label_527398:
    // 0x527398: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x527398u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52739c:
    // 0x52739c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x52739cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_5273a0:
    // 0x5273a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5273a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5273a4:
    // 0x5273a4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x5273a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_5273a8:
    // 0x5273a8: 0x320f809  jalr        $t9
label_5273ac:
    if (ctx->pc == 0x5273ACu) {
        ctx->pc = 0x5273ACu;
            // 0x5273ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5273B0u;
        goto label_5273b0;
    }
    ctx->pc = 0x5273A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5273B0u);
        ctx->pc = 0x5273ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5273A8u;
            // 0x5273ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5273B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5273B0u; }
            if (ctx->pc != 0x5273B0u) { return; }
        }
        }
    }
    ctx->pc = 0x5273B0u;
label_5273b0:
    // 0x5273b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5273b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5273b4:
    // 0x5273b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x5273b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5273b8:
    // 0x5273b8: 0xc0eb654  jal         func_3AD950
label_5273bc:
    if (ctx->pc == 0x5273BCu) {
        ctx->pc = 0x5273BCu;
            // 0x5273bc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5273C0u;
        goto label_5273c0;
    }
    ctx->pc = 0x5273B8u;
    SET_GPR_U32(ctx, 31, 0x5273C0u);
    ctx->pc = 0x5273BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5273B8u;
            // 0x5273bc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AD950u;
    if (runtime->hasFunction(0x3AD950u)) {
        auto targetFn = runtime->lookupFunction(0x3AD950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5273C0u; }
        if (ctx->pc != 0x5273C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AD950_0x3ad950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5273C0u; }
        if (ctx->pc != 0x5273C0u) { return; }
    }
    ctx->pc = 0x5273C0u;
label_5273c0:
    // 0x5273c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x5273c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_5273c4:
    // 0x5273c4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x5273c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_5273c8:
    // 0x5273c8: 0x8c630110  lw          $v1, 0x110($v1)
    ctx->pc = 0x5273c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
label_5273cc:
    // 0x5273cc: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x5273ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_5273d0:
    // 0x5273d0: 0x5460fff3  bnel        $v1, $zero, . + 4 + (-0xD << 2)
label_5273d4:
    if (ctx->pc == 0x5273D4u) {
        ctx->pc = 0x5273D4u;
            // 0x5273d4: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x5273D8u;
        goto label_5273d8;
    }
    ctx->pc = 0x5273D0u;
    {
        const bool branch_taken_0x5273d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x5273d0) {
            ctx->pc = 0x5273D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5273D0u;
            // 0x5273d4: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5273A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5273a0;
        }
    }
    ctx->pc = 0x5273D8u;
label_5273d8:
    // 0x5273d8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x5273d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_5273dc:
    // 0x5273dc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x5273dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_5273e0:
    // 0x5273e0: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x5273e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_5273e4:
    // 0x5273e4: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x5273e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_5273e8:
    // 0x5273e8: 0x54640006  bnel        $v1, $a0, . + 4 + (0x6 << 2)
label_5273ec:
    if (ctx->pc == 0x5273ECu) {
        ctx->pc = 0x5273ECu;
            // 0x5273ec: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x5273F0u;
        goto label_5273f0;
    }
    ctx->pc = 0x5273E8u;
    {
        const bool branch_taken_0x5273e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x5273e8) {
            ctx->pc = 0x5273ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5273E8u;
            // 0x5273ec: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x527404u;
            goto label_527404;
        }
    }
    ctx->pc = 0x5273F0u;
label_5273f0:
    // 0x5273f0: 0x8e390374  lw          $t9, 0x374($s1)
    ctx->pc = 0x5273f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 884)));
label_5273f4:
    // 0x5273f4: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x5273f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_5273f8:
    // 0x5273f8: 0x320f809  jalr        $t9
label_5273fc:
    if (ctx->pc == 0x5273FCu) {
        ctx->pc = 0x5273FCu;
            // 0x5273fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x527400u;
        goto label_527400;
    }
    ctx->pc = 0x5273F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x527400u);
        ctx->pc = 0x5273FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5273F8u;
            // 0x5273fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x527400u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x527400u; }
            if (ctx->pc != 0x527400u) { return; }
        }
        }
    }
    ctx->pc = 0x527400u;
label_527400:
    // 0x527400: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x527400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_527404:
    // 0x527404: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x527404u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_527408:
    // 0x527408: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x527408u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52740c:
    // 0x52740c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52740cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_527410:
    // 0x527410: 0x3e00008  jr          $ra
label_527414:
    if (ctx->pc == 0x527414u) {
        ctx->pc = 0x527414u;
            // 0x527414: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x527418u;
        goto label_527418;
    }
    ctx->pc = 0x527410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x527414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527410u;
            // 0x527414: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x527418u;
label_527418:
    // 0x527418: 0x0  nop
    ctx->pc = 0x527418u;
    // NOP
label_52741c:
    // 0x52741c: 0x0  nop
    ctx->pc = 0x52741cu;
    // NOP
label_527420:
    // 0x527420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x527420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_527424:
    // 0x527424: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x527424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_527428:
    // 0x527428: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x527428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52742c:
    // 0x52742c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52742cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_527430:
    // 0x527430: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x527430u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_527434:
    // 0x527434: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_527438:
    if (ctx->pc == 0x527438u) {
        ctx->pc = 0x527438u;
            // 0x527438: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52743Cu;
        goto label_52743c;
    }
    ctx->pc = 0x527434u;
    {
        const bool branch_taken_0x527434 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x527438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527434u;
            // 0x527438: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x527434) {
            ctx->pc = 0x527468u;
            goto label_527468;
        }
    }
    ctx->pc = 0x52743Cu;
label_52743c:
    // 0x52743c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x52743cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_527440:
    // 0x527440: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x527440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_527444:
    // 0x527444: 0x24426470  addiu       $v0, $v0, 0x6470
    ctx->pc = 0x527444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25712));
label_527448:
    // 0x527448: 0xc0ec4f0  jal         func_3B13C0
label_52744c:
    if (ctx->pc == 0x52744Cu) {
        ctx->pc = 0x52744Cu;
            // 0x52744c: 0xae220374  sw          $v0, 0x374($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 884), GPR_U32(ctx, 2));
        ctx->pc = 0x527450u;
        goto label_527450;
    }
    ctx->pc = 0x527448u;
    SET_GPR_U32(ctx, 31, 0x527450u);
    ctx->pc = 0x52744Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x527448u;
            // 0x52744c: 0xae220374  sw          $v0, 0x374($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 884), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B13C0u;
    if (runtime->hasFunction(0x3B13C0u)) {
        auto targetFn = runtime->lookupFunction(0x3B13C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527450u; }
        if (ctx->pc != 0x527450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B13C0_0x3b13c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527450u; }
        if (ctx->pc != 0x527450u) { return; }
    }
    ctx->pc = 0x527450u;
label_527450:
    // 0x527450: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x527450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_527454:
    // 0x527454: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x527454u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_527458:
    // 0x527458: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_52745c:
    if (ctx->pc == 0x52745Cu) {
        ctx->pc = 0x52745Cu;
            // 0x52745c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x527460u;
        goto label_527460;
    }
    ctx->pc = 0x527458u;
    {
        const bool branch_taken_0x527458 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x527458) {
            ctx->pc = 0x52745Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x527458u;
            // 0x52745c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52746Cu;
            goto label_52746c;
        }
    }
    ctx->pc = 0x527460u;
label_527460:
    // 0x527460: 0xc0400a8  jal         func_1002A0
label_527464:
    if (ctx->pc == 0x527464u) {
        ctx->pc = 0x527464u;
            // 0x527464: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x527468u;
        goto label_527468;
    }
    ctx->pc = 0x527460u;
    SET_GPR_U32(ctx, 31, 0x527468u);
    ctx->pc = 0x527464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x527460u;
            // 0x527464: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527468u; }
        if (ctx->pc != 0x527468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527468u; }
        if (ctx->pc != 0x527468u) { return; }
    }
    ctx->pc = 0x527468u;
label_527468:
    // 0x527468: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x527468u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_52746c:
    // 0x52746c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x52746cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_527470:
    // 0x527470: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x527470u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_527474:
    // 0x527474: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x527474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_527478:
    // 0x527478: 0x3e00008  jr          $ra
label_52747c:
    if (ctx->pc == 0x52747Cu) {
        ctx->pc = 0x52747Cu;
            // 0x52747c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x527480u;
        goto label_fallthrough_0x527478;
    }
    ctx->pc = 0x527478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52747Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527478u;
            // 0x52747c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x527478:
    ctx->pc = 0x527480u;
}
