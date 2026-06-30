#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004BE7D0
// Address: 0x4be7d0 - 0x4bf550
void sub_004BE7D0_0x4be7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BE7D0_0x4be7d0");
#endif

    switch (ctx->pc) {
        case 0x4be7d0u: goto label_4be7d0;
        case 0x4be7d4u: goto label_4be7d4;
        case 0x4be7d8u: goto label_4be7d8;
        case 0x4be7dcu: goto label_4be7dc;
        case 0x4be7e0u: goto label_4be7e0;
        case 0x4be7e4u: goto label_4be7e4;
        case 0x4be7e8u: goto label_4be7e8;
        case 0x4be7ecu: goto label_4be7ec;
        case 0x4be7f0u: goto label_4be7f0;
        case 0x4be7f4u: goto label_4be7f4;
        case 0x4be7f8u: goto label_4be7f8;
        case 0x4be7fcu: goto label_4be7fc;
        case 0x4be800u: goto label_4be800;
        case 0x4be804u: goto label_4be804;
        case 0x4be808u: goto label_4be808;
        case 0x4be80cu: goto label_4be80c;
        case 0x4be810u: goto label_4be810;
        case 0x4be814u: goto label_4be814;
        case 0x4be818u: goto label_4be818;
        case 0x4be81cu: goto label_4be81c;
        case 0x4be820u: goto label_4be820;
        case 0x4be824u: goto label_4be824;
        case 0x4be828u: goto label_4be828;
        case 0x4be82cu: goto label_4be82c;
        case 0x4be830u: goto label_4be830;
        case 0x4be834u: goto label_4be834;
        case 0x4be838u: goto label_4be838;
        case 0x4be83cu: goto label_4be83c;
        case 0x4be840u: goto label_4be840;
        case 0x4be844u: goto label_4be844;
        case 0x4be848u: goto label_4be848;
        case 0x4be84cu: goto label_4be84c;
        case 0x4be850u: goto label_4be850;
        case 0x4be854u: goto label_4be854;
        case 0x4be858u: goto label_4be858;
        case 0x4be85cu: goto label_4be85c;
        case 0x4be860u: goto label_4be860;
        case 0x4be864u: goto label_4be864;
        case 0x4be868u: goto label_4be868;
        case 0x4be86cu: goto label_4be86c;
        case 0x4be870u: goto label_4be870;
        case 0x4be874u: goto label_4be874;
        case 0x4be878u: goto label_4be878;
        case 0x4be87cu: goto label_4be87c;
        case 0x4be880u: goto label_4be880;
        case 0x4be884u: goto label_4be884;
        case 0x4be888u: goto label_4be888;
        case 0x4be88cu: goto label_4be88c;
        case 0x4be890u: goto label_4be890;
        case 0x4be894u: goto label_4be894;
        case 0x4be898u: goto label_4be898;
        case 0x4be89cu: goto label_4be89c;
        case 0x4be8a0u: goto label_4be8a0;
        case 0x4be8a4u: goto label_4be8a4;
        case 0x4be8a8u: goto label_4be8a8;
        case 0x4be8acu: goto label_4be8ac;
        case 0x4be8b0u: goto label_4be8b0;
        case 0x4be8b4u: goto label_4be8b4;
        case 0x4be8b8u: goto label_4be8b8;
        case 0x4be8bcu: goto label_4be8bc;
        case 0x4be8c0u: goto label_4be8c0;
        case 0x4be8c4u: goto label_4be8c4;
        case 0x4be8c8u: goto label_4be8c8;
        case 0x4be8ccu: goto label_4be8cc;
        case 0x4be8d0u: goto label_4be8d0;
        case 0x4be8d4u: goto label_4be8d4;
        case 0x4be8d8u: goto label_4be8d8;
        case 0x4be8dcu: goto label_4be8dc;
        case 0x4be8e0u: goto label_4be8e0;
        case 0x4be8e4u: goto label_4be8e4;
        case 0x4be8e8u: goto label_4be8e8;
        case 0x4be8ecu: goto label_4be8ec;
        case 0x4be8f0u: goto label_4be8f0;
        case 0x4be8f4u: goto label_4be8f4;
        case 0x4be8f8u: goto label_4be8f8;
        case 0x4be8fcu: goto label_4be8fc;
        case 0x4be900u: goto label_4be900;
        case 0x4be904u: goto label_4be904;
        case 0x4be908u: goto label_4be908;
        case 0x4be90cu: goto label_4be90c;
        case 0x4be910u: goto label_4be910;
        case 0x4be914u: goto label_4be914;
        case 0x4be918u: goto label_4be918;
        case 0x4be91cu: goto label_4be91c;
        case 0x4be920u: goto label_4be920;
        case 0x4be924u: goto label_4be924;
        case 0x4be928u: goto label_4be928;
        case 0x4be92cu: goto label_4be92c;
        case 0x4be930u: goto label_4be930;
        case 0x4be934u: goto label_4be934;
        case 0x4be938u: goto label_4be938;
        case 0x4be93cu: goto label_4be93c;
        case 0x4be940u: goto label_4be940;
        case 0x4be944u: goto label_4be944;
        case 0x4be948u: goto label_4be948;
        case 0x4be94cu: goto label_4be94c;
        case 0x4be950u: goto label_4be950;
        case 0x4be954u: goto label_4be954;
        case 0x4be958u: goto label_4be958;
        case 0x4be95cu: goto label_4be95c;
        case 0x4be960u: goto label_4be960;
        case 0x4be964u: goto label_4be964;
        case 0x4be968u: goto label_4be968;
        case 0x4be96cu: goto label_4be96c;
        case 0x4be970u: goto label_4be970;
        case 0x4be974u: goto label_4be974;
        case 0x4be978u: goto label_4be978;
        case 0x4be97cu: goto label_4be97c;
        case 0x4be980u: goto label_4be980;
        case 0x4be984u: goto label_4be984;
        case 0x4be988u: goto label_4be988;
        case 0x4be98cu: goto label_4be98c;
        case 0x4be990u: goto label_4be990;
        case 0x4be994u: goto label_4be994;
        case 0x4be998u: goto label_4be998;
        case 0x4be99cu: goto label_4be99c;
        case 0x4be9a0u: goto label_4be9a0;
        case 0x4be9a4u: goto label_4be9a4;
        case 0x4be9a8u: goto label_4be9a8;
        case 0x4be9acu: goto label_4be9ac;
        case 0x4be9b0u: goto label_4be9b0;
        case 0x4be9b4u: goto label_4be9b4;
        case 0x4be9b8u: goto label_4be9b8;
        case 0x4be9bcu: goto label_4be9bc;
        case 0x4be9c0u: goto label_4be9c0;
        case 0x4be9c4u: goto label_4be9c4;
        case 0x4be9c8u: goto label_4be9c8;
        case 0x4be9ccu: goto label_4be9cc;
        case 0x4be9d0u: goto label_4be9d0;
        case 0x4be9d4u: goto label_4be9d4;
        case 0x4be9d8u: goto label_4be9d8;
        case 0x4be9dcu: goto label_4be9dc;
        case 0x4be9e0u: goto label_4be9e0;
        case 0x4be9e4u: goto label_4be9e4;
        case 0x4be9e8u: goto label_4be9e8;
        case 0x4be9ecu: goto label_4be9ec;
        case 0x4be9f0u: goto label_4be9f0;
        case 0x4be9f4u: goto label_4be9f4;
        case 0x4be9f8u: goto label_4be9f8;
        case 0x4be9fcu: goto label_4be9fc;
        case 0x4bea00u: goto label_4bea00;
        case 0x4bea04u: goto label_4bea04;
        case 0x4bea08u: goto label_4bea08;
        case 0x4bea0cu: goto label_4bea0c;
        case 0x4bea10u: goto label_4bea10;
        case 0x4bea14u: goto label_4bea14;
        case 0x4bea18u: goto label_4bea18;
        case 0x4bea1cu: goto label_4bea1c;
        case 0x4bea20u: goto label_4bea20;
        case 0x4bea24u: goto label_4bea24;
        case 0x4bea28u: goto label_4bea28;
        case 0x4bea2cu: goto label_4bea2c;
        case 0x4bea30u: goto label_4bea30;
        case 0x4bea34u: goto label_4bea34;
        case 0x4bea38u: goto label_4bea38;
        case 0x4bea3cu: goto label_4bea3c;
        case 0x4bea40u: goto label_4bea40;
        case 0x4bea44u: goto label_4bea44;
        case 0x4bea48u: goto label_4bea48;
        case 0x4bea4cu: goto label_4bea4c;
        case 0x4bea50u: goto label_4bea50;
        case 0x4bea54u: goto label_4bea54;
        case 0x4bea58u: goto label_4bea58;
        case 0x4bea5cu: goto label_4bea5c;
        case 0x4bea60u: goto label_4bea60;
        case 0x4bea64u: goto label_4bea64;
        case 0x4bea68u: goto label_4bea68;
        case 0x4bea6cu: goto label_4bea6c;
        case 0x4bea70u: goto label_4bea70;
        case 0x4bea74u: goto label_4bea74;
        case 0x4bea78u: goto label_4bea78;
        case 0x4bea7cu: goto label_4bea7c;
        case 0x4bea80u: goto label_4bea80;
        case 0x4bea84u: goto label_4bea84;
        case 0x4bea88u: goto label_4bea88;
        case 0x4bea8cu: goto label_4bea8c;
        case 0x4bea90u: goto label_4bea90;
        case 0x4bea94u: goto label_4bea94;
        case 0x4bea98u: goto label_4bea98;
        case 0x4bea9cu: goto label_4bea9c;
        case 0x4beaa0u: goto label_4beaa0;
        case 0x4beaa4u: goto label_4beaa4;
        case 0x4beaa8u: goto label_4beaa8;
        case 0x4beaacu: goto label_4beaac;
        case 0x4beab0u: goto label_4beab0;
        case 0x4beab4u: goto label_4beab4;
        case 0x4beab8u: goto label_4beab8;
        case 0x4beabcu: goto label_4beabc;
        case 0x4beac0u: goto label_4beac0;
        case 0x4beac4u: goto label_4beac4;
        case 0x4beac8u: goto label_4beac8;
        case 0x4beaccu: goto label_4beacc;
        case 0x4bead0u: goto label_4bead0;
        case 0x4bead4u: goto label_4bead4;
        case 0x4bead8u: goto label_4bead8;
        case 0x4beadcu: goto label_4beadc;
        case 0x4beae0u: goto label_4beae0;
        case 0x4beae4u: goto label_4beae4;
        case 0x4beae8u: goto label_4beae8;
        case 0x4beaecu: goto label_4beaec;
        case 0x4beaf0u: goto label_4beaf0;
        case 0x4beaf4u: goto label_4beaf4;
        case 0x4beaf8u: goto label_4beaf8;
        case 0x4beafcu: goto label_4beafc;
        case 0x4beb00u: goto label_4beb00;
        case 0x4beb04u: goto label_4beb04;
        case 0x4beb08u: goto label_4beb08;
        case 0x4beb0cu: goto label_4beb0c;
        case 0x4beb10u: goto label_4beb10;
        case 0x4beb14u: goto label_4beb14;
        case 0x4beb18u: goto label_4beb18;
        case 0x4beb1cu: goto label_4beb1c;
        case 0x4beb20u: goto label_4beb20;
        case 0x4beb24u: goto label_4beb24;
        case 0x4beb28u: goto label_4beb28;
        case 0x4beb2cu: goto label_4beb2c;
        case 0x4beb30u: goto label_4beb30;
        case 0x4beb34u: goto label_4beb34;
        case 0x4beb38u: goto label_4beb38;
        case 0x4beb3cu: goto label_4beb3c;
        case 0x4beb40u: goto label_4beb40;
        case 0x4beb44u: goto label_4beb44;
        case 0x4beb48u: goto label_4beb48;
        case 0x4beb4cu: goto label_4beb4c;
        case 0x4beb50u: goto label_4beb50;
        case 0x4beb54u: goto label_4beb54;
        case 0x4beb58u: goto label_4beb58;
        case 0x4beb5cu: goto label_4beb5c;
        case 0x4beb60u: goto label_4beb60;
        case 0x4beb64u: goto label_4beb64;
        case 0x4beb68u: goto label_4beb68;
        case 0x4beb6cu: goto label_4beb6c;
        case 0x4beb70u: goto label_4beb70;
        case 0x4beb74u: goto label_4beb74;
        case 0x4beb78u: goto label_4beb78;
        case 0x4beb7cu: goto label_4beb7c;
        case 0x4beb80u: goto label_4beb80;
        case 0x4beb84u: goto label_4beb84;
        case 0x4beb88u: goto label_4beb88;
        case 0x4beb8cu: goto label_4beb8c;
        case 0x4beb90u: goto label_4beb90;
        case 0x4beb94u: goto label_4beb94;
        case 0x4beb98u: goto label_4beb98;
        case 0x4beb9cu: goto label_4beb9c;
        case 0x4beba0u: goto label_4beba0;
        case 0x4beba4u: goto label_4beba4;
        case 0x4beba8u: goto label_4beba8;
        case 0x4bebacu: goto label_4bebac;
        case 0x4bebb0u: goto label_4bebb0;
        case 0x4bebb4u: goto label_4bebb4;
        case 0x4bebb8u: goto label_4bebb8;
        case 0x4bebbcu: goto label_4bebbc;
        case 0x4bebc0u: goto label_4bebc0;
        case 0x4bebc4u: goto label_4bebc4;
        case 0x4bebc8u: goto label_4bebc8;
        case 0x4bebccu: goto label_4bebcc;
        case 0x4bebd0u: goto label_4bebd0;
        case 0x4bebd4u: goto label_4bebd4;
        case 0x4bebd8u: goto label_4bebd8;
        case 0x4bebdcu: goto label_4bebdc;
        case 0x4bebe0u: goto label_4bebe0;
        case 0x4bebe4u: goto label_4bebe4;
        case 0x4bebe8u: goto label_4bebe8;
        case 0x4bebecu: goto label_4bebec;
        case 0x4bebf0u: goto label_4bebf0;
        case 0x4bebf4u: goto label_4bebf4;
        case 0x4bebf8u: goto label_4bebf8;
        case 0x4bebfcu: goto label_4bebfc;
        case 0x4bec00u: goto label_4bec00;
        case 0x4bec04u: goto label_4bec04;
        case 0x4bec08u: goto label_4bec08;
        case 0x4bec0cu: goto label_4bec0c;
        case 0x4bec10u: goto label_4bec10;
        case 0x4bec14u: goto label_4bec14;
        case 0x4bec18u: goto label_4bec18;
        case 0x4bec1cu: goto label_4bec1c;
        case 0x4bec20u: goto label_4bec20;
        case 0x4bec24u: goto label_4bec24;
        case 0x4bec28u: goto label_4bec28;
        case 0x4bec2cu: goto label_4bec2c;
        case 0x4bec30u: goto label_4bec30;
        case 0x4bec34u: goto label_4bec34;
        case 0x4bec38u: goto label_4bec38;
        case 0x4bec3cu: goto label_4bec3c;
        case 0x4bec40u: goto label_4bec40;
        case 0x4bec44u: goto label_4bec44;
        case 0x4bec48u: goto label_4bec48;
        case 0x4bec4cu: goto label_4bec4c;
        case 0x4bec50u: goto label_4bec50;
        case 0x4bec54u: goto label_4bec54;
        case 0x4bec58u: goto label_4bec58;
        case 0x4bec5cu: goto label_4bec5c;
        case 0x4bec60u: goto label_4bec60;
        case 0x4bec64u: goto label_4bec64;
        case 0x4bec68u: goto label_4bec68;
        case 0x4bec6cu: goto label_4bec6c;
        case 0x4bec70u: goto label_4bec70;
        case 0x4bec74u: goto label_4bec74;
        case 0x4bec78u: goto label_4bec78;
        case 0x4bec7cu: goto label_4bec7c;
        case 0x4bec80u: goto label_4bec80;
        case 0x4bec84u: goto label_4bec84;
        case 0x4bec88u: goto label_4bec88;
        case 0x4bec8cu: goto label_4bec8c;
        case 0x4bec90u: goto label_4bec90;
        case 0x4bec94u: goto label_4bec94;
        case 0x4bec98u: goto label_4bec98;
        case 0x4bec9cu: goto label_4bec9c;
        case 0x4beca0u: goto label_4beca0;
        case 0x4beca4u: goto label_4beca4;
        case 0x4beca8u: goto label_4beca8;
        case 0x4becacu: goto label_4becac;
        case 0x4becb0u: goto label_4becb0;
        case 0x4becb4u: goto label_4becb4;
        case 0x4becb8u: goto label_4becb8;
        case 0x4becbcu: goto label_4becbc;
        case 0x4becc0u: goto label_4becc0;
        case 0x4becc4u: goto label_4becc4;
        case 0x4becc8u: goto label_4becc8;
        case 0x4becccu: goto label_4beccc;
        case 0x4becd0u: goto label_4becd0;
        case 0x4becd4u: goto label_4becd4;
        case 0x4becd8u: goto label_4becd8;
        case 0x4becdcu: goto label_4becdc;
        case 0x4bece0u: goto label_4bece0;
        case 0x4bece4u: goto label_4bece4;
        case 0x4bece8u: goto label_4bece8;
        case 0x4bececu: goto label_4becec;
        case 0x4becf0u: goto label_4becf0;
        case 0x4becf4u: goto label_4becf4;
        case 0x4becf8u: goto label_4becf8;
        case 0x4becfcu: goto label_4becfc;
        case 0x4bed00u: goto label_4bed00;
        case 0x4bed04u: goto label_4bed04;
        case 0x4bed08u: goto label_4bed08;
        case 0x4bed0cu: goto label_4bed0c;
        case 0x4bed10u: goto label_4bed10;
        case 0x4bed14u: goto label_4bed14;
        case 0x4bed18u: goto label_4bed18;
        case 0x4bed1cu: goto label_4bed1c;
        case 0x4bed20u: goto label_4bed20;
        case 0x4bed24u: goto label_4bed24;
        case 0x4bed28u: goto label_4bed28;
        case 0x4bed2cu: goto label_4bed2c;
        case 0x4bed30u: goto label_4bed30;
        case 0x4bed34u: goto label_4bed34;
        case 0x4bed38u: goto label_4bed38;
        case 0x4bed3cu: goto label_4bed3c;
        case 0x4bed40u: goto label_4bed40;
        case 0x4bed44u: goto label_4bed44;
        case 0x4bed48u: goto label_4bed48;
        case 0x4bed4cu: goto label_4bed4c;
        case 0x4bed50u: goto label_4bed50;
        case 0x4bed54u: goto label_4bed54;
        case 0x4bed58u: goto label_4bed58;
        case 0x4bed5cu: goto label_4bed5c;
        case 0x4bed60u: goto label_4bed60;
        case 0x4bed64u: goto label_4bed64;
        case 0x4bed68u: goto label_4bed68;
        case 0x4bed6cu: goto label_4bed6c;
        case 0x4bed70u: goto label_4bed70;
        case 0x4bed74u: goto label_4bed74;
        case 0x4bed78u: goto label_4bed78;
        case 0x4bed7cu: goto label_4bed7c;
        case 0x4bed80u: goto label_4bed80;
        case 0x4bed84u: goto label_4bed84;
        case 0x4bed88u: goto label_4bed88;
        case 0x4bed8cu: goto label_4bed8c;
        case 0x4bed90u: goto label_4bed90;
        case 0x4bed94u: goto label_4bed94;
        case 0x4bed98u: goto label_4bed98;
        case 0x4bed9cu: goto label_4bed9c;
        case 0x4beda0u: goto label_4beda0;
        case 0x4beda4u: goto label_4beda4;
        case 0x4beda8u: goto label_4beda8;
        case 0x4bedacu: goto label_4bedac;
        case 0x4bedb0u: goto label_4bedb0;
        case 0x4bedb4u: goto label_4bedb4;
        case 0x4bedb8u: goto label_4bedb8;
        case 0x4bedbcu: goto label_4bedbc;
        case 0x4bedc0u: goto label_4bedc0;
        case 0x4bedc4u: goto label_4bedc4;
        case 0x4bedc8u: goto label_4bedc8;
        case 0x4bedccu: goto label_4bedcc;
        case 0x4bedd0u: goto label_4bedd0;
        case 0x4bedd4u: goto label_4bedd4;
        case 0x4bedd8u: goto label_4bedd8;
        case 0x4beddcu: goto label_4beddc;
        case 0x4bede0u: goto label_4bede0;
        case 0x4bede4u: goto label_4bede4;
        case 0x4bede8u: goto label_4bede8;
        case 0x4bedecu: goto label_4bedec;
        case 0x4bedf0u: goto label_4bedf0;
        case 0x4bedf4u: goto label_4bedf4;
        case 0x4bedf8u: goto label_4bedf8;
        case 0x4bedfcu: goto label_4bedfc;
        case 0x4bee00u: goto label_4bee00;
        case 0x4bee04u: goto label_4bee04;
        case 0x4bee08u: goto label_4bee08;
        case 0x4bee0cu: goto label_4bee0c;
        case 0x4bee10u: goto label_4bee10;
        case 0x4bee14u: goto label_4bee14;
        case 0x4bee18u: goto label_4bee18;
        case 0x4bee1cu: goto label_4bee1c;
        case 0x4bee20u: goto label_4bee20;
        case 0x4bee24u: goto label_4bee24;
        case 0x4bee28u: goto label_4bee28;
        case 0x4bee2cu: goto label_4bee2c;
        case 0x4bee30u: goto label_4bee30;
        case 0x4bee34u: goto label_4bee34;
        case 0x4bee38u: goto label_4bee38;
        case 0x4bee3cu: goto label_4bee3c;
        case 0x4bee40u: goto label_4bee40;
        case 0x4bee44u: goto label_4bee44;
        case 0x4bee48u: goto label_4bee48;
        case 0x4bee4cu: goto label_4bee4c;
        case 0x4bee50u: goto label_4bee50;
        case 0x4bee54u: goto label_4bee54;
        case 0x4bee58u: goto label_4bee58;
        case 0x4bee5cu: goto label_4bee5c;
        case 0x4bee60u: goto label_4bee60;
        case 0x4bee64u: goto label_4bee64;
        case 0x4bee68u: goto label_4bee68;
        case 0x4bee6cu: goto label_4bee6c;
        case 0x4bee70u: goto label_4bee70;
        case 0x4bee74u: goto label_4bee74;
        case 0x4bee78u: goto label_4bee78;
        case 0x4bee7cu: goto label_4bee7c;
        case 0x4bee80u: goto label_4bee80;
        case 0x4bee84u: goto label_4bee84;
        case 0x4bee88u: goto label_4bee88;
        case 0x4bee8cu: goto label_4bee8c;
        case 0x4bee90u: goto label_4bee90;
        case 0x4bee94u: goto label_4bee94;
        case 0x4bee98u: goto label_4bee98;
        case 0x4bee9cu: goto label_4bee9c;
        case 0x4beea0u: goto label_4beea0;
        case 0x4beea4u: goto label_4beea4;
        case 0x4beea8u: goto label_4beea8;
        case 0x4beeacu: goto label_4beeac;
        case 0x4beeb0u: goto label_4beeb0;
        case 0x4beeb4u: goto label_4beeb4;
        case 0x4beeb8u: goto label_4beeb8;
        case 0x4beebcu: goto label_4beebc;
        case 0x4beec0u: goto label_4beec0;
        case 0x4beec4u: goto label_4beec4;
        case 0x4beec8u: goto label_4beec8;
        case 0x4beeccu: goto label_4beecc;
        case 0x4beed0u: goto label_4beed0;
        case 0x4beed4u: goto label_4beed4;
        case 0x4beed8u: goto label_4beed8;
        case 0x4beedcu: goto label_4beedc;
        case 0x4beee0u: goto label_4beee0;
        case 0x4beee4u: goto label_4beee4;
        case 0x4beee8u: goto label_4beee8;
        case 0x4beeecu: goto label_4beeec;
        case 0x4beef0u: goto label_4beef0;
        case 0x4beef4u: goto label_4beef4;
        case 0x4beef8u: goto label_4beef8;
        case 0x4beefcu: goto label_4beefc;
        case 0x4bef00u: goto label_4bef00;
        case 0x4bef04u: goto label_4bef04;
        case 0x4bef08u: goto label_4bef08;
        case 0x4bef0cu: goto label_4bef0c;
        case 0x4bef10u: goto label_4bef10;
        case 0x4bef14u: goto label_4bef14;
        case 0x4bef18u: goto label_4bef18;
        case 0x4bef1cu: goto label_4bef1c;
        case 0x4bef20u: goto label_4bef20;
        case 0x4bef24u: goto label_4bef24;
        case 0x4bef28u: goto label_4bef28;
        case 0x4bef2cu: goto label_4bef2c;
        case 0x4bef30u: goto label_4bef30;
        case 0x4bef34u: goto label_4bef34;
        case 0x4bef38u: goto label_4bef38;
        case 0x4bef3cu: goto label_4bef3c;
        case 0x4bef40u: goto label_4bef40;
        case 0x4bef44u: goto label_4bef44;
        case 0x4bef48u: goto label_4bef48;
        case 0x4bef4cu: goto label_4bef4c;
        case 0x4bef50u: goto label_4bef50;
        case 0x4bef54u: goto label_4bef54;
        case 0x4bef58u: goto label_4bef58;
        case 0x4bef5cu: goto label_4bef5c;
        case 0x4bef60u: goto label_4bef60;
        case 0x4bef64u: goto label_4bef64;
        case 0x4bef68u: goto label_4bef68;
        case 0x4bef6cu: goto label_4bef6c;
        case 0x4bef70u: goto label_4bef70;
        case 0x4bef74u: goto label_4bef74;
        case 0x4bef78u: goto label_4bef78;
        case 0x4bef7cu: goto label_4bef7c;
        case 0x4bef80u: goto label_4bef80;
        case 0x4bef84u: goto label_4bef84;
        case 0x4bef88u: goto label_4bef88;
        case 0x4bef8cu: goto label_4bef8c;
        case 0x4bef90u: goto label_4bef90;
        case 0x4bef94u: goto label_4bef94;
        case 0x4bef98u: goto label_4bef98;
        case 0x4bef9cu: goto label_4bef9c;
        case 0x4befa0u: goto label_4befa0;
        case 0x4befa4u: goto label_4befa4;
        case 0x4befa8u: goto label_4befa8;
        case 0x4befacu: goto label_4befac;
        case 0x4befb0u: goto label_4befb0;
        case 0x4befb4u: goto label_4befb4;
        case 0x4befb8u: goto label_4befb8;
        case 0x4befbcu: goto label_4befbc;
        case 0x4befc0u: goto label_4befc0;
        case 0x4befc4u: goto label_4befc4;
        case 0x4befc8u: goto label_4befc8;
        case 0x4befccu: goto label_4befcc;
        case 0x4befd0u: goto label_4befd0;
        case 0x4befd4u: goto label_4befd4;
        case 0x4befd8u: goto label_4befd8;
        case 0x4befdcu: goto label_4befdc;
        case 0x4befe0u: goto label_4befe0;
        case 0x4befe4u: goto label_4befe4;
        case 0x4befe8u: goto label_4befe8;
        case 0x4befecu: goto label_4befec;
        case 0x4beff0u: goto label_4beff0;
        case 0x4beff4u: goto label_4beff4;
        case 0x4beff8u: goto label_4beff8;
        case 0x4beffcu: goto label_4beffc;
        case 0x4bf000u: goto label_4bf000;
        case 0x4bf004u: goto label_4bf004;
        case 0x4bf008u: goto label_4bf008;
        case 0x4bf00cu: goto label_4bf00c;
        case 0x4bf010u: goto label_4bf010;
        case 0x4bf014u: goto label_4bf014;
        case 0x4bf018u: goto label_4bf018;
        case 0x4bf01cu: goto label_4bf01c;
        case 0x4bf020u: goto label_4bf020;
        case 0x4bf024u: goto label_4bf024;
        case 0x4bf028u: goto label_4bf028;
        case 0x4bf02cu: goto label_4bf02c;
        case 0x4bf030u: goto label_4bf030;
        case 0x4bf034u: goto label_4bf034;
        case 0x4bf038u: goto label_4bf038;
        case 0x4bf03cu: goto label_4bf03c;
        case 0x4bf040u: goto label_4bf040;
        case 0x4bf044u: goto label_4bf044;
        case 0x4bf048u: goto label_4bf048;
        case 0x4bf04cu: goto label_4bf04c;
        case 0x4bf050u: goto label_4bf050;
        case 0x4bf054u: goto label_4bf054;
        case 0x4bf058u: goto label_4bf058;
        case 0x4bf05cu: goto label_4bf05c;
        case 0x4bf060u: goto label_4bf060;
        case 0x4bf064u: goto label_4bf064;
        case 0x4bf068u: goto label_4bf068;
        case 0x4bf06cu: goto label_4bf06c;
        case 0x4bf070u: goto label_4bf070;
        case 0x4bf074u: goto label_4bf074;
        case 0x4bf078u: goto label_4bf078;
        case 0x4bf07cu: goto label_4bf07c;
        case 0x4bf080u: goto label_4bf080;
        case 0x4bf084u: goto label_4bf084;
        case 0x4bf088u: goto label_4bf088;
        case 0x4bf08cu: goto label_4bf08c;
        case 0x4bf090u: goto label_4bf090;
        case 0x4bf094u: goto label_4bf094;
        case 0x4bf098u: goto label_4bf098;
        case 0x4bf09cu: goto label_4bf09c;
        case 0x4bf0a0u: goto label_4bf0a0;
        case 0x4bf0a4u: goto label_4bf0a4;
        case 0x4bf0a8u: goto label_4bf0a8;
        case 0x4bf0acu: goto label_4bf0ac;
        case 0x4bf0b0u: goto label_4bf0b0;
        case 0x4bf0b4u: goto label_4bf0b4;
        case 0x4bf0b8u: goto label_4bf0b8;
        case 0x4bf0bcu: goto label_4bf0bc;
        case 0x4bf0c0u: goto label_4bf0c0;
        case 0x4bf0c4u: goto label_4bf0c4;
        case 0x4bf0c8u: goto label_4bf0c8;
        case 0x4bf0ccu: goto label_4bf0cc;
        case 0x4bf0d0u: goto label_4bf0d0;
        case 0x4bf0d4u: goto label_4bf0d4;
        case 0x4bf0d8u: goto label_4bf0d8;
        case 0x4bf0dcu: goto label_4bf0dc;
        case 0x4bf0e0u: goto label_4bf0e0;
        case 0x4bf0e4u: goto label_4bf0e4;
        case 0x4bf0e8u: goto label_4bf0e8;
        case 0x4bf0ecu: goto label_4bf0ec;
        case 0x4bf0f0u: goto label_4bf0f0;
        case 0x4bf0f4u: goto label_4bf0f4;
        case 0x4bf0f8u: goto label_4bf0f8;
        case 0x4bf0fcu: goto label_4bf0fc;
        case 0x4bf100u: goto label_4bf100;
        case 0x4bf104u: goto label_4bf104;
        case 0x4bf108u: goto label_4bf108;
        case 0x4bf10cu: goto label_4bf10c;
        case 0x4bf110u: goto label_4bf110;
        case 0x4bf114u: goto label_4bf114;
        case 0x4bf118u: goto label_4bf118;
        case 0x4bf11cu: goto label_4bf11c;
        case 0x4bf120u: goto label_4bf120;
        case 0x4bf124u: goto label_4bf124;
        case 0x4bf128u: goto label_4bf128;
        case 0x4bf12cu: goto label_4bf12c;
        case 0x4bf130u: goto label_4bf130;
        case 0x4bf134u: goto label_4bf134;
        case 0x4bf138u: goto label_4bf138;
        case 0x4bf13cu: goto label_4bf13c;
        case 0x4bf140u: goto label_4bf140;
        case 0x4bf144u: goto label_4bf144;
        case 0x4bf148u: goto label_4bf148;
        case 0x4bf14cu: goto label_4bf14c;
        case 0x4bf150u: goto label_4bf150;
        case 0x4bf154u: goto label_4bf154;
        case 0x4bf158u: goto label_4bf158;
        case 0x4bf15cu: goto label_4bf15c;
        case 0x4bf160u: goto label_4bf160;
        case 0x4bf164u: goto label_4bf164;
        case 0x4bf168u: goto label_4bf168;
        case 0x4bf16cu: goto label_4bf16c;
        case 0x4bf170u: goto label_4bf170;
        case 0x4bf174u: goto label_4bf174;
        case 0x4bf178u: goto label_4bf178;
        case 0x4bf17cu: goto label_4bf17c;
        case 0x4bf180u: goto label_4bf180;
        case 0x4bf184u: goto label_4bf184;
        case 0x4bf188u: goto label_4bf188;
        case 0x4bf18cu: goto label_4bf18c;
        case 0x4bf190u: goto label_4bf190;
        case 0x4bf194u: goto label_4bf194;
        case 0x4bf198u: goto label_4bf198;
        case 0x4bf19cu: goto label_4bf19c;
        case 0x4bf1a0u: goto label_4bf1a0;
        case 0x4bf1a4u: goto label_4bf1a4;
        case 0x4bf1a8u: goto label_4bf1a8;
        case 0x4bf1acu: goto label_4bf1ac;
        case 0x4bf1b0u: goto label_4bf1b0;
        case 0x4bf1b4u: goto label_4bf1b4;
        case 0x4bf1b8u: goto label_4bf1b8;
        case 0x4bf1bcu: goto label_4bf1bc;
        case 0x4bf1c0u: goto label_4bf1c0;
        case 0x4bf1c4u: goto label_4bf1c4;
        case 0x4bf1c8u: goto label_4bf1c8;
        case 0x4bf1ccu: goto label_4bf1cc;
        case 0x4bf1d0u: goto label_4bf1d0;
        case 0x4bf1d4u: goto label_4bf1d4;
        case 0x4bf1d8u: goto label_4bf1d8;
        case 0x4bf1dcu: goto label_4bf1dc;
        case 0x4bf1e0u: goto label_4bf1e0;
        case 0x4bf1e4u: goto label_4bf1e4;
        case 0x4bf1e8u: goto label_4bf1e8;
        case 0x4bf1ecu: goto label_4bf1ec;
        case 0x4bf1f0u: goto label_4bf1f0;
        case 0x4bf1f4u: goto label_4bf1f4;
        case 0x4bf1f8u: goto label_4bf1f8;
        case 0x4bf1fcu: goto label_4bf1fc;
        case 0x4bf200u: goto label_4bf200;
        case 0x4bf204u: goto label_4bf204;
        case 0x4bf208u: goto label_4bf208;
        case 0x4bf20cu: goto label_4bf20c;
        case 0x4bf210u: goto label_4bf210;
        case 0x4bf214u: goto label_4bf214;
        case 0x4bf218u: goto label_4bf218;
        case 0x4bf21cu: goto label_4bf21c;
        case 0x4bf220u: goto label_4bf220;
        case 0x4bf224u: goto label_4bf224;
        case 0x4bf228u: goto label_4bf228;
        case 0x4bf22cu: goto label_4bf22c;
        case 0x4bf230u: goto label_4bf230;
        case 0x4bf234u: goto label_4bf234;
        case 0x4bf238u: goto label_4bf238;
        case 0x4bf23cu: goto label_4bf23c;
        case 0x4bf240u: goto label_4bf240;
        case 0x4bf244u: goto label_4bf244;
        case 0x4bf248u: goto label_4bf248;
        case 0x4bf24cu: goto label_4bf24c;
        case 0x4bf250u: goto label_4bf250;
        case 0x4bf254u: goto label_4bf254;
        case 0x4bf258u: goto label_4bf258;
        case 0x4bf25cu: goto label_4bf25c;
        case 0x4bf260u: goto label_4bf260;
        case 0x4bf264u: goto label_4bf264;
        case 0x4bf268u: goto label_4bf268;
        case 0x4bf26cu: goto label_4bf26c;
        case 0x4bf270u: goto label_4bf270;
        case 0x4bf274u: goto label_4bf274;
        case 0x4bf278u: goto label_4bf278;
        case 0x4bf27cu: goto label_4bf27c;
        case 0x4bf280u: goto label_4bf280;
        case 0x4bf284u: goto label_4bf284;
        case 0x4bf288u: goto label_4bf288;
        case 0x4bf28cu: goto label_4bf28c;
        case 0x4bf290u: goto label_4bf290;
        case 0x4bf294u: goto label_4bf294;
        case 0x4bf298u: goto label_4bf298;
        case 0x4bf29cu: goto label_4bf29c;
        case 0x4bf2a0u: goto label_4bf2a0;
        case 0x4bf2a4u: goto label_4bf2a4;
        case 0x4bf2a8u: goto label_4bf2a8;
        case 0x4bf2acu: goto label_4bf2ac;
        case 0x4bf2b0u: goto label_4bf2b0;
        case 0x4bf2b4u: goto label_4bf2b4;
        case 0x4bf2b8u: goto label_4bf2b8;
        case 0x4bf2bcu: goto label_4bf2bc;
        case 0x4bf2c0u: goto label_4bf2c0;
        case 0x4bf2c4u: goto label_4bf2c4;
        case 0x4bf2c8u: goto label_4bf2c8;
        case 0x4bf2ccu: goto label_4bf2cc;
        case 0x4bf2d0u: goto label_4bf2d0;
        case 0x4bf2d4u: goto label_4bf2d4;
        case 0x4bf2d8u: goto label_4bf2d8;
        case 0x4bf2dcu: goto label_4bf2dc;
        case 0x4bf2e0u: goto label_4bf2e0;
        case 0x4bf2e4u: goto label_4bf2e4;
        case 0x4bf2e8u: goto label_4bf2e8;
        case 0x4bf2ecu: goto label_4bf2ec;
        case 0x4bf2f0u: goto label_4bf2f0;
        case 0x4bf2f4u: goto label_4bf2f4;
        case 0x4bf2f8u: goto label_4bf2f8;
        case 0x4bf2fcu: goto label_4bf2fc;
        case 0x4bf300u: goto label_4bf300;
        case 0x4bf304u: goto label_4bf304;
        case 0x4bf308u: goto label_4bf308;
        case 0x4bf30cu: goto label_4bf30c;
        case 0x4bf310u: goto label_4bf310;
        case 0x4bf314u: goto label_4bf314;
        case 0x4bf318u: goto label_4bf318;
        case 0x4bf31cu: goto label_4bf31c;
        case 0x4bf320u: goto label_4bf320;
        case 0x4bf324u: goto label_4bf324;
        case 0x4bf328u: goto label_4bf328;
        case 0x4bf32cu: goto label_4bf32c;
        case 0x4bf330u: goto label_4bf330;
        case 0x4bf334u: goto label_4bf334;
        case 0x4bf338u: goto label_4bf338;
        case 0x4bf33cu: goto label_4bf33c;
        case 0x4bf340u: goto label_4bf340;
        case 0x4bf344u: goto label_4bf344;
        case 0x4bf348u: goto label_4bf348;
        case 0x4bf34cu: goto label_4bf34c;
        case 0x4bf350u: goto label_4bf350;
        case 0x4bf354u: goto label_4bf354;
        case 0x4bf358u: goto label_4bf358;
        case 0x4bf35cu: goto label_4bf35c;
        case 0x4bf360u: goto label_4bf360;
        case 0x4bf364u: goto label_4bf364;
        case 0x4bf368u: goto label_4bf368;
        case 0x4bf36cu: goto label_4bf36c;
        case 0x4bf370u: goto label_4bf370;
        case 0x4bf374u: goto label_4bf374;
        case 0x4bf378u: goto label_4bf378;
        case 0x4bf37cu: goto label_4bf37c;
        case 0x4bf380u: goto label_4bf380;
        case 0x4bf384u: goto label_4bf384;
        case 0x4bf388u: goto label_4bf388;
        case 0x4bf38cu: goto label_4bf38c;
        case 0x4bf390u: goto label_4bf390;
        case 0x4bf394u: goto label_4bf394;
        case 0x4bf398u: goto label_4bf398;
        case 0x4bf39cu: goto label_4bf39c;
        case 0x4bf3a0u: goto label_4bf3a0;
        case 0x4bf3a4u: goto label_4bf3a4;
        case 0x4bf3a8u: goto label_4bf3a8;
        case 0x4bf3acu: goto label_4bf3ac;
        case 0x4bf3b0u: goto label_4bf3b0;
        case 0x4bf3b4u: goto label_4bf3b4;
        case 0x4bf3b8u: goto label_4bf3b8;
        case 0x4bf3bcu: goto label_4bf3bc;
        case 0x4bf3c0u: goto label_4bf3c0;
        case 0x4bf3c4u: goto label_4bf3c4;
        case 0x4bf3c8u: goto label_4bf3c8;
        case 0x4bf3ccu: goto label_4bf3cc;
        case 0x4bf3d0u: goto label_4bf3d0;
        case 0x4bf3d4u: goto label_4bf3d4;
        case 0x4bf3d8u: goto label_4bf3d8;
        case 0x4bf3dcu: goto label_4bf3dc;
        case 0x4bf3e0u: goto label_4bf3e0;
        case 0x4bf3e4u: goto label_4bf3e4;
        case 0x4bf3e8u: goto label_4bf3e8;
        case 0x4bf3ecu: goto label_4bf3ec;
        case 0x4bf3f0u: goto label_4bf3f0;
        case 0x4bf3f4u: goto label_4bf3f4;
        case 0x4bf3f8u: goto label_4bf3f8;
        case 0x4bf3fcu: goto label_4bf3fc;
        case 0x4bf400u: goto label_4bf400;
        case 0x4bf404u: goto label_4bf404;
        case 0x4bf408u: goto label_4bf408;
        case 0x4bf40cu: goto label_4bf40c;
        case 0x4bf410u: goto label_4bf410;
        case 0x4bf414u: goto label_4bf414;
        case 0x4bf418u: goto label_4bf418;
        case 0x4bf41cu: goto label_4bf41c;
        case 0x4bf420u: goto label_4bf420;
        case 0x4bf424u: goto label_4bf424;
        case 0x4bf428u: goto label_4bf428;
        case 0x4bf42cu: goto label_4bf42c;
        case 0x4bf430u: goto label_4bf430;
        case 0x4bf434u: goto label_4bf434;
        case 0x4bf438u: goto label_4bf438;
        case 0x4bf43cu: goto label_4bf43c;
        case 0x4bf440u: goto label_4bf440;
        case 0x4bf444u: goto label_4bf444;
        case 0x4bf448u: goto label_4bf448;
        case 0x4bf44cu: goto label_4bf44c;
        case 0x4bf450u: goto label_4bf450;
        case 0x4bf454u: goto label_4bf454;
        case 0x4bf458u: goto label_4bf458;
        case 0x4bf45cu: goto label_4bf45c;
        case 0x4bf460u: goto label_4bf460;
        case 0x4bf464u: goto label_4bf464;
        case 0x4bf468u: goto label_4bf468;
        case 0x4bf46cu: goto label_4bf46c;
        case 0x4bf470u: goto label_4bf470;
        case 0x4bf474u: goto label_4bf474;
        case 0x4bf478u: goto label_4bf478;
        case 0x4bf47cu: goto label_4bf47c;
        case 0x4bf480u: goto label_4bf480;
        case 0x4bf484u: goto label_4bf484;
        case 0x4bf488u: goto label_4bf488;
        case 0x4bf48cu: goto label_4bf48c;
        case 0x4bf490u: goto label_4bf490;
        case 0x4bf494u: goto label_4bf494;
        case 0x4bf498u: goto label_4bf498;
        case 0x4bf49cu: goto label_4bf49c;
        case 0x4bf4a0u: goto label_4bf4a0;
        case 0x4bf4a4u: goto label_4bf4a4;
        case 0x4bf4a8u: goto label_4bf4a8;
        case 0x4bf4acu: goto label_4bf4ac;
        case 0x4bf4b0u: goto label_4bf4b0;
        case 0x4bf4b4u: goto label_4bf4b4;
        case 0x4bf4b8u: goto label_4bf4b8;
        case 0x4bf4bcu: goto label_4bf4bc;
        case 0x4bf4c0u: goto label_4bf4c0;
        case 0x4bf4c4u: goto label_4bf4c4;
        case 0x4bf4c8u: goto label_4bf4c8;
        case 0x4bf4ccu: goto label_4bf4cc;
        case 0x4bf4d0u: goto label_4bf4d0;
        case 0x4bf4d4u: goto label_4bf4d4;
        case 0x4bf4d8u: goto label_4bf4d8;
        case 0x4bf4dcu: goto label_4bf4dc;
        case 0x4bf4e0u: goto label_4bf4e0;
        case 0x4bf4e4u: goto label_4bf4e4;
        case 0x4bf4e8u: goto label_4bf4e8;
        case 0x4bf4ecu: goto label_4bf4ec;
        case 0x4bf4f0u: goto label_4bf4f0;
        case 0x4bf4f4u: goto label_4bf4f4;
        case 0x4bf4f8u: goto label_4bf4f8;
        case 0x4bf4fcu: goto label_4bf4fc;
        case 0x4bf500u: goto label_4bf500;
        case 0x4bf504u: goto label_4bf504;
        case 0x4bf508u: goto label_4bf508;
        case 0x4bf50cu: goto label_4bf50c;
        case 0x4bf510u: goto label_4bf510;
        case 0x4bf514u: goto label_4bf514;
        case 0x4bf518u: goto label_4bf518;
        case 0x4bf51cu: goto label_4bf51c;
        case 0x4bf520u: goto label_4bf520;
        case 0x4bf524u: goto label_4bf524;
        case 0x4bf528u: goto label_4bf528;
        case 0x4bf52cu: goto label_4bf52c;
        case 0x4bf530u: goto label_4bf530;
        case 0x4bf534u: goto label_4bf534;
        case 0x4bf538u: goto label_4bf538;
        case 0x4bf53cu: goto label_4bf53c;
        case 0x4bf540u: goto label_4bf540;
        case 0x4bf544u: goto label_4bf544;
        case 0x4bf548u: goto label_4bf548;
        case 0x4bf54cu: goto label_4bf54c;
        default: break;
    }

    ctx->pc = 0x4be7d0u;

label_4be7d0:
    // 0x4be7d0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x4be7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_4be7d4:
    // 0x4be7d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4be7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4be7d8:
    // 0x4be7d8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x4be7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_4be7dc:
    // 0x4be7dc: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x4be7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_4be7e0:
    // 0x4be7e0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4be7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_4be7e4:
    // 0x4be7e4: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x4be7e4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4be7e8:
    // 0x4be7e8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4be7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_4be7ec:
    // 0x4be7ec: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x4be7ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_4be7f0:
    // 0x4be7f0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4be7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4be7f4:
    // 0x4be7f4: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x4be7f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_4be7f8:
    // 0x4be7f8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4be7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4be7fc:
    // 0x4be7fc: 0x2c21004  sllv        $v0, $v0, $s6
    ctx->pc = 0x4be7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 22) & 0x1F));
label_4be800:
    // 0x4be800: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4be800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4be804:
    // 0x4be804: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x4be804u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4be808:
    // 0x4be808: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4be808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4be80c:
    // 0x4be80c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x4be80cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4be810:
    // 0x4be810: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4be810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4be814:
    // 0x4be814: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x4be814u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4be818:
    // 0x4be818: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4be818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4be81c:
    // 0x4be81c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4be81cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4be820:
    // 0x4be820: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4be820u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4be824:
    // 0x4be824: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x4be824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_4be828:
    // 0x4be828: 0x9083004d  lbu         $v1, 0x4D($a0)
    ctx->pc = 0x4be828u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 77)));
label_4be82c:
    // 0x4be82c: 0x401027  not         $v0, $v0
    ctx->pc = 0x4be82cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_4be830:
    // 0x4be830: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4be830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4be834:
    // 0x4be834: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4be834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4be838:
    // 0x4be838: 0xa082004d  sb          $v0, 0x4D($a0)
    ctx->pc = 0x4be838u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 2));
label_4be83c:
    // 0x4be83c: 0x8c900040  lw          $s0, 0x40($a0)
    ctx->pc = 0x4be83cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_4be840:
    // 0x4be840: 0x8d63009c  lw          $v1, 0x9C($t3)
    ctx->pc = 0x4be840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 156)));
label_4be844:
    // 0x4be844: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x4be844u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_4be848:
    // 0x4be848: 0x1070001a  beq         $v1, $s0, . + 4 + (0x1A << 2)
label_4be84c:
    if (ctx->pc == 0x4BE84Cu) {
        ctx->pc = 0x4BE84Cu;
            // 0x4be84c: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x4BE850u;
        goto label_4be850;
    }
    ctx->pc = 0x4BE848u;
    {
        const bool branch_taken_0x4be848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x4BE84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE848u;
            // 0x4be84c: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be848) {
            ctx->pc = 0x4BE8B4u;
            goto label_4be8b4;
        }
    }
    ctx->pc = 0x4BE850u;
label_4be850:
    // 0x4be850: 0x8ee20090  lw          $v0, 0x90($s7)
    ctx->pc = 0x4be850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 144)));
label_4be854:
    // 0x4be854: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4be854u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4be858:
    // 0x4be858: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_4be85c:
    if (ctx->pc == 0x4BE85Cu) {
        ctx->pc = 0x4BE860u;
        goto label_4be860;
    }
    ctx->pc = 0x4BE858u;
    {
        const bool branch_taken_0x4be858 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4be858) {
            ctx->pc = 0x4BE898u;
            goto label_4be898;
        }
    }
    ctx->pc = 0x4BE860u;
label_4be860:
    // 0x4be860: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x4be860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4be864:
    // 0x4be864: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4be864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4be868:
    // 0x4be868: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x4be868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_4be86c:
    // 0x4be86c: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x4be86cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_4be870:
    // 0x4be870: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_4be874:
    if (ctx->pc == 0x4BE874u) {
        ctx->pc = 0x4BE874u;
            // 0x4be874: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x4BE878u;
        goto label_4be878;
    }
    ctx->pc = 0x4BE870u;
    {
        const bool branch_taken_0x4be870 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x4BE874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE870u;
            // 0x4be874: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be870) {
            ctx->pc = 0x4BE898u;
            goto label_4be898;
        }
    }
    ctx->pc = 0x4BE878u;
label_4be878:
    // 0x4be878: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4be878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4be87c:
    // 0x4be87c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4be87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4be880:
    // 0x4be880: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x4be880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4be884:
    // 0x4be884: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4be884u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4be888:
    // 0x4be888: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x4be888u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_4be88c:
    // 0x4be88c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x4be88cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_4be890:
    // 0x4be890: 0xc055ea8  jal         func_157AA0
label_4be894:
    if (ctx->pc == 0x4BE894u) {
        ctx->pc = 0x4BE894u;
            // 0x4be894: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BE898u;
        goto label_4be898;
    }
    ctx->pc = 0x4BE890u;
    SET_GPR_U32(ctx, 31, 0x4BE898u);
    ctx->pc = 0x4BE894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE890u;
            // 0x4be894: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE898u; }
        if (ctx->pc != 0x4BE898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE898u; }
        if (ctx->pc != 0x4BE898u) { return; }
    }
    ctx->pc = 0x4BE898u;
label_4be898:
    // 0x4be898: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4be898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4be89c:
    // 0x4be89c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4be89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4be8a0:
    // 0x4be8a0: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x4be8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_4be8a4:
    // 0x4be8a4: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x4be8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_4be8a8:
    // 0x4be8a8: 0xc04e738  jal         func_139CE0
label_4be8ac:
    if (ctx->pc == 0x4BE8ACu) {
        ctx->pc = 0x4BE8ACu;
            // 0x4be8ac: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x4BE8B0u;
        goto label_4be8b0;
    }
    ctx->pc = 0x4BE8A8u;
    SET_GPR_U32(ctx, 31, 0x4BE8B0u);
    ctx->pc = 0x4BE8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE8A8u;
            // 0x4be8ac: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE8B0u; }
        if (ctx->pc != 0x4BE8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE8B0u; }
        if (ctx->pc != 0x4BE8B0u) { return; }
    }
    ctx->pc = 0x4BE8B0u;
label_4be8b0:
    // 0x4be8b0: 0xaef0009c  sw          $s0, 0x9C($s7)
    ctx->pc = 0x4be8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 156), GPR_U32(ctx, 16));
label_4be8b4:
    // 0x4be8b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4be8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4be8b8:
    // 0x4be8b8: 0xc04f278  jal         func_13C9E0
label_4be8bc:
    if (ctx->pc == 0x4BE8BCu) {
        ctx->pc = 0x4BE8BCu;
            // 0x4be8bc: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x4BE8C0u;
        goto label_4be8c0;
    }
    ctx->pc = 0x4BE8B8u;
    SET_GPR_U32(ctx, 31, 0x4BE8C0u);
    ctx->pc = 0x4BE8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE8B8u;
            // 0x4be8bc: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE8C0u; }
        if (ctx->pc != 0x4BE8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE8C0u; }
        if (ctx->pc != 0x4BE8C0u) { return; }
    }
    ctx->pc = 0x4BE8C0u;
label_4be8c0:
    // 0x4be8c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4be8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4be8c4:
    // 0x4be8c4: 0xc04ce80  jal         func_133A00
label_4be8c8:
    if (ctx->pc == 0x4BE8C8u) {
        ctx->pc = 0x4BE8C8u;
            // 0x4be8c8: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->pc = 0x4BE8CCu;
        goto label_4be8cc;
    }
    ctx->pc = 0x4BE8C4u;
    SET_GPR_U32(ctx, 31, 0x4BE8CCu);
    ctx->pc = 0x4BE8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE8C4u;
            // 0x4be8c8: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE8CCu; }
        if (ctx->pc != 0x4BE8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE8CCu; }
        if (ctx->pc != 0x4BE8CCu) { return; }
    }
    ctx->pc = 0x4BE8CCu;
label_4be8cc:
    // 0x4be8cc: 0xc6ac00dc  lwc1        $f12, 0xDC($s5)
    ctx->pc = 0x4be8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4be8d0:
    // 0x4be8d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4be8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4be8d4:
    // 0x4be8d4: 0xc6ad00e0  lwc1        $f13, 0xE0($s5)
    ctx->pc = 0x4be8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_4be8d8:
    // 0x4be8d8: 0xc6ae00e4  lwc1        $f14, 0xE4($s5)
    ctx->pc = 0x4be8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4be8dc:
    // 0x4be8dc: 0xc04ce50  jal         func_133940
label_4be8e0:
    if (ctx->pc == 0x4BE8E0u) {
        ctx->pc = 0x4BE8E0u;
            // 0x4be8e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BE8E4u;
        goto label_4be8e4;
    }
    ctx->pc = 0x4BE8DCu;
    SET_GPR_U32(ctx, 31, 0x4BE8E4u);
    ctx->pc = 0x4BE8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE8DCu;
            // 0x4be8e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE8E4u; }
        if (ctx->pc != 0x4BE8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE8E4u; }
        if (ctx->pc != 0x4BE8E4u) { return; }
    }
    ctx->pc = 0x4BE8E4u;
label_4be8e4:
    // 0x4be8e4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4be8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4be8e8:
    // 0x4be8e8: 0xc454e858  lwc1        $f20, -0x17A8($v0)
    ctx->pc = 0x4be8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4be8ec:
    // 0x4be8ec: 0xc0d4108  jal         func_350420
label_4be8f0:
    if (ctx->pc == 0x4BE8F0u) {
        ctx->pc = 0x4BE8F0u;
            // 0x4be8f0: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x4BE8F4u;
        goto label_4be8f4;
    }
    ctx->pc = 0x4BE8ECu;
    SET_GPR_U32(ctx, 31, 0x4BE8F4u);
    ctx->pc = 0x4BE8F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE8ECu;
            // 0x4be8f0: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE8F4u; }
        if (ctx->pc != 0x4BE8F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE8F4u; }
        if (ctx->pc != 0x4BE8F4u) { return; }
    }
    ctx->pc = 0x4BE8F4u;
label_4be8f4:
    // 0x4be8f4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x4be8f4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4be8f8:
    // 0x4be8f8: 0xc0d4104  jal         func_350410
label_4be8fc:
    if (ctx->pc == 0x4BE8FCu) {
        ctx->pc = 0x4BE8FCu;
            // 0x4be8fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BE900u;
        goto label_4be900;
    }
    ctx->pc = 0x4BE8F8u;
    SET_GPR_U32(ctx, 31, 0x4BE900u);
    ctx->pc = 0x4BE8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE8F8u;
            // 0x4be8fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE900u; }
        if (ctx->pc != 0x4BE900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE900u; }
        if (ctx->pc != 0x4BE900u) { return; }
    }
    ctx->pc = 0x4BE900u;
label_4be900:
    // 0x4be900: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4be900u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4be904:
    // 0x4be904: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4be904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4be908:
    // 0x4be908: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4be908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4be90c:
    // 0x4be90c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4be90cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4be910:
    // 0x4be910: 0xc44ce858  lwc1        $f12, -0x17A8($v0)
    ctx->pc = 0x4be910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4be914:
    // 0x4be914: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4be914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4be918:
    // 0x4be918: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4be918u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4be91c:
    // 0x4be91c: 0xc0d40ac  jal         func_3502B0
label_4be920:
    if (ctx->pc == 0x4BE920u) {
        ctx->pc = 0x4BE920u;
            // 0x4be920: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BE924u;
        goto label_4be924;
    }
    ctx->pc = 0x4BE91Cu;
    SET_GPR_U32(ctx, 31, 0x4BE924u);
    ctx->pc = 0x4BE920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE91Cu;
            // 0x4be920: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE924u; }
        if (ctx->pc != 0x4BE924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE924u; }
        if (ctx->pc != 0x4BE924u) { return; }
    }
    ctx->pc = 0x4BE924u;
label_4be924:
    // 0x4be924: 0xaea20044  sw          $v0, 0x44($s5)
    ctx->pc = 0x4be924u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 2));
label_4be928:
    // 0x4be928: 0x28500002  slti        $s0, $v0, 0x2
    ctx->pc = 0x4be928u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_4be92c:
    // 0x4be92c: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x4be92cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4be930:
    // 0x4be930: 0x26a4004d  addiu       $a0, $s5, 0x4D
    ctx->pc = 0x4be930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 77));
label_4be934:
    // 0x4be934: 0x27a500cc  addiu       $a1, $sp, 0xCC
    ctx->pc = 0x4be934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
label_4be938:
    // 0x4be938: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x4be938u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4be93c:
    // 0x4be93c: 0xc0d590c  jal         func_356430
label_4be940:
    if (ctx->pc == 0x4BE940u) {
        ctx->pc = 0x4BE940u;
            // 0x4be940: 0xafa200cc  sw          $v0, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
        ctx->pc = 0x4BE944u;
        goto label_4be944;
    }
    ctx->pc = 0x4BE93Cu;
    SET_GPR_U32(ctx, 31, 0x4BE944u);
    ctx->pc = 0x4BE940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE93Cu;
            // 0x4be940: 0xafa200cc  sw          $v0, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x356430u;
    if (runtime->hasFunction(0x356430u)) {
        auto targetFn = runtime->lookupFunction(0x356430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE944u; }
        if (ctx->pc != 0x4BE944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00356430_0x356430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE944u; }
        if (ctx->pc != 0x4BE944u) { return; }
    }
    ctx->pc = 0x4BE944u;
label_4be944:
    // 0x4be944: 0x52000098  beql        $s0, $zero, . + 4 + (0x98 << 2)
label_4be948:
    if (ctx->pc == 0x4BE948u) {
        ctx->pc = 0x4BE948u;
            // 0x4be948: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x4BE94Cu;
        goto label_4be94c;
    }
    ctx->pc = 0x4BE944u;
    {
        const bool branch_taken_0x4be944 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4be944) {
            ctx->pc = 0x4BE948u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE944u;
            // 0x4be948: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BEBA8u;
            goto label_4beba8;
        }
    }
    ctx->pc = 0x4BE94Cu;
label_4be94c:
    // 0x4be94c: 0x8ea4009c  lw          $a0, 0x9C($s5)
    ctx->pc = 0x4be94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 156)));
label_4be950:
    // 0x4be950: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4be950u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_4be954:
    // 0x4be954: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4be954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4be958:
    // 0x4be958: 0xc0e31f8  jal         func_38C7E0
label_4be95c:
    if (ctx->pc == 0x4BE95Cu) {
        ctx->pc = 0x4BE95Cu;
            // 0x4be95c: 0x26a600dc  addiu       $a2, $s5, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 220));
        ctx->pc = 0x4BE960u;
        goto label_4be960;
    }
    ctx->pc = 0x4BE958u;
    SET_GPR_U32(ctx, 31, 0x4BE960u);
    ctx->pc = 0x4BE95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE958u;
            // 0x4be95c: 0x26a600dc  addiu       $a2, $s5, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 220));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38C7E0u;
    if (runtime->hasFunction(0x38C7E0u)) {
        auto targetFn = runtime->lookupFunction(0x38C7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE960u; }
        if (ctx->pc != 0x4BE960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038C7E0_0x38c7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE960u; }
        if (ctx->pc != 0x4BE960u) { return; }
    }
    ctx->pc = 0x4BE960u;
label_4be960:
    // 0x4be960: 0x92a30090  lbu         $v1, 0x90($s5)
    ctx->pc = 0x4be960u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 144)));
label_4be964:
    // 0x4be964: 0x10600074  beqz        $v1, . + 4 + (0x74 << 2)
label_4be968:
    if (ctx->pc == 0x4BE968u) {
        ctx->pc = 0x4BE968u;
            // 0x4be968: 0x26a6006c  addiu       $a2, $s5, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 108));
        ctx->pc = 0x4BE96Cu;
        goto label_4be96c;
    }
    ctx->pc = 0x4BE964u;
    {
        const bool branch_taken_0x4be964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BE968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE964u;
            // 0x4be968: 0x26a6006c  addiu       $a2, $s5, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be964) {
            ctx->pc = 0x4BEB38u;
            goto label_4beb38;
        }
    }
    ctx->pc = 0x4BE96Cu;
label_4be96c:
    // 0x4be96c: 0xc6a10030  lwc1        $f1, 0x30($s5)
    ctx->pc = 0x4be96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4be970:
    // 0x4be970: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4be970u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4be974:
    // 0x4be974: 0x0  nop
    ctx->pc = 0x4be974u;
    // NOP
label_4be978:
    // 0x4be978: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4be978u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4be97c:
    // 0x4be97c: 0x45010039  bc1t        . + 4 + (0x39 << 2)
label_4be980:
    if (ctx->pc == 0x4BE980u) {
        ctx->pc = 0x4BE984u;
        goto label_4be984;
    }
    ctx->pc = 0x4BE97Cu;
    {
        const bool branch_taken_0x4be97c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4be97c) {
            ctx->pc = 0x4BEA64u;
            goto label_4bea64;
        }
    }
    ctx->pc = 0x4BE984u;
label_4be984:
    // 0x4be984: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x4be984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_4be988:
    // 0x4be988: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4be988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4be98c:
    // 0x4be98c: 0x14620035  bne         $v1, $v0, . + 4 + (0x35 << 2)
label_4be990:
    if (ctx->pc == 0x4BE990u) {
        ctx->pc = 0x4BE994u;
        goto label_4be994;
    }
    ctx->pc = 0x4BE98Cu;
    {
        const bool branch_taken_0x4be98c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4be98c) {
            ctx->pc = 0x4BEA64u;
            goto label_4bea64;
        }
    }
    ctx->pc = 0x4BE994u;
label_4be994:
    // 0x4be994: 0xc4d40008  lwc1        $f20, 0x8($a2)
    ctx->pc = 0x4be994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4be998:
    // 0x4be998: 0x24d00008  addiu       $s0, $a2, 0x8
    ctx->pc = 0x4be998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_4be99c:
    // 0x4be99c: 0xc049514  jal         func_125450
label_4be9a0:
    if (ctx->pc == 0x4BE9A0u) {
        ctx->pc = 0x4BE9A0u;
            // 0x4be9a0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4BE9A4u;
        goto label_4be9a4;
    }
    ctx->pc = 0x4BE99Cu;
    SET_GPR_U32(ctx, 31, 0x4BE9A4u);
    ctx->pc = 0x4BE9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE99Cu;
            // 0x4be9a0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE9A4u; }
        if (ctx->pc != 0x4BE9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE9A4u; }
        if (ctx->pc != 0x4BE9A4u) { return; }
    }
    ctx->pc = 0x4BE9A4u;
label_4be9a4:
    // 0x4be9a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4be9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4be9a8:
    // 0x4be9a8: 0xc04020c  jal         func_100830
label_4be9ac:
    if (ctx->pc == 0x4BE9ACu) {
        ctx->pc = 0x4BE9ACu;
            // 0x4be9ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BE9B0u;
        goto label_4be9b0;
    }
    ctx->pc = 0x4BE9A8u;
    SET_GPR_U32(ctx, 31, 0x4BE9B0u);
    ctx->pc = 0x4BE9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE9A8u;
            // 0x4be9ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100830u;
    if (runtime->hasFunction(0x100830u)) {
        auto targetFn = runtime->lookupFunction(0x100830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE9B0u; }
        if (ctx->pc != 0x4BE9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100830_0x100830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE9B0u; }
        if (ctx->pc != 0x4BE9B0u) { return; }
    }
    ctx->pc = 0x4BE9B0u;
label_4be9b0:
    // 0x4be9b0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4be9b4:
    if (ctx->pc == 0x4BE9B4u) {
        ctx->pc = 0x4BE9B8u;
        goto label_4be9b8;
    }
    ctx->pc = 0x4BE9B0u;
    {
        const bool branch_taken_0x4be9b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4be9b0) {
            ctx->pc = 0x4BE9D4u;
            goto label_4be9d4;
        }
    }
    ctx->pc = 0x4BE9B8u;
label_4be9b8:
    // 0x4be9b8: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x4be9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4be9bc:
    // 0x4be9bc: 0x0  nop
    ctx->pc = 0x4be9bcu;
    // NOP
label_4be9c0:
    // 0x4be9c0: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x4be9c0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[0];
label_4be9c4:
    // 0x4be9c4: 0x0  nop
    ctx->pc = 0x4be9c4u;
    // NOP
label_4be9c8:
    // 0x4be9c8: 0x0  nop
    ctx->pc = 0x4be9c8u;
    // NOP
label_4be9cc:
    // 0x4be9cc: 0x10000002  b           . + 4 + (0x2 << 2)
label_4be9d0:
    if (ctx->pc == 0x4BE9D0u) {
        ctx->pc = 0x4BE9D4u;
        goto label_4be9d4;
    }
    ctx->pc = 0x4BE9CCu;
    {
        const bool branch_taken_0x4be9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4be9cc) {
            ctx->pc = 0x4BE9D8u;
            goto label_4be9d8;
        }
    }
    ctx->pc = 0x4BE9D4u;
label_4be9d4:
    // 0x4be9d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4be9d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4be9d8:
    // 0x4be9d8: 0xc054c3c  jal         func_1530F0
label_4be9dc:
    if (ctx->pc == 0x4BE9DCu) {
        ctx->pc = 0x4BE9DCu;
            // 0x4be9dc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4BE9E0u;
        goto label_4be9e0;
    }
    ctx->pc = 0x4BE9D8u;
    SET_GPR_U32(ctx, 31, 0x4BE9E0u);
    ctx->pc = 0x4BE9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE9D8u;
            // 0x4be9dc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530F0u;
    if (runtime->hasFunction(0x1530F0u)) {
        auto targetFn = runtime->lookupFunction(0x1530F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE9E0u; }
        if (ctx->pc != 0x4BE9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530F0_0x1530f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE9E0u; }
        if (ctx->pc != 0x4BE9E0u) { return; }
    }
    ctx->pc = 0x4BE9E0u;
label_4be9e0:
    // 0x4be9e0: 0xc054c40  jal         func_153100
label_4be9e4:
    if (ctx->pc == 0x4BE9E4u) {
        ctx->pc = 0x4BE9E4u;
            // 0x4be9e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BE9E8u;
        goto label_4be9e8;
    }
    ctx->pc = 0x4BE9E0u;
    SET_GPR_U32(ctx, 31, 0x4BE9E8u);
    ctx->pc = 0x4BE9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE9E0u;
            // 0x4be9e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153100u;
    if (runtime->hasFunction(0x153100u)) {
        auto targetFn = runtime->lookupFunction(0x153100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE9E8u; }
        if (ctx->pc != 0x4BE9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153100_0x153100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE9E8u; }
        if (ctx->pc != 0x4BE9E8u) { return; }
    }
    ctx->pc = 0x4BE9E8u;
label_4be9e8:
    // 0x4be9e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4be9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4be9ec:
    // 0x4be9ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4be9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4be9f0:
    // 0x4be9f0: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x4be9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4be9f4:
    // 0x4be9f4: 0xc04e4a4  jal         func_139290
label_4be9f8:
    if (ctx->pc == 0x4BE9F8u) {
        ctx->pc = 0x4BE9F8u;
            // 0x4be9f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BE9FCu;
        goto label_4be9fc;
    }
    ctx->pc = 0x4BE9F4u;
    SET_GPR_U32(ctx, 31, 0x4BE9FCu);
    ctx->pc = 0x4BE9F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE9F4u;
            // 0x4be9f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE9FCu; }
        if (ctx->pc != 0x4BE9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE9FCu; }
        if (ctx->pc != 0x4BE9FCu) { return; }
    }
    ctx->pc = 0x4BE9FCu;
label_4be9fc:
    // 0x4be9fc: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x4be9fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4bea00:
    // 0x4bea00: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4bea00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4bea04:
    // 0x4bea04: 0xc04cd60  jal         func_133580
label_4bea08:
    if (ctx->pc == 0x4BEA08u) {
        ctx->pc = 0x4BEA08u;
            // 0x4bea08: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BEA0Cu;
        goto label_4bea0c;
    }
    ctx->pc = 0x4BEA04u;
    SET_GPR_U32(ctx, 31, 0x4BEA0Cu);
    ctx->pc = 0x4BEA08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEA04u;
            // 0x4bea08: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BEA0Cu; }
        if (ctx->pc != 0x4BEA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BEA0Cu; }
        if (ctx->pc != 0x4BEA0Cu) { return; }
    }
    ctx->pc = 0x4BEA0Cu;
label_4bea0c:
    // 0x4bea0c: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x4bea0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4bea10:
    // 0x4bea10: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4bea10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4bea14:
    // 0x4bea14: 0x320f809  jalr        $t9
label_4bea18:
    if (ctx->pc == 0x4BEA18u) {
        ctx->pc = 0x4BEA18u;
            // 0x4bea18: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BEA1Cu;
        goto label_4bea1c;
    }
    ctx->pc = 0x4BEA14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BEA1Cu);
        ctx->pc = 0x4BEA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEA14u;
            // 0x4bea18: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BEA1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BEA1Cu; }
            if (ctx->pc != 0x4BEA1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4BEA1Cu;
label_4bea1c:
    // 0x4bea1c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4bea1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4bea20:
    // 0x4bea20: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x4bea20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4bea24:
    // 0x4bea24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4bea24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4bea28:
    // 0x4bea28: 0xc054fd4  jal         func_153F50
label_4bea2c:
    if (ctx->pc == 0x4BEA2Cu) {
        ctx->pc = 0x4BEA2Cu;
            // 0x4bea2c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BEA30u;
        goto label_4bea30;
    }
    ctx->pc = 0x4BEA28u;
    SET_GPR_U32(ctx, 31, 0x4BEA30u);
    ctx->pc = 0x4BEA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEA28u;
            // 0x4bea2c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BEA30u; }
        if (ctx->pc != 0x4BEA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BEA30u; }
        if (ctx->pc != 0x4BEA30u) { return; }
    }
    ctx->pc = 0x4BEA30u;
label_4bea30:
    // 0x4bea30: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4bea30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4bea34:
    // 0x4bea34: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x4bea34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_4bea38:
    // 0x4bea38: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4bea38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4bea3c:
    // 0x4bea3c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4bea3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4bea40:
    // 0x4bea40: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4bea40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4bea44:
    // 0x4bea44: 0xc055234  jal         func_1548D0
label_4bea48:
    if (ctx->pc == 0x4BEA48u) {
        ctx->pc = 0x4BEA48u;
            // 0x4bea48: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->pc = 0x4BEA4Cu;
        goto label_4bea4c;
    }
    ctx->pc = 0x4BEA44u;
    SET_GPR_U32(ctx, 31, 0x4BEA4Cu);
    ctx->pc = 0x4BEA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEA44u;
            // 0x4bea48: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1548D0u;
    if (runtime->hasFunction(0x1548D0u)) {
        auto targetFn = runtime->lookupFunction(0x1548D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BEA4Cu; }
        if (ctx->pc != 0x4BEA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001548D0_0x1548d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BEA4Cu; }
        if (ctx->pc != 0x4BEA4Cu) { return; }
    }
    ctx->pc = 0x4BEA4Cu;
label_4bea4c:
    // 0x4bea4c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4bea4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4bea50:
    // 0x4bea50: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4bea50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4bea54:
    // 0x4bea54: 0xc054c3c  jal         func_1530F0
label_4bea58:
    if (ctx->pc == 0x4BEA58u) {
        ctx->pc = 0x4BEA58u;
            // 0x4bea58: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4BEA5Cu;
        goto label_4bea5c;
    }
    ctx->pc = 0x4BEA54u;
    SET_GPR_U32(ctx, 31, 0x4BEA5Cu);
    ctx->pc = 0x4BEA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEA54u;
            // 0x4bea58: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530F0u;
    if (runtime->hasFunction(0x1530F0u)) {
        auto targetFn = runtime->lookupFunction(0x1530F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BEA5Cu; }
        if (ctx->pc != 0x4BEA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530F0_0x1530f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BEA5Cu; }
        if (ctx->pc != 0x4BEA5Cu) { return; }
    }
    ctx->pc = 0x4BEA5Cu;
label_4bea5c:
    // 0x4bea5c: 0x10000037  b           . + 4 + (0x37 << 2)
label_4bea60:
    if (ctx->pc == 0x4BEA60u) {
        ctx->pc = 0x4BEA60u;
            // 0x4bea60: 0xc6a100e8  lwc1        $f1, 0xE8($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x4BEA64u;
        goto label_4bea64;
    }
    ctx->pc = 0x4BEA5Cu;
    {
        const bool branch_taken_0x4bea5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BEA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEA5Cu;
            // 0x4bea60: 0xc6a100e8  lwc1        $f1, 0xE8($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bea5c) {
            ctx->pc = 0x4BEB3Cu;
            goto label_4beb3c;
        }
    }
    ctx->pc = 0x4BEA64u;
label_4bea64:
    // 0x4bea64: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4bea64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4bea68:
    // 0x4bea68: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4bea68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4bea6c:
    // 0x4bea6c: 0x8c66e3c0  lw          $a2, -0x1C40($v1)
    ctx->pc = 0x4bea6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4bea70:
    // 0x4bea70: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4bea70u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4bea74:
    // 0x4bea74: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x4bea74u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_4bea78:
    // 0x4bea78: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4bea78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4bea7c:
    // 0x4bea7c: 0x65880  sll         $t3, $a2, 2
    ctx->pc = 0x4bea7cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4bea80:
    // 0x4bea80: 0x8c65e3d8  lw          $a1, -0x1C28($v1)
    ctx->pc = 0x4bea80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_4bea84:
    // 0x4bea84: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4bea84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4bea88:
    // 0x4bea88: 0x53180  sll         $a2, $a1, 6
    ctx->pc = 0x4bea88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_4bea8c:
    // 0x4bea8c: 0x8c64e360  lw          $a0, -0x1CA0($v1)
    ctx->pc = 0x4bea8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_4bea90:
    // 0x4bea90: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x4bea90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_4bea94:
    // 0x4bea94: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4bea94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4bea98:
    // 0x4bea98: 0x86a021  addu        $s4, $a0, $a2
    ctx->pc = 0x4bea98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_4bea9c:
    // 0x4bea9c: 0x8c63e3b0  lw          $v1, -0x1C50($v1)
    ctx->pc = 0x4bea9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4beaa0:
    // 0x4beaa0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x4beaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_4beaa4:
    // 0x4beaa4: 0x6b3021  addu        $a2, $v1, $t3
    ctx->pc = 0x4beaa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_4beaa8:
    // 0x4beaa8: 0xacd40000  sw          $s4, 0x0($a2)
    ctx->pc = 0x4beaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 20));
label_4beaac:
    // 0x4beaac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4beaacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4beab0:
    // 0x4beab0: 0x8c89e378  lw          $t1, -0x1C88($a0)
    ctx->pc = 0x4beab0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294959992)));
label_4beab4:
    // 0x4beab4: 0x8ca6e3d8  lw          $a2, -0x1C28($a1)
    ctx->pc = 0x4beab4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960088)));
label_4beab8:
    // 0x4beab8: 0x8c64e3b8  lw          $a0, -0x1C48($v1)
    ctx->pc = 0x4beab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960056)));
label_4beabc:
    // 0x4beabc: 0x65080  sll         $t2, $a2, 2
    ctx->pc = 0x4beabcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4beac0:
    // 0x4beac0: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x4beac0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_4beac4:
    // 0x4beac4: 0x12a9821  addu        $s3, $t1, $t2
    ctx->pc = 0x4beac4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_4beac8:
    // 0x4beac8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4beac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4beacc:
    // 0x4beacc: 0x8b4821  addu        $t1, $a0, $t3
    ctx->pc = 0x4beaccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_4bead0:
    // 0x4bead0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4bead0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4bead4:
    // 0x4bead4: 0xad330000  sw          $s3, 0x0($t1)
    ctx->pc = 0x4bead4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 19));
label_4bead8:
    // 0x4bead8: 0x8c490028  lw          $t1, 0x28($v0)
    ctx->pc = 0x4bead8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4beadc:
    // 0x4beadc: 0x8d08e3d8  lw          $t0, -0x1C28($t0)
    ctx->pc = 0x4beadcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_4beae0:
    // 0x4beae0: 0x8ca2e3c0  lw          $v0, -0x1C40($a1)
    ctx->pc = 0x4beae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_4beae4:
    // 0x4beae4: 0x1092821  addu        $a1, $t0, $t1
    ctx->pc = 0x4beae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_4beae8:
    // 0x4beae8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4beae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4beaec:
    // 0x4beaec: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x4beaecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_4beaf0:
    // 0x4beaf0: 0xac62e3c0  sw          $v0, -0x1C40($v1)
    ctx->pc = 0x4beaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 2));
label_4beaf4:
    // 0x4beaf4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4beaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4beaf8:
    // 0x4beaf8: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x4beaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4beafc:
    // 0x4beafc: 0xc04e4a4  jal         func_139290
label_4beb00:
    if (ctx->pc == 0x4BEB00u) {
        ctx->pc = 0x4BEB00u;
            // 0x4beb00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BEB04u;
        goto label_4beb04;
    }
    ctx->pc = 0x4BEAFCu;
    SET_GPR_U32(ctx, 31, 0x4BEB04u);
    ctx->pc = 0x4BEB00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEAFCu;
            // 0x4beb00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BEB04u; }
        if (ctx->pc != 0x4BEB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BEB04u; }
        if (ctx->pc != 0x4BEB04u) { return; }
    }
    ctx->pc = 0x4BEB04u;
label_4beb04:
    // 0x4beb04: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x4beb04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4beb08:
    // 0x4beb08: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4beb08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4beb0c:
    // 0x4beb0c: 0xc04cd60  jal         func_133580
label_4beb10:
    if (ctx->pc == 0x4BEB10u) {
        ctx->pc = 0x4BEB10u;
            // 0x4beb10: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BEB14u;
        goto label_4beb14;
    }
    ctx->pc = 0x4BEB0Cu;
    SET_GPR_U32(ctx, 31, 0x4BEB14u);
    ctx->pc = 0x4BEB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEB0Cu;
            // 0x4beb10: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BEB14u; }
        if (ctx->pc != 0x4BEB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BEB14u; }
        if (ctx->pc != 0x4BEB14u) { return; }
    }
    ctx->pc = 0x4BEB14u;
label_4beb14:
    // 0x4beb14: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x4beb14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4beb18:
    // 0x4beb18: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4beb18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4beb1c:
    // 0x4beb1c: 0x320f809  jalr        $t9
label_4beb20:
    if (ctx->pc == 0x4BEB20u) {
        ctx->pc = 0x4BEB20u;
            // 0x4beb20: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BEB24u;
        goto label_4beb24;
    }
    ctx->pc = 0x4BEB1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BEB24u);
        ctx->pc = 0x4BEB20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEB1Cu;
            // 0x4beb20: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BEB24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BEB24u; }
            if (ctx->pc != 0x4BEB24u) { return; }
        }
        }
    }
    ctx->pc = 0x4BEB24u;
label_4beb24:
    // 0x4beb24: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4beb24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4beb28:
    // 0x4beb28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4beb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4beb2c:
    // 0x4beb2c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4beb2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4beb30:
    // 0x4beb30: 0xc054fd4  jal         func_153F50
label_4beb34:
    if (ctx->pc == 0x4BEB34u) {
        ctx->pc = 0x4BEB34u;
            // 0x4beb34: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BEB38u;
        goto label_4beb38;
    }
    ctx->pc = 0x4BEB30u;
    SET_GPR_U32(ctx, 31, 0x4BEB38u);
    ctx->pc = 0x4BEB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEB30u;
            // 0x4beb34: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BEB38u; }
        if (ctx->pc != 0x4BEB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BEB38u; }
        if (ctx->pc != 0x4BEB38u) { return; }
    }
    ctx->pc = 0x4BEB38u;
label_4beb38:
    // 0x4beb38: 0xc6a100e8  lwc1        $f1, 0xE8($s5)
    ctx->pc = 0x4beb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4beb3c:
    // 0x4beb3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4beb3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4beb40:
    // 0x4beb40: 0x0  nop
    ctx->pc = 0x4beb40u;
    // NOP
label_4beb44:
    // 0x4beb44: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4beb44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4beb48:
    // 0x4beb48: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_4beb4c:
    if (ctx->pc == 0x4BEB4Cu) {
        ctx->pc = 0x4BEB4Cu;
            // 0x4beb4c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4BEB50u;
        goto label_4beb50;
    }
    ctx->pc = 0x4BEB48u;
    {
        const bool branch_taken_0x4beb48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4BEB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEB48u;
            // 0x4beb4c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4beb48) {
            ctx->pc = 0x4BEB54u;
            goto label_4beb54;
        }
    }
    ctx->pc = 0x4BEB50u;
label_4beb50:
    // 0x4beb50: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4beb50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4beb54:
    // 0x4beb54: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_4beb58:
    if (ctx->pc == 0x4BEB58u) {
        ctx->pc = 0x4BEB58u;
            // 0x4beb58: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x4BEB5Cu;
        goto label_4beb5c;
    }
    ctx->pc = 0x4BEB54u;
    {
        const bool branch_taken_0x4beb54 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x4beb54) {
            ctx->pc = 0x4BEB58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEB54u;
            // 0x4beb58: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BEB68u;
            goto label_4beb68;
        }
    }
    ctx->pc = 0x4BEB5Cu;
label_4beb5c:
    // 0x4beb5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4beb5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4beb60:
    // 0x4beb60: 0x10000007  b           . + 4 + (0x7 << 2)
label_4beb64:
    if (ctx->pc == 0x4BEB64u) {
        ctx->pc = 0x4BEB64u;
            // 0x4beb64: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4BEB68u;
        goto label_4beb68;
    }
    ctx->pc = 0x4BEB60u;
    {
        const bool branch_taken_0x4beb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BEB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEB60u;
            // 0x4beb64: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4beb60) {
            ctx->pc = 0x4BEB80u;
            goto label_4beb80;
        }
    }
    ctx->pc = 0x4BEB68u;
label_4beb68:
    // 0x4beb68: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4beb68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4beb6c:
    // 0x4beb6c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4beb6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4beb70:
    // 0x4beb70: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4beb70u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4beb74:
    // 0x4beb74: 0x0  nop
    ctx->pc = 0x4beb74u;
    // NOP
label_4beb78:
    // 0x4beb78: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x4beb78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_4beb7c:
    // 0x4beb7c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x4beb7cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_4beb80:
    // 0x4beb80: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4beb80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4beb84:
    // 0x4beb84: 0xc6a100e8  lwc1        $f1, 0xE8($s5)
    ctx->pc = 0x4beb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4beb88:
    // 0x4beb88: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4beb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4beb8c:
    // 0x4beb8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4beb8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4beb90:
    // 0x4beb90: 0x0  nop
    ctx->pc = 0x4beb90u;
    // NOP
label_4beb94:
    // 0x4beb94: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4beb94u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4beb98:
    // 0x4beb98: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x4beb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4beb9c:
    // 0x4beb9c: 0x4600101d  msub.s      $f0, $f2, $f0
    ctx->pc = 0x4beb9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_4beba0:
    // 0x4beba0: 0xe6a000e8  swc1        $f0, 0xE8($s5)
    ctx->pc = 0x4beba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 232), bits); }
label_4beba4:
    // 0x4beba4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x4beba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_4beba8:
    // 0x4beba8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4beba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4bebac:
    // 0x4bebac: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x4bebacu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4bebb0:
    // 0x4bebb0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4bebb0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4bebb4:
    // 0x4bebb4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4bebb4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4bebb8:
    // 0x4bebb8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4bebb8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4bebbc:
    // 0x4bebbc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4bebbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4bebc0:
    // 0x4bebc0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4bebc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4bebc4:
    // 0x4bebc4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4bebc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4bebc8:
    // 0x4bebc8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4bebc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4bebcc:
    // 0x4bebcc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4bebccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4bebd0:
    // 0x4bebd0: 0x3e00008  jr          $ra
label_4bebd4:
    if (ctx->pc == 0x4BEBD4u) {
        ctx->pc = 0x4BEBD4u;
            // 0x4bebd4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x4BEBD8u;
        goto label_4bebd8;
    }
    ctx->pc = 0x4BEBD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BEBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEBD0u;
            // 0x4bebd4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BEBD8u;
label_4bebd8:
    // 0x4bebd8: 0x0  nop
    ctx->pc = 0x4bebd8u;
    // NOP
label_4bebdc:
    // 0x4bebdc: 0x0  nop
    ctx->pc = 0x4bebdcu;
    // NOP
label_4bebe0:
    // 0x4bebe0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4bebe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4bebe4:
    // 0x4bebe4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4bebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4bebe8:
    // 0x4bebe8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4bebe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4bebec:
    // 0x4bebec: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x4bebecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4bebf0:
    // 0x4bebf0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4bebf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4bebf4:
    // 0x4bebf4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4bebf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4bebf8:
    // 0x4bebf8: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4bebf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4bebfc:
    // 0x4bebfc: 0x8c420968  lw          $v0, 0x968($v0)
    ctx->pc = 0x4bebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
label_4bec00:
    // 0x4bec00: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_4bec04:
    if (ctx->pc == 0x4BEC04u) {
        ctx->pc = 0x4BEC04u;
            // 0x4bec04: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BEC08u;
        goto label_4bec08;
    }
    ctx->pc = 0x4BEC00u;
    {
        const bool branch_taken_0x4bec00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x4BEC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEC00u;
            // 0x4bec04: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bec00) {
            ctx->pc = 0x4BEC10u;
            goto label_4bec10;
        }
    }
    ctx->pc = 0x4BEC08u;
label_4bec08:
    // 0x4bec08: 0x10000025  b           . + 4 + (0x25 << 2)
label_4bec0c:
    if (ctx->pc == 0x4BEC0Cu) {
        ctx->pc = 0x4BEC0Cu;
            // 0x4bec0c: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x4BEC10u;
        goto label_4bec10;
    }
    ctx->pc = 0x4BEC08u;
    {
        const bool branch_taken_0x4bec08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BEC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEC08u;
            // 0x4bec0c: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bec08) {
            ctx->pc = 0x4BECA0u;
            goto label_4beca0;
        }
    }
    ctx->pc = 0x4BEC10u;
label_4bec10:
    // 0x4bec10: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4bec10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4bec14:
    // 0x4bec14: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x4bec14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4bec18:
    // 0x4bec18: 0xc440c780  lwc1        $f0, -0x3880($v0)
    ctx->pc = 0x4bec18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bec1c:
    // 0x4bec1c: 0xc040180  jal         func_100600
label_4bec20:
    if (ctx->pc == 0x4BEC20u) {
        ctx->pc = 0x4BEC20u;
            // 0x4bec20: 0xe7a0003c  swc1        $f0, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->pc = 0x4BEC24u;
        goto label_4bec24;
    }
    ctx->pc = 0x4BEC1Cu;
    SET_GPR_U32(ctx, 31, 0x4BEC24u);
    ctx->pc = 0x4BEC20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEC1Cu;
            // 0x4bec20: 0xe7a0003c  swc1        $f0, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BEC24u; }
        if (ctx->pc != 0x4BEC24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BEC24u; }
        if (ctx->pc != 0x4BEC24u) { return; }
    }
    ctx->pc = 0x4BEC24u;
label_4bec24:
    // 0x4bec24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4bec24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4bec28:
    // 0x4bec28: 0x5220000f  beql        $s1, $zero, . + 4 + (0xF << 2)
label_4bec2c:
    if (ctx->pc == 0x4BEC2Cu) {
        ctx->pc = 0x4BEC2Cu;
            // 0x4bec2c: 0xae1100d8  sw          $s1, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 17));
        ctx->pc = 0x4BEC30u;
        goto label_4bec30;
    }
    ctx->pc = 0x4BEC28u;
    {
        const bool branch_taken_0x4bec28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bec28) {
            ctx->pc = 0x4BEC2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEC28u;
            // 0x4bec2c: 0xae1100d8  sw          $s1, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BEC68u;
            goto label_4bec68;
        }
    }
    ctx->pc = 0x4BEC30u;
label_4bec30:
    // 0x4bec30: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4bec30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4bec34:
    // 0x4bec34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4bec34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4bec38:
    // 0x4bec38: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x4bec38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_4bec3c:
    // 0x4bec3c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x4bec3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_4bec40:
    // 0x4bec40: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4bec40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4bec44:
    // 0x4bec44: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x4bec44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_4bec48:
    // 0x4bec48: 0xc040138  jal         func_1004E0
label_4bec4c:
    if (ctx->pc == 0x4BEC4Cu) {
        ctx->pc = 0x4BEC4Cu;
            // 0x4bec4c: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4BEC50u;
        goto label_4bec50;
    }
    ctx->pc = 0x4BEC48u;
    SET_GPR_U32(ctx, 31, 0x4BEC50u);
    ctx->pc = 0x4BEC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEC48u;
            // 0x4bec4c: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BEC50u; }
        if (ctx->pc != 0x4BEC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BEC50u; }
        if (ctx->pc != 0x4BEC50u) { return; }
    }
    ctx->pc = 0x4BEC50u;
label_4bec50:
    // 0x4bec50: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x4bec50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_4bec54:
    // 0x4bec54: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x4bec54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_4bec58:
    // 0x4bec58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4bec58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bec5c:
    // 0x4bec5c: 0xc04a576  jal         func_1295D8
label_4bec60:
    if (ctx->pc == 0x4BEC60u) {
        ctx->pc = 0x4BEC60u;
            // 0x4bec60: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4BEC64u;
        goto label_4bec64;
    }
    ctx->pc = 0x4BEC5Cu;
    SET_GPR_U32(ctx, 31, 0x4BEC64u);
    ctx->pc = 0x4BEC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEC5Cu;
            // 0x4bec60: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BEC64u; }
        if (ctx->pc != 0x4BEC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BEC64u; }
        if (ctx->pc != 0x4BEC64u) { return; }
    }
    ctx->pc = 0x4BEC64u;
label_4bec64:
    // 0x4bec64: 0xae1100d8  sw          $s1, 0xD8($s0)
    ctx->pc = 0x4bec64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 17));
label_4bec68:
    // 0x4bec68: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x4bec68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
label_4bec6c:
    // 0x4bec6c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4bec6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4bec70:
    // 0x4bec70: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x4bec70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_4bec74:
    // 0x4bec74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4bec74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4bec78:
    // 0x4bec78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4bec78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4bec7c:
    // 0x4bec7c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4bec7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4bec80:
    // 0x4bec80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4bec80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bec84:
    // 0x4bec84: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4bec84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4bec88:
    // 0x4bec88: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x4bec88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_4bec8c:
    // 0x4bec8c: 0x8c46003c  lw          $a2, 0x3C($v0)
    ctx->pc = 0x4bec8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_4bec90:
    // 0x4bec90: 0xc122cd8  jal         func_48B360
label_4bec94:
    if (ctx->pc == 0x4BEC94u) {
        ctx->pc = 0x4BEC94u;
            // 0x4bec94: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BEC98u;
        goto label_4bec98;
    }
    ctx->pc = 0x4BEC90u;
    SET_GPR_U32(ctx, 31, 0x4BEC98u);
    ctx->pc = 0x4BEC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEC90u;
            // 0x4bec94: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BEC98u; }
        if (ctx->pc != 0x4BEC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BEC98u; }
        if (ctx->pc != 0x4BEC98u) { return; }
    }
    ctx->pc = 0x4BEC98u;
label_4bec98:
    // 0x4bec98: 0x1000001f  b           . + 4 + (0x1F << 2)
label_4bec9c:
    if (ctx->pc == 0x4BEC9Cu) {
        ctx->pc = 0x4BEC9Cu;
            // 0x4bec9c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x4BECA0u;
        goto label_4beca0;
    }
    ctx->pc = 0x4BEC98u;
    {
        const bool branch_taken_0x4bec98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BEC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEC98u;
            // 0x4bec9c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bec98) {
            ctx->pc = 0x4BED18u;
            goto label_4bed18;
        }
    }
    ctx->pc = 0x4BECA0u;
label_4beca0:
    // 0x4beca0: 0xc040180  jal         func_100600
label_4beca4:
    if (ctx->pc == 0x4BECA4u) {
        ctx->pc = 0x4BECA8u;
        goto label_4beca8;
    }
    ctx->pc = 0x4BECA0u;
    SET_GPR_U32(ctx, 31, 0x4BECA8u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BECA8u; }
        if (ctx->pc != 0x4BECA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BECA8u; }
        if (ctx->pc != 0x4BECA8u) { return; }
    }
    ctx->pc = 0x4BECA8u;
label_4beca8:
    // 0x4beca8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4beca8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4becac:
    // 0x4becac: 0x5220000f  beql        $s1, $zero, . + 4 + (0xF << 2)
label_4becb0:
    if (ctx->pc == 0x4BECB0u) {
        ctx->pc = 0x4BECB0u;
            // 0x4becb0: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x4BECB4u;
        goto label_4becb4;
    }
    ctx->pc = 0x4BECACu;
    {
        const bool branch_taken_0x4becac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4becac) {
            ctx->pc = 0x4BECB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BECACu;
            // 0x4becb0: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BECECu;
            goto label_4becec;
        }
    }
    ctx->pc = 0x4BECB4u;
label_4becb4:
    // 0x4becb4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4becb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4becb8:
    // 0x4becb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4becb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4becbc:
    // 0x4becbc: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x4becbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_4becc0:
    // 0x4becc0: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x4becc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_4becc4:
    // 0x4becc4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4becc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4becc8:
    // 0x4becc8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x4becc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_4beccc:
    // 0x4beccc: 0xc040138  jal         func_1004E0
label_4becd0:
    if (ctx->pc == 0x4BECD0u) {
        ctx->pc = 0x4BECD0u;
            // 0x4becd0: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4BECD4u;
        goto label_4becd4;
    }
    ctx->pc = 0x4BECCCu;
    SET_GPR_U32(ctx, 31, 0x4BECD4u);
    ctx->pc = 0x4BECD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BECCCu;
            // 0x4becd0: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BECD4u; }
        if (ctx->pc != 0x4BECD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BECD4u; }
        if (ctx->pc != 0x4BECD4u) { return; }
    }
    ctx->pc = 0x4BECD4u;
label_4becd4:
    // 0x4becd4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x4becd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_4becd8:
    // 0x4becd8: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x4becd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_4becdc:
    // 0x4becdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4becdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bece0:
    // 0x4bece0: 0xc04a576  jal         func_1295D8
label_4bece4:
    if (ctx->pc == 0x4BECE4u) {
        ctx->pc = 0x4BECE4u;
            // 0x4bece4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4BECE8u;
        goto label_4bece8;
    }
    ctx->pc = 0x4BECE0u;
    SET_GPR_U32(ctx, 31, 0x4BECE8u);
    ctx->pc = 0x4BECE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BECE0u;
            // 0x4bece4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BECE8u; }
        if (ctx->pc != 0x4BECE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BECE8u; }
        if (ctx->pc != 0x4BECE8u) { return; }
    }
    ctx->pc = 0x4BECE8u;
label_4bece8:
    // 0x4bece8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4bece8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4becec:
    // 0x4becec: 0x3c034461  lui         $v1, 0x4461
    ctx->pc = 0x4bececu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17505 << 16));
label_4becf0:
    // 0x4becf0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4becf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4becf4:
    // 0x4becf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4becf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4becf8:
    // 0x4becf8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4becf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4becfc:
    // 0x4becfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4becfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bed00:
    // 0x4bed00: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x4bed00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4bed04:
    // 0x4bed04: 0x344601ae  ori         $a2, $v0, 0x1AE
    ctx->pc = 0x4bed04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)430);
label_4bed08:
    // 0x4bed08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4bed08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bed0c:
    // 0x4bed0c: 0xc122cd8  jal         func_48B360
label_4bed10:
    if (ctx->pc == 0x4BED10u) {
        ctx->pc = 0x4BED10u;
            // 0x4bed10: 0xae1100d8  sw          $s1, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 17));
        ctx->pc = 0x4BED14u;
        goto label_4bed14;
    }
    ctx->pc = 0x4BED0Cu;
    SET_GPR_U32(ctx, 31, 0x4BED14u);
    ctx->pc = 0x4BED10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BED0Cu;
            // 0x4bed10: 0xae1100d8  sw          $s1, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BED14u; }
        if (ctx->pc != 0x4BED14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BED14u; }
        if (ctx->pc != 0x4BED14u) { return; }
    }
    ctx->pc = 0x4BED14u;
label_4bed14:
    // 0x4bed14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4bed14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4bed18:
    // 0x4bed18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4bed18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4bed1c:
    // 0x4bed1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4bed1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4bed20:
    // 0x4bed20: 0x3e00008  jr          $ra
label_4bed24:
    if (ctx->pc == 0x4BED24u) {
        ctx->pc = 0x4BED24u;
            // 0x4bed24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4BED28u;
        goto label_4bed28;
    }
    ctx->pc = 0x4BED20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BED24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BED20u;
            // 0x4bed24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BED28u;
label_4bed28:
    // 0x4bed28: 0x0  nop
    ctx->pc = 0x4bed28u;
    // NOP
label_4bed2c:
    // 0x4bed2c: 0x0  nop
    ctx->pc = 0x4bed2cu;
    // NOP
label_4bed30:
    // 0x4bed30: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4bed30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4bed34:
    // 0x4bed34: 0x8c430e80  lw          $v1, 0xE80($v0)
    ctx->pc = 0x4bed34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4bed38:
    // 0x4bed38: 0x8c630968  lw          $v1, 0x968($v1)
    ctx->pc = 0x4bed38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
label_4bed3c:
    // 0x4bed3c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4bed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4bed40:
    // 0x4bed40: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_4bed44:
    if (ctx->pc == 0x4BED44u) {
        ctx->pc = 0x4BED44u;
            // 0x4bed44: 0x8c830040  lw          $v1, 0x40($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
        ctx->pc = 0x4BED48u;
        goto label_4bed48;
    }
    ctx->pc = 0x4BED40u;
    {
        const bool branch_taken_0x4bed40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4bed40) {
            ctx->pc = 0x4BED44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BED40u;
            // 0x4bed44: 0x8c830040  lw          $v1, 0x40($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BED50u;
            goto label_4bed50;
        }
    }
    ctx->pc = 0x4BED48u;
label_4bed48:
    // 0x4bed48: 0x10000010  b           . + 4 + (0x10 << 2)
label_4bed4c:
    if (ctx->pc == 0x4BED4Cu) {
        ctx->pc = 0x4BED4Cu;
            // 0x4bed4c: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->pc = 0x4BED50u;
        goto label_4bed50;
    }
    ctx->pc = 0x4BED48u;
    {
        const bool branch_taken_0x4bed48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BED4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BED48u;
            // 0x4bed4c: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bed48) {
            ctx->pc = 0x4BED8Cu;
            goto label_4bed8c;
        }
    }
    ctx->pc = 0x4BED50u;
label_4bed50:
    // 0x4bed50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4bed50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4bed54:
    // 0x4bed54: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_4bed58:
    if (ctx->pc == 0x4BED58u) {
        ctx->pc = 0x4BED58u;
            // 0x4bed58: 0x3c023f4c  lui         $v0, 0x3F4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
        ctx->pc = 0x4BED5Cu;
        goto label_4bed5c;
    }
    ctx->pc = 0x4BED54u;
    {
        const bool branch_taken_0x4bed54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4bed54) {
            ctx->pc = 0x4BED58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BED54u;
            // 0x4bed58: 0x3c023f4c  lui         $v0, 0x3F4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BED78u;
            goto label_4bed78;
        }
    }
    ctx->pc = 0x4BED5Cu;
label_4bed5c:
    // 0x4bed5c: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_4bed60:
    if (ctx->pc == 0x4BED60u) {
        ctx->pc = 0x4BED60u;
            // 0x4bed60: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->pc = 0x4BED64u;
        goto label_4bed64;
    }
    ctx->pc = 0x4BED5Cu;
    {
        const bool branch_taken_0x4bed5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bed5c) {
            ctx->pc = 0x4BED60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BED5Cu;
            // 0x4bed60: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BED6Cu;
            goto label_4bed6c;
        }
    }
    ctx->pc = 0x4BED64u;
label_4bed64:
    // 0x4bed64: 0x10000008  b           . + 4 + (0x8 << 2)
label_4bed68:
    if (ctx->pc == 0x4BED68u) {
        ctx->pc = 0x4BED6Cu;
        goto label_4bed6c;
    }
    ctx->pc = 0x4BED64u;
    {
        const bool branch_taken_0x4bed64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bed64) {
            ctx->pc = 0x4BED88u;
            goto label_4bed88;
        }
    }
    ctx->pc = 0x4BED6Cu;
label_4bed6c:
    // 0x4bed6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4bed6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4bed70:
    // 0x4bed70: 0x10000007  b           . + 4 + (0x7 << 2)
label_4bed74:
    if (ctx->pc == 0x4BED74u) {
        ctx->pc = 0x4BED78u;
        goto label_4bed78;
    }
    ctx->pc = 0x4BED70u;
    {
        const bool branch_taken_0x4bed70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bed70) {
            ctx->pc = 0x4BED90u;
            goto label_4bed90;
        }
    }
    ctx->pc = 0x4BED78u;
label_4bed78:
    // 0x4bed78: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4bed78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4bed7c:
    // 0x4bed7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4bed7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4bed80:
    // 0x4bed80: 0x10000003  b           . + 4 + (0x3 << 2)
label_4bed84:
    if (ctx->pc == 0x4BED84u) {
        ctx->pc = 0x4BED88u;
        goto label_4bed88;
    }
    ctx->pc = 0x4BED80u;
    {
        const bool branch_taken_0x4bed80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bed80) {
            ctx->pc = 0x4BED90u;
            goto label_4bed90;
        }
    }
    ctx->pc = 0x4BED88u;
label_4bed88:
    // 0x4bed88: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x4bed88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_4bed8c:
    // 0x4bed8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4bed8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4bed90:
    // 0x4bed90: 0x3e00008  jr          $ra
label_4bed94:
    if (ctx->pc == 0x4BED94u) {
        ctx->pc = 0x4BED98u;
        goto label_4bed98;
    }
    ctx->pc = 0x4BED90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BED98u;
label_4bed98:
    // 0x4bed98: 0x0  nop
    ctx->pc = 0x4bed98u;
    // NOP
label_4bed9c:
    // 0x4bed9c: 0x0  nop
    ctx->pc = 0x4bed9cu;
    // NOP
label_4beda0:
    // 0x4beda0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4beda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4beda4:
    // 0x4beda4: 0x8c430e80  lw          $v1, 0xE80($v0)
    ctx->pc = 0x4beda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4beda8:
    // 0x4beda8: 0x8c630968  lw          $v1, 0x968($v1)
    ctx->pc = 0x4beda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
label_4bedac:
    // 0x4bedac: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4bedacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4bedb0:
    // 0x4bedb0: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_4bedb4:
    if (ctx->pc == 0x4BEDB4u) {
        ctx->pc = 0x4BEDB4u;
            // 0x4bedb4: 0x8c830040  lw          $v1, 0x40($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
        ctx->pc = 0x4BEDB8u;
        goto label_4bedb8;
    }
    ctx->pc = 0x4BEDB0u;
    {
        const bool branch_taken_0x4bedb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4bedb0) {
            ctx->pc = 0x4BEDB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEDB0u;
            // 0x4bedb4: 0x8c830040  lw          $v1, 0x40($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BEDC0u;
            goto label_4bedc0;
        }
    }
    ctx->pc = 0x4BEDB8u;
label_4bedb8:
    // 0x4bedb8: 0x10000011  b           . + 4 + (0x11 << 2)
label_4bedbc:
    if (ctx->pc == 0x4BEDBCu) {
        ctx->pc = 0x4BEDBCu;
            // 0x4bedbc: 0x3c023ecc  lui         $v0, 0x3ECC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
        ctx->pc = 0x4BEDC0u;
        goto label_4bedc0;
    }
    ctx->pc = 0x4BEDB8u;
    {
        const bool branch_taken_0x4bedb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BEDBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEDB8u;
            // 0x4bedbc: 0x3c023ecc  lui         $v0, 0x3ECC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bedb8) {
            ctx->pc = 0x4BEE00u;
            goto label_4bee00;
        }
    }
    ctx->pc = 0x4BEDC0u;
label_4bedc0:
    // 0x4bedc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4bedc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4bedc4:
    // 0x4bedc4: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
label_4bedc8:
    if (ctx->pc == 0x4BEDC8u) {
        ctx->pc = 0x4BEDC8u;
            // 0x4bedc8: 0x3c023dcc  lui         $v0, 0x3DCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
        ctx->pc = 0x4BEDCCu;
        goto label_4bedcc;
    }
    ctx->pc = 0x4BEDC4u;
    {
        const bool branch_taken_0x4bedc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4bedc4) {
            ctx->pc = 0x4BEDC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEDC4u;
            // 0x4bedc8: 0x3c023dcc  lui         $v0, 0x3DCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BEDECu;
            goto label_4bedec;
        }
    }
    ctx->pc = 0x4BEDCCu;
label_4bedcc:
    // 0x4bedcc: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_4bedd0:
    if (ctx->pc == 0x4BEDD0u) {
        ctx->pc = 0x4BEDD0u;
            // 0x4bedd0: 0x3c023ecc  lui         $v0, 0x3ECC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
        ctx->pc = 0x4BEDD4u;
        goto label_4bedd4;
    }
    ctx->pc = 0x4BEDCCu;
    {
        const bool branch_taken_0x4bedcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bedcc) {
            ctx->pc = 0x4BEDD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEDCCu;
            // 0x4bedd0: 0x3c023ecc  lui         $v0, 0x3ECC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BEDDCu;
            goto label_4beddc;
        }
    }
    ctx->pc = 0x4BEDD4u;
label_4bedd4:
    // 0x4bedd4: 0x10000009  b           . + 4 + (0x9 << 2)
label_4bedd8:
    if (ctx->pc == 0x4BEDD8u) {
        ctx->pc = 0x4BEDDCu;
        goto label_4beddc;
    }
    ctx->pc = 0x4BEDD4u;
    {
        const bool branch_taken_0x4bedd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bedd4) {
            ctx->pc = 0x4BEDFCu;
            goto label_4bedfc;
        }
    }
    ctx->pc = 0x4BEDDCu;
label_4beddc:
    // 0x4beddc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4beddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4bede0:
    // 0x4bede0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4bede0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4bede4:
    // 0x4bede4: 0x10000008  b           . + 4 + (0x8 << 2)
label_4bede8:
    if (ctx->pc == 0x4BEDE8u) {
        ctx->pc = 0x4BEDECu;
        goto label_4bedec;
    }
    ctx->pc = 0x4BEDE4u;
    {
        const bool branch_taken_0x4bede4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bede4) {
            ctx->pc = 0x4BEE08u;
            goto label_4bee08;
        }
    }
    ctx->pc = 0x4BEDECu;
label_4bedec:
    // 0x4bedec: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4bedecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4bedf0:
    // 0x4bedf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4bedf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4bedf4:
    // 0x4bedf4: 0x10000004  b           . + 4 + (0x4 << 2)
label_4bedf8:
    if (ctx->pc == 0x4BEDF8u) {
        ctx->pc = 0x4BEDFCu;
        goto label_4bedfc;
    }
    ctx->pc = 0x4BEDF4u;
    {
        const bool branch_taken_0x4bedf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bedf4) {
            ctx->pc = 0x4BEE08u;
            goto label_4bee08;
        }
    }
    ctx->pc = 0x4BEDFCu;
label_4bedfc:
    // 0x4bedfc: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x4bedfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_4bee00:
    // 0x4bee00: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4bee00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4bee04:
    // 0x4bee04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4bee04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4bee08:
    // 0x4bee08: 0x3e00008  jr          $ra
label_4bee0c:
    if (ctx->pc == 0x4BEE0Cu) {
        ctx->pc = 0x4BEE10u;
        goto label_4bee10;
    }
    ctx->pc = 0x4BEE08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BEE10u;
label_4bee10:
    // 0x4bee10: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4bee10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4bee14:
    // 0x4bee14: 0x8c430e80  lw          $v1, 0xE80($v0)
    ctx->pc = 0x4bee14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4bee18:
    // 0x4bee18: 0x8c630968  lw          $v1, 0x968($v1)
    ctx->pc = 0x4bee18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
label_4bee1c:
    // 0x4bee1c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4bee1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4bee20:
    // 0x4bee20: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_4bee24:
    if (ctx->pc == 0x4BEE24u) {
        ctx->pc = 0x4BEE24u;
            // 0x4bee24: 0x8c830040  lw          $v1, 0x40($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
        ctx->pc = 0x4BEE28u;
        goto label_4bee28;
    }
    ctx->pc = 0x4BEE20u;
    {
        const bool branch_taken_0x4bee20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4bee20) {
            ctx->pc = 0x4BEE24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEE20u;
            // 0x4bee24: 0x8c830040  lw          $v1, 0x40($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BEE30u;
            goto label_4bee30;
        }
    }
    ctx->pc = 0x4BEE28u;
label_4bee28:
    // 0x4bee28: 0x1000000e  b           . + 4 + (0xE << 2)
label_4bee2c:
    if (ctx->pc == 0x4BEE2Cu) {
        ctx->pc = 0x4BEE30u;
        goto label_4bee30;
    }
    ctx->pc = 0x4BEE28u;
    {
        const bool branch_taken_0x4bee28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bee28) {
            ctx->pc = 0x4BEE64u;
            goto label_4bee64;
        }
    }
    ctx->pc = 0x4BEE30u;
label_4bee30:
    // 0x4bee30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4bee30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4bee34:
    // 0x4bee34: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_4bee38:
    if (ctx->pc == 0x4BEE38u) {
        ctx->pc = 0x4BEE3Cu;
        goto label_4bee3c;
    }
    ctx->pc = 0x4BEE34u;
    {
        const bool branch_taken_0x4bee34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4bee34) {
            ctx->pc = 0x4BEE58u;
            goto label_4bee58;
        }
    }
    ctx->pc = 0x4BEE3Cu;
label_4bee3c:
    // 0x4bee3c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_4bee40:
    if (ctx->pc == 0x4BEE40u) {
        ctx->pc = 0x4BEE44u;
        goto label_4bee44;
    }
    ctx->pc = 0x4BEE3Cu;
    {
        const bool branch_taken_0x4bee3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bee3c) {
            ctx->pc = 0x4BEE4Cu;
            goto label_4bee4c;
        }
    }
    ctx->pc = 0x4BEE44u;
label_4bee44:
    // 0x4bee44: 0x10000007  b           . + 4 + (0x7 << 2)
label_4bee48:
    if (ctx->pc == 0x4BEE48u) {
        ctx->pc = 0x4BEE4Cu;
        goto label_4bee4c;
    }
    ctx->pc = 0x4BEE44u;
    {
        const bool branch_taken_0x4bee44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bee44) {
            ctx->pc = 0x4BEE64u;
            goto label_4bee64;
        }
    }
    ctx->pc = 0x4BEE4Cu;
label_4bee4c:
    // 0x4bee4c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x4bee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_4bee50:
    // 0x4bee50: 0x10000006  b           . + 4 + (0x6 << 2)
label_4bee54:
    if (ctx->pc == 0x4BEE54u) {
        ctx->pc = 0x4BEE54u;
            // 0x4bee54: 0xc440c910  lwc1        $f0, -0x36F0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x4BEE58u;
        goto label_4bee58;
    }
    ctx->pc = 0x4BEE50u;
    {
        const bool branch_taken_0x4bee50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BEE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEE50u;
            // 0x4bee54: 0xc440c910  lwc1        $f0, -0x36F0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bee50) {
            ctx->pc = 0x4BEE6Cu;
            goto label_4bee6c;
        }
    }
    ctx->pc = 0x4BEE58u;
label_4bee58:
    // 0x4bee58: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x4bee58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_4bee5c:
    // 0x4bee5c: 0x10000003  b           . + 4 + (0x3 << 2)
label_4bee60:
    if (ctx->pc == 0x4BEE60u) {
        ctx->pc = 0x4BEE60u;
            // 0x4bee60: 0xc440c910  lwc1        $f0, -0x36F0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x4BEE64u;
        goto label_4bee64;
    }
    ctx->pc = 0x4BEE5Cu;
    {
        const bool branch_taken_0x4bee5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BEE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEE5Cu;
            // 0x4bee60: 0xc440c910  lwc1        $f0, -0x36F0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bee5c) {
            ctx->pc = 0x4BEE6Cu;
            goto label_4bee6c;
        }
    }
    ctx->pc = 0x4BEE64u;
label_4bee64:
    // 0x4bee64: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x4bee64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_4bee68:
    // 0x4bee68: 0xc440c910  lwc1        $f0, -0x36F0($v0)
    ctx->pc = 0x4bee68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bee6c:
    // 0x4bee6c: 0x3e00008  jr          $ra
label_4bee70:
    if (ctx->pc == 0x4BEE70u) {
        ctx->pc = 0x4BEE74u;
        goto label_4bee74;
    }
    ctx->pc = 0x4BEE6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BEE74u;
label_4bee74:
    // 0x4bee74: 0x0  nop
    ctx->pc = 0x4bee74u;
    // NOP
label_4bee78:
    // 0x4bee78: 0x0  nop
    ctx->pc = 0x4bee78u;
    // NOP
label_4bee7c:
    // 0x4bee7c: 0x0  nop
    ctx->pc = 0x4bee7cu;
    // NOP
label_4bee80:
    // 0x4bee80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4bee80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_4bee84:
    // 0x4bee84: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4bee84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4bee88:
    // 0x4bee88: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4bee88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4bee8c:
    // 0x4bee8c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x4bee8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4bee90:
    // 0x4bee90: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4bee90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4bee94:
    // 0x4bee94: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4bee94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4bee98:
    // 0x4bee98: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4bee98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4bee9c:
    // 0x4bee9c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4bee9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4beea0:
    // 0x4beea0: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4beea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4beea4:
    // 0x4beea4: 0x8c450968  lw          $a1, 0x968($v0)
    ctx->pc = 0x4beea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
label_4beea8:
    // 0x4beea8: 0x50a3000b  beql        $a1, $v1, . + 4 + (0xB << 2)
label_4beeac:
    if (ctx->pc == 0x4BEEACu) {
        ctx->pc = 0x4BEEACu;
            // 0x4beeac: 0x8c830040  lw          $v1, 0x40($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
        ctx->pc = 0x4BEEB0u;
        goto label_4beeb0;
    }
    ctx->pc = 0x4BEEA8u;
    {
        const bool branch_taken_0x4beea8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4beea8) {
            ctx->pc = 0x4BEEACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEEA8u;
            // 0x4beeac: 0x8c830040  lw          $v1, 0x40($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BEED8u;
            goto label_4beed8;
        }
    }
    ctx->pc = 0x4BEEB0u;
label_4beeb0:
    // 0x4beeb0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x4beeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4beeb4:
    // 0x4beeb4: 0x50a20003  beql        $a1, $v0, . + 4 + (0x3 << 2)
label_4beeb8:
    if (ctx->pc == 0x4BEEB8u) {
        ctx->pc = 0x4BEEB8u;
            // 0x4beeb8: 0x3c034040  lui         $v1, 0x4040 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
        ctx->pc = 0x4BEEBCu;
        goto label_4beebc;
    }
    ctx->pc = 0x4BEEB4u;
    {
        const bool branch_taken_0x4beeb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x4beeb4) {
            ctx->pc = 0x4BEEB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEEB4u;
            // 0x4beeb8: 0x3c034040  lui         $v1, 0x4040 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BEEC4u;
            goto label_4beec4;
        }
    }
    ctx->pc = 0x4BEEBCu;
label_4beebc:
    // 0x4beebc: 0x1000001f  b           . + 4 + (0x1F << 2)
label_4beec0:
    if (ctx->pc == 0x4BEEC0u) {
        ctx->pc = 0x4BEEC0u;
            // 0x4beec0: 0x24850030  addiu       $a1, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->pc = 0x4BEEC4u;
        goto label_4beec4;
    }
    ctx->pc = 0x4BEEBCu;
    {
        const bool branch_taken_0x4beebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BEEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEEBCu;
            // 0x4beec0: 0x24850030  addiu       $a1, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4beebc) {
            ctx->pc = 0x4BEF3Cu;
            goto label_4bef3c;
        }
    }
    ctx->pc = 0x4BEEC4u;
label_4beec4:
    // 0x4beec4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x4beec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_4beec8:
    // 0x4beec8: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x4beec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_4beecc:
    // 0x4beecc: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x4beeccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
label_4beed0:
    // 0x4beed0: 0x1000001c  b           . + 4 + (0x1C << 2)
label_4beed4:
    if (ctx->pc == 0x4BEED4u) {
        ctx->pc = 0x4BEED4u;
            // 0x4beed4: 0xafa30068  sw          $v1, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
        ctx->pc = 0x4BEED8u;
        goto label_4beed8;
    }
    ctx->pc = 0x4BEED0u;
    {
        const bool branch_taken_0x4beed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BEED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEED0u;
            // 0x4beed4: 0xafa30068  sw          $v1, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4beed0) {
            ctx->pc = 0x4BEF44u;
            goto label_4bef44;
        }
    }
    ctx->pc = 0x4BEED8u;
label_4beed8:
    // 0x4beed8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4beed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4beedc:
    // 0x4beedc: 0x54620013  bnel        $v1, $v0, . + 4 + (0x13 << 2)
label_4beee0:
    if (ctx->pc == 0x4BEEE0u) {
        ctx->pc = 0x4BEEE0u;
            // 0x4beee0: 0x24850030  addiu       $a1, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->pc = 0x4BEEE4u;
        goto label_4beee4;
    }
    ctx->pc = 0x4BEEDCu;
    {
        const bool branch_taken_0x4beedc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4beedc) {
            ctx->pc = 0x4BEEE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEEDCu;
            // 0x4beee0: 0x24850030  addiu       $a1, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BEF2Cu;
            goto label_4bef2c;
        }
    }
    ctx->pc = 0x4BEEE4u;
label_4beee4:
    // 0x4beee4: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x4beee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
label_4beee8:
    // 0x4beee8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4beee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4beeec:
    // 0x4beeec: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x4beeecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_4beef0:
    // 0x4beef0: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x4beef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_4beef4:
    // 0x4beef4: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x4beef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
label_4beef8:
    // 0x4beef8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x4beef8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4beefc:
    // 0x4beefc: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x4beefcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
label_4bef00:
    // 0x4bef00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4bef00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4bef04:
    // 0x4bef04: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x4bef04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bef08:
    // 0x4bef08: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x4bef08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_4bef0c:
    // 0x4bef0c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x4bef0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_4bef10:
    // 0x4bef10: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x4bef10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bef14:
    // 0x4bef14: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4bef14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4bef18:
    // 0x4bef18: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x4bef18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_4bef1c:
    // 0x4bef1c: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x4bef1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bef20:
    // 0x4bef20: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x4bef20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_4bef24:
    // 0x4bef24: 0x10000007  b           . + 4 + (0x7 << 2)
label_4bef28:
    if (ctx->pc == 0x4BEF28u) {
        ctx->pc = 0x4BEF28u;
            // 0x4bef28: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->pc = 0x4BEF2Cu;
        goto label_4bef2c;
    }
    ctx->pc = 0x4BEF24u;
    {
        const bool branch_taken_0x4bef24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BEF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEF24u;
            // 0x4bef28: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bef24) {
            ctx->pc = 0x4BEF44u;
            goto label_4bef44;
        }
    }
    ctx->pc = 0x4BEF2Cu;
label_4bef2c:
    // 0x4bef2c: 0xc04cb1c  jal         func_132C70
label_4bef30:
    if (ctx->pc == 0x4BEF30u) {
        ctx->pc = 0x4BEF30u;
            // 0x4bef30: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4BEF34u;
        goto label_4bef34;
    }
    ctx->pc = 0x4BEF2Cu;
    SET_GPR_U32(ctx, 31, 0x4BEF34u);
    ctx->pc = 0x4BEF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEF2Cu;
            // 0x4bef30: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BEF34u; }
        if (ctx->pc != 0x4BEF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BEF34u; }
        if (ctx->pc != 0x4BEF34u) { return; }
    }
    ctx->pc = 0x4BEF34u;
label_4bef34:
    // 0x4bef34: 0x10000003  b           . + 4 + (0x3 << 2)
label_4bef38:
    if (ctx->pc == 0x4BEF38u) {
        ctx->pc = 0x4BEF3Cu;
        goto label_4bef3c;
    }
    ctx->pc = 0x4BEF34u;
    {
        const bool branch_taken_0x4bef34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bef34) {
            ctx->pc = 0x4BEF44u;
            goto label_4bef44;
        }
    }
    ctx->pc = 0x4BEF3Cu;
label_4bef3c:
    // 0x4bef3c: 0xc04cb1c  jal         func_132C70
label_4bef40:
    if (ctx->pc == 0x4BEF40u) {
        ctx->pc = 0x4BEF40u;
            // 0x4bef40: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4BEF44u;
        goto label_4bef44;
    }
    ctx->pc = 0x4BEF3Cu;
    SET_GPR_U32(ctx, 31, 0x4BEF44u);
    ctx->pc = 0x4BEF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEF3Cu;
            // 0x4bef40: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BEF44u; }
        if (ctx->pc != 0x4BEF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BEF44u; }
        if (ctx->pc != 0x4BEF44u) { return; }
    }
    ctx->pc = 0x4BEF44u;
label_4bef44:
    // 0x4bef44: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4bef44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4bef48:
    // 0x4bef48: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x4bef48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4bef4c:
    // 0x4bef4c: 0x8c500dd8  lw          $s0, 0xDD8($v0)
    ctx->pc = 0x4bef4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3544)));
label_4bef50:
    // 0x4bef50: 0xc0d46b8  jal         func_351AE0
label_4bef54:
    if (ctx->pc == 0x4BEF54u) {
        ctx->pc = 0x4BEF54u;
            // 0x4bef54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BEF58u;
        goto label_4bef58;
    }
    ctx->pc = 0x4BEF50u;
    SET_GPR_U32(ctx, 31, 0x4BEF58u);
    ctx->pc = 0x4BEF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEF50u;
            // 0x4bef54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x351AE0u;
    if (runtime->hasFunction(0x351AE0u)) {
        auto targetFn = runtime->lookupFunction(0x351AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BEF58u; }
        if (ctx->pc != 0x4BEF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351AE0_0x351ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BEF58u; }
        if (ctx->pc != 0x4BEF58u) { return; }
    }
    ctx->pc = 0x4BEF58u;
label_4bef58:
    // 0x4bef58: 0x5440004e  bnel        $v0, $zero, . + 4 + (0x4E << 2)
label_4bef5c:
    if (ctx->pc == 0x4BEF5Cu) {
        ctx->pc = 0x4BEF5Cu;
            // 0x4bef5c: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->pc = 0x4BEF60u;
        goto label_4bef60;
    }
    ctx->pc = 0x4BEF58u;
    {
        const bool branch_taken_0x4bef58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bef58) {
            ctx->pc = 0x4BEF5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEF58u;
            // 0x4bef5c: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BF094u;
            goto label_4bf094;
        }
    }
    ctx->pc = 0x4BEF60u;
label_4bef60:
    // 0x4bef60: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4bef60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4bef64:
    // 0x4bef64: 0xc0d46b0  jal         func_351AC0
label_4bef68:
    if (ctx->pc == 0x4BEF68u) {
        ctx->pc = 0x4BEF68u;
            // 0x4bef68: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4BEF6Cu;
        goto label_4bef6c;
    }
    ctx->pc = 0x4BEF64u;
    SET_GPR_U32(ctx, 31, 0x4BEF6Cu);
    ctx->pc = 0x4BEF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEF64u;
            // 0x4bef68: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x351AC0u;
    if (runtime->hasFunction(0x351AC0u)) {
        auto targetFn = runtime->lookupFunction(0x351AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BEF6Cu; }
        if (ctx->pc != 0x4BEF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351AC0_0x351ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BEF6Cu; }
        if (ctx->pc != 0x4BEF6Cu) { return; }
    }
    ctx->pc = 0x4BEF6Cu;
label_4bef6c:
    // 0x4bef6c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x4bef6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bef70:
    // 0x4bef70: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4bef70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4bef74:
    // 0x4bef74: 0x0  nop
    ctx->pc = 0x4bef74u;
    // NOP
label_4bef78:
    // 0x4bef78: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x4bef78u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4bef7c:
    // 0x4bef7c: 0x4503001d  bc1tl       . + 4 + (0x1D << 2)
label_4bef80:
    if (ctx->pc == 0x4BEF80u) {
        ctx->pc = 0x4BEF80u;
            // 0x4bef80: 0xc7ac0060  lwc1        $f12, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x4BEF84u;
        goto label_4bef84;
    }
    ctx->pc = 0x4BEF7Cu;
    {
        const bool branch_taken_0x4bef7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4bef7c) {
            ctx->pc = 0x4BEF80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEF7Cu;
            // 0x4bef80: 0xc7ac0060  lwc1        $f12, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BEFF4u;
            goto label_4beff4;
        }
    }
    ctx->pc = 0x4BEF84u;
label_4bef84:
    // 0x4bef84: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x4bef84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bef88:
    // 0x4bef88: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x4bef88u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4bef8c:
    // 0x4bef8c: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_4bef90:
    if (ctx->pc == 0x4BEF90u) {
        ctx->pc = 0x4BEF90u;
            // 0x4bef90: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x4BEF94u;
        goto label_4bef94;
    }
    ctx->pc = 0x4BEF8Cu;
    {
        const bool branch_taken_0x4bef8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4bef8c) {
            ctx->pc = 0x4BEF90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEF8Cu;
            // 0x4bef90: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BEFA8u;
            goto label_4befa8;
        }
    }
    ctx->pc = 0x4BEF94u;
label_4bef94:
    // 0x4bef94: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x4bef94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bef98:
    // 0x4bef98: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x4bef98u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4bef9c:
    // 0x4bef9c: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_4befa0:
    if (ctx->pc == 0x4BEFA0u) {
        ctx->pc = 0x4BEFA4u;
        goto label_4befa4;
    }
    ctx->pc = 0x4BEF9Cu;
    {
        const bool branch_taken_0x4bef9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4bef9c) {
            ctx->pc = 0x4BEFF0u;
            goto label_4beff0;
        }
    }
    ctx->pc = 0x4BEFA4u;
label_4befa4:
    // 0x4befa4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x4befa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_4befa8:
    // 0x4befa8: 0xc0d46a0  jal         func_351A80
label_4befac:
    if (ctx->pc == 0x4BEFACu) {
        ctx->pc = 0x4BEFB0u;
        goto label_4befb0;
    }
    ctx->pc = 0x4BEFA8u;
    SET_GPR_U32(ctx, 31, 0x4BEFB0u);
    ctx->pc = 0x351A80u;
    if (runtime->hasFunction(0x351A80u)) {
        auto targetFn = runtime->lookupFunction(0x351A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BEFB0u; }
        if (ctx->pc != 0x4BEFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351A80_0x351a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BEFB0u; }
        if (ctx->pc != 0x4BEFB0u) { return; }
    }
    ctx->pc = 0x4BEFB0u;
label_4befb0:
    // 0x4befb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4befb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4befb4:
    // 0x4befb4: 0x52200033  beql        $s1, $zero, . + 4 + (0x33 << 2)
label_4befb8:
    if (ctx->pc == 0x4BEFB8u) {
        ctx->pc = 0x4BEFB8u;
            // 0x4befb8: 0xafb1005c  sw          $s1, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 17));
        ctx->pc = 0x4BEFBCu;
        goto label_4befbc;
    }
    ctx->pc = 0x4BEFB4u;
    {
        const bool branch_taken_0x4befb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4befb4) {
            ctx->pc = 0x4BEFB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEFB4u;
            // 0x4befb8: 0xafb1005c  sw          $s1, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BF084u;
            goto label_4bf084;
        }
    }
    ctx->pc = 0x4BEFBCu;
label_4befbc:
    // 0x4befbc: 0xc049514  jal         func_125450
label_4befc0:
    if (ctx->pc == 0x4BEFC0u) {
        ctx->pc = 0x4BEFC0u;
            // 0x4befc0: 0xc7ac0060  lwc1        $f12, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x4BEFC4u;
        goto label_4befc4;
    }
    ctx->pc = 0x4BEFBCu;
    SET_GPR_U32(ctx, 31, 0x4BEFC4u);
    ctx->pc = 0x4BEFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEFBCu;
            // 0x4befc0: 0xc7ac0060  lwc1        $f12, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BEFC4u; }
        if (ctx->pc != 0x4BEFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BEFC4u; }
        if (ctx->pc != 0x4BEFC4u) { return; }
    }
    ctx->pc = 0x4BEFC4u;
label_4befc4:
    // 0x4befc4: 0xc0474b6  jal         func_11D2D8
label_4befc8:
    if (ctx->pc == 0x4BEFC8u) {
        ctx->pc = 0x4BEFC8u;
            // 0x4befc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BEFCCu;
        goto label_4befcc;
    }
    ctx->pc = 0x4BEFC4u;
    SET_GPR_U32(ctx, 31, 0x4BEFCCu);
    ctx->pc = 0x4BEFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEFC4u;
            // 0x4befc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BEFCCu; }
        if (ctx->pc != 0x4BEFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BEFCCu; }
        if (ctx->pc != 0x4BEFCCu) { return; }
    }
    ctx->pc = 0x4BEFCCu;
label_4befcc:
    // 0x4befcc: 0xc0497dc  jal         func_125F70
label_4befd0:
    if (ctx->pc == 0x4BEFD0u) {
        ctx->pc = 0x4BEFD0u;
            // 0x4befd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BEFD4u;
        goto label_4befd4;
    }
    ctx->pc = 0x4BEFCCu;
    SET_GPR_U32(ctx, 31, 0x4BEFD4u);
    ctx->pc = 0x4BEFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEFCCu;
            // 0x4befd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BEFD4u; }
        if (ctx->pc != 0x4BEFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BEFD4u; }
        if (ctx->pc != 0x4BEFD4u) { return; }
    }
    ctx->pc = 0x4BEFD4u;
label_4befd4:
    // 0x4befd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4befd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4befd8:
    // 0x4befd8: 0xc0827ac  jal         func_209EB0
label_4befdc:
    if (ctx->pc == 0x4BEFDCu) {
        ctx->pc = 0x4BEFDCu;
            // 0x4befdc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x4BEFE0u;
        goto label_4befe0;
    }
    ctx->pc = 0x4BEFD8u;
    SET_GPR_U32(ctx, 31, 0x4BEFE0u);
    ctx->pc = 0x4BEFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEFD8u;
            // 0x4befdc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BEFE0u; }
        if (ctx->pc != 0x4BEFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BEFE0u; }
        if (ctx->pc != 0x4BEFE0u) { return; }
    }
    ctx->pc = 0x4BEFE0u;
label_4befe0:
    // 0x4befe0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4befe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4befe4:
    // 0x4befe4: 0xafb1005c  sw          $s1, 0x5C($sp)
    ctx->pc = 0x4befe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 17));
label_4befe8:
    // 0x4befe8: 0x10000026  b           . + 4 + (0x26 << 2)
label_4befec:
    if (ctx->pc == 0x4BEFECu) {
        ctx->pc = 0x4BEFF0u;
        goto label_4beff0;
    }
    ctx->pc = 0x4BEFE8u;
    {
        const bool branch_taken_0x4befe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4befe8) {
            ctx->pc = 0x4BF084u;
            goto label_4bf084;
        }
    }
    ctx->pc = 0x4BEFF0u;
label_4beff0:
    // 0x4beff0: 0xc7ac0060  lwc1        $f12, 0x60($sp)
    ctx->pc = 0x4beff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4beff4:
    // 0x4beff4: 0xc049514  jal         func_125450
label_4beff8:
    if (ctx->pc == 0x4BEFF8u) {
        ctx->pc = 0x4BEFFCu;
        goto label_4beffc;
    }
    ctx->pc = 0x4BEFF4u;
    SET_GPR_U32(ctx, 31, 0x4BEFFCu);
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BEFFCu; }
        if (ctx->pc != 0x4BEFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BEFFCu; }
        if (ctx->pc != 0x4BEFFCu) { return; }
    }
    ctx->pc = 0x4BEFFCu;
label_4beffc:
    // 0x4beffc: 0xc0474b6  jal         func_11D2D8
label_4bf000:
    if (ctx->pc == 0x4BF000u) {
        ctx->pc = 0x4BF000u;
            // 0x4bf000: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BF004u;
        goto label_4bf004;
    }
    ctx->pc = 0x4BEFFCu;
    SET_GPR_U32(ctx, 31, 0x4BF004u);
    ctx->pc = 0x4BF000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BEFFCu;
            // 0x4bf000: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF004u; }
        if (ctx->pc != 0x4BF004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF004u; }
        if (ctx->pc != 0x4BF004u) { return; }
    }
    ctx->pc = 0x4BF004u;
label_4bf004:
    // 0x4bf004: 0xc0497dc  jal         func_125F70
label_4bf008:
    if (ctx->pc == 0x4BF008u) {
        ctx->pc = 0x4BF008u;
            // 0x4bf008: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BF00Cu;
        goto label_4bf00c;
    }
    ctx->pc = 0x4BF004u;
    SET_GPR_U32(ctx, 31, 0x4BF00Cu);
    ctx->pc = 0x4BF008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF004u;
            // 0x4bf008: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF00Cu; }
        if (ctx->pc != 0x4BF00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF00Cu; }
        if (ctx->pc != 0x4BF00Cu) { return; }
    }
    ctx->pc = 0x4BF00Cu;
label_4bf00c:
    // 0x4bf00c: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x4bf00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4bf010:
    // 0x4bf010: 0xc049514  jal         func_125450
label_4bf014:
    if (ctx->pc == 0x4BF014u) {
        ctx->pc = 0x4BF014u;
            // 0x4bf014: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x4BF018u;
        goto label_4bf018;
    }
    ctx->pc = 0x4BF010u;
    SET_GPR_U32(ctx, 31, 0x4BF018u);
    ctx->pc = 0x4BF014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF010u;
            // 0x4bf014: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF018u; }
        if (ctx->pc != 0x4BF018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF018u; }
        if (ctx->pc != 0x4BF018u) { return; }
    }
    ctx->pc = 0x4BF018u;
label_4bf018:
    // 0x4bf018: 0xc0474b6  jal         func_11D2D8
label_4bf01c:
    if (ctx->pc == 0x4BF01Cu) {
        ctx->pc = 0x4BF01Cu;
            // 0x4bf01c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BF020u;
        goto label_4bf020;
    }
    ctx->pc = 0x4BF018u;
    SET_GPR_U32(ctx, 31, 0x4BF020u);
    ctx->pc = 0x4BF01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF018u;
            // 0x4bf01c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF020u; }
        if (ctx->pc != 0x4BF020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF020u; }
        if (ctx->pc != 0x4BF020u) { return; }
    }
    ctx->pc = 0x4BF020u;
label_4bf020:
    // 0x4bf020: 0xc0497dc  jal         func_125F70
label_4bf024:
    if (ctx->pc == 0x4BF024u) {
        ctx->pc = 0x4BF024u;
            // 0x4bf024: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BF028u;
        goto label_4bf028;
    }
    ctx->pc = 0x4BF020u;
    SET_GPR_U32(ctx, 31, 0x4BF028u);
    ctx->pc = 0x4BF024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF020u;
            // 0x4bf024: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF028u; }
        if (ctx->pc != 0x4BF028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF028u; }
        if (ctx->pc != 0x4BF028u) { return; }
    }
    ctx->pc = 0x4BF028u;
label_4bf028:
    // 0x4bf028: 0xc7ac0068  lwc1        $f12, 0x68($sp)
    ctx->pc = 0x4bf028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4bf02c:
    // 0x4bf02c: 0xc049514  jal         func_125450
label_4bf030:
    if (ctx->pc == 0x4BF030u) {
        ctx->pc = 0x4BF030u;
            // 0x4bf030: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x4BF034u;
        goto label_4bf034;
    }
    ctx->pc = 0x4BF02Cu;
    SET_GPR_U32(ctx, 31, 0x4BF034u);
    ctx->pc = 0x4BF030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF02Cu;
            // 0x4bf030: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF034u; }
        if (ctx->pc != 0x4BF034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF034u; }
        if (ctx->pc != 0x4BF034u) { return; }
    }
    ctx->pc = 0x4BF034u;
label_4bf034:
    // 0x4bf034: 0xc0474b6  jal         func_11D2D8
label_4bf038:
    if (ctx->pc == 0x4BF038u) {
        ctx->pc = 0x4BF038u;
            // 0x4bf038: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BF03Cu;
        goto label_4bf03c;
    }
    ctx->pc = 0x4BF034u;
    SET_GPR_U32(ctx, 31, 0x4BF03Cu);
    ctx->pc = 0x4BF038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF034u;
            // 0x4bf038: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF03Cu; }
        if (ctx->pc != 0x4BF03Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF03Cu; }
        if (ctx->pc != 0x4BF03Cu) { return; }
    }
    ctx->pc = 0x4BF03Cu;
label_4bf03c:
    // 0x4bf03c: 0xc0497dc  jal         func_125F70
label_4bf040:
    if (ctx->pc == 0x4BF040u) {
        ctx->pc = 0x4BF040u;
            // 0x4bf040: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BF044u;
        goto label_4bf044;
    }
    ctx->pc = 0x4BF03Cu;
    SET_GPR_U32(ctx, 31, 0x4BF044u);
    ctx->pc = 0x4BF040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF03Cu;
            // 0x4bf040: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF044u; }
        if (ctx->pc != 0x4BF044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF044u; }
        if (ctx->pc != 0x4BF044u) { return; }
    }
    ctx->pc = 0x4BF044u;
label_4bf044:
    // 0x4bf044: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x4bf044u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_4bf048:
    // 0x4bf048: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4bf048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4bf04c:
    // 0x4bf04c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x4bf04cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_4bf050:
    // 0x4bf050: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x4bf050u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_4bf054:
    // 0x4bf054: 0xc0b6df0  jal         func_2DB7C0
label_4bf058:
    if (ctx->pc == 0x4BF058u) {
        ctx->pc = 0x4BF058u;
            // 0x4bf058: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x4BF05Cu;
        goto label_4bf05c;
    }
    ctx->pc = 0x4BF054u;
    SET_GPR_U32(ctx, 31, 0x4BF05Cu);
    ctx->pc = 0x4BF058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF054u;
            // 0x4bf058: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF05Cu; }
        if (ctx->pc != 0x4BF05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF05Cu; }
        if (ctx->pc != 0x4BF05Cu) { return; }
    }
    ctx->pc = 0x4BF05Cu;
label_4bf05c:
    // 0x4bf05c: 0xc0d46a0  jal         func_351A80
label_4bf060:
    if (ctx->pc == 0x4BF060u) {
        ctx->pc = 0x4BF060u;
            // 0x4bf060: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x4BF064u;
        goto label_4bf064;
    }
    ctx->pc = 0x4BF05Cu;
    SET_GPR_U32(ctx, 31, 0x4BF064u);
    ctx->pc = 0x4BF060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF05Cu;
            // 0x4bf060: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x351A80u;
    if (runtime->hasFunction(0x351A80u)) {
        auto targetFn = runtime->lookupFunction(0x351A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF064u; }
        if (ctx->pc != 0x4BF064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351A80_0x351a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF064u; }
        if (ctx->pc != 0x4BF064u) { return; }
    }
    ctx->pc = 0x4BF064u;
label_4bf064:
    // 0x4bf064: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_4bf068:
    if (ctx->pc == 0x4BF068u) {
        ctx->pc = 0x4BF068u;
            // 0x4bf068: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->pc = 0x4BF06Cu;
        goto label_4bf06c;
    }
    ctx->pc = 0x4BF064u;
    {
        const bool branch_taken_0x4bf064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bf064) {
            ctx->pc = 0x4BF068u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF064u;
            // 0x4bf068: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BF084u;
            goto label_4bf084;
        }
    }
    ctx->pc = 0x4BF06Cu;
label_4bf06c:
    // 0x4bf06c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4bf06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4bf070:
    // 0x4bf070: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x4bf070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_4bf074:
    // 0x4bf074: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x4bf074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4bf078:
    // 0x4bf078: 0xc0804bc  jal         func_2012F0
label_4bf07c:
    if (ctx->pc == 0x4BF07Cu) {
        ctx->pc = 0x4BF07Cu;
            // 0x4bf07c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4BF080u;
        goto label_4bf080;
    }
    ctx->pc = 0x4BF078u;
    SET_GPR_U32(ctx, 31, 0x4BF080u);
    ctx->pc = 0x4BF07Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF078u;
            // 0x4bf07c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF080u; }
        if (ctx->pc != 0x4BF080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF080u; }
        if (ctx->pc != 0x4BF080u) { return; }
    }
    ctx->pc = 0x4BF080u;
label_4bf080:
    // 0x4bf080: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x4bf080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
label_4bf084:
    // 0x4bf084: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bf084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4bf088:
    // 0x4bf088: 0xc0d4698  jal         func_351A60
label_4bf08c:
    if (ctx->pc == 0x4BF08Cu) {
        ctx->pc = 0x4BF08Cu;
            // 0x4bf08c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4BF090u;
        goto label_4bf090;
    }
    ctx->pc = 0x4BF088u;
    SET_GPR_U32(ctx, 31, 0x4BF090u);
    ctx->pc = 0x4BF08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF088u;
            // 0x4bf08c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x351A60u;
    if (runtime->hasFunction(0x351A60u)) {
        auto targetFn = runtime->lookupFunction(0x351A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF090u; }
        if (ctx->pc != 0x4BF090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351A60_0x351a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF090u; }
        if (ctx->pc != 0x4BF090u) { return; }
    }
    ctx->pc = 0x4BF090u;
label_4bf090:
    // 0x4bf090: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x4bf090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_4bf094:
    // 0x4bf094: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4bf094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4bf098:
    // 0x4bf098: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4bf098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4bf09c:
    // 0x4bf09c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4bf09cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4bf0a0:
    // 0x4bf0a0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4bf0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4bf0a4:
    // 0x4bf0a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4bf0a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4bf0a8:
    // 0x4bf0a8: 0x3e00008  jr          $ra
label_4bf0ac:
    if (ctx->pc == 0x4BF0ACu) {
        ctx->pc = 0x4BF0ACu;
            // 0x4bf0ac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4BF0B0u;
        goto label_4bf0b0;
    }
    ctx->pc = 0x4BF0A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BF0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF0A8u;
            // 0x4bf0ac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BF0B0u;
label_4bf0b0:
    // 0x4bf0b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4bf0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4bf0b4:
    // 0x4bf0b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4bf0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4bf0b8:
    // 0x4bf0b8: 0x8c83009c  lw          $v1, 0x9C($a0)
    ctx->pc = 0x4bf0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_4bf0bc:
    // 0x4bf0bc: 0x54600015  bnel        $v1, $zero, . + 4 + (0x15 << 2)
label_4bf0c0:
    if (ctx->pc == 0x4BF0C0u) {
        ctx->pc = 0x4BF0C0u;
            // 0x4bf0c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x4BF0C4u;
        goto label_4bf0c4;
    }
    ctx->pc = 0x4BF0BCu;
    {
        const bool branch_taken_0x4bf0bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bf0bc) {
            ctx->pc = 0x4BF0C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF0BCu;
            // 0x4bf0c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BF114u;
            goto label_4bf114;
        }
    }
    ctx->pc = 0x4BF0C4u;
label_4bf0c4:
    // 0x4bf0c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4bf0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4bf0c8:
    // 0x4bf0c8: 0x8c850040  lw          $a1, 0x40($a0)
    ctx->pc = 0x4bf0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_4bf0cc:
    // 0x4bf0cc: 0x8c460dd8  lw          $a2, 0xDD8($v0)
    ctx->pc = 0x4bf0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3544)));
label_4bf0d0:
    // 0x4bf0d0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4bf0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4bf0d4:
    // 0x4bf0d4: 0x8c430e80  lw          $v1, 0xE80($v0)
    ctx->pc = 0x4bf0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4bf0d8:
    // 0x4bf0d8: 0x8c630968  lw          $v1, 0x968($v1)
    ctx->pc = 0x4bf0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
label_4bf0dc:
    // 0x4bf0dc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x4bf0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4bf0e0:
    // 0x4bf0e0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_4bf0e4:
    if (ctx->pc == 0x4BF0E4u) {
        ctx->pc = 0x4BF0E4u;
            // 0x4bf0e4: 0x24c70090  addiu       $a3, $a2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
        ctx->pc = 0x4BF0E8u;
        goto label_4bf0e8;
    }
    ctx->pc = 0x4BF0E0u;
    {
        const bool branch_taken_0x4bf0e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4BF0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF0E0u;
            // 0x4bf0e4: 0x24c70090  addiu       $a3, $a2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf0e0) {
            ctx->pc = 0x4BF0F0u;
            goto label_4bf0f0;
        }
    }
    ctx->pc = 0x4BF0E8u;
label_4bf0e8:
    // 0x4bf0e8: 0x10000002  b           . + 4 + (0x2 << 2)
label_4bf0ec:
    if (ctx->pc == 0x4BF0ECu) {
        ctx->pc = 0x4BF0ECu;
            // 0x4bf0ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4BF0F0u;
        goto label_4bf0f0;
    }
    ctx->pc = 0x4BF0E8u;
    {
        const bool branch_taken_0x4bf0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BF0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF0E8u;
            // 0x4bf0ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf0e8) {
            ctx->pc = 0x4BF0F4u;
            goto label_4bf0f4;
        }
    }
    ctx->pc = 0x4BF0F0u;
label_4bf0f0:
    // 0x4bf0f0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4bf0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4bf0f4:
    // 0x4bf0f4: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x4bf0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_4bf0f8:
    // 0x4bf0f8: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x4bf0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_4bf0fc:
    // 0x4bf0fc: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x4bf0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_4bf100:
    // 0x4bf100: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4bf100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4bf104:
    // 0x4bf104: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x4bf104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4bf108:
    // 0x4bf108: 0xc11a074  jal         func_4681D0
label_4bf10c:
    if (ctx->pc == 0x4BF10Cu) {
        ctx->pc = 0x4BF10Cu;
            // 0x4bf10c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4BF110u;
        goto label_4bf110;
    }
    ctx->pc = 0x4BF108u;
    SET_GPR_U32(ctx, 31, 0x4BF110u);
    ctx->pc = 0x4BF10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF108u;
            // 0x4bf10c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4681D0u;
    if (runtime->hasFunction(0x4681D0u)) {
        auto targetFn = runtime->lookupFunction(0x4681D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF110u; }
        if (ctx->pc != 0x4BF110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004681D0_0x4681d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF110u; }
        if (ctx->pc != 0x4BF110u) { return; }
    }
    ctx->pc = 0x4BF110u;
label_4bf110:
    // 0x4bf110: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4bf110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4bf114:
    // 0x4bf114: 0x3e00008  jr          $ra
label_4bf118:
    if (ctx->pc == 0x4BF118u) {
        ctx->pc = 0x4BF118u;
            // 0x4bf118: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x4BF11Cu;
        goto label_4bf11c;
    }
    ctx->pc = 0x4BF114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BF118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF114u;
            // 0x4bf118: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BF11Cu;
label_4bf11c:
    // 0x4bf11c: 0x0  nop
    ctx->pc = 0x4bf11cu;
    // NOP
label_4bf120:
    // 0x4bf120: 0x80b1224  j           func_2C4890
label_4bf124:
    if (ctx->pc == 0x4BF124u) {
        ctx->pc = 0x4BF124u;
            // 0x4bf124: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x4BF128u;
        goto label_4bf128;
    }
    ctx->pc = 0x4BF120u;
    ctx->pc = 0x4BF124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF120u;
            // 0x4bf124: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4890u;
    {
        auto targetFn = runtime->lookupFunction(0x2C4890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4BF128u;
label_4bf128:
    // 0x4bf128: 0x0  nop
    ctx->pc = 0x4bf128u;
    // NOP
label_4bf12c:
    // 0x4bf12c: 0x0  nop
    ctx->pc = 0x4bf12cu;
    // NOP
label_4bf130:
    // 0x4bf130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4bf130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4bf134:
    // 0x4bf134: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4bf134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4bf138:
    // 0x4bf138: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4bf138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4bf13c:
    // 0x4bf13c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4bf13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4bf140:
    // 0x4bf140: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4bf140u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4bf144:
    // 0x4bf144: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_4bf148:
    if (ctx->pc == 0x4BF148u) {
        ctx->pc = 0x4BF148u;
            // 0x4bf148: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BF14Cu;
        goto label_4bf14c;
    }
    ctx->pc = 0x4BF144u;
    {
        const bool branch_taken_0x4bf144 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BF148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF144u;
            // 0x4bf148: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf144) {
            ctx->pc = 0x4BF188u;
            goto label_4bf188;
        }
    }
    ctx->pc = 0x4BF14Cu;
label_4bf14c:
    // 0x4bf14c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4bf14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4bf150:
    // 0x4bf150: 0x244210c0  addiu       $v0, $v0, 0x10C0
    ctx->pc = 0x4bf150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4288));
label_4bf154:
    // 0x4bf154: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_4bf158:
    if (ctx->pc == 0x4BF158u) {
        ctx->pc = 0x4BF158u;
            // 0x4bf158: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4BF15Cu;
        goto label_4bf15c;
    }
    ctx->pc = 0x4BF154u;
    {
        const bool branch_taken_0x4bf154 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BF158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF154u;
            // 0x4bf158: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf154) {
            ctx->pc = 0x4BF170u;
            goto label_4bf170;
        }
    }
    ctx->pc = 0x4BF15Cu;
label_4bf15c:
    // 0x4bf15c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4bf15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4bf160:
    // 0x4bf160: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4bf160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bf164:
    // 0x4bf164: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x4bf164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_4bf168:
    // 0x4bf168: 0xc057a68  jal         func_15E9A0
label_4bf16c:
    if (ctx->pc == 0x4BF16Cu) {
        ctx->pc = 0x4BF16Cu;
            // 0x4bf16c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4BF170u;
        goto label_4bf170;
    }
    ctx->pc = 0x4BF168u;
    SET_GPR_U32(ctx, 31, 0x4BF170u);
    ctx->pc = 0x4BF16Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF168u;
            // 0x4bf16c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF170u; }
        if (ctx->pc != 0x4BF170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF170u; }
        if (ctx->pc != 0x4BF170u) { return; }
    }
    ctx->pc = 0x4BF170u;
label_4bf170:
    // 0x4bf170: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4bf170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4bf174:
    // 0x4bf174: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4bf174u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4bf178:
    // 0x4bf178: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4bf17c:
    if (ctx->pc == 0x4BF17Cu) {
        ctx->pc = 0x4BF17Cu;
            // 0x4bf17c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BF180u;
        goto label_4bf180;
    }
    ctx->pc = 0x4BF178u;
    {
        const bool branch_taken_0x4bf178 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4bf178) {
            ctx->pc = 0x4BF17Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF178u;
            // 0x4bf17c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BF18Cu;
            goto label_4bf18c;
        }
    }
    ctx->pc = 0x4BF180u;
label_4bf180:
    // 0x4bf180: 0xc0400a8  jal         func_1002A0
label_4bf184:
    if (ctx->pc == 0x4BF184u) {
        ctx->pc = 0x4BF184u;
            // 0x4bf184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BF188u;
        goto label_4bf188;
    }
    ctx->pc = 0x4BF180u;
    SET_GPR_U32(ctx, 31, 0x4BF188u);
    ctx->pc = 0x4BF184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF180u;
            // 0x4bf184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF188u; }
        if (ctx->pc != 0x4BF188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF188u; }
        if (ctx->pc != 0x4BF188u) { return; }
    }
    ctx->pc = 0x4BF188u;
label_4bf188:
    // 0x4bf188: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4bf188u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4bf18c:
    // 0x4bf18c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4bf18cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4bf190:
    // 0x4bf190: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4bf190u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4bf194:
    // 0x4bf194: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4bf194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4bf198:
    // 0x4bf198: 0x3e00008  jr          $ra
label_4bf19c:
    if (ctx->pc == 0x4BF19Cu) {
        ctx->pc = 0x4BF19Cu;
            // 0x4bf19c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4BF1A0u;
        goto label_4bf1a0;
    }
    ctx->pc = 0x4BF198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BF19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF198u;
            // 0x4bf19c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BF1A0u;
label_4bf1a0:
    // 0x4bf1a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4bf1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4bf1a4:
    // 0x4bf1a4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4bf1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4bf1a8:
    // 0x4bf1a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4bf1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4bf1ac:
    // 0x4bf1ac: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4bf1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4bf1b0:
    // 0x4bf1b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4bf1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4bf1b4:
    // 0x4bf1b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4bf1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4bf1b8:
    // 0x4bf1b8: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x4bf1b8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_4bf1bc:
    // 0x4bf1bc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x4bf1bcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_4bf1c0:
    // 0x4bf1c0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4bf1c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4bf1c4:
    // 0x4bf1c4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4bf1c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4bf1c8:
    // 0x4bf1c8: 0x8c658a08  lw          $a1, -0x75F8($v1)
    ctx->pc = 0x4bf1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4bf1cc:
    // 0x4bf1cc: 0x90a3007d  lbu         $v1, 0x7D($a1)
    ctx->pc = 0x4bf1ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 125)));
label_4bf1d0:
    // 0x4bf1d0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_4bf1d4:
    if (ctx->pc == 0x4BF1D4u) {
        ctx->pc = 0x4BF1D4u;
            // 0x4bf1d4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BF1D8u;
        goto label_4bf1d8;
    }
    ctx->pc = 0x4BF1D0u;
    {
        const bool branch_taken_0x4bf1d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BF1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF1D0u;
            // 0x4bf1d4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf1d0) {
            ctx->pc = 0x4BF1E8u;
            goto label_4bf1e8;
        }
    }
    ctx->pc = 0x4BF1D8u;
label_4bf1d8:
    // 0x4bf1d8: 0x8e440084  lw          $a0, 0x84($s2)
    ctx->pc = 0x4bf1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_4bf1dc:
    // 0x4bf1dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4bf1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4bf1e0:
    // 0x4bf1e0: 0x50830075  beql        $a0, $v1, . + 4 + (0x75 << 2)
label_4bf1e4:
    if (ctx->pc == 0x4BF1E4u) {
        ctx->pc = 0x4BF1E4u;
            // 0x4bf1e4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x4BF1E8u;
        goto label_4bf1e8;
    }
    ctx->pc = 0x4BF1E0u;
    {
        const bool branch_taken_0x4bf1e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4bf1e0) {
            ctx->pc = 0x4BF1E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF1E0u;
            // 0x4bf1e4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BF3B8u;
            goto label_4bf3b8;
        }
    }
    ctx->pc = 0x4BF1E8u;
label_4bf1e8:
    // 0x4bf1e8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4bf1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4bf1ec:
    // 0x4bf1ec: 0x8ca4002c  lw          $a0, 0x2C($a1)
    ctx->pc = 0x4bf1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_4bf1f0:
    // 0x4bf1f0: 0x8c5189e0  lw          $s1, -0x7620($v0)
    ctx->pc = 0x4bf1f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4bf1f4:
    // 0x4bf1f4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x4bf1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_4bf1f8:
    // 0x4bf1f8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4bf1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4bf1fc:
    // 0x4bf1fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4bf1fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4bf200:
    // 0x4bf200: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_4bf204:
    if (ctx->pc == 0x4BF204u) {
        ctx->pc = 0x4BF204u;
            // 0x4bf204: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x4BF208u;
        goto label_4bf208;
    }
    ctx->pc = 0x4BF200u;
    {
        const bool branch_taken_0x4bf200 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x4bf200) {
            ctx->pc = 0x4BF204u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF200u;
            // 0x4bf204: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BF214u;
            goto label_4bf214;
        }
    }
    ctx->pc = 0x4BF208u;
label_4bf208:
    // 0x4bf208: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4bf208u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4bf20c:
    // 0x4bf20c: 0x10000007  b           . + 4 + (0x7 << 2)
label_4bf210:
    if (ctx->pc == 0x4BF210u) {
        ctx->pc = 0x4BF210u;
            // 0x4bf210: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4BF214u;
        goto label_4bf214;
    }
    ctx->pc = 0x4BF20Cu;
    {
        const bool branch_taken_0x4bf20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BF210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF20Cu;
            // 0x4bf210: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf20c) {
            ctx->pc = 0x4BF22Cu;
            goto label_4bf22c;
        }
    }
    ctx->pc = 0x4BF214u;
label_4bf214:
    // 0x4bf214: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x4bf214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_4bf218:
    // 0x4bf218: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4bf218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4bf21c:
    // 0x4bf21c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4bf21cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4bf220:
    // 0x4bf220: 0x0  nop
    ctx->pc = 0x4bf220u;
    // NOP
label_4bf224:
    // 0x4bf224: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4bf224u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4bf228:
    // 0x4bf228: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4bf228u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4bf22c:
    // 0x4bf22c: 0xc0477a8  jal         func_11DEA0
label_4bf230:
    if (ctx->pc == 0x4BF230u) {
        ctx->pc = 0x4BF230u;
            // 0x4bf230: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4BF234u;
        goto label_4bf234;
    }
    ctx->pc = 0x4BF22Cu;
    SET_GPR_U32(ctx, 31, 0x4BF234u);
    ctx->pc = 0x4BF230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF22Cu;
            // 0x4bf230: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF234u; }
        if (ctx->pc != 0x4BF234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF234u; }
        if (ctx->pc != 0x4BF234u) { return; }
    }
    ctx->pc = 0x4BF234u;
label_4bf234:
    // 0x4bf234: 0x3c0242fe  lui         $v0, 0x42FE
    ctx->pc = 0x4bf234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17150 << 16));
label_4bf238:
    // 0x4bf238: 0x8e44006c  lw          $a0, 0x6C($s2)
    ctx->pc = 0x4bf238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_4bf23c:
    // 0x4bf23c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4bf23cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4bf240:
    // 0x4bf240: 0x0  nop
    ctx->pc = 0x4bf240u;
    // NOP
label_4bf244:
    // 0x4bf244: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4bf244u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4bf248:
    // 0x4bf248: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4bf248u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4bf24c:
    // 0x4bf24c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x4bf24cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_4bf250:
    // 0x4bf250: 0x14800036  bnez        $a0, . + 4 + (0x36 << 2)
label_4bf254:
    if (ctx->pc == 0x4BF254u) {
        ctx->pc = 0x4BF254u;
            // 0x4bf254: 0x2450007f  addiu       $s0, $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
        ctx->pc = 0x4BF258u;
        goto label_4bf258;
    }
    ctx->pc = 0x4BF250u;
    {
        const bool branch_taken_0x4bf250 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BF254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF250u;
            // 0x4bf254: 0x2450007f  addiu       $s0, $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf250) {
            ctx->pc = 0x4BF32Cu;
            goto label_4bf32c;
        }
    }
    ctx->pc = 0x4BF258u;
label_4bf258:
    // 0x4bf258: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4bf258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4bf25c:
    // 0x4bf25c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4bf25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4bf260:
    // 0x4bf260: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4bf260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4bf264:
    // 0x4bf264: 0x8c440eb0  lw          $a0, 0xEB0($v0)
    ctx->pc = 0x4bf264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3760)));
label_4bf268:
    // 0x4bf268: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4bf268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4bf26c:
    // 0x4bf26c: 0xc0506ac  jal         func_141AB0
label_4bf270:
    if (ctx->pc == 0x4BF270u) {
        ctx->pc = 0x4BF270u;
            // 0x4bf270: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x4BF274u;
        goto label_4bf274;
    }
    ctx->pc = 0x4BF26Cu;
    SET_GPR_U32(ctx, 31, 0x4BF274u);
    ctx->pc = 0x4BF270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF26Cu;
            // 0x4bf270: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF274u; }
        if (ctx->pc != 0x4BF274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF274u; }
        if (ctx->pc != 0x4BF274u) { return; }
    }
    ctx->pc = 0x4BF274u;
label_4bf274:
    // 0x4bf274: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4bf274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_4bf278:
    // 0x4bf278: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4bf278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4bf27c:
    // 0x4bf27c: 0xc460c790  lwc1        $f0, -0x3870($v1)
    ctx->pc = 0x4bf27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bf280:
    // 0x4bf280: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x4bf280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_4bf284:
    // 0x4bf284: 0xc442c794  lwc1        $f2, -0x386C($v0)
    ctx->pc = 0x4bf284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4bf288:
    // 0x4bf288: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4bf288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4bf28c:
    // 0x4bf28c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4bf28cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_4bf290:
    // 0x4bf290: 0xc461c798  lwc1        $f1, -0x3868($v1)
    ctx->pc = 0x4bf290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4bf294:
    // 0x4bf294: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4bf294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4bf298:
    // 0x4bf298: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x4bf298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_4bf29c:
    // 0x4bf29c: 0xc440c79c  lwc1        $f0, -0x3864($v0)
    ctx->pc = 0x4bf29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bf2a0:
    // 0x4bf2a0: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x4bf2a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_4bf2a4:
    // 0x4bf2a4: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x4bf2a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_4bf2a8:
    // 0x4bf2a8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x4bf2a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_4bf2ac:
    // 0x4bf2ac: 0xc6400058  lwc1        $f0, 0x58($s2)
    ctx->pc = 0x4bf2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bf2b0:
    // 0x4bf2b0: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x4bf2b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4bf2b4:
    // 0x4bf2b4: 0xc6420060  lwc1        $f2, 0x60($s2)
    ctx->pc = 0x4bf2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4bf2b8:
    // 0x4bf2b8: 0xc641005c  lwc1        $f1, 0x5C($s2)
    ctx->pc = 0x4bf2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4bf2bc:
    // 0x4bf2bc: 0x468005a0  cvt.s.w     $f22, $f0
    ctx->pc = 0x4bf2bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
label_4bf2c0:
    // 0x4bf2c0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x4bf2c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_4bf2c4:
    // 0x4bf2c4: 0xc6400054  lwc1        $f0, 0x54($s2)
    ctx->pc = 0x4bf2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bf2c8:
    // 0x4bf2c8: 0x46801520  cvt.s.w     $f20, $f2
    ctx->pc = 0x4bf2c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_4bf2cc:
    // 0x4bf2cc: 0x46800d60  cvt.s.w     $f21, $f1
    ctx->pc = 0x4bf2ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_4bf2d0:
    // 0x4bf2d0: 0x320f809  jalr        $t9
label_4bf2d4:
    if (ctx->pc == 0x4BF2D4u) {
        ctx->pc = 0x4BF2D4u;
            // 0x4bf2d4: 0x468005e0  cvt.s.w     $f23, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4BF2D8u;
        goto label_4bf2d8;
    }
    ctx->pc = 0x4BF2D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BF2D8u);
        ctx->pc = 0x4BF2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF2D0u;
            // 0x4bf2d4: 0x468005e0  cvt.s.w     $f23, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BF2D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BF2D8u; }
            if (ctx->pc != 0x4BF2D8u) { return; }
        }
        }
    }
    ctx->pc = 0x4BF2D8u;
label_4bf2d8:
    // 0x4bf2d8: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x4bf2d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4bf2dc:
    // 0x4bf2dc: 0x4615bb80  add.s       $f14, $f23, $f21
    ctx->pc = 0x4bf2dcu;
    ctx->f[14] = FPU_ADD_S(ctx->f[23], ctx->f[21]);
label_4bf2e0:
    // 0x4bf2e0: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x4bf2e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_4bf2e4:
    // 0x4bf2e4: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4bf2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4bf2e8:
    // 0x4bf2e8: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x4bf2e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4bf2ec:
    // 0x4bf2ec: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x4bf2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_4bf2f0:
    // 0x4bf2f0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x4bf2f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_4bf2f4:
    // 0x4bf2f4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4bf2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4bf2f8:
    // 0x4bf2f8: 0x4614b3c0  add.s       $f15, $f22, $f20
    ctx->pc = 0x4bf2f8u;
    ctx->f[15] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
label_4bf2fc:
    // 0x4bf2fc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4bf2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4bf300:
    // 0x4bf300: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4bf300u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bf304:
    // 0x4bf304: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x4bf304u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_4bf308:
    // 0x4bf308: 0x44828000  mtc1        $v0, $f16
    ctx->pc = 0x4bf308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_4bf30c:
    // 0x4bf30c: 0x320f809  jalr        $t9
label_4bf310:
    if (ctx->pc == 0x4BF310u) {
        ctx->pc = 0x4BF310u;
            // 0x4bf310: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x4BF314u;
        goto label_4bf314;
    }
    ctx->pc = 0x4BF30Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BF314u);
        ctx->pc = 0x4BF310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF30Cu;
            // 0x4bf310: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BF314u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BF314u; }
            if (ctx->pc != 0x4BF314u) { return; }
        }
        }
    }
    ctx->pc = 0x4BF314u;
label_4bf314:
    // 0x4bf314: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x4bf314u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4bf318:
    // 0x4bf318: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4bf318u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4bf31c:
    // 0x4bf31c: 0x320f809  jalr        $t9
label_4bf320:
    if (ctx->pc == 0x4BF320u) {
        ctx->pc = 0x4BF320u;
            // 0x4bf320: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4BF324u;
        goto label_4bf324;
    }
    ctx->pc = 0x4BF31Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BF324u);
        ctx->pc = 0x4BF320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF31Cu;
            // 0x4bf320: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BF324u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BF324u; }
            if (ctx->pc != 0x4BF324u) { return; }
        }
        }
    }
    ctx->pc = 0x4BF324u;
label_4bf324:
    // 0x4bf324: 0x10000023  b           . + 4 + (0x23 << 2)
label_4bf328:
    if (ctx->pc == 0x4BF328u) {
        ctx->pc = 0x4BF32Cu;
        goto label_4bf32c;
    }
    ctx->pc = 0x4BF324u;
    {
        const bool branch_taken_0x4bf324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bf324) {
            ctx->pc = 0x4BF3B4u;
            goto label_4bf3b4;
        }
    }
    ctx->pc = 0x4BF32Cu;
label_4bf32c:
    // 0x4bf32c: 0xc0506ac  jal         func_141AB0
label_4bf330:
    if (ctx->pc == 0x4BF330u) {
        ctx->pc = 0x4BF330u;
            // 0x4bf330: 0x82450081  lb          $a1, 0x81($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 129)));
        ctx->pc = 0x4BF334u;
        goto label_4bf334;
    }
    ctx->pc = 0x4BF32Cu;
    SET_GPR_U32(ctx, 31, 0x4BF334u);
    ctx->pc = 0x4BF330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF32Cu;
            // 0x4bf330: 0x82450081  lb          $a1, 0x81($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 129)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF334u; }
        if (ctx->pc != 0x4BF334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF334u; }
        if (ctx->pc != 0x4BF334u) { return; }
    }
    ctx->pc = 0x4BF334u;
label_4bf334:
    // 0x4bf334: 0xc6400058  lwc1        $f0, 0x58($s2)
    ctx->pc = 0x4bf334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bf338:
    // 0x4bf338: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x4bf338u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4bf33c:
    // 0x4bf33c: 0xc6420060  lwc1        $f2, 0x60($s2)
    ctx->pc = 0x4bf33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4bf340:
    // 0x4bf340: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x4bf340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_4bf344:
    // 0x4bf344: 0xc641005c  lwc1        $f1, 0x5C($s2)
    ctx->pc = 0x4bf344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4bf348:
    // 0x4bf348: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4bf348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4bf34c:
    // 0x4bf34c: 0x468005a0  cvt.s.w     $f22, $f0
    ctx->pc = 0x4bf34cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
label_4bf350:
    // 0x4bf350: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x4bf350u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_4bf354:
    // 0x4bf354: 0xc6400054  lwc1        $f0, 0x54($s2)
    ctx->pc = 0x4bf354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bf358:
    // 0x4bf358: 0x46801520  cvt.s.w     $f20, $f2
    ctx->pc = 0x4bf358u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_4bf35c:
    // 0x4bf35c: 0x46800d60  cvt.s.w     $f21, $f1
    ctx->pc = 0x4bf35cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_4bf360:
    // 0x4bf360: 0x320f809  jalr        $t9
label_4bf364:
    if (ctx->pc == 0x4BF364u) {
        ctx->pc = 0x4BF364u;
            // 0x4bf364: 0x468005e0  cvt.s.w     $f23, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4BF368u;
        goto label_4bf368;
    }
    ctx->pc = 0x4BF360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BF368u);
        ctx->pc = 0x4BF364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF360u;
            // 0x4bf364: 0x468005e0  cvt.s.w     $f23, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BF368u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BF368u; }
            if (ctx->pc != 0x4BF368u) { return; }
        }
        }
    }
    ctx->pc = 0x4BF368u;
label_4bf368:
    // 0x4bf368: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x4bf368u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4bf36c:
    // 0x4bf36c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4bf36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4bf370:
    // 0x4bf370: 0x4615bb80  add.s       $f14, $f23, $f21
    ctx->pc = 0x4bf370u;
    ctx->f[14] = FPU_ADD_S(ctx->f[23], ctx->f[21]);
label_4bf374:
    // 0x4bf374: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x4bf374u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_4bf378:
    // 0x4bf378: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x4bf378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4bf37c:
    // 0x4bf37c: 0x26460070  addiu       $a2, $s2, 0x70
    ctx->pc = 0x4bf37cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_4bf380:
    // 0x4bf380: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x4bf380u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_4bf384:
    // 0x4bf384: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x4bf384u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4bf388:
    // 0x4bf388: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x4bf388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_4bf38c:
    // 0x4bf38c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4bf38cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bf390:
    // 0x4bf390: 0x4614b3c0  add.s       $f15, $f22, $f20
    ctx->pc = 0x4bf390u;
    ctx->f[15] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
label_4bf394:
    // 0x4bf394: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x4bf394u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_4bf398:
    // 0x4bf398: 0x44828000  mtc1        $v0, $f16
    ctx->pc = 0x4bf398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_4bf39c:
    // 0x4bf39c: 0x320f809  jalr        $t9
label_4bf3a0:
    if (ctx->pc == 0x4BF3A0u) {
        ctx->pc = 0x4BF3A0u;
            // 0x4bf3a0: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x4BF3A4u;
        goto label_4bf3a4;
    }
    ctx->pc = 0x4BF39Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BF3A4u);
        ctx->pc = 0x4BF3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF39Cu;
            // 0x4bf3a0: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BF3A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BF3A4u; }
            if (ctx->pc != 0x4BF3A4u) { return; }
        }
        }
    }
    ctx->pc = 0x4BF3A4u;
label_4bf3a4:
    // 0x4bf3a4: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x4bf3a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4bf3a8:
    // 0x4bf3a8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4bf3a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4bf3ac:
    // 0x4bf3ac: 0x320f809  jalr        $t9
label_4bf3b0:
    if (ctx->pc == 0x4BF3B0u) {
        ctx->pc = 0x4BF3B0u;
            // 0x4bf3b0: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4BF3B4u;
        goto label_4bf3b4;
    }
    ctx->pc = 0x4BF3ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BF3B4u);
        ctx->pc = 0x4BF3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF3ACu;
            // 0x4bf3b0: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BF3B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BF3B4u; }
            if (ctx->pc != 0x4BF3B4u) { return; }
        }
        }
    }
    ctx->pc = 0x4BF3B4u;
label_4bf3b4:
    // 0x4bf3b4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4bf3b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4bf3b8:
    // 0x4bf3b8: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x4bf3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_4bf3bc:
    // 0x4bf3bc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4bf3bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4bf3c0:
    // 0x4bf3c0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x4bf3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_4bf3c4:
    // 0x4bf3c4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4bf3c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4bf3c8:
    // 0x4bf3c8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4bf3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4bf3cc:
    // 0x4bf3cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4bf3ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4bf3d0:
    // 0x4bf3d0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4bf3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4bf3d4:
    // 0x4bf3d4: 0x3e00008  jr          $ra
label_4bf3d8:
    if (ctx->pc == 0x4BF3D8u) {
        ctx->pc = 0x4BF3D8u;
            // 0x4bf3d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4BF3DCu;
        goto label_4bf3dc;
    }
    ctx->pc = 0x4BF3D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BF3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF3D4u;
            // 0x4bf3d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BF3DCu;
label_4bf3dc:
    // 0x4bf3dc: 0x0  nop
    ctx->pc = 0x4bf3dcu;
    // NOP
label_4bf3e0:
    // 0x4bf3e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4bf3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4bf3e4:
    // 0x4bf3e4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4bf3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4bf3e8:
    // 0x4bf3e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4bf3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4bf3ec:
    // 0x4bf3ec: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x4bf3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4bf3f0:
    // 0x4bf3f0: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4bf3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4bf3f4:
    // 0x4bf3f4: 0xc4800064  lwc1        $f0, 0x64($a0)
    ctx->pc = 0x4bf3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bf3f8:
    // 0x4bf3f8: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x4bf3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4bf3fc:
    // 0x4bf3fc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4bf3fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_4bf400:
    // 0x4bf400: 0xe4800064  swc1        $f0, 0x64($a0)
    ctx->pc = 0x4bf400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
label_4bf404:
    // 0x4bf404: 0x80870080  lb          $a3, 0x80($a0)
    ctx->pc = 0x4bf404u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 128)));
label_4bf408:
    // 0x4bf408: 0x14e60007  bne         $a3, $a2, . + 4 + (0x7 << 2)
label_4bf40c:
    if (ctx->pc == 0x4BF40Cu) {
        ctx->pc = 0x4BF40Cu;
            // 0x4bf40c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BF410u;
        goto label_4bf410;
    }
    ctx->pc = 0x4BF408u;
    {
        const bool branch_taken_0x4bf408 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x4BF40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF408u;
            // 0x4bf40c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf408) {
            ctx->pc = 0x4BF428u;
            goto label_4bf428;
        }
    }
    ctx->pc = 0x4BF410u;
label_4bf410:
    // 0x4bf410: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4bf410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4bf414:
    // 0x4bf414: 0x8ca40068  lw          $a0, 0x68($a1)
    ctx->pc = 0x4bf414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
label_4bf418:
    // 0x4bf418: 0x8c63a140  lw          $v1, -0x5EC0($v1)
    ctx->pc = 0x4bf418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943040)));
label_4bf41c:
    // 0x4bf41c: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x4bf41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4bf420:
    // 0x4bf420: 0x1000000a  b           . + 4 + (0xA << 2)
label_4bf424:
    if (ctx->pc == 0x4BF424u) {
        ctx->pc = 0x4BF424u;
            // 0x4bf424: 0x641824  and         $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
        ctx->pc = 0x4BF428u;
        goto label_4bf428;
    }
    ctx->pc = 0x4BF420u;
    {
        const bool branch_taken_0x4bf420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BF424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF420u;
            // 0x4bf424: 0x641824  and         $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf420) {
            ctx->pc = 0x4BF44Cu;
            goto label_4bf44c;
        }
    }
    ctx->pc = 0x4BF428u;
label_4bf428:
    // 0x4bf428: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x4bf428u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_4bf42c:
    // 0x4bf42c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4bf42cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4bf430:
    // 0x4bf430: 0x873021  addu        $a2, $a0, $a3
    ctx->pc = 0x4bf430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_4bf434:
    // 0x4bf434: 0x24639764  addiu       $v1, $v1, -0x689C
    ctx->pc = 0x4bf434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940516));
label_4bf438:
    // 0x4bf438: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x4bf438u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_4bf43c:
    // 0x4bf43c: 0x8ca40068  lw          $a0, 0x68($a1)
    ctx->pc = 0x4bf43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
label_4bf440:
    // 0x4bf440: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4bf440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_4bf444:
    // 0x4bf444: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4bf444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4bf448:
    // 0x4bf448: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4bf448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_4bf44c:
    // 0x4bf44c: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
label_4bf450:
    if (ctx->pc == 0x4BF450u) {
        ctx->pc = 0x4BF450u;
            // 0x4bf450: 0x8ca40088  lw          $a0, 0x88($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 136)));
        ctx->pc = 0x4BF454u;
        goto label_4bf454;
    }
    ctx->pc = 0x4BF44Cu;
    {
        const bool branch_taken_0x4bf44c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bf44c) {
            ctx->pc = 0x4BF450u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF44Cu;
            // 0x4bf450: 0x8ca40088  lw          $a0, 0x88($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 136)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BF470u;
            goto label_4bf470;
        }
    }
    ctx->pc = 0x4BF454u;
label_4bf454:
    // 0x4bf454: 0xc4a10064  lwc1        $f1, 0x64($a1)
    ctx->pc = 0x4bf454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4bf458:
    // 0x4bf458: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4bf458u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4bf45c:
    // 0x4bf45c: 0x0  nop
    ctx->pc = 0x4bf45cu;
    // NOP
label_4bf460:
    // 0x4bf460: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4bf460u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4bf464:
    // 0x4bf464: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
label_4bf468:
    if (ctx->pc == 0x4BF468u) {
        ctx->pc = 0x4BF468u;
            // 0x4bf468: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x4BF46Cu;
        goto label_4bf46c;
    }
    ctx->pc = 0x4BF464u;
    {
        const bool branch_taken_0x4bf464 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4bf464) {
            ctx->pc = 0x4BF468u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF464u;
            // 0x4bf468: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BF4B0u;
            goto label_4bf4b0;
        }
    }
    ctx->pc = 0x4BF46Cu;
label_4bf46c:
    // 0x4bf46c: 0x8ca40088  lw          $a0, 0x88($a1)
    ctx->pc = 0x4bf46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 136)));
label_4bf470:
    // 0x4bf470: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4bf470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4bf474:
    // 0x4bf474: 0x54830007  bnel        $a0, $v1, . + 4 + (0x7 << 2)
label_4bf478:
    if (ctx->pc == 0x4BF478u) {
        ctx->pc = 0x4BF478u;
            // 0x4bf478: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4BF47Cu;
        goto label_4bf47c;
    }
    ctx->pc = 0x4BF474u;
    {
        const bool branch_taken_0x4bf474 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4bf474) {
            ctx->pc = 0x4BF478u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF474u;
            // 0x4bf478: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BF494u;
            goto label_4bf494;
        }
    }
    ctx->pc = 0x4BF47Cu;
label_4bf47c:
    // 0x4bf47c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4bf47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4bf480:
    // 0x4bf480: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4bf480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4bf484:
    // 0x4bf484: 0xc057b78  jal         func_15EDE0
label_4bf488:
    if (ctx->pc == 0x4BF488u) {
        ctx->pc = 0x4BF488u;
            // 0x4bf488: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4BF48Cu;
        goto label_4bf48c;
    }
    ctx->pc = 0x4BF484u;
    SET_GPR_U32(ctx, 31, 0x4BF48Cu);
    ctx->pc = 0x4BF488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF484u;
            // 0x4bf488: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDE0u;
    if (runtime->hasFunction(0x15EDE0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF48Cu; }
        if (ctx->pc != 0x4BF48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDE0_0x15ede0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF48Cu; }
        if (ctx->pc != 0x4BF48Cu) { return; }
    }
    ctx->pc = 0x4BF48Cu;
label_4bf48c:
    // 0x4bf48c: 0x10000007  b           . + 4 + (0x7 << 2)
label_4bf490:
    if (ctx->pc == 0x4BF490u) {
        ctx->pc = 0x4BF494u;
        goto label_4bf494;
    }
    ctx->pc = 0x4BF48Cu;
    {
        const bool branch_taken_0x4bf48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bf48c) {
            ctx->pc = 0x4BF4ACu;
            goto label_4bf4ac;
        }
    }
    ctx->pc = 0x4BF494u;
label_4bf494:
    // 0x4bf494: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_4bf498:
    if (ctx->pc == 0x4BF498u) {
        ctx->pc = 0x4BF49Cu;
        goto label_4bf49c;
    }
    ctx->pc = 0x4BF494u;
    {
        const bool branch_taken_0x4bf494 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4bf494) {
            ctx->pc = 0x4BF4ACu;
            goto label_4bf4ac;
        }
    }
    ctx->pc = 0x4BF49Cu;
label_4bf49c:
    // 0x4bf49c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4bf49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4bf4a0:
    // 0x4bf4a0: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4bf4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4bf4a4:
    // 0x4bf4a4: 0xc057b7c  jal         func_15EDF0
label_4bf4a8:
    if (ctx->pc == 0x4BF4A8u) {
        ctx->pc = 0x4BF4A8u;
            // 0x4bf4a8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4BF4ACu;
        goto label_4bf4ac;
    }
    ctx->pc = 0x4BF4A4u;
    SET_GPR_U32(ctx, 31, 0x4BF4ACu);
    ctx->pc = 0x4BF4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF4A4u;
            // 0x4bf4a8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF4ACu; }
        if (ctx->pc != 0x4BF4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF4ACu; }
        if (ctx->pc != 0x4BF4ACu) { return; }
    }
    ctx->pc = 0x4BF4ACu;
label_4bf4ac:
    // 0x4bf4ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4bf4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4bf4b0:
    // 0x4bf4b0: 0x3e00008  jr          $ra
label_4bf4b4:
    if (ctx->pc == 0x4BF4B4u) {
        ctx->pc = 0x4BF4B4u;
            // 0x4bf4b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x4BF4B8u;
        goto label_4bf4b8;
    }
    ctx->pc = 0x4BF4B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BF4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF4B0u;
            // 0x4bf4b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BF4B8u;
label_4bf4b8:
    // 0x4bf4b8: 0x0  nop
    ctx->pc = 0x4bf4b8u;
    // NOP
label_4bf4bc:
    // 0x4bf4bc: 0x0  nop
    ctx->pc = 0x4bf4bcu;
    // NOP
label_4bf4c0:
    // 0x4bf4c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4bf4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4bf4c4:
    // 0x4bf4c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4bf4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4bf4c8:
    // 0x4bf4c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4bf4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4bf4cc:
    // 0x4bf4cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4bf4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4bf4d0:
    // 0x4bf4d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4bf4d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4bf4d4:
    // 0x4bf4d4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_4bf4d8:
    if (ctx->pc == 0x4BF4D8u) {
        ctx->pc = 0x4BF4D8u;
            // 0x4bf4d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BF4DCu;
        goto label_4bf4dc;
    }
    ctx->pc = 0x4BF4D4u;
    {
        const bool branch_taken_0x4bf4d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BF4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF4D4u;
            // 0x4bf4d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf4d4) {
            ctx->pc = 0x4BF530u;
            goto label_4bf530;
        }
    }
    ctx->pc = 0x4BF4DCu;
label_4bf4dc:
    // 0x4bf4dc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4bf4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4bf4e0:
    // 0x4bf4e0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4bf4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4bf4e4:
    // 0x4bf4e4: 0x246310f0  addiu       $v1, $v1, 0x10F0
    ctx->pc = 0x4bf4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4336));
label_4bf4e8:
    // 0x4bf4e8: 0x24421128  addiu       $v0, $v0, 0x1128
    ctx->pc = 0x4bf4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4392));
label_4bf4ec:
    // 0x4bf4ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4bf4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4bf4f0:
    // 0x4bf4f0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_4bf4f4:
    if (ctx->pc == 0x4BF4F4u) {
        ctx->pc = 0x4BF4F4u;
            // 0x4bf4f4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4BF4F8u;
        goto label_4bf4f8;
    }
    ctx->pc = 0x4BF4F0u;
    {
        const bool branch_taken_0x4bf4f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BF4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF4F0u;
            // 0x4bf4f4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf4f0) {
            ctx->pc = 0x4BF518u;
            goto label_4bf518;
        }
    }
    ctx->pc = 0x4BF4F8u;
label_4bf4f8:
    // 0x4bf4f8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4bf4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4bf4fc:
    // 0x4bf4fc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4bf4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4bf500:
    // 0x4bf500: 0x246311a0  addiu       $v1, $v1, 0x11A0
    ctx->pc = 0x4bf500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4512));
label_4bf504:
    // 0x4bf504: 0x244211d8  addiu       $v0, $v0, 0x11D8
    ctx->pc = 0x4bf504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4568));
label_4bf508:
    // 0x4bf508: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4bf508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4bf50c:
    // 0x4bf50c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4bf50cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bf510:
    // 0x4bf510: 0xc12fd54  jal         func_4BF550
label_4bf514:
    if (ctx->pc == 0x4BF514u) {
        ctx->pc = 0x4BF514u;
            // 0x4bf514: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4BF518u;
        goto label_4bf518;
    }
    ctx->pc = 0x4BF510u;
    SET_GPR_U32(ctx, 31, 0x4BF518u);
    ctx->pc = 0x4BF514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF510u;
            // 0x4bf514: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4BF550u;
    if (runtime->hasFunction(0x4BF550u)) {
        auto targetFn = runtime->lookupFunction(0x4BF550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF518u; }
        if (ctx->pc != 0x4BF518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004BF550_0x4bf550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF518u; }
        if (ctx->pc != 0x4BF518u) { return; }
    }
    ctx->pc = 0x4BF518u;
label_4bf518:
    // 0x4bf518: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4bf518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4bf51c:
    // 0x4bf51c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4bf51cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4bf520:
    // 0x4bf520: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4bf524:
    if (ctx->pc == 0x4BF524u) {
        ctx->pc = 0x4BF524u;
            // 0x4bf524: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BF528u;
        goto label_4bf528;
    }
    ctx->pc = 0x4BF520u;
    {
        const bool branch_taken_0x4bf520 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4bf520) {
            ctx->pc = 0x4BF524u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF520u;
            // 0x4bf524: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BF534u;
            goto label_4bf534;
        }
    }
    ctx->pc = 0x4BF528u;
label_4bf528:
    // 0x4bf528: 0xc0400a8  jal         func_1002A0
label_4bf52c:
    if (ctx->pc == 0x4BF52Cu) {
        ctx->pc = 0x4BF52Cu;
            // 0x4bf52c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BF530u;
        goto label_4bf530;
    }
    ctx->pc = 0x4BF528u;
    SET_GPR_U32(ctx, 31, 0x4BF530u);
    ctx->pc = 0x4BF52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF528u;
            // 0x4bf52c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF530u; }
        if (ctx->pc != 0x4BF530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BF530u; }
        if (ctx->pc != 0x4BF530u) { return; }
    }
    ctx->pc = 0x4BF530u;
label_4bf530:
    // 0x4bf530: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4bf530u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4bf534:
    // 0x4bf534: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4bf534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4bf538:
    // 0x4bf538: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4bf538u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4bf53c:
    // 0x4bf53c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4bf53cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4bf540:
    // 0x4bf540: 0x3e00008  jr          $ra
label_4bf544:
    if (ctx->pc == 0x4BF544u) {
        ctx->pc = 0x4BF544u;
            // 0x4bf544: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4BF548u;
        goto label_4bf548;
    }
    ctx->pc = 0x4BF540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BF544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BF540u;
            // 0x4bf544: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BF548u;
label_4bf548:
    // 0x4bf548: 0x0  nop
    ctx->pc = 0x4bf548u;
    // NOP
label_4bf54c:
    // 0x4bf54c: 0x0  nop
    ctx->pc = 0x4bf54cu;
    // NOP
}
