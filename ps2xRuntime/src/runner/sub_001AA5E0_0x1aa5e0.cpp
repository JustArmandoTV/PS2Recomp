#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AA5E0
// Address: 0x1aa5e0 - 0x1aa698
void sub_001AA5E0_0x1aa5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA5E0_0x1aa5e0");
#endif

    switch (ctx->pc) {
        case 0x1aa608u: goto label_1aa608;
        case 0x1aa62cu: goto label_1aa62c;
        case 0x1aa67cu: goto label_1aa67c;
        default: break;
    }

    ctx->pc = 0x1aa5e0u;

    // 0x1aa5e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1aa5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1aa5e4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1aa5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1aa5e8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1aa5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1aa5ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1aa5ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa5f0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1aa5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1aa5f4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1aa5f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa5f8: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1aa5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1aa5fc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1aa5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1aa600: 0xc06aaa8  jal         func_1AAAA0
    ctx->pc = 0x1AA600u;
    SET_GPR_U32(ctx, 31, 0x1AA608u);
    ctx->pc = 0x1AA604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA600u;
            // 0x1aa604: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AAAA0u;
    if (runtime->hasFunction(0x1AAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x1AAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA608u; }
        if (ctx->pc != 0x1AA608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AAAA0_0x1aaaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA608u; }
        if (ctx->pc != 0x1AA608u) { return; }
    }
    ctx->pc = 0x1AA608u;
label_1aa608:
    // 0x1aa608: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1aa608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa60c: 0x5200001c  beql        $s0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x1AA60Cu;
    {
        const bool branch_taken_0x1aa60c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa60c) {
            ctx->pc = 0x1AA610u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA60Cu;
            // 0x1aa610: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA680u;
            goto label_1aa680;
        }
    }
    ctx->pc = 0x1AA614u;
    // 0x1aa614: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1aa614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1aa618: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1AA618u;
    {
        const bool branch_taken_0x1aa618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa618) {
            ctx->pc = 0x1AA61Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA618u;
            // 0x1aa61c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA680u;
            goto label_1aa680;
        }
    }
    ctx->pc = 0x1AA620u;
    // 0x1aa620: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aa620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa624: 0xc0649c0  jal         func_192700
    ctx->pc = 0x1AA624u;
    SET_GPR_U32(ctx, 31, 0x1AA62Cu);
    ctx->pc = 0x1AA628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA624u;
            // 0x1aa628: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192700u;
    if (runtime->hasFunction(0x192700u)) {
        auto targetFn = runtime->lookupFunction(0x192700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA62Cu; }
        if (ctx->pc != 0x1AA62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192700_0x192700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA62Cu; }
        if (ctx->pc != 0x1AA62Cu) { return; }
    }
    ctx->pc = 0x1AA62Cu;
label_1aa62c:
    // 0x1aa62c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1aa62cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa630: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1aa630u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa634: 0x240200b0  addiu       $v0, $zero, 0xB0
    ctx->pc = 0x1aa634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x1aa638: 0x28e300b1  slti        $v1, $a3, 0xB1
    ctx->pc = 0x1aa638u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)177) ? 1 : 0);
    // 0x1aa63c: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x1aa63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1aa640: 0x43380a  movz        $a3, $v0, $v1
    ctx->pc = 0x1aa640u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x1aa644: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x1aa644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1aa648: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1aa648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa64c: 0x18800004  blez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AA64Cu;
    {
        const bool branch_taken_0x1aa64c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1AA650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA64Cu;
            // 0x1aa650: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa64c) {
            ctx->pc = 0x1AA660u;
            goto label_1aa660;
        }
    }
    ctx->pc = 0x1AA654u;
    // 0x1aa654: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1AA654u;
    {
        const bool branch_taken_0x1aa654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA654u;
            // 0x1aa658: 0xac670160  sw          $a3, 0x160($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 352), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa654) {
            ctx->pc = 0x1AA674u;
            goto label_1aa674;
        }
    }
    ctx->pc = 0x1AA65Cu;
    // 0x1aa65c: 0x0  nop
    ctx->pc = 0x1aa65cu;
    // NOP
label_1aa660:
    // 0x1aa660: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1aa660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aa664: 0x58400006  blezl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AA664u;
    {
        const bool branch_taken_0x1aa664 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1aa664) {
            ctx->pc = 0x1AA668u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA664u;
            // 0x1aa668: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA680u;
            goto label_1aa680;
        }
    }
    ctx->pc = 0x1AA66Cu;
    // 0x1aa66c: 0xac670164  sw          $a3, 0x164($v1)
    ctx->pc = 0x1aa66cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 356), GPR_U32(ctx, 7));
    // 0x1aa670: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x1aa670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_1aa674:
    // 0x1aa674: 0xc064080  jal         func_190200
    ctx->pc = 0x1AA674u;
    SET_GPR_U32(ctx, 31, 0x1AA67Cu);
    ctx->pc = 0x1AA678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA674u;
            // 0x1aa678: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190200u;
    if (runtime->hasFunction(0x190200u)) {
        auto targetFn = runtime->lookupFunction(0x190200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA67Cu; }
        if (ctx->pc != 0x1AA67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00190200_0x190200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA67Cu; }
        if (ctx->pc != 0x1AA67Cu) { return; }
    }
    ctx->pc = 0x1AA67Cu;
label_1aa67c:
    // 0x1aa67c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1aa67cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1aa680:
    // 0x1aa680: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1aa680u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1aa684: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1aa684u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aa688: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1aa688u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1aa68c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1aa68cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1aa690: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA690u;
            // 0x1aa694: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AA698u;
}
