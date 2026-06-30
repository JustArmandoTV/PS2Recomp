#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004FC5A0
// Address: 0x4fc5a0 - 0x4fc880
void sub_004FC5A0_0x4fc5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FC5A0_0x4fc5a0");
#endif

    switch (ctx->pc) {
        case 0x4fc634u: goto label_4fc634;
        case 0x4fc63cu: goto label_4fc63c;
        case 0x4fc6c0u: goto label_4fc6c0;
        case 0x4fc6ccu: goto label_4fc6cc;
        case 0x4fc730u: goto label_4fc730;
        case 0x4fc76cu: goto label_4fc76c;
        case 0x4fc790u: goto label_4fc790;
        case 0x4fc798u: goto label_4fc798;
        case 0x4fc7b0u: goto label_4fc7b0;
        case 0x4fc7f8u: goto label_4fc7f8;
        case 0x4fc834u: goto label_4fc834;
        case 0x4fc83cu: goto label_4fc83c;
        default: break;
    }

    ctx->pc = 0x4fc5a0u;

    // 0x4fc5a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4fc5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x4fc5a4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4fc5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x4fc5a8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x4fc5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x4fc5ac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4fc5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x4fc5b0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4fc5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x4fc5b4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4fc5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x4fc5b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4fc5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x4fc5bc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4fc5bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fc5c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4fc5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4fc5c4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x4fc5c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fc5c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4fc5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4fc5cc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x4fc5ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fc5d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4fc5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4fc5d4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4fc5d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fc5d8: 0x1280009a  beqz        $s4, . + 4 + (0x9A << 2)
    ctx->pc = 0x4FC5D8u;
    {
        const bool branch_taken_0x4fc5d8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FC5DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC5D8u;
            // 0x4fc5dc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fc5d8) {
            ctx->pc = 0x4FC844u;
            goto label_4fc844;
        }
    }
    ctx->pc = 0x4FC5E0u;
    // 0x4fc5e0: 0x34010000  ori         $at, $zero, 0x0
    ctx->pc = 0x4fc5e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)0);
    // 0x4fc5e4: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x4fc5e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x4fc5e8: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x4fc5e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x4fc5ec: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x4fc5ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x4fc5f0: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x4fc5f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x4fc5f4: 0x281082b  sltu        $at, $s4, $at
    ctx->pc = 0x4fc5f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x4fc5f8: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x4FC5F8u;
    {
        const bool branch_taken_0x4fc5f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fc5f8) {
            ctx->pc = 0x4FC61Cu;
            goto label_4fc61c;
        }
    }
    ctx->pc = 0x4FC600u;
    // 0x4fc600: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x4fc600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x4fc604: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x4fc604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x4fc608: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4fc608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4fc60c: 0x741823  subu        $v1, $v1, $s4
    ctx->pc = 0x4fc60cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x4fc610: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4fc610u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4fc614: 0x5020000a  beql        $at, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x4FC614u;
    {
        const bool branch_taken_0x4fc614 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fc614) {
            ctx->pc = 0x4FC618u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC614u;
            // 0x4fc618: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FC640u;
            goto label_4fc640;
        }
    }
    ctx->pc = 0x4FC61Cu;
label_4fc61c:
    // 0x4fc61c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x4fc61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x4fc620: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x4fc620u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x4fc624: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x4fc624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x4fc628: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x4fc628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4fc62c: 0xc049e92  jal         func_127A48
    ctx->pc = 0x4FC62Cu;
    SET_GPR_U32(ctx, 31, 0x4FC634u);
    ctx->pc = 0x4FC630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC62Cu;
            // 0x4fc630: 0x24a58ce0  addiu       $a1, $a1, -0x7320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC634u; }
        if (ctx->pc != 0x4FC634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC634u; }
        if (ctx->pc != 0x4FC634u) { return; }
    }
    ctx->pc = 0x4FC634u;
label_4fc634:
    // 0x4fc634: 0xc04981a  jal         func_126068
    ctx->pc = 0x4FC634u;
    SET_GPR_U32(ctx, 31, 0x4FC63Cu);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC63Cu; }
        if (ctx->pc != 0x4FC63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC63Cu; }
        if (ctx->pc != 0x4FC63Cu) { return; }
    }
    ctx->pc = 0x4FC63Cu;
label_4fc63c:
    // 0x4fc63c: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x4fc63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_4fc640:
    // 0x4fc640: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4fc640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4fc644: 0x948021  addu        $s0, $a0, $s4
    ctx->pc = 0x4fc644u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x4fc648: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x4fc648u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x4fc64c: 0x5420002a  bnel        $at, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x4FC64Cu;
    {
        const bool branch_taken_0x4fc64c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4fc64c) {
            ctx->pc = 0x4FC650u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC64Cu;
            // 0x4fc650: 0x8eb10008  lw          $s1, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FC6F8u;
            goto label_4fc6f8;
        }
    }
    ctx->pc = 0x4FC654u;
    // 0x4fc654: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x4fc654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x4fc658: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x4fc658u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x4fc65c: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x4fc65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4fc660: 0xb21823  subu        $v1, $a1, $s2
    ctx->pc = 0x4fc660u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x4fc664: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4FC664u;
    {
        const bool branch_taken_0x4fc664 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x4FC668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC664u;
            // 0x4fc668: 0x32043  sra         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fc664) {
            ctx->pc = 0x4FC674u;
            goto label_4fc674;
        }
    }
    ctx->pc = 0x4FC66Cu;
    // 0x4fc66c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4fc66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4fc670: 0x32043  sra         $a0, $v1, 1
    ctx->pc = 0x4fc670u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
label_4fc674:
    // 0x4fc674: 0x941823  subu        $v1, $a0, $s4
    ctx->pc = 0x4fc674u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x4fc678: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4fc678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4fc67c: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x4fc67cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4fc680: 0x263082b  sltu        $at, $s3, $v1
    ctx->pc = 0x4fc680u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4fc684: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x4FC684u;
    {
        const bool branch_taken_0x4fc684 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4fc684) {
            ctx->pc = 0x4FC6A0u;
            goto label_4fc6a0;
        }
    }
    ctx->pc = 0x4FC68Cu;
    // 0x4fc68c: 0x265082b  sltu        $at, $s3, $a1
    ctx->pc = 0x4fc68cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x4fc690: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x4FC690u;
    {
        const bool branch_taken_0x4fc690 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fc690) {
            ctx->pc = 0x4FC6A0u;
            goto label_4fc6a0;
        }
    }
    ctx->pc = 0x4FC698u;
    // 0x4fc698: 0x141840  sll         $v1, $s4, 1
    ctx->pc = 0x4fc698u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x4fc69c: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x4fc69cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_4fc6a0:
    // 0x4fc6a0: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4FC6A0u;
    {
        const bool branch_taken_0x4fc6a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fc6a0) {
            ctx->pc = 0x4FC6A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC6A0u;
            // 0x4fc6a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FC6C4u;
            goto label_4fc6c4;
        }
    }
    ctx->pc = 0x4FC6A8u;
    // 0x4fc6a8: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x4fc6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x4fc6ac: 0x43040  sll         $a2, $a0, 1
    ctx->pc = 0x4fc6acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x4fc6b0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x4fc6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4fc6b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4fc6b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fc6b8: 0xc04a534  jal         func_1294D0
    ctx->pc = 0x4FC6B8u;
    SET_GPR_U32(ctx, 31, 0x4FC6C0u);
    ctx->pc = 0x4FC6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC6B8u;
            // 0x4fc6bc: 0x462023  subu        $a0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1294D0u;
    if (runtime->hasFunction(0x1294D0u)) {
        auto targetFn = runtime->lookupFunction(0x1294D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC6C0u; }
        if (ctx->pc != 0x4FC6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001294D0_0x1294d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC6C0u; }
        if (ctx->pc != 0x4FC6C0u) { return; }
    }
    ctx->pc = 0x4FC6C0u;
label_4fc6c0:
    // 0x4fc6c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4fc6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4fc6c4:
    // 0x4fc6c4: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x4FC6C4u;
    {
        const bool branch_taken_0x4fc6c4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fc6c4) {
            ctx->pc = 0x4FC6E8u;
            goto label_4fc6e8;
        }
    }
    ctx->pc = 0x4FC6CCu;
label_4fc6cc:
    // 0x4fc6cc: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4fc6ccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4fc6d0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x4fc6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x4fc6d4: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x4fc6d4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4fc6d8: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x4fc6d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x4fc6dc: 0x0  nop
    ctx->pc = 0x4fc6dcu;
    // NOP
    // 0x4fc6e0: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4FC6E0u;
    {
        const bool branch_taken_0x4fc6e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4fc6e0) {
            ctx->pc = 0x4FC6CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4fc6cc;
        }
    }
    ctx->pc = 0x4FC6E8u;
label_4fc6e8:
    // 0x4fc6e8: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x4fc6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x4fc6ec: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x4fc6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x4fc6f0: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x4FC6F0u;
    {
        const bool branch_taken_0x4fc6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FC6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC6F0u;
            // 0x4fc6f4: 0xaea30004  sw          $v1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fc6f0) {
            ctx->pc = 0x4FC844u;
            goto label_4fc844;
        }
    }
    ctx->pc = 0x4FC6F8u;
label_4fc6f8:
    // 0x4fc6f8: 0x2511023  subu        $v0, $s2, $s1
    ctx->pc = 0x4fc6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x4fc6fc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4FC6FCu;
    {
        const bool branch_taken_0x4fc6fc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4FC700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC6FCu;
            // 0x4fc700: 0x2f043  sra         $fp, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fc6fc) {
            ctx->pc = 0x4FC70Cu;
            goto label_4fc70c;
        }
    }
    ctx->pc = 0x4FC704u;
    // 0x4fc704: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4fc704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4fc708: 0x2f043  sra         $fp, $v0, 1
    ctx->pc = 0x4fc708u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 2), 1));
label_4fc70c:
    // 0x4fc70c: 0x8eb20000  lw          $s2, 0x0($s5)
    ctx->pc = 0x4fc70cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4fc710: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4FC710u;
    {
        const bool branch_taken_0x4fc710 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fc710) {
            ctx->pc = 0x4FC714u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC710u;
            // 0x4fc714: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FC718u;
            goto label_4fc718;
        }
    }
    ctx->pc = 0x4FC718u;
label_4fc718:
    // 0x4fc718: 0x250082b  sltu        $at, $s2, $s0
    ctx->pc = 0x4fc718u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x4fc71c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x4FC71Cu;
    {
        const bool branch_taken_0x4fc71c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fc71c) {
            ctx->pc = 0x4FC760u;
            goto label_4fc760;
        }
    }
    ctx->pc = 0x4FC724u;
    // 0x4fc724: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x4fc724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x4fc728: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4fc728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4fc72c: 0x3c013fff  lui         $at, 0x3FFF
    ctx->pc = 0x4fc72cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16383 << 16));
label_4fc730:
    // 0x4fc730: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x4fc730u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x4fc734: 0x241082b  sltu        $at, $s2, $at
    ctx->pc = 0x4fc734u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x4fc738: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x4FC738u;
    {
        const bool branch_taken_0x4fc738 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fc738) {
            ctx->pc = 0x4FC748u;
            goto label_4fc748;
        }
    }
    ctx->pc = 0x4FC740u;
    // 0x4fc740: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4FC740u;
    {
        const bool branch_taken_0x4fc740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FC744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC740u;
            // 0x4fc744: 0x129040  sll         $s2, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fc740) {
            ctx->pc = 0x4FC750u;
            goto label_4fc750;
        }
    }
    ctx->pc = 0x4FC748u;
label_4fc748:
    // 0x4fc748: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4fc748u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fc74c: 0x0  nop
    ctx->pc = 0x4fc74cu;
    // NOP
label_4fc750:
    // 0x4fc750: 0x250082b  sltu        $at, $s2, $s0
    ctx->pc = 0x4fc750u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x4fc754: 0x5420fff6  bnel        $at, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x4FC754u;
    {
        const bool branch_taken_0x4fc754 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4fc754) {
            ctx->pc = 0x4FC758u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC754u;
            // 0x4fc758: 0x3c013fff  lui         $at, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16383 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FC730u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4fc730;
        }
    }
    ctx->pc = 0x4FC75Cu;
    // 0x4fc75c: 0x0  nop
    ctx->pc = 0x4fc75cu;
    // NOP
label_4fc760:
    // 0x4fc760: 0x122040  sll         $a0, $s2, 1
    ctx->pc = 0x4fc760u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x4fc764: 0xc040180  jal         func_100600
    ctx->pc = 0x4FC764u;
    SET_GPR_U32(ctx, 31, 0x4FC76Cu);
    ctx->pc = 0x4FC768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC764u;
            // 0x4fc768: 0x26b60008  addiu       $s6, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC76Cu; }
        if (ctx->pc != 0x4FC76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC76Cu; }
        if (ctx->pc != 0x4FC76Cu) { return; }
    }
    ctx->pc = 0x4FC76Cu;
label_4fc76c:
    // 0x4fc76c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x4fc76cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fc770: 0x56e0000a  bnel        $s7, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x4FC770u;
    {
        const bool branch_taken_0x4fc770 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x4fc770) {
            ctx->pc = 0x4FC774u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC770u;
            // 0x4fc774: 0xaed70000  sw          $s7, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FC79Cu;
            goto label_4fc79c;
        }
    }
    ctx->pc = 0x4FC778u;
    // 0x4fc778: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x4fc778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x4fc77c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x4fc77cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x4fc780: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x4fc780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x4fc784: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x4fc784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4fc788: 0xc049e92  jal         func_127A48
    ctx->pc = 0x4FC788u;
    SET_GPR_U32(ctx, 31, 0x4FC790u);
    ctx->pc = 0x4FC78Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC788u;
            // 0x4fc78c: 0x24a58d20  addiu       $a1, $a1, -0x72E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC790u; }
        if (ctx->pc != 0x4FC790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC790u; }
        if (ctx->pc != 0x4FC790u) { return; }
    }
    ctx->pc = 0x4FC790u;
label_4fc790:
    // 0x4fc790: 0xc04981a  jal         func_126068
    ctx->pc = 0x4FC790u;
    SET_GPR_U32(ctx, 31, 0x4FC798u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC798u; }
        if (ctx->pc != 0x4FC798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC798u; }
        if (ctx->pc != 0x4FC798u) { return; }
    }
    ctx->pc = 0x4FC798u;
label_4fc798:
    // 0x4fc798: 0xaed70000  sw          $s7, 0x0($s6)
    ctx->pc = 0x4fc798u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 23));
label_4fc79c:
    // 0x4fc79c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4fc79cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fc7a0: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x4fc7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x4fc7a4: 0x1eb040  sll         $s6, $fp, 1
    ctx->pc = 0x4fc7a4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
    // 0x4fc7a8: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x4FC7A8u;
    {
        const bool branch_taken_0x4fc7a8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FC7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC7A8u;
            // 0x4fc7ac: 0x762821  addu        $a1, $v1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fc7a8) {
            ctx->pc = 0x4FC7D0u;
            goto label_4fc7d0;
        }
    }
    ctx->pc = 0x4FC7B0u;
label_4fc7b0:
    // 0x4fc7b0: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4fc7b0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4fc7b4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x4fc7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x4fc7b8: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x4fc7b8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4fc7bc: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x4fc7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x4fc7c0: 0x0  nop
    ctx->pc = 0x4fc7c0u;
    // NOP
    // 0x4fc7c4: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4FC7C4u;
    {
        const bool branch_taken_0x4fc7c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4fc7c4) {
            ctx->pc = 0x4FC7B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4fc7b0;
        }
    }
    ctx->pc = 0x4FC7CCu;
    // 0x4fc7cc: 0x0  nop
    ctx->pc = 0x4fc7ccu;
    // NOP
label_4fc7d0:
    // 0x4fc7d0: 0x5220001b  beql        $s1, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x4FC7D0u;
    {
        const bool branch_taken_0x4fc7d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fc7d0) {
            ctx->pc = 0x4FC7D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC7D0u;
            // 0x4fc7d4: 0xaeb00004  sw          $s0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FC840u;
            goto label_4fc840;
        }
    }
    ctx->pc = 0x4FC7D8u;
    // 0x4fc7d8: 0x6c10003  bgez        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x4FC7D8u;
    {
        const bool branch_taken_0x4fc7d8 = (GPR_S32(ctx, 22) >= 0);
        ctx->pc = 0x4FC7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC7D8u;
            // 0x4fc7dc: 0x161043  sra         $v0, $s6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fc7d8) {
            ctx->pc = 0x4FC7E8u;
            goto label_4fc7e8;
        }
    }
    ctx->pc = 0x4FC7E0u;
    // 0x4fc7e0: 0x26c20001  addiu       $v0, $s6, 0x1
    ctx->pc = 0x4fc7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x4fc7e4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4fc7e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_4fc7e8:
    // 0x4fc7e8: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x4fc7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x4fc7ec: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x4fc7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4fc7f0: 0xc04a508  jal         func_129420
    ctx->pc = 0x4FC7F0u;
    SET_GPR_U32(ctx, 31, 0x4FC7F8u);
    ctx->pc = 0x4FC7F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC7F0u;
            // 0x4fc7f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC7F8u; }
        if (ctx->pc != 0x4FC7F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC7F8u; }
        if (ctx->pc != 0x4FC7F8u) { return; }
    }
    ctx->pc = 0x4FC7F8u;
label_4fc7f8:
    // 0x4fc7f8: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x4fc7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x4fc7fc: 0x141840  sll         $v1, $s4, 1
    ctx->pc = 0x4fc7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x4fc800: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x4fc800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x4fc804: 0x2362821  addu        $a1, $s1, $s6
    ctx->pc = 0x4fc804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x4fc808: 0x962021  addu        $a0, $a0, $s6
    ctx->pc = 0x4fc808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x4fc80c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4fc80cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4fc810: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4fc810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4fc814: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x4fc814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x4fc818: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x4fc818u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4fc81c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4FC81Cu;
    {
        const bool branch_taken_0x4fc81c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x4FC820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC81Cu;
            // 0x4fc820: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fc81c) {
            ctx->pc = 0x4FC82Cu;
            goto label_4fc82c;
        }
    }
    ctx->pc = 0x4FC824u;
    // 0x4fc824: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x4fc824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4fc828: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4fc828u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_4fc82c:
    // 0x4fc82c: 0xc04a508  jal         func_129420
    ctx->pc = 0x4FC82Cu;
    SET_GPR_U32(ctx, 31, 0x4FC834u);
    ctx->pc = 0x4FC830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC82Cu;
            // 0x4fc830: 0x23040  sll         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC834u; }
        if (ctx->pc != 0x4FC834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC834u; }
        if (ctx->pc != 0x4FC834u) { return; }
    }
    ctx->pc = 0x4FC834u;
label_4fc834:
    // 0x4fc834: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4FC834u;
    SET_GPR_U32(ctx, 31, 0x4FC83Cu);
    ctx->pc = 0x4FC838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC834u;
            // 0x4fc838: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC83Cu; }
        if (ctx->pc != 0x4FC83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FC83Cu; }
        if (ctx->pc != 0x4FC83Cu) { return; }
    }
    ctx->pc = 0x4FC83Cu;
label_4fc83c:
    // 0x4fc83c: 0xaeb00004  sw          $s0, 0x4($s5)
    ctx->pc = 0x4fc83cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 16));
label_4fc840:
    // 0x4fc840: 0xaeb20000  sw          $s2, 0x0($s5)
    ctx->pc = 0x4fc840u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 18));
label_4fc844:
    // 0x4fc844: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4fc844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4fc848: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x4fc848u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4fc84c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4fc84cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4fc850: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4fc850u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4fc854: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4fc854u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4fc858: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4fc858u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4fc85c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4fc85cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4fc860: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4fc860u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4fc864: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4fc864u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4fc868: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4fc868u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4fc86c: 0x3e00008  jr          $ra
    ctx->pc = 0x4FC86Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FC870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FC86Cu;
            // 0x4fc870: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FC874u;
    // 0x4fc874: 0x0  nop
    ctx->pc = 0x4fc874u;
    // NOP
    // 0x4fc878: 0x0  nop
    ctx->pc = 0x4fc878u;
    // NOP
    // 0x4fc87c: 0x0  nop
    ctx->pc = 0x4fc87cu;
    // NOP
}
