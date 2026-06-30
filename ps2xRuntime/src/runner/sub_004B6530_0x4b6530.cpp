#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B6530
// Address: 0x4b6530 - 0x4b6690
void sub_004B6530_0x4b6530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B6530_0x4b6530");
#endif

    switch (ctx->pc) {
        case 0x4b6530u: goto label_4b6530;
        case 0x4b6534u: goto label_4b6534;
        case 0x4b6538u: goto label_4b6538;
        case 0x4b653cu: goto label_4b653c;
        case 0x4b6540u: goto label_4b6540;
        case 0x4b6544u: goto label_4b6544;
        case 0x4b6548u: goto label_4b6548;
        case 0x4b654cu: goto label_4b654c;
        case 0x4b6550u: goto label_4b6550;
        case 0x4b6554u: goto label_4b6554;
        case 0x4b6558u: goto label_4b6558;
        case 0x4b655cu: goto label_4b655c;
        case 0x4b6560u: goto label_4b6560;
        case 0x4b6564u: goto label_4b6564;
        case 0x4b6568u: goto label_4b6568;
        case 0x4b656cu: goto label_4b656c;
        case 0x4b6570u: goto label_4b6570;
        case 0x4b6574u: goto label_4b6574;
        case 0x4b6578u: goto label_4b6578;
        case 0x4b657cu: goto label_4b657c;
        case 0x4b6580u: goto label_4b6580;
        case 0x4b6584u: goto label_4b6584;
        case 0x4b6588u: goto label_4b6588;
        case 0x4b658cu: goto label_4b658c;
        case 0x4b6590u: goto label_4b6590;
        case 0x4b6594u: goto label_4b6594;
        case 0x4b6598u: goto label_4b6598;
        case 0x4b659cu: goto label_4b659c;
        case 0x4b65a0u: goto label_4b65a0;
        case 0x4b65a4u: goto label_4b65a4;
        case 0x4b65a8u: goto label_4b65a8;
        case 0x4b65acu: goto label_4b65ac;
        case 0x4b65b0u: goto label_4b65b0;
        case 0x4b65b4u: goto label_4b65b4;
        case 0x4b65b8u: goto label_4b65b8;
        case 0x4b65bcu: goto label_4b65bc;
        case 0x4b65c0u: goto label_4b65c0;
        case 0x4b65c4u: goto label_4b65c4;
        case 0x4b65c8u: goto label_4b65c8;
        case 0x4b65ccu: goto label_4b65cc;
        case 0x4b65d0u: goto label_4b65d0;
        case 0x4b65d4u: goto label_4b65d4;
        case 0x4b65d8u: goto label_4b65d8;
        case 0x4b65dcu: goto label_4b65dc;
        case 0x4b65e0u: goto label_4b65e0;
        case 0x4b65e4u: goto label_4b65e4;
        case 0x4b65e8u: goto label_4b65e8;
        case 0x4b65ecu: goto label_4b65ec;
        case 0x4b65f0u: goto label_4b65f0;
        case 0x4b65f4u: goto label_4b65f4;
        case 0x4b65f8u: goto label_4b65f8;
        case 0x4b65fcu: goto label_4b65fc;
        case 0x4b6600u: goto label_4b6600;
        case 0x4b6604u: goto label_4b6604;
        case 0x4b6608u: goto label_4b6608;
        case 0x4b660cu: goto label_4b660c;
        case 0x4b6610u: goto label_4b6610;
        case 0x4b6614u: goto label_4b6614;
        case 0x4b6618u: goto label_4b6618;
        case 0x4b661cu: goto label_4b661c;
        case 0x4b6620u: goto label_4b6620;
        case 0x4b6624u: goto label_4b6624;
        case 0x4b6628u: goto label_4b6628;
        case 0x4b662cu: goto label_4b662c;
        case 0x4b6630u: goto label_4b6630;
        case 0x4b6634u: goto label_4b6634;
        case 0x4b6638u: goto label_4b6638;
        case 0x4b663cu: goto label_4b663c;
        case 0x4b6640u: goto label_4b6640;
        case 0x4b6644u: goto label_4b6644;
        case 0x4b6648u: goto label_4b6648;
        case 0x4b664cu: goto label_4b664c;
        case 0x4b6650u: goto label_4b6650;
        case 0x4b6654u: goto label_4b6654;
        case 0x4b6658u: goto label_4b6658;
        case 0x4b665cu: goto label_4b665c;
        case 0x4b6660u: goto label_4b6660;
        case 0x4b6664u: goto label_4b6664;
        case 0x4b6668u: goto label_4b6668;
        case 0x4b666cu: goto label_4b666c;
        case 0x4b6670u: goto label_4b6670;
        case 0x4b6674u: goto label_4b6674;
        case 0x4b6678u: goto label_4b6678;
        case 0x4b667cu: goto label_4b667c;
        case 0x4b6680u: goto label_4b6680;
        case 0x4b6684u: goto label_4b6684;
        case 0x4b6688u: goto label_4b6688;
        case 0x4b668cu: goto label_4b668c;
        default: break;
    }

    ctx->pc = 0x4b6530u;

label_4b6530:
    // 0x4b6530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b6530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4b6534:
    // 0x4b6534: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b6534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4b6538:
    // 0x4b6538: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b6538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4b653c:
    // 0x4b653c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b653cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b6540:
    // 0x4b6540: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b6540u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b6544:
    // 0x4b6544: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_4b6548:
    if (ctx->pc == 0x4B6548u) {
        ctx->pc = 0x4B6548u;
            // 0x4b6548: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B654Cu;
        goto label_4b654c;
    }
    ctx->pc = 0x4B6544u;
    {
        const bool branch_taken_0x4b6544 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6544u;
            // 0x4b6548: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6544) {
            ctx->pc = 0x4B6678u;
            goto label_4b6678;
        }
    }
    ctx->pc = 0x4B654Cu;
label_4b654c:
    // 0x4b654c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4b654cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4b6550:
    // 0x4b6550: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b6550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4b6554:
    // 0x4b6554: 0x24630b80  addiu       $v1, $v1, 0xB80
    ctx->pc = 0x4b6554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2944));
label_4b6558:
    // 0x4b6558: 0x3c05004b  lui         $a1, 0x4B
    ctx->pc = 0x4b6558u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)75 << 16));
label_4b655c:
    // 0x4b655c: 0x24420bb8  addiu       $v0, $v0, 0xBB8
    ctx->pc = 0x4b655cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3000));
label_4b6560:
    // 0x4b6560: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4b6560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4b6564:
    // 0x4b6564: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4b6564u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4b6568:
    // 0x4b6568: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x4b6568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4b656c:
    // 0x4b656c: 0xc0407c0  jal         func_101F00
label_4b6570:
    if (ctx->pc == 0x4B6570u) {
        ctx->pc = 0x4B6570u;
            // 0x4b6570: 0x24a56430  addiu       $a1, $a1, 0x6430 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25648));
        ctx->pc = 0x4B6574u;
        goto label_4b6574;
    }
    ctx->pc = 0x4B656Cu;
    SET_GPR_U32(ctx, 31, 0x4B6574u);
    ctx->pc = 0x4B6570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B656Cu;
            // 0x4b6570: 0x24a56430  addiu       $a1, $a1, 0x6430 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6574u; }
        if (ctx->pc != 0x4B6574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6574u; }
        if (ctx->pc != 0x4B6574u) { return; }
    }
    ctx->pc = 0x4B6574u;
label_4b6574:
    // 0x4b6574: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x4b6574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4b6578:
    // 0x4b6578: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4b657c:
    if (ctx->pc == 0x4B657Cu) {
        ctx->pc = 0x4B657Cu;
            // 0x4b657c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x4B6580u;
        goto label_4b6580;
    }
    ctx->pc = 0x4B6578u;
    {
        const bool branch_taken_0x4b6578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b6578) {
            ctx->pc = 0x4B657Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6578u;
            // 0x4b657c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B658Cu;
            goto label_4b658c;
        }
    }
    ctx->pc = 0x4B6580u;
label_4b6580:
    // 0x4b6580: 0xc07507c  jal         func_1D41F0
label_4b6584:
    if (ctx->pc == 0x4B6584u) {
        ctx->pc = 0x4B6584u;
            // 0x4b6584: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x4B6588u;
        goto label_4b6588;
    }
    ctx->pc = 0x4B6580u;
    SET_GPR_U32(ctx, 31, 0x4B6588u);
    ctx->pc = 0x4B6584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6580u;
            // 0x4b6584: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6588u; }
        if (ctx->pc != 0x4B6588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6588u; }
        if (ctx->pc != 0x4B6588u) { return; }
    }
    ctx->pc = 0x4B6588u;
label_4b6588:
    // 0x4b6588: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x4b6588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4b658c:
    // 0x4b658c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4b6590:
    if (ctx->pc == 0x4B6590u) {
        ctx->pc = 0x4B6590u;
            // 0x4b6590: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x4B6594u;
        goto label_4b6594;
    }
    ctx->pc = 0x4B658Cu;
    {
        const bool branch_taken_0x4b658c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b658c) {
            ctx->pc = 0x4B6590u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B658Cu;
            // 0x4b6590: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B65BCu;
            goto label_4b65bc;
        }
    }
    ctx->pc = 0x4B6594u;
label_4b6594:
    // 0x4b6594: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4b6598:
    if (ctx->pc == 0x4B6598u) {
        ctx->pc = 0x4B659Cu;
        goto label_4b659c;
    }
    ctx->pc = 0x4B6594u;
    {
        const bool branch_taken_0x4b6594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b6594) {
            ctx->pc = 0x4B65B8u;
            goto label_4b65b8;
        }
    }
    ctx->pc = 0x4B659Cu;
label_4b659c:
    // 0x4b659c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4b65a0:
    if (ctx->pc == 0x4B65A0u) {
        ctx->pc = 0x4B65A4u;
        goto label_4b65a4;
    }
    ctx->pc = 0x4B659Cu;
    {
        const bool branch_taken_0x4b659c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b659c) {
            ctx->pc = 0x4B65B8u;
            goto label_4b65b8;
        }
    }
    ctx->pc = 0x4B65A4u;
label_4b65a4:
    // 0x4b65a4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x4b65a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_4b65a8:
    // 0x4b65a8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4b65ac:
    if (ctx->pc == 0x4B65ACu) {
        ctx->pc = 0x4B65B0u;
        goto label_4b65b0;
    }
    ctx->pc = 0x4B65A8u;
    {
        const bool branch_taken_0x4b65a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b65a8) {
            ctx->pc = 0x4B65B8u;
            goto label_4b65b8;
        }
    }
    ctx->pc = 0x4B65B0u;
label_4b65b0:
    // 0x4b65b0: 0xc0400a8  jal         func_1002A0
label_4b65b4:
    if (ctx->pc == 0x4B65B4u) {
        ctx->pc = 0x4B65B8u;
        goto label_4b65b8;
    }
    ctx->pc = 0x4B65B0u;
    SET_GPR_U32(ctx, 31, 0x4B65B8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B65B8u; }
        if (ctx->pc != 0x4B65B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B65B8u; }
        if (ctx->pc != 0x4B65B8u) { return; }
    }
    ctx->pc = 0x4B65B8u;
label_4b65b8:
    // 0x4b65b8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x4b65b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4b65bc:
    // 0x4b65bc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4b65c0:
    if (ctx->pc == 0x4B65C0u) {
        ctx->pc = 0x4B65C0u;
            // 0x4b65c0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4B65C4u;
        goto label_4b65c4;
    }
    ctx->pc = 0x4B65BCu;
    {
        const bool branch_taken_0x4b65bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b65bc) {
            ctx->pc = 0x4B65C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B65BCu;
            // 0x4b65c0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B65ECu;
            goto label_4b65ec;
        }
    }
    ctx->pc = 0x4B65C4u;
label_4b65c4:
    // 0x4b65c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4b65c8:
    if (ctx->pc == 0x4B65C8u) {
        ctx->pc = 0x4B65CCu;
        goto label_4b65cc;
    }
    ctx->pc = 0x4B65C4u;
    {
        const bool branch_taken_0x4b65c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b65c4) {
            ctx->pc = 0x4B65E8u;
            goto label_4b65e8;
        }
    }
    ctx->pc = 0x4B65CCu;
label_4b65cc:
    // 0x4b65cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4b65d0:
    if (ctx->pc == 0x4B65D0u) {
        ctx->pc = 0x4B65D4u;
        goto label_4b65d4;
    }
    ctx->pc = 0x4B65CCu;
    {
        const bool branch_taken_0x4b65cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b65cc) {
            ctx->pc = 0x4B65E8u;
            goto label_4b65e8;
        }
    }
    ctx->pc = 0x4B65D4u;
label_4b65d4:
    // 0x4b65d4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x4b65d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4b65d8:
    // 0x4b65d8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4b65dc:
    if (ctx->pc == 0x4B65DCu) {
        ctx->pc = 0x4B65E0u;
        goto label_4b65e0;
    }
    ctx->pc = 0x4B65D8u;
    {
        const bool branch_taken_0x4b65d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b65d8) {
            ctx->pc = 0x4B65E8u;
            goto label_4b65e8;
        }
    }
    ctx->pc = 0x4B65E0u;
label_4b65e0:
    // 0x4b65e0: 0xc0400a8  jal         func_1002A0
label_4b65e4:
    if (ctx->pc == 0x4B65E4u) {
        ctx->pc = 0x4B65E8u;
        goto label_4b65e8;
    }
    ctx->pc = 0x4B65E0u;
    SET_GPR_U32(ctx, 31, 0x4B65E8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B65E8u; }
        if (ctx->pc != 0x4B65E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B65E8u; }
        if (ctx->pc != 0x4B65E8u) { return; }
    }
    ctx->pc = 0x4B65E8u;
label_4b65e8:
    // 0x4b65e8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x4b65e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4b65ec:
    // 0x4b65ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4b65f0:
    if (ctx->pc == 0x4B65F0u) {
        ctx->pc = 0x4B65F4u;
        goto label_4b65f4;
    }
    ctx->pc = 0x4B65ECu;
    {
        const bool branch_taken_0x4b65ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b65ec) {
            ctx->pc = 0x4B6608u;
            goto label_4b6608;
        }
    }
    ctx->pc = 0x4B65F4u;
label_4b65f4:
    // 0x4b65f4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4b65f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4b65f8:
    // 0x4b65f8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4b65f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4b65fc:
    // 0x4b65fc: 0x24630b70  addiu       $v1, $v1, 0xB70
    ctx->pc = 0x4b65fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2928));
label_4b6600:
    // 0x4b6600: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x4b6600u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_4b6604:
    // 0x4b6604: 0xac40a9a8  sw          $zero, -0x5658($v0)
    ctx->pc = 0x4b6604u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945192), GPR_U32(ctx, 0));
label_4b6608:
    // 0x4b6608: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_4b660c:
    if (ctx->pc == 0x4B660Cu) {
        ctx->pc = 0x4B660Cu;
            // 0x4b660c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4B6610u;
        goto label_4b6610;
    }
    ctx->pc = 0x4B6608u;
    {
        const bool branch_taken_0x4b6608 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b6608) {
            ctx->pc = 0x4B660Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6608u;
            // 0x4b660c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B6664u;
            goto label_4b6664;
        }
    }
    ctx->pc = 0x4B6610u;
label_4b6610:
    // 0x4b6610: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4b6610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4b6614:
    // 0x4b6614: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4b6614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4b6618:
    // 0x4b6618: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4b6618u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4b661c:
    // 0x4b661c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x4b661cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4b6620:
    // 0x4b6620: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4b6624:
    if (ctx->pc == 0x4B6624u) {
        ctx->pc = 0x4B6624u;
            // 0x4b6624: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x4B6628u;
        goto label_4b6628;
    }
    ctx->pc = 0x4B6620u;
    {
        const bool branch_taken_0x4b6620 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b6620) {
            ctx->pc = 0x4B6624u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6620u;
            // 0x4b6624: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B663Cu;
            goto label_4b663c;
        }
    }
    ctx->pc = 0x4B6628u;
label_4b6628:
    // 0x4b6628: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4b6628u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4b662c:
    // 0x4b662c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4b662cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4b6630:
    // 0x4b6630: 0x320f809  jalr        $t9
label_4b6634:
    if (ctx->pc == 0x4B6634u) {
        ctx->pc = 0x4B6634u;
            // 0x4b6634: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4B6638u;
        goto label_4b6638;
    }
    ctx->pc = 0x4B6630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B6638u);
        ctx->pc = 0x4B6634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6630u;
            // 0x4b6634: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B6638u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B6638u; }
            if (ctx->pc != 0x4B6638u) { return; }
        }
        }
    }
    ctx->pc = 0x4B6638u;
label_4b6638:
    // 0x4b6638: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x4b6638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_4b663c:
    // 0x4b663c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4b6640:
    if (ctx->pc == 0x4B6640u) {
        ctx->pc = 0x4B6640u;
            // 0x4b6640: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B6644u;
        goto label_4b6644;
    }
    ctx->pc = 0x4B663Cu;
    {
        const bool branch_taken_0x4b663c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b663c) {
            ctx->pc = 0x4B6640u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B663Cu;
            // 0x4b6640: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B6658u;
            goto label_4b6658;
        }
    }
    ctx->pc = 0x4B6644u;
label_4b6644:
    // 0x4b6644: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4b6644u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4b6648:
    // 0x4b6648: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4b6648u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4b664c:
    // 0x4b664c: 0x320f809  jalr        $t9
label_4b6650:
    if (ctx->pc == 0x4B6650u) {
        ctx->pc = 0x4B6650u;
            // 0x4b6650: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4B6654u;
        goto label_4b6654;
    }
    ctx->pc = 0x4B664Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B6654u);
        ctx->pc = 0x4B6650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B664Cu;
            // 0x4b6650: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B6654u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B6654u; }
            if (ctx->pc != 0x4B6654u) { return; }
        }
        }
    }
    ctx->pc = 0x4B6654u;
label_4b6654:
    // 0x4b6654: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b6654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b6658:
    // 0x4b6658: 0xc075bf8  jal         func_1D6FE0
label_4b665c:
    if (ctx->pc == 0x4B665Cu) {
        ctx->pc = 0x4B665Cu;
            // 0x4b665c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B6660u;
        goto label_4b6660;
    }
    ctx->pc = 0x4B6658u;
    SET_GPR_U32(ctx, 31, 0x4B6660u);
    ctx->pc = 0x4B665Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6658u;
            // 0x4b665c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6660u; }
        if (ctx->pc != 0x4B6660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6660u; }
        if (ctx->pc != 0x4B6660u) { return; }
    }
    ctx->pc = 0x4B6660u;
label_4b6660:
    // 0x4b6660: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4b6660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4b6664:
    // 0x4b6664: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4b6664u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4b6668:
    // 0x4b6668: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4b666c:
    if (ctx->pc == 0x4B666Cu) {
        ctx->pc = 0x4B666Cu;
            // 0x4b666c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B6670u;
        goto label_4b6670;
    }
    ctx->pc = 0x4B6668u;
    {
        const bool branch_taken_0x4b6668 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4b6668) {
            ctx->pc = 0x4B666Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6668u;
            // 0x4b666c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B667Cu;
            goto label_4b667c;
        }
    }
    ctx->pc = 0x4B6670u;
label_4b6670:
    // 0x4b6670: 0xc0400a8  jal         func_1002A0
label_4b6674:
    if (ctx->pc == 0x4B6674u) {
        ctx->pc = 0x4B6674u;
            // 0x4b6674: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B6678u;
        goto label_4b6678;
    }
    ctx->pc = 0x4B6670u;
    SET_GPR_U32(ctx, 31, 0x4B6678u);
    ctx->pc = 0x4B6674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6670u;
            // 0x4b6674: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6678u; }
        if (ctx->pc != 0x4B6678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6678u; }
        if (ctx->pc != 0x4B6678u) { return; }
    }
    ctx->pc = 0x4B6678u;
label_4b6678:
    // 0x4b6678: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4b6678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b667c:
    // 0x4b667c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b667cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4b6680:
    // 0x4b6680: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b6680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b6684:
    // 0x4b6684: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b6684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b6688:
    // 0x4b6688: 0x3e00008  jr          $ra
label_4b668c:
    if (ctx->pc == 0x4B668Cu) {
        ctx->pc = 0x4B668Cu;
            // 0x4b668c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4B6690u;
        goto label_fallthrough_0x4b6688;
    }
    ctx->pc = 0x4B6688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B668Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6688u;
            // 0x4b668c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x4b6688:
    ctx->pc = 0x4B6690u;
}
