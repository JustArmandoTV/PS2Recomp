#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004BF550
// Address: 0x4bf550 - 0x4bf6d8
void sub_004BF550_0x4bf550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BF550_0x4bf550");
#endif

    switch (ctx->pc) {
        case 0x4bf550u: goto label_4bf550;
        case 0x4bf554u: goto label_4bf554;
        case 0x4bf558u: goto label_4bf558;
        case 0x4bf55cu: goto label_4bf55c;
        case 0x4bf560u: goto label_4bf560;
        case 0x4bf564u: goto label_4bf564;
        case 0x4bf568u: goto label_4bf568;
        case 0x4bf56cu: goto label_4bf56c;
        case 0x4bf570u: goto label_4bf570;
        case 0x4bf574u: goto label_4bf574;
        case 0x4bf578u: goto label_4bf578;
        case 0x4bf57cu: goto label_4bf57c;
        case 0x4bf580u: goto label_4bf580;
        case 0x4bf584u: goto label_4bf584;
        case 0x4bf588u: goto label_4bf588;
        case 0x4bf58cu: goto label_4bf58c;
        case 0x4bf590u: goto label_4bf590;
        case 0x4bf594u: goto label_4bf594;
        case 0x4bf598u: goto label_4bf598;
        case 0x4bf59cu: goto label_4bf59c;
        case 0x4bf5a0u: goto label_4bf5a0;
        case 0x4bf5a4u: goto label_4bf5a4;
        case 0x4bf5a8u: goto label_4bf5a8;
        case 0x4bf5acu: goto label_4bf5ac;
        case 0x4bf5b0u: goto label_4bf5b0;
        case 0x4bf5b4u: goto label_4bf5b4;
        case 0x4bf5b8u: goto label_4bf5b8;
        case 0x4bf5bcu: goto label_4bf5bc;
        case 0x4bf5c0u: goto label_4bf5c0;
        case 0x4bf5c4u: goto label_4bf5c4;
        case 0x4bf5c8u: goto label_4bf5c8;
        case 0x4bf5ccu: goto label_4bf5cc;
        case 0x4bf5d0u: goto label_4bf5d0;
        case 0x4bf5d4u: goto label_4bf5d4;
        case 0x4bf5d8u: goto label_4bf5d8;
        case 0x4bf5dcu: goto label_4bf5dc;
        case 0x4bf5e0u: goto label_4bf5e0;
        case 0x4bf5e4u: goto label_4bf5e4;
        case 0x4bf5e8u: goto label_4bf5e8;
        case 0x4bf5ecu: goto label_4bf5ec;
        case 0x4bf5f0u: goto label_4bf5f0;
        case 0x4bf5f4u: goto label_4bf5f4;
        case 0x4bf5f8u: goto label_4bf5f8;
        case 0x4bf5fcu: goto label_4bf5fc;
        case 0x4bf600u: goto label_4bf600;
        case 0x4bf604u: goto label_4bf604;
        case 0x4bf608u: goto label_4bf608;
        case 0x4bf60cu: goto label_4bf60c;
        case 0x4bf610u: goto label_4bf610;
        case 0x4bf614u: goto label_4bf614;
        case 0x4bf618u: goto label_4bf618;
        case 0x4bf61cu: goto label_4bf61c;
        case 0x4bf620u: goto label_4bf620;
        case 0x4bf624u: goto label_4bf624;
        case 0x4bf628u: goto label_4bf628;
        case 0x4bf62cu: goto label_4bf62c;
        case 0x4bf630u: goto label_4bf630;
        case 0x4bf634u: goto label_4bf634;
        case 0x4bf638u: goto label_4bf638;
        case 0x4bf63cu: goto label_4bf63c;
        case 0x4bf640u: goto label_4bf640;
        case 0x4bf644u: goto label_4bf644;
        case 0x4bf648u: goto label_4bf648;
        case 0x4bf64cu: goto label_4bf64c;
        case 0x4bf650u: goto label_4bf650;
        case 0x4bf654u: goto label_4bf654;
        case 0x4bf658u: goto label_4bf658;
        case 0x4bf65cu: goto label_4bf65c;
        case 0x4bf660u: goto label_4bf660;
        case 0x4bf664u: goto label_4bf664;
        case 0x4bf668u: goto label_4bf668;
        case 0x4bf66cu: goto label_4bf66c;
        case 0x4bf670u: goto label_4bf670;
        case 0x4bf674u: goto label_4bf674;
        case 0x4bf678u: goto label_4bf678;
        case 0x4bf67cu: goto label_4bf67c;
        case 0x4bf680u: goto label_4bf680;
        case 0x4bf684u: goto label_4bf684;
        case 0x4bf688u: goto label_4bf688;
        case 0x4bf68cu: goto label_4bf68c;
        case 0x4bf690u: goto label_4bf690;
        case 0x4bf694u: goto label_4bf694;
        case 0x4bf698u: goto label_4bf698;
        case 0x4bf69cu: goto label_4bf69c;
        case 0x4bf6a0u: goto label_4bf6a0;
        case 0x4bf6a4u: goto label_4bf6a4;
        case 0x4bf6a8u: goto label_4bf6a8;
        case 0x4bf6acu: goto label_4bf6ac;
        case 0x4bf6b0u: goto label_4bf6b0;
        case 0x4bf6b4u: goto label_4bf6b4;
        case 0x4bf6b8u: goto label_4bf6b8;
        case 0x4bf6bcu: goto label_4bf6bc;
        case 0x4bf6c0u: goto label_4bf6c0;
        case 0x4bf6c4u: goto label_4bf6c4;
        case 0x4bf6c8u: goto label_4bf6c8;
        case 0x4bf6ccu: goto label_4bf6cc;
        case 0x4bf6d0u: goto label_4bf6d0;
        case 0x4bf6d4u: goto label_4bf6d4;
        default: break;
    }

    ctx->pc = 0x4bf550u;

label_4bf550:
    // 0x4bf550: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4bf550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4bf554:
    // 0x4bf554: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4bf554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4bf558:
    // 0x4bf558: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4bf558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4bf55c:
    // 0x4bf55c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4bf55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4bf560:
    // 0x4bf560: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4bf560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4bf564:
    // 0x4bf564: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_4bf568:
    if (ctx->pc == 0x4BF568u) {
        ctx->pc = 0x4BF568u;
            // 0x4bf568: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BF56Cu;
        goto label_4bf56c;
    }
    ctx->pc = 0x4BF564u;
    {
        const bool branch_taken_0x4bf564 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BF568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF564u;
            // 0x4bf568: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf564) {
            ctx->pc = 0x4BF698u;
            goto label_4bf698;
        }
    }
    ctx->pc = 0x4BF56Cu;
label_4bf56c:
    // 0x4bf56c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4bf56cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4bf570:
    // 0x4bf570: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4bf570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4bf574:
    // 0x4bf574: 0x24631150  addiu       $v1, $v1, 0x1150
    ctx->pc = 0x4bf574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4432));
label_4bf578:
    // 0x4bf578: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x4bf578u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
label_4bf57c:
    // 0x4bf57c: 0x24421188  addiu       $v0, $v0, 0x1188
    ctx->pc = 0x4bf57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4488));
label_4bf580:
    // 0x4bf580: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4bf580u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4bf584:
    // 0x4bf584: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4bf584u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4bf588:
    // 0x4bf588: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x4bf588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4bf58c:
    // 0x4bf58c: 0xc0407c0  jal         func_101F00
label_4bf590:
    if (ctx->pc == 0x4BF590u) {
        ctx->pc = 0x4BF590u;
            // 0x4bf590: 0x24a5f6b0  addiu       $a1, $a1, -0x950 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964912));
        ctx->pc = 0x4BF594u;
        goto label_4bf594;
    }
    ctx->pc = 0x4BF58Cu;
    SET_GPR_U32(ctx, 31, 0x4BF594u);
    ctx->pc = 0x4BF590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF58Cu;
            // 0x4bf590: 0x24a5f6b0  addiu       $a1, $a1, -0x950 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF594u; }
        if (ctx->pc != 0x4BF594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF594u; }
        if (ctx->pc != 0x4BF594u) { return; }
    }
    ctx->pc = 0x4BF594u;
label_4bf594:
    // 0x4bf594: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x4bf594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4bf598:
    // 0x4bf598: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4bf59c:
    if (ctx->pc == 0x4BF59Cu) {
        ctx->pc = 0x4BF59Cu;
            // 0x4bf59c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x4BF5A0u;
        goto label_4bf5a0;
    }
    ctx->pc = 0x4BF598u;
    {
        const bool branch_taken_0x4bf598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bf598) {
            ctx->pc = 0x4BF59Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF598u;
            // 0x4bf59c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BF5ACu;
            goto label_4bf5ac;
        }
    }
    ctx->pc = 0x4BF5A0u;
label_4bf5a0:
    // 0x4bf5a0: 0xc07507c  jal         func_1D41F0
label_4bf5a4:
    if (ctx->pc == 0x4BF5A4u) {
        ctx->pc = 0x4BF5A4u;
            // 0x4bf5a4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x4BF5A8u;
        goto label_4bf5a8;
    }
    ctx->pc = 0x4BF5A0u;
    SET_GPR_U32(ctx, 31, 0x4BF5A8u);
    ctx->pc = 0x4BF5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF5A0u;
            // 0x4bf5a4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF5A8u; }
        if (ctx->pc != 0x4BF5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF5A8u; }
        if (ctx->pc != 0x4BF5A8u) { return; }
    }
    ctx->pc = 0x4BF5A8u;
label_4bf5a8:
    // 0x4bf5a8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x4bf5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4bf5ac:
    // 0x4bf5ac: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4bf5b0:
    if (ctx->pc == 0x4BF5B0u) {
        ctx->pc = 0x4BF5B0u;
            // 0x4bf5b0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x4BF5B4u;
        goto label_4bf5b4;
    }
    ctx->pc = 0x4BF5ACu;
    {
        const bool branch_taken_0x4bf5ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bf5ac) {
            ctx->pc = 0x4BF5B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF5ACu;
            // 0x4bf5b0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BF5DCu;
            goto label_4bf5dc;
        }
    }
    ctx->pc = 0x4BF5B4u;
label_4bf5b4:
    // 0x4bf5b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4bf5b8:
    if (ctx->pc == 0x4BF5B8u) {
        ctx->pc = 0x4BF5BCu;
        goto label_4bf5bc;
    }
    ctx->pc = 0x4BF5B4u;
    {
        const bool branch_taken_0x4bf5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bf5b4) {
            ctx->pc = 0x4BF5D8u;
            goto label_4bf5d8;
        }
    }
    ctx->pc = 0x4BF5BCu;
label_4bf5bc:
    // 0x4bf5bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4bf5c0:
    if (ctx->pc == 0x4BF5C0u) {
        ctx->pc = 0x4BF5C4u;
        goto label_4bf5c4;
    }
    ctx->pc = 0x4BF5BCu;
    {
        const bool branch_taken_0x4bf5bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bf5bc) {
            ctx->pc = 0x4BF5D8u;
            goto label_4bf5d8;
        }
    }
    ctx->pc = 0x4BF5C4u;
label_4bf5c4:
    // 0x4bf5c4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x4bf5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_4bf5c8:
    // 0x4bf5c8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4bf5cc:
    if (ctx->pc == 0x4BF5CCu) {
        ctx->pc = 0x4BF5D0u;
        goto label_4bf5d0;
    }
    ctx->pc = 0x4BF5C8u;
    {
        const bool branch_taken_0x4bf5c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bf5c8) {
            ctx->pc = 0x4BF5D8u;
            goto label_4bf5d8;
        }
    }
    ctx->pc = 0x4BF5D0u;
label_4bf5d0:
    // 0x4bf5d0: 0xc0400a8  jal         func_1002A0
label_4bf5d4:
    if (ctx->pc == 0x4BF5D4u) {
        ctx->pc = 0x4BF5D8u;
        goto label_4bf5d8;
    }
    ctx->pc = 0x4BF5D0u;
    SET_GPR_U32(ctx, 31, 0x4BF5D8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF5D8u; }
        if (ctx->pc != 0x4BF5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF5D8u; }
        if (ctx->pc != 0x4BF5D8u) { return; }
    }
    ctx->pc = 0x4BF5D8u;
label_4bf5d8:
    // 0x4bf5d8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x4bf5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4bf5dc:
    // 0x4bf5dc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4bf5e0:
    if (ctx->pc == 0x4BF5E0u) {
        ctx->pc = 0x4BF5E0u;
            // 0x4bf5e0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4BF5E4u;
        goto label_4bf5e4;
    }
    ctx->pc = 0x4BF5DCu;
    {
        const bool branch_taken_0x4bf5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bf5dc) {
            ctx->pc = 0x4BF5E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF5DCu;
            // 0x4bf5e0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BF60Cu;
            goto label_4bf60c;
        }
    }
    ctx->pc = 0x4BF5E4u;
label_4bf5e4:
    // 0x4bf5e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4bf5e8:
    if (ctx->pc == 0x4BF5E8u) {
        ctx->pc = 0x4BF5ECu;
        goto label_4bf5ec;
    }
    ctx->pc = 0x4BF5E4u;
    {
        const bool branch_taken_0x4bf5e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bf5e4) {
            ctx->pc = 0x4BF608u;
            goto label_4bf608;
        }
    }
    ctx->pc = 0x4BF5ECu;
label_4bf5ec:
    // 0x4bf5ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4bf5f0:
    if (ctx->pc == 0x4BF5F0u) {
        ctx->pc = 0x4BF5F4u;
        goto label_4bf5f4;
    }
    ctx->pc = 0x4BF5ECu;
    {
        const bool branch_taken_0x4bf5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bf5ec) {
            ctx->pc = 0x4BF608u;
            goto label_4bf608;
        }
    }
    ctx->pc = 0x4BF5F4u;
label_4bf5f4:
    // 0x4bf5f4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x4bf5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4bf5f8:
    // 0x4bf5f8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4bf5fc:
    if (ctx->pc == 0x4BF5FCu) {
        ctx->pc = 0x4BF600u;
        goto label_4bf600;
    }
    ctx->pc = 0x4BF5F8u;
    {
        const bool branch_taken_0x4bf5f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bf5f8) {
            ctx->pc = 0x4BF608u;
            goto label_4bf608;
        }
    }
    ctx->pc = 0x4BF600u;
label_4bf600:
    // 0x4bf600: 0xc0400a8  jal         func_1002A0
label_4bf604:
    if (ctx->pc == 0x4BF604u) {
        ctx->pc = 0x4BF608u;
        goto label_4bf608;
    }
    ctx->pc = 0x4BF600u;
    SET_GPR_U32(ctx, 31, 0x4BF608u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF608u; }
        if (ctx->pc != 0x4BF608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF608u; }
        if (ctx->pc != 0x4BF608u) { return; }
    }
    ctx->pc = 0x4BF608u;
label_4bf608:
    // 0x4bf608: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x4bf608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4bf60c:
    // 0x4bf60c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4bf610:
    if (ctx->pc == 0x4BF610u) {
        ctx->pc = 0x4BF614u;
        goto label_4bf614;
    }
    ctx->pc = 0x4BF60Cu;
    {
        const bool branch_taken_0x4bf60c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bf60c) {
            ctx->pc = 0x4BF628u;
            goto label_4bf628;
        }
    }
    ctx->pc = 0x4BF614u;
label_4bf614:
    // 0x4bf614: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4bf614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4bf618:
    // 0x4bf618: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4bf618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4bf61c:
    // 0x4bf61c: 0x24631138  addiu       $v1, $v1, 0x1138
    ctx->pc = 0x4bf61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4408));
label_4bf620:
    // 0x4bf620: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x4bf620u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_4bf624:
    // 0x4bf624: 0xac40a9e8  sw          $zero, -0x5618($v0)
    ctx->pc = 0x4bf624u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945256), GPR_U32(ctx, 0));
label_4bf628:
    // 0x4bf628: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_4bf62c:
    if (ctx->pc == 0x4BF62Cu) {
        ctx->pc = 0x4BF62Cu;
            // 0x4bf62c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4BF630u;
        goto label_4bf630;
    }
    ctx->pc = 0x4BF628u;
    {
        const bool branch_taken_0x4bf628 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bf628) {
            ctx->pc = 0x4BF62Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF628u;
            // 0x4bf62c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BF684u;
            goto label_4bf684;
        }
    }
    ctx->pc = 0x4BF630u;
label_4bf630:
    // 0x4bf630: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4bf630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4bf634:
    // 0x4bf634: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4bf634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4bf638:
    // 0x4bf638: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4bf638u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4bf63c:
    // 0x4bf63c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x4bf63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4bf640:
    // 0x4bf640: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4bf644:
    if (ctx->pc == 0x4BF644u) {
        ctx->pc = 0x4BF644u;
            // 0x4bf644: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x4BF648u;
        goto label_4bf648;
    }
    ctx->pc = 0x4BF640u;
    {
        const bool branch_taken_0x4bf640 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bf640) {
            ctx->pc = 0x4BF644u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF640u;
            // 0x4bf644: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BF65Cu;
            goto label_4bf65c;
        }
    }
    ctx->pc = 0x4BF648u;
label_4bf648:
    // 0x4bf648: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4bf648u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4bf64c:
    // 0x4bf64c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4bf64cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4bf650:
    // 0x4bf650: 0x320f809  jalr        $t9
label_4bf654:
    if (ctx->pc == 0x4BF654u) {
        ctx->pc = 0x4BF654u;
            // 0x4bf654: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4BF658u;
        goto label_4bf658;
    }
    ctx->pc = 0x4BF650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BF658u);
        ctx->pc = 0x4BF654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF650u;
            // 0x4bf654: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BF658u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BF658u; }
            if (ctx->pc != 0x4BF658u) { return; }
        }
        }
    }
    ctx->pc = 0x4BF658u;
label_4bf658:
    // 0x4bf658: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x4bf658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_4bf65c:
    // 0x4bf65c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4bf660:
    if (ctx->pc == 0x4BF660u) {
        ctx->pc = 0x4BF660u;
            // 0x4bf660: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BF664u;
        goto label_4bf664;
    }
    ctx->pc = 0x4BF65Cu;
    {
        const bool branch_taken_0x4bf65c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bf65c) {
            ctx->pc = 0x4BF660u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF65Cu;
            // 0x4bf660: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BF678u;
            goto label_4bf678;
        }
    }
    ctx->pc = 0x4BF664u;
label_4bf664:
    // 0x4bf664: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4bf664u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4bf668:
    // 0x4bf668: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4bf668u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4bf66c:
    // 0x4bf66c: 0x320f809  jalr        $t9
label_4bf670:
    if (ctx->pc == 0x4BF670u) {
        ctx->pc = 0x4BF670u;
            // 0x4bf670: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4BF674u;
        goto label_4bf674;
    }
    ctx->pc = 0x4BF66Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BF674u);
        ctx->pc = 0x4BF670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF66Cu;
            // 0x4bf670: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BF674u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BF674u; }
            if (ctx->pc != 0x4BF674u) { return; }
        }
        }
    }
    ctx->pc = 0x4BF674u;
label_4bf674:
    // 0x4bf674: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4bf674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4bf678:
    // 0x4bf678: 0xc075bf8  jal         func_1D6FE0
label_4bf67c:
    if (ctx->pc == 0x4BF67Cu) {
        ctx->pc = 0x4BF67Cu;
            // 0x4bf67c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BF680u;
        goto label_4bf680;
    }
    ctx->pc = 0x4BF678u;
    SET_GPR_U32(ctx, 31, 0x4BF680u);
    ctx->pc = 0x4BF67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF678u;
            // 0x4bf67c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF680u; }
        if (ctx->pc != 0x4BF680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF680u; }
        if (ctx->pc != 0x4BF680u) { return; }
    }
    ctx->pc = 0x4BF680u;
label_4bf680:
    // 0x4bf680: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4bf680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4bf684:
    // 0x4bf684: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4bf684u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4bf688:
    // 0x4bf688: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4bf68c:
    if (ctx->pc == 0x4BF68Cu) {
        ctx->pc = 0x4BF68Cu;
            // 0x4bf68c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BF690u;
        goto label_4bf690;
    }
    ctx->pc = 0x4BF688u;
    {
        const bool branch_taken_0x4bf688 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4bf688) {
            ctx->pc = 0x4BF68Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF688u;
            // 0x4bf68c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BF69Cu;
            goto label_4bf69c;
        }
    }
    ctx->pc = 0x4BF690u;
label_4bf690:
    // 0x4bf690: 0xc0400a8  jal         func_1002A0
label_4bf694:
    if (ctx->pc == 0x4BF694u) {
        ctx->pc = 0x4BF694u;
            // 0x4bf694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BF698u;
        goto label_4bf698;
    }
    ctx->pc = 0x4BF690u;
    SET_GPR_U32(ctx, 31, 0x4BF698u);
    ctx->pc = 0x4BF694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF690u;
            // 0x4bf694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF698u; }
        if (ctx->pc != 0x4BF698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF698u; }
        if (ctx->pc != 0x4BF698u) { return; }
    }
    ctx->pc = 0x4BF698u;
label_4bf698:
    // 0x4bf698: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4bf698u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4bf69c:
    // 0x4bf69c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4bf69cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4bf6a0:
    // 0x4bf6a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4bf6a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4bf6a4:
    // 0x4bf6a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4bf6a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4bf6a8:
    // 0x4bf6a8: 0x3e00008  jr          $ra
label_4bf6ac:
    if (ctx->pc == 0x4BF6ACu) {
        ctx->pc = 0x4BF6ACu;
            // 0x4bf6ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4BF6B0u;
        goto label_4bf6b0;
    }
    ctx->pc = 0x4BF6A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BF6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF6A8u;
            // 0x4bf6ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BF6B0u;
label_4bf6b0:
    // 0x4bf6b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4bf6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4bf6b4:
    // 0x4bf6b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4bf6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4bf6b8:
    // 0x4bf6b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4bf6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4bf6bc:
    // 0x4bf6bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4bf6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4bf6c0:
    // 0x4bf6c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4bf6c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4bf6c4:
    // 0x4bf6c4: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_4bf6c8:
    if (ctx->pc == 0x4BF6C8u) {
        ctx->pc = 0x4BF6C8u;
            // 0x4bf6c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BF6CCu;
        goto label_4bf6cc;
    }
    ctx->pc = 0x4BF6C4u;
    {
        const bool branch_taken_0x4bf6c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BF6C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF6C4u;
            // 0x4bf6c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf6c4) {
            ctx->pc = 0x4BF78Cu;
            return;
        }
    }
    ctx->pc = 0x4BF6CCu;
label_4bf6cc:
    // 0x4bf6cc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4bf6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4bf6d0:
    // 0x4bf6d0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4bf6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4bf6d4:
    // 0x4bf6d4: 0x246311f0  addiu       $v1, $v1, 0x11F0
    ctx->pc = 0x4bf6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4592));
}
