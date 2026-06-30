#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A0340
// Address: 0x2a0340 - 0x2a0830
void sub_002A0340_0x2a0340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0340_0x2a0340");
#endif

    switch (ctx->pc) {
        case 0x2a0340u: goto label_2a0340;
        case 0x2a0344u: goto label_2a0344;
        case 0x2a0348u: goto label_2a0348;
        case 0x2a034cu: goto label_2a034c;
        case 0x2a0350u: goto label_2a0350;
        case 0x2a0354u: goto label_2a0354;
        case 0x2a0358u: goto label_2a0358;
        case 0x2a035cu: goto label_2a035c;
        case 0x2a0360u: goto label_2a0360;
        case 0x2a0364u: goto label_2a0364;
        case 0x2a0368u: goto label_2a0368;
        case 0x2a036cu: goto label_2a036c;
        case 0x2a0370u: goto label_2a0370;
        case 0x2a0374u: goto label_2a0374;
        case 0x2a0378u: goto label_2a0378;
        case 0x2a037cu: goto label_2a037c;
        case 0x2a0380u: goto label_2a0380;
        case 0x2a0384u: goto label_2a0384;
        case 0x2a0388u: goto label_2a0388;
        case 0x2a038cu: goto label_2a038c;
        case 0x2a0390u: goto label_2a0390;
        case 0x2a0394u: goto label_2a0394;
        case 0x2a0398u: goto label_2a0398;
        case 0x2a039cu: goto label_2a039c;
        case 0x2a03a0u: goto label_2a03a0;
        case 0x2a03a4u: goto label_2a03a4;
        case 0x2a03a8u: goto label_2a03a8;
        case 0x2a03acu: goto label_2a03ac;
        case 0x2a03b0u: goto label_2a03b0;
        case 0x2a03b4u: goto label_2a03b4;
        case 0x2a03b8u: goto label_2a03b8;
        case 0x2a03bcu: goto label_2a03bc;
        case 0x2a03c0u: goto label_2a03c0;
        case 0x2a03c4u: goto label_2a03c4;
        case 0x2a03c8u: goto label_2a03c8;
        case 0x2a03ccu: goto label_2a03cc;
        case 0x2a03d0u: goto label_2a03d0;
        case 0x2a03d4u: goto label_2a03d4;
        case 0x2a03d8u: goto label_2a03d8;
        case 0x2a03dcu: goto label_2a03dc;
        case 0x2a03e0u: goto label_2a03e0;
        case 0x2a03e4u: goto label_2a03e4;
        case 0x2a03e8u: goto label_2a03e8;
        case 0x2a03ecu: goto label_2a03ec;
        case 0x2a03f0u: goto label_2a03f0;
        case 0x2a03f4u: goto label_2a03f4;
        case 0x2a03f8u: goto label_2a03f8;
        case 0x2a03fcu: goto label_2a03fc;
        case 0x2a0400u: goto label_2a0400;
        case 0x2a0404u: goto label_2a0404;
        case 0x2a0408u: goto label_2a0408;
        case 0x2a040cu: goto label_2a040c;
        case 0x2a0410u: goto label_2a0410;
        case 0x2a0414u: goto label_2a0414;
        case 0x2a0418u: goto label_2a0418;
        case 0x2a041cu: goto label_2a041c;
        case 0x2a0420u: goto label_2a0420;
        case 0x2a0424u: goto label_2a0424;
        case 0x2a0428u: goto label_2a0428;
        case 0x2a042cu: goto label_2a042c;
        case 0x2a0430u: goto label_2a0430;
        case 0x2a0434u: goto label_2a0434;
        case 0x2a0438u: goto label_2a0438;
        case 0x2a043cu: goto label_2a043c;
        case 0x2a0440u: goto label_2a0440;
        case 0x2a0444u: goto label_2a0444;
        case 0x2a0448u: goto label_2a0448;
        case 0x2a044cu: goto label_2a044c;
        case 0x2a0450u: goto label_2a0450;
        case 0x2a0454u: goto label_2a0454;
        case 0x2a0458u: goto label_2a0458;
        case 0x2a045cu: goto label_2a045c;
        case 0x2a0460u: goto label_2a0460;
        case 0x2a0464u: goto label_2a0464;
        case 0x2a0468u: goto label_2a0468;
        case 0x2a046cu: goto label_2a046c;
        case 0x2a0470u: goto label_2a0470;
        case 0x2a0474u: goto label_2a0474;
        case 0x2a0478u: goto label_2a0478;
        case 0x2a047cu: goto label_2a047c;
        case 0x2a0480u: goto label_2a0480;
        case 0x2a0484u: goto label_2a0484;
        case 0x2a0488u: goto label_2a0488;
        case 0x2a048cu: goto label_2a048c;
        case 0x2a0490u: goto label_2a0490;
        case 0x2a0494u: goto label_2a0494;
        case 0x2a0498u: goto label_2a0498;
        case 0x2a049cu: goto label_2a049c;
        case 0x2a04a0u: goto label_2a04a0;
        case 0x2a04a4u: goto label_2a04a4;
        case 0x2a04a8u: goto label_2a04a8;
        case 0x2a04acu: goto label_2a04ac;
        case 0x2a04b0u: goto label_2a04b0;
        case 0x2a04b4u: goto label_2a04b4;
        case 0x2a04b8u: goto label_2a04b8;
        case 0x2a04bcu: goto label_2a04bc;
        case 0x2a04c0u: goto label_2a04c0;
        case 0x2a04c4u: goto label_2a04c4;
        case 0x2a04c8u: goto label_2a04c8;
        case 0x2a04ccu: goto label_2a04cc;
        case 0x2a04d0u: goto label_2a04d0;
        case 0x2a04d4u: goto label_2a04d4;
        case 0x2a04d8u: goto label_2a04d8;
        case 0x2a04dcu: goto label_2a04dc;
        case 0x2a04e0u: goto label_2a04e0;
        case 0x2a04e4u: goto label_2a04e4;
        case 0x2a04e8u: goto label_2a04e8;
        case 0x2a04ecu: goto label_2a04ec;
        case 0x2a04f0u: goto label_2a04f0;
        case 0x2a04f4u: goto label_2a04f4;
        case 0x2a04f8u: goto label_2a04f8;
        case 0x2a04fcu: goto label_2a04fc;
        case 0x2a0500u: goto label_2a0500;
        case 0x2a0504u: goto label_2a0504;
        case 0x2a0508u: goto label_2a0508;
        case 0x2a050cu: goto label_2a050c;
        case 0x2a0510u: goto label_2a0510;
        case 0x2a0514u: goto label_2a0514;
        case 0x2a0518u: goto label_2a0518;
        case 0x2a051cu: goto label_2a051c;
        case 0x2a0520u: goto label_2a0520;
        case 0x2a0524u: goto label_2a0524;
        case 0x2a0528u: goto label_2a0528;
        case 0x2a052cu: goto label_2a052c;
        case 0x2a0530u: goto label_2a0530;
        case 0x2a0534u: goto label_2a0534;
        case 0x2a0538u: goto label_2a0538;
        case 0x2a053cu: goto label_2a053c;
        case 0x2a0540u: goto label_2a0540;
        case 0x2a0544u: goto label_2a0544;
        case 0x2a0548u: goto label_2a0548;
        case 0x2a054cu: goto label_2a054c;
        case 0x2a0550u: goto label_2a0550;
        case 0x2a0554u: goto label_2a0554;
        case 0x2a0558u: goto label_2a0558;
        case 0x2a055cu: goto label_2a055c;
        case 0x2a0560u: goto label_2a0560;
        case 0x2a0564u: goto label_2a0564;
        case 0x2a0568u: goto label_2a0568;
        case 0x2a056cu: goto label_2a056c;
        case 0x2a0570u: goto label_2a0570;
        case 0x2a0574u: goto label_2a0574;
        case 0x2a0578u: goto label_2a0578;
        case 0x2a057cu: goto label_2a057c;
        case 0x2a0580u: goto label_2a0580;
        case 0x2a0584u: goto label_2a0584;
        case 0x2a0588u: goto label_2a0588;
        case 0x2a058cu: goto label_2a058c;
        case 0x2a0590u: goto label_2a0590;
        case 0x2a0594u: goto label_2a0594;
        case 0x2a0598u: goto label_2a0598;
        case 0x2a059cu: goto label_2a059c;
        case 0x2a05a0u: goto label_2a05a0;
        case 0x2a05a4u: goto label_2a05a4;
        case 0x2a05a8u: goto label_2a05a8;
        case 0x2a05acu: goto label_2a05ac;
        case 0x2a05b0u: goto label_2a05b0;
        case 0x2a05b4u: goto label_2a05b4;
        case 0x2a05b8u: goto label_2a05b8;
        case 0x2a05bcu: goto label_2a05bc;
        case 0x2a05c0u: goto label_2a05c0;
        case 0x2a05c4u: goto label_2a05c4;
        case 0x2a05c8u: goto label_2a05c8;
        case 0x2a05ccu: goto label_2a05cc;
        case 0x2a05d0u: goto label_2a05d0;
        case 0x2a05d4u: goto label_2a05d4;
        case 0x2a05d8u: goto label_2a05d8;
        case 0x2a05dcu: goto label_2a05dc;
        case 0x2a05e0u: goto label_2a05e0;
        case 0x2a05e4u: goto label_2a05e4;
        case 0x2a05e8u: goto label_2a05e8;
        case 0x2a05ecu: goto label_2a05ec;
        case 0x2a05f0u: goto label_2a05f0;
        case 0x2a05f4u: goto label_2a05f4;
        case 0x2a05f8u: goto label_2a05f8;
        case 0x2a05fcu: goto label_2a05fc;
        case 0x2a0600u: goto label_2a0600;
        case 0x2a0604u: goto label_2a0604;
        case 0x2a0608u: goto label_2a0608;
        case 0x2a060cu: goto label_2a060c;
        case 0x2a0610u: goto label_2a0610;
        case 0x2a0614u: goto label_2a0614;
        case 0x2a0618u: goto label_2a0618;
        case 0x2a061cu: goto label_2a061c;
        case 0x2a0620u: goto label_2a0620;
        case 0x2a0624u: goto label_2a0624;
        case 0x2a0628u: goto label_2a0628;
        case 0x2a062cu: goto label_2a062c;
        case 0x2a0630u: goto label_2a0630;
        case 0x2a0634u: goto label_2a0634;
        case 0x2a0638u: goto label_2a0638;
        case 0x2a063cu: goto label_2a063c;
        case 0x2a0640u: goto label_2a0640;
        case 0x2a0644u: goto label_2a0644;
        case 0x2a0648u: goto label_2a0648;
        case 0x2a064cu: goto label_2a064c;
        case 0x2a0650u: goto label_2a0650;
        case 0x2a0654u: goto label_2a0654;
        case 0x2a0658u: goto label_2a0658;
        case 0x2a065cu: goto label_2a065c;
        case 0x2a0660u: goto label_2a0660;
        case 0x2a0664u: goto label_2a0664;
        case 0x2a0668u: goto label_2a0668;
        case 0x2a066cu: goto label_2a066c;
        case 0x2a0670u: goto label_2a0670;
        case 0x2a0674u: goto label_2a0674;
        case 0x2a0678u: goto label_2a0678;
        case 0x2a067cu: goto label_2a067c;
        case 0x2a0680u: goto label_2a0680;
        case 0x2a0684u: goto label_2a0684;
        case 0x2a0688u: goto label_2a0688;
        case 0x2a068cu: goto label_2a068c;
        case 0x2a0690u: goto label_2a0690;
        case 0x2a0694u: goto label_2a0694;
        case 0x2a0698u: goto label_2a0698;
        case 0x2a069cu: goto label_2a069c;
        case 0x2a06a0u: goto label_2a06a0;
        case 0x2a06a4u: goto label_2a06a4;
        case 0x2a06a8u: goto label_2a06a8;
        case 0x2a06acu: goto label_2a06ac;
        case 0x2a06b0u: goto label_2a06b0;
        case 0x2a06b4u: goto label_2a06b4;
        case 0x2a06b8u: goto label_2a06b8;
        case 0x2a06bcu: goto label_2a06bc;
        case 0x2a06c0u: goto label_2a06c0;
        case 0x2a06c4u: goto label_2a06c4;
        case 0x2a06c8u: goto label_2a06c8;
        case 0x2a06ccu: goto label_2a06cc;
        case 0x2a06d0u: goto label_2a06d0;
        case 0x2a06d4u: goto label_2a06d4;
        case 0x2a06d8u: goto label_2a06d8;
        case 0x2a06dcu: goto label_2a06dc;
        case 0x2a06e0u: goto label_2a06e0;
        case 0x2a06e4u: goto label_2a06e4;
        case 0x2a06e8u: goto label_2a06e8;
        case 0x2a06ecu: goto label_2a06ec;
        case 0x2a06f0u: goto label_2a06f0;
        case 0x2a06f4u: goto label_2a06f4;
        case 0x2a06f8u: goto label_2a06f8;
        case 0x2a06fcu: goto label_2a06fc;
        case 0x2a0700u: goto label_2a0700;
        case 0x2a0704u: goto label_2a0704;
        case 0x2a0708u: goto label_2a0708;
        case 0x2a070cu: goto label_2a070c;
        case 0x2a0710u: goto label_2a0710;
        case 0x2a0714u: goto label_2a0714;
        case 0x2a0718u: goto label_2a0718;
        case 0x2a071cu: goto label_2a071c;
        case 0x2a0720u: goto label_2a0720;
        case 0x2a0724u: goto label_2a0724;
        case 0x2a0728u: goto label_2a0728;
        case 0x2a072cu: goto label_2a072c;
        case 0x2a0730u: goto label_2a0730;
        case 0x2a0734u: goto label_2a0734;
        case 0x2a0738u: goto label_2a0738;
        case 0x2a073cu: goto label_2a073c;
        case 0x2a0740u: goto label_2a0740;
        case 0x2a0744u: goto label_2a0744;
        case 0x2a0748u: goto label_2a0748;
        case 0x2a074cu: goto label_2a074c;
        case 0x2a0750u: goto label_2a0750;
        case 0x2a0754u: goto label_2a0754;
        case 0x2a0758u: goto label_2a0758;
        case 0x2a075cu: goto label_2a075c;
        case 0x2a0760u: goto label_2a0760;
        case 0x2a0764u: goto label_2a0764;
        case 0x2a0768u: goto label_2a0768;
        case 0x2a076cu: goto label_2a076c;
        case 0x2a0770u: goto label_2a0770;
        case 0x2a0774u: goto label_2a0774;
        case 0x2a0778u: goto label_2a0778;
        case 0x2a077cu: goto label_2a077c;
        case 0x2a0780u: goto label_2a0780;
        case 0x2a0784u: goto label_2a0784;
        case 0x2a0788u: goto label_2a0788;
        case 0x2a078cu: goto label_2a078c;
        case 0x2a0790u: goto label_2a0790;
        case 0x2a0794u: goto label_2a0794;
        case 0x2a0798u: goto label_2a0798;
        case 0x2a079cu: goto label_2a079c;
        case 0x2a07a0u: goto label_2a07a0;
        case 0x2a07a4u: goto label_2a07a4;
        case 0x2a07a8u: goto label_2a07a8;
        case 0x2a07acu: goto label_2a07ac;
        case 0x2a07b0u: goto label_2a07b0;
        case 0x2a07b4u: goto label_2a07b4;
        case 0x2a07b8u: goto label_2a07b8;
        case 0x2a07bcu: goto label_2a07bc;
        case 0x2a07c0u: goto label_2a07c0;
        case 0x2a07c4u: goto label_2a07c4;
        case 0x2a07c8u: goto label_2a07c8;
        case 0x2a07ccu: goto label_2a07cc;
        case 0x2a07d0u: goto label_2a07d0;
        case 0x2a07d4u: goto label_2a07d4;
        case 0x2a07d8u: goto label_2a07d8;
        case 0x2a07dcu: goto label_2a07dc;
        case 0x2a07e0u: goto label_2a07e0;
        case 0x2a07e4u: goto label_2a07e4;
        case 0x2a07e8u: goto label_2a07e8;
        case 0x2a07ecu: goto label_2a07ec;
        case 0x2a07f0u: goto label_2a07f0;
        case 0x2a07f4u: goto label_2a07f4;
        case 0x2a07f8u: goto label_2a07f8;
        case 0x2a07fcu: goto label_2a07fc;
        case 0x2a0800u: goto label_2a0800;
        case 0x2a0804u: goto label_2a0804;
        case 0x2a0808u: goto label_2a0808;
        case 0x2a080cu: goto label_2a080c;
        case 0x2a0810u: goto label_2a0810;
        case 0x2a0814u: goto label_2a0814;
        case 0x2a0818u: goto label_2a0818;
        case 0x2a081cu: goto label_2a081c;
        case 0x2a0820u: goto label_2a0820;
        case 0x2a0824u: goto label_2a0824;
        case 0x2a0828u: goto label_2a0828;
        case 0x2a082cu: goto label_2a082c;
        default: break;
    }

    ctx->pc = 0x2a0340u;

label_2a0340:
    // 0x2a0340: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a0340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2a0344:
    // 0x2a0344: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a0344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2a0348:
    // 0x2a0348: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a0348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2a034c:
    // 0x2a034c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a034cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2a0350:
    // 0x2a0350: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a0350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a0354:
    // 0x2a0354: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a0354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a0358:
    // 0x2a0358: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x2a0358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_2a035c:
    // 0x2a035c: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
label_2a0360:
    if (ctx->pc == 0x2A0360u) {
        ctx->pc = 0x2A0360u;
            // 0x2a0360: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A0364u;
        goto label_2a0364;
    }
    ctx->pc = 0x2A035Cu;
    {
        const bool branch_taken_0x2a035c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2A0360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A035Cu;
            // 0x2a0360: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a035c) {
            ctx->pc = 0x2A0370u;
            goto label_2a0370;
        }
    }
    ctx->pc = 0x2A0364u;
label_2a0364:
    // 0x2a0364: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x2a0364u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_2a0368:
    // 0x2a0368: 0x10000027  b           . + 4 + (0x27 << 2)
label_2a036c:
    if (ctx->pc == 0x2A036Cu) {
        ctx->pc = 0x2A036Cu;
            // 0x2a036c: 0xae400014  sw          $zero, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
        ctx->pc = 0x2A0370u;
        goto label_2a0370;
    }
    ctx->pc = 0x2A0368u;
    {
        const bool branch_taken_0x2a0368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A036Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0368u;
            // 0x2a036c: 0xae400014  sw          $zero, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0368) {
            ctx->pc = 0x2A0408u;
            goto label_2a0408;
        }
    }
    ctx->pc = 0x2A0370u;
label_2a0370:
    // 0x2a0370: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x2a0370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2a0374:
    // 0x2a0374: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x2a0374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2a0378:
    // 0x2a0378: 0x858823  subu        $s1, $a0, $a1
    ctx->pc = 0x2a0378u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2a037c:
    // 0x2a037c: 0x71082a  slt         $at, $v1, $s1
    ctx->pc = 0x2a037cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2a0380:
    // 0x2a0380: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_2a0384:
    if (ctx->pc == 0x2A0384u) {
        ctx->pc = 0x2A0388u;
        goto label_2a0388;
    }
    ctx->pc = 0x2A0380u;
    {
        const bool branch_taken_0x2a0380 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0380) {
            ctx->pc = 0x2A03A0u;
            goto label_2a03a0;
        }
    }
    ctx->pc = 0x2A0388u;
label_2a0388:
    // 0x2a0388: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x2a0388u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_2a038c:
    // 0x2a038c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a038cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a0390:
    // 0x2a0390: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x2a0390u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_2a0394:
    // 0x2a0394: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x2a0394u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
label_2a0398:
    // 0x2a0398: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2a039c:
    if (ctx->pc == 0x2A039Cu) {
        ctx->pc = 0x2A039Cu;
            // 0x2a039c: 0xae430020  sw          $v1, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
        ctx->pc = 0x2A03A0u;
        goto label_2a03a0;
    }
    ctx->pc = 0x2A0398u;
    {
        const bool branch_taken_0x2a0398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A039Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0398u;
            // 0x2a039c: 0xae430020  sw          $v1, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0398) {
            ctx->pc = 0x2A0408u;
            goto label_2a0408;
        }
    }
    ctx->pc = 0x2A03A0u;
label_2a03a0:
    // 0x2a03a0: 0x58a0001a  blezl       $a1, . + 4 + (0x1A << 2)
label_2a03a4:
    if (ctx->pc == 0x2A03A4u) {
        ctx->pc = 0x2A03A4u;
            // 0x2a03a4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x2A03A8u;
        goto label_2a03a8;
    }
    ctx->pc = 0x2A03A0u;
    {
        const bool branch_taken_0x2a03a0 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x2a03a0) {
            ctx->pc = 0x2A03A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A03A0u;
            // 0x2a03a4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A040Cu;
            goto label_2a040c;
        }
    }
    ctx->pc = 0x2A03A8u;
label_2a03a8:
    // 0x2a03a8: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
label_2a03ac:
    if (ctx->pc == 0x2A03ACu) {
        ctx->pc = 0x2A03ACu;
            // 0x2a03ac: 0x323001ff  andi        $s0, $s1, 0x1FF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)511);
        ctx->pc = 0x2A03B0u;
        goto label_2a03b0;
    }
    ctx->pc = 0x2A03A8u;
    {
        const bool branch_taken_0x2a03a8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2A03ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A03A8u;
            // 0x2a03ac: 0x323001ff  andi        $s0, $s1, 0x1FF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)511);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a03a8) {
            ctx->pc = 0x2A03BCu;
            goto label_2a03bc;
        }
    }
    ctx->pc = 0x2A03B0u;
label_2a03b0:
    // 0x2a03b0: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
label_2a03b4:
    if (ctx->pc == 0x2A03B4u) {
        ctx->pc = 0x2A03B8u;
        goto label_2a03b8;
    }
    ctx->pc = 0x2A03B0u;
    {
        const bool branch_taken_0x2a03b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a03b0) {
            ctx->pc = 0x2A03BCu;
            goto label_2a03bc;
        }
    }
    ctx->pc = 0x2A03B8u;
label_2a03b8:
    // 0x2a03b8: 0x2610fe00  addiu       $s0, $s0, -0x200
    ctx->pc = 0x2a03b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966784));
label_2a03bc:
    // 0x2a03bc: 0x52000003  beql        $s0, $zero, . + 4 + (0x3 << 2)
label_2a03c0:
    if (ctx->pc == 0x2A03C0u) {
        ctx->pc = 0x2A03C0u;
            // 0x2a03c0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A03C4u;
        goto label_2a03c4;
    }
    ctx->pc = 0x2A03BCu;
    {
        const bool branch_taken_0x2a03bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a03bc) {
            ctx->pc = 0x2A03C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A03BCu;
            // 0x2a03c0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A03CCu;
            goto label_2a03cc;
        }
    }
    ctx->pc = 0x2A03C4u;
label_2a03c4:
    // 0x2a03c4: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x2a03c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_2a03c8:
    // 0x2a03c8: 0x509823  subu        $s3, $v0, $s0
    ctx->pc = 0x2a03c8u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2a03cc:
    // 0x2a03cc: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2a03ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2a03d0:
    // 0x2a03d0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a03d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a03d4:
    // 0x2a03d4: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x2a03d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2a03d8:
    // 0x2a03d8: 0xc0a8450  jal         func_2A1140
label_2a03dc:
    if (ctx->pc == 0x2A03DCu) {
        ctx->pc = 0x2A03DCu;
            // 0x2a03dc: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->pc = 0x2A03E0u;
        goto label_2a03e0;
    }
    ctx->pc = 0x2A03D8u;
    SET_GPR_U32(ctx, 31, 0x2A03E0u);
    ctx->pc = 0x2A03DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A03D8u;
            // 0x2a03dc: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1140u;
    if (runtime->hasFunction(0x2A1140u)) {
        auto targetFn = runtime->lookupFunction(0x2A1140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A03E0u; }
        if (ctx->pc != 0x2A03E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1140_0x2a1140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A03E0u; }
        if (ctx->pc != 0x2A03E0u) { return; }
    }
    ctx->pc = 0x2A03E0u;
label_2a03e0:
    // 0x2a03e0: 0xae53001c  sw          $s3, 0x1C($s2)
    ctx->pc = 0x2a03e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 19));
label_2a03e4:
    // 0x2a03e4: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
label_2a03e8:
    if (ctx->pc == 0x2A03E8u) {
        ctx->pc = 0x2A03E8u;
            // 0x2a03e8: 0x112243  sra         $a0, $s1, 9 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 17), 9));
        ctx->pc = 0x2A03ECu;
        goto label_2a03ec;
    }
    ctx->pc = 0x2A03E4u;
    {
        const bool branch_taken_0x2a03e4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2A03E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A03E4u;
            // 0x2a03e8: 0x112243  sra         $a0, $s1, 9 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 17), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a03e4) {
            ctx->pc = 0x2A03F4u;
            goto label_2a03f4;
        }
    }
    ctx->pc = 0x2A03ECu;
label_2a03ec:
    // 0x2a03ec: 0x262301ff  addiu       $v1, $s1, 0x1FF
    ctx->pc = 0x2a03ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 511));
label_2a03f0:
    // 0x2a03f0: 0x32243  sra         $a0, $v1, 9
    ctx->pc = 0x2a03f0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 9));
label_2a03f4:
    // 0x2a03f4: 0x10182b  sltu        $v1, $zero, $s0
    ctx->pc = 0x2a03f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2a03f8:
    // 0x2a03f8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2a03f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2a03fc:
    // 0x2a03fc: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x2a03fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
label_2a0400:
    // 0x2a0400: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x2a0400u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
label_2a0404:
    // 0x2a0404: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x2a0404u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
label_2a0408:
    // 0x2a0408: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a0408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2a040c:
    // 0x2a040c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a040cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a0410:
    // 0x2a0410: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a0410u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a0414:
    // 0x2a0414: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a0414u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a0418:
    // 0x2a0418: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a0418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a041c:
    // 0x2a041c: 0x3e00008  jr          $ra
label_2a0420:
    if (ctx->pc == 0x2A0420u) {
        ctx->pc = 0x2A0420u;
            // 0x2a0420: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2A0424u;
        goto label_2a0424;
    }
    ctx->pc = 0x2A041Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A041Cu;
            // 0x2a0420: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A0424u;
label_2a0424:
    // 0x2a0424: 0x0  nop
    ctx->pc = 0x2a0424u;
    // NOP
label_2a0428:
    // 0x2a0428: 0x0  nop
    ctx->pc = 0x2a0428u;
    // NOP
label_2a042c:
    // 0x2a042c: 0x0  nop
    ctx->pc = 0x2a042cu;
    // NOP
label_2a0430:
    // 0x2a0430: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a0430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2a0434:
    // 0x2a0434: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a0434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2a0438:
    // 0x2a0438: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a0438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2a043c:
    // 0x2a043c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a043cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a0440:
    // 0x2a0440: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a0440u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a0444:
    // 0x2a0444: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a0444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a0448:
    // 0x2a0448: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x2a0448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2a044c:
    // 0x2a044c: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x2a044cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a0450:
    // 0x2a0450: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2a0450u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2a0454:
    // 0x2a0454: 0x320f809  jalr        $t9
label_2a0458:
    if (ctx->pc == 0x2A0458u) {
        ctx->pc = 0x2A0458u;
            // 0x2a0458: 0x27a4004c  addiu       $a0, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->pc = 0x2A045Cu;
        goto label_2a045c;
    }
    ctx->pc = 0x2A0454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A045Cu);
        ctx->pc = 0x2A0458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0454u;
            // 0x2a0458: 0x27a4004c  addiu       $a0, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A045Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A045Cu; }
            if (ctx->pc != 0x2A045Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2A045Cu;
label_2a045c:
    // 0x2a045c: 0x27a2004c  addiu       $v0, $sp, 0x4C
    ctx->pc = 0x2a045cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_2a0460:
    // 0x2a0460: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2a0460u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2a0464:
    // 0x2a0464: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x2a0464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_2a0468:
    // 0x2a0468: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2a0468u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2a046c:
    // 0x2a046c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_2a0470:
    if (ctx->pc == 0x2A0470u) {
        ctx->pc = 0x2A0470u;
            // 0x2a0470: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A0474u;
        goto label_2a0474;
    }
    ctx->pc = 0x2A046Cu;
    {
        const bool branch_taken_0x2a046c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a046c) {
            ctx->pc = 0x2A0470u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A046Cu;
            // 0x2a0470: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A047Cu;
            goto label_2a047c;
        }
    }
    ctx->pc = 0x2A0474u;
label_2a0474:
    // 0x2a0474: 0x1000001f  b           . + 4 + (0x1F << 2)
label_2a0478:
    if (ctx->pc == 0x2A0478u) {
        ctx->pc = 0x2A0478u;
            // 0x2a0478: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2A047Cu;
        goto label_2a047c;
    }
    ctx->pc = 0x2A0474u;
    {
        const bool branch_taken_0x2a0474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0474u;
            // 0x2a0478: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0474) {
            ctx->pc = 0x2A04F4u;
            goto label_2a04f4;
        }
    }
    ctx->pc = 0x2A047Cu;
label_2a047c:
    // 0x2a047c: 0xc0a80d0  jal         func_2A0340
label_2a0480:
    if (ctx->pc == 0x2A0480u) {
        ctx->pc = 0x2A0484u;
        goto label_2a0484;
    }
    ctx->pc = 0x2A047Cu;
    SET_GPR_U32(ctx, 31, 0x2A0484u);
    ctx->pc = 0x2A0340u;
    goto label_2a0340;
    ctx->pc = 0x2A0484u;
label_2a0484:
    // 0x2a0484: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x2a0484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_2a0488:
    // 0x2a0488: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x2a0488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2a048c:
    // 0x2a048c: 0x628823  subu        $s1, $v1, $v0
    ctx->pc = 0x2a048cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a0490:
    // 0x2a0490: 0x1a200017  blez        $s1, . + 4 + (0x17 << 2)
label_2a0494:
    if (ctx->pc == 0x2A0494u) {
        ctx->pc = 0x2A0494u;
            // 0x2a0494: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A0498u;
        goto label_2a0498;
    }
    ctx->pc = 0x2A0490u;
    {
        const bool branch_taken_0x2a0490 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2A0494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0490u;
            // 0x2a0494: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0490) {
            ctx->pc = 0x2A04F0u;
            goto label_2a04f0;
        }
    }
    ctx->pc = 0x2A0498u;
label_2a0498:
    // 0x2a0498: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x2a0498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2a049c:
    // 0x2a049c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a049cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a04a0:
    // 0x2a04a0: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x2a04a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2a04a4:
    // 0x2a04a4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2a04a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2a04a8:
    // 0x2a04a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a04a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a04ac:
    // 0x2a04ac: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2a04acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2a04b0:
    // 0x2a04b0: 0x320f809  jalr        $t9
label_2a04b4:
    if (ctx->pc == 0x2A04B4u) {
        ctx->pc = 0x2A04B4u;
            // 0x2a04b4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x2A04B8u;
        goto label_2a04b8;
    }
    ctx->pc = 0x2A04B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A04B8u);
        ctx->pc = 0x2A04B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A04B0u;
            // 0x2a04b4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A04B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A04B8u; }
            if (ctx->pc != 0x2A04B8u) { return; }
        }
        }
    }
    ctx->pc = 0x2A04B8u;
label_2a04b8:
    // 0x2a04b8: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x2a04b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2a04bc:
    // 0x2a04bc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2a04bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2a04c0:
    // 0x2a04c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a04c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a04c4:
    // 0x2a04c4: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
label_2a04c8:
    if (ctx->pc == 0x2A04C8u) {
        ctx->pc = 0x2A04C8u;
            // 0x2a04c8: 0xae430014  sw          $v1, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
        ctx->pc = 0x2A04CCu;
        goto label_2a04cc;
    }
    ctx->pc = 0x2A04C4u;
    {
        const bool branch_taken_0x2a04c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2A04C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A04C4u;
            // 0x2a04c8: 0xae430014  sw          $v1, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a04c4) {
            ctx->pc = 0x2A04E0u;
            goto label_2a04e0;
        }
    }
    ctx->pc = 0x2A04CCu;
label_2a04cc:
    // 0x2a04cc: 0x52000002  beql        $s0, $zero, . + 4 + (0x2 << 2)
label_2a04d0:
    if (ctx->pc == 0x2A04D0u) {
        ctx->pc = 0x2A04D0u;
            // 0x2a04d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2A04D4u;
        goto label_2a04d4;
    }
    ctx->pc = 0x2A04CCu;
    {
        const bool branch_taken_0x2a04cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a04cc) {
            ctx->pc = 0x2A04D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A04CCu;
            // 0x2a04d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A04D8u;
            goto label_2a04d8;
        }
    }
    ctx->pc = 0x2A04D4u;
label_2a04d4:
    // 0x2a04d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a04d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a04d8:
    // 0x2a04d8: 0x10000007  b           . + 4 + (0x7 << 2)
label_2a04dc:
    if (ctx->pc == 0x2A04DCu) {
        ctx->pc = 0x2A04DCu;
            // 0x2a04dc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x2A04E0u;
        goto label_2a04e0;
    }
    ctx->pc = 0x2A04D8u;
    {
        const bool branch_taken_0x2a04d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A04DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A04D8u;
            // 0x2a04dc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a04d8) {
            ctx->pc = 0x2A04F8u;
            goto label_2a04f8;
        }
    }
    ctx->pc = 0x2A04E0u;
label_2a04e0:
    // 0x2a04e0: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2a04e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2a04e4:
    // 0x2a04e4: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
label_2a04e8:
    if (ctx->pc == 0x2A04E8u) {
        ctx->pc = 0x2A04E8u;
            // 0x2a04e8: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->pc = 0x2A04ECu;
        goto label_2a04ec;
    }
    ctx->pc = 0x2A04E4u;
    {
        const bool branch_taken_0x2a04e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a04e4) {
            ctx->pc = 0x2A04E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A04E4u;
            // 0x2a04e8: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A049Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a049c;
        }
    }
    ctx->pc = 0x2A04ECu;
label_2a04ec:
    // 0x2a04ec: 0x0  nop
    ctx->pc = 0x2a04ecu;
    // NOP
label_2a04f0:
    // 0x2a04f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a04f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a04f4:
    // 0x2a04f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a04f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2a04f8:
    // 0x2a04f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a04f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a04fc:
    // 0x2a04fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a04fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a0500:
    // 0x2a0500: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a0500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a0504:
    // 0x2a0504: 0x3e00008  jr          $ra
label_2a0508:
    if (ctx->pc == 0x2A0508u) {
        ctx->pc = 0x2A0508u;
            // 0x2a0508: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2A050Cu;
        goto label_2a050c;
    }
    ctx->pc = 0x2A0504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0504u;
            // 0x2a0508: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A050Cu;
label_2a050c:
    // 0x2a050c: 0x0  nop
    ctx->pc = 0x2a050cu;
    // NOP
label_2a0510:
    // 0x2a0510: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a0510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2a0514:
    // 0x2a0514: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a0514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2a0518:
    // 0x2a0518: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a0518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2a051c:
    // 0x2a051c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a051cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2a0520:
    // 0x2a0520: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2a0520u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a0524:
    // 0x2a0524: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a0524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2a0528:
    // 0x2a0528: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2a0528u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a052c:
    // 0x2a052c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a052cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a0530:
    // 0x2a0530: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x2a0530u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a0534:
    // 0x2a0534: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a0534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a0538:
    // 0x2a0538: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2a0538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2a053c:
    // 0x2a053c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2a053cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2a0540:
    // 0x2a0540: 0x438823  subu        $s1, $v0, $v1
    ctx->pc = 0x2a0540u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a0544:
    // 0x2a0544: 0x233082a  slt         $at, $s1, $s3
    ctx->pc = 0x2a0544u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_2a0548:
    // 0x2a0548: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
label_2a054c:
    if (ctx->pc == 0x2A054Cu) {
        ctx->pc = 0x2A054Cu;
            // 0x2a054c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A0550u;
        goto label_2a0550;
    }
    ctx->pc = 0x2A0548u;
    {
        const bool branch_taken_0x2a0548 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A054Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0548u;
            // 0x2a054c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0548) {
            ctx->pc = 0x2A05B0u;
            goto label_2a05b0;
        }
    }
    ctx->pc = 0x2A0550u;
label_2a0550:
    // 0x2a0550: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x2a0550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_2a0554:
    // 0x2a0554: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a0558:
    // 0x2a0558: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a0558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a055c:
    // 0x2a055c: 0xc0a8448  jal         func_2A1120
label_2a0560:
    if (ctx->pc == 0x2A0560u) {
        ctx->pc = 0x2A0560u;
            // 0x2a0560: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2A0564u;
        goto label_2a0564;
    }
    ctx->pc = 0x2A055Cu;
    SET_GPR_U32(ctx, 31, 0x2A0564u);
    ctx->pc = 0x2A0560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A055Cu;
            // 0x2a0560: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1120u;
    if (runtime->hasFunction(0x2A1120u)) {
        auto targetFn = runtime->lookupFunction(0x2A1120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0564u; }
        if (ctx->pc != 0x2A0564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1120_0x2a1120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0564u; }
        if (ctx->pc != 0x2A0564u) { return; }
    }
    ctx->pc = 0x2A0564u;
label_2a0564:
    // 0x2a0564: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x2a0564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_2a0568:
    // 0x2a0568: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a0568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a056c:
    // 0x2a056c: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x2a056cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_2a0570:
    // 0x2a0570: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2a0570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2a0574:
    // 0x2a0574: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x2a0574u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
label_2a0578:
    // 0x2a0578: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x2a0578u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2a057c:
    // 0x2a057c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x2a057cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_2a0580:
    // 0x2a0580: 0x320f809  jalr        $t9
label_2a0584:
    if (ctx->pc == 0x2A0584u) {
        ctx->pc = 0x2A0584u;
            // 0x2a0584: 0x2519023  subu        $s2, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->pc = 0x2A0588u;
        goto label_2a0588;
    }
    ctx->pc = 0x2A0580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A0588u);
        ctx->pc = 0x2A0584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0580u;
            // 0x2a0584: 0x2519023  subu        $s2, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A0588u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A0588u; }
            if (ctx->pc != 0x2A0588u) { return; }
        }
        }
    }
    ctx->pc = 0x2A0588u;
label_2a0588:
    // 0x2a0588: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_2a058c:
    if (ctx->pc == 0x2A058Cu) {
        ctx->pc = 0x2A058Cu;
            // 0x2a058c: 0x8e830010  lw          $v1, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->pc = 0x2A0590u;
        goto label_2a0590;
    }
    ctx->pc = 0x2A0588u;
    {
        const bool branch_taken_0x2a0588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0588) {
            ctx->pc = 0x2A058Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0588u;
            // 0x2a058c: 0x8e830010  lw          $v1, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A0598u;
            goto label_2a0598;
        }
    }
    ctx->pc = 0x2A0590u;
label_2a0590:
    // 0x2a0590: 0x10000010  b           . + 4 + (0x10 << 2)
label_2a0594:
    if (ctx->pc == 0x2A0594u) {
        ctx->pc = 0x2A0594u;
            // 0x2a0594: 0x2721023  subu        $v0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->pc = 0x2A0598u;
        goto label_2a0598;
    }
    ctx->pc = 0x2A0590u;
    {
        const bool branch_taken_0x2a0590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0590u;
            // 0x2a0594: 0x2721023  subu        $v0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0590) {
            ctx->pc = 0x2A05D4u;
            goto label_2a05d4;
        }
    }
    ctx->pc = 0x2A0598u;
label_2a0598:
    // 0x2a0598: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x2a0598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_2a059c:
    // 0x2a059c: 0x438823  subu        $s1, $v0, $v1
    ctx->pc = 0x2a059cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a05a0:
    // 0x2a05a0: 0x232082a  slt         $at, $s1, $s2
    ctx->pc = 0x2a05a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_2a05a4:
    // 0x2a05a4: 0x5420ffeb  bnel        $at, $zero, . + 4 + (-0x15 << 2)
label_2a05a8:
    if (ctx->pc == 0x2A05A8u) {
        ctx->pc = 0x2A05A8u;
            // 0x2a05a8: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->pc = 0x2A05ACu;
        goto label_2a05ac;
    }
    ctx->pc = 0x2A05A4u;
    {
        const bool branch_taken_0x2a05a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a05a4) {
            ctx->pc = 0x2A05A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A05A4u;
            // 0x2a05a8: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A0554u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a0554;
        }
    }
    ctx->pc = 0x2A05ACu;
label_2a05ac:
    // 0x2a05ac: 0x0  nop
    ctx->pc = 0x2a05acu;
    // NOP
label_2a05b0:
    // 0x2a05b0: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x2a05b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_2a05b4:
    // 0x2a05b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a05b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a05b8:
    // 0x2a05b8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a05b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a05bc:
    // 0x2a05bc: 0xc0a8448  jal         func_2A1120
label_2a05c0:
    if (ctx->pc == 0x2A05C0u) {
        ctx->pc = 0x2A05C0u;
            // 0x2a05c0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2A05C4u;
        goto label_2a05c4;
    }
    ctx->pc = 0x2A05BCu;
    SET_GPR_U32(ctx, 31, 0x2A05C4u);
    ctx->pc = 0x2A05C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A05BCu;
            // 0x2a05c0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1120u;
    if (runtime->hasFunction(0x2A1120u)) {
        auto targetFn = runtime->lookupFunction(0x2A1120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A05C4u; }
        if (ctx->pc != 0x2A05C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1120_0x2a1120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A05C4u; }
        if (ctx->pc != 0x2A05C4u) { return; }
    }
    ctx->pc = 0x2A05C4u;
label_2a05c4:
    // 0x2a05c4: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x2a05c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_2a05c8:
    // 0x2a05c8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2a05c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a05cc:
    // 0x2a05cc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2a05ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_2a05d0:
    // 0x2a05d0: 0xae830010  sw          $v1, 0x10($s4)
    ctx->pc = 0x2a05d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 3));
label_2a05d4:
    // 0x2a05d4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a05d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2a05d8:
    // 0x2a05d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a05d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2a05dc:
    // 0x2a05dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a05dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a05e0:
    // 0x2a05e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a05e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a05e4:
    // 0x2a05e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a05e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a05e8:
    // 0x2a05e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a05e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a05ec:
    // 0x2a05ec: 0x3e00008  jr          $ra
label_2a05f0:
    if (ctx->pc == 0x2A05F0u) {
        ctx->pc = 0x2A05F0u;
            // 0x2a05f0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2A05F4u;
        goto label_2a05f4;
    }
    ctx->pc = 0x2A05ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A05F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A05ECu;
            // 0x2a05f0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A05F4u;
label_2a05f4:
    // 0x2a05f4: 0x0  nop
    ctx->pc = 0x2a05f4u;
    // NOP
label_2a05f8:
    // 0x2a05f8: 0x0  nop
    ctx->pc = 0x2a05f8u;
    // NOP
label_2a05fc:
    // 0x2a05fc: 0x0  nop
    ctx->pc = 0x2a05fcu;
    // NOP
label_2a0600:
    // 0x2a0600: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a0600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2a0604:
    // 0x2a0604: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a0604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2a0608:
    // 0x2a0608: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a0608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2a060c:
    // 0x2a060c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a060cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a0610:
    // 0x2a0610: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a0610u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a0614:
    // 0x2a0614: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a0614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a0618:
    // 0x2a0618: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a0618u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a061c:
    // 0x2a061c: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2a061cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2a0620:
    // 0x2a0620: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2a0620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2a0624:
    // 0x2a0624: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2a0624u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a0628:
    // 0x2a0628: 0x51082a  slt         $at, $v0, $s1
    ctx->pc = 0x2a0628u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2a062c:
    // 0x2a062c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_2a0630:
    if (ctx->pc == 0x2A0630u) {
        ctx->pc = 0x2A0630u;
            // 0x2a0630: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A0634u;
        goto label_2a0634;
    }
    ctx->pc = 0x2A062Cu;
    {
        const bool branch_taken_0x2a062c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A062Cu;
            // 0x2a0630: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a062c) {
            ctx->pc = 0x2A0670u;
            goto label_2a0670;
        }
    }
    ctx->pc = 0x2A0634u;
label_2a0634:
    // 0x2a0634: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2a0634u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a0638:
    // 0x2a0638: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x2a0638u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2a063c:
    // 0x2a063c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x2a063cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_2a0640:
    // 0x2a0640: 0x320f809  jalr        $t9
label_2a0644:
    if (ctx->pc == 0x2A0644u) {
        ctx->pc = 0x2A0644u;
            // 0x2a0644: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A0648u;
        goto label_2a0648;
    }
    ctx->pc = 0x2A0640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A0648u);
        ctx->pc = 0x2A0644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0640u;
            // 0x2a0644: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A0648u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A0648u; }
            if (ctx->pc != 0x2A0648u) { return; }
        }
        }
    }
    ctx->pc = 0x2A0648u;
label_2a0648:
    // 0x2a0648: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_2a064c:
    if (ctx->pc == 0x2A064Cu) {
        ctx->pc = 0x2A064Cu;
            // 0x2a064c: 0x8e430014  lw          $v1, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->pc = 0x2A0650u;
        goto label_2a0650;
    }
    ctx->pc = 0x2A0648u;
    {
        const bool branch_taken_0x2a0648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0648) {
            ctx->pc = 0x2A064Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0648u;
            // 0x2a064c: 0x8e430014  lw          $v1, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A0658u;
            goto label_2a0658;
        }
    }
    ctx->pc = 0x2A0650u;
label_2a0650:
    // 0x2a0650: 0x1000000b  b           . + 4 + (0xB << 2)
label_2a0654:
    if (ctx->pc == 0x2A0654u) {
        ctx->pc = 0x2A0654u;
            // 0x2a0654: 0x2301023  subu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->pc = 0x2A0658u;
        goto label_2a0658;
    }
    ctx->pc = 0x2A0650u;
    {
        const bool branch_taken_0x2a0650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0650u;
            // 0x2a0654: 0x2301023  subu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0650) {
            ctx->pc = 0x2A0680u;
            goto label_2a0680;
        }
    }
    ctx->pc = 0x2A0658u;
label_2a0658:
    // 0x2a0658: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2a0658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2a065c:
    // 0x2a065c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2a065cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a0660:
    // 0x2a0660: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x2a0660u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2a0664:
    // 0x2a0664: 0x5420fff4  bnel        $at, $zero, . + 4 + (-0xC << 2)
label_2a0668:
    if (ctx->pc == 0x2A0668u) {
        ctx->pc = 0x2A0668u;
            // 0x2a0668: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x2A066Cu;
        goto label_2a066c;
    }
    ctx->pc = 0x2A0664u;
    {
        const bool branch_taken_0x2a0664 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0664) {
            ctx->pc = 0x2A0668u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0664u;
            // 0x2a0668: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A0638u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a0638;
        }
    }
    ctx->pc = 0x2A066Cu;
label_2a066c:
    // 0x2a066c: 0x0  nop
    ctx->pc = 0x2a066cu;
    // NOP
label_2a0670:
    // 0x2a0670: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x2a0670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2a0674:
    // 0x2a0674: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a0674u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a0678:
    // 0x2a0678: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2a0678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2a067c:
    // 0x2a067c: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x2a067cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
label_2a0680:
    // 0x2a0680: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a0680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2a0684:
    // 0x2a0684: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a0684u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a0688:
    // 0x2a0688: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a0688u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a068c:
    // 0x2a068c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a068cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a0690:
    // 0x2a0690: 0x3e00008  jr          $ra
label_2a0694:
    if (ctx->pc == 0x2A0694u) {
        ctx->pc = 0x2A0694u;
            // 0x2a0694: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2A0698u;
        goto label_2a0698;
    }
    ctx->pc = 0x2A0690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0690u;
            // 0x2a0694: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A0698u;
label_2a0698:
    // 0x2a0698: 0x0  nop
    ctx->pc = 0x2a0698u;
    // NOP
label_2a069c:
    // 0x2a069c: 0x0  nop
    ctx->pc = 0x2a069cu;
    // NOP
label_2a06a0:
    // 0x2a06a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a06a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2a06a4:
    // 0x2a06a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a06a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2a06a8:
    // 0x2a06a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a06a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a06ac:
    // 0x2a06ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a06acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a06b0:
    // 0x2a06b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a06b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a06b4:
    // 0x2a06b4: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x2a06b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_2a06b8:
    // 0x2a06b8: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x2a06b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_2a06bc:
    // 0x2a06bc: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
label_2a06c0:
    if (ctx->pc == 0x2A06C0u) {
        ctx->pc = 0x2A06C0u;
            // 0x2a06c0: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x2A06C4u;
        goto label_2a06c4;
    }
    ctx->pc = 0x2A06BCu;
    {
        const bool branch_taken_0x2a06bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A06C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A06BCu;
            // 0x2a06c0: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a06bc) {
            ctx->pc = 0x2A06ECu;
            goto label_2a06ec;
        }
    }
    ctx->pc = 0x2A06C4u;
label_2a06c4:
    // 0x2a06c4: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x2a06c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2a06c8:
    // 0x2a06c8: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x2a06c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a06cc:
    // 0x2a06cc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2a06ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2a06d0:
    // 0x2a06d0: 0x320f809  jalr        $t9
label_2a06d4:
    if (ctx->pc == 0x2A06D4u) {
        ctx->pc = 0x2A06D4u;
            // 0x2a06d4: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->pc = 0x2A06D8u;
        goto label_2a06d8;
    }
    ctx->pc = 0x2A06D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A06D8u);
        ctx->pc = 0x2A06D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A06D0u;
            // 0x2a06d4: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A06D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A06D8u; }
            if (ctx->pc != 0x2A06D8u) { return; }
        }
        }
    }
    ctx->pc = 0x2A06D8u;
label_2a06d8:
    // 0x2a06d8: 0x27a3003c  addiu       $v1, $sp, 0x3C
    ctx->pc = 0x2a06d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_2a06dc:
    // 0x2a06dc: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x2a06dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2a06e0:
    // 0x2a06e0: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
label_2a06e4:
    if (ctx->pc == 0x2A06E4u) {
        ctx->pc = 0x2A06E4u;
            // 0x2a06e4: 0xa2300000  sb          $s0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 16));
        ctx->pc = 0x2A06E8u;
        goto label_2a06e8;
    }
    ctx->pc = 0x2A06E0u;
    {
        const bool branch_taken_0x2a06e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a06e0) {
            ctx->pc = 0x2A06E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A06E0u;
            // 0x2a06e4: 0xa2300000  sb          $s0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A06F0u;
            goto label_2a06f0;
        }
    }
    ctx->pc = 0x2A06E8u;
label_2a06e8:
    // 0x2a06e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a06e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a06ec:
    // 0x2a06ec: 0xa2300000  sb          $s0, 0x0($s1)
    ctx->pc = 0x2a06ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 16));
label_2a06f0:
    // 0x2a06f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a06f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a06f4:
    // 0x2a06f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a06f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a06f8:
    // 0x2a06f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a06f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a06fc:
    // 0x2a06fc: 0x3e00008  jr          $ra
label_2a0700:
    if (ctx->pc == 0x2A0700u) {
        ctx->pc = 0x2A0700u;
            // 0x2a0700: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2A0704u;
        goto label_2a0704;
    }
    ctx->pc = 0x2A06FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A06FCu;
            // 0x2a0700: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A0704u;
label_2a0704:
    // 0x2a0704: 0x0  nop
    ctx->pc = 0x2a0704u;
    // NOP
label_2a0708:
    // 0x2a0708: 0x0  nop
    ctx->pc = 0x2a0708u;
    // NOP
label_2a070c:
    // 0x2a070c: 0x0  nop
    ctx->pc = 0x2a070cu;
    // NOP
label_2a0710:
    // 0x2a0710: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x2a0710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_2a0714:
    // 0x2a0714: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2a0714u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2a0718:
    // 0x2a0718: 0x3e00008  jr          $ra
label_2a071c:
    if (ctx->pc == 0x2A071Cu) {
        ctx->pc = 0x2A071Cu;
            // 0x2a071c: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2A0720u;
        goto label_2a0720;
    }
    ctx->pc = 0x2A0718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A071Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0718u;
            // 0x2a071c: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A0720u;
label_2a0720:
    // 0x2a0720: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2a0720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2a0724:
    // 0x2a0724: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2a0724u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_2a0728:
    // 0x2a0728: 0xac850020  sw          $a1, 0x20($a0)
    ctx->pc = 0x2a0728u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
label_2a072c:
    // 0x2a072c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2a072cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_2a0730:
    // 0x2a0730: 0x45082a  slt         $at, $v0, $a1
    ctx->pc = 0x2a0730u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2a0734:
    // 0x2a0734: 0x54200002  bnel        $at, $zero, . + 4 + (0x2 << 2)
label_2a0738:
    if (ctx->pc == 0x2A0738u) {
        ctx->pc = 0x2A0738u;
            // 0x2a0738: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2A073Cu;
        goto label_2a073c;
    }
    ctx->pc = 0x2A0734u;
    {
        const bool branch_taken_0x2a0734 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0734) {
            ctx->pc = 0x2A0738u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0734u;
            // 0x2a0738: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A0740u;
            goto label_2a0740;
        }
    }
    ctx->pc = 0x2A073Cu;
label_2a073c:
    // 0x2a073c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a073cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a0740:
    // 0x2a0740: 0x3e00008  jr          $ra
label_2a0744:
    if (ctx->pc == 0x2A0744u) {
        ctx->pc = 0x2A0748u;
        goto label_2a0748;
    }
    ctx->pc = 0x2A0740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A0748u;
label_2a0748:
    // 0x2a0748: 0x0  nop
    ctx->pc = 0x2a0748u;
    // NOP
label_2a074c:
    // 0x2a074c: 0x0  nop
    ctx->pc = 0x2a074cu;
    // NOP
label_2a0750:
    // 0x2a0750: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x2a0750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_2a0754:
    // 0x2a0754: 0x4420003  bltzl       $v0, . + 4 + (0x3 << 2)
label_2a0758:
    if (ctx->pc == 0x2A0758u) {
        ctx->pc = 0x2A0758u;
            // 0x2a0758: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2A075Cu;
        goto label_2a075c;
    }
    ctx->pc = 0x2A0754u;
    {
        const bool branch_taken_0x2a0754 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2a0754) {
            ctx->pc = 0x2A0758u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0754u;
            // 0x2a0758: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A0764u;
            goto label_2a0764;
        }
    }
    ctx->pc = 0x2A075Cu;
label_2a075c:
    // 0x2a075c: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x2a075cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_2a0760:
    // 0x2a0760: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a0760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a0764:
    // 0x2a0764: 0x3e00008  jr          $ra
label_2a0768:
    if (ctx->pc == 0x2A0768u) {
        ctx->pc = 0x2A076Cu;
        goto label_2a076c;
    }
    ctx->pc = 0x2A0764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A076Cu;
label_2a076c:
    // 0x2a076c: 0x0  nop
    ctx->pc = 0x2a076cu;
    // NOP
label_2a0770:
    // 0x2a0770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a0770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a0774:
    // 0x2a0774: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a0774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a0778:
    // 0x2a0778: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x2a0778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2a077c:
    // 0x2a077c: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x2a077cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a0780:
    // 0x2a0780: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2a0780u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2a0784:
    // 0x2a0784: 0x320f809  jalr        $t9
label_2a0788:
    if (ctx->pc == 0x2A0788u) {
        ctx->pc = 0x2A078Cu;
        goto label_2a078c;
    }
    ctx->pc = 0x2A0784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A078Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A078Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A078Cu; }
            if (ctx->pc != 0x2A078Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2A078Cu;
label_2a078c:
    // 0x2a078c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a078cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a0790:
    // 0x2a0790: 0x3e00008  jr          $ra
label_2a0794:
    if (ctx->pc == 0x2A0794u) {
        ctx->pc = 0x2A0794u;
            // 0x2a0794: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2A0798u;
        goto label_2a0798;
    }
    ctx->pc = 0x2A0790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0790u;
            // 0x2a0794: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A0798u;
label_2a0798:
    // 0x2a0798: 0x0  nop
    ctx->pc = 0x2a0798u;
    // NOP
label_2a079c:
    // 0x2a079c: 0x0  nop
    ctx->pc = 0x2a079cu;
    // NOP
label_2a07a0:
    // 0x2a07a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a07a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a07a4:
    // 0x2a07a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a07a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a07a8:
    // 0x2a07a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a07a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a07ac:
    // 0x2a07ac: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2a07acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_2a07b0:
    // 0x2a07b0: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x2a07b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
label_2a07b4:
    // 0x2a07b4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2a07b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_2a07b8:
    // 0x2a07b8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2a07b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_2a07bc:
    // 0x2a07bc: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x2a07bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2a07c0:
    // 0x2a07c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a07c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a07c4:
    // 0x2a07c4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2a07c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2a07c8:
    // 0x2a07c8: 0x320f809  jalr        $t9
label_2a07cc:
    if (ctx->pc == 0x2A07CCu) {
        ctx->pc = 0x2A07D0u;
        goto label_2a07d0;
    }
    ctx->pc = 0x2A07C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A07D0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A07D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A07D0u; }
            if (ctx->pc != 0x2A07D0u) { return; }
        }
        }
    }
    ctx->pc = 0x2A07D0u;
label_2a07d0:
    // 0x2a07d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a07d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a07d4:
    // 0x2a07d4: 0x3e00008  jr          $ra
label_2a07d8:
    if (ctx->pc == 0x2A07D8u) {
        ctx->pc = 0x2A07D8u;
            // 0x2a07d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2A07DCu;
        goto label_2a07dc;
    }
    ctx->pc = 0x2A07D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A07D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A07D4u;
            // 0x2a07d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A07DCu;
label_2a07dc:
    // 0x2a07dc: 0x0  nop
    ctx->pc = 0x2a07dcu;
    // NOP
label_2a07e0:
    // 0x2a07e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a07e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2a07e4:
    // 0x2a07e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a07e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2a07e8:
    // 0x2a07e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a07e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a07ec:
    // 0x2a07ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a07ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a07f0:
    // 0x2a07f0: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x2a07f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2a07f4:
    // 0x2a07f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a07f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a07f8:
    // 0x2a07f8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2a07f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2a07fc:
    // 0x2a07fc: 0x320f809  jalr        $t9
label_2a0800:
    if (ctx->pc == 0x2A0800u) {
        ctx->pc = 0x2A0804u;
        goto label_2a0804;
    }
    ctx->pc = 0x2A07FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A0804u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A0804u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A0804u; }
            if (ctx->pc != 0x2A0804u) { return; }
        }
        }
    }
    ctx->pc = 0x2A0804u;
label_2a0804:
    // 0x2a0804: 0x4420005  bltzl       $v0, . + 4 + (0x5 << 2)
label_2a0808:
    if (ctx->pc == 0x2A0808u) {
        ctx->pc = 0x2A0808u;
            // 0x2a0808: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2A080Cu;
        goto label_2a080c;
    }
    ctx->pc = 0x2A0804u;
    {
        const bool branch_taken_0x2a0804 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2a0804) {
            ctx->pc = 0x2A0808u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0804u;
            // 0x2a0808: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A081Cu;
            goto label_2a081c;
        }
    }
    ctx->pc = 0x2A080Cu;
label_2a080c:
    // 0x2a080c: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2a080cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2a0810:
    // 0x2a0810: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2a0810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2a0814:
    // 0x2a0814: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x2a0814u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2a0818:
    // 0x2a0818: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a0818u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a081c:
    // 0x2a081c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a081cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a0820:
    // 0x2a0820: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a0820u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a0824:
    // 0x2a0824: 0x3e00008  jr          $ra
label_2a0828:
    if (ctx->pc == 0x2A0828u) {
        ctx->pc = 0x2A0828u;
            // 0x2a0828: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2A082Cu;
        goto label_2a082c;
    }
    ctx->pc = 0x2A0824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0824u;
            // 0x2a0828: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A082Cu;
label_2a082c:
    // 0x2a082c: 0x0  nop
    ctx->pc = 0x2a082cu;
    // NOP
}
