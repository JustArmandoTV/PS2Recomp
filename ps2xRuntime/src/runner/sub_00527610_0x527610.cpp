#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00527610
// Address: 0x527610 - 0x527ca0
void sub_00527610_0x527610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00527610_0x527610");
#endif

    switch (ctx->pc) {
        case 0x527610u: goto label_527610;
        case 0x527614u: goto label_527614;
        case 0x527618u: goto label_527618;
        case 0x52761cu: goto label_52761c;
        case 0x527620u: goto label_527620;
        case 0x527624u: goto label_527624;
        case 0x527628u: goto label_527628;
        case 0x52762cu: goto label_52762c;
        case 0x527630u: goto label_527630;
        case 0x527634u: goto label_527634;
        case 0x527638u: goto label_527638;
        case 0x52763cu: goto label_52763c;
        case 0x527640u: goto label_527640;
        case 0x527644u: goto label_527644;
        case 0x527648u: goto label_527648;
        case 0x52764cu: goto label_52764c;
        case 0x527650u: goto label_527650;
        case 0x527654u: goto label_527654;
        case 0x527658u: goto label_527658;
        case 0x52765cu: goto label_52765c;
        case 0x527660u: goto label_527660;
        case 0x527664u: goto label_527664;
        case 0x527668u: goto label_527668;
        case 0x52766cu: goto label_52766c;
        case 0x527670u: goto label_527670;
        case 0x527674u: goto label_527674;
        case 0x527678u: goto label_527678;
        case 0x52767cu: goto label_52767c;
        case 0x527680u: goto label_527680;
        case 0x527684u: goto label_527684;
        case 0x527688u: goto label_527688;
        case 0x52768cu: goto label_52768c;
        case 0x527690u: goto label_527690;
        case 0x527694u: goto label_527694;
        case 0x527698u: goto label_527698;
        case 0x52769cu: goto label_52769c;
        case 0x5276a0u: goto label_5276a0;
        case 0x5276a4u: goto label_5276a4;
        case 0x5276a8u: goto label_5276a8;
        case 0x5276acu: goto label_5276ac;
        case 0x5276b0u: goto label_5276b0;
        case 0x5276b4u: goto label_5276b4;
        case 0x5276b8u: goto label_5276b8;
        case 0x5276bcu: goto label_5276bc;
        case 0x5276c0u: goto label_5276c0;
        case 0x5276c4u: goto label_5276c4;
        case 0x5276c8u: goto label_5276c8;
        case 0x5276ccu: goto label_5276cc;
        case 0x5276d0u: goto label_5276d0;
        case 0x5276d4u: goto label_5276d4;
        case 0x5276d8u: goto label_5276d8;
        case 0x5276dcu: goto label_5276dc;
        case 0x5276e0u: goto label_5276e0;
        case 0x5276e4u: goto label_5276e4;
        case 0x5276e8u: goto label_5276e8;
        case 0x5276ecu: goto label_5276ec;
        case 0x5276f0u: goto label_5276f0;
        case 0x5276f4u: goto label_5276f4;
        case 0x5276f8u: goto label_5276f8;
        case 0x5276fcu: goto label_5276fc;
        case 0x527700u: goto label_527700;
        case 0x527704u: goto label_527704;
        case 0x527708u: goto label_527708;
        case 0x52770cu: goto label_52770c;
        case 0x527710u: goto label_527710;
        case 0x527714u: goto label_527714;
        case 0x527718u: goto label_527718;
        case 0x52771cu: goto label_52771c;
        case 0x527720u: goto label_527720;
        case 0x527724u: goto label_527724;
        case 0x527728u: goto label_527728;
        case 0x52772cu: goto label_52772c;
        case 0x527730u: goto label_527730;
        case 0x527734u: goto label_527734;
        case 0x527738u: goto label_527738;
        case 0x52773cu: goto label_52773c;
        case 0x527740u: goto label_527740;
        case 0x527744u: goto label_527744;
        case 0x527748u: goto label_527748;
        case 0x52774cu: goto label_52774c;
        case 0x527750u: goto label_527750;
        case 0x527754u: goto label_527754;
        case 0x527758u: goto label_527758;
        case 0x52775cu: goto label_52775c;
        case 0x527760u: goto label_527760;
        case 0x527764u: goto label_527764;
        case 0x527768u: goto label_527768;
        case 0x52776cu: goto label_52776c;
        case 0x527770u: goto label_527770;
        case 0x527774u: goto label_527774;
        case 0x527778u: goto label_527778;
        case 0x52777cu: goto label_52777c;
        case 0x527780u: goto label_527780;
        case 0x527784u: goto label_527784;
        case 0x527788u: goto label_527788;
        case 0x52778cu: goto label_52778c;
        case 0x527790u: goto label_527790;
        case 0x527794u: goto label_527794;
        case 0x527798u: goto label_527798;
        case 0x52779cu: goto label_52779c;
        case 0x5277a0u: goto label_5277a0;
        case 0x5277a4u: goto label_5277a4;
        case 0x5277a8u: goto label_5277a8;
        case 0x5277acu: goto label_5277ac;
        case 0x5277b0u: goto label_5277b0;
        case 0x5277b4u: goto label_5277b4;
        case 0x5277b8u: goto label_5277b8;
        case 0x5277bcu: goto label_5277bc;
        case 0x5277c0u: goto label_5277c0;
        case 0x5277c4u: goto label_5277c4;
        case 0x5277c8u: goto label_5277c8;
        case 0x5277ccu: goto label_5277cc;
        case 0x5277d0u: goto label_5277d0;
        case 0x5277d4u: goto label_5277d4;
        case 0x5277d8u: goto label_5277d8;
        case 0x5277dcu: goto label_5277dc;
        case 0x5277e0u: goto label_5277e0;
        case 0x5277e4u: goto label_5277e4;
        case 0x5277e8u: goto label_5277e8;
        case 0x5277ecu: goto label_5277ec;
        case 0x5277f0u: goto label_5277f0;
        case 0x5277f4u: goto label_5277f4;
        case 0x5277f8u: goto label_5277f8;
        case 0x5277fcu: goto label_5277fc;
        case 0x527800u: goto label_527800;
        case 0x527804u: goto label_527804;
        case 0x527808u: goto label_527808;
        case 0x52780cu: goto label_52780c;
        case 0x527810u: goto label_527810;
        case 0x527814u: goto label_527814;
        case 0x527818u: goto label_527818;
        case 0x52781cu: goto label_52781c;
        case 0x527820u: goto label_527820;
        case 0x527824u: goto label_527824;
        case 0x527828u: goto label_527828;
        case 0x52782cu: goto label_52782c;
        case 0x527830u: goto label_527830;
        case 0x527834u: goto label_527834;
        case 0x527838u: goto label_527838;
        case 0x52783cu: goto label_52783c;
        case 0x527840u: goto label_527840;
        case 0x527844u: goto label_527844;
        case 0x527848u: goto label_527848;
        case 0x52784cu: goto label_52784c;
        case 0x527850u: goto label_527850;
        case 0x527854u: goto label_527854;
        case 0x527858u: goto label_527858;
        case 0x52785cu: goto label_52785c;
        case 0x527860u: goto label_527860;
        case 0x527864u: goto label_527864;
        case 0x527868u: goto label_527868;
        case 0x52786cu: goto label_52786c;
        case 0x527870u: goto label_527870;
        case 0x527874u: goto label_527874;
        case 0x527878u: goto label_527878;
        case 0x52787cu: goto label_52787c;
        case 0x527880u: goto label_527880;
        case 0x527884u: goto label_527884;
        case 0x527888u: goto label_527888;
        case 0x52788cu: goto label_52788c;
        case 0x527890u: goto label_527890;
        case 0x527894u: goto label_527894;
        case 0x527898u: goto label_527898;
        case 0x52789cu: goto label_52789c;
        case 0x5278a0u: goto label_5278a0;
        case 0x5278a4u: goto label_5278a4;
        case 0x5278a8u: goto label_5278a8;
        case 0x5278acu: goto label_5278ac;
        case 0x5278b0u: goto label_5278b0;
        case 0x5278b4u: goto label_5278b4;
        case 0x5278b8u: goto label_5278b8;
        case 0x5278bcu: goto label_5278bc;
        case 0x5278c0u: goto label_5278c0;
        case 0x5278c4u: goto label_5278c4;
        case 0x5278c8u: goto label_5278c8;
        case 0x5278ccu: goto label_5278cc;
        case 0x5278d0u: goto label_5278d0;
        case 0x5278d4u: goto label_5278d4;
        case 0x5278d8u: goto label_5278d8;
        case 0x5278dcu: goto label_5278dc;
        case 0x5278e0u: goto label_5278e0;
        case 0x5278e4u: goto label_5278e4;
        case 0x5278e8u: goto label_5278e8;
        case 0x5278ecu: goto label_5278ec;
        case 0x5278f0u: goto label_5278f0;
        case 0x5278f4u: goto label_5278f4;
        case 0x5278f8u: goto label_5278f8;
        case 0x5278fcu: goto label_5278fc;
        case 0x527900u: goto label_527900;
        case 0x527904u: goto label_527904;
        case 0x527908u: goto label_527908;
        case 0x52790cu: goto label_52790c;
        case 0x527910u: goto label_527910;
        case 0x527914u: goto label_527914;
        case 0x527918u: goto label_527918;
        case 0x52791cu: goto label_52791c;
        case 0x527920u: goto label_527920;
        case 0x527924u: goto label_527924;
        case 0x527928u: goto label_527928;
        case 0x52792cu: goto label_52792c;
        case 0x527930u: goto label_527930;
        case 0x527934u: goto label_527934;
        case 0x527938u: goto label_527938;
        case 0x52793cu: goto label_52793c;
        case 0x527940u: goto label_527940;
        case 0x527944u: goto label_527944;
        case 0x527948u: goto label_527948;
        case 0x52794cu: goto label_52794c;
        case 0x527950u: goto label_527950;
        case 0x527954u: goto label_527954;
        case 0x527958u: goto label_527958;
        case 0x52795cu: goto label_52795c;
        case 0x527960u: goto label_527960;
        case 0x527964u: goto label_527964;
        case 0x527968u: goto label_527968;
        case 0x52796cu: goto label_52796c;
        case 0x527970u: goto label_527970;
        case 0x527974u: goto label_527974;
        case 0x527978u: goto label_527978;
        case 0x52797cu: goto label_52797c;
        case 0x527980u: goto label_527980;
        case 0x527984u: goto label_527984;
        case 0x527988u: goto label_527988;
        case 0x52798cu: goto label_52798c;
        case 0x527990u: goto label_527990;
        case 0x527994u: goto label_527994;
        case 0x527998u: goto label_527998;
        case 0x52799cu: goto label_52799c;
        case 0x5279a0u: goto label_5279a0;
        case 0x5279a4u: goto label_5279a4;
        case 0x5279a8u: goto label_5279a8;
        case 0x5279acu: goto label_5279ac;
        case 0x5279b0u: goto label_5279b0;
        case 0x5279b4u: goto label_5279b4;
        case 0x5279b8u: goto label_5279b8;
        case 0x5279bcu: goto label_5279bc;
        case 0x5279c0u: goto label_5279c0;
        case 0x5279c4u: goto label_5279c4;
        case 0x5279c8u: goto label_5279c8;
        case 0x5279ccu: goto label_5279cc;
        case 0x5279d0u: goto label_5279d0;
        case 0x5279d4u: goto label_5279d4;
        case 0x5279d8u: goto label_5279d8;
        case 0x5279dcu: goto label_5279dc;
        case 0x5279e0u: goto label_5279e0;
        case 0x5279e4u: goto label_5279e4;
        case 0x5279e8u: goto label_5279e8;
        case 0x5279ecu: goto label_5279ec;
        case 0x5279f0u: goto label_5279f0;
        case 0x5279f4u: goto label_5279f4;
        case 0x5279f8u: goto label_5279f8;
        case 0x5279fcu: goto label_5279fc;
        case 0x527a00u: goto label_527a00;
        case 0x527a04u: goto label_527a04;
        case 0x527a08u: goto label_527a08;
        case 0x527a0cu: goto label_527a0c;
        case 0x527a10u: goto label_527a10;
        case 0x527a14u: goto label_527a14;
        case 0x527a18u: goto label_527a18;
        case 0x527a1cu: goto label_527a1c;
        case 0x527a20u: goto label_527a20;
        case 0x527a24u: goto label_527a24;
        case 0x527a28u: goto label_527a28;
        case 0x527a2cu: goto label_527a2c;
        case 0x527a30u: goto label_527a30;
        case 0x527a34u: goto label_527a34;
        case 0x527a38u: goto label_527a38;
        case 0x527a3cu: goto label_527a3c;
        case 0x527a40u: goto label_527a40;
        case 0x527a44u: goto label_527a44;
        case 0x527a48u: goto label_527a48;
        case 0x527a4cu: goto label_527a4c;
        case 0x527a50u: goto label_527a50;
        case 0x527a54u: goto label_527a54;
        case 0x527a58u: goto label_527a58;
        case 0x527a5cu: goto label_527a5c;
        case 0x527a60u: goto label_527a60;
        case 0x527a64u: goto label_527a64;
        case 0x527a68u: goto label_527a68;
        case 0x527a6cu: goto label_527a6c;
        case 0x527a70u: goto label_527a70;
        case 0x527a74u: goto label_527a74;
        case 0x527a78u: goto label_527a78;
        case 0x527a7cu: goto label_527a7c;
        case 0x527a80u: goto label_527a80;
        case 0x527a84u: goto label_527a84;
        case 0x527a88u: goto label_527a88;
        case 0x527a8cu: goto label_527a8c;
        case 0x527a90u: goto label_527a90;
        case 0x527a94u: goto label_527a94;
        case 0x527a98u: goto label_527a98;
        case 0x527a9cu: goto label_527a9c;
        case 0x527aa0u: goto label_527aa0;
        case 0x527aa4u: goto label_527aa4;
        case 0x527aa8u: goto label_527aa8;
        case 0x527aacu: goto label_527aac;
        case 0x527ab0u: goto label_527ab0;
        case 0x527ab4u: goto label_527ab4;
        case 0x527ab8u: goto label_527ab8;
        case 0x527abcu: goto label_527abc;
        case 0x527ac0u: goto label_527ac0;
        case 0x527ac4u: goto label_527ac4;
        case 0x527ac8u: goto label_527ac8;
        case 0x527accu: goto label_527acc;
        case 0x527ad0u: goto label_527ad0;
        case 0x527ad4u: goto label_527ad4;
        case 0x527ad8u: goto label_527ad8;
        case 0x527adcu: goto label_527adc;
        case 0x527ae0u: goto label_527ae0;
        case 0x527ae4u: goto label_527ae4;
        case 0x527ae8u: goto label_527ae8;
        case 0x527aecu: goto label_527aec;
        case 0x527af0u: goto label_527af0;
        case 0x527af4u: goto label_527af4;
        case 0x527af8u: goto label_527af8;
        case 0x527afcu: goto label_527afc;
        case 0x527b00u: goto label_527b00;
        case 0x527b04u: goto label_527b04;
        case 0x527b08u: goto label_527b08;
        case 0x527b0cu: goto label_527b0c;
        case 0x527b10u: goto label_527b10;
        case 0x527b14u: goto label_527b14;
        case 0x527b18u: goto label_527b18;
        case 0x527b1cu: goto label_527b1c;
        case 0x527b20u: goto label_527b20;
        case 0x527b24u: goto label_527b24;
        case 0x527b28u: goto label_527b28;
        case 0x527b2cu: goto label_527b2c;
        case 0x527b30u: goto label_527b30;
        case 0x527b34u: goto label_527b34;
        case 0x527b38u: goto label_527b38;
        case 0x527b3cu: goto label_527b3c;
        case 0x527b40u: goto label_527b40;
        case 0x527b44u: goto label_527b44;
        case 0x527b48u: goto label_527b48;
        case 0x527b4cu: goto label_527b4c;
        case 0x527b50u: goto label_527b50;
        case 0x527b54u: goto label_527b54;
        case 0x527b58u: goto label_527b58;
        case 0x527b5cu: goto label_527b5c;
        case 0x527b60u: goto label_527b60;
        case 0x527b64u: goto label_527b64;
        case 0x527b68u: goto label_527b68;
        case 0x527b6cu: goto label_527b6c;
        case 0x527b70u: goto label_527b70;
        case 0x527b74u: goto label_527b74;
        case 0x527b78u: goto label_527b78;
        case 0x527b7cu: goto label_527b7c;
        case 0x527b80u: goto label_527b80;
        case 0x527b84u: goto label_527b84;
        case 0x527b88u: goto label_527b88;
        case 0x527b8cu: goto label_527b8c;
        case 0x527b90u: goto label_527b90;
        case 0x527b94u: goto label_527b94;
        case 0x527b98u: goto label_527b98;
        case 0x527b9cu: goto label_527b9c;
        case 0x527ba0u: goto label_527ba0;
        case 0x527ba4u: goto label_527ba4;
        case 0x527ba8u: goto label_527ba8;
        case 0x527bacu: goto label_527bac;
        case 0x527bb0u: goto label_527bb0;
        case 0x527bb4u: goto label_527bb4;
        case 0x527bb8u: goto label_527bb8;
        case 0x527bbcu: goto label_527bbc;
        case 0x527bc0u: goto label_527bc0;
        case 0x527bc4u: goto label_527bc4;
        case 0x527bc8u: goto label_527bc8;
        case 0x527bccu: goto label_527bcc;
        case 0x527bd0u: goto label_527bd0;
        case 0x527bd4u: goto label_527bd4;
        case 0x527bd8u: goto label_527bd8;
        case 0x527bdcu: goto label_527bdc;
        case 0x527be0u: goto label_527be0;
        case 0x527be4u: goto label_527be4;
        case 0x527be8u: goto label_527be8;
        case 0x527becu: goto label_527bec;
        case 0x527bf0u: goto label_527bf0;
        case 0x527bf4u: goto label_527bf4;
        case 0x527bf8u: goto label_527bf8;
        case 0x527bfcu: goto label_527bfc;
        case 0x527c00u: goto label_527c00;
        case 0x527c04u: goto label_527c04;
        case 0x527c08u: goto label_527c08;
        case 0x527c0cu: goto label_527c0c;
        case 0x527c10u: goto label_527c10;
        case 0x527c14u: goto label_527c14;
        case 0x527c18u: goto label_527c18;
        case 0x527c1cu: goto label_527c1c;
        case 0x527c20u: goto label_527c20;
        case 0x527c24u: goto label_527c24;
        case 0x527c28u: goto label_527c28;
        case 0x527c2cu: goto label_527c2c;
        case 0x527c30u: goto label_527c30;
        case 0x527c34u: goto label_527c34;
        case 0x527c38u: goto label_527c38;
        case 0x527c3cu: goto label_527c3c;
        case 0x527c40u: goto label_527c40;
        case 0x527c44u: goto label_527c44;
        case 0x527c48u: goto label_527c48;
        case 0x527c4cu: goto label_527c4c;
        case 0x527c50u: goto label_527c50;
        case 0x527c54u: goto label_527c54;
        case 0x527c58u: goto label_527c58;
        case 0x527c5cu: goto label_527c5c;
        case 0x527c60u: goto label_527c60;
        case 0x527c64u: goto label_527c64;
        case 0x527c68u: goto label_527c68;
        case 0x527c6cu: goto label_527c6c;
        case 0x527c70u: goto label_527c70;
        case 0x527c74u: goto label_527c74;
        case 0x527c78u: goto label_527c78;
        case 0x527c7cu: goto label_527c7c;
        case 0x527c80u: goto label_527c80;
        case 0x527c84u: goto label_527c84;
        case 0x527c88u: goto label_527c88;
        case 0x527c8cu: goto label_527c8c;
        case 0x527c90u: goto label_527c90;
        case 0x527c94u: goto label_527c94;
        case 0x527c98u: goto label_527c98;
        case 0x527c9cu: goto label_527c9c;
        default: break;
    }

    ctx->pc = 0x527610u;

label_527610:
    // 0x527610: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x527610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_527614:
    // 0x527614: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x527614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_527618:
    // 0x527618: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x527618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_52761c:
    // 0x52761c: 0x8042b5a8  lb          $v0, -0x4A58($v0)
    ctx->pc = 0x52761cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294948264)));
label_527620:
    // 0x527620: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_527624:
    if (ctx->pc == 0x527624u) {
        ctx->pc = 0x527624u;
            // 0x527624: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x527628u;
        goto label_527628;
    }
    ctx->pc = 0x527620u;
    {
        const bool branch_taken_0x527620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x527624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527620u;
            // 0x527624: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x527620) {
            ctx->pc = 0x52765Cu;
            goto label_52765c;
        }
    }
    ctx->pc = 0x527628u;
label_527628:
    // 0x527628: 0x3c0400be  lui         $a0, 0xBE
    ctx->pc = 0x527628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)190 << 16));
label_52762c:
    // 0x52762c: 0xc0a8d28  jal         func_2A34A0
label_527630:
    if (ctx->pc == 0x527630u) {
        ctx->pc = 0x527630u;
            // 0x527630: 0x2484b5c0  addiu       $a0, $a0, -0x4A40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948288));
        ctx->pc = 0x527634u;
        goto label_527634;
    }
    ctx->pc = 0x52762Cu;
    SET_GPR_U32(ctx, 31, 0x527634u);
    ctx->pc = 0x527630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52762Cu;
            // 0x527630: 0x2484b5c0  addiu       $a0, $a0, -0x4A40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A34A0u;
    if (runtime->hasFunction(0x2A34A0u)) {
        auto targetFn = runtime->lookupFunction(0x2A34A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527634u; }
        if (ctx->pc != 0x527634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A34A0_0x2a34a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527634u; }
        if (ctx->pc != 0x527634u) { return; }
    }
    ctx->pc = 0x527634u;
label_527634:
    // 0x527634: 0x3c0400be  lui         $a0, 0xBE
    ctx->pc = 0x527634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)190 << 16));
label_527638:
    // 0x527638: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x527638u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_52763c:
    // 0x52763c: 0x3c0600be  lui         $a2, 0xBE
    ctx->pc = 0x52763cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)190 << 16));
label_527640:
    // 0x527640: 0x2484b5c0  addiu       $a0, $a0, -0x4A40
    ctx->pc = 0x527640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948288));
label_527644:
    // 0x527644: 0x24a535a0  addiu       $a1, $a1, 0x35A0
    ctx->pc = 0x527644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13728));
label_527648:
    // 0x527648: 0xc04089c  jal         func_102270
label_52764c:
    if (ctx->pc == 0x52764Cu) {
        ctx->pc = 0x52764Cu;
            // 0x52764c: 0x24c6b5b0  addiu       $a2, $a2, -0x4A50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948272));
        ctx->pc = 0x527650u;
        goto label_527650;
    }
    ctx->pc = 0x527648u;
    SET_GPR_U32(ctx, 31, 0x527650u);
    ctx->pc = 0x52764Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x527648u;
            // 0x52764c: 0x24c6b5b0  addiu       $a2, $a2, -0x4A50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102270u;
    if (runtime->hasFunction(0x102270u)) {
        auto targetFn = runtime->lookupFunction(0x102270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527650u; }
        if (ctx->pc != 0x527650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102270_0x102270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527650u; }
        if (ctx->pc != 0x527650u) { return; }
    }
    ctx->pc = 0x527650u;
label_527650:
    // 0x527650: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x527650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_527654:
    // 0x527654: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x527654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_527658:
    // 0x527658: 0xa043b5a8  sb          $v1, -0x4A58($v0)
    ctx->pc = 0x527658u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948264), (uint8_t)GPR_U32(ctx, 3));
label_52765c:
    // 0x52765c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52765cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_527660:
    // 0x527660: 0x24050314  addiu       $a1, $zero, 0x314
    ctx->pc = 0x527660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 788));
label_527664:
    // 0x527664: 0x8c42e420  lw          $v0, -0x1BE0($v0)
    ctx->pc = 0x527664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960160)));
label_527668:
    // 0x527668: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x527668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_52766c:
    // 0x52766c: 0xc0fe54c  jal         func_3F9530
label_527670:
    if (ctx->pc == 0x527670u) {
        ctx->pc = 0x527670u;
            // 0x527670: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x527674u;
        goto label_527674;
    }
    ctx->pc = 0x52766Cu;
    SET_GPR_U32(ctx, 31, 0x527674u);
    ctx->pc = 0x527670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52766Cu;
            // 0x527670: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527674u; }
        if (ctx->pc != 0x527674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527674u; }
        if (ctx->pc != 0x527674u) { return; }
    }
    ctx->pc = 0x527674u;
label_527674:
    // 0x527674: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x527674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_527678:
    // 0x527678: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_52767c:
    if (ctx->pc == 0x52767Cu) {
        ctx->pc = 0x527680u;
        goto label_527680;
    }
    ctx->pc = 0x527678u;
    {
        const bool branch_taken_0x527678 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x527678) {
            ctx->pc = 0x527694u;
            goto label_527694;
        }
    }
    ctx->pc = 0x527680u;
label_527680:
    // 0x527680: 0x3c0500be  lui         $a1, 0xBE
    ctx->pc = 0x527680u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)190 << 16));
label_527684:
    // 0x527684: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x527684u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_527688:
    // 0x527688: 0xc0a77f8  jal         func_29DFE0
label_52768c:
    if (ctx->pc == 0x52768Cu) {
        ctx->pc = 0x52768Cu;
            // 0x52768c: 0x24a5ab70  addiu       $a1, $a1, -0x5490 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945648));
        ctx->pc = 0x527690u;
        goto label_527690;
    }
    ctx->pc = 0x527688u;
    SET_GPR_U32(ctx, 31, 0x527690u);
    ctx->pc = 0x52768Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x527688u;
            // 0x52768c: 0x24a5ab70  addiu       $a1, $a1, -0x5490 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29DFE0u;
    if (runtime->hasFunction(0x29DFE0u)) {
        auto targetFn = runtime->lookupFunction(0x29DFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527690u; }
        if (ctx->pc != 0x527690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029DFE0_0x29dfe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527690u; }
        if (ctx->pc != 0x527690u) { return; }
    }
    ctx->pc = 0x527690u;
label_527690:
    // 0x527690: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x527690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_527694:
    // 0x527694: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x527694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
label_527698:
    // 0x527698: 0xac64b5a0  sw          $a0, -0x4A60($v1)
    ctx->pc = 0x527698u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294948256), GPR_U32(ctx, 4));
label_52769c:
    // 0x52769c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x52769cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_5276a0:
    // 0x5276a0: 0x3e00008  jr          $ra
label_5276a4:
    if (ctx->pc == 0x5276A4u) {
        ctx->pc = 0x5276A4u;
            // 0x5276a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x5276A8u;
        goto label_5276a8;
    }
    ctx->pc = 0x5276A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5276A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5276A0u;
            // 0x5276a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5276A8u;
label_5276a8:
    // 0x5276a8: 0x0  nop
    ctx->pc = 0x5276a8u;
    // NOP
label_5276ac:
    // 0x5276ac: 0x0  nop
    ctx->pc = 0x5276acu;
    // NOP
label_5276b0:
    // 0x5276b0: 0x3e00008  jr          $ra
label_5276b4:
    if (ctx->pc == 0x5276B4u) {
        ctx->pc = 0x5276B8u;
        goto label_5276b8;
    }
    ctx->pc = 0x5276B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5276B8u;
label_5276b8:
    // 0x5276b8: 0x0  nop
    ctx->pc = 0x5276b8u;
    // NOP
label_5276bc:
    // 0x5276bc: 0x0  nop
    ctx->pc = 0x5276bcu;
    // NOP
label_5276c0:
    // 0x5276c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x5276c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_5276c4:
    // 0x5276c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x5276c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_5276c8:
    // 0x5276c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x5276c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_5276cc:
    // 0x5276cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x5276ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_5276d0:
    // 0x5276d0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x5276d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5276d4:
    // 0x5276d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x5276d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_5276d8:
    // 0x5276d8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x5276d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_5276dc:
    // 0x5276dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5276dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5276e0:
    // 0x5276e0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x5276e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_5276e4:
    // 0x5276e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5276e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5276e8:
    // 0x5276e8: 0x1a60000d  blez        $s3, . + 4 + (0xD << 2)
label_5276ec:
    if (ctx->pc == 0x5276ECu) {
        ctx->pc = 0x5276ECu;
            // 0x5276ec: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5276F0u;
        goto label_5276f0;
    }
    ctx->pc = 0x5276E8u;
    {
        const bool branch_taken_0x5276e8 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x5276ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5276E8u;
            // 0x5276ec: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5276e8) {
            ctx->pc = 0x527720u;
            goto label_527720;
        }
    }
    ctx->pc = 0x5276F0u;
label_5276f0:
    // 0x5276f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x5276f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_5276f4:
    // 0x5276f4: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x5276f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_5276f8:
    // 0x5276f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x5276f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_5276fc:
    // 0x5276fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x5276fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_527700:
    // 0x527700: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x527700u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_527704:
    // 0x527704: 0x320f809  jalr        $t9
label_527708:
    if (ctx->pc == 0x527708u) {
        ctx->pc = 0x527708u;
            // 0x527708: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52770Cu;
        goto label_52770c;
    }
    ctx->pc = 0x527704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52770Cu);
        ctx->pc = 0x527708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527704u;
            // 0x527708: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x52770Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52770Cu; }
            if (ctx->pc != 0x52770Cu) { return; }
        }
        }
    }
    ctx->pc = 0x52770Cu;
label_52770c:
    // 0x52770c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x52770cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_527710:
    // 0x527710: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x527710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_527714:
    // 0x527714: 0x233182a  slt         $v1, $s1, $s3
    ctx->pc = 0x527714u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_527718:
    // 0x527718: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_52771c:
    if (ctx->pc == 0x52771Cu) {
        ctx->pc = 0x52771Cu;
            // 0x52771c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x527720u;
        goto label_527720;
    }
    ctx->pc = 0x527718u;
    {
        const bool branch_taken_0x527718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x52771Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527718u;
            // 0x52771c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x527718) {
            ctx->pc = 0x5276F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5276f4;
        }
    }
    ctx->pc = 0x527720u;
label_527720:
    // 0x527720: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x527720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_527724:
    // 0x527724: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x527724u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_527728:
    // 0x527728: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x527728u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_52772c:
    // 0x52772c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x52772cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_527730:
    // 0x527730: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x527730u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_527734:
    // 0x527734: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x527734u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_527738:
    // 0x527738: 0x3e00008  jr          $ra
label_52773c:
    if (ctx->pc == 0x52773Cu) {
        ctx->pc = 0x52773Cu;
            // 0x52773c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x527740u;
        goto label_527740;
    }
    ctx->pc = 0x527738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52773Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527738u;
            // 0x52773c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x527740u;
label_527740:
    // 0x527740: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x527740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_527744:
    // 0x527744: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x527744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_527748:
    // 0x527748: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x527748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_52774c:
    // 0x52774c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x52774cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_527750:
    // 0x527750: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x527750u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_527754:
    // 0x527754: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x527754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_527758:
    // 0x527758: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x527758u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_52775c:
    // 0x52775c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52775cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_527760:
    // 0x527760: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x527760u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_527764:
    // 0x527764: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x527764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_527768:
    // 0x527768: 0x1a60000d  blez        $s3, . + 4 + (0xD << 2)
label_52776c:
    if (ctx->pc == 0x52776Cu) {
        ctx->pc = 0x52776Cu;
            // 0x52776c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x527770u;
        goto label_527770;
    }
    ctx->pc = 0x527768u;
    {
        const bool branch_taken_0x527768 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x52776Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527768u;
            // 0x52776c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x527768) {
            ctx->pc = 0x5277A0u;
            goto label_5277a0;
        }
    }
    ctx->pc = 0x527770u;
label_527770:
    // 0x527770: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x527770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_527774:
    // 0x527774: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x527774u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_527778:
    // 0x527778: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x527778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_52777c:
    // 0x52777c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x52777cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_527780:
    // 0x527780: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x527780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_527784:
    // 0x527784: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x527784u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_527788:
    // 0x527788: 0x320f809  jalr        $t9
label_52778c:
    if (ctx->pc == 0x52778Cu) {
        ctx->pc = 0x52778Cu;
            // 0x52778c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x527790u;
        goto label_527790;
    }
    ctx->pc = 0x527788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x527790u);
        ctx->pc = 0x52778Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527788u;
            // 0x52778c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x527790u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x527790u; }
            if (ctx->pc != 0x527790u) { return; }
        }
        }
    }
    ctx->pc = 0x527790u;
label_527790:
    // 0x527790: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x527790u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_527794:
    // 0x527794: 0x233182a  slt         $v1, $s1, $s3
    ctx->pc = 0x527794u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_527798:
    // 0x527798: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_52779c:
    if (ctx->pc == 0x52779Cu) {
        ctx->pc = 0x52779Cu;
            // 0x52779c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x5277A0u;
        goto label_5277a0;
    }
    ctx->pc = 0x527798u;
    {
        const bool branch_taken_0x527798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x52779Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527798u;
            // 0x52779c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x527798) {
            ctx->pc = 0x527774u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_527774;
        }
    }
    ctx->pc = 0x5277A0u;
label_5277a0:
    // 0x5277a0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x5277a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_5277a4:
    // 0x5277a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x5277a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_5277a8:
    // 0x5277a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x5277a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_5277ac:
    // 0x5277ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x5277acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_5277b0:
    // 0x5277b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5277b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5277b4:
    // 0x5277b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5277b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5277b8:
    // 0x5277b8: 0x3e00008  jr          $ra
label_5277bc:
    if (ctx->pc == 0x5277BCu) {
        ctx->pc = 0x5277BCu;
            // 0x5277bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x5277C0u;
        goto label_5277c0;
    }
    ctx->pc = 0x5277B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5277BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5277B8u;
            // 0x5277bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5277C0u;
label_5277c0:
    // 0x5277c0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x5277c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_5277c4:
    // 0x5277c4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x5277c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_5277c8:
    // 0x5277c8: 0x8c42d9f8  lw          $v0, -0x2608($v0)
    ctx->pc = 0x5277c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957560)));
label_5277cc:
    // 0x5277cc: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x5277ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_5277d0:
    // 0x5277d0: 0x400008  jr          $v0
label_5277d4:
    if (ctx->pc == 0x5277D4u) {
        ctx->pc = 0x5277D8u;
        goto label_5277d8;
    }
    ctx->pc = 0x5277D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5277D8u;
label_5277d8:
    // 0x5277d8: 0x0  nop
    ctx->pc = 0x5277d8u;
    // NOP
label_5277dc:
    // 0x5277dc: 0x0  nop
    ctx->pc = 0x5277dcu;
    // NOP
label_5277e0:
    // 0x5277e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5277e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_5277e4:
    // 0x5277e4: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_5277e8:
    if (ctx->pc == 0x5277E8u) {
        ctx->pc = 0x5277E8u;
            // 0x5277e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x5277ECu;
        goto label_5277ec;
    }
    ctx->pc = 0x5277E4u;
    {
        const bool branch_taken_0x5277e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x5277E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5277E4u;
            // 0x5277e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5277e4) {
            ctx->pc = 0x5277FCu;
            goto label_5277fc;
        }
    }
    ctx->pc = 0x5277ECu;
label_5277ec:
    // 0x5277ec: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x5277ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_5277f0:
    // 0x5277f0: 0x8c42da00  lw          $v0, -0x2600($v0)
    ctx->pc = 0x5277f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957568)));
label_5277f4:
    // 0x5277f4: 0x40f809  jalr        $v0
label_5277f8:
    if (ctx->pc == 0x5277F8u) {
        ctx->pc = 0x5277F8u;
            // 0x5277f8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5277FCu;
        goto label_5277fc;
    }
    ctx->pc = 0x5277F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x5277FCu);
        ctx->pc = 0x5277F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5277F4u;
            // 0x5277f8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5277FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5277FCu; }
            if (ctx->pc != 0x5277FCu) { return; }
        }
        }
    }
    ctx->pc = 0x5277FCu;
label_5277fc:
    // 0x5277fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x5277fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_527800:
    // 0x527800: 0x3e00008  jr          $ra
label_527804:
    if (ctx->pc == 0x527804u) {
        ctx->pc = 0x527804u;
            // 0x527804: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x527808u;
        goto label_527808;
    }
    ctx->pc = 0x527800u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x527804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527800u;
            // 0x527804: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x527808u;
label_527808:
    // 0x527808: 0x0  nop
    ctx->pc = 0x527808u;
    // NOP
label_52780c:
    // 0x52780c: 0x0  nop
    ctx->pc = 0x52780cu;
    // NOP
label_527810:
    // 0x527810: 0x3e00008  jr          $ra
label_527814:
    if (ctx->pc == 0x527814u) {
        ctx->pc = 0x527818u;
        goto label_527818;
    }
    ctx->pc = 0x527810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x527818u;
label_527818:
    // 0x527818: 0x0  nop
    ctx->pc = 0x527818u;
    // NOP
label_52781c:
    // 0x52781c: 0x0  nop
    ctx->pc = 0x52781cu;
    // NOP
label_527820:
    // 0x527820: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x527820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
label_527824:
    // 0x527824: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x527824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_527828:
    // 0x527828: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x527828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_52782c:
    // 0x52782c: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x52782cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_527830:
    // 0x527830: 0xc0a7214  jal         func_29C850
label_527834:
    if (ctx->pc == 0x527834u) {
        ctx->pc = 0x527834u;
            // 0x527834: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x527838u;
        goto label_527838;
    }
    ctx->pc = 0x527830u;
    SET_GPR_U32(ctx, 31, 0x527838u);
    ctx->pc = 0x527834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x527830u;
            // 0x527834: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C850u;
    if (runtime->hasFunction(0x29C850u)) {
        auto targetFn = runtime->lookupFunction(0x29C850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527838u; }
        if (ctx->pc != 0x527838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C850_0x29c850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527838u; }
        if (ctx->pc != 0x527838u) { return; }
    }
    ctx->pc = 0x527838u;
label_527838:
    // 0x527838: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x527838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_52783c:
    // 0x52783c: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x52783cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_527840:
    // 0x527840: 0xc0a7fc0  jal         func_29FF00
label_527844:
    if (ctx->pc == 0x527844u) {
        ctx->pc = 0x527844u;
            // 0x527844: 0x24a5ca90  addiu       $a1, $a1, -0x3570 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953616));
        ctx->pc = 0x527848u;
        goto label_527848;
    }
    ctx->pc = 0x527840u;
    SET_GPR_U32(ctx, 31, 0x527848u);
    ctx->pc = 0x527844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x527840u;
            // 0x527844: 0x24a5ca90  addiu       $a1, $a1, -0x3570 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FF00u;
    if (runtime->hasFunction(0x29FF00u)) {
        auto targetFn = runtime->lookupFunction(0x29FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527848u; }
        if (ctx->pc != 0x527848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FF00_0x29ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527848u; }
        if (ctx->pc != 0x527848u) { return; }
    }
    ctx->pc = 0x527848u;
label_527848:
    // 0x527848: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x527848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52784c:
    // 0x52784c: 0x3c080067  lui         $t0, 0x67
    ctx->pc = 0x52784cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)103 << 16));
label_527850:
    // 0x527850: 0x8c44ea18  lw          $a0, -0x15E8($v0)
    ctx->pc = 0x527850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961688)));
label_527854:
    // 0x527854: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x527854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_527858:
    // 0x527858: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x527858u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_52785c:
    // 0x52785c: 0x2508ca70  addiu       $t0, $t0, -0x3590
    ctx->pc = 0x52785cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953584));
label_527860:
    // 0x527860: 0x24090036  addiu       $t1, $zero, 0x36
    ctx->pc = 0x527860u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_527864:
    // 0x527864: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x527864u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_527868:
    // 0x527868: 0x3c02af55  lui         $v0, 0xAF55
    ctx->pc = 0x527868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44885 << 16));
label_52786c:
    // 0x52786c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x52786cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_527870:
    // 0x527870: 0x320f809  jalr        $t9
label_527874:
    if (ctx->pc == 0x527874u) {
        ctx->pc = 0x527874u;
            // 0x527874: 0x3446ad00  ori         $a2, $v0, 0xAD00 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44288);
        ctx->pc = 0x527878u;
        goto label_527878;
    }
    ctx->pc = 0x527870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x527878u);
        ctx->pc = 0x527874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527870u;
            // 0x527874: 0x3446ad00  ori         $a2, $v0, 0xAD00 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44288);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x527878u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x527878u; }
            if (ctx->pc != 0x527878u) { return; }
        }
        }
    }
    ctx->pc = 0x527878u;
label_527878:
    // 0x527878: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x527878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_52787c:
    // 0x52787c: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x52787cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_527880:
    // 0x527880: 0x2442e030  addiu       $v0, $v0, -0x1FD0
    ctx->pc = 0x527880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959152));
label_527884:
    // 0x527884: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x527884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_527888:
    // 0x527888: 0xc0a7f78  jal         func_29FDE0
label_52788c:
    if (ctx->pc == 0x52788Cu) {
        ctx->pc = 0x52788Cu;
            // 0x52788c: 0xafa20210  sw          $v0, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
        ctx->pc = 0x527890u;
        goto label_527890;
    }
    ctx->pc = 0x527888u;
    SET_GPR_U32(ctx, 31, 0x527890u);
    ctx->pc = 0x52788Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x527888u;
            // 0x52788c: 0xafa20210  sw          $v0, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FDE0u;
    if (runtime->hasFunction(0x29FDE0u)) {
        auto targetFn = runtime->lookupFunction(0x29FDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527890u; }
        if (ctx->pc != 0x527890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FDE0_0x29fde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527890u; }
        if (ctx->pc != 0x527890u) { return; }
    }
    ctx->pc = 0x527890u;
label_527890:
    // 0x527890: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x527890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_527894:
    // 0x527894: 0x3e00008  jr          $ra
label_527898:
    if (ctx->pc == 0x527898u) {
        ctx->pc = 0x527898u;
            // 0x527898: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->pc = 0x52789Cu;
        goto label_52789c;
    }
    ctx->pc = 0x527894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x527898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527894u;
            // 0x527898: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52789Cu;
label_52789c:
    // 0x52789c: 0x0  nop
    ctx->pc = 0x52789cu;
    // NOP
label_5278a0:
    // 0x5278a0: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x5278a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
label_5278a4:
    // 0x5278a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x5278a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_5278a8:
    // 0x5278a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x5278a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_5278ac:
    // 0x5278ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5278acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5278b0:
    // 0x5278b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x5278b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5278b4:
    // 0x5278b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5278b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5278b8:
    // 0x5278b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x5278b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_5278bc:
    // 0x5278bc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x5278bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_5278c0:
    // 0x5278c0: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x5278c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_5278c4:
    // 0x5278c4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x5278c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_5278c8:
    // 0x5278c8: 0xc0a7214  jal         func_29C850
label_5278cc:
    if (ctx->pc == 0x5278CCu) {
        ctx->pc = 0x5278CCu;
            // 0x5278cc: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->pc = 0x5278D0u;
        goto label_5278d0;
    }
    ctx->pc = 0x5278C8u;
    SET_GPR_U32(ctx, 31, 0x5278D0u);
    ctx->pc = 0x5278CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5278C8u;
            // 0x5278cc: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C850u;
    if (runtime->hasFunction(0x29C850u)) {
        auto targetFn = runtime->lookupFunction(0x29C850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5278D0u; }
        if (ctx->pc != 0x5278D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C850_0x29c850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5278D0u; }
        if (ctx->pc != 0x5278D0u) { return; }
    }
    ctx->pc = 0x5278D0u;
label_5278d0:
    // 0x5278d0: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x5278d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_5278d4:
    // 0x5278d4: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x5278d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_5278d8:
    // 0x5278d8: 0xc0a7fc0  jal         func_29FF00
label_5278dc:
    if (ctx->pc == 0x5278DCu) {
        ctx->pc = 0x5278DCu;
            // 0x5278dc: 0x24a5caf0  addiu       $a1, $a1, -0x3510 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953712));
        ctx->pc = 0x5278E0u;
        goto label_5278e0;
    }
    ctx->pc = 0x5278D8u;
    SET_GPR_U32(ctx, 31, 0x5278E0u);
    ctx->pc = 0x5278DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5278D8u;
            // 0x5278dc: 0x24a5caf0  addiu       $a1, $a1, -0x3510 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FF00u;
    if (runtime->hasFunction(0x29FF00u)) {
        auto targetFn = runtime->lookupFunction(0x29FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5278E0u; }
        if (ctx->pc != 0x5278E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FF00_0x29ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5278E0u; }
        if (ctx->pc != 0x5278E0u) { return; }
    }
    ctx->pc = 0x5278E0u;
label_5278e0:
    // 0x5278e0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5278e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5278e4:
    // 0x5278e4: 0x3c080067  lui         $t0, 0x67
    ctx->pc = 0x5278e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)103 << 16));
label_5278e8:
    // 0x5278e8: 0x8c44ea18  lw          $a0, -0x15E8($v0)
    ctx->pc = 0x5278e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961688)));
label_5278ec:
    // 0x5278ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x5278ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5278f0:
    // 0x5278f0: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x5278f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_5278f4:
    // 0x5278f4: 0x2508cad0  addiu       $t0, $t0, -0x3530
    ctx->pc = 0x5278f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953680));
label_5278f8:
    // 0x5278f8: 0x2409003b  addiu       $t1, $zero, 0x3B
    ctx->pc = 0x5278f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_5278fc:
    // 0x5278fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5278fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_527900:
    // 0x527900: 0x3c02af55  lui         $v0, 0xAF55
    ctx->pc = 0x527900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44885 << 16));
label_527904:
    // 0x527904: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x527904u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_527908:
    // 0x527908: 0x320f809  jalr        $t9
label_52790c:
    if (ctx->pc == 0x52790Cu) {
        ctx->pc = 0x52790Cu;
            // 0x52790c: 0x3446ad01  ori         $a2, $v0, 0xAD01 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44289);
        ctx->pc = 0x527910u;
        goto label_527910;
    }
    ctx->pc = 0x527908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x527910u);
        ctx->pc = 0x52790Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527908u;
            // 0x52790c: 0x3446ad01  ori         $a2, $v0, 0xAD01 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44289);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x527910u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x527910u; }
            if (ctx->pc != 0x527910u) { return; }
        }
        }
    }
    ctx->pc = 0x527910u;
label_527910:
    // 0x527910: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x527910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_527914:
    // 0x527914: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x527914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_527918:
    // 0x527918: 0x2442e030  addiu       $v0, $v0, -0x1FD0
    ctx->pc = 0x527918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959152));
label_52791c:
    // 0x52791c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x52791cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_527920:
    // 0x527920: 0xc0a7f78  jal         func_29FDE0
label_527924:
    if (ctx->pc == 0x527924u) {
        ctx->pc = 0x527924u;
            // 0x527924: 0xafa20240  sw          $v0, 0x240($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
        ctx->pc = 0x527928u;
        goto label_527928;
    }
    ctx->pc = 0x527920u;
    SET_GPR_U32(ctx, 31, 0x527928u);
    ctx->pc = 0x527924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x527920u;
            // 0x527924: 0xafa20240  sw          $v0, 0x240($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FDE0u;
    if (runtime->hasFunction(0x29FDE0u)) {
        auto targetFn = runtime->lookupFunction(0x29FDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527928u; }
        if (ctx->pc != 0x527928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FDE0_0x29fde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527928u; }
        if (ctx->pc != 0x527928u) { return; }
    }
    ctx->pc = 0x527928u;
label_527928:
    // 0x527928: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x527928u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_52792c:
    // 0x52792c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x52792cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_527930:
    // 0x527930: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x527930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_527934:
    // 0x527934: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x527934u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_527938:
    // 0x527938: 0x320f809  jalr        $t9
label_52793c:
    if (ctx->pc == 0x52793Cu) {
        ctx->pc = 0x52793Cu;
            // 0x52793c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x527940u;
        goto label_527940;
    }
    ctx->pc = 0x527938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x527940u);
        ctx->pc = 0x52793Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527938u;
            // 0x52793c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x527940u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x527940u; }
            if (ctx->pc != 0x527940u) { return; }
        }
        }
    }
    ctx->pc = 0x527940u;
label_527940:
    // 0x527940: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x527940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_527944:
    // 0x527944: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x527944u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_527948:
    // 0x527948: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x527948u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52794c:
    // 0x52794c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52794cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_527950:
    // 0x527950: 0x3e00008  jr          $ra
label_527954:
    if (ctx->pc == 0x527954u) {
        ctx->pc = 0x527954u;
            // 0x527954: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->pc = 0x527958u;
        goto label_527958;
    }
    ctx->pc = 0x527950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x527954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527950u;
            // 0x527954: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x527958u;
label_527958:
    // 0x527958: 0x0  nop
    ctx->pc = 0x527958u;
    // NOP
label_52795c:
    // 0x52795c: 0x0  nop
    ctx->pc = 0x52795cu;
    // NOP
label_527960:
    // 0x527960: 0x27bdfda0  addiu       $sp, $sp, -0x260
    ctx->pc = 0x527960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966688));
label_527964:
    // 0x527964: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x527964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_527968:
    // 0x527968: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x527968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_52796c:
    // 0x52796c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x52796cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_527970:
    // 0x527970: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x527970u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_527974:
    // 0x527974: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x527974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_527978:
    // 0x527978: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x527978u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_52797c:
    // 0x52797c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52797cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_527980:
    // 0x527980: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x527980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_527984:
    // 0x527984: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x527984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_527988:
    // 0x527988: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x527988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_52798c:
    // 0x52798c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x52798cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_527990:
    // 0x527990: 0xc0a7214  jal         func_29C850
label_527994:
    if (ctx->pc == 0x527994u) {
        ctx->pc = 0x527994u;
            // 0x527994: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->pc = 0x527998u;
        goto label_527998;
    }
    ctx->pc = 0x527990u;
    SET_GPR_U32(ctx, 31, 0x527998u);
    ctx->pc = 0x527994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x527990u;
            // 0x527994: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C850u;
    if (runtime->hasFunction(0x29C850u)) {
        auto targetFn = runtime->lookupFunction(0x29C850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527998u; }
        if (ctx->pc != 0x527998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C850_0x29c850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527998u; }
        if (ctx->pc != 0x527998u) { return; }
    }
    ctx->pc = 0x527998u;
label_527998:
    // 0x527998: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x527998u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_52799c:
    // 0x52799c: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x52799cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_5279a0:
    // 0x5279a0: 0xc0a7fc0  jal         func_29FF00
label_5279a4:
    if (ctx->pc == 0x5279A4u) {
        ctx->pc = 0x5279A4u;
            // 0x5279a4: 0x24a5cb50  addiu       $a1, $a1, -0x34B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953808));
        ctx->pc = 0x5279A8u;
        goto label_5279a8;
    }
    ctx->pc = 0x5279A0u;
    SET_GPR_U32(ctx, 31, 0x5279A8u);
    ctx->pc = 0x5279A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5279A0u;
            // 0x5279a4: 0x24a5cb50  addiu       $a1, $a1, -0x34B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FF00u;
    if (runtime->hasFunction(0x29FF00u)) {
        auto targetFn = runtime->lookupFunction(0x29FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5279A8u; }
        if (ctx->pc != 0x5279A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FF00_0x29ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5279A8u; }
        if (ctx->pc != 0x5279A8u) { return; }
    }
    ctx->pc = 0x5279A8u;
label_5279a8:
    // 0x5279a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5279a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5279ac:
    // 0x5279ac: 0x3c080067  lui         $t0, 0x67
    ctx->pc = 0x5279acu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)103 << 16));
label_5279b0:
    // 0x5279b0: 0x8c44ea18  lw          $a0, -0x15E8($v0)
    ctx->pc = 0x5279b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961688)));
label_5279b4:
    // 0x5279b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x5279b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5279b8:
    // 0x5279b8: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x5279b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_5279bc:
    // 0x5279bc: 0x2508cb30  addiu       $t0, $t0, -0x34D0
    ctx->pc = 0x5279bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953776));
label_5279c0:
    // 0x5279c0: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x5279c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_5279c4:
    // 0x5279c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5279c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5279c8:
    // 0x5279c8: 0x3c02af55  lui         $v0, 0xAF55
    ctx->pc = 0x5279c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44885 << 16));
label_5279cc:
    // 0x5279cc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x5279ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_5279d0:
    // 0x5279d0: 0x320f809  jalr        $t9
label_5279d4:
    if (ctx->pc == 0x5279D4u) {
        ctx->pc = 0x5279D4u;
            // 0x5279d4: 0x3446ad02  ori         $a2, $v0, 0xAD02 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44290);
        ctx->pc = 0x5279D8u;
        goto label_5279d8;
    }
    ctx->pc = 0x5279D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5279D8u);
        ctx->pc = 0x5279D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5279D0u;
            // 0x5279d4: 0x3446ad02  ori         $a2, $v0, 0xAD02 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44290);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5279D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5279D8u; }
            if (ctx->pc != 0x5279D8u) { return; }
        }
        }
    }
    ctx->pc = 0x5279D8u;
label_5279d8:
    // 0x5279d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x5279d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_5279dc:
    // 0x5279dc: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x5279dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_5279e0:
    // 0x5279e0: 0x2442e030  addiu       $v0, $v0, -0x1FD0
    ctx->pc = 0x5279e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959152));
label_5279e4:
    // 0x5279e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x5279e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5279e8:
    // 0x5279e8: 0xc0a7f78  jal         func_29FDE0
label_5279ec:
    if (ctx->pc == 0x5279ECu) {
        ctx->pc = 0x5279ECu;
            // 0x5279ec: 0xafa20250  sw          $v0, 0x250($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 2));
        ctx->pc = 0x5279F0u;
        goto label_5279f0;
    }
    ctx->pc = 0x5279E8u;
    SET_GPR_U32(ctx, 31, 0x5279F0u);
    ctx->pc = 0x5279ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5279E8u;
            // 0x5279ec: 0xafa20250  sw          $v0, 0x250($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FDE0u;
    if (runtime->hasFunction(0x29FDE0u)) {
        auto targetFn = runtime->lookupFunction(0x29FDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5279F0u; }
        if (ctx->pc != 0x5279F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FDE0_0x29fde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5279F0u; }
        if (ctx->pc != 0x5279F0u) { return; }
    }
    ctx->pc = 0x5279F0u;
label_5279f0:
    // 0x5279f0: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x5279f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_5279f4:
    // 0x5279f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x5279f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5279f8:
    // 0x5279f8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x5279f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5279fc:
    // 0x5279fc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x5279fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_527a00:
    // 0x527a00: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x527a00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_527a04:
    // 0x527a04: 0x320f809  jalr        $t9
label_527a08:
    if (ctx->pc == 0x527A08u) {
        ctx->pc = 0x527A08u;
            // 0x527a08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x527A0Cu;
        goto label_527a0c;
    }
    ctx->pc = 0x527A04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x527A0Cu);
        ctx->pc = 0x527A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527A04u;
            // 0x527a08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x527A0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x527A0Cu; }
            if (ctx->pc != 0x527A0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x527A0Cu;
label_527a0c:
    // 0x527a0c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x527a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_527a10:
    // 0x527a10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x527a10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_527a14:
    // 0x527a14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x527a14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_527a18:
    // 0x527a18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x527a18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_527a1c:
    // 0x527a1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x527a1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_527a20:
    // 0x527a20: 0x3e00008  jr          $ra
label_527a24:
    if (ctx->pc == 0x527A24u) {
        ctx->pc = 0x527A24u;
            // 0x527a24: 0x27bd0260  addiu       $sp, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->pc = 0x527A28u;
        goto label_527a28;
    }
    ctx->pc = 0x527A20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x527A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527A20u;
            // 0x527a24: 0x27bd0260  addiu       $sp, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x527A28u;
label_527a28:
    // 0x527a28: 0x0  nop
    ctx->pc = 0x527a28u;
    // NOP
label_527a2c:
    // 0x527a2c: 0x0  nop
    ctx->pc = 0x527a2cu;
    // NOP
label_527a30:
    // 0x527a30: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x527a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
label_527a34:
    // 0x527a34: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x527a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_527a38:
    // 0x527a38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x527a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_527a3c:
    // 0x527a3c: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x527a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_527a40:
    // 0x527a40: 0xc0a7214  jal         func_29C850
label_527a44:
    if (ctx->pc == 0x527A44u) {
        ctx->pc = 0x527A44u;
            // 0x527a44: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x527A48u;
        goto label_527a48;
    }
    ctx->pc = 0x527A40u;
    SET_GPR_U32(ctx, 31, 0x527A48u);
    ctx->pc = 0x527A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x527A40u;
            // 0x527a44: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C850u;
    if (runtime->hasFunction(0x29C850u)) {
        auto targetFn = runtime->lookupFunction(0x29C850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527A48u; }
        if (ctx->pc != 0x527A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C850_0x29c850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527A48u; }
        if (ctx->pc != 0x527A48u) { return; }
    }
    ctx->pc = 0x527A48u;
label_527a48:
    // 0x527a48: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x527a48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_527a4c:
    // 0x527a4c: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x527a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_527a50:
    // 0x527a50: 0xc0a7fc0  jal         func_29FF00
label_527a54:
    if (ctx->pc == 0x527A54u) {
        ctx->pc = 0x527A54u;
            // 0x527a54: 0x24a5cbb0  addiu       $a1, $a1, -0x3450 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953904));
        ctx->pc = 0x527A58u;
        goto label_527a58;
    }
    ctx->pc = 0x527A50u;
    SET_GPR_U32(ctx, 31, 0x527A58u);
    ctx->pc = 0x527A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x527A50u;
            // 0x527a54: 0x24a5cbb0  addiu       $a1, $a1, -0x3450 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FF00u;
    if (runtime->hasFunction(0x29FF00u)) {
        auto targetFn = runtime->lookupFunction(0x29FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527A58u; }
        if (ctx->pc != 0x527A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FF00_0x29ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527A58u; }
        if (ctx->pc != 0x527A58u) { return; }
    }
    ctx->pc = 0x527A58u;
label_527a58:
    // 0x527a58: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x527a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_527a5c:
    // 0x527a5c: 0x3c080067  lui         $t0, 0x67
    ctx->pc = 0x527a5cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)103 << 16));
label_527a60:
    // 0x527a60: 0x8c44ea18  lw          $a0, -0x15E8($v0)
    ctx->pc = 0x527a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961688)));
label_527a64:
    // 0x527a64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x527a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_527a68:
    // 0x527a68: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x527a68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_527a6c:
    // 0x527a6c: 0x2508cb90  addiu       $t0, $t0, -0x3470
    ctx->pc = 0x527a6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953872));
label_527a70:
    // 0x527a70: 0x24090048  addiu       $t1, $zero, 0x48
    ctx->pc = 0x527a70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_527a74:
    // 0x527a74: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x527a74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_527a78:
    // 0x527a78: 0x3c02af55  lui         $v0, 0xAF55
    ctx->pc = 0x527a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44885 << 16));
label_527a7c:
    // 0x527a7c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x527a7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_527a80:
    // 0x527a80: 0x320f809  jalr        $t9
label_527a84:
    if (ctx->pc == 0x527A84u) {
        ctx->pc = 0x527A84u;
            // 0x527a84: 0x3446ad03  ori         $a2, $v0, 0xAD03 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44291);
        ctx->pc = 0x527A88u;
        goto label_527a88;
    }
    ctx->pc = 0x527A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x527A88u);
        ctx->pc = 0x527A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527A80u;
            // 0x527a84: 0x3446ad03  ori         $a2, $v0, 0xAD03 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44291);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x527A88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x527A88u; }
            if (ctx->pc != 0x527A88u) { return; }
        }
        }
    }
    ctx->pc = 0x527A88u;
label_527a88:
    // 0x527a88: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x527a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_527a8c:
    // 0x527a8c: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x527a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_527a90:
    // 0x527a90: 0x2442e030  addiu       $v0, $v0, -0x1FD0
    ctx->pc = 0x527a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959152));
label_527a94:
    // 0x527a94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x527a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_527a98:
    // 0x527a98: 0xc0a7f78  jal         func_29FDE0
label_527a9c:
    if (ctx->pc == 0x527A9Cu) {
        ctx->pc = 0x527A9Cu;
            // 0x527a9c: 0xafa20210  sw          $v0, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
        ctx->pc = 0x527AA0u;
        goto label_527aa0;
    }
    ctx->pc = 0x527A98u;
    SET_GPR_U32(ctx, 31, 0x527AA0u);
    ctx->pc = 0x527A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x527A98u;
            // 0x527a9c: 0xafa20210  sw          $v0, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FDE0u;
    if (runtime->hasFunction(0x29FDE0u)) {
        auto targetFn = runtime->lookupFunction(0x29FDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527AA0u; }
        if (ctx->pc != 0x527AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FDE0_0x29fde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527AA0u; }
        if (ctx->pc != 0x527AA0u) { return; }
    }
    ctx->pc = 0x527AA0u;
label_527aa0:
    // 0x527aa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x527aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_527aa4:
    // 0x527aa4: 0x3e00008  jr          $ra
label_527aa8:
    if (ctx->pc == 0x527AA8u) {
        ctx->pc = 0x527AA8u;
            // 0x527aa8: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->pc = 0x527AACu;
        goto label_527aac;
    }
    ctx->pc = 0x527AA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x527AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527AA4u;
            // 0x527aa8: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x527AACu;
label_527aac:
    // 0x527aac: 0x0  nop
    ctx->pc = 0x527aacu;
    // NOP
label_527ab0:
    // 0x527ab0: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x527ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
label_527ab4:
    // 0x527ab4: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x527ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_527ab8:
    // 0x527ab8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x527ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_527abc:
    // 0x527abc: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x527abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_527ac0:
    // 0x527ac0: 0xc0a7214  jal         func_29C850
label_527ac4:
    if (ctx->pc == 0x527AC4u) {
        ctx->pc = 0x527AC4u;
            // 0x527ac4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x527AC8u;
        goto label_527ac8;
    }
    ctx->pc = 0x527AC0u;
    SET_GPR_U32(ctx, 31, 0x527AC8u);
    ctx->pc = 0x527AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x527AC0u;
            // 0x527ac4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C850u;
    if (runtime->hasFunction(0x29C850u)) {
        auto targetFn = runtime->lookupFunction(0x29C850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527AC8u; }
        if (ctx->pc != 0x527AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C850_0x29c850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527AC8u; }
        if (ctx->pc != 0x527AC8u) { return; }
    }
    ctx->pc = 0x527AC8u;
label_527ac8:
    // 0x527ac8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x527ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_527acc:
    // 0x527acc: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x527accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_527ad0:
    // 0x527ad0: 0xc0a7fc0  jal         func_29FF00
label_527ad4:
    if (ctx->pc == 0x527AD4u) {
        ctx->pc = 0x527AD4u;
            // 0x527ad4: 0x24a5cc10  addiu       $a1, $a1, -0x33F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954000));
        ctx->pc = 0x527AD8u;
        goto label_527ad8;
    }
    ctx->pc = 0x527AD0u;
    SET_GPR_U32(ctx, 31, 0x527AD8u);
    ctx->pc = 0x527AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x527AD0u;
            // 0x527ad4: 0x24a5cc10  addiu       $a1, $a1, -0x33F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FF00u;
    if (runtime->hasFunction(0x29FF00u)) {
        auto targetFn = runtime->lookupFunction(0x29FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527AD8u; }
        if (ctx->pc != 0x527AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FF00_0x29ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527AD8u; }
        if (ctx->pc != 0x527AD8u) { return; }
    }
    ctx->pc = 0x527AD8u;
label_527ad8:
    // 0x527ad8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x527ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_527adc:
    // 0x527adc: 0x3c080067  lui         $t0, 0x67
    ctx->pc = 0x527adcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)103 << 16));
label_527ae0:
    // 0x527ae0: 0x8c44ea18  lw          $a0, -0x15E8($v0)
    ctx->pc = 0x527ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961688)));
label_527ae4:
    // 0x527ae4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x527ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_527ae8:
    // 0x527ae8: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x527ae8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_527aec:
    // 0x527aec: 0x2508cbf0  addiu       $t0, $t0, -0x3410
    ctx->pc = 0x527aecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953968));
label_527af0:
    // 0x527af0: 0x2409004d  addiu       $t1, $zero, 0x4D
    ctx->pc = 0x527af0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
label_527af4:
    // 0x527af4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x527af4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_527af8:
    // 0x527af8: 0x3c02af55  lui         $v0, 0xAF55
    ctx->pc = 0x527af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44885 << 16));
label_527afc:
    // 0x527afc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x527afcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_527b00:
    // 0x527b00: 0x320f809  jalr        $t9
label_527b04:
    if (ctx->pc == 0x527B04u) {
        ctx->pc = 0x527B04u;
            // 0x527b04: 0x3446ad03  ori         $a2, $v0, 0xAD03 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44291);
        ctx->pc = 0x527B08u;
        goto label_527b08;
    }
    ctx->pc = 0x527B00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x527B08u);
        ctx->pc = 0x527B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527B00u;
            // 0x527b04: 0x3446ad03  ori         $a2, $v0, 0xAD03 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44291);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x527B08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x527B08u; }
            if (ctx->pc != 0x527B08u) { return; }
        }
        }
    }
    ctx->pc = 0x527B08u;
label_527b08:
    // 0x527b08: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x527b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_527b0c:
    // 0x527b0c: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x527b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_527b10:
    // 0x527b10: 0x2442e030  addiu       $v0, $v0, -0x1FD0
    ctx->pc = 0x527b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959152));
label_527b14:
    // 0x527b14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x527b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_527b18:
    // 0x527b18: 0xc0a7f78  jal         func_29FDE0
label_527b1c:
    if (ctx->pc == 0x527B1Cu) {
        ctx->pc = 0x527B1Cu;
            // 0x527b1c: 0xafa20210  sw          $v0, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
        ctx->pc = 0x527B20u;
        goto label_527b20;
    }
    ctx->pc = 0x527B18u;
    SET_GPR_U32(ctx, 31, 0x527B20u);
    ctx->pc = 0x527B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x527B18u;
            // 0x527b1c: 0xafa20210  sw          $v0, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FDE0u;
    if (runtime->hasFunction(0x29FDE0u)) {
        auto targetFn = runtime->lookupFunction(0x29FDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527B20u; }
        if (ctx->pc != 0x527B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FDE0_0x29fde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527B20u; }
        if (ctx->pc != 0x527B20u) { return; }
    }
    ctx->pc = 0x527B20u;
label_527b20:
    // 0x527b20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x527b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_527b24:
    // 0x527b24: 0x3e00008  jr          $ra
label_527b28:
    if (ctx->pc == 0x527B28u) {
        ctx->pc = 0x527B28u;
            // 0x527b28: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->pc = 0x527B2Cu;
        goto label_527b2c;
    }
    ctx->pc = 0x527B24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x527B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527B24u;
            // 0x527b28: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x527B2Cu;
label_527b2c:
    // 0x527b2c: 0x0  nop
    ctx->pc = 0x527b2cu;
    // NOP
label_527b30:
    // 0x527b30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x527b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_527b34:
    // 0x527b34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x527b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_527b38:
    // 0x527b38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x527b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_527b3c:
    // 0x527b3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x527b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_527b40:
    // 0x527b40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x527b40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_527b44:
    // 0x527b44: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_527b48:
    if (ctx->pc == 0x527B48u) {
        ctx->pc = 0x527B48u;
            // 0x527b48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x527B4Cu;
        goto label_527b4c;
    }
    ctx->pc = 0x527B44u;
    {
        const bool branch_taken_0x527b44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x527B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527B44u;
            // 0x527b48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x527b44) {
            ctx->pc = 0x527B80u;
            goto label_527b80;
        }
    }
    ctx->pc = 0x527B4Cu;
label_527b4c:
    // 0x527b4c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x527b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_527b50:
    // 0x527b50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x527b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_527b54:
    // 0x527b54: 0x244264d0  addiu       $v0, $v0, 0x64D0
    ctx->pc = 0x527b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25808));
label_527b58:
    // 0x527b58: 0xc0a76b0  jal         func_29DAC0
label_527b5c:
    if (ctx->pc == 0x527B5Cu) {
        ctx->pc = 0x527B5Cu;
            // 0x527b5c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x527B60u;
        goto label_527b60;
    }
    ctx->pc = 0x527B58u;
    SET_GPR_U32(ctx, 31, 0x527B60u);
    ctx->pc = 0x527B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x527B58u;
            // 0x527b5c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29DAC0u;
    if (runtime->hasFunction(0x29DAC0u)) {
        auto targetFn = runtime->lookupFunction(0x29DAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527B60u; }
        if (ctx->pc != 0x527B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029DAC0_0x29dac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527B60u; }
        if (ctx->pc != 0x527B60u) { return; }
    }
    ctx->pc = 0x527B60u;
label_527b60:
    // 0x527b60: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x527b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_527b64:
    // 0x527b64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x527b64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_527b68:
    // 0x527b68: 0x58400006  blezl       $v0, . + 4 + (0x6 << 2)
label_527b6c:
    if (ctx->pc == 0x527B6Cu) {
        ctx->pc = 0x527B6Cu;
            // 0x527b6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x527B70u;
        goto label_527b70;
    }
    ctx->pc = 0x527B68u;
    {
        const bool branch_taken_0x527b68 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x527b68) {
            ctx->pc = 0x527B6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x527B68u;
            // 0x527b6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x527B84u;
            goto label_527b84;
        }
    }
    ctx->pc = 0x527B70u;
label_527b70:
    // 0x527b70: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x527b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_527b74:
    // 0x527b74: 0x8c42da00  lw          $v0, -0x2600($v0)
    ctx->pc = 0x527b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957568)));
label_527b78:
    // 0x527b78: 0x40f809  jalr        $v0
label_527b7c:
    if (ctx->pc == 0x527B7Cu) {
        ctx->pc = 0x527B7Cu;
            // 0x527b7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x527B80u;
        goto label_527b80;
    }
    ctx->pc = 0x527B78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x527B80u);
        ctx->pc = 0x527B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527B78u;
            // 0x527b7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x527B80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x527B80u; }
            if (ctx->pc != 0x527B80u) { return; }
        }
        }
    }
    ctx->pc = 0x527B80u;
label_527b80:
    // 0x527b80: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x527b80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_527b84:
    // 0x527b84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x527b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_527b88:
    // 0x527b88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x527b88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_527b8c:
    // 0x527b8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x527b8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_527b90:
    // 0x527b90: 0x3e00008  jr          $ra
label_527b94:
    if (ctx->pc == 0x527B94u) {
        ctx->pc = 0x527B94u;
            // 0x527b94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x527B98u;
        goto label_527b98;
    }
    ctx->pc = 0x527B90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x527B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527B90u;
            // 0x527b94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x527B98u;
label_527b98:
    // 0x527b98: 0x0  nop
    ctx->pc = 0x527b98u;
    // NOP
label_527b9c:
    // 0x527b9c: 0x0  nop
    ctx->pc = 0x527b9cu;
    // NOP
label_527ba0:
    // 0x527ba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x527ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_527ba4:
    // 0x527ba4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x527ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_527ba8:
    // 0x527ba8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x527ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_527bac:
    // 0x527bac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x527bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_527bb0:
    // 0x527bb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x527bb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_527bb4:
    // 0x527bb4: 0x12200034  beqz        $s1, . + 4 + (0x34 << 2)
label_527bb8:
    if (ctx->pc == 0x527BB8u) {
        ctx->pc = 0x527BB8u;
            // 0x527bb8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x527BBCu;
        goto label_527bbc;
    }
    ctx->pc = 0x527BB4u;
    {
        const bool branch_taken_0x527bb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x527BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527BB4u;
            // 0x527bb8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x527bb4) {
            ctx->pc = 0x527C88u;
            goto label_527c88;
        }
    }
    ctx->pc = 0x527BBCu;
label_527bbc:
    // 0x527bbc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x527bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_527bc0:
    // 0x527bc0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x527bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_527bc4:
    // 0x527bc4: 0x24636530  addiu       $v1, $v1, 0x6530
    ctx->pc = 0x527bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25904));
label_527bc8:
    // 0x527bc8: 0x24426568  addiu       $v0, $v0, 0x6568
    ctx->pc = 0x527bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25960));
label_527bcc:
    // 0x527bcc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x527bccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_527bd0:
    // 0x527bd0: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x527bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_527bd4:
    // 0x527bd4: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x527bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_527bd8:
    // 0x527bd8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_527bdc:
    if (ctx->pc == 0x527BDCu) {
        ctx->pc = 0x527BDCu;
            // 0x527bdc: 0x262400a8  addiu       $a0, $s1, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
        ctx->pc = 0x527BE0u;
        goto label_527be0;
    }
    ctx->pc = 0x527BD8u;
    {
        const bool branch_taken_0x527bd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x527bd8) {
            ctx->pc = 0x527BDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x527BD8u;
            // 0x527bdc: 0x262400a8  addiu       $a0, $s1, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
        ctx->in_delay_slot = false;
            ctx->pc = 0x527BF4u;
            goto label_527bf4;
        }
    }
    ctx->pc = 0x527BE0u;
label_527be0:
    // 0x527be0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x527be0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_527be4:
    // 0x527be4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x527be4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_527be8:
    // 0x527be8: 0x320f809  jalr        $t9
label_527bec:
    if (ctx->pc == 0x527BECu) {
        ctx->pc = 0x527BECu;
            // 0x527bec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x527BF0u;
        goto label_527bf0;
    }
    ctx->pc = 0x527BE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x527BF0u);
        ctx->pc = 0x527BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527BE8u;
            // 0x527bec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x527BF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x527BF0u; }
            if (ctx->pc != 0x527BF0u) { return; }
        }
        }
    }
    ctx->pc = 0x527BF0u;
label_527bf0:
    // 0x527bf0: 0x262400a8  addiu       $a0, $s1, 0xA8
    ctx->pc = 0x527bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
label_527bf4:
    // 0x527bf4: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_527bf8:
    if (ctx->pc == 0x527BF8u) {
        ctx->pc = 0x527BFCu;
        goto label_527bfc;
    }
    ctx->pc = 0x527BF4u;
    {
        const bool branch_taken_0x527bf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x527bf4) {
            ctx->pc = 0x527C44u;
            goto label_527c44;
        }
    }
    ctx->pc = 0x527BFCu;
label_527bfc:
    // 0x527bfc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x527bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_527c00:
    // 0x527c00: 0x244266d0  addiu       $v0, $v0, 0x66D0
    ctx->pc = 0x527c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26320));
label_527c04:
    // 0x527c04: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_527c08:
    if (ctx->pc == 0x527C08u) {
        ctx->pc = 0x527C08u;
            // 0x527c08: 0xae2200a8  sw          $v0, 0xA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 2));
        ctx->pc = 0x527C0Cu;
        goto label_527c0c;
    }
    ctx->pc = 0x527C04u;
    {
        const bool branch_taken_0x527c04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x527C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527C04u;
            // 0x527c08: 0xae2200a8  sw          $v0, 0xA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x527c04) {
            ctx->pc = 0x527C44u;
            goto label_527c44;
        }
    }
    ctx->pc = 0x527C0Cu;
label_527c0c:
    // 0x527c0c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x527c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_527c10:
    // 0x527c10: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x527c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_527c14:
    // 0x527c14: 0xc0d37dc  jal         func_34DF70
label_527c18:
    if (ctx->pc == 0x527C18u) {
        ctx->pc = 0x527C18u;
            // 0x527c18: 0xae2200a8  sw          $v0, 0xA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 2));
        ctx->pc = 0x527C1Cu;
        goto label_527c1c;
    }
    ctx->pc = 0x527C14u;
    SET_GPR_U32(ctx, 31, 0x527C1Cu);
    ctx->pc = 0x527C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x527C14u;
            // 0x527c18: 0xae2200a8  sw          $v0, 0xA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527C1Cu; }
        if (ctx->pc != 0x527C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527C1Cu; }
        if (ctx->pc != 0x527C1Cu) { return; }
    }
    ctx->pc = 0x527C1Cu;
label_527c1c:
    // 0x527c1c: 0x262300a8  addiu       $v1, $s1, 0xA8
    ctx->pc = 0x527c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
label_527c20:
    // 0x527c20: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_527c24:
    if (ctx->pc == 0x527C24u) {
        ctx->pc = 0x527C28u;
        goto label_527c28;
    }
    ctx->pc = 0x527C20u;
    {
        const bool branch_taken_0x527c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x527c20) {
            ctx->pc = 0x527C44u;
            goto label_527c44;
        }
    }
    ctx->pc = 0x527C28u;
label_527c28:
    // 0x527c28: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x527c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_527c2c:
    // 0x527c2c: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x527c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_527c30:
    // 0x527c30: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_527c34:
    if (ctx->pc == 0x527C34u) {
        ctx->pc = 0x527C34u;
            // 0x527c34: 0xae2200a8  sw          $v0, 0xA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 2));
        ctx->pc = 0x527C38u;
        goto label_527c38;
    }
    ctx->pc = 0x527C30u;
    {
        const bool branch_taken_0x527c30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x527C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527C30u;
            // 0x527c34: 0xae2200a8  sw          $v0, 0xA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x527c30) {
            ctx->pc = 0x527C44u;
            goto label_527c44;
        }
    }
    ctx->pc = 0x527C38u;
label_527c38:
    // 0x527c38: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x527c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_527c3c:
    // 0x527c3c: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x527c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_527c40:
    // 0x527c40: 0xae2200a8  sw          $v0, 0xA8($s1)
    ctx->pc = 0x527c40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 2));
label_527c44:
    // 0x527c44: 0x5220000b  beql        $s1, $zero, . + 4 + (0xB << 2)
label_527c48:
    if (ctx->pc == 0x527C48u) {
        ctx->pc = 0x527C48u;
            // 0x527c48: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x527C4Cu;
        goto label_527c4c;
    }
    ctx->pc = 0x527C44u;
    {
        const bool branch_taken_0x527c44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x527c44) {
            ctx->pc = 0x527C48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x527C44u;
            // 0x527c48: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x527C74u;
            goto label_527c74;
        }
    }
    ctx->pc = 0x527C4Cu;
label_527c4c:
    // 0x527c4c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x527c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_527c50:
    // 0x527c50: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x527c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_527c54:
    // 0x527c54: 0x24636680  addiu       $v1, $v1, 0x6680
    ctx->pc = 0x527c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26240));
label_527c58:
    // 0x527c58: 0x244266b8  addiu       $v0, $v0, 0x66B8
    ctx->pc = 0x527c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26296));
label_527c5c:
    // 0x527c5c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x527c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_527c60:
    // 0x527c60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x527c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_527c64:
    // 0x527c64: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x527c64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_527c68:
    // 0x527c68: 0xc149f28  jal         func_527CA0
label_527c6c:
    if (ctx->pc == 0x527C6Cu) {
        ctx->pc = 0x527C6Cu;
            // 0x527c6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x527C70u;
        goto label_527c70;
    }
    ctx->pc = 0x527C68u;
    SET_GPR_U32(ctx, 31, 0x527C70u);
    ctx->pc = 0x527C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x527C68u;
            // 0x527c6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x527CA0u;
    if (runtime->hasFunction(0x527CA0u)) {
        auto targetFn = runtime->lookupFunction(0x527CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527C70u; }
        if (ctx->pc != 0x527C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00527CA0_0x527ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527C70u; }
        if (ctx->pc != 0x527C70u) { return; }
    }
    ctx->pc = 0x527C70u;
label_527c70:
    // 0x527c70: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x527c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_527c74:
    // 0x527c74: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x527c74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_527c78:
    // 0x527c78: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_527c7c:
    if (ctx->pc == 0x527C7Cu) {
        ctx->pc = 0x527C7Cu;
            // 0x527c7c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x527C80u;
        goto label_527c80;
    }
    ctx->pc = 0x527C78u;
    {
        const bool branch_taken_0x527c78 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x527c78) {
            ctx->pc = 0x527C7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x527C78u;
            // 0x527c7c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x527C8Cu;
            goto label_527c8c;
        }
    }
    ctx->pc = 0x527C80u;
label_527c80:
    // 0x527c80: 0xc0400a8  jal         func_1002A0
label_527c84:
    if (ctx->pc == 0x527C84u) {
        ctx->pc = 0x527C84u;
            // 0x527c84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x527C88u;
        goto label_527c88;
    }
    ctx->pc = 0x527C80u;
    SET_GPR_U32(ctx, 31, 0x527C88u);
    ctx->pc = 0x527C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x527C80u;
            // 0x527c84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527C88u; }
        if (ctx->pc != 0x527C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527C88u; }
        if (ctx->pc != 0x527C88u) { return; }
    }
    ctx->pc = 0x527C88u;
label_527c88:
    // 0x527c88: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x527c88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_527c8c:
    // 0x527c8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x527c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_527c90:
    // 0x527c90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x527c90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_527c94:
    // 0x527c94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x527c94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_527c98:
    // 0x527c98: 0x3e00008  jr          $ra
label_527c9c:
    if (ctx->pc == 0x527C9Cu) {
        ctx->pc = 0x527C9Cu;
            // 0x527c9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x527CA0u;
        goto label_fallthrough_0x527c98;
    }
    ctx->pc = 0x527C98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x527C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527C98u;
            // 0x527c9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x527c98:
    ctx->pc = 0x527CA0u;
}
