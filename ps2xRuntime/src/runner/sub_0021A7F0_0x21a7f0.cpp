#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021A7F0
// Address: 0x21a7f0 - 0x21a940
void sub_0021A7F0_0x21a7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021A7F0_0x21a7f0");
#endif

    switch (ctx->pc) {
        case 0x21a82cu: goto label_21a82c;
        case 0x21a88cu: goto label_21a88c;
        case 0x21a8e8u: goto label_21a8e8;
        default: break;
    }

    ctx->pc = 0x21a7f0u;

    // 0x21a7f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21a7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21a7f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21a7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21a7f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21a7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21a7fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21a7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21a800: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21a800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a804: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x21A804u;
    {
        const bool branch_taken_0x21a804 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A804u;
            // 0x21a808: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a804) {
            ctx->pc = 0x21A88Cu;
            goto label_21a88c;
        }
    }
    ctx->pc = 0x21A80Cu;
    // 0x21a80c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21a80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21a810: 0x2442e680  addiu       $v0, $v0, -0x1980
    ctx->pc = 0x21a810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960768));
    // 0x21a814: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x21a814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x21a818: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x21a818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x21a81c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A81Cu;
    {
        const bool branch_taken_0x21a81c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a81c) {
            ctx->pc = 0x21A830u;
            goto label_21a830;
        }
    }
    ctx->pc = 0x21A824u;
    // 0x21a824: 0xc08d414  jal         func_235050
    ctx->pc = 0x21A824u;
    SET_GPR_U32(ctx, 31, 0x21A82Cu);
    ctx->pc = 0x235050u;
    if (runtime->hasFunction(0x235050u)) {
        auto targetFn = runtime->lookupFunction(0x235050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A82Cu; }
        if (ctx->pc != 0x21A82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235050_0x235050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A82Cu; }
        if (ctx->pc != 0x21A82Cu) { return; }
    }
    ctx->pc = 0x21A82Cu;
label_21a82c:
    // 0x21a82c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x21a82cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_21a830:
    // 0x21a830: 0x5200000d  beql        $s0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x21A830u;
    {
        const bool branch_taken_0x21a830 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a830) {
            ctx->pc = 0x21A834u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21A830u;
            // 0x21a834: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21A868u;
            goto label_21a868;
        }
    }
    ctx->pc = 0x21A838u;
    // 0x21a838: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21a838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21a83c: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x21a83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x21a840: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21A840u;
    {
        const bool branch_taken_0x21a840 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A840u;
            // 0x21a844: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a840) {
            ctx->pc = 0x21A864u;
            goto label_21a864;
        }
    }
    ctx->pc = 0x21A848u;
    // 0x21a848: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21a848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21a84c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x21a84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x21a850: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A850u;
    {
        const bool branch_taken_0x21a850 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A850u;
            // 0x21a854: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a850) {
            ctx->pc = 0x21A864u;
            goto label_21a864;
        }
    }
    ctx->pc = 0x21A858u;
    // 0x21a858: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21a858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21a85c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x21a85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x21a860: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x21a860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_21a864:
    // 0x21a864: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x21a864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_21a868:
    // 0x21a868: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x21a868u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x21a86c: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21A86Cu;
    {
        const bool branch_taken_0x21a86c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x21a86c) {
            ctx->pc = 0x21A870u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21A86Cu;
            // 0x21a870: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21A890u;
            goto label_21a890;
        }
    }
    ctx->pc = 0x21A874u;
    // 0x21a874: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x21a874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x21a878: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x21a878u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21a87c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x21a87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x21a880: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21a880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a884: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x21A884u;
    SET_GPR_U32(ctx, 31, 0x21A88Cu);
    ctx->pc = 0x21A888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A884u;
            // 0x21a888: 0x24070027  addiu       $a3, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A88Cu; }
        if (ctx->pc != 0x21A88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A88Cu; }
        if (ctx->pc != 0x21A88Cu) { return; }
    }
    ctx->pc = 0x21A88Cu;
label_21a88c:
    // 0x21a88c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21a88cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21a890:
    // 0x21a890: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21a890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21a894: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21a894u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a898: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21a898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a89c: 0x3e00008  jr          $ra
    ctx->pc = 0x21A89Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A8A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A89Cu;
            // 0x21a8a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21A8A4u;
    // 0x21a8a4: 0x0  nop
    ctx->pc = 0x21a8a4u;
    // NOP
    // 0x21a8a8: 0x0  nop
    ctx->pc = 0x21a8a8u;
    // NOP
    // 0x21a8ac: 0x0  nop
    ctx->pc = 0x21a8acu;
    // NOP
    // 0x21a8b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21a8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21a8b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21a8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21a8b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21a8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21a8bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21a8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21a8c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21a8c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a8c4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x21a8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x21a8c8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x21a8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x21a8cc: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x21a8ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x21a8d0: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x21a8d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x21a8d4: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A8D4u;
    {
        const bool branch_taken_0x21a8d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x21A8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A8D4u;
            // 0x21a8d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a8d4) {
            ctx->pc = 0x21A8E8u;
            goto label_21a8e8;
        }
    }
    ctx->pc = 0x21A8DCu;
    // 0x21a8dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21a8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a8e0: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x21A8E0u;
    SET_GPR_U32(ctx, 31, 0x21A8E8u);
    ctx->pc = 0x21A8E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A8E0u;
            // 0x21a8e4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A8E8u; }
        if (ctx->pc != 0x21A8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A8E8u; }
        if (ctx->pc != 0x21A8E8u) { return; }
    }
    ctx->pc = 0x21A8E8u;
label_21a8e8:
    // 0x21a8e8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x21a8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21a8ec: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x21a8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x21a8f0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x21a8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x21a8f4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x21a8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x21a8f8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x21a8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21a8fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x21a8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21a900: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21a900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21a904: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x21a904u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x21a908: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21a908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21a90c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21a90cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a910: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21a910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a914: 0x3e00008  jr          $ra
    ctx->pc = 0x21A914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A914u;
            // 0x21a918: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21A91Cu;
    // 0x21a91c: 0x0  nop
    ctx->pc = 0x21a91cu;
    // NOP
    // 0x21a920: 0x3e00008  jr          $ra
    ctx->pc = 0x21A920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A920u;
            // 0x21a924: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21A928u;
    // 0x21a928: 0x0  nop
    ctx->pc = 0x21a928u;
    // NOP
    // 0x21a92c: 0x0  nop
    ctx->pc = 0x21a92cu;
    // NOP
    // 0x21a930: 0x3e00008  jr          $ra
    ctx->pc = 0x21A930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21A938u;
    // 0x21a938: 0x0  nop
    ctx->pc = 0x21a938u;
    // NOP
    // 0x21a93c: 0x0  nop
    ctx->pc = 0x21a93cu;
    // NOP
}
