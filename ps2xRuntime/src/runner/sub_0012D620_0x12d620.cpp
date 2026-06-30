#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012D620
// Address: 0x12d620 - 0x12d860
void sub_0012D620_0x12d620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012D620_0x12d620");
#endif

    switch (ctx->pc) {
        case 0x12d66cu: goto label_12d66c;
        case 0x12d6a0u: goto label_12d6a0;
        case 0x12d6a4u: goto label_12d6a4;
        case 0x12d724u: goto label_12d724;
        case 0x12d738u: goto label_12d738;
        case 0x12d748u: goto label_12d748;
        case 0x12d760u: goto label_12d760;
        case 0x12d794u: goto label_12d794;
        case 0x12d7a8u: goto label_12d7a8;
        case 0x12d7b4u: goto label_12d7b4;
        case 0x12d7e0u: goto label_12d7e0;
        default: break;
    }

    ctx->pc = 0x12d620u;

    // 0x12d620: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x12d620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x12d624: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x12d624u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x12d628: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x12d628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x12d62c: 0x25ed0768  addiu       $t5, $t7, 0x768
    ctx->pc = 0x12d62cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 1896));
    // 0x12d630: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x12d630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x12d634: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x12d634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x12d638: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12d638u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d63c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x12d63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x12d640: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x12d640u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d644: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x12d644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x12d648: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x12d648u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d64c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x12d64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x12d650: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x12d650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x12d654: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x12d654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x12d658: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x12d658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x12d65c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x12d65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x12d660: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x12d660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x12d664: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x12d664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x12d668: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x12d668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_12d66c:
    // 0x12d66c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x12d66cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12d670: 0x20d7021  addu        $t6, $s0, $t5
    ctx->pc = 0x12d670u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x12d674: 0x91cf0000  lbu         $t7, 0x0($t6)
    ctx->pc = 0x12d674u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x12d678: 0x31ef0008  andi        $t7, $t7, 0x8
    ctx->pc = 0x12d678u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)8);
    // 0x12d67c: 0x0  nop
    ctx->pc = 0x12d67cu;
    // NOP
    // 0x12d680: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12D680u;
    {
        const bool branch_taken_0x12d680 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D680u;
            // 0x12d684: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d680) {
            ctx->pc = 0x12D66Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d66c;
        }
    }
    ctx->pc = 0x12D688u;
    // 0x12d688: 0x240f002d  addiu       $t7, $zero, 0x2D
    ctx->pc = 0x12d688u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x12d68c: 0x160f0070  bne         $s0, $t7, . + 4 + (0x70 << 2)
    ctx->pc = 0x12D68Cu;
    {
        const bool branch_taken_0x12d68c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 15));
        ctx->pc = 0x12D690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D68Cu;
            // 0x12d690: 0x240f002b  addiu       $t7, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d68c) {
            ctx->pc = 0x12D850u;
            goto label_12d850;
        }
    }
    ctx->pc = 0x12D694u;
    // 0x12d694: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x12d694u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12d698: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x12d698u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d69c: 0xafae0008  sw          $t6, 0x8($sp)
    ctx->pc = 0x12d69cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 14));
label_12d6a0:
    // 0x12d6a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12d6a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_12d6a4:
    // 0x12d6a4: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D6A4u;
    {
        const bool branch_taken_0x12d6a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D6A4u;
            // 0x12d6a8: 0x240f0010  addiu       $t7, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d6a4) {
            ctx->pc = 0x12D6B4u;
            goto label_12d6b4;
        }
    }
    ctx->pc = 0x12D6ACu;
    // 0x12d6ac: 0x166f000c  bne         $s3, $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x12D6ACu;
    {
        const bool branch_taken_0x12d6ac = (GPR_U64(ctx, 19) != GPR_U64(ctx, 15));
        if (branch_taken_0x12d6ac) {
            ctx->pc = 0x12D6E0u;
            goto label_12d6e0;
        }
    }
    ctx->pc = 0x12D6B4u;
label_12d6b4:
    // 0x12d6b4: 0x240f0030  addiu       $t7, $zero, 0x30
    ctx->pc = 0x12d6b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x12d6b8: 0x160f0009  bne         $s0, $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x12D6B8u;
    {
        const bool branch_taken_0x12d6b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 15));
        ctx->pc = 0x12D6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D6B8u;
            // 0x12d6bc: 0x240f0078  addiu       $t7, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d6b8) {
            ctx->pc = 0x12D6E0u;
            goto label_12d6e0;
        }
    }
    ctx->pc = 0x12D6C0u;
    // 0x12d6c0: 0x822e0000  lb          $t6, 0x0($s1)
    ctx->pc = 0x12d6c0u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12d6c4: 0x11cf0003  beq         $t6, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D6C4u;
    {
        const bool branch_taken_0x12d6c4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x12D6C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D6C4u;
            // 0x12d6c8: 0x240f0058  addiu       $t7, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d6c4) {
            ctx->pc = 0x12D6D4u;
            goto label_12d6d4;
        }
    }
    ctx->pc = 0x12D6CCu;
    // 0x12d6cc: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D6CCu;
    {
        const bool branch_taken_0x12d6cc = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x12d6cc) {
            ctx->pc = 0x12D6E0u;
            goto label_12d6e0;
        }
    }
    ctx->pc = 0x12D6D4u;
label_12d6d4:
    // 0x12d6d4: 0x82300001  lb          $s0, 0x1($s1)
    ctx->pc = 0x12d6d4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x12d6d8: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x12d6d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12d6dc: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x12d6dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_12d6e0:
    // 0x12d6e0: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D6E0u;
    {
        const bool branch_taken_0x12d6e0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D6E0u;
            // 0x12d6e4: 0x8fae0008  lw          $t6, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d6e0) {
            ctx->pc = 0x12D6FCu;
            goto label_12d6fc;
        }
    }
    ctx->pc = 0x12D6E8u;
    // 0x12d6e8: 0x24130008  addiu       $s3, $zero, 0x8
    ctx->pc = 0x12d6e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12d6ec: 0x3a0e0030  xori        $t6, $s0, 0x30
    ctx->pc = 0x12d6ecu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)48);
    // 0x12d6f0: 0x240f000a  addiu       $t7, $zero, 0xA
    ctx->pc = 0x12d6f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12d6f4: 0x1ee980b  movn        $s3, $t7, $t6
    ctx->pc = 0x12d6f4u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 15));
    // 0x12d6f8: 0x8fae0008  lw          $t6, 0x8($sp)
    ctx->pc = 0x12d6f8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_12d6fc:
    // 0x12d6fc: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x12d6fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12d700: 0x240ffffe  addiu       $t7, $zero, -0x2
    ctx->pc = 0x12d700u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x12d704: 0x1297fc  dsll32      $s2, $s2, 31
    ctx->pc = 0x12d704u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 31));
    // 0x12d708: 0xf787a  dsrl        $t7, $t7, 1
    ctx->pc = 0x12d708u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 1);
    // 0x12d70c: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x12d70cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d710: 0x1ee900a  movz        $s2, $t7, $t6
    ctx->pc = 0x12d710u;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 15));
    // 0x12d714: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12d714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d718: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12d718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d71c: 0xc049328  jal         func_124CA0
    ctx->pc = 0x12D71Cu;
    SET_GPR_U32(ctx, 31, 0x12D724u);
    ctx->pc = 0x12D720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D71Cu;
            // 0x12d720: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x124CA0u;
    if (runtime->hasFunction(0x124CA0u)) {
        auto targetFn = runtime->lookupFunction(0x124CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D724u; }
        if (ctx->pc != 0x12D724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00124CA0_0x124ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D724u; }
        if (ctx->pc != 0x12D724u) { return; }
    }
    ctx->pc = 0x12D724u;
label_12d724:
    // 0x12d724: 0x2f03c  dsll32      $fp, $v0, 0
    ctx->pc = 0x12d724u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12d728: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12d728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d72c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12d72cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d730: 0xc04916a  jal         func_1245A8
    ctx->pc = 0x12D730u;
    SET_GPR_U32(ctx, 31, 0x12D738u);
    ctx->pc = 0x12D734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D730u;
            // 0x12d734: 0x1ef03f  dsra32      $fp, $fp, 0 (Delay Slot)
        SET_GPR_S64(ctx, 30, GPR_S64(ctx, 30) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1245A8u;
    if (runtime->hasFunction(0x1245A8u)) {
        auto targetFn = runtime->lookupFunction(0x1245A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D738u; }
        if (ctx->pc != 0x12D738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001245A8_0x1245a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D738u; }
        if (ctx->pc != 0x12D738u) { return; }
    }
    ctx->pc = 0x12D738u;
label_12d738:
    // 0x12d738: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12d738u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d73c: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x12d73cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x12d740: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12d740u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d744: 0x25f60768  addiu       $s6, $t7, 0x768
    ctx->pc = 0x12d744u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 15), 1896));
label_12d748:
    // 0x12d748: 0x2167821  addu        $t7, $s0, $s6
    ctx->pc = 0x12d748u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x12d74c: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x12d74cu;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12d750: 0x31ae0004  andi        $t6, $t5, 0x4
    ctx->pc = 0x12d750u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)4);
    // 0x12d754: 0x11c00037  beqz        $t6, . + 4 + (0x37 << 2)
    ctx->pc = 0x12D754u;
    {
        const bool branch_taken_0x12d754 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D754u;
            // 0x12d758: 0x31af0003  andi        $t7, $t5, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d754) {
            ctx->pc = 0x12D834u;
            goto label_12d834;
        }
    }
    ctx->pc = 0x12D75Cu;
    // 0x12d75c: 0x2610ffd0  addiu       $s0, $s0, -0x30
    ctx->pc = 0x12d75cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967248));
label_12d760:
    // 0x12d760: 0x213782a  slt         $t7, $s0, $s3
    ctx->pc = 0x12d760u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x12d764: 0x11e00013  beqz        $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x12D764u;
    {
        const bool branch_taken_0x12d764 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d764) {
            ctx->pc = 0x12D7B4u;
            goto label_12d7b4;
        }
    }
    ctx->pc = 0x12D76Cu;
    // 0x12d76c: 0x6800008  bltz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x12D76Cu;
    {
        const bool branch_taken_0x12d76c = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x12D770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D76Cu;
            // 0x12d770: 0x242782b  sltu        $t7, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d76c) {
            ctx->pc = 0x12D790u;
            goto label_12d790;
        }
    }
    ctx->pc = 0x12D774u;
    // 0x12d774: 0x55e00007  bnel        $t7, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x12D774u;
    {
        const bool branch_taken_0x12d774 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d774) {
            ctx->pc = 0x12D778u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12D774u;
            // 0x12d778: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12D794u;
            goto label_12d794;
        }
    }
    ctx->pc = 0x12D77Cu;
    // 0x12d77c: 0x14520008  bne         $v0, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x12D77Cu;
    {
        const bool branch_taken_0x12d77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x12D780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D77Cu;
            // 0x12d780: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d77c) {
            ctx->pc = 0x12D7A0u;
            goto label_12d7a0;
        }
    }
    ctx->pc = 0x12D784u;
    // 0x12d784: 0x3d0782a  slt         $t7, $fp, $s0
    ctx->pc = 0x12d784u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x12d788: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x12D788u;
    {
        const bool branch_taken_0x12d788 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d788) {
            ctx->pc = 0x12D7A0u;
            goto label_12d7a0;
        }
    }
    ctx->pc = 0x12D790u;
label_12d790:
    // 0x12d790: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x12d790u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12d794:
    // 0x12d794: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x12d794u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12d798: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x12D798u;
    {
        const bool branch_taken_0x12d798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D798u;
            // 0x12d79c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d798) {
            ctx->pc = 0x12D748u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d748;
        }
    }
    ctx->pc = 0x12D7A0u;
label_12d7a0:
    // 0x12d7a0: 0xc048ce6  jal         func_123398
    ctx->pc = 0x12D7A0u;
    SET_GPR_U32(ctx, 31, 0x12D7A8u);
    ctx->pc = 0x12D7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D7A0u;
            // 0x12d7a4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123398u;
    if (runtime->hasFunction(0x123398u)) {
        auto targetFn = runtime->lookupFunction(0x123398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D7A8u; }
        if (ctx->pc != 0x12D7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123398_0x123398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D7A8u; }
        if (ctx->pc != 0x12D7A8u) { return; }
    }
    ctx->pc = 0x12D7A8u;
label_12d7a8:
    // 0x12d7a8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x12d7a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d7ac: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x12D7ACu;
    {
        const bool branch_taken_0x12d7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D7ACu;
            // 0x12d7b0: 0x202102d  daddu       $v0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d7ac) {
            ctx->pc = 0x12D794u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d794;
        }
    }
    ctx->pc = 0x12D7B4u;
label_12d7b4:
    // 0x12d7b4: 0x681001c  bgez        $s4, . + 4 + (0x1C << 2)
    ctx->pc = 0x12D7B4u;
    {
        const bool branch_taken_0x12d7b4 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x12D7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D7B4u;
            // 0x12d7b8: 0x8fae0008  lw          $t6, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d7b4) {
            ctx->pc = 0x12D828u;
            goto label_12d828;
        }
    }
    ctx->pc = 0x12D7BCu;
    // 0x12d7bc: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x12d7bcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d7c0: 0x240f0022  addiu       $t7, $zero, 0x22
    ctx->pc = 0x12d7c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x12d7c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12d7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12d7c8: 0xadcf0000  sw          $t7, 0x0($t6)
    ctx->pc = 0x12d7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 15));
    // 0x12d7cc: 0x217fc  dsll32      $v0, $v0, 31
    ctx->pc = 0x12d7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 31));
    // 0x12d7d0: 0x240ffffe  addiu       $t7, $zero, -0x2
    ctx->pc = 0x12d7d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x12d7d4: 0x8fae0008  lw          $t6, 0x8($sp)
    ctx->pc = 0x12d7d4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12d7d8: 0xf787a  dsrl        $t7, $t7, 1
    ctx->pc = 0x12d7d8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 1);
    // 0x12d7dc: 0x1ee100a  movz        $v0, $t7, $t6
    ctx->pc = 0x12d7dcu;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 15));
label_12d7e0:
    // 0x12d7e0: 0x8faf0004  lw          $t7, 0x4($sp)
    ctx->pc = 0x12d7e0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12d7e4: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D7E4u;
    {
        const bool branch_taken_0x12d7e4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D7E4u;
            // 0x12d7e8: 0x262fffff  addiu       $t7, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d7e4) {
            ctx->pc = 0x12D7F8u;
            goto label_12d7f8;
        }
    }
    ctx->pc = 0x12D7ECu;
    // 0x12d7ec: 0x8fae0004  lw          $t6, 0x4($sp)
    ctx->pc = 0x12d7ecu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12d7f0: 0x1f4b80b  movn        $s7, $t7, $s4
    ctx->pc = 0x12d7f0u;
    if (GPR_U64(ctx, 20) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 15));
    // 0x12d7f4: 0xadd70000  sw          $s7, 0x0($t6)
    ctx->pc = 0x12d7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 23));
label_12d7f8:
    // 0x12d7f8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x12d7f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12d7fc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x12d7fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12d800: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12d800u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12d804: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x12d804u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12d808: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x12d808u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12d80c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x12d80cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12d810: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x12d810u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12d814: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x12d814u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12d818: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x12d818u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12d81c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x12d81cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x12d820: 0x3e00008  jr          $ra
    ctx->pc = 0x12D820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D820u;
            // 0x12d824: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12D828u;
label_12d828:
    // 0x12d828: 0x2782f  dsubu       $t7, $zero, $v0
    ctx->pc = 0x12d828u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x12d82c: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x12D82Cu;
    {
        const bool branch_taken_0x12d82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D82Cu;
            // 0x12d830: 0x1ee100b  movn        $v0, $t7, $t6 (Delay Slot)
        if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d82c) {
            ctx->pc = 0x12D7E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d7e0;
        }
    }
    ctx->pc = 0x12D834u;
label_12d834:
    // 0x12d834: 0x11e0ffdf  beqz        $t7, . + 4 + (-0x21 << 2)
    ctx->pc = 0x12D834u;
    {
        const bool branch_taken_0x12d834 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D834u;
            // 0x12d838: 0x260effa9  addiu       $t6, $s0, -0x57 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967209));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d834) {
            ctx->pc = 0x12D7B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d7b4;
        }
    }
    ctx->pc = 0x12D83Cu;
    // 0x12d83c: 0x260fffc9  addiu       $t7, $s0, -0x37
    ctx->pc = 0x12d83cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967241));
    // 0x12d840: 0x31ad0001  andi        $t5, $t5, 0x1
    ctx->pc = 0x12d840u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
    // 0x12d844: 0x1e0802d  daddu       $s0, $t7, $zero
    ctx->pc = 0x12d844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d848: 0x1000ffc5  b           . + 4 + (-0x3B << 2)
    ctx->pc = 0x12D848u;
    {
        const bool branch_taken_0x12d848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D848u;
            // 0x12d84c: 0x1cd800a  movz        $s0, $t6, $t5 (Delay Slot)
        if (GPR_U64(ctx, 13) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d848) {
            ctx->pc = 0x12D760u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d760;
        }
    }
    ctx->pc = 0x12D850u;
label_12d850:
    // 0x12d850: 0x160fff94  bne         $s0, $t7, . + 4 + (-0x6C << 2)
    ctx->pc = 0x12D850u;
    {
        const bool branch_taken_0x12d850 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 15));
        if (branch_taken_0x12d850) {
            ctx->pc = 0x12D6A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d6a4;
        }
    }
    ctx->pc = 0x12D858u;
    // 0x12d858: 0x1000ff91  b           . + 4 + (-0x6F << 2)
    ctx->pc = 0x12D858u;
    {
        const bool branch_taken_0x12d858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D858u;
            // 0x12d85c: 0x82300000  lb          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d858) {
            ctx->pc = 0x12D6A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d6a0;
        }
    }
    ctx->pc = 0x12D860u;
}
