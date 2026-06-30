#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00135530
// Address: 0x135530 - 0x135690
void sub_00135530_0x135530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135530_0x135530");
#endif

    switch (ctx->pc) {
        case 0x1355a4u: goto label_1355a4;
        case 0x1355b4u: goto label_1355b4;
        case 0x135648u: goto label_135648;
        case 0x135658u: goto label_135658;
        case 0x135668u: goto label_135668;
        case 0x135678u: goto label_135678;
        default: break;
    }

    ctx->pc = 0x135530u;

    // 0x135530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x135530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x135534: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x135534u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135538: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x135538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13553c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x13553cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x135540: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x135540u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x135544: 0x34a78000  ori         $a3, $a1, 0x8000
    ctx->pc = 0x135544u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x135548: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x135548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x13554c: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x13554cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x135550: 0x1074024  and         $t0, $t0, $a3
    ctx->pc = 0x135550u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x135554: 0x15070019  bne         $t0, $a3, . + 4 + (0x19 << 2)
    ctx->pc = 0x135554u;
    {
        const bool branch_taken_0x135554 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        ctx->pc = 0x135558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135554u;
            // 0x135558: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135554) {
            ctx->pc = 0x1355BCu;
            goto label_1355bc;
        }
    }
    ctx->pc = 0x13555Cu;
    // 0x13555c: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x13555cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x135560: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x135560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x135564: 0x30e70e77  andi        $a3, $a3, 0xE77
    ctx->pc = 0x135564u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3703);
    // 0x135568: 0x50e40045  beql        $a3, $a0, . + 4 + (0x45 << 2)
    ctx->pc = 0x135568u;
    {
        const bool branch_taken_0x135568 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x135568) {
            ctx->pc = 0x13556Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135568u;
            // 0x13556c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135680u;
            goto label_135680;
        }
    }
    ctx->pc = 0x135570u;
    // 0x135570: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x135570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x135574: 0x50e4000d  beql        $a3, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x135574u;
    {
        const bool branch_taken_0x135574 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x135574) {
            ctx->pc = 0x135578u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135574u;
            // 0x135578: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1355ACu;
            goto label_1355ac;
        }
    }
    ctx->pc = 0x13557Cu;
    // 0x13557c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x13557cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x135580: 0x50e40006  beql        $a3, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x135580u;
    {
        const bool branch_taken_0x135580 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x135580) {
            ctx->pc = 0x135584u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135580u;
            // 0x135584: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13559Cu;
            goto label_13559c;
        }
    }
    ctx->pc = 0x135588u;
    // 0x135588: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x135588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13558c: 0x10e3003b  beq         $a3, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x13558Cu;
    {
        const bool branch_taken_0x13558c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x13558c) {
            ctx->pc = 0x13567Cu;
            goto label_13567c;
        }
    }
    ctx->pc = 0x135594u;
    // 0x135594: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x135594u;
    {
        const bool branch_taken_0x135594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135594) {
            ctx->pc = 0x13567Cu;
            goto label_13567c;
        }
    }
    ctx->pc = 0x13559Cu;
label_13559c:
    // 0x13559c: 0xc04d894  jal         func_136250
    ctx->pc = 0x13559Cu;
    SET_GPR_U32(ctx, 31, 0x1355A4u);
    ctx->pc = 0x136250u;
    if (runtime->hasFunction(0x136250u)) {
        auto targetFn = runtime->lookupFunction(0x136250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1355A4u; }
        if (ctx->pc != 0x1355A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136250_0x136250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1355A4u; }
        if (ctx->pc != 0x1355A4u) { return; }
    }
    ctx->pc = 0x1355A4u;
label_1355a4:
    // 0x1355a4: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1355A4u;
    {
        const bool branch_taken_0x1355a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1355A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1355A4u;
            // 0x1355a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1355a4) {
            ctx->pc = 0x13567Cu;
            goto label_13567c;
        }
    }
    ctx->pc = 0x1355ACu;
label_1355ac:
    // 0x1355ac: 0xc04d7c8  jal         func_135F20
    ctx->pc = 0x1355ACu;
    SET_GPR_U32(ctx, 31, 0x1355B4u);
    ctx->pc = 0x135F20u;
    if (runtime->hasFunction(0x135F20u)) {
        auto targetFn = runtime->lookupFunction(0x135F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1355B4u; }
        if (ctx->pc != 0x1355B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135F20_0x135f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1355B4u; }
        if (ctx->pc != 0x1355B4u) { return; }
    }
    ctx->pc = 0x1355B4u;
label_1355b4:
    // 0x1355b4: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1355B4u;
    {
        const bool branch_taken_0x1355b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1355B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1355B4u;
            // 0x1355b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1355b4) {
            ctx->pc = 0x13567Cu;
            goto label_13567c;
        }
    }
    ctx->pc = 0x1355BCu;
label_1355bc:
    // 0x1355bc: 0x3c070002  lui         $a3, 0x2
    ctx->pc = 0x1355bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2 << 16));
    // 0x1355c0: 0x11070009  beq         $t0, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1355C0u;
    {
        const bool branch_taken_0x1355c0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        ctx->pc = 0x1355C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1355C0u;
            // 0x1355c4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1355c0) {
            ctx->pc = 0x1355E8u;
            goto label_1355e8;
        }
    }
    ctx->pc = 0x1355C8u;
    // 0x1355c8: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x1355c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x1355cc: 0x51070007  beql        $t0, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1355CCu;
    {
        const bool branch_taken_0x1355cc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        if (branch_taken_0x1355cc) {
            ctx->pc = 0x1355D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1355CCu;
            // 0x1355d0: 0x24c90004  addiu       $t1, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1355ECu;
            goto label_1355ec;
        }
    }
    ctx->pc = 0x1355D4u;
    // 0x1355d4: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x1355d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1355d8: 0x51070004  beql        $t0, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1355D8u;
    {
        const bool branch_taken_0x1355d8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        if (branch_taken_0x1355d8) {
            ctx->pc = 0x1355DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1355D8u;
            // 0x1355dc: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1355ECu;
            goto label_1355ec;
        }
    }
    ctx->pc = 0x1355E0u;
    // 0x1355e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1355E0u;
    {
        const bool branch_taken_0x1355e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1355e0) {
            ctx->pc = 0x1355ECu;
            goto label_1355ec;
        }
    }
    ctx->pc = 0x1355E8u;
label_1355e8:
    // 0x1355e8: 0x24c90008  addiu       $t1, $a2, 0x8
    ctx->pc = 0x1355e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_1355ec:
    // 0x1355ec: 0x11200023  beqz        $t1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1355ECu;
    {
        const bool branch_taken_0x1355ec = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1355ec) {
            ctx->pc = 0x13567Cu;
            goto label_13567c;
        }
    }
    ctx->pc = 0x1355F4u;
    // 0x1355f4: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x1355f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1355f8: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1355f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1355fc: 0x30c60e77  andi        $a2, $a2, 0xE77
    ctx->pc = 0x1355fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3703);
    // 0x135600: 0x50c4001b  beql        $a2, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x135600u;
    {
        const bool branch_taken_0x135600 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x135600) {
            ctx->pc = 0x135604u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135600u;
            // 0x135604: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135670u;
            goto label_135670;
        }
    }
    ctx->pc = 0x135608u;
    // 0x135608: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x135608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13560c: 0x50c40014  beql        $a2, $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x13560Cu;
    {
        const bool branch_taken_0x13560c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x13560c) {
            ctx->pc = 0x135610u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13560Cu;
            // 0x135610: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135660u;
            goto label_135660;
        }
    }
    ctx->pc = 0x135614u;
    // 0x135614: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x135614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x135618: 0x50c4000d  beql        $a2, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x135618u;
    {
        const bool branch_taken_0x135618 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x135618) {
            ctx->pc = 0x13561Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135618u;
            // 0x13561c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135650u;
            goto label_135650;
        }
    }
    ctx->pc = 0x135620u;
    // 0x135620: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x135620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x135624: 0x50c40006  beql        $a2, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x135624u;
    {
        const bool branch_taken_0x135624 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x135624) {
            ctx->pc = 0x135628u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135624u;
            // 0x135628: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135640u;
            goto label_135640;
        }
    }
    ctx->pc = 0x13562Cu;
    // 0x13562c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13562cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x135630: 0x10c30012  beq         $a2, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x135630u;
    {
        const bool branch_taken_0x135630 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x135630) {
            ctx->pc = 0x13567Cu;
            goto label_13567c;
        }
    }
    ctx->pc = 0x135638u;
    // 0x135638: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x135638u;
    {
        const bool branch_taken_0x135638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135638) {
            ctx->pc = 0x13567Cu;
            goto label_13567c;
        }
    }
    ctx->pc = 0x135640u;
label_135640:
    // 0x135640: 0xc04d868  jal         func_1361A0
    ctx->pc = 0x135640u;
    SET_GPR_U32(ctx, 31, 0x135648u);
    ctx->pc = 0x135644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135640u;
            // 0x135644: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1361A0u;
    if (runtime->hasFunction(0x1361A0u)) {
        auto targetFn = runtime->lookupFunction(0x1361A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135648u; }
        if (ctx->pc != 0x135648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001361A0_0x1361a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135648u; }
        if (ctx->pc != 0x135648u) { return; }
    }
    ctx->pc = 0x135648u;
label_135648:
    // 0x135648: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x135648u;
    {
        const bool branch_taken_0x135648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13564Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135648u;
            // 0x13564c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135648) {
            ctx->pc = 0x13567Cu;
            goto label_13567c;
        }
    }
    ctx->pc = 0x135650u;
label_135650:
    // 0x135650: 0xc04d7ac  jal         func_135EB0
    ctx->pc = 0x135650u;
    SET_GPR_U32(ctx, 31, 0x135658u);
    ctx->pc = 0x135654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135650u;
            // 0x135654: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135EB0u;
    if (runtime->hasFunction(0x135EB0u)) {
        auto targetFn = runtime->lookupFunction(0x135EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135658u; }
        if (ctx->pc != 0x135658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135EB0_0x135eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135658u; }
        if (ctx->pc != 0x135658u) { return; }
    }
    ctx->pc = 0x135658u;
label_135658:
    // 0x135658: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x135658u;
    {
        const bool branch_taken_0x135658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13565Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135658u;
            // 0x13565c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135658) {
            ctx->pc = 0x13567Cu;
            goto label_13567c;
        }
    }
    ctx->pc = 0x135660u;
label_135660:
    // 0x135660: 0xc04da74  jal         func_1369D0
    ctx->pc = 0x135660u;
    SET_GPR_U32(ctx, 31, 0x135668u);
    ctx->pc = 0x135664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135660u;
            // 0x135664: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1369D0u;
    if (runtime->hasFunction(0x1369D0u)) {
        auto targetFn = runtime->lookupFunction(0x1369D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135668u; }
        if (ctx->pc != 0x135668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001369D0_0x1369d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135668u; }
        if (ctx->pc != 0x135668u) { return; }
    }
    ctx->pc = 0x135668u;
label_135668:
    // 0x135668: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x135668u;
    {
        const bool branch_taken_0x135668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13566Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135668u;
            // 0x13566c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135668) {
            ctx->pc = 0x13567Cu;
            goto label_13567c;
        }
    }
    ctx->pc = 0x135670u;
label_135670:
    // 0x135670: 0xc04dfb0  jal         func_137EC0
    ctx->pc = 0x135670u;
    SET_GPR_U32(ctx, 31, 0x135678u);
    ctx->pc = 0x135674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135670u;
            // 0x135674: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137EC0u;
    if (runtime->hasFunction(0x137EC0u)) {
        auto targetFn = runtime->lookupFunction(0x137EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135678u; }
        if (ctx->pc != 0x135678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137EC0_0x137ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135678u; }
        if (ctx->pc != 0x135678u) { return; }
    }
    ctx->pc = 0x135678u;
label_135678:
    // 0x135678: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x135678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13567c:
    // 0x13567c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13567cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_135680:
    // 0x135680: 0x3e00008  jr          $ra
    ctx->pc = 0x135680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135680u;
            // 0x135684: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x135688u;
    // 0x135688: 0x0  nop
    ctx->pc = 0x135688u;
    // NOP
    // 0x13568c: 0x0  nop
    ctx->pc = 0x13568cu;
    // NOP
}
