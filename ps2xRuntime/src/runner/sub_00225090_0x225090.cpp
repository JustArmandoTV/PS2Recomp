#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00225090
// Address: 0x225090 - 0x2251c0
void sub_00225090_0x225090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225090_0x225090");
#endif

    switch (ctx->pc) {
        case 0x225090u: goto label_225090;
        case 0x225094u: goto label_225094;
        case 0x225098u: goto label_225098;
        case 0x22509cu: goto label_22509c;
        case 0x2250a0u: goto label_2250a0;
        case 0x2250a4u: goto label_2250a4;
        case 0x2250a8u: goto label_2250a8;
        case 0x2250acu: goto label_2250ac;
        case 0x2250b0u: goto label_2250b0;
        case 0x2250b4u: goto label_2250b4;
        case 0x2250b8u: goto label_2250b8;
        case 0x2250bcu: goto label_2250bc;
        case 0x2250c0u: goto label_2250c0;
        case 0x2250c4u: goto label_2250c4;
        case 0x2250c8u: goto label_2250c8;
        case 0x2250ccu: goto label_2250cc;
        case 0x2250d0u: goto label_2250d0;
        case 0x2250d4u: goto label_2250d4;
        case 0x2250d8u: goto label_2250d8;
        case 0x2250dcu: goto label_2250dc;
        case 0x2250e0u: goto label_2250e0;
        case 0x2250e4u: goto label_2250e4;
        case 0x2250e8u: goto label_2250e8;
        case 0x2250ecu: goto label_2250ec;
        case 0x2250f0u: goto label_2250f0;
        case 0x2250f4u: goto label_2250f4;
        case 0x2250f8u: goto label_2250f8;
        case 0x2250fcu: goto label_2250fc;
        case 0x225100u: goto label_225100;
        case 0x225104u: goto label_225104;
        case 0x225108u: goto label_225108;
        case 0x22510cu: goto label_22510c;
        case 0x225110u: goto label_225110;
        case 0x225114u: goto label_225114;
        case 0x225118u: goto label_225118;
        case 0x22511cu: goto label_22511c;
        case 0x225120u: goto label_225120;
        case 0x225124u: goto label_225124;
        case 0x225128u: goto label_225128;
        case 0x22512cu: goto label_22512c;
        case 0x225130u: goto label_225130;
        case 0x225134u: goto label_225134;
        case 0x225138u: goto label_225138;
        case 0x22513cu: goto label_22513c;
        case 0x225140u: goto label_225140;
        case 0x225144u: goto label_225144;
        case 0x225148u: goto label_225148;
        case 0x22514cu: goto label_22514c;
        case 0x225150u: goto label_225150;
        case 0x225154u: goto label_225154;
        case 0x225158u: goto label_225158;
        case 0x22515cu: goto label_22515c;
        case 0x225160u: goto label_225160;
        case 0x225164u: goto label_225164;
        case 0x225168u: goto label_225168;
        case 0x22516cu: goto label_22516c;
        case 0x225170u: goto label_225170;
        case 0x225174u: goto label_225174;
        case 0x225178u: goto label_225178;
        case 0x22517cu: goto label_22517c;
        case 0x225180u: goto label_225180;
        case 0x225184u: goto label_225184;
        case 0x225188u: goto label_225188;
        case 0x22518cu: goto label_22518c;
        case 0x225190u: goto label_225190;
        case 0x225194u: goto label_225194;
        case 0x225198u: goto label_225198;
        case 0x22519cu: goto label_22519c;
        case 0x2251a0u: goto label_2251a0;
        case 0x2251a4u: goto label_2251a4;
        case 0x2251a8u: goto label_2251a8;
        case 0x2251acu: goto label_2251ac;
        case 0x2251b0u: goto label_2251b0;
        case 0x2251b4u: goto label_2251b4;
        case 0x2251b8u: goto label_2251b8;
        case 0x2251bcu: goto label_2251bc;
        default: break;
    }

    ctx->pc = 0x225090u;

label_225090:
    // 0x225090: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x225090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_225094:
    // 0x225094: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x225094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_225098:
    // 0x225098: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x225098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22509c:
    // 0x22509c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22509cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2250a0:
    // 0x2250a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2250a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2250a4:
    // 0x2250a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2250a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2250a8:
    // 0x2250a8: 0x948301e4  lhu         $v1, 0x1E4($a0)
    ctx->pc = 0x2250a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 484)));
label_2250ac:
    // 0x2250ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2250acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2250b0:
    // 0x2250b0: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x2250b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2250b4:
    // 0x2250b4: 0x6400010  bltz        $s2, . + 4 + (0x10 << 2)
label_2250b8:
    if (ctx->pc == 0x2250B8u) {
        ctx->pc = 0x2250B8u;
            // 0x2250b8: 0x261301e0  addiu       $s3, $s0, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
        ctx->pc = 0x2250BCu;
        goto label_2250bc;
    }
    ctx->pc = 0x2250B4u;
    {
        const bool branch_taken_0x2250b4 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2250B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2250B4u;
            // 0x2250b8: 0x261301e0  addiu       $s3, $s0, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2250b4) {
            ctx->pc = 0x2250F8u;
            goto label_2250f8;
        }
    }
    ctx->pc = 0x2250BCu;
label_2250bc:
    // 0x2250bc: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x2250bcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2250c0:
    // 0x2250c0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2250c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2250c4:
    // 0x2250c4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2250c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_2250c8:
    // 0x2250c8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2250c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2250cc:
    // 0x2250cc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2250d0:
    if (ctx->pc == 0x2250D0u) {
        ctx->pc = 0x2250D4u;
        goto label_2250d4;
    }
    ctx->pc = 0x2250CCu;
    {
        const bool branch_taken_0x2250cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2250cc) {
            ctx->pc = 0x2250E8u;
            goto label_2250e8;
        }
    }
    ctx->pc = 0x2250D4u;
label_2250d4:
    // 0x2250d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2250d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2250d8:
    // 0x2250d8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2250d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2250dc:
    // 0x2250dc: 0x320f809  jalr        $t9
label_2250e0:
    if (ctx->pc == 0x2250E0u) {
        ctx->pc = 0x2250E0u;
            // 0x2250e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2250E4u;
        goto label_2250e4;
    }
    ctx->pc = 0x2250DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2250E4u);
        ctx->pc = 0x2250E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2250DCu;
            // 0x2250e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2250E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2250E4u; }
            if (ctx->pc != 0x2250E4u) { return; }
        }
        }
    }
    ctx->pc = 0x2250E4u;
label_2250e4:
    // 0x2250e4: 0x0  nop
    ctx->pc = 0x2250e4u;
    // NOP
label_2250e8:
    // 0x2250e8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2250e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_2250ec:
    // 0x2250ec: 0x641fff4  bgez        $s2, . + 4 + (-0xC << 2)
label_2250f0:
    if (ctx->pc == 0x2250F0u) {
        ctx->pc = 0x2250F0u;
            // 0x2250f0: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->pc = 0x2250F4u;
        goto label_2250f4;
    }
    ctx->pc = 0x2250ECu;
    {
        const bool branch_taken_0x2250ec = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2250F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2250ECu;
            // 0x2250f0: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2250ec) {
            ctx->pc = 0x2250C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2250c0;
        }
    }
    ctx->pc = 0x2250F4u;
label_2250f4:
    // 0x2250f4: 0x0  nop
    ctx->pc = 0x2250f4u;
    // NOP
label_2250f8:
    // 0x2250f8: 0x96030074  lhu         $v1, 0x74($s0)
    ctx->pc = 0x2250f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 116)));
label_2250fc:
    // 0x2250fc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_225100:
    if (ctx->pc == 0x225100u) {
        ctx->pc = 0x225100u;
            // 0x225100: 0x26110070  addiu       $s1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x225104u;
        goto label_225104;
    }
    ctx->pc = 0x2250FCu;
    {
        const bool branch_taken_0x2250fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x225100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2250FCu;
            // 0x225100: 0x26110070  addiu       $s1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2250fc) {
            ctx->pc = 0x225128u;
            goto label_225128;
        }
    }
    ctx->pc = 0x225104u;
label_225104:
    // 0x225104: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x225104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_225108:
    // 0x225108: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x225108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22510c:
    // 0x22510c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22510cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_225110:
    // 0x225110: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x225110u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_225114:
    // 0x225114: 0x320f809  jalr        $t9
label_225118:
    if (ctx->pc == 0x225118u) {
        ctx->pc = 0x225118u;
            // 0x225118: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22511Cu;
        goto label_22511c;
    }
    ctx->pc = 0x225114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22511Cu);
        ctx->pc = 0x225118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225114u;
            // 0x225118: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22511Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22511Cu; }
            if (ctx->pc != 0x22511Cu) { return; }
        }
        }
    }
    ctx->pc = 0x22511Cu;
label_22511c:
    // 0x22511c: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x22511cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_225120:
    // 0x225120: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
label_225124:
    if (ctx->pc == 0x225124u) {
        ctx->pc = 0x225124u;
            // 0x225124: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x225128u;
        goto label_225128;
    }
    ctx->pc = 0x225120u;
    {
        const bool branch_taken_0x225120 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x225120) {
            ctx->pc = 0x225124u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x225120u;
            // 0x225124: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x225108u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_225108;
        }
    }
    ctx->pc = 0x225128u;
label_225128:
    // 0x225128: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x225128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_22512c:
    // 0x22512c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_225130:
    if (ctx->pc == 0x225130u) {
        ctx->pc = 0x225130u;
            // 0x225130: 0x26110078  addiu       $s1, $s0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
        ctx->pc = 0x225134u;
        goto label_225134;
    }
    ctx->pc = 0x22512Cu;
    {
        const bool branch_taken_0x22512c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x225130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22512Cu;
            // 0x225130: 0x26110078  addiu       $s1, $s0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22512c) {
            ctx->pc = 0x225158u;
            goto label_225158;
        }
    }
    ctx->pc = 0x225134u;
label_225134:
    // 0x225134: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x225134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_225138:
    // 0x225138: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x225138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22513c:
    // 0x22513c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22513cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_225140:
    // 0x225140: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x225140u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_225144:
    // 0x225144: 0x320f809  jalr        $t9
label_225148:
    if (ctx->pc == 0x225148u) {
        ctx->pc = 0x225148u;
            // 0x225148: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22514Cu;
        goto label_22514c;
    }
    ctx->pc = 0x225144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22514Cu);
        ctx->pc = 0x225148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225144u;
            // 0x225148: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22514Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22514Cu; }
            if (ctx->pc != 0x22514Cu) { return; }
        }
        }
    }
    ctx->pc = 0x22514Cu;
label_22514c:
    // 0x22514c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x22514cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_225150:
    // 0x225150: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
label_225154:
    if (ctx->pc == 0x225154u) {
        ctx->pc = 0x225154u;
            // 0x225154: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x225158u;
        goto label_225158;
    }
    ctx->pc = 0x225150u;
    {
        const bool branch_taken_0x225150 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x225150) {
            ctx->pc = 0x225154u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x225150u;
            // 0x225154: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x225138u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_225138;
        }
    }
    ctx->pc = 0x225158u;
label_225158:
    // 0x225158: 0x960301ec  lhu         $v1, 0x1EC($s0)
    ctx->pc = 0x225158u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 492)));
label_22515c:
    // 0x22515c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_225160:
    if (ctx->pc == 0x225160u) {
        ctx->pc = 0x225160u;
            // 0x225160: 0x261101e8  addiu       $s1, $s0, 0x1E8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 488));
        ctx->pc = 0x225164u;
        goto label_225164;
    }
    ctx->pc = 0x22515Cu;
    {
        const bool branch_taken_0x22515c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x225160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22515Cu;
            // 0x225160: 0x261101e8  addiu       $s1, $s0, 0x1E8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22515c) {
            ctx->pc = 0x225188u;
            goto label_225188;
        }
    }
    ctx->pc = 0x225164u;
label_225164:
    // 0x225164: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x225164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_225168:
    // 0x225168: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x225168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22516c:
    // 0x22516c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22516cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_225170:
    // 0x225170: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x225170u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_225174:
    // 0x225174: 0x320f809  jalr        $t9
label_225178:
    if (ctx->pc == 0x225178u) {
        ctx->pc = 0x225178u;
            // 0x225178: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22517Cu;
        goto label_22517c;
    }
    ctx->pc = 0x225174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22517Cu);
        ctx->pc = 0x225178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225174u;
            // 0x225178: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22517Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22517Cu; }
            if (ctx->pc != 0x22517Cu) { return; }
        }
        }
    }
    ctx->pc = 0x22517Cu;
label_22517c:
    // 0x22517c: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x22517cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_225180:
    // 0x225180: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
label_225184:
    if (ctx->pc == 0x225184u) {
        ctx->pc = 0x225184u;
            // 0x225184: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x225188u;
        goto label_225188;
    }
    ctx->pc = 0x225180u;
    {
        const bool branch_taken_0x225180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x225180) {
            ctx->pc = 0x225184u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x225180u;
            // 0x225184: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x225168u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_225168;
        }
    }
    ctx->pc = 0x225188u;
label_225188:
    // 0x225188: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x225188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22518c:
    // 0x22518c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22518cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_225190:
    // 0x225190: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x225190u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_225194:
    // 0x225194: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x225194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_225198:
    // 0x225198: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x225198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22519c:
    // 0x22519c: 0x3e00008  jr          $ra
label_2251a0:
    if (ctx->pc == 0x2251A0u) {
        ctx->pc = 0x2251A0u;
            // 0x2251a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2251A4u;
        goto label_2251a4;
    }
    ctx->pc = 0x22519Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2251A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22519Cu;
            // 0x2251a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2251A4u;
label_2251a4:
    // 0x2251a4: 0x0  nop
    ctx->pc = 0x2251a4u;
    // NOP
label_2251a8:
    // 0x2251a8: 0x0  nop
    ctx->pc = 0x2251a8u;
    // NOP
label_2251ac:
    // 0x2251ac: 0x0  nop
    ctx->pc = 0x2251acu;
    // NOP
label_2251b0:
    // 0x2251b0: 0x3e00008  jr          $ra
label_2251b4:
    if (ctx->pc == 0x2251B4u) {
        ctx->pc = 0x2251B8u;
        goto label_2251b8;
    }
    ctx->pc = 0x2251B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2251B8u;
label_2251b8:
    // 0x2251b8: 0x0  nop
    ctx->pc = 0x2251b8u;
    // NOP
label_2251bc:
    // 0x2251bc: 0x0  nop
    ctx->pc = 0x2251bcu;
    // NOP
}
