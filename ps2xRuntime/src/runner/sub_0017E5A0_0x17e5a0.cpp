#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017E5A0
// Address: 0x17e5a0 - 0x17e6f8
void sub_0017E5A0_0x17e5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E5A0_0x17e5a0");
#endif

    switch (ctx->pc) {
        case 0x17e5c4u: goto label_17e5c4;
        case 0x17e5d8u: goto label_17e5d8;
        case 0x17e5ecu: goto label_17e5ec;
        case 0x17e654u: goto label_17e654;
        case 0x17e674u: goto label_17e674;
        case 0x17e67cu: goto label_17e67c;
        case 0x17e688u: goto label_17e688;
        case 0x17e694u: goto label_17e694;
        case 0x17e6a8u: goto label_17e6a8;
        case 0x17e6b0u: goto label_17e6b0;
        case 0x17e6b8u: goto label_17e6b8;
        case 0x17e6e0u: goto label_17e6e0;
        default: break;
    }

    ctx->pc = 0x17e5a0u;

    // 0x17e5a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17e5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17e5a4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17e5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17e5a8: 0x3c13005e  lui         $s3, 0x5E
    ctx->pc = 0x17e5a8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)94 << 16));
    // 0x17e5ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17e5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17e5b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17e5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17e5b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17e5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17e5b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17e5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17e5bc: 0xc06229a  jal         func_188A68
    ctx->pc = 0x17E5BCu;
    SET_GPR_U32(ctx, 31, 0x17E5C4u);
    ctx->pc = 0x17E5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E5BCu;
            // 0x17e5c0: 0x266466f4  addiu       $a0, $s3, 0x66F4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 26356));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188A68u;
    if (runtime->hasFunction(0x188A68u)) {
        auto targetFn = runtime->lookupFunction(0x188A68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E5C4u; }
        if (ctx->pc != 0x17E5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188A68_0x188a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E5C4u; }
        if (ctx->pc != 0x17E5C4u) { return; }
    }
    ctx->pc = 0x17E5C4u;
label_17e5c4:
    // 0x17e5c4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x17E5C4u;
    {
        const bool branch_taken_0x17e5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E5C4u;
            // 0x17e5c8: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e5c4) {
            ctx->pc = 0x17E5FCu;
            goto label_17e5fc;
        }
    }
    ctx->pc = 0x17E5CCu;
    // 0x17e5cc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x17e5ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e5d0: 0x24506760  addiu       $s0, $v0, 0x6760
    ctx->pc = 0x17e5d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 26464));
    // 0x17e5d4: 0x2411000c  addiu       $s1, $zero, 0xC
    ctx->pc = 0x17e5d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_17e5d8:
    // 0x17e5d8: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x17e5d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17e5dc: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x17E5DCu;
    {
        const bool branch_taken_0x17e5dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x17e5dc) {
            ctx->pc = 0x17E5E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17E5DCu;
            // 0x17e5e0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17E5F0u;
            goto label_17e5f0;
        }
    }
    ctx->pc = 0x17E5E4u;
    // 0x17e5e4: 0xc05f936  jal         func_17E4D8
    ctx->pc = 0x17E5E4u;
    SET_GPR_U32(ctx, 31, 0x17E5ECu);
    ctx->pc = 0x17E5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E5E4u;
            // 0x17e5e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E4D8u;
    if (runtime->hasFunction(0x17E4D8u)) {
        auto targetFn = runtime->lookupFunction(0x17E4D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E5ECu; }
        if (ctx->pc != 0x17E5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E4D8_0x17e4d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E5ECu; }
        if (ctx->pc != 0x17E5ECu) { return; }
    }
    ctx->pc = 0x17E5ECu;
label_17e5ec:
    // 0x17e5ec: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x17e5ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_17e5f0:
    // 0x17e5f0: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x17E5F0u;
    {
        const bool branch_taken_0x17e5f0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x17E5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E5F0u;
            // 0x17e5f4: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e5f0) {
            ctx->pc = 0x17E5D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17e5d8;
        }
    }
    ctx->pc = 0x17E5F8u;
    // 0x17e5f8: 0xae6066f4  sw          $zero, 0x66F4($s3)
    ctx->pc = 0x17e5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 26356), GPR_U32(ctx, 0));
label_17e5fc:
    // 0x17e5fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17e5fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e600: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17e600u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17e604: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17e604u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e608: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17e608u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17e60c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17e60cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e610: 0x3e00008  jr          $ra
    ctx->pc = 0x17E610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E610u;
            // 0x17e614: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E618u;
    // 0x17e618: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17e618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17e61c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17e61cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17e620: 0xac4466ec  sw          $a0, 0x66EC($v0)
    ctx->pc = 0x17e620u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 26348), GPR_U32(ctx, 4));
    // 0x17e624: 0x3e00008  jr          $ra
    ctx->pc = 0x17E624u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E624u;
            // 0x17e628: 0xac6566f0  sw          $a1, 0x66F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 26352), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E62Cu;
    // 0x17e62c: 0x0  nop
    ctx->pc = 0x17e62cu;
    // NOP
    // 0x17e630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17e630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17e634: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17e634u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e638: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17e638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17e63c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17e63cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e640: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x17e640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x17e644: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x17E644u;
    {
        const bool branch_taken_0x17e644 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E644u;
            // 0x17e648: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e644) {
            ctx->pc = 0x17E6BCu;
            goto label_17e6bc;
        }
    }
    ctx->pc = 0x17E64Cu;
    // 0x17e64c: 0xc05fed0  jal         func_17FB40
    ctx->pc = 0x17E64Cu;
    SET_GPR_U32(ctx, 31, 0x17E654u);
    ctx->pc = 0x17E650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E64Cu;
            // 0x17e650: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17FB40u;
    if (runtime->hasFunction(0x17FB40u)) {
        auto targetFn = runtime->lookupFunction(0x17FB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E654u; }
        if (ctx->pc != 0x17E654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017FB40_0x17fb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E654u; }
        if (ctx->pc != 0x17E654u) { return; }
    }
    ctx->pc = 0x17E654u;
label_17e654:
    // 0x17e654: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17e654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17e658: 0x245169d0  addiu       $s1, $v0, 0x69D0
    ctx->pc = 0x17e658u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 27088));
    // 0x17e65c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x17e65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x17e660: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17e660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e664: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x17E664u;
    {
        const bool branch_taken_0x17e664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E664u;
            // 0x17e668: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e664) {
            ctx->pc = 0x17E6B8u;
            goto label_17e6b8;
        }
    }
    ctx->pc = 0x17E66Cu;
    // 0x17e66c: 0xc05fc92  jal         func_17F248
    ctx->pc = 0x17E66Cu;
    SET_GPR_U32(ctx, 31, 0x17E674u);
    ctx->pc = 0x17F248u;
    if (runtime->hasFunction(0x17F248u)) {
        auto targetFn = runtime->lookupFunction(0x17F248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E674u; }
        if (ctx->pc != 0x17E674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F248_0x17f248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E674u; }
        if (ctx->pc != 0x17E674u) { return; }
    }
    ctx->pc = 0x17E674u;
label_17e674:
    // 0x17e674: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17E674u;
    SET_GPR_U32(ctx, 31, 0x17E67Cu);
    ctx->pc = 0x17E678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E674u;
            // 0x17e678: 0x24044200  addiu       $a0, $zero, 0x4200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E67Cu; }
        if (ctx->pc != 0x17E67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E67Cu; }
        if (ctx->pc != 0x17E67Cu) { return; }
    }
    ctx->pc = 0x17E67Cu;
label_17e67c:
    // 0x17e67c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17e67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e680: 0xc05edfe  jal         func_17B7F8
    ctx->pc = 0x17E680u;
    SET_GPR_U32(ctx, 31, 0x17E688u);
    ctx->pc = 0x17E684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E680u;
            // 0x17e684: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B7F8u;
    if (runtime->hasFunction(0x17B7F8u)) {
        auto targetFn = runtime->lookupFunction(0x17B7F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E688u; }
        if (ctx->pc != 0x17E688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B7F8_0x17b7f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E688u; }
        if (ctx->pc != 0x17E688u) { return; }
    }
    ctx->pc = 0x17E688u;
label_17e688:
    // 0x17e688: 0x24044201  addiu       $a0, $zero, 0x4201
    ctx->pc = 0x17e688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16897));
    // 0x17e68c: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17E68Cu;
    SET_GPR_U32(ctx, 31, 0x17E694u);
    ctx->pc = 0x17E690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E68Cu;
            // 0x17e690: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E694u; }
        if (ctx->pc != 0x17E694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E694u; }
        if (ctx->pc != 0x17E694u) { return; }
    }
    ctx->pc = 0x17E694u;
label_17e694:
    // 0x17e694: 0x24044300  addiu       $a0, $zero, 0x4300
    ctx->pc = 0x17e694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17152));
    // 0x17e698: 0x6000008  bltz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17E698u;
    {
        const bool branch_taken_0x17e698 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x17E69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E698u;
            // 0x17e69c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e698) {
            ctx->pc = 0x17E6BCu;
            goto label_17e6bc;
        }
    }
    ctx->pc = 0x17E6A0u;
    // 0x17e6a0: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17E6A0u;
    SET_GPR_U32(ctx, 31, 0x17E6A8u);
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E6A8u; }
        if (ctx->pc != 0x17E6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E6A8u; }
        if (ctx->pc != 0x17E6A8u) { return; }
    }
    ctx->pc = 0x17E6A8u;
label_17e6a8:
    // 0x17e6a8: 0xc05ee18  jal         func_17B860
    ctx->pc = 0x17E6A8u;
    SET_GPR_U32(ctx, 31, 0x17E6B0u);
    ctx->pc = 0x17E6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E6A8u;
            // 0x17e6ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B860u;
    if (runtime->hasFunction(0x17B860u)) {
        auto targetFn = runtime->lookupFunction(0x17B860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E6B0u; }
        if (ctx->pc != 0x17E6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B860_0x17b860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E6B0u; }
        if (ctx->pc != 0x17E6B0u) { return; }
    }
    ctx->pc = 0x17E6B0u;
label_17e6b0:
    // 0x17e6b0: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17E6B0u;
    SET_GPR_U32(ctx, 31, 0x17E6B8u);
    ctx->pc = 0x17E6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E6B0u;
            // 0x17e6b4: 0x24044301  addiu       $a0, $zero, 0x4301 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17153));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E6B8u; }
        if (ctx->pc != 0x17E6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E6B8u; }
        if (ctx->pc != 0x17E6B8u) { return; }
    }
    ctx->pc = 0x17E6B8u;
label_17e6b8:
    // 0x17e6b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17e6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17e6bc:
    // 0x17e6bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17e6bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e6c0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x17e6c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17e6c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17e6c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e6c8: 0x3e00008  jr          $ra
    ctx->pc = 0x17E6C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E6C8u;
            // 0x17e6cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E6D0u;
    // 0x17e6d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17e6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17e6d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17e6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17e6d8: 0xc05f9be  jal         func_17E6F8
    ctx->pc = 0x17E6D8u;
    SET_GPR_U32(ctx, 31, 0x17E6E0u);
    ctx->pc = 0x17E6F8u;
    if (runtime->hasFunction(0x17E6F8u)) {
        auto targetFn = runtime->lookupFunction(0x17E6F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E6E0u; }
        if (ctx->pc != 0x17E6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E6F8_0x17e6f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E6E0u; }
        if (ctx->pc != 0x17E6E0u) { return; }
    }
    ctx->pc = 0x17E6E0u;
label_17e6e0:
    // 0x17e6e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e6e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e6e4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x17e6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17e6e8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x17e6e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x17e6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x17E6ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E6ECu;
            // 0x17e6f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E6F4u;
    // 0x17e6f4: 0x0  nop
    ctx->pc = 0x17e6f4u;
    // NOP
}
