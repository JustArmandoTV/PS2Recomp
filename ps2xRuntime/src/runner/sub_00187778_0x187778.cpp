#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00187778
// Address: 0x187778 - 0x187980
void sub_00187778_0x187778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187778_0x187778");
#endif

    switch (ctx->pc) {
        case 0x187778u: goto label_187778;
        case 0x18777cu: goto label_18777c;
        case 0x187780u: goto label_187780;
        case 0x187784u: goto label_187784;
        case 0x187788u: goto label_187788;
        case 0x18778cu: goto label_18778c;
        case 0x187790u: goto label_187790;
        case 0x187794u: goto label_187794;
        case 0x187798u: goto label_187798;
        case 0x18779cu: goto label_18779c;
        case 0x1877a0u: goto label_1877a0;
        case 0x1877a4u: goto label_1877a4;
        case 0x1877a8u: goto label_1877a8;
        case 0x1877acu: goto label_1877ac;
        case 0x1877b0u: goto label_1877b0;
        case 0x1877b4u: goto label_1877b4;
        case 0x1877b8u: goto label_1877b8;
        case 0x1877bcu: goto label_1877bc;
        case 0x1877c0u: goto label_1877c0;
        case 0x1877c4u: goto label_1877c4;
        case 0x1877c8u: goto label_1877c8;
        case 0x1877ccu: goto label_1877cc;
        case 0x1877d0u: goto label_1877d0;
        case 0x1877d4u: goto label_1877d4;
        case 0x1877d8u: goto label_1877d8;
        case 0x1877dcu: goto label_1877dc;
        case 0x1877e0u: goto label_1877e0;
        case 0x1877e4u: goto label_1877e4;
        case 0x1877e8u: goto label_1877e8;
        case 0x1877ecu: goto label_1877ec;
        case 0x1877f0u: goto label_1877f0;
        case 0x1877f4u: goto label_1877f4;
        case 0x1877f8u: goto label_1877f8;
        case 0x1877fcu: goto label_1877fc;
        case 0x187800u: goto label_187800;
        case 0x187804u: goto label_187804;
        case 0x187808u: goto label_187808;
        case 0x18780cu: goto label_18780c;
        case 0x187810u: goto label_187810;
        case 0x187814u: goto label_187814;
        case 0x187818u: goto label_187818;
        case 0x18781cu: goto label_18781c;
        case 0x187820u: goto label_187820;
        case 0x187824u: goto label_187824;
        case 0x187828u: goto label_187828;
        case 0x18782cu: goto label_18782c;
        case 0x187830u: goto label_187830;
        case 0x187834u: goto label_187834;
        case 0x187838u: goto label_187838;
        case 0x18783cu: goto label_18783c;
        case 0x187840u: goto label_187840;
        case 0x187844u: goto label_187844;
        case 0x187848u: goto label_187848;
        case 0x18784cu: goto label_18784c;
        case 0x187850u: goto label_187850;
        case 0x187854u: goto label_187854;
        case 0x187858u: goto label_187858;
        case 0x18785cu: goto label_18785c;
        case 0x187860u: goto label_187860;
        case 0x187864u: goto label_187864;
        case 0x187868u: goto label_187868;
        case 0x18786cu: goto label_18786c;
        case 0x187870u: goto label_187870;
        case 0x187874u: goto label_187874;
        case 0x187878u: goto label_187878;
        case 0x18787cu: goto label_18787c;
        case 0x187880u: goto label_187880;
        case 0x187884u: goto label_187884;
        case 0x187888u: goto label_187888;
        case 0x18788cu: goto label_18788c;
        case 0x187890u: goto label_187890;
        case 0x187894u: goto label_187894;
        case 0x187898u: goto label_187898;
        case 0x18789cu: goto label_18789c;
        case 0x1878a0u: goto label_1878a0;
        case 0x1878a4u: goto label_1878a4;
        case 0x1878a8u: goto label_1878a8;
        case 0x1878acu: goto label_1878ac;
        case 0x1878b0u: goto label_1878b0;
        case 0x1878b4u: goto label_1878b4;
        case 0x1878b8u: goto label_1878b8;
        case 0x1878bcu: goto label_1878bc;
        case 0x1878c0u: goto label_1878c0;
        case 0x1878c4u: goto label_1878c4;
        case 0x1878c8u: goto label_1878c8;
        case 0x1878ccu: goto label_1878cc;
        case 0x1878d0u: goto label_1878d0;
        case 0x1878d4u: goto label_1878d4;
        case 0x1878d8u: goto label_1878d8;
        case 0x1878dcu: goto label_1878dc;
        case 0x1878e0u: goto label_1878e0;
        case 0x1878e4u: goto label_1878e4;
        case 0x1878e8u: goto label_1878e8;
        case 0x1878ecu: goto label_1878ec;
        case 0x1878f0u: goto label_1878f0;
        case 0x1878f4u: goto label_1878f4;
        case 0x1878f8u: goto label_1878f8;
        case 0x1878fcu: goto label_1878fc;
        case 0x187900u: goto label_187900;
        case 0x187904u: goto label_187904;
        case 0x187908u: goto label_187908;
        case 0x18790cu: goto label_18790c;
        case 0x187910u: goto label_187910;
        case 0x187914u: goto label_187914;
        case 0x187918u: goto label_187918;
        case 0x18791cu: goto label_18791c;
        case 0x187920u: goto label_187920;
        case 0x187924u: goto label_187924;
        case 0x187928u: goto label_187928;
        case 0x18792cu: goto label_18792c;
        case 0x187930u: goto label_187930;
        case 0x187934u: goto label_187934;
        case 0x187938u: goto label_187938;
        case 0x18793cu: goto label_18793c;
        case 0x187940u: goto label_187940;
        case 0x187944u: goto label_187944;
        case 0x187948u: goto label_187948;
        case 0x18794cu: goto label_18794c;
        case 0x187950u: goto label_187950;
        case 0x187954u: goto label_187954;
        case 0x187958u: goto label_187958;
        case 0x18795cu: goto label_18795c;
        case 0x187960u: goto label_187960;
        case 0x187964u: goto label_187964;
        case 0x187968u: goto label_187968;
        case 0x18796cu: goto label_18796c;
        case 0x187970u: goto label_187970;
        case 0x187974u: goto label_187974;
        case 0x187978u: goto label_187978;
        case 0x18797cu: goto label_18797c;
        default: break;
    }

    ctx->pc = 0x187778u;

label_187778:
    // 0x187778: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x187778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18777c:
    // 0x18777c: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x18777cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
label_187780:
    // 0x187780: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_187784:
    // 0x187784: 0x24635d94  addiu       $v1, $v1, 0x5D94
    ctx->pc = 0x187784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23956));
label_187788:
    // 0x187788: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x187788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_18778c:
    // 0x18778c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18778cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_187790:
    // 0x187790: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_187794:
    if (ctx->pc == 0x187794u) {
        ctx->pc = 0x187794u;
            // 0x187794: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x187798u;
        goto label_187798;
    }
    ctx->pc = 0x187790u;
    {
        const bool branch_taken_0x187790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187790u;
            // 0x187794: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187790) {
            ctx->pc = 0x1877A8u;
            goto label_1877a8;
        }
    }
    ctx->pc = 0x187798u;
label_187798:
    // 0x187798: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18779c:
    // 0x18779c: 0x805f1be  j           func_17C6F8
label_1877a0:
    if (ctx->pc == 0x1877A0u) {
        ctx->pc = 0x1877A0u;
            // 0x1877a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1877A4u;
        goto label_1877a4;
    }
    ctx->pc = 0x18779Cu;
    ctx->pc = 0x1877A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18779Cu;
            // 0x1877a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C6F8u;
    if (runtime->hasFunction(0x17C6F8u)) {
        auto targetFn = runtime->lookupFunction(0x17C6F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0017C6F8_0x17c6f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1877A4u;
label_1877a4:
    // 0x1877a4: 0x0  nop
    ctx->pc = 0x1877a4u;
    // NOP
label_1877a8:
    // 0x1877a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1877a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1877ac:
    // 0x1877ac: 0x3e00008  jr          $ra
label_1877b0:
    if (ctx->pc == 0x1877B0u) {
        ctx->pc = 0x1877B0u;
            // 0x1877b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1877B4u;
        goto label_1877b4;
    }
    ctx->pc = 0x1877ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1877B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1877ACu;
            // 0x1877b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1877B4u;
label_1877b4:
    // 0x1877b4: 0x0  nop
    ctx->pc = 0x1877b4u;
    // NOP
label_1877b8:
    // 0x1877b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1877b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1877bc:
    // 0x1877bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1877bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1877c0:
    // 0x1877c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1877c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1877c4:
    // 0x1877c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1877c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1877c8:
    // 0x1877c8: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
label_1877cc:
    if (ctx->pc == 0x1877CCu) {
        ctx->pc = 0x1877CCu;
            // 0x1877cc: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->pc = 0x1877D0u;
        goto label_1877d0;
    }
    ctx->pc = 0x1877C8u;
    {
        const bool branch_taken_0x1877c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1877CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1877C8u;
            // 0x1877cc: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1877c8) {
            ctx->pc = 0x1877F0u;
            goto label_1877f0;
        }
    }
    ctx->pc = 0x1877D0u;
label_1877d0:
    // 0x1877d0: 0x0  nop
    ctx->pc = 0x1877d0u;
    // NOP
label_1877d4:
    // 0x1877d4: 0x0  nop
    ctx->pc = 0x1877d4u;
    // NOP
label_1877d8:
    // 0x1877d8: 0x0  nop
    ctx->pc = 0x1877d8u;
    // NOP
label_1877dc:
    // 0x1877dc: 0x0  nop
    ctx->pc = 0x1877dcu;
    // NOP
label_1877e0:
    // 0x1877e0: 0x0  nop
    ctx->pc = 0x1877e0u;
    // NOP
label_1877e4:
    // 0x1877e4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_1877e8:
    if (ctx->pc == 0x1877E8u) {
        ctx->pc = 0x1877ECu;
        goto label_1877ec;
    }
    ctx->pc = 0x1877E4u;
    {
        const bool branch_taken_0x1877e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1877e4) {
            ctx->pc = 0x1877D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1877d0;
        }
    }
    ctx->pc = 0x1877ECu;
label_1877ec:
    // 0x1877ec: 0x0  nop
    ctx->pc = 0x1877ecu;
    // NOP
label_1877f0:
    // 0x1877f0: 0xc06127c  jal         func_1849F0
label_1877f4:
    if (ctx->pc == 0x1877F4u) {
        ctx->pc = 0x1877F4u;
            // 0x1877f4: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1877F8u;
        goto label_1877f8;
    }
    ctx->pc = 0x1877F0u;
    SET_GPR_U32(ctx, 31, 0x1877F8u);
    ctx->pc = 0x1877F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1877F0u;
            // 0x1877f4: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1849F0u;
    if (runtime->hasFunction(0x1849F0u)) {
        auto targetFn = runtime->lookupFunction(0x1849F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1877F8u; }
        if (ctx->pc != 0x1877F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001849F0_0x1849f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1877F8u; }
        if (ctx->pc != 0x1877F8u) { return; }
    }
    ctx->pc = 0x1877F8u;
label_1877f8:
    // 0x1877f8: 0x5a200012  blezl       $s1, . + 4 + (0x12 << 2)
label_1877fc:
    if (ctx->pc == 0x1877FCu) {
        ctx->pc = 0x1877FCu;
            // 0x1877fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x187800u;
        goto label_187800;
    }
    ctx->pc = 0x1877F8u;
    {
        const bool branch_taken_0x1877f8 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x1877f8) {
            ctx->pc = 0x1877FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1877F8u;
            // 0x1877fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x187844u;
            goto label_187844;
        }
    }
    ctx->pc = 0x187800u;
label_187800:
    // 0x187800: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x187800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_187804:
    // 0x187804: 0x0  nop
    ctx->pc = 0x187804u;
    // NOP
label_187808:
    // 0x187808: 0x24b00010  addiu       $s0, $a1, 0x10
    ctx->pc = 0x187808u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_18780c:
    // 0x18780c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x18780cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_187810:
    // 0x187810: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_187814:
    if (ctx->pc == 0x187814u) {
        ctx->pc = 0x187814u;
            // 0x187814: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x187818u;
        goto label_187818;
    }
    ctx->pc = 0x187810u;
    {
        const bool branch_taken_0x187810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x187810) {
            ctx->pc = 0x187814u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x187810u;
            // 0x187814: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x187838u;
            goto label_187838;
        }
    }
    ctx->pc = 0x187818u;
label_187818:
    // 0x187818: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x187818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_18781c:
    // 0x18781c: 0x24a60018  addiu       $a2, $a1, 0x18
    ctx->pc = 0x18781cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
label_187820:
    // 0x187820: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x187820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_187824:
    // 0x187824: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x187824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_187828:
    // 0x187828: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x187828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_18782c:
    // 0x18782c: 0x40f809  jalr        $v0
label_187830:
    if (ctx->pc == 0x187830u) {
        ctx->pc = 0x187830u;
            // 0x187830: 0x80a50011  lb          $a1, 0x11($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 17)));
        ctx->pc = 0x187834u;
        goto label_187834;
    }
    ctx->pc = 0x18782Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x187834u);
        ctx->pc = 0x187830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18782Cu;
            // 0x187830: 0x80a50011  lb          $a1, 0x11($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 17)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x187834u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x187834u; }
            if (ctx->pc != 0x187834u) { return; }
        }
        }
    }
    ctx->pc = 0x187834u;
label_187834:
    // 0x187834: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x187834u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_187838:
    // 0x187838: 0x1620fff3  bnez        $s1, . + 4 + (-0xD << 2)
label_18783c:
    if (ctx->pc == 0x18783Cu) {
        ctx->pc = 0x18783Cu;
            // 0x18783c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x187840u;
        goto label_187840;
    }
    ctx->pc = 0x187838u;
    {
        const bool branch_taken_0x187838 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x18783Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187838u;
            // 0x18783c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187838) {
            ctx->pc = 0x187808u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_187808;
        }
    }
    ctx->pc = 0x187840u;
label_187840:
    // 0x187840: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x187840u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_187844:
    // 0x187844: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x187844u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_187848:
    // 0x187848: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x187848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18784c:
    // 0x18784c: 0x8061282  j           func_184A08
label_187850:
    if (ctx->pc == 0x187850u) {
        ctx->pc = 0x187850u;
            // 0x187850: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x187854u;
        goto label_187854;
    }
    ctx->pc = 0x18784Cu;
    ctx->pc = 0x187850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18784Cu;
            // 0x187850: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A08u;
    if (runtime->hasFunction(0x184A08u)) {
        auto targetFn = runtime->lookupFunction(0x184A08u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00184A08_0x184a08(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x187854u;
label_187854:
    // 0x187854: 0x0  nop
    ctx->pc = 0x187854u;
    // NOP
label_187858:
    // 0x187858: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x187858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_18785c:
    // 0x18785c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x18785cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_187860:
    // 0x187860: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x187860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_187864:
    // 0x187864: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x187864u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187868:
    // 0x187868: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x187868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_18786c:
    // 0x18786c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x18786cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187870:
    // 0x187870: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x187870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_187874:
    // 0x187874: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x187874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_187878:
    // 0x187878: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x187878u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18787c:
    // 0x18787c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x18787cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_187880:
    // 0x187880: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x187880u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_187884:
    // 0x187884: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x187884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_187888:
    // 0x187888: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x187888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_18788c:
    // 0x18788c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x18788cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_187890:
    // 0x187890: 0xc06127c  jal         func_1849F0
label_187894:
    if (ctx->pc == 0x187894u) {
        ctx->pc = 0x187894u;
            // 0x187894: 0x26d50010  addiu       $s5, $s6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
        ctx->pc = 0x187898u;
        goto label_187898;
    }
    ctx->pc = 0x187890u;
    SET_GPR_U32(ctx, 31, 0x187898u);
    ctx->pc = 0x187894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187890u;
            // 0x187894: 0x26d50010  addiu       $s5, $s6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1849F0u;
    if (runtime->hasFunction(0x1849F0u)) {
        auto targetFn = runtime->lookupFunction(0x1849F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187898u; }
        if (ctx->pc != 0x187898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001849F0_0x1849f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187898u; }
        if (ctx->pc != 0x187898u) { return; }
    }
    ctx->pc = 0x187898u;
label_187898:
    // 0x187898: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x187898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_18789c:
    // 0x18789c: 0x24515db0  addiu       $s1, $v0, 0x5DB0
    ctx->pc = 0x18789cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 23984));
label_1878a0:
    // 0x1878a0: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1878a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1878a4:
    // 0x1878a4: 0x5457001f  bnel        $v0, $s7, . + 4 + (0x1F << 2)
label_1878a8:
    if (ctx->pc == 0x1878A8u) {
        ctx->pc = 0x1878A8u;
            // 0x1878a8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x1878ACu;
        goto label_1878ac;
    }
    ctx->pc = 0x1878A4u;
    {
        const bool branch_taken_0x1878a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x1878a4) {
            ctx->pc = 0x1878A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1878A4u;
            // 0x1878a8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x187924u;
            goto label_187924;
        }
    }
    ctx->pc = 0x1878ACu;
label_1878ac:
    // 0x1878ac: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1878acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_1878b0:
    // 0x1878b0: 0x24140080  addiu       $s4, $zero, 0x80
    ctx->pc = 0x1878b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1878b4:
    // 0x1878b4: 0x1000000e  b           . + 4 + (0xE << 2)
label_1878b8:
    if (ctx->pc == 0x1878B8u) {
        ctx->pc = 0x1878B8u;
            // 0x1878b8: 0x558021  addu        $s0, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->pc = 0x1878BCu;
        goto label_1878bc;
    }
    ctx->pc = 0x1878B4u;
    {
        const bool branch_taken_0x1878b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1878B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1878B4u;
            // 0x1878b8: 0x558021  addu        $s0, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1878b4) {
            ctx->pc = 0x1878F0u;
            goto label_1878f0;
        }
    }
    ctx->pc = 0x1878BCu;
label_1878bc:
    // 0x1878bc: 0x0  nop
    ctx->pc = 0x1878bcu;
    // NOP
label_1878c0:
    // 0x1878c0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1878c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1878c4:
    // 0x1878c4: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x1878c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_1878c8:
    // 0x1878c8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1878c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1878cc:
    // 0x1878cc: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1878ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_1878d0:
    // 0x1878d0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1878d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1878d4:
    // 0x1878d4: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x1878d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_1878d8:
    // 0x1878d8: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x1878d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1878dc:
    // 0x1878dc: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x1878dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1878e0:
    // 0x1878e0: 0xb203000f  sdl         $v1, 0xF($s0)
    ctx->pc = 0x1878e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1878e4:
    // 0x1878e4: 0xb6030008  sdr         $v1, 0x8($s0)
    ctx->pc = 0x1878e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1878e8:
    // 0x1878e8: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x1878e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_1878ec:
    // 0x1878ec: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1878ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1878f0:
    // 0x1878f0: 0x1254000f  beq         $s2, $s4, . + 4 + (0xF << 2)
label_1878f4:
    if (ctx->pc == 0x1878F4u) {
        ctx->pc = 0x1878F4u;
            // 0x1878f4: 0x3c067fff  lui         $a2, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
        ctx->pc = 0x1878F8u;
        goto label_1878f8;
    }
    ctx->pc = 0x1878F0u;
    {
        const bool branch_taken_0x1878f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 20));
        ctx->pc = 0x1878F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1878F0u;
            // 0x1878f4: 0x3c067fff  lui         $a2, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1878f0) {
            ctx->pc = 0x187930u;
            goto label_187930;
        }
    }
    ctx->pc = 0x1878F8u;
label_1878f8:
    // 0x1878f8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1878f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1878fc:
    // 0x1878fc: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1878fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_187900:
    // 0x187900: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x187900u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_187904:
    // 0x187904: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x187904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_187908:
    // 0x187908: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x187908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_18790c:
    // 0x18790c: 0x40f809  jalr        $v0
label_187910:
    if (ctx->pc == 0x187910u) {
        ctx->pc = 0x187910u;
            // 0x187910: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x187914u;
        goto label_187914;
    }
    ctx->pc = 0x18790Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x187914u);
        ctx->pc = 0x187910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18790Cu;
            // 0x187910: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x187914u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x187914u; }
            if (ctx->pc != 0x187914u) { return; }
        }
        }
    }
    ctx->pc = 0x187914u;
label_187914:
    // 0x187914: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x187914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_187918:
    // 0x187918: 0x5460ffe9  bnel        $v1, $zero, . + 4 + (-0x17 << 2)
label_18791c:
    if (ctx->pc == 0x18791Cu) {
        ctx->pc = 0x18791Cu;
            // 0x18791c: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x187920u;
        goto label_187920;
    }
    ctx->pc = 0x187918u;
    {
        const bool branch_taken_0x187918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x187918) {
            ctx->pc = 0x18791Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x187918u;
            // 0x18791c: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1878C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1878c0;
        }
    }
    ctx->pc = 0x187920u;
label_187920:
    // 0x187920: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x187920u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_187924:
    // 0x187924: 0x2a620020  slti        $v0, $s3, 0x20
    ctx->pc = 0x187924u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)32) ? 1 : 0);
label_187928:
    // 0x187928: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_18792c:
    if (ctx->pc == 0x18792Cu) {
        ctx->pc = 0x18792Cu;
            // 0x18792c: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->pc = 0x187930u;
        goto label_187930;
    }
    ctx->pc = 0x187928u;
    {
        const bool branch_taken_0x187928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18792Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187928u;
            // 0x18792c: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187928) {
            ctx->pc = 0x1878A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1878a0;
        }
    }
    ctx->pc = 0x187930u;
label_187930:
    // 0x187930: 0xc061282  jal         func_184A08
label_187934:
    if (ctx->pc == 0x187934u) {
        ctx->pc = 0x187938u;
        goto label_187938;
    }
    ctx->pc = 0x187930u;
    SET_GPR_U32(ctx, 31, 0x187938u);
    ctx->pc = 0x184A08u;
    if (runtime->hasFunction(0x184A08u)) {
        auto targetFn = runtime->lookupFunction(0x184A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187938u; }
        if (ctx->pc != 0x187938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184A08_0x184a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187938u; }
        if (ctx->pc != 0x187938u) { return; }
    }
    ctx->pc = 0x187938u;
label_187938:
    // 0x187938: 0xaed20000  sw          $s2, 0x0($s6)
    ctx->pc = 0x187938u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 18));
label_18793c:
    // 0x18793c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x18793cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_187940:
    // 0x187940: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x187940u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_187944:
    // 0x187944: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x187944u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_187948:
    // 0x187948: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x187948u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_18794c:
    // 0x18794c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x18794cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_187950:
    // 0x187950: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x187950u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_187954:
    // 0x187954: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x187954u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_187958:
    // 0x187958: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x187958u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_18795c:
    // 0x18795c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x18795cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_187960:
    // 0x187960: 0x3e00008  jr          $ra
label_187964:
    if (ctx->pc == 0x187964u) {
        ctx->pc = 0x187964u;
            // 0x187964: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x187968u;
        goto label_187968;
    }
    ctx->pc = 0x187960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187960u;
            // 0x187964: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x187968u;
label_187968:
    // 0x187968: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x187968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18796c:
    // 0x18796c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18796cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_187970:
    // 0x187970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_187974:
    // 0x187974: 0x805f21e  j           func_17C878
label_187978:
    if (ctx->pc == 0x187978u) {
        ctx->pc = 0x187978u;
            // 0x187978: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x18797Cu;
        goto label_18797c;
    }
    ctx->pc = 0x187974u;
    ctx->pc = 0x187978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187974u;
            // 0x187978: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C878u;
    if (runtime->hasFunction(0x17C878u)) {
        auto targetFn = runtime->lookupFunction(0x17C878u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0017C878_0x17c878(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x18797Cu;
label_18797c:
    // 0x18797c: 0x0  nop
    ctx->pc = 0x18797cu;
    // NOP
}
