#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00482120
// Address: 0x482120 - 0x482670
void sub_00482120_0x482120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00482120_0x482120");
#endif

    switch (ctx->pc) {
        case 0x482120u: goto label_482120;
        case 0x482124u: goto label_482124;
        case 0x482128u: goto label_482128;
        case 0x48212cu: goto label_48212c;
        case 0x482130u: goto label_482130;
        case 0x482134u: goto label_482134;
        case 0x482138u: goto label_482138;
        case 0x48213cu: goto label_48213c;
        case 0x482140u: goto label_482140;
        case 0x482144u: goto label_482144;
        case 0x482148u: goto label_482148;
        case 0x48214cu: goto label_48214c;
        case 0x482150u: goto label_482150;
        case 0x482154u: goto label_482154;
        case 0x482158u: goto label_482158;
        case 0x48215cu: goto label_48215c;
        case 0x482160u: goto label_482160;
        case 0x482164u: goto label_482164;
        case 0x482168u: goto label_482168;
        case 0x48216cu: goto label_48216c;
        case 0x482170u: goto label_482170;
        case 0x482174u: goto label_482174;
        case 0x482178u: goto label_482178;
        case 0x48217cu: goto label_48217c;
        case 0x482180u: goto label_482180;
        case 0x482184u: goto label_482184;
        case 0x482188u: goto label_482188;
        case 0x48218cu: goto label_48218c;
        case 0x482190u: goto label_482190;
        case 0x482194u: goto label_482194;
        case 0x482198u: goto label_482198;
        case 0x48219cu: goto label_48219c;
        case 0x4821a0u: goto label_4821a0;
        case 0x4821a4u: goto label_4821a4;
        case 0x4821a8u: goto label_4821a8;
        case 0x4821acu: goto label_4821ac;
        case 0x4821b0u: goto label_4821b0;
        case 0x4821b4u: goto label_4821b4;
        case 0x4821b8u: goto label_4821b8;
        case 0x4821bcu: goto label_4821bc;
        case 0x4821c0u: goto label_4821c0;
        case 0x4821c4u: goto label_4821c4;
        case 0x4821c8u: goto label_4821c8;
        case 0x4821ccu: goto label_4821cc;
        case 0x4821d0u: goto label_4821d0;
        case 0x4821d4u: goto label_4821d4;
        case 0x4821d8u: goto label_4821d8;
        case 0x4821dcu: goto label_4821dc;
        case 0x4821e0u: goto label_4821e0;
        case 0x4821e4u: goto label_4821e4;
        case 0x4821e8u: goto label_4821e8;
        case 0x4821ecu: goto label_4821ec;
        case 0x4821f0u: goto label_4821f0;
        case 0x4821f4u: goto label_4821f4;
        case 0x4821f8u: goto label_4821f8;
        case 0x4821fcu: goto label_4821fc;
        case 0x482200u: goto label_482200;
        case 0x482204u: goto label_482204;
        case 0x482208u: goto label_482208;
        case 0x48220cu: goto label_48220c;
        case 0x482210u: goto label_482210;
        case 0x482214u: goto label_482214;
        case 0x482218u: goto label_482218;
        case 0x48221cu: goto label_48221c;
        case 0x482220u: goto label_482220;
        case 0x482224u: goto label_482224;
        case 0x482228u: goto label_482228;
        case 0x48222cu: goto label_48222c;
        case 0x482230u: goto label_482230;
        case 0x482234u: goto label_482234;
        case 0x482238u: goto label_482238;
        case 0x48223cu: goto label_48223c;
        case 0x482240u: goto label_482240;
        case 0x482244u: goto label_482244;
        case 0x482248u: goto label_482248;
        case 0x48224cu: goto label_48224c;
        case 0x482250u: goto label_482250;
        case 0x482254u: goto label_482254;
        case 0x482258u: goto label_482258;
        case 0x48225cu: goto label_48225c;
        case 0x482260u: goto label_482260;
        case 0x482264u: goto label_482264;
        case 0x482268u: goto label_482268;
        case 0x48226cu: goto label_48226c;
        case 0x482270u: goto label_482270;
        case 0x482274u: goto label_482274;
        case 0x482278u: goto label_482278;
        case 0x48227cu: goto label_48227c;
        case 0x482280u: goto label_482280;
        case 0x482284u: goto label_482284;
        case 0x482288u: goto label_482288;
        case 0x48228cu: goto label_48228c;
        case 0x482290u: goto label_482290;
        case 0x482294u: goto label_482294;
        case 0x482298u: goto label_482298;
        case 0x48229cu: goto label_48229c;
        case 0x4822a0u: goto label_4822a0;
        case 0x4822a4u: goto label_4822a4;
        case 0x4822a8u: goto label_4822a8;
        case 0x4822acu: goto label_4822ac;
        case 0x4822b0u: goto label_4822b0;
        case 0x4822b4u: goto label_4822b4;
        case 0x4822b8u: goto label_4822b8;
        case 0x4822bcu: goto label_4822bc;
        case 0x4822c0u: goto label_4822c0;
        case 0x4822c4u: goto label_4822c4;
        case 0x4822c8u: goto label_4822c8;
        case 0x4822ccu: goto label_4822cc;
        case 0x4822d0u: goto label_4822d0;
        case 0x4822d4u: goto label_4822d4;
        case 0x4822d8u: goto label_4822d8;
        case 0x4822dcu: goto label_4822dc;
        case 0x4822e0u: goto label_4822e0;
        case 0x4822e4u: goto label_4822e4;
        case 0x4822e8u: goto label_4822e8;
        case 0x4822ecu: goto label_4822ec;
        case 0x4822f0u: goto label_4822f0;
        case 0x4822f4u: goto label_4822f4;
        case 0x4822f8u: goto label_4822f8;
        case 0x4822fcu: goto label_4822fc;
        case 0x482300u: goto label_482300;
        case 0x482304u: goto label_482304;
        case 0x482308u: goto label_482308;
        case 0x48230cu: goto label_48230c;
        case 0x482310u: goto label_482310;
        case 0x482314u: goto label_482314;
        case 0x482318u: goto label_482318;
        case 0x48231cu: goto label_48231c;
        case 0x482320u: goto label_482320;
        case 0x482324u: goto label_482324;
        case 0x482328u: goto label_482328;
        case 0x48232cu: goto label_48232c;
        case 0x482330u: goto label_482330;
        case 0x482334u: goto label_482334;
        case 0x482338u: goto label_482338;
        case 0x48233cu: goto label_48233c;
        case 0x482340u: goto label_482340;
        case 0x482344u: goto label_482344;
        case 0x482348u: goto label_482348;
        case 0x48234cu: goto label_48234c;
        case 0x482350u: goto label_482350;
        case 0x482354u: goto label_482354;
        case 0x482358u: goto label_482358;
        case 0x48235cu: goto label_48235c;
        case 0x482360u: goto label_482360;
        case 0x482364u: goto label_482364;
        case 0x482368u: goto label_482368;
        case 0x48236cu: goto label_48236c;
        case 0x482370u: goto label_482370;
        case 0x482374u: goto label_482374;
        case 0x482378u: goto label_482378;
        case 0x48237cu: goto label_48237c;
        case 0x482380u: goto label_482380;
        case 0x482384u: goto label_482384;
        case 0x482388u: goto label_482388;
        case 0x48238cu: goto label_48238c;
        case 0x482390u: goto label_482390;
        case 0x482394u: goto label_482394;
        case 0x482398u: goto label_482398;
        case 0x48239cu: goto label_48239c;
        case 0x4823a0u: goto label_4823a0;
        case 0x4823a4u: goto label_4823a4;
        case 0x4823a8u: goto label_4823a8;
        case 0x4823acu: goto label_4823ac;
        case 0x4823b0u: goto label_4823b0;
        case 0x4823b4u: goto label_4823b4;
        case 0x4823b8u: goto label_4823b8;
        case 0x4823bcu: goto label_4823bc;
        case 0x4823c0u: goto label_4823c0;
        case 0x4823c4u: goto label_4823c4;
        case 0x4823c8u: goto label_4823c8;
        case 0x4823ccu: goto label_4823cc;
        case 0x4823d0u: goto label_4823d0;
        case 0x4823d4u: goto label_4823d4;
        case 0x4823d8u: goto label_4823d8;
        case 0x4823dcu: goto label_4823dc;
        case 0x4823e0u: goto label_4823e0;
        case 0x4823e4u: goto label_4823e4;
        case 0x4823e8u: goto label_4823e8;
        case 0x4823ecu: goto label_4823ec;
        case 0x4823f0u: goto label_4823f0;
        case 0x4823f4u: goto label_4823f4;
        case 0x4823f8u: goto label_4823f8;
        case 0x4823fcu: goto label_4823fc;
        case 0x482400u: goto label_482400;
        case 0x482404u: goto label_482404;
        case 0x482408u: goto label_482408;
        case 0x48240cu: goto label_48240c;
        case 0x482410u: goto label_482410;
        case 0x482414u: goto label_482414;
        case 0x482418u: goto label_482418;
        case 0x48241cu: goto label_48241c;
        case 0x482420u: goto label_482420;
        case 0x482424u: goto label_482424;
        case 0x482428u: goto label_482428;
        case 0x48242cu: goto label_48242c;
        case 0x482430u: goto label_482430;
        case 0x482434u: goto label_482434;
        case 0x482438u: goto label_482438;
        case 0x48243cu: goto label_48243c;
        case 0x482440u: goto label_482440;
        case 0x482444u: goto label_482444;
        case 0x482448u: goto label_482448;
        case 0x48244cu: goto label_48244c;
        case 0x482450u: goto label_482450;
        case 0x482454u: goto label_482454;
        case 0x482458u: goto label_482458;
        case 0x48245cu: goto label_48245c;
        case 0x482460u: goto label_482460;
        case 0x482464u: goto label_482464;
        case 0x482468u: goto label_482468;
        case 0x48246cu: goto label_48246c;
        case 0x482470u: goto label_482470;
        case 0x482474u: goto label_482474;
        case 0x482478u: goto label_482478;
        case 0x48247cu: goto label_48247c;
        case 0x482480u: goto label_482480;
        case 0x482484u: goto label_482484;
        case 0x482488u: goto label_482488;
        case 0x48248cu: goto label_48248c;
        case 0x482490u: goto label_482490;
        case 0x482494u: goto label_482494;
        case 0x482498u: goto label_482498;
        case 0x48249cu: goto label_48249c;
        case 0x4824a0u: goto label_4824a0;
        case 0x4824a4u: goto label_4824a4;
        case 0x4824a8u: goto label_4824a8;
        case 0x4824acu: goto label_4824ac;
        case 0x4824b0u: goto label_4824b0;
        case 0x4824b4u: goto label_4824b4;
        case 0x4824b8u: goto label_4824b8;
        case 0x4824bcu: goto label_4824bc;
        case 0x4824c0u: goto label_4824c0;
        case 0x4824c4u: goto label_4824c4;
        case 0x4824c8u: goto label_4824c8;
        case 0x4824ccu: goto label_4824cc;
        case 0x4824d0u: goto label_4824d0;
        case 0x4824d4u: goto label_4824d4;
        case 0x4824d8u: goto label_4824d8;
        case 0x4824dcu: goto label_4824dc;
        case 0x4824e0u: goto label_4824e0;
        case 0x4824e4u: goto label_4824e4;
        case 0x4824e8u: goto label_4824e8;
        case 0x4824ecu: goto label_4824ec;
        case 0x4824f0u: goto label_4824f0;
        case 0x4824f4u: goto label_4824f4;
        case 0x4824f8u: goto label_4824f8;
        case 0x4824fcu: goto label_4824fc;
        case 0x482500u: goto label_482500;
        case 0x482504u: goto label_482504;
        case 0x482508u: goto label_482508;
        case 0x48250cu: goto label_48250c;
        case 0x482510u: goto label_482510;
        case 0x482514u: goto label_482514;
        case 0x482518u: goto label_482518;
        case 0x48251cu: goto label_48251c;
        case 0x482520u: goto label_482520;
        case 0x482524u: goto label_482524;
        case 0x482528u: goto label_482528;
        case 0x48252cu: goto label_48252c;
        case 0x482530u: goto label_482530;
        case 0x482534u: goto label_482534;
        case 0x482538u: goto label_482538;
        case 0x48253cu: goto label_48253c;
        case 0x482540u: goto label_482540;
        case 0x482544u: goto label_482544;
        case 0x482548u: goto label_482548;
        case 0x48254cu: goto label_48254c;
        case 0x482550u: goto label_482550;
        case 0x482554u: goto label_482554;
        case 0x482558u: goto label_482558;
        case 0x48255cu: goto label_48255c;
        case 0x482560u: goto label_482560;
        case 0x482564u: goto label_482564;
        case 0x482568u: goto label_482568;
        case 0x48256cu: goto label_48256c;
        case 0x482570u: goto label_482570;
        case 0x482574u: goto label_482574;
        case 0x482578u: goto label_482578;
        case 0x48257cu: goto label_48257c;
        case 0x482580u: goto label_482580;
        case 0x482584u: goto label_482584;
        case 0x482588u: goto label_482588;
        case 0x48258cu: goto label_48258c;
        case 0x482590u: goto label_482590;
        case 0x482594u: goto label_482594;
        case 0x482598u: goto label_482598;
        case 0x48259cu: goto label_48259c;
        case 0x4825a0u: goto label_4825a0;
        case 0x4825a4u: goto label_4825a4;
        case 0x4825a8u: goto label_4825a8;
        case 0x4825acu: goto label_4825ac;
        case 0x4825b0u: goto label_4825b0;
        case 0x4825b4u: goto label_4825b4;
        case 0x4825b8u: goto label_4825b8;
        case 0x4825bcu: goto label_4825bc;
        case 0x4825c0u: goto label_4825c0;
        case 0x4825c4u: goto label_4825c4;
        case 0x4825c8u: goto label_4825c8;
        case 0x4825ccu: goto label_4825cc;
        case 0x4825d0u: goto label_4825d0;
        case 0x4825d4u: goto label_4825d4;
        case 0x4825d8u: goto label_4825d8;
        case 0x4825dcu: goto label_4825dc;
        case 0x4825e0u: goto label_4825e0;
        case 0x4825e4u: goto label_4825e4;
        case 0x4825e8u: goto label_4825e8;
        case 0x4825ecu: goto label_4825ec;
        case 0x4825f0u: goto label_4825f0;
        case 0x4825f4u: goto label_4825f4;
        case 0x4825f8u: goto label_4825f8;
        case 0x4825fcu: goto label_4825fc;
        case 0x482600u: goto label_482600;
        case 0x482604u: goto label_482604;
        case 0x482608u: goto label_482608;
        case 0x48260cu: goto label_48260c;
        case 0x482610u: goto label_482610;
        case 0x482614u: goto label_482614;
        case 0x482618u: goto label_482618;
        case 0x48261cu: goto label_48261c;
        case 0x482620u: goto label_482620;
        case 0x482624u: goto label_482624;
        case 0x482628u: goto label_482628;
        case 0x48262cu: goto label_48262c;
        case 0x482630u: goto label_482630;
        case 0x482634u: goto label_482634;
        case 0x482638u: goto label_482638;
        case 0x48263cu: goto label_48263c;
        case 0x482640u: goto label_482640;
        case 0x482644u: goto label_482644;
        case 0x482648u: goto label_482648;
        case 0x48264cu: goto label_48264c;
        case 0x482650u: goto label_482650;
        case 0x482654u: goto label_482654;
        case 0x482658u: goto label_482658;
        case 0x48265cu: goto label_48265c;
        case 0x482660u: goto label_482660;
        case 0x482664u: goto label_482664;
        case 0x482668u: goto label_482668;
        case 0x48266cu: goto label_48266c;
        default: break;
    }

    ctx->pc = 0x482120u;

label_482120:
    // 0x482120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x482120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_482124:
    // 0x482124: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x482124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_482128:
    // 0x482128: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x482128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48212c:
    // 0x48212c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48212cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_482130:
    // 0x482130: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x482130u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_482134:
    // 0x482134: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_482138:
    if (ctx->pc == 0x482138u) {
        ctx->pc = 0x482138u;
            // 0x482138: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48213Cu;
        goto label_48213c;
    }
    ctx->pc = 0x482134u;
    {
        const bool branch_taken_0x482134 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x482138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x482134u;
            // 0x482138: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x482134) {
            ctx->pc = 0x482268u;
            goto label_482268;
        }
    }
    ctx->pc = 0x48213Cu;
label_48213c:
    // 0x48213c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x48213cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_482140:
    // 0x482140: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x482140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_482144:
    // 0x482144: 0x2463f0f0  addiu       $v1, $v1, -0xF10
    ctx->pc = 0x482144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963440));
label_482148:
    // 0x482148: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x482148u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_48214c:
    // 0x48214c: 0x2442f128  addiu       $v0, $v0, -0xED8
    ctx->pc = 0x48214cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963496));
label_482150:
    // 0x482150: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x482150u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_482154:
    // 0x482154: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x482154u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_482158:
    // 0x482158: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x482158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_48215c:
    // 0x48215c: 0xc0407c0  jal         func_101F00
label_482160:
    if (ctx->pc == 0x482160u) {
        ctx->pc = 0x482160u;
            // 0x482160: 0x24a52280  addiu       $a1, $a1, 0x2280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8832));
        ctx->pc = 0x482164u;
        goto label_482164;
    }
    ctx->pc = 0x48215Cu;
    SET_GPR_U32(ctx, 31, 0x482164u);
    ctx->pc = 0x482160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48215Cu;
            // 0x482160: 0x24a52280  addiu       $a1, $a1, 0x2280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482164u; }
        if (ctx->pc != 0x482164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482164u; }
        if (ctx->pc != 0x482164u) { return; }
    }
    ctx->pc = 0x482164u;
label_482164:
    // 0x482164: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x482164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_482168:
    // 0x482168: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_48216c:
    if (ctx->pc == 0x48216Cu) {
        ctx->pc = 0x48216Cu;
            // 0x48216c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x482170u;
        goto label_482170;
    }
    ctx->pc = 0x482168u;
    {
        const bool branch_taken_0x482168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x482168) {
            ctx->pc = 0x48216Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x482168u;
            // 0x48216c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48217Cu;
            goto label_48217c;
        }
    }
    ctx->pc = 0x482170u;
label_482170:
    // 0x482170: 0xc07507c  jal         func_1D41F0
label_482174:
    if (ctx->pc == 0x482174u) {
        ctx->pc = 0x482174u;
            // 0x482174: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x482178u;
        goto label_482178;
    }
    ctx->pc = 0x482170u;
    SET_GPR_U32(ctx, 31, 0x482178u);
    ctx->pc = 0x482174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482170u;
            // 0x482174: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482178u; }
        if (ctx->pc != 0x482178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482178u; }
        if (ctx->pc != 0x482178u) { return; }
    }
    ctx->pc = 0x482178u;
label_482178:
    // 0x482178: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x482178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_48217c:
    // 0x48217c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_482180:
    if (ctx->pc == 0x482180u) {
        ctx->pc = 0x482180u;
            // 0x482180: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x482184u;
        goto label_482184;
    }
    ctx->pc = 0x48217Cu;
    {
        const bool branch_taken_0x48217c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48217c) {
            ctx->pc = 0x482180u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48217Cu;
            // 0x482180: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4821ACu;
            goto label_4821ac;
        }
    }
    ctx->pc = 0x482184u;
label_482184:
    // 0x482184: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_482188:
    if (ctx->pc == 0x482188u) {
        ctx->pc = 0x48218Cu;
        goto label_48218c;
    }
    ctx->pc = 0x482184u;
    {
        const bool branch_taken_0x482184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x482184) {
            ctx->pc = 0x4821A8u;
            goto label_4821a8;
        }
    }
    ctx->pc = 0x48218Cu;
label_48218c:
    // 0x48218c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_482190:
    if (ctx->pc == 0x482190u) {
        ctx->pc = 0x482194u;
        goto label_482194;
    }
    ctx->pc = 0x48218Cu;
    {
        const bool branch_taken_0x48218c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48218c) {
            ctx->pc = 0x4821A8u;
            goto label_4821a8;
        }
    }
    ctx->pc = 0x482194u;
label_482194:
    // 0x482194: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x482194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_482198:
    // 0x482198: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_48219c:
    if (ctx->pc == 0x48219Cu) {
        ctx->pc = 0x4821A0u;
        goto label_4821a0;
    }
    ctx->pc = 0x482198u;
    {
        const bool branch_taken_0x482198 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x482198) {
            ctx->pc = 0x4821A8u;
            goto label_4821a8;
        }
    }
    ctx->pc = 0x4821A0u;
label_4821a0:
    // 0x4821a0: 0xc0400a8  jal         func_1002A0
label_4821a4:
    if (ctx->pc == 0x4821A4u) {
        ctx->pc = 0x4821A8u;
        goto label_4821a8;
    }
    ctx->pc = 0x4821A0u;
    SET_GPR_U32(ctx, 31, 0x4821A8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4821A8u; }
        if (ctx->pc != 0x4821A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4821A8u; }
        if (ctx->pc != 0x4821A8u) { return; }
    }
    ctx->pc = 0x4821A8u;
label_4821a8:
    // 0x4821a8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x4821a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4821ac:
    // 0x4821ac: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4821b0:
    if (ctx->pc == 0x4821B0u) {
        ctx->pc = 0x4821B0u;
            // 0x4821b0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4821B4u;
        goto label_4821b4;
    }
    ctx->pc = 0x4821ACu;
    {
        const bool branch_taken_0x4821ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4821ac) {
            ctx->pc = 0x4821B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4821ACu;
            // 0x4821b0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4821DCu;
            goto label_4821dc;
        }
    }
    ctx->pc = 0x4821B4u;
label_4821b4:
    // 0x4821b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4821b8:
    if (ctx->pc == 0x4821B8u) {
        ctx->pc = 0x4821BCu;
        goto label_4821bc;
    }
    ctx->pc = 0x4821B4u;
    {
        const bool branch_taken_0x4821b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4821b4) {
            ctx->pc = 0x4821D8u;
            goto label_4821d8;
        }
    }
    ctx->pc = 0x4821BCu;
label_4821bc:
    // 0x4821bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4821c0:
    if (ctx->pc == 0x4821C0u) {
        ctx->pc = 0x4821C4u;
        goto label_4821c4;
    }
    ctx->pc = 0x4821BCu;
    {
        const bool branch_taken_0x4821bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4821bc) {
            ctx->pc = 0x4821D8u;
            goto label_4821d8;
        }
    }
    ctx->pc = 0x4821C4u;
label_4821c4:
    // 0x4821c4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x4821c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4821c8:
    // 0x4821c8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4821cc:
    if (ctx->pc == 0x4821CCu) {
        ctx->pc = 0x4821D0u;
        goto label_4821d0;
    }
    ctx->pc = 0x4821C8u;
    {
        const bool branch_taken_0x4821c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4821c8) {
            ctx->pc = 0x4821D8u;
            goto label_4821d8;
        }
    }
    ctx->pc = 0x4821D0u;
label_4821d0:
    // 0x4821d0: 0xc0400a8  jal         func_1002A0
label_4821d4:
    if (ctx->pc == 0x4821D4u) {
        ctx->pc = 0x4821D8u;
        goto label_4821d8;
    }
    ctx->pc = 0x4821D0u;
    SET_GPR_U32(ctx, 31, 0x4821D8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4821D8u; }
        if (ctx->pc != 0x4821D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4821D8u; }
        if (ctx->pc != 0x4821D8u) { return; }
    }
    ctx->pc = 0x4821D8u;
label_4821d8:
    // 0x4821d8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x4821d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4821dc:
    // 0x4821dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4821e0:
    if (ctx->pc == 0x4821E0u) {
        ctx->pc = 0x4821E4u;
        goto label_4821e4;
    }
    ctx->pc = 0x4821DCu;
    {
        const bool branch_taken_0x4821dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4821dc) {
            ctx->pc = 0x4821F8u;
            goto label_4821f8;
        }
    }
    ctx->pc = 0x4821E4u;
label_4821e4:
    // 0x4821e4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4821e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4821e8:
    // 0x4821e8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4821e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4821ec:
    // 0x4821ec: 0x2463f0d8  addiu       $v1, $v1, -0xF28
    ctx->pc = 0x4821ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963416));
label_4821f0:
    // 0x4821f0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x4821f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_4821f4:
    // 0x4821f4: 0xac407b90  sw          $zero, 0x7B90($v0)
    ctx->pc = 0x4821f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31632), GPR_U32(ctx, 0));
label_4821f8:
    // 0x4821f8: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_4821fc:
    if (ctx->pc == 0x4821FCu) {
        ctx->pc = 0x4821FCu;
            // 0x4821fc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x482200u;
        goto label_482200;
    }
    ctx->pc = 0x4821F8u;
    {
        const bool branch_taken_0x4821f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4821f8) {
            ctx->pc = 0x4821FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4821F8u;
            // 0x4821fc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x482254u;
            goto label_482254;
        }
    }
    ctx->pc = 0x482200u;
label_482200:
    // 0x482200: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x482200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_482204:
    // 0x482204: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x482204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_482208:
    // 0x482208: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x482208u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_48220c:
    // 0x48220c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x48220cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_482210:
    // 0x482210: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_482214:
    if (ctx->pc == 0x482214u) {
        ctx->pc = 0x482214u;
            // 0x482214: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x482218u;
        goto label_482218;
    }
    ctx->pc = 0x482210u;
    {
        const bool branch_taken_0x482210 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x482210) {
            ctx->pc = 0x482214u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x482210u;
            // 0x482214: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48222Cu;
            goto label_48222c;
        }
    }
    ctx->pc = 0x482218u;
label_482218:
    // 0x482218: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x482218u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48221c:
    // 0x48221c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x48221cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_482220:
    // 0x482220: 0x320f809  jalr        $t9
label_482224:
    if (ctx->pc == 0x482224u) {
        ctx->pc = 0x482224u;
            // 0x482224: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x482228u;
        goto label_482228;
    }
    ctx->pc = 0x482220u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x482228u);
        ctx->pc = 0x482224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x482220u;
            // 0x482224: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x482228u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x482228u; }
            if (ctx->pc != 0x482228u) { return; }
        }
        }
    }
    ctx->pc = 0x482228u;
label_482228:
    // 0x482228: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x482228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_48222c:
    // 0x48222c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_482230:
    if (ctx->pc == 0x482230u) {
        ctx->pc = 0x482230u;
            // 0x482230: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x482234u;
        goto label_482234;
    }
    ctx->pc = 0x48222Cu;
    {
        const bool branch_taken_0x48222c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x48222c) {
            ctx->pc = 0x482230u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48222Cu;
            // 0x482230: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x482248u;
            goto label_482248;
        }
    }
    ctx->pc = 0x482234u;
label_482234:
    // 0x482234: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x482234u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_482238:
    // 0x482238: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x482238u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_48223c:
    // 0x48223c: 0x320f809  jalr        $t9
label_482240:
    if (ctx->pc == 0x482240u) {
        ctx->pc = 0x482240u;
            // 0x482240: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x482244u;
        goto label_482244;
    }
    ctx->pc = 0x48223Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x482244u);
        ctx->pc = 0x482240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48223Cu;
            // 0x482240: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x482244u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x482244u; }
            if (ctx->pc != 0x482244u) { return; }
        }
        }
    }
    ctx->pc = 0x482244u;
label_482244:
    // 0x482244: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x482244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_482248:
    // 0x482248: 0xc075bf8  jal         func_1D6FE0
label_48224c:
    if (ctx->pc == 0x48224Cu) {
        ctx->pc = 0x48224Cu;
            // 0x48224c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x482250u;
        goto label_482250;
    }
    ctx->pc = 0x482248u;
    SET_GPR_U32(ctx, 31, 0x482250u);
    ctx->pc = 0x48224Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482248u;
            // 0x48224c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482250u; }
        if (ctx->pc != 0x482250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482250u; }
        if (ctx->pc != 0x482250u) { return; }
    }
    ctx->pc = 0x482250u;
label_482250:
    // 0x482250: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x482250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_482254:
    // 0x482254: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x482254u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_482258:
    // 0x482258: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_48225c:
    if (ctx->pc == 0x48225Cu) {
        ctx->pc = 0x48225Cu;
            // 0x48225c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x482260u;
        goto label_482260;
    }
    ctx->pc = 0x482258u;
    {
        const bool branch_taken_0x482258 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x482258) {
            ctx->pc = 0x48225Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x482258u;
            // 0x48225c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48226Cu;
            goto label_48226c;
        }
    }
    ctx->pc = 0x482260u;
label_482260:
    // 0x482260: 0xc0400a8  jal         func_1002A0
label_482264:
    if (ctx->pc == 0x482264u) {
        ctx->pc = 0x482264u;
            // 0x482264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x482268u;
        goto label_482268;
    }
    ctx->pc = 0x482260u;
    SET_GPR_U32(ctx, 31, 0x482268u);
    ctx->pc = 0x482264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482260u;
            // 0x482264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482268u; }
        if (ctx->pc != 0x482268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482268u; }
        if (ctx->pc != 0x482268u) { return; }
    }
    ctx->pc = 0x482268u;
label_482268:
    // 0x482268: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x482268u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_48226c:
    // 0x48226c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x48226cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_482270:
    // 0x482270: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x482270u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_482274:
    // 0x482274: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x482274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_482278:
    // 0x482278: 0x3e00008  jr          $ra
label_48227c:
    if (ctx->pc == 0x48227Cu) {
        ctx->pc = 0x48227Cu;
            // 0x48227c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x482280u;
        goto label_482280;
    }
    ctx->pc = 0x482278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48227Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x482278u;
            // 0x48227c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x482280u;
label_482280:
    // 0x482280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x482280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_482284:
    // 0x482284: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x482284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_482288:
    // 0x482288: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x482288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48228c:
    // 0x48228c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48228cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_482290:
    // 0x482290: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x482290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_482294:
    // 0x482294: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_482298:
    if (ctx->pc == 0x482298u) {
        ctx->pc = 0x482298u;
            // 0x482298: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48229Cu;
        goto label_48229c;
    }
    ctx->pc = 0x482294u;
    {
        const bool branch_taken_0x482294 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x482298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x482294u;
            // 0x482298: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x482294) {
            ctx->pc = 0x482330u;
            goto label_482330;
        }
    }
    ctx->pc = 0x48229Cu;
label_48229c:
    // 0x48229c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x48229cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4822a0:
    // 0x4822a0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4822a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4822a4:
    // 0x4822a4: 0x2463f190  addiu       $v1, $v1, -0xE70
    ctx->pc = 0x4822a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963600));
label_4822a8:
    // 0x4822a8: 0x2442f1d0  addiu       $v0, $v0, -0xE30
    ctx->pc = 0x4822a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963664));
label_4822ac:
    // 0x4822ac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4822acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4822b0:
    // 0x4822b0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4822b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4822b4:
    // 0x4822b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4822b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4822b8:
    // 0x4822b8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4822b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4822bc:
    // 0x4822bc: 0x320f809  jalr        $t9
label_4822c0:
    if (ctx->pc == 0x4822C0u) {
        ctx->pc = 0x4822C4u;
        goto label_4822c4;
    }
    ctx->pc = 0x4822BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4822C4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4822C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4822C4u; }
            if (ctx->pc != 0x4822C4u) { return; }
        }
        }
    }
    ctx->pc = 0x4822C4u;
label_4822c4:
    // 0x4822c4: 0x52000015  beql        $s0, $zero, . + 4 + (0x15 << 2)
label_4822c8:
    if (ctx->pc == 0x4822C8u) {
        ctx->pc = 0x4822C8u;
            // 0x4822c8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x4822CCu;
        goto label_4822cc;
    }
    ctx->pc = 0x4822C4u;
    {
        const bool branch_taken_0x4822c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4822c4) {
            ctx->pc = 0x4822C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4822C4u;
            // 0x4822c8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48231Cu;
            goto label_48231c;
        }
    }
    ctx->pc = 0x4822CCu;
label_4822cc:
    // 0x4822cc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4822ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4822d0:
    // 0x4822d0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4822d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4822d4:
    // 0x4822d4: 0x24639320  addiu       $v1, $v1, -0x6CE0
    ctx->pc = 0x4822d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939424));
label_4822d8:
    // 0x4822d8: 0x24429360  addiu       $v0, $v0, -0x6CA0
    ctx->pc = 0x4822d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939488));
label_4822dc:
    // 0x4822dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4822dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4822e0:
    // 0x4822e0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4822e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4822e4:
    // 0x4822e4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4822e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4822e8:
    // 0x4822e8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4822e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4822ec:
    // 0x4822ec: 0x320f809  jalr        $t9
label_4822f0:
    if (ctx->pc == 0x4822F0u) {
        ctx->pc = 0x4822F0u;
            // 0x4822f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4822F4u;
        goto label_4822f4;
    }
    ctx->pc = 0x4822ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4822F4u);
        ctx->pc = 0x4822F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4822ECu;
            // 0x4822f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4822F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4822F4u; }
            if (ctx->pc != 0x4822F4u) { return; }
        }
        }
    }
    ctx->pc = 0x4822F4u;
label_4822f4:
    // 0x4822f4: 0x260401a0  addiu       $a0, $s0, 0x1A0
    ctx->pc = 0x4822f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
label_4822f8:
    // 0x4822f8: 0xc0a9844  jal         func_2A6110
label_4822fc:
    if (ctx->pc == 0x4822FCu) {
        ctx->pc = 0x4822FCu;
            // 0x4822fc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x482300u;
        goto label_482300;
    }
    ctx->pc = 0x4822F8u;
    SET_GPR_U32(ctx, 31, 0x482300u);
    ctx->pc = 0x4822FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4822F8u;
            // 0x4822fc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6110u;
    if (runtime->hasFunction(0x2A6110u)) {
        auto targetFn = runtime->lookupFunction(0x2A6110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482300u; }
        if (ctx->pc != 0x482300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A6110_0x2a6110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482300u; }
        if (ctx->pc != 0x482300u) { return; }
    }
    ctx->pc = 0x482300u;
label_482300:
    // 0x482300: 0x260400f0  addiu       $a0, $s0, 0xF0
    ctx->pc = 0x482300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
label_482304:
    // 0x482304: 0xc0ada2c  jal         func_2B68B0
label_482308:
    if (ctx->pc == 0x482308u) {
        ctx->pc = 0x482308u;
            // 0x482308: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x48230Cu;
        goto label_48230c;
    }
    ctx->pc = 0x482304u;
    SET_GPR_U32(ctx, 31, 0x48230Cu);
    ctx->pc = 0x482308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482304u;
            // 0x482308: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B68B0u;
    if (runtime->hasFunction(0x2B68B0u)) {
        auto targetFn = runtime->lookupFunction(0x2B68B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48230Cu; }
        if (ctx->pc != 0x48230Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B68B0_0x2b68b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48230Cu; }
        if (ctx->pc != 0x48230Cu) { return; }
    }
    ctx->pc = 0x48230Cu;
label_48230c:
    // 0x48230c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48230cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_482310:
    // 0x482310: 0xc0aee40  jal         func_2BB900
label_482314:
    if (ctx->pc == 0x482314u) {
        ctx->pc = 0x482314u;
            // 0x482314: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x482318u;
        goto label_482318;
    }
    ctx->pc = 0x482310u;
    SET_GPR_U32(ctx, 31, 0x482318u);
    ctx->pc = 0x482314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482310u;
            // 0x482314: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB900u;
    if (runtime->hasFunction(0x2BB900u)) {
        auto targetFn = runtime->lookupFunction(0x2BB900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482318u; }
        if (ctx->pc != 0x482318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB900_0x2bb900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482318u; }
        if (ctx->pc != 0x482318u) { return; }
    }
    ctx->pc = 0x482318u;
label_482318:
    // 0x482318: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x482318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_48231c:
    // 0x48231c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x48231cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_482320:
    // 0x482320: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_482324:
    if (ctx->pc == 0x482324u) {
        ctx->pc = 0x482324u;
            // 0x482324: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x482328u;
        goto label_482328;
    }
    ctx->pc = 0x482320u;
    {
        const bool branch_taken_0x482320 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x482320) {
            ctx->pc = 0x482324u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x482320u;
            // 0x482324: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x482334u;
            goto label_482334;
        }
    }
    ctx->pc = 0x482328u;
label_482328:
    // 0x482328: 0xc0400a8  jal         func_1002A0
label_48232c:
    if (ctx->pc == 0x48232Cu) {
        ctx->pc = 0x48232Cu;
            // 0x48232c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x482330u;
        goto label_482330;
    }
    ctx->pc = 0x482328u;
    SET_GPR_U32(ctx, 31, 0x482330u);
    ctx->pc = 0x48232Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482328u;
            // 0x48232c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482330u; }
        if (ctx->pc != 0x482330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482330u; }
        if (ctx->pc != 0x482330u) { return; }
    }
    ctx->pc = 0x482330u;
label_482330:
    // 0x482330: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x482330u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_482334:
    // 0x482334: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x482334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_482338:
    // 0x482338: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x482338u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48233c:
    // 0x48233c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48233cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_482340:
    // 0x482340: 0x3e00008  jr          $ra
label_482344:
    if (ctx->pc == 0x482344u) {
        ctx->pc = 0x482344u;
            // 0x482344: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x482348u;
        goto label_482348;
    }
    ctx->pc = 0x482340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x482344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x482340u;
            // 0x482344: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x482348u;
label_482348:
    // 0x482348: 0x0  nop
    ctx->pc = 0x482348u;
    // NOP
label_48234c:
    // 0x48234c: 0x0  nop
    ctx->pc = 0x48234cu;
    // NOP
label_482350:
    // 0x482350: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x482350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_482354:
    // 0x482354: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x482354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_482358:
    // 0x482358: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x482358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_48235c:
    // 0x48235c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x48235cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_482360:
    // 0x482360: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x482360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_482364:
    // 0x482364: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x482364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_482368:
    // 0x482368: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x482368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_48236c:
    // 0x48236c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x48236cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_482370:
    // 0x482370: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x482370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_482374:
    // 0x482374: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x482374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_482378:
    // 0x482378: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x482378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48237c:
    // 0x48237c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48237cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_482380:
    // 0x482380: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x482380u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_482384:
    // 0x482384: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_482388:
    if (ctx->pc == 0x482388u) {
        ctx->pc = 0x482388u;
            // 0x482388: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48238Cu;
        goto label_48238c;
    }
    ctx->pc = 0x482384u;
    {
        const bool branch_taken_0x482384 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x482388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x482384u;
            // 0x482388: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x482384) {
            ctx->pc = 0x4823D4u;
            goto label_4823d4;
        }
    }
    ctx->pc = 0x48238Cu;
label_48238c:
    // 0x48238c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x48238cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_482390:
    // 0x482390: 0x50a30048  beql        $a1, $v1, . + 4 + (0x48 << 2)
label_482394:
    if (ctx->pc == 0x482394u) {
        ctx->pc = 0x482394u;
            // 0x482394: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x482398u;
        goto label_482398;
    }
    ctx->pc = 0x482390u;
    {
        const bool branch_taken_0x482390 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x482390) {
            ctx->pc = 0x482394u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x482390u;
            // 0x482394: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4824B4u;
            goto label_4824b4;
        }
    }
    ctx->pc = 0x482398u;
label_482398:
    // 0x482398: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x482398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_48239c:
    // 0x48239c: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4823a0:
    if (ctx->pc == 0x4823A0u) {
        ctx->pc = 0x4823A4u;
        goto label_4823a4;
    }
    ctx->pc = 0x48239Cu;
    {
        const bool branch_taken_0x48239c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x48239c) {
            ctx->pc = 0x4823ACu;
            goto label_4823ac;
        }
    }
    ctx->pc = 0x4823A4u;
label_4823a4:
    // 0x4823a4: 0x10000042  b           . + 4 + (0x42 << 2)
label_4823a8:
    if (ctx->pc == 0x4823A8u) {
        ctx->pc = 0x4823ACu;
        goto label_4823ac;
    }
    ctx->pc = 0x4823A4u;
    {
        const bool branch_taken_0x4823a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4823a4) {
            ctx->pc = 0x4824B0u;
            goto label_4824b0;
        }
    }
    ctx->pc = 0x4823ACu;
label_4823ac:
    // 0x4823ac: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4823acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4823b0:
    // 0x4823b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4823b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4823b4:
    // 0x4823b4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4823b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4823b8:
    // 0x4823b8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4823b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4823bc:
    // 0x4823bc: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x4823bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_4823c0:
    // 0x4823c0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4823c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4823c4:
    // 0x4823c4: 0x320f809  jalr        $t9
label_4823c8:
    if (ctx->pc == 0x4823C8u) {
        ctx->pc = 0x4823C8u;
            // 0x4823c8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4823CCu;
        goto label_4823cc;
    }
    ctx->pc = 0x4823C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4823CCu);
        ctx->pc = 0x4823C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4823C4u;
            // 0x4823c8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4823CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4823CCu; }
            if (ctx->pc != 0x4823CCu) { return; }
        }
        }
    }
    ctx->pc = 0x4823CCu;
label_4823cc:
    // 0x4823cc: 0x10000038  b           . + 4 + (0x38 << 2)
label_4823d0:
    if (ctx->pc == 0x4823D0u) {
        ctx->pc = 0x4823D4u;
        goto label_4823d4;
    }
    ctx->pc = 0x4823CCu;
    {
        const bool branch_taken_0x4823cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4823cc) {
            ctx->pc = 0x4824B0u;
            goto label_4824b0;
        }
    }
    ctx->pc = 0x4823D4u;
label_4823d4:
    // 0x4823d4: 0x8eb00070  lw          $s0, 0x70($s5)
    ctx->pc = 0x4823d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_4823d8:
    // 0x4823d8: 0x12000035  beqz        $s0, . + 4 + (0x35 << 2)
label_4823dc:
    if (ctx->pc == 0x4823DCu) {
        ctx->pc = 0x4823E0u;
        goto label_4823e0;
    }
    ctx->pc = 0x4823D8u;
    {
        const bool branch_taken_0x4823d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4823d8) {
            ctx->pc = 0x4824B0u;
            goto label_4824b0;
        }
    }
    ctx->pc = 0x4823E0u;
label_4823e0:
    // 0x4823e0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4823e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4823e4:
    // 0x4823e4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4823e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4823e8:
    // 0x4823e8: 0x8c76e378  lw          $s6, -0x1C88($v1)
    ctx->pc = 0x4823e8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_4823ec:
    // 0x4823ec: 0x26b30084  addiu       $s3, $s5, 0x84
    ctx->pc = 0x4823ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
label_4823f0:
    // 0x4823f0: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x4823f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4823f4:
    // 0x4823f4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4823f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4823f8:
    // 0x4823f8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4823f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4823fc:
    // 0x4823fc: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4823fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_482400:
    // 0x482400: 0x8c64d120  lw          $a0, -0x2EE0($v1)
    ctx->pc = 0x482400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_482404:
    // 0x482404: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x482404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_482408:
    // 0x482408: 0x8cb40130  lw          $s4, 0x130($a1)
    ctx->pc = 0x482408u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_48240c:
    // 0x48240c: 0x8c5ee370  lw          $fp, -0x1C90($v0)
    ctx->pc = 0x48240cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_482410:
    // 0x482410: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x482410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_482414:
    // 0x482414: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x482414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_482418:
    // 0x482418: 0x142880  sll         $a1, $s4, 2
    ctx->pc = 0x482418u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_48241c:
    // 0x48241c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x48241cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_482420:
    // 0x482420: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x482420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_482424:
    // 0x482424: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x482424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_482428:
    // 0x482428: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x482428u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_48242c:
    // 0x48242c: 0x24970010  addiu       $s7, $a0, 0x10
    ctx->pc = 0x48242cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_482430:
    // 0x482430: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x482430u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_482434:
    // 0x482434: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x482434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_482438:
    // 0x482438: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x482438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_48243c:
    // 0x48243c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x48243cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_482440:
    // 0x482440: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x482440u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_482444:
    // 0x482444: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x482444u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_482448:
    // 0x482448: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x482448u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_48244c:
    // 0x48244c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x48244cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_482450:
    // 0x482450: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x482450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_482454:
    // 0x482454: 0xc120ac0  jal         func_482B00
label_482458:
    if (ctx->pc == 0x482458u) {
        ctx->pc = 0x482458u;
            // 0x482458: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48245Cu;
        goto label_48245c;
    }
    ctx->pc = 0x482454u;
    SET_GPR_U32(ctx, 31, 0x48245Cu);
    ctx->pc = 0x482458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482454u;
            // 0x482458: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x482B00u;
    if (runtime->hasFunction(0x482B00u)) {
        auto targetFn = runtime->lookupFunction(0x482B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48245Cu; }
        if (ctx->pc != 0x48245Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00482B00_0x482b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48245Cu; }
        if (ctx->pc != 0x48245Cu) { return; }
    }
    ctx->pc = 0x48245Cu;
label_48245c:
    // 0x48245c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x48245cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_482460:
    // 0x482460: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x482460u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_482464:
    // 0x482464: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_482468:
    if (ctx->pc == 0x482468u) {
        ctx->pc = 0x482468u;
            // 0x482468: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x48246Cu;
        goto label_48246c;
    }
    ctx->pc = 0x482464u;
    {
        const bool branch_taken_0x482464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x482468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x482464u;
            // 0x482468: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x482464) {
            ctx->pc = 0x482434u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_482434;
        }
    }
    ctx->pc = 0x48246Cu;
label_48246c:
    // 0x48246c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x48246cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_482470:
    // 0x482470: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x482470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_482474:
    // 0x482474: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
label_482478:
    if (ctx->pc == 0x482478u) {
        ctx->pc = 0x48247Cu;
        goto label_48247c;
    }
    ctx->pc = 0x482474u;
    {
        const bool branch_taken_0x482474 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x482474) {
            ctx->pc = 0x4824B0u;
            goto label_4824b0;
        }
    }
    ctx->pc = 0x48247Cu;
label_48247c:
    // 0x48247c: 0xc04e738  jal         func_139CE0
label_482480:
    if (ctx->pc == 0x482480u) {
        ctx->pc = 0x482480u;
            // 0x482480: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x482484u;
        goto label_482484;
    }
    ctx->pc = 0x48247Cu;
    SET_GPR_U32(ctx, 31, 0x482484u);
    ctx->pc = 0x482480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48247Cu;
            // 0x482480: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482484u; }
        if (ctx->pc != 0x482484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482484u; }
        if (ctx->pc != 0x482484u) { return; }
    }
    ctx->pc = 0x482484u;
label_482484:
    // 0x482484: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x482484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_482488:
    // 0x482488: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x482488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_48248c:
    // 0x48248c: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x48248cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_482490:
    // 0x482490: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x482490u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_482494:
    // 0x482494: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x482494u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_482498:
    // 0x482498: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x482498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_48249c:
    // 0x48249c: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x48249cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_4824a0:
    // 0x4824a0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4824a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4824a4:
    // 0x4824a4: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x4824a4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_4824a8:
    // 0x4824a8: 0xc055ea8  jal         func_157AA0
label_4824ac:
    if (ctx->pc == 0x4824ACu) {
        ctx->pc = 0x4824ACu;
            // 0x4824ac: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4824B0u;
        goto label_4824b0;
    }
    ctx->pc = 0x4824A8u;
    SET_GPR_U32(ctx, 31, 0x4824B0u);
    ctx->pc = 0x4824ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4824A8u;
            // 0x4824ac: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4824B0u; }
        if (ctx->pc != 0x4824B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4824B0u; }
        if (ctx->pc != 0x4824B0u) { return; }
    }
    ctx->pc = 0x4824B0u;
label_4824b0:
    // 0x4824b0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4824b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4824b4:
    // 0x4824b4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x4824b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4824b8:
    // 0x4824b8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4824b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4824bc:
    // 0x4824bc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4824bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4824c0:
    // 0x4824c0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4824c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4824c4:
    // 0x4824c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4824c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4824c8:
    // 0x4824c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4824c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4824cc:
    // 0x4824cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4824ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4824d0:
    // 0x4824d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4824d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4824d4:
    // 0x4824d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4824d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4824d8:
    // 0x4824d8: 0x3e00008  jr          $ra
label_4824dc:
    if (ctx->pc == 0x4824DCu) {
        ctx->pc = 0x4824DCu;
            // 0x4824dc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x4824E0u;
        goto label_4824e0;
    }
    ctx->pc = 0x4824D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4824DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4824D8u;
            // 0x4824dc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4824E0u;
label_4824e0:
    // 0x4824e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4824e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4824e4:
    // 0x4824e4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4824e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4824e8:
    // 0x4824e8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4824e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4824ec:
    // 0x4824ec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4824ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4824f0:
    // 0x4824f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4824f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4824f4:
    // 0x4824f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4824f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4824f8:
    // 0x4824f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4824f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4824fc:
    // 0x4824fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4824fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_482500:
    // 0x482500: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x482500u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_482504:
    // 0x482504: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_482508:
    if (ctx->pc == 0x482508u) {
        ctx->pc = 0x482508u;
            // 0x482508: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48250Cu;
        goto label_48250c;
    }
    ctx->pc = 0x482504u;
    {
        const bool branch_taken_0x482504 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x482508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x482504u;
            // 0x482508: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x482504) {
            ctx->pc = 0x482554u;
            goto label_482554;
        }
    }
    ctx->pc = 0x48250Cu;
label_48250c:
    // 0x48250c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x48250cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_482510:
    // 0x482510: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
label_482514:
    if (ctx->pc == 0x482514u) {
        ctx->pc = 0x482518u;
        goto label_482518;
    }
    ctx->pc = 0x482510u;
    {
        const bool branch_taken_0x482510 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x482510) {
            ctx->pc = 0x48252Cu;
            goto label_48252c;
        }
    }
    ctx->pc = 0x482518u;
label_482518:
    // 0x482518: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x482518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_48251c:
    // 0x48251c: 0x10a30020  beq         $a1, $v1, . + 4 + (0x20 << 2)
label_482520:
    if (ctx->pc == 0x482520u) {
        ctx->pc = 0x482524u;
        goto label_482524;
    }
    ctx->pc = 0x48251Cu;
    {
        const bool branch_taken_0x48251c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x48251c) {
            ctx->pc = 0x4825A0u;
            goto label_4825a0;
        }
    }
    ctx->pc = 0x482524u;
label_482524:
    // 0x482524: 0x1000001e  b           . + 4 + (0x1E << 2)
label_482528:
    if (ctx->pc == 0x482528u) {
        ctx->pc = 0x48252Cu;
        goto label_48252c;
    }
    ctx->pc = 0x482524u;
    {
        const bool branch_taken_0x482524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x482524) {
            ctx->pc = 0x4825A0u;
            goto label_4825a0;
        }
    }
    ctx->pc = 0x48252Cu;
label_48252c:
    // 0x48252c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x48252cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_482530:
    // 0x482530: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x482530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_482534:
    // 0x482534: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x482534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_482538:
    // 0x482538: 0x28630006  slti        $v1, $v1, 0x6
    ctx->pc = 0x482538u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_48253c:
    // 0x48253c: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
label_482540:
    if (ctx->pc == 0x482540u) {
        ctx->pc = 0x482544u;
        goto label_482544;
    }
    ctx->pc = 0x48253Cu;
    {
        const bool branch_taken_0x48253c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48253c) {
            ctx->pc = 0x4825A0u;
            goto label_4825a0;
        }
    }
    ctx->pc = 0x482544u;
label_482544:
    // 0x482544: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x482544u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_482548:
    // 0x482548: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x482548u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_48254c:
    // 0x48254c: 0x320f809  jalr        $t9
label_482550:
    if (ctx->pc == 0x482550u) {
        ctx->pc = 0x482554u;
        goto label_482554;
    }
    ctx->pc = 0x48254Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x482554u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x482554u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x482554u; }
            if (ctx->pc != 0x482554u) { return; }
        }
        }
    }
    ctx->pc = 0x482554u;
label_482554:
    // 0x482554: 0x8e320070  lw          $s2, 0x70($s1)
    ctx->pc = 0x482554u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_482558:
    // 0x482558: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
label_48255c:
    if (ctx->pc == 0x48255Cu) {
        ctx->pc = 0x482560u;
        goto label_482560;
    }
    ctx->pc = 0x482558u;
    {
        const bool branch_taken_0x482558 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x482558) {
            ctx->pc = 0x4825A0u;
            goto label_4825a0;
        }
    }
    ctx->pc = 0x482560u;
label_482560:
    // 0x482560: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x482560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_482564:
    // 0x482564: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x482564u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_482568:
    // 0x482568: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x482568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_48256c:
    // 0x48256c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x48256cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_482570:
    // 0x482570: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x482570u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_482574:
    // 0x482574: 0xc0f4cb0  jal         func_3D32C0
label_482578:
    if (ctx->pc == 0x482578u) {
        ctx->pc = 0x482578u;
            // 0x482578: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48257Cu;
        goto label_48257c;
    }
    ctx->pc = 0x482574u;
    SET_GPR_U32(ctx, 31, 0x48257Cu);
    ctx->pc = 0x482578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482574u;
            // 0x482578: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D32C0u;
    if (runtime->hasFunction(0x3D32C0u)) {
        auto targetFn = runtime->lookupFunction(0x3D32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48257Cu; }
        if (ctx->pc != 0x48257Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D32C0_0x3d32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48257Cu; }
        if (ctx->pc != 0x48257Cu) { return; }
    }
    ctx->pc = 0x48257Cu;
label_48257c:
    // 0x48257c: 0xc0e3658  jal         func_38D960
label_482580:
    if (ctx->pc == 0x482580u) {
        ctx->pc = 0x482580u;
            // 0x482580: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x482584u;
        goto label_482584;
    }
    ctx->pc = 0x48257Cu;
    SET_GPR_U32(ctx, 31, 0x482584u);
    ctx->pc = 0x482580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48257Cu;
            // 0x482580: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482584u; }
        if (ctx->pc != 0x482584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482584u; }
        if (ctx->pc != 0x482584u) { return; }
    }
    ctx->pc = 0x482584u;
label_482584:
    // 0x482584: 0xc0f4ac4  jal         func_3D2B10
label_482588:
    if (ctx->pc == 0x482588u) {
        ctx->pc = 0x482588u;
            // 0x482588: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48258Cu;
        goto label_48258c;
    }
    ctx->pc = 0x482584u;
    SET_GPR_U32(ctx, 31, 0x48258Cu);
    ctx->pc = 0x482588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482584u;
            // 0x482588: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D2B10u;
    if (runtime->hasFunction(0x3D2B10u)) {
        auto targetFn = runtime->lookupFunction(0x3D2B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48258Cu; }
        if (ctx->pc != 0x48258Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D2B10_0x3d2b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48258Cu; }
        if (ctx->pc != 0x48258Cu) { return; }
    }
    ctx->pc = 0x48258Cu;
label_48258c:
    // 0x48258c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x48258cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_482590:
    // 0x482590: 0x212182b  sltu        $v1, $s0, $s2
    ctx->pc = 0x482590u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_482594:
    // 0x482594: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_482598:
    if (ctx->pc == 0x482598u) {
        ctx->pc = 0x482598u;
            // 0x482598: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x48259Cu;
        goto label_48259c;
    }
    ctx->pc = 0x482594u;
    {
        const bool branch_taken_0x482594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x482598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x482594u;
            // 0x482598: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x482594) {
            ctx->pc = 0x482568u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_482568;
        }
    }
    ctx->pc = 0x48259Cu;
label_48259c:
    // 0x48259c: 0x0  nop
    ctx->pc = 0x48259cu;
    // NOP
label_4825a0:
    // 0x4825a0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4825a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4825a4:
    // 0x4825a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4825a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4825a8:
    // 0x4825a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4825a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4825ac:
    // 0x4825ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4825acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4825b0:
    // 0x4825b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4825b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4825b4:
    // 0x4825b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4825b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4825b8:
    // 0x4825b8: 0x3e00008  jr          $ra
label_4825bc:
    if (ctx->pc == 0x4825BCu) {
        ctx->pc = 0x4825BCu;
            // 0x4825bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4825C0u;
        goto label_4825c0;
    }
    ctx->pc = 0x4825B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4825BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4825B8u;
            // 0x4825bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4825C0u;
label_4825c0:
    // 0x4825c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4825c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4825c4:
    // 0x4825c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4825c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4825c8:
    // 0x4825c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4825c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4825cc:
    // 0x4825cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4825ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4825d0:
    // 0x4825d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4825d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4825d4:
    // 0x4825d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4825d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4825d8:
    // 0x4825d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4825d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4825dc:
    // 0x4825dc: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4825dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4825e0:
    // 0x4825e0: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_4825e4:
    if (ctx->pc == 0x4825E4u) {
        ctx->pc = 0x4825E4u;
            // 0x4825e4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4825E8u;
        goto label_4825e8;
    }
    ctx->pc = 0x4825E0u;
    {
        const bool branch_taken_0x4825e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4825E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4825E0u;
            // 0x4825e4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4825e0) {
            ctx->pc = 0x482620u;
            goto label_482620;
        }
    }
    ctx->pc = 0x4825E8u;
label_4825e8:
    // 0x4825e8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4825e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4825ec:
    // 0x4825ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4825ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4825f0:
    // 0x4825f0: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x4825f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_4825f4:
    // 0x4825f4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4825f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4825f8:
    // 0x4825f8: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x4825f8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4825fc:
    // 0x4825fc: 0xc120d38  jal         func_4834E0
label_482600:
    if (ctx->pc == 0x482600u) {
        ctx->pc = 0x482600u;
            // 0x482600: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x482604u;
        goto label_482604;
    }
    ctx->pc = 0x4825FCu;
    SET_GPR_U32(ctx, 31, 0x482604u);
    ctx->pc = 0x482600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4825FCu;
            // 0x482600: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4834E0u;
    if (runtime->hasFunction(0x4834E0u)) {
        auto targetFn = runtime->lookupFunction(0x4834E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482604u; }
        if (ctx->pc != 0x482604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004834E0_0x4834e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482604u; }
        if (ctx->pc != 0x482604u) { return; }
    }
    ctx->pc = 0x482604u;
label_482604:
    // 0x482604: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x482604u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_482608:
    // 0x482608: 0xae8000e0  sw          $zero, 0xE0($s4)
    ctx->pc = 0x482608u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 224), GPR_U32(ctx, 0));
label_48260c:
    // 0x48260c: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x48260cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_482610:
    // 0x482610: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x482610u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_482614:
    // 0x482614: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_482618:
    if (ctx->pc == 0x482618u) {
        ctx->pc = 0x482618u;
            // 0x482618: 0xae80020c  sw          $zero, 0x20C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 524), GPR_U32(ctx, 0));
        ctx->pc = 0x48261Cu;
        goto label_48261c;
    }
    ctx->pc = 0x482614u;
    {
        const bool branch_taken_0x482614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x482618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x482614u;
            // 0x482618: 0xae80020c  sw          $zero, 0x20C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 524), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x482614) {
            ctx->pc = 0x4825F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4825f0;
        }
    }
    ctx->pc = 0x48261Cu;
label_48261c:
    // 0x48261c: 0x0  nop
    ctx->pc = 0x48261cu;
    // NOP
label_482620:
    // 0x482620: 0x92640010  lbu         $a0, 0x10($s3)
    ctx->pc = 0x482620u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 16)));
label_482624:
    // 0x482624: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x482624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_482628:
    // 0x482628: 0x50830007  beql        $a0, $v1, . + 4 + (0x7 << 2)
label_48262c:
    if (ctx->pc == 0x48262Cu) {
        ctx->pc = 0x48262Cu;
            // 0x48262c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x482630u;
        goto label_482630;
    }
    ctx->pc = 0x482628u;
    {
        const bool branch_taken_0x482628 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x482628) {
            ctx->pc = 0x48262Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x482628u;
            // 0x48262c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x482648u;
            goto label_482648;
        }
    }
    ctx->pc = 0x482630u;
label_482630:
    // 0x482630: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x482630u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_482634:
    // 0x482634: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x482634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_482638:
    // 0x482638: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x482638u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_48263c:
    // 0x48263c: 0x320f809  jalr        $t9
label_482640:
    if (ctx->pc == 0x482640u) {
        ctx->pc = 0x482640u;
            // 0x482640: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x482644u;
        goto label_482644;
    }
    ctx->pc = 0x48263Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x482644u);
        ctx->pc = 0x482640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48263Cu;
            // 0x482640: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x482644u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x482644u; }
            if (ctx->pc != 0x482644u) { return; }
        }
        }
    }
    ctx->pc = 0x482644u;
label_482644:
    // 0x482644: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x482644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_482648:
    // 0x482648: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x482648u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_48264c:
    // 0x48264c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x48264cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_482650:
    // 0x482650: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x482650u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_482654:
    // 0x482654: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x482654u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_482658:
    // 0x482658: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x482658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48265c:
    // 0x48265c: 0x3e00008  jr          $ra
label_482660:
    if (ctx->pc == 0x482660u) {
        ctx->pc = 0x482660u;
            // 0x482660: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x482664u;
        goto label_482664;
    }
    ctx->pc = 0x48265Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x482660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48265Cu;
            // 0x482660: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x482664u;
label_482664:
    // 0x482664: 0x0  nop
    ctx->pc = 0x482664u;
    // NOP
label_482668:
    // 0x482668: 0x0  nop
    ctx->pc = 0x482668u;
    // NOP
label_48266c:
    // 0x48266c: 0x0  nop
    ctx->pc = 0x48266cu;
    // NOP
}
