#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019A520
// Address: 0x19a520 - 0x19a650
void sub_0019A520_0x19a520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019A520_0x19a520");
#endif

    switch (ctx->pc) {
        case 0x19a580u: goto label_19a580;
        case 0x19a588u: goto label_19a588;
        case 0x19a5a4u: goto label_19a5a4;
        case 0x19a5c4u: goto label_19a5c4;
        case 0x19a5d0u: goto label_19a5d0;
        case 0x19a5dcu: goto label_19a5dc;
        case 0x19a5e8u: goto label_19a5e8;
        case 0x19a5f4u: goto label_19a5f4;
        case 0x19a600u: goto label_19a600;
        case 0x19a614u: goto label_19a614;
        default: break;
    }

    ctx->pc = 0x19a520u;

    // 0x19a520: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19a520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19a524: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19a524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19a528: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x19a528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x19a52c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x19a52cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a530: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x19a530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x19a534: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x19a534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a538: 0x2aa30800  slti        $v1, $s5, 0x800
    ctx->pc = 0x19a538u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2048) ? 1 : 0);
    // 0x19a53c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x19a53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x19a540: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x19a540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x19a544: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x19a544u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a548: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19a548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19a54c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x19a54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x19a550: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x19a550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x19a554: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x19a554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x19a558: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x19a558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x19a55c: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x19A55Cu;
    {
        const bool branch_taken_0x19a55c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A55Cu;
            // 0x19a560: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a55c) {
            ctx->pc = 0x19A624u;
            goto label_19a624;
        }
    }
    ctx->pc = 0x19A564u;
    // 0x19a564: 0x1260002f  beqz        $s3, . + 4 + (0x2F << 2)
    ctx->pc = 0x19A564u;
    {
        const bool branch_taken_0x19a564 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A564u;
            // 0x19a568: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a564) {
            ctx->pc = 0x19A624u;
            goto label_19a624;
        }
    }
    ctx->pc = 0x19A56Cu;
    // 0x19a56c: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x19a56cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a570: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x19a570u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19a574: 0x24120800  addiu       $s2, $zero, 0x800
    ctx->pc = 0x19a574u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x19a578: 0x2722021  addu        $a0, $s3, $s2
    ctx->pc = 0x19a578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x19a57c: 0x0  nop
    ctx->pc = 0x19a57cu;
    // NOP
label_19a580:
    // 0x19a580: 0xc06e8e4  jal         func_1BA390
    ctx->pc = 0x19A580u;
    SET_GPR_U32(ctx, 31, 0x19A588u);
    ctx->pc = 0x19A584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A580u;
            // 0x19a584: 0x2b22823  subu        $a1, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA390u;
    if (runtime->hasFunction(0x1BA390u)) {
        auto targetFn = runtime->lookupFunction(0x1BA390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A588u; }
        if (ctx->pc != 0x19A588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA390_0x1ba390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A588u; }
        if (ctx->pc != 0x19A588u) { return; }
    }
    ctx->pc = 0x19A588u;
label_19a588:
    // 0x19a588: 0x26520800  addiu       $s2, $s2, 0x800
    ctx->pc = 0x19a588u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2048));
    // 0x19a58c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19a58cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a590: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19a590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a594: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x19A594u;
    {
        const bool branch_taken_0x19a594 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A594u;
            // 0x19a598: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a594) {
            ctx->pc = 0x19A614u;
            goto label_19a614;
        }
    }
    ctx->pc = 0x19A59Cu;
    // 0x19a59c: 0xc06e920  jal         func_1BA480
    ctx->pc = 0x19A59Cu;
    SET_GPR_U32(ctx, 31, 0x19A5A4u);
    ctx->pc = 0x1BA480u;
    if (runtime->hasFunction(0x1BA480u)) {
        auto targetFn = runtime->lookupFunction(0x1BA480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A5A4u; }
        if (ctx->pc != 0x19A5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA480_0x1ba480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A5A4u; }
        if (ctx->pc != 0x19A5A4u) { return; }
    }
    ctx->pc = 0x19A5A4u;
label_19a5a4:
    // 0x19a5a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19a5a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a5a8: 0x14770017  bne         $v1, $s7, . + 4 + (0x17 << 2)
    ctx->pc = 0x19A5A8u;
    {
        const bool branch_taken_0x19a5a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        ctx->pc = 0x19A5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A5A8u;
            // 0x19a5ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a5a8) {
            ctx->pc = 0x19A608u;
            goto label_19a608;
        }
    }
    ctx->pc = 0x19A5B0u;
    // 0x19a5b0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19a5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a5b4: 0x54430015  bnel        $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x19A5B4u;
    {
        const bool branch_taken_0x19a5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19a5b4) {
            ctx->pc = 0x19A5B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19A5B4u;
            // 0x19a5b8: 0xae360014  sw          $s6, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19A60Cu;
            goto label_19a60c;
        }
    }
    ctx->pc = 0x19A5BCu;
    // 0x19a5bc: 0xc06693c  jal         func_19A4F0
    ctx->pc = 0x19A5BCu;
    SET_GPR_U32(ctx, 31, 0x19A5C4u);
    ctx->pc = 0x19A4F0u;
    if (runtime->hasFunction(0x19A4F0u)) {
        auto targetFn = runtime->lookupFunction(0x19A4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A5C4u; }
        if (ctx->pc != 0x19A5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019A4F0_0x19a4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A5C4u; }
        if (ctx->pc != 0x19A5C4u) { return; }
    }
    ctx->pc = 0x19A5C4u;
label_19a5c4:
    // 0x19a5c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a5c8: 0xc0669b0  jal         func_19A6C0
    ctx->pc = 0x19A5C8u;
    SET_GPR_U32(ctx, 31, 0x19A5D0u);
    ctx->pc = 0x19A5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A5C8u;
            // 0x19a5cc: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A6C0u;
    if (runtime->hasFunction(0x19A6C0u)) {
        auto targetFn = runtime->lookupFunction(0x19A6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A5D0u; }
        if (ctx->pc != 0x19A5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019A6C0_0x19a6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A5D0u; }
        if (ctx->pc != 0x19A5D0u) { return; }
    }
    ctx->pc = 0x19A5D0u;
label_19a5d0:
    // 0x19a5d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a5d4: 0xc0669d8  jal         func_19A760
    ctx->pc = 0x19A5D4u;
    SET_GPR_U32(ctx, 31, 0x19A5DCu);
    ctx->pc = 0x19A5D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A5D4u;
            // 0x19a5d8: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A760u;
    if (runtime->hasFunction(0x19A760u)) {
        auto targetFn = runtime->lookupFunction(0x19A760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A5DCu; }
        if (ctx->pc != 0x19A5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019A760_0x19a760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A5DCu; }
        if (ctx->pc != 0x19A5DCu) { return; }
    }
    ctx->pc = 0x19A5DCu;
label_19a5dc:
    // 0x19a5dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a5e0: 0xc0669cc  jal         func_19A730
    ctx->pc = 0x19A5E0u;
    SET_GPR_U32(ctx, 31, 0x19A5E8u);
    ctx->pc = 0x19A5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A5E0u;
            // 0x19a5e4: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A730u;
    if (runtime->hasFunction(0x19A730u)) {
        auto targetFn = runtime->lookupFunction(0x19A730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A5E8u; }
        if (ctx->pc != 0x19A5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019A730_0x19a730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A5E8u; }
        if (ctx->pc != 0x19A5E8u) { return; }
    }
    ctx->pc = 0x19A5E8u;
label_19a5e8:
    // 0x19a5e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a5ec: 0xc066994  jal         func_19A650
    ctx->pc = 0x19A5ECu;
    SET_GPR_U32(ctx, 31, 0x19A5F4u);
    ctx->pc = 0x19A5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A5ECu;
            // 0x19a5f0: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A650u;
    if (runtime->hasFunction(0x19A650u)) {
        auto targetFn = runtime->lookupFunction(0x19A650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A5F4u; }
        if (ctx->pc != 0x19A5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019A650_0x19a650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A5F4u; }
        if (ctx->pc != 0x19A5F4u) { return; }
    }
    ctx->pc = 0x19A5F4u;
label_19a5f4:
    // 0x19a5f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a5f8: 0xc06e914  jal         func_1BA450
    ctx->pc = 0x19A5F8u;
    SET_GPR_U32(ctx, 31, 0x19A600u);
    ctx->pc = 0x19A5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A5F8u;
            // 0x19a5fc: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA450u;
    if (runtime->hasFunction(0x1BA450u)) {
        auto targetFn = runtime->lookupFunction(0x1BA450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A600u; }
        if (ctx->pc != 0x19A600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA450_0x1ba450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A600u; }
        if (ctx->pc != 0x19A600u) { return; }
    }
    ctx->pc = 0x19A600u;
label_19a600:
    // 0x19a600: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19A600u;
    {
        const bool branch_taken_0x19a600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A600u;
            // 0x19a604: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a600) {
            ctx->pc = 0x19A628u;
            goto label_19a628;
        }
    }
    ctx->pc = 0x19A608u;
label_19a608:
    // 0x19a608: 0xae360014  sw          $s6, 0x14($s1)
    ctx->pc = 0x19a608u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 22));
label_19a60c:
    // 0x19a60c: 0xc06e914  jal         func_1BA450
    ctx->pc = 0x19A60Cu;
    SET_GPR_U32(ctx, 31, 0x19A614u);
    ctx->pc = 0x19A610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A60Cu;
            // 0x19a610: 0xae360018  sw          $s6, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA450u;
    if (runtime->hasFunction(0x1BA450u)) {
        auto targetFn = runtime->lookupFunction(0x1BA450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A614u; }
        if (ctx->pc != 0x19A614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA450_0x1ba450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A614u; }
        if (ctx->pc != 0x19A614u) { return; }
    }
    ctx->pc = 0x19A614u;
label_19a614:
    // 0x19a614: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x19a614u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x19a618: 0x2a820004  slti        $v0, $s4, 0x4
    ctx->pc = 0x19a618u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x19a61c: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x19A61Cu;
    {
        const bool branch_taken_0x19a61c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A61Cu;
            // 0x19a620: 0x2722021  addu        $a0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a61c) {
            ctx->pc = 0x19A580u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19a580;
        }
    }
    ctx->pc = 0x19A624u;
label_19a624:
    // 0x19a624: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x19a624u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19a628:
    // 0x19a628: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x19a628u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19a62c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19a62cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19a630: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x19a630u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19a634: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x19a634u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19a638: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x19a638u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19a63c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x19a63cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19a640: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x19a640u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x19a644: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x19a644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19a648: 0x3e00008  jr          $ra
    ctx->pc = 0x19A648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A648u;
            // 0x19a64c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19A650u;
}
