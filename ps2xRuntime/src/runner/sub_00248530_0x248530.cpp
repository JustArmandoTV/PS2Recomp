#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00248530
// Address: 0x248530 - 0x2486e0
void sub_00248530_0x248530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248530_0x248530");
#endif

    switch (ctx->pc) {
        case 0x248530u: goto label_248530;
        case 0x248534u: goto label_248534;
        case 0x248538u: goto label_248538;
        case 0x24853cu: goto label_24853c;
        case 0x248540u: goto label_248540;
        case 0x248544u: goto label_248544;
        case 0x248548u: goto label_248548;
        case 0x24854cu: goto label_24854c;
        case 0x248550u: goto label_248550;
        case 0x248554u: goto label_248554;
        case 0x248558u: goto label_248558;
        case 0x24855cu: goto label_24855c;
        case 0x248560u: goto label_248560;
        case 0x248564u: goto label_248564;
        case 0x248568u: goto label_248568;
        case 0x24856cu: goto label_24856c;
        case 0x248570u: goto label_248570;
        case 0x248574u: goto label_248574;
        case 0x248578u: goto label_248578;
        case 0x24857cu: goto label_24857c;
        case 0x248580u: goto label_248580;
        case 0x248584u: goto label_248584;
        case 0x248588u: goto label_248588;
        case 0x24858cu: goto label_24858c;
        case 0x248590u: goto label_248590;
        case 0x248594u: goto label_248594;
        case 0x248598u: goto label_248598;
        case 0x24859cu: goto label_24859c;
        case 0x2485a0u: goto label_2485a0;
        case 0x2485a4u: goto label_2485a4;
        case 0x2485a8u: goto label_2485a8;
        case 0x2485acu: goto label_2485ac;
        case 0x2485b0u: goto label_2485b0;
        case 0x2485b4u: goto label_2485b4;
        case 0x2485b8u: goto label_2485b8;
        case 0x2485bcu: goto label_2485bc;
        case 0x2485c0u: goto label_2485c0;
        case 0x2485c4u: goto label_2485c4;
        case 0x2485c8u: goto label_2485c8;
        case 0x2485ccu: goto label_2485cc;
        case 0x2485d0u: goto label_2485d0;
        case 0x2485d4u: goto label_2485d4;
        case 0x2485d8u: goto label_2485d8;
        case 0x2485dcu: goto label_2485dc;
        case 0x2485e0u: goto label_2485e0;
        case 0x2485e4u: goto label_2485e4;
        case 0x2485e8u: goto label_2485e8;
        case 0x2485ecu: goto label_2485ec;
        case 0x2485f0u: goto label_2485f0;
        case 0x2485f4u: goto label_2485f4;
        case 0x2485f8u: goto label_2485f8;
        case 0x2485fcu: goto label_2485fc;
        case 0x248600u: goto label_248600;
        case 0x248604u: goto label_248604;
        case 0x248608u: goto label_248608;
        case 0x24860cu: goto label_24860c;
        case 0x248610u: goto label_248610;
        case 0x248614u: goto label_248614;
        case 0x248618u: goto label_248618;
        case 0x24861cu: goto label_24861c;
        case 0x248620u: goto label_248620;
        case 0x248624u: goto label_248624;
        case 0x248628u: goto label_248628;
        case 0x24862cu: goto label_24862c;
        case 0x248630u: goto label_248630;
        case 0x248634u: goto label_248634;
        case 0x248638u: goto label_248638;
        case 0x24863cu: goto label_24863c;
        case 0x248640u: goto label_248640;
        case 0x248644u: goto label_248644;
        case 0x248648u: goto label_248648;
        case 0x24864cu: goto label_24864c;
        case 0x248650u: goto label_248650;
        case 0x248654u: goto label_248654;
        case 0x248658u: goto label_248658;
        case 0x24865cu: goto label_24865c;
        case 0x248660u: goto label_248660;
        case 0x248664u: goto label_248664;
        case 0x248668u: goto label_248668;
        case 0x24866cu: goto label_24866c;
        case 0x248670u: goto label_248670;
        case 0x248674u: goto label_248674;
        case 0x248678u: goto label_248678;
        case 0x24867cu: goto label_24867c;
        case 0x248680u: goto label_248680;
        case 0x248684u: goto label_248684;
        case 0x248688u: goto label_248688;
        case 0x24868cu: goto label_24868c;
        case 0x248690u: goto label_248690;
        case 0x248694u: goto label_248694;
        case 0x248698u: goto label_248698;
        case 0x24869cu: goto label_24869c;
        case 0x2486a0u: goto label_2486a0;
        case 0x2486a4u: goto label_2486a4;
        case 0x2486a8u: goto label_2486a8;
        case 0x2486acu: goto label_2486ac;
        case 0x2486b0u: goto label_2486b0;
        case 0x2486b4u: goto label_2486b4;
        case 0x2486b8u: goto label_2486b8;
        case 0x2486bcu: goto label_2486bc;
        case 0x2486c0u: goto label_2486c0;
        case 0x2486c4u: goto label_2486c4;
        case 0x2486c8u: goto label_2486c8;
        case 0x2486ccu: goto label_2486cc;
        case 0x2486d0u: goto label_2486d0;
        case 0x2486d4u: goto label_2486d4;
        case 0x2486d8u: goto label_2486d8;
        case 0x2486dcu: goto label_2486dc;
        default: break;
    }

    ctx->pc = 0x248530u;

label_248530:
    // 0x248530: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x248530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_248534:
    // 0x248534: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x248534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_248538:
    // 0x248538: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x248538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_24853c:
    // 0x24853c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x24853cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_248540:
    // 0x248540: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x248540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_248544:
    // 0x248544: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x248544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_248548:
    // 0x248548: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x248548u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24854c:
    // 0x24854c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24854cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_248550:
    // 0x248550: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x248550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_248554:
    // 0x248554: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x248554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_248558:
    // 0x248558: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x248558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_24855c:
    // 0x24855c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x24855cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_248560:
    // 0x248560: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
label_248564:
    if (ctx->pc == 0x248564u) {
        ctx->pc = 0x248564u;
            // 0x248564: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248568u;
        goto label_248568;
    }
    ctx->pc = 0x248560u;
    {
        const bool branch_taken_0x248560 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x248564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248560u;
            // 0x248564: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248560) {
            ctx->pc = 0x2485C8u;
            goto label_2485c8;
        }
    }
    ctx->pc = 0x248568u;
label_248568:
    // 0x248568: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x248568u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24856c:
    // 0x24856c: 0x0  nop
    ctx->pc = 0x24856cu;
    // NOP
label_248570:
    // 0x248570: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x248570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_248574:
    // 0x248574: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x248574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_248578:
    // 0x248578: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x248578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_24857c:
    // 0x24857c: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x24857cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_248580:
    // 0x248580: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_248584:
    if (ctx->pc == 0x248584u) {
        ctx->pc = 0x248584u;
            // 0x248584: 0x8c870000  lw          $a3, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x248588u;
        goto label_248588;
    }
    ctx->pc = 0x248580u;
    {
        const bool branch_taken_0x248580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x248584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248580u;
            // 0x248584: 0x8c870000  lw          $a3, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248580) {
            ctx->pc = 0x248590u;
            goto label_248590;
        }
    }
    ctx->pc = 0x248588u;
label_248588:
    // 0x248588: 0x10000002  b           . + 4 + (0x2 << 2)
label_24858c:
    if (ctx->pc == 0x24858Cu) {
        ctx->pc = 0x24858Cu;
            // 0x24858c: 0x8e280000  lw          $t0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x248590u;
        goto label_248590;
    }
    ctx->pc = 0x248588u;
    {
        const bool branch_taken_0x248588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24858Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248588u;
            // 0x24858c: 0x8e280000  lw          $t0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248588) {
            ctx->pc = 0x248594u;
            goto label_248594;
        }
    }
    ctx->pc = 0x248590u;
label_248590:
    // 0x248590: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x248590u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_248594:
    // 0x248594: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x248594u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_248598:
    // 0x248598: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x248598u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_24859c:
    // 0x24859c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24859cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2485a0:
    // 0x2485a0: 0x24a5cf38  addiu       $a1, $a1, -0x30C8
    ctx->pc = 0x2485a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954808));
label_2485a4:
    // 0x2485a4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2485a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2485a8:
    // 0x2485a8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2485a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2485ac:
    // 0x2485ac: 0x320f809  jalr        $t9
label_2485b0:
    if (ctx->pc == 0x2485B0u) {
        ctx->pc = 0x2485B0u;
            // 0x2485b0: 0x24090200  addiu       $t1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->pc = 0x2485B4u;
        goto label_2485b4;
    }
    ctx->pc = 0x2485ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2485B4u);
        ctx->pc = 0x2485B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2485ACu;
            // 0x2485b0: 0x24090200  addiu       $t1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2485B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2485B4u; }
            if (ctx->pc != 0x2485B4u) { return; }
        }
        }
    }
    ctx->pc = 0x2485B4u;
label_2485b4:
    // 0x2485b4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2485b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2485b8:
    // 0x2485b8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2485b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2485bc:
    // 0x2485bc: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x2485bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2485c0:
    // 0x2485c0: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
label_2485c4:
    if (ctx->pc == 0x2485C4u) {
        ctx->pc = 0x2485C4u;
            // 0x2485c4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x2485C8u;
        goto label_2485c8;
    }
    ctx->pc = 0x2485C0u;
    {
        const bool branch_taken_0x2485c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2485C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2485C0u;
            // 0x2485c4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2485c0) {
            ctx->pc = 0x248570u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_248570;
        }
    }
    ctx->pc = 0x2485C8u;
label_2485c8:
    // 0x2485c8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2485c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2485cc:
    // 0x2485cc: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2485ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2485d0:
    // 0x2485d0: 0x10200037  beqz        $at, . + 4 + (0x37 << 2)
label_2485d4:
    if (ctx->pc == 0x2485D4u) {
        ctx->pc = 0x2485D4u;
            // 0x2485d4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2485D8u;
        goto label_2485d8;
    }
    ctx->pc = 0x2485D0u;
    {
        const bool branch_taken_0x2485d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2485D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2485D0u;
            // 0x2485d4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2485d0) {
            ctx->pc = 0x2486B0u;
            goto label_2486b0;
        }
    }
    ctx->pc = 0x2485D8u;
label_2485d8:
    // 0x2485d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2485d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2485dc:
    // 0x2485dc: 0x0  nop
    ctx->pc = 0x2485dcu;
    // NOP
label_2485e0:
    // 0x2485e0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2485e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2485e4:
    // 0x2485e4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2485e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2485e8:
    // 0x2485e8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2485e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2485ec:
    // 0x2485ec: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x2485ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_2485f0:
    // 0x2485f0: 0x8c940000  lw          $s4, 0x0($a0)
    ctx->pc = 0x2485f0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2485f4:
    // 0x2485f4: 0x16a30004  bne         $s5, $v1, . + 4 + (0x4 << 2)
label_2485f8:
    if (ctx->pc == 0x2485F8u) {
        ctx->pc = 0x2485F8u;
            // 0x2485f8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x2485FCu;
        goto label_2485fc;
    }
    ctx->pc = 0x2485F4u;
    {
        const bool branch_taken_0x2485f4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        ctx->pc = 0x2485F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2485F4u;
            // 0x2485f8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2485f4) {
            ctx->pc = 0x248608u;
            goto label_248608;
        }
    }
    ctx->pc = 0x2485FCu;
label_2485fc:
    // 0x2485fc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2485fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_248600:
    // 0x248600: 0x10000002  b           . + 4 + (0x2 << 2)
label_248604:
    if (ctx->pc == 0x248604u) {
        ctx->pc = 0x248604u;
            // 0x248604: 0x2839821  addu        $s3, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->pc = 0x248608u;
        goto label_248608;
    }
    ctx->pc = 0x248600u;
    {
        const bool branch_taken_0x248600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248600u;
            // 0x248604: 0x2839821  addu        $s3, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248600) {
            ctx->pc = 0x24860Cu;
            goto label_24860c;
        }
    }
    ctx->pc = 0x248608u;
label_248608:
    // 0x248608: 0x26930200  addiu       $s3, $s4, 0x200
    ctx->pc = 0x248608u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 512));
label_24860c:
    // 0x24860c: 0x293082b  sltu        $at, $s4, $s3
    ctx->pc = 0x24860cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_248610:
    // 0x248610: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
label_248614:
    if (ctx->pc == 0x248614u) {
        ctx->pc = 0x248618u;
        goto label_248618;
    }
    ctx->pc = 0x248610u;
    {
        const bool branch_taken_0x248610 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x248610) {
            ctx->pc = 0x2486A0u;
            goto label_2486a0;
        }
    }
    ctx->pc = 0x248618u;
label_248618:
    // 0x248618: 0x92840000  lbu         $a0, 0x0($s4)
    ctx->pc = 0x248618u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_24861c:
    // 0x24861c: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
label_248620:
    if (ctx->pc == 0x248620u) {
        ctx->pc = 0x248620u;
            // 0x248620: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x248624u;
        goto label_248624;
    }
    ctx->pc = 0x24861Cu;
    {
        const bool branch_taken_0x24861c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x248620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24861Cu;
            // 0x248620: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24861c) {
            ctx->pc = 0x248688u;
            goto label_248688;
        }
    }
    ctx->pc = 0x248624u;
label_248624:
    // 0x248624: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
label_248628:
    if (ctx->pc == 0x248628u) {
        ctx->pc = 0x24862Cu;
        goto label_24862c;
    }
    ctx->pc = 0x248624u;
    {
        const bool branch_taken_0x248624 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x248624) {
            ctx->pc = 0x248668u;
            goto label_248668;
        }
    }
    ctx->pc = 0x24862Cu;
label_24862c:
    // 0x24862c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x24862cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_248630:
    // 0x248630: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
label_248634:
    if (ctx->pc == 0x248634u) {
        ctx->pc = 0x248634u;
            // 0x248634: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x248638u;
        goto label_248638;
    }
    ctx->pc = 0x248630u;
    {
        const bool branch_taken_0x248630 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x248634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248630u;
            // 0x248634: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248630) {
            ctx->pc = 0x248668u;
            goto label_248668;
        }
    }
    ctx->pc = 0x248638u;
label_248638:
    // 0x248638: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_24863c:
    if (ctx->pc == 0x24863Cu) {
        ctx->pc = 0x248640u;
        goto label_248640;
    }
    ctx->pc = 0x248638u;
    {
        const bool branch_taken_0x248638 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x248638) {
            ctx->pc = 0x248648u;
            goto label_248648;
        }
    }
    ctx->pc = 0x248640u;
label_248640:
    // 0x248640: 0x10000011  b           . + 4 + (0x11 << 2)
label_248644:
    if (ctx->pc == 0x248644u) {
        ctx->pc = 0x248648u;
        goto label_248648;
    }
    ctx->pc = 0x248640u;
    {
        const bool branch_taken_0x248640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248640) {
            ctx->pc = 0x248688u;
            goto label_248688;
        }
    }
    ctx->pc = 0x248648u;
label_248648:
    // 0x248648: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x248648u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24864c:
    // 0x24864c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x24864cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_248650:
    // 0x248650: 0x8e870004  lw          $a3, 0x4($s4)
    ctx->pc = 0x248650u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_248654:
    // 0x248654: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248658:
    // 0x248658: 0x24a5cf30  addiu       $a1, $a1, -0x30D0
    ctx->pc = 0x248658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954800));
label_24865c:
    // 0x24865c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x24865cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_248660:
    // 0x248660: 0x320f809  jalr        $t9
label_248664:
    if (ctx->pc == 0x248664u) {
        ctx->pc = 0x248664u;
            // 0x248664: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x248668u;
        goto label_248668;
    }
    ctx->pc = 0x248660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x248668u);
        ctx->pc = 0x248664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248660u;
            // 0x248664: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x248668u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x248668u; }
            if (ctx->pc != 0x248668u) { return; }
        }
        }
    }
    ctx->pc = 0x248668u;
label_248668:
    // 0x248668: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x248668u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24866c:
    // 0x24866c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x24866cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_248670:
    // 0x248670: 0x8e87000c  lw          $a3, 0xC($s4)
    ctx->pc = 0x248670u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_248674:
    // 0x248674: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248678:
    // 0x248678: 0x24a5cf40  addiu       $a1, $a1, -0x30C0
    ctx->pc = 0x248678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954816));
label_24867c:
    // 0x24867c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x24867cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_248680:
    // 0x248680: 0x320f809  jalr        $t9
label_248684:
    if (ctx->pc == 0x248684u) {
        ctx->pc = 0x248684u;
            // 0x248684: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x248688u;
        goto label_248688;
    }
    ctx->pc = 0x248680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x248688u);
        ctx->pc = 0x248684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248680u;
            // 0x248684: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x248688u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x248688u; }
            if (ctx->pc != 0x248688u) { return; }
        }
        }
    }
    ctx->pc = 0x248688u;
label_248688:
    // 0x248688: 0x92830003  lbu         $v1, 0x3($s4)
    ctx->pc = 0x248688u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
label_24868c:
    // 0x24868c: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x24868cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_248690:
    // 0x248690: 0x293182b  sltu        $v1, $s4, $s3
    ctx->pc = 0x248690u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_248694:
    // 0x248694: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
label_248698:
    if (ctx->pc == 0x248698u) {
        ctx->pc = 0x24869Cu;
        goto label_24869c;
    }
    ctx->pc = 0x248694u;
    {
        const bool branch_taken_0x248694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x248694) {
            ctx->pc = 0x248618u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_248618;
        }
    }
    ctx->pc = 0x24869Cu;
label_24869c:
    // 0x24869c: 0x0  nop
    ctx->pc = 0x24869cu;
    // NOP
label_2486a0:
    // 0x2486a0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2486a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2486a4:
    // 0x2486a4: 0x2a3182a  slt         $v1, $s5, $v1
    ctx->pc = 0x2486a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2486a8:
    // 0x2486a8: 0x1460ffcd  bnez        $v1, . + 4 + (-0x33 << 2)
label_2486ac:
    if (ctx->pc == 0x2486ACu) {
        ctx->pc = 0x2486B0u;
        goto label_2486b0;
    }
    ctx->pc = 0x2486A8u;
    {
        const bool branch_taken_0x2486a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2486a8) {
            ctx->pc = 0x2485E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2485e0;
        }
    }
    ctx->pc = 0x2486B0u;
label_2486b0:
    // 0x2486b0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2486b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2486b4:
    // 0x2486b4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2486b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2486b8:
    // 0x2486b8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2486b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2486bc:
    // 0x2486bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2486bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2486c0:
    // 0x2486c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2486c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2486c4:
    // 0x2486c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2486c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2486c8:
    // 0x2486c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2486c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2486cc:
    // 0x2486cc: 0x3e00008  jr          $ra
label_2486d0:
    if (ctx->pc == 0x2486D0u) {
        ctx->pc = 0x2486D0u;
            // 0x2486d0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2486D4u;
        goto label_2486d4;
    }
    ctx->pc = 0x2486CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2486D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2486CCu;
            // 0x2486d0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2486D4u;
label_2486d4:
    // 0x2486d4: 0x0  nop
    ctx->pc = 0x2486d4u;
    // NOP
label_2486d8:
    // 0x2486d8: 0x0  nop
    ctx->pc = 0x2486d8u;
    // NOP
label_2486dc:
    // 0x2486dc: 0x0  nop
    ctx->pc = 0x2486dcu;
    // NOP
}
