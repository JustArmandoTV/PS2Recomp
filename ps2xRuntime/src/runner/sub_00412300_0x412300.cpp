#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00412300
// Address: 0x412300 - 0x4127d0
void sub_00412300_0x412300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00412300_0x412300");
#endif

    switch (ctx->pc) {
        case 0x412300u: goto label_412300;
        case 0x412304u: goto label_412304;
        case 0x412308u: goto label_412308;
        case 0x41230cu: goto label_41230c;
        case 0x412310u: goto label_412310;
        case 0x412314u: goto label_412314;
        case 0x412318u: goto label_412318;
        case 0x41231cu: goto label_41231c;
        case 0x412320u: goto label_412320;
        case 0x412324u: goto label_412324;
        case 0x412328u: goto label_412328;
        case 0x41232cu: goto label_41232c;
        case 0x412330u: goto label_412330;
        case 0x412334u: goto label_412334;
        case 0x412338u: goto label_412338;
        case 0x41233cu: goto label_41233c;
        case 0x412340u: goto label_412340;
        case 0x412344u: goto label_412344;
        case 0x412348u: goto label_412348;
        case 0x41234cu: goto label_41234c;
        case 0x412350u: goto label_412350;
        case 0x412354u: goto label_412354;
        case 0x412358u: goto label_412358;
        case 0x41235cu: goto label_41235c;
        case 0x412360u: goto label_412360;
        case 0x412364u: goto label_412364;
        case 0x412368u: goto label_412368;
        case 0x41236cu: goto label_41236c;
        case 0x412370u: goto label_412370;
        case 0x412374u: goto label_412374;
        case 0x412378u: goto label_412378;
        case 0x41237cu: goto label_41237c;
        case 0x412380u: goto label_412380;
        case 0x412384u: goto label_412384;
        case 0x412388u: goto label_412388;
        case 0x41238cu: goto label_41238c;
        case 0x412390u: goto label_412390;
        case 0x412394u: goto label_412394;
        case 0x412398u: goto label_412398;
        case 0x41239cu: goto label_41239c;
        case 0x4123a0u: goto label_4123a0;
        case 0x4123a4u: goto label_4123a4;
        case 0x4123a8u: goto label_4123a8;
        case 0x4123acu: goto label_4123ac;
        case 0x4123b0u: goto label_4123b0;
        case 0x4123b4u: goto label_4123b4;
        case 0x4123b8u: goto label_4123b8;
        case 0x4123bcu: goto label_4123bc;
        case 0x4123c0u: goto label_4123c0;
        case 0x4123c4u: goto label_4123c4;
        case 0x4123c8u: goto label_4123c8;
        case 0x4123ccu: goto label_4123cc;
        case 0x4123d0u: goto label_4123d0;
        case 0x4123d4u: goto label_4123d4;
        case 0x4123d8u: goto label_4123d8;
        case 0x4123dcu: goto label_4123dc;
        case 0x4123e0u: goto label_4123e0;
        case 0x4123e4u: goto label_4123e4;
        case 0x4123e8u: goto label_4123e8;
        case 0x4123ecu: goto label_4123ec;
        case 0x4123f0u: goto label_4123f0;
        case 0x4123f4u: goto label_4123f4;
        case 0x4123f8u: goto label_4123f8;
        case 0x4123fcu: goto label_4123fc;
        case 0x412400u: goto label_412400;
        case 0x412404u: goto label_412404;
        case 0x412408u: goto label_412408;
        case 0x41240cu: goto label_41240c;
        case 0x412410u: goto label_412410;
        case 0x412414u: goto label_412414;
        case 0x412418u: goto label_412418;
        case 0x41241cu: goto label_41241c;
        case 0x412420u: goto label_412420;
        case 0x412424u: goto label_412424;
        case 0x412428u: goto label_412428;
        case 0x41242cu: goto label_41242c;
        case 0x412430u: goto label_412430;
        case 0x412434u: goto label_412434;
        case 0x412438u: goto label_412438;
        case 0x41243cu: goto label_41243c;
        case 0x412440u: goto label_412440;
        case 0x412444u: goto label_412444;
        case 0x412448u: goto label_412448;
        case 0x41244cu: goto label_41244c;
        case 0x412450u: goto label_412450;
        case 0x412454u: goto label_412454;
        case 0x412458u: goto label_412458;
        case 0x41245cu: goto label_41245c;
        case 0x412460u: goto label_412460;
        case 0x412464u: goto label_412464;
        case 0x412468u: goto label_412468;
        case 0x41246cu: goto label_41246c;
        case 0x412470u: goto label_412470;
        case 0x412474u: goto label_412474;
        case 0x412478u: goto label_412478;
        case 0x41247cu: goto label_41247c;
        case 0x412480u: goto label_412480;
        case 0x412484u: goto label_412484;
        case 0x412488u: goto label_412488;
        case 0x41248cu: goto label_41248c;
        case 0x412490u: goto label_412490;
        case 0x412494u: goto label_412494;
        case 0x412498u: goto label_412498;
        case 0x41249cu: goto label_41249c;
        case 0x4124a0u: goto label_4124a0;
        case 0x4124a4u: goto label_4124a4;
        case 0x4124a8u: goto label_4124a8;
        case 0x4124acu: goto label_4124ac;
        case 0x4124b0u: goto label_4124b0;
        case 0x4124b4u: goto label_4124b4;
        case 0x4124b8u: goto label_4124b8;
        case 0x4124bcu: goto label_4124bc;
        case 0x4124c0u: goto label_4124c0;
        case 0x4124c4u: goto label_4124c4;
        case 0x4124c8u: goto label_4124c8;
        case 0x4124ccu: goto label_4124cc;
        case 0x4124d0u: goto label_4124d0;
        case 0x4124d4u: goto label_4124d4;
        case 0x4124d8u: goto label_4124d8;
        case 0x4124dcu: goto label_4124dc;
        case 0x4124e0u: goto label_4124e0;
        case 0x4124e4u: goto label_4124e4;
        case 0x4124e8u: goto label_4124e8;
        case 0x4124ecu: goto label_4124ec;
        case 0x4124f0u: goto label_4124f0;
        case 0x4124f4u: goto label_4124f4;
        case 0x4124f8u: goto label_4124f8;
        case 0x4124fcu: goto label_4124fc;
        case 0x412500u: goto label_412500;
        case 0x412504u: goto label_412504;
        case 0x412508u: goto label_412508;
        case 0x41250cu: goto label_41250c;
        case 0x412510u: goto label_412510;
        case 0x412514u: goto label_412514;
        case 0x412518u: goto label_412518;
        case 0x41251cu: goto label_41251c;
        case 0x412520u: goto label_412520;
        case 0x412524u: goto label_412524;
        case 0x412528u: goto label_412528;
        case 0x41252cu: goto label_41252c;
        case 0x412530u: goto label_412530;
        case 0x412534u: goto label_412534;
        case 0x412538u: goto label_412538;
        case 0x41253cu: goto label_41253c;
        case 0x412540u: goto label_412540;
        case 0x412544u: goto label_412544;
        case 0x412548u: goto label_412548;
        case 0x41254cu: goto label_41254c;
        case 0x412550u: goto label_412550;
        case 0x412554u: goto label_412554;
        case 0x412558u: goto label_412558;
        case 0x41255cu: goto label_41255c;
        case 0x412560u: goto label_412560;
        case 0x412564u: goto label_412564;
        case 0x412568u: goto label_412568;
        case 0x41256cu: goto label_41256c;
        case 0x412570u: goto label_412570;
        case 0x412574u: goto label_412574;
        case 0x412578u: goto label_412578;
        case 0x41257cu: goto label_41257c;
        case 0x412580u: goto label_412580;
        case 0x412584u: goto label_412584;
        case 0x412588u: goto label_412588;
        case 0x41258cu: goto label_41258c;
        case 0x412590u: goto label_412590;
        case 0x412594u: goto label_412594;
        case 0x412598u: goto label_412598;
        case 0x41259cu: goto label_41259c;
        case 0x4125a0u: goto label_4125a0;
        case 0x4125a4u: goto label_4125a4;
        case 0x4125a8u: goto label_4125a8;
        case 0x4125acu: goto label_4125ac;
        case 0x4125b0u: goto label_4125b0;
        case 0x4125b4u: goto label_4125b4;
        case 0x4125b8u: goto label_4125b8;
        case 0x4125bcu: goto label_4125bc;
        case 0x4125c0u: goto label_4125c0;
        case 0x4125c4u: goto label_4125c4;
        case 0x4125c8u: goto label_4125c8;
        case 0x4125ccu: goto label_4125cc;
        case 0x4125d0u: goto label_4125d0;
        case 0x4125d4u: goto label_4125d4;
        case 0x4125d8u: goto label_4125d8;
        case 0x4125dcu: goto label_4125dc;
        case 0x4125e0u: goto label_4125e0;
        case 0x4125e4u: goto label_4125e4;
        case 0x4125e8u: goto label_4125e8;
        case 0x4125ecu: goto label_4125ec;
        case 0x4125f0u: goto label_4125f0;
        case 0x4125f4u: goto label_4125f4;
        case 0x4125f8u: goto label_4125f8;
        case 0x4125fcu: goto label_4125fc;
        case 0x412600u: goto label_412600;
        case 0x412604u: goto label_412604;
        case 0x412608u: goto label_412608;
        case 0x41260cu: goto label_41260c;
        case 0x412610u: goto label_412610;
        case 0x412614u: goto label_412614;
        case 0x412618u: goto label_412618;
        case 0x41261cu: goto label_41261c;
        case 0x412620u: goto label_412620;
        case 0x412624u: goto label_412624;
        case 0x412628u: goto label_412628;
        case 0x41262cu: goto label_41262c;
        case 0x412630u: goto label_412630;
        case 0x412634u: goto label_412634;
        case 0x412638u: goto label_412638;
        case 0x41263cu: goto label_41263c;
        case 0x412640u: goto label_412640;
        case 0x412644u: goto label_412644;
        case 0x412648u: goto label_412648;
        case 0x41264cu: goto label_41264c;
        case 0x412650u: goto label_412650;
        case 0x412654u: goto label_412654;
        case 0x412658u: goto label_412658;
        case 0x41265cu: goto label_41265c;
        case 0x412660u: goto label_412660;
        case 0x412664u: goto label_412664;
        case 0x412668u: goto label_412668;
        case 0x41266cu: goto label_41266c;
        case 0x412670u: goto label_412670;
        case 0x412674u: goto label_412674;
        case 0x412678u: goto label_412678;
        case 0x41267cu: goto label_41267c;
        case 0x412680u: goto label_412680;
        case 0x412684u: goto label_412684;
        case 0x412688u: goto label_412688;
        case 0x41268cu: goto label_41268c;
        case 0x412690u: goto label_412690;
        case 0x412694u: goto label_412694;
        case 0x412698u: goto label_412698;
        case 0x41269cu: goto label_41269c;
        case 0x4126a0u: goto label_4126a0;
        case 0x4126a4u: goto label_4126a4;
        case 0x4126a8u: goto label_4126a8;
        case 0x4126acu: goto label_4126ac;
        case 0x4126b0u: goto label_4126b0;
        case 0x4126b4u: goto label_4126b4;
        case 0x4126b8u: goto label_4126b8;
        case 0x4126bcu: goto label_4126bc;
        case 0x4126c0u: goto label_4126c0;
        case 0x4126c4u: goto label_4126c4;
        case 0x4126c8u: goto label_4126c8;
        case 0x4126ccu: goto label_4126cc;
        case 0x4126d0u: goto label_4126d0;
        case 0x4126d4u: goto label_4126d4;
        case 0x4126d8u: goto label_4126d8;
        case 0x4126dcu: goto label_4126dc;
        case 0x4126e0u: goto label_4126e0;
        case 0x4126e4u: goto label_4126e4;
        case 0x4126e8u: goto label_4126e8;
        case 0x4126ecu: goto label_4126ec;
        case 0x4126f0u: goto label_4126f0;
        case 0x4126f4u: goto label_4126f4;
        case 0x4126f8u: goto label_4126f8;
        case 0x4126fcu: goto label_4126fc;
        case 0x412700u: goto label_412700;
        case 0x412704u: goto label_412704;
        case 0x412708u: goto label_412708;
        case 0x41270cu: goto label_41270c;
        case 0x412710u: goto label_412710;
        case 0x412714u: goto label_412714;
        case 0x412718u: goto label_412718;
        case 0x41271cu: goto label_41271c;
        case 0x412720u: goto label_412720;
        case 0x412724u: goto label_412724;
        case 0x412728u: goto label_412728;
        case 0x41272cu: goto label_41272c;
        case 0x412730u: goto label_412730;
        case 0x412734u: goto label_412734;
        case 0x412738u: goto label_412738;
        case 0x41273cu: goto label_41273c;
        case 0x412740u: goto label_412740;
        case 0x412744u: goto label_412744;
        case 0x412748u: goto label_412748;
        case 0x41274cu: goto label_41274c;
        case 0x412750u: goto label_412750;
        case 0x412754u: goto label_412754;
        case 0x412758u: goto label_412758;
        case 0x41275cu: goto label_41275c;
        case 0x412760u: goto label_412760;
        case 0x412764u: goto label_412764;
        case 0x412768u: goto label_412768;
        case 0x41276cu: goto label_41276c;
        case 0x412770u: goto label_412770;
        case 0x412774u: goto label_412774;
        case 0x412778u: goto label_412778;
        case 0x41277cu: goto label_41277c;
        case 0x412780u: goto label_412780;
        case 0x412784u: goto label_412784;
        case 0x412788u: goto label_412788;
        case 0x41278cu: goto label_41278c;
        case 0x412790u: goto label_412790;
        case 0x412794u: goto label_412794;
        case 0x412798u: goto label_412798;
        case 0x41279cu: goto label_41279c;
        case 0x4127a0u: goto label_4127a0;
        case 0x4127a4u: goto label_4127a4;
        case 0x4127a8u: goto label_4127a8;
        case 0x4127acu: goto label_4127ac;
        case 0x4127b0u: goto label_4127b0;
        case 0x4127b4u: goto label_4127b4;
        case 0x4127b8u: goto label_4127b8;
        case 0x4127bcu: goto label_4127bc;
        case 0x4127c0u: goto label_4127c0;
        case 0x4127c4u: goto label_4127c4;
        case 0x4127c8u: goto label_4127c8;
        case 0x4127ccu: goto label_4127cc;
        default: break;
    }

    ctx->pc = 0x412300u;

label_412300:
    // 0x412300: 0x3e00008  jr          $ra
label_412304:
    if (ctx->pc == 0x412304u) {
        ctx->pc = 0x412304u;
            // 0x412304: 0x8c8200d0  lw          $v0, 0xD0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
        ctx->pc = 0x412308u;
        goto label_412308;
    }
    ctx->pc = 0x412300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x412304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x412300u;
            // 0x412304: 0x8c8200d0  lw          $v0, 0xD0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x412308u;
label_412308:
    // 0x412308: 0x0  nop
    ctx->pc = 0x412308u;
    // NOP
label_41230c:
    // 0x41230c: 0x0  nop
    ctx->pc = 0x41230cu;
    // NOP
label_412310:
    // 0x412310: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x412310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_412314:
    // 0x412314: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x412314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_412318:
    // 0x412318: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x412318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_41231c:
    // 0x41231c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x41231cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_412320:
    // 0x412320: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x412320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_412324:
    // 0x412324: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x412324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_412328:
    // 0x412328: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x412328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41232c:
    // 0x41232c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x41232cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_412330:
    // 0x412330: 0x10a30016  beq         $a1, $v1, . + 4 + (0x16 << 2)
label_412334:
    if (ctx->pc == 0x412334u) {
        ctx->pc = 0x412334u;
            // 0x412334: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x412338u;
        goto label_412338;
    }
    ctx->pc = 0x412330u;
    {
        const bool branch_taken_0x412330 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x412334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x412330u;
            // 0x412334: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412330) {
            ctx->pc = 0x41238Cu;
            goto label_41238c;
        }
    }
    ctx->pc = 0x412338u;
label_412338:
    // 0x412338: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x412338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_41233c:
    // 0x41233c: 0x50a30010  beql        $a1, $v1, . + 4 + (0x10 << 2)
label_412340:
    if (ctx->pc == 0x412340u) {
        ctx->pc = 0x412340u;
            // 0x412340: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x412344u;
        goto label_412344;
    }
    ctx->pc = 0x41233Cu;
    {
        const bool branch_taken_0x41233c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x41233c) {
            ctx->pc = 0x412340u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41233Cu;
            // 0x412340: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x412380u;
            goto label_412380;
        }
    }
    ctx->pc = 0x412344u;
label_412344:
    // 0x412344: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x412344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_412348:
    // 0x412348: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_41234c:
    if (ctx->pc == 0x41234Cu) {
        ctx->pc = 0x412350u;
        goto label_412350;
    }
    ctx->pc = 0x412348u;
    {
        const bool branch_taken_0x412348 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x412348) {
            ctx->pc = 0x412358u;
            goto label_412358;
        }
    }
    ctx->pc = 0x412350u;
label_412350:
    // 0x412350: 0x1000005e  b           . + 4 + (0x5E << 2)
label_412354:
    if (ctx->pc == 0x412354u) {
        ctx->pc = 0x412354u;
            // 0x412354: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x412358u;
        goto label_412358;
    }
    ctx->pc = 0x412350u;
    {
        const bool branch_taken_0x412350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x412354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x412350u;
            // 0x412354: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412350) {
            ctx->pc = 0x4124CCu;
            goto label_4124cc;
        }
    }
    ctx->pc = 0x412358u;
label_412358:
    // 0x412358: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x412358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_41235c:
    // 0x41235c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x41235cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_412360:
    // 0x412360: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x412360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_412364:
    // 0x412364: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x412364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_412368:
    // 0x412368: 0x10650057  beq         $v1, $a1, . + 4 + (0x57 << 2)
label_41236c:
    if (ctx->pc == 0x41236Cu) {
        ctx->pc = 0x412370u;
        goto label_412370;
    }
    ctx->pc = 0x412368u;
    {
        const bool branch_taken_0x412368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x412368) {
            ctx->pc = 0x4124C8u;
            goto label_4124c8;
        }
    }
    ctx->pc = 0x412370u;
label_412370:
    // 0x412370: 0xc1049f4  jal         func_4127D0
label_412374:
    if (ctx->pc == 0x412374u) {
        ctx->pc = 0x412378u;
        goto label_412378;
    }
    ctx->pc = 0x412370u;
    SET_GPR_U32(ctx, 31, 0x412378u);
    ctx->pc = 0x4127D0u;
    if (runtime->hasFunction(0x4127D0u)) {
        auto targetFn = runtime->lookupFunction(0x4127D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412378u; }
        if (ctx->pc != 0x412378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004127D0_0x4127d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412378u; }
        if (ctx->pc != 0x412378u) { return; }
    }
    ctx->pc = 0x412378u;
label_412378:
    // 0x412378: 0x10000053  b           . + 4 + (0x53 << 2)
label_41237c:
    if (ctx->pc == 0x41237Cu) {
        ctx->pc = 0x412380u;
        goto label_412380;
    }
    ctx->pc = 0x412378u;
    {
        const bool branch_taken_0x412378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x412378) {
            ctx->pc = 0x4124C8u;
            goto label_4124c8;
        }
    }
    ctx->pc = 0x412380u;
label_412380:
    // 0x412380: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x412380u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_412384:
    // 0x412384: 0x320f809  jalr        $t9
label_412388:
    if (ctx->pc == 0x412388u) {
        ctx->pc = 0x41238Cu;
        goto label_41238c;
    }
    ctx->pc = 0x412384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41238Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x41238Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41238Cu; }
            if (ctx->pc != 0x41238Cu) { return; }
        }
        }
    }
    ctx->pc = 0x41238Cu;
label_41238c:
    // 0x41238c: 0x8e700070  lw          $s0, 0x70($s3)
    ctx->pc = 0x41238cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_412390:
    // 0x412390: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_412394:
    if (ctx->pc == 0x412394u) {
        ctx->pc = 0x412398u;
        goto label_412398;
    }
    ctx->pc = 0x412390u;
    {
        const bool branch_taken_0x412390 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x412390) {
            ctx->pc = 0x4123C0u;
            goto label_4123c0;
        }
    }
    ctx->pc = 0x412398u;
label_412398:
    // 0x412398: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x412398u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41239c:
    // 0x41239c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x41239cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4123a0:
    // 0x4123a0: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x4123a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_4123a4:
    // 0x4123a4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4123a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4123a8:
    // 0x4123a8: 0xc0e3658  jal         func_38D960
label_4123ac:
    if (ctx->pc == 0x4123ACu) {
        ctx->pc = 0x4123ACu;
            // 0x4123ac: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4123B0u;
        goto label_4123b0;
    }
    ctx->pc = 0x4123A8u;
    SET_GPR_U32(ctx, 31, 0x4123B0u);
    ctx->pc = 0x4123ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4123A8u;
            // 0x4123ac: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4123B0u; }
        if (ctx->pc != 0x4123B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4123B0u; }
        if (ctx->pc != 0x4123B0u) { return; }
    }
    ctx->pc = 0x4123B0u;
label_4123b0:
    // 0x4123b0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4123b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4123b4:
    // 0x4123b4: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x4123b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4123b8:
    // 0x4123b8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_4123bc:
    if (ctx->pc == 0x4123BCu) {
        ctx->pc = 0x4123BCu;
            // 0x4123bc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4123C0u;
        goto label_4123c0;
    }
    ctx->pc = 0x4123B8u;
    {
        const bool branch_taken_0x4123b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4123BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4123B8u;
            // 0x4123bc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4123b8) {
            ctx->pc = 0x4123A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4123a0;
        }
    }
    ctx->pc = 0x4123C0u;
label_4123c0:
    // 0x4123c0: 0x8e670200  lw          $a3, 0x200($s3)
    ctx->pc = 0x4123c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 512)));
label_4123c4:
    // 0x4123c4: 0x10e00040  beqz        $a3, . + 4 + (0x40 << 2)
label_4123c8:
    if (ctx->pc == 0x4123C8u) {
        ctx->pc = 0x4123CCu;
        goto label_4123cc;
    }
    ctx->pc = 0x4123C4u;
    {
        const bool branch_taken_0x4123c4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x4123c4) {
            ctx->pc = 0x4124C8u;
            goto label_4124c8;
        }
    }
    ctx->pc = 0x4123CCu;
label_4123cc:
    // 0x4123cc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4123ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4123d0:
    // 0x4123d0: 0x3c043d4c  lui         $a0, 0x3D4C
    ctx->pc = 0x4123d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15692 << 16));
label_4123d4:
    // 0x4123d4: 0x8c658a08  lw          $a1, -0x75F8($v1)
    ctx->pc = 0x4123d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4123d8:
    // 0x4123d8: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x4123d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4123dc:
    // 0x4123dc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4123dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4123e0:
    // 0x4123e0: 0x3483cccd  ori         $v1, $a0, 0xCCCD
    ctx->pc = 0x4123e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
label_4123e4:
    // 0x4123e4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4123e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4123e8:
    // 0x4123e8: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x4123e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_4123ec:
    // 0x4123ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4123ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4123f0:
    // 0x4123f0: 0xc4a40018  lwc1        $f4, 0x18($a1)
    ctx->pc = 0x4123f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4123f4:
    // 0x4123f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4123f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4123f8:
    // 0x4123f8: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x4123f8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_4123fc:
    // 0x4123fc: 0x4604185c  madd.s      $f1, $f3, $f4
    ctx->pc = 0x4123fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_412400:
    // 0x412400: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x412400u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_412404:
    // 0x412404: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_412408:
    if (ctx->pc == 0x412408u) {
        ctx->pc = 0x412408u;
            // 0x412408: 0xe4e10000  swc1        $f1, 0x0($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->pc = 0x41240Cu;
        goto label_41240c;
    }
    ctx->pc = 0x412404u;
    {
        const bool branch_taken_0x412404 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x412408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x412404u;
            // 0x412408: 0xe4e10000  swc1        $f1, 0x0($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x412404) {
            ctx->pc = 0x412410u;
            goto label_412410;
        }
    }
    ctx->pc = 0x41240Cu;
label_41240c:
    // 0x41240c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x41240cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_412410:
    // 0x412410: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_412414:
    if (ctx->pc == 0x412414u) {
        ctx->pc = 0x412414u;
            // 0x412414: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x412418u;
        goto label_412418;
    }
    ctx->pc = 0x412410u;
    {
        const bool branch_taken_0x412410 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x412410) {
            ctx->pc = 0x412414u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x412410u;
            // 0x412414: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x412424u;
            goto label_412424;
        }
    }
    ctx->pc = 0x412418u;
label_412418:
    // 0x412418: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x412418u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_41241c:
    // 0x41241c: 0x10000007  b           . + 4 + (0x7 << 2)
label_412420:
    if (ctx->pc == 0x412420u) {
        ctx->pc = 0x412420u;
            // 0x412420: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x412424u;
        goto label_412424;
    }
    ctx->pc = 0x41241Cu;
    {
        const bool branch_taken_0x41241c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x412420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41241Cu;
            // 0x412420: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x41241c) {
            ctx->pc = 0x41243Cu;
            goto label_41243c;
        }
    }
    ctx->pc = 0x412424u;
label_412424:
    // 0x412424: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x412424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_412428:
    // 0x412428: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x412428u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_41242c:
    // 0x41242c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x41242cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_412430:
    // 0x412430: 0x0  nop
    ctx->pc = 0x412430u;
    // NOP
label_412434:
    // 0x412434: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x412434u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_412438:
    // 0x412438: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x412438u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_41243c:
    // 0x41243c: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x41243cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_412440:
    // 0x412440: 0x3c053d4c  lui         $a1, 0x3D4C
    ctx->pc = 0x412440u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15692 << 16));
label_412444:
    // 0x412444: 0x34a6cccd  ori         $a2, $a1, 0xCCCD
    ctx->pc = 0x412444u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
label_412448:
    // 0x412448: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x412448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_41244c:
    // 0x41244c: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x41244cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
label_412450:
    // 0x412450: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x412450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_412454:
    // 0x412454: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x412454u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_412458:
    // 0x412458: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x412458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_41245c:
    // 0x41245c: 0x8e670204  lw          $a3, 0x204($s3)
    ctx->pc = 0x41245cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 516)));
label_412460:
    // 0x412460: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x412460u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_412464:
    // 0x412464: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x412464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_412468:
    // 0x412468: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x412468u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_41246c:
    // 0x41246c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x41246cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_412470:
    // 0x412470: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x412470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_412474:
    // 0x412474: 0xc4640018  lwc1        $f4, 0x18($v1)
    ctx->pc = 0x412474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_412478:
    // 0x412478: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x412478u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_41247c:
    // 0x41247c: 0x4604185c  madd.s      $f1, $f3, $f4
    ctx->pc = 0x41247cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_412480:
    // 0x412480: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x412480u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_412484:
    // 0x412484: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_412488:
    if (ctx->pc == 0x412488u) {
        ctx->pc = 0x412488u;
            // 0x412488: 0xe4e10000  swc1        $f1, 0x0($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->pc = 0x41248Cu;
        goto label_41248c;
    }
    ctx->pc = 0x412484u;
    {
        const bool branch_taken_0x412484 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x412488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x412484u;
            // 0x412488: 0xe4e10000  swc1        $f1, 0x0($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x412484) {
            ctx->pc = 0x412490u;
            goto label_412490;
        }
    }
    ctx->pc = 0x41248Cu;
label_41248c:
    // 0x41248c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x41248cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_412490:
    // 0x412490: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
label_412494:
    if (ctx->pc == 0x412494u) {
        ctx->pc = 0x412494u;
            // 0x412494: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x412498u;
        goto label_412498;
    }
    ctx->pc = 0x412490u;
    {
        const bool branch_taken_0x412490 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x412490) {
            ctx->pc = 0x412494u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x412490u;
            // 0x412494: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4124A4u;
            goto label_4124a4;
        }
    }
    ctx->pc = 0x412498u;
label_412498:
    // 0x412498: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x412498u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_41249c:
    // 0x41249c: 0x10000007  b           . + 4 + (0x7 << 2)
label_4124a0:
    if (ctx->pc == 0x4124A0u) {
        ctx->pc = 0x4124A0u;
            // 0x4124a0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4124A4u;
        goto label_4124a4;
    }
    ctx->pc = 0x41249Cu;
    {
        const bool branch_taken_0x41249c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4124A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41249Cu;
            // 0x4124a0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x41249c) {
            ctx->pc = 0x4124BCu;
            goto label_4124bc;
        }
    }
    ctx->pc = 0x4124A4u;
label_4124a4:
    // 0x4124a4: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x4124a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_4124a8:
    // 0x4124a8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4124a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4124ac:
    // 0x4124ac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4124acu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4124b0:
    // 0x4124b0: 0x0  nop
    ctx->pc = 0x4124b0u;
    // NOP
label_4124b4:
    // 0x4124b4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4124b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4124b8:
    // 0x4124b8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x4124b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_4124bc:
    // 0x4124bc: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x4124bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4124c0:
    // 0x4124c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4124c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4124c4:
    // 0x4124c4: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x4124c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_4124c8:
    // 0x4124c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4124c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4124cc:
    // 0x4124cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4124ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4124d0:
    // 0x4124d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4124d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4124d4:
    // 0x4124d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4124d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4124d8:
    // 0x4124d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4124d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4124dc:
    // 0x4124dc: 0x3e00008  jr          $ra
label_4124e0:
    if (ctx->pc == 0x4124E0u) {
        ctx->pc = 0x4124E0u;
            // 0x4124e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4124E4u;
        goto label_4124e4;
    }
    ctx->pc = 0x4124DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4124E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4124DCu;
            // 0x4124e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4124E4u;
label_4124e4:
    // 0x4124e4: 0x0  nop
    ctx->pc = 0x4124e4u;
    // NOP
label_4124e8:
    // 0x4124e8: 0x0  nop
    ctx->pc = 0x4124e8u;
    // NOP
label_4124ec:
    // 0x4124ec: 0x0  nop
    ctx->pc = 0x4124ecu;
    // NOP
label_4124f0:
    // 0x4124f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4124f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4124f4:
    // 0x4124f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4124f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4124f8:
    // 0x4124f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4124f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4124fc:
    // 0x4124fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4124fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_412500:
    // 0x412500: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x412500u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_412504:
    // 0x412504: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x412504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_412508:
    // 0x412508: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x412508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41250c:
    // 0x41250c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x41250cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_412510:
    // 0x412510: 0x10600086  beqz        $v1, . + 4 + (0x86 << 2)
label_412514:
    if (ctx->pc == 0x412514u) {
        ctx->pc = 0x412514u;
            // 0x412514: 0x24910084  addiu       $s1, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->pc = 0x412518u;
        goto label_412518;
    }
    ctx->pc = 0x412510u;
    {
        const bool branch_taken_0x412510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x412514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x412510u;
            // 0x412514: 0x24910084  addiu       $s1, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412510) {
            ctx->pc = 0x41272Cu;
            goto label_41272c;
        }
    }
    ctx->pc = 0x412518u;
label_412518:
    // 0x412518: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x412518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_41251c:
    // 0x41251c: 0xac820054  sw          $v0, 0x54($a0)
    ctx->pc = 0x41251cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
label_412520:
    // 0x412520: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x412520u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_412524:
    // 0x412524: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x412524u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_412528:
    // 0x412528: 0x320f809  jalr        $t9
label_41252c:
    if (ctx->pc == 0x41252Cu) {
        ctx->pc = 0x412530u;
        goto label_412530;
    }
    ctx->pc = 0x412528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x412530u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x412530u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x412530u; }
            if (ctx->pc != 0x412530u) { return; }
        }
        }
    }
    ctx->pc = 0x412530u;
label_412530:
    // 0x412530: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x412530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_412534:
    // 0x412534: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x412534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_412538:
    // 0x412538: 0xc075128  jal         func_1D44A0
label_41253c:
    if (ctx->pc == 0x41253Cu) {
        ctx->pc = 0x41253Cu;
            // 0x41253c: 0x26650004  addiu       $a1, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x412540u;
        goto label_412540;
    }
    ctx->pc = 0x412538u;
    SET_GPR_U32(ctx, 31, 0x412540u);
    ctx->pc = 0x41253Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x412538u;
            // 0x41253c: 0x26650004  addiu       $a1, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412540u; }
        if (ctx->pc != 0x412540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412540u; }
        if (ctx->pc != 0x412540u) { return; }
    }
    ctx->pc = 0x412540u;
label_412540:
    // 0x412540: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x412540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_412544:
    // 0x412544: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x412544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_412548:
    // 0x412548: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x412548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_41254c:
    // 0x41254c: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x41254cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_412550:
    // 0x412550: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x412550u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_412554:
    // 0x412554: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_412558:
    if (ctx->pc == 0x412558u) {
        ctx->pc = 0x412558u;
            // 0x412558: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x41255Cu;
        goto label_41255c;
    }
    ctx->pc = 0x412554u;
    {
        const bool branch_taken_0x412554 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x412554) {
            ctx->pc = 0x412558u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x412554u;
            // 0x412558: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x412568u;
            goto label_412568;
        }
    }
    ctx->pc = 0x41255Cu;
label_41255c:
    // 0x41255c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41255cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_412560:
    // 0x412560: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x412560u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_412564:
    // 0x412564: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x412564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_412568:
    // 0x412568: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x412568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41256c:
    // 0x41256c: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x41256cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_412570:
    // 0x412570: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x412570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_412574:
    // 0x412574: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x412574u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_412578:
    // 0x412578: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_41257c:
    if (ctx->pc == 0x41257Cu) {
        ctx->pc = 0x41257Cu;
            // 0x41257c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x412580u;
        goto label_412580;
    }
    ctx->pc = 0x412578u;
    {
        const bool branch_taken_0x412578 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x412578) {
            ctx->pc = 0x41257Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x412578u;
            // 0x41257c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41258Cu;
            goto label_41258c;
        }
    }
    ctx->pc = 0x412580u;
label_412580:
    // 0x412580: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x412580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_412584:
    // 0x412584: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x412584u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_412588:
    // 0x412588: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x412588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_41258c:
    // 0x41258c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41258cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_412590:
    // 0x412590: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x412590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_412594:
    // 0x412594: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x412594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_412598:
    // 0x412598: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x412598u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_41259c:
    // 0x41259c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4125a0:
    if (ctx->pc == 0x4125A0u) {
        ctx->pc = 0x4125A0u;
            // 0x4125a0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x4125A4u;
        goto label_4125a4;
    }
    ctx->pc = 0x41259Cu;
    {
        const bool branch_taken_0x41259c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x41259c) {
            ctx->pc = 0x4125A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41259Cu;
            // 0x4125a0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4125B0u;
            goto label_4125b0;
        }
    }
    ctx->pc = 0x4125A4u;
label_4125a4:
    // 0x4125a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4125a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4125a8:
    // 0x4125a8: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4125a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4125ac:
    // 0x4125ac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4125acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4125b0:
    // 0x4125b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4125b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4125b4:
    // 0x4125b4: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4125b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4125b8:
    // 0x4125b8: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4125b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4125bc:
    // 0x4125bc: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x4125bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4125c0:
    // 0x4125c0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4125c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4125c4:
    // 0x4125c4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4125c8:
    if (ctx->pc == 0x4125C8u) {
        ctx->pc = 0x4125C8u;
            // 0x4125c8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x4125CCu;
        goto label_4125cc;
    }
    ctx->pc = 0x4125C4u;
    {
        const bool branch_taken_0x4125c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4125c4) {
            ctx->pc = 0x4125C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4125C4u;
            // 0x4125c8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4125D8u;
            goto label_4125d8;
        }
    }
    ctx->pc = 0x4125CCu;
label_4125cc:
    // 0x4125cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4125ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4125d0:
    // 0x4125d0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4125d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4125d4:
    // 0x4125d4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4125d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4125d8:
    // 0x4125d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4125d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4125dc:
    // 0x4125dc: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4125dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4125e0:
    // 0x4125e0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4125e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4125e4:
    // 0x4125e4: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x4125e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4125e8:
    // 0x4125e8: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4125e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4125ec:
    // 0x4125ec: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4125f0:
    if (ctx->pc == 0x4125F0u) {
        ctx->pc = 0x4125F0u;
            // 0x4125f0: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x4125F4u;
        goto label_4125f4;
    }
    ctx->pc = 0x4125ECu;
    {
        const bool branch_taken_0x4125ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4125ec) {
            ctx->pc = 0x4125F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4125ECu;
            // 0x4125f0: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x412600u;
            goto label_412600;
        }
    }
    ctx->pc = 0x4125F4u;
label_4125f4:
    // 0x4125f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4125f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4125f8:
    // 0x4125f8: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4125f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4125fc:
    // 0x4125fc: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x4125fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_412600:
    // 0x412600: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x412600u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_412604:
    // 0x412604: 0x8e65001c  lw          $a1, 0x1C($s3)
    ctx->pc = 0x412604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_412608:
    // 0x412608: 0x8e660020  lw          $a2, 0x20($s3)
    ctx->pc = 0x412608u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_41260c:
    // 0x41260c: 0xc0750c4  jal         func_1D4310
label_412610:
    if (ctx->pc == 0x412610u) {
        ctx->pc = 0x412610u;
            // 0x412610: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x412614u;
        goto label_412614;
    }
    ctx->pc = 0x41260Cu;
    SET_GPR_U32(ctx, 31, 0x412614u);
    ctx->pc = 0x412610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41260Cu;
            // 0x412610: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4310u;
    if (runtime->hasFunction(0x1D4310u)) {
        auto targetFn = runtime->lookupFunction(0x1D4310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412614u; }
        if (ctx->pc != 0x412614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4310_0x1d4310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x412614u; }
        if (ctx->pc != 0x412614u) { return; }
    }
    ctx->pc = 0x412614u;
label_412614:
    // 0x412614: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x412614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_412618:
    // 0x412618: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x412618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_41261c:
    // 0x41261c: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x41261cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
label_412620:
    // 0x412620: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x412620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_412624:
    // 0x412624: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x412624u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_412628:
    // 0x412628: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_41262c:
    if (ctx->pc == 0x41262Cu) {
        ctx->pc = 0x412630u;
        goto label_412630;
    }
    ctx->pc = 0x412628u;
    {
        const bool branch_taken_0x412628 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x412628) {
            ctx->pc = 0x412638u;
            goto label_412638;
        }
    }
    ctx->pc = 0x412630u;
label_412630:
    // 0x412630: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x412630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_412634:
    // 0x412634: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x412634u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
label_412638:
    // 0x412638: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x412638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_41263c:
    // 0x41263c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x41263cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_412640:
    // 0x412640: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x412640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_412644:
    // 0x412644: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x412644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_412648:
    // 0x412648: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x412648u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_41264c:
    // 0x41264c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_412650:
    if (ctx->pc == 0x412650u) {
        ctx->pc = 0x412654u;
        goto label_412654;
    }
    ctx->pc = 0x41264Cu;
    {
        const bool branch_taken_0x41264c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x41264c) {
            ctx->pc = 0x412660u;
            goto label_412660;
        }
    }
    ctx->pc = 0x412654u;
label_412654:
    // 0x412654: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x412654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_412658:
    // 0x412658: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x412658u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_41265c:
    // 0x41265c: 0x0  nop
    ctx->pc = 0x41265cu;
    // NOP
label_412660:
    // 0x412660: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x412660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_412664:
    // 0x412664: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x412664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_412668:
    // 0x412668: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x412668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_41266c:
    // 0x41266c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x41266cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_412670:
    // 0x412670: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x412670u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_412674:
    // 0x412674: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_412678:
    if (ctx->pc == 0x412678u) {
        ctx->pc = 0x41267Cu;
        goto label_41267c;
    }
    ctx->pc = 0x412674u;
    {
        const bool branch_taken_0x412674 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x412674) {
            ctx->pc = 0x412688u;
            goto label_412688;
        }
    }
    ctx->pc = 0x41267Cu;
label_41267c:
    // 0x41267c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x41267cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_412680:
    // 0x412680: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x412680u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_412684:
    // 0x412684: 0x0  nop
    ctx->pc = 0x412684u;
    // NOP
label_412688:
    // 0x412688: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x412688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_41268c:
    // 0x41268c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x41268cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_412690:
    // 0x412690: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x412690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_412694:
    // 0x412694: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x412694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_412698:
    // 0x412698: 0x902018  mult        $a0, $a0, $s0
    ctx->pc = 0x412698u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_41269c:
    // 0x41269c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x41269cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4126a0:
    // 0x4126a0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4126a4:
    if (ctx->pc == 0x4126A4u) {
        ctx->pc = 0x4126A8u;
        goto label_4126a8;
    }
    ctx->pc = 0x4126A0u;
    {
        const bool branch_taken_0x4126a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4126a0) {
            ctx->pc = 0x4126B0u;
            goto label_4126b0;
        }
    }
    ctx->pc = 0x4126A8u;
label_4126a8:
    // 0x4126a8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4126a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4126ac:
    // 0x4126ac: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4126acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4126b0:
    // 0x4126b0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4126b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4126b4:
    // 0x4126b4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4126b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4126b8:
    // 0x4126b8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4126b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4126bc:
    // 0x4126bc: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4126bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4126c0:
    // 0x4126c0: 0x902018  mult        $a0, $a0, $s0
    ctx->pc = 0x4126c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4126c4:
    // 0x4126c4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4126c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4126c8:
    // 0x4126c8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4126cc:
    if (ctx->pc == 0x4126CCu) {
        ctx->pc = 0x4126D0u;
        goto label_4126d0;
    }
    ctx->pc = 0x4126C8u;
    {
        const bool branch_taken_0x4126c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4126c8) {
            ctx->pc = 0x4126D8u;
            goto label_4126d8;
        }
    }
    ctx->pc = 0x4126D0u;
label_4126d0:
    // 0x4126d0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4126d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4126d4:
    // 0x4126d4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4126d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4126d8:
    // 0x4126d8: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x4126d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_4126dc:
    // 0x4126dc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4126dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4126e0:
    // 0x4126e0: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x4126e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_4126e4:
    // 0x4126e4: 0x2e230008  sltiu       $v1, $s1, 0x8
    ctx->pc = 0x4126e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_4126e8:
    // 0x4126e8: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x4126e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_4126ec:
    // 0x4126ec: 0x1460ffc5  bnez        $v1, . + 4 + (-0x3B << 2)
label_4126f0:
    if (ctx->pc == 0x4126F0u) {
        ctx->pc = 0x4126F0u;
            // 0x4126f0: 0xae640020  sw          $a0, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 4));
        ctx->pc = 0x4126F4u;
        goto label_4126f4;
    }
    ctx->pc = 0x4126ECu;
    {
        const bool branch_taken_0x4126ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4126F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4126ECu;
            // 0x4126f0: 0xae640020  sw          $a0, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4126ec) {
            ctx->pc = 0x412604u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_412604;
        }
    }
    ctx->pc = 0x4126F4u;
label_4126f4:
    // 0x4126f4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4126f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4126f8:
    // 0x4126f8: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x4126f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_4126fc:
    // 0x4126fc: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x4126fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_412700:
    // 0x412700: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_412704:
    if (ctx->pc == 0x412704u) {
        ctx->pc = 0x412708u;
        goto label_412708;
    }
    ctx->pc = 0x412700u;
    {
        const bool branch_taken_0x412700 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x412700) {
            ctx->pc = 0x412710u;
            goto label_412710;
        }
    }
    ctx->pc = 0x412708u;
label_412708:
    // 0x412708: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x412708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_41270c:
    // 0x41270c: 0xac70e3c8  sw          $s0, -0x1C38($v1)
    ctx->pc = 0x41270cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 16));
label_412710:
    // 0x412710: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x412710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_412714:
    // 0x412714: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x412714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_412718:
    // 0x412718: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x412718u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_41271c:
    // 0x41271c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_412720:
    if (ctx->pc == 0x412720u) {
        ctx->pc = 0x412720u;
            // 0x412720: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x412724u;
        goto label_412724;
    }
    ctx->pc = 0x41271Cu;
    {
        const bool branch_taken_0x41271c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x41271c) {
            ctx->pc = 0x412720u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41271Cu;
            // 0x412720: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x412730u;
            goto label_412730;
        }
    }
    ctx->pc = 0x412724u;
label_412724:
    // 0x412724: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x412724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_412728:
    // 0x412728: 0xac70e3d0  sw          $s0, -0x1C30($v1)
    ctx->pc = 0x412728u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 16));
label_41272c:
    // 0x41272c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x41272cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_412730:
    // 0x412730: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x412730u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_412734:
    // 0x412734: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x412734u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_412738:
    // 0x412738: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x412738u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41273c:
    // 0x41273c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41273cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_412740:
    // 0x412740: 0x3e00008  jr          $ra
label_412744:
    if (ctx->pc == 0x412744u) {
        ctx->pc = 0x412744u;
            // 0x412744: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x412748u;
        goto label_412748;
    }
    ctx->pc = 0x412740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x412744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x412740u;
            // 0x412744: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x412748u;
label_412748:
    // 0x412748: 0x0  nop
    ctx->pc = 0x412748u;
    // NOP
label_41274c:
    // 0x41274c: 0x0  nop
    ctx->pc = 0x41274cu;
    // NOP
label_412750:
    // 0x412750: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x412750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_412754:
    // 0x412754: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x412754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_412758:
    // 0x412758: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x412758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_41275c:
    // 0x41275c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x41275cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_412760:
    // 0x412760: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x412760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_412764:
    // 0x412764: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x412764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_412768:
    // 0x412768: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x412768u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_41276c:
    // 0x41276c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_412770:
    if (ctx->pc == 0x412770u) {
        ctx->pc = 0x412770u;
            // 0x412770: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x412774u;
        goto label_412774;
    }
    ctx->pc = 0x41276Cu;
    {
        const bool branch_taken_0x41276c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x412770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41276Cu;
            // 0x412770: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41276c) {
            ctx->pc = 0x4127A8u;
            goto label_4127a8;
        }
    }
    ctx->pc = 0x412774u;
label_412774:
    // 0x412774: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x412774u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_412778:
    // 0x412778: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x412778u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41277c:
    // 0x41277c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x41277cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_412780:
    // 0x412780: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x412780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_412784:
    // 0x412784: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x412784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_412788:
    // 0x412788: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x412788u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_41278c:
    // 0x41278c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x41278cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_412790:
    // 0x412790: 0x320f809  jalr        $t9
label_412794:
    if (ctx->pc == 0x412794u) {
        ctx->pc = 0x412798u;
        goto label_412798;
    }
    ctx->pc = 0x412790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x412798u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x412798u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x412798u; }
            if (ctx->pc != 0x412798u) { return; }
        }
        }
    }
    ctx->pc = 0x412798u;
label_412798:
    // 0x412798: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x412798u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_41279c:
    // 0x41279c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x41279cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4127a0:
    // 0x4127a0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_4127a4:
    if (ctx->pc == 0x4127A4u) {
        ctx->pc = 0x4127A4u;
            // 0x4127a4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4127A8u;
        goto label_4127a8;
    }
    ctx->pc = 0x4127A0u;
    {
        const bool branch_taken_0x4127a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4127A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4127A0u;
            // 0x4127a4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4127a0) {
            ctx->pc = 0x41277Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_41277c;
        }
    }
    ctx->pc = 0x4127A8u;
label_4127a8:
    // 0x4127a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4127a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4127ac:
    // 0x4127ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4127acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4127b0:
    // 0x4127b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4127b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4127b4:
    // 0x4127b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4127b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4127b8:
    // 0x4127b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4127b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4127bc:
    // 0x4127bc: 0x3e00008  jr          $ra
label_4127c0:
    if (ctx->pc == 0x4127C0u) {
        ctx->pc = 0x4127C0u;
            // 0x4127c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4127C4u;
        goto label_4127c4;
    }
    ctx->pc = 0x4127BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4127C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4127BCu;
            // 0x4127c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4127C4u;
label_4127c4:
    // 0x4127c4: 0x0  nop
    ctx->pc = 0x4127c4u;
    // NOP
label_4127c8:
    // 0x4127c8: 0x0  nop
    ctx->pc = 0x4127c8u;
    // NOP
label_4127cc:
    // 0x4127cc: 0x0  nop
    ctx->pc = 0x4127ccu;
    // NOP
}
