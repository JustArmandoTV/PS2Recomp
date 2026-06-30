#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00186870
// Address: 0x186870 - 0x186988
void sub_00186870_0x186870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186870_0x186870");
#endif

    switch (ctx->pc) {
        case 0x186870u: goto label_186870;
        case 0x186874u: goto label_186874;
        case 0x186878u: goto label_186878;
        case 0x18687cu: goto label_18687c;
        case 0x186880u: goto label_186880;
        case 0x186884u: goto label_186884;
        case 0x186888u: goto label_186888;
        case 0x18688cu: goto label_18688c;
        case 0x186890u: goto label_186890;
        case 0x186894u: goto label_186894;
        case 0x186898u: goto label_186898;
        case 0x18689cu: goto label_18689c;
        case 0x1868a0u: goto label_1868a0;
        case 0x1868a4u: goto label_1868a4;
        case 0x1868a8u: goto label_1868a8;
        case 0x1868acu: goto label_1868ac;
        case 0x1868b0u: goto label_1868b0;
        case 0x1868b4u: goto label_1868b4;
        case 0x1868b8u: goto label_1868b8;
        case 0x1868bcu: goto label_1868bc;
        case 0x1868c0u: goto label_1868c0;
        case 0x1868c4u: goto label_1868c4;
        case 0x1868c8u: goto label_1868c8;
        case 0x1868ccu: goto label_1868cc;
        case 0x1868d0u: goto label_1868d0;
        case 0x1868d4u: goto label_1868d4;
        case 0x1868d8u: goto label_1868d8;
        case 0x1868dcu: goto label_1868dc;
        case 0x1868e0u: goto label_1868e0;
        case 0x1868e4u: goto label_1868e4;
        case 0x1868e8u: goto label_1868e8;
        case 0x1868ecu: goto label_1868ec;
        case 0x1868f0u: goto label_1868f0;
        case 0x1868f4u: goto label_1868f4;
        case 0x1868f8u: goto label_1868f8;
        case 0x1868fcu: goto label_1868fc;
        case 0x186900u: goto label_186900;
        case 0x186904u: goto label_186904;
        case 0x186908u: goto label_186908;
        case 0x18690cu: goto label_18690c;
        case 0x186910u: goto label_186910;
        case 0x186914u: goto label_186914;
        case 0x186918u: goto label_186918;
        case 0x18691cu: goto label_18691c;
        case 0x186920u: goto label_186920;
        case 0x186924u: goto label_186924;
        case 0x186928u: goto label_186928;
        case 0x18692cu: goto label_18692c;
        case 0x186930u: goto label_186930;
        case 0x186934u: goto label_186934;
        case 0x186938u: goto label_186938;
        case 0x18693cu: goto label_18693c;
        case 0x186940u: goto label_186940;
        case 0x186944u: goto label_186944;
        case 0x186948u: goto label_186948;
        case 0x18694cu: goto label_18694c;
        case 0x186950u: goto label_186950;
        case 0x186954u: goto label_186954;
        case 0x186958u: goto label_186958;
        case 0x18695cu: goto label_18695c;
        case 0x186960u: goto label_186960;
        case 0x186964u: goto label_186964;
        case 0x186968u: goto label_186968;
        case 0x18696cu: goto label_18696c;
        case 0x186970u: goto label_186970;
        case 0x186974u: goto label_186974;
        case 0x186978u: goto label_186978;
        case 0x18697cu: goto label_18697c;
        case 0x186980u: goto label_186980;
        case 0x186984u: goto label_186984;
        default: break;
    }

    ctx->pc = 0x186870u;

label_186870:
    // 0x186870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x186870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_186874:
    // 0x186874: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_186878:
    if (ctx->pc == 0x186878u) {
        ctx->pc = 0x186878u;
            // 0x186878: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x18687Cu;
        goto label_18687c;
    }
    ctx->pc = 0x186874u;
    {
        const bool branch_taken_0x186874 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x186878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186874u;
            // 0x186878: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186874) {
            ctx->pc = 0x186890u;
            goto label_186890;
        }
    }
    ctx->pc = 0x18687Cu;
label_18687c:
    // 0x18687c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x18687cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_186880:
    // 0x186880: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x186880u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_186884:
    // 0x186884: 0x24847d40  addiu       $a0, $a0, 0x7D40
    ctx->pc = 0x186884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32064));
label_186888:
    // 0x186888: 0x10000008  b           . + 4 + (0x8 << 2)
label_18688c:
    if (ctx->pc == 0x18688Cu) {
        ctx->pc = 0x18688Cu;
            // 0x18688c: 0x24a57c90  addiu       $a1, $a1, 0x7C90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31888));
        ctx->pc = 0x186890u;
        goto label_186890;
    }
    ctx->pc = 0x186888u;
    {
        const bool branch_taken_0x186888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18688Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186888u;
            // 0x18688c: 0x24a57c90  addiu       $a1, $a1, 0x7C90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186888) {
            ctx->pc = 0x1868ACu;
            goto label_1868ac;
        }
    }
    ctx->pc = 0x186890u;
label_186890:
    // 0x186890: 0x80820004  lb          $v0, 0x4($a0)
    ctx->pc = 0x186890u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_186894:
    // 0x186894: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_186898:
    if (ctx->pc == 0x186898u) {
        ctx->pc = 0x186898u;
            // 0x186898: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->pc = 0x18689Cu;
        goto label_18689c;
    }
    ctx->pc = 0x186894u;
    {
        const bool branch_taken_0x186894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186894) {
            ctx->pc = 0x186898u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x186894u;
            // 0x186898: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1868C0u;
            goto label_1868c0;
        }
    }
    ctx->pc = 0x18689Cu;
label_18689c:
    // 0x18689c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x18689cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_1868a0:
    // 0x1868a0: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x1868a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_1868a4:
    // 0x1868a4: 0x24847d50  addiu       $a0, $a0, 0x7D50
    ctx->pc = 0x1868a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32080));
label_1868a8:
    // 0x1868a8: 0x24a57cc0  addiu       $a1, $a1, 0x7CC0
    ctx->pc = 0x1868a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31936));
label_1868ac:
    // 0x1868ac: 0xc0618a8  jal         func_1862A0
label_1868b0:
    if (ctx->pc == 0x1868B0u) {
        ctx->pc = 0x1868B4u;
        goto label_1868b4;
    }
    ctx->pc = 0x1868ACu;
    SET_GPR_U32(ctx, 31, 0x1868B4u);
    ctx->pc = 0x1862A0u;
    if (runtime->hasFunction(0x1862A0u)) {
        auto targetFn = runtime->lookupFunction(0x1862A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1868B4u; }
        if (ctx->pc != 0x1868B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001862A0_0x1862a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1868B4u; }
        if (ctx->pc != 0x1868B4u) { return; }
    }
    ctx->pc = 0x1868B4u;
label_1868b4:
    // 0x1868b4: 0x10000018  b           . + 4 + (0x18 << 2)
label_1868b8:
    if (ctx->pc == 0x1868B8u) {
        ctx->pc = 0x1868B8u;
            // 0x1868b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1868BCu;
        goto label_1868bc;
    }
    ctx->pc = 0x1868B4u;
    {
        const bool branch_taken_0x1868b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1868B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1868B4u;
            // 0x1868b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1868b4) {
            ctx->pc = 0x186918u;
            goto label_186918;
        }
    }
    ctx->pc = 0x1868BCu;
label_1868bc:
    // 0x1868bc: 0x0  nop
    ctx->pc = 0x1868bcu;
    // NOP
label_1868c0:
    // 0x1868c0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1868c4:
    if (ctx->pc == 0x1868C4u) {
        ctx->pc = 0x1868C4u;
            // 0x1868c4: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x1868C8u;
        goto label_1868c8;
    }
    ctx->pc = 0x1868C0u;
    {
        const bool branch_taken_0x1868c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1868C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1868C0u;
            // 0x1868c4: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1868c0) {
            ctx->pc = 0x1868E8u;
            goto label_1868e8;
        }
    }
    ctx->pc = 0x1868C8u;
label_1868c8:
    // 0x1868c8: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x1868c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_1868cc:
    // 0x1868cc: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_1868d0:
    if (ctx->pc == 0x1868D0u) {
        ctx->pc = 0x1868D0u;
            // 0x1868d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1868D4u;
        goto label_1868d4;
    }
    ctx->pc = 0x1868CCu;
    {
        const bool branch_taken_0x1868cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1868cc) {
            ctx->pc = 0x1868D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1868CCu;
            // 0x1868d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186918u;
            goto label_186918;
        }
    }
    ctx->pc = 0x1868D4u;
label_1868d4:
    // 0x1868d4: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x1868d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_1868d8:
    // 0x1868d8: 0x40f809  jalr        $v0
label_1868dc:
    if (ctx->pc == 0x1868DCu) {
        ctx->pc = 0x1868DCu;
            // 0x1868dc: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x1868E0u;
        goto label_1868e0;
    }
    ctx->pc = 0x1868D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1868E0u);
        ctx->pc = 0x1868DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1868D8u;
            // 0x1868dc: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1868E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1868E0u; }
            if (ctx->pc != 0x1868E0u) { return; }
        }
        }
    }
    ctx->pc = 0x1868E0u;
label_1868e0:
    // 0x1868e0: 0x1000000d  b           . + 4 + (0xD << 2)
label_1868e4:
    if (ctx->pc == 0x1868E4u) {
        ctx->pc = 0x1868E4u;
            // 0x1868e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1868E8u;
        goto label_1868e8;
    }
    ctx->pc = 0x1868E0u;
    {
        const bool branch_taken_0x1868e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1868E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1868E0u;
            // 0x1868e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1868e0) {
            ctx->pc = 0x186918u;
            goto label_186918;
        }
    }
    ctx->pc = 0x1868E8u;
label_1868e8:
    // 0x1868e8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1868e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1868ec:
    // 0x1868ec: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x1868ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_1868f0:
    // 0x1868f0: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_1868f4:
    if (ctx->pc == 0x1868F4u) {
        ctx->pc = 0x1868F4u;
            // 0x1868f4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1868F8u;
        goto label_1868f8;
    }
    ctx->pc = 0x1868F0u;
    {
        const bool branch_taken_0x1868f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1868F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1868F0u;
            // 0x1868f4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1868f0) {
            ctx->pc = 0x186914u;
            goto label_186914;
        }
    }
    ctx->pc = 0x1868F8u;
label_1868f8:
    // 0x1868f8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1868f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1868fc:
    // 0x1868fc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1868fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_186900:
    // 0x186900: 0x0  nop
    ctx->pc = 0x186900u;
    // NOP
label_186904:
    // 0x186904: 0x0  nop
    ctx->pc = 0x186904u;
    // NOP
label_186908:
    // 0x186908: 0x0  nop
    ctx->pc = 0x186908u;
    // NOP
label_18690c:
    // 0x18690c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_186910:
    if (ctx->pc == 0x186910u) {
        ctx->pc = 0x186910u;
            // 0x186910: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x186914u;
        goto label_186914;
    }
    ctx->pc = 0x18690Cu;
    {
        const bool branch_taken_0x18690c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x186910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18690Cu;
            // 0x186910: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18690c) {
            ctx->pc = 0x1868F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1868f8;
        }
    }
    ctx->pc = 0x186914u;
label_186914:
    // 0x186914: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x186914u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_186918:
    // 0x186918: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18691c:
    // 0x18691c: 0x3e00008  jr          $ra
label_186920:
    if (ctx->pc == 0x186920u) {
        ctx->pc = 0x186920u;
            // 0x186920: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x186924u;
        goto label_186924;
    }
    ctx->pc = 0x18691Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18691Cu;
            // 0x186920: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186924u;
label_186924:
    // 0x186924: 0x0  nop
    ctx->pc = 0x186924u;
    // NOP
label_186928:
    // 0x186928: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x186928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18692c:
    // 0x18692c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18692cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_186930:
    // 0x186930: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x186930u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_186934:
    // 0x186934: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x186934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_186938:
    // 0x186938: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x186938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18693c:
    // 0x18693c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18693cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_186940:
    // 0x186940: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x186940u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_186944:
    // 0x186944: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x186944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_186948:
    // 0x186948: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x186948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_18694c:
    // 0x18694c: 0xc06127c  jal         func_1849F0
label_186950:
    if (ctx->pc == 0x186950u) {
        ctx->pc = 0x186950u;
            // 0x186950: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x186954u;
        goto label_186954;
    }
    ctx->pc = 0x18694Cu;
    SET_GPR_U32(ctx, 31, 0x186954u);
    ctx->pc = 0x186950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18694Cu;
            // 0x186950: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1849F0u;
    if (runtime->hasFunction(0x1849F0u)) {
        auto targetFn = runtime->lookupFunction(0x1849F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186954u; }
        if (ctx->pc != 0x186954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001849F0_0x1849f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186954u; }
        if (ctx->pc != 0x186954u) { return; }
    }
    ctx->pc = 0x186954u;
label_186954:
    // 0x186954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_186958:
    // 0x186958: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x186958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18695c:
    // 0x18695c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x18695cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_186960:
    // 0x186960: 0xc061a62  jal         func_186988
label_186964:
    if (ctx->pc == 0x186964u) {
        ctx->pc = 0x186964u;
            // 0x186964: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x186968u;
        goto label_186968;
    }
    ctx->pc = 0x186960u;
    SET_GPR_U32(ctx, 31, 0x186968u);
    ctx->pc = 0x186964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186960u;
            // 0x186964: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186988u;
    if (runtime->hasFunction(0x186988u)) {
        auto targetFn = runtime->lookupFunction(0x186988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186968u; }
        if (ctx->pc != 0x186968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186988_0x186988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186968u; }
        if (ctx->pc != 0x186968u) { return; }
    }
    ctx->pc = 0x186968u;
label_186968:
    // 0x186968: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x186968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18696c:
    // 0x18696c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18696cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_186970:
    // 0x186970: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x186970u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_186974:
    // 0x186974: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x186974u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_186978:
    // 0x186978: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x186978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18697c:
    // 0x18697c: 0x8061282  j           func_184A08
label_186980:
    if (ctx->pc == 0x186980u) {
        ctx->pc = 0x186980u;
            // 0x186980: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x186984u;
        goto label_186984;
    }
    ctx->pc = 0x18697Cu;
    ctx->pc = 0x186980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18697Cu;
            // 0x186980: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A08u;
    if (runtime->hasFunction(0x184A08u)) {
        auto targetFn = runtime->lookupFunction(0x184A08u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00184A08_0x184a08(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x186984u;
label_186984:
    // 0x186984: 0x0  nop
    ctx->pc = 0x186984u;
    // NOP
}
