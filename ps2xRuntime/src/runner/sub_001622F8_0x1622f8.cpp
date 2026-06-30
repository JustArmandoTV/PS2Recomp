#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001622F8
// Address: 0x1622f8 - 0x162730
void sub_001622F8_0x1622f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001622F8_0x1622f8");
#endif

    switch (ctx->pc) {
        case 0x1622f8u: goto label_1622f8;
        case 0x1622fcu: goto label_1622fc;
        case 0x162300u: goto label_162300;
        case 0x162304u: goto label_162304;
        case 0x162308u: goto label_162308;
        case 0x16230cu: goto label_16230c;
        case 0x162310u: goto label_162310;
        case 0x162314u: goto label_162314;
        case 0x162318u: goto label_162318;
        case 0x16231cu: goto label_16231c;
        case 0x162320u: goto label_162320;
        case 0x162324u: goto label_162324;
        case 0x162328u: goto label_162328;
        case 0x16232cu: goto label_16232c;
        case 0x162330u: goto label_162330;
        case 0x162334u: goto label_162334;
        case 0x162338u: goto label_162338;
        case 0x16233cu: goto label_16233c;
        case 0x162340u: goto label_162340;
        case 0x162344u: goto label_162344;
        case 0x162348u: goto label_162348;
        case 0x16234cu: goto label_16234c;
        case 0x162350u: goto label_162350;
        case 0x162354u: goto label_162354;
        case 0x162358u: goto label_162358;
        case 0x16235cu: goto label_16235c;
        case 0x162360u: goto label_162360;
        case 0x162364u: goto label_162364;
        case 0x162368u: goto label_162368;
        case 0x16236cu: goto label_16236c;
        case 0x162370u: goto label_162370;
        case 0x162374u: goto label_162374;
        case 0x162378u: goto label_162378;
        case 0x16237cu: goto label_16237c;
        case 0x162380u: goto label_162380;
        case 0x162384u: goto label_162384;
        case 0x162388u: goto label_162388;
        case 0x16238cu: goto label_16238c;
        case 0x162390u: goto label_162390;
        case 0x162394u: goto label_162394;
        case 0x162398u: goto label_162398;
        case 0x16239cu: goto label_16239c;
        case 0x1623a0u: goto label_1623a0;
        case 0x1623a4u: goto label_1623a4;
        case 0x1623a8u: goto label_1623a8;
        case 0x1623acu: goto label_1623ac;
        case 0x1623b0u: goto label_1623b0;
        case 0x1623b4u: goto label_1623b4;
        case 0x1623b8u: goto label_1623b8;
        case 0x1623bcu: goto label_1623bc;
        case 0x1623c0u: goto label_1623c0;
        case 0x1623c4u: goto label_1623c4;
        case 0x1623c8u: goto label_1623c8;
        case 0x1623ccu: goto label_1623cc;
        case 0x1623d0u: goto label_1623d0;
        case 0x1623d4u: goto label_1623d4;
        case 0x1623d8u: goto label_1623d8;
        case 0x1623dcu: goto label_1623dc;
        case 0x1623e0u: goto label_1623e0;
        case 0x1623e4u: goto label_1623e4;
        case 0x1623e8u: goto label_1623e8;
        case 0x1623ecu: goto label_1623ec;
        case 0x1623f0u: goto label_1623f0;
        case 0x1623f4u: goto label_1623f4;
        case 0x1623f8u: goto label_1623f8;
        case 0x1623fcu: goto label_1623fc;
        case 0x162400u: goto label_162400;
        case 0x162404u: goto label_162404;
        case 0x162408u: goto label_162408;
        case 0x16240cu: goto label_16240c;
        case 0x162410u: goto label_162410;
        case 0x162414u: goto label_162414;
        case 0x162418u: goto label_162418;
        case 0x16241cu: goto label_16241c;
        case 0x162420u: goto label_162420;
        case 0x162424u: goto label_162424;
        case 0x162428u: goto label_162428;
        case 0x16242cu: goto label_16242c;
        case 0x162430u: goto label_162430;
        case 0x162434u: goto label_162434;
        case 0x162438u: goto label_162438;
        case 0x16243cu: goto label_16243c;
        case 0x162440u: goto label_162440;
        case 0x162444u: goto label_162444;
        case 0x162448u: goto label_162448;
        case 0x16244cu: goto label_16244c;
        case 0x162450u: goto label_162450;
        case 0x162454u: goto label_162454;
        case 0x162458u: goto label_162458;
        case 0x16245cu: goto label_16245c;
        case 0x162460u: goto label_162460;
        case 0x162464u: goto label_162464;
        case 0x162468u: goto label_162468;
        case 0x16246cu: goto label_16246c;
        case 0x162470u: goto label_162470;
        case 0x162474u: goto label_162474;
        case 0x162478u: goto label_162478;
        case 0x16247cu: goto label_16247c;
        case 0x162480u: goto label_162480;
        case 0x162484u: goto label_162484;
        case 0x162488u: goto label_162488;
        case 0x16248cu: goto label_16248c;
        case 0x162490u: goto label_162490;
        case 0x162494u: goto label_162494;
        case 0x162498u: goto label_162498;
        case 0x16249cu: goto label_16249c;
        case 0x1624a0u: goto label_1624a0;
        case 0x1624a4u: goto label_1624a4;
        case 0x1624a8u: goto label_1624a8;
        case 0x1624acu: goto label_1624ac;
        case 0x1624b0u: goto label_1624b0;
        case 0x1624b4u: goto label_1624b4;
        case 0x1624b8u: goto label_1624b8;
        case 0x1624bcu: goto label_1624bc;
        case 0x1624c0u: goto label_1624c0;
        case 0x1624c4u: goto label_1624c4;
        case 0x1624c8u: goto label_1624c8;
        case 0x1624ccu: goto label_1624cc;
        case 0x1624d0u: goto label_1624d0;
        case 0x1624d4u: goto label_1624d4;
        case 0x1624d8u: goto label_1624d8;
        case 0x1624dcu: goto label_1624dc;
        case 0x1624e0u: goto label_1624e0;
        case 0x1624e4u: goto label_1624e4;
        case 0x1624e8u: goto label_1624e8;
        case 0x1624ecu: goto label_1624ec;
        case 0x1624f0u: goto label_1624f0;
        case 0x1624f4u: goto label_1624f4;
        case 0x1624f8u: goto label_1624f8;
        case 0x1624fcu: goto label_1624fc;
        case 0x162500u: goto label_162500;
        case 0x162504u: goto label_162504;
        case 0x162508u: goto label_162508;
        case 0x16250cu: goto label_16250c;
        case 0x162510u: goto label_162510;
        case 0x162514u: goto label_162514;
        case 0x162518u: goto label_162518;
        case 0x16251cu: goto label_16251c;
        case 0x162520u: goto label_162520;
        case 0x162524u: goto label_162524;
        case 0x162528u: goto label_162528;
        case 0x16252cu: goto label_16252c;
        case 0x162530u: goto label_162530;
        case 0x162534u: goto label_162534;
        case 0x162538u: goto label_162538;
        case 0x16253cu: goto label_16253c;
        case 0x162540u: goto label_162540;
        case 0x162544u: goto label_162544;
        case 0x162548u: goto label_162548;
        case 0x16254cu: goto label_16254c;
        case 0x162550u: goto label_162550;
        case 0x162554u: goto label_162554;
        case 0x162558u: goto label_162558;
        case 0x16255cu: goto label_16255c;
        case 0x162560u: goto label_162560;
        case 0x162564u: goto label_162564;
        case 0x162568u: goto label_162568;
        case 0x16256cu: goto label_16256c;
        case 0x162570u: goto label_162570;
        case 0x162574u: goto label_162574;
        case 0x162578u: goto label_162578;
        case 0x16257cu: goto label_16257c;
        case 0x162580u: goto label_162580;
        case 0x162584u: goto label_162584;
        case 0x162588u: goto label_162588;
        case 0x16258cu: goto label_16258c;
        case 0x162590u: goto label_162590;
        case 0x162594u: goto label_162594;
        case 0x162598u: goto label_162598;
        case 0x16259cu: goto label_16259c;
        case 0x1625a0u: goto label_1625a0;
        case 0x1625a4u: goto label_1625a4;
        case 0x1625a8u: goto label_1625a8;
        case 0x1625acu: goto label_1625ac;
        case 0x1625b0u: goto label_1625b0;
        case 0x1625b4u: goto label_1625b4;
        case 0x1625b8u: goto label_1625b8;
        case 0x1625bcu: goto label_1625bc;
        case 0x1625c0u: goto label_1625c0;
        case 0x1625c4u: goto label_1625c4;
        case 0x1625c8u: goto label_1625c8;
        case 0x1625ccu: goto label_1625cc;
        case 0x1625d0u: goto label_1625d0;
        case 0x1625d4u: goto label_1625d4;
        case 0x1625d8u: goto label_1625d8;
        case 0x1625dcu: goto label_1625dc;
        case 0x1625e0u: goto label_1625e0;
        case 0x1625e4u: goto label_1625e4;
        case 0x1625e8u: goto label_1625e8;
        case 0x1625ecu: goto label_1625ec;
        case 0x1625f0u: goto label_1625f0;
        case 0x1625f4u: goto label_1625f4;
        case 0x1625f8u: goto label_1625f8;
        case 0x1625fcu: goto label_1625fc;
        case 0x162600u: goto label_162600;
        case 0x162604u: goto label_162604;
        case 0x162608u: goto label_162608;
        case 0x16260cu: goto label_16260c;
        case 0x162610u: goto label_162610;
        case 0x162614u: goto label_162614;
        case 0x162618u: goto label_162618;
        case 0x16261cu: goto label_16261c;
        case 0x162620u: goto label_162620;
        case 0x162624u: goto label_162624;
        case 0x162628u: goto label_162628;
        case 0x16262cu: goto label_16262c;
        case 0x162630u: goto label_162630;
        case 0x162634u: goto label_162634;
        case 0x162638u: goto label_162638;
        case 0x16263cu: goto label_16263c;
        case 0x162640u: goto label_162640;
        case 0x162644u: goto label_162644;
        case 0x162648u: goto label_162648;
        case 0x16264cu: goto label_16264c;
        case 0x162650u: goto label_162650;
        case 0x162654u: goto label_162654;
        case 0x162658u: goto label_162658;
        case 0x16265cu: goto label_16265c;
        case 0x162660u: goto label_162660;
        case 0x162664u: goto label_162664;
        case 0x162668u: goto label_162668;
        case 0x16266cu: goto label_16266c;
        case 0x162670u: goto label_162670;
        case 0x162674u: goto label_162674;
        case 0x162678u: goto label_162678;
        case 0x16267cu: goto label_16267c;
        case 0x162680u: goto label_162680;
        case 0x162684u: goto label_162684;
        case 0x162688u: goto label_162688;
        case 0x16268cu: goto label_16268c;
        case 0x162690u: goto label_162690;
        case 0x162694u: goto label_162694;
        case 0x162698u: goto label_162698;
        case 0x16269cu: goto label_16269c;
        case 0x1626a0u: goto label_1626a0;
        case 0x1626a4u: goto label_1626a4;
        case 0x1626a8u: goto label_1626a8;
        case 0x1626acu: goto label_1626ac;
        case 0x1626b0u: goto label_1626b0;
        case 0x1626b4u: goto label_1626b4;
        case 0x1626b8u: goto label_1626b8;
        case 0x1626bcu: goto label_1626bc;
        case 0x1626c0u: goto label_1626c0;
        case 0x1626c4u: goto label_1626c4;
        case 0x1626c8u: goto label_1626c8;
        case 0x1626ccu: goto label_1626cc;
        case 0x1626d0u: goto label_1626d0;
        case 0x1626d4u: goto label_1626d4;
        case 0x1626d8u: goto label_1626d8;
        case 0x1626dcu: goto label_1626dc;
        case 0x1626e0u: goto label_1626e0;
        case 0x1626e4u: goto label_1626e4;
        case 0x1626e8u: goto label_1626e8;
        case 0x1626ecu: goto label_1626ec;
        case 0x1626f0u: goto label_1626f0;
        case 0x1626f4u: goto label_1626f4;
        case 0x1626f8u: goto label_1626f8;
        case 0x1626fcu: goto label_1626fc;
        case 0x162700u: goto label_162700;
        case 0x162704u: goto label_162704;
        case 0x162708u: goto label_162708;
        case 0x16270cu: goto label_16270c;
        case 0x162710u: goto label_162710;
        case 0x162714u: goto label_162714;
        case 0x162718u: goto label_162718;
        case 0x16271cu: goto label_16271c;
        case 0x162720u: goto label_162720;
        case 0x162724u: goto label_162724;
        case 0x162728u: goto label_162728;
        case 0x16272cu: goto label_16272c;
        default: break;
    }

    ctx->pc = 0x1622f8u;

label_1622f8:
    // 0x1622f8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1622f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_1622fc:
    // 0x1622fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1622fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_162300:
    // 0x162300: 0x8c423f30  lw          $v0, 0x3F30($v0)
    ctx->pc = 0x162300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16176)));
label_162304:
    // 0x162304: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_162308:
    if (ctx->pc == 0x162308u) {
        ctx->pc = 0x162308u;
            // 0x162308: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x16230Cu;
        goto label_16230c;
    }
    ctx->pc = 0x162304u;
    {
        const bool branch_taken_0x162304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162304u;
            // 0x162308: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162304) {
            ctx->pc = 0x162314u;
            goto label_162314;
        }
    }
    ctx->pc = 0x16230Cu;
label_16230c:
    // 0x16230c: 0x40f809  jalr        $v0
label_162310:
    if (ctx->pc == 0x162310u) {
        ctx->pc = 0x162314u;
        goto label_162314;
    }
    ctx->pc = 0x16230Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x162314u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x162314u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x162314u; }
            if (ctx->pc != 0x162314u) { return; }
        }
        }
    }
    ctx->pc = 0x162314u;
label_162314:
    // 0x162314: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x162314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_162318:
    // 0x162318: 0x3e00008  jr          $ra
label_16231c:
    if (ctx->pc == 0x16231Cu) {
        ctx->pc = 0x16231Cu;
            // 0x16231c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x162320u;
        goto label_162320;
    }
    ctx->pc = 0x162318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16231Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162318u;
            // 0x16231c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162320u;
label_162320:
    // 0x162320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x162320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_162324:
    // 0x162324: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x162324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_162328:
    // 0x162328: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x162328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16232c:
    // 0x16232c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16232cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_162330:
    // 0x162330: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x162330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_162334:
    // 0x162334: 0xc05cc84  jal         func_173210
label_162338:
    if (ctx->pc == 0x162338u) {
        ctx->pc = 0x162338u;
            // 0x162338: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16233Cu;
        goto label_16233c;
    }
    ctx->pc = 0x162334u;
    SET_GPR_U32(ctx, 31, 0x16233Cu);
    ctx->pc = 0x162338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162334u;
            // 0x162338: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173210u;
    if (runtime->hasFunction(0x173210u)) {
        auto targetFn = runtime->lookupFunction(0x173210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16233Cu; }
        if (ctx->pc != 0x16233Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173210_0x173210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16233Cu; }
        if (ctx->pc != 0x16233Cu) { return; }
    }
    ctx->pc = 0x16233Cu;
label_16233c:
    // 0x16233c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x16233cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_162340:
    // 0x162340: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x162340u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_162344:
    // 0x162344: 0x8e5000c0  lw          $s0, 0xC0($s2)
    ctx->pc = 0x162344u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
label_162348:
    // 0x162348: 0x52000015  beql        $s0, $zero, . + 4 + (0x15 << 2)
label_16234c:
    if (ctx->pc == 0x16234Cu) {
        ctx->pc = 0x16234Cu;
            // 0x16234c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x162350u;
        goto label_162350;
    }
    ctx->pc = 0x162348u;
    {
        const bool branch_taken_0x162348 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x162348) {
            ctx->pc = 0x16234Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162348u;
            // 0x16234c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1623A0u;
            goto label_1623a0;
        }
    }
    ctx->pc = 0x162350u;
label_162350:
    // 0x162350: 0xc05b714  jal         func_16DC50
label_162354:
    if (ctx->pc == 0x162354u) {
        ctx->pc = 0x162358u;
        goto label_162358;
    }
    ctx->pc = 0x162350u;
    SET_GPR_U32(ctx, 31, 0x162358u);
    ctx->pc = 0x16DC50u;
    if (runtime->hasFunction(0x16DC50u)) {
        auto targetFn = runtime->lookupFunction(0x16DC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162358u; }
        if (ctx->pc != 0x162358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016DC50_0x16dc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162358u; }
        if (ctx->pc != 0x162358u) { return; }
    }
    ctx->pc = 0x162358u;
label_162358:
    // 0x162358: 0xc05860a  jal         func_161828
label_16235c:
    if (ctx->pc == 0x16235Cu) {
        ctx->pc = 0x16235Cu;
            // 0x16235c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162360u;
        goto label_162360;
    }
    ctx->pc = 0x162358u;
    SET_GPR_U32(ctx, 31, 0x162360u);
    ctx->pc = 0x16235Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162358u;
            // 0x16235c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161828u;
    if (runtime->hasFunction(0x161828u)) {
        auto targetFn = runtime->lookupFunction(0x161828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162360u; }
        if (ctx->pc != 0x162360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00161828_0x161828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162360u; }
        if (ctx->pc != 0x162360u) { return; }
    }
    ctx->pc = 0x162360u;
label_162360:
    // 0x162360: 0xc0585e8  jal         func_1617A0
label_162364:
    if (ctx->pc == 0x162364u) {
        ctx->pc = 0x162364u;
            // 0x162364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162368u;
        goto label_162368;
    }
    ctx->pc = 0x162360u;
    SET_GPR_U32(ctx, 31, 0x162368u);
    ctx->pc = 0x162364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162360u;
            // 0x162364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1617A0u;
    if (runtime->hasFunction(0x1617A0u)) {
        auto targetFn = runtime->lookupFunction(0x1617A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162368u; }
        if (ctx->pc != 0x162368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001617A0_0x1617a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162368u; }
        if (ctx->pc != 0x162368u) { return; }
    }
    ctx->pc = 0x162368u;
label_162368:
    // 0x162368: 0xc05b71a  jal         func_16DC68
label_16236c:
    if (ctx->pc == 0x16236Cu) {
        ctx->pc = 0x16236Cu;
            // 0x16236c: 0xae4000c0  sw          $zero, 0xC0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 0));
        ctx->pc = 0x162370u;
        goto label_162370;
    }
    ctx->pc = 0x162368u;
    SET_GPR_U32(ctx, 31, 0x162370u);
    ctx->pc = 0x16236Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162368u;
            // 0x16236c: 0xae4000c0  sw          $zero, 0xC0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16DC68u;
    if (runtime->hasFunction(0x16DC68u)) {
        auto targetFn = runtime->lookupFunction(0x16DC68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162370u; }
        if (ctx->pc != 0x162370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016DC68_0x16dc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162370u; }
        if (ctx->pc != 0x162370u) { return; }
    }
    ctx->pc = 0x162370u;
label_162370:
    // 0x162370: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x162370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_162374:
    // 0x162374: 0xc05ba10  jal         func_16E840
label_162378:
    if (ctx->pc == 0x162378u) {
        ctx->pc = 0x162378u;
            // 0x162378: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16237Cu;
        goto label_16237c;
    }
    ctx->pc = 0x162374u;
    SET_GPR_U32(ctx, 31, 0x16237Cu);
    ctx->pc = 0x162378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162374u;
            // 0x162378: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E840u;
    if (runtime->hasFunction(0x16E840u)) {
        auto targetFn = runtime->lookupFunction(0x16E840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16237Cu; }
        if (ctx->pc != 0x16237Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E840_0x16e840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16237Cu; }
        if (ctx->pc != 0x16237Cu) { return; }
    }
    ctx->pc = 0x16237Cu;
label_16237c:
    // 0x16237c: 0xc05ba22  jal         func_16E888
label_162380:
    if (ctx->pc == 0x162380u) {
        ctx->pc = 0x162380u;
            // 0x162380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162384u;
        goto label_162384;
    }
    ctx->pc = 0x16237Cu;
    SET_GPR_U32(ctx, 31, 0x162384u);
    ctx->pc = 0x162380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16237Cu;
            // 0x162380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E888u;
    if (runtime->hasFunction(0x16E888u)) {
        auto targetFn = runtime->lookupFunction(0x16E888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162384u; }
        if (ctx->pc != 0x162384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E888_0x16e888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162384u; }
        if (ctx->pc != 0x162384u) { return; }
    }
    ctx->pc = 0x162384u;
label_162384:
    // 0x162384: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x162384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_162388:
    // 0x162388: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x162388u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_16238c:
    // 0x16238c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16238cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_162390:
    // 0x162390: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x162390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_162394:
    // 0x162394: 0x805858c  j           func_161630
label_162398:
    if (ctx->pc == 0x162398u) {
        ctx->pc = 0x162398u;
            // 0x162398: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x16239Cu;
        goto label_16239c;
    }
    ctx->pc = 0x162394u;
    ctx->pc = 0x162398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162394u;
            // 0x162398: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161630u;
    {
        auto targetFn = runtime->lookupFunction(0x161630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16239Cu;
label_16239c:
    // 0x16239c: 0x0  nop
    ctx->pc = 0x16239cu;
    // NOP
label_1623a0:
    // 0x1623a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1623a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1623a4:
    // 0x1623a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1623a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1623a8:
    // 0x1623a8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1623a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1623ac:
    // 0x1623ac: 0x3e00008  jr          $ra
label_1623b0:
    if (ctx->pc == 0x1623B0u) {
        ctx->pc = 0x1623B0u;
            // 0x1623b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1623B4u;
        goto label_1623b4;
    }
    ctx->pc = 0x1623ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1623B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1623ACu;
            // 0x1623b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1623B4u;
label_1623b4:
    // 0x1623b4: 0x0  nop
    ctx->pc = 0x1623b4u;
    // NOP
label_1623b8:
    // 0x1623b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1623b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1623bc:
    // 0x1623bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1623bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1623c0:
    // 0x1623c0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1623c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1623c4:
    // 0x1623c4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1623c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1623c8:
    // 0x1623c8: 0x8c6500c0  lw          $a1, 0xC0($v1)
    ctx->pc = 0x1623c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
label_1623cc:
    // 0x1623cc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_1623d0:
    if (ctx->pc == 0x1623D0u) {
        ctx->pc = 0x1623D0u;
            // 0x1623d0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1623D4u;
        goto label_1623d4;
    }
    ctx->pc = 0x1623CCu;
    {
        const bool branch_taken_0x1623cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1623D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1623CCu;
            // 0x1623d0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1623cc) {
            ctx->pc = 0x1623E0u;
            goto label_1623e0;
        }
    }
    ctx->pc = 0x1623D4u;
label_1623d4:
    // 0x1623d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1623d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1623d8:
    // 0x1623d8: 0x805860a  j           func_161828
label_1623dc:
    if (ctx->pc == 0x1623DCu) {
        ctx->pc = 0x1623DCu;
            // 0x1623dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1623E0u;
        goto label_1623e0;
    }
    ctx->pc = 0x1623D8u;
    ctx->pc = 0x1623DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1623D8u;
            // 0x1623dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161828u;
    if (runtime->hasFunction(0x161828u)) {
        auto targetFn = runtime->lookupFunction(0x161828u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00161828_0x161828(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1623E0u;
label_1623e0:
    // 0x1623e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1623e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1623e4:
    // 0x1623e4: 0x3e00008  jr          $ra
label_1623e8:
    if (ctx->pc == 0x1623E8u) {
        ctx->pc = 0x1623E8u;
            // 0x1623e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1623ECu;
        goto label_1623ec;
    }
    ctx->pc = 0x1623E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1623E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1623E4u;
            // 0x1623e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1623ECu;
label_1623ec:
    // 0x1623ec: 0x0  nop
    ctx->pc = 0x1623ecu;
    // NOP
label_1623f0:
    // 0x1623f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1623f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1623f4:
    // 0x1623f4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1623f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1623f8:
    // 0x1623f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1623f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1623fc:
    // 0x1623fc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1623fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_162400:
    // 0x162400: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x162400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_162404:
    // 0x162404: 0x8e1100c0  lw          $s1, 0xC0($s0)
    ctx->pc = 0x162404u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_162408:
    // 0x162408: 0xc058800  jal         func_162000
label_16240c:
    if (ctx->pc == 0x16240Cu) {
        ctx->pc = 0x16240Cu;
            // 0x16240c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162410u;
        goto label_162410;
    }
    ctx->pc = 0x162408u;
    SET_GPR_U32(ctx, 31, 0x162410u);
    ctx->pc = 0x16240Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162408u;
            // 0x16240c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x162000u;
    if (runtime->hasFunction(0x162000u)) {
        auto targetFn = runtime->lookupFunction(0x162000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162410u; }
        if (ctx->pc != 0x162410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00162000_0x162000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162410u; }
        if (ctx->pc != 0x162410u) { return; }
    }
    ctx->pc = 0x162410u;
label_162410:
    // 0x162410: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_162414:
    if (ctx->pc == 0x162414u) {
        ctx->pc = 0x162414u;
            // 0x162414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162418u;
        goto label_162418;
    }
    ctx->pc = 0x162410u;
    {
        const bool branch_taken_0x162410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162410u;
            // 0x162414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162410) {
            ctx->pc = 0x162420u;
            goto label_162420;
        }
    }
    ctx->pc = 0x162418u;
label_162418:
    // 0x162418: 0xc05860a  jal         func_161828
label_16241c:
    if (ctx->pc == 0x16241Cu) {
        ctx->pc = 0x16241Cu;
            // 0x16241c: 0xae000088  sw          $zero, 0x88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
        ctx->pc = 0x162420u;
        goto label_162420;
    }
    ctx->pc = 0x162418u;
    SET_GPR_U32(ctx, 31, 0x162420u);
    ctx->pc = 0x16241Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162418u;
            // 0x16241c: 0xae000088  sw          $zero, 0x88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161828u;
    if (runtime->hasFunction(0x161828u)) {
        auto targetFn = runtime->lookupFunction(0x161828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162420u; }
        if (ctx->pc != 0x162420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00161828_0x161828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162420u; }
        if (ctx->pc != 0x162420u) { return; }
    }
    ctx->pc = 0x162420u;
label_162420:
    // 0x162420: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x162420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_162424:
    // 0x162424: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_162428:
    // 0x162428: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_16242c:
    if (ctx->pc == 0x16242Cu) {
        ctx->pc = 0x16242Cu;
            // 0x16242c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x162430u;
        goto label_162430;
    }
    ctx->pc = 0x162428u;
    {
        const bool branch_taken_0x162428 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x162428) {
            ctx->pc = 0x16242Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162428u;
            // 0x16242c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x162448u;
            goto label_162448;
        }
    }
    ctx->pc = 0x162430u;
label_162430:
    // 0x162430: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x162430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_162434:
    // 0x162434: 0xc0585f4  jal         func_1617D0
label_162438:
    if (ctx->pc == 0x162438u) {
        ctx->pc = 0x162438u;
            // 0x162438: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16243Cu;
        goto label_16243c;
    }
    ctx->pc = 0x162434u;
    SET_GPR_U32(ctx, 31, 0x16243Cu);
    ctx->pc = 0x162438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162434u;
            // 0x162438: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1617D0u;
    if (runtime->hasFunction(0x1617D0u)) {
        auto targetFn = runtime->lookupFunction(0x1617D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16243Cu; }
        if (ctx->pc != 0x16243Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001617D0_0x1617d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16243Cu; }
        if (ctx->pc != 0x16243Cu) { return; }
    }
    ctx->pc = 0x16243Cu;
label_16243c:
    // 0x16243c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16243cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_162440:
    // 0x162440: 0x10000023  b           . + 4 + (0x23 << 2)
label_162444:
    if (ctx->pc == 0x162444u) {
        ctx->pc = 0x162444u;
            // 0x162444: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x162448u;
        goto label_162448;
    }
    ctx->pc = 0x162440u;
    {
        const bool branch_taken_0x162440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162440u;
            // 0x162444: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162440) {
            ctx->pc = 0x1624D0u;
            goto label_1624d0;
        }
    }
    ctx->pc = 0x162448u;
label_162448:
    // 0x162448: 0x54620022  bnel        $v1, $v0, . + 4 + (0x22 << 2)
label_16244c:
    if (ctx->pc == 0x16244Cu) {
        ctx->pc = 0x16244Cu;
            // 0x16244c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x162450u;
        goto label_162450;
    }
    ctx->pc = 0x162448u;
    {
        const bool branch_taken_0x162448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x162448) {
            ctx->pc = 0x16244Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162448u;
            // 0x16244c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1624D4u;
            goto label_1624d4;
        }
    }
    ctx->pc = 0x162450u;
label_162450:
    // 0x162450: 0xc058632  jal         func_1618C8
label_162454:
    if (ctx->pc == 0x162454u) {
        ctx->pc = 0x162454u;
            // 0x162454: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162458u;
        goto label_162458;
    }
    ctx->pc = 0x162450u;
    SET_GPR_U32(ctx, 31, 0x162458u);
    ctx->pc = 0x162454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162450u;
            // 0x162454: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1618C8u;
    if (runtime->hasFunction(0x1618C8u)) {
        auto targetFn = runtime->lookupFunction(0x1618C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162458u; }
        if (ctx->pc != 0x162458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001618C8_0x1618c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162458u; }
        if (ctx->pc != 0x162458u) { return; }
    }
    ctx->pc = 0x162458u;
label_162458:
    // 0x162458: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x162458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16245c:
    // 0x16245c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x16245cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_162460:
    // 0x162460: 0xc05880c  jal         func_162030
label_162464:
    if (ctx->pc == 0x162464u) {
        ctx->pc = 0x162464u;
            // 0x162464: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->pc = 0x162468u;
        goto label_162468;
    }
    ctx->pc = 0x162460u;
    SET_GPR_U32(ctx, 31, 0x162468u);
    ctx->pc = 0x162464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162460u;
            // 0x162464: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x162030u;
    if (runtime->hasFunction(0x162030u)) {
        auto targetFn = runtime->lookupFunction(0x162030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162468u; }
        if (ctx->pc != 0x162468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00162030_0x162030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162468u; }
        if (ctx->pc != 0x162468u) { return; }
    }
    ctx->pc = 0x162468u;
label_162468:
    // 0x162468: 0x8e060088  lw          $a2, 0x88($s0)
    ctx->pc = 0x162468u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_16246c:
    // 0x16246c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x16246cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_162470:
    // 0x162470: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x162470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_162474:
    // 0x162474: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x162474u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_162478:
    // 0x162478: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x162478u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_16247c:
    // 0x16247c: 0x24450003  addiu       $a1, $v0, 0x3
    ctx->pc = 0x16247cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_162480:
    // 0x162480: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x162480u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_162484:
    // 0x162484: 0xae070094  sw          $a3, 0x94($s0)
    ctx->pc = 0x162484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 7));
label_162488:
    // 0x162488: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x162488u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_16248c:
    // 0x16248c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x16248cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_162490:
    // 0x162490: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x162490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_162494:
    // 0x162494: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x162494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
label_162498:
    // 0x162498: 0xc058800  jal         func_162000
label_16249c:
    if (ctx->pc == 0x16249Cu) {
        ctx->pc = 0x16249Cu;
            // 0x16249c: 0xae060088  sw          $a2, 0x88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 6));
        ctx->pc = 0x1624A0u;
        goto label_1624a0;
    }
    ctx->pc = 0x162498u;
    SET_GPR_U32(ctx, 31, 0x1624A0u);
    ctx->pc = 0x16249Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162498u;
            // 0x16249c: 0xae060088  sw          $a2, 0x88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x162000u;
    if (runtime->hasFunction(0x162000u)) {
        auto targetFn = runtime->lookupFunction(0x162000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1624A0u; }
        if (ctx->pc != 0x1624A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00162000_0x162000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1624A0u; }
        if (ctx->pc != 0x1624A0u) { return; }
    }
    ctx->pc = 0x1624A0u;
label_1624a0:
    // 0x1624a0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1624a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1624a4:
    // 0x1624a4: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_1624a8:
    if (ctx->pc == 0x1624A8u) {
        ctx->pc = 0x1624A8u;
            // 0x1624a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1624ACu;
        goto label_1624ac;
    }
    ctx->pc = 0x1624A4u;
    {
        const bool branch_taken_0x1624a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1624A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1624A4u;
            // 0x1624a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1624a4) {
            ctx->pc = 0x1624D0u;
            goto label_1624d0;
        }
    }
    ctx->pc = 0x1624ACu;
label_1624ac:
    // 0x1624ac: 0xc05860a  jal         func_161828
label_1624b0:
    if (ctx->pc == 0x1624B0u) {
        ctx->pc = 0x1624B4u;
        goto label_1624b4;
    }
    ctx->pc = 0x1624ACu;
    SET_GPR_U32(ctx, 31, 0x1624B4u);
    ctx->pc = 0x161828u;
    if (runtime->hasFunction(0x161828u)) {
        auto targetFn = runtime->lookupFunction(0x161828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1624B4u; }
        if (ctx->pc != 0x1624B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00161828_0x161828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1624B4u; }
        if (ctx->pc != 0x1624B4u) { return; }
    }
    ctx->pc = 0x1624B4u;
label_1624b4:
    // 0x1624b4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1624b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1624b8:
    // 0x1624b8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1624b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1624bc:
    // 0x1624bc: 0x24440003  addiu       $a0, $v0, 0x3
    ctx->pc = 0x1624bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_1624c0:
    // 0x1624c0: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1624c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_1624c4:
    // 0x1624c4: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1624c4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_1624c8:
    // 0x1624c8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1624c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1624cc:
    // 0x1624cc: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1624ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_1624d0:
    // 0x1624d0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1624d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1624d4:
    // 0x1624d4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1624d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1624d8:
    // 0x1624d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1624d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1624dc:
    // 0x1624dc: 0x3e00008  jr          $ra
label_1624e0:
    if (ctx->pc == 0x1624E0u) {
        ctx->pc = 0x1624E0u;
            // 0x1624e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1624E4u;
        goto label_1624e4;
    }
    ctx->pc = 0x1624DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1624E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1624DCu;
            // 0x1624e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1624E4u;
label_1624e4:
    // 0x1624e4: 0x0  nop
    ctx->pc = 0x1624e4u;
    // NOP
label_1624e8:
    // 0x1624e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1624e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1624ec:
    // 0x1624ec: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1624ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1624f0:
    // 0x1624f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1624f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1624f4:
    // 0x1624f4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1624f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1624f8:
    // 0x1624f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1624f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1624fc:
    // 0x1624fc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1624fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_162500:
    // 0x162500: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x162500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_162504:
    // 0x162504: 0xc05881e  jal         func_162078
label_162508:
    if (ctx->pc == 0x162508u) {
        ctx->pc = 0x162508u;
            // 0x162508: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16250Cu;
        goto label_16250c;
    }
    ctx->pc = 0x162504u;
    SET_GPR_U32(ctx, 31, 0x16250Cu);
    ctx->pc = 0x162508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162504u;
            // 0x162508: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x162078u;
    if (runtime->hasFunction(0x162078u)) {
        auto targetFn = runtime->lookupFunction(0x162078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16250Cu; }
        if (ctx->pc != 0x16250Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00162078_0x162078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16250Cu; }
        if (ctx->pc != 0x16250Cu) { return; }
    }
    ctx->pc = 0x16250Cu;
label_16250c:
    // 0x16250c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x16250cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_162510:
    // 0x162510: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_162514:
    // 0x162514: 0xc058830  jal         func_1620C0
label_162518:
    if (ctx->pc == 0x162518u) {
        ctx->pc = 0x162518u;
            // 0x162518: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16251Cu;
        goto label_16251c;
    }
    ctx->pc = 0x162514u;
    SET_GPR_U32(ctx, 31, 0x16251Cu);
    ctx->pc = 0x162518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162514u;
            // 0x162518: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1620C0u;
    if (runtime->hasFunction(0x1620C0u)) {
        auto targetFn = runtime->lookupFunction(0x1620C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16251Cu; }
        if (ctx->pc != 0x16251Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001620C0_0x1620c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16251Cu; }
        if (ctx->pc != 0x16251Cu) { return; }
    }
    ctx->pc = 0x16251Cu;
label_16251c:
    // 0x16251c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x16251cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_162520:
    // 0x162520: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x162520u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_162524:
    // 0x162524: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x162524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_162528:
    // 0x162528: 0x3e00008  jr          $ra
label_16252c:
    if (ctx->pc == 0x16252Cu) {
        ctx->pc = 0x16252Cu;
            // 0x16252c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x162530u;
        goto label_162530;
    }
    ctx->pc = 0x162528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16252Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162528u;
            // 0x16252c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162530u;
label_162530:
    // 0x162530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x162530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_162534:
    // 0x162534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x162534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_162538:
    // 0x162538: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x162538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16253c:
    // 0x16253c: 0x8058616  j           func_161858
label_162540:
    if (ctx->pc == 0x162540u) {
        ctx->pc = 0x162540u;
            // 0x162540: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x162544u;
        goto label_162544;
    }
    ctx->pc = 0x16253Cu;
    ctx->pc = 0x162540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16253Cu;
            // 0x162540: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161858u;
    {
        auto targetFn = runtime->lookupFunction(0x161858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x162544u;
label_162544:
    // 0x162544: 0x0  nop
    ctx->pc = 0x162544u;
    // NOP
label_162548:
    // 0x162548: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x162548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_16254c:
    // 0x16254c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x16254cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_162550:
    // 0x162550: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x162550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_162554:
    // 0x162554: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x162554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_162558:
    // 0x162558: 0x8059f4e  j           func_167D38
label_16255c:
    if (ctx->pc == 0x16255Cu) {
        ctx->pc = 0x16255Cu;
            // 0x16255c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x162560u;
        goto label_162560;
    }
    ctx->pc = 0x162558u;
    ctx->pc = 0x16255Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162558u;
            // 0x16255c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00167D38_0x167d38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x162560u;
label_162560:
    // 0x162560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x162560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_162564:
    // 0x162564: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x162564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_162568:
    // 0x162568: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x162568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16256c:
    // 0x16256c: 0x24505cb0  addiu       $s0, $v0, 0x5CB0
    ctx->pc = 0x16256cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 23728));
label_162570:
    // 0x162570: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x162570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_162574:
    // 0x162574: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_162578:
    if (ctx->pc == 0x162578u) {
        ctx->pc = 0x162578u;
            // 0x162578: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x16257Cu;
        goto label_16257c;
    }
    ctx->pc = 0x162574u;
    {
        const bool branch_taken_0x162574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162574u;
            // 0x162578: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162574) {
            ctx->pc = 0x162594u;
            goto label_162594;
        }
    }
    ctx->pc = 0x16257Cu;
label_16257c:
    // 0x16257c: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x16257cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_162580:
    // 0x162580: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x162580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162584:
    // 0x162584: 0x24845cb8  addiu       $a0, $a0, 0x5CB8
    ctx->pc = 0x162584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23736));
label_162588:
    // 0x162588: 0xc04a576  jal         func_1295D8
label_16258c:
    if (ctx->pc == 0x16258Cu) {
        ctx->pc = 0x16258Cu;
            // 0x16258c: 0x24060300  addiu       $a2, $zero, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
        ctx->pc = 0x162590u;
        goto label_162590;
    }
    ctx->pc = 0x162588u;
    SET_GPR_U32(ctx, 31, 0x162590u);
    ctx->pc = 0x16258Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162588u;
            // 0x16258c: 0x24060300  addiu       $a2, $zero, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162590u; }
        if (ctx->pc != 0x162590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162590u; }
        if (ctx->pc != 0x162590u) { return; }
    }
    ctx->pc = 0x162590u;
label_162590:
    // 0x162590: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x162590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_162594:
    // 0x162594: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x162594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_162598:
    // 0x162598: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x162598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_16259c:
    // 0x16259c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x16259cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1625a0:
    // 0x1625a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1625a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1625a4:
    // 0x1625a4: 0x3e00008  jr          $ra
label_1625a8:
    if (ctx->pc == 0x1625A8u) {
        ctx->pc = 0x1625A8u;
            // 0x1625a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1625ACu;
        goto label_1625ac;
    }
    ctx->pc = 0x1625A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1625A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1625A4u;
            // 0x1625a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1625ACu;
label_1625ac:
    // 0x1625ac: 0x0  nop
    ctx->pc = 0x1625acu;
    // NOP
label_1625b0:
    // 0x1625b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1625b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1625b4:
    // 0x1625b4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1625b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_1625b8:
    // 0x1625b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1625b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1625bc:
    // 0x1625bc: 0x24635cb0  addiu       $v1, $v1, 0x5CB0
    ctx->pc = 0x1625bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23728));
label_1625c0:
    // 0x1625c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1625c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1625c4:
    // 0x1625c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1625c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1625c8:
    // 0x1625c8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1625cc:
    if (ctx->pc == 0x1625CCu) {
        ctx->pc = 0x1625CCu;
            // 0x1625cc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1625D0u;
        goto label_1625d0;
    }
    ctx->pc = 0x1625C8u;
    {
        const bool branch_taken_0x1625c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1625CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1625C8u;
            // 0x1625cc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1625c8) {
            ctx->pc = 0x1625F0u;
            goto label_1625f0;
        }
    }
    ctx->pc = 0x1625D0u;
label_1625d0:
    // 0x1625d0: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1625d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_1625d4:
    // 0x1625d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1625d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1625d8:
    // 0x1625d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1625d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1625dc:
    // 0x1625dc: 0x24845cb8  addiu       $a0, $a0, 0x5CB8
    ctx->pc = 0x1625dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23736));
label_1625e0:
    // 0x1625e0: 0x24060300  addiu       $a2, $zero, 0x300
    ctx->pc = 0x1625e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
label_1625e4:
    // 0x1625e4: 0x804a576  j           func_1295D8
label_1625e8:
    if (ctx->pc == 0x1625E8u) {
        ctx->pc = 0x1625E8u;
            // 0x1625e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1625ECu;
        goto label_1625ec;
    }
    ctx->pc = 0x1625E4u;
    ctx->pc = 0x1625E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1625E4u;
            // 0x1625e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001295D8_0x1295d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1625ECu;
label_1625ec:
    // 0x1625ec: 0x0  nop
    ctx->pc = 0x1625ecu;
    // NOP
label_1625f0:
    // 0x1625f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1625f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1625f4:
    // 0x1625f4: 0x3e00008  jr          $ra
label_1625f8:
    if (ctx->pc == 0x1625F8u) {
        ctx->pc = 0x1625F8u;
            // 0x1625f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1625FCu;
        goto label_1625fc;
    }
    ctx->pc = 0x1625F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1625F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1625F4u;
            // 0x1625f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1625FCu;
label_1625fc:
    // 0x1625fc: 0x0  nop
    ctx->pc = 0x1625fcu;
    // NOP
label_162600:
    // 0x162600: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x162600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_162604:
    // 0x162604: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x162604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_162608:
    // 0x162608: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x162608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16260c:
    // 0x16260c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16260cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_162610:
    // 0x162610: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x162610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_162614:
    // 0x162614: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x162614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_162618:
    // 0x162618: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x162618u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16261c:
    // 0x16261c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16261cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_162620:
    // 0x162620: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x162620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_162624:
    // 0x162624: 0x3c14005d  lui         $s4, 0x5D
    ctx->pc = 0x162624u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)93 << 16));
label_162628:
    // 0x162628: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x162628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_16262c:
    // 0x16262c: 0x26835cb8  addiu       $v1, $s4, 0x5CB8
    ctx->pc = 0x16262cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 23736));
label_162630:
    // 0x162630: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x162630u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_162634:
    // 0x162634: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_162638:
    if (ctx->pc == 0x162638u) {
        ctx->pc = 0x162638u;
            // 0x162638: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16263Cu;
        goto label_16263c;
    }
    ctx->pc = 0x162634u;
    {
        const bool branch_taken_0x162634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162634u;
            // 0x162638: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162634) {
            ctx->pc = 0x162664u;
            goto label_162664;
        }
    }
    ctx->pc = 0x16263Cu;
label_16263c:
    // 0x16263c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16263cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_162640:
    // 0x162640: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x162640u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
label_162644:
    // 0x162644: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_162648:
    if (ctx->pc == 0x162648u) {
        ctx->pc = 0x162648u;
            // 0x162648: 0x24630030  addiu       $v1, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->pc = 0x16264Cu;
        goto label_16264c;
    }
    ctx->pc = 0x162644u;
    {
        const bool branch_taken_0x162644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162644u;
            // 0x162648: 0x24630030  addiu       $v1, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162644) {
            ctx->pc = 0x162664u;
            goto label_162664;
        }
    }
    ctx->pc = 0x16264Cu;
label_16264c:
    // 0x16264c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x16264cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_162650:
    // 0x162650: 0x0  nop
    ctx->pc = 0x162650u;
    // NOP
label_162654:
    // 0x162654: 0x0  nop
    ctx->pc = 0x162654u;
    // NOP
label_162658:
    // 0x162658: 0x0  nop
    ctx->pc = 0x162658u;
    // NOP
label_16265c:
    // 0x16265c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_162660:
    if (ctx->pc == 0x162660u) {
        ctx->pc = 0x162660u;
            // 0x162660: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x162664u;
        goto label_162664;
    }
    ctx->pc = 0x16265Cu;
    {
        const bool branch_taken_0x16265c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16265c) {
            ctx->pc = 0x162660u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16265Cu;
            // 0x162660: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x162640u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_162640;
        }
    }
    ctx->pc = 0x162664u;
label_162664:
    // 0x162664: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x162664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_162668:
    // 0x162668: 0x12030028  beq         $s0, $v1, . + 4 + (0x28 << 2)
label_16266c:
    if (ctx->pc == 0x16266Cu) {
        ctx->pc = 0x16266Cu;
            // 0x16266c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162670u;
        goto label_162670;
    }
    ctx->pc = 0x162668u;
    {
        const bool branch_taken_0x162668 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16266Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162668u;
            // 0x16266c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162668) {
            ctx->pc = 0x16270Cu;
            goto label_16270c;
        }
    }
    ctx->pc = 0x162670u;
label_162670:
    // 0x162670: 0xc0599d2  jal         func_166748
label_162674:
    if (ctx->pc == 0x162674u) {
        ctx->pc = 0x162678u;
        goto label_162678;
    }
    ctx->pc = 0x162670u;
    SET_GPR_U32(ctx, 31, 0x162678u);
    ctx->pc = 0x166748u;
    if (runtime->hasFunction(0x166748u)) {
        auto targetFn = runtime->lookupFunction(0x166748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162678u; }
        if (ctx->pc != 0x162678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166748_0x166748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162678u; }
        if (ctx->pc != 0x162678u) { return; }
    }
    ctx->pc = 0x162678u;
label_162678:
    // 0x162678: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x162678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_16267c:
    // 0x16267c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x16267cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_162680:
    // 0x162680: 0x26835cb8  addiu       $v1, $s4, 0x5CB8
    ctx->pc = 0x162680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 23736));
label_162684:
    // 0x162684: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x162684u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_162688:
    // 0x162688: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x162688u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16268c:
    // 0x16268c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x16268cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_162690:
    // 0x162690: 0x1a200010  blez        $s1, . + 4 + (0x10 << 2)
label_162694:
    if (ctx->pc == 0x162694u) {
        ctx->pc = 0x162694u;
            // 0x162694: 0xa2110002  sb          $s1, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 17));
        ctx->pc = 0x162698u;
        goto label_162698;
    }
    ctx->pc = 0x162690u;
    {
        const bool branch_taken_0x162690 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x162694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162690u;
            // 0x162694: 0xa2110002  sb          $s1, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162690) {
            ctx->pc = 0x1626D4u;
            goto label_1626d4;
        }
    }
    ctx->pc = 0x162698u;
label_162698:
    // 0x162698: 0x2609000c  addiu       $t1, $s0, 0xC
    ctx->pc = 0x162698u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_16269c:
    // 0x16269c: 0x26070004  addiu       $a3, $s0, 0x4
    ctx->pc = 0x16269cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1626a0:
    // 0x1626a0: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1626a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1626a4:
    // 0x1626a4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1626a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1626a8:
    // 0x1626a8: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x1626a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1626ac:
    // 0x1626ac: 0x723021  addu        $a2, $v1, $s2
    ctx->pc = 0x1626acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1626b0:
    // 0x1626b0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1626b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1626b4:
    // 0x1626b4: 0x111282a  slt         $a1, $t0, $s1
    ctx->pc = 0x1626b4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1626b8:
    // 0x1626b8: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x1626b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_1626bc:
    // 0x1626bc: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x1626bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
label_1626c0:
    // 0x1626c0: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x1626c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
label_1626c4:
    // 0x1626c4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1626c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_1626c8:
    // 0x1626c8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1626c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1626cc:
    // 0x1626cc: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
label_1626d0:
    if (ctx->pc == 0x1626D0u) {
        ctx->pc = 0x1626D0u;
            // 0x1626d0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1626D4u;
        goto label_1626d4;
    }
    ctx->pc = 0x1626CCu;
    {
        const bool branch_taken_0x1626cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1626D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1626CCu;
            // 0x1626d0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1626cc) {
            ctx->pc = 0x1626A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1626a0;
        }
    }
    ctx->pc = 0x1626D4u;
label_1626d4:
    // 0x1626d4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1626d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_1626d8:
    // 0x1626d8: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x1626d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
label_1626dc:
    // 0x1626dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1626dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1626e0:
    // 0x1626e0: 0x3402ac44  ori         $v0, $zero, 0xAC44
    ctx->pc = 0x1626e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44100);
label_1626e4:
    // 0x1626e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1626e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1626e8:
    // 0x1626e8: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1626e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1626ec:
    // 0x1626ec: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x1626ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
label_1626f0:
    // 0x1626f0: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x1626f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_1626f4:
    // 0x1626f4: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x1626f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_1626f8:
    // 0x1626f8: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1626f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_1626fc:
    // 0x1626fc: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1626fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_162700:
    // 0x162700: 0xc0599d8  jal         func_166760
label_162704:
    if (ctx->pc == 0x162704u) {
        ctx->pc = 0x162704u;
            // 0x162704: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->pc = 0x162708u;
        goto label_162708;
    }
    ctx->pc = 0x162700u;
    SET_GPR_U32(ctx, 31, 0x162708u);
    ctx->pc = 0x162704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162700u;
            // 0x162704: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x166760u;
    if (runtime->hasFunction(0x166760u)) {
        auto targetFn = runtime->lookupFunction(0x166760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162708u; }
        if (ctx->pc != 0x162708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166760_0x166760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162708u; }
        if (ctx->pc != 0x162708u) { return; }
    }
    ctx->pc = 0x162708u;
label_162708:
    // 0x162708: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x162708u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16270c:
    // 0x16270c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16270cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_162710:
    // 0x162710: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x162710u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_162714:
    // 0x162714: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x162714u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_162718:
    // 0x162718: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x162718u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_16271c:
    // 0x16271c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x16271cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_162720:
    // 0x162720: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x162720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_162724:
    // 0x162724: 0x3e00008  jr          $ra
label_162728:
    if (ctx->pc == 0x162728u) {
        ctx->pc = 0x162728u;
            // 0x162728: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x16272Cu;
        goto label_16272c;
    }
    ctx->pc = 0x162724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162724u;
            // 0x162728: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16272Cu;
label_16272c:
    // 0x16272c: 0x0  nop
    ctx->pc = 0x16272cu;
    // NOP
}
