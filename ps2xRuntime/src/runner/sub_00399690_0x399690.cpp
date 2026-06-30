#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00399690
// Address: 0x399690 - 0x399780
void sub_00399690_0x399690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399690_0x399690");
#endif

    switch (ctx->pc) {
        case 0x399690u: goto label_399690;
        case 0x399694u: goto label_399694;
        case 0x399698u: goto label_399698;
        case 0x39969cu: goto label_39969c;
        case 0x3996a0u: goto label_3996a0;
        case 0x3996a4u: goto label_3996a4;
        case 0x3996a8u: goto label_3996a8;
        case 0x3996acu: goto label_3996ac;
        case 0x3996b0u: goto label_3996b0;
        case 0x3996b4u: goto label_3996b4;
        case 0x3996b8u: goto label_3996b8;
        case 0x3996bcu: goto label_3996bc;
        case 0x3996c0u: goto label_3996c0;
        case 0x3996c4u: goto label_3996c4;
        case 0x3996c8u: goto label_3996c8;
        case 0x3996ccu: goto label_3996cc;
        case 0x3996d0u: goto label_3996d0;
        case 0x3996d4u: goto label_3996d4;
        case 0x3996d8u: goto label_3996d8;
        case 0x3996dcu: goto label_3996dc;
        case 0x3996e0u: goto label_3996e0;
        case 0x3996e4u: goto label_3996e4;
        case 0x3996e8u: goto label_3996e8;
        case 0x3996ecu: goto label_3996ec;
        case 0x3996f0u: goto label_3996f0;
        case 0x3996f4u: goto label_3996f4;
        case 0x3996f8u: goto label_3996f8;
        case 0x3996fcu: goto label_3996fc;
        case 0x399700u: goto label_399700;
        case 0x399704u: goto label_399704;
        case 0x399708u: goto label_399708;
        case 0x39970cu: goto label_39970c;
        case 0x399710u: goto label_399710;
        case 0x399714u: goto label_399714;
        case 0x399718u: goto label_399718;
        case 0x39971cu: goto label_39971c;
        case 0x399720u: goto label_399720;
        case 0x399724u: goto label_399724;
        case 0x399728u: goto label_399728;
        case 0x39972cu: goto label_39972c;
        case 0x399730u: goto label_399730;
        case 0x399734u: goto label_399734;
        case 0x399738u: goto label_399738;
        case 0x39973cu: goto label_39973c;
        case 0x399740u: goto label_399740;
        case 0x399744u: goto label_399744;
        case 0x399748u: goto label_399748;
        case 0x39974cu: goto label_39974c;
        case 0x399750u: goto label_399750;
        case 0x399754u: goto label_399754;
        case 0x399758u: goto label_399758;
        case 0x39975cu: goto label_39975c;
        case 0x399760u: goto label_399760;
        case 0x399764u: goto label_399764;
        case 0x399768u: goto label_399768;
        case 0x39976cu: goto label_39976c;
        case 0x399770u: goto label_399770;
        case 0x399774u: goto label_399774;
        case 0x399778u: goto label_399778;
        case 0x39977cu: goto label_39977c;
        default: break;
    }

    ctx->pc = 0x399690u;

label_399690:
    // 0x399690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x399690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_399694:
    // 0x399694: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x399694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_399698:
    // 0x399698: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x399698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39969c:
    // 0x39969c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39969cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3996a0:
    // 0x3996a0: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x3996a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_3996a4:
    // 0x3996a4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_3996a8:
    if (ctx->pc == 0x3996A8u) {
        ctx->pc = 0x3996A8u;
            // 0x3996a8: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->pc = 0x3996ACu;
        goto label_3996ac;
    }
    ctx->pc = 0x3996A4u;
    {
        const bool branch_taken_0x3996a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3996a4) {
            ctx->pc = 0x3996A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3996A4u;
            // 0x3996a8: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3996B8u;
            goto label_3996b8;
        }
    }
    ctx->pc = 0x3996ACu;
label_3996ac:
    // 0x3996ac: 0xc04008c  jal         func_100230
label_3996b0:
    if (ctx->pc == 0x3996B0u) {
        ctx->pc = 0x3996B4u;
        goto label_3996b4;
    }
    ctx->pc = 0x3996ACu;
    SET_GPR_U32(ctx, 31, 0x3996B4u);
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3996B4u; }
        if (ctx->pc != 0x3996B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3996B4u; }
        if (ctx->pc != 0x3996B4u) { return; }
    }
    ctx->pc = 0x3996B4u;
label_3996b4:
    // 0x3996b4: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x3996b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_3996b8:
    // 0x3996b8: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3996b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3996bc:
    // 0x3996bc: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3996c0:
    if (ctx->pc == 0x3996C0u) {
        ctx->pc = 0x3996C0u;
            // 0x3996c0: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->pc = 0x3996C4u;
        goto label_3996c4;
    }
    ctx->pc = 0x3996BCu;
    {
        const bool branch_taken_0x3996bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3996bc) {
            ctx->pc = 0x3996C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3996BCu;
            // 0x3996c0: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3996D4u;
            goto label_3996d4;
        }
    }
    ctx->pc = 0x3996C4u;
label_3996c4:
    // 0x3996c4: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x3996c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
label_3996c8:
    // 0x3996c8: 0xc0407c0  jal         func_101F00
label_3996cc:
    if (ctx->pc == 0x3996CCu) {
        ctx->pc = 0x3996CCu;
            // 0x3996cc: 0x24a596f0  addiu       $a1, $a1, -0x6910 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940400));
        ctx->pc = 0x3996D0u;
        goto label_3996d0;
    }
    ctx->pc = 0x3996C8u;
    SET_GPR_U32(ctx, 31, 0x3996D0u);
    ctx->pc = 0x3996CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3996C8u;
            // 0x3996cc: 0x24a596f0  addiu       $a1, $a1, -0x6910 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3996D0u; }
        if (ctx->pc != 0x3996D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3996D0u; }
        if (ctx->pc != 0x3996D0u) { return; }
    }
    ctx->pc = 0x3996D0u;
label_3996d0:
    // 0x3996d0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x3996d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_3996d4:
    // 0x3996d4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3996d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3996d8:
    // 0x3996d8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3996d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_3996dc:
    // 0x3996dc: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3996dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_3996e0:
    // 0x3996e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3996e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3996e4:
    // 0x3996e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3996e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3996e8:
    // 0x3996e8: 0x3e00008  jr          $ra
label_3996ec:
    if (ctx->pc == 0x3996ECu) {
        ctx->pc = 0x3996ECu;
            // 0x3996ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3996F0u;
        goto label_3996f0;
    }
    ctx->pc = 0x3996E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3996ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3996E8u;
            // 0x3996ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3996F0u;
label_3996f0:
    // 0x3996f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3996f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3996f4:
    // 0x3996f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3996f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3996f8:
    // 0x3996f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3996f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3996fc:
    // 0x3996fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3996fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_399700:
    // 0x399700: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x399700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_399704:
    // 0x399704: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_399708:
    if (ctx->pc == 0x399708u) {
        ctx->pc = 0x399708u;
            // 0x399708: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39970Cu;
        goto label_39970c;
    }
    ctx->pc = 0x399704u;
    {
        const bool branch_taken_0x399704 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x399708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x399704u;
            // 0x399708: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399704) {
            ctx->pc = 0x399768u;
            goto label_399768;
        }
    }
    ctx->pc = 0x39970Cu;
label_39970c:
    // 0x39970c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x39970cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_399710:
    // 0x399710: 0x24428260  addiu       $v0, $v0, -0x7DA0
    ctx->pc = 0x399710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935136));
label_399714:
    // 0x399714: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x399714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_399718:
    // 0x399718: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x399718u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39971c:
    // 0x39971c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x39971cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_399720:
    // 0x399720: 0x320f809  jalr        $t9
label_399724:
    if (ctx->pc == 0x399724u) {
        ctx->pc = 0x399728u;
        goto label_399728;
    }
    ctx->pc = 0x399720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x399728u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x399728u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x399728u; }
            if (ctx->pc != 0x399728u) { return; }
        }
        }
    }
    ctx->pc = 0x399728u;
label_399728:
    // 0x399728: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_39972c:
    if (ctx->pc == 0x39972Cu) {
        ctx->pc = 0x39972Cu;
            // 0x39972c: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x399730u;
        goto label_399730;
    }
    ctx->pc = 0x399728u;
    {
        const bool branch_taken_0x399728 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x399728) {
            ctx->pc = 0x39972Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x399728u;
            // 0x39972c: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x399754u;
            goto label_399754;
        }
    }
    ctx->pc = 0x399730u;
label_399730:
    // 0x399730: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x399730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_399734:
    // 0x399734: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x399734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_399738:
    // 0x399738: 0x24632e00  addiu       $v1, $v1, 0x2E00
    ctx->pc = 0x399738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11776));
label_39973c:
    // 0x39973c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_399740:
    if (ctx->pc == 0x399740u) {
        ctx->pc = 0x399740u;
            // 0x399740: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x399744u;
        goto label_399744;
    }
    ctx->pc = 0x39973Cu;
    {
        const bool branch_taken_0x39973c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x399740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39973Cu;
            // 0x399740: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39973c) {
            ctx->pc = 0x399750u;
            goto label_399750;
        }
    }
    ctx->pc = 0x399744u;
label_399744:
    // 0x399744: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x399744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_399748:
    // 0x399748: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x399748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
label_39974c:
    // 0x39974c: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x39974cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_399750:
    // 0x399750: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x399750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_399754:
    // 0x399754: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x399754u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_399758:
    // 0x399758: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_39975c:
    if (ctx->pc == 0x39975Cu) {
        ctx->pc = 0x39975Cu;
            // 0x39975c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x399760u;
        goto label_399760;
    }
    ctx->pc = 0x399758u;
    {
        const bool branch_taken_0x399758 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x399758) {
            ctx->pc = 0x39975Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x399758u;
            // 0x39975c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39976Cu;
            goto label_39976c;
        }
    }
    ctx->pc = 0x399760u;
label_399760:
    // 0x399760: 0xc0400a8  jal         func_1002A0
label_399764:
    if (ctx->pc == 0x399764u) {
        ctx->pc = 0x399764u;
            // 0x399764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x399768u;
        goto label_399768;
    }
    ctx->pc = 0x399760u;
    SET_GPR_U32(ctx, 31, 0x399768u);
    ctx->pc = 0x399764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x399760u;
            // 0x399764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399768u; }
        if (ctx->pc != 0x399768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x399768u; }
        if (ctx->pc != 0x399768u) { return; }
    }
    ctx->pc = 0x399768u;
label_399768:
    // 0x399768: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x399768u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39976c:
    // 0x39976c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39976cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_399770:
    // 0x399770: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x399770u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_399774:
    // 0x399774: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x399774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_399778:
    // 0x399778: 0x3e00008  jr          $ra
label_39977c:
    if (ctx->pc == 0x39977Cu) {
        ctx->pc = 0x39977Cu;
            // 0x39977c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x399780u;
        goto label_fallthrough_0x399778;
    }
    ctx->pc = 0x399778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39977Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x399778u;
            // 0x39977c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x399778:
    ctx->pc = 0x399780u;
}
