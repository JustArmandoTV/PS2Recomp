#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00517150
// Address: 0x517150 - 0x517720
void sub_00517150_0x517150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00517150_0x517150");
#endif

    switch (ctx->pc) {
        case 0x517150u: goto label_517150;
        case 0x517154u: goto label_517154;
        case 0x517158u: goto label_517158;
        case 0x51715cu: goto label_51715c;
        case 0x517160u: goto label_517160;
        case 0x517164u: goto label_517164;
        case 0x517168u: goto label_517168;
        case 0x51716cu: goto label_51716c;
        case 0x517170u: goto label_517170;
        case 0x517174u: goto label_517174;
        case 0x517178u: goto label_517178;
        case 0x51717cu: goto label_51717c;
        case 0x517180u: goto label_517180;
        case 0x517184u: goto label_517184;
        case 0x517188u: goto label_517188;
        case 0x51718cu: goto label_51718c;
        case 0x517190u: goto label_517190;
        case 0x517194u: goto label_517194;
        case 0x517198u: goto label_517198;
        case 0x51719cu: goto label_51719c;
        case 0x5171a0u: goto label_5171a0;
        case 0x5171a4u: goto label_5171a4;
        case 0x5171a8u: goto label_5171a8;
        case 0x5171acu: goto label_5171ac;
        case 0x5171b0u: goto label_5171b0;
        case 0x5171b4u: goto label_5171b4;
        case 0x5171b8u: goto label_5171b8;
        case 0x5171bcu: goto label_5171bc;
        case 0x5171c0u: goto label_5171c0;
        case 0x5171c4u: goto label_5171c4;
        case 0x5171c8u: goto label_5171c8;
        case 0x5171ccu: goto label_5171cc;
        case 0x5171d0u: goto label_5171d0;
        case 0x5171d4u: goto label_5171d4;
        case 0x5171d8u: goto label_5171d8;
        case 0x5171dcu: goto label_5171dc;
        case 0x5171e0u: goto label_5171e0;
        case 0x5171e4u: goto label_5171e4;
        case 0x5171e8u: goto label_5171e8;
        case 0x5171ecu: goto label_5171ec;
        case 0x5171f0u: goto label_5171f0;
        case 0x5171f4u: goto label_5171f4;
        case 0x5171f8u: goto label_5171f8;
        case 0x5171fcu: goto label_5171fc;
        case 0x517200u: goto label_517200;
        case 0x517204u: goto label_517204;
        case 0x517208u: goto label_517208;
        case 0x51720cu: goto label_51720c;
        case 0x517210u: goto label_517210;
        case 0x517214u: goto label_517214;
        case 0x517218u: goto label_517218;
        case 0x51721cu: goto label_51721c;
        case 0x517220u: goto label_517220;
        case 0x517224u: goto label_517224;
        case 0x517228u: goto label_517228;
        case 0x51722cu: goto label_51722c;
        case 0x517230u: goto label_517230;
        case 0x517234u: goto label_517234;
        case 0x517238u: goto label_517238;
        case 0x51723cu: goto label_51723c;
        case 0x517240u: goto label_517240;
        case 0x517244u: goto label_517244;
        case 0x517248u: goto label_517248;
        case 0x51724cu: goto label_51724c;
        case 0x517250u: goto label_517250;
        case 0x517254u: goto label_517254;
        case 0x517258u: goto label_517258;
        case 0x51725cu: goto label_51725c;
        case 0x517260u: goto label_517260;
        case 0x517264u: goto label_517264;
        case 0x517268u: goto label_517268;
        case 0x51726cu: goto label_51726c;
        case 0x517270u: goto label_517270;
        case 0x517274u: goto label_517274;
        case 0x517278u: goto label_517278;
        case 0x51727cu: goto label_51727c;
        case 0x517280u: goto label_517280;
        case 0x517284u: goto label_517284;
        case 0x517288u: goto label_517288;
        case 0x51728cu: goto label_51728c;
        case 0x517290u: goto label_517290;
        case 0x517294u: goto label_517294;
        case 0x517298u: goto label_517298;
        case 0x51729cu: goto label_51729c;
        case 0x5172a0u: goto label_5172a0;
        case 0x5172a4u: goto label_5172a4;
        case 0x5172a8u: goto label_5172a8;
        case 0x5172acu: goto label_5172ac;
        case 0x5172b0u: goto label_5172b0;
        case 0x5172b4u: goto label_5172b4;
        case 0x5172b8u: goto label_5172b8;
        case 0x5172bcu: goto label_5172bc;
        case 0x5172c0u: goto label_5172c0;
        case 0x5172c4u: goto label_5172c4;
        case 0x5172c8u: goto label_5172c8;
        case 0x5172ccu: goto label_5172cc;
        case 0x5172d0u: goto label_5172d0;
        case 0x5172d4u: goto label_5172d4;
        case 0x5172d8u: goto label_5172d8;
        case 0x5172dcu: goto label_5172dc;
        case 0x5172e0u: goto label_5172e0;
        case 0x5172e4u: goto label_5172e4;
        case 0x5172e8u: goto label_5172e8;
        case 0x5172ecu: goto label_5172ec;
        case 0x5172f0u: goto label_5172f0;
        case 0x5172f4u: goto label_5172f4;
        case 0x5172f8u: goto label_5172f8;
        case 0x5172fcu: goto label_5172fc;
        case 0x517300u: goto label_517300;
        case 0x517304u: goto label_517304;
        case 0x517308u: goto label_517308;
        case 0x51730cu: goto label_51730c;
        case 0x517310u: goto label_517310;
        case 0x517314u: goto label_517314;
        case 0x517318u: goto label_517318;
        case 0x51731cu: goto label_51731c;
        case 0x517320u: goto label_517320;
        case 0x517324u: goto label_517324;
        case 0x517328u: goto label_517328;
        case 0x51732cu: goto label_51732c;
        case 0x517330u: goto label_517330;
        case 0x517334u: goto label_517334;
        case 0x517338u: goto label_517338;
        case 0x51733cu: goto label_51733c;
        case 0x517340u: goto label_517340;
        case 0x517344u: goto label_517344;
        case 0x517348u: goto label_517348;
        case 0x51734cu: goto label_51734c;
        case 0x517350u: goto label_517350;
        case 0x517354u: goto label_517354;
        case 0x517358u: goto label_517358;
        case 0x51735cu: goto label_51735c;
        case 0x517360u: goto label_517360;
        case 0x517364u: goto label_517364;
        case 0x517368u: goto label_517368;
        case 0x51736cu: goto label_51736c;
        case 0x517370u: goto label_517370;
        case 0x517374u: goto label_517374;
        case 0x517378u: goto label_517378;
        case 0x51737cu: goto label_51737c;
        case 0x517380u: goto label_517380;
        case 0x517384u: goto label_517384;
        case 0x517388u: goto label_517388;
        case 0x51738cu: goto label_51738c;
        case 0x517390u: goto label_517390;
        case 0x517394u: goto label_517394;
        case 0x517398u: goto label_517398;
        case 0x51739cu: goto label_51739c;
        case 0x5173a0u: goto label_5173a0;
        case 0x5173a4u: goto label_5173a4;
        case 0x5173a8u: goto label_5173a8;
        case 0x5173acu: goto label_5173ac;
        case 0x5173b0u: goto label_5173b0;
        case 0x5173b4u: goto label_5173b4;
        case 0x5173b8u: goto label_5173b8;
        case 0x5173bcu: goto label_5173bc;
        case 0x5173c0u: goto label_5173c0;
        case 0x5173c4u: goto label_5173c4;
        case 0x5173c8u: goto label_5173c8;
        case 0x5173ccu: goto label_5173cc;
        case 0x5173d0u: goto label_5173d0;
        case 0x5173d4u: goto label_5173d4;
        case 0x5173d8u: goto label_5173d8;
        case 0x5173dcu: goto label_5173dc;
        case 0x5173e0u: goto label_5173e0;
        case 0x5173e4u: goto label_5173e4;
        case 0x5173e8u: goto label_5173e8;
        case 0x5173ecu: goto label_5173ec;
        case 0x5173f0u: goto label_5173f0;
        case 0x5173f4u: goto label_5173f4;
        case 0x5173f8u: goto label_5173f8;
        case 0x5173fcu: goto label_5173fc;
        case 0x517400u: goto label_517400;
        case 0x517404u: goto label_517404;
        case 0x517408u: goto label_517408;
        case 0x51740cu: goto label_51740c;
        case 0x517410u: goto label_517410;
        case 0x517414u: goto label_517414;
        case 0x517418u: goto label_517418;
        case 0x51741cu: goto label_51741c;
        case 0x517420u: goto label_517420;
        case 0x517424u: goto label_517424;
        case 0x517428u: goto label_517428;
        case 0x51742cu: goto label_51742c;
        case 0x517430u: goto label_517430;
        case 0x517434u: goto label_517434;
        case 0x517438u: goto label_517438;
        case 0x51743cu: goto label_51743c;
        case 0x517440u: goto label_517440;
        case 0x517444u: goto label_517444;
        case 0x517448u: goto label_517448;
        case 0x51744cu: goto label_51744c;
        case 0x517450u: goto label_517450;
        case 0x517454u: goto label_517454;
        case 0x517458u: goto label_517458;
        case 0x51745cu: goto label_51745c;
        case 0x517460u: goto label_517460;
        case 0x517464u: goto label_517464;
        case 0x517468u: goto label_517468;
        case 0x51746cu: goto label_51746c;
        case 0x517470u: goto label_517470;
        case 0x517474u: goto label_517474;
        case 0x517478u: goto label_517478;
        case 0x51747cu: goto label_51747c;
        case 0x517480u: goto label_517480;
        case 0x517484u: goto label_517484;
        case 0x517488u: goto label_517488;
        case 0x51748cu: goto label_51748c;
        case 0x517490u: goto label_517490;
        case 0x517494u: goto label_517494;
        case 0x517498u: goto label_517498;
        case 0x51749cu: goto label_51749c;
        case 0x5174a0u: goto label_5174a0;
        case 0x5174a4u: goto label_5174a4;
        case 0x5174a8u: goto label_5174a8;
        case 0x5174acu: goto label_5174ac;
        case 0x5174b0u: goto label_5174b0;
        case 0x5174b4u: goto label_5174b4;
        case 0x5174b8u: goto label_5174b8;
        case 0x5174bcu: goto label_5174bc;
        case 0x5174c0u: goto label_5174c0;
        case 0x5174c4u: goto label_5174c4;
        case 0x5174c8u: goto label_5174c8;
        case 0x5174ccu: goto label_5174cc;
        case 0x5174d0u: goto label_5174d0;
        case 0x5174d4u: goto label_5174d4;
        case 0x5174d8u: goto label_5174d8;
        case 0x5174dcu: goto label_5174dc;
        case 0x5174e0u: goto label_5174e0;
        case 0x5174e4u: goto label_5174e4;
        case 0x5174e8u: goto label_5174e8;
        case 0x5174ecu: goto label_5174ec;
        case 0x5174f0u: goto label_5174f0;
        case 0x5174f4u: goto label_5174f4;
        case 0x5174f8u: goto label_5174f8;
        case 0x5174fcu: goto label_5174fc;
        case 0x517500u: goto label_517500;
        case 0x517504u: goto label_517504;
        case 0x517508u: goto label_517508;
        case 0x51750cu: goto label_51750c;
        case 0x517510u: goto label_517510;
        case 0x517514u: goto label_517514;
        case 0x517518u: goto label_517518;
        case 0x51751cu: goto label_51751c;
        case 0x517520u: goto label_517520;
        case 0x517524u: goto label_517524;
        case 0x517528u: goto label_517528;
        case 0x51752cu: goto label_51752c;
        case 0x517530u: goto label_517530;
        case 0x517534u: goto label_517534;
        case 0x517538u: goto label_517538;
        case 0x51753cu: goto label_51753c;
        case 0x517540u: goto label_517540;
        case 0x517544u: goto label_517544;
        case 0x517548u: goto label_517548;
        case 0x51754cu: goto label_51754c;
        case 0x517550u: goto label_517550;
        case 0x517554u: goto label_517554;
        case 0x517558u: goto label_517558;
        case 0x51755cu: goto label_51755c;
        case 0x517560u: goto label_517560;
        case 0x517564u: goto label_517564;
        case 0x517568u: goto label_517568;
        case 0x51756cu: goto label_51756c;
        case 0x517570u: goto label_517570;
        case 0x517574u: goto label_517574;
        case 0x517578u: goto label_517578;
        case 0x51757cu: goto label_51757c;
        case 0x517580u: goto label_517580;
        case 0x517584u: goto label_517584;
        case 0x517588u: goto label_517588;
        case 0x51758cu: goto label_51758c;
        case 0x517590u: goto label_517590;
        case 0x517594u: goto label_517594;
        case 0x517598u: goto label_517598;
        case 0x51759cu: goto label_51759c;
        case 0x5175a0u: goto label_5175a0;
        case 0x5175a4u: goto label_5175a4;
        case 0x5175a8u: goto label_5175a8;
        case 0x5175acu: goto label_5175ac;
        case 0x5175b0u: goto label_5175b0;
        case 0x5175b4u: goto label_5175b4;
        case 0x5175b8u: goto label_5175b8;
        case 0x5175bcu: goto label_5175bc;
        case 0x5175c0u: goto label_5175c0;
        case 0x5175c4u: goto label_5175c4;
        case 0x5175c8u: goto label_5175c8;
        case 0x5175ccu: goto label_5175cc;
        case 0x5175d0u: goto label_5175d0;
        case 0x5175d4u: goto label_5175d4;
        case 0x5175d8u: goto label_5175d8;
        case 0x5175dcu: goto label_5175dc;
        case 0x5175e0u: goto label_5175e0;
        case 0x5175e4u: goto label_5175e4;
        case 0x5175e8u: goto label_5175e8;
        case 0x5175ecu: goto label_5175ec;
        case 0x5175f0u: goto label_5175f0;
        case 0x5175f4u: goto label_5175f4;
        case 0x5175f8u: goto label_5175f8;
        case 0x5175fcu: goto label_5175fc;
        case 0x517600u: goto label_517600;
        case 0x517604u: goto label_517604;
        case 0x517608u: goto label_517608;
        case 0x51760cu: goto label_51760c;
        case 0x517610u: goto label_517610;
        case 0x517614u: goto label_517614;
        case 0x517618u: goto label_517618;
        case 0x51761cu: goto label_51761c;
        case 0x517620u: goto label_517620;
        case 0x517624u: goto label_517624;
        case 0x517628u: goto label_517628;
        case 0x51762cu: goto label_51762c;
        case 0x517630u: goto label_517630;
        case 0x517634u: goto label_517634;
        case 0x517638u: goto label_517638;
        case 0x51763cu: goto label_51763c;
        case 0x517640u: goto label_517640;
        case 0x517644u: goto label_517644;
        case 0x517648u: goto label_517648;
        case 0x51764cu: goto label_51764c;
        case 0x517650u: goto label_517650;
        case 0x517654u: goto label_517654;
        case 0x517658u: goto label_517658;
        case 0x51765cu: goto label_51765c;
        case 0x517660u: goto label_517660;
        case 0x517664u: goto label_517664;
        case 0x517668u: goto label_517668;
        case 0x51766cu: goto label_51766c;
        case 0x517670u: goto label_517670;
        case 0x517674u: goto label_517674;
        case 0x517678u: goto label_517678;
        case 0x51767cu: goto label_51767c;
        case 0x517680u: goto label_517680;
        case 0x517684u: goto label_517684;
        case 0x517688u: goto label_517688;
        case 0x51768cu: goto label_51768c;
        case 0x517690u: goto label_517690;
        case 0x517694u: goto label_517694;
        case 0x517698u: goto label_517698;
        case 0x51769cu: goto label_51769c;
        case 0x5176a0u: goto label_5176a0;
        case 0x5176a4u: goto label_5176a4;
        case 0x5176a8u: goto label_5176a8;
        case 0x5176acu: goto label_5176ac;
        case 0x5176b0u: goto label_5176b0;
        case 0x5176b4u: goto label_5176b4;
        case 0x5176b8u: goto label_5176b8;
        case 0x5176bcu: goto label_5176bc;
        case 0x5176c0u: goto label_5176c0;
        case 0x5176c4u: goto label_5176c4;
        case 0x5176c8u: goto label_5176c8;
        case 0x5176ccu: goto label_5176cc;
        case 0x5176d0u: goto label_5176d0;
        case 0x5176d4u: goto label_5176d4;
        case 0x5176d8u: goto label_5176d8;
        case 0x5176dcu: goto label_5176dc;
        case 0x5176e0u: goto label_5176e0;
        case 0x5176e4u: goto label_5176e4;
        case 0x5176e8u: goto label_5176e8;
        case 0x5176ecu: goto label_5176ec;
        case 0x5176f0u: goto label_5176f0;
        case 0x5176f4u: goto label_5176f4;
        case 0x5176f8u: goto label_5176f8;
        case 0x5176fcu: goto label_5176fc;
        case 0x517700u: goto label_517700;
        case 0x517704u: goto label_517704;
        case 0x517708u: goto label_517708;
        case 0x51770cu: goto label_51770c;
        case 0x517710u: goto label_517710;
        case 0x517714u: goto label_517714;
        case 0x517718u: goto label_517718;
        case 0x51771cu: goto label_51771c;
        default: break;
    }

    ctx->pc = 0x517150u;

label_517150:
    // 0x517150: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x517150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_517154:
    // 0x517154: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x517154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_517158:
    // 0x517158: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x517158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_51715c:
    // 0x51715c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x51715cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_517160:
    // 0x517160: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x517160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_517164:
    // 0x517164: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x517164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_517168:
    // 0x517168: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x517168u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_51716c:
    // 0x51716c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x51716cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_517170:
    // 0x517170: 0x10650003  beq         $v1, $a1, . + 4 + (0x3 << 2)
label_517174:
    if (ctx->pc == 0x517174u) {
        ctx->pc = 0x517174u;
            // 0x517174: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x517178u;
        goto label_517178;
    }
    ctx->pc = 0x517170u;
    {
        const bool branch_taken_0x517170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x517174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x517170u;
            // 0x517174: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x517170) {
            ctx->pc = 0x517180u;
            goto label_517180;
        }
    }
    ctx->pc = 0x517178u;
label_517178:
    // 0x517178: 0x10000161  b           . + 4 + (0x161 << 2)
label_51717c:
    if (ctx->pc == 0x51717Cu) {
        ctx->pc = 0x51717Cu;
            // 0x51717c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x517180u;
        goto label_517180;
    }
    ctx->pc = 0x517178u;
    {
        const bool branch_taken_0x517178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51717Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x517178u;
            // 0x51717c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x517178) {
            ctx->pc = 0x517700u;
            goto label_517700;
        }
    }
    ctx->pc = 0x517180u;
label_517180:
    // 0x517180: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x517180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_517184:
    // 0x517184: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x517184u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_517188:
    // 0x517188: 0x1020013f  beqz        $at, . + 4 + (0x13F << 2)
label_51718c:
    if (ctx->pc == 0x51718Cu) {
        ctx->pc = 0x51718Cu;
            // 0x51718c: 0x26300030  addiu       $s0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->pc = 0x517190u;
        goto label_517190;
    }
    ctx->pc = 0x517188u;
    {
        const bool branch_taken_0x517188 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x51718Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x517188u;
            // 0x51718c: 0x26300030  addiu       $s0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x517188) {
            ctx->pc = 0x517688u;
            goto label_517688;
        }
    }
    ctx->pc = 0x517190u;
label_517190:
    // 0x517190: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x517190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_517194:
    // 0x517194: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x517194u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_517198:
    // 0x517198: 0x2484bfb0  addiu       $a0, $a0, -0x4050
    ctx->pc = 0x517198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950832));
label_51719c:
    // 0x51719c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x51719cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_5171a0:
    // 0x5171a0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x5171a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_5171a4:
    // 0x5171a4: 0x600008  jr          $v1
label_5171a8:
    if (ctx->pc == 0x5171A8u) {
        ctx->pc = 0x5171ACu;
        goto label_5171ac;
    }
    ctx->pc = 0x5171A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x5171ACu: goto label_5171ac;
            case 0x517270u: goto label_517270;
            case 0x517360u: goto label_517360;
            case 0x51749Cu: goto label_51749c;
            case 0x51754Cu: goto label_51754c;
            case 0x517580u: goto label_517580;
            case 0x517660u: goto label_517660;
            case 0x517688u: goto label_517688;
            default: break;
        }
        return;
    }
    ctx->pc = 0x5171ACu;
label_5171ac:
    // 0x5171ac: 0xc04ab66  jal         func_12AD98
label_5171b0:
    if (ctx->pc == 0x5171B0u) {
        ctx->pc = 0x5171B4u;
        goto label_5171b4;
    }
    ctx->pc = 0x5171ACu;
    SET_GPR_U32(ctx, 31, 0x5171B4u);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5171B4u; }
        if (ctx->pc != 0x5171B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5171B4u; }
        if (ctx->pc != 0x5171B4u) { return; }
    }
    ctx->pc = 0x5171B4u;
label_5171b4:
    // 0x5171b4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x5171b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_5171b8:
    // 0x5171b8: 0xc04ab66  jal         func_12AD98
label_5171bc:
    if (ctx->pc == 0x5171BCu) {
        ctx->pc = 0x5171BCu;
            // 0x5171bc: 0x29740  sll         $s2, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x5171C0u;
        goto label_5171c0;
    }
    ctx->pc = 0x5171B8u;
    SET_GPR_U32(ctx, 31, 0x5171C0u);
    ctx->pc = 0x5171BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5171B8u;
            // 0x5171bc: 0x29740  sll         $s2, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5171C0u; }
        if (ctx->pc != 0x5171C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5171C0u; }
        if (ctx->pc != 0x5171C0u) { return; }
    }
    ctx->pc = 0x5171C0u;
label_5171c0:
    // 0x5171c0: 0x521825  or          $v1, $v0, $s2
    ctx->pc = 0x5171c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
label_5171c4:
    // 0x5171c4: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x5171c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_5171c8:
    // 0x5171c8: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x5171c8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_5171cc:
    // 0x5171cc: 0x1010  mfhi        $v0
    ctx->pc = 0x5171ccu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_5171d0:
    // 0x5171d0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_5171d4:
    if (ctx->pc == 0x5171D4u) {
        ctx->pc = 0x5171D4u;
            // 0x5171d4: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x5171D8u;
        goto label_5171d8;
    }
    ctx->pc = 0x5171D0u;
    {
        const bool branch_taken_0x5171d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x5171d0) {
            ctx->pc = 0x5171D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5171D0u;
            // 0x5171d4: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5171F0u;
            goto label_5171f0;
        }
    }
    ctx->pc = 0x5171D8u;
label_5171d8:
    // 0x5171d8: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x5171d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_5171dc:
    // 0x5171dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5171dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5171e0:
    // 0x5171e0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x5171e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_5171e4:
    // 0x5171e4: 0x320f809  jalr        $t9
label_5171e8:
    if (ctx->pc == 0x5171E8u) {
        ctx->pc = 0x5171ECu;
        goto label_5171ec;
    }
    ctx->pc = 0x5171E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5171ECu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x5171ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5171ECu; }
            if (ctx->pc != 0x5171ECu) { return; }
        }
        }
    }
    ctx->pc = 0x5171ECu;
label_5171ec:
    // 0x5171ec: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x5171ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_5171f0:
    // 0x5171f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5171f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5171f4:
    // 0x5171f4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x5171f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_5171f8:
    // 0x5171f8: 0x320f809  jalr        $t9
label_5171fc:
    if (ctx->pc == 0x5171FCu) {
        ctx->pc = 0x517200u;
        goto label_517200;
    }
    ctx->pc = 0x5171F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x517200u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x517200u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x517200u; }
            if (ctx->pc != 0x517200u) { return; }
        }
        }
    }
    ctx->pc = 0x517200u;
label_517200:
    // 0x517200: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x517200u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_517204:
    // 0x517204: 0xc0dc408  jal         func_371020
label_517208:
    if (ctx->pc == 0x517208u) {
        ctx->pc = 0x517208u;
            // 0x517208: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x51720Cu;
        goto label_51720c;
    }
    ctx->pc = 0x517204u;
    SET_GPR_U32(ctx, 31, 0x51720Cu);
    ctx->pc = 0x517208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517204u;
            // 0x517208: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51720Cu; }
        if (ctx->pc != 0x51720Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51720Cu; }
        if (ctx->pc != 0x51720Cu) { return; }
    }
    ctx->pc = 0x51720Cu;
label_51720c:
    // 0x51720c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x51720cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_517210:
    // 0x517210: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x517210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_517214:
    // 0x517214: 0xc145dc8  jal         func_517720
label_517218:
    if (ctx->pc == 0x517218u) {
        ctx->pc = 0x517218u;
            // 0x517218: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x51721Cu;
        goto label_51721c;
    }
    ctx->pc = 0x517214u;
    SET_GPR_U32(ctx, 31, 0x51721Cu);
    ctx->pc = 0x517218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517214u;
            // 0x517218: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x517720u;
    if (runtime->hasFunction(0x517720u)) {
        auto targetFn = runtime->lookupFunction(0x517720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51721Cu; }
        if (ctx->pc != 0x51721Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00517720_0x517720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51721Cu; }
        if (ctx->pc != 0x51721Cu) { return; }
    }
    ctx->pc = 0x51721Cu;
label_51721c:
    // 0x51721c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x51721cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_517220:
    // 0x517220: 0xc0f8e34  jal         func_3E38D0
label_517224:
    if (ctx->pc == 0x517224u) {
        ctx->pc = 0x517224u;
            // 0x517224: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x517228u;
        goto label_517228;
    }
    ctx->pc = 0x517220u;
    SET_GPR_U32(ctx, 31, 0x517228u);
    ctx->pc = 0x517224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517220u;
            // 0x517224: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E38D0u;
    if (runtime->hasFunction(0x3E38D0u)) {
        auto targetFn = runtime->lookupFunction(0x3E38D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517228u; }
        if (ctx->pc != 0x517228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E38D0_0x3e38d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517228u; }
        if (ctx->pc != 0x517228u) { return; }
    }
    ctx->pc = 0x517228u;
label_517228:
    // 0x517228: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x517228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_51722c:
    // 0x51722c: 0xc0e1b28  jal         func_386CA0
label_517230:
    if (ctx->pc == 0x517230u) {
        ctx->pc = 0x517230u;
            // 0x517230: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x517234u;
        goto label_517234;
    }
    ctx->pc = 0x51722Cu;
    SET_GPR_U32(ctx, 31, 0x517234u);
    ctx->pc = 0x517230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51722Cu;
            // 0x517230: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386CA0u;
    if (runtime->hasFunction(0x386CA0u)) {
        auto targetFn = runtime->lookupFunction(0x386CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517234u; }
        if (ctx->pc != 0x517234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386CA0_0x386ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517234u; }
        if (ctx->pc != 0x517234u) { return; }
    }
    ctx->pc = 0x517234u;
label_517234:
    // 0x517234: 0xc0dc408  jal         func_371020
label_517238:
    if (ctx->pc == 0x517238u) {
        ctx->pc = 0x517238u;
            // 0x517238: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x51723Cu;
        goto label_51723c;
    }
    ctx->pc = 0x517234u;
    SET_GPR_U32(ctx, 31, 0x51723Cu);
    ctx->pc = 0x517238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517234u;
            // 0x517238: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51723Cu; }
        if (ctx->pc != 0x51723Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51723Cu; }
        if (ctx->pc != 0x51723Cu) { return; }
    }
    ctx->pc = 0x51723Cu;
label_51723c:
    // 0x51723c: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x51723cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
label_517240:
    // 0x517240: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x517240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_517244:
    // 0x517244: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x517244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_517248:
    // 0x517248: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x517248u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_51724c:
    // 0x51724c: 0xc0d88a4  jal         func_362290
label_517250:
    if (ctx->pc == 0x517250u) {
        ctx->pc = 0x517250u;
            // 0x517250: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x517254u;
        goto label_517254;
    }
    ctx->pc = 0x51724Cu;
    SET_GPR_U32(ctx, 31, 0x517254u);
    ctx->pc = 0x517250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51724Cu;
            // 0x517250: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362290u;
    if (runtime->hasFunction(0x362290u)) {
        auto targetFn = runtime->lookupFunction(0x362290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517254u; }
        if (ctx->pc != 0x517254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362290_0x362290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517254u; }
        if (ctx->pc != 0x517254u) { return; }
    }
    ctx->pc = 0x517254u;
label_517254:
    // 0x517254: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x517254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_517258:
    // 0x517258: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x517258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_51725c:
    // 0x51725c: 0x5483010b  bnel        $a0, $v1, . + 4 + (0x10B << 2)
label_517260:
    if (ctx->pc == 0x517260u) {
        ctx->pc = 0x517260u;
            // 0x517260: 0x96040110  lhu         $a0, 0x110($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
        ctx->pc = 0x517264u;
        goto label_517264;
    }
    ctx->pc = 0x51725Cu;
    {
        const bool branch_taken_0x51725c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x51725c) {
            ctx->pc = 0x517260u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51725Cu;
            // 0x517260: 0x96040110  lhu         $a0, 0x110($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51768Cu;
            goto label_51768c;
        }
    }
    ctx->pc = 0x517264u;
label_517264:
    // 0x517264: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x517264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_517268:
    // 0x517268: 0x10000107  b           . + 4 + (0x107 << 2)
label_51726c:
    if (ctx->pc == 0x51726Cu) {
        ctx->pc = 0x51726Cu;
            // 0x51726c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x517270u;
        goto label_517270;
    }
    ctx->pc = 0x517268u;
    {
        const bool branch_taken_0x517268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51726Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x517268u;
            // 0x51726c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x517268) {
            ctx->pc = 0x517688u;
            goto label_517688;
        }
    }
    ctx->pc = 0x517270u;
label_517270:
    // 0x517270: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x517270u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_517274:
    // 0x517274: 0xc0dc408  jal         func_371020
label_517278:
    if (ctx->pc == 0x517278u) {
        ctx->pc = 0x517278u;
            // 0x517278: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x51727Cu;
        goto label_51727c;
    }
    ctx->pc = 0x517274u;
    SET_GPR_U32(ctx, 31, 0x51727Cu);
    ctx->pc = 0x517278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517274u;
            // 0x517278: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51727Cu; }
        if (ctx->pc != 0x51727Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51727Cu; }
        if (ctx->pc != 0x51727Cu) { return; }
    }
    ctx->pc = 0x51727Cu;
label_51727c:
    // 0x51727c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x51727cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_517280:
    // 0x517280: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x517280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_517284:
    // 0x517284: 0xc145dc8  jal         func_517720
label_517288:
    if (ctx->pc == 0x517288u) {
        ctx->pc = 0x517288u;
            // 0x517288: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x51728Cu;
        goto label_51728c;
    }
    ctx->pc = 0x517284u;
    SET_GPR_U32(ctx, 31, 0x51728Cu);
    ctx->pc = 0x517288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517284u;
            // 0x517288: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x517720u;
    if (runtime->hasFunction(0x517720u)) {
        auto targetFn = runtime->lookupFunction(0x517720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51728Cu; }
        if (ctx->pc != 0x51728Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00517720_0x517720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51728Cu; }
        if (ctx->pc != 0x51728Cu) { return; }
    }
    ctx->pc = 0x51728Cu;
label_51728c:
    // 0x51728c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x51728cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_517290:
    // 0x517290: 0xc0f8e34  jal         func_3E38D0
label_517294:
    if (ctx->pc == 0x517294u) {
        ctx->pc = 0x517294u;
            // 0x517294: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x517298u;
        goto label_517298;
    }
    ctx->pc = 0x517290u;
    SET_GPR_U32(ctx, 31, 0x517298u);
    ctx->pc = 0x517294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517290u;
            // 0x517294: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E38D0u;
    if (runtime->hasFunction(0x3E38D0u)) {
        auto targetFn = runtime->lookupFunction(0x3E38D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517298u; }
        if (ctx->pc != 0x517298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E38D0_0x3e38d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517298u; }
        if (ctx->pc != 0x517298u) { return; }
    }
    ctx->pc = 0x517298u;
label_517298:
    // 0x517298: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x517298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_51729c:
    // 0x51729c: 0xc0e1b28  jal         func_386CA0
label_5172a0:
    if (ctx->pc == 0x5172A0u) {
        ctx->pc = 0x5172A0u;
            // 0x5172a0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x5172A4u;
        goto label_5172a4;
    }
    ctx->pc = 0x51729Cu;
    SET_GPR_U32(ctx, 31, 0x5172A4u);
    ctx->pc = 0x5172A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51729Cu;
            // 0x5172a0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386CA0u;
    if (runtime->hasFunction(0x386CA0u)) {
        auto targetFn = runtime->lookupFunction(0x386CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5172A4u; }
        if (ctx->pc != 0x5172A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386CA0_0x386ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5172A4u; }
        if (ctx->pc != 0x5172A4u) { return; }
    }
    ctx->pc = 0x5172A4u;
label_5172a4:
    // 0x5172a4: 0xc0dc408  jal         func_371020
label_5172a8:
    if (ctx->pc == 0x5172A8u) {
        ctx->pc = 0x5172A8u;
            // 0x5172a8: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x5172ACu;
        goto label_5172ac;
    }
    ctx->pc = 0x5172A4u;
    SET_GPR_U32(ctx, 31, 0x5172ACu);
    ctx->pc = 0x5172A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5172A4u;
            // 0x5172a8: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5172ACu; }
        if (ctx->pc != 0x5172ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5172ACu; }
        if (ctx->pc != 0x5172ACu) { return; }
    }
    ctx->pc = 0x5172ACu;
label_5172ac:
    // 0x5172ac: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x5172acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
label_5172b0:
    // 0x5172b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5172b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5172b4:
    // 0x5172b4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x5172b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_5172b8:
    // 0x5172b8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x5172b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_5172bc:
    // 0x5172bc: 0xc0d88a4  jal         func_362290
label_5172c0:
    if (ctx->pc == 0x5172C0u) {
        ctx->pc = 0x5172C0u;
            // 0x5172c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5172C4u;
        goto label_5172c4;
    }
    ctx->pc = 0x5172BCu;
    SET_GPR_U32(ctx, 31, 0x5172C4u);
    ctx->pc = 0x5172C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5172BCu;
            // 0x5172c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362290u;
    if (runtime->hasFunction(0x362290u)) {
        auto targetFn = runtime->lookupFunction(0x362290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5172C4u; }
        if (ctx->pc != 0x5172C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362290_0x362290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5172C4u; }
        if (ctx->pc != 0x5172C4u) { return; }
    }
    ctx->pc = 0x5172C4u;
label_5172c4:
    // 0x5172c4: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x5172c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5172c8:
    // 0x5172c8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x5172c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_5172cc:
    // 0x5172cc: 0x0  nop
    ctx->pc = 0x5172ccu;
    // NOP
label_5172d0:
    // 0x5172d0: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x5172d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5172d4:
    // 0x5172d4: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_5172d8:
    if (ctx->pc == 0x5172D8u) {
        ctx->pc = 0x5172DCu;
        goto label_5172dc;
    }
    ctx->pc = 0x5172D4u;
    {
        const bool branch_taken_0x5172d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x5172d4) {
            ctx->pc = 0x517304u;
            goto label_517304;
        }
    }
    ctx->pc = 0x5172DCu;
label_5172dc:
    // 0x5172dc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x5172dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_5172e0:
    // 0x5172e0: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x5172e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_5172e4:
    // 0x5172e4: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x5172e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5172e8:
    // 0x5172e8: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x5172e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5172ec:
    // 0x5172ec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x5172ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_5172f0:
    // 0x5172f0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x5172f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5172f4:
    // 0x5172f4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_5172f8:
    if (ctx->pc == 0x5172F8u) {
        ctx->pc = 0x5172F8u;
            // 0x5172f8: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->pc = 0x5172FCu;
        goto label_5172fc;
    }
    ctx->pc = 0x5172F4u;
    {
        const bool branch_taken_0x5172f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x5172F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5172F4u;
            // 0x5172f8: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5172f4) {
            ctx->pc = 0x517318u;
            goto label_517318;
        }
    }
    ctx->pc = 0x5172FCu;
label_5172fc:
    // 0x5172fc: 0x10000006  b           . + 4 + (0x6 << 2)
label_517300:
    if (ctx->pc == 0x517300u) {
        ctx->pc = 0x517300u;
            // 0x517300: 0xe6220024  swc1        $f2, 0x24($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->pc = 0x517304u;
        goto label_517304;
    }
    ctx->pc = 0x5172FCu;
    {
        const bool branch_taken_0x5172fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x517300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5172FCu;
            // 0x517300: 0xe6220024  swc1        $f2, 0x24($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5172fc) {
            ctx->pc = 0x517318u;
            goto label_517318;
        }
    }
    ctx->pc = 0x517304u;
label_517304:
    // 0x517304: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x517304u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_517308:
    // 0x517308: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_51730c:
    if (ctx->pc == 0x51730Cu) {
        ctx->pc = 0x51730Cu;
            // 0x51730c: 0xc6210024  lwc1        $f1, 0x24($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x517310u;
        goto label_517310;
    }
    ctx->pc = 0x517308u;
    {
        const bool branch_taken_0x517308 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x517308) {
            ctx->pc = 0x51730Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x517308u;
            // 0x51730c: 0xc6210024  lwc1        $f1, 0x24($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x51731Cu;
            goto label_51731c;
        }
    }
    ctx->pc = 0x517310u;
label_517310:
    // 0x517310: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x517310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_517314:
    // 0x517314: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x517314u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
label_517318:
    // 0x517318: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x517318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_51731c:
    // 0x51731c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x51731cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_517320:
    // 0x517320: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x517320u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_517324:
    // 0x517324: 0x0  nop
    ctx->pc = 0x517324u;
    // NOP
label_517328:
    // 0x517328: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x517328u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_51732c:
    // 0x51732c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_517330:
    if (ctx->pc == 0x517330u) {
        ctx->pc = 0x517330u;
            // 0x517330: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x517334u;
        goto label_517334;
    }
    ctx->pc = 0x51732Cu;
    {
        const bool branch_taken_0x51732c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x517330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51732Cu;
            // 0x517330: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x51732c) {
            ctx->pc = 0x51734Cu;
            goto label_51734c;
        }
    }
    ctx->pc = 0x517334u;
label_517334:
    // 0x517334: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x517334u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_517338:
    // 0x517338: 0x0  nop
    ctx->pc = 0x517338u;
    // NOP
label_51733c:
    // 0x51733c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x51733cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_517340:
    // 0x517340: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_517344:
    if (ctx->pc == 0x517344u) {
        ctx->pc = 0x517348u;
        goto label_517348;
    }
    ctx->pc = 0x517340u;
    {
        const bool branch_taken_0x517340 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x517340) {
            ctx->pc = 0x51734Cu;
            goto label_51734c;
        }
    }
    ctx->pc = 0x517348u;
label_517348:
    // 0x517348: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x517348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51734c:
    // 0x51734c: 0x108000ce  beqz        $a0, . + 4 + (0xCE << 2)
label_517350:
    if (ctx->pc == 0x517350u) {
        ctx->pc = 0x517354u;
        goto label_517354;
    }
    ctx->pc = 0x51734Cu;
    {
        const bool branch_taken_0x51734c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x51734c) {
            ctx->pc = 0x517688u;
            goto label_517688;
        }
    }
    ctx->pc = 0x517354u;
label_517354:
    // 0x517354: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x517354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_517358:
    // 0x517358: 0x100000cb  b           . + 4 + (0xCB << 2)
label_51735c:
    if (ctx->pc == 0x51735Cu) {
        ctx->pc = 0x51735Cu;
            // 0x51735c: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x517360u;
        goto label_517360;
    }
    ctx->pc = 0x517358u;
    {
        const bool branch_taken_0x517358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51735Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x517358u;
            // 0x51735c: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x517358) {
            ctx->pc = 0x517688u;
            goto label_517688;
        }
    }
    ctx->pc = 0x517360u;
label_517360:
    // 0x517360: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x517360u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_517364:
    // 0x517364: 0xc0dc408  jal         func_371020
label_517368:
    if (ctx->pc == 0x517368u) {
        ctx->pc = 0x517368u;
            // 0x517368: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x51736Cu;
        goto label_51736c;
    }
    ctx->pc = 0x517364u;
    SET_GPR_U32(ctx, 31, 0x51736Cu);
    ctx->pc = 0x517368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517364u;
            // 0x517368: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51736Cu; }
        if (ctx->pc != 0x51736Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51736Cu; }
        if (ctx->pc != 0x51736Cu) { return; }
    }
    ctx->pc = 0x51736Cu;
label_51736c:
    // 0x51736c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x51736cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_517370:
    // 0x517370: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x517370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_517374:
    // 0x517374: 0xc145dc8  jal         func_517720
label_517378:
    if (ctx->pc == 0x517378u) {
        ctx->pc = 0x517378u;
            // 0x517378: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x51737Cu;
        goto label_51737c;
    }
    ctx->pc = 0x517374u;
    SET_GPR_U32(ctx, 31, 0x51737Cu);
    ctx->pc = 0x517378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517374u;
            // 0x517378: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x517720u;
    if (runtime->hasFunction(0x517720u)) {
        auto targetFn = runtime->lookupFunction(0x517720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51737Cu; }
        if (ctx->pc != 0x51737Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00517720_0x517720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51737Cu; }
        if (ctx->pc != 0x51737Cu) { return; }
    }
    ctx->pc = 0x51737Cu;
label_51737c:
    // 0x51737c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x51737cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_517380:
    // 0x517380: 0xc0f8e34  jal         func_3E38D0
label_517384:
    if (ctx->pc == 0x517384u) {
        ctx->pc = 0x517384u;
            // 0x517384: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x517388u;
        goto label_517388;
    }
    ctx->pc = 0x517380u;
    SET_GPR_U32(ctx, 31, 0x517388u);
    ctx->pc = 0x517384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517380u;
            // 0x517384: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E38D0u;
    if (runtime->hasFunction(0x3E38D0u)) {
        auto targetFn = runtime->lookupFunction(0x3E38D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517388u; }
        if (ctx->pc != 0x517388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E38D0_0x3e38d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517388u; }
        if (ctx->pc != 0x517388u) { return; }
    }
    ctx->pc = 0x517388u;
label_517388:
    // 0x517388: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x517388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_51738c:
    // 0x51738c: 0xc0e1b28  jal         func_386CA0
label_517390:
    if (ctx->pc == 0x517390u) {
        ctx->pc = 0x517390u;
            // 0x517390: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x517394u;
        goto label_517394;
    }
    ctx->pc = 0x51738Cu;
    SET_GPR_U32(ctx, 31, 0x517394u);
    ctx->pc = 0x517390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51738Cu;
            // 0x517390: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386CA0u;
    if (runtime->hasFunction(0x386CA0u)) {
        auto targetFn = runtime->lookupFunction(0x386CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517394u; }
        if (ctx->pc != 0x517394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386CA0_0x386ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517394u; }
        if (ctx->pc != 0x517394u) { return; }
    }
    ctx->pc = 0x517394u;
label_517394:
    // 0x517394: 0xc0dc408  jal         func_371020
label_517398:
    if (ctx->pc == 0x517398u) {
        ctx->pc = 0x517398u;
            // 0x517398: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x51739Cu;
        goto label_51739c;
    }
    ctx->pc = 0x517394u;
    SET_GPR_U32(ctx, 31, 0x51739Cu);
    ctx->pc = 0x517398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517394u;
            // 0x517398: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51739Cu; }
        if (ctx->pc != 0x51739Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51739Cu; }
        if (ctx->pc != 0x51739Cu) { return; }
    }
    ctx->pc = 0x51739Cu;
label_51739c:
    // 0x51739c: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x51739cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
label_5173a0:
    // 0x5173a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5173a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5173a4:
    // 0x5173a4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x5173a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_5173a8:
    // 0x5173a8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x5173a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_5173ac:
    // 0x5173ac: 0xc0d88a4  jal         func_362290
label_5173b0:
    if (ctx->pc == 0x5173B0u) {
        ctx->pc = 0x5173B0u;
            // 0x5173b0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5173B4u;
        goto label_5173b4;
    }
    ctx->pc = 0x5173ACu;
    SET_GPR_U32(ctx, 31, 0x5173B4u);
    ctx->pc = 0x5173B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5173ACu;
            // 0x5173b0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362290u;
    if (runtime->hasFunction(0x362290u)) {
        auto targetFn = runtime->lookupFunction(0x362290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5173B4u; }
        if (ctx->pc != 0x5173B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362290_0x362290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5173B4u; }
        if (ctx->pc != 0x5173B4u) { return; }
    }
    ctx->pc = 0x5173B4u;
label_5173b4:
    // 0x5173b4: 0xc6020120  lwc1        $f2, 0x120($s0)
    ctx->pc = 0x5173b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5173b8:
    // 0x5173b8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x5173b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_5173bc:
    // 0x5173bc: 0x0  nop
    ctx->pc = 0x5173bcu;
    // NOP
label_5173c0:
    // 0x5173c0: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x5173c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5173c4:
    // 0x5173c4: 0x45030015  bc1tl       . + 4 + (0x15 << 2)
label_5173c8:
    if (ctx->pc == 0x5173C8u) {
        ctx->pc = 0x5173C8u;
            // 0x5173c8: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->pc = 0x5173CCu;
        goto label_5173cc;
    }
    ctx->pc = 0x5173C4u;
    {
        const bool branch_taken_0x5173c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x5173c4) {
            ctx->pc = 0x5173C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5173C4u;
            // 0x5173c8: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51741Cu;
            goto label_51741c;
        }
    }
    ctx->pc = 0x5173CCu;
label_5173cc:
    // 0x5173cc: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x5173ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5173d0:
    // 0x5173d0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x5173d0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_5173d4:
    // 0x5173d4: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x5173d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5173d8:
    // 0x5173d8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_5173dc:
    if (ctx->pc == 0x5173DCu) {
        ctx->pc = 0x5173DCu;
            // 0x5173dc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x5173E0u;
        goto label_5173e0;
    }
    ctx->pc = 0x5173D8u;
    {
        const bool branch_taken_0x5173d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x5173DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5173D8u;
            // 0x5173dc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5173d8) {
            ctx->pc = 0x5173E4u;
            goto label_5173e4;
        }
    }
    ctx->pc = 0x5173E0u;
label_5173e0:
    // 0x5173e0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x5173e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5173e4:
    // 0x5173e4: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_5173e8:
    if (ctx->pc == 0x5173E8u) {
        ctx->pc = 0x5173E8u;
            // 0x5173e8: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x5173ECu;
        goto label_5173ec;
    }
    ctx->pc = 0x5173E4u;
    {
        const bool branch_taken_0x5173e4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x5173e4) {
            ctx->pc = 0x5173E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5173E4u;
            // 0x5173e8: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5173F8u;
            goto label_5173f8;
        }
    }
    ctx->pc = 0x5173ECu;
label_5173ec:
    // 0x5173ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5173ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5173f0:
    // 0x5173f0: 0x10000007  b           . + 4 + (0x7 << 2)
label_5173f4:
    if (ctx->pc == 0x5173F4u) {
        ctx->pc = 0x5173F4u;
            // 0x5173f4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x5173F8u;
        goto label_5173f8;
    }
    ctx->pc = 0x5173F0u;
    {
        const bool branch_taken_0x5173f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5173F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5173F0u;
            // 0x5173f4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5173f0) {
            ctx->pc = 0x517410u;
            goto label_517410;
        }
    }
    ctx->pc = 0x5173F8u;
label_5173f8:
    // 0x5173f8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x5173f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_5173fc:
    // 0x5173fc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x5173fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_517400:
    // 0x517400: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x517400u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_517404:
    // 0x517404: 0x0  nop
    ctx->pc = 0x517404u;
    // NOP
label_517408:
    // 0x517408: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x517408u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_51740c:
    // 0x51740c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x51740cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_517410:
    // 0x517410: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x517410u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_517414:
    // 0x517414: 0x1000009c  b           . + 4 + (0x9C << 2)
label_517418:
    if (ctx->pc == 0x517418u) {
        ctx->pc = 0x517418u;
            // 0x517418: 0xe6000120  swc1        $f0, 0x120($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
        ctx->pc = 0x51741Cu;
        goto label_51741c;
    }
    ctx->pc = 0x517414u;
    {
        const bool branch_taken_0x517414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x517418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x517414u;
            // 0x517418: 0xe6000120  swc1        $f0, 0x120($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x517414) {
            ctx->pc = 0x517688u;
            goto label_517688;
        }
    }
    ctx->pc = 0x51741Cu;
label_51741c:
    // 0x51741c: 0x8c520050  lw          $s2, 0x50($v0)
    ctx->pc = 0x51741cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_517420:
    // 0x517420: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x517420u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_517424:
    // 0x517424: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x517424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_517428:
    // 0x517428: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x517428u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_51742c:
    // 0x51742c: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x51742cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_517430:
    // 0x517430: 0xc088b74  jal         func_222DD0
label_517434:
    if (ctx->pc == 0x517434u) {
        ctx->pc = 0x517434u;
            // 0x517434: 0xe7a100bc  swc1        $f1, 0xBC($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
        ctx->pc = 0x517438u;
        goto label_517438;
    }
    ctx->pc = 0x517430u;
    SET_GPR_U32(ctx, 31, 0x517438u);
    ctx->pc = 0x517434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517430u;
            // 0x517434: 0xe7a100bc  swc1        $f1, 0xBC($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517438u; }
        if (ctx->pc != 0x517438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517438u; }
        if (ctx->pc != 0x517438u) { return; }
    }
    ctx->pc = 0x517438u;
label_517438:
    // 0x517438: 0x8e5900a0  lw          $t9, 0xA0($s2)
    ctx->pc = 0x517438u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_51743c:
    // 0x51743c: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x51743cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_517440:
    // 0x517440: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x517440u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_517444:
    // 0x517444: 0x320f809  jalr        $t9
label_517448:
    if (ctx->pc == 0x517448u) {
        ctx->pc = 0x517448u;
            // 0x517448: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x51744Cu;
        goto label_51744c;
    }
    ctx->pc = 0x517444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51744Cu);
        ctx->pc = 0x517448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x517444u;
            // 0x517448: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x51744Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51744Cu; }
            if (ctx->pc != 0x51744Cu) { return; }
        }
        }
    }
    ctx->pc = 0x51744Cu;
label_51744c:
    // 0x51744c: 0xc088b74  jal         func_222DD0
label_517450:
    if (ctx->pc == 0x517450u) {
        ctx->pc = 0x517450u;
            // 0x517450: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x517454u;
        goto label_517454;
    }
    ctx->pc = 0x51744Cu;
    SET_GPR_U32(ctx, 31, 0x517454u);
    ctx->pc = 0x517450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51744Cu;
            // 0x517450: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517454u; }
        if (ctx->pc != 0x517454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517454u; }
        if (ctx->pc != 0x517454u) { return; }
    }
    ctx->pc = 0x517454u;
label_517454:
    // 0x517454: 0x8e5900a0  lw          $t9, 0xA0($s2)
    ctx->pc = 0x517454u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_517458:
    // 0x517458: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x517458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_51745c:
    // 0x51745c: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x51745cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_517460:
    // 0x517460: 0x320f809  jalr        $t9
label_517464:
    if (ctx->pc == 0x517464u) {
        ctx->pc = 0x517464u;
            // 0x517464: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x517468u;
        goto label_517468;
    }
    ctx->pc = 0x517460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x517468u);
        ctx->pc = 0x517464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x517460u;
            // 0x517464: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x517468u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x517468u; }
            if (ctx->pc != 0x517468u) { return; }
        }
        }
    }
    ctx->pc = 0x517468u;
label_517468:
    // 0x517468: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x517468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_51746c:
    // 0x51746c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x51746cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_517470:
    // 0x517470: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x517470u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_517474:
    // 0x517474: 0x320f809  jalr        $t9
label_517478:
    if (ctx->pc == 0x517478u) {
        ctx->pc = 0x51747Cu;
        goto label_51747c;
    }
    ctx->pc = 0x517474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51747Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x51747Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51747Cu; }
            if (ctx->pc != 0x51747Cu) { return; }
        }
        }
    }
    ctx->pc = 0x51747Cu;
label_51747c:
    // 0x51747c: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x51747cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_517480:
    // 0x517480: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x517480u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_517484:
    // 0x517484: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x517484u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_517488:
    // 0x517488: 0x320f809  jalr        $t9
label_51748c:
    if (ctx->pc == 0x51748Cu) {
        ctx->pc = 0x517490u;
        goto label_517490;
    }
    ctx->pc = 0x517488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x517490u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x517490u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x517490u; }
            if (ctx->pc != 0x517490u) { return; }
        }
        }
    }
    ctx->pc = 0x517490u;
label_517490:
    // 0x517490: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x517490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_517494:
    // 0x517494: 0x1000007c  b           . + 4 + (0x7C << 2)
label_517498:
    if (ctx->pc == 0x517498u) {
        ctx->pc = 0x517498u;
            // 0x517498: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x51749Cu;
        goto label_51749c;
    }
    ctx->pc = 0x517494u;
    {
        const bool branch_taken_0x517494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x517498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x517494u;
            // 0x517498: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x517494) {
            ctx->pc = 0x517688u;
            goto label_517688;
        }
    }
    ctx->pc = 0x51749Cu;
label_51749c:
    // 0x51749c: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x51749cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5174a0:
    // 0x5174a0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x5174a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_5174a4:
    // 0x5174a4: 0x0  nop
    ctx->pc = 0x5174a4u;
    // NOP
label_5174a8:
    // 0x5174a8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x5174a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5174ac:
    // 0x5174ac: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_5174b0:
    if (ctx->pc == 0x5174B0u) {
        ctx->pc = 0x5174B4u;
        goto label_5174b4;
    }
    ctx->pc = 0x5174ACu;
    {
        const bool branch_taken_0x5174ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x5174ac) {
            ctx->pc = 0x5174DCu;
            goto label_5174dc;
        }
    }
    ctx->pc = 0x5174B4u;
label_5174b4:
    // 0x5174b4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x5174b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_5174b8:
    // 0x5174b8: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x5174b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_5174bc:
    // 0x5174bc: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x5174bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5174c0:
    // 0x5174c0: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x5174c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5174c4:
    // 0x5174c4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x5174c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_5174c8:
    // 0x5174c8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x5174c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5174cc:
    // 0x5174cc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_5174d0:
    if (ctx->pc == 0x5174D0u) {
        ctx->pc = 0x5174D0u;
            // 0x5174d0: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->pc = 0x5174D4u;
        goto label_5174d4;
    }
    ctx->pc = 0x5174CCu;
    {
        const bool branch_taken_0x5174cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x5174D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5174CCu;
            // 0x5174d0: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5174cc) {
            ctx->pc = 0x5174F0u;
            goto label_5174f0;
        }
    }
    ctx->pc = 0x5174D4u;
label_5174d4:
    // 0x5174d4: 0x10000006  b           . + 4 + (0x6 << 2)
label_5174d8:
    if (ctx->pc == 0x5174D8u) {
        ctx->pc = 0x5174D8u;
            // 0x5174d8: 0xe6220024  swc1        $f2, 0x24($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->pc = 0x5174DCu;
        goto label_5174dc;
    }
    ctx->pc = 0x5174D4u;
    {
        const bool branch_taken_0x5174d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5174D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5174D4u;
            // 0x5174d8: 0xe6220024  swc1        $f2, 0x24($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5174d4) {
            ctx->pc = 0x5174F0u;
            goto label_5174f0;
        }
    }
    ctx->pc = 0x5174DCu;
label_5174dc:
    // 0x5174dc: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x5174dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5174e0:
    // 0x5174e0: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_5174e4:
    if (ctx->pc == 0x5174E4u) {
        ctx->pc = 0x5174E4u;
            // 0x5174e4: 0xc6210024  lwc1        $f1, 0x24($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x5174E8u;
        goto label_5174e8;
    }
    ctx->pc = 0x5174E0u;
    {
        const bool branch_taken_0x5174e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x5174e0) {
            ctx->pc = 0x5174E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5174E0u;
            // 0x5174e4: 0xc6210024  lwc1        $f1, 0x24($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x5174F4u;
            goto label_5174f4;
        }
    }
    ctx->pc = 0x5174E8u;
label_5174e8:
    // 0x5174e8: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x5174e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_5174ec:
    // 0x5174ec: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x5174ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
label_5174f0:
    // 0x5174f0: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x5174f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5174f4:
    // 0x5174f4: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x5174f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_5174f8:
    // 0x5174f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5174f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5174fc:
    // 0x5174fc: 0x0  nop
    ctx->pc = 0x5174fcu;
    // NOP
label_517500:
    // 0x517500: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x517500u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_517504:
    // 0x517504: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_517508:
    if (ctx->pc == 0x517508u) {
        ctx->pc = 0x517508u;
            // 0x517508: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x51750Cu;
        goto label_51750c;
    }
    ctx->pc = 0x517504u;
    {
        const bool branch_taken_0x517504 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x517508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x517504u;
            // 0x517508: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x517504) {
            ctx->pc = 0x517524u;
            goto label_517524;
        }
    }
    ctx->pc = 0x51750Cu;
label_51750c:
    // 0x51750c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x51750cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_517510:
    // 0x517510: 0x0  nop
    ctx->pc = 0x517510u;
    // NOP
label_517514:
    // 0x517514: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x517514u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_517518:
    // 0x517518: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_51751c:
    if (ctx->pc == 0x51751Cu) {
        ctx->pc = 0x517520u;
        goto label_517520;
    }
    ctx->pc = 0x517518u;
    {
        const bool branch_taken_0x517518 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x517518) {
            ctx->pc = 0x517524u;
            goto label_517524;
        }
    }
    ctx->pc = 0x517520u;
label_517520:
    // 0x517520: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x517520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_517524:
    // 0x517524: 0x10800058  beqz        $a0, . + 4 + (0x58 << 2)
label_517528:
    if (ctx->pc == 0x517528u) {
        ctx->pc = 0x51752Cu;
        goto label_51752c;
    }
    ctx->pc = 0x517524u;
    {
        const bool branch_taken_0x517524 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x517524) {
            ctx->pc = 0x517688u;
            goto label_517688;
        }
    }
    ctx->pc = 0x51752Cu;
label_51752c:
    // 0x51752c: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x51752cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_517530:
    // 0x517530: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x517530u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_517534:
    // 0x517534: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x517534u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_517538:
    // 0x517538: 0x320f809  jalr        $t9
label_51753c:
    if (ctx->pc == 0x51753Cu) {
        ctx->pc = 0x517540u;
        goto label_517540;
    }
    ctx->pc = 0x517538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x517540u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x517540u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x517540u; }
            if (ctx->pc != 0x517540u) { return; }
        }
        }
    }
    ctx->pc = 0x517540u;
label_517540:
    // 0x517540: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x517540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_517544:
    // 0x517544: 0x10000050  b           . + 4 + (0x50 << 2)
label_517548:
    if (ctx->pc == 0x517548u) {
        ctx->pc = 0x517548u;
            // 0x517548: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x51754Cu;
        goto label_51754c;
    }
    ctx->pc = 0x517544u;
    {
        const bool branch_taken_0x517544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x517548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x517544u;
            // 0x517548: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x517544) {
            ctx->pc = 0x517688u;
            goto label_517688;
        }
    }
    ctx->pc = 0x51754Cu;
label_51754c:
    // 0x51754c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x51754cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_517550:
    // 0x517550: 0xc6010120  lwc1        $f1, 0x120($s0)
    ctx->pc = 0x517550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_517554:
    // 0x517554: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x517554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_517558:
    // 0x517558: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x517558u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_51755c:
    // 0x51755c: 0x4502004a  bc1fl       . + 4 + (0x4A << 2)
label_517560:
    if (ctx->pc == 0x517560u) {
        ctx->pc = 0x517560u;
            // 0x517560: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x517564u;
        goto label_517564;
    }
    ctx->pc = 0x51755Cu;
    {
        const bool branch_taken_0x51755c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x51755c) {
            ctx->pc = 0x517560u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51755Cu;
            // 0x517560: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x517688u;
            goto label_517688;
        }
    }
    ctx->pc = 0x517564u;
label_517564:
    // 0x517564: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x517564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_517568:
    // 0x517568: 0xc460afd0  lwc1        $f0, -0x5030($v1)
    ctx->pc = 0x517568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294946768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_51756c:
    // 0x51756c: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x51756cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
label_517570:
    // 0x517570: 0x0  nop
    ctx->pc = 0x517570u;
    // NOP
label_517574:
    // 0x517574: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x517574u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_517578:
    // 0x517578: 0x10000043  b           . + 4 + (0x43 << 2)
label_51757c:
    if (ctx->pc == 0x51757Cu) {
        ctx->pc = 0x51757Cu;
            // 0x51757c: 0xe6000120  swc1        $f0, 0x120($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
        ctx->pc = 0x517580u;
        goto label_517580;
    }
    ctx->pc = 0x517578u;
    {
        const bool branch_taken_0x517578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51757Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x517578u;
            // 0x51757c: 0xe6000120  swc1        $f0, 0x120($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x517578) {
            ctx->pc = 0x517688u;
            goto label_517688;
        }
    }
    ctx->pc = 0x517580u;
label_517580:
    // 0x517580: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x517580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_517584:
    // 0x517584: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x517584u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_517588:
    // 0x517588: 0x0  nop
    ctx->pc = 0x517588u;
    // NOP
label_51758c:
    // 0x51758c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x51758cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_517590:
    // 0x517590: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_517594:
    if (ctx->pc == 0x517594u) {
        ctx->pc = 0x517598u;
        goto label_517598;
    }
    ctx->pc = 0x517590u;
    {
        const bool branch_taken_0x517590 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x517590) {
            ctx->pc = 0x5175C0u;
            goto label_5175c0;
        }
    }
    ctx->pc = 0x517598u;
label_517598:
    // 0x517598: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x517598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_51759c:
    // 0x51759c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x51759cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_5175a0:
    // 0x5175a0: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x5175a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5175a4:
    // 0x5175a4: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x5175a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5175a8:
    // 0x5175a8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x5175a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_5175ac:
    // 0x5175ac: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x5175acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5175b0:
    // 0x5175b0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_5175b4:
    if (ctx->pc == 0x5175B4u) {
        ctx->pc = 0x5175B4u;
            // 0x5175b4: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->pc = 0x5175B8u;
        goto label_5175b8;
    }
    ctx->pc = 0x5175B0u;
    {
        const bool branch_taken_0x5175b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x5175B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5175B0u;
            // 0x5175b4: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5175b0) {
            ctx->pc = 0x5175D4u;
            goto label_5175d4;
        }
    }
    ctx->pc = 0x5175B8u;
label_5175b8:
    // 0x5175b8: 0x10000006  b           . + 4 + (0x6 << 2)
label_5175bc:
    if (ctx->pc == 0x5175BCu) {
        ctx->pc = 0x5175BCu;
            // 0x5175bc: 0xe6220024  swc1        $f2, 0x24($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->pc = 0x5175C0u;
        goto label_5175c0;
    }
    ctx->pc = 0x5175B8u;
    {
        const bool branch_taken_0x5175b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5175BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5175B8u;
            // 0x5175bc: 0xe6220024  swc1        $f2, 0x24($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5175b8) {
            ctx->pc = 0x5175D4u;
            goto label_5175d4;
        }
    }
    ctx->pc = 0x5175C0u;
label_5175c0:
    // 0x5175c0: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x5175c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5175c4:
    // 0x5175c4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_5175c8:
    if (ctx->pc == 0x5175C8u) {
        ctx->pc = 0x5175C8u;
            // 0x5175c8: 0xc6210024  lwc1        $f1, 0x24($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x5175CCu;
        goto label_5175cc;
    }
    ctx->pc = 0x5175C4u;
    {
        const bool branch_taken_0x5175c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x5175c4) {
            ctx->pc = 0x5175C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5175C4u;
            // 0x5175c8: 0xc6210024  lwc1        $f1, 0x24($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x5175D8u;
            goto label_5175d8;
        }
    }
    ctx->pc = 0x5175CCu;
label_5175cc:
    // 0x5175cc: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x5175ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_5175d0:
    // 0x5175d0: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x5175d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
label_5175d4:
    // 0x5175d4: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x5175d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5175d8:
    // 0x5175d8: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x5175d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_5175dc:
    // 0x5175dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5175dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5175e0:
    // 0x5175e0: 0x0  nop
    ctx->pc = 0x5175e0u;
    // NOP
label_5175e4:
    // 0x5175e4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x5175e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5175e8:
    // 0x5175e8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_5175ec:
    if (ctx->pc == 0x5175ECu) {
        ctx->pc = 0x5175ECu;
            // 0x5175ec: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x5175F0u;
        goto label_5175f0;
    }
    ctx->pc = 0x5175E8u;
    {
        const bool branch_taken_0x5175e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x5175ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5175E8u;
            // 0x5175ec: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x5175e8) {
            ctx->pc = 0x517608u;
            goto label_517608;
        }
    }
    ctx->pc = 0x5175F0u;
label_5175f0:
    // 0x5175f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x5175f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5175f4:
    // 0x5175f4: 0x0  nop
    ctx->pc = 0x5175f4u;
    // NOP
label_5175f8:
    // 0x5175f8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x5175f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5175fc:
    // 0x5175fc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_517600:
    if (ctx->pc == 0x517600u) {
        ctx->pc = 0x517604u;
        goto label_517604;
    }
    ctx->pc = 0x5175FCu;
    {
        const bool branch_taken_0x5175fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x5175fc) {
            ctx->pc = 0x517608u;
            goto label_517608;
        }
    }
    ctx->pc = 0x517604u;
label_517604:
    // 0x517604: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x517604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_517608:
    // 0x517608: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
label_51760c:
    if (ctx->pc == 0x51760Cu) {
        ctx->pc = 0x517610u;
        goto label_517610;
    }
    ctx->pc = 0x517608u;
    {
        const bool branch_taken_0x517608 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x517608) {
            ctx->pc = 0x517688u;
            goto label_517688;
        }
    }
    ctx->pc = 0x517610u;
label_517610:
    // 0x517610: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x517610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_517614:
    // 0x517614: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x517614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_517618:
    // 0x517618: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x517618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
label_51761c:
    // 0x51761c: 0xc601012c  lwc1        $f1, 0x12C($s0)
    ctx->pc = 0x51761cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_517620:
    // 0x517620: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x517620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_517624:
    // 0x517624: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x517624u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_517628:
    // 0x517628: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_51762c:
    if (ctx->pc == 0x51762Cu) {
        ctx->pc = 0x51762Cu;
            // 0x51762c: 0xae00012c  sw          $zero, 0x12C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
        ctx->pc = 0x517630u;
        goto label_517630;
    }
    ctx->pc = 0x517628u;
    {
        const bool branch_taken_0x517628 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x517628) {
            ctx->pc = 0x51762Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x517628u;
            // 0x51762c: 0xae00012c  sw          $zero, 0x12C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x517640u;
            goto label_517640;
        }
    }
    ctx->pc = 0x517630u;
label_517630:
    // 0x517630: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x517630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
label_517634:
    // 0x517634: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x517634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_517638:
    // 0x517638: 0xae020130  sw          $v0, 0x130($s0)
    ctx->pc = 0x517638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 2));
label_51763c:
    // 0x51763c: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x51763cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
label_517640:
    // 0x517640: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x517640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_517644:
    // 0x517644: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x517644u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_517648:
    // 0x517648: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x517648u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_51764c:
    // 0x51764c: 0x320f809  jalr        $t9
label_517650:
    if (ctx->pc == 0x517650u) {
        ctx->pc = 0x517654u;
        goto label_517654;
    }
    ctx->pc = 0x51764Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x517654u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x517654u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x517654u; }
            if (ctx->pc != 0x517654u) { return; }
        }
        }
    }
    ctx->pc = 0x517654u;
label_517654:
    // 0x517654: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x517654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_517658:
    // 0x517658: 0x1000000b  b           . + 4 + (0xB << 2)
label_51765c:
    if (ctx->pc == 0x51765Cu) {
        ctx->pc = 0x51765Cu;
            // 0x51765c: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x517660u;
        goto label_517660;
    }
    ctx->pc = 0x517658u;
    {
        const bool branch_taken_0x517658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51765Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x517658u;
            // 0x51765c: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x517658) {
            ctx->pc = 0x517688u;
            goto label_517688;
        }
    }
    ctx->pc = 0x517660u;
label_517660:
    // 0x517660: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x517660u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_517664:
    // 0x517664: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x517664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_517668:
    // 0x517668: 0xae420084  sw          $v0, 0x84($s2)
    ctx->pc = 0x517668u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 2));
label_51766c:
    // 0x51766c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x51766cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_517670:
    // 0x517670: 0xc6400078  lwc1        $f0, 0x78($s2)
    ctx->pc = 0x517670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_517674:
    // 0x517674: 0xc0e32a4  jal         func_38CA90
label_517678:
    if (ctx->pc == 0x517678u) {
        ctx->pc = 0x517678u;
            // 0x517678: 0xe6400074  swc1        $f0, 0x74($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
        ctx->pc = 0x51767Cu;
        goto label_51767c;
    }
    ctx->pc = 0x517674u;
    SET_GPR_U32(ctx, 31, 0x51767Cu);
    ctx->pc = 0x517678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517674u;
            // 0x517678: 0xe6400074  swc1        $f0, 0x74($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x38CA90u;
    if (runtime->hasFunction(0x38CA90u)) {
        auto targetFn = runtime->lookupFunction(0x38CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51767Cu; }
        if (ctx->pc != 0x51767Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA90_0x38ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51767Cu; }
        if (ctx->pc != 0x51767Cu) { return; }
    }
    ctx->pc = 0x51767Cu;
label_51767c:
    // 0x51767c: 0xae4000b4  sw          $zero, 0xB4($s2)
    ctx->pc = 0x51767cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 0));
label_517680:
    // 0x517680: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x517680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_517684:
    // 0x517684: 0xa243004c  sb          $v1, 0x4C($s2)
    ctx->pc = 0x517684u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 76), (uint8_t)GPR_U32(ctx, 3));
label_517688:
    // 0x517688: 0x96040110  lhu         $a0, 0x110($s0)
    ctx->pc = 0x517688u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_51768c:
    // 0x51768c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x51768cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_517690:
    // 0x517690: 0x1483001a  bne         $a0, $v1, . + 4 + (0x1A << 2)
label_517694:
    if (ctx->pc == 0x517694u) {
        ctx->pc = 0x517698u;
        goto label_517698;
    }
    ctx->pc = 0x517690u;
    {
        const bool branch_taken_0x517690 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x517690) {
            ctx->pc = 0x5176FCu;
            goto label_5176fc;
        }
    }
    ctx->pc = 0x517698u;
label_517698:
    // 0x517698: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x517698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_51769c:
    // 0x51769c: 0x86030114  lh          $v1, 0x114($s0)
    ctx->pc = 0x51769cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 276)));
label_5176a0:
    // 0x5176a0: 0x90a4000a  lbu         $a0, 0xA($a1)
    ctx->pc = 0x5176a0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 10)));
label_5176a4:
    // 0x5176a4: 0x14830015  bne         $a0, $v1, . + 4 + (0x15 << 2)
label_5176a8:
    if (ctx->pc == 0x5176A8u) {
        ctx->pc = 0x5176ACu;
        goto label_5176ac;
    }
    ctx->pc = 0x5176A4u;
    {
        const bool branch_taken_0x5176a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x5176a4) {
            ctx->pc = 0x5176FCu;
            goto label_5176fc;
        }
    }
    ctx->pc = 0x5176ACu;
label_5176ac:
    // 0x5176ac: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x5176acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_5176b0:
    // 0x5176b0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_5176b4:
    if (ctx->pc == 0x5176B4u) {
        ctx->pc = 0x5176B4u;
            // 0x5176b4: 0xc614012c  lwc1        $f20, 0x12C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x5176B8u;
        goto label_5176b8;
    }
    ctx->pc = 0x5176B0u;
    {
        const bool branch_taken_0x5176b0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x5176B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5176B0u;
            // 0x5176b4: 0xc614012c  lwc1        $f20, 0x12C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5176b0) {
            ctx->pc = 0x5176C4u;
            goto label_5176c4;
        }
    }
    ctx->pc = 0x5176B8u;
label_5176b8:
    // 0x5176b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5176b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5176bc:
    // 0x5176bc: 0x10000008  b           . + 4 + (0x8 << 2)
label_5176c0:
    if (ctx->pc == 0x5176C0u) {
        ctx->pc = 0x5176C0u;
            // 0x5176c0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x5176C4u;
        goto label_5176c4;
    }
    ctx->pc = 0x5176BCu;
    {
        const bool branch_taken_0x5176bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5176C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5176BCu;
            // 0x5176c0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5176bc) {
            ctx->pc = 0x5176E0u;
            goto label_5176e0;
        }
    }
    ctx->pc = 0x5176C4u;
label_5176c4:
    // 0x5176c4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x5176c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_5176c8:
    // 0x5176c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x5176c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_5176cc:
    // 0x5176cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5176ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_5176d0:
    // 0x5176d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5176d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5176d4:
    // 0x5176d4: 0x0  nop
    ctx->pc = 0x5176d4u;
    // NOP
label_5176d8:
    // 0x5176d8: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x5176d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_5176dc:
    // 0x5176dc: 0x460d6b40  add.s       $f13, $f13, $f13
    ctx->pc = 0x5176dcu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
label_5176e0:
    // 0x5176e0: 0x90a5000b  lbu         $a1, 0xB($a1)
    ctx->pc = 0x5176e0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 11)));
label_5176e4:
    // 0x5176e4: 0xc60c0120  lwc1        $f12, 0x120($s0)
    ctx->pc = 0x5176e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_5176e8:
    // 0x5176e8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x5176e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_5176ec:
    // 0x5176ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5176ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5176f0:
    // 0x5176f0: 0xc0d8aac  jal         func_362AB0
label_5176f4:
    if (ctx->pc == 0x5176F4u) {
        ctx->pc = 0x5176F4u;
            // 0x5176f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x5176F8u;
        goto label_5176f8;
    }
    ctx->pc = 0x5176F0u;
    SET_GPR_U32(ctx, 31, 0x5176F8u);
    ctx->pc = 0x5176F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5176F0u;
            // 0x5176f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362AB0u;
    if (runtime->hasFunction(0x362AB0u)) {
        auto targetFn = runtime->lookupFunction(0x362AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5176F8u; }
        if (ctx->pc != 0x5176F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362AB0_0x362ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5176F8u; }
        if (ctx->pc != 0x5176F8u) { return; }
    }
    ctx->pc = 0x5176F8u;
label_5176f8:
    // 0x5176f8: 0xe614012c  swc1        $f20, 0x12C($s0)
    ctx->pc = 0x5176f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
label_5176fc:
    // 0x5176fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x5176fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_517700:
    // 0x517700: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x517700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_517704:
    // 0x517704: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x517704u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_517708:
    // 0x517708: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x517708u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_51770c:
    // 0x51770c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x51770cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_517710:
    // 0x517710: 0x3e00008  jr          $ra
label_517714:
    if (ctx->pc == 0x517714u) {
        ctx->pc = 0x517714u;
            // 0x517714: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x517718u;
        goto label_517718;
    }
    ctx->pc = 0x517710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x517714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x517710u;
            // 0x517714: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x517718u;
label_517718:
    // 0x517718: 0x0  nop
    ctx->pc = 0x517718u;
    // NOP
label_51771c:
    // 0x51771c: 0x0  nop
    ctx->pc = 0x51771cu;
    // NOP
}
