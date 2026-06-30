#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011D6F8
// Address: 0x11d6f8 - 0x11d878
void sub_0011D6F8_0x11d6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D6F8_0x11d6f8");
#endif

    switch (ctx->pc) {
        case 0x11d74cu: goto label_11d74c;
        case 0x11d778u: goto label_11d778;
        case 0x11d780u: goto label_11d780;
        case 0x11d784u: goto label_11d784;
        case 0x11d7acu: goto label_11d7ac;
        case 0x11d814u: goto label_11d814;
        case 0x11d81cu: goto label_11d81c;
        default: break;
    }

    ctx->pc = 0x11d6f8u;

    // 0x11d6f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11d6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11d6fc: 0x4603f  dsra32      $t4, $a0, 0
    ctx->pc = 0x11d6fcu;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x11d700: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11d700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11d704: 0x4703c  dsll32      $t6, $a0, 0
    ctx->pc = 0x11d704u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 4) << (32 + 0));
    // 0x11d708: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11d708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11d70c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x11d70cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d710: 0x3c117ff0  lui         $s1, 0x7FF0
    ctx->pc = 0x11d710u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32752 << 16));
    // 0x11d714: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11d714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11d718: 0x1917824  and         $t7, $t4, $s1
    ctx->pc = 0x11d718u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) & GPR_U64(ctx, 17));
    // 0x11d71c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11d71cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d720: 0xf6d03  sra         $t5, $t7, 20
    ctx->pc = 0x11d720u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 15), 20));
    // 0x11d724: 0x15a0001b  bnez        $t5, . + 4 + (0x1B << 2)
    ctx->pc = 0x11D724u;
    {
        const bool branch_taken_0x11d724 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D724u;
            // 0x11d728: 0xe703f  dsra32      $t6, $t6, 0 (Delay Slot)
        SET_GPR_S64(ctx, 14, GPR_S64(ctx, 14) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d724) {
            ctx->pc = 0x11D794u;
            goto label_11d794;
        }
    }
    ctx->pc = 0x11D72Cu;
    // 0x11d72c: 0x3c0f7fff  lui         $t7, 0x7FFF
    ctx->pc = 0x11d72cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32767 << 16));
    // 0x11d730: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11d730u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11d734: 0x18f7824  and         $t7, $t4, $t7
    ctx->pc = 0x11d734u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) & GPR_U64(ctx, 15));
    // 0x11d738: 0x1cf7825  or          $t7, $t6, $t7
    ctx->pc = 0x11d738u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x11d73c: 0x11e00010  beqz        $t7, . + 4 + (0x10 << 2)
    ctx->pc = 0x11D73Cu;
    {
        const bool branch_taken_0x11d73c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D73Cu;
            // 0x11d740: 0x24050435  addiu       $a1, $zero, 0x435 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1077));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d73c) {
            ctx->pc = 0x11D780u;
            goto label_11d780;
        }
    }
    ctx->pc = 0x11D744u;
    // 0x11d744: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11D744u;
    SET_GPR_U32(ctx, 31, 0x11D74Cu);
    ctx->pc = 0x11D748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D744u;
            // 0x11d748: 0x52d3c  dsll32      $a1, $a1, 20 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D74Cu; }
        if (ctx->pc != 0x11D74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D74Cu; }
        if (ctx->pc != 0x11D74Cu) { return; }
    }
    ctx->pc = 0x11D74Cu;
label_11d74c:
    // 0x11d74c: 0x2603f  dsra32      $t4, $v0, 0
    ctx->pc = 0x11d74cu;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11d750: 0x3c0effff  lui         $t6, 0xFFFF
    ctx->pc = 0x11d750u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)65535 << 16));
    // 0x11d754: 0x1917824  and         $t7, $t4, $s1
    ctx->pc = 0x11d754u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) & GPR_U64(ctx, 17));
    // 0x11d758: 0x35ce3cb0  ori         $t6, $t6, 0x3CB0
    ctx->pc = 0x11d758u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)15536);
    // 0x11d75c: 0xf7d03  sra         $t7, $t7, 20
    ctx->pc = 0x11d75cu;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 20));
    // 0x11d760: 0x20e702a  slt         $t6, $s0, $t6
    ctx->pc = 0x11d760u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x11d764: 0x11c0000b  beqz        $t6, . + 4 + (0xB << 2)
    ctx->pc = 0x11D764u;
    {
        const bool branch_taken_0x11d764 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D764u;
            // 0x11d768: 0x25edffca  addiu       $t5, $t7, -0x36 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967242));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d764) {
            ctx->pc = 0x11D794u;
            goto label_11d794;
        }
    }
    ctx->pc = 0x11D76Cu;
    // 0x11d76c: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11d76cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11d770: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d774: 0xdde50058  ld          $a1, 0x58($t7)
    ctx->pc = 0x11d774u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 88)));
label_11d778:
    // 0x11d778: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11D778u;
    SET_GPR_U32(ctx, 31, 0x11D780u);
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D780u; }
        if (ctx->pc != 0x11D780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D780u; }
        if (ctx->pc != 0x11D780u) { return; }
    }
    ctx->pc = 0x11D780u;
label_11d780:
    // 0x11d780: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11d780u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11d784:
    // 0x11d784: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11d784u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11d788: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11d788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d78c: 0x3e00008  jr          $ra
    ctx->pc = 0x11D78Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D78Cu;
            // 0x11d790: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11D794u;
label_11d794:
    // 0x11d794: 0x240f07ff  addiu       $t7, $zero, 0x7FF
    ctx->pc = 0x11d794u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x11d798: 0x15af0006  bne         $t5, $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x11D798u;
    {
        const bool branch_taken_0x11d798 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 15));
        ctx->pc = 0x11D79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D798u;
            // 0x11d79c: 0x1b06821  addu        $t5, $t5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d798) {
            ctx->pc = 0x11D7B4u;
            goto label_11d7b4;
        }
    }
    ctx->pc = 0x11D7A0u;
    // 0x11d7a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d7a4: 0xc04960a  jal         func_125828
    ctx->pc = 0x11D7A4u;
    SET_GPR_U32(ctx, 31, 0x11D7ACu);
    ctx->pc = 0x11D7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D7A4u;
            // 0x11d7a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D7ACu; }
        if (ctx->pc != 0x11D7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D7ACu; }
        if (ctx->pc != 0x11D7ACu) { return; }
    }
    ctx->pc = 0x11D7ACu;
label_11d7ac:
    // 0x11d7ac: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x11D7ACu;
    {
        const bool branch_taken_0x11d7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D7ACu;
            // 0x11d7b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d7ac) {
            ctx->pc = 0x11D784u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11d784;
        }
    }
    ctx->pc = 0x11D7B4u;
label_11d7b4:
    // 0x11d7b4: 0x29af07ff  slti        $t7, $t5, 0x7FF
    ctx->pc = 0x11d7b4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)2047) ? 1 : 0);
    // 0x11d7b8: 0x11e00014  beqz        $t7, . + 4 + (0x14 << 2)
    ctx->pc = 0x11D7B8u;
    {
        const bool branch_taken_0x11d7b8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D7B8u;
            // 0x11d7bc: 0x3c0f0063  lui         $t7, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d7b8) {
            ctx->pc = 0x11D80Cu;
            goto label_11d80c;
        }
    }
    ctx->pc = 0x11D7C0u;
    // 0x11d7c0: 0x19a0000c  blez        $t5, . + 4 + (0xC << 2)
    ctx->pc = 0x11D7C0u;
    {
        const bool branch_taken_0x11d7c0 = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x11D7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D7C0u;
            // 0x11d7c4: 0x3c0f800f  lui         $t7, 0x800F (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32783 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d7c0) {
            ctx->pc = 0x11D7F4u;
            goto label_11d7f4;
        }
    }
    ctx->pc = 0x11D7C8u;
    // 0x11d7c8: 0xd6d00  sll         $t5, $t5, 20
    ctx->pc = 0x11d7c8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 20));
    // 0x11d7cc: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11d7ccu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11d7d0: 0x2703c  dsll32      $t6, $v0, 0
    ctx->pc = 0x11d7d0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11d7d4: 0x18f7824  and         $t7, $t4, $t7
    ctx->pc = 0x11d7d4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) & GPR_U64(ctx, 15));
    // 0x11d7d8: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x11d7d8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x11d7dc: 0x1ed7825  or          $t7, $t7, $t5
    ctx->pc = 0x11d7dcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 13));
    // 0x11d7e0: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x11d7e0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x11d7e4: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x11d7e4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x11d7e8: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x11d7e8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x11d7ec: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x11D7ECu;
    {
        const bool branch_taken_0x11d7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D7ECu;
            // 0x11d7f0: 0x1cf1025  or          $v0, $t6, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d7ec) {
            ctx->pc = 0x11D780u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11d780;
        }
    }
    ctx->pc = 0x11D7F4u;
label_11d7f4:
    // 0x11d7f4: 0x29afffcb  slti        $t7, $t5, -0x35
    ctx->pc = 0x11d7f4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)4294967243) ? 1 : 0);
    // 0x11d7f8: 0x11e0000f  beqz        $t7, . + 4 + (0xF << 2)
    ctx->pc = 0x11D7F8u;
    {
        const bool branch_taken_0x11d7f8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D7F8u;
            // 0x11d7fc: 0x340fc350  ori         $t7, $zero, 0xC350 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d7f8) {
            ctx->pc = 0x11D838u;
            goto label_11d838;
        }
    }
    ctx->pc = 0x11D800u;
    // 0x11d800: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x11d800u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11d804: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x11D804u;
    {
        const bool branch_taken_0x11d804 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D804u;
            // 0x11d808: 0x3c0f0063  lui         $t7, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d804) {
            ctx->pc = 0x11D828u;
            goto label_11d828;
        }
    }
    ctx->pc = 0x11D80Cu;
label_11d80c:
    // 0x11d80c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d80cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d810: 0xddf00060  ld          $s0, 0x60($t7)
    ctx->pc = 0x11d810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 15), 96)));
label_11d814:
    // 0x11d814: 0xc0474a6  jal         func_11D298
    ctx->pc = 0x11D814u;
    SET_GPR_U32(ctx, 31, 0x11D81Cu);
    ctx->pc = 0x11D818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D814u;
            // 0x11d818: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D298u;
    if (runtime->hasFunction(0x11D298u)) {
        auto targetFn = runtime->lookupFunction(0x11D298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D81Cu; }
        if (ctx->pc != 0x11D81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D298_0x11d298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D81Cu; }
        if (ctx->pc != 0x11D81Cu) { return; }
    }
    ctx->pc = 0x11D81Cu;
label_11d81c:
    // 0x11d81c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d820: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
    ctx->pc = 0x11D820u;
    {
        const bool branch_taken_0x11d820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D820u;
            // 0x11d824: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d820) {
            ctx->pc = 0x11D778u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11d778;
        }
    }
    ctx->pc = 0x11D828u;
label_11d828:
    // 0x11d828: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11d828u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11d82c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d82cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d830: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x11D830u;
    {
        const bool branch_taken_0x11d830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D830u;
            // 0x11d834: 0xddf00058  ld          $s0, 0x58($t7) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 15), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d830) {
            ctx->pc = 0x11D814u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11d814;
        }
    }
    ctx->pc = 0x11D838u;
label_11d838:
    // 0x11d838: 0x3c0f800f  lui         $t7, 0x800F
    ctx->pc = 0x11d838u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32783 << 16));
    // 0x11d83c: 0x25ad0036  addiu       $t5, $t5, 0x36
    ctx->pc = 0x11d83cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 54));
    // 0x11d840: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11d840u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11d844: 0xd6d00  sll         $t5, $t5, 20
    ctx->pc = 0x11d844u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 20));
    // 0x11d848: 0x18f7824  and         $t7, $t4, $t7
    ctx->pc = 0x11d848u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) & GPR_U64(ctx, 15));
    // 0x11d84c: 0x2703c  dsll32      $t6, $v0, 0
    ctx->pc = 0x11d84cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11d850: 0x1ed7825  or          $t7, $t7, $t5
    ctx->pc = 0x11d850u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 13));
    // 0x11d854: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x11d854u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x11d858: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x11d858u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x11d85c: 0x240503c9  addiu       $a1, $zero, 0x3C9
    ctx->pc = 0x11d85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 969));
    // 0x11d860: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x11d860u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x11d864: 0x52d3c  dsll32      $a1, $a1, 20
    ctx->pc = 0x11d864u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 20));
    // 0x11d868: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x11d868u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x11d86c: 0x1cf1025  or          $v0, $t6, $t7
    ctx->pc = 0x11d86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x11d870: 0x1000ffc1  b           . + 4 + (-0x3F << 2)
    ctx->pc = 0x11D870u;
    {
        const bool branch_taken_0x11d870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D870u;
            // 0x11d874: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d870) {
            ctx->pc = 0x11D778u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11d778;
        }
    }
    ctx->pc = 0x11D878u;
}
