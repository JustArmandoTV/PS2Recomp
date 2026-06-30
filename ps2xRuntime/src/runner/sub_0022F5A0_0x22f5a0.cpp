#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022F5A0
// Address: 0x22f5a0 - 0x22fb10
void sub_0022F5A0_0x22f5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F5A0_0x22f5a0");
#endif

    switch (ctx->pc) {
        case 0x22f5a0u: goto label_22f5a0;
        case 0x22f5a4u: goto label_22f5a4;
        case 0x22f5a8u: goto label_22f5a8;
        case 0x22f5acu: goto label_22f5ac;
        case 0x22f5b0u: goto label_22f5b0;
        case 0x22f5b4u: goto label_22f5b4;
        case 0x22f5b8u: goto label_22f5b8;
        case 0x22f5bcu: goto label_22f5bc;
        case 0x22f5c0u: goto label_22f5c0;
        case 0x22f5c4u: goto label_22f5c4;
        case 0x22f5c8u: goto label_22f5c8;
        case 0x22f5ccu: goto label_22f5cc;
        case 0x22f5d0u: goto label_22f5d0;
        case 0x22f5d4u: goto label_22f5d4;
        case 0x22f5d8u: goto label_22f5d8;
        case 0x22f5dcu: goto label_22f5dc;
        case 0x22f5e0u: goto label_22f5e0;
        case 0x22f5e4u: goto label_22f5e4;
        case 0x22f5e8u: goto label_22f5e8;
        case 0x22f5ecu: goto label_22f5ec;
        case 0x22f5f0u: goto label_22f5f0;
        case 0x22f5f4u: goto label_22f5f4;
        case 0x22f5f8u: goto label_22f5f8;
        case 0x22f5fcu: goto label_22f5fc;
        case 0x22f600u: goto label_22f600;
        case 0x22f604u: goto label_22f604;
        case 0x22f608u: goto label_22f608;
        case 0x22f60cu: goto label_22f60c;
        case 0x22f610u: goto label_22f610;
        case 0x22f614u: goto label_22f614;
        case 0x22f618u: goto label_22f618;
        case 0x22f61cu: goto label_22f61c;
        case 0x22f620u: goto label_22f620;
        case 0x22f624u: goto label_22f624;
        case 0x22f628u: goto label_22f628;
        case 0x22f62cu: goto label_22f62c;
        case 0x22f630u: goto label_22f630;
        case 0x22f634u: goto label_22f634;
        case 0x22f638u: goto label_22f638;
        case 0x22f63cu: goto label_22f63c;
        case 0x22f640u: goto label_22f640;
        case 0x22f644u: goto label_22f644;
        case 0x22f648u: goto label_22f648;
        case 0x22f64cu: goto label_22f64c;
        case 0x22f650u: goto label_22f650;
        case 0x22f654u: goto label_22f654;
        case 0x22f658u: goto label_22f658;
        case 0x22f65cu: goto label_22f65c;
        case 0x22f660u: goto label_22f660;
        case 0x22f664u: goto label_22f664;
        case 0x22f668u: goto label_22f668;
        case 0x22f66cu: goto label_22f66c;
        case 0x22f670u: goto label_22f670;
        case 0x22f674u: goto label_22f674;
        case 0x22f678u: goto label_22f678;
        case 0x22f67cu: goto label_22f67c;
        case 0x22f680u: goto label_22f680;
        case 0x22f684u: goto label_22f684;
        case 0x22f688u: goto label_22f688;
        case 0x22f68cu: goto label_22f68c;
        case 0x22f690u: goto label_22f690;
        case 0x22f694u: goto label_22f694;
        case 0x22f698u: goto label_22f698;
        case 0x22f69cu: goto label_22f69c;
        case 0x22f6a0u: goto label_22f6a0;
        case 0x22f6a4u: goto label_22f6a4;
        case 0x22f6a8u: goto label_22f6a8;
        case 0x22f6acu: goto label_22f6ac;
        case 0x22f6b0u: goto label_22f6b0;
        case 0x22f6b4u: goto label_22f6b4;
        case 0x22f6b8u: goto label_22f6b8;
        case 0x22f6bcu: goto label_22f6bc;
        case 0x22f6c0u: goto label_22f6c0;
        case 0x22f6c4u: goto label_22f6c4;
        case 0x22f6c8u: goto label_22f6c8;
        case 0x22f6ccu: goto label_22f6cc;
        case 0x22f6d0u: goto label_22f6d0;
        case 0x22f6d4u: goto label_22f6d4;
        case 0x22f6d8u: goto label_22f6d8;
        case 0x22f6dcu: goto label_22f6dc;
        case 0x22f6e0u: goto label_22f6e0;
        case 0x22f6e4u: goto label_22f6e4;
        case 0x22f6e8u: goto label_22f6e8;
        case 0x22f6ecu: goto label_22f6ec;
        case 0x22f6f0u: goto label_22f6f0;
        case 0x22f6f4u: goto label_22f6f4;
        case 0x22f6f8u: goto label_22f6f8;
        case 0x22f6fcu: goto label_22f6fc;
        case 0x22f700u: goto label_22f700;
        case 0x22f704u: goto label_22f704;
        case 0x22f708u: goto label_22f708;
        case 0x22f70cu: goto label_22f70c;
        case 0x22f710u: goto label_22f710;
        case 0x22f714u: goto label_22f714;
        case 0x22f718u: goto label_22f718;
        case 0x22f71cu: goto label_22f71c;
        case 0x22f720u: goto label_22f720;
        case 0x22f724u: goto label_22f724;
        case 0x22f728u: goto label_22f728;
        case 0x22f72cu: goto label_22f72c;
        case 0x22f730u: goto label_22f730;
        case 0x22f734u: goto label_22f734;
        case 0x22f738u: goto label_22f738;
        case 0x22f73cu: goto label_22f73c;
        case 0x22f740u: goto label_22f740;
        case 0x22f744u: goto label_22f744;
        case 0x22f748u: goto label_22f748;
        case 0x22f74cu: goto label_22f74c;
        case 0x22f750u: goto label_22f750;
        case 0x22f754u: goto label_22f754;
        case 0x22f758u: goto label_22f758;
        case 0x22f75cu: goto label_22f75c;
        case 0x22f760u: goto label_22f760;
        case 0x22f764u: goto label_22f764;
        case 0x22f768u: goto label_22f768;
        case 0x22f76cu: goto label_22f76c;
        case 0x22f770u: goto label_22f770;
        case 0x22f774u: goto label_22f774;
        case 0x22f778u: goto label_22f778;
        case 0x22f77cu: goto label_22f77c;
        case 0x22f780u: goto label_22f780;
        case 0x22f784u: goto label_22f784;
        case 0x22f788u: goto label_22f788;
        case 0x22f78cu: goto label_22f78c;
        case 0x22f790u: goto label_22f790;
        case 0x22f794u: goto label_22f794;
        case 0x22f798u: goto label_22f798;
        case 0x22f79cu: goto label_22f79c;
        case 0x22f7a0u: goto label_22f7a0;
        case 0x22f7a4u: goto label_22f7a4;
        case 0x22f7a8u: goto label_22f7a8;
        case 0x22f7acu: goto label_22f7ac;
        case 0x22f7b0u: goto label_22f7b0;
        case 0x22f7b4u: goto label_22f7b4;
        case 0x22f7b8u: goto label_22f7b8;
        case 0x22f7bcu: goto label_22f7bc;
        case 0x22f7c0u: goto label_22f7c0;
        case 0x22f7c4u: goto label_22f7c4;
        case 0x22f7c8u: goto label_22f7c8;
        case 0x22f7ccu: goto label_22f7cc;
        case 0x22f7d0u: goto label_22f7d0;
        case 0x22f7d4u: goto label_22f7d4;
        case 0x22f7d8u: goto label_22f7d8;
        case 0x22f7dcu: goto label_22f7dc;
        case 0x22f7e0u: goto label_22f7e0;
        case 0x22f7e4u: goto label_22f7e4;
        case 0x22f7e8u: goto label_22f7e8;
        case 0x22f7ecu: goto label_22f7ec;
        case 0x22f7f0u: goto label_22f7f0;
        case 0x22f7f4u: goto label_22f7f4;
        case 0x22f7f8u: goto label_22f7f8;
        case 0x22f7fcu: goto label_22f7fc;
        case 0x22f800u: goto label_22f800;
        case 0x22f804u: goto label_22f804;
        case 0x22f808u: goto label_22f808;
        case 0x22f80cu: goto label_22f80c;
        case 0x22f810u: goto label_22f810;
        case 0x22f814u: goto label_22f814;
        case 0x22f818u: goto label_22f818;
        case 0x22f81cu: goto label_22f81c;
        case 0x22f820u: goto label_22f820;
        case 0x22f824u: goto label_22f824;
        case 0x22f828u: goto label_22f828;
        case 0x22f82cu: goto label_22f82c;
        case 0x22f830u: goto label_22f830;
        case 0x22f834u: goto label_22f834;
        case 0x22f838u: goto label_22f838;
        case 0x22f83cu: goto label_22f83c;
        case 0x22f840u: goto label_22f840;
        case 0x22f844u: goto label_22f844;
        case 0x22f848u: goto label_22f848;
        case 0x22f84cu: goto label_22f84c;
        case 0x22f850u: goto label_22f850;
        case 0x22f854u: goto label_22f854;
        case 0x22f858u: goto label_22f858;
        case 0x22f85cu: goto label_22f85c;
        case 0x22f860u: goto label_22f860;
        case 0x22f864u: goto label_22f864;
        case 0x22f868u: goto label_22f868;
        case 0x22f86cu: goto label_22f86c;
        case 0x22f870u: goto label_22f870;
        case 0x22f874u: goto label_22f874;
        case 0x22f878u: goto label_22f878;
        case 0x22f87cu: goto label_22f87c;
        case 0x22f880u: goto label_22f880;
        case 0x22f884u: goto label_22f884;
        case 0x22f888u: goto label_22f888;
        case 0x22f88cu: goto label_22f88c;
        case 0x22f890u: goto label_22f890;
        case 0x22f894u: goto label_22f894;
        case 0x22f898u: goto label_22f898;
        case 0x22f89cu: goto label_22f89c;
        case 0x22f8a0u: goto label_22f8a0;
        case 0x22f8a4u: goto label_22f8a4;
        case 0x22f8a8u: goto label_22f8a8;
        case 0x22f8acu: goto label_22f8ac;
        case 0x22f8b0u: goto label_22f8b0;
        case 0x22f8b4u: goto label_22f8b4;
        case 0x22f8b8u: goto label_22f8b8;
        case 0x22f8bcu: goto label_22f8bc;
        case 0x22f8c0u: goto label_22f8c0;
        case 0x22f8c4u: goto label_22f8c4;
        case 0x22f8c8u: goto label_22f8c8;
        case 0x22f8ccu: goto label_22f8cc;
        case 0x22f8d0u: goto label_22f8d0;
        case 0x22f8d4u: goto label_22f8d4;
        case 0x22f8d8u: goto label_22f8d8;
        case 0x22f8dcu: goto label_22f8dc;
        case 0x22f8e0u: goto label_22f8e0;
        case 0x22f8e4u: goto label_22f8e4;
        case 0x22f8e8u: goto label_22f8e8;
        case 0x22f8ecu: goto label_22f8ec;
        case 0x22f8f0u: goto label_22f8f0;
        case 0x22f8f4u: goto label_22f8f4;
        case 0x22f8f8u: goto label_22f8f8;
        case 0x22f8fcu: goto label_22f8fc;
        case 0x22f900u: goto label_22f900;
        case 0x22f904u: goto label_22f904;
        case 0x22f908u: goto label_22f908;
        case 0x22f90cu: goto label_22f90c;
        case 0x22f910u: goto label_22f910;
        case 0x22f914u: goto label_22f914;
        case 0x22f918u: goto label_22f918;
        case 0x22f91cu: goto label_22f91c;
        case 0x22f920u: goto label_22f920;
        case 0x22f924u: goto label_22f924;
        case 0x22f928u: goto label_22f928;
        case 0x22f92cu: goto label_22f92c;
        case 0x22f930u: goto label_22f930;
        case 0x22f934u: goto label_22f934;
        case 0x22f938u: goto label_22f938;
        case 0x22f93cu: goto label_22f93c;
        case 0x22f940u: goto label_22f940;
        case 0x22f944u: goto label_22f944;
        case 0x22f948u: goto label_22f948;
        case 0x22f94cu: goto label_22f94c;
        case 0x22f950u: goto label_22f950;
        case 0x22f954u: goto label_22f954;
        case 0x22f958u: goto label_22f958;
        case 0x22f95cu: goto label_22f95c;
        case 0x22f960u: goto label_22f960;
        case 0x22f964u: goto label_22f964;
        case 0x22f968u: goto label_22f968;
        case 0x22f96cu: goto label_22f96c;
        case 0x22f970u: goto label_22f970;
        case 0x22f974u: goto label_22f974;
        case 0x22f978u: goto label_22f978;
        case 0x22f97cu: goto label_22f97c;
        case 0x22f980u: goto label_22f980;
        case 0x22f984u: goto label_22f984;
        case 0x22f988u: goto label_22f988;
        case 0x22f98cu: goto label_22f98c;
        case 0x22f990u: goto label_22f990;
        case 0x22f994u: goto label_22f994;
        case 0x22f998u: goto label_22f998;
        case 0x22f99cu: goto label_22f99c;
        case 0x22f9a0u: goto label_22f9a0;
        case 0x22f9a4u: goto label_22f9a4;
        case 0x22f9a8u: goto label_22f9a8;
        case 0x22f9acu: goto label_22f9ac;
        case 0x22f9b0u: goto label_22f9b0;
        case 0x22f9b4u: goto label_22f9b4;
        case 0x22f9b8u: goto label_22f9b8;
        case 0x22f9bcu: goto label_22f9bc;
        case 0x22f9c0u: goto label_22f9c0;
        case 0x22f9c4u: goto label_22f9c4;
        case 0x22f9c8u: goto label_22f9c8;
        case 0x22f9ccu: goto label_22f9cc;
        case 0x22f9d0u: goto label_22f9d0;
        case 0x22f9d4u: goto label_22f9d4;
        case 0x22f9d8u: goto label_22f9d8;
        case 0x22f9dcu: goto label_22f9dc;
        case 0x22f9e0u: goto label_22f9e0;
        case 0x22f9e4u: goto label_22f9e4;
        case 0x22f9e8u: goto label_22f9e8;
        case 0x22f9ecu: goto label_22f9ec;
        case 0x22f9f0u: goto label_22f9f0;
        case 0x22f9f4u: goto label_22f9f4;
        case 0x22f9f8u: goto label_22f9f8;
        case 0x22f9fcu: goto label_22f9fc;
        case 0x22fa00u: goto label_22fa00;
        case 0x22fa04u: goto label_22fa04;
        case 0x22fa08u: goto label_22fa08;
        case 0x22fa0cu: goto label_22fa0c;
        case 0x22fa10u: goto label_22fa10;
        case 0x22fa14u: goto label_22fa14;
        case 0x22fa18u: goto label_22fa18;
        case 0x22fa1cu: goto label_22fa1c;
        case 0x22fa20u: goto label_22fa20;
        case 0x22fa24u: goto label_22fa24;
        case 0x22fa28u: goto label_22fa28;
        case 0x22fa2cu: goto label_22fa2c;
        case 0x22fa30u: goto label_22fa30;
        case 0x22fa34u: goto label_22fa34;
        case 0x22fa38u: goto label_22fa38;
        case 0x22fa3cu: goto label_22fa3c;
        case 0x22fa40u: goto label_22fa40;
        case 0x22fa44u: goto label_22fa44;
        case 0x22fa48u: goto label_22fa48;
        case 0x22fa4cu: goto label_22fa4c;
        case 0x22fa50u: goto label_22fa50;
        case 0x22fa54u: goto label_22fa54;
        case 0x22fa58u: goto label_22fa58;
        case 0x22fa5cu: goto label_22fa5c;
        case 0x22fa60u: goto label_22fa60;
        case 0x22fa64u: goto label_22fa64;
        case 0x22fa68u: goto label_22fa68;
        case 0x22fa6cu: goto label_22fa6c;
        case 0x22fa70u: goto label_22fa70;
        case 0x22fa74u: goto label_22fa74;
        case 0x22fa78u: goto label_22fa78;
        case 0x22fa7cu: goto label_22fa7c;
        case 0x22fa80u: goto label_22fa80;
        case 0x22fa84u: goto label_22fa84;
        case 0x22fa88u: goto label_22fa88;
        case 0x22fa8cu: goto label_22fa8c;
        case 0x22fa90u: goto label_22fa90;
        case 0x22fa94u: goto label_22fa94;
        case 0x22fa98u: goto label_22fa98;
        case 0x22fa9cu: goto label_22fa9c;
        case 0x22faa0u: goto label_22faa0;
        case 0x22faa4u: goto label_22faa4;
        case 0x22faa8u: goto label_22faa8;
        case 0x22faacu: goto label_22faac;
        case 0x22fab0u: goto label_22fab0;
        case 0x22fab4u: goto label_22fab4;
        case 0x22fab8u: goto label_22fab8;
        case 0x22fabcu: goto label_22fabc;
        case 0x22fac0u: goto label_22fac0;
        case 0x22fac4u: goto label_22fac4;
        case 0x22fac8u: goto label_22fac8;
        case 0x22faccu: goto label_22facc;
        case 0x22fad0u: goto label_22fad0;
        case 0x22fad4u: goto label_22fad4;
        case 0x22fad8u: goto label_22fad8;
        case 0x22fadcu: goto label_22fadc;
        case 0x22fae0u: goto label_22fae0;
        case 0x22fae4u: goto label_22fae4;
        case 0x22fae8u: goto label_22fae8;
        case 0x22faecu: goto label_22faec;
        case 0x22faf0u: goto label_22faf0;
        case 0x22faf4u: goto label_22faf4;
        case 0x22faf8u: goto label_22faf8;
        case 0x22fafcu: goto label_22fafc;
        case 0x22fb00u: goto label_22fb00;
        case 0x22fb04u: goto label_22fb04;
        case 0x22fb08u: goto label_22fb08;
        case 0x22fb0cu: goto label_22fb0c;
        default: break;
    }

    ctx->pc = 0x22f5a0u;

label_22f5a0:
    // 0x22f5a0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x22f5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_22f5a4:
    // 0x22f5a4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x22f5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_22f5a8:
    // 0x22f5a8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x22f5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_22f5ac:
    // 0x22f5ac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x22f5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_22f5b0:
    // 0x22f5b0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x22f5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_22f5b4:
    // 0x22f5b4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x22f5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_22f5b8:
    // 0x22f5b8: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x22f5b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_22f5bc:
    // 0x22f5bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22f5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_22f5c0:
    // 0x22f5c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22f5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22f5c4:
    // 0x22f5c4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x22f5c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22f5c8:
    // 0x22f5c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22f5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22f5cc:
    // 0x22f5cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22f5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22f5d0:
    // 0x22f5d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22f5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22f5d4:
    // 0x22f5d4: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x22f5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_22f5d8:
    // 0x22f5d8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_22f5dc:
    if (ctx->pc == 0x22F5DCu) {
        ctx->pc = 0x22F5DCu;
            // 0x22f5dc: 0xafa500dc  sw          $a1, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 5));
        ctx->pc = 0x22F5E0u;
        goto label_22f5e0;
    }
    ctx->pc = 0x22F5D8u;
    {
        const bool branch_taken_0x22f5d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F5DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F5D8u;
            // 0x22f5dc: 0xafa500dc  sw          $a1, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f5d8) {
            ctx->pc = 0x22F604u;
            goto label_22f604;
        }
    }
    ctx->pc = 0x22F5E0u;
label_22f5e0:
    // 0x22f5e0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x22f5e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22f5e4:
    // 0x22f5e4: 0xa3b6018e  sb          $s6, 0x18E($sp)
    ctx->pc = 0x22f5e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 398), (uint8_t)GPR_U32(ctx, 22));
label_22f5e8:
    // 0x22f5e8: 0xa3a2018d  sb          $v0, 0x18D($sp)
    ctx->pc = 0x22f5e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 397), (uint8_t)GPR_U32(ctx, 2));
label_22f5ec:
    // 0x22f5ec: 0x27a5018c  addiu       $a1, $sp, 0x18C
    ctx->pc = 0x22f5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
label_22f5f0:
    // 0x22f5f0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x22f5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_22f5f4:
    // 0x22f5f4: 0xc08d1cc  jal         func_234730
label_22f5f8:
    if (ctx->pc == 0x22F5F8u) {
        ctx->pc = 0x22F5F8u;
            // 0x22f5f8: 0xa3a2018c  sb          $v0, 0x18C($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 396), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x22F5FCu;
        goto label_22f5fc;
    }
    ctx->pc = 0x22F5F4u;
    SET_GPR_U32(ctx, 31, 0x22F5FCu);
    ctx->pc = 0x22F5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F5F4u;
            // 0x22f5f8: 0xa3a2018c  sb          $v0, 0x18C($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 396), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234730u;
    if (runtime->hasFunction(0x234730u)) {
        auto targetFn = runtime->lookupFunction(0x234730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F5FCu; }
        if (ctx->pc != 0x22F5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234730_0x234730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F5FCu; }
        if (ctx->pc != 0x22F5FCu) { return; }
    }
    ctx->pc = 0x22F5FCu;
label_22f5fc:
    // 0x22f5fc: 0x10000136  b           . + 4 + (0x136 << 2)
label_22f600:
    if (ctx->pc == 0x22F600u) {
        ctx->pc = 0x22F600u;
            // 0x22f600: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x22F604u;
        goto label_22f604;
    }
    ctx->pc = 0x22F5FCu;
    {
        const bool branch_taken_0x22f5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F5FCu;
            // 0x22f600: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f5fc) {
            ctx->pc = 0x22FAD8u;
            goto label_22fad8;
        }
    }
    ctx->pc = 0x22F604u;
label_22f604:
    // 0x22f604: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22f604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22f608:
    // 0x22f608: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x22f608u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_22f60c:
    // 0x22f60c: 0xa283008c  sb          $v1, 0x8C($s4)
    ctx->pc = 0x22f60cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 140), (uint8_t)GPR_U32(ctx, 3));
label_22f610:
    // 0x22f610: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x22f610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_22f614:
    // 0x22f614: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x22f614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_22f618:
    // 0x22f618: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x22f618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_22f61c:
    // 0x22f61c: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x22f61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_22f620:
    // 0x22f620: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x22f620u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_22f624:
    // 0x22f624: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_22f628:
    if (ctx->pc == 0x22F628u) {
        ctx->pc = 0x22F628u;
            // 0x22f628: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x22F62Cu;
        goto label_22f62c;
    }
    ctx->pc = 0x22F624u;
    {
        const bool branch_taken_0x22f624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F624u;
            // 0x22f628: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f624) {
            ctx->pc = 0x22F654u;
            goto label_22f654;
        }
    }
    ctx->pc = 0x22F62Cu;
label_22f62c:
    // 0x22f62c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x22f62cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_22f630:
    // 0x22f630: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x22f630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_22f634:
    // 0x22f634: 0x2463c820  addiu       $v1, $v1, -0x37E0
    ctx->pc = 0x22f634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952992));
label_22f638:
    // 0x22f638: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x22f638u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_22f63c:
    // 0x22f63c: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x22f63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_22f640:
    // 0x22f640: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x22f640u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_22f644:
    // 0x22f644: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x22f644u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_22f648:
    // 0x22f648: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x22f648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_22f64c:
    // 0x22f64c: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x22f64cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_22f650:
    // 0x22f650: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x22f650u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_22f654:
    // 0x22f654: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x22f654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_22f658:
    // 0x22f658: 0x54600040  bnel        $v1, $zero, . + 4 + (0x40 << 2)
label_22f65c:
    if (ctx->pc == 0x22F65Cu) {
        ctx->pc = 0x22F65Cu;
            // 0x22f65c: 0x8e850084  lw          $a1, 0x84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
        ctx->pc = 0x22F660u;
        goto label_22f660;
    }
    ctx->pc = 0x22F658u;
    {
        const bool branch_taken_0x22f658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f658) {
            ctx->pc = 0x22F65Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22F658u;
            // 0x22f65c: 0x8e850084  lw          $a1, 0x84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22F75Cu;
            goto label_22f75c;
        }
    }
    ctx->pc = 0x22F660u;
label_22f660:
    // 0x22f660: 0x8e83002c  lw          $v1, 0x2C($s4)
    ctx->pc = 0x22f660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_22f664:
    // 0x22f664: 0x26970028  addiu       $s7, $s4, 0x28
    ctx->pc = 0x22f664u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
label_22f668:
    // 0x22f668: 0x1860001d  blez        $v1, . + 4 + (0x1D << 2)
label_22f66c:
    if (ctx->pc == 0x22F66Cu) {
        ctx->pc = 0x22F66Cu;
            // 0x22f66c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22F670u;
        goto label_22f670;
    }
    ctx->pc = 0x22F668u;
    {
        const bool branch_taken_0x22f668 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x22F66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F668u;
            // 0x22f66c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f668) {
            ctx->pc = 0x22F6E0u;
            goto label_22f6e0;
        }
    }
    ctx->pc = 0x22F670u;
label_22f670:
    // 0x22f670: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x22f670u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f674:
    // 0x22f674: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x22f674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_22f678:
    // 0x22f678: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x22f678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_22f67c:
    // 0x22f67c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x22f67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22f680:
    // 0x22f680: 0x2475004c  addiu       $s5, $v1, 0x4C
    ctx->pc = 0x22f680u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 76));
label_22f684:
    // 0x22f684: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x22f684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_22f688:
    // 0x22f688: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
label_22f68c:
    if (ctx->pc == 0x22F68Cu) {
        ctx->pc = 0x22F68Cu;
            // 0x22f68c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22F690u;
        goto label_22f690;
    }
    ctx->pc = 0x22F688u;
    {
        const bool branch_taken_0x22f688 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x22F68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F688u;
            // 0x22f68c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f688) {
            ctx->pc = 0x22F6C8u;
            goto label_22f6c8;
        }
    }
    ctx->pc = 0x22F690u;
label_22f690:
    // 0x22f690: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22f690u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f694:
    // 0x22f694: 0x0  nop
    ctx->pc = 0x22f694u;
    // NOP
label_22f698:
    // 0x22f698: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x22f698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_22f69c:
    // 0x22f69c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22f69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_22f6a0:
    // 0x22f6a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22f6a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f6a4:
    // 0x22f6a4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x22f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_22f6a8:
    // 0x22f6a8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x22f6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22f6ac:
    // 0x22f6ac: 0xc08bff0  jal         func_22FFC0
label_22f6b0:
    if (ctx->pc == 0x22F6B0u) {
        ctx->pc = 0x22F6B0u;
            // 0x22f6b0: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22F6B4u;
        goto label_22f6b4;
    }
    ctx->pc = 0x22F6ACu;
    SET_GPR_U32(ctx, 31, 0x22F6B4u);
    ctx->pc = 0x22F6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F6ACu;
            // 0x22f6b0: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F6B4u; }
        if (ctx->pc != 0x22F6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F6B4u; }
        if (ctx->pc != 0x22F6B4u) { return; }
    }
    ctx->pc = 0x22F6B4u;
label_22f6b4:
    // 0x22f6b4: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x22f6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_22f6b8:
    // 0x22f6b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22f6b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_22f6bc:
    // 0x22f6bc: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x22f6bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_22f6c0:
    // 0x22f6c0: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_22f6c4:
    if (ctx->pc == 0x22F6C4u) {
        ctx->pc = 0x22F6C4u;
            // 0x22f6c4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x22F6C8u;
        goto label_22f6c8;
    }
    ctx->pc = 0x22F6C0u;
    {
        const bool branch_taken_0x22f6c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F6C0u;
            // 0x22f6c4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f6c0) {
            ctx->pc = 0x22F698u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22f698;
        }
    }
    ctx->pc = 0x22F6C8u;
label_22f6c8:
    // 0x22f6c8: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x22f6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_22f6cc:
    // 0x22f6cc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x22f6ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_22f6d0:
    // 0x22f6d0: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x22f6d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_22f6d4:
    // 0x22f6d4: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
label_22f6d8:
    if (ctx->pc == 0x22F6D8u) {
        ctx->pc = 0x22F6D8u;
            // 0x22f6d8: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x22F6DCu;
        goto label_22f6dc;
    }
    ctx->pc = 0x22F6D4u;
    {
        const bool branch_taken_0x22f6d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F6D4u;
            // 0x22f6d8: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f6d4) {
            ctx->pc = 0x22F674u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22f674;
        }
    }
    ctx->pc = 0x22F6DCu;
label_22f6dc:
    // 0x22f6dc: 0x0  nop
    ctx->pc = 0x22f6dcu;
    // NOP
label_22f6e0:
    // 0x22f6e0: 0x8e830038  lw          $v1, 0x38($s4)
    ctx->pc = 0x22f6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_22f6e4:
    // 0x22f6e4: 0x186000ca  blez        $v1, . + 4 + (0xCA << 2)
label_22f6e8:
    if (ctx->pc == 0x22F6E8u) {
        ctx->pc = 0x22F6E8u;
            // 0x22f6e8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22F6ECu;
        goto label_22f6ec;
    }
    ctx->pc = 0x22F6E4u;
    {
        const bool branch_taken_0x22f6e4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x22F6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F6E4u;
            // 0x22f6e8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f6e4) {
            ctx->pc = 0x22FA10u;
            goto label_22fa10;
        }
    }
    ctx->pc = 0x22F6ECu;
label_22f6ec:
    // 0x22f6ec: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x22f6ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f6f0:
    // 0x22f6f0: 0x8e830034  lw          $v1, 0x34($s4)
    ctx->pc = 0x22f6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_22f6f4:
    // 0x22f6f4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x22f6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_22f6f8:
    // 0x22f6f8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x22f6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22f6fc:
    // 0x22f6fc: 0x2475004c  addiu       $s5, $v1, 0x4C
    ctx->pc = 0x22f6fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 76));
label_22f700:
    // 0x22f700: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x22f700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_22f704:
    // 0x22f704: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
label_22f708:
    if (ctx->pc == 0x22F708u) {
        ctx->pc = 0x22F708u;
            // 0x22f708: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22F70Cu;
        goto label_22f70c;
    }
    ctx->pc = 0x22F704u;
    {
        const bool branch_taken_0x22f704 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x22F708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F704u;
            // 0x22f708: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f704) {
            ctx->pc = 0x22F740u;
            goto label_22f740;
        }
    }
    ctx->pc = 0x22F70Cu;
label_22f70c:
    // 0x22f70c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22f70cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f710:
    // 0x22f710: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x22f710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_22f714:
    // 0x22f714: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22f714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_22f718:
    // 0x22f718: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22f718u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f71c:
    // 0x22f71c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x22f71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_22f720:
    // 0x22f720: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x22f720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22f724:
    // 0x22f724: 0xc08bff0  jal         func_22FFC0
label_22f728:
    if (ctx->pc == 0x22F728u) {
        ctx->pc = 0x22F728u;
            // 0x22f728: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22F72Cu;
        goto label_22f72c;
    }
    ctx->pc = 0x22F724u;
    SET_GPR_U32(ctx, 31, 0x22F72Cu);
    ctx->pc = 0x22F728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F724u;
            // 0x22f728: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F72Cu; }
        if (ctx->pc != 0x22F72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F72Cu; }
        if (ctx->pc != 0x22F72Cu) { return; }
    }
    ctx->pc = 0x22F72Cu;
label_22f72c:
    // 0x22f72c: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x22f72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_22f730:
    // 0x22f730: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22f730u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_22f734:
    // 0x22f734: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x22f734u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_22f738:
    // 0x22f738: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_22f73c:
    if (ctx->pc == 0x22F73Cu) {
        ctx->pc = 0x22F73Cu;
            // 0x22f73c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x22F740u;
        goto label_22f740;
    }
    ctx->pc = 0x22F738u;
    {
        const bool branch_taken_0x22f738 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F738u;
            // 0x22f73c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f738) {
            ctx->pc = 0x22F710u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22f710;
        }
    }
    ctx->pc = 0x22F740u;
label_22f740:
    // 0x22f740: 0x8e830038  lw          $v1, 0x38($s4)
    ctx->pc = 0x22f740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_22f744:
    // 0x22f744: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x22f744u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_22f748:
    // 0x22f748: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x22f748u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_22f74c:
    // 0x22f74c: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
label_22f750:
    if (ctx->pc == 0x22F750u) {
        ctx->pc = 0x22F750u;
            // 0x22f750: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x22F754u;
        goto label_22f754;
    }
    ctx->pc = 0x22F74Cu;
    {
        const bool branch_taken_0x22f74c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F74Cu;
            // 0x22f750: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f74c) {
            ctx->pc = 0x22F6F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22f6f0;
        }
    }
    ctx->pc = 0x22F754u;
label_22f754:
    // 0x22f754: 0x100000af  b           . + 4 + (0xAF << 2)
label_22f758:
    if (ctx->pc == 0x22F758u) {
        ctx->pc = 0x22F758u;
            // 0x22f758: 0x8fa300dc  lw          $v1, 0xDC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
        ctx->pc = 0x22F75Cu;
        goto label_22f75c;
    }
    ctx->pc = 0x22F754u;
    {
        const bool branch_taken_0x22f754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F754u;
            // 0x22f758: 0x8fa300dc  lw          $v1, 0xDC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f754) {
            ctx->pc = 0x22FA14u;
            goto label_22fa14;
        }
    }
    ctx->pc = 0x22F75Cu;
label_22f75c:
    // 0x22f75c: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x22f75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_22f760:
    // 0x22f760: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x22f760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_22f764:
    // 0x22f764: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x22f764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_22f768:
    // 0x22f768: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_22f76c:
    if (ctx->pc == 0x22F76Cu) {
        ctx->pc = 0x22F76Cu;
            // 0x22f76c: 0xae850084  sw          $a1, 0x84($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 5));
        ctx->pc = 0x22F770u;
        goto label_22f770;
    }
    ctx->pc = 0x22F768u;
    {
        const bool branch_taken_0x22f768 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F768u;
            // 0x22f76c: 0xae850084  sw          $a1, 0x84($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f768) {
            ctx->pc = 0x22F78Cu;
            goto label_22f78c;
        }
    }
    ctx->pc = 0x22F770u;
label_22f770:
    // 0x22f770: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x22f770u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_22f774:
    // 0x22f774: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22f774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_22f778:
    // 0x22f778: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x22f778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_22f77c:
    // 0x22f77c: 0x0  nop
    ctx->pc = 0x22f77cu;
    // NOP
label_22f780:
    // 0x22f780: 0x0  nop
    ctx->pc = 0x22f780u;
    // NOP
label_22f784:
    // 0x22f784: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_22f788:
    if (ctx->pc == 0x22F788u) {
        ctx->pc = 0x22F78Cu;
        goto label_22f78c;
    }
    ctx->pc = 0x22F784u;
    {
        const bool branch_taken_0x22f784 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f784) {
            ctx->pc = 0x22F770u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22f770;
        }
    }
    ctx->pc = 0x22F78Cu;
label_22f78c:
    // 0x22f78c: 0x26830034  addiu       $v1, $s4, 0x34
    ctx->pc = 0x22f78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 52));
label_22f790:
    // 0x22f790: 0x26840028  addiu       $a0, $s4, 0x28
    ctx->pc = 0x22f790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
label_22f794:
    // 0x22f794: 0xafa30174  sw          $v1, 0x174($sp)
    ctx->pc = 0x22f794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 3));
label_22f798:
    // 0x22f798: 0x27a30170  addiu       $v1, $sp, 0x170
    ctx->pc = 0x22f798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_22f79c:
    // 0x22f79c: 0xafa40170  sw          $a0, 0x170($sp)
    ctx->pc = 0x22f79cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 4));
label_22f7a0:
    // 0x22f7a0: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x22f7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_22f7a4:
    // 0x22f7a4: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x22f7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_22f7a8:
    // 0x22f7a8: 0x27a300ec  addiu       $v1, $sp, 0xEC
    ctx->pc = 0x22f7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
label_22f7ac:
    // 0x22f7ac: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x22f7acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
label_22f7b0:
    // 0x22f7b0: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x22f7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_22f7b4:
    // 0x22f7b4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x22f7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_22f7b8:
    // 0x22f7b8: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x22f7b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
label_22f7bc:
    // 0x22f7bc: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x22f7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
label_22f7c0:
    // 0x22f7c0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x22f7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_22f7c4:
    // 0x22f7c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22f7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22f7c8:
    // 0x22f7c8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x22f7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_22f7cc:
    // 0x22f7cc: 0x18600076  blez        $v1, . + 4 + (0x76 << 2)
label_22f7d0:
    if (ctx->pc == 0x22F7D0u) {
        ctx->pc = 0x22F7D0u;
            // 0x22f7d0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22F7D4u;
        goto label_22f7d4;
    }
    ctx->pc = 0x22F7CCu;
    {
        const bool branch_taken_0x22f7cc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x22F7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F7CCu;
            // 0x22f7d0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f7cc) {
            ctx->pc = 0x22F9A8u;
            goto label_22f9a8;
        }
    }
    ctx->pc = 0x22F7D4u;
label_22f7d4:
    // 0x22f7d4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x22f7d4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f7d8:
    // 0x22f7d8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x22f7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22f7dc:
    // 0x22f7dc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x22f7dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f7e0:
    // 0x22f7e0: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x22f7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_22f7e4:
    // 0x22f7e4: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x22f7e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22f7e8:
    // 0x22f7e8: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x22f7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
label_22f7ec:
    // 0x22f7ec: 0x8e650064  lw          $a1, 0x64($s3)
    ctx->pc = 0x22f7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
label_22f7f0:
    // 0x22f7f0: 0x18a00055  blez        $a1, . + 4 + (0x55 << 2)
label_22f7f4:
    if (ctx->pc == 0x22F7F4u) {
        ctx->pc = 0x22F7F4u;
            // 0x22f7f4: 0x2671005c  addiu       $s1, $s3, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 92));
        ctx->pc = 0x22F7F8u;
        goto label_22f7f8;
    }
    ctx->pc = 0x22F7F0u;
    {
        const bool branch_taken_0x22f7f0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x22F7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F7F0u;
            // 0x22f7f4: 0x2671005c  addiu       $s1, $s3, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f7f0) {
            ctx->pc = 0x22F948u;
            goto label_22f948;
        }
    }
    ctx->pc = 0x22F7F8u;
label_22f7f8:
    // 0x22f7f8: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x22f7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_22f7fc:
    // 0x22f7fc: 0x0  nop
    ctx->pc = 0x22f7fcu;
    // NOP
label_22f800:
    // 0x22f800: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x22f800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_22f804:
    // 0x22f804: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x22f804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_22f808:
    // 0x22f808: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x22f808u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_22f80c:
    // 0x22f80c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x22f80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_22f810:
    // 0x22f810: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x22f810u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22f814:
    // 0x22f814: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x22f814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_22f818:
    // 0x22f818: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x22f818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_22f81c:
    // 0x22f81c: 0x16a50004  bne         $s5, $a1, . + 4 + (0x4 << 2)
label_22f820:
    if (ctx->pc == 0x22F820u) {
        ctx->pc = 0x22F820u;
            // 0x22f820: 0xafa300a0  sw          $v1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
        ctx->pc = 0x22F824u;
        goto label_22f824;
    }
    ctx->pc = 0x22F81Cu;
    {
        const bool branch_taken_0x22f81c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 5));
        ctx->pc = 0x22F820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F81Cu;
            // 0x22f820: 0xafa300a0  sw          $v1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f81c) {
            ctx->pc = 0x22F830u;
            goto label_22f830;
        }
    }
    ctx->pc = 0x22F824u;
label_22f824:
    // 0x22f824: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22f824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22f828:
    // 0x22f828: 0x10000002  b           . + 4 + (0x2 << 2)
label_22f82c:
    if (ctx->pc == 0x22F82Cu) {
        ctx->pc = 0x22F82Cu;
            // 0x22f82c: 0x2438021  addu        $s0, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->pc = 0x22F830u;
        goto label_22f830;
    }
    ctx->pc = 0x22F828u;
    {
        const bool branch_taken_0x22f828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F828u;
            // 0x22f82c: 0x2438021  addu        $s0, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f828) {
            ctx->pc = 0x22F834u;
            goto label_22f834;
        }
    }
    ctx->pc = 0x22F830u;
label_22f830:
    // 0x22f830: 0x26500200  addiu       $s0, $s2, 0x200
    ctx->pc = 0x22f830u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
label_22f834:
    // 0x22f834: 0x250082b  sltu        $at, $s2, $s0
    ctx->pc = 0x22f834u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_22f838:
    // 0x22f838: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
label_22f83c:
    if (ctx->pc == 0x22F83Cu) {
        ctx->pc = 0x22F840u;
        goto label_22f840;
    }
    ctx->pc = 0x22F838u;
    {
        const bool branch_taken_0x22f838 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f838) {
            ctx->pc = 0x22F938u;
            goto label_22f938;
        }
    }
    ctx->pc = 0x22F840u;
label_22f840:
    // 0x22f840: 0x8e850070  lw          $a1, 0x70($s4)
    ctx->pc = 0x22f840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_22f844:
    // 0x22f844: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x22f844u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_22f848:
    // 0x22f848: 0x8e470018  lw          $a3, 0x18($s2)
    ctx->pc = 0x22f848u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_22f84c:
    // 0x22f84c: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x22f84cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_22f850:
    // 0x22f850: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x22f850u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_22f854:
    // 0x22f854: 0x320f809  jalr        $t9
label_22f858:
    if (ctx->pc == 0x22F858u) {
        ctx->pc = 0x22F858u;
            // 0x22f858: 0x27a40184  addiu       $a0, $sp, 0x184 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
        ctx->pc = 0x22F85Cu;
        goto label_22f85c;
    }
    ctx->pc = 0x22F854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22F85Cu);
        ctx->pc = 0x22F858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F854u;
            // 0x22f858: 0x27a40184  addiu       $a0, $sp, 0x184 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22F85Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22F85Cu; }
            if (ctx->pc != 0x22F85Cu) { return; }
        }
        }
    }
    ctx->pc = 0x22F85Cu;
label_22f85c:
    // 0x22f85c: 0x27a30184  addiu       $v1, $sp, 0x184
    ctx->pc = 0x22f85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
label_22f860:
    // 0x22f860: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x22f860u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_22f864:
    // 0x22f864: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_22f868:
    if (ctx->pc == 0x22F868u) {
        ctx->pc = 0x22F86Cu;
        goto label_22f86c;
    }
    ctx->pc = 0x22F864u;
    {
        const bool branch_taken_0x22f864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f864) {
            ctx->pc = 0x22F8C0u;
            goto label_22f8c0;
        }
    }
    ctx->pc = 0x22F86Cu;
label_22f86c:
    // 0x22f86c: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x22f86cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_22f870:
    // 0x22f870: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x22f870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_22f874:
    // 0x22f874: 0x8e830074  lw          $v1, 0x74($s4)
    ctx->pc = 0x22f874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_22f878:
    // 0x22f878: 0x94a6001a  lhu         $a2, 0x1A($a1)
    ctx->pc = 0x22f878u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
label_22f87c:
    // 0x22f87c: 0x9485001a  lhu         $a1, 0x1A($a0)
    ctx->pc = 0x22f87cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 26)));
label_22f880:
    // 0x22f880: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x22f880u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_22f884:
    // 0x22f884: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x22f884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_22f888:
    // 0x22f888: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22f888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22f88c:
    // 0x22f88c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x22f88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_22f890:
    // 0x22f890: 0x806319f0  lb          $v1, 0x19F0($v1)
    ctx->pc = 0x22f890u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 6640)));
label_22f894:
    // 0x22f894: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_22f898:
    if (ctx->pc == 0x22F898u) {
        ctx->pc = 0x22F89Cu;
        goto label_22f89c;
    }
    ctx->pc = 0x22F894u;
    {
        const bool branch_taken_0x22f894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f894) {
            ctx->pc = 0x22F8C0u;
            goto label_22f8c0;
        }
    }
    ctx->pc = 0x22F89Cu;
label_22f89c:
    // 0x22f89c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22f89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22f8a0:
    // 0x22f8a0: 0x16c3001f  bne         $s6, $v1, . + 4 + (0x1F << 2)
label_22f8a4:
    if (ctx->pc == 0x22F8A4u) {
        ctx->pc = 0x22F8A8u;
        goto label_22f8a8;
    }
    ctx->pc = 0x22F8A0u;
    {
        const bool branch_taken_0x22f8a0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        if (branch_taken_0x22f8a0) {
            ctx->pc = 0x22F920u;
            goto label_22f920;
        }
    }
    ctx->pc = 0x22F8A8u;
label_22f8a8:
    // 0x22f8a8: 0x8e85006c  lw          $a1, 0x6C($s4)
    ctx->pc = 0x22f8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_22f8ac:
    // 0x22f8ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22f8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22f8b0:
    // 0x22f8b0: 0xc0923f4  jal         func_248FD0
label_22f8b4:
    if (ctx->pc == 0x22F8B4u) {
        ctx->pc = 0x22F8B4u;
            // 0x22f8b4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22F8B8u;
        goto label_22f8b8;
    }
    ctx->pc = 0x22F8B0u;
    SET_GPR_U32(ctx, 31, 0x22F8B8u);
    ctx->pc = 0x22F8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F8B0u;
            // 0x22f8b4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x248FD0u;
    if (runtime->hasFunction(0x248FD0u)) {
        auto targetFn = runtime->lookupFunction(0x248FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F8B8u; }
        if (ctx->pc != 0x22F8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00248FD0_0x248fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F8B8u; }
        if (ctx->pc != 0x22F8B8u) { return; }
    }
    ctx->pc = 0x22F8B8u;
label_22f8b8:
    // 0x22f8b8: 0x10000019  b           . + 4 + (0x19 << 2)
label_22f8bc:
    if (ctx->pc == 0x22F8BCu) {
        ctx->pc = 0x22F8C0u;
        goto label_22f8c0;
    }
    ctx->pc = 0x22F8B8u;
    {
        const bool branch_taken_0x22f8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f8b8) {
            ctx->pc = 0x22F920u;
            goto label_22f920;
        }
    }
    ctx->pc = 0x22F8C0u;
label_22f8c0:
    // 0x22f8c0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x22f8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_22f8c4:
    // 0x22f8c4: 0x8fa400e4  lw          $a0, 0xE4($sp)
    ctx->pc = 0x22f8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_22f8c8:
    // 0x22f8c8: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x22f8c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_22f8cc:
    // 0x22f8cc: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x22f8ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_22f8d0:
    // 0x22f8d0: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_22f8d4:
    if (ctx->pc == 0x22F8D4u) {
        ctx->pc = 0x22F8D8u;
        goto label_22f8d8;
    }
    ctx->pc = 0x22F8D0u;
    {
        const bool branch_taken_0x22f8d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22f8d0) {
            ctx->pc = 0x22F8E8u;
            goto label_22f8e8;
        }
    }
    ctx->pc = 0x22F8D8u;
label_22f8d8:
    // 0x22f8d8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x22f8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_22f8dc:
    // 0x22f8dc: 0xc0a728c  jal         func_29CA30
label_22f8e0:
    if (ctx->pc == 0x22F8E0u) {
        ctx->pc = 0x22F8E0u;
            // 0x22f8e0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x22F8E4u;
        goto label_22f8e4;
    }
    ctx->pc = 0x22F8DCu;
    SET_GPR_U32(ctx, 31, 0x22F8E4u);
    ctx->pc = 0x22F8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F8DCu;
            // 0x22f8e0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F8E4u; }
        if (ctx->pc != 0x22F8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F8E4u; }
        if (ctx->pc != 0x22F8E4u) { return; }
    }
    ctx->pc = 0x22F8E4u;
label_22f8e4:
    // 0x22f8e4: 0x0  nop
    ctx->pc = 0x22f8e4u;
    // NOP
label_22f8e8:
    // 0x22f8e8: 0x8fa600e4  lw          $a2, 0xE4($sp)
    ctx->pc = 0x22f8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_22f8ec:
    // 0x22f8ec: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x22f8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_22f8f0:
    // 0x22f8f0: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x22f8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_22f8f4:
    // 0x22f8f4: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x22f8f4u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_22f8f8:
    // 0x22f8f8: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x22f8f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_22f8fc:
    // 0x22f8fc: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x22f8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_22f900:
    // 0x22f900: 0xafa700e4  sw          $a3, 0xE4($sp)
    ctx->pc = 0x22f900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 7));
label_22f904:
    // 0x22f904: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x22f904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_22f908:
    // 0x22f908: 0xacb20000  sw          $s2, 0x0($a1)
    ctx->pc = 0x22f908u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 18));
label_22f90c:
    // 0x22f90c: 0x92650027  lbu         $a1, 0x27($s3)
    ctx->pc = 0x22f90cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 39)));
label_22f910:
    // 0x22f910: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x22f910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_22f914:
    // 0x22f914: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x22f914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_22f918:
    // 0x22f918: 0xa2630027  sb          $v1, 0x27($s3)
    ctx->pc = 0x22f918u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 39), (uint8_t)GPR_U32(ctx, 3));
label_22f91c:
    // 0x22f91c: 0x0  nop
    ctx->pc = 0x22f91cu;
    // NOP
label_22f920:
    // 0x22f920: 0x92430003  lbu         $v1, 0x3($s2)
    ctx->pc = 0x22f920u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_22f924:
    // 0x22f924: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x22f924u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_22f928:
    // 0x22f928: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x22f928u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_22f92c:
    // 0x22f92c: 0x1460ffc4  bnez        $v1, . + 4 + (-0x3C << 2)
label_22f930:
    if (ctx->pc == 0x22F930u) {
        ctx->pc = 0x22F934u;
        goto label_22f934;
    }
    ctx->pc = 0x22F92Cu;
    {
        const bool branch_taken_0x22f92c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f92c) {
            ctx->pc = 0x22F840u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22f840;
        }
    }
    ctx->pc = 0x22F934u;
label_22f934:
    // 0x22f934: 0x0  nop
    ctx->pc = 0x22f934u;
    // NOP
label_22f938:
    // 0x22f938: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x22f938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_22f93c:
    // 0x22f93c: 0x2a5182a  slt         $v1, $s5, $a1
    ctx->pc = 0x22f93cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_22f940:
    // 0x22f940: 0x1460ffaf  bnez        $v1, . + 4 + (-0x51 << 2)
label_22f944:
    if (ctx->pc == 0x22F944u) {
        ctx->pc = 0x22F948u;
        goto label_22f948;
    }
    ctx->pc = 0x22F940u;
    {
        const bool branch_taken_0x22f940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f940) {
            ctx->pc = 0x22F800u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22f800;
        }
    }
    ctx->pc = 0x22F948u;
label_22f948:
    // 0x22f948: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x22f948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_22f94c:
    // 0x22f94c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_22f950:
    if (ctx->pc == 0x22F950u) {
        ctx->pc = 0x22F954u;
        goto label_22f954;
    }
    ctx->pc = 0x22F94Cu;
    {
        const bool branch_taken_0x22f94c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f94c) {
            ctx->pc = 0x22F988u;
            goto label_22f988;
        }
    }
    ctx->pc = 0x22F954u;
label_22f954:
    // 0x22f954: 0x0  nop
    ctx->pc = 0x22f954u;
    // NOP
label_22f958:
    // 0x22f958: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x22f958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_22f95c:
    // 0x22f95c: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x22f95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_22f960:
    // 0x22f960: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x22f960u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_22f964:
    // 0x22f964: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22f964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22f968:
    // 0x22f968: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22f968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_22f96c:
    // 0x22f96c: 0x8c64fffc  lw          $a0, -0x4($v1)
    ctx->pc = 0x22f96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_22f970:
    // 0x22f970: 0xc08e2f4  jal         func_238BD0
label_22f974:
    if (ctx->pc == 0x22F974u) {
        ctx->pc = 0x22F974u;
            // 0x22f974: 0xafa200e4  sw          $v0, 0xE4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
        ctx->pc = 0x22F978u;
        goto label_22f978;
    }
    ctx->pc = 0x22F970u;
    SET_GPR_U32(ctx, 31, 0x22F978u);
    ctx->pc = 0x22F974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F970u;
            // 0x22f974: 0xafa200e4  sw          $v0, 0xE4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238BD0u;
    if (runtime->hasFunction(0x238BD0u)) {
        auto targetFn = runtime->lookupFunction(0x238BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F978u; }
        if (ctx->pc != 0x22F978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238BD0_0x238bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F978u; }
        if (ctx->pc != 0x22F978u) { return; }
    }
    ctx->pc = 0x22F978u;
label_22f978:
    // 0x22f978: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x22f978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_22f97c:
    // 0x22f97c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_22f980:
    if (ctx->pc == 0x22F980u) {
        ctx->pc = 0x22F984u;
        goto label_22f984;
    }
    ctx->pc = 0x22F97Cu;
    {
        const bool branch_taken_0x22f97c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f97c) {
            ctx->pc = 0x22F958u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22f958;
        }
    }
    ctx->pc = 0x22F984u;
label_22f984:
    // 0x22f984: 0x0  nop
    ctx->pc = 0x22f984u;
    // NOP
label_22f988:
    // 0x22f988: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x22f988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_22f98c:
    // 0x22f98c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x22f98cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_22f990:
    // 0x22f990: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22f990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22f994:
    // 0x22f994: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x22f994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_22f998:
    // 0x22f998: 0x2e3182a  slt         $v1, $s7, $v1
    ctx->pc = 0x22f998u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_22f99c:
    // 0x22f99c: 0x1460ff8e  bnez        $v1, . + 4 + (-0x72 << 2)
label_22f9a0:
    if (ctx->pc == 0x22F9A0u) {
        ctx->pc = 0x22F9A0u;
            // 0x22f9a0: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->pc = 0x22F9A4u;
        goto label_22f9a4;
    }
    ctx->pc = 0x22F99Cu;
    {
        const bool branch_taken_0x22f99c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F99Cu;
            // 0x22f9a0: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f99c) {
            ctx->pc = 0x22F7D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22f7d8;
        }
    }
    ctx->pc = 0x22F9A4u;
label_22f9a4:
    // 0x22f9a4: 0x0  nop
    ctx->pc = 0x22f9a4u;
    // NOP
label_22f9a8:
    // 0x22f9a8: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x22f9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_22f9ac:
    // 0x22f9ac: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x22f9acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_22f9b0:
    // 0x22f9b0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22f9b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_22f9b4:
    // 0x22f9b4: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_22f9b8:
    if (ctx->pc == 0x22F9B8u) {
        ctx->pc = 0x22F9BCu;
        goto label_22f9bc;
    }
    ctx->pc = 0x22F9B4u;
    {
        const bool branch_taken_0x22f9b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f9b4) {
            ctx->pc = 0x22F9E0u;
            goto label_22f9e0;
        }
    }
    ctx->pc = 0x22F9BCu;
label_22f9bc:
    // 0x22f9bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22f9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22f9c0:
    // 0x22f9c0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x22f9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_22f9c4:
    // 0x22f9c4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22f9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22f9c8:
    // 0x22f9c8: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x22f9c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_22f9cc:
    // 0x22f9cc: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x22f9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_22f9d0:
    // 0x22f9d0: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x22f9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_22f9d4:
    // 0x22f9d4: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x22f9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_22f9d8:
    // 0x22f9d8: 0xc0a7ab4  jal         func_29EAD0
label_22f9dc:
    if (ctx->pc == 0x22F9DCu) {
        ctx->pc = 0x22F9DCu;
            // 0x22f9dc: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x22F9E0u;
        goto label_22f9e0;
    }
    ctx->pc = 0x22F9D8u;
    SET_GPR_U32(ctx, 31, 0x22F9E0u);
    ctx->pc = 0x22F9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F9D8u;
            // 0x22f9dc: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F9E0u; }
        if (ctx->pc != 0x22F9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F9E0u; }
        if (ctx->pc != 0x22F9E0u) { return; }
    }
    ctx->pc = 0x22F9E0u;
label_22f9e0:
    // 0x22f9e0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x22f9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_22f9e4:
    // 0x22f9e4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x22f9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_22f9e8:
    // 0x22f9e8: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x22f9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_22f9ec:
    // 0x22f9ec: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x22f9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_22f9f0:
    // 0x22f9f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22f9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_22f9f4:
    // 0x22f9f4: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x22f9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_22f9f8:
    // 0x22f9f8: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x22f9f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_22f9fc:
    // 0x22f9fc: 0x5460ff6b  bnel        $v1, $zero, . + 4 + (-0x95 << 2)
label_22fa00:
    if (ctx->pc == 0x22FA00u) {
        ctx->pc = 0x22FA00u;
            // 0x22fa00: 0x27a300ec  addiu       $v1, $sp, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
        ctx->pc = 0x22FA04u;
        goto label_22fa04;
    }
    ctx->pc = 0x22F9FCu;
    {
        const bool branch_taken_0x22f9fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f9fc) {
            ctx->pc = 0x22FA00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22F9FCu;
            // 0x22fa00: 0x27a300ec  addiu       $v1, $sp, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22F7ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22f7ac;
        }
    }
    ctx->pc = 0x22FA04u;
label_22fa04:
    // 0x22fa04: 0x8e830084  lw          $v1, 0x84($s4)
    ctx->pc = 0x22fa04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_22fa08:
    // 0x22fa08: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22fa08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_22fa0c:
    // 0x22fa0c: 0xae830084  sw          $v1, 0x84($s4)
    ctx->pc = 0x22fa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 3));
label_22fa10:
    // 0x22fa10: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x22fa10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_22fa14:
    // 0x22fa14: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_22fa18:
    if (ctx->pc == 0x22FA18u) {
        ctx->pc = 0x22FA1Cu;
        goto label_22fa1c;
    }
    ctx->pc = 0x22FA14u;
    {
        const bool branch_taken_0x22fa14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fa14) {
            ctx->pc = 0x22FA58u;
            goto label_22fa58;
        }
    }
    ctx->pc = 0x22FA1Cu;
label_22fa1c:
    // 0x22fa1c: 0x8e8300f0  lw          $v1, 0xF0($s4)
    ctx->pc = 0x22fa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 240)));
label_22fa20:
    // 0x22fa20: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
label_22fa24:
    if (ctx->pc == 0x22FA24u) {
        ctx->pc = 0x22FA24u;
            // 0x22fa24: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22FA28u;
        goto label_22fa28;
    }
    ctx->pc = 0x22FA20u;
    {
        const bool branch_taken_0x22fa20 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x22FA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FA20u;
            // 0x22fa24: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fa20) {
            ctx->pc = 0x22FA58u;
            goto label_22fa58;
        }
    }
    ctx->pc = 0x22FA28u;
label_22fa28:
    // 0x22fa28: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22fa28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22fa2c:
    // 0x22fa2c: 0x8e8200ec  lw          $v0, 0xEC($s4)
    ctx->pc = 0x22fa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 236)));
label_22fa30:
    // 0x22fa30: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22fa30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_22fa34:
    // 0x22fa34: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x22fa34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_22fa38:
    // 0x22fa38: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x22fa38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22fa3c:
    // 0x22fa3c: 0xc08bf20  jal         func_22FC80
label_22fa40:
    if (ctx->pc == 0x22FA40u) {
        ctx->pc = 0x22FA40u;
            // 0x22fa40: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22FA44u;
        goto label_22fa44;
    }
    ctx->pc = 0x22FA3Cu;
    SET_GPR_U32(ctx, 31, 0x22FA44u);
    ctx->pc = 0x22FA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FA3Cu;
            // 0x22fa40: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FA44u; }
        if (ctx->pc != 0x22FA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FA44u; }
        if (ctx->pc != 0x22FA44u) { return; }
    }
    ctx->pc = 0x22FA44u;
label_22fa44:
    // 0x22fa44: 0x8e8300f0  lw          $v1, 0xF0($s4)
    ctx->pc = 0x22fa44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 240)));
label_22fa48:
    // 0x22fa48: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22fa48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_22fa4c:
    // 0x22fa4c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x22fa4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_22fa50:
    // 0x22fa50: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_22fa54:
    if (ctx->pc == 0x22FA54u) {
        ctx->pc = 0x22FA54u;
            // 0x22fa54: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x22FA58u;
        goto label_22fa58;
    }
    ctx->pc = 0x22FA50u;
    {
        const bool branch_taken_0x22fa50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22FA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FA50u;
            // 0x22fa54: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fa50) {
            ctx->pc = 0x22FA2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22fa2c;
        }
    }
    ctx->pc = 0x22FA58u;
label_22fa58:
    // 0x22fa58: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x22fa58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22fa5c:
    // 0x22fa5c: 0xa283008c  sb          $v1, 0x8C($s4)
    ctx->pc = 0x22fa5cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 140), (uint8_t)GPR_U32(ctx, 3));
label_22fa60:
    // 0x22fa60: 0x8e830084  lw          $v1, 0x84($s4)
    ctx->pc = 0x22fa60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_22fa64:
    // 0x22fa64: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_22fa68:
    if (ctx->pc == 0x22FA68u) {
        ctx->pc = 0x22FA6Cu;
        goto label_22fa6c;
    }
    ctx->pc = 0x22FA64u;
    {
        const bool branch_taken_0x22fa64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fa64) {
            ctx->pc = 0x22FA8Cu;
            goto label_22fa8c;
        }
    }
    ctx->pc = 0x22FA6Cu;
label_22fa6c:
    // 0x22fa6c: 0x8e830080  lw          $v1, 0x80($s4)
    ctx->pc = 0x22fa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
label_22fa70:
    // 0x22fa70: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_22fa74:
    if (ctx->pc == 0x22FA74u) {
        ctx->pc = 0x22FA78u;
        goto label_22fa78;
    }
    ctx->pc = 0x22FA70u;
    {
        const bool branch_taken_0x22fa70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fa70) {
            ctx->pc = 0x22FA8Cu;
            goto label_22fa8c;
        }
    }
    ctx->pc = 0x22FA78u;
label_22fa78:
    // 0x22fa78: 0x8283008c  lb          $v1, 0x8C($s4)
    ctx->pc = 0x22fa78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 140)));
label_22fa7c:
    // 0x22fa7c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_22fa80:
    if (ctx->pc == 0x22FA80u) {
        ctx->pc = 0x22FA84u;
        goto label_22fa84;
    }
    ctx->pc = 0x22FA7Cu;
    {
        const bool branch_taken_0x22fa7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fa7c) {
            ctx->pc = 0x22FA8Cu;
            goto label_22fa8c;
        }
    }
    ctx->pc = 0x22FA84u;
label_22fa84:
    // 0x22fa84: 0xc08d1c4  jal         func_234710
label_22fa88:
    if (ctx->pc == 0x22FA88u) {
        ctx->pc = 0x22FA88u;
            // 0x22fa88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22FA8Cu;
        goto label_22fa8c;
    }
    ctx->pc = 0x22FA84u;
    SET_GPR_U32(ctx, 31, 0x22FA8Cu);
    ctx->pc = 0x22FA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FA84u;
            // 0x22fa88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234710u;
    if (runtime->hasFunction(0x234710u)) {
        auto targetFn = runtime->lookupFunction(0x234710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FA8Cu; }
        if (ctx->pc != 0x22FA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234710_0x234710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FA8Cu; }
        if (ctx->pc != 0x22FA8Cu) { return; }
    }
    ctx->pc = 0x22FA8Cu;
label_22fa8c:
    // 0x22fa8c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x22fa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_22fa90:
    // 0x22fa90: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x22fa90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_22fa94:
    // 0x22fa94: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x22fa94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_22fa98:
    // 0x22fa98: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x22fa98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_22fa9c:
    // 0x22fa9c: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x22fa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_22faa0:
    // 0x22faa0: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x22faa0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_22faa4:
    // 0x22faa4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_22faa8:
    if (ctx->pc == 0x22FAA8u) {
        ctx->pc = 0x22FAA8u;
            // 0x22faa8: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x22FAACu;
        goto label_22faac;
    }
    ctx->pc = 0x22FAA4u;
    {
        const bool branch_taken_0x22faa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FAA4u;
            // 0x22faa8: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22faa4) {
            ctx->pc = 0x22FAD4u;
            goto label_22fad4;
        }
    }
    ctx->pc = 0x22FAACu;
label_22faac:
    // 0x22faac: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x22faacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_22fab0:
    // 0x22fab0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x22fab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_22fab4:
    // 0x22fab4: 0x2463c838  addiu       $v1, $v1, -0x37C8
    ctx->pc = 0x22fab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953016));
label_22fab8:
    // 0x22fab8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x22fab8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_22fabc:
    // 0x22fabc: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x22fabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_22fac0:
    // 0x22fac0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x22fac0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_22fac4:
    // 0x22fac4: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x22fac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_22fac8:
    // 0x22fac8: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x22fac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_22facc:
    // 0x22facc: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x22faccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_22fad0:
    // 0x22fad0: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x22fad0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_22fad4:
    // 0x22fad4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x22fad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_22fad8:
    // 0x22fad8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x22fad8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_22fadc:
    // 0x22fadc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x22fadcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_22fae0:
    // 0x22fae0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x22fae0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_22fae4:
    // 0x22fae4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x22fae4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_22fae8:
    // 0x22fae8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22fae8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22faec:
    // 0x22faec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22faecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22faf0:
    // 0x22faf0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22faf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22faf4:
    // 0x22faf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22faf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22faf8:
    // 0x22faf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22faf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22fafc:
    // 0x22fafc: 0x3e00008  jr          $ra
label_22fb00:
    if (ctx->pc == 0x22FB00u) {
        ctx->pc = 0x22FB00u;
            // 0x22fb00: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x22FB04u;
        goto label_22fb04;
    }
    ctx->pc = 0x22FAFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FAFCu;
            // 0x22fb00: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22FB04u;
label_22fb04:
    // 0x22fb04: 0x0  nop
    ctx->pc = 0x22fb04u;
    // NOP
label_22fb08:
    // 0x22fb08: 0x0  nop
    ctx->pc = 0x22fb08u;
    // NOP
label_22fb0c:
    // 0x22fb0c: 0x0  nop
    ctx->pc = 0x22fb0cu;
    // NOP
}
