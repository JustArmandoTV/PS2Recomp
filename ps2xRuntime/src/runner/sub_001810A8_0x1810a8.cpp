#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001810A8
// Address: 0x1810a8 - 0x1811b0
void sub_001810A8_0x1810a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001810A8_0x1810a8");
#endif

    switch (ctx->pc) {
        case 0x181158u: goto label_181158;
        case 0x181188u: goto label_181188;
        default: break;
    }

    ctx->pc = 0x1810a8u;

    // 0x1810a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1810a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1810ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1810acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1810b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1810b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1810b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1810b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1810b8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1810b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1810bc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1810bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1810c0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1810c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1810c4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1810c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1810c8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1810c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1810cc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1810ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1810d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1810d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1810d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1810d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1810d8: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1810d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1810dc: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1810DCu;
    {
        const bool branch_taken_0x1810dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1810E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1810DCu;
            // 0x1810e0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1810dc) {
            ctx->pc = 0x181188u;
            goto label_181188;
        }
    }
    ctx->pc = 0x1810E4u;
    // 0x1810e4: 0x82020003  lb          $v0, 0x3($s0)
    ctx->pc = 0x1810e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x1810e8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1810e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1810ec: 0x1451000a  bne         $v0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1810ECu;
    {
        const bool branch_taken_0x1810ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1810F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1810ECu;
            // 0x1810f0: 0x92070003  lbu         $a3, 0x3($s0) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1810ec) {
            ctx->pc = 0x181118u;
            goto label_181118;
        }
    }
    ctx->pc = 0x1810F4u;
    // 0x1810f4: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x1810f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1810f8: 0x61140  sll         $v0, $a2, 5
    ctx->pc = 0x1810f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x1810fc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1810fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x181100: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x181100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x181104: 0x8c550014  lw          $s5, 0x14($v0)
    ctx->pc = 0x181104u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x181108: 0x8c540010  lw          $s4, 0x10($v0)
    ctx->pc = 0x181108u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x18110c: 0x8c530004  lw          $s3, 0x4($v0)
    ctx->pc = 0x18110cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x181110: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x181110u;
    {
        const bool branch_taken_0x181110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181110u;
            // 0x181114: 0x8c52000c  lw          $s2, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181110) {
            ctx->pc = 0x18111Cu;
            goto label_18111c;
        }
    }
    ctx->pc = 0x181118u;
label_181118:
    // 0x181118: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x181118u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_18111c:
    // 0x18111c: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x18111cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x181120: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x181120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x181124: 0x28850000  slti        $a1, $a0, 0x0
    ctx->pc = 0x181124u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x181128: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x181128u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18112c: 0xc5100b  movn        $v0, $a2, $a1
    ctx->pc = 0x18112cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x181130: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x181130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x181134: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x181134u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x181138: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x181138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18113c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18113cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x181140: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x181140u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x181144: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x181144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x181148: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x181148u;
    {
        const bool branch_taken_0x181148 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x18114Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181148u;
            // 0x18114c: 0xae040020  sw          $a0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181148) {
            ctx->pc = 0x181160u;
            goto label_181160;
        }
    }
    ctx->pc = 0x181150u;
    // 0x181150: 0xc0602f0  jal         func_180BC0
    ctx->pc = 0x181150u;
    SET_GPR_U32(ctx, 31, 0x181158u);
    ctx->pc = 0x180BC0u;
    if (runtime->hasFunction(0x180BC0u)) {
        auto targetFn = runtime->lookupFunction(0x180BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181158u; }
        if (ctx->pc != 0x181158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180BC0_0x180bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181158u; }
        if (ctx->pc != 0x181158u) { return; }
    }
    ctx->pc = 0x181158u;
label_181158:
    // 0x181158: 0xa2110001  sb          $s1, 0x1($s0)
    ctx->pc = 0x181158u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 17));
    // 0x18115c: 0x92070003  lbu         $a3, 0x3($s0)
    ctx->pc = 0x18115cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_181160:
    // 0x181160: 0x71600  sll         $v0, $a3, 24
    ctx->pc = 0x181160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x181164: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x181164u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x181168: 0x54510008  bnel        $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x181168u;
    {
        const bool branch_taken_0x181168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x181168) {
            ctx->pc = 0x18116Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x181168u;
            // 0x18116c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18118Cu;
            goto label_18118c;
        }
    }
    ctx->pc = 0x181170u;
    // 0x181170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181174: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x181174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181178: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x181178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18117c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x18117cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181180: 0xc060054  jal         func_180150
    ctx->pc = 0x181180u;
    SET_GPR_U32(ctx, 31, 0x181188u);
    ctx->pc = 0x181184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181180u;
            // 0x181184: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180150u;
    if (runtime->hasFunction(0x180150u)) {
        auto targetFn = runtime->lookupFunction(0x180150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181188u; }
        if (ctx->pc != 0x181188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180150_0x180150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181188u; }
        if (ctx->pc != 0x181188u) { return; }
    }
    ctx->pc = 0x181188u;
label_181188:
    // 0x181188: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x181188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18118c:
    // 0x18118c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18118cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x181190: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x181190u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181194: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x181194u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x181198: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x181198u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18119c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x18119cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1811a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1811a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1811a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1811A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1811A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1811A4u;
            // 0x1811a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1811ACu;
    // 0x1811ac: 0x0  nop
    ctx->pc = 0x1811acu;
    // NOP
}
