#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CA7D8
// Address: 0x1ca7d8 - 0x1ca958
void sub_001CA7D8_0x1ca7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA7D8_0x1ca7d8");
#endif

    switch (ctx->pc) {
        case 0x1ca828u: goto label_1ca828;
        case 0x1ca89cu: goto label_1ca89c;
        case 0x1ca92cu: goto label_1ca92c;
        default: break;
    }

    ctx->pc = 0x1ca7d8u;

    // 0x1ca7d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca7d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca7dc: 0x308700ff  andi        $a3, $a0, 0xFF
    ctx->pc = 0x1ca7dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1ca7e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca7e4: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1ca7e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1ca7e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ca7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ca7ec: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1ca7ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca7f0: 0x8e06a70c  lw          $a2, -0x58F4($s0)
    ctx->pc = 0x1ca7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
    // 0x1ca7f4: 0x80c30ab7  lb          $v1, 0xAB7($a2)
    ctx->pc = 0x1ca7f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 2743)));
    // 0x1ca7f8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CA7F8u;
    {
        const bool branch_taken_0x1ca7f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA7F8u;
            // 0x1ca7fc: 0x2402ffe2  addiu       $v0, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca7f8) {
            ctx->pc = 0x1CA83Cu;
            goto label_1ca83c;
        }
    }
    ctx->pc = 0x1CA800u;
    // 0x1ca800: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ca800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ca804: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x1CA804u;
    {
        const bool branch_taken_0x1ca804 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA804u;
            // 0x1ca808: 0xa0c20ab7  sb          $v0, 0xAB7($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 2743), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca804) {
            ctx->pc = 0x1CA830u;
            goto label_1ca830;
        }
    }
    ctx->pc = 0x1CA80Cu;
    // 0x1ca80c: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x1ca80cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x1ca810: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ca810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ca814: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x1ca814u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x1ca818: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ca818u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca81c: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1ca81cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1ca820: 0xc072900  jal         func_1CA400
    ctx->pc = 0x1CA820u;
    SET_GPR_U32(ctx, 31, 0x1CA828u);
    ctx->pc = 0x1CA824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA820u;
            // 0x1ca824: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA400u;
    if (runtime->hasFunction(0x1CA400u)) {
        auto targetFn = runtime->lookupFunction(0x1CA400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA828u; }
        if (ctx->pc != 0x1CA828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA400_0x1ca400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA828u; }
        if (ctx->pc != 0x1CA828u) { return; }
    }
    ctx->pc = 0x1CA828u;
label_1ca828:
    // 0x1ca828: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA828u;
    {
        const bool branch_taken_0x1ca828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA828u;
            // 0x1ca82c: 0x8e03a70c  lw          $v1, -0x58F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca828) {
            ctx->pc = 0x1CA838u;
            goto label_1ca838;
        }
    }
    ctx->pc = 0x1CA830u;
label_1ca830:
    // 0x1ca830: 0x2402fff6  addiu       $v0, $zero, -0xA
    ctx->pc = 0x1ca830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x1ca834: 0x8e03a70c  lw          $v1, -0x58F4($s0)
    ctx->pc = 0x1ca834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
label_1ca838:
    // 0x1ca838: 0xa0600ab7  sb          $zero, 0xAB7($v1)
    ctx->pc = 0x1ca838u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2743), (uint8_t)GPR_U32(ctx, 0));
label_1ca83c:
    // 0x1ca83c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca83cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca840: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ca840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca844: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA844u;
            // 0x1ca848: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA84Cu;
    // 0x1ca84c: 0x0  nop
    ctx->pc = 0x1ca84cu;
    // NOP
    // 0x1ca850: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca854: 0x308700ff  andi        $a3, $a0, 0xFF
    ctx->pc = 0x1ca854u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1ca858: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca85c: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1ca85cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1ca860: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ca860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ca864: 0x8e08a70c  lw          $t0, -0x58F4($s0)
    ctx->pc = 0x1ca864u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
    // 0x1ca868: 0x81030ab7  lb          $v1, 0xAB7($t0)
    ctx->pc = 0x1ca868u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 2743)));
    // 0x1ca86c: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CA86Cu;
    {
        const bool branch_taken_0x1ca86c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA86Cu;
            // 0x1ca870: 0x2402ffe2  addiu       $v0, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca86c) {
            ctx->pc = 0x1CA8B4u;
            goto label_1ca8b4;
        }
    }
    ctx->pc = 0x1CA874u;
    // 0x1ca874: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ca874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ca878: 0x10e0000b  beqz        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x1CA878u;
    {
        const bool branch_taken_0x1ca878 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA878u;
            // 0x1ca87c: 0xa1020ab7  sb          $v0, 0xAB7($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 2743), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca878) {
            ctx->pc = 0x1CA8A8u;
            goto label_1ca8a8;
        }
    }
    ctx->pc = 0x1CA880u;
    // 0x1ca880: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x1ca880u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x1ca884: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1ca884u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1ca888: 0xc84025  or          $t0, $a2, $t0
    ctx->pc = 0x1ca888u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x1ca88c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ca88cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca890: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ca890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ca894: 0xc072900  jal         func_1CA400
    ctx->pc = 0x1CA894u;
    SET_GPR_U32(ctx, 31, 0x1CA89Cu);
    ctx->pc = 0x1CA898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA894u;
            // 0x1ca898: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA400u;
    if (runtime->hasFunction(0x1CA400u)) {
        auto targetFn = runtime->lookupFunction(0x1CA400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA89Cu; }
        if (ctx->pc != 0x1CA89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA400_0x1ca400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA89Cu; }
        if (ctx->pc != 0x1CA89Cu) { return; }
    }
    ctx->pc = 0x1CA89Cu;
label_1ca89c:
    // 0x1ca89c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CA89Cu;
    {
        const bool branch_taken_0x1ca89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA8A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA89Cu;
            // 0x1ca8a0: 0x8e03a70c  lw          $v1, -0x58F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca89c) {
            ctx->pc = 0x1CA8B0u;
            goto label_1ca8b0;
        }
    }
    ctx->pc = 0x1CA8A4u;
    // 0x1ca8a4: 0x0  nop
    ctx->pc = 0x1ca8a4u;
    // NOP
label_1ca8a8:
    // 0x1ca8a8: 0x2402fff6  addiu       $v0, $zero, -0xA
    ctx->pc = 0x1ca8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x1ca8ac: 0x8e03a70c  lw          $v1, -0x58F4($s0)
    ctx->pc = 0x1ca8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
label_1ca8b0:
    // 0x1ca8b0: 0xa0600ab7  sb          $zero, 0xAB7($v1)
    ctx->pc = 0x1ca8b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2743), (uint8_t)GPR_U32(ctx, 0));
label_1ca8b4:
    // 0x1ca8b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca8b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca8b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ca8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca8bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA8BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA8BCu;
            // 0x1ca8c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA8C4u;
    // 0x1ca8c4: 0x0  nop
    ctx->pc = 0x1ca8c4u;
    // NOP
    // 0x1ca8c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca8cc: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1ca8ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1ca8d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca8d4: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1ca8d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1ca8d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ca8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ca8dc: 0x8e09a70c  lw          $t1, -0x58F4($s0)
    ctx->pc = 0x1ca8dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
    // 0x1ca8e0: 0x81230ab7  lb          $v1, 0xAB7($t1)
    ctx->pc = 0x1ca8e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 2743)));
    // 0x1ca8e4: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1CA8E4u;
    {
        const bool branch_taken_0x1ca8e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA8E4u;
            // 0x1ca8e8: 0x2402ffe2  addiu       $v0, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca8e4) {
            ctx->pc = 0x1CA944u;
            goto label_1ca944;
        }
    }
    ctx->pc = 0x1CA8ECu;
    // 0x1ca8ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ca8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ca8f0: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CA8F0u;
    {
        const bool branch_taken_0x1ca8f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA8F0u;
            // 0x1ca8f4: 0xa1220ab7  sb          $v0, 0xAB7($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 2743), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca8f0) {
            ctx->pc = 0x1CA938u;
            goto label_1ca938;
        }
    }
    ctx->pc = 0x1CA8F8u;
    // 0x1ca8f8: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x1ca8f8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x1ca8fc: 0x71a00  sll         $v1, $a3, 8
    ctx->pc = 0x1ca8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1ca900: 0xc84025  or          $t0, $a2, $t0
    ctx->pc = 0x1ca900u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x1ca904: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ca904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca908: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1ca908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1ca90c: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1ca90cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1ca910: 0x344200a0  ori         $v0, $v0, 0xA0
    ctx->pc = 0x1ca910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)160);
    // 0x1ca914: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1ca914u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca918: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1ca918u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1ca91c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1ca91cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1ca920: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ca920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ca924: 0xc072900  jal         func_1CA400
    ctx->pc = 0x1CA924u;
    SET_GPR_U32(ctx, 31, 0x1CA92Cu);
    ctx->pc = 0x1CA928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA924u;
            // 0x1ca928: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA400u;
    if (runtime->hasFunction(0x1CA400u)) {
        auto targetFn = runtime->lookupFunction(0x1CA400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA92Cu; }
        if (ctx->pc != 0x1CA92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA400_0x1ca400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA92Cu; }
        if (ctx->pc != 0x1CA92Cu) { return; }
    }
    ctx->pc = 0x1CA92Cu;
label_1ca92c:
    // 0x1ca92c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CA92Cu;
    {
        const bool branch_taken_0x1ca92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA92Cu;
            // 0x1ca930: 0x8e03a70c  lw          $v1, -0x58F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca92c) {
            ctx->pc = 0x1CA940u;
            goto label_1ca940;
        }
    }
    ctx->pc = 0x1CA934u;
    // 0x1ca934: 0x0  nop
    ctx->pc = 0x1ca934u;
    // NOP
label_1ca938:
    // 0x1ca938: 0x2402fff6  addiu       $v0, $zero, -0xA
    ctx->pc = 0x1ca938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x1ca93c: 0x8e03a70c  lw          $v1, -0x58F4($s0)
    ctx->pc = 0x1ca93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
label_1ca940:
    // 0x1ca940: 0xa0600ab7  sb          $zero, 0xAB7($v1)
    ctx->pc = 0x1ca940u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2743), (uint8_t)GPR_U32(ctx, 0));
label_1ca944:
    // 0x1ca944: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca944u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca948: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ca948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca94c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA94Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA94Cu;
            // 0x1ca950: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA954u;
    // 0x1ca954: 0x0  nop
    ctx->pc = 0x1ca954u;
    // NOP
}
