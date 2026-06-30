#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00350430
// Address: 0x350430 - 0x3509b0
void sub_00350430_0x350430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350430_0x350430");
#endif

    switch (ctx->pc) {
        case 0x350430u: goto label_350430;
        case 0x350434u: goto label_350434;
        case 0x350438u: goto label_350438;
        case 0x35043cu: goto label_35043c;
        case 0x350440u: goto label_350440;
        case 0x350444u: goto label_350444;
        case 0x350448u: goto label_350448;
        case 0x35044cu: goto label_35044c;
        case 0x350450u: goto label_350450;
        case 0x350454u: goto label_350454;
        case 0x350458u: goto label_350458;
        case 0x35045cu: goto label_35045c;
        case 0x350460u: goto label_350460;
        case 0x350464u: goto label_350464;
        case 0x350468u: goto label_350468;
        case 0x35046cu: goto label_35046c;
        case 0x350470u: goto label_350470;
        case 0x350474u: goto label_350474;
        case 0x350478u: goto label_350478;
        case 0x35047cu: goto label_35047c;
        case 0x350480u: goto label_350480;
        case 0x350484u: goto label_350484;
        case 0x350488u: goto label_350488;
        case 0x35048cu: goto label_35048c;
        case 0x350490u: goto label_350490;
        case 0x350494u: goto label_350494;
        case 0x350498u: goto label_350498;
        case 0x35049cu: goto label_35049c;
        case 0x3504a0u: goto label_3504a0;
        case 0x3504a4u: goto label_3504a4;
        case 0x3504a8u: goto label_3504a8;
        case 0x3504acu: goto label_3504ac;
        case 0x3504b0u: goto label_3504b0;
        case 0x3504b4u: goto label_3504b4;
        case 0x3504b8u: goto label_3504b8;
        case 0x3504bcu: goto label_3504bc;
        case 0x3504c0u: goto label_3504c0;
        case 0x3504c4u: goto label_3504c4;
        case 0x3504c8u: goto label_3504c8;
        case 0x3504ccu: goto label_3504cc;
        case 0x3504d0u: goto label_3504d0;
        case 0x3504d4u: goto label_3504d4;
        case 0x3504d8u: goto label_3504d8;
        case 0x3504dcu: goto label_3504dc;
        case 0x3504e0u: goto label_3504e0;
        case 0x3504e4u: goto label_3504e4;
        case 0x3504e8u: goto label_3504e8;
        case 0x3504ecu: goto label_3504ec;
        case 0x3504f0u: goto label_3504f0;
        case 0x3504f4u: goto label_3504f4;
        case 0x3504f8u: goto label_3504f8;
        case 0x3504fcu: goto label_3504fc;
        case 0x350500u: goto label_350500;
        case 0x350504u: goto label_350504;
        case 0x350508u: goto label_350508;
        case 0x35050cu: goto label_35050c;
        case 0x350510u: goto label_350510;
        case 0x350514u: goto label_350514;
        case 0x350518u: goto label_350518;
        case 0x35051cu: goto label_35051c;
        case 0x350520u: goto label_350520;
        case 0x350524u: goto label_350524;
        case 0x350528u: goto label_350528;
        case 0x35052cu: goto label_35052c;
        case 0x350530u: goto label_350530;
        case 0x350534u: goto label_350534;
        case 0x350538u: goto label_350538;
        case 0x35053cu: goto label_35053c;
        case 0x350540u: goto label_350540;
        case 0x350544u: goto label_350544;
        case 0x350548u: goto label_350548;
        case 0x35054cu: goto label_35054c;
        case 0x350550u: goto label_350550;
        case 0x350554u: goto label_350554;
        case 0x350558u: goto label_350558;
        case 0x35055cu: goto label_35055c;
        case 0x350560u: goto label_350560;
        case 0x350564u: goto label_350564;
        case 0x350568u: goto label_350568;
        case 0x35056cu: goto label_35056c;
        case 0x350570u: goto label_350570;
        case 0x350574u: goto label_350574;
        case 0x350578u: goto label_350578;
        case 0x35057cu: goto label_35057c;
        case 0x350580u: goto label_350580;
        case 0x350584u: goto label_350584;
        case 0x350588u: goto label_350588;
        case 0x35058cu: goto label_35058c;
        case 0x350590u: goto label_350590;
        case 0x350594u: goto label_350594;
        case 0x350598u: goto label_350598;
        case 0x35059cu: goto label_35059c;
        case 0x3505a0u: goto label_3505a0;
        case 0x3505a4u: goto label_3505a4;
        case 0x3505a8u: goto label_3505a8;
        case 0x3505acu: goto label_3505ac;
        case 0x3505b0u: goto label_3505b0;
        case 0x3505b4u: goto label_3505b4;
        case 0x3505b8u: goto label_3505b8;
        case 0x3505bcu: goto label_3505bc;
        case 0x3505c0u: goto label_3505c0;
        case 0x3505c4u: goto label_3505c4;
        case 0x3505c8u: goto label_3505c8;
        case 0x3505ccu: goto label_3505cc;
        case 0x3505d0u: goto label_3505d0;
        case 0x3505d4u: goto label_3505d4;
        case 0x3505d8u: goto label_3505d8;
        case 0x3505dcu: goto label_3505dc;
        case 0x3505e0u: goto label_3505e0;
        case 0x3505e4u: goto label_3505e4;
        case 0x3505e8u: goto label_3505e8;
        case 0x3505ecu: goto label_3505ec;
        case 0x3505f0u: goto label_3505f0;
        case 0x3505f4u: goto label_3505f4;
        case 0x3505f8u: goto label_3505f8;
        case 0x3505fcu: goto label_3505fc;
        case 0x350600u: goto label_350600;
        case 0x350604u: goto label_350604;
        case 0x350608u: goto label_350608;
        case 0x35060cu: goto label_35060c;
        case 0x350610u: goto label_350610;
        case 0x350614u: goto label_350614;
        case 0x350618u: goto label_350618;
        case 0x35061cu: goto label_35061c;
        case 0x350620u: goto label_350620;
        case 0x350624u: goto label_350624;
        case 0x350628u: goto label_350628;
        case 0x35062cu: goto label_35062c;
        case 0x350630u: goto label_350630;
        case 0x350634u: goto label_350634;
        case 0x350638u: goto label_350638;
        case 0x35063cu: goto label_35063c;
        case 0x350640u: goto label_350640;
        case 0x350644u: goto label_350644;
        case 0x350648u: goto label_350648;
        case 0x35064cu: goto label_35064c;
        case 0x350650u: goto label_350650;
        case 0x350654u: goto label_350654;
        case 0x350658u: goto label_350658;
        case 0x35065cu: goto label_35065c;
        case 0x350660u: goto label_350660;
        case 0x350664u: goto label_350664;
        case 0x350668u: goto label_350668;
        case 0x35066cu: goto label_35066c;
        case 0x350670u: goto label_350670;
        case 0x350674u: goto label_350674;
        case 0x350678u: goto label_350678;
        case 0x35067cu: goto label_35067c;
        case 0x350680u: goto label_350680;
        case 0x350684u: goto label_350684;
        case 0x350688u: goto label_350688;
        case 0x35068cu: goto label_35068c;
        case 0x350690u: goto label_350690;
        case 0x350694u: goto label_350694;
        case 0x350698u: goto label_350698;
        case 0x35069cu: goto label_35069c;
        case 0x3506a0u: goto label_3506a0;
        case 0x3506a4u: goto label_3506a4;
        case 0x3506a8u: goto label_3506a8;
        case 0x3506acu: goto label_3506ac;
        case 0x3506b0u: goto label_3506b0;
        case 0x3506b4u: goto label_3506b4;
        case 0x3506b8u: goto label_3506b8;
        case 0x3506bcu: goto label_3506bc;
        case 0x3506c0u: goto label_3506c0;
        case 0x3506c4u: goto label_3506c4;
        case 0x3506c8u: goto label_3506c8;
        case 0x3506ccu: goto label_3506cc;
        case 0x3506d0u: goto label_3506d0;
        case 0x3506d4u: goto label_3506d4;
        case 0x3506d8u: goto label_3506d8;
        case 0x3506dcu: goto label_3506dc;
        case 0x3506e0u: goto label_3506e0;
        case 0x3506e4u: goto label_3506e4;
        case 0x3506e8u: goto label_3506e8;
        case 0x3506ecu: goto label_3506ec;
        case 0x3506f0u: goto label_3506f0;
        case 0x3506f4u: goto label_3506f4;
        case 0x3506f8u: goto label_3506f8;
        case 0x3506fcu: goto label_3506fc;
        case 0x350700u: goto label_350700;
        case 0x350704u: goto label_350704;
        case 0x350708u: goto label_350708;
        case 0x35070cu: goto label_35070c;
        case 0x350710u: goto label_350710;
        case 0x350714u: goto label_350714;
        case 0x350718u: goto label_350718;
        case 0x35071cu: goto label_35071c;
        case 0x350720u: goto label_350720;
        case 0x350724u: goto label_350724;
        case 0x350728u: goto label_350728;
        case 0x35072cu: goto label_35072c;
        case 0x350730u: goto label_350730;
        case 0x350734u: goto label_350734;
        case 0x350738u: goto label_350738;
        case 0x35073cu: goto label_35073c;
        case 0x350740u: goto label_350740;
        case 0x350744u: goto label_350744;
        case 0x350748u: goto label_350748;
        case 0x35074cu: goto label_35074c;
        case 0x350750u: goto label_350750;
        case 0x350754u: goto label_350754;
        case 0x350758u: goto label_350758;
        case 0x35075cu: goto label_35075c;
        case 0x350760u: goto label_350760;
        case 0x350764u: goto label_350764;
        case 0x350768u: goto label_350768;
        case 0x35076cu: goto label_35076c;
        case 0x350770u: goto label_350770;
        case 0x350774u: goto label_350774;
        case 0x350778u: goto label_350778;
        case 0x35077cu: goto label_35077c;
        case 0x350780u: goto label_350780;
        case 0x350784u: goto label_350784;
        case 0x350788u: goto label_350788;
        case 0x35078cu: goto label_35078c;
        case 0x350790u: goto label_350790;
        case 0x350794u: goto label_350794;
        case 0x350798u: goto label_350798;
        case 0x35079cu: goto label_35079c;
        case 0x3507a0u: goto label_3507a0;
        case 0x3507a4u: goto label_3507a4;
        case 0x3507a8u: goto label_3507a8;
        case 0x3507acu: goto label_3507ac;
        case 0x3507b0u: goto label_3507b0;
        case 0x3507b4u: goto label_3507b4;
        case 0x3507b8u: goto label_3507b8;
        case 0x3507bcu: goto label_3507bc;
        case 0x3507c0u: goto label_3507c0;
        case 0x3507c4u: goto label_3507c4;
        case 0x3507c8u: goto label_3507c8;
        case 0x3507ccu: goto label_3507cc;
        case 0x3507d0u: goto label_3507d0;
        case 0x3507d4u: goto label_3507d4;
        case 0x3507d8u: goto label_3507d8;
        case 0x3507dcu: goto label_3507dc;
        case 0x3507e0u: goto label_3507e0;
        case 0x3507e4u: goto label_3507e4;
        case 0x3507e8u: goto label_3507e8;
        case 0x3507ecu: goto label_3507ec;
        case 0x3507f0u: goto label_3507f0;
        case 0x3507f4u: goto label_3507f4;
        case 0x3507f8u: goto label_3507f8;
        case 0x3507fcu: goto label_3507fc;
        case 0x350800u: goto label_350800;
        case 0x350804u: goto label_350804;
        case 0x350808u: goto label_350808;
        case 0x35080cu: goto label_35080c;
        case 0x350810u: goto label_350810;
        case 0x350814u: goto label_350814;
        case 0x350818u: goto label_350818;
        case 0x35081cu: goto label_35081c;
        case 0x350820u: goto label_350820;
        case 0x350824u: goto label_350824;
        case 0x350828u: goto label_350828;
        case 0x35082cu: goto label_35082c;
        case 0x350830u: goto label_350830;
        case 0x350834u: goto label_350834;
        case 0x350838u: goto label_350838;
        case 0x35083cu: goto label_35083c;
        case 0x350840u: goto label_350840;
        case 0x350844u: goto label_350844;
        case 0x350848u: goto label_350848;
        case 0x35084cu: goto label_35084c;
        case 0x350850u: goto label_350850;
        case 0x350854u: goto label_350854;
        case 0x350858u: goto label_350858;
        case 0x35085cu: goto label_35085c;
        case 0x350860u: goto label_350860;
        case 0x350864u: goto label_350864;
        case 0x350868u: goto label_350868;
        case 0x35086cu: goto label_35086c;
        case 0x350870u: goto label_350870;
        case 0x350874u: goto label_350874;
        case 0x350878u: goto label_350878;
        case 0x35087cu: goto label_35087c;
        case 0x350880u: goto label_350880;
        case 0x350884u: goto label_350884;
        case 0x350888u: goto label_350888;
        case 0x35088cu: goto label_35088c;
        case 0x350890u: goto label_350890;
        case 0x350894u: goto label_350894;
        case 0x350898u: goto label_350898;
        case 0x35089cu: goto label_35089c;
        case 0x3508a0u: goto label_3508a0;
        case 0x3508a4u: goto label_3508a4;
        case 0x3508a8u: goto label_3508a8;
        case 0x3508acu: goto label_3508ac;
        case 0x3508b0u: goto label_3508b0;
        case 0x3508b4u: goto label_3508b4;
        case 0x3508b8u: goto label_3508b8;
        case 0x3508bcu: goto label_3508bc;
        case 0x3508c0u: goto label_3508c0;
        case 0x3508c4u: goto label_3508c4;
        case 0x3508c8u: goto label_3508c8;
        case 0x3508ccu: goto label_3508cc;
        case 0x3508d0u: goto label_3508d0;
        case 0x3508d4u: goto label_3508d4;
        case 0x3508d8u: goto label_3508d8;
        case 0x3508dcu: goto label_3508dc;
        case 0x3508e0u: goto label_3508e0;
        case 0x3508e4u: goto label_3508e4;
        case 0x3508e8u: goto label_3508e8;
        case 0x3508ecu: goto label_3508ec;
        case 0x3508f0u: goto label_3508f0;
        case 0x3508f4u: goto label_3508f4;
        case 0x3508f8u: goto label_3508f8;
        case 0x3508fcu: goto label_3508fc;
        case 0x350900u: goto label_350900;
        case 0x350904u: goto label_350904;
        case 0x350908u: goto label_350908;
        case 0x35090cu: goto label_35090c;
        case 0x350910u: goto label_350910;
        case 0x350914u: goto label_350914;
        case 0x350918u: goto label_350918;
        case 0x35091cu: goto label_35091c;
        case 0x350920u: goto label_350920;
        case 0x350924u: goto label_350924;
        case 0x350928u: goto label_350928;
        case 0x35092cu: goto label_35092c;
        case 0x350930u: goto label_350930;
        case 0x350934u: goto label_350934;
        case 0x350938u: goto label_350938;
        case 0x35093cu: goto label_35093c;
        case 0x350940u: goto label_350940;
        case 0x350944u: goto label_350944;
        case 0x350948u: goto label_350948;
        case 0x35094cu: goto label_35094c;
        case 0x350950u: goto label_350950;
        case 0x350954u: goto label_350954;
        case 0x350958u: goto label_350958;
        case 0x35095cu: goto label_35095c;
        case 0x350960u: goto label_350960;
        case 0x350964u: goto label_350964;
        case 0x350968u: goto label_350968;
        case 0x35096cu: goto label_35096c;
        case 0x350970u: goto label_350970;
        case 0x350974u: goto label_350974;
        case 0x350978u: goto label_350978;
        case 0x35097cu: goto label_35097c;
        case 0x350980u: goto label_350980;
        case 0x350984u: goto label_350984;
        case 0x350988u: goto label_350988;
        case 0x35098cu: goto label_35098c;
        case 0x350990u: goto label_350990;
        case 0x350994u: goto label_350994;
        case 0x350998u: goto label_350998;
        case 0x35099cu: goto label_35099c;
        case 0x3509a0u: goto label_3509a0;
        case 0x3509a4u: goto label_3509a4;
        case 0x3509a8u: goto label_3509a8;
        case 0x3509acu: goto label_3509ac;
        default: break;
    }

    ctx->pc = 0x350430u;

label_350430:
    // 0x350430: 0x3e00008  jr          $ra
label_350434:
    if (ctx->pc == 0x350434u) {
        ctx->pc = 0x350434u;
            // 0x350434: 0x9082004e  lbu         $v0, 0x4E($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 78)));
        ctx->pc = 0x350438u;
        goto label_350438;
    }
    ctx->pc = 0x350430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x350430u;
            // 0x350434: 0x9082004e  lbu         $v0, 0x4E($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 78)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x350438u;
label_350438:
    // 0x350438: 0x0  nop
    ctx->pc = 0x350438u;
    // NOP
label_35043c:
    // 0x35043c: 0x0  nop
    ctx->pc = 0x35043cu;
    // NOP
label_350440:
    // 0x350440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x350440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_350444:
    // 0x350444: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x350444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_350448:
    // 0x350448: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x350448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_35044c:
    // 0x35044c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35044cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_350450:
    // 0x350450: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x350450u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_350454:
    // 0x350454: 0x10a30021  beq         $a1, $v1, . + 4 + (0x21 << 2)
label_350458:
    if (ctx->pc == 0x350458u) {
        ctx->pc = 0x350458u;
            // 0x350458: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35045Cu;
        goto label_35045c;
    }
    ctx->pc = 0x350454u;
    {
        const bool branch_taken_0x350454 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x350458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x350454u;
            // 0x350458: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350454) {
            ctx->pc = 0x3504DCu;
            goto label_3504dc;
        }
    }
    ctx->pc = 0x35045Cu;
label_35045c:
    // 0x35045c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x35045cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_350460:
    // 0x350460: 0x50a3001b  beql        $a1, $v1, . + 4 + (0x1B << 2)
label_350464:
    if (ctx->pc == 0x350464u) {
        ctx->pc = 0x350464u;
            // 0x350464: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x350468u;
        goto label_350468;
    }
    ctx->pc = 0x350460u;
    {
        const bool branch_taken_0x350460 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x350460) {
            ctx->pc = 0x350464u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x350460u;
            // 0x350464: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3504D0u;
            goto label_3504d0;
        }
    }
    ctx->pc = 0x350468u;
label_350468:
    // 0x350468: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x350468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_35046c:
    // 0x35046c: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_350470:
    if (ctx->pc == 0x350470u) {
        ctx->pc = 0x350474u;
        goto label_350474;
    }
    ctx->pc = 0x35046Cu;
    {
        const bool branch_taken_0x35046c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x35046c) {
            ctx->pc = 0x35047Cu;
            goto label_35047c;
        }
    }
    ctx->pc = 0x350474u;
label_350474:
    // 0x350474: 0x1000003c  b           . + 4 + (0x3C << 2)
label_350478:
    if (ctx->pc == 0x350478u) {
        ctx->pc = 0x350478u;
            // 0x350478: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x35047Cu;
        goto label_35047c;
    }
    ctx->pc = 0x350474u;
    {
        const bool branch_taken_0x350474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x350474u;
            // 0x350478: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350474) {
            ctx->pc = 0x350568u;
            goto label_350568;
        }
    }
    ctx->pc = 0x35047Cu;
label_35047c:
    // 0x35047c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x35047cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_350480:
    // 0x350480: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x350480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_350484:
    // 0x350484: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x350484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_350488:
    // 0x350488: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x350488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_35048c:
    // 0x35048c: 0x10640035  beq         $v1, $a0, . + 4 + (0x35 << 2)
label_350490:
    if (ctx->pc == 0x350490u) {
        ctx->pc = 0x350494u;
        goto label_350494;
    }
    ctx->pc = 0x35048Cu;
    {
        const bool branch_taken_0x35048c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x35048c) {
            ctx->pc = 0x350564u;
            goto label_350564;
        }
    }
    ctx->pc = 0x350494u;
label_350494:
    // 0x350494: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x350494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_350498:
    // 0x350498: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x350498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_35049c:
    // 0x35049c: 0x8c6316a0  lw          $v1, 0x16A0($v1)
    ctx->pc = 0x35049cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5792)));
label_3504a0:
    // 0x3504a0: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x3504a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_3504a4:
    // 0x3504a4: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x3504a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_3504a8:
    // 0x3504a8: 0x602027  not         $a0, $v1
    ctx->pc = 0x3504a8u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_3504ac:
    // 0x3504ac: 0x8ca30050  lw          $v1, 0x50($a1)
    ctx->pc = 0x3504acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_3504b0:
    // 0x3504b0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3504b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3504b4:
    // 0x3504b4: 0xaca30050  sw          $v1, 0x50($a1)
    ctx->pc = 0x3504b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 3));
label_3504b8:
    // 0x3504b8: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x3504b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3504bc:
    // 0x3504bc: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x3504bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3504c0:
    // 0x3504c0: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x3504c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3504c4:
    // 0x3504c4: 0x2463005c  addiu       $v1, $v1, 0x5C
    ctx->pc = 0x3504c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 92));
label_3504c8:
    // 0x3504c8: 0x10000026  b           . + 4 + (0x26 << 2)
label_3504cc:
    if (ctx->pc == 0x3504CCu) {
        ctx->pc = 0x3504CCu;
            // 0x3504cc: 0xae030094  sw          $v1, 0x94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 3));
        ctx->pc = 0x3504D0u;
        goto label_3504d0;
    }
    ctx->pc = 0x3504C8u;
    {
        const bool branch_taken_0x3504c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3504CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3504C8u;
            // 0x3504cc: 0xae030094  sw          $v1, 0x94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3504c8) {
            ctx->pc = 0x350564u;
            goto label_350564;
        }
    }
    ctx->pc = 0x3504D0u;
label_3504d0:
    // 0x3504d0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3504d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3504d4:
    // 0x3504d4: 0x320f809  jalr        $t9
label_3504d8:
    if (ctx->pc == 0x3504D8u) {
        ctx->pc = 0x3504DCu;
        goto label_3504dc;
    }
    ctx->pc = 0x3504D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3504DCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3504DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3504DCu; }
            if (ctx->pc != 0x3504DCu) { return; }
        }
        }
    }
    ctx->pc = 0x3504DCu;
label_3504dc:
    // 0x3504dc: 0x8e070094  lw          $a3, 0x94($s0)
    ctx->pc = 0x3504dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_3504e0:
    // 0x3504e0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3504e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3504e4:
    // 0x3504e4: 0x8c668a08  lw          $a2, -0x75F8($v1)
    ctx->pc = 0x3504e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3504e8:
    // 0x3504e8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3504e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3504ec:
    // 0x3504ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3504ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3504f0:
    // 0x3504f0: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x3504f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3504f4:
    // 0x3504f4: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x3504f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
label_3504f8:
    // 0x3504f8: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x3504f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_3504fc:
    // 0x3504fc: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x3504fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_350500:
    // 0x350500: 0xc4c40018  lwc1        $f4, 0x18($a2)
    ctx->pc = 0x350500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_350504:
    // 0x350504: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x350504u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_350508:
    // 0x350508: 0x0  nop
    ctx->pc = 0x350508u;
    // NOP
label_35050c:
    // 0x35050c: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x35050cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_350510:
    // 0x350510: 0x4604185c  madd.s      $f1, $f3, $f4
    ctx->pc = 0x350510u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_350514:
    // 0x350514: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x350514u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_350518:
    // 0x350518: 0x0  nop
    ctx->pc = 0x350518u;
    // NOP
label_35051c:
    // 0x35051c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x35051cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_350520:
    // 0x350520: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_350524:
    if (ctx->pc == 0x350524u) {
        ctx->pc = 0x350524u;
            // 0x350524: 0xe4e10000  swc1        $f1, 0x0($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->pc = 0x350528u;
        goto label_350528;
    }
    ctx->pc = 0x350520u;
    {
        const bool branch_taken_0x350520 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x350524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x350520u;
            // 0x350524: 0xe4e10000  swc1        $f1, 0x0($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x350520) {
            ctx->pc = 0x35052Cu;
            goto label_35052c;
        }
    }
    ctx->pc = 0x350528u;
label_350528:
    // 0x350528: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x350528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35052c:
    // 0x35052c: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
label_350530:
    if (ctx->pc == 0x350530u) {
        ctx->pc = 0x350530u;
            // 0x350530: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x350534u;
        goto label_350534;
    }
    ctx->pc = 0x35052Cu;
    {
        const bool branch_taken_0x35052c = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x35052c) {
            ctx->pc = 0x350530u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35052Cu;
            // 0x350530: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x350540u;
            goto label_350540;
        }
    }
    ctx->pc = 0x350534u;
label_350534:
    // 0x350534: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x350534u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_350538:
    // 0x350538: 0x10000007  b           . + 4 + (0x7 << 2)
label_35053c:
    if (ctx->pc == 0x35053Cu) {
        ctx->pc = 0x35053Cu;
            // 0x35053c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x350540u;
        goto label_350540;
    }
    ctx->pc = 0x350538u;
    {
        const bool branch_taken_0x350538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35053Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x350538u;
            // 0x35053c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x350538) {
            ctx->pc = 0x350558u;
            goto label_350558;
        }
    }
    ctx->pc = 0x350540u;
label_350540:
    // 0x350540: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x350540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_350544:
    // 0x350544: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x350544u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_350548:
    // 0x350548: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x350548u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35054c:
    // 0x35054c: 0x0  nop
    ctx->pc = 0x35054cu;
    // NOP
label_350550:
    // 0x350550: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x350550u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_350554:
    // 0x350554: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x350554u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_350558:
    // 0x350558: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x350558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35055c:
    // 0x35055c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x35055cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_350560:
    // 0x350560: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x350560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_350564:
    // 0x350564: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x350564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_350568:
    // 0x350568: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x350568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35056c:
    // 0x35056c: 0x3e00008  jr          $ra
label_350570:
    if (ctx->pc == 0x350570u) {
        ctx->pc = 0x350570u;
            // 0x350570: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x350574u;
        goto label_350574;
    }
    ctx->pc = 0x35056Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35056Cu;
            // 0x350570: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x350574u;
label_350574:
    // 0x350574: 0x0  nop
    ctx->pc = 0x350574u;
    // NOP
label_350578:
    // 0x350578: 0x0  nop
    ctx->pc = 0x350578u;
    // NOP
label_35057c:
    // 0x35057c: 0x0  nop
    ctx->pc = 0x35057cu;
    // NOP
label_350580:
    // 0x350580: 0x8cc31228  lw          $v1, 0x1228($a2)
    ctx->pc = 0x350580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4648)));
label_350584:
    // 0x350584: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
label_350588:
    if (ctx->pc == 0x350588u) {
        ctx->pc = 0x35058Cu;
        goto label_35058c;
    }
    ctx->pc = 0x350584u;
    {
        const bool branch_taken_0x350584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x350584) {
            ctx->pc = 0x350590u;
            goto label_350590;
        }
    }
    ctx->pc = 0x35058Cu;
label_35058c:
    // 0x35058c: 0xacc01228  sw          $zero, 0x1228($a2)
    ctx->pc = 0x35058cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4648), GPR_U32(ctx, 0));
label_350590:
    // 0x350590: 0x3e00008  jr          $ra
label_350594:
    if (ctx->pc == 0x350594u) {
        ctx->pc = 0x350598u;
        goto label_350598;
    }
    ctx->pc = 0x350590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x350598u;
label_350598:
    // 0x350598: 0x0  nop
    ctx->pc = 0x350598u;
    // NOP
label_35059c:
    // 0x35059c: 0x0  nop
    ctx->pc = 0x35059cu;
    // NOP
label_3505a0:
    // 0x3505a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3505a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3505a4:
    // 0x3505a4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3505a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3505a8:
    // 0x3505a8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3505a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3505ac:
    // 0x3505ac: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3505acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3505b0:
    // 0x3505b0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3505b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3505b4:
    // 0x3505b4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3505b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3505b8:
    // 0x3505b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3505b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3505bc:
    // 0x3505bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3505bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3505c0:
    // 0x3505c0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3505c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3505c4:
    // 0x3505c4: 0x9083004e  lbu         $v1, 0x4E($a0)
    ctx->pc = 0x3505c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 78)));
label_3505c8:
    // 0x3505c8: 0x106000ee  beqz        $v1, . + 4 + (0xEE << 2)
label_3505cc:
    if (ctx->pc == 0x3505CCu) {
        ctx->pc = 0x3505CCu;
            // 0x3505cc: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3505D0u;
        goto label_3505d0;
    }
    ctx->pc = 0x3505C8u;
    {
        const bool branch_taken_0x3505c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3505CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3505C8u;
            // 0x3505cc: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3505c8) {
            ctx->pc = 0x350984u;
            goto label_350984;
        }
    }
    ctx->pc = 0x3505D0u;
label_3505d0:
    // 0x3505d0: 0x8e431228  lw          $v1, 0x1228($s2)
    ctx->pc = 0x3505d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4648)));
label_3505d4:
    // 0x3505d4: 0x14730003  bne         $v1, $s3, . + 4 + (0x3 << 2)
label_3505d8:
    if (ctx->pc == 0x3505D8u) {
        ctx->pc = 0x3505DCu;
        goto label_3505dc;
    }
    ctx->pc = 0x3505D4u;
    {
        const bool branch_taken_0x3505d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x3505d4) {
            ctx->pc = 0x3505E4u;
            goto label_3505e4;
        }
    }
    ctx->pc = 0x3505DCu;
label_3505dc:
    // 0x3505dc: 0x100000ea  b           . + 4 + (0xEA << 2)
label_3505e0:
    if (ctx->pc == 0x3505E0u) {
        ctx->pc = 0x3505E0u;
            // 0x3505e0: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x3505E4u;
        goto label_3505e4;
    }
    ctx->pc = 0x3505DCu;
    {
        const bool branch_taken_0x3505dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3505E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3505DCu;
            // 0x3505e0: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3505dc) {
            ctx->pc = 0x350988u;
            goto label_350988;
        }
    }
    ctx->pc = 0x3505E4u;
label_3505e4:
    // 0x3505e4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3505e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3505e8:
    // 0x3505e8: 0x8c71e370  lw          $s1, -0x1C90($v1)
    ctx->pc = 0x3505e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959984)));
label_3505ec:
    // 0x3505ec: 0x8e430da0  lw          $v1, 0xDA0($s2)
    ctx->pc = 0x3505ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3488)));
label_3505f0:
    // 0x3505f0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3505f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3505f4:
    // 0x3505f4: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x3505f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
label_3505f8:
    // 0x3505f8: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x3505f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3505fc:
    // 0x3505fc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_350600:
    if (ctx->pc == 0x350600u) {
        ctx->pc = 0x350600u;
            // 0x350600: 0x8e500550  lw          $s0, 0x550($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
        ctx->pc = 0x350604u;
        goto label_350604;
    }
    ctx->pc = 0x3505FCu;
    {
        const bool branch_taken_0x3505fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x350600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3505FCu;
            // 0x350600: 0x8e500550  lw          $s0, 0x550($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3505fc) {
            ctx->pc = 0x350610u;
            goto label_350610;
        }
    }
    ctx->pc = 0x350604u;
label_350604:
    // 0x350604: 0x8e430db0  lw          $v1, 0xDB0($s2)
    ctx->pc = 0x350604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
label_350608:
    // 0x350608: 0x38630015  xori        $v1, $v1, 0x15
    ctx->pc = 0x350608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)21);
label_35060c:
    // 0x35060c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x35060cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_350610:
    // 0x350610: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x350610u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_350614:
    // 0x350614: 0x8e430db0  lw          $v1, 0xDB0($s2)
    ctx->pc = 0x350614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
label_350618:
    // 0x350618: 0x38630010  xori        $v1, $v1, 0x10
    ctx->pc = 0x350618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
label_35061c:
    // 0x35061c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x35061cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_350620:
    // 0x350620: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x350620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_350624:
    // 0x350624: 0x146000d7  bnez        $v1, . + 4 + (0xD7 << 2)
label_350628:
    if (ctx->pc == 0x350628u) {
        ctx->pc = 0x35062Cu;
        goto label_35062c;
    }
    ctx->pc = 0x350624u;
    {
        const bool branch_taken_0x350624 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x350624) {
            ctx->pc = 0x350984u;
            goto label_350984;
        }
    }
    ctx->pc = 0x35062Cu;
label_35062c:
    // 0x35062c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35062cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_350630:
    // 0x350630: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x350630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_350634:
    // 0x350634: 0xc04f278  jal         func_13C9E0
label_350638:
    if (ctx->pc == 0x350638u) {
        ctx->pc = 0x350638u;
            // 0x350638: 0xae531228  sw          $s3, 0x1228($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4648), GPR_U32(ctx, 19));
        ctx->pc = 0x35063Cu;
        goto label_35063c;
    }
    ctx->pc = 0x350634u;
    SET_GPR_U32(ctx, 31, 0x35063Cu);
    ctx->pc = 0x350638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350634u;
            // 0x350638: 0xae531228  sw          $s3, 0x1228($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4648), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35063Cu; }
        if (ctx->pc != 0x35063Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35063Cu; }
        if (ctx->pc != 0x35063Cu) { return; }
    }
    ctx->pc = 0x35063Cu;
label_35063c:
    // 0x35063c: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x35063cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_350640:
    // 0x350640: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x350640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_350644:
    // 0x350644: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x350644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_350648:
    // 0x350648: 0xc04cca0  jal         func_133280
label_35064c:
    if (ctx->pc == 0x35064Cu) {
        ctx->pc = 0x35064Cu;
            // 0x35064c: 0x24c63610  addiu       $a2, $a2, 0x3610 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13840));
        ctx->pc = 0x350650u;
        goto label_350650;
    }
    ctx->pc = 0x350648u;
    SET_GPR_U32(ctx, 31, 0x350650u);
    ctx->pc = 0x35064Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350648u;
            // 0x35064c: 0x24c63610  addiu       $a2, $a2, 0x3610 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350650u; }
        if (ctx->pc != 0x350650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350650u; }
        if (ctx->pc != 0x350650u) { return; }
    }
    ctx->pc = 0x350650u;
label_350650:
    // 0x350650: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x350650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_350654:
    // 0x350654: 0xc04cc44  jal         func_133110
label_350658:
    if (ctx->pc == 0x350658u) {
        ctx->pc = 0x350658u;
            // 0x350658: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35065Cu;
        goto label_35065c;
    }
    ctx->pc = 0x350654u;
    SET_GPR_U32(ctx, 31, 0x35065Cu);
    ctx->pc = 0x350658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350654u;
            // 0x350658: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35065Cu; }
        if (ctx->pc != 0x35065Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35065Cu; }
        if (ctx->pc != 0x35065Cu) { return; }
    }
    ctx->pc = 0x35065Cu;
label_35065c:
    // 0x35065c: 0x26440560  addiu       $a0, $s2, 0x560
    ctx->pc = 0x35065cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
label_350660:
    // 0x350660: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x350660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_350664:
    // 0x350664: 0xc075378  jal         func_1D4DE0
label_350668:
    if (ctx->pc == 0x350668u) {
        ctx->pc = 0x350668u;
            // 0x350668: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35066Cu;
        goto label_35066c;
    }
    ctx->pc = 0x350664u;
    SET_GPR_U32(ctx, 31, 0x35066Cu);
    ctx->pc = 0x350668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350664u;
            // 0x350668: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35066Cu; }
        if (ctx->pc != 0x35066Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35066Cu; }
        if (ctx->pc != 0x35066Cu) { return; }
    }
    ctx->pc = 0x35066Cu;
label_35066c:
    // 0x35066c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x35066cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_350670:
    // 0x350670: 0x2644087c  addiu       $a0, $s2, 0x87C
    ctx->pc = 0x350670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2172));
label_350674:
    // 0x350674: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x350674u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_350678:
    // 0x350678: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x350678u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_35067c:
    // 0x35067c: 0xc0c753c  jal         func_31D4F0
label_350680:
    if (ctx->pc == 0x350680u) {
        ctx->pc = 0x350680u;
            // 0x350680: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x350684u;
        goto label_350684;
    }
    ctx->pc = 0x35067Cu;
    SET_GPR_U32(ctx, 31, 0x350684u);
    ctx->pc = 0x350680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35067Cu;
            // 0x350680: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350684u; }
        if (ctx->pc != 0x350684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350684u; }
        if (ctx->pc != 0x350684u) { return; }
    }
    ctx->pc = 0x350684u;
label_350684:
    // 0x350684: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x350684u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_350688:
    // 0x350688: 0x2644092c  addiu       $a0, $s2, 0x92C
    ctx->pc = 0x350688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2348));
label_35068c:
    // 0x35068c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x35068cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_350690:
    // 0x350690: 0xc0c753c  jal         func_31D4F0
label_350694:
    if (ctx->pc == 0x350694u) {
        ctx->pc = 0x350694u;
            // 0x350694: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x350698u;
        goto label_350698;
    }
    ctx->pc = 0x350690u;
    SET_GPR_U32(ctx, 31, 0x350698u);
    ctx->pc = 0x350694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350690u;
            // 0x350694: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350698u; }
        if (ctx->pc != 0x350698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350698u; }
        if (ctx->pc != 0x350698u) { return; }
    }
    ctx->pc = 0x350698u;
label_350698:
    // 0x350698: 0x8e420a74  lw          $v0, 0xA74($s2)
    ctx->pc = 0x350698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2676)));
label_35069c:
    // 0x35069c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_3506a0:
    if (ctx->pc == 0x3506A0u) {
        ctx->pc = 0x3506A0u;
            // 0x3506a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3506A4u;
        goto label_3506a4;
    }
    ctx->pc = 0x35069Cu;
    {
        const bool branch_taken_0x35069c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35069c) {
            ctx->pc = 0x3506A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35069Cu;
            // 0x3506a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3506CCu;
            goto label_3506cc;
        }
    }
    ctx->pc = 0x3506A4u;
label_3506a4:
    // 0x3506a4: 0xc6610060  lwc1        $f1, 0x60($s3)
    ctx->pc = 0x3506a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3506a8:
    // 0x3506a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3506a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3506ac:
    // 0x3506ac: 0xc6400de0  lwc1        $f0, 0xDE0($s2)
    ctx->pc = 0x3506acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3506b0:
    // 0x3506b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3506b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3506b4:
    // 0x3506b4: 0xe6400de4  swc1        $f0, 0xDE4($s2)
    ctx->pc = 0x3506b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3556), bits); }
label_3506b8:
    // 0x3506b8: 0xc6600034  lwc1        $f0, 0x34($s3)
    ctx->pc = 0x3506b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3506bc:
    // 0x3506bc: 0x8e430d60  lw          $v1, 0xD60($s2)
    ctx->pc = 0x3506bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
label_3506c0:
    // 0x3506c0: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x3506c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_3506c4:
    // 0x3506c4: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x3506c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_3506c8:
    // 0x3506c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3506c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3506cc:
    // 0x3506cc: 0xc07649c  jal         func_1D9270
label_3506d0:
    if (ctx->pc == 0x3506D0u) {
        ctx->pc = 0x3506D0u;
            // 0x3506d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3506D4u;
        goto label_3506d4;
    }
    ctx->pc = 0x3506CCu;
    SET_GPR_U32(ctx, 31, 0x3506D4u);
    ctx->pc = 0x3506D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3506CCu;
            // 0x3506d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3506D4u; }
        if (ctx->pc != 0x3506D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3506D4u; }
        if (ctx->pc != 0x3506D4u) { return; }
    }
    ctx->pc = 0x3506D4u;
label_3506d4:
    // 0x3506d4: 0x8e510d60  lw          $s1, 0xD60($s2)
    ctx->pc = 0x3506d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
label_3506d8:
    // 0x3506d8: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x3506d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
label_3506dc:
    // 0x3506dc: 0x344501a9  ori         $a1, $v0, 0x1A9
    ctx->pc = 0x3506dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
label_3506e0:
    // 0x3506e0: 0x8e390030  lw          $t9, 0x30($s1)
    ctx->pc = 0x3506e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_3506e4:
    // 0x3506e4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3506e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3506e8:
    // 0x3506e8: 0x320f809  jalr        $t9
label_3506ec:
    if (ctx->pc == 0x3506ECu) {
        ctx->pc = 0x3506ECu;
            // 0x3506ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3506F0u;
        goto label_3506f0;
    }
    ctx->pc = 0x3506E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3506F0u);
        ctx->pc = 0x3506ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3506E8u;
            // 0x3506ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3506F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3506F0u; }
            if (ctx->pc != 0x3506F0u) { return; }
        }
        }
    }
    ctx->pc = 0x3506F0u;
label_3506f0:
    // 0x3506f0: 0x8e390030  lw          $t9, 0x30($s1)
    ctx->pc = 0x3506f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_3506f4:
    // 0x3506f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3506f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3506f8:
    // 0x3506f8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3506f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3506fc:
    // 0x3506fc: 0x320f809  jalr        $t9
label_350700:
    if (ctx->pc == 0x350700u) {
        ctx->pc = 0x350700u;
            // 0x350700: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x350704u;
        goto label_350704;
    }
    ctx->pc = 0x3506FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x350704u);
        ctx->pc = 0x350700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3506FCu;
            // 0x350700: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x350704u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x350704u; }
            if (ctx->pc != 0x350704u) { return; }
        }
        }
    }
    ctx->pc = 0x350704u;
label_350704:
    // 0x350704: 0x8e430db0  lw          $v1, 0xDB0($s2)
    ctx->pc = 0x350704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
label_350708:
    // 0x350708: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x350708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_35070c:
    // 0x35070c: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_350710:
    if (ctx->pc == 0x350710u) {
        ctx->pc = 0x350710u;
            // 0x350710: 0x8e420db0  lw          $v0, 0xDB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
        ctx->pc = 0x350714u;
        goto label_350714;
    }
    ctx->pc = 0x35070Cu;
    {
        const bool branch_taken_0x35070c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35070c) {
            ctx->pc = 0x350710u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35070Cu;
            // 0x350710: 0x8e420db0  lw          $v0, 0xDB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35072Cu;
            goto label_35072c;
        }
    }
    ctx->pc = 0x350714u;
label_350714:
    // 0x350714: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x350714u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_350718:
    // 0x350718: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x350718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_35071c:
    // 0x35071c: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x35071cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_350720:
    // 0x350720: 0x320f809  jalr        $t9
label_350724:
    if (ctx->pc == 0x350724u) {
        ctx->pc = 0x350724u;
            // 0x350724: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x350728u;
        goto label_350728;
    }
    ctx->pc = 0x350720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x350728u);
        ctx->pc = 0x350724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x350720u;
            // 0x350724: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x350728u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x350728u; }
            if (ctx->pc != 0x350728u) { return; }
        }
        }
    }
    ctx->pc = 0x350728u;
label_350728:
    // 0x350728: 0x8e420db0  lw          $v0, 0xDB0($s2)
    ctx->pc = 0x350728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
label_35072c:
    // 0x35072c: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x35072cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_350730:
    // 0x350730: 0x5020000a  beql        $at, $zero, . + 4 + (0xA << 2)
label_350734:
    if (ctx->pc == 0x350734u) {
        ctx->pc = 0x350734u;
            // 0x350734: 0x8e420d70  lw          $v0, 0xD70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
        ctx->pc = 0x350738u;
        goto label_350738;
    }
    ctx->pc = 0x350730u;
    {
        const bool branch_taken_0x350730 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x350730) {
            ctx->pc = 0x350734u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x350730u;
            // 0x350734: 0x8e420d70  lw          $v0, 0xD70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35075Cu;
            goto label_35075c;
        }
    }
    ctx->pc = 0x350738u;
label_350738:
    // 0x350738: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x350738u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_35073c:
    // 0x35073c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_350740:
    if (ctx->pc == 0x350740u) {
        ctx->pc = 0x350744u;
        goto label_350744;
    }
    ctx->pc = 0x35073Cu;
    {
        const bool branch_taken_0x35073c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35073c) {
            ctx->pc = 0x350758u;
            goto label_350758;
        }
    }
    ctx->pc = 0x350744u;
label_350744:
    // 0x350744: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x350744u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_350748:
    // 0x350748: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x350748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_35074c:
    // 0x35074c: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x35074cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_350750:
    // 0x350750: 0x320f809  jalr        $t9
label_350754:
    if (ctx->pc == 0x350754u) {
        ctx->pc = 0x350754u;
            // 0x350754: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x350758u;
        goto label_350758;
    }
    ctx->pc = 0x350750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x350758u);
        ctx->pc = 0x350754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x350750u;
            // 0x350754: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x350758u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x350758u; }
            if (ctx->pc != 0x350758u) { return; }
        }
        }
    }
    ctx->pc = 0x350758u;
label_350758:
    // 0x350758: 0x8e420d70  lw          $v0, 0xD70($s2)
    ctx->pc = 0x350758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
label_35075c:
    // 0x35075c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35075cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_350760:
    // 0x350760: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x350760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_350764:
    // 0x350764: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x350764u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_350768:
    // 0x350768: 0x1446002b  bne         $v0, $a2, . + 4 + (0x2B << 2)
label_35076c:
    if (ctx->pc == 0x35076Cu) {
        ctx->pc = 0x350770u;
        goto label_350770;
    }
    ctx->pc = 0x350768u;
    {
        const bool branch_taken_0x350768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x350768) {
            ctx->pc = 0x350818u;
            goto label_350818;
        }
    }
    ctx->pc = 0x350770u;
label_350770:
    // 0x350770: 0x8e4211d4  lw          $v0, 0x11D4($s2)
    ctx->pc = 0x350770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4564)));
label_350774:
    // 0x350774: 0x401826  xor         $v1, $v0, $zero
    ctx->pc = 0x350774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_350778:
    // 0x350778: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x350778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_35077c:
    // 0x35077c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x35077cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_350780:
    // 0x350780: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x350780u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_350784:
    // 0x350784: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x350784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_350788:
    // 0x350788: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_35078c:
    if (ctx->pc == 0x35078Cu) {
        ctx->pc = 0x350790u;
        goto label_350790;
    }
    ctx->pc = 0x350788u;
    {
        const bool branch_taken_0x350788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x350788) {
            ctx->pc = 0x350818u;
            goto label_350818;
        }
    }
    ctx->pc = 0x350790u;
label_350790:
    // 0x350790: 0x8203010c  lb          $v1, 0x10C($s0)
    ctx->pc = 0x350790u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_350794:
    // 0x350794: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x350794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_350798:
    // 0x350798: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x350798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_35079c:
    // 0x35079c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x35079cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3507a0:
    // 0x3507a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3507a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3507a4:
    // 0x3507a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3507a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3507a8:
    // 0x3507a8: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x3507a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_3507ac:
    // 0x3507ac: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x3507acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3507b0:
    // 0x3507b0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3507b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3507b4:
    // 0x3507b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3507b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3507b8:
    // 0x3507b8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3507b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3507bc:
    // 0x3507bc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3507bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3507c0:
    // 0x3507c0: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x3507c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_3507c4:
    // 0x3507c4: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x3507c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3507c8:
    // 0x3507c8: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x3507c8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_3507cc:
    // 0x3507cc: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x3507ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_3507d0:
    // 0x3507d0: 0x320f809  jalr        $t9
label_3507d4:
    if (ctx->pc == 0x3507D4u) {
        ctx->pc = 0x3507D4u;
            // 0x3507d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3507D8u;
        goto label_3507d8;
    }
    ctx->pc = 0x3507D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3507D8u);
        ctx->pc = 0x3507D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3507D0u;
            // 0x3507d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3507D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3507D8u; }
            if (ctx->pc != 0x3507D8u) { return; }
        }
        }
    }
    ctx->pc = 0x3507D8u;
label_3507d8:
    // 0x3507d8: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x3507d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3507dc:
    // 0x3507dc: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x3507dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_3507e0:
    // 0x3507e0: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x3507e0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_3507e4:
    // 0x3507e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3507e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3507e8:
    // 0x3507e8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3507e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3507ec:
    // 0x3507ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3507ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3507f0:
    // 0x3507f0: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x3507f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_3507f4:
    // 0x3507f4: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x3507f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_3507f8:
    // 0x3507f8: 0x320f809  jalr        $t9
label_3507fc:
    if (ctx->pc == 0x3507FCu) {
        ctx->pc = 0x3507FCu;
            // 0x3507fc: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x350800u;
        goto label_350800;
    }
    ctx->pc = 0x3507F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x350800u);
        ctx->pc = 0x3507FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3507F8u;
            // 0x3507fc: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x350800u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x350800u; }
            if (ctx->pc != 0x350800u) { return; }
        }
        }
    }
    ctx->pc = 0x350800u;
label_350800:
    // 0x350800: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x350800u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_350804:
    // 0x350804: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x350804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_350808:
    // 0x350808: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x350808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_35080c:
    // 0x35080c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x35080cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_350810:
    // 0x350810: 0x320f809  jalr        $t9
label_350814:
    if (ctx->pc == 0x350814u) {
        ctx->pc = 0x350814u;
            // 0x350814: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x350818u;
        goto label_350818;
    }
    ctx->pc = 0x350810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x350818u);
        ctx->pc = 0x350814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x350810u;
            // 0x350814: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x350818u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x350818u; }
            if (ctx->pc != 0x350818u) { return; }
        }
        }
    }
    ctx->pc = 0x350818u;
label_350818:
    // 0x350818: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x350818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_35081c:
    // 0x35081c: 0x8c540e80  lw          $s4, 0xE80($v0)
    ctx->pc = 0x35081cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_350820:
    // 0x350820: 0xc077228  jal         func_1DC8A0
label_350824:
    if (ctx->pc == 0x350824u) {
        ctx->pc = 0x350824u;
            // 0x350824: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x350828u;
        goto label_350828;
    }
    ctx->pc = 0x350820u;
    SET_GPR_U32(ctx, 31, 0x350828u);
    ctx->pc = 0x350824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350820u;
            // 0x350824: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC8A0u;
    if (runtime->hasFunction(0x1DC8A0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350828u; }
        if (ctx->pc != 0x350828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC8A0_0x1dc8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350828u; }
        if (ctx->pc != 0x350828u) { return; }
    }
    ctx->pc = 0x350828u;
label_350828:
    // 0x350828: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
label_35082c:
    if (ctx->pc == 0x35082Cu) {
        ctx->pc = 0x350830u;
        goto label_350830;
    }
    ctx->pc = 0x350828u;
    {
        const bool branch_taken_0x350828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x350828) {
            ctx->pc = 0x350984u;
            goto label_350984;
        }
    }
    ctx->pc = 0x350830u;
label_350830:
    // 0x350830: 0xc07732c  jal         func_1DCCB0
label_350834:
    if (ctx->pc == 0x350834u) {
        ctx->pc = 0x350834u;
            // 0x350834: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x350838u;
        goto label_350838;
    }
    ctx->pc = 0x350830u;
    SET_GPR_U32(ctx, 31, 0x350838u);
    ctx->pc = 0x350834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350830u;
            // 0x350834: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCB0u;
    if (runtime->hasFunction(0x1DCCB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350838u; }
        if (ctx->pc != 0x350838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCB0_0x1dccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350838u; }
        if (ctx->pc != 0x350838u) { return; }
    }
    ctx->pc = 0x350838u;
label_350838:
    // 0x350838: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
label_35083c:
    if (ctx->pc == 0x35083Cu) {
        ctx->pc = 0x350840u;
        goto label_350840;
    }
    ctx->pc = 0x350838u;
    {
        const bool branch_taken_0x350838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x350838) {
            ctx->pc = 0x350984u;
            goto label_350984;
        }
    }
    ctx->pc = 0x350840u;
label_350840:
    // 0x350840: 0xc077320  jal         func_1DCC80
label_350844:
    if (ctx->pc == 0x350844u) {
        ctx->pc = 0x350844u;
            // 0x350844: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x350848u;
        goto label_350848;
    }
    ctx->pc = 0x350840u;
    SET_GPR_U32(ctx, 31, 0x350848u);
    ctx->pc = 0x350844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350840u;
            // 0x350844: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC80u;
    if (runtime->hasFunction(0x1DCC80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350848u; }
        if (ctx->pc != 0x350848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC80_0x1dcc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350848u; }
        if (ctx->pc != 0x350848u) { return; }
    }
    ctx->pc = 0x350848u;
label_350848:
    // 0x350848: 0xc0d4290  jal         func_350A40
label_35084c:
    if (ctx->pc == 0x35084Cu) {
        ctx->pc = 0x35084Cu;
            // 0x35084c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x350850u;
        goto label_350850;
    }
    ctx->pc = 0x350848u;
    SET_GPR_U32(ctx, 31, 0x350850u);
    ctx->pc = 0x35084Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350848u;
            // 0x35084c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350A40u;
    if (runtime->hasFunction(0x350A40u)) {
        auto targetFn = runtime->lookupFunction(0x350A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350850u; }
        if (ctx->pc != 0x350850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350A40_0x350a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350850u; }
        if (ctx->pc != 0x350850u) { return; }
    }
    ctx->pc = 0x350850u;
label_350850:
    // 0x350850: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
label_350854:
    if (ctx->pc == 0x350854u) {
        ctx->pc = 0x350854u;
            // 0x350854: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x350858u;
        goto label_350858;
    }
    ctx->pc = 0x350850u;
    {
        const bool branch_taken_0x350850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x350850) {
            ctx->pc = 0x350854u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x350850u;
            // 0x350854: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3508BCu;
            goto label_3508bc;
        }
    }
    ctx->pc = 0x350858u;
label_350858:
    // 0x350858: 0xc040180  jal         func_100600
label_35085c:
    if (ctx->pc == 0x35085Cu) {
        ctx->pc = 0x35085Cu;
            // 0x35085c: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->pc = 0x350860u;
        goto label_350860;
    }
    ctx->pc = 0x350858u;
    SET_GPR_U32(ctx, 31, 0x350860u);
    ctx->pc = 0x35085Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350858u;
            // 0x35085c: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350860u; }
        if (ctx->pc != 0x350860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350860u; }
        if (ctx->pc != 0x350860u) { return; }
    }
    ctx->pc = 0x350860u;
label_350860:
    // 0x350860: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x350860u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_350864:
    // 0x350864: 0x12600014  beqz        $s3, . + 4 + (0x14 << 2)
label_350868:
    if (ctx->pc == 0x350868u) {
        ctx->pc = 0x35086Cu;
        goto label_35086c;
    }
    ctx->pc = 0x350864u;
    {
        const bool branch_taken_0x350864 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x350864) {
            ctx->pc = 0x3508B8u;
            goto label_3508b8;
        }
    }
    ctx->pc = 0x35086Cu;
label_35086c:
    // 0x35086c: 0xc0d428c  jal         func_350A30
label_350870:
    if (ctx->pc == 0x350870u) {
        ctx->pc = 0x350870u;
            // 0x350870: 0x26840054  addiu       $a0, $s4, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 84));
        ctx->pc = 0x350874u;
        goto label_350874;
    }
    ctx->pc = 0x35086Cu;
    SET_GPR_U32(ctx, 31, 0x350874u);
    ctx->pc = 0x350870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35086Cu;
            // 0x350870: 0x26840054  addiu       $a0, $s4, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350A30u;
    if (runtime->hasFunction(0x350A30u)) {
        auto targetFn = runtime->lookupFunction(0x350A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350874u; }
        if (ctx->pc != 0x350874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350A30_0x350a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350874u; }
        if (ctx->pc != 0x350874u) { return; }
    }
    ctx->pc = 0x350874u;
label_350874:
    // 0x350874: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x350874u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_350878:
    // 0x350878: 0xc077324  jal         func_1DCC90
label_35087c:
    if (ctx->pc == 0x35087Cu) {
        ctx->pc = 0x35087Cu;
            // 0x35087c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x350880u;
        goto label_350880;
    }
    ctx->pc = 0x350878u;
    SET_GPR_U32(ctx, 31, 0x350880u);
    ctx->pc = 0x35087Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350878u;
            // 0x35087c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC90u;
    if (runtime->hasFunction(0x1DCC90u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350880u; }
        if (ctx->pc != 0x350880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC90_0x1dcc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350880u; }
        if (ctx->pc != 0x350880u) { return; }
    }
    ctx->pc = 0x350880u;
label_350880:
    // 0x350880: 0x2863c  dsll32      $s0, $v0, 24
    ctx->pc = 0x350880u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 24));
label_350884:
    // 0x350884: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x350884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_350888:
    // 0x350888: 0xc077320  jal         func_1DCC80
label_35088c:
    if (ctx->pc == 0x35088Cu) {
        ctx->pc = 0x35088Cu;
            // 0x35088c: 0x10863f  dsra32      $s0, $s0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
        ctx->pc = 0x350890u;
        goto label_350890;
    }
    ctx->pc = 0x350888u;
    SET_GPR_U32(ctx, 31, 0x350890u);
    ctx->pc = 0x35088Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350888u;
            // 0x35088c: 0x10863f  dsra32      $s0, $s0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC80u;
    if (runtime->hasFunction(0x1DCC80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350890u; }
        if (ctx->pc != 0x350890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC80_0x1dcc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350890u; }
        if (ctx->pc != 0x350890u) { return; }
    }
    ctx->pc = 0x350890u;
label_350890:
    // 0x350890: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x350890u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_350894:
    // 0x350894: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x350894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_350898:
    // 0x350898: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x350898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_35089c:
    // 0x35089c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x35089cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3508a0:
    // 0x3508a0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x3508a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3508a4:
    // 0x3508a4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x3508a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3508a8:
    // 0x3508a8: 0x344594a8  ori         $a1, $v0, 0x94A8
    ctx->pc = 0x3508a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38056);
label_3508ac:
    // 0x3508ac: 0x24080821  addiu       $t0, $zero, 0x821
    ctx->pc = 0x3508acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2081));
label_3508b0:
    // 0x3508b0: 0xc0d4270  jal         func_3509C0
label_3508b4:
    if (ctx->pc == 0x3508B4u) {
        ctx->pc = 0x3508B4u;
            // 0x3508b4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3508B8u;
        goto label_3508b8;
    }
    ctx->pc = 0x3508B0u;
    SET_GPR_U32(ctx, 31, 0x3508B8u);
    ctx->pc = 0x3508B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3508B0u;
            // 0x3508b4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3509C0u;
    if (runtime->hasFunction(0x3509C0u)) {
        auto targetFn = runtime->lookupFunction(0x3509C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3508B8u; }
        if (ctx->pc != 0x3508B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003509C0_0x3509c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3508B8u; }
        if (ctx->pc != 0x3508B8u) { return; }
    }
    ctx->pc = 0x3508B8u;
label_3508b8:
    // 0x3508b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3508b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3508bc:
    // 0x3508bc: 0xc0d426c  jal         func_3509B0
label_3508c0:
    if (ctx->pc == 0x3508C0u) {
        ctx->pc = 0x3508C4u;
        goto label_3508c4;
    }
    ctx->pc = 0x3508BCu;
    SET_GPR_U32(ctx, 31, 0x3508C4u);
    ctx->pc = 0x3509B0u;
    if (runtime->hasFunction(0x3509B0u)) {
        auto targetFn = runtime->lookupFunction(0x3509B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3508C4u; }
        if (ctx->pc != 0x3508C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003509B0_0x3509b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3508C4u; }
        if (ctx->pc != 0x3508C4u) { return; }
    }
    ctx->pc = 0x3508C4u;
label_3508c4:
    // 0x3508c4: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_3508c8:
    if (ctx->pc == 0x3508C8u) {
        ctx->pc = 0x3508CCu;
        goto label_3508cc;
    }
    ctx->pc = 0x3508C4u;
    {
        const bool branch_taken_0x3508c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3508c4) {
            ctx->pc = 0x350984u;
            goto label_350984;
        }
    }
    ctx->pc = 0x3508CCu;
label_3508cc:
    // 0x3508cc: 0xc07732c  jal         func_1DCCB0
label_3508d0:
    if (ctx->pc == 0x3508D0u) {
        ctx->pc = 0x3508D0u;
            // 0x3508d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3508D4u;
        goto label_3508d4;
    }
    ctx->pc = 0x3508CCu;
    SET_GPR_U32(ctx, 31, 0x3508D4u);
    ctx->pc = 0x3508D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3508CCu;
            // 0x3508d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCB0u;
    if (runtime->hasFunction(0x1DCCB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3508D4u; }
        if (ctx->pc != 0x3508D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCB0_0x1dccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3508D4u; }
        if (ctx->pc != 0x3508D4u) { return; }
    }
    ctx->pc = 0x3508D4u;
label_3508d4:
    // 0x3508d4: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_3508d8:
    if (ctx->pc == 0x3508D8u) {
        ctx->pc = 0x3508DCu;
        goto label_3508dc;
    }
    ctx->pc = 0x3508D4u;
    {
        const bool branch_taken_0x3508d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3508d4) {
            ctx->pc = 0x350984u;
            goto label_350984;
        }
    }
    ctx->pc = 0x3508DCu;
label_3508dc:
    // 0x3508dc: 0xc0770e4  jal         func_1DC390
label_3508e0:
    if (ctx->pc == 0x3508E0u) {
        ctx->pc = 0x3508E0u;
            // 0x3508e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3508E4u;
        goto label_3508e4;
    }
    ctx->pc = 0x3508DCu;
    SET_GPR_U32(ctx, 31, 0x3508E4u);
    ctx->pc = 0x3508E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3508DCu;
            // 0x3508e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC390u;
    if (runtime->hasFunction(0x1DC390u)) {
        auto targetFn = runtime->lookupFunction(0x1DC390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3508E4u; }
        if (ctx->pc != 0x3508E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC390_0x1dc390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3508E4u; }
        if (ctx->pc != 0x3508E4u) { return; }
    }
    ctx->pc = 0x3508E4u;
label_3508e4:
    // 0x3508e4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3508e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3508e8:
    // 0x3508e8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_3508ec:
    if (ctx->pc == 0x3508ECu) {
        ctx->pc = 0x3508F0u;
        goto label_3508f0;
    }
    ctx->pc = 0x3508E8u;
    {
        const bool branch_taken_0x3508e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3508e8) {
            ctx->pc = 0x3508F8u;
            goto label_3508f8;
        }
    }
    ctx->pc = 0x3508F0u;
label_3508f0:
    // 0x3508f0: 0x10000024  b           . + 4 + (0x24 << 2)
label_3508f4:
    if (ctx->pc == 0x3508F4u) {
        ctx->pc = 0x3508F8u;
        goto label_3508f8;
    }
    ctx->pc = 0x3508F0u;
    {
        const bool branch_taken_0x3508f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3508f0) {
            ctx->pc = 0x350984u;
            goto label_350984;
        }
    }
    ctx->pc = 0x3508F8u;
label_3508f8:
    // 0x3508f8: 0xc0576f4  jal         func_15DBD0
label_3508fc:
    if (ctx->pc == 0x3508FCu) {
        ctx->pc = 0x350900u;
        goto label_350900;
    }
    ctx->pc = 0x3508F8u;
    SET_GPR_U32(ctx, 31, 0x350900u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350900u; }
        if (ctx->pc != 0x350900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350900u; }
        if (ctx->pc != 0x350900u) { return; }
    }
    ctx->pc = 0x350900u;
label_350900:
    // 0x350900: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x350900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_350904:
    // 0x350904: 0xc077320  jal         func_1DCC80
label_350908:
    if (ctx->pc == 0x350908u) {
        ctx->pc = 0x350908u;
            // 0x350908: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35090Cu;
        goto label_35090c;
    }
    ctx->pc = 0x350904u;
    SET_GPR_U32(ctx, 31, 0x35090Cu);
    ctx->pc = 0x350908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350904u;
            // 0x350908: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC80u;
    if (runtime->hasFunction(0x1DCC80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35090Cu; }
        if (ctx->pc != 0x35090Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC80_0x1dcc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35090Cu; }
        if (ctx->pc != 0x35090Cu) { return; }
    }
    ctx->pc = 0x35090Cu;
label_35090c:
    // 0x35090c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35090cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_350910:
    // 0x350910: 0xc076984  jal         func_1DA610
label_350914:
    if (ctx->pc == 0x350914u) {
        ctx->pc = 0x350914u;
            // 0x350914: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x350918u;
        goto label_350918;
    }
    ctx->pc = 0x350910u;
    SET_GPR_U32(ctx, 31, 0x350918u);
    ctx->pc = 0x350914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350910u;
            // 0x350914: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350918u; }
        if (ctx->pc != 0x350918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350918u; }
        if (ctx->pc != 0x350918u) { return; }
    }
    ctx->pc = 0x350918u;
label_350918:
    // 0x350918: 0xc076980  jal         func_1DA600
label_35091c:
    if (ctx->pc == 0x35091Cu) {
        ctx->pc = 0x35091Cu;
            // 0x35091c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x350920u;
        goto label_350920;
    }
    ctx->pc = 0x350918u;
    SET_GPR_U32(ctx, 31, 0x350920u);
    ctx->pc = 0x35091Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350918u;
            // 0x35091c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350920u; }
        if (ctx->pc != 0x350920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350920u; }
        if (ctx->pc != 0x350920u) { return; }
    }
    ctx->pc = 0x350920u;
label_350920:
    // 0x350920: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x350920u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_350924:
    // 0x350924: 0xc077324  jal         func_1DCC90
label_350928:
    if (ctx->pc == 0x350928u) {
        ctx->pc = 0x350928u;
            // 0x350928: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35092Cu;
        goto label_35092c;
    }
    ctx->pc = 0x350924u;
    SET_GPR_U32(ctx, 31, 0x35092Cu);
    ctx->pc = 0x350928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350924u;
            // 0x350928: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC90u;
    if (runtime->hasFunction(0x1DCC90u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35092Cu; }
        if (ctx->pc != 0x35092Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC90_0x1dcc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35092Cu; }
        if (ctx->pc != 0x35092Cu) { return; }
    }
    ctx->pc = 0x35092Cu;
label_35092c:
    // 0x35092c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x35092cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_350930:
    // 0x350930: 0xc077258  jal         func_1DC960
label_350934:
    if (ctx->pc == 0x350934u) {
        ctx->pc = 0x350934u;
            // 0x350934: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x350938u;
        goto label_350938;
    }
    ctx->pc = 0x350930u;
    SET_GPR_U32(ctx, 31, 0x350938u);
    ctx->pc = 0x350934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350930u;
            // 0x350934: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC960u;
    if (runtime->hasFunction(0x1DC960u)) {
        auto targetFn = runtime->lookupFunction(0x1DC960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350938u; }
        if (ctx->pc != 0x350938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC960_0x1dc960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350938u; }
        if (ctx->pc != 0x350938u) { return; }
    }
    ctx->pc = 0x350938u;
label_350938:
    // 0x350938: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x350938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35093c:
    // 0x35093c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35093cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_350940:
    // 0x350940: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x350940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_350944:
    // 0x350944: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x350944u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_350948:
    // 0x350948: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x350948u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_35094c:
    // 0x35094c: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x35094cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_350950:
    // 0x350950: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x350950u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_350954:
    // 0x350954: 0xc0bb404  jal         func_2ED010
label_350958:
    if (ctx->pc == 0x350958u) {
        ctx->pc = 0x350958u;
            // 0x350958: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x35095Cu;
        goto label_35095c;
    }
    ctx->pc = 0x350954u;
    SET_GPR_U32(ctx, 31, 0x35095Cu);
    ctx->pc = 0x350958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350954u;
            // 0x350958: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35095Cu; }
        if (ctx->pc != 0x35095Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35095Cu; }
        if (ctx->pc != 0x35095Cu) { return; }
    }
    ctx->pc = 0x35095Cu;
label_35095c:
    // 0x35095c: 0xc077320  jal         func_1DCC80
label_350960:
    if (ctx->pc == 0x350960u) {
        ctx->pc = 0x350960u;
            // 0x350960: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x350964u;
        goto label_350964;
    }
    ctx->pc = 0x35095Cu;
    SET_GPR_U32(ctx, 31, 0x350964u);
    ctx->pc = 0x350960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35095Cu;
            // 0x350960: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC80u;
    if (runtime->hasFunction(0x1DCC80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350964u; }
        if (ctx->pc != 0x350964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC80_0x1dcc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350964u; }
        if (ctx->pc != 0x350964u) { return; }
    }
    ctx->pc = 0x350964u;
label_350964:
    // 0x350964: 0x3c0442f0  lui         $a0, 0x42F0
    ctx->pc = 0x350964u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17136 << 16));
label_350968:
    // 0x350968: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x350968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_35096c:
    // 0x35096c: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x35096cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_350970:
    // 0x350970: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x350970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_350974:
    // 0x350974: 0x8c640ea4  lw          $a0, 0xEA4($v1)
    ctx->pc = 0x350974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3748)));
label_350978:
    // 0x350978: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x350978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_35097c:
    // 0x35097c: 0xc077554  jal         func_1DD550
label_350980:
    if (ctx->pc == 0x350980u) {
        ctx->pc = 0x350980u;
            // 0x350980: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x350984u;
        goto label_350984;
    }
    ctx->pc = 0x35097Cu;
    SET_GPR_U32(ctx, 31, 0x350984u);
    ctx->pc = 0x350980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35097Cu;
            // 0x350980: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD550u;
    if (runtime->hasFunction(0x1DD550u)) {
        auto targetFn = runtime->lookupFunction(0x1DD550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350984u; }
        if (ctx->pc != 0x350984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD550_0x1dd550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350984u; }
        if (ctx->pc != 0x350984u) { return; }
    }
    ctx->pc = 0x350984u;
label_350984:
    // 0x350984: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x350984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_350988:
    // 0x350988: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x350988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_35098c:
    // 0x35098c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x35098cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_350990:
    // 0x350990: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x350990u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_350994:
    // 0x350994: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x350994u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_350998:
    // 0x350998: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x350998u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_35099c:
    // 0x35099c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35099cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3509a0:
    // 0x3509a0: 0x3e00008  jr          $ra
label_3509a4:
    if (ctx->pc == 0x3509A4u) {
        ctx->pc = 0x3509A4u;
            // 0x3509a4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3509A8u;
        goto label_3509a8;
    }
    ctx->pc = 0x3509A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3509A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3509A0u;
            // 0x3509a4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3509A8u;
label_3509a8:
    // 0x3509a8: 0x0  nop
    ctx->pc = 0x3509a8u;
    // NOP
label_3509ac:
    // 0x3509ac: 0x0  nop
    ctx->pc = 0x3509acu;
    // NOP
}
