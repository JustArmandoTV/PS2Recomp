#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A7830
// Address: 0x1a7830 - 0x1a79d0
void sub_001A7830_0x1a7830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7830_0x1a7830");
#endif

    switch (ctx->pc) {
        case 0x1a7870u: goto label_1a7870;
        case 0x1a787cu: goto label_1a787c;
        case 0x1a7998u: goto label_1a7998;
        case 0x1a79b8u: goto label_1a79b8;
        default: break;
    }

    ctx->pc = 0x1a7830u;

    // 0x1a7830: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a7830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a7834: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a7834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a7838: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a7838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a783c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a783cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a7840: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a7840u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7844: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a7844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a7848: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1a7848u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a784c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a784cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a7850: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1a7850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1a7854: 0x1a000046  blez        $s0, . + 4 + (0x46 << 2)
    ctx->pc = 0x1A7854u;
    {
        const bool branch_taken_0x1a7854 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1A7858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7854u;
            // 0x1a7858: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7854) {
            ctx->pc = 0x1A7970u;
            goto label_1a7970;
        }
    }
    ctx->pc = 0x1A785Cu;
    // 0x1a785c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1a785cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x1a7860: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1a7860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x1a7864: 0x2453a988  addiu       $s3, $v0, -0x5678
    ctx->pc = 0x1a7864u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945160));
    // 0x1a7868: 0x2474abb0  addiu       $s4, $v1, -0x5450
    ctx->pc = 0x1a7868u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945712));
    // 0x1a786c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a786cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a7870:
    // 0x1a7870: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a7870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7874: 0xc064bc8  jal         func_192F20
    ctx->pc = 0x1A7874u;
    SET_GPR_U32(ctx, 31, 0x1A787Cu);
    ctx->pc = 0x1A7878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7874u;
            // 0x1a7878: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192F20u;
    if (runtime->hasFunction(0x192F20u)) {
        auto targetFn = runtime->lookupFunction(0x192F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A787Cu; }
        if (ctx->pc != 0x1A787Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192F20_0x192f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A787Cu; }
        if (ctx->pc != 0x1A787Cu) { return; }
    }
    ctx->pc = 0x1A787Cu;
label_1a787c:
    // 0x1a787c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a787cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7880: 0x10a0003c  beqz        $a1, . + 4 + (0x3C << 2)
    ctx->pc = 0x1A7880u;
    {
        const bool branch_taken_0x1a7880 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7880u;
            // 0x1a7884: 0xb12023  subu        $a0, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7880) {
            ctx->pc = 0x1A7974u;
            goto label_1a7974;
        }
    }
    ctx->pc = 0x1A7888u;
    // 0x1a7888: 0x90a60007  lbu         $a2, 0x7($a1)
    ctx->pc = 0x1a7888u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x1a788c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a788cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a7890: 0x2048023  subu        $s0, $s0, $a0
    ctx->pc = 0x1a7890u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1a7894: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x1a7894u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1a7898: 0x61902  srl         $v1, $a2, 4
    ctx->pc = 0x1a7898u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x1a789c: 0x30c6000f  andi        $a2, $a2, 0xF
    ctx->pc = 0x1a789cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x1a78a0: 0x24c200ff  addiu       $v0, $a2, 0xFF
    ctx->pc = 0x1a78a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 255));
    // 0x1a78a4: 0x90ac000b  lbu         $t4, 0xB($a1)
    ctx->pc = 0x1a78a4u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 11)));
    // 0x1a78a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a78a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a78ac: 0x90a7000a  lbu         $a3, 0xA($a1)
    ctx->pc = 0x1a78acu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x1a78b0: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x1a78b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1a78b4: 0x90a80004  lbu         $t0, 0x4($a1)
    ctx->pc = 0x1a78b4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1a78b8: 0x90a40005  lbu         $a0, 0x5($a1)
    ctx->pc = 0x1a78b8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x1a78bc: 0x90a90006  lbu         $t1, 0x6($a1)
    ctx->pc = 0x1a78bcu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x1a78c0: 0x90aa0008  lbu         $t2, 0x8($a1)
    ctx->pc = 0x1a78c0u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a78c4: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1A78C4u;
    {
        const bool branch_taken_0x1a78c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A78C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A78C4u;
            // 0x1a78c8: 0x90ab0009  lbu         $t3, 0x9($a1) (Delay Slot)
        SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a78c4) {
            ctx->pc = 0x1A7968u;
            goto label_1a7968;
        }
    }
    ctx->pc = 0x1A78CCu;
    // 0x1a78cc: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1A78CCu;
    {
        const bool branch_taken_0x1a78cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A78D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A78CCu;
            // 0x1a78d0: 0x71142  srl         $v0, $a3, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a78cc) {
            ctx->pc = 0x1A7968u;
            goto label_1a7968;
        }
    }
    ctx->pc = 0x1A78D4u;
    // 0x1a78d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a78d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a78d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a78d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a78dc: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1A78DCu;
    {
        const bool branch_taken_0x1a78dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A78E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A78DCu;
            // 0x1a78e0: 0x3082000f  andi        $v0, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a78dc) {
            ctx->pc = 0x1A7968u;
            goto label_1a7968;
        }
    }
    ctx->pc = 0x1A78E4u;
    // 0x1a78e4: 0x42102  srl         $a0, $a0, 4
    ctx->pc = 0x1a78e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x1a78e8: 0x81900  sll         $v1, $t0, 4
    ctx->pc = 0x1a78e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1a78ec: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1a78ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1a78f0: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x1a78f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1a78f4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1a78f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1a78f8: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x1a78f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x1a78fc: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x1a78fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x1a7900: 0x14a0000c  bnez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1A7900u;
    {
        const bool branch_taken_0x1a7900 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7900u;
            // 0x1a7904: 0xae420018  sw          $v0, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7900) {
            ctx->pc = 0x1A7934u;
            goto label_1a7934;
        }
    }
    ctx->pc = 0x1A7908u;
    // 0x1a7908: 0xb1080  sll         $v0, $t3, 2
    ctx->pc = 0x1a7908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x1a790c: 0xa1a80  sll         $v1, $t2, 10
    ctx->pc = 0x1a790cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 10));
    // 0x1a7910: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a7910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a7914: 0x72182  srl         $a0, $a3, 6
    ctx->pc = 0x1a7914u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 6));
    // 0x1a7918: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1a7918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1a791c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1a791cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a7920: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a7920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7924: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a7924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a7928: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a7928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a792c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1a792cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a7930: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x1a7930u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_1a7934:
    // 0x1a7934: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1a7934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a7938: 0x30e2001f  andi        $v0, $a3, 0x1F
    ctx->pc = 0x1a7938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)31);
    // 0x1a793c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1a793cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1a7940: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1a7940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1a7944: 0xc20c2  srl         $a0, $t4, 3
    ctx->pc = 0x1a7944u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 3));
    // 0x1a7948: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1a7948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a794c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1a794cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1a7950: 0xae540008  sw          $s4, 0x8($s2)
    ctx->pc = 0x1a7950u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 20));
    // 0x1a7954: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x1a7954u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x1a7958: 0xae450020  sw          $a1, 0x20($s2)
    ctx->pc = 0x1a7958u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 5));
    // 0x1a795c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A795Cu;
    {
        const bool branch_taken_0x1a795c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A795Cu;
            // 0x1a7960: 0xae420024  sw          $v0, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a795c) {
            ctx->pc = 0x1A7970u;
            goto label_1a7970;
        }
    }
    ctx->pc = 0x1A7964u;
    // 0x1a7964: 0x0  nop
    ctx->pc = 0x1a7964u;
    // NOP
label_1a7968:
    // 0x1a7968: 0x1e00ffc1  bgtz        $s0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x1A7968u;
    {
        const bool branch_taken_0x1a7968 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x1A796Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7968u;
            // 0x1a796c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7968) {
            ctx->pc = 0x1A7870u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a7870;
        }
    }
    ctx->pc = 0x1A7970u;
label_1a7970:
    // 0x1a7970: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a7970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a7974:
    // 0x1a7974: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a7974u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7978: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a7978u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a797c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a797cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7980: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a7980u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a7984: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a7984u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7988: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1a7988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a798c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A798Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A798Cu;
            // 0x1a7990: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A7994u;
    // 0x1a7994: 0x0  nop
    ctx->pc = 0x1a7994u;
    // NOP
label_1a7998:
    // 0x1a7998: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a7998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a799c: 0x3c05006e  lui         $a1, 0x6E
    ctx->pc = 0x1a799cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)110 << 16));
    // 0x1a79a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a79a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a79a4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1a79a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a79a8: 0x24a5cf50  addiu       $a1, $a1, -0x30B0
    ctx->pc = 0x1a79a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954832));
    // 0x1a79ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a79acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a79b0: 0x806e8ae  j           func_1BA2B8
    ctx->pc = 0x1A79B0u;
    ctx->pc = 0x1A79B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A79B0u;
            // 0x1a79b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA2B8u;
    {
        auto targetFn = runtime->lookupFunction(0x1BA2B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1A79B8u;
label_1a79b8:
    // 0x1a79b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a79b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a79bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a79bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a79c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a79c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a79c4: 0x806e8d2  j           func_1BA348
    ctx->pc = 0x1A79C4u;
    ctx->pc = 0x1A79C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A79C4u;
            // 0x1a79c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA348u;
    {
        auto targetFn = runtime->lookupFunction(0x1BA348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1A79CCu;
    // 0x1a79cc: 0x0  nop
    ctx->pc = 0x1a79ccu;
    // NOP
}
