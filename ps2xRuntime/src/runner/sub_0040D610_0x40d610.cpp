#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0040D610
// Address: 0x40d610 - 0x40e1e0
void sub_0040D610_0x40d610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040D610_0x40d610");
#endif

    switch (ctx->pc) {
        case 0x40d610u: goto label_40d610;
        case 0x40d614u: goto label_40d614;
        case 0x40d618u: goto label_40d618;
        case 0x40d61cu: goto label_40d61c;
        case 0x40d620u: goto label_40d620;
        case 0x40d624u: goto label_40d624;
        case 0x40d628u: goto label_40d628;
        case 0x40d62cu: goto label_40d62c;
        case 0x40d630u: goto label_40d630;
        case 0x40d634u: goto label_40d634;
        case 0x40d638u: goto label_40d638;
        case 0x40d63cu: goto label_40d63c;
        case 0x40d640u: goto label_40d640;
        case 0x40d644u: goto label_40d644;
        case 0x40d648u: goto label_40d648;
        case 0x40d64cu: goto label_40d64c;
        case 0x40d650u: goto label_40d650;
        case 0x40d654u: goto label_40d654;
        case 0x40d658u: goto label_40d658;
        case 0x40d65cu: goto label_40d65c;
        case 0x40d660u: goto label_40d660;
        case 0x40d664u: goto label_40d664;
        case 0x40d668u: goto label_40d668;
        case 0x40d66cu: goto label_40d66c;
        case 0x40d670u: goto label_40d670;
        case 0x40d674u: goto label_40d674;
        case 0x40d678u: goto label_40d678;
        case 0x40d67cu: goto label_40d67c;
        case 0x40d680u: goto label_40d680;
        case 0x40d684u: goto label_40d684;
        case 0x40d688u: goto label_40d688;
        case 0x40d68cu: goto label_40d68c;
        case 0x40d690u: goto label_40d690;
        case 0x40d694u: goto label_40d694;
        case 0x40d698u: goto label_40d698;
        case 0x40d69cu: goto label_40d69c;
        case 0x40d6a0u: goto label_40d6a0;
        case 0x40d6a4u: goto label_40d6a4;
        case 0x40d6a8u: goto label_40d6a8;
        case 0x40d6acu: goto label_40d6ac;
        case 0x40d6b0u: goto label_40d6b0;
        case 0x40d6b4u: goto label_40d6b4;
        case 0x40d6b8u: goto label_40d6b8;
        case 0x40d6bcu: goto label_40d6bc;
        case 0x40d6c0u: goto label_40d6c0;
        case 0x40d6c4u: goto label_40d6c4;
        case 0x40d6c8u: goto label_40d6c8;
        case 0x40d6ccu: goto label_40d6cc;
        case 0x40d6d0u: goto label_40d6d0;
        case 0x40d6d4u: goto label_40d6d4;
        case 0x40d6d8u: goto label_40d6d8;
        case 0x40d6dcu: goto label_40d6dc;
        case 0x40d6e0u: goto label_40d6e0;
        case 0x40d6e4u: goto label_40d6e4;
        case 0x40d6e8u: goto label_40d6e8;
        case 0x40d6ecu: goto label_40d6ec;
        case 0x40d6f0u: goto label_40d6f0;
        case 0x40d6f4u: goto label_40d6f4;
        case 0x40d6f8u: goto label_40d6f8;
        case 0x40d6fcu: goto label_40d6fc;
        case 0x40d700u: goto label_40d700;
        case 0x40d704u: goto label_40d704;
        case 0x40d708u: goto label_40d708;
        case 0x40d70cu: goto label_40d70c;
        case 0x40d710u: goto label_40d710;
        case 0x40d714u: goto label_40d714;
        case 0x40d718u: goto label_40d718;
        case 0x40d71cu: goto label_40d71c;
        case 0x40d720u: goto label_40d720;
        case 0x40d724u: goto label_40d724;
        case 0x40d728u: goto label_40d728;
        case 0x40d72cu: goto label_40d72c;
        case 0x40d730u: goto label_40d730;
        case 0x40d734u: goto label_40d734;
        case 0x40d738u: goto label_40d738;
        case 0x40d73cu: goto label_40d73c;
        case 0x40d740u: goto label_40d740;
        case 0x40d744u: goto label_40d744;
        case 0x40d748u: goto label_40d748;
        case 0x40d74cu: goto label_40d74c;
        case 0x40d750u: goto label_40d750;
        case 0x40d754u: goto label_40d754;
        case 0x40d758u: goto label_40d758;
        case 0x40d75cu: goto label_40d75c;
        case 0x40d760u: goto label_40d760;
        case 0x40d764u: goto label_40d764;
        case 0x40d768u: goto label_40d768;
        case 0x40d76cu: goto label_40d76c;
        case 0x40d770u: goto label_40d770;
        case 0x40d774u: goto label_40d774;
        case 0x40d778u: goto label_40d778;
        case 0x40d77cu: goto label_40d77c;
        case 0x40d780u: goto label_40d780;
        case 0x40d784u: goto label_40d784;
        case 0x40d788u: goto label_40d788;
        case 0x40d78cu: goto label_40d78c;
        case 0x40d790u: goto label_40d790;
        case 0x40d794u: goto label_40d794;
        case 0x40d798u: goto label_40d798;
        case 0x40d79cu: goto label_40d79c;
        case 0x40d7a0u: goto label_40d7a0;
        case 0x40d7a4u: goto label_40d7a4;
        case 0x40d7a8u: goto label_40d7a8;
        case 0x40d7acu: goto label_40d7ac;
        case 0x40d7b0u: goto label_40d7b0;
        case 0x40d7b4u: goto label_40d7b4;
        case 0x40d7b8u: goto label_40d7b8;
        case 0x40d7bcu: goto label_40d7bc;
        case 0x40d7c0u: goto label_40d7c0;
        case 0x40d7c4u: goto label_40d7c4;
        case 0x40d7c8u: goto label_40d7c8;
        case 0x40d7ccu: goto label_40d7cc;
        case 0x40d7d0u: goto label_40d7d0;
        case 0x40d7d4u: goto label_40d7d4;
        case 0x40d7d8u: goto label_40d7d8;
        case 0x40d7dcu: goto label_40d7dc;
        case 0x40d7e0u: goto label_40d7e0;
        case 0x40d7e4u: goto label_40d7e4;
        case 0x40d7e8u: goto label_40d7e8;
        case 0x40d7ecu: goto label_40d7ec;
        case 0x40d7f0u: goto label_40d7f0;
        case 0x40d7f4u: goto label_40d7f4;
        case 0x40d7f8u: goto label_40d7f8;
        case 0x40d7fcu: goto label_40d7fc;
        case 0x40d800u: goto label_40d800;
        case 0x40d804u: goto label_40d804;
        case 0x40d808u: goto label_40d808;
        case 0x40d80cu: goto label_40d80c;
        case 0x40d810u: goto label_40d810;
        case 0x40d814u: goto label_40d814;
        case 0x40d818u: goto label_40d818;
        case 0x40d81cu: goto label_40d81c;
        case 0x40d820u: goto label_40d820;
        case 0x40d824u: goto label_40d824;
        case 0x40d828u: goto label_40d828;
        case 0x40d82cu: goto label_40d82c;
        case 0x40d830u: goto label_40d830;
        case 0x40d834u: goto label_40d834;
        case 0x40d838u: goto label_40d838;
        case 0x40d83cu: goto label_40d83c;
        case 0x40d840u: goto label_40d840;
        case 0x40d844u: goto label_40d844;
        case 0x40d848u: goto label_40d848;
        case 0x40d84cu: goto label_40d84c;
        case 0x40d850u: goto label_40d850;
        case 0x40d854u: goto label_40d854;
        case 0x40d858u: goto label_40d858;
        case 0x40d85cu: goto label_40d85c;
        case 0x40d860u: goto label_40d860;
        case 0x40d864u: goto label_40d864;
        case 0x40d868u: goto label_40d868;
        case 0x40d86cu: goto label_40d86c;
        case 0x40d870u: goto label_40d870;
        case 0x40d874u: goto label_40d874;
        case 0x40d878u: goto label_40d878;
        case 0x40d87cu: goto label_40d87c;
        case 0x40d880u: goto label_40d880;
        case 0x40d884u: goto label_40d884;
        case 0x40d888u: goto label_40d888;
        case 0x40d88cu: goto label_40d88c;
        case 0x40d890u: goto label_40d890;
        case 0x40d894u: goto label_40d894;
        case 0x40d898u: goto label_40d898;
        case 0x40d89cu: goto label_40d89c;
        case 0x40d8a0u: goto label_40d8a0;
        case 0x40d8a4u: goto label_40d8a4;
        case 0x40d8a8u: goto label_40d8a8;
        case 0x40d8acu: goto label_40d8ac;
        case 0x40d8b0u: goto label_40d8b0;
        case 0x40d8b4u: goto label_40d8b4;
        case 0x40d8b8u: goto label_40d8b8;
        case 0x40d8bcu: goto label_40d8bc;
        case 0x40d8c0u: goto label_40d8c0;
        case 0x40d8c4u: goto label_40d8c4;
        case 0x40d8c8u: goto label_40d8c8;
        case 0x40d8ccu: goto label_40d8cc;
        case 0x40d8d0u: goto label_40d8d0;
        case 0x40d8d4u: goto label_40d8d4;
        case 0x40d8d8u: goto label_40d8d8;
        case 0x40d8dcu: goto label_40d8dc;
        case 0x40d8e0u: goto label_40d8e0;
        case 0x40d8e4u: goto label_40d8e4;
        case 0x40d8e8u: goto label_40d8e8;
        case 0x40d8ecu: goto label_40d8ec;
        case 0x40d8f0u: goto label_40d8f0;
        case 0x40d8f4u: goto label_40d8f4;
        case 0x40d8f8u: goto label_40d8f8;
        case 0x40d8fcu: goto label_40d8fc;
        case 0x40d900u: goto label_40d900;
        case 0x40d904u: goto label_40d904;
        case 0x40d908u: goto label_40d908;
        case 0x40d90cu: goto label_40d90c;
        case 0x40d910u: goto label_40d910;
        case 0x40d914u: goto label_40d914;
        case 0x40d918u: goto label_40d918;
        case 0x40d91cu: goto label_40d91c;
        case 0x40d920u: goto label_40d920;
        case 0x40d924u: goto label_40d924;
        case 0x40d928u: goto label_40d928;
        case 0x40d92cu: goto label_40d92c;
        case 0x40d930u: goto label_40d930;
        case 0x40d934u: goto label_40d934;
        case 0x40d938u: goto label_40d938;
        case 0x40d93cu: goto label_40d93c;
        case 0x40d940u: goto label_40d940;
        case 0x40d944u: goto label_40d944;
        case 0x40d948u: goto label_40d948;
        case 0x40d94cu: goto label_40d94c;
        case 0x40d950u: goto label_40d950;
        case 0x40d954u: goto label_40d954;
        case 0x40d958u: goto label_40d958;
        case 0x40d95cu: goto label_40d95c;
        case 0x40d960u: goto label_40d960;
        case 0x40d964u: goto label_40d964;
        case 0x40d968u: goto label_40d968;
        case 0x40d96cu: goto label_40d96c;
        case 0x40d970u: goto label_40d970;
        case 0x40d974u: goto label_40d974;
        case 0x40d978u: goto label_40d978;
        case 0x40d97cu: goto label_40d97c;
        case 0x40d980u: goto label_40d980;
        case 0x40d984u: goto label_40d984;
        case 0x40d988u: goto label_40d988;
        case 0x40d98cu: goto label_40d98c;
        case 0x40d990u: goto label_40d990;
        case 0x40d994u: goto label_40d994;
        case 0x40d998u: goto label_40d998;
        case 0x40d99cu: goto label_40d99c;
        case 0x40d9a0u: goto label_40d9a0;
        case 0x40d9a4u: goto label_40d9a4;
        case 0x40d9a8u: goto label_40d9a8;
        case 0x40d9acu: goto label_40d9ac;
        case 0x40d9b0u: goto label_40d9b0;
        case 0x40d9b4u: goto label_40d9b4;
        case 0x40d9b8u: goto label_40d9b8;
        case 0x40d9bcu: goto label_40d9bc;
        case 0x40d9c0u: goto label_40d9c0;
        case 0x40d9c4u: goto label_40d9c4;
        case 0x40d9c8u: goto label_40d9c8;
        case 0x40d9ccu: goto label_40d9cc;
        case 0x40d9d0u: goto label_40d9d0;
        case 0x40d9d4u: goto label_40d9d4;
        case 0x40d9d8u: goto label_40d9d8;
        case 0x40d9dcu: goto label_40d9dc;
        case 0x40d9e0u: goto label_40d9e0;
        case 0x40d9e4u: goto label_40d9e4;
        case 0x40d9e8u: goto label_40d9e8;
        case 0x40d9ecu: goto label_40d9ec;
        case 0x40d9f0u: goto label_40d9f0;
        case 0x40d9f4u: goto label_40d9f4;
        case 0x40d9f8u: goto label_40d9f8;
        case 0x40d9fcu: goto label_40d9fc;
        case 0x40da00u: goto label_40da00;
        case 0x40da04u: goto label_40da04;
        case 0x40da08u: goto label_40da08;
        case 0x40da0cu: goto label_40da0c;
        case 0x40da10u: goto label_40da10;
        case 0x40da14u: goto label_40da14;
        case 0x40da18u: goto label_40da18;
        case 0x40da1cu: goto label_40da1c;
        case 0x40da20u: goto label_40da20;
        case 0x40da24u: goto label_40da24;
        case 0x40da28u: goto label_40da28;
        case 0x40da2cu: goto label_40da2c;
        case 0x40da30u: goto label_40da30;
        case 0x40da34u: goto label_40da34;
        case 0x40da38u: goto label_40da38;
        case 0x40da3cu: goto label_40da3c;
        case 0x40da40u: goto label_40da40;
        case 0x40da44u: goto label_40da44;
        case 0x40da48u: goto label_40da48;
        case 0x40da4cu: goto label_40da4c;
        case 0x40da50u: goto label_40da50;
        case 0x40da54u: goto label_40da54;
        case 0x40da58u: goto label_40da58;
        case 0x40da5cu: goto label_40da5c;
        case 0x40da60u: goto label_40da60;
        case 0x40da64u: goto label_40da64;
        case 0x40da68u: goto label_40da68;
        case 0x40da6cu: goto label_40da6c;
        case 0x40da70u: goto label_40da70;
        case 0x40da74u: goto label_40da74;
        case 0x40da78u: goto label_40da78;
        case 0x40da7cu: goto label_40da7c;
        case 0x40da80u: goto label_40da80;
        case 0x40da84u: goto label_40da84;
        case 0x40da88u: goto label_40da88;
        case 0x40da8cu: goto label_40da8c;
        case 0x40da90u: goto label_40da90;
        case 0x40da94u: goto label_40da94;
        case 0x40da98u: goto label_40da98;
        case 0x40da9cu: goto label_40da9c;
        case 0x40daa0u: goto label_40daa0;
        case 0x40daa4u: goto label_40daa4;
        case 0x40daa8u: goto label_40daa8;
        case 0x40daacu: goto label_40daac;
        case 0x40dab0u: goto label_40dab0;
        case 0x40dab4u: goto label_40dab4;
        case 0x40dab8u: goto label_40dab8;
        case 0x40dabcu: goto label_40dabc;
        case 0x40dac0u: goto label_40dac0;
        case 0x40dac4u: goto label_40dac4;
        case 0x40dac8u: goto label_40dac8;
        case 0x40daccu: goto label_40dacc;
        case 0x40dad0u: goto label_40dad0;
        case 0x40dad4u: goto label_40dad4;
        case 0x40dad8u: goto label_40dad8;
        case 0x40dadcu: goto label_40dadc;
        case 0x40dae0u: goto label_40dae0;
        case 0x40dae4u: goto label_40dae4;
        case 0x40dae8u: goto label_40dae8;
        case 0x40daecu: goto label_40daec;
        case 0x40daf0u: goto label_40daf0;
        case 0x40daf4u: goto label_40daf4;
        case 0x40daf8u: goto label_40daf8;
        case 0x40dafcu: goto label_40dafc;
        case 0x40db00u: goto label_40db00;
        case 0x40db04u: goto label_40db04;
        case 0x40db08u: goto label_40db08;
        case 0x40db0cu: goto label_40db0c;
        case 0x40db10u: goto label_40db10;
        case 0x40db14u: goto label_40db14;
        case 0x40db18u: goto label_40db18;
        case 0x40db1cu: goto label_40db1c;
        case 0x40db20u: goto label_40db20;
        case 0x40db24u: goto label_40db24;
        case 0x40db28u: goto label_40db28;
        case 0x40db2cu: goto label_40db2c;
        case 0x40db30u: goto label_40db30;
        case 0x40db34u: goto label_40db34;
        case 0x40db38u: goto label_40db38;
        case 0x40db3cu: goto label_40db3c;
        case 0x40db40u: goto label_40db40;
        case 0x40db44u: goto label_40db44;
        case 0x40db48u: goto label_40db48;
        case 0x40db4cu: goto label_40db4c;
        case 0x40db50u: goto label_40db50;
        case 0x40db54u: goto label_40db54;
        case 0x40db58u: goto label_40db58;
        case 0x40db5cu: goto label_40db5c;
        case 0x40db60u: goto label_40db60;
        case 0x40db64u: goto label_40db64;
        case 0x40db68u: goto label_40db68;
        case 0x40db6cu: goto label_40db6c;
        case 0x40db70u: goto label_40db70;
        case 0x40db74u: goto label_40db74;
        case 0x40db78u: goto label_40db78;
        case 0x40db7cu: goto label_40db7c;
        case 0x40db80u: goto label_40db80;
        case 0x40db84u: goto label_40db84;
        case 0x40db88u: goto label_40db88;
        case 0x40db8cu: goto label_40db8c;
        case 0x40db90u: goto label_40db90;
        case 0x40db94u: goto label_40db94;
        case 0x40db98u: goto label_40db98;
        case 0x40db9cu: goto label_40db9c;
        case 0x40dba0u: goto label_40dba0;
        case 0x40dba4u: goto label_40dba4;
        case 0x40dba8u: goto label_40dba8;
        case 0x40dbacu: goto label_40dbac;
        case 0x40dbb0u: goto label_40dbb0;
        case 0x40dbb4u: goto label_40dbb4;
        case 0x40dbb8u: goto label_40dbb8;
        case 0x40dbbcu: goto label_40dbbc;
        case 0x40dbc0u: goto label_40dbc0;
        case 0x40dbc4u: goto label_40dbc4;
        case 0x40dbc8u: goto label_40dbc8;
        case 0x40dbccu: goto label_40dbcc;
        case 0x40dbd0u: goto label_40dbd0;
        case 0x40dbd4u: goto label_40dbd4;
        case 0x40dbd8u: goto label_40dbd8;
        case 0x40dbdcu: goto label_40dbdc;
        case 0x40dbe0u: goto label_40dbe0;
        case 0x40dbe4u: goto label_40dbe4;
        case 0x40dbe8u: goto label_40dbe8;
        case 0x40dbecu: goto label_40dbec;
        case 0x40dbf0u: goto label_40dbf0;
        case 0x40dbf4u: goto label_40dbf4;
        case 0x40dbf8u: goto label_40dbf8;
        case 0x40dbfcu: goto label_40dbfc;
        case 0x40dc00u: goto label_40dc00;
        case 0x40dc04u: goto label_40dc04;
        case 0x40dc08u: goto label_40dc08;
        case 0x40dc0cu: goto label_40dc0c;
        case 0x40dc10u: goto label_40dc10;
        case 0x40dc14u: goto label_40dc14;
        case 0x40dc18u: goto label_40dc18;
        case 0x40dc1cu: goto label_40dc1c;
        case 0x40dc20u: goto label_40dc20;
        case 0x40dc24u: goto label_40dc24;
        case 0x40dc28u: goto label_40dc28;
        case 0x40dc2cu: goto label_40dc2c;
        case 0x40dc30u: goto label_40dc30;
        case 0x40dc34u: goto label_40dc34;
        case 0x40dc38u: goto label_40dc38;
        case 0x40dc3cu: goto label_40dc3c;
        case 0x40dc40u: goto label_40dc40;
        case 0x40dc44u: goto label_40dc44;
        case 0x40dc48u: goto label_40dc48;
        case 0x40dc4cu: goto label_40dc4c;
        case 0x40dc50u: goto label_40dc50;
        case 0x40dc54u: goto label_40dc54;
        case 0x40dc58u: goto label_40dc58;
        case 0x40dc5cu: goto label_40dc5c;
        case 0x40dc60u: goto label_40dc60;
        case 0x40dc64u: goto label_40dc64;
        case 0x40dc68u: goto label_40dc68;
        case 0x40dc6cu: goto label_40dc6c;
        case 0x40dc70u: goto label_40dc70;
        case 0x40dc74u: goto label_40dc74;
        case 0x40dc78u: goto label_40dc78;
        case 0x40dc7cu: goto label_40dc7c;
        case 0x40dc80u: goto label_40dc80;
        case 0x40dc84u: goto label_40dc84;
        case 0x40dc88u: goto label_40dc88;
        case 0x40dc8cu: goto label_40dc8c;
        case 0x40dc90u: goto label_40dc90;
        case 0x40dc94u: goto label_40dc94;
        case 0x40dc98u: goto label_40dc98;
        case 0x40dc9cu: goto label_40dc9c;
        case 0x40dca0u: goto label_40dca0;
        case 0x40dca4u: goto label_40dca4;
        case 0x40dca8u: goto label_40dca8;
        case 0x40dcacu: goto label_40dcac;
        case 0x40dcb0u: goto label_40dcb0;
        case 0x40dcb4u: goto label_40dcb4;
        case 0x40dcb8u: goto label_40dcb8;
        case 0x40dcbcu: goto label_40dcbc;
        case 0x40dcc0u: goto label_40dcc0;
        case 0x40dcc4u: goto label_40dcc4;
        case 0x40dcc8u: goto label_40dcc8;
        case 0x40dcccu: goto label_40dccc;
        case 0x40dcd0u: goto label_40dcd0;
        case 0x40dcd4u: goto label_40dcd4;
        case 0x40dcd8u: goto label_40dcd8;
        case 0x40dcdcu: goto label_40dcdc;
        case 0x40dce0u: goto label_40dce0;
        case 0x40dce4u: goto label_40dce4;
        case 0x40dce8u: goto label_40dce8;
        case 0x40dcecu: goto label_40dcec;
        case 0x40dcf0u: goto label_40dcf0;
        case 0x40dcf4u: goto label_40dcf4;
        case 0x40dcf8u: goto label_40dcf8;
        case 0x40dcfcu: goto label_40dcfc;
        case 0x40dd00u: goto label_40dd00;
        case 0x40dd04u: goto label_40dd04;
        case 0x40dd08u: goto label_40dd08;
        case 0x40dd0cu: goto label_40dd0c;
        case 0x40dd10u: goto label_40dd10;
        case 0x40dd14u: goto label_40dd14;
        case 0x40dd18u: goto label_40dd18;
        case 0x40dd1cu: goto label_40dd1c;
        case 0x40dd20u: goto label_40dd20;
        case 0x40dd24u: goto label_40dd24;
        case 0x40dd28u: goto label_40dd28;
        case 0x40dd2cu: goto label_40dd2c;
        case 0x40dd30u: goto label_40dd30;
        case 0x40dd34u: goto label_40dd34;
        case 0x40dd38u: goto label_40dd38;
        case 0x40dd3cu: goto label_40dd3c;
        case 0x40dd40u: goto label_40dd40;
        case 0x40dd44u: goto label_40dd44;
        case 0x40dd48u: goto label_40dd48;
        case 0x40dd4cu: goto label_40dd4c;
        case 0x40dd50u: goto label_40dd50;
        case 0x40dd54u: goto label_40dd54;
        case 0x40dd58u: goto label_40dd58;
        case 0x40dd5cu: goto label_40dd5c;
        case 0x40dd60u: goto label_40dd60;
        case 0x40dd64u: goto label_40dd64;
        case 0x40dd68u: goto label_40dd68;
        case 0x40dd6cu: goto label_40dd6c;
        case 0x40dd70u: goto label_40dd70;
        case 0x40dd74u: goto label_40dd74;
        case 0x40dd78u: goto label_40dd78;
        case 0x40dd7cu: goto label_40dd7c;
        case 0x40dd80u: goto label_40dd80;
        case 0x40dd84u: goto label_40dd84;
        case 0x40dd88u: goto label_40dd88;
        case 0x40dd8cu: goto label_40dd8c;
        case 0x40dd90u: goto label_40dd90;
        case 0x40dd94u: goto label_40dd94;
        case 0x40dd98u: goto label_40dd98;
        case 0x40dd9cu: goto label_40dd9c;
        case 0x40dda0u: goto label_40dda0;
        case 0x40dda4u: goto label_40dda4;
        case 0x40dda8u: goto label_40dda8;
        case 0x40ddacu: goto label_40ddac;
        case 0x40ddb0u: goto label_40ddb0;
        case 0x40ddb4u: goto label_40ddb4;
        case 0x40ddb8u: goto label_40ddb8;
        case 0x40ddbcu: goto label_40ddbc;
        case 0x40ddc0u: goto label_40ddc0;
        case 0x40ddc4u: goto label_40ddc4;
        case 0x40ddc8u: goto label_40ddc8;
        case 0x40ddccu: goto label_40ddcc;
        case 0x40ddd0u: goto label_40ddd0;
        case 0x40ddd4u: goto label_40ddd4;
        case 0x40ddd8u: goto label_40ddd8;
        case 0x40dddcu: goto label_40dddc;
        case 0x40dde0u: goto label_40dde0;
        case 0x40dde4u: goto label_40dde4;
        case 0x40dde8u: goto label_40dde8;
        case 0x40ddecu: goto label_40ddec;
        case 0x40ddf0u: goto label_40ddf0;
        case 0x40ddf4u: goto label_40ddf4;
        case 0x40ddf8u: goto label_40ddf8;
        case 0x40ddfcu: goto label_40ddfc;
        case 0x40de00u: goto label_40de00;
        case 0x40de04u: goto label_40de04;
        case 0x40de08u: goto label_40de08;
        case 0x40de0cu: goto label_40de0c;
        case 0x40de10u: goto label_40de10;
        case 0x40de14u: goto label_40de14;
        case 0x40de18u: goto label_40de18;
        case 0x40de1cu: goto label_40de1c;
        case 0x40de20u: goto label_40de20;
        case 0x40de24u: goto label_40de24;
        case 0x40de28u: goto label_40de28;
        case 0x40de2cu: goto label_40de2c;
        case 0x40de30u: goto label_40de30;
        case 0x40de34u: goto label_40de34;
        case 0x40de38u: goto label_40de38;
        case 0x40de3cu: goto label_40de3c;
        case 0x40de40u: goto label_40de40;
        case 0x40de44u: goto label_40de44;
        case 0x40de48u: goto label_40de48;
        case 0x40de4cu: goto label_40de4c;
        case 0x40de50u: goto label_40de50;
        case 0x40de54u: goto label_40de54;
        case 0x40de58u: goto label_40de58;
        case 0x40de5cu: goto label_40de5c;
        case 0x40de60u: goto label_40de60;
        case 0x40de64u: goto label_40de64;
        case 0x40de68u: goto label_40de68;
        case 0x40de6cu: goto label_40de6c;
        case 0x40de70u: goto label_40de70;
        case 0x40de74u: goto label_40de74;
        case 0x40de78u: goto label_40de78;
        case 0x40de7cu: goto label_40de7c;
        case 0x40de80u: goto label_40de80;
        case 0x40de84u: goto label_40de84;
        case 0x40de88u: goto label_40de88;
        case 0x40de8cu: goto label_40de8c;
        case 0x40de90u: goto label_40de90;
        case 0x40de94u: goto label_40de94;
        case 0x40de98u: goto label_40de98;
        case 0x40de9cu: goto label_40de9c;
        case 0x40dea0u: goto label_40dea0;
        case 0x40dea4u: goto label_40dea4;
        case 0x40dea8u: goto label_40dea8;
        case 0x40deacu: goto label_40deac;
        case 0x40deb0u: goto label_40deb0;
        case 0x40deb4u: goto label_40deb4;
        case 0x40deb8u: goto label_40deb8;
        case 0x40debcu: goto label_40debc;
        case 0x40dec0u: goto label_40dec0;
        case 0x40dec4u: goto label_40dec4;
        case 0x40dec8u: goto label_40dec8;
        case 0x40deccu: goto label_40decc;
        case 0x40ded0u: goto label_40ded0;
        case 0x40ded4u: goto label_40ded4;
        case 0x40ded8u: goto label_40ded8;
        case 0x40dedcu: goto label_40dedc;
        case 0x40dee0u: goto label_40dee0;
        case 0x40dee4u: goto label_40dee4;
        case 0x40dee8u: goto label_40dee8;
        case 0x40deecu: goto label_40deec;
        case 0x40def0u: goto label_40def0;
        case 0x40def4u: goto label_40def4;
        case 0x40def8u: goto label_40def8;
        case 0x40defcu: goto label_40defc;
        case 0x40df00u: goto label_40df00;
        case 0x40df04u: goto label_40df04;
        case 0x40df08u: goto label_40df08;
        case 0x40df0cu: goto label_40df0c;
        case 0x40df10u: goto label_40df10;
        case 0x40df14u: goto label_40df14;
        case 0x40df18u: goto label_40df18;
        case 0x40df1cu: goto label_40df1c;
        case 0x40df20u: goto label_40df20;
        case 0x40df24u: goto label_40df24;
        case 0x40df28u: goto label_40df28;
        case 0x40df2cu: goto label_40df2c;
        case 0x40df30u: goto label_40df30;
        case 0x40df34u: goto label_40df34;
        case 0x40df38u: goto label_40df38;
        case 0x40df3cu: goto label_40df3c;
        case 0x40df40u: goto label_40df40;
        case 0x40df44u: goto label_40df44;
        case 0x40df48u: goto label_40df48;
        case 0x40df4cu: goto label_40df4c;
        case 0x40df50u: goto label_40df50;
        case 0x40df54u: goto label_40df54;
        case 0x40df58u: goto label_40df58;
        case 0x40df5cu: goto label_40df5c;
        case 0x40df60u: goto label_40df60;
        case 0x40df64u: goto label_40df64;
        case 0x40df68u: goto label_40df68;
        case 0x40df6cu: goto label_40df6c;
        case 0x40df70u: goto label_40df70;
        case 0x40df74u: goto label_40df74;
        case 0x40df78u: goto label_40df78;
        case 0x40df7cu: goto label_40df7c;
        case 0x40df80u: goto label_40df80;
        case 0x40df84u: goto label_40df84;
        case 0x40df88u: goto label_40df88;
        case 0x40df8cu: goto label_40df8c;
        case 0x40df90u: goto label_40df90;
        case 0x40df94u: goto label_40df94;
        case 0x40df98u: goto label_40df98;
        case 0x40df9cu: goto label_40df9c;
        case 0x40dfa0u: goto label_40dfa0;
        case 0x40dfa4u: goto label_40dfa4;
        case 0x40dfa8u: goto label_40dfa8;
        case 0x40dfacu: goto label_40dfac;
        case 0x40dfb0u: goto label_40dfb0;
        case 0x40dfb4u: goto label_40dfb4;
        case 0x40dfb8u: goto label_40dfb8;
        case 0x40dfbcu: goto label_40dfbc;
        case 0x40dfc0u: goto label_40dfc0;
        case 0x40dfc4u: goto label_40dfc4;
        case 0x40dfc8u: goto label_40dfc8;
        case 0x40dfccu: goto label_40dfcc;
        case 0x40dfd0u: goto label_40dfd0;
        case 0x40dfd4u: goto label_40dfd4;
        case 0x40dfd8u: goto label_40dfd8;
        case 0x40dfdcu: goto label_40dfdc;
        case 0x40dfe0u: goto label_40dfe0;
        case 0x40dfe4u: goto label_40dfe4;
        case 0x40dfe8u: goto label_40dfe8;
        case 0x40dfecu: goto label_40dfec;
        case 0x40dff0u: goto label_40dff0;
        case 0x40dff4u: goto label_40dff4;
        case 0x40dff8u: goto label_40dff8;
        case 0x40dffcu: goto label_40dffc;
        case 0x40e000u: goto label_40e000;
        case 0x40e004u: goto label_40e004;
        case 0x40e008u: goto label_40e008;
        case 0x40e00cu: goto label_40e00c;
        case 0x40e010u: goto label_40e010;
        case 0x40e014u: goto label_40e014;
        case 0x40e018u: goto label_40e018;
        case 0x40e01cu: goto label_40e01c;
        case 0x40e020u: goto label_40e020;
        case 0x40e024u: goto label_40e024;
        case 0x40e028u: goto label_40e028;
        case 0x40e02cu: goto label_40e02c;
        case 0x40e030u: goto label_40e030;
        case 0x40e034u: goto label_40e034;
        case 0x40e038u: goto label_40e038;
        case 0x40e03cu: goto label_40e03c;
        case 0x40e040u: goto label_40e040;
        case 0x40e044u: goto label_40e044;
        case 0x40e048u: goto label_40e048;
        case 0x40e04cu: goto label_40e04c;
        case 0x40e050u: goto label_40e050;
        case 0x40e054u: goto label_40e054;
        case 0x40e058u: goto label_40e058;
        case 0x40e05cu: goto label_40e05c;
        case 0x40e060u: goto label_40e060;
        case 0x40e064u: goto label_40e064;
        case 0x40e068u: goto label_40e068;
        case 0x40e06cu: goto label_40e06c;
        case 0x40e070u: goto label_40e070;
        case 0x40e074u: goto label_40e074;
        case 0x40e078u: goto label_40e078;
        case 0x40e07cu: goto label_40e07c;
        case 0x40e080u: goto label_40e080;
        case 0x40e084u: goto label_40e084;
        case 0x40e088u: goto label_40e088;
        case 0x40e08cu: goto label_40e08c;
        case 0x40e090u: goto label_40e090;
        case 0x40e094u: goto label_40e094;
        case 0x40e098u: goto label_40e098;
        case 0x40e09cu: goto label_40e09c;
        case 0x40e0a0u: goto label_40e0a0;
        case 0x40e0a4u: goto label_40e0a4;
        case 0x40e0a8u: goto label_40e0a8;
        case 0x40e0acu: goto label_40e0ac;
        case 0x40e0b0u: goto label_40e0b0;
        case 0x40e0b4u: goto label_40e0b4;
        case 0x40e0b8u: goto label_40e0b8;
        case 0x40e0bcu: goto label_40e0bc;
        case 0x40e0c0u: goto label_40e0c0;
        case 0x40e0c4u: goto label_40e0c4;
        case 0x40e0c8u: goto label_40e0c8;
        case 0x40e0ccu: goto label_40e0cc;
        case 0x40e0d0u: goto label_40e0d0;
        case 0x40e0d4u: goto label_40e0d4;
        case 0x40e0d8u: goto label_40e0d8;
        case 0x40e0dcu: goto label_40e0dc;
        case 0x40e0e0u: goto label_40e0e0;
        case 0x40e0e4u: goto label_40e0e4;
        case 0x40e0e8u: goto label_40e0e8;
        case 0x40e0ecu: goto label_40e0ec;
        case 0x40e0f0u: goto label_40e0f0;
        case 0x40e0f4u: goto label_40e0f4;
        case 0x40e0f8u: goto label_40e0f8;
        case 0x40e0fcu: goto label_40e0fc;
        case 0x40e100u: goto label_40e100;
        case 0x40e104u: goto label_40e104;
        case 0x40e108u: goto label_40e108;
        case 0x40e10cu: goto label_40e10c;
        case 0x40e110u: goto label_40e110;
        case 0x40e114u: goto label_40e114;
        case 0x40e118u: goto label_40e118;
        case 0x40e11cu: goto label_40e11c;
        case 0x40e120u: goto label_40e120;
        case 0x40e124u: goto label_40e124;
        case 0x40e128u: goto label_40e128;
        case 0x40e12cu: goto label_40e12c;
        case 0x40e130u: goto label_40e130;
        case 0x40e134u: goto label_40e134;
        case 0x40e138u: goto label_40e138;
        case 0x40e13cu: goto label_40e13c;
        case 0x40e140u: goto label_40e140;
        case 0x40e144u: goto label_40e144;
        case 0x40e148u: goto label_40e148;
        case 0x40e14cu: goto label_40e14c;
        case 0x40e150u: goto label_40e150;
        case 0x40e154u: goto label_40e154;
        case 0x40e158u: goto label_40e158;
        case 0x40e15cu: goto label_40e15c;
        case 0x40e160u: goto label_40e160;
        case 0x40e164u: goto label_40e164;
        case 0x40e168u: goto label_40e168;
        case 0x40e16cu: goto label_40e16c;
        case 0x40e170u: goto label_40e170;
        case 0x40e174u: goto label_40e174;
        case 0x40e178u: goto label_40e178;
        case 0x40e17cu: goto label_40e17c;
        case 0x40e180u: goto label_40e180;
        case 0x40e184u: goto label_40e184;
        case 0x40e188u: goto label_40e188;
        case 0x40e18cu: goto label_40e18c;
        case 0x40e190u: goto label_40e190;
        case 0x40e194u: goto label_40e194;
        case 0x40e198u: goto label_40e198;
        case 0x40e19cu: goto label_40e19c;
        case 0x40e1a0u: goto label_40e1a0;
        case 0x40e1a4u: goto label_40e1a4;
        case 0x40e1a8u: goto label_40e1a8;
        case 0x40e1acu: goto label_40e1ac;
        case 0x40e1b0u: goto label_40e1b0;
        case 0x40e1b4u: goto label_40e1b4;
        case 0x40e1b8u: goto label_40e1b8;
        case 0x40e1bcu: goto label_40e1bc;
        case 0x40e1c0u: goto label_40e1c0;
        case 0x40e1c4u: goto label_40e1c4;
        case 0x40e1c8u: goto label_40e1c8;
        case 0x40e1ccu: goto label_40e1cc;
        case 0x40e1d0u: goto label_40e1d0;
        case 0x40e1d4u: goto label_40e1d4;
        case 0x40e1d8u: goto label_40e1d8;
        case 0x40e1dcu: goto label_40e1dc;
        default: break;
    }

    ctx->pc = 0x40d610u;

label_40d610:
    // 0x40d610: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x40d610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_40d614:
    // 0x40d614: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x40d614u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_40d618:
    // 0x40d618: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x40d618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_40d61c:
    // 0x40d61c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x40d61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_40d620:
    // 0x40d620: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x40d620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_40d624:
    // 0x40d624: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x40d624u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40d628:
    // 0x40d628: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40d628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_40d62c:
    // 0x40d62c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40d62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_40d630:
    // 0x40d630: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x40d630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_40d634:
    // 0x40d634: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x40d634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_40d638:
    // 0x40d638: 0xc10ca68  jal         func_4329A0
label_40d63c:
    if (ctx->pc == 0x40D63Cu) {
        ctx->pc = 0x40D63Cu;
            // 0x40d63c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x40D640u;
        goto label_40d640;
    }
    ctx->pc = 0x40D638u;
    SET_GPR_U32(ctx, 31, 0x40D640u);
    ctx->pc = 0x40D63Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40D638u;
            // 0x40d63c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D640u; }
        if (ctx->pc != 0x40D640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D640u; }
        if (ctx->pc != 0x40D640u) { return; }
    }
    ctx->pc = 0x40D640u;
label_40d640:
    // 0x40d640: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x40d640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_40d644:
    // 0x40d644: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x40d644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_40d648:
    // 0x40d648: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x40d648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_40d64c:
    // 0x40d64c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x40d64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_40d650:
    // 0x40d650: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x40d650u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_40d654:
    // 0x40d654: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x40d654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_40d658:
    // 0x40d658: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x40d658u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_40d65c:
    // 0x40d65c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x40d65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_40d660:
    // 0x40d660: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x40d660u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_40d664:
    // 0x40d664: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x40d664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_40d668:
    // 0x40d668: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x40d668u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_40d66c:
    // 0x40d66c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x40d66cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_40d670:
    // 0x40d670: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x40d670u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_40d674:
    // 0x40d674: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x40d674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_40d678:
    // 0x40d678: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x40d678u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_40d67c:
    // 0x40d67c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x40d67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_40d680:
    // 0x40d680: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x40d680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_40d684:
    // 0x40d684: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x40d684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_40d688:
    // 0x40d688: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x40d688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_40d68c:
    // 0x40d68c: 0xc0582cc  jal         func_160B30
label_40d690:
    if (ctx->pc == 0x40D690u) {
        ctx->pc = 0x40D690u;
            // 0x40d690: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x40D694u;
        goto label_40d694;
    }
    ctx->pc = 0x40D68Cu;
    SET_GPR_U32(ctx, 31, 0x40D694u);
    ctx->pc = 0x40D690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40D68Cu;
            // 0x40d690: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D694u; }
        if (ctx->pc != 0x40D694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D694u; }
        if (ctx->pc != 0x40D694u) { return; }
    }
    ctx->pc = 0x40D694u;
label_40d694:
    // 0x40d694: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x40d694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_40d698:
    // 0x40d698: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x40d698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_40d69c:
    // 0x40d69c: 0x2463ad98  addiu       $v1, $v1, -0x5268
    ctx->pc = 0x40d69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946200));
label_40d6a0:
    // 0x40d6a0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x40d6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_40d6a4:
    // 0x40d6a4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x40d6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_40d6a8:
    // 0x40d6a8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x40d6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_40d6ac:
    // 0x40d6ac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x40d6acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_40d6b0:
    // 0x40d6b0: 0xac447300  sw          $a0, 0x7300($v0)
    ctx->pc = 0x40d6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29440), GPR_U32(ctx, 4));
label_40d6b4:
    // 0x40d6b4: 0x2463adb0  addiu       $v1, $v1, -0x5250
    ctx->pc = 0x40d6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946224));
label_40d6b8:
    // 0x40d6b8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x40d6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_40d6bc:
    // 0x40d6bc: 0x2442ade8  addiu       $v0, $v0, -0x5218
    ctx->pc = 0x40d6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946280));
label_40d6c0:
    // 0x40d6c0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x40d6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_40d6c4:
    // 0x40d6c4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x40d6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_40d6c8:
    // 0x40d6c8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x40d6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_40d6cc:
    // 0x40d6cc: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x40d6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_40d6d0:
    // 0x40d6d0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x40d6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_40d6d4:
    // 0x40d6d4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x40d6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_40d6d8:
    // 0x40d6d8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x40d6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_40d6dc:
    // 0x40d6dc: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x40d6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_40d6e0:
    // 0x40d6e0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x40d6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_40d6e4:
    // 0x40d6e4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x40d6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_40d6e8:
    // 0x40d6e8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x40d6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_40d6ec:
    // 0x40d6ec: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x40d6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_40d6f0:
    // 0x40d6f0: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x40d6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
label_40d6f4:
    // 0x40d6f4: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x40d6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
label_40d6f8:
    // 0x40d6f8: 0xae600098  sw          $zero, 0x98($s3)
    ctx->pc = 0x40d6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 0));
label_40d6fc:
    // 0x40d6fc: 0xae60009c  sw          $zero, 0x9C($s3)
    ctx->pc = 0x40d6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 0));
label_40d700:
    // 0x40d700: 0xae6000a0  sw          $zero, 0xA0($s3)
    ctx->pc = 0x40d700u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 0));
label_40d704:
    // 0x40d704: 0xae6000a4  sw          $zero, 0xA4($s3)
    ctx->pc = 0x40d704u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 0));
label_40d708:
    // 0x40d708: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x40d708u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_40d70c:
    // 0x40d70c: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_40d710:
    if (ctx->pc == 0x40D710u) {
        ctx->pc = 0x40D714u;
        goto label_40d714;
    }
    ctx->pc = 0x40D70Cu;
    {
        const bool branch_taken_0x40d70c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x40d70c) {
            ctx->pc = 0x40D7A0u;
            goto label_40d7a0;
        }
    }
    ctx->pc = 0x40D714u;
label_40d714:
    // 0x40d714: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x40d714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_40d718:
    // 0x40d718: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x40d718u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_40d71c:
    // 0x40d71c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x40d71cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_40d720:
    // 0x40d720: 0xc040138  jal         func_1004E0
label_40d724:
    if (ctx->pc == 0x40D724u) {
        ctx->pc = 0x40D724u;
            // 0x40d724: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x40D728u;
        goto label_40d728;
    }
    ctx->pc = 0x40D720u;
    SET_GPR_U32(ctx, 31, 0x40D728u);
    ctx->pc = 0x40D724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40D720u;
            // 0x40d724: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D728u; }
        if (ctx->pc != 0x40D728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D728u; }
        if (ctx->pc != 0x40D728u) { return; }
    }
    ctx->pc = 0x40D728u;
label_40d728:
    // 0x40d728: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x40d728u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
label_40d72c:
    // 0x40d72c: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x40d72cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
label_40d730:
    // 0x40d730: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x40d730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40d734:
    // 0x40d734: 0x24a5d7c0  addiu       $a1, $a1, -0x2840
    ctx->pc = 0x40d734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956992));
label_40d738:
    // 0x40d738: 0x24c6cfb0  addiu       $a2, $a2, -0x3050
    ctx->pc = 0x40d738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954928));
label_40d73c:
    // 0x40d73c: 0x240700f0  addiu       $a3, $zero, 0xF0
    ctx->pc = 0x40d73cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_40d740:
    // 0x40d740: 0xc040840  jal         func_102100
label_40d744:
    if (ctx->pc == 0x40D744u) {
        ctx->pc = 0x40D744u;
            // 0x40d744: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40D748u;
        goto label_40d748;
    }
    ctx->pc = 0x40D740u;
    SET_GPR_U32(ctx, 31, 0x40D748u);
    ctx->pc = 0x40D744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40D740u;
            // 0x40d744: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D748u; }
        if (ctx->pc != 0x40D748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D748u; }
        if (ctx->pc != 0x40D748u) { return; }
    }
    ctx->pc = 0x40D748u;
label_40d748:
    // 0x40d748: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x40d748u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_40d74c:
    // 0x40d74c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x40d74cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40d750:
    // 0x40d750: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x40d750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_40d754:
    // 0x40d754: 0xc0788fc  jal         func_1E23F0
label_40d758:
    if (ctx->pc == 0x40D758u) {
        ctx->pc = 0x40D758u;
            // 0x40d758: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40D75Cu;
        goto label_40d75c;
    }
    ctx->pc = 0x40D754u;
    SET_GPR_U32(ctx, 31, 0x40D75Cu);
    ctx->pc = 0x40D758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40D754u;
            // 0x40d758: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D75Cu; }
        if (ctx->pc != 0x40D75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D75Cu; }
        if (ctx->pc != 0x40D75Cu) { return; }
    }
    ctx->pc = 0x40D75Cu;
label_40d75c:
    // 0x40d75c: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x40d75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_40d760:
    // 0x40d760: 0xc0788fc  jal         func_1E23F0
label_40d764:
    if (ctx->pc == 0x40D764u) {
        ctx->pc = 0x40D764u;
            // 0x40d764: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40D768u;
        goto label_40d768;
    }
    ctx->pc = 0x40D760u;
    SET_GPR_U32(ctx, 31, 0x40D768u);
    ctx->pc = 0x40D764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40D760u;
            // 0x40d764: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D768u; }
        if (ctx->pc != 0x40D768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D768u; }
        if (ctx->pc != 0x40D768u) { return; }
    }
    ctx->pc = 0x40D768u;
label_40d768:
    // 0x40d768: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x40d768u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40d76c:
    // 0x40d76c: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x40d76cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_40d770:
    // 0x40d770: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x40d770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_40d774:
    // 0x40d774: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x40d774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_40d778:
    // 0x40d778: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x40d778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40d77c:
    // 0x40d77c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x40d77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_40d780:
    // 0x40d780: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x40d780u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_40d784:
    // 0x40d784: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x40d784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_40d788:
    // 0x40d788: 0xc0a997c  jal         func_2A65F0
label_40d78c:
    if (ctx->pc == 0x40D78Cu) {
        ctx->pc = 0x40D78Cu;
            // 0x40d78c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x40D790u;
        goto label_40d790;
    }
    ctx->pc = 0x40D788u;
    SET_GPR_U32(ctx, 31, 0x40D790u);
    ctx->pc = 0x40D78Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40D788u;
            // 0x40d78c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D790u; }
        if (ctx->pc != 0x40D790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D790u; }
        if (ctx->pc != 0x40D790u) { return; }
    }
    ctx->pc = 0x40D790u;
label_40d790:
    // 0x40d790: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x40d790u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_40d794:
    // 0x40d794: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x40d794u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_40d798:
    // 0x40d798: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_40d79c:
    if (ctx->pc == 0x40D79Cu) {
        ctx->pc = 0x40D79Cu;
            // 0x40d79c: 0x265200f0  addiu       $s2, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->pc = 0x40D7A0u;
        goto label_40d7a0;
    }
    ctx->pc = 0x40D798u;
    {
        const bool branch_taken_0x40d798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40D79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40D798u;
            // 0x40d79c: 0x265200f0  addiu       $s2, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d798) {
            ctx->pc = 0x40D76Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_40d76c;
        }
    }
    ctx->pc = 0x40D7A0u;
label_40d7a0:
    // 0x40d7a0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x40d7a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_40d7a4:
    // 0x40d7a4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x40d7a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_40d7a8:
    // 0x40d7a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x40d7a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_40d7ac:
    // 0x40d7ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x40d7acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40d7b0:
    // 0x40d7b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40d7b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40d7b4:
    // 0x40d7b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40d7b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40d7b8:
    // 0x40d7b8: 0x3e00008  jr          $ra
label_40d7bc:
    if (ctx->pc == 0x40D7BCu) {
        ctx->pc = 0x40D7BCu;
            // 0x40d7bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x40D7C0u;
        goto label_40d7c0;
    }
    ctx->pc = 0x40D7B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40D7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40D7B8u;
            // 0x40d7bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40D7C0u;
label_40d7c0:
    // 0x40d7c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x40d7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_40d7c4:
    // 0x40d7c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x40d7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_40d7c8:
    // 0x40d7c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40d7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_40d7cc:
    // 0x40d7cc: 0xc0aeebc  jal         func_2BBAF0
label_40d7d0:
    if (ctx->pc == 0x40D7D0u) {
        ctx->pc = 0x40D7D0u;
            // 0x40d7d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40D7D4u;
        goto label_40d7d4;
    }
    ctx->pc = 0x40D7CCu;
    SET_GPR_U32(ctx, 31, 0x40D7D4u);
    ctx->pc = 0x40D7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40D7CCu;
            // 0x40d7d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D7D4u; }
        if (ctx->pc != 0x40D7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D7D4u; }
        if (ctx->pc != 0x40D7D4u) { return; }
    }
    ctx->pc = 0x40D7D4u;
label_40d7d4:
    // 0x40d7d4: 0xc0aeeb4  jal         func_2BBAD0
label_40d7d8:
    if (ctx->pc == 0x40D7D8u) {
        ctx->pc = 0x40D7D8u;
            // 0x40d7d8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x40D7DCu;
        goto label_40d7dc;
    }
    ctx->pc = 0x40D7D4u;
    SET_GPR_U32(ctx, 31, 0x40D7DCu);
    ctx->pc = 0x40D7D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40D7D4u;
            // 0x40d7d8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D7DCu; }
        if (ctx->pc != 0x40D7DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D7DCu; }
        if (ctx->pc != 0x40D7DCu) { return; }
    }
    ctx->pc = 0x40D7DCu;
label_40d7dc:
    // 0x40d7dc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x40d7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_40d7e0:
    // 0x40d7e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x40d7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_40d7e4:
    // 0x40d7e4: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x40d7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_40d7e8:
    // 0x40d7e8: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x40d7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_40d7ec:
    // 0x40d7ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x40d7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_40d7f0:
    // 0x40d7f0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x40d7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_40d7f4:
    // 0x40d7f4: 0xc0aeea4  jal         func_2BBA90
label_40d7f8:
    if (ctx->pc == 0x40D7F8u) {
        ctx->pc = 0x40D7F8u;
            // 0x40d7f8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x40D7FCu;
        goto label_40d7fc;
    }
    ctx->pc = 0x40D7F4u;
    SET_GPR_U32(ctx, 31, 0x40D7FCu);
    ctx->pc = 0x40D7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40D7F4u;
            // 0x40d7f8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D7FCu; }
        if (ctx->pc != 0x40D7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D7FCu; }
        if (ctx->pc != 0x40D7FCu) { return; }
    }
    ctx->pc = 0x40D7FCu;
label_40d7fc:
    // 0x40d7fc: 0xc0aee8c  jal         func_2BBA30
label_40d800:
    if (ctx->pc == 0x40D800u) {
        ctx->pc = 0x40D800u;
            // 0x40d800: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x40D804u;
        goto label_40d804;
    }
    ctx->pc = 0x40D7FCu;
    SET_GPR_U32(ctx, 31, 0x40D804u);
    ctx->pc = 0x40D800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40D7FCu;
            // 0x40d800: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D804u; }
        if (ctx->pc != 0x40D804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D804u; }
        if (ctx->pc != 0x40D804u) { return; }
    }
    ctx->pc = 0x40D804u;
label_40d804:
    // 0x40d804: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x40d804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_40d808:
    // 0x40d808: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x40d808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_40d80c:
    // 0x40d80c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x40d80cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_40d810:
    // 0x40d810: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x40d810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_40d814:
    // 0x40d814: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x40d814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_40d818:
    // 0x40d818: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x40d818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40d81c:
    // 0x40d81c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x40d81cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_40d820:
    // 0x40d820: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x40d820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_40d824:
    // 0x40d824: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x40d824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_40d828:
    // 0x40d828: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x40d828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_40d82c:
    // 0x40d82c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x40d82cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_40d830:
    // 0x40d830: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x40d830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_40d834:
    // 0x40d834: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x40d834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_40d838:
    // 0x40d838: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x40d838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_40d83c:
    // 0x40d83c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x40d83cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_40d840:
    // 0x40d840: 0xc0775b8  jal         func_1DD6E0
label_40d844:
    if (ctx->pc == 0x40D844u) {
        ctx->pc = 0x40D844u;
            // 0x40d844: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x40D848u;
        goto label_40d848;
    }
    ctx->pc = 0x40D840u;
    SET_GPR_U32(ctx, 31, 0x40D848u);
    ctx->pc = 0x40D844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40D840u;
            // 0x40d844: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D848u; }
        if (ctx->pc != 0x40D848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D848u; }
        if (ctx->pc != 0x40D848u) { return; }
    }
    ctx->pc = 0x40D848u;
label_40d848:
    // 0x40d848: 0xc077314  jal         func_1DCC50
label_40d84c:
    if (ctx->pc == 0x40D84Cu) {
        ctx->pc = 0x40D84Cu;
            // 0x40d84c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x40D850u;
        goto label_40d850;
    }
    ctx->pc = 0x40D848u;
    SET_GPR_U32(ctx, 31, 0x40D850u);
    ctx->pc = 0x40D84Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40D848u;
            // 0x40d84c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D850u; }
        if (ctx->pc != 0x40D850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D850u; }
        if (ctx->pc != 0x40D850u) { return; }
    }
    ctx->pc = 0x40D850u;
label_40d850:
    // 0x40d850: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x40d850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_40d854:
    // 0x40d854: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x40d854u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_40d858:
    // 0x40d858: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x40d858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_40d85c:
    // 0x40d85c: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x40d85cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_40d860:
    // 0x40d860: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x40d860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_40d864:
    // 0x40d864: 0x2484acf0  addiu       $a0, $a0, -0x5310
    ctx->pc = 0x40d864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946032));
label_40d868:
    // 0x40d868: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x40d868u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_40d86c:
    // 0x40d86c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x40d86cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_40d870:
    // 0x40d870: 0x2463ad30  addiu       $v1, $v1, -0x52D0
    ctx->pc = 0x40d870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946096));
label_40d874:
    // 0x40d874: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x40d874u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_40d878:
    // 0x40d878: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x40d878u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40d87c:
    // 0x40d87c: 0xae0500c8  sw          $a1, 0xC8($s0)
    ctx->pc = 0x40d87cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 5));
label_40d880:
    // 0x40d880: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x40d880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_40d884:
    // 0x40d884: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x40d884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_40d888:
    // 0x40d888: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x40d888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_40d88c:
    // 0x40d88c: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x40d88cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_40d890:
    // 0x40d890: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x40d890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
label_40d894:
    // 0x40d894: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x40d894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
label_40d898:
    // 0x40d898: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x40d898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_40d89c:
    // 0x40d89c: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x40d89cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
label_40d8a0:
    // 0x40d8a0: 0xae0000ec  sw          $zero, 0xEC($s0)
    ctx->pc = 0x40d8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
label_40d8a4:
    // 0x40d8a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x40d8a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_40d8a8:
    // 0x40d8a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40d8a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40d8ac:
    // 0x40d8ac: 0x3e00008  jr          $ra
label_40d8b0:
    if (ctx->pc == 0x40D8B0u) {
        ctx->pc = 0x40D8B0u;
            // 0x40d8b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x40D8B4u;
        goto label_40d8b4;
    }
    ctx->pc = 0x40D8ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40D8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40D8ACu;
            // 0x40d8b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40D8B4u;
label_40d8b4:
    // 0x40d8b4: 0x0  nop
    ctx->pc = 0x40d8b4u;
    // NOP
label_40d8b8:
    // 0x40d8b8: 0x0  nop
    ctx->pc = 0x40d8b8u;
    // NOP
label_40d8bc:
    // 0x40d8bc: 0x0  nop
    ctx->pc = 0x40d8bcu;
    // NOP
label_40d8c0:
    // 0x40d8c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x40d8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_40d8c4:
    // 0x40d8c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x40d8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_40d8c8:
    // 0x40d8c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40d8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_40d8cc:
    // 0x40d8cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40d8ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40d8d0:
    // 0x40d8d0: 0x8c8400a0  lw          $a0, 0xA0($a0)
    ctx->pc = 0x40d8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_40d8d4:
    // 0x40d8d4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_40d8d8:
    if (ctx->pc == 0x40D8D8u) {
        ctx->pc = 0x40D8D8u;
            // 0x40d8d8: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x40D8DCu;
        goto label_40d8dc;
    }
    ctx->pc = 0x40D8D4u;
    {
        const bool branch_taken_0x40d8d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x40d8d4) {
            ctx->pc = 0x40D8D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40D8D4u;
            // 0x40d8d8: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40D8F0u;
            goto label_40d8f0;
        }
    }
    ctx->pc = 0x40D8DCu;
label_40d8dc:
    // 0x40d8dc: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x40d8dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_40d8e0:
    // 0x40d8e0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x40d8e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_40d8e4:
    // 0x40d8e4: 0x320f809  jalr        $t9
label_40d8e8:
    if (ctx->pc == 0x40D8E8u) {
        ctx->pc = 0x40D8E8u;
            // 0x40d8e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x40D8ECu;
        goto label_40d8ec;
    }
    ctx->pc = 0x40D8E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40D8ECu);
        ctx->pc = 0x40D8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40D8E4u;
            // 0x40d8e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40D8ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40D8ECu; }
            if (ctx->pc != 0x40D8ECu) { return; }
        }
        }
    }
    ctx->pc = 0x40D8ECu;
label_40d8ec:
    // 0x40d8ec: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x40d8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_40d8f0:
    // 0x40d8f0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x40d8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_40d8f4:
    // 0x40d8f4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_40d8f8:
    if (ctx->pc == 0x40D8F8u) {
        ctx->pc = 0x40D8F8u;
            // 0x40d8f8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x40D8FCu;
        goto label_40d8fc;
    }
    ctx->pc = 0x40D8F4u;
    {
        const bool branch_taken_0x40d8f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x40d8f4) {
            ctx->pc = 0x40D8F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40D8F4u;
            // 0x40d8f8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40D910u;
            goto label_40d910;
        }
    }
    ctx->pc = 0x40D8FCu;
label_40d8fc:
    // 0x40d8fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x40d8fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_40d900:
    // 0x40d900: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x40d900u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_40d904:
    // 0x40d904: 0x320f809  jalr        $t9
label_40d908:
    if (ctx->pc == 0x40D908u) {
        ctx->pc = 0x40D908u;
            // 0x40d908: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x40D90Cu;
        goto label_40d90c;
    }
    ctx->pc = 0x40D904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40D90Cu);
        ctx->pc = 0x40D908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40D904u;
            // 0x40d908: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40D90Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40D90Cu; }
            if (ctx->pc != 0x40D90Cu) { return; }
        }
        }
    }
    ctx->pc = 0x40D90Cu;
label_40d90c:
    // 0x40d90c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x40d90cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_40d910:
    // 0x40d910: 0x8e0400ec  lw          $a0, 0xEC($s0)
    ctx->pc = 0x40d910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_40d914:
    // 0x40d914: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_40d918:
    if (ctx->pc == 0x40D918u) {
        ctx->pc = 0x40D918u;
            // 0x40d918: 0xae0000ec  sw          $zero, 0xEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
        ctx->pc = 0x40D91Cu;
        goto label_40d91c;
    }
    ctx->pc = 0x40D914u;
    {
        const bool branch_taken_0x40d914 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x40d914) {
            ctx->pc = 0x40D918u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40D914u;
            // 0x40d918: 0xae0000ec  sw          $zero, 0xEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40D930u;
            goto label_40d930;
        }
    }
    ctx->pc = 0x40D91Cu;
label_40d91c:
    // 0x40d91c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x40d91cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_40d920:
    // 0x40d920: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x40d920u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_40d924:
    // 0x40d924: 0x320f809  jalr        $t9
label_40d928:
    if (ctx->pc == 0x40D928u) {
        ctx->pc = 0x40D928u;
            // 0x40d928: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x40D92Cu;
        goto label_40d92c;
    }
    ctx->pc = 0x40D924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40D92Cu);
        ctx->pc = 0x40D928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40D924u;
            // 0x40d928: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40D92Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40D92Cu; }
            if (ctx->pc != 0x40D92Cu) { return; }
        }
        }
    }
    ctx->pc = 0x40D92Cu;
label_40d92c:
    // 0x40d92c: 0xae0000ec  sw          $zero, 0xEC($s0)
    ctx->pc = 0x40d92cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
label_40d930:
    // 0x40d930: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x40d930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_40d934:
    // 0x40d934: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40d934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40d938:
    // 0x40d938: 0x3e00008  jr          $ra
label_40d93c:
    if (ctx->pc == 0x40D93Cu) {
        ctx->pc = 0x40D93Cu;
            // 0x40d93c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x40D940u;
        goto label_40d940;
    }
    ctx->pc = 0x40D938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40D93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40D938u;
            // 0x40d93c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40D940u;
label_40d940:
    // 0x40d940: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x40d940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_40d944:
    // 0x40d944: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x40d944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_40d948:
    // 0x40d948: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x40d948u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40d94c:
    // 0x40d94c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x40d94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_40d950:
    // 0x40d950: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x40d950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_40d954:
    // 0x40d954: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x40d954u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40d958:
    // 0x40d958: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40d958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_40d95c:
    // 0x40d95c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40d95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_40d960:
    // 0x40d960: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x40d960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40d964:
    // 0x40d964: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x40d964u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40d968:
    // 0x40d968: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_40d96c:
    if (ctx->pc == 0x40D96Cu) {
        ctx->pc = 0x40D96Cu;
            // 0x40d96c: 0xe48100e4  swc1        $f1, 0xE4($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 228), bits); }
        ctx->pc = 0x40D970u;
        goto label_40d970;
    }
    ctx->pc = 0x40D968u;
    {
        const bool branch_taken_0x40d968 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x40D96Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40D968u;
            // 0x40d96c: 0xe48100e4  swc1        $f1, 0xE4($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d968) {
            ctx->pc = 0x40D978u;
            goto label_40d978;
        }
    }
    ctx->pc = 0x40D970u;
label_40d970:
    // 0x40d970: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x40d970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_40d974:
    // 0x40d974: 0xae6200e4  sw          $v0, 0xE4($s3)
    ctx->pc = 0x40d974u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 228), GPR_U32(ctx, 2));
label_40d978:
    // 0x40d978: 0xc0892d0  jal         func_224B40
label_40d97c:
    if (ctx->pc == 0x40D97Cu) {
        ctx->pc = 0x40D97Cu;
            // 0x40d97c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x40D980u;
        goto label_40d980;
    }
    ctx->pc = 0x40D978u;
    SET_GPR_U32(ctx, 31, 0x40D980u);
    ctx->pc = 0x40D97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40D978u;
            // 0x40d97c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D980u; }
        if (ctx->pc != 0x40D980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D980u; }
        if (ctx->pc != 0x40D980u) { return; }
    }
    ctx->pc = 0x40D980u;
label_40d980:
    // 0x40d980: 0xc66000e4  lwc1        $f0, 0xE4($s3)
    ctx->pc = 0x40d980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40d984:
    // 0x40d984: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40d984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_40d988:
    // 0x40d988: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x40d988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
label_40d98c:
    // 0x40d98c: 0x8c50e3e0  lw          $s0, -0x1C20($v0)
    ctx->pc = 0x40d98cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_40d990:
    // 0x40d990: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x40d990u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_40d994:
    // 0x40d994: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x40d994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_40d998:
    // 0x40d998: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x40d998u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_40d99c:
    // 0x40d99c: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x40d99cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_40d9a0:
    // 0x40d9a0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40d9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_40d9a4:
    // 0x40d9a4: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x40d9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_40d9a8:
    // 0x40d9a8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x40d9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_40d9ac:
    // 0x40d9ac: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x40d9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_40d9b0:
    // 0x40d9b0: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x40d9b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_40d9b4:
    // 0x40d9b4: 0xc0a7a88  jal         func_29EA20
label_40d9b8:
    if (ctx->pc == 0x40D9B8u) {
        ctx->pc = 0x40D9B8u;
            // 0x40d9b8: 0xe7a000d8  swc1        $f0, 0xD8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
        ctx->pc = 0x40D9BCu;
        goto label_40d9bc;
    }
    ctx->pc = 0x40D9B4u;
    SET_GPR_U32(ctx, 31, 0x40D9BCu);
    ctx->pc = 0x40D9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40D9B4u;
            // 0x40d9b8: 0xe7a000d8  swc1        $f0, 0xD8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D9BCu; }
        if (ctx->pc != 0x40D9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D9BCu; }
        if (ctx->pc != 0x40D9BCu) { return; }
    }
    ctx->pc = 0x40D9BCu;
label_40d9bc:
    // 0x40d9bc: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x40d9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_40d9c0:
    // 0x40d9c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x40d9c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40d9c4:
    // 0x40d9c4: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_40d9c8:
    if (ctx->pc == 0x40D9C8u) {
        ctx->pc = 0x40D9C8u;
            // 0x40d9c8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x40D9CCu;
        goto label_40d9cc;
    }
    ctx->pc = 0x40D9C4u;
    {
        const bool branch_taken_0x40d9c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x40D9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40D9C4u;
            // 0x40d9c8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d9c4) {
            ctx->pc = 0x40D9E0u;
            goto label_40d9e0;
        }
    }
    ctx->pc = 0x40D9CCu;
label_40d9cc:
    // 0x40d9cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x40d9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_40d9d0:
    // 0x40d9d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x40d9d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40d9d4:
    // 0x40d9d4: 0xc0804bc  jal         func_2012F0
label_40d9d8:
    if (ctx->pc == 0x40D9D8u) {
        ctx->pc = 0x40D9D8u;
            // 0x40d9d8: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x40D9DCu;
        goto label_40d9dc;
    }
    ctx->pc = 0x40D9D4u;
    SET_GPR_U32(ctx, 31, 0x40D9DCu);
    ctx->pc = 0x40D9D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40D9D4u;
            // 0x40d9d8: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D9DCu; }
        if (ctx->pc != 0x40D9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D9DCu; }
        if (ctx->pc != 0x40D9DCu) { return; }
    }
    ctx->pc = 0x40D9DCu;
label_40d9dc:
    // 0x40d9dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x40d9dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40d9e0:
    // 0x40d9e0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x40d9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_40d9e4:
    // 0x40d9e4: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x40d9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_40d9e8:
    // 0x40d9e8: 0xc0b6e68  jal         func_2DB9A0
label_40d9ec:
    if (ctx->pc == 0x40D9ECu) {
        ctx->pc = 0x40D9ECu;
            // 0x40d9ec: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->pc = 0x40D9F0u;
        goto label_40d9f0;
    }
    ctx->pc = 0x40D9E8u;
    SET_GPR_U32(ctx, 31, 0x40D9F0u);
    ctx->pc = 0x40D9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40D9E8u;
            // 0x40d9ec: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D9F0u; }
        if (ctx->pc != 0x40D9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D9F0u; }
        if (ctx->pc != 0x40D9F0u) { return; }
    }
    ctx->pc = 0x40D9F0u;
label_40d9f0:
    // 0x40d9f0: 0xc0b6dac  jal         func_2DB6B0
label_40d9f4:
    if (ctx->pc == 0x40D9F4u) {
        ctx->pc = 0x40D9F4u;
            // 0x40d9f4: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x40D9F8u;
        goto label_40d9f8;
    }
    ctx->pc = 0x40D9F0u;
    SET_GPR_U32(ctx, 31, 0x40D9F8u);
    ctx->pc = 0x40D9F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40D9F0u;
            // 0x40d9f4: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D9F8u; }
        if (ctx->pc != 0x40D9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D9F8u; }
        if (ctx->pc != 0x40D9F8u) { return; }
    }
    ctx->pc = 0x40D9F8u;
label_40d9f8:
    // 0x40d9f8: 0xc0cac94  jal         func_32B250
label_40d9fc:
    if (ctx->pc == 0x40D9FCu) {
        ctx->pc = 0x40D9FCu;
            // 0x40d9fc: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x40DA00u;
        goto label_40da00;
    }
    ctx->pc = 0x40D9F8u;
    SET_GPR_U32(ctx, 31, 0x40DA00u);
    ctx->pc = 0x40D9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40D9F8u;
            // 0x40d9fc: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40DA00u; }
        if (ctx->pc != 0x40DA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40DA00u; }
        if (ctx->pc != 0x40DA00u) { return; }
    }
    ctx->pc = 0x40DA00u;
label_40da00:
    // 0x40da00: 0xc0cac84  jal         func_32B210
label_40da04:
    if (ctx->pc == 0x40DA04u) {
        ctx->pc = 0x40DA04u;
            // 0x40da04: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x40DA08u;
        goto label_40da08;
    }
    ctx->pc = 0x40DA00u;
    SET_GPR_U32(ctx, 31, 0x40DA08u);
    ctx->pc = 0x40DA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40DA00u;
            // 0x40da04: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40DA08u; }
        if (ctx->pc != 0x40DA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40DA08u; }
        if (ctx->pc != 0x40DA08u) { return; }
    }
    ctx->pc = 0x40DA08u;
label_40da08:
    // 0x40da08: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x40da08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_40da0c:
    // 0x40da0c: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x40da0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_40da10:
    // 0x40da10: 0xc44cc918  lwc1        $f12, -0x36E8($v0)
    ctx->pc = 0x40da10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_40da14:
    // 0x40da14: 0xc0a5a68  jal         func_2969A0
label_40da18:
    if (ctx->pc == 0x40DA18u) {
        ctx->pc = 0x40DA18u;
            // 0x40da18: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x40DA1Cu;
        goto label_40da1c;
    }
    ctx->pc = 0x40DA14u;
    SET_GPR_U32(ctx, 31, 0x40DA1Cu);
    ctx->pc = 0x40DA18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40DA14u;
            // 0x40da18: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40DA1Cu; }
        if (ctx->pc != 0x40DA1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40DA1Cu; }
        if (ctx->pc != 0x40DA1Cu) { return; }
    }
    ctx->pc = 0x40DA1Cu;
label_40da1c:
    // 0x40da1c: 0xafb200e4  sw          $s2, 0xE4($sp)
    ctx->pc = 0x40da1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 18));
label_40da20:
    // 0x40da20: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x40da20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_40da24:
    // 0x40da24: 0xc6660018  lwc1        $f6, 0x18($s3)
    ctx->pc = 0x40da24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_40da28:
    // 0x40da28: 0x3447cccd  ori         $a3, $v0, 0xCCCD
    ctx->pc = 0x40da28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_40da2c:
    // 0x40da2c: 0xc6650014  lwc1        $f5, 0x14($s3)
    ctx->pc = 0x40da2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_40da30:
    // 0x40da30: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x40da30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_40da34:
    // 0x40da34: 0xc6640010  lwc1        $f4, 0x10($s3)
    ctx->pc = 0x40da34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_40da38:
    // 0x40da38: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x40da38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_40da3c:
    // 0x40da3c: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x40da3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40da40:
    // 0x40da40: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40da40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_40da44:
    // 0x40da44: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x40da44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_40da48:
    // 0x40da48: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x40da48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40da4c:
    // 0x40da4c: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x40da4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40da50:
    // 0x40da50: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x40da50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_40da54:
    // 0x40da54: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x40da54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_40da58:
    // 0x40da58: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x40da58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_40da5c:
    // 0x40da5c: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x40da5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40da60:
    // 0x40da60: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x40da60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_40da64:
    // 0x40da64: 0xe7a20134  swc1        $f2, 0x134($sp)
    ctx->pc = 0x40da64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_40da68:
    // 0x40da68: 0xa3a80190  sb          $t0, 0x190($sp)
    ctx->pc = 0x40da68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 400), (uint8_t)GPR_U32(ctx, 8));
label_40da6c:
    // 0x40da6c: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x40da6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_40da70:
    // 0x40da70: 0xafa7018c  sw          $a3, 0x18C($sp)
    ctx->pc = 0x40da70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 7));
label_40da74:
    // 0x40da74: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x40da74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_40da78:
    // 0x40da78: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x40da78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_40da7c:
    // 0x40da7c: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x40da7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_40da80:
    // 0x40da80: 0xafa000fc  sw          $zero, 0xFC($sp)
    ctx->pc = 0x40da80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
label_40da84:
    // 0x40da84: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x40da84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40da88:
    // 0x40da88: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x40da88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40da8c:
    // 0x40da8c: 0xe7a20140  swc1        $f2, 0x140($sp)
    ctx->pc = 0x40da8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_40da90:
    // 0x40da90: 0xe7a10144  swc1        $f1, 0x144($sp)
    ctx->pc = 0x40da90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_40da94:
    // 0x40da94: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x40da94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_40da98:
    // 0x40da98: 0xc7a200bc  lwc1        $f2, 0xBC($sp)
    ctx->pc = 0x40da98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_40da9c:
    // 0x40da9c: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x40da9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40daa0:
    // 0x40daa0: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x40daa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40daa4:
    // 0x40daa4: 0xe7a2014c  swc1        $f2, 0x14C($sp)
    ctx->pc = 0x40daa4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_40daa8:
    // 0x40daa8: 0xe7a10150  swc1        $f1, 0x150($sp)
    ctx->pc = 0x40daa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_40daac:
    // 0x40daac: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x40daacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_40dab0:
    // 0x40dab0: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x40dab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_40dab4:
    // 0x40dab4: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x40dab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40dab8:
    // 0x40dab8: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x40dab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40dabc:
    // 0x40dabc: 0xe7a20158  swc1        $f2, 0x158($sp)
    ctx->pc = 0x40dabcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_40dac0:
    // 0x40dac0: 0xe7a1015c  swc1        $f1, 0x15C($sp)
    ctx->pc = 0x40dac0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_40dac4:
    // 0x40dac4: 0xe7a0016c  swc1        $f0, 0x16C($sp)
    ctx->pc = 0x40dac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
label_40dac8:
    // 0x40dac8: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x40dac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_40dacc:
    // 0x40dacc: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x40daccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_40dad0:
    // 0x40dad0: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x40dad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40dad4:
    // 0x40dad4: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x40dad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40dad8:
    // 0x40dad8: 0xe7a400f0  swc1        $f4, 0xF0($sp)
    ctx->pc = 0x40dad8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_40dadc:
    // 0x40dadc: 0xe7a500f4  swc1        $f5, 0xF4($sp)
    ctx->pc = 0x40dadcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_40dae0:
    // 0x40dae0: 0xe7a600f8  swc1        $f6, 0xF8($sp)
    ctx->pc = 0x40dae0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_40dae4:
    // 0x40dae4: 0xe7a30130  swc1        $f3, 0x130($sp)
    ctx->pc = 0x40dae4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_40dae8:
    // 0x40dae8: 0xe7a20164  swc1        $f2, 0x164($sp)
    ctx->pc = 0x40dae8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_40daec:
    // 0x40daec: 0xe7a10168  swc1        $f1, 0x168($sp)
    ctx->pc = 0x40daecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_40daf0:
    // 0x40daf0: 0xc0a7a88  jal         func_29EA20
label_40daf4:
    if (ctx->pc == 0x40DAF4u) {
        ctx->pc = 0x40DAF4u;
            // 0x40daf4: 0xe7a00170  swc1        $f0, 0x170($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
        ctx->pc = 0x40DAF8u;
        goto label_40daf8;
    }
    ctx->pc = 0x40DAF0u;
    SET_GPR_U32(ctx, 31, 0x40DAF8u);
    ctx->pc = 0x40DAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40DAF0u;
            // 0x40daf4: 0xe7a00170  swc1        $f0, 0x170($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40DAF8u; }
        if (ctx->pc != 0x40DAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40DAF8u; }
        if (ctx->pc != 0x40DAF8u) { return; }
    }
    ctx->pc = 0x40DAF8u;
label_40daf8:
    // 0x40daf8: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x40daf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_40dafc:
    // 0x40dafc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x40dafcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40db00:
    // 0x40db00: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_40db04:
    if (ctx->pc == 0x40DB04u) {
        ctx->pc = 0x40DB04u;
            // 0x40db04: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x40DB08u;
        goto label_40db08;
    }
    ctx->pc = 0x40DB00u;
    {
        const bool branch_taken_0x40db00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x40DB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40DB00u;
            // 0x40db04: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40db00) {
            ctx->pc = 0x40DB50u;
            goto label_40db50;
        }
    }
    ctx->pc = 0x40DB08u;
label_40db08:
    // 0x40db08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40db08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40db0c:
    // 0x40db0c: 0xc088ef4  jal         func_223BD0
label_40db10:
    if (ctx->pc == 0x40DB10u) {
        ctx->pc = 0x40DB10u;
            // 0x40db10: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x40DB14u;
        goto label_40db14;
    }
    ctx->pc = 0x40DB0Cu;
    SET_GPR_U32(ctx, 31, 0x40DB14u);
    ctx->pc = 0x40DB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40DB0Cu;
            // 0x40db10: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40DB14u; }
        if (ctx->pc != 0x40DB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40DB14u; }
        if (ctx->pc != 0x40DB14u) { return; }
    }
    ctx->pc = 0x40DB14u;
label_40db14:
    // 0x40db14: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x40db14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_40db18:
    // 0x40db18: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x40db18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_40db1c:
    // 0x40db1c: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x40db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_40db20:
    // 0x40db20: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x40db20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_40db24:
    // 0x40db24: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x40db24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_40db28:
    // 0x40db28: 0xae200200  sw          $zero, 0x200($s1)
    ctx->pc = 0x40db28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
label_40db2c:
    // 0x40db2c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40db2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_40db30:
    // 0x40db30: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x40db30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_40db34:
    // 0x40db34: 0xae200210  sw          $zero, 0x210($s1)
    ctx->pc = 0x40db34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 0));
label_40db38:
    // 0x40db38: 0xae200214  sw          $zero, 0x214($s1)
    ctx->pc = 0x40db38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
label_40db3c:
    // 0x40db3c: 0xae33000c  sw          $s3, 0xC($s1)
    ctx->pc = 0x40db3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 19));
label_40db40:
    // 0x40db40: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x40db40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_40db44:
    // 0x40db44: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x40db44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_40db48:
    // 0x40db48: 0xc088b38  jal         func_222CE0
label_40db4c:
    if (ctx->pc == 0x40DB4Cu) {
        ctx->pc = 0x40DB4Cu;
            // 0x40db4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40DB50u;
        goto label_40db50;
    }
    ctx->pc = 0x40DB48u;
    SET_GPR_U32(ctx, 31, 0x40DB50u);
    ctx->pc = 0x40DB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40DB48u;
            // 0x40db4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40DB50u; }
        if (ctx->pc != 0x40DB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40DB50u; }
        if (ctx->pc != 0x40DB50u) { return; }
    }
    ctx->pc = 0x40DB50u;
label_40db50:
    // 0x40db50: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x40db50u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_40db54:
    // 0x40db54: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_40db58:
    if (ctx->pc == 0x40DB58u) {
        ctx->pc = 0x40DB58u;
            // 0x40db58: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x40DB5Cu;
        goto label_40db5c;
    }
    ctx->pc = 0x40DB54u;
    {
        const bool branch_taken_0x40db54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x40db54) {
            ctx->pc = 0x40DB58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40DB54u;
            // 0x40db58: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40DB98u;
            goto label_40db98;
        }
    }
    ctx->pc = 0x40DB5Cu;
label_40db5c:
    // 0x40db5c: 0x86420006  lh          $v0, 0x6($s2)
    ctx->pc = 0x40db5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_40db60:
    // 0x40db60: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x40db60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_40db64:
    // 0x40db64: 0xa6420006  sh          $v0, 0x6($s2)
    ctx->pc = 0x40db64u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
label_40db68:
    // 0x40db68: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x40db68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_40db6c:
    // 0x40db6c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x40db6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_40db70:
    // 0x40db70: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_40db74:
    if (ctx->pc == 0x40DB74u) {
        ctx->pc = 0x40DB78u;
        goto label_40db78;
    }
    ctx->pc = 0x40DB70u;
    {
        const bool branch_taken_0x40db70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x40db70) {
            ctx->pc = 0x40DB94u;
            goto label_40db94;
        }
    }
    ctx->pc = 0x40DB78u;
label_40db78:
    // 0x40db78: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_40db7c:
    if (ctx->pc == 0x40DB7Cu) {
        ctx->pc = 0x40DB80u;
        goto label_40db80;
    }
    ctx->pc = 0x40DB78u;
    {
        const bool branch_taken_0x40db78 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x40db78) {
            ctx->pc = 0x40DB94u;
            goto label_40db94;
        }
    }
    ctx->pc = 0x40DB80u;
label_40db80:
    // 0x40db80: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x40db80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_40db84:
    // 0x40db84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x40db84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_40db88:
    // 0x40db88: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x40db88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_40db8c:
    // 0x40db8c: 0x320f809  jalr        $t9
label_40db90:
    if (ctx->pc == 0x40DB90u) {
        ctx->pc = 0x40DB90u;
            // 0x40db90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x40DB94u;
        goto label_40db94;
    }
    ctx->pc = 0x40DB8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40DB94u);
        ctx->pc = 0x40DB90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40DB8Cu;
            // 0x40db90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40DB94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40DB94u; }
            if (ctx->pc != 0x40DB94u) { return; }
        }
        }
    }
    ctx->pc = 0x40DB94u;
label_40db94:
    // 0x40db94: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x40db94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_40db98:
    // 0x40db98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x40db98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40db9c:
    // 0x40db9c: 0xc08c164  jal         func_230590
label_40dba0:
    if (ctx->pc == 0x40DBA0u) {
        ctx->pc = 0x40DBA0u;
            // 0x40dba0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x40DBA4u;
        goto label_40dba4;
    }
    ctx->pc = 0x40DB9Cu;
    SET_GPR_U32(ctx, 31, 0x40DBA4u);
    ctx->pc = 0x40DBA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40DB9Cu;
            // 0x40dba0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40DBA4u; }
        if (ctx->pc != 0x40DBA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40DBA4u; }
        if (ctx->pc != 0x40DBA4u) { return; }
    }
    ctx->pc = 0x40DBA4u;
label_40dba4:
    // 0x40dba4: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x40dba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_40dba8:
    // 0x40dba8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40dba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40dbac:
    // 0x40dbac: 0x24425f20  addiu       $v0, $v0, 0x5F20
    ctx->pc = 0x40dbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24352));
label_40dbb0:
    // 0x40dbb0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x40dbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_40dbb4:
    // 0x40dbb4: 0xae220200  sw          $v0, 0x200($s1)
    ctx->pc = 0x40dbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 2));
label_40dbb8:
    // 0x40dbb8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x40dbb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40dbbc:
    // 0x40dbbc: 0xc08914c  jal         func_224530
label_40dbc0:
    if (ctx->pc == 0x40DBC0u) {
        ctx->pc = 0x40DBC0u;
            // 0x40dbc0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40DBC4u;
        goto label_40dbc4;
    }
    ctx->pc = 0x40DBBCu;
    SET_GPR_U32(ctx, 31, 0x40DBC4u);
    ctx->pc = 0x40DBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40DBBCu;
            // 0x40dbc0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40DBC4u; }
        if (ctx->pc != 0x40DBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40DBC4u; }
        if (ctx->pc != 0x40DBC4u) { return; }
    }
    ctx->pc = 0x40DBC4u;
label_40dbc4:
    // 0x40dbc4: 0x3c0243d1  lui         $v0, 0x43D1
    ctx->pc = 0x40dbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17361 << 16));
label_40dbc8:
    // 0x40dbc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40dbc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40dbcc:
    // 0x40dbcc: 0x34427084  ori         $v0, $v0, 0x7084
    ctx->pc = 0x40dbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28804);
label_40dbd0:
    // 0x40dbd0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x40dbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_40dbd4:
    // 0x40dbd4: 0xae220154  sw          $v0, 0x154($s1)
    ctx->pc = 0x40dbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 2));
label_40dbd8:
    // 0x40dbd8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x40dbd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_40dbdc:
    // 0x40dbdc: 0xae200158  sw          $zero, 0x158($s1)
    ctx->pc = 0x40dbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 0));
label_40dbe0:
    // 0x40dbe0: 0xc6620018  lwc1        $f2, 0x18($s3)
    ctx->pc = 0x40dbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_40dbe4:
    // 0x40dbe4: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x40dbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40dbe8:
    // 0x40dbe8: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x40dbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40dbec:
    // 0x40dbec: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x40dbecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_40dbf0:
    // 0x40dbf0: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x40dbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_40dbf4:
    // 0x40dbf4: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x40dbf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_40dbf8:
    // 0x40dbf8: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x40dbf8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_40dbfc:
    // 0x40dbfc: 0xc663002c  lwc1        $f3, 0x2C($s3)
    ctx->pc = 0x40dbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_40dc00:
    // 0x40dc00: 0xc6620028  lwc1        $f2, 0x28($s3)
    ctx->pc = 0x40dc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_40dc04:
    // 0x40dc04: 0xc6610024  lwc1        $f1, 0x24($s3)
    ctx->pc = 0x40dc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40dc08:
    // 0x40dc08: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x40dc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40dc0c:
    // 0x40dc0c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x40dc0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_40dc10:
    // 0x40dc10: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x40dc10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_40dc14:
    // 0x40dc14: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x40dc14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_40dc18:
    // 0x40dc18: 0xc0892b0  jal         func_224AC0
label_40dc1c:
    if (ctx->pc == 0x40DC1Cu) {
        ctx->pc = 0x40DC1Cu;
            // 0x40dc1c: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->pc = 0x40DC20u;
        goto label_40dc20;
    }
    ctx->pc = 0x40DC18u;
    SET_GPR_U32(ctx, 31, 0x40DC20u);
    ctx->pc = 0x40DC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40DC18u;
            // 0x40dc1c: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40DC20u; }
        if (ctx->pc != 0x40DC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40DC20u; }
        if (ctx->pc != 0x40DC20u) { return; }
    }
    ctx->pc = 0x40DC20u;
label_40dc20:
    // 0x40dc20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40dc20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40dc24:
    // 0x40dc24: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x40dc24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_40dc28:
    // 0x40dc28: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x40dc28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_40dc2c:
    // 0x40dc2c: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x40dc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_40dc30:
    // 0x40dc30: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x40dc30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_40dc34:
    // 0x40dc34: 0xc0891d8  jal         func_224760
label_40dc38:
    if (ctx->pc == 0x40DC38u) {
        ctx->pc = 0x40DC38u;
            // 0x40dc38: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->pc = 0x40DC3Cu;
        goto label_40dc3c;
    }
    ctx->pc = 0x40DC34u;
    SET_GPR_U32(ctx, 31, 0x40DC3Cu);
    ctx->pc = 0x40DC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40DC34u;
            // 0x40dc38: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40DC3Cu; }
        if (ctx->pc != 0x40DC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40DC3Cu; }
        if (ctx->pc != 0x40DC3Cu) { return; }
    }
    ctx->pc = 0x40DC3Cu;
label_40dc3c:
    // 0x40dc3c: 0xae710050  sw          $s1, 0x50($s3)
    ctx->pc = 0x40dc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 17));
label_40dc40:
    // 0x40dc40: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40dc40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_40dc44:
    // 0x40dc44: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x40dc44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_40dc48:
    // 0x40dc48: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x40dc48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_40dc4c:
    // 0x40dc4c: 0xc0a7a88  jal         func_29EA20
label_40dc50:
    if (ctx->pc == 0x40DC50u) {
        ctx->pc = 0x40DC50u;
            // 0x40dc50: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x40DC54u;
        goto label_40dc54;
    }
    ctx->pc = 0x40DC4Cu;
    SET_GPR_U32(ctx, 31, 0x40DC54u);
    ctx->pc = 0x40DC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40DC4Cu;
            // 0x40dc50: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40DC54u; }
        if (ctx->pc != 0x40DC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40DC54u; }
        if (ctx->pc != 0x40DC54u) { return; }
    }
    ctx->pc = 0x40DC54u;
label_40dc54:
    // 0x40dc54: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x40dc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_40dc58:
    // 0x40dc58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x40dc58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40dc5c:
    // 0x40dc5c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_40dc60:
    if (ctx->pc == 0x40DC60u) {
        ctx->pc = 0x40DC60u;
            // 0x40dc60: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x40DC64u;
        goto label_40dc64;
    }
    ctx->pc = 0x40DC5Cu;
    {
        const bool branch_taken_0x40dc5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x40DC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40DC5Cu;
            // 0x40dc60: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40dc5c) {
            ctx->pc = 0x40DC80u;
            goto label_40dc80;
        }
    }
    ctx->pc = 0x40DC64u;
label_40dc64:
    // 0x40dc64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40dc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40dc68:
    // 0x40dc68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x40dc68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40dc6c:
    // 0x40dc6c: 0xc0869d0  jal         func_21A740
label_40dc70:
    if (ctx->pc == 0x40DC70u) {
        ctx->pc = 0x40DC70u;
            // 0x40dc70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40DC74u;
        goto label_40dc74;
    }
    ctx->pc = 0x40DC6Cu;
    SET_GPR_U32(ctx, 31, 0x40DC74u);
    ctx->pc = 0x40DC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40DC6Cu;
            // 0x40dc70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40DC74u; }
        if (ctx->pc != 0x40DC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40DC74u; }
        if (ctx->pc != 0x40DC74u) { return; }
    }
    ctx->pc = 0x40DC74u;
label_40dc74:
    // 0x40dc74: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x40dc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_40dc78:
    // 0x40dc78: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x40dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_40dc7c:
    // 0x40dc7c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x40dc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_40dc80:
    // 0x40dc80: 0xae300210  sw          $s0, 0x210($s1)
    ctx->pc = 0x40dc80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 16));
label_40dc84:
    // 0x40dc84: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40dc84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_40dc88:
    // 0x40dc88: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x40dc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_40dc8c:
    // 0x40dc8c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x40dc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_40dc90:
    // 0x40dc90: 0xc08c650  jal         func_231940
label_40dc94:
    if (ctx->pc == 0x40DC94u) {
        ctx->pc = 0x40DC94u;
            // 0x40dc94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40DC98u;
        goto label_40dc98;
    }
    ctx->pc = 0x40DC90u;
    SET_GPR_U32(ctx, 31, 0x40DC98u);
    ctx->pc = 0x40DC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40DC90u;
            // 0x40dc94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40DC98u; }
        if (ctx->pc != 0x40DC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40DC98u; }
        if (ctx->pc != 0x40DC98u) { return; }
    }
    ctx->pc = 0x40DC98u;
label_40dc98:
    // 0x40dc98: 0xc040180  jal         func_100600
label_40dc9c:
    if (ctx->pc == 0x40DC9Cu) {
        ctx->pc = 0x40DC9Cu;
            // 0x40dc9c: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x40DCA0u;
        goto label_40dca0;
    }
    ctx->pc = 0x40DC98u;
    SET_GPR_U32(ctx, 31, 0x40DCA0u);
    ctx->pc = 0x40DC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40DC98u;
            // 0x40dc9c: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40DCA0u; }
        if (ctx->pc != 0x40DCA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40DCA0u; }
        if (ctx->pc != 0x40DCA0u) { return; }
    }
    ctx->pc = 0x40DCA0u;
label_40dca0:
    // 0x40dca0: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_40dca4:
    if (ctx->pc == 0x40DCA4u) {
        ctx->pc = 0x40DCA4u;
            // 0x40dca4: 0xae6200a0  sw          $v0, 0xA0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x40DCA8u;
        goto label_40dca8;
    }
    ctx->pc = 0x40DCA0u;
    {
        const bool branch_taken_0x40dca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x40dca0) {
            ctx->pc = 0x40DCA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40DCA0u;
            // 0x40dca4: 0xae6200a0  sw          $v0, 0xA0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40DCF0u;
            goto label_40dcf0;
        }
    }
    ctx->pc = 0x40DCA8u;
label_40dca8:
    // 0x40dca8: 0x8e660050  lw          $a2, 0x50($s3)
    ctx->pc = 0x40dca8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_40dcac:
    // 0x40dcac: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x40dcacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_40dcb0:
    // 0x40dcb0: 0x24a521e0  addiu       $a1, $a1, 0x21E0
    ctx->pc = 0x40dcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
label_40dcb4:
    // 0x40dcb4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x40dcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_40dcb8:
    // 0x40dcb8: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x40dcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_40dcbc:
    // 0x40dcbc: 0x2463bc30  addiu       $v1, $v1, -0x43D0
    ctx->pc = 0x40dcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949936));
label_40dcc0:
    // 0x40dcc0: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x40dcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
label_40dcc4:
    // 0x40dcc4: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x40dcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_40dcc8:
    // 0x40dcc8: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x40dcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_40dccc:
    // 0x40dccc: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x40dcccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
label_40dcd0:
    // 0x40dcd0: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x40dcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_40dcd4:
    // 0x40dcd4: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x40dcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_40dcd8:
    // 0x40dcd8: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x40dcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_40dcdc:
    // 0x40dcdc: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x40dcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_40dce0:
    // 0x40dce0: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x40dce0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_40dce4:
    // 0x40dce4: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x40dce4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_40dce8:
    // 0x40dce8: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x40dce8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_40dcec:
    // 0x40dcec: 0xae6200a0  sw          $v0, 0xA0($s3)
    ctx->pc = 0x40dcecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 2));
label_40dcf0:
    // 0x40dcf0: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x40dcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_40dcf4:
    // 0x40dcf4: 0x8e6800b0  lw          $t0, 0xB0($s3)
    ctx->pc = 0x40dcf4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_40dcf8:
    // 0x40dcf8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x40dcf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40dcfc:
    // 0x40dcfc: 0x3c064416  lui         $a2, 0x4416
    ctx->pc = 0x40dcfcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17430 << 16));
label_40dd00:
    // 0x40dd00: 0x3c054334  lui         $a1, 0x4334
    ctx->pc = 0x40dd00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17204 << 16));
label_40dd04:
    // 0x40dd04: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x40dd04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_40dd08:
    // 0x40dd08: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x40dd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_40dd0c:
    // 0x40dd0c: 0x1044024  and         $t0, $t0, $a0
    ctx->pc = 0x40dd0cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
label_40dd10:
    // 0x40dd10: 0x35080004  ori         $t0, $t0, 0x4
    ctx->pc = 0x40dd10u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)4);
label_40dd14:
    // 0x40dd14: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x40dd14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_40dd18:
    // 0x40dd18: 0xae6800b0  sw          $t0, 0xB0($s3)
    ctx->pc = 0x40dd18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 8));
label_40dd1c:
    // 0x40dd1c: 0xae67008c  sw          $a3, 0x8C($s3)
    ctx->pc = 0x40dd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 7));
label_40dd20:
    // 0x40dd20: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x40dd20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_40dd24:
    // 0x40dd24: 0xae660078  sw          $a2, 0x78($s3)
    ctx->pc = 0x40dd24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 6));
label_40dd28:
    // 0x40dd28: 0xae650080  sw          $a1, 0x80($s3)
    ctx->pc = 0x40dd28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 5));
label_40dd2c:
    // 0x40dd2c: 0xa260006a  sb          $zero, 0x6A($s3)
    ctx->pc = 0x40dd2cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 106), (uint8_t)GPR_U32(ctx, 0));
label_40dd30:
    // 0x40dd30: 0xa267006b  sb          $a3, 0x6B($s3)
    ctx->pc = 0x40dd30u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 107), (uint8_t)GPR_U32(ctx, 7));
label_40dd34:
    // 0x40dd34: 0xa2600064  sb          $zero, 0x64($s3)
    ctx->pc = 0x40dd34u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 100), (uint8_t)GPR_U32(ctx, 0));
label_40dd38:
    // 0x40dd38: 0xa2630065  sb          $v1, 0x65($s3)
    ctx->pc = 0x40dd38u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 101), (uint8_t)GPR_U32(ctx, 3));
label_40dd3c:
    // 0x40dd3c: 0xa2600066  sb          $zero, 0x66($s3)
    ctx->pc = 0x40dd3cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 102), (uint8_t)GPR_U32(ctx, 0));
label_40dd40:
    // 0x40dd40: 0xa2630067  sb          $v1, 0x67($s3)
    ctx->pc = 0x40dd40u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 103), (uint8_t)GPR_U32(ctx, 3));
label_40dd44:
    // 0x40dd44: 0x8e6300b0  lw          $v1, 0xB0($s3)
    ctx->pc = 0x40dd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_40dd48:
    // 0x40dd48: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x40dd48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_40dd4c:
    // 0x40dd4c: 0xc040180  jal         func_100600
label_40dd50:
    if (ctx->pc == 0x40DD50u) {
        ctx->pc = 0x40DD50u;
            // 0x40dd50: 0xae6200b0  sw          $v0, 0xB0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x40DD54u;
        goto label_40dd54;
    }
    ctx->pc = 0x40DD4Cu;
    SET_GPR_U32(ctx, 31, 0x40DD54u);
    ctx->pc = 0x40DD50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40DD4Cu;
            // 0x40dd50: 0xae6200b0  sw          $v0, 0xB0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40DD54u; }
        if (ctx->pc != 0x40DD54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40DD54u; }
        if (ctx->pc != 0x40DD54u) { return; }
    }
    ctx->pc = 0x40DD54u;
label_40dd54:
    // 0x40dd54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x40dd54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40dd58:
    // 0x40dd58: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_40dd5c:
    if (ctx->pc == 0x40DD5Cu) {
        ctx->pc = 0x40DD5Cu;
            // 0x40dd5c: 0x3c024774  lui         $v0, 0x4774 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18292 << 16));
        ctx->pc = 0x40DD60u;
        goto label_40dd60;
    }
    ctx->pc = 0x40DD58u;
    {
        const bool branch_taken_0x40dd58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x40dd58) {
            ctx->pc = 0x40DD5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40DD58u;
            // 0x40dd5c: 0x3c024774  lui         $v0, 0x4774 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18292 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40DD98u;
            goto label_40dd98;
        }
    }
    ctx->pc = 0x40DD60u;
label_40dd60:
    // 0x40dd60: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x40dd60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_40dd64:
    // 0x40dd64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40dd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40dd68:
    // 0x40dd68: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x40dd68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_40dd6c:
    // 0x40dd6c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x40dd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_40dd70:
    // 0x40dd70: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x40dd70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_40dd74:
    // 0x40dd74: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x40dd74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_40dd78:
    // 0x40dd78: 0xc040138  jal         func_1004E0
label_40dd7c:
    if (ctx->pc == 0x40DD7Cu) {
        ctx->pc = 0x40DD7Cu;
            // 0x40dd7c: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x40DD80u;
        goto label_40dd80;
    }
    ctx->pc = 0x40DD78u;
    SET_GPR_U32(ctx, 31, 0x40DD80u);
    ctx->pc = 0x40DD7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40DD78u;
            // 0x40dd7c: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40DD80u; }
        if (ctx->pc != 0x40DD80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40DD80u; }
        if (ctx->pc != 0x40DD80u) { return; }
    }
    ctx->pc = 0x40DD80u;
label_40dd80:
    // 0x40dd80: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x40dd80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_40dd84:
    // 0x40dd84: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x40dd84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_40dd88:
    // 0x40dd88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x40dd88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40dd8c:
    // 0x40dd8c: 0xc04a576  jal         func_1295D8
label_40dd90:
    if (ctx->pc == 0x40DD90u) {
        ctx->pc = 0x40DD90u;
            // 0x40dd90: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x40DD94u;
        goto label_40dd94;
    }
    ctx->pc = 0x40DD8Cu;
    SET_GPR_U32(ctx, 31, 0x40DD94u);
    ctx->pc = 0x40DD90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40DD8Cu;
            // 0x40dd90: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40DD94u; }
        if (ctx->pc != 0x40DD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40DD94u; }
        if (ctx->pc != 0x40DD94u) { return; }
    }
    ctx->pc = 0x40DD94u;
label_40dd94:
    // 0x40dd94: 0x3c024774  lui         $v0, 0x4774
    ctx->pc = 0x40dd94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18292 << 16));
label_40dd98:
    // 0x40dd98: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x40dd98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_40dd9c:
    // 0x40dd9c: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x40dd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
label_40dda0:
    // 0x40dda0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40dda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40dda4:
    // 0x40dda4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x40dda4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40dda8:
    // 0x40dda8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x40dda8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40ddac:
    // 0x40ddac: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x40ddacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_40ddb0:
    // 0x40ddb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x40ddb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40ddb4:
    // 0x40ddb4: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x40ddb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_40ddb8:
    // 0x40ddb8: 0x34460dae  ori         $a2, $v0, 0xDAE
    ctx->pc = 0x40ddb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3502);
label_40ddbc:
    // 0x40ddbc: 0xc122cd8  jal         func_48B360
label_40ddc0:
    if (ctx->pc == 0x40DDC0u) {
        ctx->pc = 0x40DDC0u;
            // 0x40ddc0: 0xae7000ec  sw          $s0, 0xEC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 236), GPR_U32(ctx, 16));
        ctx->pc = 0x40DDC4u;
        goto label_40ddc4;
    }
    ctx->pc = 0x40DDBCu;
    SET_GPR_U32(ctx, 31, 0x40DDC4u);
    ctx->pc = 0x40DDC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40DDBCu;
            // 0x40ddc0: 0xae7000ec  sw          $s0, 0xEC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 236), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40DDC4u; }
        if (ctx->pc != 0x40DDC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40DDC4u; }
        if (ctx->pc != 0x40DDC4u) { return; }
    }
    ctx->pc = 0x40DDC4u;
label_40ddc4:
    // 0x40ddc4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x40ddc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_40ddc8:
    // 0x40ddc8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x40ddc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_40ddcc:
    // 0x40ddcc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x40ddccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40ddd0:
    // 0x40ddd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40ddd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40ddd4:
    // 0x40ddd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40ddd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40ddd8:
    // 0x40ddd8: 0x3e00008  jr          $ra
label_40dddc:
    if (ctx->pc == 0x40DDDCu) {
        ctx->pc = 0x40DDDCu;
            // 0x40dddc: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x40DDE0u;
        goto label_40dde0;
    }
    ctx->pc = 0x40DDD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40DDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40DDD8u;
            // 0x40dddc: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40DDE0u;
label_40dde0:
    // 0x40dde0: 0x3e00008  jr          $ra
label_40dde4:
    if (ctx->pc == 0x40DDE4u) {
        ctx->pc = 0x40DDE8u;
        goto label_40dde8;
    }
    ctx->pc = 0x40DDE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40DDE8u;
label_40dde8:
    // 0x40dde8: 0x0  nop
    ctx->pc = 0x40dde8u;
    // NOP
label_40ddec:
    // 0x40ddec: 0x0  nop
    ctx->pc = 0x40ddecu;
    // NOP
label_40ddf0:
    // 0x40ddf0: 0x3e00008  jr          $ra
label_40ddf4:
    if (ctx->pc == 0x40DDF4u) {
        ctx->pc = 0x40DDF8u;
        goto label_40ddf8;
    }
    ctx->pc = 0x40DDF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40DDF8u;
label_40ddf8:
    // 0x40ddf8: 0x0  nop
    ctx->pc = 0x40ddf8u;
    // NOP
label_40ddfc:
    // 0x40ddfc: 0x0  nop
    ctx->pc = 0x40ddfcu;
    // NOP
label_40de00:
    // 0x40de00: 0x3e00008  jr          $ra
label_40de04:
    if (ctx->pc == 0x40DE04u) {
        ctx->pc = 0x40DE08u;
        goto label_40de08;
    }
    ctx->pc = 0x40DE00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40DE08u;
label_40de08:
    // 0x40de08: 0x0  nop
    ctx->pc = 0x40de08u;
    // NOP
label_40de0c:
    // 0x40de0c: 0x0  nop
    ctx->pc = 0x40de0cu;
    // NOP
label_40de10:
    // 0x40de10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x40de10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_40de14:
    // 0x40de14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40de14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40de18:
    // 0x40de18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x40de18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_40de1c:
    // 0x40de1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40de1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_40de20:
    // 0x40de20: 0x8c8300ac  lw          $v1, 0xAC($a0)
    ctx->pc = 0x40de20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
label_40de24:
    // 0x40de24: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_40de28:
    if (ctx->pc == 0x40DE28u) {
        ctx->pc = 0x40DE28u;
            // 0x40de28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40DE2Cu;
        goto label_40de2c;
    }
    ctx->pc = 0x40DE24u;
    {
        const bool branch_taken_0x40de24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x40DE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40DE24u;
            // 0x40de28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40de24) {
            ctx->pc = 0x40DE50u;
            goto label_40de50;
        }
    }
    ctx->pc = 0x40DE2Cu;
label_40de2c:
    // 0x40de2c: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x40de2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
label_40de30:
    // 0x40de30: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x40de30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_40de34:
    // 0x40de34: 0xc6000078  lwc1        $f0, 0x78($s0)
    ctx->pc = 0x40de34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40de38:
    // 0x40de38: 0xc0e32a4  jal         func_38CA90
label_40de3c:
    if (ctx->pc == 0x40DE3Cu) {
        ctx->pc = 0x40DE3Cu;
            // 0x40de3c: 0xe6000074  swc1        $f0, 0x74($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
        ctx->pc = 0x40DE40u;
        goto label_40de40;
    }
    ctx->pc = 0x40DE38u;
    SET_GPR_U32(ctx, 31, 0x40DE40u);
    ctx->pc = 0x40DE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40DE38u;
            // 0x40de3c: 0xe6000074  swc1        $f0, 0x74($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x38CA90u;
    if (runtime->hasFunction(0x38CA90u)) {
        auto targetFn = runtime->lookupFunction(0x38CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40DE40u; }
        if (ctx->pc != 0x40DE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA90_0x38ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40DE40u; }
        if (ctx->pc != 0x40DE40u) { return; }
    }
    ctx->pc = 0x40DE40u;
label_40de40:
    // 0x40de40: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x40de40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_40de44:
    // 0x40de44: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x40de44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_40de48:
    // 0x40de48: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x40de48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
label_40de4c:
    // 0x40de4c: 0xa202004c  sb          $v0, 0x4C($s0)
    ctx->pc = 0x40de4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 2));
label_40de50:
    // 0x40de50: 0x8e0400ec  lw          $a0, 0xEC($s0)
    ctx->pc = 0x40de50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_40de54:
    // 0x40de54: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x40de54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_40de58:
    // 0x40de58: 0xc122d2c  jal         func_48B4B0
label_40de5c:
    if (ctx->pc == 0x40DE5Cu) {
        ctx->pc = 0x40DE5Cu;
            // 0x40de5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40DE60u;
        goto label_40de60;
    }
    ctx->pc = 0x40DE58u;
    SET_GPR_U32(ctx, 31, 0x40DE60u);
    ctx->pc = 0x40DE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40DE58u;
            // 0x40de5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40DE60u; }
        if (ctx->pc != 0x40DE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40DE60u; }
        if (ctx->pc != 0x40DE60u) { return; }
    }
    ctx->pc = 0x40DE60u;
label_40de60:
    // 0x40de60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x40de60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_40de64:
    // 0x40de64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40de64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40de68:
    // 0x40de68: 0x3e00008  jr          $ra
label_40de6c:
    if (ctx->pc == 0x40DE6Cu) {
        ctx->pc = 0x40DE6Cu;
            // 0x40de6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x40DE70u;
        goto label_40de70;
    }
    ctx->pc = 0x40DE68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40DE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40DE68u;
            // 0x40de6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40DE70u;
label_40de70:
    // 0x40de70: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x40de70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_40de74:
    // 0x40de74: 0x80baaa0  j           func_2EAA80
label_40de78:
    if (ctx->pc == 0x40DE78u) {
        ctx->pc = 0x40DE78u;
            // 0x40de78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40DE7Cu;
        goto label_40de7c;
    }
    ctx->pc = 0x40DE74u;
    ctx->pc = 0x40DE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40DE74u;
            // 0x40de78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EAA80u;
    if (runtime->hasFunction(0x2EAA80u)) {
        auto targetFn = runtime->lookupFunction(0x2EAA80u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002EAA80_0x2eaa80(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x40DE7Cu;
label_40de7c:
    // 0x40de7c: 0x0  nop
    ctx->pc = 0x40de7cu;
    // NOP
label_40de80:
    // 0x40de80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x40de80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_40de84:
    // 0x40de84: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x40de84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_40de88:
    // 0x40de88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40de88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_40de8c:
    // 0x40de8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40de8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40de90:
    // 0x40de90: 0xc48100d8  lwc1        $f1, 0xD8($a0)
    ctx->pc = 0x40de90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40de94:
    // 0x40de94: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x40de94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_40de98:
    // 0x40de98: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x40de98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_40de9c:
    // 0x40de9c: 0xe48000d8  swc1        $f0, 0xD8($a0)
    ctx->pc = 0x40de9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 216), bits); }
label_40dea0:
    // 0x40dea0: 0x8c637300  lw          $v1, 0x7300($v1)
    ctx->pc = 0x40dea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29440)));
label_40dea4:
    // 0x40dea4: 0xc48000d8  lwc1        $f0, 0xD8($a0)
    ctx->pc = 0x40dea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40dea8:
    // 0x40dea8: 0x8c630098  lw          $v1, 0x98($v1)
    ctx->pc = 0x40dea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
label_40deac:
    // 0x40deac: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x40deacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40deb0:
    // 0x40deb0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x40deb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40deb4:
    // 0x40deb4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_40deb8:
    if (ctx->pc == 0x40DEB8u) {
        ctx->pc = 0x40DEBCu;
        goto label_40debc;
    }
    ctx->pc = 0x40DEB4u;
    {
        const bool branch_taken_0x40deb4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x40deb4) {
            ctx->pc = 0x40DEC0u;
            goto label_40dec0;
        }
    }
    ctx->pc = 0x40DEBCu;
label_40debc:
    // 0x40debc: 0xac8000d8  sw          $zero, 0xD8($a0)
    ctx->pc = 0x40debcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 0));
label_40dec0:
    // 0x40dec0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x40dec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_40dec4:
    // 0x40dec4: 0x3c054100  lui         $a1, 0x4100
    ctx->pc = 0x40dec4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16640 << 16));
label_40dec8:
    // 0x40dec8: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x40dec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_40decc:
    // 0x40decc: 0xc48100e8  lwc1        $f1, 0xE8($a0)
    ctx->pc = 0x40deccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40ded0:
    // 0x40ded0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x40ded0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40ded4:
    // 0x40ded4: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x40ded4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_40ded8:
    // 0x40ded8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x40ded8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_40dedc:
    // 0x40dedc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x40dedcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40dee0:
    // 0x40dee0: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_40dee4:
    if (ctx->pc == 0x40DEE4u) {
        ctx->pc = 0x40DEE4u;
            // 0x40dee4: 0xe48100e8  swc1        $f1, 0xE8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 232), bits); }
        ctx->pc = 0x40DEE8u;
        goto label_40dee8;
    }
    ctx->pc = 0x40DEE0u;
    {
        const bool branch_taken_0x40dee0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x40DEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40DEE0u;
            // 0x40dee4: 0xe48100e8  swc1        $f1, 0xE8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 232), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40dee0) {
            ctx->pc = 0x40DF10u;
            goto label_40df10;
        }
    }
    ctx->pc = 0x40DEE8u;
label_40dee8:
    // 0x40dee8: 0xac8000e8  sw          $zero, 0xE8($a0)
    ctx->pc = 0x40dee8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 0));
label_40deec:
    // 0x40deec: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x40deecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_40def0:
    // 0x40def0: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x40def0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_40def4:
    // 0x40def4: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_40def8:
    if (ctx->pc == 0x40DEF8u) {
        ctx->pc = 0x40DEF8u;
            // 0x40def8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x40DEFCu;
        goto label_40defc;
    }
    ctx->pc = 0x40DEF4u;
    {
        const bool branch_taken_0x40def4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x40def4) {
            ctx->pc = 0x40DEF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40DEF4u;
            // 0x40def8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40DF14u;
            goto label_40df14;
        }
    }
    ctx->pc = 0x40DEFCu;
label_40defc:
    // 0x40defc: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x40defcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_40df00:
    // 0x40df00: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x40df00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_40df04:
    // 0x40df04: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x40df04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_40df08:
    // 0x40df08: 0xc0bb2e8  jal         func_2ECBA0
label_40df0c:
    if (ctx->pc == 0x40DF0Cu) {
        ctx->pc = 0x40DF0Cu;
            // 0x40df0c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x40DF10u;
        goto label_40df10;
    }
    ctx->pc = 0x40DF08u;
    SET_GPR_U32(ctx, 31, 0x40DF10u);
    ctx->pc = 0x40DF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40DF08u;
            // 0x40df0c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ECBA0u;
    if (runtime->hasFunction(0x2ECBA0u)) {
        auto targetFn = runtime->lookupFunction(0x2ECBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40DF10u; }
        if (ctx->pc != 0x40DF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ECBA0_0x2ecba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40DF10u; }
        if (ctx->pc != 0x40DF10u) { return; }
    }
    ctx->pc = 0x40DF10u;
label_40df10:
    // 0x40df10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40df10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_40df14:
    // 0x40df14: 0x3e00008  jr          $ra
label_40df18:
    if (ctx->pc == 0x40DF18u) {
        ctx->pc = 0x40DF18u;
            // 0x40df18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x40DF1Cu;
        goto label_40df1c;
    }
    ctx->pc = 0x40DF14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40DF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40DF14u;
            // 0x40df18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40DF1Cu;
label_40df1c:
    // 0x40df1c: 0x0  nop
    ctx->pc = 0x40df1cu;
    // NOP
label_40df20:
    // 0x40df20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x40df20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_40df24:
    // 0x40df24: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x40df24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_40df28:
    // 0x40df28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40df28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_40df2c:
    // 0x40df2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40df2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40df30:
    // 0x40df30: 0xc48100d8  lwc1        $f1, 0xD8($a0)
    ctx->pc = 0x40df30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40df34:
    // 0x40df34: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x40df34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_40df38:
    // 0x40df38: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x40df38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_40df3c:
    // 0x40df3c: 0xe48000d8  swc1        $f0, 0xD8($a0)
    ctx->pc = 0x40df3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 216), bits); }
label_40df40:
    // 0x40df40: 0x8c637300  lw          $v1, 0x7300($v1)
    ctx->pc = 0x40df40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29440)));
label_40df44:
    // 0x40df44: 0xc48000d8  lwc1        $f0, 0xD8($a0)
    ctx->pc = 0x40df44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40df48:
    // 0x40df48: 0x8c630098  lw          $v1, 0x98($v1)
    ctx->pc = 0x40df48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
label_40df4c:
    // 0x40df4c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x40df4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40df50:
    // 0x40df50: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x40df50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40df54:
    // 0x40df54: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_40df58:
    if (ctx->pc == 0x40DF58u) {
        ctx->pc = 0x40DF5Cu;
        goto label_40df5c;
    }
    ctx->pc = 0x40DF54u;
    {
        const bool branch_taken_0x40df54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x40df54) {
            ctx->pc = 0x40DF60u;
            goto label_40df60;
        }
    }
    ctx->pc = 0x40DF5Cu;
label_40df5c:
    // 0x40df5c: 0xac8000d8  sw          $zero, 0xD8($a0)
    ctx->pc = 0x40df5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 0));
label_40df60:
    // 0x40df60: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x40df60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_40df64:
    // 0x40df64: 0x3c054100  lui         $a1, 0x4100
    ctx->pc = 0x40df64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16640 << 16));
label_40df68:
    // 0x40df68: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x40df68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_40df6c:
    // 0x40df6c: 0xc48100e8  lwc1        $f1, 0xE8($a0)
    ctx->pc = 0x40df6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40df70:
    // 0x40df70: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x40df70u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40df74:
    // 0x40df74: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x40df74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_40df78:
    // 0x40df78: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x40df78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_40df7c:
    // 0x40df7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x40df7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40df80:
    // 0x40df80: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_40df84:
    if (ctx->pc == 0x40DF84u) {
        ctx->pc = 0x40DF84u;
            // 0x40df84: 0xe48100e8  swc1        $f1, 0xE8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 232), bits); }
        ctx->pc = 0x40DF88u;
        goto label_40df88;
    }
    ctx->pc = 0x40DF80u;
    {
        const bool branch_taken_0x40df80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x40DF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40DF80u;
            // 0x40df84: 0xe48100e8  swc1        $f1, 0xE8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 232), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40df80) {
            ctx->pc = 0x40DFB0u;
            goto label_40dfb0;
        }
    }
    ctx->pc = 0x40DF88u;
label_40df88:
    // 0x40df88: 0xac8000e8  sw          $zero, 0xE8($a0)
    ctx->pc = 0x40df88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 0));
label_40df8c:
    // 0x40df8c: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x40df8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_40df90:
    // 0x40df90: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x40df90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_40df94:
    // 0x40df94: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_40df98:
    if (ctx->pc == 0x40DF98u) {
        ctx->pc = 0x40DF98u;
            // 0x40df98: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x40DF9Cu;
        goto label_40df9c;
    }
    ctx->pc = 0x40DF94u;
    {
        const bool branch_taken_0x40df94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x40df94) {
            ctx->pc = 0x40DF98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40DF94u;
            // 0x40df98: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40DFB4u;
            goto label_40dfb4;
        }
    }
    ctx->pc = 0x40DF9Cu;
label_40df9c:
    // 0x40df9c: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x40df9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_40dfa0:
    // 0x40dfa0: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x40dfa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_40dfa4:
    // 0x40dfa4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x40dfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_40dfa8:
    // 0x40dfa8: 0xc0bb2e8  jal         func_2ECBA0
label_40dfac:
    if (ctx->pc == 0x40DFACu) {
        ctx->pc = 0x40DFACu;
            // 0x40dfac: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x40DFB0u;
        goto label_40dfb0;
    }
    ctx->pc = 0x40DFA8u;
    SET_GPR_U32(ctx, 31, 0x40DFB0u);
    ctx->pc = 0x40DFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40DFA8u;
            // 0x40dfac: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ECBA0u;
    if (runtime->hasFunction(0x2ECBA0u)) {
        auto targetFn = runtime->lookupFunction(0x2ECBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40DFB0u; }
        if (ctx->pc != 0x40DFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ECBA0_0x2ecba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40DFB0u; }
        if (ctx->pc != 0x40DFB0u) { return; }
    }
    ctx->pc = 0x40DFB0u;
label_40dfb0:
    // 0x40dfb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40dfb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_40dfb4:
    // 0x40dfb4: 0x3e00008  jr          $ra
label_40dfb8:
    if (ctx->pc == 0x40DFB8u) {
        ctx->pc = 0x40DFB8u;
            // 0x40dfb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x40DFBCu;
        goto label_40dfbc;
    }
    ctx->pc = 0x40DFB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40DFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40DFB4u;
            // 0x40dfb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40DFBCu;
label_40dfbc:
    // 0x40dfbc: 0x0  nop
    ctx->pc = 0x40dfbcu;
    // NOP
label_40dfc0:
    // 0x40dfc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x40dfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_40dfc4:
    // 0x40dfc4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x40dfc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_40dfc8:
    // 0x40dfc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x40dfc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_40dfcc:
    // 0x40dfcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40dfccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_40dfd0:
    // 0x40dfd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40dfd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40dfd4:
    // 0x40dfd4: 0x8c8400d4  lw          $a0, 0xD4($a0)
    ctx->pc = 0x40dfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
label_40dfd8:
    // 0x40dfd8: 0x1087000c  beq         $a0, $a3, . + 4 + (0xC << 2)
label_40dfdc:
    if (ctx->pc == 0x40DFDCu) {
        ctx->pc = 0x40DFE0u;
        goto label_40dfe0;
    }
    ctx->pc = 0x40DFD8u;
    {
        const bool branch_taken_0x40dfd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        if (branch_taken_0x40dfd8) {
            ctx->pc = 0x40E00Cu;
            goto label_40e00c;
        }
    }
    ctx->pc = 0x40DFE0u;
label_40dfe0:
    // 0x40dfe0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x40dfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40dfe4:
    // 0x40dfe4: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
label_40dfe8:
    if (ctx->pc == 0x40DFE8u) {
        ctx->pc = 0x40DFE8u;
            // 0x40dfe8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x40DFECu;
        goto label_40dfec;
    }
    ctx->pc = 0x40DFE4u;
    {
        const bool branch_taken_0x40dfe4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x40dfe4) {
            ctx->pc = 0x40DFE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40DFE4u;
            // 0x40dfe8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40E000u;
            goto label_40e000;
        }
    }
    ctx->pc = 0x40DFECu;
label_40dfec:
    // 0x40dfec: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_40dff0:
    if (ctx->pc == 0x40DFF0u) {
        ctx->pc = 0x40DFF0u;
            // 0x40dff0: 0xae0300d4  sw          $v1, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
        ctx->pc = 0x40DFF4u;
        goto label_40dff4;
    }
    ctx->pc = 0x40DFECu;
    {
        const bool branch_taken_0x40dfec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x40dfec) {
            ctx->pc = 0x40DFF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40DFECu;
            // 0x40dff0: 0xae0300d4  sw          $v1, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40DFFCu;
            goto label_40dffc;
        }
    }
    ctx->pc = 0x40DFF4u;
label_40dff4:
    // 0x40dff4: 0x10000019  b           . + 4 + (0x19 << 2)
label_40dff8:
    if (ctx->pc == 0x40DFF8u) {
        ctx->pc = 0x40DFF8u;
            // 0x40dff8: 0xc60100d8  lwc1        $f1, 0xD8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x40DFFCu;
        goto label_40dffc;
    }
    ctx->pc = 0x40DFF4u;
    {
        const bool branch_taken_0x40dff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40DFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40DFF4u;
            // 0x40dff8: 0xc60100d8  lwc1        $f1, 0xD8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40dff4) {
            ctx->pc = 0x40E05Cu;
            goto label_40e05c;
        }
    }
    ctx->pc = 0x40DFFCu;
label_40dffc:
    // 0x40dffc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x40dffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_40e000:
    // 0x40e000: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x40e000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
label_40e004:
    // 0x40e004: 0x10000014  b           . + 4 + (0x14 << 2)
label_40e008:
    if (ctx->pc == 0x40E008u) {
        ctx->pc = 0x40E008u;
            // 0x40e008: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->pc = 0x40E00Cu;
        goto label_40e00c;
    }
    ctx->pc = 0x40E004u;
    {
        const bool branch_taken_0x40e004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40E004u;
            // 0x40e008: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e004) {
            ctx->pc = 0x40E058u;
            goto label_40e058;
        }
    }
    ctx->pc = 0x40E00Cu;
label_40e00c:
    // 0x40e00c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x40e00cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_40e010:
    // 0x40e010: 0x3c044100  lui         $a0, 0x4100
    ctx->pc = 0x40e010u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16640 << 16));
label_40e014:
    // 0x40e014: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x40e014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_40e018:
    // 0x40e018: 0xc60100e8  lwc1        $f1, 0xE8($s0)
    ctx->pc = 0x40e018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40e01c:
    // 0x40e01c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x40e01cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40e020:
    // 0x40e020: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x40e020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_40e024:
    // 0x40e024: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x40e024u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_40e028:
    // 0x40e028: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x40e028u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40e02c:
    // 0x40e02c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_40e030:
    if (ctx->pc == 0x40E030u) {
        ctx->pc = 0x40E030u;
            // 0x40e030: 0xe60100e8  swc1        $f1, 0xE8($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
        ctx->pc = 0x40E034u;
        goto label_40e034;
    }
    ctx->pc = 0x40E02Cu;
    {
        const bool branch_taken_0x40e02c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x40E030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40E02Cu;
            // 0x40e030: 0xe60100e8  swc1        $f1, 0xE8($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e02c) {
            ctx->pc = 0x40E058u;
            goto label_40e058;
        }
    }
    ctx->pc = 0x40E034u;
label_40e034:
    // 0x40e034: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x40e034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
label_40e038:
    // 0x40e038: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x40e038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_40e03c:
    // 0x40e03c: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x40e03cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_40e040:
    // 0x40e040: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_40e044:
    if (ctx->pc == 0x40E044u) {
        ctx->pc = 0x40E048u;
        goto label_40e048;
    }
    ctx->pc = 0x40E040u;
    {
        const bool branch_taken_0x40e040 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x40e040) {
            ctx->pc = 0x40E058u;
            goto label_40e058;
        }
    }
    ctx->pc = 0x40E048u;
label_40e048:
    // 0x40e048: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x40e048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_40e04c:
    // 0x40e04c: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x40e04cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_40e050:
    // 0x40e050: 0xc0bb2e8  jal         func_2ECBA0
label_40e054:
    if (ctx->pc == 0x40E054u) {
        ctx->pc = 0x40E054u;
            // 0x40e054: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x40E058u;
        goto label_40e058;
    }
    ctx->pc = 0x40E050u;
    SET_GPR_U32(ctx, 31, 0x40E058u);
    ctx->pc = 0x40E054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E050u;
            // 0x40e054: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ECBA0u;
    if (runtime->hasFunction(0x2ECBA0u)) {
        auto targetFn = runtime->lookupFunction(0x2ECBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E058u; }
        if (ctx->pc != 0x40E058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ECBA0_0x2ecba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E058u; }
        if (ctx->pc != 0x40E058u) { return; }
    }
    ctx->pc = 0x40E058u;
label_40e058:
    // 0x40e058: 0xc60100d8  lwc1        $f1, 0xD8($s0)
    ctx->pc = 0x40e058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40e05c:
    // 0x40e05c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x40e05cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_40e060:
    // 0x40e060: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40e060u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40e064:
    // 0x40e064: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x40e064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_40e068:
    // 0x40e068: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x40e068u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_40e06c:
    // 0x40e06c: 0xe60000d8  swc1        $f0, 0xD8($s0)
    ctx->pc = 0x40e06cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
label_40e070:
    // 0x40e070: 0x8c637300  lw          $v1, 0x7300($v1)
    ctx->pc = 0x40e070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29440)));
label_40e074:
    // 0x40e074: 0xc60000d8  lwc1        $f0, 0xD8($s0)
    ctx->pc = 0x40e074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40e078:
    // 0x40e078: 0x8c630098  lw          $v1, 0x98($v1)
    ctx->pc = 0x40e078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
label_40e07c:
    // 0x40e07c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x40e07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40e080:
    // 0x40e080: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x40e080u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40e084:
    // 0x40e084: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
label_40e088:
    if (ctx->pc == 0x40E088u) {
        ctx->pc = 0x40E088u;
            // 0x40e088: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x40E08Cu;
        goto label_40e08c;
    }
    ctx->pc = 0x40E084u;
    {
        const bool branch_taken_0x40e084 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x40e084) {
            ctx->pc = 0x40E088u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40E084u;
            // 0x40e088: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40E094u;
            goto label_40e094;
        }
    }
    ctx->pc = 0x40E08Cu;
label_40e08c:
    // 0x40e08c: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x40e08cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
label_40e090:
    // 0x40e090: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x40e090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_40e094:
    // 0x40e094: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40e094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40e098:
    // 0x40e098: 0x3e00008  jr          $ra
label_40e09c:
    if (ctx->pc == 0x40E09Cu) {
        ctx->pc = 0x40E09Cu;
            // 0x40e09c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x40E0A0u;
        goto label_40e0a0;
    }
    ctx->pc = 0x40E098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40E09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40E098u;
            // 0x40e09c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40E0A0u;
label_40e0a0:
    // 0x40e0a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x40e0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_40e0a4:
    // 0x40e0a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x40e0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_40e0a8:
    // 0x40e0a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40e0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_40e0ac:
    // 0x40e0ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40e0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_40e0b0:
    // 0x40e0b0: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x40e0b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_40e0b4:
    // 0x40e0b4: 0xc0e393c  jal         func_38E4F0
label_40e0b8:
    if (ctx->pc == 0x40E0B8u) {
        ctx->pc = 0x40E0B8u;
            // 0x40e0b8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40E0BCu;
        goto label_40e0bc;
    }
    ctx->pc = 0x40E0B4u;
    SET_GPR_U32(ctx, 31, 0x40E0BCu);
    ctx->pc = 0x40E0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E0B4u;
            // 0x40e0b8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E0BCu; }
        if (ctx->pc != 0x40E0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E0BCu; }
        if (ctx->pc != 0x40E0BCu) { return; }
    }
    ctx->pc = 0x40E0BCu;
label_40e0bc:
    // 0x40e0bc: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x40e0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_40e0c0:
    // 0x40e0c0: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x40e0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_40e0c4:
    // 0x40e0c4: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x40e0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_40e0c8:
    // 0x40e0c8: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x40e0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_40e0cc:
    // 0x40e0cc: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x40e0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_40e0d0:
    // 0x40e0d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40e0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_40e0d4:
    // 0x40e0d4: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x40e0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_40e0d8:
    // 0x40e0d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x40e0d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40e0dc:
    // 0x40e0dc: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x40e0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_40e0e0:
    // 0x40e0e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x40e0e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40e0e4:
    // 0x40e0e4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x40e0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_40e0e8:
    // 0x40e0e8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x40e0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_40e0ec:
    // 0x40e0ec: 0xc08bff0  jal         func_22FFC0
label_40e0f0:
    if (ctx->pc == 0x40E0F0u) {
        ctx->pc = 0x40E0F0u;
            // 0x40e0f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40E0F4u;
        goto label_40e0f4;
    }
    ctx->pc = 0x40E0ECu;
    SET_GPR_U32(ctx, 31, 0x40E0F4u);
    ctx->pc = 0x40E0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E0ECu;
            // 0x40e0f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E0F4u; }
        if (ctx->pc != 0x40E0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E0F4u; }
        if (ctx->pc != 0x40E0F4u) { return; }
    }
    ctx->pc = 0x40E0F4u;
label_40e0f4:
    // 0x40e0f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40e0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40e0f8:
    // 0x40e0f8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x40e0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_40e0fc:
    // 0x40e0fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x40e0fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40e100:
    // 0x40e100: 0xc08914c  jal         func_224530
label_40e104:
    if (ctx->pc == 0x40E104u) {
        ctx->pc = 0x40E104u;
            // 0x40e104: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40E108u;
        goto label_40e108;
    }
    ctx->pc = 0x40E100u;
    SET_GPR_U32(ctx, 31, 0x40E108u);
    ctx->pc = 0x40E104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E100u;
            // 0x40e104: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E108u; }
        if (ctx->pc != 0x40E108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E108u; }
        if (ctx->pc != 0x40E108u) { return; }
    }
    ctx->pc = 0x40E108u;
label_40e108:
    // 0x40e108: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x40e108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_40e10c:
    // 0x40e10c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40e10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40e110:
    // 0x40e110: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x40e110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40e114:
    // 0x40e114: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x40e114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_40e118:
    // 0x40e118: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x40e118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40e11c:
    // 0x40e11c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x40e11cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_40e120:
    // 0x40e120: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x40e120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_40e124:
    // 0x40e124: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x40e124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_40e128:
    // 0x40e128: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x40e128u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_40e12c:
    // 0x40e12c: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x40e12cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_40e130:
    // 0x40e130: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x40e130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_40e134:
    // 0x40e134: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x40e134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_40e138:
    // 0x40e138: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x40e138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40e13c:
    // 0x40e13c: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x40e13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40e140:
    // 0x40e140: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x40e140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_40e144:
    // 0x40e144: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x40e144u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_40e148:
    // 0x40e148: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x40e148u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_40e14c:
    // 0x40e14c: 0xc0892b0  jal         func_224AC0
label_40e150:
    if (ctx->pc == 0x40E150u) {
        ctx->pc = 0x40E150u;
            // 0x40e150: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->pc = 0x40E154u;
        goto label_40e154;
    }
    ctx->pc = 0x40E14Cu;
    SET_GPR_U32(ctx, 31, 0x40E154u);
    ctx->pc = 0x40E150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E14Cu;
            // 0x40e150: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E154u; }
        if (ctx->pc != 0x40E154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E154u; }
        if (ctx->pc != 0x40E154u) { return; }
    }
    ctx->pc = 0x40E154u;
label_40e154:
    // 0x40e154: 0xc088b74  jal         func_222DD0
label_40e158:
    if (ctx->pc == 0x40E158u) {
        ctx->pc = 0x40E158u;
            // 0x40e158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40E15Cu;
        goto label_40e15c;
    }
    ctx->pc = 0x40E154u;
    SET_GPR_U32(ctx, 31, 0x40E15Cu);
    ctx->pc = 0x40E158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E154u;
            // 0x40e158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E15Cu; }
        if (ctx->pc != 0x40E15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E15Cu; }
        if (ctx->pc != 0x40E15Cu) { return; }
    }
    ctx->pc = 0x40E15Cu;
label_40e15c:
    // 0x40e15c: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x40e15cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_40e160:
    // 0x40e160: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x40e160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_40e164:
    // 0x40e164: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x40e164u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_40e168:
    // 0x40e168: 0x320f809  jalr        $t9
label_40e16c:
    if (ctx->pc == 0x40E16Cu) {
        ctx->pc = 0x40E16Cu;
            // 0x40e16c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x40E170u;
        goto label_40e170;
    }
    ctx->pc = 0x40E168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40E170u);
        ctx->pc = 0x40E16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40E168u;
            // 0x40e16c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40E170u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40E170u; }
            if (ctx->pc != 0x40E170u) { return; }
        }
        }
    }
    ctx->pc = 0x40E170u;
label_40e170:
    // 0x40e170: 0xc088b74  jal         func_222DD0
label_40e174:
    if (ctx->pc == 0x40E174u) {
        ctx->pc = 0x40E174u;
            // 0x40e174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40E178u;
        goto label_40e178;
    }
    ctx->pc = 0x40E170u;
    SET_GPR_U32(ctx, 31, 0x40E178u);
    ctx->pc = 0x40E174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40E170u;
            // 0x40e174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E178u; }
        if (ctx->pc != 0x40E178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40E178u; }
        if (ctx->pc != 0x40E178u) { return; }
    }
    ctx->pc = 0x40E178u;
label_40e178:
    // 0x40e178: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x40e178u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_40e17c:
    // 0x40e17c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x40e17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_40e180:
    // 0x40e180: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x40e180u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_40e184:
    // 0x40e184: 0x320f809  jalr        $t9
label_40e188:
    if (ctx->pc == 0x40E188u) {
        ctx->pc = 0x40E188u;
            // 0x40e188: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x40E18Cu;
        goto label_40e18c;
    }
    ctx->pc = 0x40E184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40E18Cu);
        ctx->pc = 0x40E188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40E184u;
            // 0x40e188: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40E18Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40E18Cu; }
            if (ctx->pc != 0x40E18Cu) { return; }
        }
        }
    }
    ctx->pc = 0x40E18Cu;
label_40e18c:
    // 0x40e18c: 0x3c0443d1  lui         $a0, 0x43D1
    ctx->pc = 0x40e18cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17361 << 16));
label_40e190:
    // 0x40e190: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x40e190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40e194:
    // 0x40e194: 0x34847084  ori         $a0, $a0, 0x7084
    ctx->pc = 0x40e194u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28804);
label_40e198:
    // 0x40e198: 0xae040154  sw          $a0, 0x154($s0)
    ctx->pc = 0x40e198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 4));
label_40e19c:
    // 0x40e19c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x40e19cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_40e1a0:
    // 0x40e1a0: 0xae000158  sw          $zero, 0x158($s0)
    ctx->pc = 0x40e1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 0));
label_40e1a4:
    // 0x40e1a4: 0xae2300d4  sw          $v1, 0xD4($s1)
    ctx->pc = 0x40e1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 3));
label_40e1a8:
    // 0x40e1a8: 0xae2000dc  sw          $zero, 0xDC($s1)
    ctx->pc = 0x40e1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 0));
label_40e1ac:
    // 0x40e1ac: 0xae2000d8  sw          $zero, 0xD8($s1)
    ctx->pc = 0x40e1acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 0));
label_40e1b0:
    // 0x40e1b0: 0xae2000e0  sw          $zero, 0xE0($s1)
    ctx->pc = 0x40e1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 0));
label_40e1b4:
    // 0x40e1b4: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x40e1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40e1b8:
    // 0x40e1b8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x40e1b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40e1bc:
    // 0x40e1bc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_40e1c0:
    if (ctx->pc == 0x40E1C0u) {
        ctx->pc = 0x40E1C0u;
            // 0x40e1c0: 0xe62000e4  swc1        $f0, 0xE4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 228), bits); }
        ctx->pc = 0x40E1C4u;
        goto label_40e1c4;
    }
    ctx->pc = 0x40E1BCu;
    {
        const bool branch_taken_0x40e1bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x40E1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40E1BCu;
            // 0x40e1c0: 0xe62000e4  swc1        $f0, 0xE4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e1bc) {
            ctx->pc = 0x40E1CCu;
            goto label_40e1cc;
        }
    }
    ctx->pc = 0x40E1C4u;
label_40e1c4:
    // 0x40e1c4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x40e1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_40e1c8:
    // 0x40e1c8: 0xae2300e4  sw          $v1, 0xE4($s1)
    ctx->pc = 0x40e1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 3));
label_40e1cc:
    // 0x40e1cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x40e1ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_40e1d0:
    // 0x40e1d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40e1d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40e1d4:
    // 0x40e1d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40e1d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40e1d8:
    // 0x40e1d8: 0x3e00008  jr          $ra
label_40e1dc:
    if (ctx->pc == 0x40E1DCu) {
        ctx->pc = 0x40E1DCu;
            // 0x40e1dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x40E1E0u;
        goto label_fallthrough_0x40e1d8;
    }
    ctx->pc = 0x40E1D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40E1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40E1D8u;
            // 0x40e1dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x40e1d8:
    ctx->pc = 0x40E1E0u;
}
