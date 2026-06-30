#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BB4C0
// Address: 0x2bb4c0 - 0x2bb670
void sub_002BB4C0_0x2bb4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB4C0_0x2bb4c0");
#endif

    switch (ctx->pc) {
        case 0x2bb4c0u: goto label_2bb4c0;
        case 0x2bb4c4u: goto label_2bb4c4;
        case 0x2bb4c8u: goto label_2bb4c8;
        case 0x2bb4ccu: goto label_2bb4cc;
        case 0x2bb4d0u: goto label_2bb4d0;
        case 0x2bb4d4u: goto label_2bb4d4;
        case 0x2bb4d8u: goto label_2bb4d8;
        case 0x2bb4dcu: goto label_2bb4dc;
        case 0x2bb4e0u: goto label_2bb4e0;
        case 0x2bb4e4u: goto label_2bb4e4;
        case 0x2bb4e8u: goto label_2bb4e8;
        case 0x2bb4ecu: goto label_2bb4ec;
        case 0x2bb4f0u: goto label_2bb4f0;
        case 0x2bb4f4u: goto label_2bb4f4;
        case 0x2bb4f8u: goto label_2bb4f8;
        case 0x2bb4fcu: goto label_2bb4fc;
        case 0x2bb500u: goto label_2bb500;
        case 0x2bb504u: goto label_2bb504;
        case 0x2bb508u: goto label_2bb508;
        case 0x2bb50cu: goto label_2bb50c;
        case 0x2bb510u: goto label_2bb510;
        case 0x2bb514u: goto label_2bb514;
        case 0x2bb518u: goto label_2bb518;
        case 0x2bb51cu: goto label_2bb51c;
        case 0x2bb520u: goto label_2bb520;
        case 0x2bb524u: goto label_2bb524;
        case 0x2bb528u: goto label_2bb528;
        case 0x2bb52cu: goto label_2bb52c;
        case 0x2bb530u: goto label_2bb530;
        case 0x2bb534u: goto label_2bb534;
        case 0x2bb538u: goto label_2bb538;
        case 0x2bb53cu: goto label_2bb53c;
        case 0x2bb540u: goto label_2bb540;
        case 0x2bb544u: goto label_2bb544;
        case 0x2bb548u: goto label_2bb548;
        case 0x2bb54cu: goto label_2bb54c;
        case 0x2bb550u: goto label_2bb550;
        case 0x2bb554u: goto label_2bb554;
        case 0x2bb558u: goto label_2bb558;
        case 0x2bb55cu: goto label_2bb55c;
        case 0x2bb560u: goto label_2bb560;
        case 0x2bb564u: goto label_2bb564;
        case 0x2bb568u: goto label_2bb568;
        case 0x2bb56cu: goto label_2bb56c;
        case 0x2bb570u: goto label_2bb570;
        case 0x2bb574u: goto label_2bb574;
        case 0x2bb578u: goto label_2bb578;
        case 0x2bb57cu: goto label_2bb57c;
        case 0x2bb580u: goto label_2bb580;
        case 0x2bb584u: goto label_2bb584;
        case 0x2bb588u: goto label_2bb588;
        case 0x2bb58cu: goto label_2bb58c;
        case 0x2bb590u: goto label_2bb590;
        case 0x2bb594u: goto label_2bb594;
        case 0x2bb598u: goto label_2bb598;
        case 0x2bb59cu: goto label_2bb59c;
        case 0x2bb5a0u: goto label_2bb5a0;
        case 0x2bb5a4u: goto label_2bb5a4;
        case 0x2bb5a8u: goto label_2bb5a8;
        case 0x2bb5acu: goto label_2bb5ac;
        case 0x2bb5b0u: goto label_2bb5b0;
        case 0x2bb5b4u: goto label_2bb5b4;
        case 0x2bb5b8u: goto label_2bb5b8;
        case 0x2bb5bcu: goto label_2bb5bc;
        case 0x2bb5c0u: goto label_2bb5c0;
        case 0x2bb5c4u: goto label_2bb5c4;
        case 0x2bb5c8u: goto label_2bb5c8;
        case 0x2bb5ccu: goto label_2bb5cc;
        case 0x2bb5d0u: goto label_2bb5d0;
        case 0x2bb5d4u: goto label_2bb5d4;
        case 0x2bb5d8u: goto label_2bb5d8;
        case 0x2bb5dcu: goto label_2bb5dc;
        case 0x2bb5e0u: goto label_2bb5e0;
        case 0x2bb5e4u: goto label_2bb5e4;
        case 0x2bb5e8u: goto label_2bb5e8;
        case 0x2bb5ecu: goto label_2bb5ec;
        case 0x2bb5f0u: goto label_2bb5f0;
        case 0x2bb5f4u: goto label_2bb5f4;
        case 0x2bb5f8u: goto label_2bb5f8;
        case 0x2bb5fcu: goto label_2bb5fc;
        case 0x2bb600u: goto label_2bb600;
        case 0x2bb604u: goto label_2bb604;
        case 0x2bb608u: goto label_2bb608;
        case 0x2bb60cu: goto label_2bb60c;
        case 0x2bb610u: goto label_2bb610;
        case 0x2bb614u: goto label_2bb614;
        case 0x2bb618u: goto label_2bb618;
        case 0x2bb61cu: goto label_2bb61c;
        case 0x2bb620u: goto label_2bb620;
        case 0x2bb624u: goto label_2bb624;
        case 0x2bb628u: goto label_2bb628;
        case 0x2bb62cu: goto label_2bb62c;
        case 0x2bb630u: goto label_2bb630;
        case 0x2bb634u: goto label_2bb634;
        case 0x2bb638u: goto label_2bb638;
        case 0x2bb63cu: goto label_2bb63c;
        case 0x2bb640u: goto label_2bb640;
        case 0x2bb644u: goto label_2bb644;
        case 0x2bb648u: goto label_2bb648;
        case 0x2bb64cu: goto label_2bb64c;
        case 0x2bb650u: goto label_2bb650;
        case 0x2bb654u: goto label_2bb654;
        case 0x2bb658u: goto label_2bb658;
        case 0x2bb65cu: goto label_2bb65c;
        case 0x2bb660u: goto label_2bb660;
        case 0x2bb664u: goto label_2bb664;
        case 0x2bb668u: goto label_2bb668;
        case 0x2bb66cu: goto label_2bb66c;
        default: break;
    }

    ctx->pc = 0x2bb4c0u;

label_2bb4c0:
    // 0x2bb4c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bb4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2bb4c4:
    // 0x2bb4c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bb4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2bb4c8:
    // 0x2bb4c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bb4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2bb4cc:
    // 0x2bb4cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bb4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2bb4d0:
    // 0x2bb4d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bb4d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bb4d4:
    // 0x2bb4d4: 0x1220005f  beqz        $s1, . + 4 + (0x5F << 2)
label_2bb4d8:
    if (ctx->pc == 0x2BB4D8u) {
        ctx->pc = 0x2BB4D8u;
            // 0x2bb4d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BB4DCu;
        goto label_2bb4dc;
    }
    ctx->pc = 0x2BB4D4u;
    {
        const bool branch_taken_0x2bb4d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB4D4u;
            // 0x2bb4d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb4d4) {
            ctx->pc = 0x2BB654u;
            goto label_2bb654;
        }
    }
    ctx->pc = 0x2BB4DCu;
label_2bb4dc:
    // 0x2bb4dc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bb4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2bb4e0:
    // 0x2bb4e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bb4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bb4e4:
    // 0x2bb4e4: 0x24632340  addiu       $v1, $v1, 0x2340
    ctx->pc = 0x2bb4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9024));
label_2bb4e8:
    // 0x2bb4e8: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2bb4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2bb4ec:
    // 0x2bb4ec: 0x24422378  addiu       $v0, $v0, 0x2378
    ctx->pc = 0x2bb4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9080));
label_2bb4f0:
    // 0x2bb4f0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2bb4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2bb4f4:
    // 0x2bb4f4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2bb4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2bb4f8:
    // 0x2bb4f8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2bb4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2bb4fc:
    // 0x2bb4fc: 0xc0407c0  jal         func_101F00
label_2bb500:
    if (ctx->pc == 0x2BB500u) {
        ctx->pc = 0x2BB500u;
            // 0x2bb500: 0x24a5af30  addiu       $a1, $a1, -0x50D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946608));
        ctx->pc = 0x2BB504u;
        goto label_2bb504;
    }
    ctx->pc = 0x2BB4FCu;
    SET_GPR_U32(ctx, 31, 0x2BB504u);
    ctx->pc = 0x2BB500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB4FCu;
            // 0x2bb500: 0x24a5af30  addiu       $a1, $a1, -0x50D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB504u; }
        if (ctx->pc != 0x2BB504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB504u; }
        if (ctx->pc != 0x2BB504u) { return; }
    }
    ctx->pc = 0x2BB504u;
label_2bb504:
    // 0x2bb504: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x2bb504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2bb508:
    // 0x2bb508: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_2bb50c:
    if (ctx->pc == 0x2BB50Cu) {
        ctx->pc = 0x2BB50Cu;
            // 0x2bb50c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2BB510u;
        goto label_2bb510;
    }
    ctx->pc = 0x2BB508u;
    {
        const bool branch_taken_0x2bb508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb508) {
            ctx->pc = 0x2BB50Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB508u;
            // 0x2bb50c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BB568u;
            goto label_2bb568;
        }
    }
    ctx->pc = 0x2BB510u;
label_2bb510:
    // 0x2bb510: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x2bb510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_2bb514:
    // 0x2bb514: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x2bb514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_2bb518:
    // 0x2bb518: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x2bb518u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2bb51c:
    // 0x2bb51c: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
label_2bb520:
    if (ctx->pc == 0x2BB520u) {
        ctx->pc = 0x2BB520u;
            // 0x2bb520: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BB524u;
        goto label_2bb524;
    }
    ctx->pc = 0x2BB51Cu;
    {
        const bool branch_taken_0x2bb51c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB51Cu;
            // 0x2bb520: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb51c) {
            ctx->pc = 0x2BB548u;
            goto label_2bb548;
        }
    }
    ctx->pc = 0x2BB524u;
label_2bb524:
    // 0x2bb524: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2bb524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_2bb528:
    // 0x2bb528: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2bb528u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2bb52c:
    // 0x2bb52c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2bb52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2bb530:
    // 0x2bb530: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x2bb530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_2bb534:
    // 0x2bb534: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2bb534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_2bb538:
    // 0x2bb538: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2bb538u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2bb53c:
    // 0x2bb53c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_2bb540:
    if (ctx->pc == 0x2BB540u) {
        ctx->pc = 0x2BB544u;
        goto label_2bb544;
    }
    ctx->pc = 0x2BB53Cu;
    {
        const bool branch_taken_0x2bb53c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb53c) {
            ctx->pc = 0x2BB528u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bb528;
        }
    }
    ctx->pc = 0x2BB544u;
label_2bb544:
    // 0x2bb544: 0x0  nop
    ctx->pc = 0x2bb544u;
    // NOP
label_2bb548:
    // 0x2bb548: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x2bb548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_2bb54c:
    // 0x2bb54c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_2bb550:
    if (ctx->pc == 0x2BB550u) {
        ctx->pc = 0x2BB550u;
            // 0x2bb550: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->pc = 0x2BB554u;
        goto label_2bb554;
    }
    ctx->pc = 0x2BB54Cu;
    {
        const bool branch_taken_0x2bb54c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb54c) {
            ctx->pc = 0x2BB550u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB54Cu;
            // 0x2bb550: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BB564u;
            goto label_2bb564;
        }
    }
    ctx->pc = 0x2BB554u;
label_2bb554:
    // 0x2bb554: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2bb554u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2bb558:
    // 0x2bb558: 0xc0407c0  jal         func_101F00
label_2bb55c:
    if (ctx->pc == 0x2BB55Cu) {
        ctx->pc = 0x2BB55Cu;
            // 0x2bb55c: 0x24a533e0  addiu       $a1, $a1, 0x33E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13280));
        ctx->pc = 0x2BB560u;
        goto label_2bb560;
    }
    ctx->pc = 0x2BB558u;
    SET_GPR_U32(ctx, 31, 0x2BB560u);
    ctx->pc = 0x2BB55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB558u;
            // 0x2bb55c: 0x24a533e0  addiu       $a1, $a1, 0x33E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB560u; }
        if (ctx->pc != 0x2BB560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB560u; }
        if (ctx->pc != 0x2BB560u) { return; }
    }
    ctx->pc = 0x2BB560u;
label_2bb560:
    // 0x2bb560: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x2bb560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
label_2bb564:
    // 0x2bb564: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2bb564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2bb568:
    // 0x2bb568: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2bb56c:
    if (ctx->pc == 0x2BB56Cu) {
        ctx->pc = 0x2BB56Cu;
            // 0x2bb56c: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2BB570u;
        goto label_2bb570;
    }
    ctx->pc = 0x2BB568u;
    {
        const bool branch_taken_0x2bb568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb568) {
            ctx->pc = 0x2BB56Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB568u;
            // 0x2bb56c: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BB598u;
            goto label_2bb598;
        }
    }
    ctx->pc = 0x2BB570u;
label_2bb570:
    // 0x2bb570: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2bb574:
    if (ctx->pc == 0x2BB574u) {
        ctx->pc = 0x2BB578u;
        goto label_2bb578;
    }
    ctx->pc = 0x2BB570u;
    {
        const bool branch_taken_0x2bb570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb570) {
            ctx->pc = 0x2BB594u;
            goto label_2bb594;
        }
    }
    ctx->pc = 0x2BB578u;
label_2bb578:
    // 0x2bb578: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2bb57c:
    if (ctx->pc == 0x2BB57Cu) {
        ctx->pc = 0x2BB580u;
        goto label_2bb580;
    }
    ctx->pc = 0x2BB578u;
    {
        const bool branch_taken_0x2bb578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb578) {
            ctx->pc = 0x2BB594u;
            goto label_2bb594;
        }
    }
    ctx->pc = 0x2BB580u;
label_2bb580:
    // 0x2bb580: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2bb580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2bb584:
    // 0x2bb584: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2bb588:
    if (ctx->pc == 0x2BB588u) {
        ctx->pc = 0x2BB58Cu;
        goto label_2bb58c;
    }
    ctx->pc = 0x2BB584u;
    {
        const bool branch_taken_0x2bb584 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb584) {
            ctx->pc = 0x2BB594u;
            goto label_2bb594;
        }
    }
    ctx->pc = 0x2BB58Cu;
label_2bb58c:
    // 0x2bb58c: 0xc0400a8  jal         func_1002A0
label_2bb590:
    if (ctx->pc == 0x2BB590u) {
        ctx->pc = 0x2BB594u;
        goto label_2bb594;
    }
    ctx->pc = 0x2BB58Cu;
    SET_GPR_U32(ctx, 31, 0x2BB594u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB594u; }
        if (ctx->pc != 0x2BB594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB594u; }
        if (ctx->pc != 0x2BB594u) { return; }
    }
    ctx->pc = 0x2BB594u;
label_2bb594:
    // 0x2bb594: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2bb594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2bb598:
    // 0x2bb598: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2bb59c:
    if (ctx->pc == 0x2BB59Cu) {
        ctx->pc = 0x2BB59Cu;
            // 0x2bb59c: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2BB5A0u;
        goto label_2bb5a0;
    }
    ctx->pc = 0x2BB598u;
    {
        const bool branch_taken_0x2bb598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb598) {
            ctx->pc = 0x2BB59Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB598u;
            // 0x2bb59c: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BB5C8u;
            goto label_2bb5c8;
        }
    }
    ctx->pc = 0x2BB5A0u;
label_2bb5a0:
    // 0x2bb5a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2bb5a4:
    if (ctx->pc == 0x2BB5A4u) {
        ctx->pc = 0x2BB5A8u;
        goto label_2bb5a8;
    }
    ctx->pc = 0x2BB5A0u;
    {
        const bool branch_taken_0x2bb5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb5a0) {
            ctx->pc = 0x2BB5C4u;
            goto label_2bb5c4;
        }
    }
    ctx->pc = 0x2BB5A8u;
label_2bb5a8:
    // 0x2bb5a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2bb5ac:
    if (ctx->pc == 0x2BB5ACu) {
        ctx->pc = 0x2BB5B0u;
        goto label_2bb5b0;
    }
    ctx->pc = 0x2BB5A8u;
    {
        const bool branch_taken_0x2bb5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb5a8) {
            ctx->pc = 0x2BB5C4u;
            goto label_2bb5c4;
        }
    }
    ctx->pc = 0x2BB5B0u;
label_2bb5b0:
    // 0x2bb5b0: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2bb5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2bb5b4:
    // 0x2bb5b4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2bb5b8:
    if (ctx->pc == 0x2BB5B8u) {
        ctx->pc = 0x2BB5BCu;
        goto label_2bb5bc;
    }
    ctx->pc = 0x2BB5B4u;
    {
        const bool branch_taken_0x2bb5b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb5b4) {
            ctx->pc = 0x2BB5C4u;
            goto label_2bb5c4;
        }
    }
    ctx->pc = 0x2BB5BCu;
label_2bb5bc:
    // 0x2bb5bc: 0xc0400a8  jal         func_1002A0
label_2bb5c0:
    if (ctx->pc == 0x2BB5C0u) {
        ctx->pc = 0x2BB5C4u;
        goto label_2bb5c4;
    }
    ctx->pc = 0x2BB5BCu;
    SET_GPR_U32(ctx, 31, 0x2BB5C4u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB5C4u; }
        if (ctx->pc != 0x2BB5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB5C4u; }
        if (ctx->pc != 0x2BB5C4u) { return; }
    }
    ctx->pc = 0x2BB5C4u;
label_2bb5c4:
    // 0x2bb5c4: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2bb5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2bb5c8:
    // 0x2bb5c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2bb5cc:
    if (ctx->pc == 0x2BB5CCu) {
        ctx->pc = 0x2BB5D0u;
        goto label_2bb5d0;
    }
    ctx->pc = 0x2BB5C8u;
    {
        const bool branch_taken_0x2bb5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb5c8) {
            ctx->pc = 0x2BB5E4u;
            goto label_2bb5e4;
        }
    }
    ctx->pc = 0x2BB5D0u;
label_2bb5d0:
    // 0x2bb5d0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bb5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2bb5d4:
    // 0x2bb5d4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2bb5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2bb5d8:
    // 0x2bb5d8: 0x24632330  addiu       $v1, $v1, 0x2330
    ctx->pc = 0x2bb5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9008));
label_2bb5dc:
    // 0x2bb5dc: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2bb5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2bb5e0:
    // 0x2bb5e0: 0xac400cf8  sw          $zero, 0xCF8($v0)
    ctx->pc = 0x2bb5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3320), GPR_U32(ctx, 0));
label_2bb5e4:
    // 0x2bb5e4: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2bb5e8:
    if (ctx->pc == 0x2BB5E8u) {
        ctx->pc = 0x2BB5E8u;
            // 0x2bb5e8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2BB5ECu;
        goto label_2bb5ec;
    }
    ctx->pc = 0x2BB5E4u;
    {
        const bool branch_taken_0x2bb5e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb5e4) {
            ctx->pc = 0x2BB5E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB5E4u;
            // 0x2bb5e8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BB640u;
            goto label_2bb640;
        }
    }
    ctx->pc = 0x2BB5ECu;
label_2bb5ec:
    // 0x2bb5ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bb5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bb5f0:
    // 0x2bb5f0: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2bb5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2bb5f4:
    // 0x2bb5f4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2bb5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2bb5f8:
    // 0x2bb5f8: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2bb5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2bb5fc:
    // 0x2bb5fc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2bb600:
    if (ctx->pc == 0x2BB600u) {
        ctx->pc = 0x2BB600u;
            // 0x2bb600: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2BB604u;
        goto label_2bb604;
    }
    ctx->pc = 0x2BB5FCu;
    {
        const bool branch_taken_0x2bb5fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb5fc) {
            ctx->pc = 0x2BB600u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB5FCu;
            // 0x2bb600: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BB618u;
            goto label_2bb618;
        }
    }
    ctx->pc = 0x2BB604u;
label_2bb604:
    // 0x2bb604: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bb604u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bb608:
    // 0x2bb608: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2bb608u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2bb60c:
    // 0x2bb60c: 0x320f809  jalr        $t9
label_2bb610:
    if (ctx->pc == 0x2BB610u) {
        ctx->pc = 0x2BB610u;
            // 0x2bb610: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BB614u;
        goto label_2bb614;
    }
    ctx->pc = 0x2BB60Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BB614u);
        ctx->pc = 0x2BB610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB60Cu;
            // 0x2bb610: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BB614u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BB614u; }
            if (ctx->pc != 0x2BB614u) { return; }
        }
        }
    }
    ctx->pc = 0x2BB614u;
label_2bb614:
    // 0x2bb614: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2bb614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2bb618:
    // 0x2bb618: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2bb61c:
    if (ctx->pc == 0x2BB61Cu) {
        ctx->pc = 0x2BB61Cu;
            // 0x2bb61c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BB620u;
        goto label_2bb620;
    }
    ctx->pc = 0x2BB618u;
    {
        const bool branch_taken_0x2bb618 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb618) {
            ctx->pc = 0x2BB61Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB618u;
            // 0x2bb61c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BB634u;
            goto label_2bb634;
        }
    }
    ctx->pc = 0x2BB620u;
label_2bb620:
    // 0x2bb620: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bb620u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bb624:
    // 0x2bb624: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2bb624u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2bb628:
    // 0x2bb628: 0x320f809  jalr        $t9
label_2bb62c:
    if (ctx->pc == 0x2BB62Cu) {
        ctx->pc = 0x2BB62Cu;
            // 0x2bb62c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BB630u;
        goto label_2bb630;
    }
    ctx->pc = 0x2BB628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BB630u);
        ctx->pc = 0x2BB62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB628u;
            // 0x2bb62c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BB630u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BB630u; }
            if (ctx->pc != 0x2BB630u) { return; }
        }
        }
    }
    ctx->pc = 0x2BB630u;
label_2bb630:
    // 0x2bb630: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bb630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bb634:
    // 0x2bb634: 0xc075bf8  jal         func_1D6FE0
label_2bb638:
    if (ctx->pc == 0x2BB638u) {
        ctx->pc = 0x2BB638u;
            // 0x2bb638: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BB63Cu;
        goto label_2bb63c;
    }
    ctx->pc = 0x2BB634u;
    SET_GPR_U32(ctx, 31, 0x2BB63Cu);
    ctx->pc = 0x2BB638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB634u;
            // 0x2bb638: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB63Cu; }
        if (ctx->pc != 0x2BB63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB63Cu; }
        if (ctx->pc != 0x2BB63Cu) { return; }
    }
    ctx->pc = 0x2BB63Cu;
label_2bb63c:
    // 0x2bb63c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2bb63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2bb640:
    // 0x2bb640: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bb640u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2bb644:
    // 0x2bb644: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2bb648:
    if (ctx->pc == 0x2BB648u) {
        ctx->pc = 0x2BB648u;
            // 0x2bb648: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BB64Cu;
        goto label_2bb64c;
    }
    ctx->pc = 0x2BB644u;
    {
        const bool branch_taken_0x2bb644 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bb644) {
            ctx->pc = 0x2BB648u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB644u;
            // 0x2bb648: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BB658u;
            goto label_2bb658;
        }
    }
    ctx->pc = 0x2BB64Cu;
label_2bb64c:
    // 0x2bb64c: 0xc0400a8  jal         func_1002A0
label_2bb650:
    if (ctx->pc == 0x2BB650u) {
        ctx->pc = 0x2BB650u;
            // 0x2bb650: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BB654u;
        goto label_2bb654;
    }
    ctx->pc = 0x2BB64Cu;
    SET_GPR_U32(ctx, 31, 0x2BB654u);
    ctx->pc = 0x2BB650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB64Cu;
            // 0x2bb650: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB654u; }
        if (ctx->pc != 0x2BB654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB654u; }
        if (ctx->pc != 0x2BB654u) { return; }
    }
    ctx->pc = 0x2BB654u;
label_2bb654:
    // 0x2bb654: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2bb654u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bb658:
    // 0x2bb658: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bb658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bb65c:
    // 0x2bb65c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bb65cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bb660:
    // 0x2bb660: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bb660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bb664:
    // 0x2bb664: 0x3e00008  jr          $ra
label_2bb668:
    if (ctx->pc == 0x2BB668u) {
        ctx->pc = 0x2BB668u;
            // 0x2bb668: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2BB66Cu;
        goto label_2bb66c;
    }
    ctx->pc = 0x2BB664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB664u;
            // 0x2bb668: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BB66Cu;
label_2bb66c:
    // 0x2bb66c: 0x0  nop
    ctx->pc = 0x2bb66cu;
    // NOP
}
