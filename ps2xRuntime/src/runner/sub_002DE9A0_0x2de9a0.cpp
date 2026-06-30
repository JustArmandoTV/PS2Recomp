#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DE9A0
// Address: 0x2de9a0 - 0x2df350
void sub_002DE9A0_0x2de9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE9A0_0x2de9a0");
#endif

    switch (ctx->pc) {
        case 0x2de9a0u: goto label_2de9a0;
        case 0x2de9a4u: goto label_2de9a4;
        case 0x2de9a8u: goto label_2de9a8;
        case 0x2de9acu: goto label_2de9ac;
        case 0x2de9b0u: goto label_2de9b0;
        case 0x2de9b4u: goto label_2de9b4;
        case 0x2de9b8u: goto label_2de9b8;
        case 0x2de9bcu: goto label_2de9bc;
        case 0x2de9c0u: goto label_2de9c0;
        case 0x2de9c4u: goto label_2de9c4;
        case 0x2de9c8u: goto label_2de9c8;
        case 0x2de9ccu: goto label_2de9cc;
        case 0x2de9d0u: goto label_2de9d0;
        case 0x2de9d4u: goto label_2de9d4;
        case 0x2de9d8u: goto label_2de9d8;
        case 0x2de9dcu: goto label_2de9dc;
        case 0x2de9e0u: goto label_2de9e0;
        case 0x2de9e4u: goto label_2de9e4;
        case 0x2de9e8u: goto label_2de9e8;
        case 0x2de9ecu: goto label_2de9ec;
        case 0x2de9f0u: goto label_2de9f0;
        case 0x2de9f4u: goto label_2de9f4;
        case 0x2de9f8u: goto label_2de9f8;
        case 0x2de9fcu: goto label_2de9fc;
        case 0x2dea00u: goto label_2dea00;
        case 0x2dea04u: goto label_2dea04;
        case 0x2dea08u: goto label_2dea08;
        case 0x2dea0cu: goto label_2dea0c;
        case 0x2dea10u: goto label_2dea10;
        case 0x2dea14u: goto label_2dea14;
        case 0x2dea18u: goto label_2dea18;
        case 0x2dea1cu: goto label_2dea1c;
        case 0x2dea20u: goto label_2dea20;
        case 0x2dea24u: goto label_2dea24;
        case 0x2dea28u: goto label_2dea28;
        case 0x2dea2cu: goto label_2dea2c;
        case 0x2dea30u: goto label_2dea30;
        case 0x2dea34u: goto label_2dea34;
        case 0x2dea38u: goto label_2dea38;
        case 0x2dea3cu: goto label_2dea3c;
        case 0x2dea40u: goto label_2dea40;
        case 0x2dea44u: goto label_2dea44;
        case 0x2dea48u: goto label_2dea48;
        case 0x2dea4cu: goto label_2dea4c;
        case 0x2dea50u: goto label_2dea50;
        case 0x2dea54u: goto label_2dea54;
        case 0x2dea58u: goto label_2dea58;
        case 0x2dea5cu: goto label_2dea5c;
        case 0x2dea60u: goto label_2dea60;
        case 0x2dea64u: goto label_2dea64;
        case 0x2dea68u: goto label_2dea68;
        case 0x2dea6cu: goto label_2dea6c;
        case 0x2dea70u: goto label_2dea70;
        case 0x2dea74u: goto label_2dea74;
        case 0x2dea78u: goto label_2dea78;
        case 0x2dea7cu: goto label_2dea7c;
        case 0x2dea80u: goto label_2dea80;
        case 0x2dea84u: goto label_2dea84;
        case 0x2dea88u: goto label_2dea88;
        case 0x2dea8cu: goto label_2dea8c;
        case 0x2dea90u: goto label_2dea90;
        case 0x2dea94u: goto label_2dea94;
        case 0x2dea98u: goto label_2dea98;
        case 0x2dea9cu: goto label_2dea9c;
        case 0x2deaa0u: goto label_2deaa0;
        case 0x2deaa4u: goto label_2deaa4;
        case 0x2deaa8u: goto label_2deaa8;
        case 0x2deaacu: goto label_2deaac;
        case 0x2deab0u: goto label_2deab0;
        case 0x2deab4u: goto label_2deab4;
        case 0x2deab8u: goto label_2deab8;
        case 0x2deabcu: goto label_2deabc;
        case 0x2deac0u: goto label_2deac0;
        case 0x2deac4u: goto label_2deac4;
        case 0x2deac8u: goto label_2deac8;
        case 0x2deaccu: goto label_2deacc;
        case 0x2dead0u: goto label_2dead0;
        case 0x2dead4u: goto label_2dead4;
        case 0x2dead8u: goto label_2dead8;
        case 0x2deadcu: goto label_2deadc;
        case 0x2deae0u: goto label_2deae0;
        case 0x2deae4u: goto label_2deae4;
        case 0x2deae8u: goto label_2deae8;
        case 0x2deaecu: goto label_2deaec;
        case 0x2deaf0u: goto label_2deaf0;
        case 0x2deaf4u: goto label_2deaf4;
        case 0x2deaf8u: goto label_2deaf8;
        case 0x2deafcu: goto label_2deafc;
        case 0x2deb00u: goto label_2deb00;
        case 0x2deb04u: goto label_2deb04;
        case 0x2deb08u: goto label_2deb08;
        case 0x2deb0cu: goto label_2deb0c;
        case 0x2deb10u: goto label_2deb10;
        case 0x2deb14u: goto label_2deb14;
        case 0x2deb18u: goto label_2deb18;
        case 0x2deb1cu: goto label_2deb1c;
        case 0x2deb20u: goto label_2deb20;
        case 0x2deb24u: goto label_2deb24;
        case 0x2deb28u: goto label_2deb28;
        case 0x2deb2cu: goto label_2deb2c;
        case 0x2deb30u: goto label_2deb30;
        case 0x2deb34u: goto label_2deb34;
        case 0x2deb38u: goto label_2deb38;
        case 0x2deb3cu: goto label_2deb3c;
        case 0x2deb40u: goto label_2deb40;
        case 0x2deb44u: goto label_2deb44;
        case 0x2deb48u: goto label_2deb48;
        case 0x2deb4cu: goto label_2deb4c;
        case 0x2deb50u: goto label_2deb50;
        case 0x2deb54u: goto label_2deb54;
        case 0x2deb58u: goto label_2deb58;
        case 0x2deb5cu: goto label_2deb5c;
        case 0x2deb60u: goto label_2deb60;
        case 0x2deb64u: goto label_2deb64;
        case 0x2deb68u: goto label_2deb68;
        case 0x2deb6cu: goto label_2deb6c;
        case 0x2deb70u: goto label_2deb70;
        case 0x2deb74u: goto label_2deb74;
        case 0x2deb78u: goto label_2deb78;
        case 0x2deb7cu: goto label_2deb7c;
        case 0x2deb80u: goto label_2deb80;
        case 0x2deb84u: goto label_2deb84;
        case 0x2deb88u: goto label_2deb88;
        case 0x2deb8cu: goto label_2deb8c;
        case 0x2deb90u: goto label_2deb90;
        case 0x2deb94u: goto label_2deb94;
        case 0x2deb98u: goto label_2deb98;
        case 0x2deb9cu: goto label_2deb9c;
        case 0x2deba0u: goto label_2deba0;
        case 0x2deba4u: goto label_2deba4;
        case 0x2deba8u: goto label_2deba8;
        case 0x2debacu: goto label_2debac;
        case 0x2debb0u: goto label_2debb0;
        case 0x2debb4u: goto label_2debb4;
        case 0x2debb8u: goto label_2debb8;
        case 0x2debbcu: goto label_2debbc;
        case 0x2debc0u: goto label_2debc0;
        case 0x2debc4u: goto label_2debc4;
        case 0x2debc8u: goto label_2debc8;
        case 0x2debccu: goto label_2debcc;
        case 0x2debd0u: goto label_2debd0;
        case 0x2debd4u: goto label_2debd4;
        case 0x2debd8u: goto label_2debd8;
        case 0x2debdcu: goto label_2debdc;
        case 0x2debe0u: goto label_2debe0;
        case 0x2debe4u: goto label_2debe4;
        case 0x2debe8u: goto label_2debe8;
        case 0x2debecu: goto label_2debec;
        case 0x2debf0u: goto label_2debf0;
        case 0x2debf4u: goto label_2debf4;
        case 0x2debf8u: goto label_2debf8;
        case 0x2debfcu: goto label_2debfc;
        case 0x2dec00u: goto label_2dec00;
        case 0x2dec04u: goto label_2dec04;
        case 0x2dec08u: goto label_2dec08;
        case 0x2dec0cu: goto label_2dec0c;
        case 0x2dec10u: goto label_2dec10;
        case 0x2dec14u: goto label_2dec14;
        case 0x2dec18u: goto label_2dec18;
        case 0x2dec1cu: goto label_2dec1c;
        case 0x2dec20u: goto label_2dec20;
        case 0x2dec24u: goto label_2dec24;
        case 0x2dec28u: goto label_2dec28;
        case 0x2dec2cu: goto label_2dec2c;
        case 0x2dec30u: goto label_2dec30;
        case 0x2dec34u: goto label_2dec34;
        case 0x2dec38u: goto label_2dec38;
        case 0x2dec3cu: goto label_2dec3c;
        case 0x2dec40u: goto label_2dec40;
        case 0x2dec44u: goto label_2dec44;
        case 0x2dec48u: goto label_2dec48;
        case 0x2dec4cu: goto label_2dec4c;
        case 0x2dec50u: goto label_2dec50;
        case 0x2dec54u: goto label_2dec54;
        case 0x2dec58u: goto label_2dec58;
        case 0x2dec5cu: goto label_2dec5c;
        case 0x2dec60u: goto label_2dec60;
        case 0x2dec64u: goto label_2dec64;
        case 0x2dec68u: goto label_2dec68;
        case 0x2dec6cu: goto label_2dec6c;
        case 0x2dec70u: goto label_2dec70;
        case 0x2dec74u: goto label_2dec74;
        case 0x2dec78u: goto label_2dec78;
        case 0x2dec7cu: goto label_2dec7c;
        case 0x2dec80u: goto label_2dec80;
        case 0x2dec84u: goto label_2dec84;
        case 0x2dec88u: goto label_2dec88;
        case 0x2dec8cu: goto label_2dec8c;
        case 0x2dec90u: goto label_2dec90;
        case 0x2dec94u: goto label_2dec94;
        case 0x2dec98u: goto label_2dec98;
        case 0x2dec9cu: goto label_2dec9c;
        case 0x2deca0u: goto label_2deca0;
        case 0x2deca4u: goto label_2deca4;
        case 0x2deca8u: goto label_2deca8;
        case 0x2decacu: goto label_2decac;
        case 0x2decb0u: goto label_2decb0;
        case 0x2decb4u: goto label_2decb4;
        case 0x2decb8u: goto label_2decb8;
        case 0x2decbcu: goto label_2decbc;
        case 0x2decc0u: goto label_2decc0;
        case 0x2decc4u: goto label_2decc4;
        case 0x2decc8u: goto label_2decc8;
        case 0x2decccu: goto label_2deccc;
        case 0x2decd0u: goto label_2decd0;
        case 0x2decd4u: goto label_2decd4;
        case 0x2decd8u: goto label_2decd8;
        case 0x2decdcu: goto label_2decdc;
        case 0x2dece0u: goto label_2dece0;
        case 0x2dece4u: goto label_2dece4;
        case 0x2dece8u: goto label_2dece8;
        case 0x2dececu: goto label_2decec;
        case 0x2decf0u: goto label_2decf0;
        case 0x2decf4u: goto label_2decf4;
        case 0x2decf8u: goto label_2decf8;
        case 0x2decfcu: goto label_2decfc;
        case 0x2ded00u: goto label_2ded00;
        case 0x2ded04u: goto label_2ded04;
        case 0x2ded08u: goto label_2ded08;
        case 0x2ded0cu: goto label_2ded0c;
        case 0x2ded10u: goto label_2ded10;
        case 0x2ded14u: goto label_2ded14;
        case 0x2ded18u: goto label_2ded18;
        case 0x2ded1cu: goto label_2ded1c;
        case 0x2ded20u: goto label_2ded20;
        case 0x2ded24u: goto label_2ded24;
        case 0x2ded28u: goto label_2ded28;
        case 0x2ded2cu: goto label_2ded2c;
        case 0x2ded30u: goto label_2ded30;
        case 0x2ded34u: goto label_2ded34;
        case 0x2ded38u: goto label_2ded38;
        case 0x2ded3cu: goto label_2ded3c;
        case 0x2ded40u: goto label_2ded40;
        case 0x2ded44u: goto label_2ded44;
        case 0x2ded48u: goto label_2ded48;
        case 0x2ded4cu: goto label_2ded4c;
        case 0x2ded50u: goto label_2ded50;
        case 0x2ded54u: goto label_2ded54;
        case 0x2ded58u: goto label_2ded58;
        case 0x2ded5cu: goto label_2ded5c;
        case 0x2ded60u: goto label_2ded60;
        case 0x2ded64u: goto label_2ded64;
        case 0x2ded68u: goto label_2ded68;
        case 0x2ded6cu: goto label_2ded6c;
        case 0x2ded70u: goto label_2ded70;
        case 0x2ded74u: goto label_2ded74;
        case 0x2ded78u: goto label_2ded78;
        case 0x2ded7cu: goto label_2ded7c;
        case 0x2ded80u: goto label_2ded80;
        case 0x2ded84u: goto label_2ded84;
        case 0x2ded88u: goto label_2ded88;
        case 0x2ded8cu: goto label_2ded8c;
        case 0x2ded90u: goto label_2ded90;
        case 0x2ded94u: goto label_2ded94;
        case 0x2ded98u: goto label_2ded98;
        case 0x2ded9cu: goto label_2ded9c;
        case 0x2deda0u: goto label_2deda0;
        case 0x2deda4u: goto label_2deda4;
        case 0x2deda8u: goto label_2deda8;
        case 0x2dedacu: goto label_2dedac;
        case 0x2dedb0u: goto label_2dedb0;
        case 0x2dedb4u: goto label_2dedb4;
        case 0x2dedb8u: goto label_2dedb8;
        case 0x2dedbcu: goto label_2dedbc;
        case 0x2dedc0u: goto label_2dedc0;
        case 0x2dedc4u: goto label_2dedc4;
        case 0x2dedc8u: goto label_2dedc8;
        case 0x2dedccu: goto label_2dedcc;
        case 0x2dedd0u: goto label_2dedd0;
        case 0x2dedd4u: goto label_2dedd4;
        case 0x2dedd8u: goto label_2dedd8;
        case 0x2deddcu: goto label_2deddc;
        case 0x2dede0u: goto label_2dede0;
        case 0x2dede4u: goto label_2dede4;
        case 0x2dede8u: goto label_2dede8;
        case 0x2dedecu: goto label_2dedec;
        case 0x2dedf0u: goto label_2dedf0;
        case 0x2dedf4u: goto label_2dedf4;
        case 0x2dedf8u: goto label_2dedf8;
        case 0x2dedfcu: goto label_2dedfc;
        case 0x2dee00u: goto label_2dee00;
        case 0x2dee04u: goto label_2dee04;
        case 0x2dee08u: goto label_2dee08;
        case 0x2dee0cu: goto label_2dee0c;
        case 0x2dee10u: goto label_2dee10;
        case 0x2dee14u: goto label_2dee14;
        case 0x2dee18u: goto label_2dee18;
        case 0x2dee1cu: goto label_2dee1c;
        case 0x2dee20u: goto label_2dee20;
        case 0x2dee24u: goto label_2dee24;
        case 0x2dee28u: goto label_2dee28;
        case 0x2dee2cu: goto label_2dee2c;
        case 0x2dee30u: goto label_2dee30;
        case 0x2dee34u: goto label_2dee34;
        case 0x2dee38u: goto label_2dee38;
        case 0x2dee3cu: goto label_2dee3c;
        case 0x2dee40u: goto label_2dee40;
        case 0x2dee44u: goto label_2dee44;
        case 0x2dee48u: goto label_2dee48;
        case 0x2dee4cu: goto label_2dee4c;
        case 0x2dee50u: goto label_2dee50;
        case 0x2dee54u: goto label_2dee54;
        case 0x2dee58u: goto label_2dee58;
        case 0x2dee5cu: goto label_2dee5c;
        case 0x2dee60u: goto label_2dee60;
        case 0x2dee64u: goto label_2dee64;
        case 0x2dee68u: goto label_2dee68;
        case 0x2dee6cu: goto label_2dee6c;
        case 0x2dee70u: goto label_2dee70;
        case 0x2dee74u: goto label_2dee74;
        case 0x2dee78u: goto label_2dee78;
        case 0x2dee7cu: goto label_2dee7c;
        case 0x2dee80u: goto label_2dee80;
        case 0x2dee84u: goto label_2dee84;
        case 0x2dee88u: goto label_2dee88;
        case 0x2dee8cu: goto label_2dee8c;
        case 0x2dee90u: goto label_2dee90;
        case 0x2dee94u: goto label_2dee94;
        case 0x2dee98u: goto label_2dee98;
        case 0x2dee9cu: goto label_2dee9c;
        case 0x2deea0u: goto label_2deea0;
        case 0x2deea4u: goto label_2deea4;
        case 0x2deea8u: goto label_2deea8;
        case 0x2deeacu: goto label_2deeac;
        case 0x2deeb0u: goto label_2deeb0;
        case 0x2deeb4u: goto label_2deeb4;
        case 0x2deeb8u: goto label_2deeb8;
        case 0x2deebcu: goto label_2deebc;
        case 0x2deec0u: goto label_2deec0;
        case 0x2deec4u: goto label_2deec4;
        case 0x2deec8u: goto label_2deec8;
        case 0x2deeccu: goto label_2deecc;
        case 0x2deed0u: goto label_2deed0;
        case 0x2deed4u: goto label_2deed4;
        case 0x2deed8u: goto label_2deed8;
        case 0x2deedcu: goto label_2deedc;
        case 0x2deee0u: goto label_2deee0;
        case 0x2deee4u: goto label_2deee4;
        case 0x2deee8u: goto label_2deee8;
        case 0x2deeecu: goto label_2deeec;
        case 0x2deef0u: goto label_2deef0;
        case 0x2deef4u: goto label_2deef4;
        case 0x2deef8u: goto label_2deef8;
        case 0x2deefcu: goto label_2deefc;
        case 0x2def00u: goto label_2def00;
        case 0x2def04u: goto label_2def04;
        case 0x2def08u: goto label_2def08;
        case 0x2def0cu: goto label_2def0c;
        case 0x2def10u: goto label_2def10;
        case 0x2def14u: goto label_2def14;
        case 0x2def18u: goto label_2def18;
        case 0x2def1cu: goto label_2def1c;
        case 0x2def20u: goto label_2def20;
        case 0x2def24u: goto label_2def24;
        case 0x2def28u: goto label_2def28;
        case 0x2def2cu: goto label_2def2c;
        case 0x2def30u: goto label_2def30;
        case 0x2def34u: goto label_2def34;
        case 0x2def38u: goto label_2def38;
        case 0x2def3cu: goto label_2def3c;
        case 0x2def40u: goto label_2def40;
        case 0x2def44u: goto label_2def44;
        case 0x2def48u: goto label_2def48;
        case 0x2def4cu: goto label_2def4c;
        case 0x2def50u: goto label_2def50;
        case 0x2def54u: goto label_2def54;
        case 0x2def58u: goto label_2def58;
        case 0x2def5cu: goto label_2def5c;
        case 0x2def60u: goto label_2def60;
        case 0x2def64u: goto label_2def64;
        case 0x2def68u: goto label_2def68;
        case 0x2def6cu: goto label_2def6c;
        case 0x2def70u: goto label_2def70;
        case 0x2def74u: goto label_2def74;
        case 0x2def78u: goto label_2def78;
        case 0x2def7cu: goto label_2def7c;
        case 0x2def80u: goto label_2def80;
        case 0x2def84u: goto label_2def84;
        case 0x2def88u: goto label_2def88;
        case 0x2def8cu: goto label_2def8c;
        case 0x2def90u: goto label_2def90;
        case 0x2def94u: goto label_2def94;
        case 0x2def98u: goto label_2def98;
        case 0x2def9cu: goto label_2def9c;
        case 0x2defa0u: goto label_2defa0;
        case 0x2defa4u: goto label_2defa4;
        case 0x2defa8u: goto label_2defa8;
        case 0x2defacu: goto label_2defac;
        case 0x2defb0u: goto label_2defb0;
        case 0x2defb4u: goto label_2defb4;
        case 0x2defb8u: goto label_2defb8;
        case 0x2defbcu: goto label_2defbc;
        case 0x2defc0u: goto label_2defc0;
        case 0x2defc4u: goto label_2defc4;
        case 0x2defc8u: goto label_2defc8;
        case 0x2defccu: goto label_2defcc;
        case 0x2defd0u: goto label_2defd0;
        case 0x2defd4u: goto label_2defd4;
        case 0x2defd8u: goto label_2defd8;
        case 0x2defdcu: goto label_2defdc;
        case 0x2defe0u: goto label_2defe0;
        case 0x2defe4u: goto label_2defe4;
        case 0x2defe8u: goto label_2defe8;
        case 0x2defecu: goto label_2defec;
        case 0x2deff0u: goto label_2deff0;
        case 0x2deff4u: goto label_2deff4;
        case 0x2deff8u: goto label_2deff8;
        case 0x2deffcu: goto label_2deffc;
        case 0x2df000u: goto label_2df000;
        case 0x2df004u: goto label_2df004;
        case 0x2df008u: goto label_2df008;
        case 0x2df00cu: goto label_2df00c;
        case 0x2df010u: goto label_2df010;
        case 0x2df014u: goto label_2df014;
        case 0x2df018u: goto label_2df018;
        case 0x2df01cu: goto label_2df01c;
        case 0x2df020u: goto label_2df020;
        case 0x2df024u: goto label_2df024;
        case 0x2df028u: goto label_2df028;
        case 0x2df02cu: goto label_2df02c;
        case 0x2df030u: goto label_2df030;
        case 0x2df034u: goto label_2df034;
        case 0x2df038u: goto label_2df038;
        case 0x2df03cu: goto label_2df03c;
        case 0x2df040u: goto label_2df040;
        case 0x2df044u: goto label_2df044;
        case 0x2df048u: goto label_2df048;
        case 0x2df04cu: goto label_2df04c;
        case 0x2df050u: goto label_2df050;
        case 0x2df054u: goto label_2df054;
        case 0x2df058u: goto label_2df058;
        case 0x2df05cu: goto label_2df05c;
        case 0x2df060u: goto label_2df060;
        case 0x2df064u: goto label_2df064;
        case 0x2df068u: goto label_2df068;
        case 0x2df06cu: goto label_2df06c;
        case 0x2df070u: goto label_2df070;
        case 0x2df074u: goto label_2df074;
        case 0x2df078u: goto label_2df078;
        case 0x2df07cu: goto label_2df07c;
        case 0x2df080u: goto label_2df080;
        case 0x2df084u: goto label_2df084;
        case 0x2df088u: goto label_2df088;
        case 0x2df08cu: goto label_2df08c;
        case 0x2df090u: goto label_2df090;
        case 0x2df094u: goto label_2df094;
        case 0x2df098u: goto label_2df098;
        case 0x2df09cu: goto label_2df09c;
        case 0x2df0a0u: goto label_2df0a0;
        case 0x2df0a4u: goto label_2df0a4;
        case 0x2df0a8u: goto label_2df0a8;
        case 0x2df0acu: goto label_2df0ac;
        case 0x2df0b0u: goto label_2df0b0;
        case 0x2df0b4u: goto label_2df0b4;
        case 0x2df0b8u: goto label_2df0b8;
        case 0x2df0bcu: goto label_2df0bc;
        case 0x2df0c0u: goto label_2df0c0;
        case 0x2df0c4u: goto label_2df0c4;
        case 0x2df0c8u: goto label_2df0c8;
        case 0x2df0ccu: goto label_2df0cc;
        case 0x2df0d0u: goto label_2df0d0;
        case 0x2df0d4u: goto label_2df0d4;
        case 0x2df0d8u: goto label_2df0d8;
        case 0x2df0dcu: goto label_2df0dc;
        case 0x2df0e0u: goto label_2df0e0;
        case 0x2df0e4u: goto label_2df0e4;
        case 0x2df0e8u: goto label_2df0e8;
        case 0x2df0ecu: goto label_2df0ec;
        case 0x2df0f0u: goto label_2df0f0;
        case 0x2df0f4u: goto label_2df0f4;
        case 0x2df0f8u: goto label_2df0f8;
        case 0x2df0fcu: goto label_2df0fc;
        case 0x2df100u: goto label_2df100;
        case 0x2df104u: goto label_2df104;
        case 0x2df108u: goto label_2df108;
        case 0x2df10cu: goto label_2df10c;
        case 0x2df110u: goto label_2df110;
        case 0x2df114u: goto label_2df114;
        case 0x2df118u: goto label_2df118;
        case 0x2df11cu: goto label_2df11c;
        case 0x2df120u: goto label_2df120;
        case 0x2df124u: goto label_2df124;
        case 0x2df128u: goto label_2df128;
        case 0x2df12cu: goto label_2df12c;
        case 0x2df130u: goto label_2df130;
        case 0x2df134u: goto label_2df134;
        case 0x2df138u: goto label_2df138;
        case 0x2df13cu: goto label_2df13c;
        case 0x2df140u: goto label_2df140;
        case 0x2df144u: goto label_2df144;
        case 0x2df148u: goto label_2df148;
        case 0x2df14cu: goto label_2df14c;
        case 0x2df150u: goto label_2df150;
        case 0x2df154u: goto label_2df154;
        case 0x2df158u: goto label_2df158;
        case 0x2df15cu: goto label_2df15c;
        case 0x2df160u: goto label_2df160;
        case 0x2df164u: goto label_2df164;
        case 0x2df168u: goto label_2df168;
        case 0x2df16cu: goto label_2df16c;
        case 0x2df170u: goto label_2df170;
        case 0x2df174u: goto label_2df174;
        case 0x2df178u: goto label_2df178;
        case 0x2df17cu: goto label_2df17c;
        case 0x2df180u: goto label_2df180;
        case 0x2df184u: goto label_2df184;
        case 0x2df188u: goto label_2df188;
        case 0x2df18cu: goto label_2df18c;
        case 0x2df190u: goto label_2df190;
        case 0x2df194u: goto label_2df194;
        case 0x2df198u: goto label_2df198;
        case 0x2df19cu: goto label_2df19c;
        case 0x2df1a0u: goto label_2df1a0;
        case 0x2df1a4u: goto label_2df1a4;
        case 0x2df1a8u: goto label_2df1a8;
        case 0x2df1acu: goto label_2df1ac;
        case 0x2df1b0u: goto label_2df1b0;
        case 0x2df1b4u: goto label_2df1b4;
        case 0x2df1b8u: goto label_2df1b8;
        case 0x2df1bcu: goto label_2df1bc;
        case 0x2df1c0u: goto label_2df1c0;
        case 0x2df1c4u: goto label_2df1c4;
        case 0x2df1c8u: goto label_2df1c8;
        case 0x2df1ccu: goto label_2df1cc;
        case 0x2df1d0u: goto label_2df1d0;
        case 0x2df1d4u: goto label_2df1d4;
        case 0x2df1d8u: goto label_2df1d8;
        case 0x2df1dcu: goto label_2df1dc;
        case 0x2df1e0u: goto label_2df1e0;
        case 0x2df1e4u: goto label_2df1e4;
        case 0x2df1e8u: goto label_2df1e8;
        case 0x2df1ecu: goto label_2df1ec;
        case 0x2df1f0u: goto label_2df1f0;
        case 0x2df1f4u: goto label_2df1f4;
        case 0x2df1f8u: goto label_2df1f8;
        case 0x2df1fcu: goto label_2df1fc;
        case 0x2df200u: goto label_2df200;
        case 0x2df204u: goto label_2df204;
        case 0x2df208u: goto label_2df208;
        case 0x2df20cu: goto label_2df20c;
        case 0x2df210u: goto label_2df210;
        case 0x2df214u: goto label_2df214;
        case 0x2df218u: goto label_2df218;
        case 0x2df21cu: goto label_2df21c;
        case 0x2df220u: goto label_2df220;
        case 0x2df224u: goto label_2df224;
        case 0x2df228u: goto label_2df228;
        case 0x2df22cu: goto label_2df22c;
        case 0x2df230u: goto label_2df230;
        case 0x2df234u: goto label_2df234;
        case 0x2df238u: goto label_2df238;
        case 0x2df23cu: goto label_2df23c;
        case 0x2df240u: goto label_2df240;
        case 0x2df244u: goto label_2df244;
        case 0x2df248u: goto label_2df248;
        case 0x2df24cu: goto label_2df24c;
        case 0x2df250u: goto label_2df250;
        case 0x2df254u: goto label_2df254;
        case 0x2df258u: goto label_2df258;
        case 0x2df25cu: goto label_2df25c;
        case 0x2df260u: goto label_2df260;
        case 0x2df264u: goto label_2df264;
        case 0x2df268u: goto label_2df268;
        case 0x2df26cu: goto label_2df26c;
        case 0x2df270u: goto label_2df270;
        case 0x2df274u: goto label_2df274;
        case 0x2df278u: goto label_2df278;
        case 0x2df27cu: goto label_2df27c;
        case 0x2df280u: goto label_2df280;
        case 0x2df284u: goto label_2df284;
        case 0x2df288u: goto label_2df288;
        case 0x2df28cu: goto label_2df28c;
        case 0x2df290u: goto label_2df290;
        case 0x2df294u: goto label_2df294;
        case 0x2df298u: goto label_2df298;
        case 0x2df29cu: goto label_2df29c;
        case 0x2df2a0u: goto label_2df2a0;
        case 0x2df2a4u: goto label_2df2a4;
        case 0x2df2a8u: goto label_2df2a8;
        case 0x2df2acu: goto label_2df2ac;
        case 0x2df2b0u: goto label_2df2b0;
        case 0x2df2b4u: goto label_2df2b4;
        case 0x2df2b8u: goto label_2df2b8;
        case 0x2df2bcu: goto label_2df2bc;
        case 0x2df2c0u: goto label_2df2c0;
        case 0x2df2c4u: goto label_2df2c4;
        case 0x2df2c8u: goto label_2df2c8;
        case 0x2df2ccu: goto label_2df2cc;
        case 0x2df2d0u: goto label_2df2d0;
        case 0x2df2d4u: goto label_2df2d4;
        case 0x2df2d8u: goto label_2df2d8;
        case 0x2df2dcu: goto label_2df2dc;
        case 0x2df2e0u: goto label_2df2e0;
        case 0x2df2e4u: goto label_2df2e4;
        case 0x2df2e8u: goto label_2df2e8;
        case 0x2df2ecu: goto label_2df2ec;
        case 0x2df2f0u: goto label_2df2f0;
        case 0x2df2f4u: goto label_2df2f4;
        case 0x2df2f8u: goto label_2df2f8;
        case 0x2df2fcu: goto label_2df2fc;
        case 0x2df300u: goto label_2df300;
        case 0x2df304u: goto label_2df304;
        case 0x2df308u: goto label_2df308;
        case 0x2df30cu: goto label_2df30c;
        case 0x2df310u: goto label_2df310;
        case 0x2df314u: goto label_2df314;
        case 0x2df318u: goto label_2df318;
        case 0x2df31cu: goto label_2df31c;
        case 0x2df320u: goto label_2df320;
        case 0x2df324u: goto label_2df324;
        case 0x2df328u: goto label_2df328;
        case 0x2df32cu: goto label_2df32c;
        case 0x2df330u: goto label_2df330;
        case 0x2df334u: goto label_2df334;
        case 0x2df338u: goto label_2df338;
        case 0x2df33cu: goto label_2df33c;
        case 0x2df340u: goto label_2df340;
        case 0x2df344u: goto label_2df344;
        case 0x2df348u: goto label_2df348;
        case 0x2df34cu: goto label_2df34c;
        default: break;
    }

    ctx->pc = 0x2de9a0u;

label_2de9a0:
    // 0x2de9a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2de9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2de9a4:
    // 0x2de9a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2de9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2de9a8:
    // 0x2de9a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2de9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2de9ac:
    // 0x2de9ac: 0xc0a9360  jal         func_2A4D80
label_2de9b0:
    if (ctx->pc == 0x2DE9B0u) {
        ctx->pc = 0x2DE9B0u;
            // 0x2de9b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DE9B4u;
        goto label_2de9b4;
    }
    ctx->pc = 0x2DE9ACu;
    SET_GPR_U32(ctx, 31, 0x2DE9B4u);
    ctx->pc = 0x2DE9B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE9ACu;
            // 0x2de9b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4D80u;
    if (runtime->hasFunction(0x2A4D80u)) {
        auto targetFn = runtime->lookupFunction(0x2A4D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE9B4u; }
        if (ctx->pc != 0x2DE9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A4D80_0x2a4d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE9B4u; }
        if (ctx->pc != 0x2DE9B4u) { return; }
    }
    ctx->pc = 0x2DE9B4u;
label_2de9b4:
    // 0x2de9b4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2de9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2de9b8:
    // 0x2de9b8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2de9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2de9bc:
    // 0x2de9bc: 0x24632f20  addiu       $v1, $v1, 0x2F20
    ctx->pc = 0x2de9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12064));
label_2de9c0:
    // 0x2de9c0: 0x2604062c  addiu       $a0, $s0, 0x62C
    ctx->pc = 0x2de9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1580));
label_2de9c4:
    // 0x2de9c4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2de9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2de9c8:
    // 0x2de9c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2de9c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2de9cc:
    // 0x2de9cc: 0xae020590  sw          $v0, 0x590($s0)
    ctx->pc = 0x2de9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1424), GPR_U32(ctx, 2));
label_2de9d0:
    // 0x2de9d0: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x2de9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_2de9d4:
    // 0x2de9d4: 0xa20005a8  sb          $zero, 0x5A8($s0)
    ctx->pc = 0x2de9d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1448), (uint8_t)GPR_U32(ctx, 0));
label_2de9d8:
    // 0x2de9d8: 0xa20005a9  sb          $zero, 0x5A9($s0)
    ctx->pc = 0x2de9d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1449), (uint8_t)GPR_U32(ctx, 0));
label_2de9dc:
    // 0x2de9dc: 0xc04a576  jal         func_1295D8
label_2de9e0:
    if (ctx->pc == 0x2DE9E0u) {
        ctx->pc = 0x2DE9E0u;
            // 0x2de9e0: 0xae0006e0  sw          $zero, 0x6E0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1760), GPR_U32(ctx, 0));
        ctx->pc = 0x2DE9E4u;
        goto label_2de9e4;
    }
    ctx->pc = 0x2DE9DCu;
    SET_GPR_U32(ctx, 31, 0x2DE9E4u);
    ctx->pc = 0x2DE9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE9DCu;
            // 0x2de9e0: 0xae0006e0  sw          $zero, 0x6E0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1760), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE9E4u; }
        if (ctx->pc != 0x2DE9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE9E4u; }
        if (ctx->pc != 0x2DE9E4u) { return; }
    }
    ctx->pc = 0x2DE9E4u;
label_2de9e4:
    // 0x2de9e4: 0x26040668  addiu       $a0, $s0, 0x668
    ctx->pc = 0x2de9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1640));
label_2de9e8:
    // 0x2de9e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2de9e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2de9ec:
    // 0x2de9ec: 0xc04a576  jal         func_1295D8
label_2de9f0:
    if (ctx->pc == 0x2DE9F0u) {
        ctx->pc = 0x2DE9F0u;
            // 0x2de9f0: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->pc = 0x2DE9F4u;
        goto label_2de9f4;
    }
    ctx->pc = 0x2DE9ECu;
    SET_GPR_U32(ctx, 31, 0x2DE9F4u);
    ctx->pc = 0x2DE9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE9ECu;
            // 0x2de9f0: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE9F4u; }
        if (ctx->pc != 0x2DE9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE9F4u; }
        if (ctx->pc != 0x2DE9F4u) { return; }
    }
    ctx->pc = 0x2DE9F4u;
label_2de9f4:
    // 0x2de9f4: 0x260405ac  addiu       $a0, $s0, 0x5AC
    ctx->pc = 0x2de9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1452));
label_2de9f8:
    // 0x2de9f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2de9f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2de9fc:
    // 0x2de9fc: 0xc04a576  jal         func_1295D8
label_2dea00:
    if (ctx->pc == 0x2DEA00u) {
        ctx->pc = 0x2DEA00u;
            // 0x2dea00: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->pc = 0x2DEA04u;
        goto label_2dea04;
    }
    ctx->pc = 0x2DE9FCu;
    SET_GPR_U32(ctx, 31, 0x2DEA04u);
    ctx->pc = 0x2DEA00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE9FCu;
            // 0x2dea00: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEA04u; }
        if (ctx->pc != 0x2DEA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEA04u; }
        if (ctx->pc != 0x2DEA04u) { return; }
    }
    ctx->pc = 0x2DEA04u;
label_2dea04:
    // 0x2dea04: 0x26040624  addiu       $a0, $s0, 0x624
    ctx->pc = 0x2dea04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1572));
label_2dea08:
    // 0x2dea08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dea08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dea0c:
    // 0x2dea0c: 0xc04a576  jal         func_1295D8
label_2dea10:
    if (ctx->pc == 0x2DEA10u) {
        ctx->pc = 0x2DEA10u;
            // 0x2dea10: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x2DEA14u;
        goto label_2dea14;
    }
    ctx->pc = 0x2DEA0Cu;
    SET_GPR_U32(ctx, 31, 0x2DEA14u);
    ctx->pc = 0x2DEA10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEA0Cu;
            // 0x2dea10: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEA14u; }
        if (ctx->pc != 0x2DEA14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEA14u; }
        if (ctx->pc != 0x2DEA14u) { return; }
    }
    ctx->pc = 0x2DEA14u;
label_2dea14:
    // 0x2dea14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2dea14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dea18:
    // 0x2dea18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2dea18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2dea1c:
    // 0x2dea1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dea1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2dea20:
    // 0x2dea20: 0x3e00008  jr          $ra
label_2dea24:
    if (ctx->pc == 0x2DEA24u) {
        ctx->pc = 0x2DEA24u;
            // 0x2dea24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2DEA28u;
        goto label_2dea28;
    }
    ctx->pc = 0x2DEA20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DEA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEA20u;
            // 0x2dea24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DEA28u;
label_2dea28:
    // 0x2dea28: 0x0  nop
    ctx->pc = 0x2dea28u;
    // NOP
label_2dea2c:
    // 0x2dea2c: 0x0  nop
    ctx->pc = 0x2dea2cu;
    // NOP
label_2dea30:
    // 0x2dea30: 0x3e00008  jr          $ra
label_2dea34:
    if (ctx->pc == 0x2DEA34u) {
        ctx->pc = 0x2DEA38u;
        goto label_2dea38;
    }
    ctx->pc = 0x2DEA30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DEA38u;
label_2dea38:
    // 0x2dea38: 0x0  nop
    ctx->pc = 0x2dea38u;
    // NOP
label_2dea3c:
    // 0x2dea3c: 0x0  nop
    ctx->pc = 0x2dea3cu;
    // NOP
label_2dea40:
    // 0x2dea40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2dea40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2dea44:
    // 0x2dea44: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2dea44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2dea48:
    // 0x2dea48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2dea48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2dea4c:
    // 0x2dea4c: 0x2463e3b0  addiu       $v1, $v1, -0x1C50
    ctx->pc = 0x2dea4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960048));
label_2dea50:
    // 0x2dea50: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2dea50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2dea54:
    // 0x2dea54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dea54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dea58:
    // 0x2dea58: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2dea58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2dea5c:
    // 0x2dea5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2dea5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2dea60:
    // 0x2dea60: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2dea60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2dea64:
    // 0x2dea64: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x2dea64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2dea68:
    // 0x2dea68: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x2dea68u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2dea6c:
    // 0x2dea6c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2dea6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2dea70:
    // 0x2dea70: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2dea70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2dea74:
    // 0x2dea74: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x2dea74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2dea78:
    // 0x2dea78: 0xc6140000  lwc1        $f20, 0x0($s0)
    ctx->pc = 0x2dea78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2dea7c:
    // 0x2dea7c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x2dea7cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dea80:
    // 0x2dea80: 0x45030023  bc1tl       . + 4 + (0x23 << 2)
label_2dea84:
    if (ctx->pc == 0x2DEA84u) {
        ctx->pc = 0x2DEA84u;
            // 0x2dea84: 0xc6140004  lwc1        $f20, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x2DEA88u;
        goto label_2dea88;
    }
    ctx->pc = 0x2DEA80u;
    {
        const bool branch_taken_0x2dea80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dea80) {
            ctx->pc = 0x2DEA84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEA80u;
            // 0x2dea84: 0xc6140004  lwc1        $f20, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DEB10u;
            goto label_2deb10;
        }
    }
    ctx->pc = 0x2DEA88u;
label_2dea88:
    // 0x2dea88: 0xc04ab66  jal         func_12AD98
label_2dea8c:
    if (ctx->pc == 0x2DEA8Cu) {
        ctx->pc = 0x2DEA90u;
        goto label_2dea90;
    }
    ctx->pc = 0x2DEA88u;
    SET_GPR_U32(ctx, 31, 0x2DEA90u);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEA90u; }
        if (ctx->pc != 0x2DEA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEA90u; }
        if (ctx->pc != 0x2DEA90u) { return; }
    }
    ctx->pc = 0x2DEA90u;
label_2dea90:
    // 0x2dea90: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2dea90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_2dea94:
    // 0x2dea94: 0xc04ab66  jal         func_12AD98
label_2dea98:
    if (ctx->pc == 0x2DEA98u) {
        ctx->pc = 0x2DEA98u;
            // 0x2dea98: 0x29740  sll         $s2, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x2DEA9Cu;
        goto label_2dea9c;
    }
    ctx->pc = 0x2DEA94u;
    SET_GPR_U32(ctx, 31, 0x2DEA9Cu);
    ctx->pc = 0x2DEA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEA94u;
            // 0x2dea98: 0x29740  sll         $s2, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEA9Cu; }
        if (ctx->pc != 0x2DEA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEA9Cu; }
        if (ctx->pc != 0x2DEA9Cu) { return; }
    }
    ctx->pc = 0x2DEA9Cu;
label_2dea9c:
    // 0x2dea9c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2dea9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_2deaa0:
    // 0x2deaa0: 0x522825  or          $a1, $v0, $s2
    ctx->pc = 0x2deaa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
label_2deaa4:
    // 0x2deaa4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2deaa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2deaa8:
    // 0x2deaa8: 0x3c032f80  lui         $v1, 0x2F80
    ctx->pc = 0x2deaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12160 << 16));
label_2deaac:
    // 0x2deaac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2deaacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2deab0:
    // 0x2deab0: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_2deab4:
    if (ctx->pc == 0x2DEAB4u) {
        ctx->pc = 0x2DEAB4u;
            // 0x2deab4: 0x46140082  mul.s       $f2, $f0, $f20 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->pc = 0x2DEAB8u;
        goto label_2deab8;
    }
    ctx->pc = 0x2DEAB0u;
    {
        const bool branch_taken_0x2deab0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2DEAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEAB0u;
            // 0x2deab4: 0x46140082  mul.s       $f2, $f0, $f20 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2deab0) {
            ctx->pc = 0x2DEAC4u;
            goto label_2deac4;
        }
    }
    ctx->pc = 0x2DEAB8u;
label_2deab8:
    // 0x2deab8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2deab8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2deabc:
    // 0x2deabc: 0x10000008  b           . + 4 + (0x8 << 2)
label_2deac0:
    if (ctx->pc == 0x2DEAC0u) {
        ctx->pc = 0x2DEAC0u;
            // 0x2deac0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2DEAC4u;
        goto label_2deac4;
    }
    ctx->pc = 0x2DEABCu;
    {
        const bool branch_taken_0x2deabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEABCu;
            // 0x2deac0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2deabc) {
            ctx->pc = 0x2DEAE0u;
            goto label_2deae0;
        }
    }
    ctx->pc = 0x2DEAC4u;
label_2deac4:
    // 0x2deac4: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x2deac4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_2deac8:
    // 0x2deac8: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x2deac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_2deacc:
    // 0x2deacc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2deaccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2dead0:
    // 0x2dead0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2dead0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dead4:
    // 0x2dead4: 0x0  nop
    ctx->pc = 0x2dead4u;
    // NOP
label_2dead8:
    // 0x2dead8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2dead8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2deadc:
    // 0x2deadc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2deadcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2deae0:
    // 0x2deae0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2deae0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2deae4:
    // 0x2deae4: 0x3c0338d1  lui         $v1, 0x38D1
    ctx->pc = 0x2deae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14545 << 16));
label_2deae8:
    // 0x2deae8: 0x3463b717  ori         $v1, $v1, 0xB717
    ctx->pc = 0x2deae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46871);
label_2deaec:
    // 0x2deaec: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x2deaecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2deaf0:
    // 0x2deaf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2deaf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2deaf4:
    // 0x2deaf4: 0x0  nop
    ctx->pc = 0x2deaf4u;
    // NOP
label_2deaf8:
    // 0x2deaf8: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2deaf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_2deafc:
    // 0x2deafc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2deafcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2deb00:
    // 0x2deb00: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x2deb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2deb04:
    // 0x2deb04: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2deb04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2deb08:
    // 0x2deb08: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x2deb08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_2deb0c:
    // 0x2deb0c: 0xc6140004  lwc1        $f20, 0x4($s0)
    ctx->pc = 0x2deb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2deb10:
    // 0x2deb10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2deb10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2deb14:
    // 0x2deb14: 0x0  nop
    ctx->pc = 0x2deb14u;
    // NOP
label_2deb18:
    // 0x2deb18: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x2deb18u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2deb1c:
    // 0x2deb1c: 0x45030023  bc1tl       . + 4 + (0x23 << 2)
label_2deb20:
    if (ctx->pc == 0x2DEB20u) {
        ctx->pc = 0x2DEB20u;
            // 0x2deb20: 0xc614000c  lwc1        $f20, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x2DEB24u;
        goto label_2deb24;
    }
    ctx->pc = 0x2DEB1Cu;
    {
        const bool branch_taken_0x2deb1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2deb1c) {
            ctx->pc = 0x2DEB20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEB1Cu;
            // 0x2deb20: 0xc614000c  lwc1        $f20, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DEBACu;
            goto label_2debac;
        }
    }
    ctx->pc = 0x2DEB24u;
label_2deb24:
    // 0x2deb24: 0xc04ab66  jal         func_12AD98
label_2deb28:
    if (ctx->pc == 0x2DEB28u) {
        ctx->pc = 0x2DEB2Cu;
        goto label_2deb2c;
    }
    ctx->pc = 0x2DEB24u;
    SET_GPR_U32(ctx, 31, 0x2DEB2Cu);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEB2Cu; }
        if (ctx->pc != 0x2DEB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEB2Cu; }
        if (ctx->pc != 0x2DEB2Cu) { return; }
    }
    ctx->pc = 0x2DEB2Cu;
label_2deb2c:
    // 0x2deb2c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2deb2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_2deb30:
    // 0x2deb30: 0xc04ab66  jal         func_12AD98
label_2deb34:
    if (ctx->pc == 0x2DEB34u) {
        ctx->pc = 0x2DEB34u;
            // 0x2deb34: 0x29740  sll         $s2, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x2DEB38u;
        goto label_2deb38;
    }
    ctx->pc = 0x2DEB30u;
    SET_GPR_U32(ctx, 31, 0x2DEB38u);
    ctx->pc = 0x2DEB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEB30u;
            // 0x2deb34: 0x29740  sll         $s2, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEB38u; }
        if (ctx->pc != 0x2DEB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEB38u; }
        if (ctx->pc != 0x2DEB38u) { return; }
    }
    ctx->pc = 0x2DEB38u;
label_2deb38:
    // 0x2deb38: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2deb38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_2deb3c:
    // 0x2deb3c: 0x522825  or          $a1, $v0, $s2
    ctx->pc = 0x2deb3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
label_2deb40:
    // 0x2deb40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2deb40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2deb44:
    // 0x2deb44: 0x3c032f80  lui         $v1, 0x2F80
    ctx->pc = 0x2deb44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12160 << 16));
label_2deb48:
    // 0x2deb48: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2deb48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2deb4c:
    // 0x2deb4c: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_2deb50:
    if (ctx->pc == 0x2DEB50u) {
        ctx->pc = 0x2DEB50u;
            // 0x2deb50: 0x46140082  mul.s       $f2, $f0, $f20 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->pc = 0x2DEB54u;
        goto label_2deb54;
    }
    ctx->pc = 0x2DEB4Cu;
    {
        const bool branch_taken_0x2deb4c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2DEB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEB4Cu;
            // 0x2deb50: 0x46140082  mul.s       $f2, $f0, $f20 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2deb4c) {
            ctx->pc = 0x2DEB60u;
            goto label_2deb60;
        }
    }
    ctx->pc = 0x2DEB54u;
label_2deb54:
    // 0x2deb54: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2deb54u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2deb58:
    // 0x2deb58: 0x10000008  b           . + 4 + (0x8 << 2)
label_2deb5c:
    if (ctx->pc == 0x2DEB5Cu) {
        ctx->pc = 0x2DEB5Cu;
            // 0x2deb5c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2DEB60u;
        goto label_2deb60;
    }
    ctx->pc = 0x2DEB58u;
    {
        const bool branch_taken_0x2deb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEB58u;
            // 0x2deb5c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2deb58) {
            ctx->pc = 0x2DEB7Cu;
            goto label_2deb7c;
        }
    }
    ctx->pc = 0x2DEB60u;
label_2deb60:
    // 0x2deb60: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x2deb60u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_2deb64:
    // 0x2deb64: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x2deb64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_2deb68:
    // 0x2deb68: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2deb68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2deb6c:
    // 0x2deb6c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2deb6cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2deb70:
    // 0x2deb70: 0x0  nop
    ctx->pc = 0x2deb70u;
    // NOP
label_2deb74:
    // 0x2deb74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2deb74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2deb78:
    // 0x2deb78: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2deb78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2deb7c:
    // 0x2deb7c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2deb7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2deb80:
    // 0x2deb80: 0x3c0338d1  lui         $v1, 0x38D1
    ctx->pc = 0x2deb80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14545 << 16));
label_2deb84:
    // 0x2deb84: 0x3463b717  ori         $v1, $v1, 0xB717
    ctx->pc = 0x2deb84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46871);
label_2deb88:
    // 0x2deb88: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x2deb88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2deb8c:
    // 0x2deb8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2deb8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2deb90:
    // 0x2deb90: 0x0  nop
    ctx->pc = 0x2deb90u;
    // NOP
label_2deb94:
    // 0x2deb94: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2deb94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_2deb98:
    // 0x2deb98: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2deb98u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2deb9c:
    // 0x2deb9c: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x2deb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2deba0:
    // 0x2deba0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2deba0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2deba4:
    // 0x2deba4: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x2deba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_2deba8:
    // 0x2deba8: 0xc614000c  lwc1        $f20, 0xC($s0)
    ctx->pc = 0x2deba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2debac:
    // 0x2debac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2debacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2debb0:
    // 0x2debb0: 0x0  nop
    ctx->pc = 0x2debb0u;
    // NOP
label_2debb4:
    // 0x2debb4: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x2debb4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2debb8:
    // 0x2debb8: 0x45030023  bc1tl       . + 4 + (0x23 << 2)
label_2debbc:
    if (ctx->pc == 0x2DEBBCu) {
        ctx->pc = 0x2DEBBCu;
            // 0x2debbc: 0xc6140010  lwc1        $f20, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x2DEBC0u;
        goto label_2debc0;
    }
    ctx->pc = 0x2DEBB8u;
    {
        const bool branch_taken_0x2debb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2debb8) {
            ctx->pc = 0x2DEBBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEBB8u;
            // 0x2debbc: 0xc6140010  lwc1        $f20, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DEC48u;
            goto label_2dec48;
        }
    }
    ctx->pc = 0x2DEBC0u;
label_2debc0:
    // 0x2debc0: 0xc04ab66  jal         func_12AD98
label_2debc4:
    if (ctx->pc == 0x2DEBC4u) {
        ctx->pc = 0x2DEBC8u;
        goto label_2debc8;
    }
    ctx->pc = 0x2DEBC0u;
    SET_GPR_U32(ctx, 31, 0x2DEBC8u);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEBC8u; }
        if (ctx->pc != 0x2DEBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEBC8u; }
        if (ctx->pc != 0x2DEBC8u) { return; }
    }
    ctx->pc = 0x2DEBC8u;
label_2debc8:
    // 0x2debc8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2debc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_2debcc:
    // 0x2debcc: 0xc04ab66  jal         func_12AD98
label_2debd0:
    if (ctx->pc == 0x2DEBD0u) {
        ctx->pc = 0x2DEBD0u;
            // 0x2debd0: 0x29740  sll         $s2, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x2DEBD4u;
        goto label_2debd4;
    }
    ctx->pc = 0x2DEBCCu;
    SET_GPR_U32(ctx, 31, 0x2DEBD4u);
    ctx->pc = 0x2DEBD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEBCCu;
            // 0x2debd0: 0x29740  sll         $s2, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEBD4u; }
        if (ctx->pc != 0x2DEBD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEBD4u; }
        if (ctx->pc != 0x2DEBD4u) { return; }
    }
    ctx->pc = 0x2DEBD4u;
label_2debd4:
    // 0x2debd4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2debd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_2debd8:
    // 0x2debd8: 0x522825  or          $a1, $v0, $s2
    ctx->pc = 0x2debd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
label_2debdc:
    // 0x2debdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2debdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2debe0:
    // 0x2debe0: 0x3c032f80  lui         $v1, 0x2F80
    ctx->pc = 0x2debe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12160 << 16));
label_2debe4:
    // 0x2debe4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2debe4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2debe8:
    // 0x2debe8: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_2debec:
    if (ctx->pc == 0x2DEBECu) {
        ctx->pc = 0x2DEBECu;
            // 0x2debec: 0x46140082  mul.s       $f2, $f0, $f20 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->pc = 0x2DEBF0u;
        goto label_2debf0;
    }
    ctx->pc = 0x2DEBE8u;
    {
        const bool branch_taken_0x2debe8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2DEBECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEBE8u;
            // 0x2debec: 0x46140082  mul.s       $f2, $f0, $f20 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2debe8) {
            ctx->pc = 0x2DEBFCu;
            goto label_2debfc;
        }
    }
    ctx->pc = 0x2DEBF0u;
label_2debf0:
    // 0x2debf0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2debf0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2debf4:
    // 0x2debf4: 0x10000008  b           . + 4 + (0x8 << 2)
label_2debf8:
    if (ctx->pc == 0x2DEBF8u) {
        ctx->pc = 0x2DEBF8u;
            // 0x2debf8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2DEBFCu;
        goto label_2debfc;
    }
    ctx->pc = 0x2DEBF4u;
    {
        const bool branch_taken_0x2debf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEBF4u;
            // 0x2debf8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2debf4) {
            ctx->pc = 0x2DEC18u;
            goto label_2dec18;
        }
    }
    ctx->pc = 0x2DEBFCu;
label_2debfc:
    // 0x2debfc: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x2debfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_2dec00:
    // 0x2dec00: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x2dec00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_2dec04:
    // 0x2dec04: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2dec04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2dec08:
    // 0x2dec08: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2dec08u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dec0c:
    // 0x2dec0c: 0x0  nop
    ctx->pc = 0x2dec0cu;
    // NOP
label_2dec10:
    // 0x2dec10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2dec10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2dec14:
    // 0x2dec14: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2dec14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2dec18:
    // 0x2dec18: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2dec18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2dec1c:
    // 0x2dec1c: 0x3c0338d1  lui         $v1, 0x38D1
    ctx->pc = 0x2dec1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14545 << 16));
label_2dec20:
    // 0x2dec20: 0x3463b717  ori         $v1, $v1, 0xB717
    ctx->pc = 0x2dec20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46871);
label_2dec24:
    // 0x2dec24: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x2dec24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2dec28:
    // 0x2dec28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dec28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dec2c:
    // 0x2dec2c: 0x0  nop
    ctx->pc = 0x2dec2cu;
    // NOP
label_2dec30:
    // 0x2dec30: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2dec30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_2dec34:
    // 0x2dec34: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2dec34u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2dec38:
    // 0x2dec38: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2dec38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dec3c:
    // 0x2dec3c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2dec3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2dec40:
    // 0x2dec40: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2dec40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2dec44:
    // 0x2dec44: 0xc6140010  lwc1        $f20, 0x10($s0)
    ctx->pc = 0x2dec44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2dec48:
    // 0x2dec48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dec48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dec4c:
    // 0x2dec4c: 0x0  nop
    ctx->pc = 0x2dec4cu;
    // NOP
label_2dec50:
    // 0x2dec50: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x2dec50u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dec54:
    // 0x2dec54: 0x45030023  bc1tl       . + 4 + (0x23 << 2)
label_2dec58:
    if (ctx->pc == 0x2DEC58u) {
        ctx->pc = 0x2DEC58u;
            // 0x2dec58: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x2DEC5Cu;
        goto label_2dec5c;
    }
    ctx->pc = 0x2DEC54u;
    {
        const bool branch_taken_0x2dec54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dec54) {
            ctx->pc = 0x2DEC58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEC54u;
            // 0x2dec58: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DECE4u;
            goto label_2dece4;
        }
    }
    ctx->pc = 0x2DEC5Cu;
label_2dec5c:
    // 0x2dec5c: 0xc04ab66  jal         func_12AD98
label_2dec60:
    if (ctx->pc == 0x2DEC60u) {
        ctx->pc = 0x2DEC64u;
        goto label_2dec64;
    }
    ctx->pc = 0x2DEC5Cu;
    SET_GPR_U32(ctx, 31, 0x2DEC64u);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEC64u; }
        if (ctx->pc != 0x2DEC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEC64u; }
        if (ctx->pc != 0x2DEC64u) { return; }
    }
    ctx->pc = 0x2DEC64u;
label_2dec64:
    // 0x2dec64: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2dec64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_2dec68:
    // 0x2dec68: 0xc04ab66  jal         func_12AD98
label_2dec6c:
    if (ctx->pc == 0x2DEC6Cu) {
        ctx->pc = 0x2DEC6Cu;
            // 0x2dec6c: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x2DEC70u;
        goto label_2dec70;
    }
    ctx->pc = 0x2DEC68u;
    SET_GPR_U32(ctx, 31, 0x2DEC70u);
    ctx->pc = 0x2DEC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEC68u;
            // 0x2dec6c: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEC70u; }
        if (ctx->pc != 0x2DEC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEC70u; }
        if (ctx->pc != 0x2DEC70u) { return; }
    }
    ctx->pc = 0x2DEC70u;
label_2dec70:
    // 0x2dec70: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2dec70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_2dec74:
    // 0x2dec74: 0x502825  or          $a1, $v0, $s0
    ctx->pc = 0x2dec74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_2dec78:
    // 0x2dec78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dec78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dec7c:
    // 0x2dec7c: 0x3c032f80  lui         $v1, 0x2F80
    ctx->pc = 0x2dec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12160 << 16));
label_2dec80:
    // 0x2dec80: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2dec80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2dec84:
    // 0x2dec84: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_2dec88:
    if (ctx->pc == 0x2DEC88u) {
        ctx->pc = 0x2DEC88u;
            // 0x2dec88: 0x46140082  mul.s       $f2, $f0, $f20 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->pc = 0x2DEC8Cu;
        goto label_2dec8c;
    }
    ctx->pc = 0x2DEC84u;
    {
        const bool branch_taken_0x2dec84 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2DEC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEC84u;
            // 0x2dec88: 0x46140082  mul.s       $f2, $f0, $f20 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dec84) {
            ctx->pc = 0x2DEC98u;
            goto label_2dec98;
        }
    }
    ctx->pc = 0x2DEC8Cu;
label_2dec8c:
    // 0x2dec8c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2dec8cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dec90:
    // 0x2dec90: 0x10000008  b           . + 4 + (0x8 << 2)
label_2dec94:
    if (ctx->pc == 0x2DEC94u) {
        ctx->pc = 0x2DEC94u;
            // 0x2dec94: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2DEC98u;
        goto label_2dec98;
    }
    ctx->pc = 0x2DEC90u;
    {
        const bool branch_taken_0x2dec90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEC90u;
            // 0x2dec94: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dec90) {
            ctx->pc = 0x2DECB4u;
            goto label_2decb4;
        }
    }
    ctx->pc = 0x2DEC98u;
label_2dec98:
    // 0x2dec98: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x2dec98u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_2dec9c:
    // 0x2dec9c: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x2dec9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_2deca0:
    // 0x2deca0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2deca0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2deca4:
    // 0x2deca4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2deca4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2deca8:
    // 0x2deca8: 0x0  nop
    ctx->pc = 0x2deca8u;
    // NOP
label_2decac:
    // 0x2decac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2decacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2decb0:
    // 0x2decb0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2decb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2decb4:
    // 0x2decb4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2decb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2decb8:
    // 0x2decb8: 0x3c0338d1  lui         $v1, 0x38D1
    ctx->pc = 0x2decb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14545 << 16));
label_2decbc:
    // 0x2decbc: 0x3463b717  ori         $v1, $v1, 0xB717
    ctx->pc = 0x2decbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46871);
label_2decc0:
    // 0x2decc0: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x2decc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2decc4:
    // 0x2decc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2decc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2decc8:
    // 0x2decc8: 0x0  nop
    ctx->pc = 0x2decc8u;
    // NOP
label_2deccc:
    // 0x2deccc: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2decccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_2decd0:
    // 0x2decd0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2decd0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2decd4:
    // 0x2decd4: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2decd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2decd8:
    // 0x2decd8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2decd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2decdc:
    // 0x2decdc: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2decdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2dece0:
    // 0x2dece0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2dece0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2dece4:
    // 0x2dece4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2dece4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2dece8:
    // 0x2dece8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2dece8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2decec:
    // 0x2decec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2dececu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2decf0:
    // 0x2decf0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2decf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2decf4:
    // 0x2decf4: 0x3e00008  jr          $ra
label_2decf8:
    if (ctx->pc == 0x2DECF8u) {
        ctx->pc = 0x2DECF8u;
            // 0x2decf8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2DECFCu;
        goto label_2decfc;
    }
    ctx->pc = 0x2DECF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DECF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DECF4u;
            // 0x2decf8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DECFCu;
label_2decfc:
    // 0x2decfc: 0x0  nop
    ctx->pc = 0x2decfcu;
    // NOP
label_2ded00:
    // 0x2ded00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ded00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2ded04:
    // 0x2ded04: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2ded04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2ded08:
    // 0x2ded08: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2ded08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2ded0c:
    // 0x2ded0c: 0x2463e3b0  addiu       $v1, $v1, -0x1C50
    ctx->pc = 0x2ded0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960048));
label_2ded10:
    // 0x2ded10: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2ded10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2ded14:
    // 0x2ded14: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2ded14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ded18:
    // 0x2ded18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ded18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2ded1c:
    // 0x2ded1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ded1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2ded20:
    // 0x2ded20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ded20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ded24:
    // 0x2ded24: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2ded24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2ded28:
    // 0x2ded28: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x2ded28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2ded2c:
    // 0x2ded2c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2ded2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2ded30:
    // 0x2ded30: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x2ded30u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2ded34:
    // 0x2ded34: 0xc4e20de4  lwc1        $f2, 0xDE4($a3)
    ctx->pc = 0x2ded34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2ded38:
    // 0x2ded38: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2ded38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2ded3c:
    // 0x2ded3c: 0xc4e00de0  lwc1        $f0, 0xDE0($a3)
    ctx->pc = 0x2ded3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 3552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ded40:
    // 0x2ded40: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x2ded40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2ded44:
    // 0x2ded44: 0x46001503  div.s       $f20, $f2, $f0
    ctx->pc = 0x2ded44u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[20] = ctx->f[2] / ctx->f[0];
label_2ded48:
    // 0x2ded48: 0x0  nop
    ctx->pc = 0x2ded48u;
    // NOP
label_2ded4c:
    // 0x2ded4c: 0x0  nop
    ctx->pc = 0x2ded4cu;
    // NOP
label_2ded50:
    // 0x2ded50: 0x4601a032  c.eq.s      $f20, $f1
    ctx->pc = 0x2ded50u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ded54:
    // 0x2ded54: 0x4503009c  bc1tl       . + 4 + (0x9C << 2)
label_2ded58:
    if (ctx->pc == 0x2DED58u) {
        ctx->pc = 0x2DED58u;
            // 0x2ded58: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x2DED5Cu;
        goto label_2ded5c;
    }
    ctx->pc = 0x2DED54u;
    {
        const bool branch_taken_0x2ded54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ded54) {
            ctx->pc = 0x2DED58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DED54u;
            // 0x2ded58: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DEFC8u;
            goto label_2defc8;
        }
    }
    ctx->pc = 0x2DED5Cu;
label_2ded5c:
    // 0x2ded5c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2ded5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ded60:
    // 0x2ded60: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2ded60u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ded64:
    // 0x2ded64: 0x45030023  bc1tl       . + 4 + (0x23 << 2)
label_2ded68:
    if (ctx->pc == 0x2DED68u) {
        ctx->pc = 0x2DED68u;
            // 0x2ded68: 0xc6010004  lwc1        $f1, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x2DED6Cu;
        goto label_2ded6c;
    }
    ctx->pc = 0x2DED64u;
    {
        const bool branch_taken_0x2ded64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ded64) {
            ctx->pc = 0x2DED68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DED64u;
            // 0x2ded68: 0xc6010004  lwc1        $f1, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DEDF4u;
            goto label_2dedf4;
        }
    }
    ctx->pc = 0x2DED6Cu;
label_2ded6c:
    // 0x2ded6c: 0xc04ab66  jal         func_12AD98
label_2ded70:
    if (ctx->pc == 0x2DED70u) {
        ctx->pc = 0x2DED70u;
            // 0x2ded70: 0x46140542  mul.s       $f21, $f0, $f20 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->pc = 0x2DED74u;
        goto label_2ded74;
    }
    ctx->pc = 0x2DED6Cu;
    SET_GPR_U32(ctx, 31, 0x2DED74u);
    ctx->pc = 0x2DED70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DED6Cu;
            // 0x2ded70: 0x46140542  mul.s       $f21, $f0, $f20 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DED74u; }
        if (ctx->pc != 0x2DED74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DED74u; }
        if (ctx->pc != 0x2DED74u) { return; }
    }
    ctx->pc = 0x2DED74u;
label_2ded74:
    // 0x2ded74: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2ded74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_2ded78:
    // 0x2ded78: 0xc04ab66  jal         func_12AD98
label_2ded7c:
    if (ctx->pc == 0x2DED7Cu) {
        ctx->pc = 0x2DED7Cu;
            // 0x2ded7c: 0x29740  sll         $s2, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x2DED80u;
        goto label_2ded80;
    }
    ctx->pc = 0x2DED78u;
    SET_GPR_U32(ctx, 31, 0x2DED80u);
    ctx->pc = 0x2DED7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DED78u;
            // 0x2ded7c: 0x29740  sll         $s2, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DED80u; }
        if (ctx->pc != 0x2DED80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DED80u; }
        if (ctx->pc != 0x2DED80u) { return; }
    }
    ctx->pc = 0x2DED80u;
label_2ded80:
    // 0x2ded80: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2ded80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_2ded84:
    // 0x2ded84: 0x522825  or          $a1, $v0, $s2
    ctx->pc = 0x2ded84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
label_2ded88:
    // 0x2ded88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ded88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ded8c:
    // 0x2ded8c: 0x3c032f80  lui         $v1, 0x2F80
    ctx->pc = 0x2ded8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12160 << 16));
label_2ded90:
    // 0x2ded90: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ded90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ded94:
    // 0x2ded94: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_2ded98:
    if (ctx->pc == 0x2DED98u) {
        ctx->pc = 0x2DED98u;
            // 0x2ded98: 0x46150082  mul.s       $f2, $f0, $f21 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->pc = 0x2DED9Cu;
        goto label_2ded9c;
    }
    ctx->pc = 0x2DED94u;
    {
        const bool branch_taken_0x2ded94 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2DED98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DED94u;
            // 0x2ded98: 0x46150082  mul.s       $f2, $f0, $f21 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ded94) {
            ctx->pc = 0x2DEDA8u;
            goto label_2deda8;
        }
    }
    ctx->pc = 0x2DED9Cu;
label_2ded9c:
    // 0x2ded9c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2ded9cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2deda0:
    // 0x2deda0: 0x10000008  b           . + 4 + (0x8 << 2)
label_2deda4:
    if (ctx->pc == 0x2DEDA4u) {
        ctx->pc = 0x2DEDA4u;
            // 0x2deda4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2DEDA8u;
        goto label_2deda8;
    }
    ctx->pc = 0x2DEDA0u;
    {
        const bool branch_taken_0x2deda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEDA0u;
            // 0x2deda4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2deda0) {
            ctx->pc = 0x2DEDC4u;
            goto label_2dedc4;
        }
    }
    ctx->pc = 0x2DEDA8u;
label_2deda8:
    // 0x2deda8: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x2deda8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_2dedac:
    // 0x2dedac: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x2dedacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_2dedb0:
    // 0x2dedb0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2dedb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2dedb4:
    // 0x2dedb4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2dedb4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dedb8:
    // 0x2dedb8: 0x0  nop
    ctx->pc = 0x2dedb8u;
    // NOP
label_2dedbc:
    // 0x2dedbc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2dedbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2dedc0:
    // 0x2dedc0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2dedc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2dedc4:
    // 0x2dedc4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2dedc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2dedc8:
    // 0x2dedc8: 0x3c0338d1  lui         $v1, 0x38D1
    ctx->pc = 0x2dedc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14545 << 16));
label_2dedcc:
    // 0x2dedcc: 0x3463b717  ori         $v1, $v1, 0xB717
    ctx->pc = 0x2dedccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46871);
label_2dedd0:
    // 0x2dedd0: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x2dedd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2dedd4:
    // 0x2dedd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dedd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dedd8:
    // 0x2dedd8: 0x0  nop
    ctx->pc = 0x2dedd8u;
    // NOP
label_2deddc:
    // 0x2deddc: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x2deddcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_2dede0:
    // 0x2dede0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2dede0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2dede4:
    // 0x2dede4: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x2dede4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dede8:
    // 0x2dede8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2dede8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2dedec:
    // 0x2dedec: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x2dedecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_2dedf0:
    // 0x2dedf0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2dedf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dedf4:
    // 0x2dedf4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dedf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dedf8:
    // 0x2dedf8: 0x0  nop
    ctx->pc = 0x2dedf8u;
    // NOP
label_2dedfc:
    // 0x2dedfc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2dedfcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dee00:
    // 0x2dee00: 0x45030023  bc1tl       . + 4 + (0x23 << 2)
label_2dee04:
    if (ctx->pc == 0x2DEE04u) {
        ctx->pc = 0x2DEE04u;
            // 0x2dee04: 0xc601000c  lwc1        $f1, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x2DEE08u;
        goto label_2dee08;
    }
    ctx->pc = 0x2DEE00u;
    {
        const bool branch_taken_0x2dee00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dee00) {
            ctx->pc = 0x2DEE04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEE00u;
            // 0x2dee04: 0xc601000c  lwc1        $f1, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DEE90u;
            goto label_2dee90;
        }
    }
    ctx->pc = 0x2DEE08u;
label_2dee08:
    // 0x2dee08: 0xc04ab66  jal         func_12AD98
label_2dee0c:
    if (ctx->pc == 0x2DEE0Cu) {
        ctx->pc = 0x2DEE0Cu;
            // 0x2dee0c: 0x46140d42  mul.s       $f21, $f1, $f20 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
        ctx->pc = 0x2DEE10u;
        goto label_2dee10;
    }
    ctx->pc = 0x2DEE08u;
    SET_GPR_U32(ctx, 31, 0x2DEE10u);
    ctx->pc = 0x2DEE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEE08u;
            // 0x2dee0c: 0x46140d42  mul.s       $f21, $f1, $f20 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEE10u; }
        if (ctx->pc != 0x2DEE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEE10u; }
        if (ctx->pc != 0x2DEE10u) { return; }
    }
    ctx->pc = 0x2DEE10u;
label_2dee10:
    // 0x2dee10: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2dee10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_2dee14:
    // 0x2dee14: 0xc04ab66  jal         func_12AD98
label_2dee18:
    if (ctx->pc == 0x2DEE18u) {
        ctx->pc = 0x2DEE18u;
            // 0x2dee18: 0x29740  sll         $s2, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x2DEE1Cu;
        goto label_2dee1c;
    }
    ctx->pc = 0x2DEE14u;
    SET_GPR_U32(ctx, 31, 0x2DEE1Cu);
    ctx->pc = 0x2DEE18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEE14u;
            // 0x2dee18: 0x29740  sll         $s2, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEE1Cu; }
        if (ctx->pc != 0x2DEE1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEE1Cu; }
        if (ctx->pc != 0x2DEE1Cu) { return; }
    }
    ctx->pc = 0x2DEE1Cu;
label_2dee1c:
    // 0x2dee1c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2dee1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_2dee20:
    // 0x2dee20: 0x522825  or          $a1, $v0, $s2
    ctx->pc = 0x2dee20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
label_2dee24:
    // 0x2dee24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dee24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dee28:
    // 0x2dee28: 0x3c032f80  lui         $v1, 0x2F80
    ctx->pc = 0x2dee28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12160 << 16));
label_2dee2c:
    // 0x2dee2c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2dee2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2dee30:
    // 0x2dee30: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_2dee34:
    if (ctx->pc == 0x2DEE34u) {
        ctx->pc = 0x2DEE34u;
            // 0x2dee34: 0x46150082  mul.s       $f2, $f0, $f21 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->pc = 0x2DEE38u;
        goto label_2dee38;
    }
    ctx->pc = 0x2DEE30u;
    {
        const bool branch_taken_0x2dee30 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2DEE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEE30u;
            // 0x2dee34: 0x46150082  mul.s       $f2, $f0, $f21 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dee30) {
            ctx->pc = 0x2DEE44u;
            goto label_2dee44;
        }
    }
    ctx->pc = 0x2DEE38u;
label_2dee38:
    // 0x2dee38: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2dee38u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dee3c:
    // 0x2dee3c: 0x10000008  b           . + 4 + (0x8 << 2)
label_2dee40:
    if (ctx->pc == 0x2DEE40u) {
        ctx->pc = 0x2DEE40u;
            // 0x2dee40: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2DEE44u;
        goto label_2dee44;
    }
    ctx->pc = 0x2DEE3Cu;
    {
        const bool branch_taken_0x2dee3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEE3Cu;
            // 0x2dee40: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dee3c) {
            ctx->pc = 0x2DEE60u;
            goto label_2dee60;
        }
    }
    ctx->pc = 0x2DEE44u;
label_2dee44:
    // 0x2dee44: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x2dee44u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_2dee48:
    // 0x2dee48: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x2dee48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_2dee4c:
    // 0x2dee4c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2dee4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2dee50:
    // 0x2dee50: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2dee50u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dee54:
    // 0x2dee54: 0x0  nop
    ctx->pc = 0x2dee54u;
    // NOP
label_2dee58:
    // 0x2dee58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2dee58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2dee5c:
    // 0x2dee5c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2dee5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2dee60:
    // 0x2dee60: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2dee60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2dee64:
    // 0x2dee64: 0x3c0338d1  lui         $v1, 0x38D1
    ctx->pc = 0x2dee64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14545 << 16));
label_2dee68:
    // 0x2dee68: 0x3463b717  ori         $v1, $v1, 0xB717
    ctx->pc = 0x2dee68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46871);
label_2dee6c:
    // 0x2dee6c: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x2dee6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2dee70:
    // 0x2dee70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dee70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dee74:
    // 0x2dee74: 0x0  nop
    ctx->pc = 0x2dee74u;
    // NOP
label_2dee78:
    // 0x2dee78: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x2dee78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_2dee7c:
    // 0x2dee7c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2dee7cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2dee80:
    // 0x2dee80: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x2dee80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dee84:
    // 0x2dee84: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2dee84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2dee88:
    // 0x2dee88: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x2dee88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_2dee8c:
    // 0x2dee8c: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x2dee8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dee90:
    // 0x2dee90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dee90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dee94:
    // 0x2dee94: 0x0  nop
    ctx->pc = 0x2dee94u;
    // NOP
label_2dee98:
    // 0x2dee98: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2dee98u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dee9c:
    // 0x2dee9c: 0x45030023  bc1tl       . + 4 + (0x23 << 2)
label_2deea0:
    if (ctx->pc == 0x2DEEA0u) {
        ctx->pc = 0x2DEEA0u;
            // 0x2deea0: 0xc6010010  lwc1        $f1, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x2DEEA4u;
        goto label_2deea4;
    }
    ctx->pc = 0x2DEE9Cu;
    {
        const bool branch_taken_0x2dee9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dee9c) {
            ctx->pc = 0x2DEEA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEE9Cu;
            // 0x2deea0: 0xc6010010  lwc1        $f1, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DEF2Cu;
            goto label_2def2c;
        }
    }
    ctx->pc = 0x2DEEA4u;
label_2deea4:
    // 0x2deea4: 0xc04ab66  jal         func_12AD98
label_2deea8:
    if (ctx->pc == 0x2DEEA8u) {
        ctx->pc = 0x2DEEA8u;
            // 0x2deea8: 0x46140d42  mul.s       $f21, $f1, $f20 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
        ctx->pc = 0x2DEEACu;
        goto label_2deeac;
    }
    ctx->pc = 0x2DEEA4u;
    SET_GPR_U32(ctx, 31, 0x2DEEACu);
    ctx->pc = 0x2DEEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEEA4u;
            // 0x2deea8: 0x46140d42  mul.s       $f21, $f1, $f20 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEEACu; }
        if (ctx->pc != 0x2DEEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEEACu; }
        if (ctx->pc != 0x2DEEACu) { return; }
    }
    ctx->pc = 0x2DEEACu;
label_2deeac:
    // 0x2deeac: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2deeacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_2deeb0:
    // 0x2deeb0: 0xc04ab66  jal         func_12AD98
label_2deeb4:
    if (ctx->pc == 0x2DEEB4u) {
        ctx->pc = 0x2DEEB4u;
            // 0x2deeb4: 0x29740  sll         $s2, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x2DEEB8u;
        goto label_2deeb8;
    }
    ctx->pc = 0x2DEEB0u;
    SET_GPR_U32(ctx, 31, 0x2DEEB8u);
    ctx->pc = 0x2DEEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEEB0u;
            // 0x2deeb4: 0x29740  sll         $s2, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEEB8u; }
        if (ctx->pc != 0x2DEEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEEB8u; }
        if (ctx->pc != 0x2DEEB8u) { return; }
    }
    ctx->pc = 0x2DEEB8u;
label_2deeb8:
    // 0x2deeb8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2deeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_2deebc:
    // 0x2deebc: 0x522825  or          $a1, $v0, $s2
    ctx->pc = 0x2deebcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
label_2deec0:
    // 0x2deec0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2deec0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2deec4:
    // 0x2deec4: 0x3c032f80  lui         $v1, 0x2F80
    ctx->pc = 0x2deec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12160 << 16));
label_2deec8:
    // 0x2deec8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2deec8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2deecc:
    // 0x2deecc: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_2deed0:
    if (ctx->pc == 0x2DEED0u) {
        ctx->pc = 0x2DEED0u;
            // 0x2deed0: 0x46150082  mul.s       $f2, $f0, $f21 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->pc = 0x2DEED4u;
        goto label_2deed4;
    }
    ctx->pc = 0x2DEECCu;
    {
        const bool branch_taken_0x2deecc = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2DEED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEECCu;
            // 0x2deed0: 0x46150082  mul.s       $f2, $f0, $f21 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2deecc) {
            ctx->pc = 0x2DEEE0u;
            goto label_2deee0;
        }
    }
    ctx->pc = 0x2DEED4u;
label_2deed4:
    // 0x2deed4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2deed4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2deed8:
    // 0x2deed8: 0x10000008  b           . + 4 + (0x8 << 2)
label_2deedc:
    if (ctx->pc == 0x2DEEDCu) {
        ctx->pc = 0x2DEEDCu;
            // 0x2deedc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2DEEE0u;
        goto label_2deee0;
    }
    ctx->pc = 0x2DEED8u;
    {
        const bool branch_taken_0x2deed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEED8u;
            // 0x2deedc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2deed8) {
            ctx->pc = 0x2DEEFCu;
            goto label_2deefc;
        }
    }
    ctx->pc = 0x2DEEE0u;
label_2deee0:
    // 0x2deee0: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x2deee0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_2deee4:
    // 0x2deee4: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x2deee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_2deee8:
    // 0x2deee8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2deee8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2deeec:
    // 0x2deeec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2deeecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2deef0:
    // 0x2deef0: 0x0  nop
    ctx->pc = 0x2deef0u;
    // NOP
label_2deef4:
    // 0x2deef4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2deef4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2deef8:
    // 0x2deef8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2deef8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2deefc:
    // 0x2deefc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2deefcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2def00:
    // 0x2def00: 0x3c0338d1  lui         $v1, 0x38D1
    ctx->pc = 0x2def00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14545 << 16));
label_2def04:
    // 0x2def04: 0x3463b717  ori         $v1, $v1, 0xB717
    ctx->pc = 0x2def04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46871);
label_2def08:
    // 0x2def08: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x2def08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2def0c:
    // 0x2def0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2def0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2def10:
    // 0x2def10: 0x0  nop
    ctx->pc = 0x2def10u;
    // NOP
label_2def14:
    // 0x2def14: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x2def14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_2def18:
    // 0x2def18: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2def18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2def1c:
    // 0x2def1c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2def1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2def20:
    // 0x2def20: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2def20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2def24:
    // 0x2def24: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2def24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2def28:
    // 0x2def28: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x2def28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2def2c:
    // 0x2def2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2def2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2def30:
    // 0x2def30: 0x0  nop
    ctx->pc = 0x2def30u;
    // NOP
label_2def34:
    // 0x2def34: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2def34u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2def38:
    // 0x2def38: 0x45010022  bc1t        . + 4 + (0x22 << 2)
label_2def3c:
    if (ctx->pc == 0x2DEF3Cu) {
        ctx->pc = 0x2DEF40u;
        goto label_2def40;
    }
    ctx->pc = 0x2DEF38u;
    {
        const bool branch_taken_0x2def38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2def38) {
            ctx->pc = 0x2DEFC4u;
            goto label_2defc4;
        }
    }
    ctx->pc = 0x2DEF40u;
label_2def40:
    // 0x2def40: 0xc04ab66  jal         func_12AD98
label_2def44:
    if (ctx->pc == 0x2DEF44u) {
        ctx->pc = 0x2DEF44u;
            // 0x2def44: 0x46140d02  mul.s       $f20, $f1, $f20 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
        ctx->pc = 0x2DEF48u;
        goto label_2def48;
    }
    ctx->pc = 0x2DEF40u;
    SET_GPR_U32(ctx, 31, 0x2DEF48u);
    ctx->pc = 0x2DEF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEF40u;
            // 0x2def44: 0x46140d02  mul.s       $f20, $f1, $f20 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEF48u; }
        if (ctx->pc != 0x2DEF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEF48u; }
        if (ctx->pc != 0x2DEF48u) { return; }
    }
    ctx->pc = 0x2DEF48u;
label_2def48:
    // 0x2def48: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2def48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_2def4c:
    // 0x2def4c: 0xc04ab66  jal         func_12AD98
label_2def50:
    if (ctx->pc == 0x2DEF50u) {
        ctx->pc = 0x2DEF50u;
            // 0x2def50: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x2DEF54u;
        goto label_2def54;
    }
    ctx->pc = 0x2DEF4Cu;
    SET_GPR_U32(ctx, 31, 0x2DEF54u);
    ctx->pc = 0x2DEF50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEF4Cu;
            // 0x2def50: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEF54u; }
        if (ctx->pc != 0x2DEF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEF54u; }
        if (ctx->pc != 0x2DEF54u) { return; }
    }
    ctx->pc = 0x2DEF54u;
label_2def54:
    // 0x2def54: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2def54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_2def58:
    // 0x2def58: 0x502825  or          $a1, $v0, $s0
    ctx->pc = 0x2def58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_2def5c:
    // 0x2def5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2def5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2def60:
    // 0x2def60: 0x3c032f80  lui         $v1, 0x2F80
    ctx->pc = 0x2def60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12160 << 16));
label_2def64:
    // 0x2def64: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2def64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2def68:
    // 0x2def68: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_2def6c:
    if (ctx->pc == 0x2DEF6Cu) {
        ctx->pc = 0x2DEF6Cu;
            // 0x2def6c: 0x46140082  mul.s       $f2, $f0, $f20 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->pc = 0x2DEF70u;
        goto label_2def70;
    }
    ctx->pc = 0x2DEF68u;
    {
        const bool branch_taken_0x2def68 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2DEF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEF68u;
            // 0x2def6c: 0x46140082  mul.s       $f2, $f0, $f20 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2def68) {
            ctx->pc = 0x2DEF7Cu;
            goto label_2def7c;
        }
    }
    ctx->pc = 0x2DEF70u;
label_2def70:
    // 0x2def70: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2def70u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2def74:
    // 0x2def74: 0x10000008  b           . + 4 + (0x8 << 2)
label_2def78:
    if (ctx->pc == 0x2DEF78u) {
        ctx->pc = 0x2DEF78u;
            // 0x2def78: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2DEF7Cu;
        goto label_2def7c;
    }
    ctx->pc = 0x2DEF74u;
    {
        const bool branch_taken_0x2def74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEF74u;
            // 0x2def78: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2def74) {
            ctx->pc = 0x2DEF98u;
            goto label_2def98;
        }
    }
    ctx->pc = 0x2DEF7Cu;
label_2def7c:
    // 0x2def7c: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x2def7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_2def80:
    // 0x2def80: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x2def80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_2def84:
    // 0x2def84: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2def84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2def88:
    // 0x2def88: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2def88u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2def8c:
    // 0x2def8c: 0x0  nop
    ctx->pc = 0x2def8cu;
    // NOP
label_2def90:
    // 0x2def90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2def90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2def94:
    // 0x2def94: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2def94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2def98:
    // 0x2def98: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2def98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2def9c:
    // 0x2def9c: 0x3c0338d1  lui         $v1, 0x38D1
    ctx->pc = 0x2def9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14545 << 16));
label_2defa0:
    // 0x2defa0: 0x3463b717  ori         $v1, $v1, 0xB717
    ctx->pc = 0x2defa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46871);
label_2defa4:
    // 0x2defa4: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x2defa4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2defa8:
    // 0x2defa8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2defa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2defac:
    // 0x2defac: 0x0  nop
    ctx->pc = 0x2defacu;
    // NOP
label_2defb0:
    // 0x2defb0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2defb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_2defb4:
    // 0x2defb4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2defb4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2defb8:
    // 0x2defb8: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2defb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2defbc:
    // 0x2defbc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2defbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2defc0:
    // 0x2defc0: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2defc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2defc4:
    // 0x2defc4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2defc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2defc8:
    // 0x2defc8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2defc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2defcc:
    // 0x2defcc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2defccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2defd0:
    // 0x2defd0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2defd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2defd4:
    // 0x2defd4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2defd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2defd8:
    // 0x2defd8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2defd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2defdc:
    // 0x2defdc: 0x3e00008  jr          $ra
label_2defe0:
    if (ctx->pc == 0x2DEFE0u) {
        ctx->pc = 0x2DEFE0u;
            // 0x2defe0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2DEFE4u;
        goto label_2defe4;
    }
    ctx->pc = 0x2DEFDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DEFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEFDCu;
            // 0x2defe0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DEFE4u;
label_2defe4:
    // 0x2defe4: 0x0  nop
    ctx->pc = 0x2defe4u;
    // NOP
label_2defe8:
    // 0x2defe8: 0x0  nop
    ctx->pc = 0x2defe8u;
    // NOP
label_2defec:
    // 0x2defec: 0x0  nop
    ctx->pc = 0x2defecu;
    // NOP
label_2deff0:
    // 0x2deff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2deff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2deff4:
    // 0x2deff4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2deff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2deff8:
    // 0x2deff8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2deff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2deffc:
    // 0x2deffc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2deffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2df000:
    // 0x2df000: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2df000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2df004:
    // 0x2df004: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
label_2df008:
    if (ctx->pc == 0x2DF008u) {
        ctx->pc = 0x2DF008u;
            // 0x2df008: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DF00Cu;
        goto label_2df00c;
    }
    ctx->pc = 0x2DF004u;
    {
        const bool branch_taken_0x2df004 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF004u;
            // 0x2df008: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df004) {
            ctx->pc = 0x2DF06Cu;
            goto label_2df06c;
        }
    }
    ctx->pc = 0x2DF00Cu;
label_2df00c:
    // 0x2df00c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2df00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2df010:
    // 0x2df010: 0x24422f40  addiu       $v0, $v0, 0x2F40
    ctx->pc = 0x2df010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12096));
label_2df014:
    // 0x2df014: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2df014u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2df018:
    // 0x2df018: 0xc074a08  jal         func_1D2820
label_2df01c:
    if (ctx->pc == 0x2DF01Cu) {
        ctx->pc = 0x2DF01Cu;
            // 0x2df01c: 0x8e240058  lw          $a0, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->pc = 0x2DF020u;
        goto label_2df020;
    }
    ctx->pc = 0x2DF018u;
    SET_GPR_U32(ctx, 31, 0x2DF020u);
    ctx->pc = 0x2DF01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF018u;
            // 0x2df01c: 0x8e240058  lw          $a0, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2820u;
    if (runtime->hasFunction(0x1D2820u)) {
        auto targetFn = runtime->lookupFunction(0x1D2820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF020u; }
        if (ctx->pc != 0x2DF020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2820_0x1d2820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF020u; }
        if (ctx->pc != 0x2DF020u) { return; }
    }
    ctx->pc = 0x2DF020u;
label_2df020:
    // 0x2df020: 0x26220054  addiu       $v0, $s1, 0x54
    ctx->pc = 0x2df020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
label_2df024:
    // 0x2df024: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2df028:
    if (ctx->pc == 0x2DF028u) {
        ctx->pc = 0x2DF02Cu;
        goto label_2df02c;
    }
    ctx->pc = 0x2DF024u;
    {
        const bool branch_taken_0x2df024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df024) {
            ctx->pc = 0x2DF034u;
            goto label_2df034;
        }
    }
    ctx->pc = 0x2DF02Cu;
label_2df02c:
    // 0x2df02c: 0xc07507c  jal         func_1D41F0
label_2df030:
    if (ctx->pc == 0x2DF030u) {
        ctx->pc = 0x2DF030u;
            // 0x2df030: 0x8e240058  lw          $a0, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->pc = 0x2DF034u;
        goto label_2df034;
    }
    ctx->pc = 0x2DF02Cu;
    SET_GPR_U32(ctx, 31, 0x2DF034u);
    ctx->pc = 0x2DF030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF02Cu;
            // 0x2df030: 0x8e240058  lw          $a0, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF034u; }
        if (ctx->pc != 0x2DF034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF034u; }
        if (ctx->pc != 0x2DF034u) { return; }
    }
    ctx->pc = 0x2DF034u;
label_2df034:
    // 0x2df034: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
label_2df038:
    if (ctx->pc == 0x2DF038u) {
        ctx->pc = 0x2DF038u;
            // 0x2df038: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2DF03Cu;
        goto label_2df03c;
    }
    ctx->pc = 0x2DF034u;
    {
        const bool branch_taken_0x2df034 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df034) {
            ctx->pc = 0x2DF038u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF034u;
            // 0x2df038: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DF058u;
            goto label_2df058;
        }
    }
    ctx->pc = 0x2DF03Cu;
label_2df03c:
    // 0x2df03c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2df03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2df040:
    // 0x2df040: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2df040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2df044:
    // 0x2df044: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x2df044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_2df048:
    // 0x2df048: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2df048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2df04c:
    // 0x2df04c: 0xc057a68  jal         func_15E9A0
label_2df050:
    if (ctx->pc == 0x2DF050u) {
        ctx->pc = 0x2DF050u;
            // 0x2df050: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2DF054u;
        goto label_2df054;
    }
    ctx->pc = 0x2DF04Cu;
    SET_GPR_U32(ctx, 31, 0x2DF054u);
    ctx->pc = 0x2DF050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF04Cu;
            // 0x2df050: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF054u; }
        if (ctx->pc != 0x2DF054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF054u; }
        if (ctx->pc != 0x2DF054u) { return; }
    }
    ctx->pc = 0x2DF054u;
label_2df054:
    // 0x2df054: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2df054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2df058:
    // 0x2df058: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2df058u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2df05c:
    // 0x2df05c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2df060:
    if (ctx->pc == 0x2DF060u) {
        ctx->pc = 0x2DF060u;
            // 0x2df060: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DF064u;
        goto label_2df064;
    }
    ctx->pc = 0x2DF05Cu;
    {
        const bool branch_taken_0x2df05c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2df05c) {
            ctx->pc = 0x2DF060u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF05Cu;
            // 0x2df060: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DF070u;
            goto label_2df070;
        }
    }
    ctx->pc = 0x2DF064u;
label_2df064:
    // 0x2df064: 0xc0400a8  jal         func_1002A0
label_2df068:
    if (ctx->pc == 0x2DF068u) {
        ctx->pc = 0x2DF068u;
            // 0x2df068: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DF06Cu;
        goto label_2df06c;
    }
    ctx->pc = 0x2DF064u;
    SET_GPR_U32(ctx, 31, 0x2DF06Cu);
    ctx->pc = 0x2DF068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF064u;
            // 0x2df068: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF06Cu; }
        if (ctx->pc != 0x2DF06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF06Cu; }
        if (ctx->pc != 0x2DF06Cu) { return; }
    }
    ctx->pc = 0x2DF06Cu;
label_2df06c:
    // 0x2df06c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2df06cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2df070:
    // 0x2df070: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2df070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2df074:
    // 0x2df074: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2df074u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2df078:
    // 0x2df078: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2df078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2df07c:
    // 0x2df07c: 0x3e00008  jr          $ra
label_2df080:
    if (ctx->pc == 0x2DF080u) {
        ctx->pc = 0x2DF080u;
            // 0x2df080: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2DF084u;
        goto label_2df084;
    }
    ctx->pc = 0x2DF07Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF07Cu;
            // 0x2df080: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DF084u;
label_2df084:
    // 0x2df084: 0x0  nop
    ctx->pc = 0x2df084u;
    // NOP
label_2df088:
    // 0x2df088: 0x0  nop
    ctx->pc = 0x2df088u;
    // NOP
label_2df08c:
    // 0x2df08c: 0x0  nop
    ctx->pc = 0x2df08cu;
    // NOP
label_2df090:
    // 0x2df090: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2df090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2df094:
    // 0x2df094: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2df094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_2df098:
    // 0x2df098: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2df098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2df09c:
    // 0x2df09c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2df09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2df0a0:
    // 0x2df0a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2df0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2df0a4:
    // 0x2df0a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2df0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2df0a8:
    // 0x2df0a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2df0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2df0ac:
    // 0x2df0ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2df0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2df0b0:
    // 0x2df0b0: 0x8c630ea4  lw          $v1, 0xEA4($v1)
    ctx->pc = 0x2df0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3748)));
label_2df0b4:
    // 0x2df0b4: 0x9063014c  lbu         $v1, 0x14C($v1)
    ctx->pc = 0x2df0b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 332)));
label_2df0b8:
    // 0x2df0b8: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
label_2df0bc:
    if (ctx->pc == 0x2DF0BCu) {
        ctx->pc = 0x2DF0BCu;
            // 0x2df0bc: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DF0C0u;
        goto label_2df0c0;
    }
    ctx->pc = 0x2DF0B8u;
    {
        const bool branch_taken_0x2df0b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF0B8u;
            // 0x2df0bc: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df0b8) {
            ctx->pc = 0x2DF188u;
            goto label_2df188;
        }
    }
    ctx->pc = 0x2DF0C0u;
label_2df0c0:
    // 0x2df0c0: 0x92840010  lbu         $a0, 0x10($s4)
    ctx->pc = 0x2df0c0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 16)));
label_2df0c4:
    // 0x2df0c4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2df0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2df0c8:
    // 0x2df0c8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_2df0cc:
    if (ctx->pc == 0x2DF0CCu) {
        ctx->pc = 0x2DF0D0u;
        goto label_2df0d0;
    }
    ctx->pc = 0x2DF0C8u;
    {
        const bool branch_taken_0x2df0c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2df0c8) {
            ctx->pc = 0x2DF0D8u;
            goto label_2df0d8;
        }
    }
    ctx->pc = 0x2DF0D0u;
label_2df0d0:
    // 0x2df0d0: 0x1000002e  b           . + 4 + (0x2E << 2)
label_2df0d4:
    if (ctx->pc == 0x2DF0D4u) {
        ctx->pc = 0x2DF0D4u;
            // 0x2df0d4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x2DF0D8u;
        goto label_2df0d8;
    }
    ctx->pc = 0x2DF0D0u;
    {
        const bool branch_taken_0x2df0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF0D0u;
            // 0x2df0d4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df0d0) {
            ctx->pc = 0x2DF18Cu;
            goto label_2df18c;
        }
    }
    ctx->pc = 0x2DF0D8u;
label_2df0d8:
    // 0x2df0d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2df0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2df0dc:
    // 0x2df0dc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2df0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2df0e0:
    // 0x2df0e0: 0x8c52e370  lw          $s2, -0x1C90($v0)
    ctx->pc = 0x2df0e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_2df0e4:
    // 0x2df0e4: 0x8c73e378  lw          $s3, -0x1C88($v1)
    ctx->pc = 0x2df0e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_2df0e8:
    // 0x2df0e8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x2df0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_2df0ec:
    // 0x2df0ec: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x2df0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_2df0f0:
    // 0x2df0f0: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x2df0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_2df0f4:
    // 0x2df0f4: 0x8c71d120  lw          $s1, -0x2EE0($v1)
    ctx->pc = 0x2df0f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_2df0f8:
    // 0x2df0f8: 0x8c500130  lw          $s0, 0x130($v0)
    ctx->pc = 0x2df0f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_2df0fc:
    // 0x2df0fc: 0xc05395c  jal         func_14E570
label_2df100:
    if (ctx->pc == 0x2DF100u) {
        ctx->pc = 0x2DF100u;
            // 0x2df100: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2DF104u;
        goto label_2df104;
    }
    ctx->pc = 0x2DF0FCu;
    SET_GPR_U32(ctx, 31, 0x2DF104u);
    ctx->pc = 0x2DF100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF0FCu;
            // 0x2df100: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E570u;
    if (runtime->hasFunction(0x14E570u)) {
        auto targetFn = runtime->lookupFunction(0x14E570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF104u; }
        if (ctx->pc != 0x2DF104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E570_0x14e570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF104u; }
        if (ctx->pc != 0x2DF104u) { return; }
    }
    ctx->pc = 0x2DF104u;
label_2df104:
    // 0x2df104: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2df104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2df108:
    // 0x2df108: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x2df108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_2df10c:
    // 0x2df10c: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x2df10cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2df110:
    // 0x2df110: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2df110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2df114:
    // 0x2df114: 0x24460060  addiu       $a2, $v0, 0x60
    ctx->pc = 0x2df114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_2df118:
    // 0x2df118: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2df118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2df11c:
    // 0x2df11c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2df11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2df120:
    // 0x2df120: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2df120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2df124:
    // 0x2df124: 0xc04cd60  jal         func_133580
label_2df128:
    if (ctx->pc == 0x2DF128u) {
        ctx->pc = 0x2DF128u;
            // 0x2df128: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x2DF12Cu;
        goto label_2df12c;
    }
    ctx->pc = 0x2DF124u;
    SET_GPR_U32(ctx, 31, 0x2DF12Cu);
    ctx->pc = 0x2DF128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF124u;
            // 0x2df128: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF12Cu; }
        if (ctx->pc != 0x2DF12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF12Cu; }
        if (ctx->pc != 0x2DF12Cu) { return; }
    }
    ctx->pc = 0x2DF12Cu;
label_2df12c:
    // 0x2df12c: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x2df12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_2df130:
    // 0x2df130: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2df130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2df134:
    // 0x2df134: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x2df134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_2df138:
    // 0x2df138: 0xc04e4a4  jal         func_139290
label_2df13c:
    if (ctx->pc == 0x2DF13Cu) {
        ctx->pc = 0x2DF13Cu;
            // 0x2df13c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DF140u;
        goto label_2df140;
    }
    ctx->pc = 0x2DF138u;
    SET_GPR_U32(ctx, 31, 0x2DF140u);
    ctx->pc = 0x2DF13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF138u;
            // 0x2df13c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF140u; }
        if (ctx->pc != 0x2DF140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF140u; }
        if (ctx->pc != 0x2DF140u) { return; }
    }
    ctx->pc = 0x2DF140u;
label_2df140:
    // 0x2df140: 0xc04e738  jal         func_139CE0
label_2df144:
    if (ctx->pc == 0x2DF144u) {
        ctx->pc = 0x2DF144u;
            // 0x2df144: 0x8e840058  lw          $a0, 0x58($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
        ctx->pc = 0x2DF148u;
        goto label_2df148;
    }
    ctx->pc = 0x2DF140u;
    SET_GPR_U32(ctx, 31, 0x2DF148u);
    ctx->pc = 0x2DF144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF140u;
            // 0x2df144: 0x8e840058  lw          $a0, 0x58($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF148u; }
        if (ctx->pc != 0x2DF148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF148u; }
        if (ctx->pc != 0x2DF148u) { return; }
    }
    ctx->pc = 0x2DF148u;
label_2df148:
    // 0x2df148: 0x8e860054  lw          $a2, 0x54($s4)
    ctx->pc = 0x2df148u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_2df14c:
    // 0x2df14c: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x2df14cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_2df150:
    // 0x2df150: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2df150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2df154:
    // 0x2df154: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2df154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2df158:
    // 0x2df158: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2df158u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2df15c:
    // 0x2df15c: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x2df15cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_2df160:
    // 0x2df160: 0xc04cfcc  jal         func_133F30
label_2df164:
    if (ctx->pc == 0x2DF164u) {
        ctx->pc = 0x2DF164u;
            // 0x2df164: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DF168u;
        goto label_2df168;
    }
    ctx->pc = 0x2DF160u;
    SET_GPR_U32(ctx, 31, 0x2DF168u);
    ctx->pc = 0x2DF164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF160u;
            // 0x2df164: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF168u; }
        if (ctx->pc != 0x2DF168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF168u; }
        if (ctx->pc != 0x2DF168u) { return; }
    }
    ctx->pc = 0x2DF168u;
label_2df168:
    // 0x2df168: 0x8e840054  lw          $a0, 0x54($s4)
    ctx->pc = 0x2df168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_2df16c:
    // 0x2df16c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2df16cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2df170:
    // 0x2df170: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2df170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2df174:
    // 0x2df174: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x2df174u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_2df178:
    // 0x2df178: 0xc0538d8  jal         func_14E360
label_2df17c:
    if (ctx->pc == 0x2DF17Cu) {
        ctx->pc = 0x2DF17Cu;
            // 0x2df17c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x2DF180u;
        goto label_2df180;
    }
    ctx->pc = 0x2DF178u;
    SET_GPR_U32(ctx, 31, 0x2DF180u);
    ctx->pc = 0x2DF17Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF178u;
            // 0x2df17c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF180u; }
        if (ctx->pc != 0x2DF180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF180u; }
        if (ctx->pc != 0x2DF180u) { return; }
    }
    ctx->pc = 0x2DF180u;
label_2df180:
    // 0x2df180: 0xc05395c  jal         func_14E570
label_2df184:
    if (ctx->pc == 0x2DF184u) {
        ctx->pc = 0x2DF184u;
            // 0x2df184: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DF188u;
        goto label_2df188;
    }
    ctx->pc = 0x2DF180u;
    SET_GPR_U32(ctx, 31, 0x2DF188u);
    ctx->pc = 0x2DF184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF180u;
            // 0x2df184: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E570u;
    if (runtime->hasFunction(0x14E570u)) {
        auto targetFn = runtime->lookupFunction(0x14E570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF188u; }
        if (ctx->pc != 0x2DF188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E570_0x14e570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF188u; }
        if (ctx->pc != 0x2DF188u) { return; }
    }
    ctx->pc = 0x2DF188u;
label_2df188:
    // 0x2df188: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2df188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2df18c:
    // 0x2df18c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2df18cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2df190:
    // 0x2df190: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2df190u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2df194:
    // 0x2df194: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2df194u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2df198:
    // 0x2df198: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2df198u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2df19c:
    // 0x2df19c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2df19cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2df1a0:
    // 0x2df1a0: 0x3e00008  jr          $ra
label_2df1a4:
    if (ctx->pc == 0x2DF1A4u) {
        ctx->pc = 0x2DF1A4u;
            // 0x2df1a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2DF1A8u;
        goto label_2df1a8;
    }
    ctx->pc = 0x2DF1A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF1A0u;
            // 0x2df1a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DF1A8u;
label_2df1a8:
    // 0x2df1a8: 0x0  nop
    ctx->pc = 0x2df1a8u;
    // NOP
label_2df1ac:
    // 0x2df1ac: 0x0  nop
    ctx->pc = 0x2df1acu;
    // NOP
label_2df1b0:
    // 0x2df1b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2df1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2df1b4:
    // 0x2df1b4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2df1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2df1b8:
    // 0x2df1b8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2df1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2df1bc:
    // 0x2df1bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2df1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2df1c0:
    // 0x2df1c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2df1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2df1c4:
    // 0x2df1c4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2df1c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2df1c8:
    // 0x2df1c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2df1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2df1cc:
    // 0x2df1cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2df1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2df1d0:
    // 0x2df1d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2df1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2df1d4:
    // 0x2df1d4: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x2df1d4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_2df1d8:
    // 0x2df1d8: 0x1083002f  beq         $a0, $v1, . + 4 + (0x2F << 2)
label_2df1dc:
    if (ctx->pc == 0x2DF1DCu) {
        ctx->pc = 0x2DF1E0u;
        goto label_2df1e0;
    }
    ctx->pc = 0x2DF1D8u;
    {
        const bool branch_taken_0x2df1d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2df1d8) {
            ctx->pc = 0x2DF298u;
            goto label_2df298;
        }
    }
    ctx->pc = 0x2DF1E0u;
label_2df1e0:
    // 0x2df1e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2df1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2df1e4:
    // 0x2df1e4: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_2df1e8:
    if (ctx->pc == 0x2DF1E8u) {
        ctx->pc = 0x2DF1ECu;
        goto label_2df1ec;
    }
    ctx->pc = 0x2DF1E4u;
    {
        const bool branch_taken_0x2df1e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2df1e4) {
            ctx->pc = 0x2DF1F4u;
            goto label_2df1f4;
        }
    }
    ctx->pc = 0x2DF1ECu;
label_2df1ec:
    // 0x2df1ec: 0x10000050  b           . + 4 + (0x50 << 2)
label_2df1f0:
    if (ctx->pc == 0x2DF1F0u) {
        ctx->pc = 0x2DF1F0u;
            // 0x2df1f0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x2DF1F4u;
        goto label_2df1f4;
    }
    ctx->pc = 0x2DF1ECu;
    {
        const bool branch_taken_0x2df1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF1ECu;
            // 0x2df1f0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df1ec) {
            ctx->pc = 0x2DF330u;
            goto label_2df330;
        }
    }
    ctx->pc = 0x2DF1F4u;
label_2df1f4:
    // 0x2df1f4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2df1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_2df1f8:
    // 0x2df1f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2df1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2df1fc:
    // 0x2df1fc: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x2df1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_2df200:
    // 0x2df200: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x2df200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_2df204:
    // 0x2df204: 0x10640049  beq         $v1, $a0, . + 4 + (0x49 << 2)
label_2df208:
    if (ctx->pc == 0x2DF208u) {
        ctx->pc = 0x2DF20Cu;
        goto label_2df20c;
    }
    ctx->pc = 0x2DF204u;
    {
        const bool branch_taken_0x2df204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2df204) {
            ctx->pc = 0x2DF32Cu;
            goto label_2df32c;
        }
    }
    ctx->pc = 0x2DF20Cu;
label_2df20c:
    // 0x2df20c: 0x8e840058  lw          $a0, 0x58($s4)
    ctx->pc = 0x2df20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
label_2df210:
    // 0x2df210: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2df214:
    if (ctx->pc == 0x2DF214u) {
        ctx->pc = 0x2DF218u;
        goto label_2df218;
    }
    ctx->pc = 0x2DF210u;
    {
        const bool branch_taken_0x2df210 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df210) {
            ctx->pc = 0x2DF220u;
            goto label_2df220;
        }
    }
    ctx->pc = 0x2DF218u;
label_2df218:
    // 0x2df218: 0xc074a24  jal         func_1D2890
label_2df21c:
    if (ctx->pc == 0x2DF21Cu) {
        ctx->pc = 0x2DF220u;
        goto label_2df220;
    }
    ctx->pc = 0x2DF218u;
    SET_GPR_U32(ctx, 31, 0x2DF220u);
    ctx->pc = 0x1D2890u;
    if (runtime->hasFunction(0x1D2890u)) {
        auto targetFn = runtime->lookupFunction(0x1D2890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF220u; }
        if (ctx->pc != 0x2DF220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2890_0x1d2890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF220u; }
        if (ctx->pc != 0x2DF220u) { return; }
    }
    ctx->pc = 0x2DF220u;
label_2df220:
    // 0x2df220: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2df220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2df224:
    // 0x2df224: 0x3c034336  lui         $v1, 0x4336
    ctx->pc = 0x2df224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17206 << 16));
label_2df228:
    // 0x2df228: 0x8c450ea4  lw          $a1, 0xEA4($v0)
    ctx->pc = 0x2df228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_2df22c:
    // 0x2df22c: 0x34620b60  ori         $v0, $v1, 0xB60
    ctx->pc = 0x2df22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2912);
label_2df230:
    // 0x2df230: 0x8ca30150  lw          $v1, 0x150($a1)
    ctx->pc = 0x2df230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
label_2df234:
    // 0x2df234: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2df234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2df238:
    // 0x2df238: 0xc46000cc  lwc1        $f0, 0xCC($v1)
    ctx->pc = 0x2df238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2df23c:
    // 0x2df23c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2df23cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2df240:
    // 0x2df240: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2df240u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2df244:
    // 0x2df244: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2df244u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2df248:
    // 0x2df248: 0x0  nop
    ctx->pc = 0x2df248u;
    // NOP
label_2df24c:
    // 0x2df24c: 0xae820164  sw          $v0, 0x164($s4)
    ctx->pc = 0x2df24cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 356), GPR_U32(ctx, 2));
label_2df250:
    // 0x2df250: 0xc46000d0  lwc1        $f0, 0xD0($v1)
    ctx->pc = 0x2df250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2df254:
    // 0x2df254: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2df254u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2df258:
    // 0x2df258: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2df258u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2df25c:
    // 0x2df25c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2df25cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2df260:
    // 0x2df260: 0x0  nop
    ctx->pc = 0x2df260u;
    // NOP
label_2df264:
    // 0x2df264: 0xae820168  sw          $v0, 0x168($s4)
    ctx->pc = 0x2df264u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 360), GPR_U32(ctx, 2));
label_2df268:
    // 0x2df268: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x2df268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2df26c:
    // 0x2df26c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2df26cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2df270:
    // 0x2df270: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2df270u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2df274:
    // 0x2df274: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2df274u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2df278:
    // 0x2df278: 0x0  nop
    ctx->pc = 0x2df278u;
    // NOP
label_2df27c:
    // 0x2df27c: 0xae82016c  sw          $v0, 0x16C($s4)
    ctx->pc = 0x2df27cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 364), GPR_U32(ctx, 2));
label_2df280:
    // 0x2df280: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x2df280u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2df284:
    // 0x2df284: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2df284u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2df288:
    // 0x2df288: 0x320f809  jalr        $t9
label_2df28c:
    if (ctx->pc == 0x2DF28Cu) {
        ctx->pc = 0x2DF28Cu;
            // 0x2df28c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DF290u;
        goto label_2df290;
    }
    ctx->pc = 0x2DF288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DF290u);
        ctx->pc = 0x2DF28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF288u;
            // 0x2df28c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DF290u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DF290u; }
            if (ctx->pc != 0x2DF290u) { return; }
        }
        }
    }
    ctx->pc = 0x2DF290u;
label_2df290:
    // 0x2df290: 0x10000026  b           . + 4 + (0x26 << 2)
label_2df294:
    if (ctx->pc == 0x2DF294u) {
        ctx->pc = 0x2DF298u;
        goto label_2df298;
    }
    ctx->pc = 0x2DF290u;
    {
        const bool branch_taken_0x2df290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df290) {
            ctx->pc = 0x2DF32Cu;
            goto label_2df32c;
        }
    }
    ctx->pc = 0x2DF298u;
label_2df298:
    // 0x2df298: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2df298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_2df29c:
    // 0x2df29c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2df29cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2df2a0:
    // 0x2df2a0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x2df2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_2df2a4:
    // 0x2df2a4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2df2a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2df2a8:
    // 0x2df2a8: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x2df2a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2df2ac:
    // 0x2df2ac: 0x8050007a  lb          $s0, 0x7A($v0)
    ctx->pc = 0x2df2acu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 122)));
label_2df2b0:
    // 0x2df2b0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x2df2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_2df2b4:
    // 0x2df2b4: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x2df2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_2df2b8:
    // 0x2df2b8: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x2df2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_2df2bc:
    // 0x2df2bc: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2df2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2df2c0:
    // 0x2df2c0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2df2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_2df2c4:
    // 0x2df2c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2df2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2df2c8:
    // 0x2df2c8: 0xc04ce80  jal         func_133A00
label_2df2cc:
    if (ctx->pc == 0x2DF2CCu) {
        ctx->pc = 0x2DF2CCu;
            // 0x2df2cc: 0x24450200  addiu       $a1, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->pc = 0x2DF2D0u;
        goto label_2df2d0;
    }
    ctx->pc = 0x2DF2C8u;
    SET_GPR_U32(ctx, 31, 0x2DF2D0u);
    ctx->pc = 0x2DF2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF2C8u;
            // 0x2df2cc: 0x24450200  addiu       $a1, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF2D0u; }
        if (ctx->pc != 0x2DF2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF2D0u; }
        if (ctx->pc != 0x2DF2D0u) { return; }
    }
    ctx->pc = 0x2DF2D0u;
label_2df2d0:
    // 0x2df2d0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2df2d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2df2d4:
    // 0x2df2d4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2df2d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_2df2d8:
    // 0x2df2d8: 0x270182b  sltu        $v1, $s3, $s0
    ctx->pc = 0x2df2d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2df2dc:
    // 0x2df2dc: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_2df2e0:
    if (ctx->pc == 0x2DF2E0u) {
        ctx->pc = 0x2DF2E0u;
            // 0x2df2e0: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->pc = 0x2DF2E4u;
        goto label_2df2e4;
    }
    ctx->pc = 0x2DF2DCu;
    {
        const bool branch_taken_0x2df2dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF2DCu;
            // 0x2df2e0: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df2dc) {
            ctx->pc = 0x2DF2B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2df2b0;
        }
    }
    ctx->pc = 0x2DF2E4u;
label_2df2e4:
    // 0x2df2e4: 0x8e840054  lw          $a0, 0x54($s4)
    ctx->pc = 0x2df2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_2df2e8:
    // 0x2df2e8: 0x8e830164  lw          $v1, 0x164($s4)
    ctx->pc = 0x2df2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 356)));
label_2df2ec:
    // 0x2df2ec: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x2df2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_2df2f0:
    // 0x2df2f0: 0x8ca400ac  lw          $a0, 0xAC($a1)
    ctx->pc = 0x2df2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 172)));
label_2df2f4:
    // 0x2df2f4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2df2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2df2f8:
    // 0x2df2f8: 0xaca300ac  sw          $v1, 0xAC($a1)
    ctx->pc = 0x2df2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 172), GPR_U32(ctx, 3));
label_2df2fc:
    // 0x2df2fc: 0x8e840054  lw          $a0, 0x54($s4)
    ctx->pc = 0x2df2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_2df300:
    // 0x2df300: 0x8e830168  lw          $v1, 0x168($s4)
    ctx->pc = 0x2df300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 360)));
label_2df304:
    // 0x2df304: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x2df304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_2df308:
    // 0x2df308: 0x8ca4013c  lw          $a0, 0x13C($a1)
    ctx->pc = 0x2df308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 316)));
label_2df30c:
    // 0x2df30c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2df30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2df310:
    // 0x2df310: 0xaca3013c  sw          $v1, 0x13C($a1)
    ctx->pc = 0x2df310u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 316), GPR_U32(ctx, 3));
label_2df314:
    // 0x2df314: 0x8e840054  lw          $a0, 0x54($s4)
    ctx->pc = 0x2df314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_2df318:
    // 0x2df318: 0x8e83016c  lw          $v1, 0x16C($s4)
    ctx->pc = 0x2df318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 364)));
label_2df31c:
    // 0x2df31c: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x2df31cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_2df320:
    // 0x2df320: 0x8ca401cc  lw          $a0, 0x1CC($a1)
    ctx->pc = 0x2df320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 460)));
label_2df324:
    // 0x2df324: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2df324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2df328:
    // 0x2df328: 0xaca301cc  sw          $v1, 0x1CC($a1)
    ctx->pc = 0x2df328u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 460), GPR_U32(ctx, 3));
label_2df32c:
    // 0x2df32c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2df32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2df330:
    // 0x2df330: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2df330u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2df334:
    // 0x2df334: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2df334u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2df338:
    // 0x2df338: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2df338u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2df33c:
    // 0x2df33c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2df33cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2df340:
    // 0x2df340: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2df340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2df344:
    // 0x2df344: 0x3e00008  jr          $ra
label_2df348:
    if (ctx->pc == 0x2DF348u) {
        ctx->pc = 0x2DF348u;
            // 0x2df348: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2DF34Cu;
        goto label_2df34c;
    }
    ctx->pc = 0x2DF344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF344u;
            // 0x2df348: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DF34Cu;
label_2df34c:
    // 0x2df34c: 0x0  nop
    ctx->pc = 0x2df34cu;
    // NOP
}
