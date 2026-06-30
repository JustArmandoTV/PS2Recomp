#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027D560
// Address: 0x27d560 - 0x27e390
void sub_0027D560_0x27d560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027D560_0x27d560");
#endif

    switch (ctx->pc) {
        case 0x27d560u: goto label_27d560;
        case 0x27d564u: goto label_27d564;
        case 0x27d568u: goto label_27d568;
        case 0x27d56cu: goto label_27d56c;
        case 0x27d570u: goto label_27d570;
        case 0x27d574u: goto label_27d574;
        case 0x27d578u: goto label_27d578;
        case 0x27d57cu: goto label_27d57c;
        case 0x27d580u: goto label_27d580;
        case 0x27d584u: goto label_27d584;
        case 0x27d588u: goto label_27d588;
        case 0x27d58cu: goto label_27d58c;
        case 0x27d590u: goto label_27d590;
        case 0x27d594u: goto label_27d594;
        case 0x27d598u: goto label_27d598;
        case 0x27d59cu: goto label_27d59c;
        case 0x27d5a0u: goto label_27d5a0;
        case 0x27d5a4u: goto label_27d5a4;
        case 0x27d5a8u: goto label_27d5a8;
        case 0x27d5acu: goto label_27d5ac;
        case 0x27d5b0u: goto label_27d5b0;
        case 0x27d5b4u: goto label_27d5b4;
        case 0x27d5b8u: goto label_27d5b8;
        case 0x27d5bcu: goto label_27d5bc;
        case 0x27d5c0u: goto label_27d5c0;
        case 0x27d5c4u: goto label_27d5c4;
        case 0x27d5c8u: goto label_27d5c8;
        case 0x27d5ccu: goto label_27d5cc;
        case 0x27d5d0u: goto label_27d5d0;
        case 0x27d5d4u: goto label_27d5d4;
        case 0x27d5d8u: goto label_27d5d8;
        case 0x27d5dcu: goto label_27d5dc;
        case 0x27d5e0u: goto label_27d5e0;
        case 0x27d5e4u: goto label_27d5e4;
        case 0x27d5e8u: goto label_27d5e8;
        case 0x27d5ecu: goto label_27d5ec;
        case 0x27d5f0u: goto label_27d5f0;
        case 0x27d5f4u: goto label_27d5f4;
        case 0x27d5f8u: goto label_27d5f8;
        case 0x27d5fcu: goto label_27d5fc;
        case 0x27d600u: goto label_27d600;
        case 0x27d604u: goto label_27d604;
        case 0x27d608u: goto label_27d608;
        case 0x27d60cu: goto label_27d60c;
        case 0x27d610u: goto label_27d610;
        case 0x27d614u: goto label_27d614;
        case 0x27d618u: goto label_27d618;
        case 0x27d61cu: goto label_27d61c;
        case 0x27d620u: goto label_27d620;
        case 0x27d624u: goto label_27d624;
        case 0x27d628u: goto label_27d628;
        case 0x27d62cu: goto label_27d62c;
        case 0x27d630u: goto label_27d630;
        case 0x27d634u: goto label_27d634;
        case 0x27d638u: goto label_27d638;
        case 0x27d63cu: goto label_27d63c;
        case 0x27d640u: goto label_27d640;
        case 0x27d644u: goto label_27d644;
        case 0x27d648u: goto label_27d648;
        case 0x27d64cu: goto label_27d64c;
        case 0x27d650u: goto label_27d650;
        case 0x27d654u: goto label_27d654;
        case 0x27d658u: goto label_27d658;
        case 0x27d65cu: goto label_27d65c;
        case 0x27d660u: goto label_27d660;
        case 0x27d664u: goto label_27d664;
        case 0x27d668u: goto label_27d668;
        case 0x27d66cu: goto label_27d66c;
        case 0x27d670u: goto label_27d670;
        case 0x27d674u: goto label_27d674;
        case 0x27d678u: goto label_27d678;
        case 0x27d67cu: goto label_27d67c;
        case 0x27d680u: goto label_27d680;
        case 0x27d684u: goto label_27d684;
        case 0x27d688u: goto label_27d688;
        case 0x27d68cu: goto label_27d68c;
        case 0x27d690u: goto label_27d690;
        case 0x27d694u: goto label_27d694;
        case 0x27d698u: goto label_27d698;
        case 0x27d69cu: goto label_27d69c;
        case 0x27d6a0u: goto label_27d6a0;
        case 0x27d6a4u: goto label_27d6a4;
        case 0x27d6a8u: goto label_27d6a8;
        case 0x27d6acu: goto label_27d6ac;
        case 0x27d6b0u: goto label_27d6b0;
        case 0x27d6b4u: goto label_27d6b4;
        case 0x27d6b8u: goto label_27d6b8;
        case 0x27d6bcu: goto label_27d6bc;
        case 0x27d6c0u: goto label_27d6c0;
        case 0x27d6c4u: goto label_27d6c4;
        case 0x27d6c8u: goto label_27d6c8;
        case 0x27d6ccu: goto label_27d6cc;
        case 0x27d6d0u: goto label_27d6d0;
        case 0x27d6d4u: goto label_27d6d4;
        case 0x27d6d8u: goto label_27d6d8;
        case 0x27d6dcu: goto label_27d6dc;
        case 0x27d6e0u: goto label_27d6e0;
        case 0x27d6e4u: goto label_27d6e4;
        case 0x27d6e8u: goto label_27d6e8;
        case 0x27d6ecu: goto label_27d6ec;
        case 0x27d6f0u: goto label_27d6f0;
        case 0x27d6f4u: goto label_27d6f4;
        case 0x27d6f8u: goto label_27d6f8;
        case 0x27d6fcu: goto label_27d6fc;
        case 0x27d700u: goto label_27d700;
        case 0x27d704u: goto label_27d704;
        case 0x27d708u: goto label_27d708;
        case 0x27d70cu: goto label_27d70c;
        case 0x27d710u: goto label_27d710;
        case 0x27d714u: goto label_27d714;
        case 0x27d718u: goto label_27d718;
        case 0x27d71cu: goto label_27d71c;
        case 0x27d720u: goto label_27d720;
        case 0x27d724u: goto label_27d724;
        case 0x27d728u: goto label_27d728;
        case 0x27d72cu: goto label_27d72c;
        case 0x27d730u: goto label_27d730;
        case 0x27d734u: goto label_27d734;
        case 0x27d738u: goto label_27d738;
        case 0x27d73cu: goto label_27d73c;
        case 0x27d740u: goto label_27d740;
        case 0x27d744u: goto label_27d744;
        case 0x27d748u: goto label_27d748;
        case 0x27d74cu: goto label_27d74c;
        case 0x27d750u: goto label_27d750;
        case 0x27d754u: goto label_27d754;
        case 0x27d758u: goto label_27d758;
        case 0x27d75cu: goto label_27d75c;
        case 0x27d760u: goto label_27d760;
        case 0x27d764u: goto label_27d764;
        case 0x27d768u: goto label_27d768;
        case 0x27d76cu: goto label_27d76c;
        case 0x27d770u: goto label_27d770;
        case 0x27d774u: goto label_27d774;
        case 0x27d778u: goto label_27d778;
        case 0x27d77cu: goto label_27d77c;
        case 0x27d780u: goto label_27d780;
        case 0x27d784u: goto label_27d784;
        case 0x27d788u: goto label_27d788;
        case 0x27d78cu: goto label_27d78c;
        case 0x27d790u: goto label_27d790;
        case 0x27d794u: goto label_27d794;
        case 0x27d798u: goto label_27d798;
        case 0x27d79cu: goto label_27d79c;
        case 0x27d7a0u: goto label_27d7a0;
        case 0x27d7a4u: goto label_27d7a4;
        case 0x27d7a8u: goto label_27d7a8;
        case 0x27d7acu: goto label_27d7ac;
        case 0x27d7b0u: goto label_27d7b0;
        case 0x27d7b4u: goto label_27d7b4;
        case 0x27d7b8u: goto label_27d7b8;
        case 0x27d7bcu: goto label_27d7bc;
        case 0x27d7c0u: goto label_27d7c0;
        case 0x27d7c4u: goto label_27d7c4;
        case 0x27d7c8u: goto label_27d7c8;
        case 0x27d7ccu: goto label_27d7cc;
        case 0x27d7d0u: goto label_27d7d0;
        case 0x27d7d4u: goto label_27d7d4;
        case 0x27d7d8u: goto label_27d7d8;
        case 0x27d7dcu: goto label_27d7dc;
        case 0x27d7e0u: goto label_27d7e0;
        case 0x27d7e4u: goto label_27d7e4;
        case 0x27d7e8u: goto label_27d7e8;
        case 0x27d7ecu: goto label_27d7ec;
        case 0x27d7f0u: goto label_27d7f0;
        case 0x27d7f4u: goto label_27d7f4;
        case 0x27d7f8u: goto label_27d7f8;
        case 0x27d7fcu: goto label_27d7fc;
        case 0x27d800u: goto label_27d800;
        case 0x27d804u: goto label_27d804;
        case 0x27d808u: goto label_27d808;
        case 0x27d80cu: goto label_27d80c;
        case 0x27d810u: goto label_27d810;
        case 0x27d814u: goto label_27d814;
        case 0x27d818u: goto label_27d818;
        case 0x27d81cu: goto label_27d81c;
        case 0x27d820u: goto label_27d820;
        case 0x27d824u: goto label_27d824;
        case 0x27d828u: goto label_27d828;
        case 0x27d82cu: goto label_27d82c;
        case 0x27d830u: goto label_27d830;
        case 0x27d834u: goto label_27d834;
        case 0x27d838u: goto label_27d838;
        case 0x27d83cu: goto label_27d83c;
        case 0x27d840u: goto label_27d840;
        case 0x27d844u: goto label_27d844;
        case 0x27d848u: goto label_27d848;
        case 0x27d84cu: goto label_27d84c;
        case 0x27d850u: goto label_27d850;
        case 0x27d854u: goto label_27d854;
        case 0x27d858u: goto label_27d858;
        case 0x27d85cu: goto label_27d85c;
        case 0x27d860u: goto label_27d860;
        case 0x27d864u: goto label_27d864;
        case 0x27d868u: goto label_27d868;
        case 0x27d86cu: goto label_27d86c;
        case 0x27d870u: goto label_27d870;
        case 0x27d874u: goto label_27d874;
        case 0x27d878u: goto label_27d878;
        case 0x27d87cu: goto label_27d87c;
        case 0x27d880u: goto label_27d880;
        case 0x27d884u: goto label_27d884;
        case 0x27d888u: goto label_27d888;
        case 0x27d88cu: goto label_27d88c;
        case 0x27d890u: goto label_27d890;
        case 0x27d894u: goto label_27d894;
        case 0x27d898u: goto label_27d898;
        case 0x27d89cu: goto label_27d89c;
        case 0x27d8a0u: goto label_27d8a0;
        case 0x27d8a4u: goto label_27d8a4;
        case 0x27d8a8u: goto label_27d8a8;
        case 0x27d8acu: goto label_27d8ac;
        case 0x27d8b0u: goto label_27d8b0;
        case 0x27d8b4u: goto label_27d8b4;
        case 0x27d8b8u: goto label_27d8b8;
        case 0x27d8bcu: goto label_27d8bc;
        case 0x27d8c0u: goto label_27d8c0;
        case 0x27d8c4u: goto label_27d8c4;
        case 0x27d8c8u: goto label_27d8c8;
        case 0x27d8ccu: goto label_27d8cc;
        case 0x27d8d0u: goto label_27d8d0;
        case 0x27d8d4u: goto label_27d8d4;
        case 0x27d8d8u: goto label_27d8d8;
        case 0x27d8dcu: goto label_27d8dc;
        case 0x27d8e0u: goto label_27d8e0;
        case 0x27d8e4u: goto label_27d8e4;
        case 0x27d8e8u: goto label_27d8e8;
        case 0x27d8ecu: goto label_27d8ec;
        case 0x27d8f0u: goto label_27d8f0;
        case 0x27d8f4u: goto label_27d8f4;
        case 0x27d8f8u: goto label_27d8f8;
        case 0x27d8fcu: goto label_27d8fc;
        case 0x27d900u: goto label_27d900;
        case 0x27d904u: goto label_27d904;
        case 0x27d908u: goto label_27d908;
        case 0x27d90cu: goto label_27d90c;
        case 0x27d910u: goto label_27d910;
        case 0x27d914u: goto label_27d914;
        case 0x27d918u: goto label_27d918;
        case 0x27d91cu: goto label_27d91c;
        case 0x27d920u: goto label_27d920;
        case 0x27d924u: goto label_27d924;
        case 0x27d928u: goto label_27d928;
        case 0x27d92cu: goto label_27d92c;
        case 0x27d930u: goto label_27d930;
        case 0x27d934u: goto label_27d934;
        case 0x27d938u: goto label_27d938;
        case 0x27d93cu: goto label_27d93c;
        case 0x27d940u: goto label_27d940;
        case 0x27d944u: goto label_27d944;
        case 0x27d948u: goto label_27d948;
        case 0x27d94cu: goto label_27d94c;
        case 0x27d950u: goto label_27d950;
        case 0x27d954u: goto label_27d954;
        case 0x27d958u: goto label_27d958;
        case 0x27d95cu: goto label_27d95c;
        case 0x27d960u: goto label_27d960;
        case 0x27d964u: goto label_27d964;
        case 0x27d968u: goto label_27d968;
        case 0x27d96cu: goto label_27d96c;
        case 0x27d970u: goto label_27d970;
        case 0x27d974u: goto label_27d974;
        case 0x27d978u: goto label_27d978;
        case 0x27d97cu: goto label_27d97c;
        case 0x27d980u: goto label_27d980;
        case 0x27d984u: goto label_27d984;
        case 0x27d988u: goto label_27d988;
        case 0x27d98cu: goto label_27d98c;
        case 0x27d990u: goto label_27d990;
        case 0x27d994u: goto label_27d994;
        case 0x27d998u: goto label_27d998;
        case 0x27d99cu: goto label_27d99c;
        case 0x27d9a0u: goto label_27d9a0;
        case 0x27d9a4u: goto label_27d9a4;
        case 0x27d9a8u: goto label_27d9a8;
        case 0x27d9acu: goto label_27d9ac;
        case 0x27d9b0u: goto label_27d9b0;
        case 0x27d9b4u: goto label_27d9b4;
        case 0x27d9b8u: goto label_27d9b8;
        case 0x27d9bcu: goto label_27d9bc;
        case 0x27d9c0u: goto label_27d9c0;
        case 0x27d9c4u: goto label_27d9c4;
        case 0x27d9c8u: goto label_27d9c8;
        case 0x27d9ccu: goto label_27d9cc;
        case 0x27d9d0u: goto label_27d9d0;
        case 0x27d9d4u: goto label_27d9d4;
        case 0x27d9d8u: goto label_27d9d8;
        case 0x27d9dcu: goto label_27d9dc;
        case 0x27d9e0u: goto label_27d9e0;
        case 0x27d9e4u: goto label_27d9e4;
        case 0x27d9e8u: goto label_27d9e8;
        case 0x27d9ecu: goto label_27d9ec;
        case 0x27d9f0u: goto label_27d9f0;
        case 0x27d9f4u: goto label_27d9f4;
        case 0x27d9f8u: goto label_27d9f8;
        case 0x27d9fcu: goto label_27d9fc;
        case 0x27da00u: goto label_27da00;
        case 0x27da04u: goto label_27da04;
        case 0x27da08u: goto label_27da08;
        case 0x27da0cu: goto label_27da0c;
        case 0x27da10u: goto label_27da10;
        case 0x27da14u: goto label_27da14;
        case 0x27da18u: goto label_27da18;
        case 0x27da1cu: goto label_27da1c;
        case 0x27da20u: goto label_27da20;
        case 0x27da24u: goto label_27da24;
        case 0x27da28u: goto label_27da28;
        case 0x27da2cu: goto label_27da2c;
        case 0x27da30u: goto label_27da30;
        case 0x27da34u: goto label_27da34;
        case 0x27da38u: goto label_27da38;
        case 0x27da3cu: goto label_27da3c;
        case 0x27da40u: goto label_27da40;
        case 0x27da44u: goto label_27da44;
        case 0x27da48u: goto label_27da48;
        case 0x27da4cu: goto label_27da4c;
        case 0x27da50u: goto label_27da50;
        case 0x27da54u: goto label_27da54;
        case 0x27da58u: goto label_27da58;
        case 0x27da5cu: goto label_27da5c;
        case 0x27da60u: goto label_27da60;
        case 0x27da64u: goto label_27da64;
        case 0x27da68u: goto label_27da68;
        case 0x27da6cu: goto label_27da6c;
        case 0x27da70u: goto label_27da70;
        case 0x27da74u: goto label_27da74;
        case 0x27da78u: goto label_27da78;
        case 0x27da7cu: goto label_27da7c;
        case 0x27da80u: goto label_27da80;
        case 0x27da84u: goto label_27da84;
        case 0x27da88u: goto label_27da88;
        case 0x27da8cu: goto label_27da8c;
        case 0x27da90u: goto label_27da90;
        case 0x27da94u: goto label_27da94;
        case 0x27da98u: goto label_27da98;
        case 0x27da9cu: goto label_27da9c;
        case 0x27daa0u: goto label_27daa0;
        case 0x27daa4u: goto label_27daa4;
        case 0x27daa8u: goto label_27daa8;
        case 0x27daacu: goto label_27daac;
        case 0x27dab0u: goto label_27dab0;
        case 0x27dab4u: goto label_27dab4;
        case 0x27dab8u: goto label_27dab8;
        case 0x27dabcu: goto label_27dabc;
        case 0x27dac0u: goto label_27dac0;
        case 0x27dac4u: goto label_27dac4;
        case 0x27dac8u: goto label_27dac8;
        case 0x27daccu: goto label_27dacc;
        case 0x27dad0u: goto label_27dad0;
        case 0x27dad4u: goto label_27dad4;
        case 0x27dad8u: goto label_27dad8;
        case 0x27dadcu: goto label_27dadc;
        case 0x27dae0u: goto label_27dae0;
        case 0x27dae4u: goto label_27dae4;
        case 0x27dae8u: goto label_27dae8;
        case 0x27daecu: goto label_27daec;
        case 0x27daf0u: goto label_27daf0;
        case 0x27daf4u: goto label_27daf4;
        case 0x27daf8u: goto label_27daf8;
        case 0x27dafcu: goto label_27dafc;
        case 0x27db00u: goto label_27db00;
        case 0x27db04u: goto label_27db04;
        case 0x27db08u: goto label_27db08;
        case 0x27db0cu: goto label_27db0c;
        case 0x27db10u: goto label_27db10;
        case 0x27db14u: goto label_27db14;
        case 0x27db18u: goto label_27db18;
        case 0x27db1cu: goto label_27db1c;
        case 0x27db20u: goto label_27db20;
        case 0x27db24u: goto label_27db24;
        case 0x27db28u: goto label_27db28;
        case 0x27db2cu: goto label_27db2c;
        case 0x27db30u: goto label_27db30;
        case 0x27db34u: goto label_27db34;
        case 0x27db38u: goto label_27db38;
        case 0x27db3cu: goto label_27db3c;
        case 0x27db40u: goto label_27db40;
        case 0x27db44u: goto label_27db44;
        case 0x27db48u: goto label_27db48;
        case 0x27db4cu: goto label_27db4c;
        case 0x27db50u: goto label_27db50;
        case 0x27db54u: goto label_27db54;
        case 0x27db58u: goto label_27db58;
        case 0x27db5cu: goto label_27db5c;
        case 0x27db60u: goto label_27db60;
        case 0x27db64u: goto label_27db64;
        case 0x27db68u: goto label_27db68;
        case 0x27db6cu: goto label_27db6c;
        case 0x27db70u: goto label_27db70;
        case 0x27db74u: goto label_27db74;
        case 0x27db78u: goto label_27db78;
        case 0x27db7cu: goto label_27db7c;
        case 0x27db80u: goto label_27db80;
        case 0x27db84u: goto label_27db84;
        case 0x27db88u: goto label_27db88;
        case 0x27db8cu: goto label_27db8c;
        case 0x27db90u: goto label_27db90;
        case 0x27db94u: goto label_27db94;
        case 0x27db98u: goto label_27db98;
        case 0x27db9cu: goto label_27db9c;
        case 0x27dba0u: goto label_27dba0;
        case 0x27dba4u: goto label_27dba4;
        case 0x27dba8u: goto label_27dba8;
        case 0x27dbacu: goto label_27dbac;
        case 0x27dbb0u: goto label_27dbb0;
        case 0x27dbb4u: goto label_27dbb4;
        case 0x27dbb8u: goto label_27dbb8;
        case 0x27dbbcu: goto label_27dbbc;
        case 0x27dbc0u: goto label_27dbc0;
        case 0x27dbc4u: goto label_27dbc4;
        case 0x27dbc8u: goto label_27dbc8;
        case 0x27dbccu: goto label_27dbcc;
        case 0x27dbd0u: goto label_27dbd0;
        case 0x27dbd4u: goto label_27dbd4;
        case 0x27dbd8u: goto label_27dbd8;
        case 0x27dbdcu: goto label_27dbdc;
        case 0x27dbe0u: goto label_27dbe0;
        case 0x27dbe4u: goto label_27dbe4;
        case 0x27dbe8u: goto label_27dbe8;
        case 0x27dbecu: goto label_27dbec;
        case 0x27dbf0u: goto label_27dbf0;
        case 0x27dbf4u: goto label_27dbf4;
        case 0x27dbf8u: goto label_27dbf8;
        case 0x27dbfcu: goto label_27dbfc;
        case 0x27dc00u: goto label_27dc00;
        case 0x27dc04u: goto label_27dc04;
        case 0x27dc08u: goto label_27dc08;
        case 0x27dc0cu: goto label_27dc0c;
        case 0x27dc10u: goto label_27dc10;
        case 0x27dc14u: goto label_27dc14;
        case 0x27dc18u: goto label_27dc18;
        case 0x27dc1cu: goto label_27dc1c;
        case 0x27dc20u: goto label_27dc20;
        case 0x27dc24u: goto label_27dc24;
        case 0x27dc28u: goto label_27dc28;
        case 0x27dc2cu: goto label_27dc2c;
        case 0x27dc30u: goto label_27dc30;
        case 0x27dc34u: goto label_27dc34;
        case 0x27dc38u: goto label_27dc38;
        case 0x27dc3cu: goto label_27dc3c;
        case 0x27dc40u: goto label_27dc40;
        case 0x27dc44u: goto label_27dc44;
        case 0x27dc48u: goto label_27dc48;
        case 0x27dc4cu: goto label_27dc4c;
        case 0x27dc50u: goto label_27dc50;
        case 0x27dc54u: goto label_27dc54;
        case 0x27dc58u: goto label_27dc58;
        case 0x27dc5cu: goto label_27dc5c;
        case 0x27dc60u: goto label_27dc60;
        case 0x27dc64u: goto label_27dc64;
        case 0x27dc68u: goto label_27dc68;
        case 0x27dc6cu: goto label_27dc6c;
        case 0x27dc70u: goto label_27dc70;
        case 0x27dc74u: goto label_27dc74;
        case 0x27dc78u: goto label_27dc78;
        case 0x27dc7cu: goto label_27dc7c;
        case 0x27dc80u: goto label_27dc80;
        case 0x27dc84u: goto label_27dc84;
        case 0x27dc88u: goto label_27dc88;
        case 0x27dc8cu: goto label_27dc8c;
        case 0x27dc90u: goto label_27dc90;
        case 0x27dc94u: goto label_27dc94;
        case 0x27dc98u: goto label_27dc98;
        case 0x27dc9cu: goto label_27dc9c;
        case 0x27dca0u: goto label_27dca0;
        case 0x27dca4u: goto label_27dca4;
        case 0x27dca8u: goto label_27dca8;
        case 0x27dcacu: goto label_27dcac;
        case 0x27dcb0u: goto label_27dcb0;
        case 0x27dcb4u: goto label_27dcb4;
        case 0x27dcb8u: goto label_27dcb8;
        case 0x27dcbcu: goto label_27dcbc;
        case 0x27dcc0u: goto label_27dcc0;
        case 0x27dcc4u: goto label_27dcc4;
        case 0x27dcc8u: goto label_27dcc8;
        case 0x27dcccu: goto label_27dccc;
        case 0x27dcd0u: goto label_27dcd0;
        case 0x27dcd4u: goto label_27dcd4;
        case 0x27dcd8u: goto label_27dcd8;
        case 0x27dcdcu: goto label_27dcdc;
        case 0x27dce0u: goto label_27dce0;
        case 0x27dce4u: goto label_27dce4;
        case 0x27dce8u: goto label_27dce8;
        case 0x27dcecu: goto label_27dcec;
        case 0x27dcf0u: goto label_27dcf0;
        case 0x27dcf4u: goto label_27dcf4;
        case 0x27dcf8u: goto label_27dcf8;
        case 0x27dcfcu: goto label_27dcfc;
        case 0x27dd00u: goto label_27dd00;
        case 0x27dd04u: goto label_27dd04;
        case 0x27dd08u: goto label_27dd08;
        case 0x27dd0cu: goto label_27dd0c;
        case 0x27dd10u: goto label_27dd10;
        case 0x27dd14u: goto label_27dd14;
        case 0x27dd18u: goto label_27dd18;
        case 0x27dd1cu: goto label_27dd1c;
        case 0x27dd20u: goto label_27dd20;
        case 0x27dd24u: goto label_27dd24;
        case 0x27dd28u: goto label_27dd28;
        case 0x27dd2cu: goto label_27dd2c;
        case 0x27dd30u: goto label_27dd30;
        case 0x27dd34u: goto label_27dd34;
        case 0x27dd38u: goto label_27dd38;
        case 0x27dd3cu: goto label_27dd3c;
        case 0x27dd40u: goto label_27dd40;
        case 0x27dd44u: goto label_27dd44;
        case 0x27dd48u: goto label_27dd48;
        case 0x27dd4cu: goto label_27dd4c;
        case 0x27dd50u: goto label_27dd50;
        case 0x27dd54u: goto label_27dd54;
        case 0x27dd58u: goto label_27dd58;
        case 0x27dd5cu: goto label_27dd5c;
        case 0x27dd60u: goto label_27dd60;
        case 0x27dd64u: goto label_27dd64;
        case 0x27dd68u: goto label_27dd68;
        case 0x27dd6cu: goto label_27dd6c;
        case 0x27dd70u: goto label_27dd70;
        case 0x27dd74u: goto label_27dd74;
        case 0x27dd78u: goto label_27dd78;
        case 0x27dd7cu: goto label_27dd7c;
        case 0x27dd80u: goto label_27dd80;
        case 0x27dd84u: goto label_27dd84;
        case 0x27dd88u: goto label_27dd88;
        case 0x27dd8cu: goto label_27dd8c;
        case 0x27dd90u: goto label_27dd90;
        case 0x27dd94u: goto label_27dd94;
        case 0x27dd98u: goto label_27dd98;
        case 0x27dd9cu: goto label_27dd9c;
        case 0x27dda0u: goto label_27dda0;
        case 0x27dda4u: goto label_27dda4;
        case 0x27dda8u: goto label_27dda8;
        case 0x27ddacu: goto label_27ddac;
        case 0x27ddb0u: goto label_27ddb0;
        case 0x27ddb4u: goto label_27ddb4;
        case 0x27ddb8u: goto label_27ddb8;
        case 0x27ddbcu: goto label_27ddbc;
        case 0x27ddc0u: goto label_27ddc0;
        case 0x27ddc4u: goto label_27ddc4;
        case 0x27ddc8u: goto label_27ddc8;
        case 0x27ddccu: goto label_27ddcc;
        case 0x27ddd0u: goto label_27ddd0;
        case 0x27ddd4u: goto label_27ddd4;
        case 0x27ddd8u: goto label_27ddd8;
        case 0x27dddcu: goto label_27dddc;
        case 0x27dde0u: goto label_27dde0;
        case 0x27dde4u: goto label_27dde4;
        case 0x27dde8u: goto label_27dde8;
        case 0x27ddecu: goto label_27ddec;
        case 0x27ddf0u: goto label_27ddf0;
        case 0x27ddf4u: goto label_27ddf4;
        case 0x27ddf8u: goto label_27ddf8;
        case 0x27ddfcu: goto label_27ddfc;
        case 0x27de00u: goto label_27de00;
        case 0x27de04u: goto label_27de04;
        case 0x27de08u: goto label_27de08;
        case 0x27de0cu: goto label_27de0c;
        case 0x27de10u: goto label_27de10;
        case 0x27de14u: goto label_27de14;
        case 0x27de18u: goto label_27de18;
        case 0x27de1cu: goto label_27de1c;
        case 0x27de20u: goto label_27de20;
        case 0x27de24u: goto label_27de24;
        case 0x27de28u: goto label_27de28;
        case 0x27de2cu: goto label_27de2c;
        case 0x27de30u: goto label_27de30;
        case 0x27de34u: goto label_27de34;
        case 0x27de38u: goto label_27de38;
        case 0x27de3cu: goto label_27de3c;
        case 0x27de40u: goto label_27de40;
        case 0x27de44u: goto label_27de44;
        case 0x27de48u: goto label_27de48;
        case 0x27de4cu: goto label_27de4c;
        case 0x27de50u: goto label_27de50;
        case 0x27de54u: goto label_27de54;
        case 0x27de58u: goto label_27de58;
        case 0x27de5cu: goto label_27de5c;
        case 0x27de60u: goto label_27de60;
        case 0x27de64u: goto label_27de64;
        case 0x27de68u: goto label_27de68;
        case 0x27de6cu: goto label_27de6c;
        case 0x27de70u: goto label_27de70;
        case 0x27de74u: goto label_27de74;
        case 0x27de78u: goto label_27de78;
        case 0x27de7cu: goto label_27de7c;
        case 0x27de80u: goto label_27de80;
        case 0x27de84u: goto label_27de84;
        case 0x27de88u: goto label_27de88;
        case 0x27de8cu: goto label_27de8c;
        case 0x27de90u: goto label_27de90;
        case 0x27de94u: goto label_27de94;
        case 0x27de98u: goto label_27de98;
        case 0x27de9cu: goto label_27de9c;
        case 0x27dea0u: goto label_27dea0;
        case 0x27dea4u: goto label_27dea4;
        case 0x27dea8u: goto label_27dea8;
        case 0x27deacu: goto label_27deac;
        case 0x27deb0u: goto label_27deb0;
        case 0x27deb4u: goto label_27deb4;
        case 0x27deb8u: goto label_27deb8;
        case 0x27debcu: goto label_27debc;
        case 0x27dec0u: goto label_27dec0;
        case 0x27dec4u: goto label_27dec4;
        case 0x27dec8u: goto label_27dec8;
        case 0x27deccu: goto label_27decc;
        case 0x27ded0u: goto label_27ded0;
        case 0x27ded4u: goto label_27ded4;
        case 0x27ded8u: goto label_27ded8;
        case 0x27dedcu: goto label_27dedc;
        case 0x27dee0u: goto label_27dee0;
        case 0x27dee4u: goto label_27dee4;
        case 0x27dee8u: goto label_27dee8;
        case 0x27deecu: goto label_27deec;
        case 0x27def0u: goto label_27def0;
        case 0x27def4u: goto label_27def4;
        case 0x27def8u: goto label_27def8;
        case 0x27defcu: goto label_27defc;
        case 0x27df00u: goto label_27df00;
        case 0x27df04u: goto label_27df04;
        case 0x27df08u: goto label_27df08;
        case 0x27df0cu: goto label_27df0c;
        case 0x27df10u: goto label_27df10;
        case 0x27df14u: goto label_27df14;
        case 0x27df18u: goto label_27df18;
        case 0x27df1cu: goto label_27df1c;
        case 0x27df20u: goto label_27df20;
        case 0x27df24u: goto label_27df24;
        case 0x27df28u: goto label_27df28;
        case 0x27df2cu: goto label_27df2c;
        case 0x27df30u: goto label_27df30;
        case 0x27df34u: goto label_27df34;
        case 0x27df38u: goto label_27df38;
        case 0x27df3cu: goto label_27df3c;
        case 0x27df40u: goto label_27df40;
        case 0x27df44u: goto label_27df44;
        case 0x27df48u: goto label_27df48;
        case 0x27df4cu: goto label_27df4c;
        case 0x27df50u: goto label_27df50;
        case 0x27df54u: goto label_27df54;
        case 0x27df58u: goto label_27df58;
        case 0x27df5cu: goto label_27df5c;
        case 0x27df60u: goto label_27df60;
        case 0x27df64u: goto label_27df64;
        case 0x27df68u: goto label_27df68;
        case 0x27df6cu: goto label_27df6c;
        case 0x27df70u: goto label_27df70;
        case 0x27df74u: goto label_27df74;
        case 0x27df78u: goto label_27df78;
        case 0x27df7cu: goto label_27df7c;
        case 0x27df80u: goto label_27df80;
        case 0x27df84u: goto label_27df84;
        case 0x27df88u: goto label_27df88;
        case 0x27df8cu: goto label_27df8c;
        case 0x27df90u: goto label_27df90;
        case 0x27df94u: goto label_27df94;
        case 0x27df98u: goto label_27df98;
        case 0x27df9cu: goto label_27df9c;
        case 0x27dfa0u: goto label_27dfa0;
        case 0x27dfa4u: goto label_27dfa4;
        case 0x27dfa8u: goto label_27dfa8;
        case 0x27dfacu: goto label_27dfac;
        case 0x27dfb0u: goto label_27dfb0;
        case 0x27dfb4u: goto label_27dfb4;
        case 0x27dfb8u: goto label_27dfb8;
        case 0x27dfbcu: goto label_27dfbc;
        case 0x27dfc0u: goto label_27dfc0;
        case 0x27dfc4u: goto label_27dfc4;
        case 0x27dfc8u: goto label_27dfc8;
        case 0x27dfccu: goto label_27dfcc;
        case 0x27dfd0u: goto label_27dfd0;
        case 0x27dfd4u: goto label_27dfd4;
        case 0x27dfd8u: goto label_27dfd8;
        case 0x27dfdcu: goto label_27dfdc;
        case 0x27dfe0u: goto label_27dfe0;
        case 0x27dfe4u: goto label_27dfe4;
        case 0x27dfe8u: goto label_27dfe8;
        case 0x27dfecu: goto label_27dfec;
        case 0x27dff0u: goto label_27dff0;
        case 0x27dff4u: goto label_27dff4;
        case 0x27dff8u: goto label_27dff8;
        case 0x27dffcu: goto label_27dffc;
        case 0x27e000u: goto label_27e000;
        case 0x27e004u: goto label_27e004;
        case 0x27e008u: goto label_27e008;
        case 0x27e00cu: goto label_27e00c;
        case 0x27e010u: goto label_27e010;
        case 0x27e014u: goto label_27e014;
        case 0x27e018u: goto label_27e018;
        case 0x27e01cu: goto label_27e01c;
        case 0x27e020u: goto label_27e020;
        case 0x27e024u: goto label_27e024;
        case 0x27e028u: goto label_27e028;
        case 0x27e02cu: goto label_27e02c;
        case 0x27e030u: goto label_27e030;
        case 0x27e034u: goto label_27e034;
        case 0x27e038u: goto label_27e038;
        case 0x27e03cu: goto label_27e03c;
        case 0x27e040u: goto label_27e040;
        case 0x27e044u: goto label_27e044;
        case 0x27e048u: goto label_27e048;
        case 0x27e04cu: goto label_27e04c;
        case 0x27e050u: goto label_27e050;
        case 0x27e054u: goto label_27e054;
        case 0x27e058u: goto label_27e058;
        case 0x27e05cu: goto label_27e05c;
        case 0x27e060u: goto label_27e060;
        case 0x27e064u: goto label_27e064;
        case 0x27e068u: goto label_27e068;
        case 0x27e06cu: goto label_27e06c;
        case 0x27e070u: goto label_27e070;
        case 0x27e074u: goto label_27e074;
        case 0x27e078u: goto label_27e078;
        case 0x27e07cu: goto label_27e07c;
        case 0x27e080u: goto label_27e080;
        case 0x27e084u: goto label_27e084;
        case 0x27e088u: goto label_27e088;
        case 0x27e08cu: goto label_27e08c;
        case 0x27e090u: goto label_27e090;
        case 0x27e094u: goto label_27e094;
        case 0x27e098u: goto label_27e098;
        case 0x27e09cu: goto label_27e09c;
        case 0x27e0a0u: goto label_27e0a0;
        case 0x27e0a4u: goto label_27e0a4;
        case 0x27e0a8u: goto label_27e0a8;
        case 0x27e0acu: goto label_27e0ac;
        case 0x27e0b0u: goto label_27e0b0;
        case 0x27e0b4u: goto label_27e0b4;
        case 0x27e0b8u: goto label_27e0b8;
        case 0x27e0bcu: goto label_27e0bc;
        case 0x27e0c0u: goto label_27e0c0;
        case 0x27e0c4u: goto label_27e0c4;
        case 0x27e0c8u: goto label_27e0c8;
        case 0x27e0ccu: goto label_27e0cc;
        case 0x27e0d0u: goto label_27e0d0;
        case 0x27e0d4u: goto label_27e0d4;
        case 0x27e0d8u: goto label_27e0d8;
        case 0x27e0dcu: goto label_27e0dc;
        case 0x27e0e0u: goto label_27e0e0;
        case 0x27e0e4u: goto label_27e0e4;
        case 0x27e0e8u: goto label_27e0e8;
        case 0x27e0ecu: goto label_27e0ec;
        case 0x27e0f0u: goto label_27e0f0;
        case 0x27e0f4u: goto label_27e0f4;
        case 0x27e0f8u: goto label_27e0f8;
        case 0x27e0fcu: goto label_27e0fc;
        case 0x27e100u: goto label_27e100;
        case 0x27e104u: goto label_27e104;
        case 0x27e108u: goto label_27e108;
        case 0x27e10cu: goto label_27e10c;
        case 0x27e110u: goto label_27e110;
        case 0x27e114u: goto label_27e114;
        case 0x27e118u: goto label_27e118;
        case 0x27e11cu: goto label_27e11c;
        case 0x27e120u: goto label_27e120;
        case 0x27e124u: goto label_27e124;
        case 0x27e128u: goto label_27e128;
        case 0x27e12cu: goto label_27e12c;
        case 0x27e130u: goto label_27e130;
        case 0x27e134u: goto label_27e134;
        case 0x27e138u: goto label_27e138;
        case 0x27e13cu: goto label_27e13c;
        case 0x27e140u: goto label_27e140;
        case 0x27e144u: goto label_27e144;
        case 0x27e148u: goto label_27e148;
        case 0x27e14cu: goto label_27e14c;
        case 0x27e150u: goto label_27e150;
        case 0x27e154u: goto label_27e154;
        case 0x27e158u: goto label_27e158;
        case 0x27e15cu: goto label_27e15c;
        case 0x27e160u: goto label_27e160;
        case 0x27e164u: goto label_27e164;
        case 0x27e168u: goto label_27e168;
        case 0x27e16cu: goto label_27e16c;
        case 0x27e170u: goto label_27e170;
        case 0x27e174u: goto label_27e174;
        case 0x27e178u: goto label_27e178;
        case 0x27e17cu: goto label_27e17c;
        case 0x27e180u: goto label_27e180;
        case 0x27e184u: goto label_27e184;
        case 0x27e188u: goto label_27e188;
        case 0x27e18cu: goto label_27e18c;
        case 0x27e190u: goto label_27e190;
        case 0x27e194u: goto label_27e194;
        case 0x27e198u: goto label_27e198;
        case 0x27e19cu: goto label_27e19c;
        case 0x27e1a0u: goto label_27e1a0;
        case 0x27e1a4u: goto label_27e1a4;
        case 0x27e1a8u: goto label_27e1a8;
        case 0x27e1acu: goto label_27e1ac;
        case 0x27e1b0u: goto label_27e1b0;
        case 0x27e1b4u: goto label_27e1b4;
        case 0x27e1b8u: goto label_27e1b8;
        case 0x27e1bcu: goto label_27e1bc;
        case 0x27e1c0u: goto label_27e1c0;
        case 0x27e1c4u: goto label_27e1c4;
        case 0x27e1c8u: goto label_27e1c8;
        case 0x27e1ccu: goto label_27e1cc;
        case 0x27e1d0u: goto label_27e1d0;
        case 0x27e1d4u: goto label_27e1d4;
        case 0x27e1d8u: goto label_27e1d8;
        case 0x27e1dcu: goto label_27e1dc;
        case 0x27e1e0u: goto label_27e1e0;
        case 0x27e1e4u: goto label_27e1e4;
        case 0x27e1e8u: goto label_27e1e8;
        case 0x27e1ecu: goto label_27e1ec;
        case 0x27e1f0u: goto label_27e1f0;
        case 0x27e1f4u: goto label_27e1f4;
        case 0x27e1f8u: goto label_27e1f8;
        case 0x27e1fcu: goto label_27e1fc;
        case 0x27e200u: goto label_27e200;
        case 0x27e204u: goto label_27e204;
        case 0x27e208u: goto label_27e208;
        case 0x27e20cu: goto label_27e20c;
        case 0x27e210u: goto label_27e210;
        case 0x27e214u: goto label_27e214;
        case 0x27e218u: goto label_27e218;
        case 0x27e21cu: goto label_27e21c;
        case 0x27e220u: goto label_27e220;
        case 0x27e224u: goto label_27e224;
        case 0x27e228u: goto label_27e228;
        case 0x27e22cu: goto label_27e22c;
        case 0x27e230u: goto label_27e230;
        case 0x27e234u: goto label_27e234;
        case 0x27e238u: goto label_27e238;
        case 0x27e23cu: goto label_27e23c;
        case 0x27e240u: goto label_27e240;
        case 0x27e244u: goto label_27e244;
        case 0x27e248u: goto label_27e248;
        case 0x27e24cu: goto label_27e24c;
        case 0x27e250u: goto label_27e250;
        case 0x27e254u: goto label_27e254;
        case 0x27e258u: goto label_27e258;
        case 0x27e25cu: goto label_27e25c;
        case 0x27e260u: goto label_27e260;
        case 0x27e264u: goto label_27e264;
        case 0x27e268u: goto label_27e268;
        case 0x27e26cu: goto label_27e26c;
        case 0x27e270u: goto label_27e270;
        case 0x27e274u: goto label_27e274;
        case 0x27e278u: goto label_27e278;
        case 0x27e27cu: goto label_27e27c;
        case 0x27e280u: goto label_27e280;
        case 0x27e284u: goto label_27e284;
        case 0x27e288u: goto label_27e288;
        case 0x27e28cu: goto label_27e28c;
        case 0x27e290u: goto label_27e290;
        case 0x27e294u: goto label_27e294;
        case 0x27e298u: goto label_27e298;
        case 0x27e29cu: goto label_27e29c;
        case 0x27e2a0u: goto label_27e2a0;
        case 0x27e2a4u: goto label_27e2a4;
        case 0x27e2a8u: goto label_27e2a8;
        case 0x27e2acu: goto label_27e2ac;
        case 0x27e2b0u: goto label_27e2b0;
        case 0x27e2b4u: goto label_27e2b4;
        case 0x27e2b8u: goto label_27e2b8;
        case 0x27e2bcu: goto label_27e2bc;
        case 0x27e2c0u: goto label_27e2c0;
        case 0x27e2c4u: goto label_27e2c4;
        case 0x27e2c8u: goto label_27e2c8;
        case 0x27e2ccu: goto label_27e2cc;
        case 0x27e2d0u: goto label_27e2d0;
        case 0x27e2d4u: goto label_27e2d4;
        case 0x27e2d8u: goto label_27e2d8;
        case 0x27e2dcu: goto label_27e2dc;
        case 0x27e2e0u: goto label_27e2e0;
        case 0x27e2e4u: goto label_27e2e4;
        case 0x27e2e8u: goto label_27e2e8;
        case 0x27e2ecu: goto label_27e2ec;
        case 0x27e2f0u: goto label_27e2f0;
        case 0x27e2f4u: goto label_27e2f4;
        case 0x27e2f8u: goto label_27e2f8;
        case 0x27e2fcu: goto label_27e2fc;
        case 0x27e300u: goto label_27e300;
        case 0x27e304u: goto label_27e304;
        case 0x27e308u: goto label_27e308;
        case 0x27e30cu: goto label_27e30c;
        case 0x27e310u: goto label_27e310;
        case 0x27e314u: goto label_27e314;
        case 0x27e318u: goto label_27e318;
        case 0x27e31cu: goto label_27e31c;
        case 0x27e320u: goto label_27e320;
        case 0x27e324u: goto label_27e324;
        case 0x27e328u: goto label_27e328;
        case 0x27e32cu: goto label_27e32c;
        case 0x27e330u: goto label_27e330;
        case 0x27e334u: goto label_27e334;
        case 0x27e338u: goto label_27e338;
        case 0x27e33cu: goto label_27e33c;
        case 0x27e340u: goto label_27e340;
        case 0x27e344u: goto label_27e344;
        case 0x27e348u: goto label_27e348;
        case 0x27e34cu: goto label_27e34c;
        case 0x27e350u: goto label_27e350;
        case 0x27e354u: goto label_27e354;
        case 0x27e358u: goto label_27e358;
        case 0x27e35cu: goto label_27e35c;
        case 0x27e360u: goto label_27e360;
        case 0x27e364u: goto label_27e364;
        case 0x27e368u: goto label_27e368;
        case 0x27e36cu: goto label_27e36c;
        case 0x27e370u: goto label_27e370;
        case 0x27e374u: goto label_27e374;
        case 0x27e378u: goto label_27e378;
        case 0x27e37cu: goto label_27e37c;
        case 0x27e380u: goto label_27e380;
        case 0x27e384u: goto label_27e384;
        case 0x27e388u: goto label_27e388;
        case 0x27e38cu: goto label_27e38c;
        default: break;
    }

    ctx->pc = 0x27d560u;

label_27d560:
    // 0x27d560: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27d560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_27d564:
    // 0x27d564: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x27d564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_27d568:
    // 0x27d568: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27d568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_27d56c:
    // 0x27d56c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27d56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_27d570:
    // 0x27d570: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27d570u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27d574:
    // 0x27d574: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27d574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_27d578:
    // 0x27d578: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x27d578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27d57c:
    // 0x27d57c: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x27d57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_27d580:
    // 0x27d580: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x27d580u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_27d584:
    // 0x27d584: 0x1020004a  beqz        $at, . + 4 + (0x4A << 2)
label_27d588:
    if (ctx->pc == 0x27D588u) {
        ctx->pc = 0x27D588u;
            // 0x27d588: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27D58Cu;
        goto label_27d58c;
    }
    ctx->pc = 0x27D584u;
    {
        const bool branch_taken_0x27d584 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D584u;
            // 0x27d588: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d584) {
            ctx->pc = 0x27D6B0u;
            goto label_27d6b0;
        }
    }
    ctx->pc = 0x27D58Cu;
label_27d58c:
    // 0x27d58c: 0x0  nop
    ctx->pc = 0x27d58cu;
    // NOP
label_27d590:
    // 0x27d590: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x27d590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_27d594:
    // 0x27d594: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x27d594u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_27d598:
    // 0x27d598: 0x644021  addu        $t0, $v1, $a0
    ctx->pc = 0x27d598u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_27d59c:
    // 0x27d59c: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x27d59cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_27d5a0:
    // 0x27d5a0: 0x10910005  beq         $a0, $s1, . + 4 + (0x5 << 2)
label_27d5a4:
    if (ctx->pc == 0x27D5A4u) {
        ctx->pc = 0x27D5A8u;
        goto label_27d5a8;
    }
    ctx->pc = 0x27D5A0u;
    {
        const bool branch_taken_0x27d5a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        if (branch_taken_0x27d5a0) {
            ctx->pc = 0x27D5B8u;
            goto label_27d5b8;
        }
    }
    ctx->pc = 0x27D5A8u;
label_27d5a8:
    // 0x27d5a8: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x27d5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_27d5ac:
    // 0x27d5ac: 0x1471003a  bne         $v1, $s1, . + 4 + (0x3A << 2)
label_27d5b0:
    if (ctx->pc == 0x27D5B0u) {
        ctx->pc = 0x27D5B4u;
        goto label_27d5b4;
    }
    ctx->pc = 0x27D5ACu;
    {
        const bool branch_taken_0x27d5ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x27d5ac) {
            ctx->pc = 0x27D698u;
            goto label_27d698;
        }
    }
    ctx->pc = 0x27D5B4u;
label_27d5b4:
    // 0x27d5b4: 0x0  nop
    ctx->pc = 0x27d5b4u;
    // NOP
label_27d5b8:
    // 0x27d5b8: 0x908200a8  lbu         $v0, 0xA8($a0)
    ctx->pc = 0x27d5b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 168)));
label_27d5bc:
    // 0x27d5bc: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x27d5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_27d5c0:
    // 0x27d5c0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x27d5c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_27d5c4:
    // 0x27d5c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_27d5c8:
    if (ctx->pc == 0x27D5C8u) {
        ctx->pc = 0x27D5C8u;
            // 0x27d5c8: 0x8d030008  lw          $v1, 0x8($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
        ctx->pc = 0x27D5CCu;
        goto label_27d5cc;
    }
    ctx->pc = 0x27D5C4u;
    {
        const bool branch_taken_0x27d5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D5C4u;
            // 0x27d5c8: 0x8d030008  lw          $v1, 0x8($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d5c4) {
            ctx->pc = 0x27D5D4u;
            goto label_27d5d4;
        }
    }
    ctx->pc = 0x27D5CCu;
label_27d5cc:
    // 0x27d5cc: 0x10000002  b           . + 4 + (0x2 << 2)
label_27d5d0:
    if (ctx->pc == 0x27D5D0u) {
        ctx->pc = 0x27D5D0u;
            // 0x27d5d0: 0x8c670094  lw          $a3, 0x94($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
        ctx->pc = 0x27D5D4u;
        goto label_27d5d4;
    }
    ctx->pc = 0x27D5CCu;
    {
        const bool branch_taken_0x27d5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D5CCu;
            // 0x27d5d0: 0x8c670094  lw          $a3, 0x94($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d5cc) {
            ctx->pc = 0x27D5D8u;
            goto label_27d5d8;
        }
    }
    ctx->pc = 0x27D5D4u;
label_27d5d4:
    // 0x27d5d4: 0x8c870094  lw          $a3, 0x94($a0)
    ctx->pc = 0x27d5d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
label_27d5d8:
    // 0x27d5d8: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x27d5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_27d5dc:
    // 0x27d5dc: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x27d5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_27d5e0:
    // 0x27d5e0: 0x8d040018  lw          $a0, 0x18($t0)
    ctx->pc = 0x27d5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_27d5e4:
    // 0x27d5e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27d5e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27d5e8:
    // 0x27d5e8: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x27d5e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_27d5ec:
    // 0x27d5ec: 0x320f809  jalr        $t9
label_27d5f0:
    if (ctx->pc == 0x27D5F0u) {
        ctx->pc = 0x27D5F0u;
            // 0x27d5f0: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->pc = 0x27D5F4u;
        goto label_27d5f4;
    }
    ctx->pc = 0x27D5ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27D5F4u);
        ctx->pc = 0x27D5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D5ECu;
            // 0x27d5f0: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27D5F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27D5F4u; }
            if (ctx->pc != 0x27D5F4u) { return; }
        }
        }
    }
    ctx->pc = 0x27D5F4u;
label_27d5f4:
    // 0x27d5f4: 0x8e440034  lw          $a0, 0x34($s2)
    ctx->pc = 0x27d5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_27d5f8:
    // 0x27d5f8: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x27d5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_27d5fc:
    // 0x27d5fc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x27d5fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_27d600:
    // 0x27d600: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x27d600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_27d604:
    // 0x27d604: 0xae440034  sw          $a0, 0x34($s2)
    ctx->pc = 0x27d604u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 4));
label_27d608:
    // 0x27d608: 0x8e450030  lw          $a1, 0x30($s2)
    ctx->pc = 0x27d608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_27d60c:
    // 0x27d60c: 0x8e440034  lw          $a0, 0x34($s2)
    ctx->pc = 0x27d60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_27d610:
    // 0x27d610: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x27d610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_27d614:
    // 0x27d614: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x27d614u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_27d618:
    // 0x27d618: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x27d618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_27d61c:
    // 0x27d61c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x27d61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d620:
    // 0x27d620: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x27d620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_27d624:
    // 0x27d624: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x27d624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27d628:
    // 0x27d628: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x27d628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d62c:
    // 0x27d62c: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x27d62cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_27d630:
    // 0x27d630: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x27d630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_27d634:
    // 0x27d634: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x27d634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d638:
    // 0x27d638: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x27d638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_27d63c:
    // 0x27d63c: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x27d63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27d640:
    // 0x27d640: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x27d640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d644:
    // 0x27d644: 0xe4c10010  swc1        $f1, 0x10($a2)
    ctx->pc = 0x27d644u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
label_27d648:
    // 0x27d648: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x27d648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
label_27d64c:
    // 0x27d64c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x27d64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_27d650:
    // 0x27d650: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x27d650u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
label_27d654:
    // 0x27d654: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x27d654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d658:
    // 0x27d658: 0xe4c00020  swc1        $f0, 0x20($a2)
    ctx->pc = 0x27d658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
label_27d65c:
    // 0x27d65c: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x27d65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d660:
    // 0x27d660: 0xe4c00024  swc1        $f0, 0x24($a2)
    ctx->pc = 0x27d660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
label_27d664:
    // 0x27d664: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x27d664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d668:
    // 0x27d668: 0xe4c00028  swc1        $f0, 0x28($a2)
    ctx->pc = 0x27d668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
label_27d66c:
    // 0x27d66c: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x27d66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d670:
    // 0x27d670: 0xe4c0002c  swc1        $f0, 0x2C($a2)
    ctx->pc = 0x27d670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 44), bits); }
label_27d674:
    // 0x27d674: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x27d674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d678:
    // 0x27d678: 0xe4c00030  swc1        $f0, 0x30($a2)
    ctx->pc = 0x27d678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 48), bits); }
label_27d67c:
    // 0x27d67c: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x27d67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d680:
    // 0x27d680: 0xe4c00034  swc1        $f0, 0x34($a2)
    ctx->pc = 0x27d680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 52), bits); }
label_27d684:
    // 0x27d684: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x27d684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d688:
    // 0x27d688: 0xe4c00038  swc1        $f0, 0x38($a2)
    ctx->pc = 0x27d688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 56), bits); }
label_27d68c:
    // 0x27d68c: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x27d68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d690:
    // 0x27d690: 0xe4c0003c  swc1        $f0, 0x3C($a2)
    ctx->pc = 0x27d690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 60), bits); }
label_27d694:
    // 0x27d694: 0x0  nop
    ctx->pc = 0x27d694u;
    // NOP
label_27d698:
    // 0x27d698: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x27d698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_27d69c:
    // 0x27d69c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27d69cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_27d6a0:
    // 0x27d6a0: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x27d6a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_27d6a4:
    // 0x27d6a4: 0x1460ffba  bnez        $v1, . + 4 + (-0x46 << 2)
label_27d6a8:
    if (ctx->pc == 0x27D6A8u) {
        ctx->pc = 0x27D6ACu;
        goto label_27d6ac;
    }
    ctx->pc = 0x27D6A4u;
    {
        const bool branch_taken_0x27d6a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d6a4) {
            ctx->pc = 0x27D590u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27d590;
        }
    }
    ctx->pc = 0x27D6ACu;
label_27d6ac:
    // 0x27d6ac: 0x0  nop
    ctx->pc = 0x27d6acu;
    // NOP
label_27d6b0:
    // 0x27d6b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x27d6b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_27d6b4:
    // 0x27d6b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27d6b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27d6b8:
    // 0x27d6b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27d6b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27d6bc:
    // 0x27d6bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27d6bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_27d6c0:
    // 0x27d6c0: 0x3e00008  jr          $ra
label_27d6c4:
    if (ctx->pc == 0x27D6C4u) {
        ctx->pc = 0x27D6C4u;
            // 0x27d6c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x27D6C8u;
        goto label_27d6c8;
    }
    ctx->pc = 0x27D6C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D6C0u;
            // 0x27d6c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27D6C8u;
label_27d6c8:
    // 0x27d6c8: 0x0  nop
    ctx->pc = 0x27d6c8u;
    // NOP
label_27d6cc:
    // 0x27d6cc: 0x0  nop
    ctx->pc = 0x27d6ccu;
    // NOP
label_27d6d0:
    // 0x27d6d0: 0x27bdcb60  addiu       $sp, $sp, -0x34A0
    ctx->pc = 0x27d6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294953824));
label_27d6d4:
    // 0x27d6d4: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x27d6d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_27d6d8:
    // 0x27d6d8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x27d6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_27d6dc:
    // 0x27d6dc: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x27d6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_27d6e0:
    // 0x27d6e0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x27d6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_27d6e4:
    // 0x27d6e4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x27d6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_27d6e8:
    // 0x27d6e8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x27d6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_27d6ec:
    // 0x27d6ec: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x27d6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_27d6f0:
    // 0x27d6f0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x27d6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_27d6f4:
    // 0x27d6f4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x27d6f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27d6f8:
    // 0x27d6f8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x27d6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_27d6fc:
    // 0x27d6fc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x27d6fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_27d700:
    // 0x27d700: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x27d700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_27d704:
    // 0x27d704: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27d704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_27d708:
    // 0x27d708: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x27d708u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_27d70c:
    // 0x27d70c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x27d70cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27d710:
    // 0x27d710: 0x8022e9f0  lb          $v0, -0x1610($at)
    ctx->pc = 0x27d710u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294961648)));
label_27d714:
    // 0x27d714: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_27d718:
    if (ctx->pc == 0x27D718u) {
        ctx->pc = 0x27D718u;
            // 0x27d718: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x27D71Cu;
        goto label_27d71c;
    }
    ctx->pc = 0x27D714u;
    {
        const bool branch_taken_0x27d714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D714u;
            // 0x27d718: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d714) {
            ctx->pc = 0x27D740u;
            goto label_27d740;
        }
    }
    ctx->pc = 0x27D71Cu;
label_27d71c:
    // 0x27d71c: 0xc086406  jal         func_219018
label_27d720:
    if (ctx->pc == 0x27D720u) {
        ctx->pc = 0x27D720u;
            // 0x27d720: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x27D724u;
        goto label_27d724;
    }
    ctx->pc = 0x27D71Cu;
    SET_GPR_U32(ctx, 31, 0x27D724u);
    ctx->pc = 0x27D720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D71Cu;
            // 0x27d720: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x219018u;
    if (runtime->hasFunction(0x219018u)) {
        auto targetFn = runtime->lookupFunction(0x219018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D724u; }
        if (ctx->pc != 0x27D724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00219018_0x219018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D724u; }
        if (ctx->pc != 0x27D724u) { return; }
    }
    ctx->pc = 0x27D724u;
label_27d724:
    // 0x27d724: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x27d724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_27d728:
    // 0x27d728: 0xa022e9f0  sb          $v0, -0x1610($at)
    ctx->pc = 0x27d728u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294961648), (uint8_t)GPR_U32(ctx, 2));
label_27d72c:
    // 0x27d72c: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x27d72cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_27d730:
    // 0x27d730: 0x8023e9f0  lb          $v1, -0x1610($at)
    ctx->pc = 0x27d730u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294961648)));
label_27d734:
    // 0x27d734: 0x10600308  beqz        $v1, . + 4 + (0x308 << 2)
label_27d738:
    if (ctx->pc == 0x27D738u) {
        ctx->pc = 0x27D73Cu;
        goto label_27d73c;
    }
    ctx->pc = 0x27D734u;
    {
        const bool branch_taken_0x27d734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d734) {
            ctx->pc = 0x27E358u;
            goto label_27e358;
        }
    }
    ctx->pc = 0x27D73Cu;
label_27d73c:
    // 0x27d73c: 0x0  nop
    ctx->pc = 0x27d73cu;
    // NOP
label_27d740:
    // 0x27d740: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27d740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27d744:
    // 0x27d744: 0xafa23450  sw          $v0, 0x3450($sp)
    ctx->pc = 0x27d744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 13392), GPR_U32(ctx, 2));
label_27d748:
    // 0x27d748: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x27d748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_27d74c:
    // 0x27d74c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x27d74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_27d750:
    // 0x27d750: 0xafa03468  sw          $zero, 0x3468($sp)
    ctx->pc = 0x27d750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 13416), GPR_U32(ctx, 0));
label_27d754:
    // 0x27d754: 0xafa0346c  sw          $zero, 0x346C($sp)
    ctx->pc = 0x27d754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 13420), GPR_U32(ctx, 0));
label_27d758:
    // 0x27d758: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27d758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27d75c:
    // 0x27d75c: 0xafa33454  sw          $v1, 0x3454($sp)
    ctx->pc = 0x27d75cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 13396), GPR_U32(ctx, 3));
label_27d760:
    // 0x27d760: 0x26860030  addiu       $a2, $s4, 0x30
    ctx->pc = 0x27d760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_27d764:
    // 0x27d764: 0xafa33458  sw          $v1, 0x3458($sp)
    ctx->pc = 0x27d764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 13400), GPR_U32(ctx, 3));
label_27d768:
    // 0x27d768: 0xafa3345c  sw          $v1, 0x345C($sp)
    ctx->pc = 0x27d768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 13404), GPR_U32(ctx, 3));
label_27d76c:
    // 0x27d76c: 0xafa23460  sw          $v0, 0x3460($sp)
    ctx->pc = 0x27d76cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 13408), GPR_U32(ctx, 2));
label_27d770:
    // 0x27d770: 0xafa23464  sw          $v0, 0x3464($sp)
    ctx->pc = 0x27d770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 13412), GPR_U32(ctx, 2));
label_27d774:
    // 0x27d774: 0x8e84003c  lw          $a0, 0x3C($s4)
    ctx->pc = 0x27d774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_27d778:
    // 0x27d778: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27d778u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27d77c:
    // 0x27d77c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x27d77cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_27d780:
    // 0x27d780: 0x320f809  jalr        $t9
label_27d784:
    if (ctx->pc == 0x27D784u) {
        ctx->pc = 0x27D784u;
            // 0x27d784: 0x27a73450  addiu       $a3, $sp, 0x3450 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 13392));
        ctx->pc = 0x27D788u;
        goto label_27d788;
    }
    ctx->pc = 0x27D780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27D788u);
        ctx->pc = 0x27D784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D780u;
            // 0x27d784: 0x27a73450  addiu       $a3, $sp, 0x3450 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 13392));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27D788u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27D788u; }
            if (ctx->pc != 0x27D788u) { return; }
        }
        }
    }
    ctx->pc = 0x27D788u;
label_27d788:
    // 0x27d788: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27d788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27d78c:
    // 0x27d78c: 0x104302f2  beq         $v0, $v1, . + 4 + (0x2F2 << 2)
label_27d790:
    if (ctx->pc == 0x27D790u) {
        ctx->pc = 0x27D790u;
            // 0x27d790: 0x27a53364  addiu       $a1, $sp, 0x3364 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 13156));
        ctx->pc = 0x27D794u;
        goto label_27d794;
    }
    ctx->pc = 0x27D78Cu;
    {
        const bool branch_taken_0x27d78c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x27D790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D78Cu;
            // 0x27d790: 0x27a53364  addiu       $a1, $sp, 0x3364 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 13156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d78c) {
            ctx->pc = 0x27E358u;
            goto label_27e358;
        }
    }
    ctx->pc = 0x27D794u;
label_27d794:
    // 0x27d794: 0x27a23424  addiu       $v0, $sp, 0x3424
    ctx->pc = 0x27d794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 13348));
label_27d798:
    // 0x27d798: 0x24a4001c  addiu       $a0, $a1, 0x1C
    ctx->pc = 0x27d798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
label_27d79c:
    // 0x27d79c: 0x24a30020  addiu       $v1, $a1, 0x20
    ctx->pc = 0x27d79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_27d7a0:
    // 0x27d7a0: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x27d7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_27d7a4:
    // 0x27d7a4: 0x0  nop
    ctx->pc = 0x27d7a4u;
    // NOP
label_27d7a8:
    // 0x27d7a8: 0x0  nop
    ctx->pc = 0x27d7a8u;
    // NOP
label_27d7ac:
    // 0x27d7ac: 0x0  nop
    ctx->pc = 0x27d7acu;
    // NOP
label_27d7b0:
    // 0x27d7b0: 0x0  nop
    ctx->pc = 0x27d7b0u;
    // NOP
label_27d7b4:
    // 0x27d7b4: 0x1483fffa  bne         $a0, $v1, . + 4 + (-0x6 << 2)
label_27d7b8:
    if (ctx->pc == 0x27D7B8u) {
        ctx->pc = 0x27D7BCu;
        goto label_27d7bc;
    }
    ctx->pc = 0x27D7B4u;
    {
        const bool branch_taken_0x27d7b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x27d7b4) {
            ctx->pc = 0x27D7A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27d7a0;
        }
    }
    ctx->pc = 0x27D7BCu;
label_27d7bc:
    // 0x27d7bc: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x27d7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_27d7c0:
    // 0x27d7c0: 0x14a2fff5  bne         $a1, $v0, . + 4 + (-0xB << 2)
label_27d7c4:
    if (ctx->pc == 0x27D7C4u) {
        ctx->pc = 0x27D7C8u;
        goto label_27d7c8;
    }
    ctx->pc = 0x27D7C0u;
    {
        const bool branch_taken_0x27d7c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x27d7c0) {
            ctx->pc = 0x27D798u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27d798;
        }
    }
    ctx->pc = 0x27D7C8u;
label_27d7c8:
    // 0x27d7c8: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x27d7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27d7cc:
    // 0x27d7cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27d7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_27d7d0:
    // 0x27d7d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27d7d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27d7d4:
    // 0x27d7d4: 0x26060214  addiu       $a2, $s0, 0x214
    ctx->pc = 0x27d7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 532));
label_27d7d8:
    // 0x27d7d8: 0x27a53364  addiu       $a1, $sp, 0x3364
    ctx->pc = 0x27d7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 13156));
label_27d7dc:
    // 0x27d7dc: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x27d7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_27d7e0:
    // 0x27d7e0: 0xe7a13440  swc1        $f1, 0x3440($sp)
    ctx->pc = 0x27d7e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13376), bits); }
label_27d7e4:
    // 0x27d7e4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x27d7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_27d7e8:
    // 0x27d7e8: 0xc7a23440  lwc1        $f2, 0x3440($sp)
    ctx->pc = 0x27d7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 13376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27d7ec:
    // 0x27d7ec: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x27d7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27d7f0:
    // 0x27d7f0: 0xe7a13444  swc1        $f1, 0x3444($sp)
    ctx->pc = 0x27d7f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13380), bits); }
label_27d7f4:
    // 0x27d7f4: 0x46000846  mov.s       $f1, $f1
    ctx->pc = 0x27d7f4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[1]);
label_27d7f8:
    // 0x27d7f8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x27d7f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_27d7fc:
    // 0x27d7fc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x27d7fcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_27d800:
    // 0x27d800: 0xe7a13448  swc1        $f1, 0x3448($sp)
    ctx->pc = 0x27d800u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13384), bits); }
label_27d804:
    // 0x27d804: 0xe7a0344c  swc1        $f0, 0x344C($sp)
    ctx->pc = 0x27d804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13388), bits); }
label_27d808:
    // 0x27d808: 0xc60001b0  lwc1        $f0, 0x1B0($s0)
    ctx->pc = 0x27d808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d80c:
    // 0x27d80c: 0xe7a03300  swc1        $f0, 0x3300($sp)
    ctx->pc = 0x27d80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13056), bits); }
label_27d810:
    // 0x27d810: 0xc60001b4  lwc1        $f0, 0x1B4($s0)
    ctx->pc = 0x27d810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d814:
    // 0x27d814: 0xe7a03304  swc1        $f0, 0x3304($sp)
    ctx->pc = 0x27d814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13060), bits); }
label_27d818:
    // 0x27d818: 0xc60001b8  lwc1        $f0, 0x1B8($s0)
    ctx->pc = 0x27d818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d81c:
    // 0x27d81c: 0xe7a03308  swc1        $f0, 0x3308($sp)
    ctx->pc = 0x27d81cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13064), bits); }
label_27d820:
    // 0x27d820: 0xc60001bc  lwc1        $f0, 0x1BC($s0)
    ctx->pc = 0x27d820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d824:
    // 0x27d824: 0xe7a0330c  swc1        $f0, 0x330C($sp)
    ctx->pc = 0x27d824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13068), bits); }
label_27d828:
    // 0x27d828: 0xc60001c0  lwc1        $f0, 0x1C0($s0)
    ctx->pc = 0x27d828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d82c:
    // 0x27d82c: 0xe7a03310  swc1        $f0, 0x3310($sp)
    ctx->pc = 0x27d82cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13072), bits); }
label_27d830:
    // 0x27d830: 0xc60001c4  lwc1        $f0, 0x1C4($s0)
    ctx->pc = 0x27d830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d834:
    // 0x27d834: 0xe7a03314  swc1        $f0, 0x3314($sp)
    ctx->pc = 0x27d834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13076), bits); }
label_27d838:
    // 0x27d838: 0xc60001c8  lwc1        $f0, 0x1C8($s0)
    ctx->pc = 0x27d838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d83c:
    // 0x27d83c: 0xe7a03318  swc1        $f0, 0x3318($sp)
    ctx->pc = 0x27d83cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13080), bits); }
label_27d840:
    // 0x27d840: 0xc60001cc  lwc1        $f0, 0x1CC($s0)
    ctx->pc = 0x27d840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d844:
    // 0x27d844: 0xe7a0331c  swc1        $f0, 0x331C($sp)
    ctx->pc = 0x27d844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13084), bits); }
label_27d848:
    // 0x27d848: 0xc60001d0  lwc1        $f0, 0x1D0($s0)
    ctx->pc = 0x27d848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d84c:
    // 0x27d84c: 0xe7a03320  swc1        $f0, 0x3320($sp)
    ctx->pc = 0x27d84cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13088), bits); }
label_27d850:
    // 0x27d850: 0xc60001d4  lwc1        $f0, 0x1D4($s0)
    ctx->pc = 0x27d850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d854:
    // 0x27d854: 0xe7a03324  swc1        $f0, 0x3324($sp)
    ctx->pc = 0x27d854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13092), bits); }
label_27d858:
    // 0x27d858: 0xc60001d8  lwc1        $f0, 0x1D8($s0)
    ctx->pc = 0x27d858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d85c:
    // 0x27d85c: 0xe7a03328  swc1        $f0, 0x3328($sp)
    ctx->pc = 0x27d85cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13096), bits); }
label_27d860:
    // 0x27d860: 0xc60001dc  lwc1        $f0, 0x1DC($s0)
    ctx->pc = 0x27d860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d864:
    // 0x27d864: 0xe7a0332c  swc1        $f0, 0x332C($sp)
    ctx->pc = 0x27d864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13100), bits); }
label_27d868:
    // 0x27d868: 0xc60001e0  lwc1        $f0, 0x1E0($s0)
    ctx->pc = 0x27d868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d86c:
    // 0x27d86c: 0xe7a03330  swc1        $f0, 0x3330($sp)
    ctx->pc = 0x27d86cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13104), bits); }
label_27d870:
    // 0x27d870: 0xc60001e4  lwc1        $f0, 0x1E4($s0)
    ctx->pc = 0x27d870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d874:
    // 0x27d874: 0xe7a03334  swc1        $f0, 0x3334($sp)
    ctx->pc = 0x27d874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13108), bits); }
label_27d878:
    // 0x27d878: 0xc60001e8  lwc1        $f0, 0x1E8($s0)
    ctx->pc = 0x27d878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d87c:
    // 0x27d87c: 0xe7a03338  swc1        $f0, 0x3338($sp)
    ctx->pc = 0x27d87cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13112), bits); }
label_27d880:
    // 0x27d880: 0xc60001ec  lwc1        $f0, 0x1EC($s0)
    ctx->pc = 0x27d880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d884:
    // 0x27d884: 0xe7a0333c  swc1        $f0, 0x333C($sp)
    ctx->pc = 0x27d884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13116), bits); }
label_27d888:
    // 0x27d888: 0xc60001f0  lwc1        $f0, 0x1F0($s0)
    ctx->pc = 0x27d888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d88c:
    // 0x27d88c: 0xe7a03340  swc1        $f0, 0x3340($sp)
    ctx->pc = 0x27d88cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13120), bits); }
label_27d890:
    // 0x27d890: 0xc60001f4  lwc1        $f0, 0x1F4($s0)
    ctx->pc = 0x27d890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d894:
    // 0x27d894: 0xe7a03344  swc1        $f0, 0x3344($sp)
    ctx->pc = 0x27d894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13124), bits); }
label_27d898:
    // 0x27d898: 0xc60001f8  lwc1        $f0, 0x1F8($s0)
    ctx->pc = 0x27d898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d89c:
    // 0x27d89c: 0xe7a03348  swc1        $f0, 0x3348($sp)
    ctx->pc = 0x27d89cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13128), bits); }
label_27d8a0:
    // 0x27d8a0: 0xc60001fc  lwc1        $f0, 0x1FC($s0)
    ctx->pc = 0x27d8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d8a4:
    // 0x27d8a4: 0xe7a0334c  swc1        $f0, 0x334C($sp)
    ctx->pc = 0x27d8a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13132), bits); }
label_27d8a8:
    // 0x27d8a8: 0xc6000200  lwc1        $f0, 0x200($s0)
    ctx->pc = 0x27d8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d8ac:
    // 0x27d8ac: 0xe7a03350  swc1        $f0, 0x3350($sp)
    ctx->pc = 0x27d8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13136), bits); }
label_27d8b0:
    // 0x27d8b0: 0xc6000204  lwc1        $f0, 0x204($s0)
    ctx->pc = 0x27d8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d8b4:
    // 0x27d8b4: 0xe7a03354  swc1        $f0, 0x3354($sp)
    ctx->pc = 0x27d8b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13140), bits); }
label_27d8b8:
    // 0x27d8b8: 0xc6000208  lwc1        $f0, 0x208($s0)
    ctx->pc = 0x27d8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d8bc:
    // 0x27d8bc: 0xe7a03358  swc1        $f0, 0x3358($sp)
    ctx->pc = 0x27d8bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13144), bits); }
label_27d8c0:
    // 0x27d8c0: 0xc600020c  lwc1        $f0, 0x20C($s0)
    ctx->pc = 0x27d8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d8c4:
    // 0x27d8c4: 0xe7a0335c  swc1        $f0, 0x335C($sp)
    ctx->pc = 0x27d8c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13148), bits); }
label_27d8c8:
    // 0x27d8c8: 0xc6000210  lwc1        $f0, 0x210($s0)
    ctx->pc = 0x27d8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d8cc:
    // 0x27d8cc: 0xe7a03360  swc1        $f0, 0x3360($sp)
    ctx->pc = 0x27d8ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13152), bits); }
label_27d8d0:
    // 0x27d8d0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x27d8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_27d8d4:
    // 0x27d8d4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x27d8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_27d8d8:
    // 0x27d8d8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x27d8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_27d8dc:
    // 0x27d8dc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x27d8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_27d8e0:
    // 0x27d8e0: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x27d8e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_27d8e4:
    // 0x27d8e4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x27d8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_27d8e8:
    // 0x27d8e8: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_27d8ec:
    if (ctx->pc == 0x27D8ECu) {
        ctx->pc = 0x27D8ECu;
            // 0x27d8ec: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x27D8F0u;
        goto label_27d8f0;
    }
    ctx->pc = 0x27D8E8u;
    {
        const bool branch_taken_0x27d8e8 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x27D8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D8E8u;
            // 0x27d8ec: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d8e8) {
            ctx->pc = 0x27D8D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27d8d0;
        }
    }
    ctx->pc = 0x27D8F0u;
label_27d8f0:
    // 0x27d8f0: 0x3c0d3f80  lui         $t5, 0x3F80
    ctx->pc = 0x27d8f0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)16256 << 16));
label_27d8f4:
    // 0x27d8f4: 0x3c033fb3  lui         $v1, 0x3FB3
    ctx->pc = 0x27d8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16307 << 16));
label_27d8f8:
    // 0x27d8f8: 0x448d0000  mtc1        $t5, $f0
    ctx->pc = 0x27d8f8u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27d8fc:
    // 0x27d8fc: 0x346a3333  ori         $t2, $v1, 0x3333
    ctx->pc = 0x27d8fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
label_27d900:
    // 0x27d900: 0xc60102d4  lwc1        $f1, 0x2D4($s0)
    ctx->pc = 0x27d900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27d904:
    // 0x27d904: 0x3c024033  lui         $v0, 0x4033
    ctx->pc = 0x27d904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16435 << 16));
label_27d908:
    // 0x27d908: 0x461400c3  div.s       $f3, $f0, $f20
    ctx->pc = 0x27d908u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[3] = ctx->f[0] / ctx->f[20];
label_27d90c:
    // 0x27d90c: 0x34433333  ori         $v1, $v0, 0x3333
    ctx->pc = 0x27d90cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_27d910:
    // 0x27d910: 0x3c023eb6  lui         $v0, 0x3EB6
    ctx->pc = 0x27d910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16054 << 16));
label_27d914:
    // 0x27d914: 0x27a8343c  addiu       $t0, $sp, 0x343C
    ctx->pc = 0x27d914u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 13372));
label_27d918:
    // 0x27d918: 0x27af343d  addiu       $t7, $sp, 0x343D
    ctx->pc = 0x27d918u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 13373));
label_27d91c:
    // 0x27d91c: 0x3c0b3e80  lui         $t3, 0x3E80
    ctx->pc = 0x27d91cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16000 << 16));
label_27d920:
    // 0x27d920: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x27d920u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27d924:
    // 0x27d924: 0x3442db6e  ori         $v0, $v0, 0xDB6E
    ctx->pc = 0x27d924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)56174);
label_27d928:
    // 0x27d928: 0x3c0c3f00  lui         $t4, 0x3F00
    ctx->pc = 0x27d928u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)16128 << 16));
label_27d92c:
    // 0x27d92c: 0x27a43440  addiu       $a0, $sp, 0x3440
    ctx->pc = 0x27d92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 13376));
label_27d930:
    // 0x27d930: 0x27a53300  addiu       $a1, $sp, 0x3300
    ctx->pc = 0x27d930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 13056));
label_27d934:
    // 0x27d934: 0x27a632a0  addiu       $a2, $sp, 0x32A0
    ctx->pc = 0x27d934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 12960));
label_27d938:
    // 0x27d938: 0x27a93250  addiu       $t1, $sp, 0x3250
    ctx->pc = 0x27d938u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 12880));
label_27d93c:
    // 0x27d93c: 0xe7a13424  swc1        $f1, 0x3424($sp)
    ctx->pc = 0x27d93cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13348), bits); }
label_27d940:
    // 0x27d940: 0xc60002d8  lwc1        $f0, 0x2D8($s0)
    ctx->pc = 0x27d940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d944:
    // 0x27d944: 0x448a2800  mtc1        $t2, $f5
    ctx->pc = 0x27d944u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_27d948:
    // 0x27d948: 0xe7a03428  swc1        $f0, 0x3428($sp)
    ctx->pc = 0x27d948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13352), bits); }
label_27d94c:
    // 0x27d94c: 0x8e0702dc  lw          $a3, 0x2DC($s0)
    ctx->pc = 0x27d94cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
label_27d950:
    // 0x27d950: 0xafa7342c  sw          $a3, 0x342C($sp)
    ctx->pc = 0x27d950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 13356), GPR_U32(ctx, 7));
label_27d954:
    // 0x27d954: 0x8e0702e0  lw          $a3, 0x2E0($s0)
    ctx->pc = 0x27d954u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
label_27d958:
    // 0x27d958: 0xafa73430  sw          $a3, 0x3430($sp)
    ctx->pc = 0x27d958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 13360), GPR_U32(ctx, 7));
label_27d95c:
    // 0x27d95c: 0xc60002e4  lwc1        $f0, 0x2E4($s0)
    ctx->pc = 0x27d95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d960:
    // 0x27d960: 0xe7a03434  swc1        $f0, 0x3434($sp)
    ctx->pc = 0x27d960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13364), bits); }
label_27d964:
    // 0x27d964: 0xc60002e8  lwc1        $f0, 0x2E8($s0)
    ctx->pc = 0x27d964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d968:
    // 0x27d968: 0xe7a03438  swc1        $f0, 0x3438($sp)
    ctx->pc = 0x27d968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13368), bits); }
label_27d96c:
    // 0x27d96c: 0x920702ec  lbu         $a3, 0x2EC($s0)
    ctx->pc = 0x27d96cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 748)));
label_27d970:
    // 0x27d970: 0xa1070000  sb          $a3, 0x0($t0)
    ctx->pc = 0x27d970u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
label_27d974:
    // 0x27d974: 0x920802ed  lbu         $t0, 0x2ED($s0)
    ctx->pc = 0x27d974u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 749)));
label_27d978:
    // 0x27d978: 0x920702ee  lbu         $a3, 0x2EE($s0)
    ctx->pc = 0x27d978u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 750)));
label_27d97c:
    // 0x27d97c: 0xa1e80000  sb          $t0, 0x0($t7)
    ctx->pc = 0x27d97cu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 8));
label_27d980:
    // 0x27d980: 0xa1e70001  sb          $a3, 0x1($t7)
    ctx->pc = 0x27d980u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 1), (uint8_t)GPR_U32(ctx, 7));
label_27d984:
    // 0x27d984: 0x920f02ef  lbu         $t7, 0x2EF($s0)
    ctx->pc = 0x27d984u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 751)));
label_27d988:
    // 0x27d988: 0xc7a0344c  lwc1        $f0, 0x344C($sp)
    ctx->pc = 0x27d988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 13388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d98c:
    // 0x27d98c: 0xc7a13448  lwc1        $f1, 0x3448($sp)
    ctx->pc = 0x27d98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 13384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27d990:
    // 0x27d990: 0x8fa73468  lw          $a3, 0x3468($sp)
    ctx->pc = 0x27d990u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 13416)));
label_27d994:
    // 0x27d994: 0xc7a23434  lwc1        $f2, 0x3434($sp)
    ctx->pc = 0x27d994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 13364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27d998:
    // 0x27d998: 0x8fa8346c  lw          $t0, 0x346C($sp)
    ctx->pc = 0x27d998u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 13420)));
label_27d99c:
    // 0x27d99c: 0xafab330c  sw          $t3, 0x330C($sp)
    ctx->pc = 0x27d99cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 13068), GPR_U32(ctx, 11));
label_27d9a0:
    // 0x27d9a0: 0xe7a032b0  swc1        $f0, 0x32B0($sp)
    ctx->pc = 0x27d9a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12976), bits); }
label_27d9a4:
    // 0x27d9a4: 0xc7a0330c  lwc1        $f0, 0x330C($sp)
    ctx->pc = 0x27d9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 13068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d9a8:
    // 0x27d9a8: 0xafad3438  sw          $t5, 0x3438($sp)
    ctx->pc = 0x27d9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 13368), GPR_U32(ctx, 13));
label_27d9ac:
    // 0x27d9ac: 0xc7a83438  lwc1        $f8, 0x3438($sp)
    ctx->pc = 0x27d9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 13368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_27d9b0:
    // 0x27d9b0: 0xafa23354  sw          $v0, 0x3354($sp)
    ctx->pc = 0x27d9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 13140), GPR_U32(ctx, 2));
label_27d9b4:
    // 0x27d9b4: 0xc7a63354  lwc1        $f6, 0x3354($sp)
    ctx->pc = 0x27d9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 13140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_27d9b8:
    // 0x27d9b8: 0xafac3304  sw          $t4, 0x3304($sp)
    ctx->pc = 0x27d9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 13060), GPR_U32(ctx, 12));
label_27d9bc:
    // 0x27d9bc: 0xe7a33428  swc1        $f3, 0x3428($sp)
    ctx->pc = 0x27d9bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13352), bits); }
label_27d9c0:
    // 0x27d9c0: 0xafae3430  sw          $t6, 0x3430($sp)
    ctx->pc = 0x27d9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 13360), GPR_U32(ctx, 14));
label_27d9c4:
    // 0x27d9c4: 0xe7b43424  swc1        $f20, 0x3424($sp)
    ctx->pc = 0x27d9c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13348), bits); }
label_27d9c8:
    // 0x27d9c8: 0xafa33350  sw          $v1, 0x3350($sp)
    ctx->pc = 0x27d9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 13136), GPR_U32(ctx, 3));
label_27d9cc:
    // 0x27d9cc: 0xe7a132ac  swc1        $f1, 0x32AC($sp)
    ctx->pc = 0x27d9ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12972), bits); }
label_27d9d0:
    // 0x27d9d0: 0xafaa3308  sw          $t2, 0x3308($sp)
    ctx->pc = 0x27d9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 13064), GPR_U32(ctx, 10));
label_27d9d4:
    // 0x27d9d4: 0x46002903  div.s       $f4, $f5, $f0
    ctx->pc = 0x27d9d4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[4] = ctx->f[5] / ctx->f[0];
label_27d9d8:
    // 0x27d9d8: 0xa3af343f  sb          $t7, 0x343F($sp)
    ctx->pc = 0x27d9d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 13375), (uint8_t)GPR_U32(ctx, 15));
label_27d9dc:
    // 0x27d9dc: 0xafae342c  sw          $t6, 0x342C($sp)
    ctx->pc = 0x27d9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 13356), GPR_U32(ctx, 14));
label_27d9e0:
    // 0x27d9e0: 0xafa0331c  sw          $zero, 0x331C($sp)
    ctx->pc = 0x27d9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 13084), GPR_U32(ctx, 0));
label_27d9e4:
    // 0x27d9e4: 0xafa03318  sw          $zero, 0x3318($sp)
    ctx->pc = 0x27d9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 13080), GPR_U32(ctx, 0));
label_27d9e8:
    // 0x27d9e8: 0xafa03314  sw          $zero, 0x3314($sp)
    ctx->pc = 0x27d9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 13076), GPR_U32(ctx, 0));
label_27d9ec:
    // 0x27d9ec: 0xafa03310  sw          $zero, 0x3310($sp)
    ctx->pc = 0x27d9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 13072), GPR_U32(ctx, 0));
label_27d9f0:
    // 0x27d9f0: 0xafa0332c  sw          $zero, 0x332C($sp)
    ctx->pc = 0x27d9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 13100), GPR_U32(ctx, 0));
label_27d9f4:
    // 0x27d9f4: 0xafa03328  sw          $zero, 0x3328($sp)
    ctx->pc = 0x27d9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 13096), GPR_U32(ctx, 0));
label_27d9f8:
    // 0x27d9f8: 0xafa03324  sw          $zero, 0x3324($sp)
    ctx->pc = 0x27d9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 13092), GPR_U32(ctx, 0));
label_27d9fc:
    // 0x27d9fc: 0xafa03320  sw          $zero, 0x3320($sp)
    ctx->pc = 0x27d9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 13088), GPR_U32(ctx, 0));
label_27da00:
    // 0x27da00: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x27da00u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[5];
label_27da04:
    // 0x27da04: 0xc7a13350  lwc1        $f1, 0x3350($sp)
    ctx->pc = 0x27da04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 13136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27da08:
    // 0x27da08: 0x46024082  mul.s       $f2, $f8, $f2
    ctx->pc = 0x27da08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
label_27da0c:
    // 0x27da0c: 0xc7aa3424  lwc1        $f10, 0x3424($sp)
    ctx->pc = 0x27da0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 13348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_27da10:
    // 0x27da10: 0xc7a93428  lwc1        $f9, 0x3428($sp)
    ctx->pc = 0x27da10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 13352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_27da14:
    // 0x27da14: 0xe7a0335c  swc1        $f0, 0x335C($sp)
    ctx->pc = 0x27da14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13148), bits); }
label_27da18:
    // 0x27da18: 0xc7a73304  lwc1        $f7, 0x3304($sp)
    ctx->pc = 0x27da18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 13060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_27da1c:
    // 0x27da1c: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x27da1cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
label_27da20:
    // 0x27da20: 0xc7a33430  lwc1        $f3, 0x3430($sp)
    ctx->pc = 0x27da20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 13360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27da24:
    // 0x27da24: 0xe7a232b8  swc1        $f2, 0x32B8($sp)
    ctx->pc = 0x27da24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12984), bits); }
label_27da28:
    // 0x27da28: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x27da28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
label_27da2c:
    // 0x27da2c: 0x468018a0  cvt.s.w     $f2, $f3
    ctx->pc = 0x27da2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_27da30:
    // 0x27da30: 0x46025082  mul.s       $f2, $f10, $f2
    ctx->pc = 0x27da30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[10], ctx->f[2]);
label_27da34:
    // 0x27da34: 0xe7a13340  swc1        $f1, 0x3340($sp)
    ctx->pc = 0x27da34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13120), bits); }
label_27da38:
    // 0x27da38: 0xe7a13344  swc1        $f1, 0x3344($sp)
    ctx->pc = 0x27da38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13124), bits); }
label_27da3c:
    // 0x27da3c: 0xe7a13348  swc1        $f1, 0x3348($sp)
    ctx->pc = 0x27da3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13128), bits); }
label_27da40:
    // 0x27da40: 0xe7a1334c  swc1        $f1, 0x334C($sp)
    ctx->pc = 0x27da40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13132), bits); }
label_27da44:
    // 0x27da44: 0xc7a13354  lwc1        $f1, 0x3354($sp)
    ctx->pc = 0x27da44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 13140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27da48:
    // 0x27da48: 0xe7a63330  swc1        $f6, 0x3330($sp)
    ctx->pc = 0x27da48u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13104), bits); }
label_27da4c:
    // 0x27da4c: 0xe7a63334  swc1        $f6, 0x3334($sp)
    ctx->pc = 0x27da4cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13108), bits); }
label_27da50:
    // 0x27da50: 0xe7a63338  swc1        $f6, 0x3338($sp)
    ctx->pc = 0x27da50u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13112), bits); }
label_27da54:
    // 0x27da54: 0xe7a6333c  swc1        $f6, 0x333C($sp)
    ctx->pc = 0x27da54u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13116), bits); }
label_27da58:
    // 0x27da58: 0xc7a63308  lwc1        $f6, 0x3308($sp)
    ctx->pc = 0x27da58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 13064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_27da5c:
    // 0x27da5c: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x27da5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
label_27da60:
    // 0x27da60: 0xe7aa32a0  swc1        $f10, 0x32A0($sp)
    ctx->pc = 0x27da60u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12960), bits); }
label_27da64:
    // 0x27da64: 0xe7a932a8  swc1        $f9, 0x32A8($sp)
    ctx->pc = 0x27da64u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12968), bits); }
label_27da68:
    // 0x27da68: 0xe7a832b4  swc1        $f8, 0x32B4($sp)
    ctx->pc = 0x27da68u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12980), bits); }
label_27da6c:
    // 0x27da6c: 0xe7a732e0  swc1        $f7, 0x32E0($sp)
    ctx->pc = 0x27da6cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13024), bits); }
label_27da70:
    // 0x27da70: 0xe7a632e4  swc1        $f6, 0x32E4($sp)
    ctx->pc = 0x27da70u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13028), bits); }
label_27da74:
    // 0x27da74: 0xe7a632c0  swc1        $f6, 0x32C0($sp)
    ctx->pc = 0x27da74u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12992), bits); }
label_27da78:
    // 0x27da78: 0xe7a43358  swc1        $f4, 0x3358($sp)
    ctx->pc = 0x27da78u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 13144), bits); }
label_27da7c:
    // 0x27da7c: 0xe7a232a4  swc1        $f2, 0x32A4($sp)
    ctx->pc = 0x27da7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12964), bits); }
label_27da80:
    // 0x27da80: 0xe7a132bc  swc1        $f1, 0x32BC($sp)
    ctx->pc = 0x27da80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12988), bits); }
label_27da84:
    // 0x27da84: 0xc088480  jal         func_221200
label_27da88:
    if (ctx->pc == 0x27DA88u) {
        ctx->pc = 0x27DA88u;
            // 0x27da88: 0xe7a032c4  swc1        $f0, 0x32C4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12996), bits); }
        ctx->pc = 0x27DA8Cu;
        goto label_27da8c;
    }
    ctx->pc = 0x27DA84u;
    SET_GPR_U32(ctx, 31, 0x27DA8Cu);
    ctx->pc = 0x27DA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DA84u;
            // 0x27da88: 0xe7a032c4  swc1        $f0, 0x32C4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12996), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x221200u;
    if (runtime->hasFunction(0x221200u)) {
        auto targetFn = runtime->lookupFunction(0x221200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DA8Cu; }
        if (ctx->pc != 0x27DA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00221200_0x221200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DA8Cu; }
        if (ctx->pc != 0x27DA8Cu) { return; }
    }
    ctx->pc = 0x27DA8Cu;
label_27da8c:
    // 0x27da8c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x27da8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_27da90:
    // 0x27da90: 0x27a3349c  addiu       $v1, $sp, 0x349C
    ctx->pc = 0x27da90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 13468));
label_27da94:
    // 0x27da94: 0x24a5ea60  addiu       $a1, $a1, -0x15A0
    ctx->pc = 0x27da94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
label_27da98:
    // 0x27da98: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x27da98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_27da9c:
    // 0x27da9c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x27da9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27daa0:
    // 0x27daa0: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x27daa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_27daa4:
    // 0x27daa4: 0xa3a2349c  sb          $v0, 0x349C($sp)
    ctx->pc = 0x27daa4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 13468), (uint8_t)GPR_U32(ctx, 2));
label_27daa8:
    // 0x27daa8: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x27daa8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_27daac:
    // 0x27daac: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_27dab0:
    if (ctx->pc == 0x27DAB0u) {
        ctx->pc = 0x27DAB4u;
        goto label_27dab4;
    }
    ctx->pc = 0x27DAACu;
    {
        const bool branch_taken_0x27daac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27daac) {
            ctx->pc = 0x27DAE8u;
            goto label_27dae8;
        }
    }
    ctx->pc = 0x27DAB4u;
label_27dab4:
    // 0x27dab4: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x27dab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27dab8:
    // 0x27dab8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x27dab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_27dabc:
    // 0x27dabc: 0x2463d630  addiu       $v1, $v1, -0x29D0
    ctx->pc = 0x27dabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956592));
label_27dac0:
    // 0x27dac0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x27dac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_27dac4:
    // 0x27dac4: 0x2442d638  addiu       $v0, $v0, -0x29C8
    ctx->pc = 0x27dac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956600));
label_27dac8:
    // 0x27dac8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x27dac8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_27dacc:
    // 0x27dacc: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x27daccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_27dad0:
    // 0x27dad0: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27dad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_27dad4:
    // 0x27dad4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x27dad4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_27dad8:
    // 0x27dad8: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27dad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_27dadc:
    // 0x27dadc: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x27dadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_27dae0:
    // 0x27dae0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x27dae0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_27dae4:
    // 0x27dae4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x27dae4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_27dae8:
    // 0x27dae8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x27dae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_27daec:
    // 0x27daec: 0x27a33498  addiu       $v1, $sp, 0x3498
    ctx->pc = 0x27daecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 13464));
label_27daf0:
    // 0x27daf0: 0x904200a8  lbu         $v0, 0xA8($v0)
    ctx->pc = 0x27daf0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 168)));
label_27daf4:
    // 0x27daf4: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x27daf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_27daf8:
    // 0x27daf8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x27daf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_27dafc:
    // 0x27dafc: 0xa3a23498  sb          $v0, 0x3498($sp)
    ctx->pc = 0x27dafcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 13464), (uint8_t)GPR_U32(ctx, 2));
label_27db00:
    // 0x27db00: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x27db00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_27db04:
    // 0x27db04: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x27db04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_27db08:
    // 0x27db08: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x27db08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_27db0c:
    // 0x27db0c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x27db0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_27db10:
    // 0x27db10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_27db14:
    if (ctx->pc == 0x27DB14u) {
        ctx->pc = 0x27DB18u;
        goto label_27db18;
    }
    ctx->pc = 0x27DB10u;
    {
        const bool branch_taken_0x27db10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27db10) {
            ctx->pc = 0x27DB28u;
            goto label_27db28;
        }
    }
    ctx->pc = 0x27DB18u;
label_27db18:
    // 0x27db18: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x27db18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_27db1c:
    // 0x27db1c: 0x10000004  b           . + 4 + (0x4 << 2)
label_27db20:
    if (ctx->pc == 0x27DB20u) {
        ctx->pc = 0x27DB20u;
            // 0x27db20: 0x8c510094  lw          $s1, 0x94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
        ctx->pc = 0x27DB24u;
        goto label_27db24;
    }
    ctx->pc = 0x27DB1Cu;
    {
        const bool branch_taken_0x27db1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DB20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DB1Cu;
            // 0x27db20: 0x8c510094  lw          $s1, 0x94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27db1c) {
            ctx->pc = 0x27DB30u;
            goto label_27db30;
        }
    }
    ctx->pc = 0x27DB24u;
label_27db24:
    // 0x27db24: 0x0  nop
    ctx->pc = 0x27db24u;
    // NOP
label_27db28:
    // 0x27db28: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x27db28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_27db2c:
    // 0x27db2c: 0x8c510094  lw          $s1, 0x94($v0)
    ctx->pc = 0x27db2cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_27db30:
    // 0x27db30: 0x8e320050  lw          $s2, 0x50($s1)
    ctx->pc = 0x27db30u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_27db34:
    // 0x27db34: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x27db34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_27db38:
    // 0x27db38: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x27db38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_27db3c:
    // 0x27db3c: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x27db3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_27db40:
    // 0x27db40: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x27db40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_27db44:
    // 0x27db44: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x27db44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_27db48:
    // 0x27db48: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x27db48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_27db4c:
    // 0x27db4c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x27db4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_27db50:
    // 0x27db50: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x27db50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_27db54:
    // 0x27db54: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x27db54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_27db58:
    // 0x27db58: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_27db5c:
    if (ctx->pc == 0x27DB5Cu) {
        ctx->pc = 0x27DB60u;
        goto label_27db60;
    }
    ctx->pc = 0x27DB58u;
    {
        const bool branch_taken_0x27db58 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x27db58) {
            ctx->pc = 0x27DB68u;
            goto label_27db68;
        }
    }
    ctx->pc = 0x27DB60u;
label_27db60:
    // 0x27db60: 0x10000005  b           . + 4 + (0x5 << 2)
label_27db64:
    if (ctx->pc == 0x27DB64u) {
        ctx->pc = 0x27DB64u;
            // 0x27db64: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x27DB68u;
        goto label_27db68;
    }
    ctx->pc = 0x27DB60u;
    {
        const bool branch_taken_0x27db60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DB60u;
            // 0x27db64: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27db60) {
            ctx->pc = 0x27DB78u;
            goto label_27db78;
        }
    }
    ctx->pc = 0x27DB68u;
label_27db68:
    // 0x27db68: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27db68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27db6c:
    // 0x27db6c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x27db6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_27db70:
    // 0x27db70: 0x320f809  jalr        $t9
label_27db74:
    if (ctx->pc == 0x27DB74u) {
        ctx->pc = 0x27DB78u;
        goto label_27db78;
    }
    ctx->pc = 0x27DB70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27DB78u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x27DB78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27DB78u; }
            if (ctx->pc != 0x27DB78u) { return; }
        }
        }
    }
    ctx->pc = 0x27DB78u;
label_27db78:
    // 0x27db78: 0xafa23470  sw          $v0, 0x3470($sp)
    ctx->pc = 0x27db78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 13424), GPR_U32(ctx, 2));
label_27db7c:
    // 0x27db7c: 0x8fa43470  lw          $a0, 0x3470($sp)
    ctx->pc = 0x27db7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 13424)));
label_27db80:
    // 0x27db80: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27db80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27db84:
    // 0x27db84: 0xc0a8458  jal         func_2A1160
label_27db88:
    if (ctx->pc == 0x27DB88u) {
        ctx->pc = 0x27DB88u;
            // 0x27db88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27DB8Cu;
        goto label_27db8c;
    }
    ctx->pc = 0x27DB84u;
    SET_GPR_U32(ctx, 31, 0x27DB8Cu);
    ctx->pc = 0x27DB88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DB84u;
            // 0x27db88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1160u;
    if (runtime->hasFunction(0x2A1160u)) {
        auto targetFn = runtime->lookupFunction(0x2A1160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DB8Cu; }
        if (ctx->pc != 0x27DB8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1160_0x2a1160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DB8Cu; }
        if (ctx->pc != 0x27DB8Cu) { return; }
    }
    ctx->pc = 0x27DB8Cu;
label_27db8c:
    // 0x27db8c: 0x27a93140  addiu       $t1, $sp, 0x3140
    ctx->pc = 0x27db8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 12608));
label_27db90:
    // 0x27db90: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x27db90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_27db94:
    // 0x27db94: 0x2523000c  addiu       $v1, $t1, 0xC
    ctx->pc = 0x27db94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
label_27db98:
    // 0x27db98: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x27db98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_27db9c:
    // 0x27db9c: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x27db9cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
label_27dba0:
    // 0x27dba0: 0x27a43450  addiu       $a0, $sp, 0x3450
    ctx->pc = 0x27dba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 13392));
label_27dba4:
    // 0x27dba4: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x27dba4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
label_27dba8:
    // 0x27dba8: 0x27a53250  addiu       $a1, $sp, 0x3250
    ctx->pc = 0x27dba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 12880));
label_27dbac:
    // 0x27dbac: 0xad220008  sw          $v0, 0x8($t1)
    ctx->pc = 0x27dbacu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 2));
label_27dbb0:
    // 0x27dbb0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x27dbb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27dbb4:
    // 0x27dbb4: 0x8e87003c  lw          $a3, 0x3C($s4)
    ctx->pc = 0x27dbb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_27dbb8:
    // 0x27dbb8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x27dbb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27dbbc:
    // 0x27dbbc: 0xc09ffa0  jal         func_27FE80
label_27dbc0:
    if (ctx->pc == 0x27DBC0u) {
        ctx->pc = 0x27DBC0u;
            // 0x27dbc0: 0x27aa3470  addiu       $t2, $sp, 0x3470 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 13424));
        ctx->pc = 0x27DBC4u;
        goto label_27dbc4;
    }
    ctx->pc = 0x27DBBCu;
    SET_GPR_U32(ctx, 31, 0x27DBC4u);
    ctx->pc = 0x27DBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DBBCu;
            // 0x27dbc0: 0x27aa3470  addiu       $t2, $sp, 0x3470 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 13424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27FE80u;
    if (runtime->hasFunction(0x27FE80u)) {
        auto targetFn = runtime->lookupFunction(0x27FE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DBC4u; }
        if (ctx->pc != 0x27DBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027FE80_0x27fe80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DBC4u; }
        if (ctx->pc != 0x27DBC4u) { return; }
    }
    ctx->pc = 0x27DBC4u;
label_27dbc4:
    // 0x27dbc4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27dbc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27dbc8:
    // 0x27dbc8: 0xc0884f8  jal         func_2213E0
label_27dbcc:
    if (ctx->pc == 0x27DBCCu) {
        ctx->pc = 0x27DBCCu;
            // 0x27dbcc: 0x27a43250  addiu       $a0, $sp, 0x3250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 12880));
        ctx->pc = 0x27DBD0u;
        goto label_27dbd0;
    }
    ctx->pc = 0x27DBC8u;
    SET_GPR_U32(ctx, 31, 0x27DBD0u);
    ctx->pc = 0x27DBCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DBC8u;
            // 0x27dbcc: 0x27a43250  addiu       $a0, $sp, 0x3250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 12880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2213E0u;
    if (runtime->hasFunction(0x2213E0u)) {
        auto targetFn = runtime->lookupFunction(0x2213E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DBD0u; }
        if (ctx->pc != 0x27DBD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002213E0_0x2213e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DBD0u; }
        if (ctx->pc != 0x27DBD0u) { return; }
    }
    ctx->pc = 0x27DBD0u;
label_27dbd0:
    // 0x27dbd0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x27dbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_27dbd4:
    // 0x27dbd4: 0x27a3348c  addiu       $v1, $sp, 0x348C
    ctx->pc = 0x27dbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 13452));
label_27dbd8:
    // 0x27dbd8: 0x904200a8  lbu         $v0, 0xA8($v0)
    ctx->pc = 0x27dbd8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 168)));
label_27dbdc:
    // 0x27dbdc: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x27dbdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_27dbe0:
    // 0x27dbe0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x27dbe0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_27dbe4:
    // 0x27dbe4: 0xa3a2348c  sb          $v0, 0x348C($sp)
    ctx->pc = 0x27dbe4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 13452), (uint8_t)GPR_U32(ctx, 2));
label_27dbe8:
    // 0x27dbe8: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x27dbe8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_27dbec:
    // 0x27dbec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x27dbecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_27dbf0:
    // 0x27dbf0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x27dbf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_27dbf4:
    // 0x27dbf4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x27dbf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_27dbf8:
    // 0x27dbf8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_27dbfc:
    if (ctx->pc == 0x27DBFCu) {
        ctx->pc = 0x27DC00u;
        goto label_27dc00;
    }
    ctx->pc = 0x27DBF8u;
    {
        const bool branch_taken_0x27dbf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27dbf8) {
            ctx->pc = 0x27DC10u;
            goto label_27dc10;
        }
    }
    ctx->pc = 0x27DC00u;
label_27dc00:
    // 0x27dc00: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x27dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_27dc04:
    // 0x27dc04: 0x10000004  b           . + 4 + (0x4 << 2)
label_27dc08:
    if (ctx->pc == 0x27DC08u) {
        ctx->pc = 0x27DC08u;
            // 0x27dc08: 0x8c470094  lw          $a3, 0x94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
        ctx->pc = 0x27DC0Cu;
        goto label_27dc0c;
    }
    ctx->pc = 0x27DC04u;
    {
        const bool branch_taken_0x27dc04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DC04u;
            // 0x27dc08: 0x8c470094  lw          $a3, 0x94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc04) {
            ctx->pc = 0x27DC18u;
            goto label_27dc18;
        }
    }
    ctx->pc = 0x27DC0Cu;
label_27dc0c:
    // 0x27dc0c: 0x0  nop
    ctx->pc = 0x27dc0cu;
    // NOP
label_27dc10:
    // 0x27dc10: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x27dc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_27dc14:
    // 0x27dc14: 0x8c470094  lw          $a3, 0x94($v0)
    ctx->pc = 0x27dc14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_27dc18:
    // 0x27dc18: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x27dc18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_27dc1c:
    // 0x27dc1c: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x27dc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_27dc20:
    // 0x27dc20: 0x26680010  addiu       $t0, $s3, 0x10
    ctx->pc = 0x27dc20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_27dc24:
    // 0x27dc24: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x27dc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_27dc28:
    // 0x27dc28: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27dc28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27dc2c:
    // 0x27dc2c: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x27dc2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_27dc30:
    // 0x27dc30: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x27dc30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_27dc34:
    // 0x27dc34: 0x320f809  jalr        $t9
label_27dc38:
    if (ctx->pc == 0x27DC38u) {
        ctx->pc = 0x27DC38u;
            // 0x27dc38: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x27DC3Cu;
        goto label_27dc3c;
    }
    ctx->pc = 0x27DC34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27DC3Cu);
        ctx->pc = 0x27DC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DC34u;
            // 0x27dc38: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27DC3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27DC3Cu; }
            if (ctx->pc != 0x27DC3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x27DC3Cu;
label_27dc3c:
    // 0x27dc3c: 0x16400190  bnez        $s2, . + 4 + (0x190 << 2)
label_27dc40:
    if (ctx->pc == 0x27DC40u) {
        ctx->pc = 0x27DC44u;
        goto label_27dc44;
    }
    ctx->pc = 0x27DC3Cu;
    {
        const bool branch_taken_0x27dc3c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x27dc3c) {
            ctx->pc = 0x27E280u;
            goto label_27e280;
        }
    }
    ctx->pc = 0x27DC44u;
label_27dc44:
    // 0x27dc44: 0x8e820034  lw          $v0, 0x34($s4)
    ctx->pc = 0x27dc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_27dc48:
    // 0x27dc48: 0x10000061  b           . + 4 + (0x61 << 2)
label_27dc4c:
    if (ctx->pc == 0x27DC4Cu) {
        ctx->pc = 0x27DC4Cu;
            // 0x27dc4c: 0x2452ffff  addiu       $s2, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x27DC50u;
        goto label_27dc50;
    }
    ctx->pc = 0x27DC48u;
    {
        const bool branch_taken_0x27dc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DC48u;
            // 0x27dc4c: 0x2452ffff  addiu       $s2, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc48) {
            ctx->pc = 0x27DDD0u;
            goto label_27ddd0;
        }
    }
    ctx->pc = 0x27DC50u;
label_27dc50:
    // 0x27dc50: 0x8e820030  lw          $v0, 0x30($s4)
    ctx->pc = 0x27dc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_27dc54:
    // 0x27dc54: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x27dc54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
label_27dc58:
    // 0x27dc58: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x27dc58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27dc5c:
    // 0x27dc5c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x27dc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27dc60:
    // 0x27dc60: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x27dc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_27dc64:
    // 0x27dc64: 0x14510008  bne         $v0, $s1, . + 4 + (0x8 << 2)
label_27dc68:
    if (ctx->pc == 0x27DC68u) {
        ctx->pc = 0x27DC6Cu;
        goto label_27dc6c;
    }
    ctx->pc = 0x27DC64u;
    {
        const bool branch_taken_0x27dc64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x27dc64) {
            ctx->pc = 0x27DC88u;
            goto label_27dc88;
        }
    }
    ctx->pc = 0x27DC6Cu;
label_27dc6c:
    // 0x27dc6c: 0x9464006c  lhu         $a0, 0x6C($v1)
    ctx->pc = 0x27dc6cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 108)));
label_27dc70:
    // 0x27dc70: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x27dc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_27dc74:
    // 0x27dc74: 0x8fa33470  lw          $v1, 0x3470($sp)
    ctx->pc = 0x27dc74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 13424)));
label_27dc78:
    // 0x27dc78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27dc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_27dc7c:
    // 0x27dc7c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x27dc7cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_27dc80:
    // 0x27dc80: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_27dc84:
    if (ctx->pc == 0x27DC84u) {
        ctx->pc = 0x27DC88u;
        goto label_27dc88;
    }
    ctx->pc = 0x27DC80u;
    {
        const bool branch_taken_0x27dc80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27dc80) {
            ctx->pc = 0x27DCB8u;
            goto label_27dcb8;
        }
    }
    ctx->pc = 0x27DC88u;
label_27dc88:
    // 0x27dc88: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x27dc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_27dc8c:
    // 0x27dc8c: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x27dc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_27dc90:
    // 0x27dc90: 0x1451004d  bne         $v0, $s1, . + 4 + (0x4D << 2)
label_27dc94:
    if (ctx->pc == 0x27DC94u) {
        ctx->pc = 0x27DC98u;
        goto label_27dc98;
    }
    ctx->pc = 0x27DC90u;
    {
        const bool branch_taken_0x27dc90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x27dc90) {
            ctx->pc = 0x27DDC8u;
            goto label_27ddc8;
        }
    }
    ctx->pc = 0x27DC98u;
label_27dc98:
    // 0x27dc98: 0x9464006c  lhu         $a0, 0x6C($v1)
    ctx->pc = 0x27dc98u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 108)));
label_27dc9c:
    // 0x27dc9c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x27dc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_27dca0:
    // 0x27dca0: 0x8fa33470  lw          $v1, 0x3470($sp)
    ctx->pc = 0x27dca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 13424)));
label_27dca4:
    // 0x27dca4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27dca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_27dca8:
    // 0x27dca8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x27dca8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_27dcac:
    // 0x27dcac: 0x14620046  bne         $v1, $v0, . + 4 + (0x46 << 2)
label_27dcb0:
    if (ctx->pc == 0x27DCB0u) {
        ctx->pc = 0x27DCB4u;
        goto label_27dcb4;
    }
    ctx->pc = 0x27DCACu;
    {
        const bool branch_taken_0x27dcac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27dcac) {
            ctx->pc = 0x27DDC8u;
            goto label_27ddc8;
        }
    }
    ctx->pc = 0x27DCB4u;
label_27dcb4:
    // 0x27dcb4: 0x0  nop
    ctx->pc = 0x27dcb4u;
    // NOP
label_27dcb8:
    // 0x27dcb8: 0x8e820030  lw          $v0, 0x30($s4)
    ctx->pc = 0x27dcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_27dcbc:
    // 0x27dcbc: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x27dcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
label_27dcc0:
    // 0x27dcc0: 0x27a43488  addiu       $a0, $sp, 0x3488
    ctx->pc = 0x27dcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 13448));
label_27dcc4:
    // 0x27dcc4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x27dcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27dcc8:
    // 0x27dcc8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x27dcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27dccc:
    // 0x27dccc: 0x904200a8  lbu         $v0, 0xA8($v0)
    ctx->pc = 0x27dcccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 168)));
label_27dcd0:
    // 0x27dcd0: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x27dcd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_27dcd4:
    // 0x27dcd4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x27dcd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_27dcd8:
    // 0x27dcd8: 0xa3a23488  sb          $v0, 0x3488($sp)
    ctx->pc = 0x27dcd8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 13448), (uint8_t)GPR_U32(ctx, 2));
label_27dcdc:
    // 0x27dcdc: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x27dcdcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_27dce0:
    // 0x27dce0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x27dce0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_27dce4:
    // 0x27dce4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x27dce4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_27dce8:
    // 0x27dce8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x27dce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_27dcec:
    // 0x27dcec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_27dcf0:
    if (ctx->pc == 0x27DCF0u) {
        ctx->pc = 0x27DCF4u;
        goto label_27dcf4;
    }
    ctx->pc = 0x27DCECu;
    {
        const bool branch_taken_0x27dcec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27dcec) {
            ctx->pc = 0x27DD00u;
            goto label_27dd00;
        }
    }
    ctx->pc = 0x27DCF4u;
label_27dcf4:
    // 0x27dcf4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x27dcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27dcf8:
    // 0x27dcf8: 0x10000003  b           . + 4 + (0x3 << 2)
label_27dcfc:
    if (ctx->pc == 0x27DCFCu) {
        ctx->pc = 0x27DCFCu;
            // 0x27dcfc: 0x8c470094  lw          $a3, 0x94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
        ctx->pc = 0x27DD00u;
        goto label_27dd00;
    }
    ctx->pc = 0x27DCF8u;
    {
        const bool branch_taken_0x27dcf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DCFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DCF8u;
            // 0x27dcfc: 0x8c470094  lw          $a3, 0x94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dcf8) {
            ctx->pc = 0x27DD08u;
            goto label_27dd08;
        }
    }
    ctx->pc = 0x27DD00u;
label_27dd00:
    // 0x27dd00: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x27dd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_27dd04:
    // 0x27dd04: 0x8c470094  lw          $a3, 0x94($v0)
    ctx->pc = 0x27dd04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_27dd08:
    // 0x27dd08: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x27dd08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_27dd0c:
    // 0x27dd0c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x27dd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_27dd10:
    // 0x27dd10: 0x24a80010  addiu       $t0, $a1, 0x10
    ctx->pc = 0x27dd10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_27dd14:
    // 0x27dd14: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x27dd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27dd18:
    // 0x27dd18: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27dd18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27dd1c:
    // 0x27dd1c: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x27dd1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_27dd20:
    // 0x27dd20: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x27dd20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_27dd24:
    // 0x27dd24: 0x320f809  jalr        $t9
label_27dd28:
    if (ctx->pc == 0x27DD28u) {
        ctx->pc = 0x27DD28u;
            // 0x27dd28: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x27DD2Cu;
        goto label_27dd2c;
    }
    ctx->pc = 0x27DD24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27DD2Cu);
        ctx->pc = 0x27DD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DD24u;
            // 0x27dd28: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27DD2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27DD2Cu; }
            if (ctx->pc != 0x27DD2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x27DD2Cu;
label_27dd2c:
    // 0x27dd2c: 0x8e830034  lw          $v1, 0x34($s4)
    ctx->pc = 0x27dd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_27dd30:
    // 0x27dd30: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x27dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
label_27dd34:
    // 0x27dd34: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x27dd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_27dd38:
    // 0x27dd38: 0xae830034  sw          $v1, 0x34($s4)
    ctx->pc = 0x27dd38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 3));
label_27dd3c:
    // 0x27dd3c: 0x8e840034  lw          $a0, 0x34($s4)
    ctx->pc = 0x27dd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_27dd40:
    // 0x27dd40: 0x8e830030  lw          $v1, 0x30($s4)
    ctx->pc = 0x27dd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_27dd44:
    // 0x27dd44: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x27dd44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_27dd48:
    // 0x27dd48: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x27dd48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_27dd4c:
    // 0x27dd4c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x27dd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27dd50:
    // 0x27dd50: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27dd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_27dd54:
    // 0x27dd54: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x27dd54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_27dd58:
    // 0x27dd58: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x27dd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27dd5c:
    // 0x27dd5c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x27dd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27dd60:
    // 0x27dd60: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x27dd60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_27dd64:
    // 0x27dd64: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x27dd64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_27dd68:
    // 0x27dd68: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x27dd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27dd6c:
    // 0x27dd6c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x27dd6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_27dd70:
    // 0x27dd70: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x27dd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27dd74:
    // 0x27dd74: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x27dd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27dd78:
    // 0x27dd78: 0xe4610010  swc1        $f1, 0x10($v1)
    ctx->pc = 0x27dd78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_27dd7c:
    // 0x27dd7c: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x27dd7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_27dd80:
    // 0x27dd80: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x27dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_27dd84:
    // 0x27dd84: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x27dd84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_27dd88:
    // 0x27dd88: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x27dd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27dd8c:
    // 0x27dd8c: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x27dd8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_27dd90:
    // 0x27dd90: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x27dd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27dd94:
    // 0x27dd94: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x27dd94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_27dd98:
    // 0x27dd98: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x27dd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27dd9c:
    // 0x27dd9c: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x27dd9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_27dda0:
    // 0x27dda0: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x27dda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27dda4:
    // 0x27dda4: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x27dda4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
label_27dda8:
    // 0x27dda8: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x27dda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ddac:
    // 0x27ddac: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x27ddacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
label_27ddb0:
    // 0x27ddb0: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x27ddb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ddb4:
    // 0x27ddb4: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x27ddb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
label_27ddb8:
    // 0x27ddb8: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x27ddb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ddbc:
    // 0x27ddbc: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x27ddbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
label_27ddc0:
    // 0x27ddc0: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x27ddc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27ddc4:
    // 0x27ddc4: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x27ddc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
label_27ddc8:
    // 0x27ddc8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x27ddc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_27ddcc:
    // 0x27ddcc: 0x0  nop
    ctx->pc = 0x27ddccu;
    // NOP
label_27ddd0:
    // 0x27ddd0: 0x641ff9f  bgez        $s2, . + 4 + (-0x61 << 2)
label_27ddd4:
    if (ctx->pc == 0x27DDD4u) {
        ctx->pc = 0x27DDD4u;
            // 0x27ddd4: 0x3c05006f  lui         $a1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x27DDD8u;
        goto label_27ddd8;
    }
    ctx->pc = 0x27DDD0u;
    {
        const bool branch_taken_0x27ddd0 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x27DDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DDD0u;
            // 0x27ddd4: 0x3c05006f  lui         $a1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ddd0) {
            ctx->pc = 0x27DC50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27dc50;
        }
    }
    ctx->pc = 0x27DDD8u;
label_27ddd8:
    // 0x27ddd8: 0x27a33494  addiu       $v1, $sp, 0x3494
    ctx->pc = 0x27ddd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 13460));
label_27dddc:
    // 0x27dddc: 0x24a5ea60  addiu       $a1, $a1, -0x15A0
    ctx->pc = 0x27dddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
label_27dde0:
    // 0x27dde0: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x27dde0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_27dde4:
    // 0x27dde4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x27dde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27dde8:
    // 0x27dde8: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x27dde8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_27ddec:
    // 0x27ddec: 0xa3a23494  sb          $v0, 0x3494($sp)
    ctx->pc = 0x27ddecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 13460), (uint8_t)GPR_U32(ctx, 2));
label_27ddf0:
    // 0x27ddf0: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x27ddf0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_27ddf4:
    // 0x27ddf4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_27ddf8:
    if (ctx->pc == 0x27DDF8u) {
        ctx->pc = 0x27DDFCu;
        goto label_27ddfc;
    }
    ctx->pc = 0x27DDF4u;
    {
        const bool branch_taken_0x27ddf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ddf4) {
            ctx->pc = 0x27DE28u;
            goto label_27de28;
        }
    }
    ctx->pc = 0x27DDFCu;
label_27ddfc:
    // 0x27ddfc: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x27ddfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_27de00:
    // 0x27de00: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x27de00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_27de04:
    // 0x27de04: 0x2442d648  addiu       $v0, $v0, -0x29B8
    ctx->pc = 0x27de04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956616));
label_27de08:
    // 0x27de08: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x27de08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_27de0c:
    // 0x27de0c: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27de0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_27de10:
    // 0x27de10: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x27de10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_27de14:
    // 0x27de14: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27de14u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_27de18:
    // 0x27de18: 0x2482000c  addiu       $v0, $a0, 0xC
    ctx->pc = 0x27de18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_27de1c:
    // 0x27de1c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x27de1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_27de20:
    // 0x27de20: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x27de20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_27de24:
    // 0x27de24: 0x0  nop
    ctx->pc = 0x27de24u;
    // NOP
label_27de28:
    // 0x27de28: 0xc6820014  lwc1        $f2, 0x14($s4)
    ctx->pc = 0x27de28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27de2c:
    // 0x27de2c: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x27de2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27de30:
    // 0x27de30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27de30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27de34:
    // 0x27de34: 0x0  nop
    ctx->pc = 0x27de34u;
    // NOP
label_27de38:
    // 0x27de38: 0xe7a13130  swc1        $f1, 0x3130($sp)
    ctx->pc = 0x27de38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12592), bits); }
label_27de3c:
    // 0x27de3c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x27de3cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_27de40:
    // 0x27de40: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x27de40u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27de44:
    // 0x27de44: 0xe7a23134  swc1        $f2, 0x3134($sp)
    ctx->pc = 0x27de44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12596), bits); }
label_27de48:
    // 0x27de48: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_27de4c:
    if (ctx->pc == 0x27DE4Cu) {
        ctx->pc = 0x27DE4Cu;
            // 0x27de4c: 0xe7a13138  swc1        $f1, 0x3138($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12600), bits); }
        ctx->pc = 0x27DE50u;
        goto label_27de50;
    }
    ctx->pc = 0x27DE48u;
    {
        const bool branch_taken_0x27de48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27DE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DE48u;
            // 0x27de4c: 0xe7a13138  swc1        $f1, 0x3138($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12600), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27de48) {
            ctx->pc = 0x27DE58u;
            goto label_27de58;
        }
    }
    ctx->pc = 0x27DE50u;
label_27de50:
    // 0x27de50: 0x10000005  b           . + 4 + (0x5 << 2)
label_27de54:
    if (ctx->pc == 0x27DE54u) {
        ctx->pc = 0x27DE58u;
        goto label_27de58;
    }
    ctx->pc = 0x27DE50u;
    {
        const bool branch_taken_0x27de50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27de50) {
            ctx->pc = 0x27DE68u;
            goto label_27de68;
        }
    }
    ctx->pc = 0x27DE58u;
label_27de58:
    // 0x27de58: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27de58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_27de5c:
    // 0x27de5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27de5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27de60:
    // 0x27de60: 0x0  nop
    ctx->pc = 0x27de60u;
    // NOP
label_27de64:
    // 0x27de64: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x27de64u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_27de68:
    // 0x27de68: 0x27a23130  addiu       $v0, $sp, 0x3130
    ctx->pc = 0x27de68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 12592));
label_27de6c:
    // 0x27de6c: 0xe7a0313c  swc1        $f0, 0x313C($sp)
    ctx->pc = 0x27de6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12604), bits); }
label_27de70:
    // 0x27de70: 0x27a43134  addiu       $a0, $sp, 0x3134
    ctx->pc = 0x27de70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 12596));
label_27de74:
    // 0x27de74: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27de74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27de78:
    // 0x27de78: 0x8e05006c  lw          $a1, 0x6C($s0)
    ctx->pc = 0x27de78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_27de7c:
    // 0x27de7c: 0x27a33138  addiu       $v1, $sp, 0x3138
    ctx->pc = 0x27de7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 12600));
label_27de80:
    // 0x27de80: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x27de80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
label_27de84:
    // 0x27de84: 0x27a2313c  addiu       $v0, $sp, 0x313C
    ctx->pc = 0x27de84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 12604));
label_27de88:
    // 0x27de88: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x27de88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27de8c:
    // 0x27de8c: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x27de8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
label_27de90:
    // 0x27de90: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x27de90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27de94:
    // 0x27de94: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x27de94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
label_27de98:
    // 0x27de98: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27de98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27de9c:
    // 0x27de9c: 0xe4a0002c  swc1        $f0, 0x2C($a1)
    ctx->pc = 0x27de9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
label_27dea0:
    // 0x27dea0: 0x8fbe3144  lw          $fp, 0x3144($sp)
    ctx->pc = 0x27dea0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12612)));
label_27dea4:
    // 0x27dea4: 0x8fb63140  lw          $s6, 0x3140($sp)
    ctx->pc = 0x27dea4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12608)));
label_27dea8:
    // 0x27dea8: 0x13c000f5  beqz        $fp, . + 4 + (0xF5 << 2)
label_27deac:
    if (ctx->pc == 0x27DEACu) {
        ctx->pc = 0x27DEACu;
            // 0x27deac: 0x8e12006c  lw          $s2, 0x6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
        ctx->pc = 0x27DEB0u;
        goto label_27deb0;
    }
    ctx->pc = 0x27DEA8u;
    {
        const bool branch_taken_0x27dea8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DEA8u;
            // 0x27deac: 0x8e12006c  lw          $s2, 0x6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dea8) {
            ctx->pc = 0x27E280u;
            goto label_27e280;
        }
    }
    ctx->pc = 0x27DEB0u;
label_27deb0:
    // 0x27deb0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x27deb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27deb4:
    // 0x27deb4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27deb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27deb8:
    // 0x27deb8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x27deb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_27debc:
    // 0x27debc: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x27debcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_27dec0:
    // 0x27dec0: 0xc09f034  jal         func_27C0D0
label_27dec4:
    if (ctx->pc == 0x27DEC4u) {
        ctx->pc = 0x27DEC4u;
            // 0x27dec4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27DEC8u;
        goto label_27dec8;
    }
    ctx->pc = 0x27DEC0u;
    SET_GPR_U32(ctx, 31, 0x27DEC8u);
    ctx->pc = 0x27DEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DEC0u;
            // 0x27dec4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27C0D0u;
    if (runtime->hasFunction(0x27C0D0u)) {
        auto targetFn = runtime->lookupFunction(0x27C0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DEC8u; }
        if (ctx->pc != 0x27DEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027C0D0_0x27c0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DEC8u; }
        if (ctx->pc != 0x27DEC8u) { return; }
    }
    ctx->pc = 0x27DEC8u;
label_27dec8:
    // 0x27dec8: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x27dec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_27decc:
    // 0x27decc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27deccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27ded0:
    // 0x27ded0: 0x8c23ea20  lw          $v1, -0x15E0($at)
    ctx->pc = 0x27ded0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961696)));
label_27ded4:
    // 0x27ded4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x27ded4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_27ded8:
    // 0x27ded8: 0x106200e9  beq         $v1, $v0, . + 4 + (0xE9 << 2)
label_27dedc:
    if (ctx->pc == 0x27DEDCu) {
        ctx->pc = 0x27DEE0u;
        goto label_27dee0;
    }
    ctx->pc = 0x27DED8u;
    {
        const bool branch_taken_0x27ded8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27ded8) {
            ctx->pc = 0x27E280u;
            goto label_27e280;
        }
    }
    ctx->pc = 0x27DEE0u;
label_27dee0:
    // 0x27dee0: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x27dee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_27dee4:
    // 0x27dee4: 0x27b03120  addiu       $s0, $sp, 0x3120
    ctx->pc = 0x27dee4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 12576));
label_27dee8:
    // 0x27dee8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x27dee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_27deec:
    // 0x27deec: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x27deecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_27def0:
    // 0x27def0: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x27def0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_27def4:
    // 0x27def4: 0x8c770094  lw          $s7, 0x94($v1)
    ctx->pc = 0x27def4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_27def8:
    // 0x27def8: 0x8ef10050  lw          $s1, 0x50($s7)
    ctx->pc = 0x27def8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 80)));
label_27defc:
    // 0x27defc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x27defcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_27df00:
    // 0x27df00: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x27df00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_27df04:
    // 0x27df04: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x27df04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_27df08:
    // 0x27df08: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x27df08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_27df0c:
    // 0x27df0c: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x27df0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_27df10:
    // 0x27df10: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x27df10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_27df14:
    // 0x27df14: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x27df14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_27df18:
    // 0x27df18: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x27df18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_27df1c:
    // 0x27df1c: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x27df1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_27df20:
    // 0x27df20: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x27df20u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_27df24:
    // 0x27df24: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_27df28:
    if (ctx->pc == 0x27DF28u) {
        ctx->pc = 0x27DF2Cu;
        goto label_27df2c;
    }
    ctx->pc = 0x27DF24u;
    {
        const bool branch_taken_0x27df24 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x27df24) {
            ctx->pc = 0x27DF38u;
            goto label_27df38;
        }
    }
    ctx->pc = 0x27DF2Cu;
label_27df2c:
    // 0x27df2c: 0x10000006  b           . + 4 + (0x6 << 2)
label_27df30:
    if (ctx->pc == 0x27DF30u) {
        ctx->pc = 0x27DF30u;
            // 0x27df30: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x27DF34u;
        goto label_27df34;
    }
    ctx->pc = 0x27DF2Cu;
    {
        const bool branch_taken_0x27df2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DF2Cu;
            // 0x27df30: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27df2c) {
            ctx->pc = 0x27DF48u;
            goto label_27df48;
        }
    }
    ctx->pc = 0x27DF34u;
label_27df34:
    // 0x27df34: 0x0  nop
    ctx->pc = 0x27df34u;
    // NOP
label_27df38:
    // 0x27df38: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27df38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27df3c:
    // 0x27df3c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x27df3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_27df40:
    // 0x27df40: 0x320f809  jalr        $t9
label_27df44:
    if (ctx->pc == 0x27DF44u) {
        ctx->pc = 0x27DF48u;
        goto label_27df48;
    }
    ctx->pc = 0x27DF40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27DF48u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x27DF48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27DF48u; }
            if (ctx->pc != 0x27DF48u) { return; }
        }
        }
    }
    ctx->pc = 0x27DF48u;
label_27df48:
    // 0x27df48: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x27df48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_27df4c:
    // 0x27df4c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x27df4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_27df50:
    // 0x27df50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27df50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27df54:
    // 0x27df54: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x27df54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_27df58:
    // 0x27df58: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27df58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27df5c:
    // 0x27df5c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x27df5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_27df60:
    // 0x27df60: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x27df60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27df64:
    // 0x27df64: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x27df64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_27df68:
    // 0x27df68: 0x8fa43120  lw          $a0, 0x3120($sp)
    ctx->pc = 0x27df68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12576)));
label_27df6c:
    // 0x27df6c: 0xc0a8458  jal         func_2A1160
label_27df70:
    if (ctx->pc == 0x27DF70u) {
        ctx->pc = 0x27DF70u;
            // 0x27df70: 0xafb13124  sw          $s1, 0x3124($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12580), GPR_U32(ctx, 17));
        ctx->pc = 0x27DF74u;
        goto label_27df74;
    }
    ctx->pc = 0x27DF6Cu;
    SET_GPR_U32(ctx, 31, 0x27DF74u);
    ctx->pc = 0x27DF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DF6Cu;
            // 0x27df70: 0xafb13124  sw          $s1, 0x3124($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12580), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1160u;
    if (runtime->hasFunction(0x2A1160u)) {
        auto targetFn = runtime->lookupFunction(0x2A1160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DF74u; }
        if (ctx->pc != 0x27DF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1160_0x2a1160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DF74u; }
        if (ctx->pc != 0x27DF74u) { return; }
    }
    ctx->pc = 0x27DF74u;
label_27df74:
    // 0x27df74: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x27df74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_27df78:
    // 0x27df78: 0x27a230d0  addiu       $v0, $sp, 0x30D0
    ctx->pc = 0x27df78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 12496));
label_27df7c:
    // 0x27df7c: 0x0  nop
    ctx->pc = 0x27df7cu;
    // NOP
label_27df80:
    // 0x27df80: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x27df80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_27df84:
    // 0x27df84: 0x0  nop
    ctx->pc = 0x27df84u;
    // NOP
label_27df88:
    // 0x27df88: 0x0  nop
    ctx->pc = 0x27df88u;
    // NOP
label_27df8c:
    // 0x27df8c: 0x0  nop
    ctx->pc = 0x27df8cu;
    // NOP
label_27df90:
    // 0x27df90: 0x0  nop
    ctx->pc = 0x27df90u;
    // NOP
label_27df94:
    // 0x27df94: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
label_27df98:
    if (ctx->pc == 0x27DF98u) {
        ctx->pc = 0x27DF9Cu;
        goto label_27df9c;
    }
    ctx->pc = 0x27DF94u;
    {
        const bool branch_taken_0x27df94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27df94) {
            ctx->pc = 0x27DF80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27df80;
        }
    }
    ctx->pc = 0x27DF9Cu;
label_27df9c:
    // 0x27df9c: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x27df9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_27dfa0:
    // 0x27dfa0: 0xafb700c4  sw          $s7, 0xC4($sp)
    ctx->pc = 0x27dfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 23));
label_27dfa4:
    // 0x27dfa4: 0x3442ffee  ori         $v0, $v0, 0xFFEE
    ctx->pc = 0x27dfa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_27dfa8:
    // 0x27dfa8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x27dfa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27dfac:
    // 0x27dfac: 0x10000098  b           . + 4 + (0x98 << 2)
label_27dfb0:
    if (ctx->pc == 0x27DFB0u) {
        ctx->pc = 0x27DFB0u;
            // 0x27dfb0: 0xafa230f0  sw          $v0, 0x30F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12528), GPR_U32(ctx, 2));
        ctx->pc = 0x27DFB4u;
        goto label_27dfb4;
    }
    ctx->pc = 0x27DFACu;
    {
        const bool branch_taken_0x27dfac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DFB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DFACu;
            // 0x27dfb0: 0xafa230f0  sw          $v0, 0x30F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dfac) {
            ctx->pc = 0x27E210u;
            goto label_27e210;
        }
    }
    ctx->pc = 0x27DFB4u;
label_27dfb4:
    // 0x27dfb4: 0x0  nop
    ctx->pc = 0x27dfb4u;
    // NOP
label_27dfb8:
    // 0x27dfb8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x27dfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_27dfbc:
    // 0x27dfbc: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x27dfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_27dfc0:
    // 0x27dfc0: 0x8fa43120  lw          $a0, 0x3120($sp)
    ctx->pc = 0x27dfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12576)));
label_27dfc4:
    // 0x27dfc4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x27dfc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27dfc8:
    // 0x27dfc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27dfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27dfcc:
    // 0x27dfcc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x27dfccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27dfd0:
    // 0x27dfd0: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x27dfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_27dfd4:
    // 0x27dfd4: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x27dfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_27dfd8:
    // 0x27dfd8: 0x94a2006c  lhu         $v0, 0x6C($a1)
    ctx->pc = 0x27dfd8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 108)));
label_27dfdc:
    // 0x27dfdc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x27dfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_27dfe0:
    // 0x27dfe0: 0x10000085  b           . + 4 + (0x85 << 2)
label_27dfe4:
    if (ctx->pc == 0x27DFE4u) {
        ctx->pc = 0x27DFE4u;
            // 0x27dfe4: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x27DFE8u;
        goto label_27dfe8;
    }
    ctx->pc = 0x27DFE0u;
    {
        const bool branch_taken_0x27dfe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DFE0u;
            // 0x27dfe4: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dfe0) {
            ctx->pc = 0x27E1F8u;
            goto label_27e1f8;
        }
    }
    ctx->pc = 0x27DFE8u;
label_27dfe8:
    // 0x27dfe8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x27dfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_27dfec:
    // 0x27dfec: 0x1518c0  sll         $v1, $s5, 3
    ctx->pc = 0x27dfecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_27dff0:
    // 0x27dff0: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x27dff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_27dff4:
    // 0x27dff4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x27dff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27dff8:
    // 0x27dff8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x27dff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_27dffc:
    // 0x27dffc: 0x80620010  lb          $v0, 0x10($v1)
    ctx->pc = 0x27dffcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_27e000:
    // 0x27e000: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27e000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_27e004:
    // 0x27e004: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x27e004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_27e008:
    // 0x27e008: 0x14570007  bne         $v0, $s7, . + 4 + (0x7 << 2)
label_27e00c:
    if (ctx->pc == 0x27E00Cu) {
        ctx->pc = 0x27E010u;
        goto label_27e010;
    }
    ctx->pc = 0x27E008u;
    {
        const bool branch_taken_0x27e008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x27e008) {
            ctx->pc = 0x27E028u;
            goto label_27e028;
        }
    }
    ctx->pc = 0x27E010u;
label_27e010:
    // 0x27e010: 0x9463006c  lhu         $v1, 0x6C($v1)
    ctx->pc = 0x27e010u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 108)));
label_27e014:
    // 0x27e014: 0x8fa23120  lw          $v0, 0x3120($sp)
    ctx->pc = 0x27e014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12576)));
label_27e018:
    // 0x27e018: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27e018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27e01c:
    // 0x27e01c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x27e01cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_27e020:
    // 0x27e020: 0x14400073  bnez        $v0, . + 4 + (0x73 << 2)
label_27e024:
    if (ctx->pc == 0x27E024u) {
        ctx->pc = 0x27E028u;
        goto label_27e028;
    }
    ctx->pc = 0x27E020u;
    {
        const bool branch_taken_0x27e020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e020) {
            ctx->pc = 0x27E1F0u;
            goto label_27e1f0;
        }
    }
    ctx->pc = 0x27E028u;
label_27e028:
    // 0x27e028: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x27e028u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27e02c:
    // 0x27e02c: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x27e02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_27e030:
    // 0x27e030: 0x27a3347c  addiu       $v1, $sp, 0x347C
    ctx->pc = 0x27e030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 13436));
label_27e034:
    // 0x27e034: 0x3442ffee  ori         $v0, $v0, 0xFFEE
    ctx->pc = 0x27e034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_27e038:
    // 0x27e038: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27e038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27e03c:
    // 0x27e03c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x27e03cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_27e040:
    // 0x27e040: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x27e040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_27e044:
    // 0x27e044: 0xafa230f0  sw          $v0, 0x30F0($sp)
    ctx->pc = 0x27e044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12528), GPR_U32(ctx, 2));
label_27e048:
    // 0x27e048: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x27e048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
label_27e04c:
    // 0x27e04c: 0xafa03110  sw          $zero, 0x3110($sp)
    ctx->pc = 0x27e04cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12560), GPR_U32(ctx, 0));
label_27e050:
    // 0x27e050: 0x82070010  lb          $a3, 0x10($s0)
    ctx->pc = 0x27e050u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_27e054:
    // 0x27e054: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x27e054u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_27e058:
    // 0x27e058: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x27e058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_27e05c:
    // 0x27e05c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x27e05cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_27e060:
    // 0x27e060: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27e060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_27e064:
    // 0x27e064: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x27e064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_27e068:
    // 0x27e068: 0x24421a50  addiu       $v0, $v0, 0x1A50
    ctx->pc = 0x27e068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6736));
label_27e06c:
    // 0x27e06c: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x27e06cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
label_27e070:
    // 0x27e070: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x27e070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_27e074:
    // 0x27e074: 0x90420010  lbu         $v0, 0x10($v0)
    ctx->pc = 0x27e074u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
label_27e078:
    // 0x27e078: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x27e078u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_27e07c:
    // 0x27e07c: 0x83a2347c  lb          $v0, 0x347C($sp)
    ctx->pc = 0x27e07cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 13436)));
label_27e080:
    // 0x27e080: 0xa2420010  sb          $v0, 0x10($s2)
    ctx->pc = 0x27e080u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 2));
label_27e084:
    // 0x27e084: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x27e084u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_27e088:
    // 0x27e088: 0xc092544  jal         func_249510
label_27e08c:
    if (ctx->pc == 0x27E08Cu) {
        ctx->pc = 0x27E08Cu;
            // 0x27e08c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27E090u;
        goto label_27e090;
    }
    ctx->pc = 0x27E088u;
    SET_GPR_U32(ctx, 31, 0x27E090u);
    ctx->pc = 0x27E08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E088u;
            // 0x27e08c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x249510u;
    if (runtime->hasFunction(0x249510u)) {
        auto targetFn = runtime->lookupFunction(0x249510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E090u; }
        if (ctx->pc != 0x27E090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00249510_0x249510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E090u; }
        if (ctx->pc != 0x27E090u) { return; }
    }
    ctx->pc = 0x27E090u;
label_27e090:
    // 0x27e090: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x27e090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_27e094:
    // 0x27e094: 0x8c22ea20  lw          $v0, -0x15E0($at)
    ctx->pc = 0x27e094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961696)));
label_27e098:
    // 0x27e098: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x27e098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_27e09c:
    // 0x27e09c: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x27e09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_27e0a0:
    // 0x27e0a0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x27e0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_27e0a4:
    // 0x27e0a4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x27e0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_27e0a8:
    // 0x27e0a8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x27e0a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_27e0ac:
    // 0x27e0ac: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_27e0b0:
    if (ctx->pc == 0x27E0B0u) {
        ctx->pc = 0x27E0B4u;
        goto label_27e0b4;
    }
    ctx->pc = 0x27E0ACu;
    {
        const bool branch_taken_0x27e0ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e0ac) {
            ctx->pc = 0x27E0C0u;
            goto label_27e0c0;
        }
    }
    ctx->pc = 0x27E0B4u;
label_27e0b4:
    // 0x27e0b4: 0x10000004  b           . + 4 + (0x4 << 2)
label_27e0b8:
    if (ctx->pc == 0x27E0B8u) {
        ctx->pc = 0x27E0B8u;
            // 0x27e0b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27E0BCu;
        goto label_27e0bc;
    }
    ctx->pc = 0x27E0B4u;
    {
        const bool branch_taken_0x27e0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E0B4u;
            // 0x27e0b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e0b4) {
            ctx->pc = 0x27E0C8u;
            goto label_27e0c8;
        }
    }
    ctx->pc = 0x27E0BCu;
label_27e0bc:
    // 0x27e0bc: 0x0  nop
    ctx->pc = 0x27e0bcu;
    // NOP
label_27e0c0:
    // 0x27e0c0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x27e0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27e0c4:
    // 0x27e0c4: 0x0  nop
    ctx->pc = 0x27e0c4u;
    // NOP
label_27e0c8:
    // 0x27e0c8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_27e0cc:
    if (ctx->pc == 0x27E0CCu) {
        ctx->pc = 0x27E0CCu;
            // 0x27e0cc: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x27E0D0u;
        goto label_27e0d0;
    }
    ctx->pc = 0x27E0C8u;
    {
        const bool branch_taken_0x27e0c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E0C8u;
            // 0x27e0cc: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e0c8) {
            ctx->pc = 0x27E0E0u;
            goto label_27e0e0;
        }
    }
    ctx->pc = 0x27E0D0u;
label_27e0d0:
    // 0x27e0d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27e0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27e0d4:
    // 0x27e0d4: 0x8c23ea20  lw          $v1, -0x15E0($at)
    ctx->pc = 0x27e0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961696)));
label_27e0d8:
    // 0x27e0d8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x27e0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_27e0dc:
    // 0x27e0dc: 0x0  nop
    ctx->pc = 0x27e0dcu;
    // NOP
label_27e0e0:
    // 0x27e0e0: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x27e0e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_27e0e4:
    // 0x27e0e4: 0x8c23ea20  lw          $v1, -0x15E0($at)
    ctx->pc = 0x27e0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961696)));
label_27e0e8:
    // 0x27e0e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27e0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27e0ec:
    // 0x27e0ec: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x27e0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_27e0f0:
    // 0x27e0f0: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
label_27e0f4:
    if (ctx->pc == 0x27E0F4u) {
        ctx->pc = 0x27E0F4u;
            // 0x27e0f4: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x27E0F8u;
        goto label_27e0f8;
    }
    ctx->pc = 0x27E0F0u;
    {
        const bool branch_taken_0x27e0f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27E0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E0F0u;
            // 0x27e0f4: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e0f0) {
            ctx->pc = 0x27E160u;
            goto label_27e160;
        }
    }
    ctx->pc = 0x27E0F8u;
label_27e0f8:
    // 0x27e0f8: 0x8fa5312c  lw          $a1, 0x312C($sp)
    ctx->pc = 0x27e0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12588)));
label_27e0fc:
    // 0x27e0fc: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x27e0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_27e100:
    // 0x27e100: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x27e100u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_27e104:
    // 0x27e104: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x27e104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_27e108:
    // 0x27e108: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
label_27e10c:
    if (ctx->pc == 0x27E10Cu) {
        ctx->pc = 0x27E110u;
        goto label_27e110;
    }
    ctx->pc = 0x27E108u;
    {
        const bool branch_taken_0x27e108 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x27e108) {
            ctx->pc = 0x27E120u;
            goto label_27e120;
        }
    }
    ctx->pc = 0x27E110u;
label_27e110:
    // 0x27e110: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27e110u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27e114:
    // 0x27e114: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x27e114u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_27e118:
    // 0x27e118: 0x320f809  jalr        $t9
label_27e11c:
    if (ctx->pc == 0x27E11Cu) {
        ctx->pc = 0x27E120u;
        goto label_27e120;
    }
    ctx->pc = 0x27E118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27E120u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x27E120u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27E120u; }
            if (ctx->pc != 0x27E120u) { return; }
        }
        }
    }
    ctx->pc = 0x27E120u;
label_27e120:
    // 0x27e120: 0x8fa33128  lw          $v1, 0x3128($sp)
    ctx->pc = 0x27e120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12584)));
label_27e124:
    // 0x27e124: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x27e124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_27e128:
    // 0x27e128: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27e128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_27e12c:
    // 0x27e12c: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
label_27e130:
    if (ctx->pc == 0x27E130u) {
        ctx->pc = 0x27E134u;
        goto label_27e134;
    }
    ctx->pc = 0x27E12Cu;
    {
        const bool branch_taken_0x27e12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e12c) {
            ctx->pc = 0x27E280u;
            goto label_27e280;
        }
    }
    ctx->pc = 0x27E134u;
label_27e134:
    // 0x27e134: 0x8fa23128  lw          $v0, 0x3128($sp)
    ctx->pc = 0x27e134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12584)));
label_27e138:
    // 0x27e138: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x27e138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_27e13c:
    // 0x27e13c: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x27e13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_27e140:
    // 0x27e140: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x27e140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_27e144:
    // 0x27e144: 0x8fa53120  lw          $a1, 0x3120($sp)
    ctx->pc = 0x27e144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12576)));
label_27e148:
    // 0x27e148: 0x230bc  dsll32      $a2, $v0, 2
    ctx->pc = 0x27e148u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 2));
label_27e14c:
    // 0x27e14c: 0xc0a7ab4  jal         func_29EAD0
label_27e150:
    if (ctx->pc == 0x27E150u) {
        ctx->pc = 0x27E150u;
            // 0x27e150: 0x630be  dsrl32      $a2, $a2, 2 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 2));
        ctx->pc = 0x27E154u;
        goto label_27e154;
    }
    ctx->pc = 0x27E14Cu;
    SET_GPR_U32(ctx, 31, 0x27E154u);
    ctx->pc = 0x27E150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E14Cu;
            // 0x27e150: 0x630be  dsrl32      $a2, $a2, 2 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E154u; }
        if (ctx->pc != 0x27E154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E154u; }
        if (ctx->pc != 0x27E154u) { return; }
    }
    ctx->pc = 0x27E154u;
label_27e154:
    // 0x27e154: 0x1000004a  b           . + 4 + (0x4A << 2)
label_27e158:
    if (ctx->pc == 0x27E158u) {
        ctx->pc = 0x27E15Cu;
        goto label_27e15c;
    }
    ctx->pc = 0x27E154u;
    {
        const bool branch_taken_0x27e154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e154) {
            ctx->pc = 0x27E280u;
            goto label_27e280;
        }
    }
    ctx->pc = 0x27E15Cu;
label_27e15c:
    // 0x27e15c: 0x0  nop
    ctx->pc = 0x27e15cu;
    // NOP
label_27e160:
    // 0x27e160: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x27e160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_27e164:
    // 0x27e164: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x27e164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_27e168:
    // 0x27e168: 0x27a33484  addiu       $v1, $sp, 0x3484
    ctx->pc = 0x27e168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 13444));
label_27e16c:
    // 0x27e16c: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x27e16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
label_27e170:
    // 0x27e170: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x27e170u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_27e174:
    // 0x27e174: 0xa3a23484  sb          $v0, 0x3484($sp)
    ctx->pc = 0x27e174u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 13444), (uint8_t)GPR_U32(ctx, 2));
label_27e178:
    // 0x27e178: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x27e178u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_27e17c:
    // 0x27e17c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_27e180:
    if (ctx->pc == 0x27E180u) {
        ctx->pc = 0x27E184u;
        goto label_27e184;
    }
    ctx->pc = 0x27E17Cu;
    {
        const bool branch_taken_0x27e17c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e17c) {
            ctx->pc = 0x27E1A8u;
            goto label_27e1a8;
        }
    }
    ctx->pc = 0x27E184u;
label_27e184:
    // 0x27e184: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x27e184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_27e188:
    // 0x27e188: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x27e188u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27e18c:
    // 0x27e18c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x27e18cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_27e190:
    // 0x27e190: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x27e190u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_27e194:
    // 0x27e194: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27e194u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27e198:
    // 0x27e198: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x27e198u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_27e19c:
    // 0x27e19c: 0x320f809  jalr        $t9
label_27e1a0:
    if (ctx->pc == 0x27E1A0u) {
        ctx->pc = 0x27E1A0u;
            // 0x27e1a0: 0x27a800c0  addiu       $t0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x27E1A4u;
        goto label_27e1a4;
    }
    ctx->pc = 0x27E19Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27E1A4u);
        ctx->pc = 0x27E1A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E19Cu;
            // 0x27e1a0: 0x27a800c0  addiu       $t0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27E1A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27E1A4u; }
            if (ctx->pc != 0x27E1A4u) { return; }
        }
        }
    }
    ctx->pc = 0x27E1A4u;
label_27e1a4:
    // 0x27e1a4: 0x0  nop
    ctx->pc = 0x27e1a4u;
    // NOP
label_27e1a8:
    // 0x27e1a8: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x27e1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_27e1ac:
    // 0x27e1ac: 0xc7a130f0  lwc1        $f1, 0x30F0($sp)
    ctx->pc = 0x27e1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27e1b0:
    // 0x27e1b0: 0x3442ffee  ori         $v0, $v0, 0xFFEE
    ctx->pc = 0x27e1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_27e1b4:
    // 0x27e1b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27e1b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27e1b8:
    // 0x27e1b8: 0x0  nop
    ctx->pc = 0x27e1b8u;
    // NOP
label_27e1bc:
    // 0x27e1bc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x27e1bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27e1c0:
    // 0x27e1c0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_27e1c4:
    if (ctx->pc == 0x27E1C4u) {
        ctx->pc = 0x27E1C4u;
            // 0x27e1c4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x27E1C8u;
        goto label_27e1c8;
    }
    ctx->pc = 0x27E1C0u;
    {
        const bool branch_taken_0x27e1c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27E1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E1C0u;
            // 0x27e1c4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e1c0) {
            ctx->pc = 0x27E1CCu;
            goto label_27e1cc;
        }
    }
    ctx->pc = 0x27E1C8u;
label_27e1c8:
    // 0x27e1c8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x27e1c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27e1cc:
    // 0x27e1cc: 0xa3a33480  sb          $v1, 0x3480($sp)
    ctx->pc = 0x27e1ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 13440), (uint8_t)GPR_U32(ctx, 3));
label_27e1d0:
    // 0x27e1d0: 0x27a23480  addiu       $v0, $sp, 0x3480
    ctx->pc = 0x27e1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 13440));
label_27e1d4:
    // 0x27e1d4: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x27e1d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_27e1d8:
    // 0x27e1d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_27e1dc:
    if (ctx->pc == 0x27E1DCu) {
        ctx->pc = 0x27E1DCu;
            // 0x27e1dc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27E1E0u;
        goto label_27e1e0;
    }
    ctx->pc = 0x27E1D8u;
    {
        const bool branch_taken_0x27e1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E1D8u;
            // 0x27e1dc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e1d8) {
            ctx->pc = 0x27E1F0u;
            goto label_27e1f0;
        }
    }
    ctx->pc = 0x27E1E0u;
label_27e1e0:
    // 0x27e1e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27e1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27e1e4:
    // 0x27e1e4: 0xc09f480  jal         func_27D200
label_27e1e8:
    if (ctx->pc == 0x27E1E8u) {
        ctx->pc = 0x27E1E8u;
            // 0x27e1e8: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x27E1ECu;
        goto label_27e1ec;
    }
    ctx->pc = 0x27E1E4u;
    SET_GPR_U32(ctx, 31, 0x27E1ECu);
    ctx->pc = 0x27E1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E1E4u;
            // 0x27e1e8: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D200u;
    if (runtime->hasFunction(0x27D200u)) {
        auto targetFn = runtime->lookupFunction(0x27D200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E1ECu; }
        if (ctx->pc != 0x27E1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027D200_0x27d200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E1ECu; }
        if (ctx->pc != 0x27E1ECu) { return; }
    }
    ctx->pc = 0x27E1ECu;
label_27e1ec:
    // 0x27e1ec: 0x0  nop
    ctx->pc = 0x27e1ecu;
    // NOP
label_27e1f0:
    // 0x27e1f0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x27e1f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_27e1f4:
    // 0x27e1f4: 0x0  nop
    ctx->pc = 0x27e1f4u;
    // NOP
label_27e1f8:
    // 0x27e1f8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x27e1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_27e1fc:
    // 0x27e1fc: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x27e1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_27e200:
    // 0x27e200: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x27e200u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_27e204:
    // 0x27e204: 0x1440ff78  bnez        $v0, . + 4 + (-0x88 << 2)
label_27e208:
    if (ctx->pc == 0x27E208u) {
        ctx->pc = 0x27E20Cu;
        goto label_27e20c;
    }
    ctx->pc = 0x27E204u;
    {
        const bool branch_taken_0x27e204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e204) {
            ctx->pc = 0x27DFE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27dfe8;
        }
    }
    ctx->pc = 0x27E20Cu;
label_27e20c:
    // 0x27e20c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x27e20cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_27e210:
    // 0x27e210: 0x23e102a  slt         $v0, $s1, $fp
    ctx->pc = 0x27e210u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_27e214:
    // 0x27e214: 0x1440ff68  bnez        $v0, . + 4 + (-0x98 << 2)
label_27e218:
    if (ctx->pc == 0x27E218u) {
        ctx->pc = 0x27E218u;
            // 0x27e218: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x27E21Cu;
        goto label_27e21c;
    }
    ctx->pc = 0x27E214u;
    {
        const bool branch_taken_0x27e214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E214u;
            // 0x27e218: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e214) {
            ctx->pc = 0x27DFB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27dfb8;
        }
    }
    ctx->pc = 0x27E21Cu;
label_27e21c:
    // 0x27e21c: 0x8fa5312c  lw          $a1, 0x312C($sp)
    ctx->pc = 0x27e21cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12588)));
label_27e220:
    // 0x27e220: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x27e220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_27e224:
    // 0x27e224: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x27e224u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_27e228:
    // 0x27e228: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x27e228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_27e22c:
    // 0x27e22c: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
label_27e230:
    if (ctx->pc == 0x27E230u) {
        ctx->pc = 0x27E234u;
        goto label_27e234;
    }
    ctx->pc = 0x27E22Cu;
    {
        const bool branch_taken_0x27e22c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x27e22c) {
            ctx->pc = 0x27E248u;
            goto label_27e248;
        }
    }
    ctx->pc = 0x27E234u;
label_27e234:
    // 0x27e234: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27e234u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27e238:
    // 0x27e238: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x27e238u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_27e23c:
    // 0x27e23c: 0x320f809  jalr        $t9
label_27e240:
    if (ctx->pc == 0x27E240u) {
        ctx->pc = 0x27E244u;
        goto label_27e244;
    }
    ctx->pc = 0x27E23Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27E244u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x27E244u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27E244u; }
            if (ctx->pc != 0x27E244u) { return; }
        }
        }
    }
    ctx->pc = 0x27E244u;
label_27e244:
    // 0x27e244: 0x0  nop
    ctx->pc = 0x27e244u;
    // NOP
label_27e248:
    // 0x27e248: 0x8fa33128  lw          $v1, 0x3128($sp)
    ctx->pc = 0x27e248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12584)));
label_27e24c:
    // 0x27e24c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x27e24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_27e250:
    // 0x27e250: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27e250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_27e254:
    // 0x27e254: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_27e258:
    if (ctx->pc == 0x27E258u) {
        ctx->pc = 0x27E25Cu;
        goto label_27e25c;
    }
    ctx->pc = 0x27E254u;
    {
        const bool branch_taken_0x27e254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e254) {
            ctx->pc = 0x27E280u;
            goto label_27e280;
        }
    }
    ctx->pc = 0x27E25Cu;
label_27e25c:
    // 0x27e25c: 0x8fa23128  lw          $v0, 0x3128($sp)
    ctx->pc = 0x27e25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12584)));
label_27e260:
    // 0x27e260: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x27e260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_27e264:
    // 0x27e264: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x27e264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_27e268:
    // 0x27e268: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x27e268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_27e26c:
    // 0x27e26c: 0x8fa53120  lw          $a1, 0x3120($sp)
    ctx->pc = 0x27e26cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12576)));
label_27e270:
    // 0x27e270: 0x230bc  dsll32      $a2, $v0, 2
    ctx->pc = 0x27e270u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 2));
label_27e274:
    // 0x27e274: 0xc0a7ab4  jal         func_29EAD0
label_27e278:
    if (ctx->pc == 0x27E278u) {
        ctx->pc = 0x27E278u;
            // 0x27e278: 0x630be  dsrl32      $a2, $a2, 2 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 2));
        ctx->pc = 0x27E27Cu;
        goto label_27e27c;
    }
    ctx->pc = 0x27E274u;
    SET_GPR_U32(ctx, 31, 0x27E27Cu);
    ctx->pc = 0x27E278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E274u;
            // 0x27e278: 0x630be  dsrl32      $a2, $a2, 2 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E27Cu; }
        if (ctx->pc != 0x27E27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E27Cu; }
        if (ctx->pc != 0x27E27Cu) { return; }
    }
    ctx->pc = 0x27E27Cu;
label_27e27c:
    // 0x27e27c: 0x0  nop
    ctx->pc = 0x27e27cu;
    // NOP
label_27e280:
    // 0x27e280: 0x8fa33148  lw          $v1, 0x3148($sp)
    ctx->pc = 0x27e280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12616)));
label_27e284:
    // 0x27e284: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x27e284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_27e288:
    // 0x27e288: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27e288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_27e28c:
    // 0x27e28c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_27e290:
    if (ctx->pc == 0x27E290u) {
        ctx->pc = 0x27E294u;
        goto label_27e294;
    }
    ctx->pc = 0x27E28Cu;
    {
        const bool branch_taken_0x27e28c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e28c) {
            ctx->pc = 0x27E2B8u;
            goto label_27e2b8;
        }
    }
    ctx->pc = 0x27E294u;
label_27e294:
    // 0x27e294: 0x8fa23148  lw          $v0, 0x3148($sp)
    ctx->pc = 0x27e294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12616)));
label_27e298:
    // 0x27e298: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x27e298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_27e29c:
    // 0x27e29c: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x27e29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_27e2a0:
    // 0x27e2a0: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x27e2a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_27e2a4:
    // 0x27e2a4: 0x8fa53140  lw          $a1, 0x3140($sp)
    ctx->pc = 0x27e2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12608)));
label_27e2a8:
    // 0x27e2a8: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x27e2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_27e2ac:
    // 0x27e2ac: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x27e2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_27e2b0:
    // 0x27e2b0: 0xc0a7ab4  jal         func_29EAD0
label_27e2b4:
    if (ctx->pc == 0x27E2B4u) {
        ctx->pc = 0x27E2B4u;
            // 0x27e2b4: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x27E2B8u;
        goto label_27e2b8;
    }
    ctx->pc = 0x27E2B0u;
    SET_GPR_U32(ctx, 31, 0x27E2B8u);
    ctx->pc = 0x27E2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27E2B0u;
            // 0x27e2b4: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E2B8u; }
        if (ctx->pc != 0x27E2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E2B8u; }
        if (ctx->pc != 0x27E2B8u) { return; }
    }
    ctx->pc = 0x27E2B8u;
label_27e2b8:
    // 0x27e2b8: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x27e2b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_27e2bc:
    // 0x27e2bc: 0x8fa53470  lw          $a1, 0x3470($sp)
    ctx->pc = 0x27e2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 13424)));
label_27e2c0:
    // 0x27e2c0: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x27e2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_27e2c4:
    // 0x27e2c4: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x27e2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_27e2c8:
    // 0x27e2c8: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x27e2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_27e2cc:
    // 0x27e2cc: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
label_27e2d0:
    if (ctx->pc == 0x27E2D0u) {
        ctx->pc = 0x27E2D4u;
        goto label_27e2d4;
    }
    ctx->pc = 0x27E2CCu;
    {
        const bool branch_taken_0x27e2cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x27e2cc) {
            ctx->pc = 0x27E2E8u;
            goto label_27e2e8;
        }
    }
    ctx->pc = 0x27E2D4u;
label_27e2d4:
    // 0x27e2d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27e2d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27e2d8:
    // 0x27e2d8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x27e2d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_27e2dc:
    // 0x27e2dc: 0x320f809  jalr        $t9
label_27e2e0:
    if (ctx->pc == 0x27E2E0u) {
        ctx->pc = 0x27E2E4u;
        goto label_27e2e4;
    }
    ctx->pc = 0x27E2DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27E2E4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x27E2E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27E2E4u; }
            if (ctx->pc != 0x27E2E4u) { return; }
        }
        }
    }
    ctx->pc = 0x27E2E4u;
label_27e2e4:
    // 0x27e2e4: 0x0  nop
    ctx->pc = 0x27e2e4u;
    // NOP
label_27e2e8:
    // 0x27e2e8: 0x8e84003c  lw          $a0, 0x3C($s4)
    ctx->pc = 0x27e2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_27e2ec:
    // 0x27e2ec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27e2ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27e2f0:
    // 0x27e2f0: 0x26860030  addiu       $a2, $s4, 0x30
    ctx->pc = 0x27e2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_27e2f4:
    // 0x27e2f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27e2f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27e2f8:
    // 0x27e2f8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x27e2f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_27e2fc:
    // 0x27e2fc: 0x320f809  jalr        $t9
label_27e300:
    if (ctx->pc == 0x27E300u) {
        ctx->pc = 0x27E300u;
            // 0x27e300: 0x27a73450  addiu       $a3, $sp, 0x3450 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 13392));
        ctx->pc = 0x27E304u;
        goto label_27e304;
    }
    ctx->pc = 0x27E2FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27E304u);
        ctx->pc = 0x27E300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E2FCu;
            // 0x27e300: 0x27a73450  addiu       $a3, $sp, 0x3450 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 13392));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27E304u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27E304u; }
            if (ctx->pc != 0x27E304u) { return; }
        }
        }
    }
    ctx->pc = 0x27E304u;
label_27e304:
    // 0x27e304: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x27e304u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_27e308:
    // 0x27e308: 0x27a43490  addiu       $a0, $sp, 0x3490
    ctx->pc = 0x27e308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 13456));
label_27e30c:
    // 0x27e30c: 0x24c6ea60  addiu       $a2, $a2, -0x15A0
    ctx->pc = 0x27e30cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
label_27e310:
    // 0x27e310: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x27e310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_27e314:
    // 0x27e314: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x27e314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_27e318:
    // 0x27e318: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x27e318u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_27e31c:
    // 0x27e31c: 0xa3a33490  sb          $v1, 0x3490($sp)
    ctx->pc = 0x27e31cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 13456), (uint8_t)GPR_U32(ctx, 3));
label_27e320:
    // 0x27e320: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x27e320u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_27e324:
    // 0x27e324: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_27e328:
    if (ctx->pc == 0x27E328u) {
        ctx->pc = 0x27E32Cu;
        goto label_27e32c;
    }
    ctx->pc = 0x27E324u;
    {
        const bool branch_taken_0x27e324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e324) {
            ctx->pc = 0x27E358u;
            goto label_27e358;
        }
    }
    ctx->pc = 0x27E32Cu;
label_27e32c:
    // 0x27e32c: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x27e32cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_27e330:
    // 0x27e330: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x27e330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_27e334:
    // 0x27e334: 0x2463d550  addiu       $v1, $v1, -0x2AB0
    ctx->pc = 0x27e334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956368));
label_27e338:
    // 0x27e338: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x27e338u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_27e33c:
    // 0x27e33c: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27e33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_27e340:
    // 0x27e340: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x27e340u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_27e344:
    // 0x27e344: 0x4004c803  .word       0x4004C803                   # mfc0        $a0, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27e344u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_perf);
label_27e348:
    // 0x27e348: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x27e348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_27e34c:
    // 0x27e34c: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x27e34cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_27e350:
    // 0x27e350: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x27e350u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_27e354:
    // 0x27e354: 0x0  nop
    ctx->pc = 0x27e354u;
    // NOP
label_27e358:
    // 0x27e358: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x27e358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_27e35c:
    // 0x27e35c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x27e35cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_27e360:
    // 0x27e360: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x27e360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_27e364:
    // 0x27e364: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x27e364u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_27e368:
    // 0x27e368: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x27e368u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_27e36c:
    // 0x27e36c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x27e36cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_27e370:
    // 0x27e370: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x27e370u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_27e374:
    // 0x27e374: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x27e374u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27e378:
    // 0x27e378: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x27e378u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27e37c:
    // 0x27e37c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x27e37cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27e380:
    // 0x27e380: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27e380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27e384:
    // 0x27e384: 0x3e00008  jr          $ra
label_27e388:
    if (ctx->pc == 0x27E388u) {
        ctx->pc = 0x27E388u;
            // 0x27e388: 0x27bd34a0  addiu       $sp, $sp, 0x34A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 13472));
        ctx->pc = 0x27E38Cu;
        goto label_27e38c;
    }
    ctx->pc = 0x27E384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27E384u;
            // 0x27e388: 0x27bd34a0  addiu       $sp, $sp, 0x34A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 13472));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27E38Cu;
label_27e38c:
    // 0x27e38c: 0x0  nop
    ctx->pc = 0x27e38cu;
    // NOP
}
