#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A1658
// Address: 0x1a1658 - 0x1a1708
void sub_001A1658_0x1a1658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1658_0x1a1658");
#endif

    switch (ctx->pc) {
        case 0x1a1658u: goto label_1a1658;
        case 0x1a165cu: goto label_1a165c;
        case 0x1a1660u: goto label_1a1660;
        case 0x1a1664u: goto label_1a1664;
        case 0x1a1668u: goto label_1a1668;
        case 0x1a166cu: goto label_1a166c;
        case 0x1a1670u: goto label_1a1670;
        case 0x1a1674u: goto label_1a1674;
        case 0x1a1678u: goto label_1a1678;
        case 0x1a167cu: goto label_1a167c;
        case 0x1a1680u: goto label_1a1680;
        case 0x1a1684u: goto label_1a1684;
        case 0x1a1688u: goto label_1a1688;
        case 0x1a168cu: goto label_1a168c;
        case 0x1a1690u: goto label_1a1690;
        case 0x1a1694u: goto label_1a1694;
        case 0x1a1698u: goto label_1a1698;
        case 0x1a169cu: goto label_1a169c;
        case 0x1a16a0u: goto label_1a16a0;
        case 0x1a16a4u: goto label_1a16a4;
        case 0x1a16a8u: goto label_1a16a8;
        case 0x1a16acu: goto label_1a16ac;
        case 0x1a16b0u: goto label_1a16b0;
        case 0x1a16b4u: goto label_1a16b4;
        case 0x1a16b8u: goto label_1a16b8;
        case 0x1a16bcu: goto label_1a16bc;
        case 0x1a16c0u: goto label_1a16c0;
        case 0x1a16c4u: goto label_1a16c4;
        case 0x1a16c8u: goto label_1a16c8;
        case 0x1a16ccu: goto label_1a16cc;
        case 0x1a16d0u: goto label_1a16d0;
        case 0x1a16d4u: goto label_1a16d4;
        case 0x1a16d8u: goto label_1a16d8;
        case 0x1a16dcu: goto label_1a16dc;
        case 0x1a16e0u: goto label_1a16e0;
        case 0x1a16e4u: goto label_1a16e4;
        case 0x1a16e8u: goto label_1a16e8;
        case 0x1a16ecu: goto label_1a16ec;
        case 0x1a16f0u: goto label_1a16f0;
        case 0x1a16f4u: goto label_1a16f4;
        case 0x1a16f8u: goto label_1a16f8;
        case 0x1a16fcu: goto label_1a16fc;
        case 0x1a1700u: goto label_1a1700;
        case 0x1a1704u: goto label_1a1704;
        default: break;
    }

    ctx->pc = 0x1a1658u;

label_1a1658:
    // 0x1a1658: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a1658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a165c:
    // 0x1a165c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a165cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a1660:
    // 0x1a1660: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a1660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a1664:
    // 0x1a1664: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a1664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1a1668:
    // 0x1a1668: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a1668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1a166c:
    // 0x1a166c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a166cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a1670:
    // 0x1a1670: 0xc0685d4  jal         func_1A1750
label_1a1674:
    if (ctx->pc == 0x1A1674u) {
        ctx->pc = 0x1A1674u;
            // 0x1a1674: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A1678u;
        goto label_1a1678;
    }
    ctx->pc = 0x1A1670u;
    SET_GPR_U32(ctx, 31, 0x1A1678u);
    ctx->pc = 0x1A1674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1670u;
            // 0x1a1674: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1750u;
    if (runtime->hasFunction(0x1A1750u)) {
        auto targetFn = runtime->lookupFunction(0x1A1750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1678u; }
        if (ctx->pc != 0x1A1678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1750_0x1a1750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1678u; }
        if (ctx->pc != 0x1A1678u) { return; }
    }
    ctx->pc = 0x1A1678u;
label_1a1678:
    // 0x1a1678: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a1678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a167c:
    // 0x1a167c: 0x5443001b  bnel        $v0, $v1, . + 4 + (0x1B << 2)
label_1a1680:
    if (ctx->pc == 0x1A1680u) {
        ctx->pc = 0x1A1680u;
            // 0x1a1680: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1A1684u;
        goto label_1a1684;
    }
    ctx->pc = 0x1A167Cu;
    {
        const bool branch_taken_0x1a167c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a167c) {
            ctx->pc = 0x1A1680u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A167Cu;
            // 0x1a1680: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A16ECu;
            goto label_1a16ec;
        }
    }
    ctx->pc = 0x1A1684u;
label_1a1684:
    // 0x1a1684: 0x8e110020  lw          $s1, 0x20($s0)
    ctx->pc = 0x1a1684u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a1688:
    // 0x1a1688: 0x8e130004  lw          $s3, 0x4($s0)
    ctx->pc = 0x1a1688u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a168c:
    // 0x1a168c: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
label_1a1690:
    if (ctx->pc == 0x1A1690u) {
        ctx->pc = 0x1A1690u;
            // 0x1a1690: 0x8e120014  lw          $s2, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x1A1694u;
        goto label_1a1694;
    }
    ctx->pc = 0x1A168Cu;
    {
        const bool branch_taken_0x1a168c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A168Cu;
            // 0x1a1690: 0x8e120014  lw          $s2, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a168c) {
            ctx->pc = 0x1A16E8u;
            goto label_1a16e8;
        }
    }
    ctx->pc = 0x1A1694u;
label_1a1694:
    // 0x1a1694: 0xc0686ec  jal         func_1A1BB0
label_1a1698:
    if (ctx->pc == 0x1A1698u) {
        ctx->pc = 0x1A169Cu;
        goto label_1a169c;
    }
    ctx->pc = 0x1A1694u;
    SET_GPR_U32(ctx, 31, 0x1A169Cu);
    ctx->pc = 0x1A1BB0u;
    if (runtime->hasFunction(0x1A1BB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A1BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A169Cu; }
        if (ctx->pc != 0x1A169Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1BB0_0x1a1bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A169Cu; }
        if (ctx->pc != 0x1A169Cu) { return; }
    }
    ctx->pc = 0x1A169Cu;
label_1a169c:
    // 0x1a169c: 0xc068488  jal         func_1A1220
label_1a16a0:
    if (ctx->pc == 0x1A16A0u) {
        ctx->pc = 0x1A16A0u;
            // 0x1a16a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A16A4u;
        goto label_1a16a4;
    }
    ctx->pc = 0x1A169Cu;
    SET_GPR_U32(ctx, 31, 0x1A16A4u);
    ctx->pc = 0x1A16A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A169Cu;
            // 0x1a16a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1220u;
    if (runtime->hasFunction(0x1A1220u)) {
        auto targetFn = runtime->lookupFunction(0x1A1220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A16A4u; }
        if (ctx->pc != 0x1A16A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1220_0x1a1220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A16A4u; }
        if (ctx->pc != 0x1A16A4u) { return; }
    }
    ctx->pc = 0x1A16A4u;
label_1a16a4:
    // 0x1a16a4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1a16a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1a16a8:
    // 0x1a16a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a16a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a16ac:
    // 0x1a16ac: 0xc068460  jal         func_1A1180
label_1a16b0:
    if (ctx->pc == 0x1A16B0u) {
        ctx->pc = 0x1A16B0u;
            // 0x1a16b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A16B4u;
        goto label_1a16b4;
    }
    ctx->pc = 0x1A16ACu;
    SET_GPR_U32(ctx, 31, 0x1A16B4u);
    ctx->pc = 0x1A16B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A16ACu;
            // 0x1a16b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1180u;
    if (runtime->hasFunction(0x1A1180u)) {
        auto targetFn = runtime->lookupFunction(0x1A1180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A16B4u; }
        if (ctx->pc != 0x1A16B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1180_0x1a1180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A16B4u; }
        if (ctx->pc != 0x1A16B4u) { return; }
    }
    ctx->pc = 0x1A16B4u;
label_1a16b4:
    // 0x1a16b4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1a16b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a16b8:
    // 0x1a16b8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1a16b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1a16bc:
    // 0x1a16bc: 0x40f809  jalr        $v0
label_1a16c0:
    if (ctx->pc == 0x1A16C0u) {
        ctx->pc = 0x1A16C0u;
            // 0x1a16c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A16C4u;
        goto label_1a16c4;
    }
    ctx->pc = 0x1A16BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A16C4u);
        ctx->pc = 0x1A16C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A16BCu;
            // 0x1a16c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A16C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A16C4u; }
            if (ctx->pc != 0x1A16C4u) { return; }
        }
        }
    }
    ctx->pc = 0x1A16C4u;
label_1a16c4:
    // 0x1a16c4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1a16c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_1a16c8:
    // 0x1a16c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a16c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a16cc:
    // 0x1a16cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a16ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a16d0:
    // 0x1a16d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a16d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a16d4:
    // 0x1a16d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a16d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a16d8:
    // 0x1a16d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a16d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a16dc:
    // 0x1a16dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a16dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a16e0:
    // 0x1a16e0: 0x8068414  j           func_1A1050
label_1a16e4:
    if (ctx->pc == 0x1A16E4u) {
        ctx->pc = 0x1A16E4u;
            // 0x1a16e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1A16E8u;
        goto label_1a16e8;
    }
    ctx->pc = 0x1A16E0u;
    ctx->pc = 0x1A16E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A16E0u;
            // 0x1a16e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1050u;
    {
        auto targetFn = runtime->lookupFunction(0x1A1050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1A16E8u;
label_1a16e8:
    // 0x1a16e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a16e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a16ec:
    // 0x1a16ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a16ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a16f0:
    // 0x1a16f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a16f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a16f4:
    // 0x1a16f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a16f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a16f8:
    // 0x1a16f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a16f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a16fc:
    // 0x1a16fc: 0x3e00008  jr          $ra
label_1a1700:
    if (ctx->pc == 0x1A1700u) {
        ctx->pc = 0x1A1700u;
            // 0x1a1700: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1A1704u;
        goto label_1a1704;
    }
    ctx->pc = 0x1A16FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A16FCu;
            // 0x1a1700: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A1704u;
label_1a1704:
    // 0x1a1704: 0x0  nop
    ctx->pc = 0x1a1704u;
    // NOP
}
