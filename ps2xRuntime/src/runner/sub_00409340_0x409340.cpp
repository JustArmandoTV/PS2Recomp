#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00409340
// Address: 0x409340 - 0x409620
void sub_00409340_0x409340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00409340_0x409340");
#endif

    switch (ctx->pc) {
        case 0x409340u: goto label_409340;
        case 0x409344u: goto label_409344;
        case 0x409348u: goto label_409348;
        case 0x40934cu: goto label_40934c;
        case 0x409350u: goto label_409350;
        case 0x409354u: goto label_409354;
        case 0x409358u: goto label_409358;
        case 0x40935cu: goto label_40935c;
        case 0x409360u: goto label_409360;
        case 0x409364u: goto label_409364;
        case 0x409368u: goto label_409368;
        case 0x40936cu: goto label_40936c;
        case 0x409370u: goto label_409370;
        case 0x409374u: goto label_409374;
        case 0x409378u: goto label_409378;
        case 0x40937cu: goto label_40937c;
        case 0x409380u: goto label_409380;
        case 0x409384u: goto label_409384;
        case 0x409388u: goto label_409388;
        case 0x40938cu: goto label_40938c;
        case 0x409390u: goto label_409390;
        case 0x409394u: goto label_409394;
        case 0x409398u: goto label_409398;
        case 0x40939cu: goto label_40939c;
        case 0x4093a0u: goto label_4093a0;
        case 0x4093a4u: goto label_4093a4;
        case 0x4093a8u: goto label_4093a8;
        case 0x4093acu: goto label_4093ac;
        case 0x4093b0u: goto label_4093b0;
        case 0x4093b4u: goto label_4093b4;
        case 0x4093b8u: goto label_4093b8;
        case 0x4093bcu: goto label_4093bc;
        case 0x4093c0u: goto label_4093c0;
        case 0x4093c4u: goto label_4093c4;
        case 0x4093c8u: goto label_4093c8;
        case 0x4093ccu: goto label_4093cc;
        case 0x4093d0u: goto label_4093d0;
        case 0x4093d4u: goto label_4093d4;
        case 0x4093d8u: goto label_4093d8;
        case 0x4093dcu: goto label_4093dc;
        case 0x4093e0u: goto label_4093e0;
        case 0x4093e4u: goto label_4093e4;
        case 0x4093e8u: goto label_4093e8;
        case 0x4093ecu: goto label_4093ec;
        case 0x4093f0u: goto label_4093f0;
        case 0x4093f4u: goto label_4093f4;
        case 0x4093f8u: goto label_4093f8;
        case 0x4093fcu: goto label_4093fc;
        case 0x409400u: goto label_409400;
        case 0x409404u: goto label_409404;
        case 0x409408u: goto label_409408;
        case 0x40940cu: goto label_40940c;
        case 0x409410u: goto label_409410;
        case 0x409414u: goto label_409414;
        case 0x409418u: goto label_409418;
        case 0x40941cu: goto label_40941c;
        case 0x409420u: goto label_409420;
        case 0x409424u: goto label_409424;
        case 0x409428u: goto label_409428;
        case 0x40942cu: goto label_40942c;
        case 0x409430u: goto label_409430;
        case 0x409434u: goto label_409434;
        case 0x409438u: goto label_409438;
        case 0x40943cu: goto label_40943c;
        case 0x409440u: goto label_409440;
        case 0x409444u: goto label_409444;
        case 0x409448u: goto label_409448;
        case 0x40944cu: goto label_40944c;
        case 0x409450u: goto label_409450;
        case 0x409454u: goto label_409454;
        case 0x409458u: goto label_409458;
        case 0x40945cu: goto label_40945c;
        case 0x409460u: goto label_409460;
        case 0x409464u: goto label_409464;
        case 0x409468u: goto label_409468;
        case 0x40946cu: goto label_40946c;
        case 0x409470u: goto label_409470;
        case 0x409474u: goto label_409474;
        case 0x409478u: goto label_409478;
        case 0x40947cu: goto label_40947c;
        case 0x409480u: goto label_409480;
        case 0x409484u: goto label_409484;
        case 0x409488u: goto label_409488;
        case 0x40948cu: goto label_40948c;
        case 0x409490u: goto label_409490;
        case 0x409494u: goto label_409494;
        case 0x409498u: goto label_409498;
        case 0x40949cu: goto label_40949c;
        case 0x4094a0u: goto label_4094a0;
        case 0x4094a4u: goto label_4094a4;
        case 0x4094a8u: goto label_4094a8;
        case 0x4094acu: goto label_4094ac;
        case 0x4094b0u: goto label_4094b0;
        case 0x4094b4u: goto label_4094b4;
        case 0x4094b8u: goto label_4094b8;
        case 0x4094bcu: goto label_4094bc;
        case 0x4094c0u: goto label_4094c0;
        case 0x4094c4u: goto label_4094c4;
        case 0x4094c8u: goto label_4094c8;
        case 0x4094ccu: goto label_4094cc;
        case 0x4094d0u: goto label_4094d0;
        case 0x4094d4u: goto label_4094d4;
        case 0x4094d8u: goto label_4094d8;
        case 0x4094dcu: goto label_4094dc;
        case 0x4094e0u: goto label_4094e0;
        case 0x4094e4u: goto label_4094e4;
        case 0x4094e8u: goto label_4094e8;
        case 0x4094ecu: goto label_4094ec;
        case 0x4094f0u: goto label_4094f0;
        case 0x4094f4u: goto label_4094f4;
        case 0x4094f8u: goto label_4094f8;
        case 0x4094fcu: goto label_4094fc;
        case 0x409500u: goto label_409500;
        case 0x409504u: goto label_409504;
        case 0x409508u: goto label_409508;
        case 0x40950cu: goto label_40950c;
        case 0x409510u: goto label_409510;
        case 0x409514u: goto label_409514;
        case 0x409518u: goto label_409518;
        case 0x40951cu: goto label_40951c;
        case 0x409520u: goto label_409520;
        case 0x409524u: goto label_409524;
        case 0x409528u: goto label_409528;
        case 0x40952cu: goto label_40952c;
        case 0x409530u: goto label_409530;
        case 0x409534u: goto label_409534;
        case 0x409538u: goto label_409538;
        case 0x40953cu: goto label_40953c;
        case 0x409540u: goto label_409540;
        case 0x409544u: goto label_409544;
        case 0x409548u: goto label_409548;
        case 0x40954cu: goto label_40954c;
        case 0x409550u: goto label_409550;
        case 0x409554u: goto label_409554;
        case 0x409558u: goto label_409558;
        case 0x40955cu: goto label_40955c;
        case 0x409560u: goto label_409560;
        case 0x409564u: goto label_409564;
        case 0x409568u: goto label_409568;
        case 0x40956cu: goto label_40956c;
        case 0x409570u: goto label_409570;
        case 0x409574u: goto label_409574;
        case 0x409578u: goto label_409578;
        case 0x40957cu: goto label_40957c;
        case 0x409580u: goto label_409580;
        case 0x409584u: goto label_409584;
        case 0x409588u: goto label_409588;
        case 0x40958cu: goto label_40958c;
        case 0x409590u: goto label_409590;
        case 0x409594u: goto label_409594;
        case 0x409598u: goto label_409598;
        case 0x40959cu: goto label_40959c;
        case 0x4095a0u: goto label_4095a0;
        case 0x4095a4u: goto label_4095a4;
        case 0x4095a8u: goto label_4095a8;
        case 0x4095acu: goto label_4095ac;
        case 0x4095b0u: goto label_4095b0;
        case 0x4095b4u: goto label_4095b4;
        case 0x4095b8u: goto label_4095b8;
        case 0x4095bcu: goto label_4095bc;
        case 0x4095c0u: goto label_4095c0;
        case 0x4095c4u: goto label_4095c4;
        case 0x4095c8u: goto label_4095c8;
        case 0x4095ccu: goto label_4095cc;
        case 0x4095d0u: goto label_4095d0;
        case 0x4095d4u: goto label_4095d4;
        case 0x4095d8u: goto label_4095d8;
        case 0x4095dcu: goto label_4095dc;
        case 0x4095e0u: goto label_4095e0;
        case 0x4095e4u: goto label_4095e4;
        case 0x4095e8u: goto label_4095e8;
        case 0x4095ecu: goto label_4095ec;
        case 0x4095f0u: goto label_4095f0;
        case 0x4095f4u: goto label_4095f4;
        case 0x4095f8u: goto label_4095f8;
        case 0x4095fcu: goto label_4095fc;
        case 0x409600u: goto label_409600;
        case 0x409604u: goto label_409604;
        case 0x409608u: goto label_409608;
        case 0x40960cu: goto label_40960c;
        case 0x409610u: goto label_409610;
        case 0x409614u: goto label_409614;
        case 0x409618u: goto label_409618;
        case 0x40961cu: goto label_40961c;
        default: break;
    }

    ctx->pc = 0x409340u;

label_409340:
    // 0x409340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x409340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_409344:
    // 0x409344: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x409344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_409348:
    // 0x409348: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x409348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_40934c:
    // 0x40934c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40934cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_409350:
    // 0x409350: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x409350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_409354:
    // 0x409354: 0x12200051  beqz        $s1, . + 4 + (0x51 << 2)
label_409358:
    if (ctx->pc == 0x409358u) {
        ctx->pc = 0x409358u;
            // 0x409358: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40935Cu;
        goto label_40935c;
    }
    ctx->pc = 0x409354u;
    {
        const bool branch_taken_0x409354 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x409358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x409354u;
            // 0x409358: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409354) {
            ctx->pc = 0x40949Cu;
            goto label_40949c;
        }
    }
    ctx->pc = 0x40935Cu;
label_40935c:
    // 0x40935c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x40935cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_409360:
    // 0x409360: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x409360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_409364:
    // 0x409364: 0x2463aa40  addiu       $v1, $v1, -0x55C0
    ctx->pc = 0x409364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945344));
label_409368:
    // 0x409368: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x409368u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_40936c:
    // 0x40936c: 0x2442aa78  addiu       $v0, $v0, -0x5588
    ctx->pc = 0x40936cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945400));
label_409370:
    // 0x409370: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x409370u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_409374:
    // 0x409374: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x409374u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_409378:
    // 0x409378: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x409378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_40937c:
    // 0x40937c: 0xc0407c0  jal         func_101F00
label_409380:
    if (ctx->pc == 0x409380u) {
        ctx->pc = 0x409380u;
            // 0x409380: 0x24a57c10  addiu       $a1, $a1, 0x7C10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31760));
        ctx->pc = 0x409384u;
        goto label_409384;
    }
    ctx->pc = 0x40937Cu;
    SET_GPR_U32(ctx, 31, 0x409384u);
    ctx->pc = 0x409380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40937Cu;
            // 0x409380: 0x24a57c10  addiu       $a1, $a1, 0x7C10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409384u; }
        if (ctx->pc != 0x409384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409384u; }
        if (ctx->pc != 0x409384u) { return; }
    }
    ctx->pc = 0x409384u;
label_409384:
    // 0x409384: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x409384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_409388:
    // 0x409388: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_40938c:
    if (ctx->pc == 0x40938Cu) {
        ctx->pc = 0x40938Cu;
            // 0x40938c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x409390u;
        goto label_409390;
    }
    ctx->pc = 0x409388u;
    {
        const bool branch_taken_0x409388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x409388) {
            ctx->pc = 0x40938Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x409388u;
            // 0x40938c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4093B0u;
            goto label_4093b0;
        }
    }
    ctx->pc = 0x409390u;
label_409390:
    // 0x409390: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x409390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_409394:
    // 0x409394: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_409398:
    if (ctx->pc == 0x409398u) {
        ctx->pc = 0x409398u;
            // 0x409398: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->pc = 0x40939Cu;
        goto label_40939c;
    }
    ctx->pc = 0x409394u;
    {
        const bool branch_taken_0x409394 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x409394) {
            ctx->pc = 0x409398u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x409394u;
            // 0x409398: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4093ACu;
            goto label_4093ac;
        }
    }
    ctx->pc = 0x40939Cu;
label_40939c:
    // 0x40939c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x40939cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_4093a0:
    // 0x4093a0: 0xc0407c0  jal         func_101F00
label_4093a4:
    if (ctx->pc == 0x4093A4u) {
        ctx->pc = 0x4093A4u;
            // 0x4093a4: 0x24a533e0  addiu       $a1, $a1, 0x33E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13280));
        ctx->pc = 0x4093A8u;
        goto label_4093a8;
    }
    ctx->pc = 0x4093A0u;
    SET_GPR_U32(ctx, 31, 0x4093A8u);
    ctx->pc = 0x4093A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4093A0u;
            // 0x4093a4: 0x24a533e0  addiu       $a1, $a1, 0x33E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4093A8u; }
        if (ctx->pc != 0x4093A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4093A8u; }
        if (ctx->pc != 0x4093A8u) { return; }
    }
    ctx->pc = 0x4093A8u;
label_4093a8:
    // 0x4093a8: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x4093a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
label_4093ac:
    // 0x4093ac: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x4093acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4093b0:
    // 0x4093b0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4093b4:
    if (ctx->pc == 0x4093B4u) {
        ctx->pc = 0x4093B4u;
            // 0x4093b4: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x4093B8u;
        goto label_4093b8;
    }
    ctx->pc = 0x4093B0u;
    {
        const bool branch_taken_0x4093b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4093b0) {
            ctx->pc = 0x4093B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4093B0u;
            // 0x4093b4: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4093E0u;
            goto label_4093e0;
        }
    }
    ctx->pc = 0x4093B8u;
label_4093b8:
    // 0x4093b8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4093bc:
    if (ctx->pc == 0x4093BCu) {
        ctx->pc = 0x4093C0u;
        goto label_4093c0;
    }
    ctx->pc = 0x4093B8u;
    {
        const bool branch_taken_0x4093b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4093b8) {
            ctx->pc = 0x4093DCu;
            goto label_4093dc;
        }
    }
    ctx->pc = 0x4093C0u;
label_4093c0:
    // 0x4093c0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4093c4:
    if (ctx->pc == 0x4093C4u) {
        ctx->pc = 0x4093C8u;
        goto label_4093c8;
    }
    ctx->pc = 0x4093C0u;
    {
        const bool branch_taken_0x4093c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4093c0) {
            ctx->pc = 0x4093DCu;
            goto label_4093dc;
        }
    }
    ctx->pc = 0x4093C8u;
label_4093c8:
    // 0x4093c8: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x4093c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_4093cc:
    // 0x4093cc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4093d0:
    if (ctx->pc == 0x4093D0u) {
        ctx->pc = 0x4093D4u;
        goto label_4093d4;
    }
    ctx->pc = 0x4093CCu;
    {
        const bool branch_taken_0x4093cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4093cc) {
            ctx->pc = 0x4093DCu;
            goto label_4093dc;
        }
    }
    ctx->pc = 0x4093D4u;
label_4093d4:
    // 0x4093d4: 0xc0400a8  jal         func_1002A0
label_4093d8:
    if (ctx->pc == 0x4093D8u) {
        ctx->pc = 0x4093DCu;
        goto label_4093dc;
    }
    ctx->pc = 0x4093D4u;
    SET_GPR_U32(ctx, 31, 0x4093DCu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4093DCu; }
        if (ctx->pc != 0x4093DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4093DCu; }
        if (ctx->pc != 0x4093DCu) { return; }
    }
    ctx->pc = 0x4093DCu;
label_4093dc:
    // 0x4093dc: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x4093dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4093e0:
    // 0x4093e0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4093e4:
    if (ctx->pc == 0x4093E4u) {
        ctx->pc = 0x4093E4u;
            // 0x4093e4: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4093E8u;
        goto label_4093e8;
    }
    ctx->pc = 0x4093E0u;
    {
        const bool branch_taken_0x4093e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4093e0) {
            ctx->pc = 0x4093E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4093E0u;
            // 0x4093e4: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x409410u;
            goto label_409410;
        }
    }
    ctx->pc = 0x4093E8u;
label_4093e8:
    // 0x4093e8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4093ec:
    if (ctx->pc == 0x4093ECu) {
        ctx->pc = 0x4093F0u;
        goto label_4093f0;
    }
    ctx->pc = 0x4093E8u;
    {
        const bool branch_taken_0x4093e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4093e8) {
            ctx->pc = 0x40940Cu;
            goto label_40940c;
        }
    }
    ctx->pc = 0x4093F0u;
label_4093f0:
    // 0x4093f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4093f4:
    if (ctx->pc == 0x4093F4u) {
        ctx->pc = 0x4093F8u;
        goto label_4093f8;
    }
    ctx->pc = 0x4093F0u;
    {
        const bool branch_taken_0x4093f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4093f0) {
            ctx->pc = 0x40940Cu;
            goto label_40940c;
        }
    }
    ctx->pc = 0x4093F8u;
label_4093f8:
    // 0x4093f8: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x4093f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4093fc:
    // 0x4093fc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_409400:
    if (ctx->pc == 0x409400u) {
        ctx->pc = 0x409404u;
        goto label_409404;
    }
    ctx->pc = 0x4093FCu;
    {
        const bool branch_taken_0x4093fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4093fc) {
            ctx->pc = 0x40940Cu;
            goto label_40940c;
        }
    }
    ctx->pc = 0x409404u;
label_409404:
    // 0x409404: 0xc0400a8  jal         func_1002A0
label_409408:
    if (ctx->pc == 0x409408u) {
        ctx->pc = 0x40940Cu;
        goto label_40940c;
    }
    ctx->pc = 0x409404u;
    SET_GPR_U32(ctx, 31, 0x40940Cu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40940Cu; }
        if (ctx->pc != 0x40940Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40940Cu; }
        if (ctx->pc != 0x40940Cu) { return; }
    }
    ctx->pc = 0x40940Cu;
label_40940c:
    // 0x40940c: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x40940cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_409410:
    // 0x409410: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_409414:
    if (ctx->pc == 0x409414u) {
        ctx->pc = 0x409418u;
        goto label_409418;
    }
    ctx->pc = 0x409410u;
    {
        const bool branch_taken_0x409410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x409410) {
            ctx->pc = 0x40942Cu;
            goto label_40942c;
        }
    }
    ctx->pc = 0x409418u;
label_409418:
    // 0x409418: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x409418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_40941c:
    // 0x40941c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x40941cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_409420:
    // 0x409420: 0x2463aa28  addiu       $v1, $v1, -0x55D8
    ctx->pc = 0x409420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945320));
label_409424:
    // 0x409424: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x409424u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_409428:
    // 0x409428: 0xac4072a0  sw          $zero, 0x72A0($v0)
    ctx->pc = 0x409428u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29344), GPR_U32(ctx, 0));
label_40942c:
    // 0x40942c: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_409430:
    if (ctx->pc == 0x409430u) {
        ctx->pc = 0x409430u;
            // 0x409430: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x409434u;
        goto label_409434;
    }
    ctx->pc = 0x40942Cu;
    {
        const bool branch_taken_0x40942c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x40942c) {
            ctx->pc = 0x409430u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40942Cu;
            // 0x409430: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x409488u;
            goto label_409488;
        }
    }
    ctx->pc = 0x409434u;
label_409434:
    // 0x409434: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x409434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_409438:
    // 0x409438: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x409438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_40943c:
    // 0x40943c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x40943cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_409440:
    // 0x409440: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x409440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_409444:
    // 0x409444: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_409448:
    if (ctx->pc == 0x409448u) {
        ctx->pc = 0x409448u;
            // 0x409448: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x40944Cu;
        goto label_40944c;
    }
    ctx->pc = 0x409444u;
    {
        const bool branch_taken_0x409444 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x409444) {
            ctx->pc = 0x409448u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x409444u;
            // 0x409448: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x409460u;
            goto label_409460;
        }
    }
    ctx->pc = 0x40944Cu;
label_40944c:
    // 0x40944c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x40944cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_409450:
    // 0x409450: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x409450u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_409454:
    // 0x409454: 0x320f809  jalr        $t9
label_409458:
    if (ctx->pc == 0x409458u) {
        ctx->pc = 0x409458u;
            // 0x409458: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x40945Cu;
        goto label_40945c;
    }
    ctx->pc = 0x409454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40945Cu);
        ctx->pc = 0x409458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x409454u;
            // 0x409458: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40945Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40945Cu; }
            if (ctx->pc != 0x40945Cu) { return; }
        }
        }
    }
    ctx->pc = 0x40945Cu;
label_40945c:
    // 0x40945c: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x40945cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_409460:
    // 0x409460: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_409464:
    if (ctx->pc == 0x409464u) {
        ctx->pc = 0x409464u;
            // 0x409464: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x409468u;
        goto label_409468;
    }
    ctx->pc = 0x409460u;
    {
        const bool branch_taken_0x409460 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x409460) {
            ctx->pc = 0x409464u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x409460u;
            // 0x409464: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40947Cu;
            goto label_40947c;
        }
    }
    ctx->pc = 0x409468u;
label_409468:
    // 0x409468: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x409468u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_40946c:
    // 0x40946c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x40946cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_409470:
    // 0x409470: 0x320f809  jalr        $t9
label_409474:
    if (ctx->pc == 0x409474u) {
        ctx->pc = 0x409474u;
            // 0x409474: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x409478u;
        goto label_409478;
    }
    ctx->pc = 0x409470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x409478u);
        ctx->pc = 0x409474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x409470u;
            // 0x409474: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x409478u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x409478u; }
            if (ctx->pc != 0x409478u) { return; }
        }
        }
    }
    ctx->pc = 0x409478u;
label_409478:
    // 0x409478: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x409478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40947c:
    // 0x40947c: 0xc075bf8  jal         func_1D6FE0
label_409480:
    if (ctx->pc == 0x409480u) {
        ctx->pc = 0x409480u;
            // 0x409480: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x409484u;
        goto label_409484;
    }
    ctx->pc = 0x40947Cu;
    SET_GPR_U32(ctx, 31, 0x409484u);
    ctx->pc = 0x409480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40947Cu;
            // 0x409480: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409484u; }
        if (ctx->pc != 0x409484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409484u; }
        if (ctx->pc != 0x409484u) { return; }
    }
    ctx->pc = 0x409484u;
label_409484:
    // 0x409484: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x409484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_409488:
    // 0x409488: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x409488u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_40948c:
    // 0x40948c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_409490:
    if (ctx->pc == 0x409490u) {
        ctx->pc = 0x409490u;
            // 0x409490: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x409494u;
        goto label_409494;
    }
    ctx->pc = 0x40948Cu;
    {
        const bool branch_taken_0x40948c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x40948c) {
            ctx->pc = 0x409490u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40948Cu;
            // 0x409490: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4094A0u;
            goto label_4094a0;
        }
    }
    ctx->pc = 0x409494u;
label_409494:
    // 0x409494: 0xc0400a8  jal         func_1002A0
label_409498:
    if (ctx->pc == 0x409498u) {
        ctx->pc = 0x409498u;
            // 0x409498: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40949Cu;
        goto label_40949c;
    }
    ctx->pc = 0x409494u;
    SET_GPR_U32(ctx, 31, 0x40949Cu);
    ctx->pc = 0x409498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x409494u;
            // 0x409498: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40949Cu; }
        if (ctx->pc != 0x40949Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40949Cu; }
        if (ctx->pc != 0x40949Cu) { return; }
    }
    ctx->pc = 0x40949Cu;
label_40949c:
    // 0x40949c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x40949cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4094a0:
    // 0x4094a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4094a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4094a4:
    // 0x4094a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4094a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4094a8:
    // 0x4094a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4094a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4094ac:
    // 0x4094ac: 0x3e00008  jr          $ra
label_4094b0:
    if (ctx->pc == 0x4094B0u) {
        ctx->pc = 0x4094B0u;
            // 0x4094b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4094B4u;
        goto label_4094b4;
    }
    ctx->pc = 0x4094ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4094B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4094ACu;
            // 0x4094b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4094B4u;
label_4094b4:
    // 0x4094b4: 0x0  nop
    ctx->pc = 0x4094b4u;
    // NOP
label_4094b8:
    // 0x4094b8: 0x0  nop
    ctx->pc = 0x4094b8u;
    // NOP
label_4094bc:
    // 0x4094bc: 0x0  nop
    ctx->pc = 0x4094bcu;
    // NOP
label_4094c0:
    // 0x4094c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4094c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4094c4:
    // 0x4094c4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4094c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4094c8:
    // 0x4094c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4094c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4094cc:
    // 0x4094cc: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4094ccu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4094d0:
    // 0x4094d0: 0x50a30013  beql        $a1, $v1, . + 4 + (0x13 << 2)
label_4094d4:
    if (ctx->pc == 0x4094D4u) {
        ctx->pc = 0x4094D4u;
            // 0x4094d4: 0x8c820074  lw          $v0, 0x74($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
        ctx->pc = 0x4094D8u;
        goto label_4094d8;
    }
    ctx->pc = 0x4094D0u;
    {
        const bool branch_taken_0x4094d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4094d0) {
            ctx->pc = 0x4094D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4094D0u;
            // 0x4094d4: 0x8c820074  lw          $v0, 0x74($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x409520u;
            goto label_409520;
        }
    }
    ctx->pc = 0x4094D8u;
label_4094d8:
    // 0x4094d8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4094d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4094dc:
    // 0x4094dc: 0x50a30013  beql        $a1, $v1, . + 4 + (0x13 << 2)
label_4094e0:
    if (ctx->pc == 0x4094E0u) {
        ctx->pc = 0x4094E0u;
            // 0x4094e0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x4094E4u;
        goto label_4094e4;
    }
    ctx->pc = 0x4094DCu;
    {
        const bool branch_taken_0x4094dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4094dc) {
            ctx->pc = 0x4094E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4094DCu;
            // 0x4094e0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40952Cu;
            goto label_40952c;
        }
    }
    ctx->pc = 0x4094E4u;
label_4094e4:
    // 0x4094e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4094e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4094e8:
    // 0x4094e8: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4094ec:
    if (ctx->pc == 0x4094ECu) {
        ctx->pc = 0x4094F0u;
        goto label_4094f0;
    }
    ctx->pc = 0x4094E8u;
    {
        const bool branch_taken_0x4094e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4094e8) {
            ctx->pc = 0x4094F8u;
            goto label_4094f8;
        }
    }
    ctx->pc = 0x4094F0u;
label_4094f0:
    // 0x4094f0: 0x1000000d  b           . + 4 + (0xD << 2)
label_4094f4:
    if (ctx->pc == 0x4094F4u) {
        ctx->pc = 0x4094F8u;
        goto label_4094f8;
    }
    ctx->pc = 0x4094F0u;
    {
        const bool branch_taken_0x4094f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4094f0) {
            ctx->pc = 0x409528u;
            goto label_409528;
        }
    }
    ctx->pc = 0x4094F8u;
label_4094f8:
    // 0x4094f8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4094f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4094fc:
    // 0x4094fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4094fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_409500:
    // 0x409500: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x409500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_409504:
    // 0x409504: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x409504u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_409508:
    // 0x409508: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x409508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_40950c:
    // 0x40950c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x40950cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_409510:
    // 0x409510: 0x320f809  jalr        $t9
label_409514:
    if (ctx->pc == 0x409514u) {
        ctx->pc = 0x409514u;
            // 0x409514: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x409518u;
        goto label_409518;
    }
    ctx->pc = 0x409510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x409518u);
        ctx->pc = 0x409514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x409510u;
            // 0x409514: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x409518u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x409518u; }
            if (ctx->pc != 0x409518u) { return; }
        }
        }
    }
    ctx->pc = 0x409518u;
label_409518:
    // 0x409518: 0x10000003  b           . + 4 + (0x3 << 2)
label_40951c:
    if (ctx->pc == 0x40951Cu) {
        ctx->pc = 0x409520u;
        goto label_409520;
    }
    ctx->pc = 0x409518u;
    {
        const bool branch_taken_0x409518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x409518) {
            ctx->pc = 0x409528u;
            goto label_409528;
        }
    }
    ctx->pc = 0x409520u;
label_409520:
    // 0x409520: 0xc101e6c  jal         func_4079B0
label_409524:
    if (ctx->pc == 0x409524u) {
        ctx->pc = 0x409524u;
            // 0x409524: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x409528u;
        goto label_409528;
    }
    ctx->pc = 0x409520u;
    SET_GPR_U32(ctx, 31, 0x409528u);
    ctx->pc = 0x409524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x409520u;
            // 0x409524: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4079B0u;
    if (runtime->hasFunction(0x4079B0u)) {
        auto targetFn = runtime->lookupFunction(0x4079B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409528u; }
        if (ctx->pc != 0x409528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004079B0_0x4079b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409528u; }
        if (ctx->pc != 0x409528u) { return; }
    }
    ctx->pc = 0x409528u;
label_409528:
    // 0x409528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x409528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_40952c:
    // 0x40952c: 0x3e00008  jr          $ra
label_409530:
    if (ctx->pc == 0x409530u) {
        ctx->pc = 0x409530u;
            // 0x409530: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x409534u;
        goto label_409534;
    }
    ctx->pc = 0x40952Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x409530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40952Cu;
            // 0x409530: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x409534u;
label_409534:
    // 0x409534: 0x0  nop
    ctx->pc = 0x409534u;
    // NOP
label_409538:
    // 0x409538: 0x0  nop
    ctx->pc = 0x409538u;
    // NOP
label_40953c:
    // 0x40953c: 0x0  nop
    ctx->pc = 0x40953cu;
    // NOP
label_409540:
    // 0x409540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x409540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_409544:
    // 0x409544: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x409544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_409548:
    // 0x409548: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x409548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_40954c:
    // 0x40954c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40954cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_409550:
    // 0x409550: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x409550u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_409554:
    // 0x409554: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_409558:
    if (ctx->pc == 0x409558u) {
        ctx->pc = 0x409558u;
            // 0x409558: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40955Cu;
        goto label_40955c;
    }
    ctx->pc = 0x409554u;
    {
        const bool branch_taken_0x409554 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x409558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x409554u;
            // 0x409558: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409554) {
            ctx->pc = 0x409588u;
            goto label_409588;
        }
    }
    ctx->pc = 0x40955Cu;
label_40955c:
    // 0x40955c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x40955cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_409560:
    // 0x409560: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_409564:
    if (ctx->pc == 0x409564u) {
        ctx->pc = 0x409564u;
            // 0x409564: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x409568u;
        goto label_409568;
    }
    ctx->pc = 0x409560u;
    {
        const bool branch_taken_0x409560 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x409560) {
            ctx->pc = 0x409564u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x409560u;
            // 0x409564: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40957Cu;
            goto label_40957c;
        }
    }
    ctx->pc = 0x409568u;
label_409568:
    // 0x409568: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x409568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_40956c:
    // 0x40956c: 0x50a3000d  beql        $a1, $v1, . + 4 + (0xD << 2)
label_409570:
    if (ctx->pc == 0x409570u) {
        ctx->pc = 0x409570u;
            // 0x409570: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x409574u;
        goto label_409574;
    }
    ctx->pc = 0x40956Cu;
    {
        const bool branch_taken_0x40956c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x40956c) {
            ctx->pc = 0x409570u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40956Cu;
            // 0x409570: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4095A4u;
            goto label_4095a4;
        }
    }
    ctx->pc = 0x409574u;
label_409574:
    // 0x409574: 0x1000000a  b           . + 4 + (0xA << 2)
label_409578:
    if (ctx->pc == 0x409578u) {
        ctx->pc = 0x40957Cu;
        goto label_40957c;
    }
    ctx->pc = 0x409574u;
    {
        const bool branch_taken_0x409574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x409574) {
            ctx->pc = 0x4095A0u;
            goto label_4095a0;
        }
    }
    ctx->pc = 0x40957Cu;
label_40957c:
    // 0x40957c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x40957cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_409580:
    // 0x409580: 0x320f809  jalr        $t9
label_409584:
    if (ctx->pc == 0x409584u) {
        ctx->pc = 0x409588u;
        goto label_409588;
    }
    ctx->pc = 0x409580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x409588u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x409588u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x409588u; }
            if (ctx->pc != 0x409588u) { return; }
        }
        }
    }
    ctx->pc = 0x409588u;
label_409588:
    // 0x409588: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x409588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_40958c:
    // 0x40958c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_409590:
    if (ctx->pc == 0x409590u) {
        ctx->pc = 0x409594u;
        goto label_409594;
    }
    ctx->pc = 0x40958Cu;
    {
        const bool branch_taken_0x40958c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x40958c) {
            ctx->pc = 0x4095A0u;
            goto label_4095a0;
        }
    }
    ctx->pc = 0x409594u;
label_409594:
    // 0x409594: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x409594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_409598:
    // 0x409598: 0xc101ea0  jal         func_407A80
label_40959c:
    if (ctx->pc == 0x40959Cu) {
        ctx->pc = 0x40959Cu;
            // 0x40959c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4095A0u;
        goto label_4095a0;
    }
    ctx->pc = 0x409598u;
    SET_GPR_U32(ctx, 31, 0x4095A0u);
    ctx->pc = 0x40959Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x409598u;
            // 0x40959c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x407A80u;
    if (runtime->hasFunction(0x407A80u)) {
        auto targetFn = runtime->lookupFunction(0x407A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4095A0u; }
        if (ctx->pc != 0x4095A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00407A80_0x407a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4095A0u; }
        if (ctx->pc != 0x4095A0u) { return; }
    }
    ctx->pc = 0x4095A0u;
label_4095a0:
    // 0x4095a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4095a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4095a4:
    // 0x4095a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4095a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4095a8:
    // 0x4095a8: 0x3e00008  jr          $ra
label_4095ac:
    if (ctx->pc == 0x4095ACu) {
        ctx->pc = 0x4095ACu;
            // 0x4095ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4095B0u;
        goto label_4095b0;
    }
    ctx->pc = 0x4095A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4095ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4095A8u;
            // 0x4095ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4095B0u;
label_4095b0:
    // 0x4095b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4095b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4095b4:
    // 0x4095b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4095b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4095b8:
    // 0x4095b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4095b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4095bc:
    // 0x4095bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4095bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4095c0:
    // 0x4095c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4095c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4095c4:
    // 0x4095c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4095c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4095c8:
    // 0x4095c8: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x4095c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4095cc:
    // 0x4095cc: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_4095d0:
    if (ctx->pc == 0x4095D0u) {
        ctx->pc = 0x4095D0u;
            // 0x4095d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4095D4u;
        goto label_4095d4;
    }
    ctx->pc = 0x4095CCu;
    {
        const bool branch_taken_0x4095cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4095D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4095CCu;
            // 0x4095d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4095cc) {
            ctx->pc = 0x409600u;
            goto label_409600;
        }
    }
    ctx->pc = 0x4095D4u;
label_4095d4:
    // 0x4095d4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4095d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4095d8:
    // 0x4095d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4095d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4095dc:
    // 0x4095dc: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x4095dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_4095e0:
    // 0x4095e0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4095e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4095e4:
    // 0x4095e4: 0xc101eec  jal         func_407BB0
label_4095e8:
    if (ctx->pc == 0x4095E8u) {
        ctx->pc = 0x4095E8u;
            // 0x4095e8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4095ECu;
        goto label_4095ec;
    }
    ctx->pc = 0x4095E4u;
    SET_GPR_U32(ctx, 31, 0x4095ECu);
    ctx->pc = 0x4095E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4095E4u;
            // 0x4095e8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x407BB0u;
    if (runtime->hasFunction(0x407BB0u)) {
        auto targetFn = runtime->lookupFunction(0x407BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4095ECu; }
        if (ctx->pc != 0x4095ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00407BB0_0x407bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4095ECu; }
        if (ctx->pc != 0x4095ECu) { return; }
    }
    ctx->pc = 0x4095ECu;
label_4095ec:
    // 0x4095ec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4095ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4095f0:
    // 0x4095f0: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4095f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4095f4:
    // 0x4095f4: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_4095f8:
    if (ctx->pc == 0x4095F8u) {
        ctx->pc = 0x4095F8u;
            // 0x4095f8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4095FCu;
        goto label_4095fc;
    }
    ctx->pc = 0x4095F4u;
    {
        const bool branch_taken_0x4095f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4095F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4095F4u;
            // 0x4095f8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4095f4) {
            ctx->pc = 0x4095DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4095dc;
        }
    }
    ctx->pc = 0x4095FCu;
label_4095fc:
    // 0x4095fc: 0x0  nop
    ctx->pc = 0x4095fcu;
    // NOP
label_409600:
    // 0x409600: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x409600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_409604:
    // 0x409604: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x409604u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_409608:
    // 0x409608: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x409608u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40960c:
    // 0x40960c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40960cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_409610:
    // 0x409610: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x409610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_409614:
    // 0x409614: 0x3e00008  jr          $ra
label_409618:
    if (ctx->pc == 0x409618u) {
        ctx->pc = 0x409618u;
            // 0x409618: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x40961Cu;
        goto label_40961c;
    }
    ctx->pc = 0x409614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x409618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x409614u;
            // 0x409618: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40961Cu;
label_40961c:
    // 0x40961c: 0x0  nop
    ctx->pc = 0x40961cu;
    // NOP
}
