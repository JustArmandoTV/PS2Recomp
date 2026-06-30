#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0038F600
// Address: 0x38f600 - 0x38fb90
void sub_0038F600_0x38f600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038F600_0x38f600");
#endif

    switch (ctx->pc) {
        case 0x38f600u: goto label_38f600;
        case 0x38f604u: goto label_38f604;
        case 0x38f608u: goto label_38f608;
        case 0x38f60cu: goto label_38f60c;
        case 0x38f610u: goto label_38f610;
        case 0x38f614u: goto label_38f614;
        case 0x38f618u: goto label_38f618;
        case 0x38f61cu: goto label_38f61c;
        case 0x38f620u: goto label_38f620;
        case 0x38f624u: goto label_38f624;
        case 0x38f628u: goto label_38f628;
        case 0x38f62cu: goto label_38f62c;
        case 0x38f630u: goto label_38f630;
        case 0x38f634u: goto label_38f634;
        case 0x38f638u: goto label_38f638;
        case 0x38f63cu: goto label_38f63c;
        case 0x38f640u: goto label_38f640;
        case 0x38f644u: goto label_38f644;
        case 0x38f648u: goto label_38f648;
        case 0x38f64cu: goto label_38f64c;
        case 0x38f650u: goto label_38f650;
        case 0x38f654u: goto label_38f654;
        case 0x38f658u: goto label_38f658;
        case 0x38f65cu: goto label_38f65c;
        case 0x38f660u: goto label_38f660;
        case 0x38f664u: goto label_38f664;
        case 0x38f668u: goto label_38f668;
        case 0x38f66cu: goto label_38f66c;
        case 0x38f670u: goto label_38f670;
        case 0x38f674u: goto label_38f674;
        case 0x38f678u: goto label_38f678;
        case 0x38f67cu: goto label_38f67c;
        case 0x38f680u: goto label_38f680;
        case 0x38f684u: goto label_38f684;
        case 0x38f688u: goto label_38f688;
        case 0x38f68cu: goto label_38f68c;
        case 0x38f690u: goto label_38f690;
        case 0x38f694u: goto label_38f694;
        case 0x38f698u: goto label_38f698;
        case 0x38f69cu: goto label_38f69c;
        case 0x38f6a0u: goto label_38f6a0;
        case 0x38f6a4u: goto label_38f6a4;
        case 0x38f6a8u: goto label_38f6a8;
        case 0x38f6acu: goto label_38f6ac;
        case 0x38f6b0u: goto label_38f6b0;
        case 0x38f6b4u: goto label_38f6b4;
        case 0x38f6b8u: goto label_38f6b8;
        case 0x38f6bcu: goto label_38f6bc;
        case 0x38f6c0u: goto label_38f6c0;
        case 0x38f6c4u: goto label_38f6c4;
        case 0x38f6c8u: goto label_38f6c8;
        case 0x38f6ccu: goto label_38f6cc;
        case 0x38f6d0u: goto label_38f6d0;
        case 0x38f6d4u: goto label_38f6d4;
        case 0x38f6d8u: goto label_38f6d8;
        case 0x38f6dcu: goto label_38f6dc;
        case 0x38f6e0u: goto label_38f6e0;
        case 0x38f6e4u: goto label_38f6e4;
        case 0x38f6e8u: goto label_38f6e8;
        case 0x38f6ecu: goto label_38f6ec;
        case 0x38f6f0u: goto label_38f6f0;
        case 0x38f6f4u: goto label_38f6f4;
        case 0x38f6f8u: goto label_38f6f8;
        case 0x38f6fcu: goto label_38f6fc;
        case 0x38f700u: goto label_38f700;
        case 0x38f704u: goto label_38f704;
        case 0x38f708u: goto label_38f708;
        case 0x38f70cu: goto label_38f70c;
        case 0x38f710u: goto label_38f710;
        case 0x38f714u: goto label_38f714;
        case 0x38f718u: goto label_38f718;
        case 0x38f71cu: goto label_38f71c;
        case 0x38f720u: goto label_38f720;
        case 0x38f724u: goto label_38f724;
        case 0x38f728u: goto label_38f728;
        case 0x38f72cu: goto label_38f72c;
        case 0x38f730u: goto label_38f730;
        case 0x38f734u: goto label_38f734;
        case 0x38f738u: goto label_38f738;
        case 0x38f73cu: goto label_38f73c;
        case 0x38f740u: goto label_38f740;
        case 0x38f744u: goto label_38f744;
        case 0x38f748u: goto label_38f748;
        case 0x38f74cu: goto label_38f74c;
        case 0x38f750u: goto label_38f750;
        case 0x38f754u: goto label_38f754;
        case 0x38f758u: goto label_38f758;
        case 0x38f75cu: goto label_38f75c;
        case 0x38f760u: goto label_38f760;
        case 0x38f764u: goto label_38f764;
        case 0x38f768u: goto label_38f768;
        case 0x38f76cu: goto label_38f76c;
        case 0x38f770u: goto label_38f770;
        case 0x38f774u: goto label_38f774;
        case 0x38f778u: goto label_38f778;
        case 0x38f77cu: goto label_38f77c;
        case 0x38f780u: goto label_38f780;
        case 0x38f784u: goto label_38f784;
        case 0x38f788u: goto label_38f788;
        case 0x38f78cu: goto label_38f78c;
        case 0x38f790u: goto label_38f790;
        case 0x38f794u: goto label_38f794;
        case 0x38f798u: goto label_38f798;
        case 0x38f79cu: goto label_38f79c;
        case 0x38f7a0u: goto label_38f7a0;
        case 0x38f7a4u: goto label_38f7a4;
        case 0x38f7a8u: goto label_38f7a8;
        case 0x38f7acu: goto label_38f7ac;
        case 0x38f7b0u: goto label_38f7b0;
        case 0x38f7b4u: goto label_38f7b4;
        case 0x38f7b8u: goto label_38f7b8;
        case 0x38f7bcu: goto label_38f7bc;
        case 0x38f7c0u: goto label_38f7c0;
        case 0x38f7c4u: goto label_38f7c4;
        case 0x38f7c8u: goto label_38f7c8;
        case 0x38f7ccu: goto label_38f7cc;
        case 0x38f7d0u: goto label_38f7d0;
        case 0x38f7d4u: goto label_38f7d4;
        case 0x38f7d8u: goto label_38f7d8;
        case 0x38f7dcu: goto label_38f7dc;
        case 0x38f7e0u: goto label_38f7e0;
        case 0x38f7e4u: goto label_38f7e4;
        case 0x38f7e8u: goto label_38f7e8;
        case 0x38f7ecu: goto label_38f7ec;
        case 0x38f7f0u: goto label_38f7f0;
        case 0x38f7f4u: goto label_38f7f4;
        case 0x38f7f8u: goto label_38f7f8;
        case 0x38f7fcu: goto label_38f7fc;
        case 0x38f800u: goto label_38f800;
        case 0x38f804u: goto label_38f804;
        case 0x38f808u: goto label_38f808;
        case 0x38f80cu: goto label_38f80c;
        case 0x38f810u: goto label_38f810;
        case 0x38f814u: goto label_38f814;
        case 0x38f818u: goto label_38f818;
        case 0x38f81cu: goto label_38f81c;
        case 0x38f820u: goto label_38f820;
        case 0x38f824u: goto label_38f824;
        case 0x38f828u: goto label_38f828;
        case 0x38f82cu: goto label_38f82c;
        case 0x38f830u: goto label_38f830;
        case 0x38f834u: goto label_38f834;
        case 0x38f838u: goto label_38f838;
        case 0x38f83cu: goto label_38f83c;
        case 0x38f840u: goto label_38f840;
        case 0x38f844u: goto label_38f844;
        case 0x38f848u: goto label_38f848;
        case 0x38f84cu: goto label_38f84c;
        case 0x38f850u: goto label_38f850;
        case 0x38f854u: goto label_38f854;
        case 0x38f858u: goto label_38f858;
        case 0x38f85cu: goto label_38f85c;
        case 0x38f860u: goto label_38f860;
        case 0x38f864u: goto label_38f864;
        case 0x38f868u: goto label_38f868;
        case 0x38f86cu: goto label_38f86c;
        case 0x38f870u: goto label_38f870;
        case 0x38f874u: goto label_38f874;
        case 0x38f878u: goto label_38f878;
        case 0x38f87cu: goto label_38f87c;
        case 0x38f880u: goto label_38f880;
        case 0x38f884u: goto label_38f884;
        case 0x38f888u: goto label_38f888;
        case 0x38f88cu: goto label_38f88c;
        case 0x38f890u: goto label_38f890;
        case 0x38f894u: goto label_38f894;
        case 0x38f898u: goto label_38f898;
        case 0x38f89cu: goto label_38f89c;
        case 0x38f8a0u: goto label_38f8a0;
        case 0x38f8a4u: goto label_38f8a4;
        case 0x38f8a8u: goto label_38f8a8;
        case 0x38f8acu: goto label_38f8ac;
        case 0x38f8b0u: goto label_38f8b0;
        case 0x38f8b4u: goto label_38f8b4;
        case 0x38f8b8u: goto label_38f8b8;
        case 0x38f8bcu: goto label_38f8bc;
        case 0x38f8c0u: goto label_38f8c0;
        case 0x38f8c4u: goto label_38f8c4;
        case 0x38f8c8u: goto label_38f8c8;
        case 0x38f8ccu: goto label_38f8cc;
        case 0x38f8d0u: goto label_38f8d0;
        case 0x38f8d4u: goto label_38f8d4;
        case 0x38f8d8u: goto label_38f8d8;
        case 0x38f8dcu: goto label_38f8dc;
        case 0x38f8e0u: goto label_38f8e0;
        case 0x38f8e4u: goto label_38f8e4;
        case 0x38f8e8u: goto label_38f8e8;
        case 0x38f8ecu: goto label_38f8ec;
        case 0x38f8f0u: goto label_38f8f0;
        case 0x38f8f4u: goto label_38f8f4;
        case 0x38f8f8u: goto label_38f8f8;
        case 0x38f8fcu: goto label_38f8fc;
        case 0x38f900u: goto label_38f900;
        case 0x38f904u: goto label_38f904;
        case 0x38f908u: goto label_38f908;
        case 0x38f90cu: goto label_38f90c;
        case 0x38f910u: goto label_38f910;
        case 0x38f914u: goto label_38f914;
        case 0x38f918u: goto label_38f918;
        case 0x38f91cu: goto label_38f91c;
        case 0x38f920u: goto label_38f920;
        case 0x38f924u: goto label_38f924;
        case 0x38f928u: goto label_38f928;
        case 0x38f92cu: goto label_38f92c;
        case 0x38f930u: goto label_38f930;
        case 0x38f934u: goto label_38f934;
        case 0x38f938u: goto label_38f938;
        case 0x38f93cu: goto label_38f93c;
        case 0x38f940u: goto label_38f940;
        case 0x38f944u: goto label_38f944;
        case 0x38f948u: goto label_38f948;
        case 0x38f94cu: goto label_38f94c;
        case 0x38f950u: goto label_38f950;
        case 0x38f954u: goto label_38f954;
        case 0x38f958u: goto label_38f958;
        case 0x38f95cu: goto label_38f95c;
        case 0x38f960u: goto label_38f960;
        case 0x38f964u: goto label_38f964;
        case 0x38f968u: goto label_38f968;
        case 0x38f96cu: goto label_38f96c;
        case 0x38f970u: goto label_38f970;
        case 0x38f974u: goto label_38f974;
        case 0x38f978u: goto label_38f978;
        case 0x38f97cu: goto label_38f97c;
        case 0x38f980u: goto label_38f980;
        case 0x38f984u: goto label_38f984;
        case 0x38f988u: goto label_38f988;
        case 0x38f98cu: goto label_38f98c;
        case 0x38f990u: goto label_38f990;
        case 0x38f994u: goto label_38f994;
        case 0x38f998u: goto label_38f998;
        case 0x38f99cu: goto label_38f99c;
        case 0x38f9a0u: goto label_38f9a0;
        case 0x38f9a4u: goto label_38f9a4;
        case 0x38f9a8u: goto label_38f9a8;
        case 0x38f9acu: goto label_38f9ac;
        case 0x38f9b0u: goto label_38f9b0;
        case 0x38f9b4u: goto label_38f9b4;
        case 0x38f9b8u: goto label_38f9b8;
        case 0x38f9bcu: goto label_38f9bc;
        case 0x38f9c0u: goto label_38f9c0;
        case 0x38f9c4u: goto label_38f9c4;
        case 0x38f9c8u: goto label_38f9c8;
        case 0x38f9ccu: goto label_38f9cc;
        case 0x38f9d0u: goto label_38f9d0;
        case 0x38f9d4u: goto label_38f9d4;
        case 0x38f9d8u: goto label_38f9d8;
        case 0x38f9dcu: goto label_38f9dc;
        case 0x38f9e0u: goto label_38f9e0;
        case 0x38f9e4u: goto label_38f9e4;
        case 0x38f9e8u: goto label_38f9e8;
        case 0x38f9ecu: goto label_38f9ec;
        case 0x38f9f0u: goto label_38f9f0;
        case 0x38f9f4u: goto label_38f9f4;
        case 0x38f9f8u: goto label_38f9f8;
        case 0x38f9fcu: goto label_38f9fc;
        case 0x38fa00u: goto label_38fa00;
        case 0x38fa04u: goto label_38fa04;
        case 0x38fa08u: goto label_38fa08;
        case 0x38fa0cu: goto label_38fa0c;
        case 0x38fa10u: goto label_38fa10;
        case 0x38fa14u: goto label_38fa14;
        case 0x38fa18u: goto label_38fa18;
        case 0x38fa1cu: goto label_38fa1c;
        case 0x38fa20u: goto label_38fa20;
        case 0x38fa24u: goto label_38fa24;
        case 0x38fa28u: goto label_38fa28;
        case 0x38fa2cu: goto label_38fa2c;
        case 0x38fa30u: goto label_38fa30;
        case 0x38fa34u: goto label_38fa34;
        case 0x38fa38u: goto label_38fa38;
        case 0x38fa3cu: goto label_38fa3c;
        case 0x38fa40u: goto label_38fa40;
        case 0x38fa44u: goto label_38fa44;
        case 0x38fa48u: goto label_38fa48;
        case 0x38fa4cu: goto label_38fa4c;
        case 0x38fa50u: goto label_38fa50;
        case 0x38fa54u: goto label_38fa54;
        case 0x38fa58u: goto label_38fa58;
        case 0x38fa5cu: goto label_38fa5c;
        case 0x38fa60u: goto label_38fa60;
        case 0x38fa64u: goto label_38fa64;
        case 0x38fa68u: goto label_38fa68;
        case 0x38fa6cu: goto label_38fa6c;
        case 0x38fa70u: goto label_38fa70;
        case 0x38fa74u: goto label_38fa74;
        case 0x38fa78u: goto label_38fa78;
        case 0x38fa7cu: goto label_38fa7c;
        case 0x38fa80u: goto label_38fa80;
        case 0x38fa84u: goto label_38fa84;
        case 0x38fa88u: goto label_38fa88;
        case 0x38fa8cu: goto label_38fa8c;
        case 0x38fa90u: goto label_38fa90;
        case 0x38fa94u: goto label_38fa94;
        case 0x38fa98u: goto label_38fa98;
        case 0x38fa9cu: goto label_38fa9c;
        case 0x38faa0u: goto label_38faa0;
        case 0x38faa4u: goto label_38faa4;
        case 0x38faa8u: goto label_38faa8;
        case 0x38faacu: goto label_38faac;
        case 0x38fab0u: goto label_38fab0;
        case 0x38fab4u: goto label_38fab4;
        case 0x38fab8u: goto label_38fab8;
        case 0x38fabcu: goto label_38fabc;
        case 0x38fac0u: goto label_38fac0;
        case 0x38fac4u: goto label_38fac4;
        case 0x38fac8u: goto label_38fac8;
        case 0x38faccu: goto label_38facc;
        case 0x38fad0u: goto label_38fad0;
        case 0x38fad4u: goto label_38fad4;
        case 0x38fad8u: goto label_38fad8;
        case 0x38fadcu: goto label_38fadc;
        case 0x38fae0u: goto label_38fae0;
        case 0x38fae4u: goto label_38fae4;
        case 0x38fae8u: goto label_38fae8;
        case 0x38faecu: goto label_38faec;
        case 0x38faf0u: goto label_38faf0;
        case 0x38faf4u: goto label_38faf4;
        case 0x38faf8u: goto label_38faf8;
        case 0x38fafcu: goto label_38fafc;
        case 0x38fb00u: goto label_38fb00;
        case 0x38fb04u: goto label_38fb04;
        case 0x38fb08u: goto label_38fb08;
        case 0x38fb0cu: goto label_38fb0c;
        case 0x38fb10u: goto label_38fb10;
        case 0x38fb14u: goto label_38fb14;
        case 0x38fb18u: goto label_38fb18;
        case 0x38fb1cu: goto label_38fb1c;
        case 0x38fb20u: goto label_38fb20;
        case 0x38fb24u: goto label_38fb24;
        case 0x38fb28u: goto label_38fb28;
        case 0x38fb2cu: goto label_38fb2c;
        case 0x38fb30u: goto label_38fb30;
        case 0x38fb34u: goto label_38fb34;
        case 0x38fb38u: goto label_38fb38;
        case 0x38fb3cu: goto label_38fb3c;
        case 0x38fb40u: goto label_38fb40;
        case 0x38fb44u: goto label_38fb44;
        case 0x38fb48u: goto label_38fb48;
        case 0x38fb4cu: goto label_38fb4c;
        case 0x38fb50u: goto label_38fb50;
        case 0x38fb54u: goto label_38fb54;
        case 0x38fb58u: goto label_38fb58;
        case 0x38fb5cu: goto label_38fb5c;
        case 0x38fb60u: goto label_38fb60;
        case 0x38fb64u: goto label_38fb64;
        case 0x38fb68u: goto label_38fb68;
        case 0x38fb6cu: goto label_38fb6c;
        case 0x38fb70u: goto label_38fb70;
        case 0x38fb74u: goto label_38fb74;
        case 0x38fb78u: goto label_38fb78;
        case 0x38fb7cu: goto label_38fb7c;
        case 0x38fb80u: goto label_38fb80;
        case 0x38fb84u: goto label_38fb84;
        case 0x38fb88u: goto label_38fb88;
        case 0x38fb8cu: goto label_38fb8c;
        default: break;
    }

    ctx->pc = 0x38f600u;

label_38f600:
    // 0x38f600: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38f600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_38f604:
    // 0x38f604: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38f604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_38f608:
    // 0x38f608: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38f608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38f60c:
    // 0x38f60c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38f60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_38f610:
    // 0x38f610: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38f610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38f614:
    // 0x38f614: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_38f618:
    if (ctx->pc == 0x38F618u) {
        ctx->pc = 0x38F618u;
            // 0x38f618: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38F61Cu;
        goto label_38f61c;
    }
    ctx->pc = 0x38F614u;
    {
        const bool branch_taken_0x38f614 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38F614u;
            // 0x38f618: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f614) {
            ctx->pc = 0x38F748u;
            goto label_38f748;
        }
    }
    ctx->pc = 0x38F61Cu;
label_38f61c:
    // 0x38f61c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x38f61cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_38f620:
    // 0x38f620: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x38f620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_38f624:
    // 0x38f624: 0x24637de0  addiu       $v1, $v1, 0x7DE0
    ctx->pc = 0x38f624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32224));
label_38f628:
    // 0x38f628: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x38f628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
label_38f62c:
    // 0x38f62c: 0x24427e18  addiu       $v0, $v0, 0x7E18
    ctx->pc = 0x38f62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32280));
label_38f630:
    // 0x38f630: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x38f630u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_38f634:
    // 0x38f634: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x38f634u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_38f638:
    // 0x38f638: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x38f638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_38f63c:
    // 0x38f63c: 0xc0407c0  jal         func_101F00
label_38f640:
    if (ctx->pc == 0x38F640u) {
        ctx->pc = 0x38F640u;
            // 0x38f640: 0x24a5f760  addiu       $a1, $a1, -0x8A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965088));
        ctx->pc = 0x38F644u;
        goto label_38f644;
    }
    ctx->pc = 0x38F63Cu;
    SET_GPR_U32(ctx, 31, 0x38F644u);
    ctx->pc = 0x38F640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38F63Cu;
            // 0x38f640: 0x24a5f760  addiu       $a1, $a1, -0x8A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F644u; }
        if (ctx->pc != 0x38F644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F644u; }
        if (ctx->pc != 0x38F644u) { return; }
    }
    ctx->pc = 0x38F644u;
label_38f644:
    // 0x38f644: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x38f644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_38f648:
    // 0x38f648: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_38f64c:
    if (ctx->pc == 0x38F64Cu) {
        ctx->pc = 0x38F64Cu;
            // 0x38f64c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x38F650u;
        goto label_38f650;
    }
    ctx->pc = 0x38F648u;
    {
        const bool branch_taken_0x38f648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f648) {
            ctx->pc = 0x38F64Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38F648u;
            // 0x38f64c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38F65Cu;
            goto label_38f65c;
        }
    }
    ctx->pc = 0x38F650u;
label_38f650:
    // 0x38f650: 0xc07507c  jal         func_1D41F0
label_38f654:
    if (ctx->pc == 0x38F654u) {
        ctx->pc = 0x38F654u;
            // 0x38f654: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x38F658u;
        goto label_38f658;
    }
    ctx->pc = 0x38F650u;
    SET_GPR_U32(ctx, 31, 0x38F658u);
    ctx->pc = 0x38F654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38F650u;
            // 0x38f654: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F658u; }
        if (ctx->pc != 0x38F658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F658u; }
        if (ctx->pc != 0x38F658u) { return; }
    }
    ctx->pc = 0x38F658u;
label_38f658:
    // 0x38f658: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x38f658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_38f65c:
    // 0x38f65c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_38f660:
    if (ctx->pc == 0x38F660u) {
        ctx->pc = 0x38F660u;
            // 0x38f660: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x38F664u;
        goto label_38f664;
    }
    ctx->pc = 0x38F65Cu;
    {
        const bool branch_taken_0x38f65c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f65c) {
            ctx->pc = 0x38F660u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38F65Cu;
            // 0x38f660: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38F68Cu;
            goto label_38f68c;
        }
    }
    ctx->pc = 0x38F664u;
label_38f664:
    // 0x38f664: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_38f668:
    if (ctx->pc == 0x38F668u) {
        ctx->pc = 0x38F66Cu;
        goto label_38f66c;
    }
    ctx->pc = 0x38F664u;
    {
        const bool branch_taken_0x38f664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f664) {
            ctx->pc = 0x38F688u;
            goto label_38f688;
        }
    }
    ctx->pc = 0x38F66Cu;
label_38f66c:
    // 0x38f66c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_38f670:
    if (ctx->pc == 0x38F670u) {
        ctx->pc = 0x38F674u;
        goto label_38f674;
    }
    ctx->pc = 0x38F66Cu;
    {
        const bool branch_taken_0x38f66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f66c) {
            ctx->pc = 0x38F688u;
            goto label_38f688;
        }
    }
    ctx->pc = 0x38F674u;
label_38f674:
    // 0x38f674: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x38f674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_38f678:
    // 0x38f678: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_38f67c:
    if (ctx->pc == 0x38F67Cu) {
        ctx->pc = 0x38F680u;
        goto label_38f680;
    }
    ctx->pc = 0x38F678u;
    {
        const bool branch_taken_0x38f678 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f678) {
            ctx->pc = 0x38F688u;
            goto label_38f688;
        }
    }
    ctx->pc = 0x38F680u;
label_38f680:
    // 0x38f680: 0xc0400a8  jal         func_1002A0
label_38f684:
    if (ctx->pc == 0x38F684u) {
        ctx->pc = 0x38F688u;
        goto label_38f688;
    }
    ctx->pc = 0x38F680u;
    SET_GPR_U32(ctx, 31, 0x38F688u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F688u; }
        if (ctx->pc != 0x38F688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F688u; }
        if (ctx->pc != 0x38F688u) { return; }
    }
    ctx->pc = 0x38F688u;
label_38f688:
    // 0x38f688: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x38f688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_38f68c:
    // 0x38f68c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_38f690:
    if (ctx->pc == 0x38F690u) {
        ctx->pc = 0x38F690u;
            // 0x38f690: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x38F694u;
        goto label_38f694;
    }
    ctx->pc = 0x38F68Cu;
    {
        const bool branch_taken_0x38f68c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f68c) {
            ctx->pc = 0x38F690u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38F68Cu;
            // 0x38f690: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38F6BCu;
            goto label_38f6bc;
        }
    }
    ctx->pc = 0x38F694u;
label_38f694:
    // 0x38f694: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_38f698:
    if (ctx->pc == 0x38F698u) {
        ctx->pc = 0x38F69Cu;
        goto label_38f69c;
    }
    ctx->pc = 0x38F694u;
    {
        const bool branch_taken_0x38f694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f694) {
            ctx->pc = 0x38F6B8u;
            goto label_38f6b8;
        }
    }
    ctx->pc = 0x38F69Cu;
label_38f69c:
    // 0x38f69c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_38f6a0:
    if (ctx->pc == 0x38F6A0u) {
        ctx->pc = 0x38F6A4u;
        goto label_38f6a4;
    }
    ctx->pc = 0x38F69Cu;
    {
        const bool branch_taken_0x38f69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f69c) {
            ctx->pc = 0x38F6B8u;
            goto label_38f6b8;
        }
    }
    ctx->pc = 0x38F6A4u;
label_38f6a4:
    // 0x38f6a4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x38f6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_38f6a8:
    // 0x38f6a8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_38f6ac:
    if (ctx->pc == 0x38F6ACu) {
        ctx->pc = 0x38F6B0u;
        goto label_38f6b0;
    }
    ctx->pc = 0x38F6A8u;
    {
        const bool branch_taken_0x38f6a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f6a8) {
            ctx->pc = 0x38F6B8u;
            goto label_38f6b8;
        }
    }
    ctx->pc = 0x38F6B0u;
label_38f6b0:
    // 0x38f6b0: 0xc0400a8  jal         func_1002A0
label_38f6b4:
    if (ctx->pc == 0x38F6B4u) {
        ctx->pc = 0x38F6B8u;
        goto label_38f6b8;
    }
    ctx->pc = 0x38F6B0u;
    SET_GPR_U32(ctx, 31, 0x38F6B8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F6B8u; }
        if (ctx->pc != 0x38F6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F6B8u; }
        if (ctx->pc != 0x38F6B8u) { return; }
    }
    ctx->pc = 0x38F6B8u;
label_38f6b8:
    // 0x38f6b8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x38f6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_38f6bc:
    // 0x38f6bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_38f6c0:
    if (ctx->pc == 0x38F6C0u) {
        ctx->pc = 0x38F6C4u;
        goto label_38f6c4;
    }
    ctx->pc = 0x38F6BCu;
    {
        const bool branch_taken_0x38f6bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f6bc) {
            ctx->pc = 0x38F6D8u;
            goto label_38f6d8;
        }
    }
    ctx->pc = 0x38F6C4u;
label_38f6c4:
    // 0x38f6c4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x38f6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_38f6c8:
    // 0x38f6c8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x38f6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_38f6cc:
    // 0x38f6cc: 0x24637dd0  addiu       $v1, $v1, 0x7DD0
    ctx->pc = 0x38f6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32208));
label_38f6d0:
    // 0x38f6d0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x38f6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_38f6d4:
    // 0x38f6d4: 0xac406120  sw          $zero, 0x6120($v0)
    ctx->pc = 0x38f6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24864), GPR_U32(ctx, 0));
label_38f6d8:
    // 0x38f6d8: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_38f6dc:
    if (ctx->pc == 0x38F6DCu) {
        ctx->pc = 0x38F6DCu;
            // 0x38f6dc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x38F6E0u;
        goto label_38f6e0;
    }
    ctx->pc = 0x38F6D8u;
    {
        const bool branch_taken_0x38f6d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f6d8) {
            ctx->pc = 0x38F6DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38F6D8u;
            // 0x38f6dc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38F734u;
            goto label_38f734;
        }
    }
    ctx->pc = 0x38F6E0u;
label_38f6e0:
    // 0x38f6e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x38f6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_38f6e4:
    // 0x38f6e4: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x38f6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_38f6e8:
    // 0x38f6e8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x38f6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_38f6ec:
    // 0x38f6ec: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x38f6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_38f6f0:
    // 0x38f6f0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_38f6f4:
    if (ctx->pc == 0x38F6F4u) {
        ctx->pc = 0x38F6F4u;
            // 0x38f6f4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x38F6F8u;
        goto label_38f6f8;
    }
    ctx->pc = 0x38F6F0u;
    {
        const bool branch_taken_0x38f6f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f6f0) {
            ctx->pc = 0x38F6F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38F6F0u;
            // 0x38f6f4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38F70Cu;
            goto label_38f70c;
        }
    }
    ctx->pc = 0x38F6F8u;
label_38f6f8:
    // 0x38f6f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x38f6f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_38f6fc:
    // 0x38f6fc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x38f6fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_38f700:
    // 0x38f700: 0x320f809  jalr        $t9
label_38f704:
    if (ctx->pc == 0x38F704u) {
        ctx->pc = 0x38F704u;
            // 0x38f704: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x38F708u;
        goto label_38f708;
    }
    ctx->pc = 0x38F700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38F708u);
        ctx->pc = 0x38F704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38F700u;
            // 0x38f704: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38F708u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38F708u; }
            if (ctx->pc != 0x38F708u) { return; }
        }
        }
    }
    ctx->pc = 0x38F708u;
label_38f708:
    // 0x38f708: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x38f708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_38f70c:
    // 0x38f70c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_38f710:
    if (ctx->pc == 0x38F710u) {
        ctx->pc = 0x38F710u;
            // 0x38f710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38F714u;
        goto label_38f714;
    }
    ctx->pc = 0x38F70Cu;
    {
        const bool branch_taken_0x38f70c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f70c) {
            ctx->pc = 0x38F710u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38F70Cu;
            // 0x38f710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38F728u;
            goto label_38f728;
        }
    }
    ctx->pc = 0x38F714u;
label_38f714:
    // 0x38f714: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x38f714u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_38f718:
    // 0x38f718: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x38f718u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_38f71c:
    // 0x38f71c: 0x320f809  jalr        $t9
label_38f720:
    if (ctx->pc == 0x38F720u) {
        ctx->pc = 0x38F720u;
            // 0x38f720: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x38F724u;
        goto label_38f724;
    }
    ctx->pc = 0x38F71Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38F724u);
        ctx->pc = 0x38F720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38F71Cu;
            // 0x38f720: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38F724u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38F724u; }
            if (ctx->pc != 0x38F724u) { return; }
        }
        }
    }
    ctx->pc = 0x38F724u;
label_38f724:
    // 0x38f724: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38f724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38f728:
    // 0x38f728: 0xc075bf8  jal         func_1D6FE0
label_38f72c:
    if (ctx->pc == 0x38F72Cu) {
        ctx->pc = 0x38F72Cu;
            // 0x38f72c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38F730u;
        goto label_38f730;
    }
    ctx->pc = 0x38F728u;
    SET_GPR_U32(ctx, 31, 0x38F730u);
    ctx->pc = 0x38F72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38F728u;
            // 0x38f72c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F730u; }
        if (ctx->pc != 0x38F730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F730u; }
        if (ctx->pc != 0x38F730u) { return; }
    }
    ctx->pc = 0x38F730u;
label_38f730:
    // 0x38f730: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x38f730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_38f734:
    // 0x38f734: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x38f734u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_38f738:
    // 0x38f738: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_38f73c:
    if (ctx->pc == 0x38F73Cu) {
        ctx->pc = 0x38F73Cu;
            // 0x38f73c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38F740u;
        goto label_38f740;
    }
    ctx->pc = 0x38F738u;
    {
        const bool branch_taken_0x38f738 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x38f738) {
            ctx->pc = 0x38F73Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38F738u;
            // 0x38f73c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38F74Cu;
            goto label_38f74c;
        }
    }
    ctx->pc = 0x38F740u;
label_38f740:
    // 0x38f740: 0xc0400a8  jal         func_1002A0
label_38f744:
    if (ctx->pc == 0x38F744u) {
        ctx->pc = 0x38F744u;
            // 0x38f744: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38F748u;
        goto label_38f748;
    }
    ctx->pc = 0x38F740u;
    SET_GPR_U32(ctx, 31, 0x38F748u);
    ctx->pc = 0x38F744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38F740u;
            // 0x38f744: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F748u; }
        if (ctx->pc != 0x38F748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F748u; }
        if (ctx->pc != 0x38F748u) { return; }
    }
    ctx->pc = 0x38F748u;
label_38f748:
    // 0x38f748: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x38f748u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38f74c:
    // 0x38f74c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38f74cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_38f750:
    // 0x38f750: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38f750u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38f754:
    // 0x38f754: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38f754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38f758:
    // 0x38f758: 0x3e00008  jr          $ra
label_38f75c:
    if (ctx->pc == 0x38F75Cu) {
        ctx->pc = 0x38F75Cu;
            // 0x38f75c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x38F760u;
        goto label_38f760;
    }
    ctx->pc = 0x38F758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38F758u;
            // 0x38f75c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38F760u;
label_38f760:
    // 0x38f760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38f760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_38f764:
    // 0x38f764: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38f764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_38f768:
    // 0x38f768: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38f768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38f76c:
    // 0x38f76c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38f76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_38f770:
    // 0x38f770: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38f770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38f774:
    // 0x38f774: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_38f778:
    if (ctx->pc == 0x38F778u) {
        ctx->pc = 0x38F778u;
            // 0x38f778: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38F77Cu;
        goto label_38f77c;
    }
    ctx->pc = 0x38F774u;
    {
        const bool branch_taken_0x38f774 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38F774u;
            // 0x38f778: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f774) {
            ctx->pc = 0x38F83Cu;
            goto label_38f83c;
        }
    }
    ctx->pc = 0x38F77Cu;
label_38f77c:
    // 0x38f77c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x38f77cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_38f780:
    // 0x38f780: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x38f780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_38f784:
    // 0x38f784: 0x24637d30  addiu       $v1, $v1, 0x7D30
    ctx->pc = 0x38f784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32048));
label_38f788:
    // 0x38f788: 0x24427d70  addiu       $v0, $v0, 0x7D70
    ctx->pc = 0x38f788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32112));
label_38f78c:
    // 0x38f78c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x38f78cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_38f790:
    // 0x38f790: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x38f790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_38f794:
    // 0x38f794: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x38f794u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_38f798:
    // 0x38f798: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x38f798u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_38f79c:
    // 0x38f79c: 0x320f809  jalr        $t9
label_38f7a0:
    if (ctx->pc == 0x38F7A0u) {
        ctx->pc = 0x38F7A4u;
        goto label_38f7a4;
    }
    ctx->pc = 0x38F79Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38F7A4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x38F7A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38F7A4u; }
            if (ctx->pc != 0x38F7A4u) { return; }
        }
        }
    }
    ctx->pc = 0x38F7A4u;
label_38f7a4:
    // 0x38f7a4: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_38f7a8:
    if (ctx->pc == 0x38F7A8u) {
        ctx->pc = 0x38F7A8u;
            // 0x38f7a8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x38F7ACu;
        goto label_38f7ac;
    }
    ctx->pc = 0x38F7A4u;
    {
        const bool branch_taken_0x38f7a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f7a4) {
            ctx->pc = 0x38F7A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38F7A4u;
            // 0x38f7a8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38F828u;
            goto label_38f828;
        }
    }
    ctx->pc = 0x38F7ACu;
label_38f7ac:
    // 0x38f7ac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x38f7acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_38f7b0:
    // 0x38f7b0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x38f7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_38f7b4:
    // 0x38f7b4: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x38f7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_38f7b8:
    // 0x38f7b8: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x38f7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_38f7bc:
    // 0x38f7bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x38f7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_38f7c0:
    // 0x38f7c0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x38f7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_38f7c4:
    // 0x38f7c4: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x38f7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_38f7c8:
    // 0x38f7c8: 0xc0aecc4  jal         func_2BB310
label_38f7cc:
    if (ctx->pc == 0x38F7CCu) {
        ctx->pc = 0x38F7CCu;
            // 0x38f7cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x38F7D0u;
        goto label_38f7d0;
    }
    ctx->pc = 0x38F7C8u;
    SET_GPR_U32(ctx, 31, 0x38F7D0u);
    ctx->pc = 0x38F7CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38F7C8u;
            // 0x38f7cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F7D0u; }
        if (ctx->pc != 0x38F7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F7D0u; }
        if (ctx->pc != 0x38F7D0u) { return; }
    }
    ctx->pc = 0x38F7D0u;
label_38f7d0:
    // 0x38f7d0: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x38f7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_38f7d4:
    // 0x38f7d4: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x38f7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_38f7d8:
    // 0x38f7d8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_38f7dc:
    if (ctx->pc == 0x38F7DCu) {
        ctx->pc = 0x38F7DCu;
            // 0x38f7dc: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x38F7E0u;
        goto label_38f7e0;
    }
    ctx->pc = 0x38F7D8u;
    {
        const bool branch_taken_0x38f7d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f7d8) {
            ctx->pc = 0x38F7DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38F7D8u;
            // 0x38f7dc: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38F7F4u;
            goto label_38f7f4;
        }
    }
    ctx->pc = 0x38F7E0u;
label_38f7e0:
    // 0x38f7e0: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x38f7e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_38f7e4:
    // 0x38f7e4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x38f7e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_38f7e8:
    // 0x38f7e8: 0x320f809  jalr        $t9
label_38f7ec:
    if (ctx->pc == 0x38F7ECu) {
        ctx->pc = 0x38F7ECu;
            // 0x38f7ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x38F7F0u;
        goto label_38f7f0;
    }
    ctx->pc = 0x38F7E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38F7F0u);
        ctx->pc = 0x38F7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38F7E8u;
            // 0x38f7ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38F7F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38F7F0u; }
            if (ctx->pc != 0x38F7F0u) { return; }
        }
        }
    }
    ctx->pc = 0x38F7F0u;
label_38f7f0:
    // 0x38f7f0: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x38f7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_38f7f4:
    // 0x38f7f4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x38f7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38f7f8:
    // 0x38f7f8: 0xc0aec9c  jal         func_2BB270
label_38f7fc:
    if (ctx->pc == 0x38F7FCu) {
        ctx->pc = 0x38F7FCu;
            // 0x38f7fc: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x38F800u;
        goto label_38f800;
    }
    ctx->pc = 0x38F7F8u;
    SET_GPR_U32(ctx, 31, 0x38F800u);
    ctx->pc = 0x38F7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38F7F8u;
            // 0x38f7fc: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F800u; }
        if (ctx->pc != 0x38F800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F800u; }
        if (ctx->pc != 0x38F800u) { return; }
    }
    ctx->pc = 0x38F800u;
label_38f800:
    // 0x38f800: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x38f800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_38f804:
    // 0x38f804: 0xc0aec88  jal         func_2BB220
label_38f808:
    if (ctx->pc == 0x38F808u) {
        ctx->pc = 0x38F808u;
            // 0x38f808: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x38F80Cu;
        goto label_38f80c;
    }
    ctx->pc = 0x38F804u;
    SET_GPR_U32(ctx, 31, 0x38F80Cu);
    ctx->pc = 0x38F808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38F804u;
            // 0x38f808: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F80Cu; }
        if (ctx->pc != 0x38F80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F80Cu; }
        if (ctx->pc != 0x38F80Cu) { return; }
    }
    ctx->pc = 0x38F80Cu;
label_38f80c:
    // 0x38f80c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x38f80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_38f810:
    // 0x38f810: 0xc0aec0c  jal         func_2BB030
label_38f814:
    if (ctx->pc == 0x38F814u) {
        ctx->pc = 0x38F814u;
            // 0x38f814: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38F818u;
        goto label_38f818;
    }
    ctx->pc = 0x38F810u;
    SET_GPR_U32(ctx, 31, 0x38F818u);
    ctx->pc = 0x38F814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38F810u;
            // 0x38f814: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F818u; }
        if (ctx->pc != 0x38F818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F818u; }
        if (ctx->pc != 0x38F818u) { return; }
    }
    ctx->pc = 0x38F818u;
label_38f818:
    // 0x38f818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38f818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38f81c:
    // 0x38f81c: 0xc0aeaa8  jal         func_2BAAA0
label_38f820:
    if (ctx->pc == 0x38F820u) {
        ctx->pc = 0x38F820u;
            // 0x38f820: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38F824u;
        goto label_38f824;
    }
    ctx->pc = 0x38F81Cu;
    SET_GPR_U32(ctx, 31, 0x38F824u);
    ctx->pc = 0x38F820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38F81Cu;
            // 0x38f820: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F824u; }
        if (ctx->pc != 0x38F824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F824u; }
        if (ctx->pc != 0x38F824u) { return; }
    }
    ctx->pc = 0x38F824u;
label_38f824:
    // 0x38f824: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x38f824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_38f828:
    // 0x38f828: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x38f828u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_38f82c:
    // 0x38f82c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_38f830:
    if (ctx->pc == 0x38F830u) {
        ctx->pc = 0x38F830u;
            // 0x38f830: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38F834u;
        goto label_38f834;
    }
    ctx->pc = 0x38F82Cu;
    {
        const bool branch_taken_0x38f82c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x38f82c) {
            ctx->pc = 0x38F830u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38F82Cu;
            // 0x38f830: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38F840u;
            goto label_38f840;
        }
    }
    ctx->pc = 0x38F834u;
label_38f834:
    // 0x38f834: 0xc0400a8  jal         func_1002A0
label_38f838:
    if (ctx->pc == 0x38F838u) {
        ctx->pc = 0x38F838u;
            // 0x38f838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38F83Cu;
        goto label_38f83c;
    }
    ctx->pc = 0x38F834u;
    SET_GPR_U32(ctx, 31, 0x38F83Cu);
    ctx->pc = 0x38F838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38F834u;
            // 0x38f838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F83Cu; }
        if (ctx->pc != 0x38F83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F83Cu; }
        if (ctx->pc != 0x38F83Cu) { return; }
    }
    ctx->pc = 0x38F83Cu;
label_38f83c:
    // 0x38f83c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38f83cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38f840:
    // 0x38f840: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38f840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_38f844:
    // 0x38f844: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38f844u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38f848:
    // 0x38f848: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38f848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38f84c:
    // 0x38f84c: 0x3e00008  jr          $ra
label_38f850:
    if (ctx->pc == 0x38F850u) {
        ctx->pc = 0x38F850u;
            // 0x38f850: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x38F854u;
        goto label_38f854;
    }
    ctx->pc = 0x38F84Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38F84Cu;
            // 0x38f850: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38F854u;
label_38f854:
    // 0x38f854: 0x0  nop
    ctx->pc = 0x38f854u;
    // NOP
label_38f858:
    // 0x38f858: 0x0  nop
    ctx->pc = 0x38f858u;
    // NOP
label_38f85c:
    // 0x38f85c: 0x0  nop
    ctx->pc = 0x38f85cu;
    // NOP
label_38f860:
    // 0x38f860: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x38f860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_38f864:
    // 0x38f864: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x38f864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_38f868:
    // 0x38f868: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x38f868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_38f86c:
    // 0x38f86c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x38f86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_38f870:
    // 0x38f870: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x38f870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_38f874:
    // 0x38f874: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x38f874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_38f878:
    // 0x38f878: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x38f878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_38f87c:
    // 0x38f87c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x38f87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_38f880:
    // 0x38f880: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x38f880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_38f884:
    // 0x38f884: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x38f884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_38f888:
    // 0x38f888: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x38f888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_38f88c:
    // 0x38f88c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38f88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_38f890:
    // 0x38f890: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x38f890u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_38f894:
    // 0x38f894: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x38f894u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_38f898:
    // 0x38f898: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x38f898u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_38f89c:
    // 0x38f89c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x38f89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_38f8a0:
    // 0x38f8a0: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_38f8a4:
    if (ctx->pc == 0x38F8A4u) {
        ctx->pc = 0x38F8A4u;
            // 0x38f8a4: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38F8A8u;
        goto label_38f8a8;
    }
    ctx->pc = 0x38F8A0u;
    {
        const bool branch_taken_0x38f8a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x38F8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38F8A0u;
            // 0x38f8a4: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f8a0) {
            ctx->pc = 0x38F8E4u;
            goto label_38f8e4;
        }
    }
    ctx->pc = 0x38F8A8u;
label_38f8a8:
    // 0x38f8a8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x38f8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_38f8ac:
    // 0x38f8ac: 0x50a300ab  beql        $a1, $v1, . + 4 + (0xAB << 2)
label_38f8b0:
    if (ctx->pc == 0x38F8B0u) {
        ctx->pc = 0x38F8B0u;
            // 0x38f8b0: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x38F8B4u;
        goto label_38f8b4;
    }
    ctx->pc = 0x38F8ACu;
    {
        const bool branch_taken_0x38f8ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x38f8ac) {
            ctx->pc = 0x38F8B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38F8ACu;
            // 0x38f8b0: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38FB5Cu;
            goto label_38fb5c;
        }
    }
    ctx->pc = 0x38F8B4u;
label_38f8b4:
    // 0x38f8b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x38f8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38f8b8:
    // 0x38f8b8: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_38f8bc:
    if (ctx->pc == 0x38F8BCu) {
        ctx->pc = 0x38F8BCu;
            // 0x38f8bc: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x38F8C0u;
        goto label_38f8c0;
    }
    ctx->pc = 0x38F8B8u;
    {
        const bool branch_taken_0x38f8b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x38f8b8) {
            ctx->pc = 0x38F8BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38F8B8u;
            // 0x38f8bc: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38F8C8u;
            goto label_38f8c8;
        }
    }
    ctx->pc = 0x38F8C0u;
label_38f8c0:
    // 0x38f8c0: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_38f8c4:
    if (ctx->pc == 0x38F8C4u) {
        ctx->pc = 0x38F8C8u;
        goto label_38f8c8;
    }
    ctx->pc = 0x38F8C0u;
    {
        const bool branch_taken_0x38f8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f8c0) {
            ctx->pc = 0x38FB58u;
            goto label_38fb58;
        }
    }
    ctx->pc = 0x38F8C8u;
label_38f8c8:
    // 0x38f8c8: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x38f8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_38f8cc:
    // 0x38f8cc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x38f8ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_38f8d0:
    // 0x38f8d0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x38f8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_38f8d4:
    // 0x38f8d4: 0x320f809  jalr        $t9
label_38f8d8:
    if (ctx->pc == 0x38F8D8u) {
        ctx->pc = 0x38F8D8u;
            // 0x38f8d8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x38F8DCu;
        goto label_38f8dc;
    }
    ctx->pc = 0x38F8D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38F8DCu);
        ctx->pc = 0x38F8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38F8D4u;
            // 0x38f8d8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38F8DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38F8DCu; }
            if (ctx->pc != 0x38F8DCu) { return; }
        }
        }
    }
    ctx->pc = 0x38F8DCu;
label_38f8dc:
    // 0x38f8dc: 0x1000009e  b           . + 4 + (0x9E << 2)
label_38f8e0:
    if (ctx->pc == 0x38F8E0u) {
        ctx->pc = 0x38F8E4u;
        goto label_38f8e4;
    }
    ctx->pc = 0x38F8DCu;
    {
        const bool branch_taken_0x38f8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f8dc) {
            ctx->pc = 0x38FB58u;
            goto label_38fb58;
        }
    }
    ctx->pc = 0x38F8E4u;
label_38f8e4:
    // 0x38f8e4: 0x8ed70070  lw          $s7, 0x70($s6)
    ctx->pc = 0x38f8e4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
label_38f8e8:
    // 0x38f8e8: 0x12e0009b  beqz        $s7, . + 4 + (0x9B << 2)
label_38f8ec:
    if (ctx->pc == 0x38F8ECu) {
        ctx->pc = 0x38F8F0u;
        goto label_38f8f0;
    }
    ctx->pc = 0x38F8E8u;
    {
        const bool branch_taken_0x38f8e8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f8e8) {
            ctx->pc = 0x38FB58u;
            goto label_38fb58;
        }
    }
    ctx->pc = 0x38F8F0u;
label_38f8f0:
    // 0x38f8f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38f8f4:
    // 0x38f8f4: 0x26d20084  addiu       $s2, $s6, 0x84
    ctx->pc = 0x38f8f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 132));
label_38f8f8:
    // 0x38f8f8: 0x8c42e378  lw          $v0, -0x1C88($v0)
    ctx->pc = 0x38f8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_38f8fc:
    // 0x38f8fc: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x38f8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_38f900:
    // 0x38f900: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x38f900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_38f904:
    // 0x38f904: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x38f904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_38f908:
    // 0x38f908: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x38f908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_38f90c:
    // 0x38f90c: 0x8c860130  lw          $a2, 0x130($a0)
    ctx->pc = 0x38f90cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_38f910:
    // 0x38f910: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x38f910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_38f914:
    // 0x38f914: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x38f914u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_38f918:
    // 0x38f918: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x38f918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_38f91c:
    // 0x38f91c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38f91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38f920:
    // 0x38f920: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x38f920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_38f924:
    // 0x38f924: 0x8c42e370  lw          $v0, -0x1C90($v0)
    ctx->pc = 0x38f924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_38f928:
    // 0x38f928: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x38f928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_38f92c:
    // 0x38f92c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x38f92cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_38f930:
    // 0x38f930: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x38f930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_38f934:
    // 0x38f934: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x38f934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_38f938:
    // 0x38f938: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x38f938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_38f93c:
    // 0x38f93c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x38f93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_38f940:
    // 0x38f940: 0x24be0010  addiu       $fp, $a1, 0x10
    ctx->pc = 0x38f940u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_38f944:
    // 0x38f944: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x38f944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_38f948:
    // 0x38f948: 0xac80e3d8  sw          $zero, -0x1C28($a0)
    ctx->pc = 0x38f948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960088), GPR_U32(ctx, 0));
label_38f94c:
    // 0x38f94c: 0xac60e3c0  sw          $zero, -0x1C40($v1)
    ctx->pc = 0x38f94cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
label_38f950:
    // 0x38f950: 0x8ec40088  lw          $a0, 0x88($s6)
    ctx->pc = 0x38f950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 136)));
label_38f954:
    // 0x38f954: 0xc04e738  jal         func_139CE0
label_38f958:
    if (ctx->pc == 0x38F958u) {
        ctx->pc = 0x38F958u;
            // 0x38f958: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->pc = 0x38F95Cu;
        goto label_38f95c;
    }
    ctx->pc = 0x38F954u;
    SET_GPR_U32(ctx, 31, 0x38F95Cu);
    ctx->pc = 0x38F958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38F954u;
            // 0x38f958: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F95Cu; }
        if (ctx->pc != 0x38F95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F95Cu; }
        if (ctx->pc != 0x38F95Cu) { return; }
    }
    ctx->pc = 0x38F95Cu;
label_38f95c:
    // 0x38f95c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x38f95cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_38f960:
    // 0x38f960: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x38f960u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38f964:
    // 0x38f964: 0xc4545ff8  lwc1        $f20, 0x5FF8($v0)
    ctx->pc = 0x38f964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_38f968:
    // 0x38f968: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x38f968u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38f96c:
    // 0x38f96c: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x38f96cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_38f970:
    // 0x38f970: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x38f970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
label_38f974:
    // 0x38f974: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x38f974u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_38f978:
    // 0x38f978: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x38f978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_38f97c:
    // 0x38f97c: 0x8ec20074  lw          $v0, 0x74($s6)
    ctx->pc = 0x38f97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
label_38f980:
    // 0x38f980: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x38f980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_38f984:
    // 0x38f984: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x38f984u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_38f988:
    // 0x38f988: 0xc0d639c  jal         func_358E70
label_38f98c:
    if (ctx->pc == 0x38F98Cu) {
        ctx->pc = 0x38F98Cu;
            // 0x38f98c: 0x2684006c  addiu       $a0, $s4, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
        ctx->pc = 0x38F990u;
        goto label_38f990;
    }
    ctx->pc = 0x38F988u;
    SET_GPR_U32(ctx, 31, 0x38F990u);
    ctx->pc = 0x38F98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38F988u;
            // 0x38f98c: 0x2684006c  addiu       $a0, $s4, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F990u; }
        if (ctx->pc != 0x38F990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F990u; }
        if (ctx->pc != 0x38F990u) { return; }
    }
    ctx->pc = 0x38F990u;
label_38f990:
    // 0x38f990: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
label_38f994:
    if (ctx->pc == 0x38F994u) {
        ctx->pc = 0x38F998u;
        goto label_38f998;
    }
    ctx->pc = 0x38F990u;
    {
        const bool branch_taken_0x38f990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f990) {
            ctx->pc = 0x38FB00u;
            goto label_38fb00;
        }
    }
    ctx->pc = 0x38F998u;
label_38f998:
    // 0x38f998: 0xc0d1c14  jal         func_347050
label_38f99c:
    if (ctx->pc == 0x38F99Cu) {
        ctx->pc = 0x38F99Cu;
            // 0x38f99c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38F9A0u;
        goto label_38f9a0;
    }
    ctx->pc = 0x38F998u;
    SET_GPR_U32(ctx, 31, 0x38F9A0u);
    ctx->pc = 0x38F99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38F998u;
            // 0x38f99c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F9A0u; }
        if (ctx->pc != 0x38F9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F9A0u; }
        if (ctx->pc != 0x38F9A0u) { return; }
    }
    ctx->pc = 0x38F9A0u;
label_38f9a0:
    // 0x38f9a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x38f9a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38f9a4:
    // 0x38f9a4: 0xc04f278  jal         func_13C9E0
label_38f9a8:
    if (ctx->pc == 0x38F9A8u) {
        ctx->pc = 0x38F9A8u;
            // 0x38f9a8: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x38F9ACu;
        goto label_38f9ac;
    }
    ctx->pc = 0x38F9A4u;
    SET_GPR_U32(ctx, 31, 0x38F9ACu);
    ctx->pc = 0x38F9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38F9A4u;
            // 0x38f9a8: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F9ACu; }
        if (ctx->pc != 0x38F9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F9ACu; }
        if (ctx->pc != 0x38F9ACu) { return; }
    }
    ctx->pc = 0x38F9ACu;
label_38f9ac:
    // 0x38f9ac: 0xc0d1c10  jal         func_347040
label_38f9b0:
    if (ctx->pc == 0x38F9B0u) {
        ctx->pc = 0x38F9B0u;
            // 0x38f9b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38F9B4u;
        goto label_38f9b4;
    }
    ctx->pc = 0x38F9ACu;
    SET_GPR_U32(ctx, 31, 0x38F9B4u);
    ctx->pc = 0x38F9B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38F9ACu;
            // 0x38f9b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F9B4u; }
        if (ctx->pc != 0x38F9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F9B4u; }
        if (ctx->pc != 0x38F9B4u) { return; }
    }
    ctx->pc = 0x38F9B4u;
label_38f9b4:
    // 0x38f9b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x38f9b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38f9b8:
    // 0x38f9b8: 0xc04ce80  jal         func_133A00
label_38f9bc:
    if (ctx->pc == 0x38F9BCu) {
        ctx->pc = 0x38F9BCu;
            // 0x38f9bc: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x38F9C0u;
        goto label_38f9c0;
    }
    ctx->pc = 0x38F9B8u;
    SET_GPR_U32(ctx, 31, 0x38F9C0u);
    ctx->pc = 0x38F9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38F9B8u;
            // 0x38f9bc: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F9C0u; }
        if (ctx->pc != 0x38F9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F9C0u; }
        if (ctx->pc != 0x38F9C0u) { return; }
    }
    ctx->pc = 0x38F9C0u;
label_38f9c0:
    // 0x38f9c0: 0xc0d4108  jal         func_350420
label_38f9c4:
    if (ctx->pc == 0x38F9C4u) {
        ctx->pc = 0x38F9C8u;
        goto label_38f9c8;
    }
    ctx->pc = 0x38F9C0u;
    SET_GPR_U32(ctx, 31, 0x38F9C8u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F9C8u; }
        if (ctx->pc != 0x38F9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F9C8u; }
        if (ctx->pc != 0x38F9C8u) { return; }
    }
    ctx->pc = 0x38F9C8u;
label_38f9c8:
    // 0x38f9c8: 0xc0b36b4  jal         func_2CDAD0
label_38f9cc:
    if (ctx->pc == 0x38F9CCu) {
        ctx->pc = 0x38F9CCu;
            // 0x38f9cc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38F9D0u;
        goto label_38f9d0;
    }
    ctx->pc = 0x38F9C8u;
    SET_GPR_U32(ctx, 31, 0x38F9D0u);
    ctx->pc = 0x38F9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38F9C8u;
            // 0x38f9cc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F9D0u; }
        if (ctx->pc != 0x38F9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F9D0u; }
        if (ctx->pc != 0x38F9D0u) { return; }
    }
    ctx->pc = 0x38F9D0u;
label_38f9d0:
    // 0x38f9d0: 0xc0b9c64  jal         func_2E7190
label_38f9d4:
    if (ctx->pc == 0x38F9D4u) {
        ctx->pc = 0x38F9D4u;
            // 0x38f9d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38F9D8u;
        goto label_38f9d8;
    }
    ctx->pc = 0x38F9D0u;
    SET_GPR_U32(ctx, 31, 0x38F9D8u);
    ctx->pc = 0x38F9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38F9D0u;
            // 0x38f9d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F9D8u; }
        if (ctx->pc != 0x38F9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F9D8u; }
        if (ctx->pc != 0x38F9D8u) { return; }
    }
    ctx->pc = 0x38F9D8u;
label_38f9d8:
    // 0x38f9d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x38f9d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38f9dc:
    // 0x38f9dc: 0xc0d4104  jal         func_350410
label_38f9e0:
    if (ctx->pc == 0x38F9E0u) {
        ctx->pc = 0x38F9E0u;
            // 0x38f9e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38F9E4u;
        goto label_38f9e4;
    }
    ctx->pc = 0x38F9DCu;
    SET_GPR_U32(ctx, 31, 0x38F9E4u);
    ctx->pc = 0x38F9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38F9DCu;
            // 0x38f9e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F9E4u; }
        if (ctx->pc != 0x38F9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38F9E4u; }
        if (ctx->pc != 0x38F9E4u) { return; }
    }
    ctx->pc = 0x38F9E4u;
label_38f9e4:
    // 0x38f9e4: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x38f9e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_38f9e8:
    // 0x38f9e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38f9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38f9ec:
    // 0x38f9ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38f9ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38f9f0:
    // 0x38f9f0: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x38f9f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_38f9f4:
    // 0x38f9f4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x38f9f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38f9f8:
    // 0x38f9f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x38f9f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38f9fc:
    // 0x38f9fc: 0xc0d40ac  jal         func_3502B0
label_38fa00:
    if (ctx->pc == 0x38FA00u) {
        ctx->pc = 0x38FA00u;
            // 0x38fa00: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x38FA04u;
        goto label_38fa04;
    }
    ctx->pc = 0x38F9FCu;
    SET_GPR_U32(ctx, 31, 0x38FA04u);
    ctx->pc = 0x38FA00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38F9FCu;
            // 0x38fa00: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FA04u; }
        if (ctx->pc != 0x38FA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FA04u; }
        if (ctx->pc != 0x38FA04u) { return; }
    }
    ctx->pc = 0x38FA04u;
label_38fa04:
    // 0x38fa04: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x38fa04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_38fa08:
    // 0x38fa08: 0x10200043  beqz        $at, . + 4 + (0x43 << 2)
label_38fa0c:
    if (ctx->pc == 0x38FA0Cu) {
        ctx->pc = 0x38FA0Cu;
            // 0x38fa0c: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x38FA10u;
        goto label_38fa10;
    }
    ctx->pc = 0x38FA08u;
    {
        const bool branch_taken_0x38fa08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38FA08u;
            // 0x38fa0c: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fa08) {
            ctx->pc = 0x38FB18u;
            goto label_38fb18;
        }
    }
    ctx->pc = 0x38FA10u;
label_38fa10:
    // 0x38fa10: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x38fa10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_38fa14:
    // 0x38fa14: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x38fa14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_38fa18:
    // 0x38fa18: 0xc0e3ee4  jal         func_38FB90
label_38fa1c:
    if (ctx->pc == 0x38FA1Cu) {
        ctx->pc = 0x38FA1Cu;
            // 0x38fa1c: 0x27a6012c  addiu       $a2, $sp, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
        ctx->pc = 0x38FA20u;
        goto label_38fa20;
    }
    ctx->pc = 0x38FA18u;
    SET_GPR_U32(ctx, 31, 0x38FA20u);
    ctx->pc = 0x38FA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38FA18u;
            // 0x38fa1c: 0x27a6012c  addiu       $a2, $sp, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38FB90u;
    if (runtime->hasFunction(0x38FB90u)) {
        auto targetFn = runtime->lookupFunction(0x38FB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FA20u; }
        if (ctx->pc != 0x38FA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038FB90_0x38fb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FA20u; }
        if (ctx->pc != 0x38FA20u) { return; }
    }
    ctx->pc = 0x38FA20u;
label_38fa20:
    // 0x38fa20: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x38fa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_38fa24:
    // 0x38fa24: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x38fa24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_38fa28:
    // 0x38fa28: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x38fa28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_38fa2c:
    // 0x38fa2c: 0xc04e4a4  jal         func_139290
label_38fa30:
    if (ctx->pc == 0x38FA30u) {
        ctx->pc = 0x38FA30u;
            // 0x38fa30: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x38FA34u;
        goto label_38fa34;
    }
    ctx->pc = 0x38FA2Cu;
    SET_GPR_U32(ctx, 31, 0x38FA34u);
    ctx->pc = 0x38FA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38FA2Cu;
            // 0x38fa30: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FA34u; }
        if (ctx->pc != 0x38FA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FA34u; }
        if (ctx->pc != 0x38FA34u) { return; }
    }
    ctx->pc = 0x38FA34u;
label_38fa34:
    // 0x38fa34: 0xc0d5d80  jal         func_357600
label_38fa38:
    if (ctx->pc == 0x38FA38u) {
        ctx->pc = 0x38FA38u;
            // 0x38fa38: 0x8e84009c  lw          $a0, 0x9C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
        ctx->pc = 0x38FA3Cu;
        goto label_38fa3c;
    }
    ctx->pc = 0x38FA34u;
    SET_GPR_U32(ctx, 31, 0x38FA3Cu);
    ctx->pc = 0x38FA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38FA34u;
            // 0x38fa38: 0x8e84009c  lw          $a0, 0x9C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x357600u;
    if (runtime->hasFunction(0x357600u)) {
        auto targetFn = runtime->lookupFunction(0x357600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FA3Cu; }
        if (ctx->pc != 0x38FA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00357600_0x357600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FA3Cu; }
        if (ctx->pc != 0x38FA3Cu) { return; }
    }
    ctx->pc = 0x38FA3Cu;
label_38fa3c:
    // 0x38fa3c: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_38fa40:
    if (ctx->pc == 0x38FA40u) {
        ctx->pc = 0x38FA44u;
        goto label_38fa44;
    }
    ctx->pc = 0x38FA3Cu;
    {
        const bool branch_taken_0x38fa3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38fa3c) {
            ctx->pc = 0x38FAC0u;
            goto label_38fac0;
        }
    }
    ctx->pc = 0x38FA44u;
label_38fa44:
    // 0x38fa44: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x38fa44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_38fa48:
    // 0x38fa48: 0x8fa3012c  lw          $v1, 0x12C($sp)
    ctx->pc = 0x38fa48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_38fa4c:
    // 0x38fa4c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x38fa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_38fa50:
    // 0x38fa50: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x38fa50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_38fa54:
    // 0x38fa54: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_38fa58:
    if (ctx->pc == 0x38FA58u) {
        ctx->pc = 0x38FA58u;
            // 0x38fa58: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x38FA5Cu;
        goto label_38fa5c;
    }
    ctx->pc = 0x38FA54u;
    {
        const bool branch_taken_0x38fa54 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x38FA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38FA54u;
            // 0x38fa58: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fa54) {
            ctx->pc = 0x38FA68u;
            goto label_38fa68;
        }
    }
    ctx->pc = 0x38FA5Cu;
label_38fa5c:
    // 0x38fa5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38fa5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38fa60:
    // 0x38fa60: 0x10000008  b           . + 4 + (0x8 << 2)
label_38fa64:
    if (ctx->pc == 0x38FA64u) {
        ctx->pc = 0x38FA64u;
            // 0x38fa64: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x38FA68u;
        goto label_38fa68;
    }
    ctx->pc = 0x38FA60u;
    {
        const bool branch_taken_0x38fa60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38FA60u;
            // 0x38fa64: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fa60) {
            ctx->pc = 0x38FA84u;
            goto label_38fa84;
        }
    }
    ctx->pc = 0x38FA68u;
label_38fa68:
    // 0x38fa68: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x38fa68u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_38fa6c:
    // 0x38fa6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x38fa6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_38fa70:
    // 0x38fa70: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x38fa70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_38fa74:
    // 0x38fa74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38fa74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38fa78:
    // 0x38fa78: 0x0  nop
    ctx->pc = 0x38fa78u;
    // NOP
label_38fa7c:
    // 0x38fa7c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x38fa7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_38fa80:
    // 0x38fa80: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x38fa80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_38fa84:
    // 0x38fa84: 0x3c023c75  lui         $v0, 0x3C75
    ctx->pc = 0x38fa84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15477 << 16));
label_38fa88:
    // 0x38fa88: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x38fa88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
label_38fa8c:
    // 0x38fa8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38fa8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38fa90:
    // 0x38fa90: 0xc0477a8  jal         func_11DEA0
label_38fa94:
    if (ctx->pc == 0x38FA94u) {
        ctx->pc = 0x38FA94u;
            // 0x38fa94: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x38FA98u;
        goto label_38fa98;
    }
    ctx->pc = 0x38FA90u;
    SET_GPR_U32(ctx, 31, 0x38FA98u);
    ctx->pc = 0x38FA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38FA90u;
            // 0x38fa94: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FA98u; }
        if (ctx->pc != 0x38FA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FA98u; }
        if (ctx->pc != 0x38FA98u) { return; }
    }
    ctx->pc = 0x38FA98u;
label_38fa98:
    // 0x38fa98: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x38fa98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
label_38fa9c:
    // 0x38fa9c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x38fa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_38faa0:
    // 0x38faa0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x38faa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_38faa4:
    // 0x38faa4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x38faa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38faa8:
    // 0x38faa8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x38faa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38faac:
    // 0x38faac: 0x0  nop
    ctx->pc = 0x38faacu;
    // NOP
label_38fab0:
    // 0x38fab0: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x38fab0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_38fab4:
    // 0x38fab4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x38fab4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38fab8:
    // 0x38fab8: 0xc04ce64  jal         func_133990
label_38fabc:
    if (ctx->pc == 0x38FABCu) {
        ctx->pc = 0x38FABCu;
            // 0x38fabc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x38FAC0u;
        goto label_38fac0;
    }
    ctx->pc = 0x38FAB8u;
    SET_GPR_U32(ctx, 31, 0x38FAC0u);
    ctx->pc = 0x38FABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38FAB8u;
            // 0x38fabc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FAC0u; }
        if (ctx->pc != 0x38FAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FAC0u; }
        if (ctx->pc != 0x38FAC0u) { return; }
    }
    ctx->pc = 0x38FAC0u;
label_38fac0:
    // 0x38fac0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x38fac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_38fac4:
    // 0x38fac4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x38fac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_38fac8:
    // 0x38fac8: 0xc04cd60  jal         func_133580
label_38facc:
    if (ctx->pc == 0x38FACCu) {
        ctx->pc = 0x38FACCu;
            // 0x38facc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38FAD0u;
        goto label_38fad0;
    }
    ctx->pc = 0x38FAC8u;
    SET_GPR_U32(ctx, 31, 0x38FAD0u);
    ctx->pc = 0x38FACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38FAC8u;
            // 0x38facc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FAD0u; }
        if (ctx->pc != 0x38FAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FAD0u; }
        if (ctx->pc != 0x38FAD0u) { return; }
    }
    ctx->pc = 0x38FAD0u;
label_38fad0:
    // 0x38fad0: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x38fad0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_38fad4:
    // 0x38fad4: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x38fad4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_38fad8:
    // 0x38fad8: 0x320f809  jalr        $t9
label_38fadc:
    if (ctx->pc == 0x38FADCu) {
        ctx->pc = 0x38FADCu;
            // 0x38fadc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38FAE0u;
        goto label_38fae0;
    }
    ctx->pc = 0x38FAD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38FAE0u);
        ctx->pc = 0x38FADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38FAD8u;
            // 0x38fadc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38FAE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38FAE0u; }
            if (ctx->pc != 0x38FAE0u) { return; }
        }
        }
    }
    ctx->pc = 0x38FAE0u;
label_38fae0:
    // 0x38fae0: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x38fae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_38fae4:
    // 0x38fae4: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x38fae4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_38fae8:
    // 0x38fae8: 0x8fa5012c  lw          $a1, 0x12C($sp)
    ctx->pc = 0x38fae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_38faec:
    // 0x38faec: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x38faecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38faf0:
    // 0x38faf0: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x38faf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_38faf4:
    // 0x38faf4: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x38faf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_38faf8:
    // 0x38faf8: 0xc04cfcc  jal         func_133F30
label_38fafc:
    if (ctx->pc == 0x38FAFCu) {
        ctx->pc = 0x38FAFCu;
            // 0x38fafc: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->pc = 0x38FB00u;
        goto label_38fb00;
    }
    ctx->pc = 0x38FAF8u;
    SET_GPR_U32(ctx, 31, 0x38FB00u);
    ctx->pc = 0x38FAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38FAF8u;
            // 0x38fafc: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FB00u; }
        if (ctx->pc != 0x38FB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FB00u; }
        if (ctx->pc != 0x38FB00u) { return; }
    }
    ctx->pc = 0x38FB00u;
label_38fb00:
    // 0x38fb00: 0x8e84009c  lw          $a0, 0x9C($s4)
    ctx->pc = 0x38fb00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
label_38fb04:
    // 0x38fb04: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x38fb04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_38fb08:
    // 0x38fb08: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x38fb08u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_38fb0c:
    // 0x38fb0c: 0xc0e31f8  jal         func_38C7E0
label_38fb10:
    if (ctx->pc == 0x38FB10u) {
        ctx->pc = 0x38FB10u;
            // 0x38fb10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38FB14u;
        goto label_38fb14;
    }
    ctx->pc = 0x38FB0Cu;
    SET_GPR_U32(ctx, 31, 0x38FB14u);
    ctx->pc = 0x38FB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38FB0Cu;
            // 0x38fb10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38C7E0u;
    if (runtime->hasFunction(0x38C7E0u)) {
        auto targetFn = runtime->lookupFunction(0x38C7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FB14u; }
        if (ctx->pc != 0x38FB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038C7E0_0x38c7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FB14u; }
        if (ctx->pc != 0x38FB14u) { return; }
    }
    ctx->pc = 0x38FB14u;
label_38fb14:
    // 0x38fb14: 0x0  nop
    ctx->pc = 0x38fb14u;
    // NOP
label_38fb18:
    // 0x38fb18: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x38fb18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_38fb1c:
    // 0x38fb1c: 0x2b7182b  sltu        $v1, $s5, $s7
    ctx->pc = 0x38fb1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_38fb20:
    // 0x38fb20: 0x1460ff92  bnez        $v1, . + 4 + (-0x6E << 2)
label_38fb24:
    if (ctx->pc == 0x38FB24u) {
        ctx->pc = 0x38FB24u;
            // 0x38fb24: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x38FB28u;
        goto label_38fb28;
    }
    ctx->pc = 0x38FB20u;
    {
        const bool branch_taken_0x38fb20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38FB20u;
            // 0x38fb24: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fb20) {
            ctx->pc = 0x38F96Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_38f96c;
        }
    }
    ctx->pc = 0x38FB28u;
label_38fb28:
    // 0x38fb28: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x38fb28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_38fb2c:
    // 0x38fb2c: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x38fb2cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_38fb30:
    // 0x38fb30: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_38fb34:
    if (ctx->pc == 0x38FB34u) {
        ctx->pc = 0x38FB34u;
            // 0x38fb34: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x38FB38u;
        goto label_38fb38;
    }
    ctx->pc = 0x38FB30u;
    {
        const bool branch_taken_0x38fb30 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x38FB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38FB30u;
            // 0x38fb34: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fb30) {
            ctx->pc = 0x38FB58u;
            goto label_38fb58;
        }
    }
    ctx->pc = 0x38FB38u;
label_38fb38:
    // 0x38fb38: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x38fb38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_38fb3c:
    // 0x38fb3c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38fb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38fb40:
    // 0x38fb40: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x38fb40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_38fb44:
    // 0x38fb44: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x38fb44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_38fb48:
    // 0x38fb48: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x38fb48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_38fb4c:
    // 0x38fb4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x38fb4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38fb50:
    // 0x38fb50: 0xc055d28  jal         func_1574A0
label_38fb54:
    if (ctx->pc == 0x38FB54u) {
        ctx->pc = 0x38FB54u;
            // 0x38fb54: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38FB58u;
        goto label_38fb58;
    }
    ctx->pc = 0x38FB50u;
    SET_GPR_U32(ctx, 31, 0x38FB58u);
    ctx->pc = 0x38FB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38FB50u;
            // 0x38fb54: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FB58u; }
        if (ctx->pc != 0x38FB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FB58u; }
        if (ctx->pc != 0x38FB58u) { return; }
    }
    ctx->pc = 0x38FB58u;
label_38fb58:
    // 0x38fb58: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x38fb58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_38fb5c:
    // 0x38fb5c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x38fb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_38fb60:
    // 0x38fb60: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x38fb60u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_38fb64:
    // 0x38fb64: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x38fb64u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_38fb68:
    // 0x38fb68: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x38fb68u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_38fb6c:
    // 0x38fb6c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x38fb6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_38fb70:
    // 0x38fb70: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x38fb70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_38fb74:
    // 0x38fb74: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x38fb74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_38fb78:
    // 0x38fb78: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x38fb78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38fb7c:
    // 0x38fb7c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x38fb7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38fb80:
    // 0x38fb80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38fb80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38fb84:
    // 0x38fb84: 0x3e00008  jr          $ra
label_38fb88:
    if (ctx->pc == 0x38FB88u) {
        ctx->pc = 0x38FB88u;
            // 0x38fb88: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x38FB8Cu;
        goto label_38fb8c;
    }
    ctx->pc = 0x38FB84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38FB88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38FB84u;
            // 0x38fb88: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38FB8Cu;
label_38fb8c:
    // 0x38fb8c: 0x0  nop
    ctx->pc = 0x38fb8cu;
    // NOP
}
