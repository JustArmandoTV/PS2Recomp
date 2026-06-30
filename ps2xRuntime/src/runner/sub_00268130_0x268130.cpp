#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00268130
// Address: 0x268130 - 0x2687e0
void sub_00268130_0x268130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268130_0x268130");
#endif

    switch (ctx->pc) {
        case 0x268130u: goto label_268130;
        case 0x268134u: goto label_268134;
        case 0x268138u: goto label_268138;
        case 0x26813cu: goto label_26813c;
        case 0x268140u: goto label_268140;
        case 0x268144u: goto label_268144;
        case 0x268148u: goto label_268148;
        case 0x26814cu: goto label_26814c;
        case 0x268150u: goto label_268150;
        case 0x268154u: goto label_268154;
        case 0x268158u: goto label_268158;
        case 0x26815cu: goto label_26815c;
        case 0x268160u: goto label_268160;
        case 0x268164u: goto label_268164;
        case 0x268168u: goto label_268168;
        case 0x26816cu: goto label_26816c;
        case 0x268170u: goto label_268170;
        case 0x268174u: goto label_268174;
        case 0x268178u: goto label_268178;
        case 0x26817cu: goto label_26817c;
        case 0x268180u: goto label_268180;
        case 0x268184u: goto label_268184;
        case 0x268188u: goto label_268188;
        case 0x26818cu: goto label_26818c;
        case 0x268190u: goto label_268190;
        case 0x268194u: goto label_268194;
        case 0x268198u: goto label_268198;
        case 0x26819cu: goto label_26819c;
        case 0x2681a0u: goto label_2681a0;
        case 0x2681a4u: goto label_2681a4;
        case 0x2681a8u: goto label_2681a8;
        case 0x2681acu: goto label_2681ac;
        case 0x2681b0u: goto label_2681b0;
        case 0x2681b4u: goto label_2681b4;
        case 0x2681b8u: goto label_2681b8;
        case 0x2681bcu: goto label_2681bc;
        case 0x2681c0u: goto label_2681c0;
        case 0x2681c4u: goto label_2681c4;
        case 0x2681c8u: goto label_2681c8;
        case 0x2681ccu: goto label_2681cc;
        case 0x2681d0u: goto label_2681d0;
        case 0x2681d4u: goto label_2681d4;
        case 0x2681d8u: goto label_2681d8;
        case 0x2681dcu: goto label_2681dc;
        case 0x2681e0u: goto label_2681e0;
        case 0x2681e4u: goto label_2681e4;
        case 0x2681e8u: goto label_2681e8;
        case 0x2681ecu: goto label_2681ec;
        case 0x2681f0u: goto label_2681f0;
        case 0x2681f4u: goto label_2681f4;
        case 0x2681f8u: goto label_2681f8;
        case 0x2681fcu: goto label_2681fc;
        case 0x268200u: goto label_268200;
        case 0x268204u: goto label_268204;
        case 0x268208u: goto label_268208;
        case 0x26820cu: goto label_26820c;
        case 0x268210u: goto label_268210;
        case 0x268214u: goto label_268214;
        case 0x268218u: goto label_268218;
        case 0x26821cu: goto label_26821c;
        case 0x268220u: goto label_268220;
        case 0x268224u: goto label_268224;
        case 0x268228u: goto label_268228;
        case 0x26822cu: goto label_26822c;
        case 0x268230u: goto label_268230;
        case 0x268234u: goto label_268234;
        case 0x268238u: goto label_268238;
        case 0x26823cu: goto label_26823c;
        case 0x268240u: goto label_268240;
        case 0x268244u: goto label_268244;
        case 0x268248u: goto label_268248;
        case 0x26824cu: goto label_26824c;
        case 0x268250u: goto label_268250;
        case 0x268254u: goto label_268254;
        case 0x268258u: goto label_268258;
        case 0x26825cu: goto label_26825c;
        case 0x268260u: goto label_268260;
        case 0x268264u: goto label_268264;
        case 0x268268u: goto label_268268;
        case 0x26826cu: goto label_26826c;
        case 0x268270u: goto label_268270;
        case 0x268274u: goto label_268274;
        case 0x268278u: goto label_268278;
        case 0x26827cu: goto label_26827c;
        case 0x268280u: goto label_268280;
        case 0x268284u: goto label_268284;
        case 0x268288u: goto label_268288;
        case 0x26828cu: goto label_26828c;
        case 0x268290u: goto label_268290;
        case 0x268294u: goto label_268294;
        case 0x268298u: goto label_268298;
        case 0x26829cu: goto label_26829c;
        case 0x2682a0u: goto label_2682a0;
        case 0x2682a4u: goto label_2682a4;
        case 0x2682a8u: goto label_2682a8;
        case 0x2682acu: goto label_2682ac;
        case 0x2682b0u: goto label_2682b0;
        case 0x2682b4u: goto label_2682b4;
        case 0x2682b8u: goto label_2682b8;
        case 0x2682bcu: goto label_2682bc;
        case 0x2682c0u: goto label_2682c0;
        case 0x2682c4u: goto label_2682c4;
        case 0x2682c8u: goto label_2682c8;
        case 0x2682ccu: goto label_2682cc;
        case 0x2682d0u: goto label_2682d0;
        case 0x2682d4u: goto label_2682d4;
        case 0x2682d8u: goto label_2682d8;
        case 0x2682dcu: goto label_2682dc;
        case 0x2682e0u: goto label_2682e0;
        case 0x2682e4u: goto label_2682e4;
        case 0x2682e8u: goto label_2682e8;
        case 0x2682ecu: goto label_2682ec;
        case 0x2682f0u: goto label_2682f0;
        case 0x2682f4u: goto label_2682f4;
        case 0x2682f8u: goto label_2682f8;
        case 0x2682fcu: goto label_2682fc;
        case 0x268300u: goto label_268300;
        case 0x268304u: goto label_268304;
        case 0x268308u: goto label_268308;
        case 0x26830cu: goto label_26830c;
        case 0x268310u: goto label_268310;
        case 0x268314u: goto label_268314;
        case 0x268318u: goto label_268318;
        case 0x26831cu: goto label_26831c;
        case 0x268320u: goto label_268320;
        case 0x268324u: goto label_268324;
        case 0x268328u: goto label_268328;
        case 0x26832cu: goto label_26832c;
        case 0x268330u: goto label_268330;
        case 0x268334u: goto label_268334;
        case 0x268338u: goto label_268338;
        case 0x26833cu: goto label_26833c;
        case 0x268340u: goto label_268340;
        case 0x268344u: goto label_268344;
        case 0x268348u: goto label_268348;
        case 0x26834cu: goto label_26834c;
        case 0x268350u: goto label_268350;
        case 0x268354u: goto label_268354;
        case 0x268358u: goto label_268358;
        case 0x26835cu: goto label_26835c;
        case 0x268360u: goto label_268360;
        case 0x268364u: goto label_268364;
        case 0x268368u: goto label_268368;
        case 0x26836cu: goto label_26836c;
        case 0x268370u: goto label_268370;
        case 0x268374u: goto label_268374;
        case 0x268378u: goto label_268378;
        case 0x26837cu: goto label_26837c;
        case 0x268380u: goto label_268380;
        case 0x268384u: goto label_268384;
        case 0x268388u: goto label_268388;
        case 0x26838cu: goto label_26838c;
        case 0x268390u: goto label_268390;
        case 0x268394u: goto label_268394;
        case 0x268398u: goto label_268398;
        case 0x26839cu: goto label_26839c;
        case 0x2683a0u: goto label_2683a0;
        case 0x2683a4u: goto label_2683a4;
        case 0x2683a8u: goto label_2683a8;
        case 0x2683acu: goto label_2683ac;
        case 0x2683b0u: goto label_2683b0;
        case 0x2683b4u: goto label_2683b4;
        case 0x2683b8u: goto label_2683b8;
        case 0x2683bcu: goto label_2683bc;
        case 0x2683c0u: goto label_2683c0;
        case 0x2683c4u: goto label_2683c4;
        case 0x2683c8u: goto label_2683c8;
        case 0x2683ccu: goto label_2683cc;
        case 0x2683d0u: goto label_2683d0;
        case 0x2683d4u: goto label_2683d4;
        case 0x2683d8u: goto label_2683d8;
        case 0x2683dcu: goto label_2683dc;
        case 0x2683e0u: goto label_2683e0;
        case 0x2683e4u: goto label_2683e4;
        case 0x2683e8u: goto label_2683e8;
        case 0x2683ecu: goto label_2683ec;
        case 0x2683f0u: goto label_2683f0;
        case 0x2683f4u: goto label_2683f4;
        case 0x2683f8u: goto label_2683f8;
        case 0x2683fcu: goto label_2683fc;
        case 0x268400u: goto label_268400;
        case 0x268404u: goto label_268404;
        case 0x268408u: goto label_268408;
        case 0x26840cu: goto label_26840c;
        case 0x268410u: goto label_268410;
        case 0x268414u: goto label_268414;
        case 0x268418u: goto label_268418;
        case 0x26841cu: goto label_26841c;
        case 0x268420u: goto label_268420;
        case 0x268424u: goto label_268424;
        case 0x268428u: goto label_268428;
        case 0x26842cu: goto label_26842c;
        case 0x268430u: goto label_268430;
        case 0x268434u: goto label_268434;
        case 0x268438u: goto label_268438;
        case 0x26843cu: goto label_26843c;
        case 0x268440u: goto label_268440;
        case 0x268444u: goto label_268444;
        case 0x268448u: goto label_268448;
        case 0x26844cu: goto label_26844c;
        case 0x268450u: goto label_268450;
        case 0x268454u: goto label_268454;
        case 0x268458u: goto label_268458;
        case 0x26845cu: goto label_26845c;
        case 0x268460u: goto label_268460;
        case 0x268464u: goto label_268464;
        case 0x268468u: goto label_268468;
        case 0x26846cu: goto label_26846c;
        case 0x268470u: goto label_268470;
        case 0x268474u: goto label_268474;
        case 0x268478u: goto label_268478;
        case 0x26847cu: goto label_26847c;
        case 0x268480u: goto label_268480;
        case 0x268484u: goto label_268484;
        case 0x268488u: goto label_268488;
        case 0x26848cu: goto label_26848c;
        case 0x268490u: goto label_268490;
        case 0x268494u: goto label_268494;
        case 0x268498u: goto label_268498;
        case 0x26849cu: goto label_26849c;
        case 0x2684a0u: goto label_2684a0;
        case 0x2684a4u: goto label_2684a4;
        case 0x2684a8u: goto label_2684a8;
        case 0x2684acu: goto label_2684ac;
        case 0x2684b0u: goto label_2684b0;
        case 0x2684b4u: goto label_2684b4;
        case 0x2684b8u: goto label_2684b8;
        case 0x2684bcu: goto label_2684bc;
        case 0x2684c0u: goto label_2684c0;
        case 0x2684c4u: goto label_2684c4;
        case 0x2684c8u: goto label_2684c8;
        case 0x2684ccu: goto label_2684cc;
        case 0x2684d0u: goto label_2684d0;
        case 0x2684d4u: goto label_2684d4;
        case 0x2684d8u: goto label_2684d8;
        case 0x2684dcu: goto label_2684dc;
        case 0x2684e0u: goto label_2684e0;
        case 0x2684e4u: goto label_2684e4;
        case 0x2684e8u: goto label_2684e8;
        case 0x2684ecu: goto label_2684ec;
        case 0x2684f0u: goto label_2684f0;
        case 0x2684f4u: goto label_2684f4;
        case 0x2684f8u: goto label_2684f8;
        case 0x2684fcu: goto label_2684fc;
        case 0x268500u: goto label_268500;
        case 0x268504u: goto label_268504;
        case 0x268508u: goto label_268508;
        case 0x26850cu: goto label_26850c;
        case 0x268510u: goto label_268510;
        case 0x268514u: goto label_268514;
        case 0x268518u: goto label_268518;
        case 0x26851cu: goto label_26851c;
        case 0x268520u: goto label_268520;
        case 0x268524u: goto label_268524;
        case 0x268528u: goto label_268528;
        case 0x26852cu: goto label_26852c;
        case 0x268530u: goto label_268530;
        case 0x268534u: goto label_268534;
        case 0x268538u: goto label_268538;
        case 0x26853cu: goto label_26853c;
        case 0x268540u: goto label_268540;
        case 0x268544u: goto label_268544;
        case 0x268548u: goto label_268548;
        case 0x26854cu: goto label_26854c;
        case 0x268550u: goto label_268550;
        case 0x268554u: goto label_268554;
        case 0x268558u: goto label_268558;
        case 0x26855cu: goto label_26855c;
        case 0x268560u: goto label_268560;
        case 0x268564u: goto label_268564;
        case 0x268568u: goto label_268568;
        case 0x26856cu: goto label_26856c;
        case 0x268570u: goto label_268570;
        case 0x268574u: goto label_268574;
        case 0x268578u: goto label_268578;
        case 0x26857cu: goto label_26857c;
        case 0x268580u: goto label_268580;
        case 0x268584u: goto label_268584;
        case 0x268588u: goto label_268588;
        case 0x26858cu: goto label_26858c;
        case 0x268590u: goto label_268590;
        case 0x268594u: goto label_268594;
        case 0x268598u: goto label_268598;
        case 0x26859cu: goto label_26859c;
        case 0x2685a0u: goto label_2685a0;
        case 0x2685a4u: goto label_2685a4;
        case 0x2685a8u: goto label_2685a8;
        case 0x2685acu: goto label_2685ac;
        case 0x2685b0u: goto label_2685b0;
        case 0x2685b4u: goto label_2685b4;
        case 0x2685b8u: goto label_2685b8;
        case 0x2685bcu: goto label_2685bc;
        case 0x2685c0u: goto label_2685c0;
        case 0x2685c4u: goto label_2685c4;
        case 0x2685c8u: goto label_2685c8;
        case 0x2685ccu: goto label_2685cc;
        case 0x2685d0u: goto label_2685d0;
        case 0x2685d4u: goto label_2685d4;
        case 0x2685d8u: goto label_2685d8;
        case 0x2685dcu: goto label_2685dc;
        case 0x2685e0u: goto label_2685e0;
        case 0x2685e4u: goto label_2685e4;
        case 0x2685e8u: goto label_2685e8;
        case 0x2685ecu: goto label_2685ec;
        case 0x2685f0u: goto label_2685f0;
        case 0x2685f4u: goto label_2685f4;
        case 0x2685f8u: goto label_2685f8;
        case 0x2685fcu: goto label_2685fc;
        case 0x268600u: goto label_268600;
        case 0x268604u: goto label_268604;
        case 0x268608u: goto label_268608;
        case 0x26860cu: goto label_26860c;
        case 0x268610u: goto label_268610;
        case 0x268614u: goto label_268614;
        case 0x268618u: goto label_268618;
        case 0x26861cu: goto label_26861c;
        case 0x268620u: goto label_268620;
        case 0x268624u: goto label_268624;
        case 0x268628u: goto label_268628;
        case 0x26862cu: goto label_26862c;
        case 0x268630u: goto label_268630;
        case 0x268634u: goto label_268634;
        case 0x268638u: goto label_268638;
        case 0x26863cu: goto label_26863c;
        case 0x268640u: goto label_268640;
        case 0x268644u: goto label_268644;
        case 0x268648u: goto label_268648;
        case 0x26864cu: goto label_26864c;
        case 0x268650u: goto label_268650;
        case 0x268654u: goto label_268654;
        case 0x268658u: goto label_268658;
        case 0x26865cu: goto label_26865c;
        case 0x268660u: goto label_268660;
        case 0x268664u: goto label_268664;
        case 0x268668u: goto label_268668;
        case 0x26866cu: goto label_26866c;
        case 0x268670u: goto label_268670;
        case 0x268674u: goto label_268674;
        case 0x268678u: goto label_268678;
        case 0x26867cu: goto label_26867c;
        case 0x268680u: goto label_268680;
        case 0x268684u: goto label_268684;
        case 0x268688u: goto label_268688;
        case 0x26868cu: goto label_26868c;
        case 0x268690u: goto label_268690;
        case 0x268694u: goto label_268694;
        case 0x268698u: goto label_268698;
        case 0x26869cu: goto label_26869c;
        case 0x2686a0u: goto label_2686a0;
        case 0x2686a4u: goto label_2686a4;
        case 0x2686a8u: goto label_2686a8;
        case 0x2686acu: goto label_2686ac;
        case 0x2686b0u: goto label_2686b0;
        case 0x2686b4u: goto label_2686b4;
        case 0x2686b8u: goto label_2686b8;
        case 0x2686bcu: goto label_2686bc;
        case 0x2686c0u: goto label_2686c0;
        case 0x2686c4u: goto label_2686c4;
        case 0x2686c8u: goto label_2686c8;
        case 0x2686ccu: goto label_2686cc;
        case 0x2686d0u: goto label_2686d0;
        case 0x2686d4u: goto label_2686d4;
        case 0x2686d8u: goto label_2686d8;
        case 0x2686dcu: goto label_2686dc;
        case 0x2686e0u: goto label_2686e0;
        case 0x2686e4u: goto label_2686e4;
        case 0x2686e8u: goto label_2686e8;
        case 0x2686ecu: goto label_2686ec;
        case 0x2686f0u: goto label_2686f0;
        case 0x2686f4u: goto label_2686f4;
        case 0x2686f8u: goto label_2686f8;
        case 0x2686fcu: goto label_2686fc;
        case 0x268700u: goto label_268700;
        case 0x268704u: goto label_268704;
        case 0x268708u: goto label_268708;
        case 0x26870cu: goto label_26870c;
        case 0x268710u: goto label_268710;
        case 0x268714u: goto label_268714;
        case 0x268718u: goto label_268718;
        case 0x26871cu: goto label_26871c;
        case 0x268720u: goto label_268720;
        case 0x268724u: goto label_268724;
        case 0x268728u: goto label_268728;
        case 0x26872cu: goto label_26872c;
        case 0x268730u: goto label_268730;
        case 0x268734u: goto label_268734;
        case 0x268738u: goto label_268738;
        case 0x26873cu: goto label_26873c;
        case 0x268740u: goto label_268740;
        case 0x268744u: goto label_268744;
        case 0x268748u: goto label_268748;
        case 0x26874cu: goto label_26874c;
        case 0x268750u: goto label_268750;
        case 0x268754u: goto label_268754;
        case 0x268758u: goto label_268758;
        case 0x26875cu: goto label_26875c;
        case 0x268760u: goto label_268760;
        case 0x268764u: goto label_268764;
        case 0x268768u: goto label_268768;
        case 0x26876cu: goto label_26876c;
        case 0x268770u: goto label_268770;
        case 0x268774u: goto label_268774;
        case 0x268778u: goto label_268778;
        case 0x26877cu: goto label_26877c;
        case 0x268780u: goto label_268780;
        case 0x268784u: goto label_268784;
        case 0x268788u: goto label_268788;
        case 0x26878cu: goto label_26878c;
        case 0x268790u: goto label_268790;
        case 0x268794u: goto label_268794;
        case 0x268798u: goto label_268798;
        case 0x26879cu: goto label_26879c;
        case 0x2687a0u: goto label_2687a0;
        case 0x2687a4u: goto label_2687a4;
        case 0x2687a8u: goto label_2687a8;
        case 0x2687acu: goto label_2687ac;
        case 0x2687b0u: goto label_2687b0;
        case 0x2687b4u: goto label_2687b4;
        case 0x2687b8u: goto label_2687b8;
        case 0x2687bcu: goto label_2687bc;
        case 0x2687c0u: goto label_2687c0;
        case 0x2687c4u: goto label_2687c4;
        case 0x2687c8u: goto label_2687c8;
        case 0x2687ccu: goto label_2687cc;
        case 0x2687d0u: goto label_2687d0;
        case 0x2687d4u: goto label_2687d4;
        case 0x2687d8u: goto label_2687d8;
        case 0x2687dcu: goto label_2687dc;
        default: break;
    }

    ctx->pc = 0x268130u;

label_268130:
    // 0x268130: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x268130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_268134:
    // 0x268134: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x268134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_268138:
    // 0x268138: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x268138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_26813c:
    // 0x26813c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x26813cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_268140:
    // 0x268140: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x268140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_268144:
    // 0x268144: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x268144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
label_268148:
    // 0x268148: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x268148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_26814c:
    // 0x26814c: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26814cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_268150:
    // 0x268150: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x268150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_268154:
    // 0x268154: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x268154u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_268158:
    // 0x268158: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x268158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_26815c:
    // 0x26815c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x26815cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_268160:
    // 0x268160: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x268160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_268164:
    // 0x268164: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x268164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_268168:
    // 0x268168: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x268168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_26816c:
    // 0x26816c: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x26816cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_268170:
    // 0x268170: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x268170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_268174:
    // 0x268174: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x268174u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_268178:
    // 0x268178: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x268178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_26817c:
    // 0x26817c: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x26817cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_268180:
    // 0x268180: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x268180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_268184:
    // 0x268184: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x268184u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_268188:
    // 0x268188: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x268188u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_26818c:
    // 0x26818c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x26818cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_268190:
    // 0x268190: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x268190u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_268194:
    // 0x268194: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x268194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_268198:
    // 0x268198: 0xafa500dc  sw          $a1, 0xDC($sp)
    ctx->pc = 0x268198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 5));
label_26819c:
    // 0x26819c: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x26819cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2681a0:
    // 0x2681a0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2681a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2681a4:
    // 0x2681a4: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2681a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_2681a8:
    // 0x2681a8: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x2681a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2681ac:
    // 0x2681ac: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x2681acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_2681b0:
    // 0x2681b0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_2681b4:
    if (ctx->pc == 0x2681B4u) {
        ctx->pc = 0x2681B4u;
            // 0x2681b4: 0xe0a82d  daddu       $s5, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2681B8u;
        goto label_2681b8;
    }
    ctx->pc = 0x2681B0u;
    {
        const bool branch_taken_0x2681b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2681B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2681B0u;
            // 0x2681b4: 0xe0a82d  daddu       $s5, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2681b0) {
            ctx->pc = 0x2681C0u;
            goto label_2681c0;
        }
    }
    ctx->pc = 0x2681B8u;
label_2681b8:
    // 0x2681b8: 0x10000005  b           . + 4 + (0x5 << 2)
label_2681bc:
    if (ctx->pc == 0x2681BCu) {
        ctx->pc = 0x2681BCu;
            // 0x2681bc: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x2681C0u;
        goto label_2681c0;
    }
    ctx->pc = 0x2681B8u;
    {
        const bool branch_taken_0x2681b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2681BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2681B8u;
            // 0x2681bc: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2681b8) {
            ctx->pc = 0x2681D0u;
            goto label_2681d0;
        }
    }
    ctx->pc = 0x2681C0u;
label_2681c0:
    // 0x2681c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2681c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2681c4:
    // 0x2681c4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2681c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2681c8:
    // 0x2681c8: 0x320f809  jalr        $t9
label_2681cc:
    if (ctx->pc == 0x2681CCu) {
        ctx->pc = 0x2681D0u;
        goto label_2681d0;
    }
    ctx->pc = 0x2681C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2681D0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2681D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2681D0u; }
            if (ctx->pc != 0x2681D0u) { return; }
        }
        }
    }
    ctx->pc = 0x2681D0u;
label_2681d0:
    // 0x2681d0: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x2681d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
label_2681d4:
    // 0x2681d4: 0x1000016c  b           . + 4 + (0x16C << 2)
label_2681d8:
    if (ctx->pc == 0x2681D8u) {
        ctx->pc = 0x2681D8u;
            // 0x2681d8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2681DCu;
        goto label_2681dc;
    }
    ctx->pc = 0x2681D4u;
    {
        const bool branch_taken_0x2681d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2681D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2681D4u;
            // 0x2681d8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2681d4) {
            ctx->pc = 0x268788u;
            goto label_268788;
        }
    }
    ctx->pc = 0x2681DCu;
label_2681dc:
    // 0x2681dc: 0x0  nop
    ctx->pc = 0x2681dcu;
    // NOP
label_2681e0:
    // 0x2681e0: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2681e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2681e4:
    // 0x2681e4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2681e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2681e8:
    // 0x2681e8: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x2681e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
label_2681ec:
    // 0x2681ec: 0x344ab717  ori         $t2, $v0, 0xB717
    ctx->pc = 0x2681ecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
label_2681f0:
    // 0x2681f0: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x2681f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2681f4:
    // 0x2681f4: 0x3c02322b  lui         $v0, 0x322B
    ctx->pc = 0x2681f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12843 << 16));
label_2681f8:
    // 0x2681f8: 0x27a6017c  addiu       $a2, $sp, 0x17C
    ctx->pc = 0x2681f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
label_2681fc:
    // 0x2681fc: 0x3449cc76  ori         $t1, $v0, 0xCC76
    ctx->pc = 0x2681fcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52342);
label_268200:
    // 0x268200: 0x948021  addu        $s0, $a0, $s4
    ctx->pc = 0x268200u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_268204:
    // 0x268204: 0xae030134  sw          $v1, 0x134($s0)
    ctx->pc = 0x268204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 3));
label_268208:
    // 0x268208: 0x26080070  addiu       $t0, $s0, 0x70
    ctx->pc = 0x268208u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_26820c:
    // 0x26820c: 0x8e4b0000  lw          $t3, 0x0($s2)
    ctx->pc = 0x26820cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_268210:
    // 0x268210: 0x260700b0  addiu       $a3, $s0, 0xB0
    ctx->pc = 0x268210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_268214:
    // 0x268214: 0x260300f0  addiu       $v1, $s0, 0xF0
    ctx->pc = 0x268214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
label_268218:
    // 0x268218: 0x26020130  addiu       $v0, $s0, 0x130
    ctx->pc = 0x268218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
label_26821c:
    // 0x26821c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26821cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_268220:
    // 0x268220: 0xae0b0138  sw          $t3, 0x138($s0)
    ctx->pc = 0x268220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 11));
label_268224:
    // 0x268224: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x268224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
label_268228:
    // 0x268228: 0x8e6b0000  lw          $t3, 0x0($s3)
    ctx->pc = 0x268228u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_26822c:
    // 0x26822c: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x26822cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268230:
    // 0x268230: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x268230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_268234:
    // 0x268234: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x268234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268238:
    // 0x268238: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x268238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_26823c:
    // 0x26823c: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x26823cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268240:
    // 0x268240: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x268240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_268244:
    // 0x268244: 0xc6c0000c  lwc1        $f0, 0xC($s6)
    ctx->pc = 0x268244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268248:
    // 0x268248: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x268248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_26824c:
    // 0x26824c: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x26824cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268250:
    // 0x268250: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x268250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_268254:
    // 0x268254: 0xc7c00004  lwc1        $f0, 0x4($fp)
    ctx->pc = 0x268254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268258:
    // 0x268258: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x268258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_26825c:
    // 0x26825c: 0xc7c00008  lwc1        $f0, 0x8($fp)
    ctx->pc = 0x26825cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268260:
    // 0x268260: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x268260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_268264:
    // 0x268264: 0xc7c0000c  lwc1        $f0, 0xC($fp)
    ctx->pc = 0x268264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268268:
    // 0x268268: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x268268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_26826c:
    // 0x26826c: 0x8fac00c0  lw          $t4, 0xC0($sp)
    ctx->pc = 0x26826cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_268270:
    // 0x268270: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x268270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268274:
    // 0x268274: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x268274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_268278:
    // 0x268278: 0x8fac00c0  lw          $t4, 0xC0($sp)
    ctx->pc = 0x268278u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_26827c:
    // 0x26827c: 0xc5800004  lwc1        $f0, 0x4($t4)
    ctx->pc = 0x26827cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268280:
    // 0x268280: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x268280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_268284:
    // 0x268284: 0x8fac00c0  lw          $t4, 0xC0($sp)
    ctx->pc = 0x268284u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_268288:
    // 0x268288: 0xc5800008  lwc1        $f0, 0x8($t4)
    ctx->pc = 0x268288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26828c:
    // 0x26828c: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x26828cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_268290:
    // 0x268290: 0x8fac00c0  lw          $t4, 0xC0($sp)
    ctx->pc = 0x268290u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_268294:
    // 0x268294: 0xc580000c  lwc1        $f0, 0xC($t4)
    ctx->pc = 0x268294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268298:
    // 0x268298: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x268298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_26829c:
    // 0x26829c: 0xc6c00030  lwc1        $f0, 0x30($s6)
    ctx->pc = 0x26829cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2682a0:
    // 0x2682a0: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2682a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_2682a4:
    // 0x2682a4: 0xc6c00034  lwc1        $f0, 0x34($s6)
    ctx->pc = 0x2682a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2682a8:
    // 0x2682a8: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x2682a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_2682ac:
    // 0x2682ac: 0xc6c00038  lwc1        $f0, 0x38($s6)
    ctx->pc = 0x2682acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2682b0:
    // 0x2682b0: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2682b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_2682b4:
    // 0x2682b4: 0xc6c0003c  lwc1        $f0, 0x3C($s6)
    ctx->pc = 0x2682b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2682b8:
    // 0x2682b8: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x2682b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
label_2682bc:
    // 0x2682bc: 0x8fac00dc  lw          $t4, 0xDC($sp)
    ctx->pc = 0x2682bcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_2682c0:
    // 0x2682c0: 0xae0c0054  sw          $t4, 0x54($s0)
    ctx->pc = 0x2682c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 12));
label_2682c4:
    // 0x2682c4: 0xae0b0058  sw          $t3, 0x58($s0)
    ctx->pc = 0x2682c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 11));
label_2682c8:
    // 0x2682c8: 0xae0a0040  sw          $t2, 0x40($s0)
    ctx->pc = 0x2682c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 10));
label_2682cc:
    // 0x2682cc: 0xae0a0044  sw          $t2, 0x44($s0)
    ctx->pc = 0x2682ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 10));
label_2682d0:
    // 0x2682d0: 0xae0a0048  sw          $t2, 0x48($s0)
    ctx->pc = 0x2682d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 10));
label_2682d4:
    // 0x2682d4: 0xae0a004c  sw          $t2, 0x4C($s0)
    ctx->pc = 0x2682d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 10));
label_2682d8:
    // 0x2682d8: 0xae090050  sw          $t1, 0x50($s0)
    ctx->pc = 0x2682d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 9));
label_2682dc:
    // 0x2682dc: 0xae080060  sw          $t0, 0x60($s0)
    ctx->pc = 0x2682dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 8));
label_2682e0:
    // 0x2682e0: 0xae070064  sw          $a3, 0x64($s0)
    ctx->pc = 0x2682e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 7));
label_2682e4:
    // 0x2682e4: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x2682e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
label_2682e8:
    // 0x2682e8: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x2682e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
label_2682ec:
    // 0x2682ec: 0xc099d18  jal         func_267460
label_2682f0:
    if (ctx->pc == 0x2682F0u) {
        ctx->pc = 0x2682F0u;
            // 0x2682f0: 0xae02006c  sw          $v0, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
        ctx->pc = 0x2682F4u;
        goto label_2682f4;
    }
    ctx->pc = 0x2682ECu;
    SET_GPR_U32(ctx, 31, 0x2682F4u);
    ctx->pc = 0x2682F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2682ECu;
            // 0x2682f0: 0xae02006c  sw          $v0, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x267460u;
    if (runtime->hasFunction(0x267460u)) {
        auto targetFn = runtime->lookupFunction(0x267460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2682F4u; }
        if (ctx->pc != 0x2682F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00267460_0x267460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2682F4u; }
        if (ctx->pc != 0x2682F4u) { return; }
    }
    ctx->pc = 0x2682F4u;
label_2682f4:
    // 0x2682f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2682f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2682f8:
    // 0x2682f8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_2682fc:
    if (ctx->pc == 0x2682FCu) {
        ctx->pc = 0x268300u;
        goto label_268300;
    }
    ctx->pc = 0x2682F8u;
    {
        const bool branch_taken_0x2682f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2682f8) {
            ctx->pc = 0x268308u;
            goto label_268308;
        }
    }
    ctx->pc = 0x268300u;
label_268300:
    // 0x268300: 0x1000002f  b           . + 4 + (0x2F << 2)
label_268304:
    if (ctx->pc == 0x268304u) {
        ctx->pc = 0x268304u;
            // 0x268304: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->pc = 0x268308u;
        goto label_268308;
    }
    ctx->pc = 0x268300u;
    {
        const bool branch_taken_0x268300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268300u;
            // 0x268304: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268300) {
            ctx->pc = 0x2683C0u;
            goto label_2683c0;
        }
    }
    ctx->pc = 0x268308u;
label_268308:
    // 0x268308: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x268308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26830c:
    // 0x26830c: 0x26943000  addiu       $s4, $s4, 0x3000
    ctx->pc = 0x26830cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12288));
label_268310:
    // 0x268310: 0x260800f0  addiu       $t0, $s0, 0xF0
    ctx->pc = 0x268310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
label_268314:
    // 0x268314: 0x260900b0  addiu       $t1, $s0, 0xB0
    ctx->pc = 0x268314u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_268318:
    // 0x268318: 0x260a0070  addiu       $t2, $s0, 0x70
    ctx->pc = 0x268318u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_26831c:
    // 0x26831c: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x26831cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
label_268320:
    // 0x268320: 0x26070160  addiu       $a3, $s0, 0x160
    ctx->pc = 0x268320u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
label_268324:
    // 0x268324: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x268324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_268328:
    // 0x268328: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x268328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_26832c:
    // 0x26832c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x26832cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268330:
    // 0x268330: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x268330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_268334:
    // 0x268334: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x268334u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_268338:
    // 0x268338: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x268338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_26833c:
    // 0x26833c: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x26833cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
label_268340:
    // 0x268340: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x268340u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
label_268344:
    // 0x268344: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x268344u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_268348:
    // 0x268348: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x268348u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_26834c:
    // 0x26834c: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x26834cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
label_268350:
    // 0x268350: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x268350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268354:
    // 0x268354: 0xe4e00014  swc1        $f0, 0x14($a3)
    ctx->pc = 0x268354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
label_268358:
    // 0x268358: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x268358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26835c:
    // 0x26835c: 0xe4e00018  swc1        $f0, 0x18($a3)
    ctx->pc = 0x26835cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
label_268360:
    // 0x268360: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x268360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268364:
    // 0x268364: 0xe4e0001c  swc1        $f0, 0x1C($a3)
    ctx->pc = 0x268364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
label_268368:
    // 0x268368: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x268368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26836c:
    // 0x26836c: 0xe4e00020  swc1        $f0, 0x20($a3)
    ctx->pc = 0x26836cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
label_268370:
    // 0x268370: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x268370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268374:
    // 0x268374: 0xe4e00024  swc1        $f0, 0x24($a3)
    ctx->pc = 0x268374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
label_268378:
    // 0x268378: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x268378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26837c:
    // 0x26837c: 0xe4e00028  swc1        $f0, 0x28($a3)
    ctx->pc = 0x26837cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
label_268380:
    // 0x268380: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x268380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268384:
    // 0x268384: 0xe4e0002c  swc1        $f0, 0x2C($a3)
    ctx->pc = 0x268384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 44), bits); }
label_268388:
    // 0x268388: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x268388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26838c:
    // 0x26838c: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x26838cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_268390:
    // 0x268390: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x268390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268394:
    // 0x268394: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x268394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_268398:
    // 0x268398: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x268398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26839c:
    // 0x26839c: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x26839cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_2683a0:
    // 0x2683a0: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2683a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2683a4:
    // 0x2683a4: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x2683a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
label_2683a8:
    // 0x2683a8: 0xace00030  sw          $zero, 0x30($a3)
    ctx->pc = 0x2683a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 0));
label_2683ac:
    // 0x2683ac: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
label_2683b0:
    if (ctx->pc == 0x2683B0u) {
        ctx->pc = 0x2683B0u;
            // 0x2683b0: 0x24e70040  addiu       $a3, $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
        ctx->pc = 0x2683B4u;
        goto label_2683b4;
    }
    ctx->pc = 0x2683ACu;
    {
        const bool branch_taken_0x2683ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2683B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2683ACu;
            // 0x2683b0: 0x24e70040  addiu       $a3, $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2683ac) {
            ctx->pc = 0x268328u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_268328;
        }
    }
    ctx->pc = 0x2683B4u;
label_2683b4:
    // 0x2683b4: 0xc09a66c  jal         func_2699B0
label_2683b8:
    if (ctx->pc == 0x2683B8u) {
        ctx->pc = 0x2683B8u;
            // 0x2683b8: 0x26040140  addiu       $a0, $s0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
        ctx->pc = 0x2683BCu;
        goto label_2683bc;
    }
    ctx->pc = 0x2683B4u;
    SET_GPR_U32(ctx, 31, 0x2683BCu);
    ctx->pc = 0x2683B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2683B4u;
            // 0x2683b8: 0x26040140  addiu       $a0, $s0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2699B0u;
    if (runtime->hasFunction(0x2699B0u)) {
        auto targetFn = runtime->lookupFunction(0x2699B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2683BCu; }
        if (ctx->pc != 0x2683BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002699B0_0x2699b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2683BCu; }
        if (ctx->pc != 0x2683BCu) { return; }
    }
    ctx->pc = 0x2683BCu;
label_2683bc:
    // 0x2683bc: 0xae00014c  sw          $zero, 0x14C($s0)
    ctx->pc = 0x2683bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
label_2683c0:
    // 0x2683c0: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2683c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_2683c4:
    // 0x2683c4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2683c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_2683c8:
    // 0x2683c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2683c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2683cc:
    // 0x2683cc: 0x0  nop
    ctx->pc = 0x2683ccu;
    // NOP
label_2683d0:
    // 0x2683d0: 0x235102a  slt         $v0, $s1, $s5
    ctx->pc = 0x2683d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_2683d4:
    // 0x2683d4: 0x1440ff82  bnez        $v0, . + 4 + (-0x7E << 2)
label_2683d8:
    if (ctx->pc == 0x2683D8u) {
        ctx->pc = 0x2683DCu;
        goto label_2683dc;
    }
    ctx->pc = 0x2683D4u;
    {
        const bool branch_taken_0x2683d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2683d4) {
            ctx->pc = 0x2681E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2681e0;
        }
    }
    ctx->pc = 0x2683DCu;
label_2683dc:
    // 0x2683dc: 0x0  nop
    ctx->pc = 0x2683dcu;
    // NOP
label_2683e0:
    // 0x2683e0: 0x2aa10003  slti        $at, $s5, 0x3
    ctx->pc = 0x2683e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)3) ? 1 : 0);
label_2683e4:
    // 0x2683e4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_2683e8:
    if (ctx->pc == 0x2683E8u) {
        ctx->pc = 0x2683ECu;
        goto label_2683ec;
    }
    ctx->pc = 0x2683E4u;
    {
        const bool branch_taken_0x2683e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2683e4) {
            ctx->pc = 0x2683F0u;
            goto label_2683f0;
        }
    }
    ctx->pc = 0x2683ECu;
label_2683ec:
    // 0x2683ec: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x2683ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2683f0:
    // 0x2683f0: 0x2aa10002  slti        $at, $s5, 0x2
    ctx->pc = 0x2683f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
label_2683f4:
    // 0x2683f4: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_2683f8:
    if (ctx->pc == 0x2683F8u) {
        ctx->pc = 0x2683F8u;
            // 0x2683f8: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x2683FCu;
        goto label_2683fc;
    }
    ctx->pc = 0x2683F4u;
    {
        const bool branch_taken_0x2683f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2683F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2683F4u;
            // 0x2683f8: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2683f4) {
            ctx->pc = 0x268430u;
            goto label_268430;
        }
    }
    ctx->pc = 0x2683FCu;
label_2683fc:
    // 0x2683fc: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x2683fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_268400:
    // 0x268400: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x268400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_268404:
    // 0x268404: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x268404u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_268408:
    // 0x268408: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x268408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_26840c:
    // 0x26840c: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
label_268410:
    if (ctx->pc == 0x268410u) {
        ctx->pc = 0x268414u;
        goto label_268414;
    }
    ctx->pc = 0x26840Cu;
    {
        const bool branch_taken_0x26840c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x26840c) {
            ctx->pc = 0x268428u;
            goto label_268428;
        }
    }
    ctx->pc = 0x268414u;
label_268414:
    // 0x268414: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x268414u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_268418:
    // 0x268418: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x268418u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_26841c:
    // 0x26841c: 0x320f809  jalr        $t9
label_268420:
    if (ctx->pc == 0x268420u) {
        ctx->pc = 0x268424u;
        goto label_268424;
    }
    ctx->pc = 0x26841Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x268424u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x268424u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x268424u; }
            if (ctx->pc != 0x268424u) { return; }
        }
        }
    }
    ctx->pc = 0x268424u;
label_268424:
    // 0x268424: 0x0  nop
    ctx->pc = 0x268424u;
    // NOP
label_268428:
    // 0x268428: 0x100000dd  b           . + 4 + (0xDD << 2)
label_26842c:
    if (ctx->pc == 0x26842Cu) {
        ctx->pc = 0x26842Cu;
            // 0x26842c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x268430u;
        goto label_268430;
    }
    ctx->pc = 0x268428u;
    {
        const bool branch_taken_0x268428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26842Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268428u;
            // 0x26842c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268428) {
            ctx->pc = 0x2687A0u;
            goto label_2687a0;
        }
    }
    ctx->pc = 0x268430u;
label_268430:
    // 0x268430: 0x27a30168  addiu       $v1, $sp, 0x168
    ctx->pc = 0x268430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_268434:
    // 0x268434: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_268438:
    if (ctx->pc == 0x268438u) {
        ctx->pc = 0x268438u;
            // 0x268438: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x26843Cu;
        goto label_26843c;
    }
    ctx->pc = 0x268434u;
    {
        const bool branch_taken_0x268434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x268438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268434u;
            // 0x268438: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268434) {
            ctx->pc = 0x268458u;
            goto label_268458;
        }
    }
    ctx->pc = 0x26843Cu;
label_26843c:
    // 0x26843c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x26843cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_268440:
    // 0x268440: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x268440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_268444:
    // 0x268444: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x268444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_268448:
    // 0x268448: 0x0  nop
    ctx->pc = 0x268448u;
    // NOP
label_26844c:
    // 0x26844c: 0x0  nop
    ctx->pc = 0x26844cu;
    // NOP
label_268450:
    // 0x268450: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_268454:
    if (ctx->pc == 0x268454u) {
        ctx->pc = 0x268458u;
        goto label_268458;
    }
    ctx->pc = 0x268450u;
    {
        const bool branch_taken_0x268450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x268450) {
            ctx->pc = 0x26843Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26843c;
        }
    }
    ctx->pc = 0x268458u;
label_268458:
    // 0x268458: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x268458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_26845c:
    // 0x26845c: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x26845cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_268460:
    // 0x268460: 0x24433000  addiu       $v1, $v0, 0x3000
    ctx->pc = 0x268460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 12288));
label_268464:
    // 0x268464: 0x24440140  addiu       $a0, $v0, 0x140
    ctx->pc = 0x268464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
label_268468:
    // 0x268468: 0x24472ff0  addiu       $a3, $v0, 0x2FF0
    ctx->pc = 0x268468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 12272));
label_26846c:
    // 0x26846c: 0x24650140  addiu       $a1, $v1, 0x140
    ctx->pc = 0x26846cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 320));
label_268470:
    // 0x268470: 0xc09a790  jal         func_269E40
label_268474:
    if (ctx->pc == 0x268474u) {
        ctx->pc = 0x268474u;
            // 0x268474: 0x24682ff0  addiu       $t0, $v1, 0x2FF0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 12272));
        ctx->pc = 0x268478u;
        goto label_268478;
    }
    ctx->pc = 0x268470u;
    SET_GPR_U32(ctx, 31, 0x268478u);
    ctx->pc = 0x268474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268470u;
            // 0x268474: 0x24682ff0  addiu       $t0, $v1, 0x2FF0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 12272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x269E40u;
    if (runtime->hasFunction(0x269E40u)) {
        auto targetFn = runtime->lookupFunction(0x269E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268478u; }
        if (ctx->pc != 0x268478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00269E40_0x269e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268478u; }
        if (ctx->pc != 0x268478u) { return; }
    }
    ctx->pc = 0x268478u;
label_268478:
    // 0x268478: 0x15082a  slt         $at, $zero, $s5
    ctx->pc = 0x268478u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_26847c:
    // 0x26847c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x26847cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_268480:
    // 0x268480: 0x10200037  beqz        $at, . + 4 + (0x37 << 2)
label_268484:
    if (ctx->pc == 0x268484u) {
        ctx->pc = 0x268484u;
            // 0x268484: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x268488u;
        goto label_268488;
    }
    ctx->pc = 0x268480u;
    {
        const bool branch_taken_0x268480 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x268484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268480u;
            // 0x268484: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268480) {
            ctx->pc = 0x268560u;
            goto label_268560;
        }
    }
    ctx->pc = 0x268488u;
label_268488:
    // 0x268488: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x268488u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26848c:
    // 0x26848c: 0x27b00168  addiu       $s0, $sp, 0x168
    ctx->pc = 0x26848cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_268490:
    // 0x268490: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x268490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_268494:
    // 0x268494: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x268494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_268498:
    // 0x268498: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x268498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26849c:
    // 0x26849c: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
label_2684a0:
    if (ctx->pc == 0x2684A0u) {
        ctx->pc = 0x2684A0u;
            // 0x2684a0: 0x919021  addu        $s2, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->pc = 0x2684A4u;
        goto label_2684a4;
    }
    ctx->pc = 0x26849Cu;
    {
        const bool branch_taken_0x26849c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2684A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26849Cu;
            // 0x2684a0: 0x919021  addu        $s2, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26849c) {
            ctx->pc = 0x268548u;
            goto label_268548;
        }
    }
    ctx->pc = 0x2684A4u;
label_2684a4:
    // 0x2684a4: 0x8e440148  lw          $a0, 0x148($s2)
    ctx->pc = 0x2684a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
label_2684a8:
    // 0x2684a8: 0x28820037  slti        $v0, $a0, 0x37
    ctx->pc = 0x2684a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)55) ? 1 : 0);
label_2684ac:
    // 0x2684ac: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_2684b0:
    if (ctx->pc == 0x2684B0u) {
        ctx->pc = 0x2684B0u;
            // 0x2684b0: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x2684B4u;
        goto label_2684b4;
    }
    ctx->pc = 0x2684ACu;
    {
        const bool branch_taken_0x2684ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2684B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2684ACu;
            // 0x2684b0: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2684ac) {
            ctx->pc = 0x268548u;
            goto label_268548;
        }
    }
    ctx->pc = 0x2684B4u;
label_2684b4:
    // 0x2684b4: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x2684b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_2684b8:
    // 0x2684b8: 0xae420148  sw          $v0, 0x148($s2)
    ctx->pc = 0x2684b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 2));
label_2684bc:
    // 0x2684bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2684bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2684c0:
    // 0x2684c0: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x2684c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_2684c4:
    // 0x2684c4: 0xac400190  sw          $zero, 0x190($v0)
    ctx->pc = 0x2684c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 400), GPR_U32(ctx, 0));
label_2684c8:
    // 0x2684c8: 0x24530160  addiu       $s3, $v0, 0x160
    ctx->pc = 0x2684c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
label_2684cc:
    // 0x2684cc: 0x8e452ff0  lw          $a1, 0x2FF0($s2)
    ctx->pc = 0x2684ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12272)));
label_2684d0:
    // 0x2684d0: 0xc099b1c  jal         func_266C70
label_2684d4:
    if (ctx->pc == 0x2684D4u) {
        ctx->pc = 0x2684D4u;
            // 0x2684d4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2684D8u;
        goto label_2684d8;
    }
    ctx->pc = 0x2684D0u;
    SET_GPR_U32(ctx, 31, 0x2684D8u);
    ctx->pc = 0x2684D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2684D0u;
            // 0x2684d4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x266C70u;
    if (runtime->hasFunction(0x266C70u)) {
        auto targetFn = runtime->lookupFunction(0x266C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2684D8u; }
        if (ctx->pc != 0x2684D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00266C70_0x266c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2684D8u; }
        if (ctx->pc != 0x2684D8u) { return; }
    }
    ctx->pc = 0x2684D8u;
label_2684d8:
    // 0x2684d8: 0x8e462ff0  lw          $a2, 0x2FF0($s2)
    ctx->pc = 0x2684d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12272)));
label_2684dc:
    // 0x2684dc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2684dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2684e0:
    // 0x2684e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2684e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2684e4:
    // 0x2684e4: 0x26450140  addiu       $a1, $s2, 0x140
    ctx->pc = 0x2684e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
label_2684e8:
    // 0x2684e8: 0xc099bb4  jal         func_266ED0
label_2684ec:
    if (ctx->pc == 0x2684ECu) {
        ctx->pc = 0x2684ECu;
            // 0x2684ec: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2684F0u;
        goto label_2684f0;
    }
    ctx->pc = 0x2684E8u;
    SET_GPR_U32(ctx, 31, 0x2684F0u);
    ctx->pc = 0x2684ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2684E8u;
            // 0x2684ec: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x266ED0u;
    if (runtime->hasFunction(0x266ED0u)) {
        auto targetFn = runtime->lookupFunction(0x266ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2684F0u; }
        if (ctx->pc != 0x2684F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00266ED0_0x266ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2684F0u; }
        if (ctx->pc != 0x2684F0u) { return; }
    }
    ctx->pc = 0x2684F0u;
label_2684f0:
    // 0x2684f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2684f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2684f4:
    // 0x2684f4: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
label_2684f8:
    if (ctx->pc == 0x2684F8u) {
        ctx->pc = 0x2684FCu;
        goto label_2684fc;
    }
    ctx->pc = 0x2684F4u;
    {
        const bool branch_taken_0x2684f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2684f4) {
            ctx->pc = 0x268540u;
            goto label_268540;
        }
    }
    ctx->pc = 0x2684FCu;
label_2684fc:
    // 0x2684fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2684fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_268500:
    // 0x268500: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x268500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_268504:
    // 0x268504: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_268508:
    if (ctx->pc == 0x268508u) {
        ctx->pc = 0x268508u;
            // 0x268508: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x26850Cu;
        goto label_26850c;
    }
    ctx->pc = 0x268504u;
    {
        const bool branch_taken_0x268504 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x268508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268504u;
            // 0x268508: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268504) {
            ctx->pc = 0x268548u;
            goto label_268548;
        }
    }
    ctx->pc = 0x26850Cu;
label_26850c:
    // 0x26850c: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x26850cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_268510:
    // 0x268510: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x268510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_268514:
    // 0x268514: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x268514u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_268518:
    // 0x268518: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x268518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_26851c:
    // 0x26851c: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
label_268520:
    if (ctx->pc == 0x268520u) {
        ctx->pc = 0x268524u;
        goto label_268524;
    }
    ctx->pc = 0x26851Cu;
    {
        const bool branch_taken_0x26851c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x26851c) {
            ctx->pc = 0x268538u;
            goto label_268538;
        }
    }
    ctx->pc = 0x268524u;
label_268524:
    // 0x268524: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x268524u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_268528:
    // 0x268528: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x268528u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_26852c:
    // 0x26852c: 0x320f809  jalr        $t9
label_268530:
    if (ctx->pc == 0x268530u) {
        ctx->pc = 0x268534u;
        goto label_268534;
    }
    ctx->pc = 0x26852Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x268534u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x268534u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x268534u; }
            if (ctx->pc != 0x268534u) { return; }
        }
        }
    }
    ctx->pc = 0x268534u;
label_268534:
    // 0x268534: 0x0  nop
    ctx->pc = 0x268534u;
    // NOP
label_268538:
    // 0x268538: 0x10000099  b           . + 4 + (0x99 << 2)
label_26853c:
    if (ctx->pc == 0x26853Cu) {
        ctx->pc = 0x26853Cu;
            // 0x26853c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x268540u;
        goto label_268540;
    }
    ctx->pc = 0x268538u;
    {
        const bool branch_taken_0x268538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26853Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268538u;
            // 0x26853c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268538) {
            ctx->pc = 0x2687A0u;
            goto label_2687a0;
        }
    }
    ctx->pc = 0x268540u;
label_268540:
    // 0x268540: 0x307600ff  andi        $s6, $v1, 0xFF
    ctx->pc = 0x268540u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_268544:
    // 0x268544: 0x0  nop
    ctx->pc = 0x268544u;
    // NOP
label_268548:
    // 0x268548: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x268548u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_26854c:
    // 0x26854c: 0x295102a  slt         $v0, $s4, $s5
    ctx->pc = 0x26854cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_268550:
    // 0x268550: 0x26313000  addiu       $s1, $s1, 0x3000
    ctx->pc = 0x268550u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12288));
label_268554:
    // 0x268554: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
label_268558:
    if (ctx->pc == 0x268558u) {
        ctx->pc = 0x268558u;
            // 0x268558: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x26855Cu;
        goto label_26855c;
    }
    ctx->pc = 0x268554u;
    {
        const bool branch_taken_0x268554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x268558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268554u;
            // 0x268558: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268554) {
            ctx->pc = 0x268490u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_268490;
        }
    }
    ctx->pc = 0x26855Cu;
label_26855c:
    // 0x26855c: 0x0  nop
    ctx->pc = 0x26855cu;
    // NOP
label_268560:
    // 0x268560: 0x16c0ffbd  bnez        $s6, . + 4 + (-0x43 << 2)
label_268564:
    if (ctx->pc == 0x268564u) {
        ctx->pc = 0x268568u;
        goto label_268568;
    }
    ctx->pc = 0x268560u;
    {
        const bool branch_taken_0x268560 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x268560) {
            ctx->pc = 0x268458u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_268458;
        }
    }
    ctx->pc = 0x268568u;
label_268568:
    // 0x268568: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x268568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_26856c:
    // 0x26856c: 0xc7a30120  lwc1        $f3, 0x120($sp)
    ctx->pc = 0x26856cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_268570:
    // 0x268570: 0xc7a20124  lwc1        $f2, 0x124($sp)
    ctx->pc = 0x268570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_268574:
    // 0x268574: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x268574u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_268578:
    // 0x268578: 0xc7a10128  lwc1        $f1, 0x128($sp)
    ctx->pc = 0x268578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26857c:
    // 0x26857c: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x26857cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268580:
    // 0x268580: 0xc4440010  lwc1        $f4, 0x10($v0)
    ctx->pc = 0x268580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_268584:
    // 0x268584: 0x46001dc7  neg.s       $f23, $f3
    ctx->pc = 0x268584u;
    ctx->f[23] = FPU_NEG_S(ctx->f[3]);
label_268588:
    // 0x268588: 0x46001587  neg.s       $f22, $f2
    ctx->pc = 0x268588u;
    ctx->f[22] = FPU_NEG_S(ctx->f[2]);
label_26858c:
    // 0x26858c: 0x46000d47  neg.s       $f21, $f1
    ctx->pc = 0x26858cu;
    ctx->f[21] = FPU_NEG_S(ctx->f[1]);
label_268590:
    // 0x268590: 0x10000073  b           . + 4 + (0x73 << 2)
label_268594:
    if (ctx->pc == 0x268594u) {
        ctx->pc = 0x268594u;
            // 0x268594: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->pc = 0x268598u;
        goto label_268598;
    }
    ctx->pc = 0x268590u;
    {
        const bool branch_taken_0x268590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268590u;
            // 0x268594: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268590) {
            ctx->pc = 0x268760u;
            goto label_268760;
        }
    }
    ctx->pc = 0x268598u;
label_268598:
    // 0x268598: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x268598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_26859c:
    // 0x26859c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x26859cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2685a0:
    // 0x2685a0: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x2685a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2685a4:
    // 0x2685a4: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x2685a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2685a8:
    // 0x2685a8: 0x8e662ff0  lw          $a2, 0x2FF0($s3)
    ctx->pc = 0x2685a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12272)));
label_2685ac:
    // 0x2685ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2685acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2685b0:
    // 0x2685b0: 0xc099c4c  jal         func_267130
label_2685b4:
    if (ctx->pc == 0x2685B4u) {
        ctx->pc = 0x2685B4u;
            // 0x2685b4: 0x26650140  addiu       $a1, $s3, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 320));
        ctx->pc = 0x2685B8u;
        goto label_2685b8;
    }
    ctx->pc = 0x2685B0u;
    SET_GPR_U32(ctx, 31, 0x2685B8u);
    ctx->pc = 0x2685B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2685B0u;
            // 0x2685b4: 0x26650140  addiu       $a1, $s3, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x267130u;
    if (runtime->hasFunction(0x267130u)) {
        auto targetFn = runtime->lookupFunction(0x267130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2685B8u; }
        if (ctx->pc != 0x2685B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00267130_0x267130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2685B8u; }
        if (ctx->pc != 0x2685B8u) { return; }
    }
    ctx->pc = 0x2685B8u;
label_2685b8:
    // 0x2685b8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2685b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2685bc:
    // 0x2685bc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2685bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2685c0:
    // 0x2685c0: 0x8e630138  lw          $v1, 0x138($s3)
    ctx->pc = 0x2685c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 312)));
label_2685c4:
    // 0x2685c4: 0x24423000  addiu       $v0, $v0, 0x3000
    ctx->pc = 0x2685c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12288));
label_2685c8:
    // 0x2685c8: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x2685c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_2685cc:
    // 0x2685cc: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2685ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2685d0:
    // 0x2685d0: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x2685d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2685d4:
    // 0x2685d4: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x2685d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2685d8:
    // 0x2685d8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2685d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2685dc:
    // 0x2685dc: 0x4602b882  mul.s       $f2, $f23, $f2
    ctx->pc = 0x2685dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[23], ctx->f[2]);
label_2685e0:
    // 0x2685e0: 0x4601b042  mul.s       $f1, $f22, $f1
    ctx->pc = 0x2685e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
label_2685e4:
    // 0x2685e4: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x2685e4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_2685e8:
    // 0x2685e8: 0x4600a81c  madd.s      $f0, $f21, $f0
    ctx->pc = 0x2685e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[0]));
label_2685ec:
    // 0x2685ec: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x2685ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_2685f0:
    // 0x2685f0: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x2685f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2685f4:
    // 0x2685f4: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x2685f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2685f8:
    // 0x2685f8: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2685f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2685fc:
    // 0x2685fc: 0x4602b882  mul.s       $f2, $f23, $f2
    ctx->pc = 0x2685fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[23], ctx->f[2]);
label_268600:
    // 0x268600: 0x4601b042  mul.s       $f1, $f22, $f1
    ctx->pc = 0x268600u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
label_268604:
    // 0x268604: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x268604u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_268608:
    // 0x268608: 0x4600a81c  madd.s      $f0, $f21, $f0
    ctx->pc = 0x268608u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[0]));
label_26860c:
    // 0x26860c: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x26860cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_268610:
    // 0x268610: 0xc7c20000  lwc1        $f2, 0x0($fp)
    ctx->pc = 0x268610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_268614:
    // 0x268614: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x268614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_268618:
    // 0x268618: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x268618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26861c:
    // 0x26861c: 0x4602b882  mul.s       $f2, $f23, $f2
    ctx->pc = 0x26861cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[23], ctx->f[2]);
label_268620:
    // 0x268620: 0x4601b042  mul.s       $f1, $f22, $f1
    ctx->pc = 0x268620u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
label_268624:
    // 0x268624: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x268624u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_268628:
    // 0x268628: 0x4600a81c  madd.s      $f0, $f21, $f0
    ctx->pc = 0x268628u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[0]));
label_26862c:
    // 0x26862c: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x26862cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_268630:
    // 0x268630: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x268630u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
label_268634:
    // 0x268634: 0xc4460000  lwc1        $f6, 0x0($v0)
    ctx->pc = 0x268634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_268638:
    // 0x268638: 0xc6e30000  lwc1        $f3, 0x0($s7)
    ctx->pc = 0x268638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26863c:
    // 0x26863c: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x26863cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_268640:
    // 0x268640: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x268640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_268644:
    // 0x268644: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x268644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268648:
    // 0x268648: 0x27a20104  addiu       $v0, $sp, 0x104
    ctx->pc = 0x268648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
label_26864c:
    // 0x26864c: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x26864cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_268650:
    // 0x268650: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x268650u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_268654:
    // 0x268654: 0x27a20108  addiu       $v0, $sp, 0x108
    ctx->pc = 0x268654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_268658:
    // 0x268658: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x268658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_26865c:
    // 0x26865c: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x26865cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_268660:
    // 0x268660: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x268660u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_268664:
    // 0x268664: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x268664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_268668:
    // 0x268668: 0x4601205c  madd.s      $f1, $f4, $f1
    ctx->pc = 0x268668u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_26866c:
    // 0x26866c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26866cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_268670:
    // 0x268670: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x268670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_268674:
    // 0x268674: 0xc6c30000  lwc1        $f3, 0x0($s6)
    ctx->pc = 0x268674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_268678:
    // 0x268678: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x268678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26867c:
    // 0x26867c: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x26867cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_268680:
    // 0x268680: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x268680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_268684:
    // 0x268684: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x268684u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_268688:
    // 0x268688: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x268688u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_26868c:
    // 0x26868c: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x26868cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_268690:
    // 0x268690: 0x4601205c  madd.s      $f1, $f4, $f1
    ctx->pc = 0x268690u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_268694:
    // 0x268694: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x268694u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_268698:
    // 0x268698: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x268698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_26869c:
    // 0x26869c: 0xc7c30000  lwc1        $f3, 0x0($fp)
    ctx->pc = 0x26869cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2686a0:
    // 0x2686a0: 0x27a200e8  addiu       $v0, $sp, 0xE8
    ctx->pc = 0x2686a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_2686a4:
    // 0x2686a4: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x2686a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2686a8:
    // 0x2686a8: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x2686a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2686ac:
    // 0x2686ac: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2686acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2686b0:
    // 0x2686b0: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x2686b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_2686b4:
    // 0x2686b4: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2686b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_2686b8:
    // 0x2686b8: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x2686b8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_2686bc:
    // 0x2686bc: 0x4601205c  madd.s      $f1, $f4, $f1
    ctx->pc = 0x2686bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_2686c0:
    // 0x2686c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2686c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2686c4:
    // 0x2686c4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2686c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2686c8:
    // 0x2686c8: 0x27a200ec  addiu       $v0, $sp, 0xEC
    ctx->pc = 0x2686c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
label_2686cc:
    // 0x2686cc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2686ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2686d0:
    // 0x2686d0: 0x8e620134  lw          $v0, 0x134($s3)
    ctx->pc = 0x2686d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 308)));
label_2686d4:
    // 0x2686d4: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x2686d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2686d8:
    // 0x2686d8: 0x8e630138  lw          $v1, 0x138($s3)
    ctx->pc = 0x2686d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 312)));
label_2686dc:
    // 0x2686dc: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2686dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2686e0:
    // 0x2686e0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2686e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2686e4:
    // 0x2686e4: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x2686e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_2686e8:
    // 0x2686e8: 0x4601a001  sub.s       $f0, $f20, $f1
    ctx->pc = 0x2686e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_2686ec:
    // 0x2686ec: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2686ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2686f0:
    // 0x2686f0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2686f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_2686f4:
    // 0x2686f4: 0x27a200e8  addiu       $v0, $sp, 0xE8
    ctx->pc = 0x2686f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_2686f8:
    // 0x2686f8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2686f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2686fc:
    // 0x2686fc: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x2686fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_268700:
    // 0x268700: 0x27a200ec  addiu       $v0, $sp, 0xEC
    ctx->pc = 0x268700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
label_268704:
    // 0x268704: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x268704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_268708:
    // 0x268708: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x268708u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_26870c:
    // 0x26870c: 0x8e620138  lw          $v0, 0x138($s3)
    ctx->pc = 0x26870cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 312)));
label_268710:
    // 0x268710: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x268710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_268714:
    // 0x268714: 0x0  nop
    ctx->pc = 0x268714u;
    // NOP
label_268718:
    // 0x268718: 0x295102a  slt         $v0, $s4, $s5
    ctx->pc = 0x268718u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_26871c:
    // 0x26871c: 0x1440ff9e  bnez        $v0, . + 4 + (-0x62 << 2)
label_268720:
    if (ctx->pc == 0x268720u) {
        ctx->pc = 0x268724u;
        goto label_268724;
    }
    ctx->pc = 0x26871Cu;
    {
        const bool branch_taken_0x26871c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26871c) {
            ctx->pc = 0x268598u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_268598;
        }
    }
    ctx->pc = 0x268724u;
label_268724:
    // 0x268724: 0x0  nop
    ctx->pc = 0x268724u;
    // NOP
label_268728:
    // 0x268728: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x268728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_26872c:
    // 0x26872c: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x26872cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_268730:
    // 0x268730: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x268730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_268734:
    // 0x268734: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x268734u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_268738:
    // 0x268738: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x268738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_26873c:
    // 0x26873c: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
label_268740:
    if (ctx->pc == 0x268740u) {
        ctx->pc = 0x268744u;
        goto label_268744;
    }
    ctx->pc = 0x26873Cu;
    {
        const bool branch_taken_0x26873c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x26873c) {
            ctx->pc = 0x268758u;
            goto label_268758;
        }
    }
    ctx->pc = 0x268744u;
label_268744:
    // 0x268744: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x268744u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_268748:
    // 0x268748: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x268748u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_26874c:
    // 0x26874c: 0x320f809  jalr        $t9
label_268750:
    if (ctx->pc == 0x268750u) {
        ctx->pc = 0x268754u;
        goto label_268754;
    }
    ctx->pc = 0x26874Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x268754u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x268754u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x268754u; }
            if (ctx->pc != 0x268754u) { return; }
        }
        }
    }
    ctx->pc = 0x268754u;
label_268754:
    // 0x268754: 0x0  nop
    ctx->pc = 0x268754u;
    // NOP
label_268758:
    // 0x268758: 0x10000011  b           . + 4 + (0x11 << 2)
label_26875c:
    if (ctx->pc == 0x26875Cu) {
        ctx->pc = 0x26875Cu;
            // 0x26875c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x268760u;
        goto label_268760;
    }
    ctx->pc = 0x268758u;
    {
        const bool branch_taken_0x268758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26875Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268758u;
            // 0x26875c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268758) {
            ctx->pc = 0x2687A0u;
            goto label_2687a0;
        }
    }
    ctx->pc = 0x268760u;
label_268760:
    // 0x268760: 0x15082a  slt         $at, $zero, $s5
    ctx->pc = 0x268760u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_268764:
    // 0x268764: 0x1020fff0  beqz        $at, . + 4 + (-0x10 << 2)
label_268768:
    if (ctx->pc == 0x268768u) {
        ctx->pc = 0x268768u;
            // 0x268768: 0x46040501  sub.s       $f20, $f0, $f4 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
        ctx->pc = 0x26876Cu;
        goto label_26876c;
    }
    ctx->pc = 0x268764u;
    {
        const bool branch_taken_0x268764 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x268768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268764u;
            // 0x268768: 0x46040501  sub.s       $f20, $f0, $f4 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268764) {
            ctx->pc = 0x268728u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_268728;
        }
    }
    ctx->pc = 0x26876Cu;
label_26876c:
    // 0x26876c: 0x26f20010  addiu       $s2, $s7, 0x10
    ctx->pc = 0x26876cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
label_268770:
    // 0x268770: 0x26f10020  addiu       $s1, $s7, 0x20
    ctx->pc = 0x268770u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
label_268774:
    // 0x268774: 0x26f60004  addiu       $s6, $s7, 0x4
    ctx->pc = 0x268774u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_268778:
    // 0x268778: 0x26fe0008  addiu       $fp, $s7, 0x8
    ctx->pc = 0x268778u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
label_26877c:
    // 0x26877c: 0x26f00030  addiu       $s0, $s7, 0x30
    ctx->pc = 0x26877cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 48));
label_268780:
    // 0x268780: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
label_268784:
    if (ctx->pc == 0x268784u) {
        ctx->pc = 0x268784u;
            // 0x268784: 0xafa000b0  sw          $zero, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
        ctx->pc = 0x268788u;
        goto label_268788;
    }
    ctx->pc = 0x268780u;
    {
        const bool branch_taken_0x268780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268780u;
            // 0x268784: 0xafa000b0  sw          $zero, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268780) {
            ctx->pc = 0x268718u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_268718;
        }
    }
    ctx->pc = 0x268788u;
label_268788:
    // 0x268788: 0x1aa0ff15  blez        $s5, . + 4 + (-0xEB << 2)
label_26878c:
    if (ctx->pc == 0x26878Cu) {
        ctx->pc = 0x26878Cu;
            // 0x26878c: 0x26c20020  addiu       $v0, $s6, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
        ctx->pc = 0x268790u;
        goto label_268790;
    }
    ctx->pc = 0x268788u;
    {
        const bool branch_taken_0x268788 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x26878Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268788u;
            // 0x26878c: 0x26c20020  addiu       $v0, $s6, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268788) {
            ctx->pc = 0x2683E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2683e0;
        }
    }
    ctx->pc = 0x268790u;
label_268790:
    // 0x268790: 0x26de0010  addiu       $fp, $s6, 0x10
    ctx->pc = 0x268790u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
label_268794:
    // 0x268794: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x268794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_268798:
    // 0x268798: 0x1000ff0d  b           . + 4 + (-0xF3 << 2)
label_26879c:
    if (ctx->pc == 0x26879Cu) {
        ctx->pc = 0x26879Cu;
            // 0x26879c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2687A0u;
        goto label_2687a0;
    }
    ctx->pc = 0x268798u;
    {
        const bool branch_taken_0x268798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26879Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268798u;
            // 0x26879c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268798) {
            ctx->pc = 0x2683D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2683d0;
        }
    }
    ctx->pc = 0x2687A0u;
label_2687a0:
    // 0x2687a0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2687a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2687a4:
    // 0x2687a4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2687a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2687a8:
    // 0x2687a8: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x2687a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2687ac:
    // 0x2687ac: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2687acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2687b0:
    // 0x2687b0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2687b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2687b4:
    // 0x2687b4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2687b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2687b8:
    // 0x2687b8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2687b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2687bc:
    // 0x2687bc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2687bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2687c0:
    // 0x2687c0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2687c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2687c4:
    // 0x2687c4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2687c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2687c8:
    // 0x2687c8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2687c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2687cc:
    // 0x2687cc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2687ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2687d0:
    // 0x2687d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2687d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2687d4:
    // 0x2687d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2687d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2687d8:
    // 0x2687d8: 0x3e00008  jr          $ra
label_2687dc:
    if (ctx->pc == 0x2687DCu) {
        ctx->pc = 0x2687DCu;
            // 0x2687dc: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x2687E0u;
        goto label_fallthrough_0x2687d8;
    }
    ctx->pc = 0x2687D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2687DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2687D8u;
            // 0x2687dc: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2687d8:
    ctx->pc = 0x2687E0u;
}
