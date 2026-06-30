#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00225680
// Address: 0x225680 - 0x225790
void sub_00225680_0x225680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225680_0x225680");
#endif

    switch (ctx->pc) {
        case 0x225680u: goto label_225680;
        case 0x225684u: goto label_225684;
        case 0x225688u: goto label_225688;
        case 0x22568cu: goto label_22568c;
        case 0x225690u: goto label_225690;
        case 0x225694u: goto label_225694;
        case 0x225698u: goto label_225698;
        case 0x22569cu: goto label_22569c;
        case 0x2256a0u: goto label_2256a0;
        case 0x2256a4u: goto label_2256a4;
        case 0x2256a8u: goto label_2256a8;
        case 0x2256acu: goto label_2256ac;
        case 0x2256b0u: goto label_2256b0;
        case 0x2256b4u: goto label_2256b4;
        case 0x2256b8u: goto label_2256b8;
        case 0x2256bcu: goto label_2256bc;
        case 0x2256c0u: goto label_2256c0;
        case 0x2256c4u: goto label_2256c4;
        case 0x2256c8u: goto label_2256c8;
        case 0x2256ccu: goto label_2256cc;
        case 0x2256d0u: goto label_2256d0;
        case 0x2256d4u: goto label_2256d4;
        case 0x2256d8u: goto label_2256d8;
        case 0x2256dcu: goto label_2256dc;
        case 0x2256e0u: goto label_2256e0;
        case 0x2256e4u: goto label_2256e4;
        case 0x2256e8u: goto label_2256e8;
        case 0x2256ecu: goto label_2256ec;
        case 0x2256f0u: goto label_2256f0;
        case 0x2256f4u: goto label_2256f4;
        case 0x2256f8u: goto label_2256f8;
        case 0x2256fcu: goto label_2256fc;
        case 0x225700u: goto label_225700;
        case 0x225704u: goto label_225704;
        case 0x225708u: goto label_225708;
        case 0x22570cu: goto label_22570c;
        case 0x225710u: goto label_225710;
        case 0x225714u: goto label_225714;
        case 0x225718u: goto label_225718;
        case 0x22571cu: goto label_22571c;
        case 0x225720u: goto label_225720;
        case 0x225724u: goto label_225724;
        case 0x225728u: goto label_225728;
        case 0x22572cu: goto label_22572c;
        case 0x225730u: goto label_225730;
        case 0x225734u: goto label_225734;
        case 0x225738u: goto label_225738;
        case 0x22573cu: goto label_22573c;
        case 0x225740u: goto label_225740;
        case 0x225744u: goto label_225744;
        case 0x225748u: goto label_225748;
        case 0x22574cu: goto label_22574c;
        case 0x225750u: goto label_225750;
        case 0x225754u: goto label_225754;
        case 0x225758u: goto label_225758;
        case 0x22575cu: goto label_22575c;
        case 0x225760u: goto label_225760;
        case 0x225764u: goto label_225764;
        case 0x225768u: goto label_225768;
        case 0x22576cu: goto label_22576c;
        case 0x225770u: goto label_225770;
        case 0x225774u: goto label_225774;
        case 0x225778u: goto label_225778;
        case 0x22577cu: goto label_22577c;
        case 0x225780u: goto label_225780;
        case 0x225784u: goto label_225784;
        case 0x225788u: goto label_225788;
        case 0x22578cu: goto label_22578c;
        default: break;
    }

    ctx->pc = 0x225680u;

label_225680:
    // 0x225680: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x225680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_225684:
    // 0x225684: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x225684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_225688:
    // 0x225688: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x225688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22568c:
    // 0x22568c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22568cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_225690:
    // 0x225690: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x225690u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_225694:
    // 0x225694: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x225694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_225698:
    // 0x225698: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x225698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22569c:
    // 0x22569c: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x22569cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_2256a0:
    // 0x2256a0: 0x948301d4  lhu         $v1, 0x1D4($a0)
    ctx->pc = 0x2256a0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 468)));
label_2256a4:
    // 0x2256a4: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x2256a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2256a8:
    // 0x2256a8: 0x640000f  bltz        $s2, . + 4 + (0xF << 2)
label_2256ac:
    if (ctx->pc == 0x2256ACu) {
        ctx->pc = 0x2256ACu;
            // 0x2256ac: 0x249001d0  addiu       $s0, $a0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 464));
        ctx->pc = 0x2256B0u;
        goto label_2256b0;
    }
    ctx->pc = 0x2256A8u;
    {
        const bool branch_taken_0x2256a8 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2256ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2256A8u;
            // 0x2256ac: 0x249001d0  addiu       $s0, $a0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2256a8) {
            ctx->pc = 0x2256E8u;
            goto label_2256e8;
        }
    }
    ctx->pc = 0x2256B0u;
label_2256b0:
    // 0x2256b0: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x2256b0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2256b4:
    // 0x2256b4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2256b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2256b8:
    // 0x2256b8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2256b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_2256bc:
    // 0x2256bc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2256bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2256c0:
    // 0x2256c0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2256c4:
    if (ctx->pc == 0x2256C4u) {
        ctx->pc = 0x2256C8u;
        goto label_2256c8;
    }
    ctx->pc = 0x2256C0u;
    {
        const bool branch_taken_0x2256c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2256c0) {
            ctx->pc = 0x2256D8u;
            goto label_2256d8;
        }
    }
    ctx->pc = 0x2256C8u;
label_2256c8:
    // 0x2256c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2256c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2256cc:
    // 0x2256cc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2256ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2256d0:
    // 0x2256d0: 0x320f809  jalr        $t9
label_2256d4:
    if (ctx->pc == 0x2256D4u) {
        ctx->pc = 0x2256D4u;
            // 0x2256d4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2256D8u;
        goto label_2256d8;
    }
    ctx->pc = 0x2256D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2256D8u);
        ctx->pc = 0x2256D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2256D0u;
            // 0x2256d4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2256D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2256D8u; }
            if (ctx->pc != 0x2256D8u) { return; }
        }
        }
    }
    ctx->pc = 0x2256D8u;
label_2256d8:
    // 0x2256d8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2256d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_2256dc:
    // 0x2256dc: 0x641fff5  bgez        $s2, . + 4 + (-0xB << 2)
label_2256e0:
    if (ctx->pc == 0x2256E0u) {
        ctx->pc = 0x2256E0u;
            // 0x2256e0: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->pc = 0x2256E4u;
        goto label_2256e4;
    }
    ctx->pc = 0x2256DCu;
    {
        const bool branch_taken_0x2256dc = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2256E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2256DCu;
            // 0x2256e0: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2256dc) {
            ctx->pc = 0x2256B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2256b4;
        }
    }
    ctx->pc = 0x2256E4u;
label_2256e4:
    // 0x2256e4: 0x0  nop
    ctx->pc = 0x2256e4u;
    // NOP
label_2256e8:
    // 0x2256e8: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x2256e8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_2256ec:
    // 0x2256ec: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x2256ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2256f0:
    // 0x2256f0: 0x500001d  bltz        $t0, . + 4 + (0x1D << 2)
label_2256f4:
    if (ctx->pc == 0x2256F4u) {
        ctx->pc = 0x2256F8u;
        goto label_2256f8;
    }
    ctx->pc = 0x2256F0u;
    {
        const bool branch_taken_0x2256f0 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x2256f0) {
            ctx->pc = 0x225768u;
            goto label_225768;
        }
    }
    ctx->pc = 0x2256F8u;
label_2256f8:
    // 0x2256f8: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x2256f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_2256fc:
    // 0x2256fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2256fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_225700:
    // 0x225700: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x225700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_225704:
    // 0x225704: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x225704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_225708:
    // 0x225708: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_22570c:
    if (ctx->pc == 0x22570Cu) {
        ctx->pc = 0x225710u;
        goto label_225710;
    }
    ctx->pc = 0x225708u;
    {
        const bool branch_taken_0x225708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x225708) {
            ctx->pc = 0x225758u;
            goto label_225758;
        }
    }
    ctx->pc = 0x225710u;
label_225710:
    // 0x225710: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x225710u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_225714:
    // 0x225714: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x225714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_225718:
    // 0x225718: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x225718u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
label_22571c:
    // 0x22571c: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x22571cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_225720:
    // 0x225720: 0x103082a  slt         $at, $t0, $v1
    ctx->pc = 0x225720u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_225724:
    // 0x225724: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_225728:
    if (ctx->pc == 0x225728u) {
        ctx->pc = 0x225728u;
            // 0x225728: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22572Cu;
        goto label_22572c;
    }
    ctx->pc = 0x225724u;
    {
        const bool branch_taken_0x225724 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x225728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225724u;
            // 0x225728: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225724) {
            ctx->pc = 0x225758u;
            goto label_225758;
        }
    }
    ctx->pc = 0x22572Cu;
label_22572c:
    // 0x22572c: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x22572cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_225730:
    // 0x225730: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x225730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_225734:
    // 0x225734: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x225734u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_225738:
    // 0x225738: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x225738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_22573c:
    // 0x22573c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x22573cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_225740:
    // 0x225740: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x225740u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_225744:
    // 0x225744: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x225744u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_225748:
    // 0x225748: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x225748u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_22574c:
    // 0x22574c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_225750:
    if (ctx->pc == 0x225750u) {
        ctx->pc = 0x225750u;
            // 0x225750: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x225754u;
        goto label_225754;
    }
    ctx->pc = 0x22574Cu;
    {
        const bool branch_taken_0x22574c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x225750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22574Cu;
            // 0x225750: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22574c) {
            ctx->pc = 0x225730u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_225730;
        }
    }
    ctx->pc = 0x225754u;
label_225754:
    // 0x225754: 0x0  nop
    ctx->pc = 0x225754u;
    // NOP
label_225758:
    // 0x225758: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x225758u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_22575c:
    // 0x22575c: 0x501ffe7  bgez        $t0, . + 4 + (-0x19 << 2)
label_225760:
    if (ctx->pc == 0x225760u) {
        ctx->pc = 0x225760u;
            // 0x225760: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->pc = 0x225764u;
        goto label_225764;
    }
    ctx->pc = 0x22575Cu;
    {
        const bool branch_taken_0x22575c = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x225760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22575Cu;
            // 0x225760: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22575c) {
            ctx->pc = 0x2256FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2256fc;
        }
    }
    ctx->pc = 0x225764u;
label_225764:
    // 0x225764: 0x0  nop
    ctx->pc = 0x225764u;
    // NOP
label_225768:
    // 0x225768: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x225768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22576c:
    // 0x22576c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22576cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_225770:
    // 0x225770: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x225770u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_225774:
    // 0x225774: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x225774u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_225778:
    // 0x225778: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x225778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22577c:
    // 0x22577c: 0x3e00008  jr          $ra
label_225780:
    if (ctx->pc == 0x225780u) {
        ctx->pc = 0x225780u;
            // 0x225780: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x225784u;
        goto label_225784;
    }
    ctx->pc = 0x22577Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22577Cu;
            // 0x225780: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225784u;
label_225784:
    // 0x225784: 0x0  nop
    ctx->pc = 0x225784u;
    // NOP
label_225788:
    // 0x225788: 0x0  nop
    ctx->pc = 0x225788u;
    // NOP
label_22578c:
    // 0x22578c: 0x0  nop
    ctx->pc = 0x22578cu;
    // NOP
}
