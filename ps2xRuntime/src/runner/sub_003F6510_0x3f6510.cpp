#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F6510
// Address: 0x3f6510 - 0x3f67b0
void sub_003F6510_0x3f6510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F6510_0x3f6510");
#endif

    switch (ctx->pc) {
        case 0x3f6510u: goto label_3f6510;
        case 0x3f6514u: goto label_3f6514;
        case 0x3f6518u: goto label_3f6518;
        case 0x3f651cu: goto label_3f651c;
        case 0x3f6520u: goto label_3f6520;
        case 0x3f6524u: goto label_3f6524;
        case 0x3f6528u: goto label_3f6528;
        case 0x3f652cu: goto label_3f652c;
        case 0x3f6530u: goto label_3f6530;
        case 0x3f6534u: goto label_3f6534;
        case 0x3f6538u: goto label_3f6538;
        case 0x3f653cu: goto label_3f653c;
        case 0x3f6540u: goto label_3f6540;
        case 0x3f6544u: goto label_3f6544;
        case 0x3f6548u: goto label_3f6548;
        case 0x3f654cu: goto label_3f654c;
        case 0x3f6550u: goto label_3f6550;
        case 0x3f6554u: goto label_3f6554;
        case 0x3f6558u: goto label_3f6558;
        case 0x3f655cu: goto label_3f655c;
        case 0x3f6560u: goto label_3f6560;
        case 0x3f6564u: goto label_3f6564;
        case 0x3f6568u: goto label_3f6568;
        case 0x3f656cu: goto label_3f656c;
        case 0x3f6570u: goto label_3f6570;
        case 0x3f6574u: goto label_3f6574;
        case 0x3f6578u: goto label_3f6578;
        case 0x3f657cu: goto label_3f657c;
        case 0x3f6580u: goto label_3f6580;
        case 0x3f6584u: goto label_3f6584;
        case 0x3f6588u: goto label_3f6588;
        case 0x3f658cu: goto label_3f658c;
        case 0x3f6590u: goto label_3f6590;
        case 0x3f6594u: goto label_3f6594;
        case 0x3f6598u: goto label_3f6598;
        case 0x3f659cu: goto label_3f659c;
        case 0x3f65a0u: goto label_3f65a0;
        case 0x3f65a4u: goto label_3f65a4;
        case 0x3f65a8u: goto label_3f65a8;
        case 0x3f65acu: goto label_3f65ac;
        case 0x3f65b0u: goto label_3f65b0;
        case 0x3f65b4u: goto label_3f65b4;
        case 0x3f65b8u: goto label_3f65b8;
        case 0x3f65bcu: goto label_3f65bc;
        case 0x3f65c0u: goto label_3f65c0;
        case 0x3f65c4u: goto label_3f65c4;
        case 0x3f65c8u: goto label_3f65c8;
        case 0x3f65ccu: goto label_3f65cc;
        case 0x3f65d0u: goto label_3f65d0;
        case 0x3f65d4u: goto label_3f65d4;
        case 0x3f65d8u: goto label_3f65d8;
        case 0x3f65dcu: goto label_3f65dc;
        case 0x3f65e0u: goto label_3f65e0;
        case 0x3f65e4u: goto label_3f65e4;
        case 0x3f65e8u: goto label_3f65e8;
        case 0x3f65ecu: goto label_3f65ec;
        case 0x3f65f0u: goto label_3f65f0;
        case 0x3f65f4u: goto label_3f65f4;
        case 0x3f65f8u: goto label_3f65f8;
        case 0x3f65fcu: goto label_3f65fc;
        case 0x3f6600u: goto label_3f6600;
        case 0x3f6604u: goto label_3f6604;
        case 0x3f6608u: goto label_3f6608;
        case 0x3f660cu: goto label_3f660c;
        case 0x3f6610u: goto label_3f6610;
        case 0x3f6614u: goto label_3f6614;
        case 0x3f6618u: goto label_3f6618;
        case 0x3f661cu: goto label_3f661c;
        case 0x3f6620u: goto label_3f6620;
        case 0x3f6624u: goto label_3f6624;
        case 0x3f6628u: goto label_3f6628;
        case 0x3f662cu: goto label_3f662c;
        case 0x3f6630u: goto label_3f6630;
        case 0x3f6634u: goto label_3f6634;
        case 0x3f6638u: goto label_3f6638;
        case 0x3f663cu: goto label_3f663c;
        case 0x3f6640u: goto label_3f6640;
        case 0x3f6644u: goto label_3f6644;
        case 0x3f6648u: goto label_3f6648;
        case 0x3f664cu: goto label_3f664c;
        case 0x3f6650u: goto label_3f6650;
        case 0x3f6654u: goto label_3f6654;
        case 0x3f6658u: goto label_3f6658;
        case 0x3f665cu: goto label_3f665c;
        case 0x3f6660u: goto label_3f6660;
        case 0x3f6664u: goto label_3f6664;
        case 0x3f6668u: goto label_3f6668;
        case 0x3f666cu: goto label_3f666c;
        case 0x3f6670u: goto label_3f6670;
        case 0x3f6674u: goto label_3f6674;
        case 0x3f6678u: goto label_3f6678;
        case 0x3f667cu: goto label_3f667c;
        case 0x3f6680u: goto label_3f6680;
        case 0x3f6684u: goto label_3f6684;
        case 0x3f6688u: goto label_3f6688;
        case 0x3f668cu: goto label_3f668c;
        case 0x3f6690u: goto label_3f6690;
        case 0x3f6694u: goto label_3f6694;
        case 0x3f6698u: goto label_3f6698;
        case 0x3f669cu: goto label_3f669c;
        case 0x3f66a0u: goto label_3f66a0;
        case 0x3f66a4u: goto label_3f66a4;
        case 0x3f66a8u: goto label_3f66a8;
        case 0x3f66acu: goto label_3f66ac;
        case 0x3f66b0u: goto label_3f66b0;
        case 0x3f66b4u: goto label_3f66b4;
        case 0x3f66b8u: goto label_3f66b8;
        case 0x3f66bcu: goto label_3f66bc;
        case 0x3f66c0u: goto label_3f66c0;
        case 0x3f66c4u: goto label_3f66c4;
        case 0x3f66c8u: goto label_3f66c8;
        case 0x3f66ccu: goto label_3f66cc;
        case 0x3f66d0u: goto label_3f66d0;
        case 0x3f66d4u: goto label_3f66d4;
        case 0x3f66d8u: goto label_3f66d8;
        case 0x3f66dcu: goto label_3f66dc;
        case 0x3f66e0u: goto label_3f66e0;
        case 0x3f66e4u: goto label_3f66e4;
        case 0x3f66e8u: goto label_3f66e8;
        case 0x3f66ecu: goto label_3f66ec;
        case 0x3f66f0u: goto label_3f66f0;
        case 0x3f66f4u: goto label_3f66f4;
        case 0x3f66f8u: goto label_3f66f8;
        case 0x3f66fcu: goto label_3f66fc;
        case 0x3f6700u: goto label_3f6700;
        case 0x3f6704u: goto label_3f6704;
        case 0x3f6708u: goto label_3f6708;
        case 0x3f670cu: goto label_3f670c;
        case 0x3f6710u: goto label_3f6710;
        case 0x3f6714u: goto label_3f6714;
        case 0x3f6718u: goto label_3f6718;
        case 0x3f671cu: goto label_3f671c;
        case 0x3f6720u: goto label_3f6720;
        case 0x3f6724u: goto label_3f6724;
        case 0x3f6728u: goto label_3f6728;
        case 0x3f672cu: goto label_3f672c;
        case 0x3f6730u: goto label_3f6730;
        case 0x3f6734u: goto label_3f6734;
        case 0x3f6738u: goto label_3f6738;
        case 0x3f673cu: goto label_3f673c;
        case 0x3f6740u: goto label_3f6740;
        case 0x3f6744u: goto label_3f6744;
        case 0x3f6748u: goto label_3f6748;
        case 0x3f674cu: goto label_3f674c;
        case 0x3f6750u: goto label_3f6750;
        case 0x3f6754u: goto label_3f6754;
        case 0x3f6758u: goto label_3f6758;
        case 0x3f675cu: goto label_3f675c;
        case 0x3f6760u: goto label_3f6760;
        case 0x3f6764u: goto label_3f6764;
        case 0x3f6768u: goto label_3f6768;
        case 0x3f676cu: goto label_3f676c;
        case 0x3f6770u: goto label_3f6770;
        case 0x3f6774u: goto label_3f6774;
        case 0x3f6778u: goto label_3f6778;
        case 0x3f677cu: goto label_3f677c;
        case 0x3f6780u: goto label_3f6780;
        case 0x3f6784u: goto label_3f6784;
        case 0x3f6788u: goto label_3f6788;
        case 0x3f678cu: goto label_3f678c;
        case 0x3f6790u: goto label_3f6790;
        case 0x3f6794u: goto label_3f6794;
        case 0x3f6798u: goto label_3f6798;
        case 0x3f679cu: goto label_3f679c;
        case 0x3f67a0u: goto label_3f67a0;
        case 0x3f67a4u: goto label_3f67a4;
        case 0x3f67a8u: goto label_3f67a8;
        case 0x3f67acu: goto label_3f67ac;
        default: break;
    }

    ctx->pc = 0x3f6510u;

label_3f6510:
    // 0x3f6510: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3f6510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3f6514:
    // 0x3f6514: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f6514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f6518:
    // 0x3f6518: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3f6518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3f651c:
    // 0x3f651c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3f651cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3f6520:
    // 0x3f6520: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f6520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3f6524:
    // 0x3f6524: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3f6524u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f6528:
    // 0x3f6528: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f6528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f652c:
    // 0x3f652c: 0x26440058  addiu       $a0, $s2, 0x58
    ctx->pc = 0x3f652cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
label_3f6530:
    // 0x3f6530: 0xc04a576  jal         func_1295D8
label_3f6534:
    if (ctx->pc == 0x3F6534u) {
        ctx->pc = 0x3F6534u;
            // 0x3f6534: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x3F6538u;
        goto label_3f6538;
    }
    ctx->pc = 0x3F6530u;
    SET_GPR_U32(ctx, 31, 0x3F6538u);
    ctx->pc = 0x3F6534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6530u;
            // 0x3f6534: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6538u; }
        if (ctx->pc != 0x3F6538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6538u; }
        if (ctx->pc != 0x3F6538u) { return; }
    }
    ctx->pc = 0x3F6538u;
label_3f6538:
    // 0x3f6538: 0x264400f0  addiu       $a0, $s2, 0xF0
    ctx->pc = 0x3f6538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
label_3f653c:
    // 0x3f653c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f653cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f6540:
    // 0x3f6540: 0xc04a576  jal         func_1295D8
label_3f6544:
    if (ctx->pc == 0x3F6544u) {
        ctx->pc = 0x3F6544u;
            // 0x3f6544: 0x24060140  addiu       $a2, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->pc = 0x3F6548u;
        goto label_3f6548;
    }
    ctx->pc = 0x3F6540u;
    SET_GPR_U32(ctx, 31, 0x3F6548u);
    ctx->pc = 0x3F6544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6540u;
            // 0x3f6544: 0x24060140  addiu       $a2, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6548u; }
        if (ctx->pc != 0x3F6548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6548u; }
        if (ctx->pc != 0x3F6548u) { return; }
    }
    ctx->pc = 0x3F6548u;
label_3f6548:
    // 0x3f6548: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x3f6548u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
label_3f654c:
    // 0x3f654c: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x3f654cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3f6550:
    // 0x3f6550: 0xae400234  sw          $zero, 0x234($s2)
    ctx->pc = 0x3f6550u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 564), GPR_U32(ctx, 0));
label_3f6554:
    // 0x3f6554: 0x265000d0  addiu       $s0, $s2, 0xD0
    ctx->pc = 0x3f6554u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
label_3f6558:
    // 0x3f6558: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3f6558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f655c:
    // 0x3f655c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_3f6560:
    if (ctx->pc == 0x3F6560u) {
        ctx->pc = 0x3F6564u;
        goto label_3f6564;
    }
    ctx->pc = 0x3F655Cu;
    {
        const bool branch_taken_0x3f655c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f655c) {
            ctx->pc = 0x3F6578u;
            goto label_3f6578;
        }
    }
    ctx->pc = 0x3F6564u;
label_3f6564:
    // 0x3f6564: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f6564u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f6568:
    // 0x3f6568: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3f6568u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3f656c:
    // 0x3f656c: 0x320f809  jalr        $t9
label_3f6570:
    if (ctx->pc == 0x3F6570u) {
        ctx->pc = 0x3F6570u;
            // 0x3f6570: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F6574u;
        goto label_3f6574;
    }
    ctx->pc = 0x3F656Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F6574u);
        ctx->pc = 0x3F6570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F656Cu;
            // 0x3f6570: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F6574u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F6574u; }
            if (ctx->pc != 0x3F6574u) { return; }
        }
        }
    }
    ctx->pc = 0x3F6574u;
label_3f6574:
    // 0x3f6574: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3f6574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3f6578:
    // 0x3f6578: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3f6578u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3f657c:
    // 0x3f657c: 0x1620fff6  bnez        $s1, . + 4 + (-0xA << 2)
label_3f6580:
    if (ctx->pc == 0x3F6580u) {
        ctx->pc = 0x3F6580u;
            // 0x3f6580: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x3F6584u;
        goto label_3f6584;
    }
    ctx->pc = 0x3F657Cu;
    {
        const bool branch_taken_0x3f657c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F6580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F657Cu;
            // 0x3f6580: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f657c) {
            ctx->pc = 0x3F6558u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f6558;
        }
    }
    ctx->pc = 0x3F6584u;
label_3f6584:
    // 0x3f6584: 0x264400d0  addiu       $a0, $s2, 0xD0
    ctx->pc = 0x3f6584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
label_3f6588:
    // 0x3f6588: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f6588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f658c:
    // 0x3f658c: 0xc04a576  jal         func_1295D8
label_3f6590:
    if (ctx->pc == 0x3F6590u) {
        ctx->pc = 0x3F6590u;
            // 0x3f6590: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x3F6594u;
        goto label_3f6594;
    }
    ctx->pc = 0x3F658Cu;
    SET_GPR_U32(ctx, 31, 0x3F6594u);
    ctx->pc = 0x3F6590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F658Cu;
            // 0x3f6590: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6594u; }
        if (ctx->pc != 0x3F6594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6594u; }
        if (ctx->pc != 0x3F6594u) { return; }
    }
    ctx->pc = 0x3F6594u;
label_3f6594:
    // 0x3f6594: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3f6594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3f6598:
    // 0x3f6598: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f6598u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f659c:
    // 0x3f659c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f659cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f65a0:
    // 0x3f65a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f65a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f65a4:
    // 0x3f65a4: 0x3e00008  jr          $ra
label_3f65a8:
    if (ctx->pc == 0x3F65A8u) {
        ctx->pc = 0x3F65A8u;
            // 0x3f65a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3F65ACu;
        goto label_3f65ac;
    }
    ctx->pc = 0x3F65A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F65A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F65A4u;
            // 0x3f65a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F65ACu;
label_3f65ac:
    // 0x3f65ac: 0x0  nop
    ctx->pc = 0x3f65acu;
    // NOP
label_3f65b0:
    // 0x3f65b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3f65b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3f65b4:
    // 0x3f65b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f65b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f65b8:
    // 0x3f65b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3f65b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3f65bc:
    // 0x3f65bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3f65bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f65c0:
    // 0x3f65c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3f65c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3f65c4:
    // 0x3f65c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f65c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3f65c8:
    // 0x3f65c8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3f65c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f65cc:
    // 0x3f65cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f65ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f65d0:
    // 0x3f65d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f65d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f65d4:
    // 0x3f65d4: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x3f65d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3f65d8:
    // 0x3f65d8: 0x8ca60d98  lw          $a2, 0xD98($a1)
    ctx->pc = 0x3f65d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3480)));
label_3f65dc:
    // 0x3f65dc: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x3f65dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3f65e0:
    // 0x3f65e0: 0xc31804  sllv        $v1, $v1, $a2
    ctx->pc = 0x3f65e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
label_3f65e4:
    // 0x3f65e4: 0x68080  sll         $s0, $a2, 2
    ctx->pc = 0x3f65e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3f65e8:
    // 0x3f65e8: 0x603027  not         $a2, $v1
    ctx->pc = 0x3f65e8u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_3f65ec:
    // 0x3f65ec: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x3f65ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_3f65f0:
    // 0x3f65f0: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x3f65f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_3f65f4:
    // 0x3f65f4: 0xae240054  sw          $a0, 0x54($s1)
    ctx->pc = 0x3f65f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 4));
label_3f65f8:
    // 0x3f65f8: 0xac600058  sw          $zero, 0x58($v1)
    ctx->pc = 0x3f65f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 0));
label_3f65fc:
    // 0x3f65fc: 0x8ca30e34  lw          $v1, 0xE34($a1)
    ctx->pc = 0x3f65fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3636)));
label_3f6600:
    // 0x3f6600: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_3f6604:
    if (ctx->pc == 0x3F6604u) {
        ctx->pc = 0x3F6604u;
            // 0x3f6604: 0x64120001  daddiu      $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x3F6608u;
        goto label_3f6608;
    }
    ctx->pc = 0x3F6600u;
    {
        const bool branch_taken_0x3f6600 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3F6604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6600u;
            // 0x3f6604: 0x64120001  daddiu      $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6600) {
            ctx->pc = 0x3F6618u;
            goto label_3f6618;
        }
    }
    ctx->pc = 0x3F6608u;
label_3f6608:
    // 0x3f6608: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3f6608u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3f660c:
    // 0x3f660c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3f6610:
    if (ctx->pc == 0x3F6610u) {
        ctx->pc = 0x3F6614u;
        goto label_3f6614;
    }
    ctx->pc = 0x3F660Cu;
    {
        const bool branch_taken_0x3f660c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f660c) {
            ctx->pc = 0x3F6618u;
            goto label_3f6618;
        }
    }
    ctx->pc = 0x3F6614u;
label_3f6614:
    // 0x3f6614: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3f6614u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f6618:
    // 0x3f6618: 0x14e00006  bnez        $a3, . + 4 + (0x6 << 2)
label_3f661c:
    if (ctx->pc == 0x3F661Cu) {
        ctx->pc = 0x3F6620u;
        goto label_3f6620;
    }
    ctx->pc = 0x3F6618u;
    {
        const bool branch_taken_0x3f6618 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f6618) {
            ctx->pc = 0x3F6634u;
            goto label_3f6634;
        }
    }
    ctx->pc = 0x3F6620u;
label_3f6620:
    // 0x3f6620: 0xc075eb4  jal         func_1D7AD0
label_3f6624:
    if (ctx->pc == 0x3F6624u) {
        ctx->pc = 0x3F6624u;
            // 0x3f6624: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F6628u;
        goto label_3f6628;
    }
    ctx->pc = 0x3F6620u;
    SET_GPR_U32(ctx, 31, 0x3F6628u);
    ctx->pc = 0x3F6624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6620u;
            // 0x3f6624: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6628u; }
        if (ctx->pc != 0x3F6628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6628u; }
        if (ctx->pc != 0x3F6628u) { return; }
    }
    ctx->pc = 0x3F6628u;
label_3f6628:
    // 0x3f6628: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3f662c:
    if (ctx->pc == 0x3F662Cu) {
        ctx->pc = 0x3F6630u;
        goto label_3f6630;
    }
    ctx->pc = 0x3F6628u;
    {
        const bool branch_taken_0x3f6628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f6628) {
            ctx->pc = 0x3F6634u;
            goto label_3f6634;
        }
    }
    ctx->pc = 0x3F6630u;
label_3f6630:
    // 0x3f6630: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3f6630u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f6634:
    // 0x3f6634: 0x56400006  bnel        $s2, $zero, . + 4 + (0x6 << 2)
label_3f6638:
    if (ctx->pc == 0x3F6638u) {
        ctx->pc = 0x3F6638u;
            // 0x3f6638: 0x2111821  addu        $v1, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->pc = 0x3F663Cu;
        goto label_3f663c;
    }
    ctx->pc = 0x3F6634u;
    {
        const bool branch_taken_0x3f6634 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f6634) {
            ctx->pc = 0x3F6638u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6634u;
            // 0x3f6638: 0x2111821  addu        $v1, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F6650u;
            goto label_3f6650;
        }
    }
    ctx->pc = 0x3F663Cu;
label_3f663c:
    // 0x3f663c: 0x8e640e34  lw          $a0, 0xE34($s3)
    ctx->pc = 0x3f663cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
label_3f6640:
    // 0x3f6640: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3f6640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3f6644:
    // 0x3f6644: 0x5483000c  bnel        $a0, $v1, . + 4 + (0xC << 2)
label_3f6648:
    if (ctx->pc == 0x3F6648u) {
        ctx->pc = 0x3F6648u;
            // 0x3f6648: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x3F664Cu;
        goto label_3f664c;
    }
    ctx->pc = 0x3F6644u;
    {
        const bool branch_taken_0x3f6644 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f6644) {
            ctx->pc = 0x3F6648u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6644u;
            // 0x3f6648: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F6678u;
            goto label_3f6678;
        }
    }
    ctx->pc = 0x3F664Cu;
label_3f664c:
    // 0x3f664c: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x3f664cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_3f6650:
    // 0x3f6650: 0x8c6400d0  lw          $a0, 0xD0($v1)
    ctx->pc = 0x3f6650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
label_3f6654:
    // 0x3f6654: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_3f6658:
    if (ctx->pc == 0x3F6658u) {
        ctx->pc = 0x3F665Cu;
        goto label_3f665c;
    }
    ctx->pc = 0x3F6654u;
    {
        const bool branch_taken_0x3f6654 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6654) {
            ctx->pc = 0x3F6674u;
            goto label_3f6674;
        }
    }
    ctx->pc = 0x3F665Cu;
label_3f665c:
    // 0x3f665c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f665cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f6660:
    // 0x3f6660: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3f6660u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3f6664:
    // 0x3f6664: 0x320f809  jalr        $t9
label_3f6668:
    if (ctx->pc == 0x3F6668u) {
        ctx->pc = 0x3F6668u;
            // 0x3f6668: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F666Cu;
        goto label_3f666c;
    }
    ctx->pc = 0x3F6664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F666Cu);
        ctx->pc = 0x3F6668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6664u;
            // 0x3f6668: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F666Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F666Cu; }
            if (ctx->pc != 0x3F666Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3F666Cu;
label_3f666c:
    // 0x3f666c: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x3f666cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_3f6670:
    // 0x3f6670: 0xac6000d0  sw          $zero, 0xD0($v1)
    ctx->pc = 0x3f6670u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 208), GPR_U32(ctx, 0));
label_3f6674:
    // 0x3f6674: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3f6674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3f6678:
    // 0x3f6678: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3f6678u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f667c:
    // 0x3f667c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f667cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f6680:
    // 0x3f6680: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f6680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f6684:
    // 0x3f6684: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f6684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f6688:
    // 0x3f6688: 0x3e00008  jr          $ra
label_3f668c:
    if (ctx->pc == 0x3F668Cu) {
        ctx->pc = 0x3F668Cu;
            // 0x3f668c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3F6690u;
        goto label_3f6690;
    }
    ctx->pc = 0x3F6688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F668Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6688u;
            // 0x3f668c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F6690u;
label_3f6690:
    // 0x3f6690: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3f6690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3f6694:
    // 0x3f6694: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f6694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f6698:
    // 0x3f6698: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3f6698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3f669c:
    // 0x3f669c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3f669cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f66a0:
    // 0x3f66a0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3f66a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3f66a4:
    // 0x3f66a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3f66a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3f66a8:
    // 0x3f66a8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3f66a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f66ac:
    // 0x3f66ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f66acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3f66b0:
    // 0x3f66b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f66b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f66b4:
    // 0x3f66b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f66b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f66b8:
    // 0x3f66b8: 0x8c920008  lw          $s2, 0x8($a0)
    ctx->pc = 0x3f66b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3f66bc:
    // 0x3f66bc: 0x8cb10d98  lw          $s1, 0xD98($a1)
    ctx->pc = 0x3f66bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3480)));
label_3f66c0:
    // 0x3f66c0: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x3f66c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3f66c4:
    // 0x3f66c4: 0x2233004  sllv        $a2, $v1, $s1
    ctx->pc = 0x3f66c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 17) & 0x1F));
label_3f66c8:
    // 0x3f66c8: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x3f66c8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_3f66cc:
    // 0x3f66cc: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x3f66ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_3f66d0:
    // 0x3f66d0: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x3f66d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
label_3f66d4:
    // 0x3f66d4: 0xae440054  sw          $a0, 0x54($s2)
    ctx->pc = 0x3f66d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 4));
label_3f66d8:
    // 0x3f66d8: 0xac600058  sw          $zero, 0x58($v1)
    ctx->pc = 0x3f66d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 0));
label_3f66dc:
    // 0x3f66dc: 0x8ca30e34  lw          $v1, 0xE34($a1)
    ctx->pc = 0x3f66dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3636)));
label_3f66e0:
    // 0x3f66e0: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_3f66e4:
    if (ctx->pc == 0x3F66E4u) {
        ctx->pc = 0x3F66E4u;
            // 0x3f66e4: 0x64130001  daddiu      $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x3F66E8u;
        goto label_3f66e8;
    }
    ctx->pc = 0x3F66E0u;
    {
        const bool branch_taken_0x3f66e0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3F66E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F66E0u;
            // 0x3f66e4: 0x64130001  daddiu      $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f66e0) {
            ctx->pc = 0x3F66F8u;
            goto label_3f66f8;
        }
    }
    ctx->pc = 0x3F66E8u;
label_3f66e8:
    // 0x3f66e8: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3f66e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3f66ec:
    // 0x3f66ec: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3f66f0:
    if (ctx->pc == 0x3F66F0u) {
        ctx->pc = 0x3F66F4u;
        goto label_3f66f4;
    }
    ctx->pc = 0x3F66ECu;
    {
        const bool branch_taken_0x3f66ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f66ec) {
            ctx->pc = 0x3F66F8u;
            goto label_3f66f8;
        }
    }
    ctx->pc = 0x3F66F4u;
label_3f66f4:
    // 0x3f66f4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3f66f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f66f8:
    // 0x3f66f8: 0x14e00006  bnez        $a3, . + 4 + (0x6 << 2)
label_3f66fc:
    if (ctx->pc == 0x3F66FCu) {
        ctx->pc = 0x3F6700u;
        goto label_3f6700;
    }
    ctx->pc = 0x3F66F8u;
    {
        const bool branch_taken_0x3f66f8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f66f8) {
            ctx->pc = 0x3F6714u;
            goto label_3f6714;
        }
    }
    ctx->pc = 0x3F6700u;
label_3f6700:
    // 0x3f6700: 0xc075eb4  jal         func_1D7AD0
label_3f6704:
    if (ctx->pc == 0x3F6704u) {
        ctx->pc = 0x3F6704u;
            // 0x3f6704: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F6708u;
        goto label_3f6708;
    }
    ctx->pc = 0x3F6700u;
    SET_GPR_U32(ctx, 31, 0x3F6708u);
    ctx->pc = 0x3F6704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6700u;
            // 0x3f6704: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6708u; }
        if (ctx->pc != 0x3F6708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6708u; }
        if (ctx->pc != 0x3F6708u) { return; }
    }
    ctx->pc = 0x3F6708u;
label_3f6708:
    // 0x3f6708: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3f670c:
    if (ctx->pc == 0x3F670Cu) {
        ctx->pc = 0x3F6710u;
        goto label_3f6710;
    }
    ctx->pc = 0x3F6708u;
    {
        const bool branch_taken_0x3f6708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f6708) {
            ctx->pc = 0x3F6714u;
            goto label_3f6714;
        }
    }
    ctx->pc = 0x3F6710u;
label_3f6710:
    // 0x3f6710: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3f6710u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f6714:
    // 0x3f6714: 0x56600006  bnel        $s3, $zero, . + 4 + (0x6 << 2)
label_3f6718:
    if (ctx->pc == 0x3F6718u) {
        ctx->pc = 0x3F6718u;
            // 0x3f6718: 0x2121821  addu        $v1, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->pc = 0x3F671Cu;
        goto label_3f671c;
    }
    ctx->pc = 0x3F6714u;
    {
        const bool branch_taken_0x3f6714 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f6714) {
            ctx->pc = 0x3F6718u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6714u;
            // 0x3f6718: 0x2121821  addu        $v1, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F6730u;
            goto label_3f6730;
        }
    }
    ctx->pc = 0x3F671Cu;
label_3f671c:
    // 0x3f671c: 0x8e840e34  lw          $a0, 0xE34($s4)
    ctx->pc = 0x3f671cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3636)));
label_3f6720:
    // 0x3f6720: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3f6720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3f6724:
    // 0x3f6724: 0x5483001a  bnel        $a0, $v1, . + 4 + (0x1A << 2)
label_3f6728:
    if (ctx->pc == 0x3F6728u) {
        ctx->pc = 0x3F6728u;
            // 0x3f6728: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x3F672Cu;
        goto label_3f672c;
    }
    ctx->pc = 0x3F6724u;
    {
        const bool branch_taken_0x3f6724 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f6724) {
            ctx->pc = 0x3F6728u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6724u;
            // 0x3f6728: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F6790u;
            goto label_3f6790;
        }
    }
    ctx->pc = 0x3F672Cu;
label_3f672c:
    // 0x3f672c: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x3f672cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_3f6730:
    // 0x3f6730: 0x247000d0  addiu       $s0, $v1, 0xD0
    ctx->pc = 0x3f6730u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
label_3f6734:
    // 0x3f6734: 0x8c6300d0  lw          $v1, 0xD0($v1)
    ctx->pc = 0x3f6734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
label_3f6738:
    // 0x3f6738: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_3f673c:
    if (ctx->pc == 0x3F673Cu) {
        ctx->pc = 0x3F6740u;
        goto label_3f6740;
    }
    ctx->pc = 0x3F6738u;
    {
        const bool branch_taken_0x3f6738 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f6738) {
            ctx->pc = 0x3F678Cu;
            goto label_3f678c;
        }
    }
    ctx->pc = 0x3F6740u;
label_3f6740:
    // 0x3f6740: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x3f6740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
label_3f6744:
    // 0x3f6744: 0x8e870d98  lw          $a3, 0xD98($s4)
    ctx->pc = 0x3f6744u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3480)));
label_3f6748:
    // 0x3f6748: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3f6748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3f674c:
    // 0x3f674c: 0x928411aa  lbu         $a0, 0x11AA($s4)
    ctx->pc = 0x3f674cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4522)));
label_3f6750:
    // 0x3f6750: 0x244600f0  addiu       $a2, $v0, 0xF0
    ctx->pc = 0x3f6750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
label_3f6754:
    // 0x3f6754: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x3f6754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_3f6758:
    // 0x3f6758: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3f6758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3f675c:
    // 0x3f675c: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x3f675cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_3f6760:
    // 0x3f6760: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x3f6760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_3f6764:
    // 0x3f6764: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3f6764u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f6768:
    // 0x3f6768: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x3f6768u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f676c:
    // 0x3f676c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3f676cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3f6770:
    // 0x3f6770: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x3f6770u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_3f6774:
    // 0x3f6774: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x3f6774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_3f6778:
    // 0x3f6778: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3f6778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3f677c:
    // 0x3f677c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3f677cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3f6780:
    // 0x3f6780: 0xc0bb0e8  jal         func_2EC3A0
label_3f6784:
    if (ctx->pc == 0x3F6784u) {
        ctx->pc = 0x3F6784u;
            // 0x3f6784: 0x24470200  addiu       $a3, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->pc = 0x3F6788u;
        goto label_3f6788;
    }
    ctx->pc = 0x3F6780u;
    SET_GPR_U32(ctx, 31, 0x3F6788u);
    ctx->pc = 0x3F6784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6780u;
            // 0x3f6784: 0x24470200  addiu       $a3, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC3A0u;
    if (runtime->hasFunction(0x2EC3A0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6788u; }
        if (ctx->pc != 0x3F6788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EC3A0_0x2ec3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6788u; }
        if (ctx->pc != 0x3F6788u) { return; }
    }
    ctx->pc = 0x3F6788u;
label_3f6788:
    // 0x3f6788: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3f6788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3f678c:
    // 0x3f678c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3f678cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3f6790:
    // 0x3f6790: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3f6790u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3f6794:
    // 0x3f6794: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3f6794u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f6798:
    // 0x3f6798: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f6798u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f679c:
    // 0x3f679c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f679cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f67a0:
    // 0x3f67a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f67a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f67a4:
    // 0x3f67a4: 0x3e00008  jr          $ra
label_3f67a8:
    if (ctx->pc == 0x3F67A8u) {
        ctx->pc = 0x3F67A8u;
            // 0x3f67a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3F67ACu;
        goto label_3f67ac;
    }
    ctx->pc = 0x3F67A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F67A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F67A4u;
            // 0x3f67a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F67ACu;
label_3f67ac:
    // 0x3f67ac: 0x0  nop
    ctx->pc = 0x3f67acu;
    // NOP
}
