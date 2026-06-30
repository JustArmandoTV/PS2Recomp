#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00396520
// Address: 0x396520 - 0x396e40
void sub_00396520_0x396520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396520_0x396520");
#endif

    switch (ctx->pc) {
        case 0x396520u: goto label_396520;
        case 0x396524u: goto label_396524;
        case 0x396528u: goto label_396528;
        case 0x39652cu: goto label_39652c;
        case 0x396530u: goto label_396530;
        case 0x396534u: goto label_396534;
        case 0x396538u: goto label_396538;
        case 0x39653cu: goto label_39653c;
        case 0x396540u: goto label_396540;
        case 0x396544u: goto label_396544;
        case 0x396548u: goto label_396548;
        case 0x39654cu: goto label_39654c;
        case 0x396550u: goto label_396550;
        case 0x396554u: goto label_396554;
        case 0x396558u: goto label_396558;
        case 0x39655cu: goto label_39655c;
        case 0x396560u: goto label_396560;
        case 0x396564u: goto label_396564;
        case 0x396568u: goto label_396568;
        case 0x39656cu: goto label_39656c;
        case 0x396570u: goto label_396570;
        case 0x396574u: goto label_396574;
        case 0x396578u: goto label_396578;
        case 0x39657cu: goto label_39657c;
        case 0x396580u: goto label_396580;
        case 0x396584u: goto label_396584;
        case 0x396588u: goto label_396588;
        case 0x39658cu: goto label_39658c;
        case 0x396590u: goto label_396590;
        case 0x396594u: goto label_396594;
        case 0x396598u: goto label_396598;
        case 0x39659cu: goto label_39659c;
        case 0x3965a0u: goto label_3965a0;
        case 0x3965a4u: goto label_3965a4;
        case 0x3965a8u: goto label_3965a8;
        case 0x3965acu: goto label_3965ac;
        case 0x3965b0u: goto label_3965b0;
        case 0x3965b4u: goto label_3965b4;
        case 0x3965b8u: goto label_3965b8;
        case 0x3965bcu: goto label_3965bc;
        case 0x3965c0u: goto label_3965c0;
        case 0x3965c4u: goto label_3965c4;
        case 0x3965c8u: goto label_3965c8;
        case 0x3965ccu: goto label_3965cc;
        case 0x3965d0u: goto label_3965d0;
        case 0x3965d4u: goto label_3965d4;
        case 0x3965d8u: goto label_3965d8;
        case 0x3965dcu: goto label_3965dc;
        case 0x3965e0u: goto label_3965e0;
        case 0x3965e4u: goto label_3965e4;
        case 0x3965e8u: goto label_3965e8;
        case 0x3965ecu: goto label_3965ec;
        case 0x3965f0u: goto label_3965f0;
        case 0x3965f4u: goto label_3965f4;
        case 0x3965f8u: goto label_3965f8;
        case 0x3965fcu: goto label_3965fc;
        case 0x396600u: goto label_396600;
        case 0x396604u: goto label_396604;
        case 0x396608u: goto label_396608;
        case 0x39660cu: goto label_39660c;
        case 0x396610u: goto label_396610;
        case 0x396614u: goto label_396614;
        case 0x396618u: goto label_396618;
        case 0x39661cu: goto label_39661c;
        case 0x396620u: goto label_396620;
        case 0x396624u: goto label_396624;
        case 0x396628u: goto label_396628;
        case 0x39662cu: goto label_39662c;
        case 0x396630u: goto label_396630;
        case 0x396634u: goto label_396634;
        case 0x396638u: goto label_396638;
        case 0x39663cu: goto label_39663c;
        case 0x396640u: goto label_396640;
        case 0x396644u: goto label_396644;
        case 0x396648u: goto label_396648;
        case 0x39664cu: goto label_39664c;
        case 0x396650u: goto label_396650;
        case 0x396654u: goto label_396654;
        case 0x396658u: goto label_396658;
        case 0x39665cu: goto label_39665c;
        case 0x396660u: goto label_396660;
        case 0x396664u: goto label_396664;
        case 0x396668u: goto label_396668;
        case 0x39666cu: goto label_39666c;
        case 0x396670u: goto label_396670;
        case 0x396674u: goto label_396674;
        case 0x396678u: goto label_396678;
        case 0x39667cu: goto label_39667c;
        case 0x396680u: goto label_396680;
        case 0x396684u: goto label_396684;
        case 0x396688u: goto label_396688;
        case 0x39668cu: goto label_39668c;
        case 0x396690u: goto label_396690;
        case 0x396694u: goto label_396694;
        case 0x396698u: goto label_396698;
        case 0x39669cu: goto label_39669c;
        case 0x3966a0u: goto label_3966a0;
        case 0x3966a4u: goto label_3966a4;
        case 0x3966a8u: goto label_3966a8;
        case 0x3966acu: goto label_3966ac;
        case 0x3966b0u: goto label_3966b0;
        case 0x3966b4u: goto label_3966b4;
        case 0x3966b8u: goto label_3966b8;
        case 0x3966bcu: goto label_3966bc;
        case 0x3966c0u: goto label_3966c0;
        case 0x3966c4u: goto label_3966c4;
        case 0x3966c8u: goto label_3966c8;
        case 0x3966ccu: goto label_3966cc;
        case 0x3966d0u: goto label_3966d0;
        case 0x3966d4u: goto label_3966d4;
        case 0x3966d8u: goto label_3966d8;
        case 0x3966dcu: goto label_3966dc;
        case 0x3966e0u: goto label_3966e0;
        case 0x3966e4u: goto label_3966e4;
        case 0x3966e8u: goto label_3966e8;
        case 0x3966ecu: goto label_3966ec;
        case 0x3966f0u: goto label_3966f0;
        case 0x3966f4u: goto label_3966f4;
        case 0x3966f8u: goto label_3966f8;
        case 0x3966fcu: goto label_3966fc;
        case 0x396700u: goto label_396700;
        case 0x396704u: goto label_396704;
        case 0x396708u: goto label_396708;
        case 0x39670cu: goto label_39670c;
        case 0x396710u: goto label_396710;
        case 0x396714u: goto label_396714;
        case 0x396718u: goto label_396718;
        case 0x39671cu: goto label_39671c;
        case 0x396720u: goto label_396720;
        case 0x396724u: goto label_396724;
        case 0x396728u: goto label_396728;
        case 0x39672cu: goto label_39672c;
        case 0x396730u: goto label_396730;
        case 0x396734u: goto label_396734;
        case 0x396738u: goto label_396738;
        case 0x39673cu: goto label_39673c;
        case 0x396740u: goto label_396740;
        case 0x396744u: goto label_396744;
        case 0x396748u: goto label_396748;
        case 0x39674cu: goto label_39674c;
        case 0x396750u: goto label_396750;
        case 0x396754u: goto label_396754;
        case 0x396758u: goto label_396758;
        case 0x39675cu: goto label_39675c;
        case 0x396760u: goto label_396760;
        case 0x396764u: goto label_396764;
        case 0x396768u: goto label_396768;
        case 0x39676cu: goto label_39676c;
        case 0x396770u: goto label_396770;
        case 0x396774u: goto label_396774;
        case 0x396778u: goto label_396778;
        case 0x39677cu: goto label_39677c;
        case 0x396780u: goto label_396780;
        case 0x396784u: goto label_396784;
        case 0x396788u: goto label_396788;
        case 0x39678cu: goto label_39678c;
        case 0x396790u: goto label_396790;
        case 0x396794u: goto label_396794;
        case 0x396798u: goto label_396798;
        case 0x39679cu: goto label_39679c;
        case 0x3967a0u: goto label_3967a0;
        case 0x3967a4u: goto label_3967a4;
        case 0x3967a8u: goto label_3967a8;
        case 0x3967acu: goto label_3967ac;
        case 0x3967b0u: goto label_3967b0;
        case 0x3967b4u: goto label_3967b4;
        case 0x3967b8u: goto label_3967b8;
        case 0x3967bcu: goto label_3967bc;
        case 0x3967c0u: goto label_3967c0;
        case 0x3967c4u: goto label_3967c4;
        case 0x3967c8u: goto label_3967c8;
        case 0x3967ccu: goto label_3967cc;
        case 0x3967d0u: goto label_3967d0;
        case 0x3967d4u: goto label_3967d4;
        case 0x3967d8u: goto label_3967d8;
        case 0x3967dcu: goto label_3967dc;
        case 0x3967e0u: goto label_3967e0;
        case 0x3967e4u: goto label_3967e4;
        case 0x3967e8u: goto label_3967e8;
        case 0x3967ecu: goto label_3967ec;
        case 0x3967f0u: goto label_3967f0;
        case 0x3967f4u: goto label_3967f4;
        case 0x3967f8u: goto label_3967f8;
        case 0x3967fcu: goto label_3967fc;
        case 0x396800u: goto label_396800;
        case 0x396804u: goto label_396804;
        case 0x396808u: goto label_396808;
        case 0x39680cu: goto label_39680c;
        case 0x396810u: goto label_396810;
        case 0x396814u: goto label_396814;
        case 0x396818u: goto label_396818;
        case 0x39681cu: goto label_39681c;
        case 0x396820u: goto label_396820;
        case 0x396824u: goto label_396824;
        case 0x396828u: goto label_396828;
        case 0x39682cu: goto label_39682c;
        case 0x396830u: goto label_396830;
        case 0x396834u: goto label_396834;
        case 0x396838u: goto label_396838;
        case 0x39683cu: goto label_39683c;
        case 0x396840u: goto label_396840;
        case 0x396844u: goto label_396844;
        case 0x396848u: goto label_396848;
        case 0x39684cu: goto label_39684c;
        case 0x396850u: goto label_396850;
        case 0x396854u: goto label_396854;
        case 0x396858u: goto label_396858;
        case 0x39685cu: goto label_39685c;
        case 0x396860u: goto label_396860;
        case 0x396864u: goto label_396864;
        case 0x396868u: goto label_396868;
        case 0x39686cu: goto label_39686c;
        case 0x396870u: goto label_396870;
        case 0x396874u: goto label_396874;
        case 0x396878u: goto label_396878;
        case 0x39687cu: goto label_39687c;
        case 0x396880u: goto label_396880;
        case 0x396884u: goto label_396884;
        case 0x396888u: goto label_396888;
        case 0x39688cu: goto label_39688c;
        case 0x396890u: goto label_396890;
        case 0x396894u: goto label_396894;
        case 0x396898u: goto label_396898;
        case 0x39689cu: goto label_39689c;
        case 0x3968a0u: goto label_3968a0;
        case 0x3968a4u: goto label_3968a4;
        case 0x3968a8u: goto label_3968a8;
        case 0x3968acu: goto label_3968ac;
        case 0x3968b0u: goto label_3968b0;
        case 0x3968b4u: goto label_3968b4;
        case 0x3968b8u: goto label_3968b8;
        case 0x3968bcu: goto label_3968bc;
        case 0x3968c0u: goto label_3968c0;
        case 0x3968c4u: goto label_3968c4;
        case 0x3968c8u: goto label_3968c8;
        case 0x3968ccu: goto label_3968cc;
        case 0x3968d0u: goto label_3968d0;
        case 0x3968d4u: goto label_3968d4;
        case 0x3968d8u: goto label_3968d8;
        case 0x3968dcu: goto label_3968dc;
        case 0x3968e0u: goto label_3968e0;
        case 0x3968e4u: goto label_3968e4;
        case 0x3968e8u: goto label_3968e8;
        case 0x3968ecu: goto label_3968ec;
        case 0x3968f0u: goto label_3968f0;
        case 0x3968f4u: goto label_3968f4;
        case 0x3968f8u: goto label_3968f8;
        case 0x3968fcu: goto label_3968fc;
        case 0x396900u: goto label_396900;
        case 0x396904u: goto label_396904;
        case 0x396908u: goto label_396908;
        case 0x39690cu: goto label_39690c;
        case 0x396910u: goto label_396910;
        case 0x396914u: goto label_396914;
        case 0x396918u: goto label_396918;
        case 0x39691cu: goto label_39691c;
        case 0x396920u: goto label_396920;
        case 0x396924u: goto label_396924;
        case 0x396928u: goto label_396928;
        case 0x39692cu: goto label_39692c;
        case 0x396930u: goto label_396930;
        case 0x396934u: goto label_396934;
        case 0x396938u: goto label_396938;
        case 0x39693cu: goto label_39693c;
        case 0x396940u: goto label_396940;
        case 0x396944u: goto label_396944;
        case 0x396948u: goto label_396948;
        case 0x39694cu: goto label_39694c;
        case 0x396950u: goto label_396950;
        case 0x396954u: goto label_396954;
        case 0x396958u: goto label_396958;
        case 0x39695cu: goto label_39695c;
        case 0x396960u: goto label_396960;
        case 0x396964u: goto label_396964;
        case 0x396968u: goto label_396968;
        case 0x39696cu: goto label_39696c;
        case 0x396970u: goto label_396970;
        case 0x396974u: goto label_396974;
        case 0x396978u: goto label_396978;
        case 0x39697cu: goto label_39697c;
        case 0x396980u: goto label_396980;
        case 0x396984u: goto label_396984;
        case 0x396988u: goto label_396988;
        case 0x39698cu: goto label_39698c;
        case 0x396990u: goto label_396990;
        case 0x396994u: goto label_396994;
        case 0x396998u: goto label_396998;
        case 0x39699cu: goto label_39699c;
        case 0x3969a0u: goto label_3969a0;
        case 0x3969a4u: goto label_3969a4;
        case 0x3969a8u: goto label_3969a8;
        case 0x3969acu: goto label_3969ac;
        case 0x3969b0u: goto label_3969b0;
        case 0x3969b4u: goto label_3969b4;
        case 0x3969b8u: goto label_3969b8;
        case 0x3969bcu: goto label_3969bc;
        case 0x3969c0u: goto label_3969c0;
        case 0x3969c4u: goto label_3969c4;
        case 0x3969c8u: goto label_3969c8;
        case 0x3969ccu: goto label_3969cc;
        case 0x3969d0u: goto label_3969d0;
        case 0x3969d4u: goto label_3969d4;
        case 0x3969d8u: goto label_3969d8;
        case 0x3969dcu: goto label_3969dc;
        case 0x3969e0u: goto label_3969e0;
        case 0x3969e4u: goto label_3969e4;
        case 0x3969e8u: goto label_3969e8;
        case 0x3969ecu: goto label_3969ec;
        case 0x3969f0u: goto label_3969f0;
        case 0x3969f4u: goto label_3969f4;
        case 0x3969f8u: goto label_3969f8;
        case 0x3969fcu: goto label_3969fc;
        case 0x396a00u: goto label_396a00;
        case 0x396a04u: goto label_396a04;
        case 0x396a08u: goto label_396a08;
        case 0x396a0cu: goto label_396a0c;
        case 0x396a10u: goto label_396a10;
        case 0x396a14u: goto label_396a14;
        case 0x396a18u: goto label_396a18;
        case 0x396a1cu: goto label_396a1c;
        case 0x396a20u: goto label_396a20;
        case 0x396a24u: goto label_396a24;
        case 0x396a28u: goto label_396a28;
        case 0x396a2cu: goto label_396a2c;
        case 0x396a30u: goto label_396a30;
        case 0x396a34u: goto label_396a34;
        case 0x396a38u: goto label_396a38;
        case 0x396a3cu: goto label_396a3c;
        case 0x396a40u: goto label_396a40;
        case 0x396a44u: goto label_396a44;
        case 0x396a48u: goto label_396a48;
        case 0x396a4cu: goto label_396a4c;
        case 0x396a50u: goto label_396a50;
        case 0x396a54u: goto label_396a54;
        case 0x396a58u: goto label_396a58;
        case 0x396a5cu: goto label_396a5c;
        case 0x396a60u: goto label_396a60;
        case 0x396a64u: goto label_396a64;
        case 0x396a68u: goto label_396a68;
        case 0x396a6cu: goto label_396a6c;
        case 0x396a70u: goto label_396a70;
        case 0x396a74u: goto label_396a74;
        case 0x396a78u: goto label_396a78;
        case 0x396a7cu: goto label_396a7c;
        case 0x396a80u: goto label_396a80;
        case 0x396a84u: goto label_396a84;
        case 0x396a88u: goto label_396a88;
        case 0x396a8cu: goto label_396a8c;
        case 0x396a90u: goto label_396a90;
        case 0x396a94u: goto label_396a94;
        case 0x396a98u: goto label_396a98;
        case 0x396a9cu: goto label_396a9c;
        case 0x396aa0u: goto label_396aa0;
        case 0x396aa4u: goto label_396aa4;
        case 0x396aa8u: goto label_396aa8;
        case 0x396aacu: goto label_396aac;
        case 0x396ab0u: goto label_396ab0;
        case 0x396ab4u: goto label_396ab4;
        case 0x396ab8u: goto label_396ab8;
        case 0x396abcu: goto label_396abc;
        case 0x396ac0u: goto label_396ac0;
        case 0x396ac4u: goto label_396ac4;
        case 0x396ac8u: goto label_396ac8;
        case 0x396accu: goto label_396acc;
        case 0x396ad0u: goto label_396ad0;
        case 0x396ad4u: goto label_396ad4;
        case 0x396ad8u: goto label_396ad8;
        case 0x396adcu: goto label_396adc;
        case 0x396ae0u: goto label_396ae0;
        case 0x396ae4u: goto label_396ae4;
        case 0x396ae8u: goto label_396ae8;
        case 0x396aecu: goto label_396aec;
        case 0x396af0u: goto label_396af0;
        case 0x396af4u: goto label_396af4;
        case 0x396af8u: goto label_396af8;
        case 0x396afcu: goto label_396afc;
        case 0x396b00u: goto label_396b00;
        case 0x396b04u: goto label_396b04;
        case 0x396b08u: goto label_396b08;
        case 0x396b0cu: goto label_396b0c;
        case 0x396b10u: goto label_396b10;
        case 0x396b14u: goto label_396b14;
        case 0x396b18u: goto label_396b18;
        case 0x396b1cu: goto label_396b1c;
        case 0x396b20u: goto label_396b20;
        case 0x396b24u: goto label_396b24;
        case 0x396b28u: goto label_396b28;
        case 0x396b2cu: goto label_396b2c;
        case 0x396b30u: goto label_396b30;
        case 0x396b34u: goto label_396b34;
        case 0x396b38u: goto label_396b38;
        case 0x396b3cu: goto label_396b3c;
        case 0x396b40u: goto label_396b40;
        case 0x396b44u: goto label_396b44;
        case 0x396b48u: goto label_396b48;
        case 0x396b4cu: goto label_396b4c;
        case 0x396b50u: goto label_396b50;
        case 0x396b54u: goto label_396b54;
        case 0x396b58u: goto label_396b58;
        case 0x396b5cu: goto label_396b5c;
        case 0x396b60u: goto label_396b60;
        case 0x396b64u: goto label_396b64;
        case 0x396b68u: goto label_396b68;
        case 0x396b6cu: goto label_396b6c;
        case 0x396b70u: goto label_396b70;
        case 0x396b74u: goto label_396b74;
        case 0x396b78u: goto label_396b78;
        case 0x396b7cu: goto label_396b7c;
        case 0x396b80u: goto label_396b80;
        case 0x396b84u: goto label_396b84;
        case 0x396b88u: goto label_396b88;
        case 0x396b8cu: goto label_396b8c;
        case 0x396b90u: goto label_396b90;
        case 0x396b94u: goto label_396b94;
        case 0x396b98u: goto label_396b98;
        case 0x396b9cu: goto label_396b9c;
        case 0x396ba0u: goto label_396ba0;
        case 0x396ba4u: goto label_396ba4;
        case 0x396ba8u: goto label_396ba8;
        case 0x396bacu: goto label_396bac;
        case 0x396bb0u: goto label_396bb0;
        case 0x396bb4u: goto label_396bb4;
        case 0x396bb8u: goto label_396bb8;
        case 0x396bbcu: goto label_396bbc;
        case 0x396bc0u: goto label_396bc0;
        case 0x396bc4u: goto label_396bc4;
        case 0x396bc8u: goto label_396bc8;
        case 0x396bccu: goto label_396bcc;
        case 0x396bd0u: goto label_396bd0;
        case 0x396bd4u: goto label_396bd4;
        case 0x396bd8u: goto label_396bd8;
        case 0x396bdcu: goto label_396bdc;
        case 0x396be0u: goto label_396be0;
        case 0x396be4u: goto label_396be4;
        case 0x396be8u: goto label_396be8;
        case 0x396becu: goto label_396bec;
        case 0x396bf0u: goto label_396bf0;
        case 0x396bf4u: goto label_396bf4;
        case 0x396bf8u: goto label_396bf8;
        case 0x396bfcu: goto label_396bfc;
        case 0x396c00u: goto label_396c00;
        case 0x396c04u: goto label_396c04;
        case 0x396c08u: goto label_396c08;
        case 0x396c0cu: goto label_396c0c;
        case 0x396c10u: goto label_396c10;
        case 0x396c14u: goto label_396c14;
        case 0x396c18u: goto label_396c18;
        case 0x396c1cu: goto label_396c1c;
        case 0x396c20u: goto label_396c20;
        case 0x396c24u: goto label_396c24;
        case 0x396c28u: goto label_396c28;
        case 0x396c2cu: goto label_396c2c;
        case 0x396c30u: goto label_396c30;
        case 0x396c34u: goto label_396c34;
        case 0x396c38u: goto label_396c38;
        case 0x396c3cu: goto label_396c3c;
        case 0x396c40u: goto label_396c40;
        case 0x396c44u: goto label_396c44;
        case 0x396c48u: goto label_396c48;
        case 0x396c4cu: goto label_396c4c;
        case 0x396c50u: goto label_396c50;
        case 0x396c54u: goto label_396c54;
        case 0x396c58u: goto label_396c58;
        case 0x396c5cu: goto label_396c5c;
        case 0x396c60u: goto label_396c60;
        case 0x396c64u: goto label_396c64;
        case 0x396c68u: goto label_396c68;
        case 0x396c6cu: goto label_396c6c;
        case 0x396c70u: goto label_396c70;
        case 0x396c74u: goto label_396c74;
        case 0x396c78u: goto label_396c78;
        case 0x396c7cu: goto label_396c7c;
        case 0x396c80u: goto label_396c80;
        case 0x396c84u: goto label_396c84;
        case 0x396c88u: goto label_396c88;
        case 0x396c8cu: goto label_396c8c;
        case 0x396c90u: goto label_396c90;
        case 0x396c94u: goto label_396c94;
        case 0x396c98u: goto label_396c98;
        case 0x396c9cu: goto label_396c9c;
        case 0x396ca0u: goto label_396ca0;
        case 0x396ca4u: goto label_396ca4;
        case 0x396ca8u: goto label_396ca8;
        case 0x396cacu: goto label_396cac;
        case 0x396cb0u: goto label_396cb0;
        case 0x396cb4u: goto label_396cb4;
        case 0x396cb8u: goto label_396cb8;
        case 0x396cbcu: goto label_396cbc;
        case 0x396cc0u: goto label_396cc0;
        case 0x396cc4u: goto label_396cc4;
        case 0x396cc8u: goto label_396cc8;
        case 0x396cccu: goto label_396ccc;
        case 0x396cd0u: goto label_396cd0;
        case 0x396cd4u: goto label_396cd4;
        case 0x396cd8u: goto label_396cd8;
        case 0x396cdcu: goto label_396cdc;
        case 0x396ce0u: goto label_396ce0;
        case 0x396ce4u: goto label_396ce4;
        case 0x396ce8u: goto label_396ce8;
        case 0x396cecu: goto label_396cec;
        case 0x396cf0u: goto label_396cf0;
        case 0x396cf4u: goto label_396cf4;
        case 0x396cf8u: goto label_396cf8;
        case 0x396cfcu: goto label_396cfc;
        case 0x396d00u: goto label_396d00;
        case 0x396d04u: goto label_396d04;
        case 0x396d08u: goto label_396d08;
        case 0x396d0cu: goto label_396d0c;
        case 0x396d10u: goto label_396d10;
        case 0x396d14u: goto label_396d14;
        case 0x396d18u: goto label_396d18;
        case 0x396d1cu: goto label_396d1c;
        case 0x396d20u: goto label_396d20;
        case 0x396d24u: goto label_396d24;
        case 0x396d28u: goto label_396d28;
        case 0x396d2cu: goto label_396d2c;
        case 0x396d30u: goto label_396d30;
        case 0x396d34u: goto label_396d34;
        case 0x396d38u: goto label_396d38;
        case 0x396d3cu: goto label_396d3c;
        case 0x396d40u: goto label_396d40;
        case 0x396d44u: goto label_396d44;
        case 0x396d48u: goto label_396d48;
        case 0x396d4cu: goto label_396d4c;
        case 0x396d50u: goto label_396d50;
        case 0x396d54u: goto label_396d54;
        case 0x396d58u: goto label_396d58;
        case 0x396d5cu: goto label_396d5c;
        case 0x396d60u: goto label_396d60;
        case 0x396d64u: goto label_396d64;
        case 0x396d68u: goto label_396d68;
        case 0x396d6cu: goto label_396d6c;
        case 0x396d70u: goto label_396d70;
        case 0x396d74u: goto label_396d74;
        case 0x396d78u: goto label_396d78;
        case 0x396d7cu: goto label_396d7c;
        case 0x396d80u: goto label_396d80;
        case 0x396d84u: goto label_396d84;
        case 0x396d88u: goto label_396d88;
        case 0x396d8cu: goto label_396d8c;
        case 0x396d90u: goto label_396d90;
        case 0x396d94u: goto label_396d94;
        case 0x396d98u: goto label_396d98;
        case 0x396d9cu: goto label_396d9c;
        case 0x396da0u: goto label_396da0;
        case 0x396da4u: goto label_396da4;
        case 0x396da8u: goto label_396da8;
        case 0x396dacu: goto label_396dac;
        case 0x396db0u: goto label_396db0;
        case 0x396db4u: goto label_396db4;
        case 0x396db8u: goto label_396db8;
        case 0x396dbcu: goto label_396dbc;
        case 0x396dc0u: goto label_396dc0;
        case 0x396dc4u: goto label_396dc4;
        case 0x396dc8u: goto label_396dc8;
        case 0x396dccu: goto label_396dcc;
        case 0x396dd0u: goto label_396dd0;
        case 0x396dd4u: goto label_396dd4;
        case 0x396dd8u: goto label_396dd8;
        case 0x396ddcu: goto label_396ddc;
        case 0x396de0u: goto label_396de0;
        case 0x396de4u: goto label_396de4;
        case 0x396de8u: goto label_396de8;
        case 0x396decu: goto label_396dec;
        case 0x396df0u: goto label_396df0;
        case 0x396df4u: goto label_396df4;
        case 0x396df8u: goto label_396df8;
        case 0x396dfcu: goto label_396dfc;
        case 0x396e00u: goto label_396e00;
        case 0x396e04u: goto label_396e04;
        case 0x396e08u: goto label_396e08;
        case 0x396e0cu: goto label_396e0c;
        case 0x396e10u: goto label_396e10;
        case 0x396e14u: goto label_396e14;
        case 0x396e18u: goto label_396e18;
        case 0x396e1cu: goto label_396e1c;
        case 0x396e20u: goto label_396e20;
        case 0x396e24u: goto label_396e24;
        case 0x396e28u: goto label_396e28;
        case 0x396e2cu: goto label_396e2c;
        case 0x396e30u: goto label_396e30;
        case 0x396e34u: goto label_396e34;
        case 0x396e38u: goto label_396e38;
        case 0x396e3cu: goto label_396e3c;
        default: break;
    }

    ctx->pc = 0x396520u;

label_396520:
    // 0x396520: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x396520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_396524:
    // 0x396524: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x396524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_396528:
    // 0x396528: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x396528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_39652c:
    // 0x39652c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x39652cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_396530:
    // 0x396530: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x396530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_396534:
    // 0x396534: 0x246380b8  addiu       $v1, $v1, -0x7F48
    ctx->pc = 0x396534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934712));
label_396538:
    // 0x396538: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x396538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_39653c:
    // 0x39653c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x39653cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_396540:
    // 0x396540: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x396540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_396544:
    // 0x396544: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x396544u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_396548:
    // 0x396548: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x396548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_39654c:
    // 0x39654c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x39654cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_396550:
    // 0x396550: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x396550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_396554:
    // 0x396554: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x396554u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_396558:
    // 0x396558: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x396558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_39655c:
    // 0x39655c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39655cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_396560:
    // 0x396560: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x396560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_396564:
    // 0x396564: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x396564u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_396568:
    // 0x396568: 0x26900004  addiu       $s0, $s4, 0x4
    ctx->pc = 0x396568u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_39656c:
    // 0x39656c: 0xac546480  sw          $s4, 0x6480($v0)
    ctx->pc = 0x39656cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25728), GPR_U32(ctx, 20));
label_396570:
    // 0x396570: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x396570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_396574:
    // 0x396574: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x396574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_396578:
    // 0x396578: 0xc10ca68  jal         func_4329A0
label_39657c:
    if (ctx->pc == 0x39657Cu) {
        ctx->pc = 0x39657Cu;
            // 0x39657c: 0x34458a88  ori         $a1, $v0, 0x8A88 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
        ctx->pc = 0x396580u;
        goto label_396580;
    }
    ctx->pc = 0x396578u;
    SET_GPR_U32(ctx, 31, 0x396580u);
    ctx->pc = 0x39657Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x396578u;
            // 0x39657c: 0x34458a88  ori         $a1, $v0, 0x8A88 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396580u; }
        if (ctx->pc != 0x396580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396580u; }
        if (ctx->pc != 0x396580u) { return; }
    }
    ctx->pc = 0x396580u;
label_396580:
    // 0x396580: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x396580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_396584:
    // 0x396584: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x396584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_396588:
    // 0x396588: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x396588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_39658c:
    // 0x39658c: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x39658cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
label_396590:
    // 0x396590: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x396590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_396594:
    // 0x396594: 0x246380d0  addiu       $v1, $v1, -0x7F30
    ctx->pc = 0x396594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934736));
label_396598:
    // 0x396598: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x396598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_39659c:
    // 0x39659c: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x39659cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
label_3965a0:
    // 0x3965a0: 0x244280dc  addiu       $v0, $v0, -0x7F24
    ctx->pc = 0x3965a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934748));
label_3965a4:
    // 0x3965a4: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x3965a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_3965a8:
    // 0x3965a8: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x3965a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_3965ac:
    // 0x3965ac: 0x2684006c  addiu       $a0, $s4, 0x6C
    ctx->pc = 0x3965acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
label_3965b0:
    // 0x3965b0: 0xae800058  sw          $zero, 0x58($s4)
    ctx->pc = 0x3965b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 0));
label_3965b4:
    // 0x3965b4: 0x24a56af0  addiu       $a1, $a1, 0x6AF0
    ctx->pc = 0x3965b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27376));
label_3965b8:
    // 0x3965b8: 0xae80005c  sw          $zero, 0x5C($s4)
    ctx->pc = 0x3965b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 0));
label_3965bc:
    // 0x3965bc: 0x24c66a80  addiu       $a2, $a2, 0x6A80
    ctx->pc = 0x3965bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27264));
label_3965c0:
    // 0x3965c0: 0xae800060  sw          $zero, 0x60($s4)
    ctx->pc = 0x3965c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 96), GPR_U32(ctx, 0));
label_3965c4:
    // 0x3965c4: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x3965c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3965c8:
    // 0x3965c8: 0xae800064  sw          $zero, 0x64($s4)
    ctx->pc = 0x3965c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 0));
label_3965cc:
    // 0x3965cc: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x3965ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3965d0:
    // 0x3965d0: 0xc040804  jal         func_102010
label_3965d4:
    if (ctx->pc == 0x3965D4u) {
        ctx->pc = 0x3965D4u;
            // 0x3965d4: 0xae800068  sw          $zero, 0x68($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x3965D8u;
        goto label_3965d8;
    }
    ctx->pc = 0x3965D0u;
    SET_GPR_U32(ctx, 31, 0x3965D8u);
    ctx->pc = 0x3965D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3965D0u;
            // 0x3965d4: 0xae800068  sw          $zero, 0x68($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102010u;
    if (runtime->hasFunction(0x102010u)) {
        auto targetFn = runtime->lookupFunction(0x102010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3965D8u; }
        if (ctx->pc != 0x3965D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102010_0x102010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3965D8u; }
        if (ctx->pc != 0x3965D8u) { return; }
    }
    ctx->pc = 0x3965D8u;
label_3965d8:
    // 0x3965d8: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x3965d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
label_3965dc:
    // 0x3965dc: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x3965dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
label_3965e0:
    // 0x3965e0: 0x2684012c  addiu       $a0, $s4, 0x12C
    ctx->pc = 0x3965e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 300));
label_3965e4:
    // 0x3965e4: 0x24a56a60  addiu       $a1, $a1, 0x6A60
    ctx->pc = 0x3965e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27232));
label_3965e8:
    // 0x3965e8: 0x24c669f0  addiu       $a2, $a2, 0x69F0
    ctx->pc = 0x3965e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27120));
label_3965ec:
    // 0x3965ec: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x3965ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3965f0:
    // 0x3965f0: 0xc040804  jal         func_102010
label_3965f4:
    if (ctx->pc == 0x3965F4u) {
        ctx->pc = 0x3965F4u;
            // 0x3965f4: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3965F8u;
        goto label_3965f8;
    }
    ctx->pc = 0x3965F0u;
    SET_GPR_U32(ctx, 31, 0x3965F8u);
    ctx->pc = 0x3965F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3965F0u;
            // 0x3965f4: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102010u;
    if (runtime->hasFunction(0x102010u)) {
        auto targetFn = runtime->lookupFunction(0x102010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3965F8u; }
        if (ctx->pc != 0x3965F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102010_0x102010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3965F8u; }
        if (ctx->pc != 0x3965F8u) { return; }
    }
    ctx->pc = 0x3965F8u;
label_3965f8:
    // 0x3965f8: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x3965f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
label_3965fc:
    // 0x3965fc: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x3965fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
label_396600:
    // 0x396600: 0x268401ec  addiu       $a0, $s4, 0x1EC
    ctx->pc = 0x396600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 492));
label_396604:
    // 0x396604: 0x24a569d0  addiu       $a1, $a1, 0x69D0
    ctx->pc = 0x396604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27088));
label_396608:
    // 0x396608: 0x24c66960  addiu       $a2, $a2, 0x6960
    ctx->pc = 0x396608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26976));
label_39660c:
    // 0x39660c: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x39660cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_396610:
    // 0x396610: 0xc040804  jal         func_102010
label_396614:
    if (ctx->pc == 0x396614u) {
        ctx->pc = 0x396614u;
            // 0x396614: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x396618u;
        goto label_396618;
    }
    ctx->pc = 0x396610u;
    SET_GPR_U32(ctx, 31, 0x396618u);
    ctx->pc = 0x396614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x396610u;
            // 0x396614: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102010u;
    if (runtime->hasFunction(0x102010u)) {
        auto targetFn = runtime->lookupFunction(0x102010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396618u; }
        if (ctx->pc != 0x396618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102010_0x102010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396618u; }
        if (ctx->pc != 0x396618u) { return; }
    }
    ctx->pc = 0x396618u;
label_396618:
    // 0x396618: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x396618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_39661c:
    // 0x39661c: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x39661cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_396620:
    // 0x396620: 0x8c420968  lw          $v0, 0x968($v0)
    ctx->pc = 0x396620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
label_396624:
    // 0x396624: 0x245effff  addiu       $fp, $v0, -0x1
    ctx->pc = 0x396624u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_396628:
    // 0x396628: 0x7c30003  bgezl       $fp, . + 4 + (0x3 << 2)
label_39662c:
    if (ctx->pc == 0x39662Cu) {
        ctx->pc = 0x39662Cu;
            // 0x39662c: 0x24040fb0  addiu       $a0, $zero, 0xFB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4016));
        ctx->pc = 0x396630u;
        goto label_396630;
    }
    ctx->pc = 0x396628u;
    {
        const bool branch_taken_0x396628 = (GPR_S32(ctx, 30) >= 0);
        if (branch_taken_0x396628) {
            ctx->pc = 0x39662Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x396628u;
            // 0x39662c: 0x24040fb0  addiu       $a0, $zero, 0xFB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4016));
        ctx->in_delay_slot = false;
            ctx->pc = 0x396638u;
            goto label_396638;
        }
    }
    ctx->pc = 0x396630u;
label_396630:
    // 0x396630: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x396630u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396634:
    // 0x396634: 0x24040fb0  addiu       $a0, $zero, 0xFB0
    ctx->pc = 0x396634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4016));
label_396638:
    // 0x396638: 0xc040138  jal         func_1004E0
label_39663c:
    if (ctx->pc == 0x39663Cu) {
        ctx->pc = 0x396640u;
        goto label_396640;
    }
    ctx->pc = 0x396638u;
    SET_GPR_U32(ctx, 31, 0x396640u);
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396640u; }
        if (ctx->pc != 0x396640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396640u; }
        if (ctx->pc != 0x396640u) { return; }
    }
    ctx->pc = 0x396640u;
label_396640:
    // 0x396640: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x396640u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
label_396644:
    // 0x396644: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x396644u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
label_396648:
    // 0x396648: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x396648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39664c:
    // 0x39664c: 0x24a56900  addiu       $a1, $a1, 0x6900
    ctx->pc = 0x39664cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26880));
label_396650:
    // 0x396650: 0x24c64f30  addiu       $a2, $a2, 0x4F30
    ctx->pc = 0x396650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20272));
label_396654:
    // 0x396654: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x396654u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_396658:
    // 0x396658: 0xc040840  jal         func_102100
label_39665c:
    if (ctx->pc == 0x39665Cu) {
        ctx->pc = 0x39665Cu;
            // 0x39665c: 0x24080032  addiu       $t0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->pc = 0x396660u;
        goto label_396660;
    }
    ctx->pc = 0x396658u;
    SET_GPR_U32(ctx, 31, 0x396660u);
    ctx->pc = 0x39665Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x396658u;
            // 0x39665c: 0x24080032  addiu       $t0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396660u; }
        if (ctx->pc != 0x396660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396660u; }
        if (ctx->pc != 0x396660u) { return; }
    }
    ctx->pc = 0x396660u;
label_396660:
    // 0x396660: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x396660u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_396664:
    // 0x396664: 0x26840058  addiu       $a0, $s4, 0x58
    ctx->pc = 0x396664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 88));
label_396668:
    // 0x396668: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x396668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_39666c:
    // 0x39666c: 0xc0788fc  jal         func_1E23F0
label_396670:
    if (ctx->pc == 0x396670u) {
        ctx->pc = 0x396670u;
            // 0x396670: 0xae930064  sw          $s3, 0x64($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 19));
        ctx->pc = 0x396674u;
        goto label_396674;
    }
    ctx->pc = 0x39666Cu;
    SET_GPR_U32(ctx, 31, 0x396674u);
    ctx->pc = 0x396670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39666Cu;
            // 0x396670: 0xae930064  sw          $s3, 0x64($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396674u; }
        if (ctx->pc != 0x396674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396674u; }
        if (ctx->pc != 0x396674u) { return; }
    }
    ctx->pc = 0x396674u;
label_396674:
    // 0x396674: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x396674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_396678:
    // 0x396678: 0x1eb880  sll         $s7, $fp, 2
    ctx->pc = 0x396678u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
label_39667c:
    // 0x39667c: 0x24429820  addiu       $v0, $v0, -0x67E0
    ctx->pc = 0x39667cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940704));
label_396680:
    // 0x396680: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x396680u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396684:
    // 0x396684: 0x571821  addu        $v1, $v0, $s7
    ctx->pc = 0x396684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_396688:
    // 0x396688: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x396688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39668c:
    // 0x39668c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x39668cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_396690:
    // 0x396690: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x396690u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_396694:
    // 0x396694: 0x24421c20  addiu       $v0, $v0, 0x1C20
    ctx->pc = 0x396694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7200));
label_396698:
    // 0x396698: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x396698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_39669c:
    // 0x39669c: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x39669cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3966a0:
    // 0x3966a0: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x3966a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3966a4:
    // 0x3966a4: 0xafb300ac  sw          $s3, 0xAC($sp)
    ctx->pc = 0x3966a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 19));
label_3966a8:
    // 0x3966a8: 0x26840058  addiu       $a0, $s4, 0x58
    ctx->pc = 0x3966a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 88));
label_3966ac:
    // 0x3966ac: 0x8e83005c  lw          $v1, 0x5C($s4)
    ctx->pc = 0x3966acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_3966b0:
    // 0x3966b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3966b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3966b4:
    // 0x3966b4: 0x8e820060  lw          $v0, 0x60($s4)
    ctx->pc = 0x3966b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
label_3966b8:
    // 0x3966b8: 0x27a700ac  addiu       $a3, $sp, 0xAC
    ctx->pc = 0x3966b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_3966bc:
    // 0x3966bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3966bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3966c0:
    // 0x3966c0: 0xc0a997c  jal         func_2A65F0
label_3966c4:
    if (ctx->pc == 0x3966C4u) {
        ctx->pc = 0x3966C4u;
            // 0x3966c4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x3966C8u;
        goto label_3966c8;
    }
    ctx->pc = 0x3966C0u;
    SET_GPR_U32(ctx, 31, 0x3966C8u);
    ctx->pc = 0x3966C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3966C0u;
            // 0x3966c4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3966C8u; }
        if (ctx->pc != 0x3966C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3966C8u; }
        if (ctx->pc != 0x3966C8u) { return; }
    }
    ctx->pc = 0x3966C8u;
label_3966c8:
    // 0x3966c8: 0x236082b  sltu        $at, $s1, $s6
    ctx->pc = 0x3966c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_3966cc:
    // 0x3966cc: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_3966d0:
    if (ctx->pc == 0x3966D0u) {
        ctx->pc = 0x3966D4u;
        goto label_3966d4;
    }
    ctx->pc = 0x3966CCu;
    {
        const bool branch_taken_0x3966cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3966cc) {
            ctx->pc = 0x396708u;
            goto label_396708;
        }
    }
    ctx->pc = 0x3966D4u;
label_3966d4:
    // 0x3966d4: 0x8e820060  lw          $v0, 0x60($s4)
    ctx->pc = 0x3966d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
label_3966d8:
    // 0x3966d8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3966d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3966dc:
    // 0x3966dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3966dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3966e0:
    // 0x3966e0: 0xac550048  sw          $s5, 0x48($v0)
    ctx->pc = 0x3966e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 21));
label_3966e4:
    // 0x3966e4: 0xac510044  sw          $s1, 0x44($v0)
    ctx->pc = 0x3966e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 17));
label_3966e8:
    // 0x3966e8: 0x8e820060  lw          $v0, 0x60($s4)
    ctx->pc = 0x3966e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
label_3966ec:
    // 0x3966ec: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3966ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3966f0:
    // 0x3966f0: 0xc0e5874  jal         func_3961D0
label_3966f4:
    if (ctx->pc == 0x3966F4u) {
        ctx->pc = 0x3966F4u;
            // 0x3966f4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x3966F8u;
        goto label_3966f8;
    }
    ctx->pc = 0x3966F0u;
    SET_GPR_U32(ctx, 31, 0x3966F8u);
    ctx->pc = 0x3966F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3966F0u;
            // 0x3966f4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3961D0u;
    if (runtime->hasFunction(0x3961D0u)) {
        auto targetFn = runtime->lookupFunction(0x3961D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3966F8u; }
        if (ctx->pc != 0x3966F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003961D0_0x3961d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3966F8u; }
        if (ctx->pc != 0x3966F8u) { return; }
    }
    ctx->pc = 0x3966F8u;
label_3966f8:
    // 0x3966f8: 0x8e820068  lw          $v0, 0x68($s4)
    ctx->pc = 0x3966f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 104)));
label_3966fc:
    // 0x3966fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3966fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_396700:
    // 0x396700: 0xae820068  sw          $v0, 0x68($s4)
    ctx->pc = 0x396700u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 104), GPR_U32(ctx, 2));
label_396704:
    // 0x396704: 0x0  nop
    ctx->pc = 0x396704u;
    // NOP
label_396708:
    // 0x396708: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x396708u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_39670c:
    // 0x39670c: 0x2e220032  sltiu       $v0, $s1, 0x32
    ctx->pc = 0x39670cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
label_396710:
    // 0x396710: 0x26730050  addiu       $s3, $s3, 0x50
    ctx->pc = 0x396710u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
label_396714:
    // 0x396714: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x396714u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_396718:
    // 0x396718: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_39671c:
    if (ctx->pc == 0x39671Cu) {
        ctx->pc = 0x39671Cu;
            // 0x39671c: 0x26b50044  addiu       $s5, $s5, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 68));
        ctx->pc = 0x396720u;
        goto label_396720;
    }
    ctx->pc = 0x396718u;
    {
        const bool branch_taken_0x396718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39671Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x396718u;
            // 0x39671c: 0x26b50044  addiu       $s5, $s5, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396718) {
            ctx->pc = 0x3966A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3966a4;
        }
    }
    ctx->pc = 0x396720u;
label_396720:
    // 0x396720: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x396720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_396724:
    // 0x396724: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x396724u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396728:
    // 0x396728: 0x2442d640  addiu       $v0, $v0, -0x29C0
    ctx->pc = 0x396728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956608));
label_39672c:
    // 0x39672c: 0x579821  addu        $s3, $v0, $s7
    ctx->pc = 0x39672cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_396730:
    // 0x396730: 0x1e1040  sll         $v0, $fp, 1
    ctx->pc = 0x396730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
label_396734:
    // 0x396734: 0x5e1821  addu        $v1, $v0, $fp
    ctx->pc = 0x396734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_396738:
    // 0x396738: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x396738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_39673c:
    // 0x39673c: 0x38080  sll         $s0, $v1, 2
    ctx->pc = 0x39673cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_396740:
    // 0x396740: 0x2442dd60  addiu       $v0, $v0, -0x22A0
    ctx->pc = 0x396740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958432));
label_396744:
    // 0x396744: 0x57a821  addu        $s5, $v0, $s7
    ctx->pc = 0x396744u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_396748:
    // 0x396748: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x396748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_39674c:
    // 0x39674c: 0x2442f1e0  addiu       $v0, $v0, -0xE20
    ctx->pc = 0x39674cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963680));
label_396750:
    // 0x396750: 0x57b821  addu        $s7, $v0, $s7
    ctx->pc = 0x396750u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_396754:
    // 0x396754: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x396754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_396758:
    // 0x396758: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x396758u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_39675c:
    // 0x39675c: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
label_396760:
    if (ctx->pc == 0x396760u) {
        ctx->pc = 0x396764u;
        goto label_396764;
    }
    ctx->pc = 0x39675Cu;
    {
        const bool branch_taken_0x39675c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x39675c) {
            ctx->pc = 0x396858u;
            goto label_396858;
        }
    }
    ctx->pc = 0x396764u;
label_396764:
    // 0x396764: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x396764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_396768:
    // 0x396768: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x396768u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_39676c:
    // 0x39676c: 0x24636d80  addiu       $v1, $v1, 0x6D80
    ctx->pc = 0x39676cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28032));
label_396770:
    // 0x396770: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x396770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_396774:
    // 0x396774: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x396774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_396778:
    // 0x396778: 0x400008  jr          $v0
label_39677c:
    if (ctx->pc == 0x39677Cu) {
        ctx->pc = 0x396780u;
        goto label_396780;
    }
    ctx->pc = 0x396778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x396780u: goto label_396780;
            case 0x3967D0u: goto label_3967d0;
            case 0x396818u: goto label_396818;
            default: break;
        }
        return;
    }
    ctx->pc = 0x396780u;
label_396780:
    // 0x396780: 0x8e48003c  lw          $t0, 0x3C($s2)
    ctx->pc = 0x396780u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_396784:
    // 0x396784: 0x2141021  addu        $v0, $s0, $s4
    ctx->pc = 0x396784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_396788:
    // 0x396788: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x396788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_39678c:
    // 0x39678c: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x39678cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
label_396790:
    // 0x396790: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x396790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_396794:
    // 0x396794: 0x82840  sll         $a1, $t0, 1
    ctx->pc = 0x396794u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_396798:
    // 0x396798: 0x27a700a8  addiu       $a3, $sp, 0xA8
    ctx->pc = 0x396798u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_39679c:
    // 0x39679c: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x39679cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_3967a0:
    // 0x3967a0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3967a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3967a4:
    // 0x3967a4: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x3967a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_3967a8:
    // 0x3967a8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3967a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3967ac:
    // 0x3967ac: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3967acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3967b0:
    // 0x3967b0: 0xafa300a8  sw          $v1, 0xA8($sp)
    ctx->pc = 0x3967b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
label_3967b4:
    // 0x3967b4: 0x8c430070  lw          $v1, 0x70($v0)
    ctx->pc = 0x3967b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_3967b8:
    // 0x3967b8: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x3967b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3967bc:
    // 0x3967bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3967bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3967c0:
    // 0x3967c0: 0xc0a997c  jal         func_2A65F0
label_3967c4:
    if (ctx->pc == 0x3967C4u) {
        ctx->pc = 0x3967C4u;
            // 0x3967c4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x3967C8u;
        goto label_3967c8;
    }
    ctx->pc = 0x3967C0u;
    SET_GPR_U32(ctx, 31, 0x3967C8u);
    ctx->pc = 0x3967C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3967C0u;
            // 0x3967c4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3967C8u; }
        if (ctx->pc != 0x3967C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3967C8u; }
        if (ctx->pc != 0x3967C8u) { return; }
    }
    ctx->pc = 0x3967C8u;
label_3967c8:
    // 0x3967c8: 0x10000023  b           . + 4 + (0x23 << 2)
label_3967cc:
    if (ctx->pc == 0x3967CCu) {
        ctx->pc = 0x3967D0u;
        goto label_3967d0;
    }
    ctx->pc = 0x3967C8u;
    {
        const bool branch_taken_0x3967c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3967c8) {
            ctx->pc = 0x396858u;
            goto label_396858;
        }
    }
    ctx->pc = 0x3967D0u;
label_3967d0:
    // 0x3967d0: 0x8e48003c  lw          $t0, 0x3C($s2)
    ctx->pc = 0x3967d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_3967d4:
    // 0x3967d4: 0x2141021  addu        $v0, $s0, $s4
    ctx->pc = 0x3967d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_3967d8:
    // 0x3967d8: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x3967d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3967dc:
    // 0x3967dc: 0x2444012c  addiu       $a0, $v0, 0x12C
    ctx->pc = 0x3967dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
label_3967e0:
    // 0x3967e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3967e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3967e4:
    // 0x3967e4: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x3967e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_3967e8:
    // 0x3967e8: 0x27a700a4  addiu       $a3, $sp, 0xA4
    ctx->pc = 0x3967e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
label_3967ec:
    // 0x3967ec: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x3967ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_3967f0:
    // 0x3967f0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3967f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_3967f4:
    // 0x3967f4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3967f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3967f8:
    // 0x3967f8: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x3967f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
label_3967fc:
    // 0x3967fc: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x3967fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_396800:
    // 0x396800: 0x8c420134  lw          $v0, 0x134($v0)
    ctx->pc = 0x396800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
label_396804:
    // 0x396804: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x396804u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_396808:
    // 0x396808: 0xc0a997c  jal         func_2A65F0
label_39680c:
    if (ctx->pc == 0x39680Cu) {
        ctx->pc = 0x39680Cu;
            // 0x39680c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x396810u;
        goto label_396810;
    }
    ctx->pc = 0x396808u;
    SET_GPR_U32(ctx, 31, 0x396810u);
    ctx->pc = 0x39680Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x396808u;
            // 0x39680c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396810u; }
        if (ctx->pc != 0x396810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396810u; }
        if (ctx->pc != 0x396810u) { return; }
    }
    ctx->pc = 0x396810u;
label_396810:
    // 0x396810: 0x10000011  b           . + 4 + (0x11 << 2)
label_396814:
    if (ctx->pc == 0x396814u) {
        ctx->pc = 0x396818u;
        goto label_396818;
    }
    ctx->pc = 0x396810u;
    {
        const bool branch_taken_0x396810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x396810) {
            ctx->pc = 0x396858u;
            goto label_396858;
        }
    }
    ctx->pc = 0x396818u;
label_396818:
    // 0x396818: 0x8e48003c  lw          $t0, 0x3C($s2)
    ctx->pc = 0x396818u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_39681c:
    // 0x39681c: 0x2141021  addu        $v0, $s0, $s4
    ctx->pc = 0x39681cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_396820:
    // 0x396820: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x396820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_396824:
    // 0x396824: 0x244401ec  addiu       $a0, $v0, 0x1EC
    ctx->pc = 0x396824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 492));
label_396828:
    // 0x396828: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x396828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39682c:
    // 0x39682c: 0x82900  sll         $a1, $t0, 4
    ctx->pc = 0x39682cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_396830:
    // 0x396830: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x396830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_396834:
    // 0x396834: 0xa82823  subu        $a1, $a1, $t0
    ctx->pc = 0x396834u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_396838:
    // 0x396838: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x396838u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_39683c:
    // 0x39683c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x39683cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_396840:
    // 0x396840: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x396840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_396844:
    // 0x396844: 0x8c4301f0  lw          $v1, 0x1F0($v0)
    ctx->pc = 0x396844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 496)));
label_396848:
    // 0x396848: 0x8c4201f4  lw          $v0, 0x1F4($v0)
    ctx->pc = 0x396848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 500)));
label_39684c:
    // 0x39684c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x39684cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_396850:
    // 0x396850: 0xc0a997c  jal         func_2A65F0
label_396854:
    if (ctx->pc == 0x396854u) {
        ctx->pc = 0x396854u;
            // 0x396854: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x396858u;
        goto label_396858;
    }
    ctx->pc = 0x396850u;
    SET_GPR_U32(ctx, 31, 0x396858u);
    ctx->pc = 0x396854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x396850u;
            // 0x396854: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396858u; }
        if (ctx->pc != 0x396858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396858u; }
        if (ctx->pc != 0x396858u) { return; }
    }
    ctx->pc = 0x396858u;
label_396858:
    // 0x396858: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x396858u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_39685c:
    // 0x39685c: 0x236102b  sltu        $v0, $s1, $s6
    ctx->pc = 0x39685cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_396860:
    // 0x396860: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
label_396864:
    if (ctx->pc == 0x396864u) {
        ctx->pc = 0x396864u;
            // 0x396864: 0x26520044  addiu       $s2, $s2, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
        ctx->pc = 0x396868u;
        goto label_396868;
    }
    ctx->pc = 0x396860u;
    {
        const bool branch_taken_0x396860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x396864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x396860u;
            // 0x396864: 0x26520044  addiu       $s2, $s2, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396860) {
            ctx->pc = 0x396754u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_396754;
        }
    }
    ctx->pc = 0x396868u;
label_396868:
    // 0x396868: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x396868u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39686c:
    // 0x39686c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x39686cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_396870:
    // 0x396870: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x396870u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_396874:
    // 0x396874: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x396874u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_396878:
    // 0x396878: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x396878u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_39687c:
    // 0x39687c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x39687cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_396880:
    // 0x396880: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x396880u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_396884:
    // 0x396884: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x396884u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_396888:
    // 0x396888: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x396888u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39688c:
    // 0x39688c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39688cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_396890:
    // 0x396890: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x396890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_396894:
    // 0x396894: 0x3e00008  jr          $ra
label_396898:
    if (ctx->pc == 0x396898u) {
        ctx->pc = 0x396898u;
            // 0x396898: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x39689Cu;
        goto label_39689c;
    }
    ctx->pc = 0x396894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x396894u;
            // 0x396898: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39689Cu;
label_39689c:
    // 0x39689c: 0x0  nop
    ctx->pc = 0x39689cu;
    // NOP
label_3968a0:
    // 0x3968a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3968a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3968a4:
    // 0x3968a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3968a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3968a8:
    // 0x3968a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3968a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3968ac:
    // 0x3968ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3968acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3968b0:
    // 0x3968b0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_3968b4:
    if (ctx->pc == 0x3968B4u) {
        ctx->pc = 0x3968B4u;
            // 0x3968b4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3968B8u;
        goto label_3968b8;
    }
    ctx->pc = 0x3968B0u;
    {
        const bool branch_taken_0x3968b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3968b0) {
            ctx->pc = 0x3968B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3968B0u;
            // 0x3968b4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3968E4u;
            goto label_3968e4;
        }
    }
    ctx->pc = 0x3968B8u;
label_3968b8:
    // 0x3968b8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3968b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3968bc:
    // 0x3968bc: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x3968bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
label_3968c0:
    // 0x3968c0: 0x244280b8  addiu       $v0, $v0, -0x7F48
    ctx->pc = 0x3968c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934712));
label_3968c4:
    // 0x3968c4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3968c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_3968c8:
    // 0x3968c8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3968c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3968cc:
    // 0x3968cc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3968ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3968d0:
    // 0x3968d0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
label_3968d4:
    if (ctx->pc == 0x3968D4u) {
        ctx->pc = 0x3968D4u;
            // 0x3968d4: 0xac406480  sw          $zero, 0x6480($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 25728), GPR_U32(ctx, 0));
        ctx->pc = 0x3968D8u;
        goto label_3968d8;
    }
    ctx->pc = 0x3968D0u;
    {
        const bool branch_taken_0x3968d0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3968D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3968D0u;
            // 0x3968d4: 0xac406480  sw          $zero, 0x6480($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 25728), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3968d0) {
            ctx->pc = 0x3968E0u;
            goto label_3968e0;
        }
    }
    ctx->pc = 0x3968D8u;
label_3968d8:
    // 0x3968d8: 0xc0400a8  jal         func_1002A0
label_3968dc:
    if (ctx->pc == 0x3968DCu) {
        ctx->pc = 0x3968E0u;
        goto label_3968e0;
    }
    ctx->pc = 0x3968D8u;
    SET_GPR_U32(ctx, 31, 0x3968E0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3968E0u; }
        if (ctx->pc != 0x3968E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3968E0u; }
        if (ctx->pc != 0x3968E0u) { return; }
    }
    ctx->pc = 0x3968E0u;
label_3968e0:
    // 0x3968e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3968e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3968e4:
    // 0x3968e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3968e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3968e8:
    // 0x3968e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3968e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3968ec:
    // 0x3968ec: 0x3e00008  jr          $ra
label_3968f0:
    if (ctx->pc == 0x3968F0u) {
        ctx->pc = 0x3968F0u;
            // 0x3968f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3968F4u;
        goto label_3968f4;
    }
    ctx->pc = 0x3968ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3968F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3968ECu;
            // 0x3968f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3968F4u;
label_3968f4:
    // 0x3968f4: 0x0  nop
    ctx->pc = 0x3968f4u;
    // NOP
label_3968f8:
    // 0x3968f8: 0x0  nop
    ctx->pc = 0x3968f8u;
    // NOP
label_3968fc:
    // 0x3968fc: 0x0  nop
    ctx->pc = 0x3968fcu;
    // NOP
label_396900:
    // 0x396900: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x396900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_396904:
    // 0x396904: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x396904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_396908:
    // 0x396908: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x396908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_39690c:
    // 0x39690c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x39690cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_396910:
    // 0x396910: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x396910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_396914:
    // 0x396914: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x396914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_396918:
    // 0x396918: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x396918u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_39691c:
    // 0x39691c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x39691cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_396920:
    // 0x396920: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x396920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_396924:
    // 0x396924: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x396924u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_396928:
    // 0x396928: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x396928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_39692c:
    // 0x39692c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x39692cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_396930:
    // 0x396930: 0x24428080  addiu       $v0, $v0, -0x7F80
    ctx->pc = 0x396930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934656));
label_396934:
    // 0x396934: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x396934u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_396938:
    // 0x396938: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x396938u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_39693c:
    // 0x39693c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x39693cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_396940:
    // 0x396940: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x396940u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_396944:
    // 0x396944: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x396944u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_396948:
    // 0x396948: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x396948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
label_39694c:
    // 0x39694c: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x39694cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
label_396950:
    // 0x396950: 0x3e00008  jr          $ra
label_396954:
    if (ctx->pc == 0x396954u) {
        ctx->pc = 0x396954u;
            // 0x396954: 0xac800048  sw          $zero, 0x48($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
        ctx->pc = 0x396958u;
        goto label_396958;
    }
    ctx->pc = 0x396950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x396950u;
            // 0x396954: 0xac800048  sw          $zero, 0x48($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x396958u;
label_396958:
    // 0x396958: 0x0  nop
    ctx->pc = 0x396958u;
    // NOP
label_39695c:
    // 0x39695c: 0x0  nop
    ctx->pc = 0x39695cu;
    // NOP
label_396960:
    // 0x396960: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x396960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_396964:
    // 0x396964: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x396964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_396968:
    // 0x396968: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x396968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_39696c:
    // 0x39696c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39696cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_396970:
    // 0x396970: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x396970u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_396974:
    // 0x396974: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_396978:
    if (ctx->pc == 0x396978u) {
        ctx->pc = 0x396978u;
            // 0x396978: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39697Cu;
        goto label_39697c;
    }
    ctx->pc = 0x396974u;
    {
        const bool branch_taken_0x396974 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x396978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x396974u;
            // 0x396978: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396974) {
            ctx->pc = 0x3969B8u;
            goto label_3969b8;
        }
    }
    ctx->pc = 0x39697Cu;
label_39697c:
    // 0x39697c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_396980:
    if (ctx->pc == 0x396980u) {
        ctx->pc = 0x396980u;
            // 0x396980: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x396984u;
        goto label_396984;
    }
    ctx->pc = 0x39697Cu;
    {
        const bool branch_taken_0x39697c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x39697c) {
            ctx->pc = 0x396980u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39697Cu;
            // 0x396980: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3969A4u;
            goto label_3969a4;
        }
    }
    ctx->pc = 0x396984u;
label_396984:
    // 0x396984: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_396988:
    if (ctx->pc == 0x396988u) {
        ctx->pc = 0x39698Cu;
        goto label_39698c;
    }
    ctx->pc = 0x396984u;
    {
        const bool branch_taken_0x396984 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x396984) {
            ctx->pc = 0x3969A0u;
            goto label_3969a0;
        }
    }
    ctx->pc = 0x39698Cu;
label_39698c:
    // 0x39698c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x39698cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_396990:
    // 0x396990: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_396994:
    if (ctx->pc == 0x396994u) {
        ctx->pc = 0x396998u;
        goto label_396998;
    }
    ctx->pc = 0x396990u;
    {
        const bool branch_taken_0x396990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x396990) {
            ctx->pc = 0x3969A0u;
            goto label_3969a0;
        }
    }
    ctx->pc = 0x396998u;
label_396998:
    // 0x396998: 0xc0400a8  jal         func_1002A0
label_39699c:
    if (ctx->pc == 0x39699Cu) {
        ctx->pc = 0x3969A0u;
        goto label_3969a0;
    }
    ctx->pc = 0x396998u;
    SET_GPR_U32(ctx, 31, 0x3969A0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3969A0u; }
        if (ctx->pc != 0x3969A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3969A0u; }
        if (ctx->pc != 0x3969A0u) { return; }
    }
    ctx->pc = 0x3969A0u;
label_3969a0:
    // 0x3969a0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3969a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3969a4:
    // 0x3969a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3969a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3969a8:
    // 0x3969a8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3969ac:
    if (ctx->pc == 0x3969ACu) {
        ctx->pc = 0x3969ACu;
            // 0x3969ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3969B0u;
        goto label_3969b0;
    }
    ctx->pc = 0x3969A8u;
    {
        const bool branch_taken_0x3969a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3969a8) {
            ctx->pc = 0x3969ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3969A8u;
            // 0x3969ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3969BCu;
            goto label_3969bc;
        }
    }
    ctx->pc = 0x3969B0u;
label_3969b0:
    // 0x3969b0: 0xc0400a8  jal         func_1002A0
label_3969b4:
    if (ctx->pc == 0x3969B4u) {
        ctx->pc = 0x3969B4u;
            // 0x3969b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3969B8u;
        goto label_3969b8;
    }
    ctx->pc = 0x3969B0u;
    SET_GPR_U32(ctx, 31, 0x3969B8u);
    ctx->pc = 0x3969B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3969B0u;
            // 0x3969b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3969B8u; }
        if (ctx->pc != 0x3969B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3969B8u; }
        if (ctx->pc != 0x3969B8u) { return; }
    }
    ctx->pc = 0x3969B8u;
label_3969b8:
    // 0x3969b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3969b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3969bc:
    // 0x3969bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3969bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3969c0:
    // 0x3969c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3969c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3969c4:
    // 0x3969c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3969c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3969c8:
    // 0x3969c8: 0x3e00008  jr          $ra
label_3969cc:
    if (ctx->pc == 0x3969CCu) {
        ctx->pc = 0x3969CCu;
            // 0x3969cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3969D0u;
        goto label_3969d0;
    }
    ctx->pc = 0x3969C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3969CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3969C8u;
            // 0x3969cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3969D0u;
label_3969d0:
    // 0x3969d0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3969d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_3969d4:
    // 0x3969d4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3969d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3969d8:
    // 0x3969d8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3969d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_3969dc:
    // 0x3969dc: 0x3e00008  jr          $ra
label_3969e0:
    if (ctx->pc == 0x3969E0u) {
        ctx->pc = 0x3969E0u;
            // 0x3969e0: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->pc = 0x3969E4u;
        goto label_3969e4;
    }
    ctx->pc = 0x3969DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3969E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3969DCu;
            // 0x3969e0: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3969E4u;
label_3969e4:
    // 0x3969e4: 0x0  nop
    ctx->pc = 0x3969e4u;
    // NOP
label_3969e8:
    // 0x3969e8: 0x0  nop
    ctx->pc = 0x3969e8u;
    // NOP
label_3969ec:
    // 0x3969ec: 0x0  nop
    ctx->pc = 0x3969ecu;
    // NOP
label_3969f0:
    // 0x3969f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3969f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3969f4:
    // 0x3969f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3969f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3969f8:
    // 0x3969f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3969f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3969fc:
    // 0x3969fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3969fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_396a00:
    // 0x396a00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x396a00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_396a04:
    // 0x396a04: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_396a08:
    if (ctx->pc == 0x396A08u) {
        ctx->pc = 0x396A08u;
            // 0x396a08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x396A0Cu;
        goto label_396a0c;
    }
    ctx->pc = 0x396A04u;
    {
        const bool branch_taken_0x396a04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x396A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x396A04u;
            // 0x396a08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396a04) {
            ctx->pc = 0x396A48u;
            goto label_396a48;
        }
    }
    ctx->pc = 0x396A0Cu;
label_396a0c:
    // 0x396a0c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_396a10:
    if (ctx->pc == 0x396A10u) {
        ctx->pc = 0x396A10u;
            // 0x396a10: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x396A14u;
        goto label_396a14;
    }
    ctx->pc = 0x396A0Cu;
    {
        const bool branch_taken_0x396a0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x396a0c) {
            ctx->pc = 0x396A10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x396A0Cu;
            // 0x396a10: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x396A34u;
            goto label_396a34;
        }
    }
    ctx->pc = 0x396A14u;
label_396a14:
    // 0x396a14: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_396a18:
    if (ctx->pc == 0x396A18u) {
        ctx->pc = 0x396A1Cu;
        goto label_396a1c;
    }
    ctx->pc = 0x396A14u;
    {
        const bool branch_taken_0x396a14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x396a14) {
            ctx->pc = 0x396A30u;
            goto label_396a30;
        }
    }
    ctx->pc = 0x396A1Cu;
label_396a1c:
    // 0x396a1c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x396a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_396a20:
    // 0x396a20: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_396a24:
    if (ctx->pc == 0x396A24u) {
        ctx->pc = 0x396A28u;
        goto label_396a28;
    }
    ctx->pc = 0x396A20u;
    {
        const bool branch_taken_0x396a20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x396a20) {
            ctx->pc = 0x396A30u;
            goto label_396a30;
        }
    }
    ctx->pc = 0x396A28u;
label_396a28:
    // 0x396a28: 0xc0400a8  jal         func_1002A0
label_396a2c:
    if (ctx->pc == 0x396A2Cu) {
        ctx->pc = 0x396A30u;
        goto label_396a30;
    }
    ctx->pc = 0x396A28u;
    SET_GPR_U32(ctx, 31, 0x396A30u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396A30u; }
        if (ctx->pc != 0x396A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396A30u; }
        if (ctx->pc != 0x396A30u) { return; }
    }
    ctx->pc = 0x396A30u;
label_396a30:
    // 0x396a30: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x396a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_396a34:
    // 0x396a34: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x396a34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_396a38:
    // 0x396a38: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_396a3c:
    if (ctx->pc == 0x396A3Cu) {
        ctx->pc = 0x396A3Cu;
            // 0x396a3c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x396A40u;
        goto label_396a40;
    }
    ctx->pc = 0x396A38u;
    {
        const bool branch_taken_0x396a38 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x396a38) {
            ctx->pc = 0x396A3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x396A38u;
            // 0x396a3c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x396A4Cu;
            goto label_396a4c;
        }
    }
    ctx->pc = 0x396A40u;
label_396a40:
    // 0x396a40: 0xc0400a8  jal         func_1002A0
label_396a44:
    if (ctx->pc == 0x396A44u) {
        ctx->pc = 0x396A44u;
            // 0x396a44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x396A48u;
        goto label_396a48;
    }
    ctx->pc = 0x396A40u;
    SET_GPR_U32(ctx, 31, 0x396A48u);
    ctx->pc = 0x396A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x396A40u;
            // 0x396a44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396A48u; }
        if (ctx->pc != 0x396A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396A48u; }
        if (ctx->pc != 0x396A48u) { return; }
    }
    ctx->pc = 0x396A48u;
label_396a48:
    // 0x396a48: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x396a48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_396a4c:
    // 0x396a4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x396a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_396a50:
    // 0x396a50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x396a50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_396a54:
    // 0x396a54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x396a54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_396a58:
    // 0x396a58: 0x3e00008  jr          $ra
label_396a5c:
    if (ctx->pc == 0x396A5Cu) {
        ctx->pc = 0x396A5Cu;
            // 0x396a5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x396A60u;
        goto label_396a60;
    }
    ctx->pc = 0x396A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x396A58u;
            // 0x396a5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x396A60u;
label_396a60:
    // 0x396a60: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x396a60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_396a64:
    // 0x396a64: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x396a64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_396a68:
    // 0x396a68: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x396a68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_396a6c:
    // 0x396a6c: 0x3e00008  jr          $ra
label_396a70:
    if (ctx->pc == 0x396A70u) {
        ctx->pc = 0x396A70u;
            // 0x396a70: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->pc = 0x396A74u;
        goto label_396a74;
    }
    ctx->pc = 0x396A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x396A6Cu;
            // 0x396a70: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x396A74u;
label_396a74:
    // 0x396a74: 0x0  nop
    ctx->pc = 0x396a74u;
    // NOP
label_396a78:
    // 0x396a78: 0x0  nop
    ctx->pc = 0x396a78u;
    // NOP
label_396a7c:
    // 0x396a7c: 0x0  nop
    ctx->pc = 0x396a7cu;
    // NOP
label_396a80:
    // 0x396a80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x396a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_396a84:
    // 0x396a84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x396a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_396a88:
    // 0x396a88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x396a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_396a8c:
    // 0x396a8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x396a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_396a90:
    // 0x396a90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x396a90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_396a94:
    // 0x396a94: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_396a98:
    if (ctx->pc == 0x396A98u) {
        ctx->pc = 0x396A98u;
            // 0x396a98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x396A9Cu;
        goto label_396a9c;
    }
    ctx->pc = 0x396A94u;
    {
        const bool branch_taken_0x396a94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x396A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x396A94u;
            // 0x396a98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396a94) {
            ctx->pc = 0x396AD8u;
            goto label_396ad8;
        }
    }
    ctx->pc = 0x396A9Cu;
label_396a9c:
    // 0x396a9c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_396aa0:
    if (ctx->pc == 0x396AA0u) {
        ctx->pc = 0x396AA0u;
            // 0x396aa0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x396AA4u;
        goto label_396aa4;
    }
    ctx->pc = 0x396A9Cu;
    {
        const bool branch_taken_0x396a9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x396a9c) {
            ctx->pc = 0x396AA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x396A9Cu;
            // 0x396aa0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x396AC4u;
            goto label_396ac4;
        }
    }
    ctx->pc = 0x396AA4u;
label_396aa4:
    // 0x396aa4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_396aa8:
    if (ctx->pc == 0x396AA8u) {
        ctx->pc = 0x396AACu;
        goto label_396aac;
    }
    ctx->pc = 0x396AA4u;
    {
        const bool branch_taken_0x396aa4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x396aa4) {
            ctx->pc = 0x396AC0u;
            goto label_396ac0;
        }
    }
    ctx->pc = 0x396AACu;
label_396aac:
    // 0x396aac: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x396aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_396ab0:
    // 0x396ab0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_396ab4:
    if (ctx->pc == 0x396AB4u) {
        ctx->pc = 0x396AB8u;
        goto label_396ab8;
    }
    ctx->pc = 0x396AB0u;
    {
        const bool branch_taken_0x396ab0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x396ab0) {
            ctx->pc = 0x396AC0u;
            goto label_396ac0;
        }
    }
    ctx->pc = 0x396AB8u;
label_396ab8:
    // 0x396ab8: 0xc0400a8  jal         func_1002A0
label_396abc:
    if (ctx->pc == 0x396ABCu) {
        ctx->pc = 0x396AC0u;
        goto label_396ac0;
    }
    ctx->pc = 0x396AB8u;
    SET_GPR_U32(ctx, 31, 0x396AC0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396AC0u; }
        if (ctx->pc != 0x396AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396AC0u; }
        if (ctx->pc != 0x396AC0u) { return; }
    }
    ctx->pc = 0x396AC0u;
label_396ac0:
    // 0x396ac0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x396ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_396ac4:
    // 0x396ac4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x396ac4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_396ac8:
    // 0x396ac8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_396acc:
    if (ctx->pc == 0x396ACCu) {
        ctx->pc = 0x396ACCu;
            // 0x396acc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x396AD0u;
        goto label_396ad0;
    }
    ctx->pc = 0x396AC8u;
    {
        const bool branch_taken_0x396ac8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x396ac8) {
            ctx->pc = 0x396ACCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x396AC8u;
            // 0x396acc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x396ADCu;
            goto label_396adc;
        }
    }
    ctx->pc = 0x396AD0u;
label_396ad0:
    // 0x396ad0: 0xc0400a8  jal         func_1002A0
label_396ad4:
    if (ctx->pc == 0x396AD4u) {
        ctx->pc = 0x396AD4u;
            // 0x396ad4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x396AD8u;
        goto label_396ad8;
    }
    ctx->pc = 0x396AD0u;
    SET_GPR_U32(ctx, 31, 0x396AD8u);
    ctx->pc = 0x396AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x396AD0u;
            // 0x396ad4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396AD8u; }
        if (ctx->pc != 0x396AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396AD8u; }
        if (ctx->pc != 0x396AD8u) { return; }
    }
    ctx->pc = 0x396AD8u;
label_396ad8:
    // 0x396ad8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x396ad8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_396adc:
    // 0x396adc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x396adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_396ae0:
    // 0x396ae0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x396ae0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_396ae4:
    // 0x396ae4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x396ae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_396ae8:
    // 0x396ae8: 0x3e00008  jr          $ra
label_396aec:
    if (ctx->pc == 0x396AECu) {
        ctx->pc = 0x396AECu;
            // 0x396aec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x396AF0u;
        goto label_396af0;
    }
    ctx->pc = 0x396AE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x396AE8u;
            // 0x396aec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x396AF0u;
label_396af0:
    // 0x396af0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x396af0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_396af4:
    // 0x396af4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x396af4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_396af8:
    // 0x396af8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x396af8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_396afc:
    // 0x396afc: 0x3e00008  jr          $ra
label_396b00:
    if (ctx->pc == 0x396B00u) {
        ctx->pc = 0x396B00u;
            // 0x396b00: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->pc = 0x396B04u;
        goto label_396b04;
    }
    ctx->pc = 0x396AFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x396AFCu;
            // 0x396b00: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x396B04u;
label_396b04:
    // 0x396b04: 0x0  nop
    ctx->pc = 0x396b04u;
    // NOP
label_396b08:
    // 0x396b08: 0x0  nop
    ctx->pc = 0x396b08u;
    // NOP
label_396b0c:
    // 0x396b0c: 0x0  nop
    ctx->pc = 0x396b0cu;
    // NOP
label_396b10:
    // 0x396b10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x396b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_396b14:
    // 0x396b14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x396b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_396b18:
    // 0x396b18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x396b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_396b1c:
    // 0x396b1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x396b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_396b20:
    // 0x396b20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x396b20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_396b24:
    // 0x396b24: 0x1220003f  beqz        $s1, . + 4 + (0x3F << 2)
label_396b28:
    if (ctx->pc == 0x396B28u) {
        ctx->pc = 0x396B28u;
            // 0x396b28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x396B2Cu;
        goto label_396b2c;
    }
    ctx->pc = 0x396B24u;
    {
        const bool branch_taken_0x396b24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x396B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x396B24u;
            // 0x396b28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396b24) {
            ctx->pc = 0x396C24u;
            goto label_396c24;
        }
    }
    ctx->pc = 0x396B2Cu;
label_396b2c:
    // 0x396b2c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x396b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_396b30:
    // 0x396b30: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x396b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_396b34:
    // 0x396b34: 0x246380d0  addiu       $v1, $v1, -0x7F30
    ctx->pc = 0x396b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934736));
label_396b38:
    // 0x396b38: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x396b38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
label_396b3c:
    // 0x396b3c: 0x244280dc  addiu       $v0, $v0, -0x7F24
    ctx->pc = 0x396b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934748));
label_396b40:
    // 0x396b40: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x396b40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_396b44:
    // 0x396b44: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x396b44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_396b48:
    // 0x396b48: 0x8e240064  lw          $a0, 0x64($s1)
    ctx->pc = 0x396b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_396b4c:
    // 0x396b4c: 0xc0407c0  jal         func_101F00
label_396b50:
    if (ctx->pc == 0x396B50u) {
        ctx->pc = 0x396B50u;
            // 0x396b50: 0x24a54f30  addiu       $a1, $a1, 0x4F30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20272));
        ctx->pc = 0x396B54u;
        goto label_396b54;
    }
    ctx->pc = 0x396B4Cu;
    SET_GPR_U32(ctx, 31, 0x396B54u);
    ctx->pc = 0x396B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x396B4Cu;
            // 0x396b50: 0x24a54f30  addiu       $a1, $a1, 0x4F30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396B54u; }
        if (ctx->pc != 0x396B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396B54u; }
        if (ctx->pc != 0x396B54u) { return; }
    }
    ctx->pc = 0x396B54u;
label_396b54:
    // 0x396b54: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x396b54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
label_396b58:
    // 0x396b58: 0x262401ec  addiu       $a0, $s1, 0x1EC
    ctx->pc = 0x396b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 492));
label_396b5c:
    // 0x396b5c: 0x24a56960  addiu       $a1, $a1, 0x6960
    ctx->pc = 0x396b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26976));
label_396b60:
    // 0x396b60: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x396b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_396b64:
    // 0x396b64: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x396b64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_396b68:
    // 0x396b68: 0xc0407e8  jal         func_101FA0
label_396b6c:
    if (ctx->pc == 0x396B6Cu) {
        ctx->pc = 0x396B6Cu;
            // 0x396b6c: 0xae20005c  sw          $zero, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
        ctx->pc = 0x396B70u;
        goto label_396b70;
    }
    ctx->pc = 0x396B68u;
    SET_GPR_U32(ctx, 31, 0x396B70u);
    ctx->pc = 0x396B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x396B68u;
            // 0x396b6c: 0xae20005c  sw          $zero, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396B70u; }
        if (ctx->pc != 0x396B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396B70u; }
        if (ctx->pc != 0x396B70u) { return; }
    }
    ctx->pc = 0x396B70u;
label_396b70:
    // 0x396b70: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x396b70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
label_396b74:
    // 0x396b74: 0x2624012c  addiu       $a0, $s1, 0x12C
    ctx->pc = 0x396b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 300));
label_396b78:
    // 0x396b78: 0x24a569f0  addiu       $a1, $a1, 0x69F0
    ctx->pc = 0x396b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27120));
label_396b7c:
    // 0x396b7c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x396b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_396b80:
    // 0x396b80: 0xc0407e8  jal         func_101FA0
label_396b84:
    if (ctx->pc == 0x396B84u) {
        ctx->pc = 0x396B84u;
            // 0x396b84: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x396B88u;
        goto label_396b88;
    }
    ctx->pc = 0x396B80u;
    SET_GPR_U32(ctx, 31, 0x396B88u);
    ctx->pc = 0x396B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x396B80u;
            // 0x396b84: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396B88u; }
        if (ctx->pc != 0x396B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396B88u; }
        if (ctx->pc != 0x396B88u) { return; }
    }
    ctx->pc = 0x396B88u;
label_396b88:
    // 0x396b88: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x396b88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
label_396b8c:
    // 0x396b8c: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x396b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_396b90:
    // 0x396b90: 0x24a56a80  addiu       $a1, $a1, 0x6A80
    ctx->pc = 0x396b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27264));
label_396b94:
    // 0x396b94: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x396b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_396b98:
    // 0x396b98: 0xc0407e8  jal         func_101FA0
label_396b9c:
    if (ctx->pc == 0x396B9Cu) {
        ctx->pc = 0x396B9Cu;
            // 0x396b9c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x396BA0u;
        goto label_396ba0;
    }
    ctx->pc = 0x396B98u;
    SET_GPR_U32(ctx, 31, 0x396BA0u);
    ctx->pc = 0x396B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x396B98u;
            // 0x396b9c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396BA0u; }
        if (ctx->pc != 0x396BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396BA0u; }
        if (ctx->pc != 0x396BA0u) { return; }
    }
    ctx->pc = 0x396BA0u;
label_396ba0:
    // 0x396ba0: 0x26220058  addiu       $v0, $s1, 0x58
    ctx->pc = 0x396ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_396ba4:
    // 0x396ba4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_396ba8:
    if (ctx->pc == 0x396BA8u) {
        ctx->pc = 0x396BA8u;
            // 0x396ba8: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x396BACu;
        goto label_396bac;
    }
    ctx->pc = 0x396BA4u;
    {
        const bool branch_taken_0x396ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x396ba4) {
            ctx->pc = 0x396BA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x396BA4u;
            // 0x396ba8: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x396BD4u;
            goto label_396bd4;
        }
    }
    ctx->pc = 0x396BACu;
label_396bac:
    // 0x396bac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_396bb0:
    if (ctx->pc == 0x396BB0u) {
        ctx->pc = 0x396BB4u;
        goto label_396bb4;
    }
    ctx->pc = 0x396BACu;
    {
        const bool branch_taken_0x396bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x396bac) {
            ctx->pc = 0x396BD0u;
            goto label_396bd0;
        }
    }
    ctx->pc = 0x396BB4u;
label_396bb4:
    // 0x396bb4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_396bb8:
    if (ctx->pc == 0x396BB8u) {
        ctx->pc = 0x396BBCu;
        goto label_396bbc;
    }
    ctx->pc = 0x396BB4u;
    {
        const bool branch_taken_0x396bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x396bb4) {
            ctx->pc = 0x396BD0u;
            goto label_396bd0;
        }
    }
    ctx->pc = 0x396BBCu;
label_396bbc:
    // 0x396bbc: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x396bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_396bc0:
    // 0x396bc0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_396bc4:
    if (ctx->pc == 0x396BC4u) {
        ctx->pc = 0x396BC8u;
        goto label_396bc8;
    }
    ctx->pc = 0x396BC0u;
    {
        const bool branch_taken_0x396bc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x396bc0) {
            ctx->pc = 0x396BD0u;
            goto label_396bd0;
        }
    }
    ctx->pc = 0x396BC8u;
label_396bc8:
    // 0x396bc8: 0xc0400a8  jal         func_1002A0
label_396bcc:
    if (ctx->pc == 0x396BCCu) {
        ctx->pc = 0x396BD0u;
        goto label_396bd0;
    }
    ctx->pc = 0x396BC8u;
    SET_GPR_U32(ctx, 31, 0x396BD0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396BD0u; }
        if (ctx->pc != 0x396BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396BD0u; }
        if (ctx->pc != 0x396BD0u) { return; }
    }
    ctx->pc = 0x396BD0u;
label_396bd0:
    // 0x396bd0: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x396bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_396bd4:
    // 0x396bd4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_396bd8:
    if (ctx->pc == 0x396BD8u) {
        ctx->pc = 0x396BDCu;
        goto label_396bdc;
    }
    ctx->pc = 0x396BD4u;
    {
        const bool branch_taken_0x396bd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x396bd4) {
            ctx->pc = 0x396BF0u;
            goto label_396bf0;
        }
    }
    ctx->pc = 0x396BDCu;
label_396bdc:
    // 0x396bdc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x396bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_396be0:
    // 0x396be0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x396be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396be4:
    // 0x396be4: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x396be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_396be8:
    // 0x396be8: 0xc057a68  jal         func_15E9A0
label_396bec:
    if (ctx->pc == 0x396BECu) {
        ctx->pc = 0x396BECu;
            // 0x396bec: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x396BF0u;
        goto label_396bf0;
    }
    ctx->pc = 0x396BE8u;
    SET_GPR_U32(ctx, 31, 0x396BF0u);
    ctx->pc = 0x396BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x396BE8u;
            // 0x396bec: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396BF0u; }
        if (ctx->pc != 0x396BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396BF0u; }
        if (ctx->pc != 0x396BF0u) { return; }
    }
    ctx->pc = 0x396BF0u;
label_396bf0:
    // 0x396bf0: 0x52200007  beql        $s1, $zero, . + 4 + (0x7 << 2)
label_396bf4:
    if (ctx->pc == 0x396BF4u) {
        ctx->pc = 0x396BF4u;
            // 0x396bf4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x396BF8u;
        goto label_396bf8;
    }
    ctx->pc = 0x396BF0u;
    {
        const bool branch_taken_0x396bf0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x396bf0) {
            ctx->pc = 0x396BF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x396BF0u;
            // 0x396bf4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x396C10u;
            goto label_396c10;
        }
    }
    ctx->pc = 0x396BF8u;
label_396bf8:
    // 0x396bf8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x396bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_396bfc:
    // 0x396bfc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x396bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_396c00:
    // 0x396c00: 0x246380b8  addiu       $v1, $v1, -0x7F48
    ctx->pc = 0x396c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934712));
label_396c04:
    // 0x396c04: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x396c04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_396c08:
    // 0x396c08: 0xac406480  sw          $zero, 0x6480($v0)
    ctx->pc = 0x396c08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25728), GPR_U32(ctx, 0));
label_396c0c:
    // 0x396c0c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x396c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_396c10:
    // 0x396c10: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x396c10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_396c14:
    // 0x396c14: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_396c18:
    if (ctx->pc == 0x396C18u) {
        ctx->pc = 0x396C18u;
            // 0x396c18: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x396C1Cu;
        goto label_396c1c;
    }
    ctx->pc = 0x396C14u;
    {
        const bool branch_taken_0x396c14 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x396c14) {
            ctx->pc = 0x396C18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x396C14u;
            // 0x396c18: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x396C28u;
            goto label_396c28;
        }
    }
    ctx->pc = 0x396C1Cu;
label_396c1c:
    // 0x396c1c: 0xc0400a8  jal         func_1002A0
label_396c20:
    if (ctx->pc == 0x396C20u) {
        ctx->pc = 0x396C20u;
            // 0x396c20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x396C24u;
        goto label_396c24;
    }
    ctx->pc = 0x396C1Cu;
    SET_GPR_U32(ctx, 31, 0x396C24u);
    ctx->pc = 0x396C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x396C1Cu;
            // 0x396c20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396C24u; }
        if (ctx->pc != 0x396C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396C24u; }
        if (ctx->pc != 0x396C24u) { return; }
    }
    ctx->pc = 0x396C24u;
label_396c24:
    // 0x396c24: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x396c24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_396c28:
    // 0x396c28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x396c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_396c2c:
    // 0x396c2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x396c2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_396c30:
    // 0x396c30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x396c30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_396c34:
    // 0x396c34: 0x3e00008  jr          $ra
label_396c38:
    if (ctx->pc == 0x396C38u) {
        ctx->pc = 0x396C38u;
            // 0x396c38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x396C3Cu;
        goto label_396c3c;
    }
    ctx->pc = 0x396C34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x396C34u;
            // 0x396c38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x396C3Cu;
label_396c3c:
    // 0x396c3c: 0x0  nop
    ctx->pc = 0x396c3cu;
    // NOP
label_396c40:
    // 0x396c40: 0x80e590c  j           func_396430
label_396c44:
    if (ctx->pc == 0x396C44u) {
        ctx->pc = 0x396C44u;
            // 0x396c44: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x396C48u;
        goto label_396c48;
    }
    ctx->pc = 0x396C40u;
    ctx->pc = 0x396C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x396C40u;
            // 0x396c44: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x396430u;
    {
        auto targetFn = runtime->lookupFunction(0x396430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x396C48u;
label_396c48:
    // 0x396c48: 0x0  nop
    ctx->pc = 0x396c48u;
    // NOP
label_396c4c:
    // 0x396c4c: 0x0  nop
    ctx->pc = 0x396c4cu;
    // NOP
label_396c50:
    // 0x396c50: 0x80e5ac4  j           func_396B10
label_396c54:
    if (ctx->pc == 0x396C54u) {
        ctx->pc = 0x396C54u;
            // 0x396c54: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x396C58u;
        goto label_396c58;
    }
    ctx->pc = 0x396C50u;
    ctx->pc = 0x396C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x396C50u;
            // 0x396c54: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x396B10u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_396b10;
    ctx->pc = 0x396C58u;
label_396c58:
    // 0x396c58: 0x0  nop
    ctx->pc = 0x396c58u;
    // NOP
label_396c5c:
    // 0x396c5c: 0x0  nop
    ctx->pc = 0x396c5cu;
    // NOP
label_396c60:
    // 0x396c60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x396c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_396c64:
    // 0x396c64: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x396c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_396c68:
    // 0x396c68: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x396c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_396c6c:
    // 0x396c6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x396c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_396c70:
    // 0x396c70: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x396c70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_396c74:
    // 0x396c74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x396c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_396c78:
    // 0x396c78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x396c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_396c7c:
    // 0x396c7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x396c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_396c80:
    // 0x396c80: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x396c80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_396c84:
    // 0x396c84: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_396c88:
    if (ctx->pc == 0x396C88u) {
        ctx->pc = 0x396C88u;
            // 0x396c88: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x396C8Cu;
        goto label_396c8c;
    }
    ctx->pc = 0x396C84u;
    {
        const bool branch_taken_0x396c84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x396C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x396C84u;
            // 0x396c88: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396c84) {
            ctx->pc = 0x396CC8u;
            goto label_396cc8;
        }
    }
    ctx->pc = 0x396C8Cu;
label_396c8c:
    // 0x396c8c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x396c8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396c90:
    // 0x396c90: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x396c90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396c94:
    // 0x396c94: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x396c94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396c98:
    // 0x396c98: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x396c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_396c9c:
    // 0x396c9c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x396c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_396ca0:
    // 0x396ca0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x396ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_396ca4:
    // 0x396ca4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x396ca4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_396ca8:
    // 0x396ca8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x396ca8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_396cac:
    // 0x396cac: 0x320f809  jalr        $t9
label_396cb0:
    if (ctx->pc == 0x396CB0u) {
        ctx->pc = 0x396CB4u;
        goto label_396cb4;
    }
    ctx->pc = 0x396CACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x396CB4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x396CB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x396CB4u; }
            if (ctx->pc != 0x396CB4u) { return; }
        }
        }
    }
    ctx->pc = 0x396CB4u;
label_396cb4:
    // 0x396cb4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x396cb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_396cb8:
    // 0x396cb8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x396cb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_396cbc:
    // 0x396cbc: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x396cbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_396cc0:
    // 0x396cc0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_396cc4:
    if (ctx->pc == 0x396CC4u) {
        ctx->pc = 0x396CC4u;
            // 0x396cc4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x396CC8u;
        goto label_396cc8;
    }
    ctx->pc = 0x396CC0u;
    {
        const bool branch_taken_0x396cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x396CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x396CC0u;
            // 0x396cc4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396cc0) {
            ctx->pc = 0x396C98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_396c98;
        }
    }
    ctx->pc = 0x396CC8u;
label_396cc8:
    // 0x396cc8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x396cc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_396ccc:
    // 0x396ccc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x396cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_396cd0:
    // 0x396cd0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x396cd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_396cd4:
    // 0x396cd4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x396cd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_396cd8:
    // 0x396cd8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x396cd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_396cdc:
    // 0x396cdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x396cdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_396ce0:
    // 0x396ce0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x396ce0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_396ce4:
    // 0x396ce4: 0x3e00008  jr          $ra
label_396ce8:
    if (ctx->pc == 0x396CE8u) {
        ctx->pc = 0x396CE8u;
            // 0x396ce8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x396CECu;
        goto label_396cec;
    }
    ctx->pc = 0x396CE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x396CE4u;
            // 0x396ce8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x396CECu;
label_396cec:
    // 0x396cec: 0x0  nop
    ctx->pc = 0x396cecu;
    // NOP
label_396cf0:
    // 0x396cf0: 0x3e00008  jr          $ra
label_396cf4:
    if (ctx->pc == 0x396CF4u) {
        ctx->pc = 0x396CF4u;
            // 0x396cf4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x396CF8u;
        goto label_396cf8;
    }
    ctx->pc = 0x396CF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x396CF0u;
            // 0x396cf4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x396CF8u;
label_396cf8:
    // 0x396cf8: 0x0  nop
    ctx->pc = 0x396cf8u;
    // NOP
label_396cfc:
    // 0x396cfc: 0x0  nop
    ctx->pc = 0x396cfcu;
    // NOP
label_396d00:
    // 0x396d00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x396d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_396d04:
    // 0x396d04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x396d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_396d08:
    // 0x396d08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x396d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_396d0c:
    // 0x396d0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x396d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_396d10:
    // 0x396d10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x396d10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_396d14:
    // 0x396d14: 0x12200041  beqz        $s1, . + 4 + (0x41 << 2)
label_396d18:
    if (ctx->pc == 0x396D18u) {
        ctx->pc = 0x396D18u;
            // 0x396d18: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x396D1Cu;
        goto label_396d1c;
    }
    ctx->pc = 0x396D14u;
    {
        const bool branch_taken_0x396d14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x396D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x396D14u;
            // 0x396d18: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396d14) {
            ctx->pc = 0x396E1Cu;
            goto label_396e1c;
        }
    }
    ctx->pc = 0x396D1Cu;
label_396d1c:
    // 0x396d1c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x396d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_396d20:
    // 0x396d20: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x396d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_396d24:
    // 0x396d24: 0x24638110  addiu       $v1, $v1, -0x7EF0
    ctx->pc = 0x396d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934800));
label_396d28:
    // 0x396d28: 0x24428148  addiu       $v0, $v0, -0x7EB8
    ctx->pc = 0x396d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934856));
label_396d2c:
    // 0x396d2c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x396d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_396d30:
    // 0x396d30: 0x262400a4  addiu       $a0, $s1, 0xA4
    ctx->pc = 0x396d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 164));
label_396d34:
    // 0x396d34: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_396d38:
    if (ctx->pc == 0x396D38u) {
        ctx->pc = 0x396D38u;
            // 0x396d38: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x396D3Cu;
        goto label_396d3c;
    }
    ctx->pc = 0x396D34u;
    {
        const bool branch_taken_0x396d34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x396D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x396D34u;
            // 0x396d38: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396d34) {
            ctx->pc = 0x396D84u;
            goto label_396d84;
        }
    }
    ctx->pc = 0x396D3Cu;
label_396d3c:
    // 0x396d3c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x396d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_396d40:
    // 0x396d40: 0x24428220  addiu       $v0, $v0, -0x7DE0
    ctx->pc = 0x396d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935072));
label_396d44:
    // 0x396d44: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_396d48:
    if (ctx->pc == 0x396D48u) {
        ctx->pc = 0x396D48u;
            // 0x396d48: 0xae2200a4  sw          $v0, 0xA4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 2));
        ctx->pc = 0x396D4Cu;
        goto label_396d4c;
    }
    ctx->pc = 0x396D44u;
    {
        const bool branch_taken_0x396d44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x396D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x396D44u;
            // 0x396d48: 0xae2200a4  sw          $v0, 0xA4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396d44) {
            ctx->pc = 0x396D84u;
            goto label_396d84;
        }
    }
    ctx->pc = 0x396D4Cu;
label_396d4c:
    // 0x396d4c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x396d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_396d50:
    // 0x396d50: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x396d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_396d54:
    // 0x396d54: 0xc0d37dc  jal         func_34DF70
label_396d58:
    if (ctx->pc == 0x396D58u) {
        ctx->pc = 0x396D58u;
            // 0x396d58: 0xae2200a4  sw          $v0, 0xA4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 2));
        ctx->pc = 0x396D5Cu;
        goto label_396d5c;
    }
    ctx->pc = 0x396D54u;
    SET_GPR_U32(ctx, 31, 0x396D5Cu);
    ctx->pc = 0x396D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x396D54u;
            // 0x396d58: 0xae2200a4  sw          $v0, 0xA4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396D5Cu; }
        if (ctx->pc != 0x396D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396D5Cu; }
        if (ctx->pc != 0x396D5Cu) { return; }
    }
    ctx->pc = 0x396D5Cu;
label_396d5c:
    // 0x396d5c: 0x262300a4  addiu       $v1, $s1, 0xA4
    ctx->pc = 0x396d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 164));
label_396d60:
    // 0x396d60: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_396d64:
    if (ctx->pc == 0x396D64u) {
        ctx->pc = 0x396D64u;
            // 0x396d64: 0x26220094  addiu       $v0, $s1, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
        ctx->pc = 0x396D68u;
        goto label_396d68;
    }
    ctx->pc = 0x396D60u;
    {
        const bool branch_taken_0x396d60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x396d60) {
            ctx->pc = 0x396D64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x396D60u;
            // 0x396d64: 0x26220094  addiu       $v0, $s1, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
        ctx->in_delay_slot = false;
            ctx->pc = 0x396D88u;
            goto label_396d88;
        }
    }
    ctx->pc = 0x396D68u;
label_396d68:
    // 0x396d68: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x396d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_396d6c:
    // 0x396d6c: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x396d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_396d70:
    // 0x396d70: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_396d74:
    if (ctx->pc == 0x396D74u) {
        ctx->pc = 0x396D74u;
            // 0x396d74: 0xae2200a4  sw          $v0, 0xA4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 2));
        ctx->pc = 0x396D78u;
        goto label_396d78;
    }
    ctx->pc = 0x396D70u;
    {
        const bool branch_taken_0x396d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x396D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x396D70u;
            // 0x396d74: 0xae2200a4  sw          $v0, 0xA4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396d70) {
            ctx->pc = 0x396D84u;
            goto label_396d84;
        }
    }
    ctx->pc = 0x396D78u;
label_396d78:
    // 0x396d78: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x396d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_396d7c:
    // 0x396d7c: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x396d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_396d80:
    // 0x396d80: 0xae2200a4  sw          $v0, 0xA4($s1)
    ctx->pc = 0x396d80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 2));
label_396d84:
    // 0x396d84: 0x26220094  addiu       $v0, $s1, 0x94
    ctx->pc = 0x396d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
label_396d88:
    // 0x396d88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_396d8c:
    if (ctx->pc == 0x396D8Cu) {
        ctx->pc = 0x396D90u;
        goto label_396d90;
    }
    ctx->pc = 0x396D88u;
    {
        const bool branch_taken_0x396d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x396d88) {
            ctx->pc = 0x396D98u;
            goto label_396d98;
        }
    }
    ctx->pc = 0x396D90u;
label_396d90:
    // 0x396d90: 0xc07507c  jal         func_1D41F0
label_396d94:
    if (ctx->pc == 0x396D94u) {
        ctx->pc = 0x396D94u;
            // 0x396d94: 0x8e240098  lw          $a0, 0x98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
        ctx->pc = 0x396D98u;
        goto label_396d98;
    }
    ctx->pc = 0x396D90u;
    SET_GPR_U32(ctx, 31, 0x396D98u);
    ctx->pc = 0x396D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x396D90u;
            // 0x396d94: 0x8e240098  lw          $a0, 0x98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396D98u; }
        if (ctx->pc != 0x396D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396D98u; }
        if (ctx->pc != 0x396D98u) { return; }
    }
    ctx->pc = 0x396D98u;
label_396d98:
    // 0x396d98: 0x5220001b  beql        $s1, $zero, . + 4 + (0x1B << 2)
label_396d9c:
    if (ctx->pc == 0x396D9Cu) {
        ctx->pc = 0x396D9Cu;
            // 0x396d9c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x396DA0u;
        goto label_396da0;
    }
    ctx->pc = 0x396D98u;
    {
        const bool branch_taken_0x396d98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x396d98) {
            ctx->pc = 0x396D9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x396D98u;
            // 0x396d9c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x396E08u;
            goto label_396e08;
        }
    }
    ctx->pc = 0x396DA0u;
label_396da0:
    // 0x396da0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x396da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_396da4:
    // 0x396da4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x396da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_396da8:
    // 0x396da8: 0x24638180  addiu       $v1, $v1, -0x7E80
    ctx->pc = 0x396da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934912));
label_396dac:
    // 0x396dac: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x396dacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
label_396db0:
    // 0x396db0: 0x244281b8  addiu       $v0, $v0, -0x7E48
    ctx->pc = 0x396db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934968));
label_396db4:
    // 0x396db4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x396db4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_396db8:
    // 0x396db8: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x396db8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_396dbc:
    // 0x396dbc: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x396dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_396dc0:
    // 0x396dc0: 0xc0407c0  jal         func_101F00
label_396dc4:
    if (ctx->pc == 0x396DC4u) {
        ctx->pc = 0x396DC4u;
            // 0x396dc4: 0x24a56f10  addiu       $a1, $a1, 0x6F10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28432));
        ctx->pc = 0x396DC8u;
        goto label_396dc8;
    }
    ctx->pc = 0x396DC0u;
    SET_GPR_U32(ctx, 31, 0x396DC8u);
    ctx->pc = 0x396DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x396DC0u;
            // 0x396dc4: 0x24a56f10  addiu       $a1, $a1, 0x6F10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396DC8u; }
        if (ctx->pc != 0x396DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396DC8u; }
        if (ctx->pc != 0x396DC8u) { return; }
    }
    ctx->pc = 0x396DC8u;
label_396dc8:
    // 0x396dc8: 0x26240084  addiu       $a0, $s1, 0x84
    ctx->pc = 0x396dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_396dcc:
    // 0x396dcc: 0xc0a8cf8  jal         func_2A33E0
label_396dd0:
    if (ctx->pc == 0x396DD0u) {
        ctx->pc = 0x396DD0u;
            // 0x396dd0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x396DD4u;
        goto label_396dd4;
    }
    ctx->pc = 0x396DCCu;
    SET_GPR_U32(ctx, 31, 0x396DD4u);
    ctx->pc = 0x396DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x396DCCu;
            // 0x396dd0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396DD4u; }
        if (ctx->pc != 0x396DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396DD4u; }
        if (ctx->pc != 0x396DD4u) { return; }
    }
    ctx->pc = 0x396DD4u;
label_396dd4:
    // 0x396dd4: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x396dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_396dd8:
    // 0x396dd8: 0xc0e5ba8  jal         func_396EA0
label_396ddc:
    if (ctx->pc == 0x396DDCu) {
        ctx->pc = 0x396DDCu;
            // 0x396ddc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x396DE0u;
        goto label_396de0;
    }
    ctx->pc = 0x396DD8u;
    SET_GPR_U32(ctx, 31, 0x396DE0u);
    ctx->pc = 0x396DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x396DD8u;
            // 0x396ddc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x396EA0u;
    if (runtime->hasFunction(0x396EA0u)) {
        auto targetFn = runtime->lookupFunction(0x396EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396DE0u; }
        if (ctx->pc != 0x396DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00396EA0_0x396ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396DE0u; }
        if (ctx->pc != 0x396DE0u) { return; }
    }
    ctx->pc = 0x396DE0u;
label_396de0:
    // 0x396de0: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x396de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_396de4:
    // 0x396de4: 0xc0e5ba8  jal         func_396EA0
label_396de8:
    if (ctx->pc == 0x396DE8u) {
        ctx->pc = 0x396DE8u;
            // 0x396de8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x396DECu;
        goto label_396dec;
    }
    ctx->pc = 0x396DE4u;
    SET_GPR_U32(ctx, 31, 0x396DECu);
    ctx->pc = 0x396DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x396DE4u;
            // 0x396de8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x396EA0u;
    if (runtime->hasFunction(0x396EA0u)) {
        auto targetFn = runtime->lookupFunction(0x396EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396DECu; }
        if (ctx->pc != 0x396DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00396EA0_0x396ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396DECu; }
        if (ctx->pc != 0x396DECu) { return; }
    }
    ctx->pc = 0x396DECu;
label_396dec:
    // 0x396dec: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x396decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_396df0:
    // 0x396df0: 0xc0e5b90  jal         func_396E40
label_396df4:
    if (ctx->pc == 0x396DF4u) {
        ctx->pc = 0x396DF4u;
            // 0x396df4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x396DF8u;
        goto label_396df8;
    }
    ctx->pc = 0x396DF0u;
    SET_GPR_U32(ctx, 31, 0x396DF8u);
    ctx->pc = 0x396DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x396DF0u;
            // 0x396df4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x396E40u;
    if (runtime->hasFunction(0x396E40u)) {
        auto targetFn = runtime->lookupFunction(0x396E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396DF8u; }
        if (ctx->pc != 0x396DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00396E40_0x396e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396DF8u; }
        if (ctx->pc != 0x396DF8u) { return; }
    }
    ctx->pc = 0x396DF8u;
label_396df8:
    // 0x396df8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x396df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_396dfc:
    // 0x396dfc: 0xc0ae1c0  jal         func_2B8700
label_396e00:
    if (ctx->pc == 0x396E00u) {
        ctx->pc = 0x396E00u;
            // 0x396e00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x396E04u;
        goto label_396e04;
    }
    ctx->pc = 0x396DFCu;
    SET_GPR_U32(ctx, 31, 0x396E04u);
    ctx->pc = 0x396E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x396DFCu;
            // 0x396e00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396E04u; }
        if (ctx->pc != 0x396E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396E04u; }
        if (ctx->pc != 0x396E04u) { return; }
    }
    ctx->pc = 0x396E04u;
label_396e04:
    // 0x396e04: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x396e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_396e08:
    // 0x396e08: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x396e08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_396e0c:
    // 0x396e0c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_396e10:
    if (ctx->pc == 0x396E10u) {
        ctx->pc = 0x396E10u;
            // 0x396e10: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x396E14u;
        goto label_396e14;
    }
    ctx->pc = 0x396E0Cu;
    {
        const bool branch_taken_0x396e0c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x396e0c) {
            ctx->pc = 0x396E10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x396E0Cu;
            // 0x396e10: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x396E20u;
            goto label_396e20;
        }
    }
    ctx->pc = 0x396E14u;
label_396e14:
    // 0x396e14: 0xc0400a8  jal         func_1002A0
label_396e18:
    if (ctx->pc == 0x396E18u) {
        ctx->pc = 0x396E18u;
            // 0x396e18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x396E1Cu;
        goto label_396e1c;
    }
    ctx->pc = 0x396E14u;
    SET_GPR_U32(ctx, 31, 0x396E1Cu);
    ctx->pc = 0x396E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x396E14u;
            // 0x396e18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396E1Cu; }
        if (ctx->pc != 0x396E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396E1Cu; }
        if (ctx->pc != 0x396E1Cu) { return; }
    }
    ctx->pc = 0x396E1Cu;
label_396e1c:
    // 0x396e1c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x396e1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_396e20:
    // 0x396e20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x396e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_396e24:
    // 0x396e24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x396e24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_396e28:
    // 0x396e28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x396e28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_396e2c:
    // 0x396e2c: 0x3e00008  jr          $ra
label_396e30:
    if (ctx->pc == 0x396E30u) {
        ctx->pc = 0x396E30u;
            // 0x396e30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x396E34u;
        goto label_396e34;
    }
    ctx->pc = 0x396E2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x396E2Cu;
            // 0x396e30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x396E34u;
label_396e34:
    // 0x396e34: 0x0  nop
    ctx->pc = 0x396e34u;
    // NOP
label_396e38:
    // 0x396e38: 0x0  nop
    ctx->pc = 0x396e38u;
    // NOP
label_396e3c:
    // 0x396e3c: 0x0  nop
    ctx->pc = 0x396e3cu;
    // NOP
}
