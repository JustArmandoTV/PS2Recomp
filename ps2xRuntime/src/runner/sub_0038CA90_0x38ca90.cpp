#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0038CA90
// Address: 0x38ca90 - 0x38d110
void sub_0038CA90_0x38ca90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038CA90_0x38ca90");
#endif

    switch (ctx->pc) {
        case 0x38ca90u: goto label_38ca90;
        case 0x38ca94u: goto label_38ca94;
        case 0x38ca98u: goto label_38ca98;
        case 0x38ca9cu: goto label_38ca9c;
        case 0x38caa0u: goto label_38caa0;
        case 0x38caa4u: goto label_38caa4;
        case 0x38caa8u: goto label_38caa8;
        case 0x38caacu: goto label_38caac;
        case 0x38cab0u: goto label_38cab0;
        case 0x38cab4u: goto label_38cab4;
        case 0x38cab8u: goto label_38cab8;
        case 0x38cabcu: goto label_38cabc;
        case 0x38cac0u: goto label_38cac0;
        case 0x38cac4u: goto label_38cac4;
        case 0x38cac8u: goto label_38cac8;
        case 0x38caccu: goto label_38cacc;
        case 0x38cad0u: goto label_38cad0;
        case 0x38cad4u: goto label_38cad4;
        case 0x38cad8u: goto label_38cad8;
        case 0x38cadcu: goto label_38cadc;
        case 0x38cae0u: goto label_38cae0;
        case 0x38cae4u: goto label_38cae4;
        case 0x38cae8u: goto label_38cae8;
        case 0x38caecu: goto label_38caec;
        case 0x38caf0u: goto label_38caf0;
        case 0x38caf4u: goto label_38caf4;
        case 0x38caf8u: goto label_38caf8;
        case 0x38cafcu: goto label_38cafc;
        case 0x38cb00u: goto label_38cb00;
        case 0x38cb04u: goto label_38cb04;
        case 0x38cb08u: goto label_38cb08;
        case 0x38cb0cu: goto label_38cb0c;
        case 0x38cb10u: goto label_38cb10;
        case 0x38cb14u: goto label_38cb14;
        case 0x38cb18u: goto label_38cb18;
        case 0x38cb1cu: goto label_38cb1c;
        case 0x38cb20u: goto label_38cb20;
        case 0x38cb24u: goto label_38cb24;
        case 0x38cb28u: goto label_38cb28;
        case 0x38cb2cu: goto label_38cb2c;
        case 0x38cb30u: goto label_38cb30;
        case 0x38cb34u: goto label_38cb34;
        case 0x38cb38u: goto label_38cb38;
        case 0x38cb3cu: goto label_38cb3c;
        case 0x38cb40u: goto label_38cb40;
        case 0x38cb44u: goto label_38cb44;
        case 0x38cb48u: goto label_38cb48;
        case 0x38cb4cu: goto label_38cb4c;
        case 0x38cb50u: goto label_38cb50;
        case 0x38cb54u: goto label_38cb54;
        case 0x38cb58u: goto label_38cb58;
        case 0x38cb5cu: goto label_38cb5c;
        case 0x38cb60u: goto label_38cb60;
        case 0x38cb64u: goto label_38cb64;
        case 0x38cb68u: goto label_38cb68;
        case 0x38cb6cu: goto label_38cb6c;
        case 0x38cb70u: goto label_38cb70;
        case 0x38cb74u: goto label_38cb74;
        case 0x38cb78u: goto label_38cb78;
        case 0x38cb7cu: goto label_38cb7c;
        case 0x38cb80u: goto label_38cb80;
        case 0x38cb84u: goto label_38cb84;
        case 0x38cb88u: goto label_38cb88;
        case 0x38cb8cu: goto label_38cb8c;
        case 0x38cb90u: goto label_38cb90;
        case 0x38cb94u: goto label_38cb94;
        case 0x38cb98u: goto label_38cb98;
        case 0x38cb9cu: goto label_38cb9c;
        case 0x38cba0u: goto label_38cba0;
        case 0x38cba4u: goto label_38cba4;
        case 0x38cba8u: goto label_38cba8;
        case 0x38cbacu: goto label_38cbac;
        case 0x38cbb0u: goto label_38cbb0;
        case 0x38cbb4u: goto label_38cbb4;
        case 0x38cbb8u: goto label_38cbb8;
        case 0x38cbbcu: goto label_38cbbc;
        case 0x38cbc0u: goto label_38cbc0;
        case 0x38cbc4u: goto label_38cbc4;
        case 0x38cbc8u: goto label_38cbc8;
        case 0x38cbccu: goto label_38cbcc;
        case 0x38cbd0u: goto label_38cbd0;
        case 0x38cbd4u: goto label_38cbd4;
        case 0x38cbd8u: goto label_38cbd8;
        case 0x38cbdcu: goto label_38cbdc;
        case 0x38cbe0u: goto label_38cbe0;
        case 0x38cbe4u: goto label_38cbe4;
        case 0x38cbe8u: goto label_38cbe8;
        case 0x38cbecu: goto label_38cbec;
        case 0x38cbf0u: goto label_38cbf0;
        case 0x38cbf4u: goto label_38cbf4;
        case 0x38cbf8u: goto label_38cbf8;
        case 0x38cbfcu: goto label_38cbfc;
        case 0x38cc00u: goto label_38cc00;
        case 0x38cc04u: goto label_38cc04;
        case 0x38cc08u: goto label_38cc08;
        case 0x38cc0cu: goto label_38cc0c;
        case 0x38cc10u: goto label_38cc10;
        case 0x38cc14u: goto label_38cc14;
        case 0x38cc18u: goto label_38cc18;
        case 0x38cc1cu: goto label_38cc1c;
        case 0x38cc20u: goto label_38cc20;
        case 0x38cc24u: goto label_38cc24;
        case 0x38cc28u: goto label_38cc28;
        case 0x38cc2cu: goto label_38cc2c;
        case 0x38cc30u: goto label_38cc30;
        case 0x38cc34u: goto label_38cc34;
        case 0x38cc38u: goto label_38cc38;
        case 0x38cc3cu: goto label_38cc3c;
        case 0x38cc40u: goto label_38cc40;
        case 0x38cc44u: goto label_38cc44;
        case 0x38cc48u: goto label_38cc48;
        case 0x38cc4cu: goto label_38cc4c;
        case 0x38cc50u: goto label_38cc50;
        case 0x38cc54u: goto label_38cc54;
        case 0x38cc58u: goto label_38cc58;
        case 0x38cc5cu: goto label_38cc5c;
        case 0x38cc60u: goto label_38cc60;
        case 0x38cc64u: goto label_38cc64;
        case 0x38cc68u: goto label_38cc68;
        case 0x38cc6cu: goto label_38cc6c;
        case 0x38cc70u: goto label_38cc70;
        case 0x38cc74u: goto label_38cc74;
        case 0x38cc78u: goto label_38cc78;
        case 0x38cc7cu: goto label_38cc7c;
        case 0x38cc80u: goto label_38cc80;
        case 0x38cc84u: goto label_38cc84;
        case 0x38cc88u: goto label_38cc88;
        case 0x38cc8cu: goto label_38cc8c;
        case 0x38cc90u: goto label_38cc90;
        case 0x38cc94u: goto label_38cc94;
        case 0x38cc98u: goto label_38cc98;
        case 0x38cc9cu: goto label_38cc9c;
        case 0x38cca0u: goto label_38cca0;
        case 0x38cca4u: goto label_38cca4;
        case 0x38cca8u: goto label_38cca8;
        case 0x38ccacu: goto label_38ccac;
        case 0x38ccb0u: goto label_38ccb0;
        case 0x38ccb4u: goto label_38ccb4;
        case 0x38ccb8u: goto label_38ccb8;
        case 0x38ccbcu: goto label_38ccbc;
        case 0x38ccc0u: goto label_38ccc0;
        case 0x38ccc4u: goto label_38ccc4;
        case 0x38ccc8u: goto label_38ccc8;
        case 0x38ccccu: goto label_38cccc;
        case 0x38ccd0u: goto label_38ccd0;
        case 0x38ccd4u: goto label_38ccd4;
        case 0x38ccd8u: goto label_38ccd8;
        case 0x38ccdcu: goto label_38ccdc;
        case 0x38cce0u: goto label_38cce0;
        case 0x38cce4u: goto label_38cce4;
        case 0x38cce8u: goto label_38cce8;
        case 0x38ccecu: goto label_38ccec;
        case 0x38ccf0u: goto label_38ccf0;
        case 0x38ccf4u: goto label_38ccf4;
        case 0x38ccf8u: goto label_38ccf8;
        case 0x38ccfcu: goto label_38ccfc;
        case 0x38cd00u: goto label_38cd00;
        case 0x38cd04u: goto label_38cd04;
        case 0x38cd08u: goto label_38cd08;
        case 0x38cd0cu: goto label_38cd0c;
        case 0x38cd10u: goto label_38cd10;
        case 0x38cd14u: goto label_38cd14;
        case 0x38cd18u: goto label_38cd18;
        case 0x38cd1cu: goto label_38cd1c;
        case 0x38cd20u: goto label_38cd20;
        case 0x38cd24u: goto label_38cd24;
        case 0x38cd28u: goto label_38cd28;
        case 0x38cd2cu: goto label_38cd2c;
        case 0x38cd30u: goto label_38cd30;
        case 0x38cd34u: goto label_38cd34;
        case 0x38cd38u: goto label_38cd38;
        case 0x38cd3cu: goto label_38cd3c;
        case 0x38cd40u: goto label_38cd40;
        case 0x38cd44u: goto label_38cd44;
        case 0x38cd48u: goto label_38cd48;
        case 0x38cd4cu: goto label_38cd4c;
        case 0x38cd50u: goto label_38cd50;
        case 0x38cd54u: goto label_38cd54;
        case 0x38cd58u: goto label_38cd58;
        case 0x38cd5cu: goto label_38cd5c;
        case 0x38cd60u: goto label_38cd60;
        case 0x38cd64u: goto label_38cd64;
        case 0x38cd68u: goto label_38cd68;
        case 0x38cd6cu: goto label_38cd6c;
        case 0x38cd70u: goto label_38cd70;
        case 0x38cd74u: goto label_38cd74;
        case 0x38cd78u: goto label_38cd78;
        case 0x38cd7cu: goto label_38cd7c;
        case 0x38cd80u: goto label_38cd80;
        case 0x38cd84u: goto label_38cd84;
        case 0x38cd88u: goto label_38cd88;
        case 0x38cd8cu: goto label_38cd8c;
        case 0x38cd90u: goto label_38cd90;
        case 0x38cd94u: goto label_38cd94;
        case 0x38cd98u: goto label_38cd98;
        case 0x38cd9cu: goto label_38cd9c;
        case 0x38cda0u: goto label_38cda0;
        case 0x38cda4u: goto label_38cda4;
        case 0x38cda8u: goto label_38cda8;
        case 0x38cdacu: goto label_38cdac;
        case 0x38cdb0u: goto label_38cdb0;
        case 0x38cdb4u: goto label_38cdb4;
        case 0x38cdb8u: goto label_38cdb8;
        case 0x38cdbcu: goto label_38cdbc;
        case 0x38cdc0u: goto label_38cdc0;
        case 0x38cdc4u: goto label_38cdc4;
        case 0x38cdc8u: goto label_38cdc8;
        case 0x38cdccu: goto label_38cdcc;
        case 0x38cdd0u: goto label_38cdd0;
        case 0x38cdd4u: goto label_38cdd4;
        case 0x38cdd8u: goto label_38cdd8;
        case 0x38cddcu: goto label_38cddc;
        case 0x38cde0u: goto label_38cde0;
        case 0x38cde4u: goto label_38cde4;
        case 0x38cde8u: goto label_38cde8;
        case 0x38cdecu: goto label_38cdec;
        case 0x38cdf0u: goto label_38cdf0;
        case 0x38cdf4u: goto label_38cdf4;
        case 0x38cdf8u: goto label_38cdf8;
        case 0x38cdfcu: goto label_38cdfc;
        case 0x38ce00u: goto label_38ce00;
        case 0x38ce04u: goto label_38ce04;
        case 0x38ce08u: goto label_38ce08;
        case 0x38ce0cu: goto label_38ce0c;
        case 0x38ce10u: goto label_38ce10;
        case 0x38ce14u: goto label_38ce14;
        case 0x38ce18u: goto label_38ce18;
        case 0x38ce1cu: goto label_38ce1c;
        case 0x38ce20u: goto label_38ce20;
        case 0x38ce24u: goto label_38ce24;
        case 0x38ce28u: goto label_38ce28;
        case 0x38ce2cu: goto label_38ce2c;
        case 0x38ce30u: goto label_38ce30;
        case 0x38ce34u: goto label_38ce34;
        case 0x38ce38u: goto label_38ce38;
        case 0x38ce3cu: goto label_38ce3c;
        case 0x38ce40u: goto label_38ce40;
        case 0x38ce44u: goto label_38ce44;
        case 0x38ce48u: goto label_38ce48;
        case 0x38ce4cu: goto label_38ce4c;
        case 0x38ce50u: goto label_38ce50;
        case 0x38ce54u: goto label_38ce54;
        case 0x38ce58u: goto label_38ce58;
        case 0x38ce5cu: goto label_38ce5c;
        case 0x38ce60u: goto label_38ce60;
        case 0x38ce64u: goto label_38ce64;
        case 0x38ce68u: goto label_38ce68;
        case 0x38ce6cu: goto label_38ce6c;
        case 0x38ce70u: goto label_38ce70;
        case 0x38ce74u: goto label_38ce74;
        case 0x38ce78u: goto label_38ce78;
        case 0x38ce7cu: goto label_38ce7c;
        case 0x38ce80u: goto label_38ce80;
        case 0x38ce84u: goto label_38ce84;
        case 0x38ce88u: goto label_38ce88;
        case 0x38ce8cu: goto label_38ce8c;
        case 0x38ce90u: goto label_38ce90;
        case 0x38ce94u: goto label_38ce94;
        case 0x38ce98u: goto label_38ce98;
        case 0x38ce9cu: goto label_38ce9c;
        case 0x38cea0u: goto label_38cea0;
        case 0x38cea4u: goto label_38cea4;
        case 0x38cea8u: goto label_38cea8;
        case 0x38ceacu: goto label_38ceac;
        case 0x38ceb0u: goto label_38ceb0;
        case 0x38ceb4u: goto label_38ceb4;
        case 0x38ceb8u: goto label_38ceb8;
        case 0x38cebcu: goto label_38cebc;
        case 0x38cec0u: goto label_38cec0;
        case 0x38cec4u: goto label_38cec4;
        case 0x38cec8u: goto label_38cec8;
        case 0x38ceccu: goto label_38cecc;
        case 0x38ced0u: goto label_38ced0;
        case 0x38ced4u: goto label_38ced4;
        case 0x38ced8u: goto label_38ced8;
        case 0x38cedcu: goto label_38cedc;
        case 0x38cee0u: goto label_38cee0;
        case 0x38cee4u: goto label_38cee4;
        case 0x38cee8u: goto label_38cee8;
        case 0x38ceecu: goto label_38ceec;
        case 0x38cef0u: goto label_38cef0;
        case 0x38cef4u: goto label_38cef4;
        case 0x38cef8u: goto label_38cef8;
        case 0x38cefcu: goto label_38cefc;
        case 0x38cf00u: goto label_38cf00;
        case 0x38cf04u: goto label_38cf04;
        case 0x38cf08u: goto label_38cf08;
        case 0x38cf0cu: goto label_38cf0c;
        case 0x38cf10u: goto label_38cf10;
        case 0x38cf14u: goto label_38cf14;
        case 0x38cf18u: goto label_38cf18;
        case 0x38cf1cu: goto label_38cf1c;
        case 0x38cf20u: goto label_38cf20;
        case 0x38cf24u: goto label_38cf24;
        case 0x38cf28u: goto label_38cf28;
        case 0x38cf2cu: goto label_38cf2c;
        case 0x38cf30u: goto label_38cf30;
        case 0x38cf34u: goto label_38cf34;
        case 0x38cf38u: goto label_38cf38;
        case 0x38cf3cu: goto label_38cf3c;
        case 0x38cf40u: goto label_38cf40;
        case 0x38cf44u: goto label_38cf44;
        case 0x38cf48u: goto label_38cf48;
        case 0x38cf4cu: goto label_38cf4c;
        case 0x38cf50u: goto label_38cf50;
        case 0x38cf54u: goto label_38cf54;
        case 0x38cf58u: goto label_38cf58;
        case 0x38cf5cu: goto label_38cf5c;
        case 0x38cf60u: goto label_38cf60;
        case 0x38cf64u: goto label_38cf64;
        case 0x38cf68u: goto label_38cf68;
        case 0x38cf6cu: goto label_38cf6c;
        case 0x38cf70u: goto label_38cf70;
        case 0x38cf74u: goto label_38cf74;
        case 0x38cf78u: goto label_38cf78;
        case 0x38cf7cu: goto label_38cf7c;
        case 0x38cf80u: goto label_38cf80;
        case 0x38cf84u: goto label_38cf84;
        case 0x38cf88u: goto label_38cf88;
        case 0x38cf8cu: goto label_38cf8c;
        case 0x38cf90u: goto label_38cf90;
        case 0x38cf94u: goto label_38cf94;
        case 0x38cf98u: goto label_38cf98;
        case 0x38cf9cu: goto label_38cf9c;
        case 0x38cfa0u: goto label_38cfa0;
        case 0x38cfa4u: goto label_38cfa4;
        case 0x38cfa8u: goto label_38cfa8;
        case 0x38cfacu: goto label_38cfac;
        case 0x38cfb0u: goto label_38cfb0;
        case 0x38cfb4u: goto label_38cfb4;
        case 0x38cfb8u: goto label_38cfb8;
        case 0x38cfbcu: goto label_38cfbc;
        case 0x38cfc0u: goto label_38cfc0;
        case 0x38cfc4u: goto label_38cfc4;
        case 0x38cfc8u: goto label_38cfc8;
        case 0x38cfccu: goto label_38cfcc;
        case 0x38cfd0u: goto label_38cfd0;
        case 0x38cfd4u: goto label_38cfd4;
        case 0x38cfd8u: goto label_38cfd8;
        case 0x38cfdcu: goto label_38cfdc;
        case 0x38cfe0u: goto label_38cfe0;
        case 0x38cfe4u: goto label_38cfe4;
        case 0x38cfe8u: goto label_38cfe8;
        case 0x38cfecu: goto label_38cfec;
        case 0x38cff0u: goto label_38cff0;
        case 0x38cff4u: goto label_38cff4;
        case 0x38cff8u: goto label_38cff8;
        case 0x38cffcu: goto label_38cffc;
        case 0x38d000u: goto label_38d000;
        case 0x38d004u: goto label_38d004;
        case 0x38d008u: goto label_38d008;
        case 0x38d00cu: goto label_38d00c;
        case 0x38d010u: goto label_38d010;
        case 0x38d014u: goto label_38d014;
        case 0x38d018u: goto label_38d018;
        case 0x38d01cu: goto label_38d01c;
        case 0x38d020u: goto label_38d020;
        case 0x38d024u: goto label_38d024;
        case 0x38d028u: goto label_38d028;
        case 0x38d02cu: goto label_38d02c;
        case 0x38d030u: goto label_38d030;
        case 0x38d034u: goto label_38d034;
        case 0x38d038u: goto label_38d038;
        case 0x38d03cu: goto label_38d03c;
        case 0x38d040u: goto label_38d040;
        case 0x38d044u: goto label_38d044;
        case 0x38d048u: goto label_38d048;
        case 0x38d04cu: goto label_38d04c;
        case 0x38d050u: goto label_38d050;
        case 0x38d054u: goto label_38d054;
        case 0x38d058u: goto label_38d058;
        case 0x38d05cu: goto label_38d05c;
        case 0x38d060u: goto label_38d060;
        case 0x38d064u: goto label_38d064;
        case 0x38d068u: goto label_38d068;
        case 0x38d06cu: goto label_38d06c;
        case 0x38d070u: goto label_38d070;
        case 0x38d074u: goto label_38d074;
        case 0x38d078u: goto label_38d078;
        case 0x38d07cu: goto label_38d07c;
        case 0x38d080u: goto label_38d080;
        case 0x38d084u: goto label_38d084;
        case 0x38d088u: goto label_38d088;
        case 0x38d08cu: goto label_38d08c;
        case 0x38d090u: goto label_38d090;
        case 0x38d094u: goto label_38d094;
        case 0x38d098u: goto label_38d098;
        case 0x38d09cu: goto label_38d09c;
        case 0x38d0a0u: goto label_38d0a0;
        case 0x38d0a4u: goto label_38d0a4;
        case 0x38d0a8u: goto label_38d0a8;
        case 0x38d0acu: goto label_38d0ac;
        case 0x38d0b0u: goto label_38d0b0;
        case 0x38d0b4u: goto label_38d0b4;
        case 0x38d0b8u: goto label_38d0b8;
        case 0x38d0bcu: goto label_38d0bc;
        case 0x38d0c0u: goto label_38d0c0;
        case 0x38d0c4u: goto label_38d0c4;
        case 0x38d0c8u: goto label_38d0c8;
        case 0x38d0ccu: goto label_38d0cc;
        case 0x38d0d0u: goto label_38d0d0;
        case 0x38d0d4u: goto label_38d0d4;
        case 0x38d0d8u: goto label_38d0d8;
        case 0x38d0dcu: goto label_38d0dc;
        case 0x38d0e0u: goto label_38d0e0;
        case 0x38d0e4u: goto label_38d0e4;
        case 0x38d0e8u: goto label_38d0e8;
        case 0x38d0ecu: goto label_38d0ec;
        case 0x38d0f0u: goto label_38d0f0;
        case 0x38d0f4u: goto label_38d0f4;
        case 0x38d0f8u: goto label_38d0f8;
        case 0x38d0fcu: goto label_38d0fc;
        case 0x38d100u: goto label_38d100;
        case 0x38d104u: goto label_38d104;
        case 0x38d108u: goto label_38d108;
        case 0x38d10cu: goto label_38d10c;
        default: break;
    }

    ctx->pc = 0x38ca90u;

label_38ca90:
    // 0x38ca90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38ca90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_38ca94:
    // 0x38ca94: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x38ca94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_38ca98:
    // 0x38ca98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38ca98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_38ca9c:
    // 0x38ca9c: 0x10a3001d  beq         $a1, $v1, . + 4 + (0x1D << 2)
label_38caa0:
    if (ctx->pc == 0x38CAA0u) {
        ctx->pc = 0x38CAA0u;
            // 0x38caa0: 0xac8500ac  sw          $a1, 0xAC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 5));
        ctx->pc = 0x38CAA4u;
        goto label_38caa4;
    }
    ctx->pc = 0x38CA9Cu;
    {
        const bool branch_taken_0x38ca9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x38CAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38CA9Cu;
            // 0x38caa0: 0xac8500ac  sw          $a1, 0xAC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ca9c) {
            ctx->pc = 0x38CB14u;
            goto label_38cb14;
        }
    }
    ctx->pc = 0x38CAA4u;
label_38caa4:
    // 0x38caa4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x38caa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_38caa8:
    // 0x38caa8: 0x50a30015  beql        $a1, $v1, . + 4 + (0x15 << 2)
label_38caac:
    if (ctx->pc == 0x38CAACu) {
        ctx->pc = 0x38CAACu;
            // 0x38caac: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x38CAB0u;
        goto label_38cab0;
    }
    ctx->pc = 0x38CAA8u;
    {
        const bool branch_taken_0x38caa8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x38caa8) {
            ctx->pc = 0x38CAACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38CAA8u;
            // 0x38caac: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38CB00u;
            goto label_38cb00;
        }
    }
    ctx->pc = 0x38CAB0u;
label_38cab0:
    // 0x38cab0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x38cab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38cab4:
    // 0x38cab4: 0x50a3000d  beql        $a1, $v1, . + 4 + (0xD << 2)
label_38cab8:
    if (ctx->pc == 0x38CAB8u) {
        ctx->pc = 0x38CAB8u;
            // 0x38cab8: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x38CABCu;
        goto label_38cabc;
    }
    ctx->pc = 0x38CAB4u;
    {
        const bool branch_taken_0x38cab4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x38cab4) {
            ctx->pc = 0x38CAB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38CAB4u;
            // 0x38cab8: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38CAECu;
            goto label_38caec;
        }
    }
    ctx->pc = 0x38CABCu;
label_38cabc:
    // 0x38cabc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38cabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38cac0:
    // 0x38cac0: 0x50a30005  beql        $a1, $v1, . + 4 + (0x5 << 2)
label_38cac4:
    if (ctx->pc == 0x38CAC4u) {
        ctx->pc = 0x38CAC4u;
            // 0x38cac4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x38CAC8u;
        goto label_38cac8;
    }
    ctx->pc = 0x38CAC0u;
    {
        const bool branch_taken_0x38cac0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x38cac0) {
            ctx->pc = 0x38CAC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38CAC0u;
            // 0x38cac4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38CAD8u;
            goto label_38cad8;
        }
    }
    ctx->pc = 0x38CAC8u;
label_38cac8:
    // 0x38cac8: 0x50a00016  beql        $a1, $zero, . + 4 + (0x16 << 2)
label_38cacc:
    if (ctx->pc == 0x38CACCu) {
        ctx->pc = 0x38CACCu;
            // 0x38cacc: 0xac8000c0  sw          $zero, 0xC0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 0));
        ctx->pc = 0x38CAD0u;
        goto label_38cad0;
    }
    ctx->pc = 0x38CAC8u;
    {
        const bool branch_taken_0x38cac8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x38cac8) {
            ctx->pc = 0x38CACCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38CAC8u;
            // 0x38cacc: 0xac8000c0  sw          $zero, 0xC0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38CB24u;
            goto label_38cb24;
        }
    }
    ctx->pc = 0x38CAD0u;
label_38cad0:
    // 0x38cad0: 0x10000015  b           . + 4 + (0x15 << 2)
label_38cad4:
    if (ctx->pc == 0x38CAD4u) {
        ctx->pc = 0x38CAD4u;
            // 0x38cad4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x38CAD8u;
        goto label_38cad8;
    }
    ctx->pc = 0x38CAD0u;
    {
        const bool branch_taken_0x38cad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38CAD0u;
            // 0x38cad4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cad0) {
            ctx->pc = 0x38CB28u;
            goto label_38cb28;
        }
    }
    ctx->pc = 0x38CAD8u;
label_38cad8:
    // 0x38cad8: 0x8f390084  lw          $t9, 0x84($t9)
    ctx->pc = 0x38cad8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 132)));
label_38cadc:
    // 0x38cadc: 0x320f809  jalr        $t9
label_38cae0:
    if (ctx->pc == 0x38CAE0u) {
        ctx->pc = 0x38CAE4u;
        goto label_38cae4;
    }
    ctx->pc = 0x38CADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38CAE4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x38CAE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38CAE4u; }
            if (ctx->pc != 0x38CAE4u) { return; }
        }
        }
    }
    ctx->pc = 0x38CAE4u;
label_38cae4:
    // 0x38cae4: 0x1000000f  b           . + 4 + (0xF << 2)
label_38cae8:
    if (ctx->pc == 0x38CAE8u) {
        ctx->pc = 0x38CAECu;
        goto label_38caec;
    }
    ctx->pc = 0x38CAE4u;
    {
        const bool branch_taken_0x38cae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38cae4) {
            ctx->pc = 0x38CB24u;
            goto label_38cb24;
        }
    }
    ctx->pc = 0x38CAECu;
label_38caec:
    // 0x38caec: 0x8f390088  lw          $t9, 0x88($t9)
    ctx->pc = 0x38caecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 136)));
label_38caf0:
    // 0x38caf0: 0x320f809  jalr        $t9
label_38caf4:
    if (ctx->pc == 0x38CAF4u) {
        ctx->pc = 0x38CAF8u;
        goto label_38caf8;
    }
    ctx->pc = 0x38CAF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38CAF8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x38CAF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38CAF8u; }
            if (ctx->pc != 0x38CAF8u) { return; }
        }
        }
    }
    ctx->pc = 0x38CAF8u;
label_38caf8:
    // 0x38caf8: 0x1000000a  b           . + 4 + (0xA << 2)
label_38cafc:
    if (ctx->pc == 0x38CAFCu) {
        ctx->pc = 0x38CB00u;
        goto label_38cb00;
    }
    ctx->pc = 0x38CAF8u;
    {
        const bool branch_taken_0x38caf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38caf8) {
            ctx->pc = 0x38CB24u;
            goto label_38cb24;
        }
    }
    ctx->pc = 0x38CB00u;
label_38cb00:
    // 0x38cb00: 0x8f39008c  lw          $t9, 0x8C($t9)
    ctx->pc = 0x38cb00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 140)));
label_38cb04:
    // 0x38cb04: 0x320f809  jalr        $t9
label_38cb08:
    if (ctx->pc == 0x38CB08u) {
        ctx->pc = 0x38CB0Cu;
        goto label_38cb0c;
    }
    ctx->pc = 0x38CB04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38CB0Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x38CB0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38CB0Cu; }
            if (ctx->pc != 0x38CB0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x38CB0Cu;
label_38cb0c:
    // 0x38cb0c: 0x10000005  b           . + 4 + (0x5 << 2)
label_38cb10:
    if (ctx->pc == 0x38CB10u) {
        ctx->pc = 0x38CB14u;
        goto label_38cb14;
    }
    ctx->pc = 0x38CB0Cu;
    {
        const bool branch_taken_0x38cb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38cb0c) {
            ctx->pc = 0x38CB24u;
            goto label_38cb24;
        }
    }
    ctx->pc = 0x38CB14u;
label_38cb14:
    // 0x38cb14: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x38cb14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_38cb18:
    // 0x38cb18: 0x8f390090  lw          $t9, 0x90($t9)
    ctx->pc = 0x38cb18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 144)));
label_38cb1c:
    // 0x38cb1c: 0x320f809  jalr        $t9
label_38cb20:
    if (ctx->pc == 0x38CB20u) {
        ctx->pc = 0x38CB24u;
        goto label_38cb24;
    }
    ctx->pc = 0x38CB1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38CB24u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x38CB24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38CB24u; }
            if (ctx->pc != 0x38CB24u) { return; }
        }
        }
    }
    ctx->pc = 0x38CB24u;
label_38cb24:
    // 0x38cb24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38cb24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38cb28:
    // 0x38cb28: 0x3e00008  jr          $ra
label_38cb2c:
    if (ctx->pc == 0x38CB2Cu) {
        ctx->pc = 0x38CB2Cu;
            // 0x38cb2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x38CB30u;
        goto label_38cb30;
    }
    ctx->pc = 0x38CB28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38CB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38CB28u;
            // 0x38cb2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38CB30u;
label_38cb30:
    // 0x38cb30: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x38cb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_38cb34:
    // 0x38cb34: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x38cb34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
label_38cb38:
    // 0x38cb38: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x38cb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_38cb3c:
    // 0x38cb3c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38cb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38cb40:
    // 0x38cb40: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x38cb40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_38cb44:
    // 0x38cb44: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x38cb44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38cb48:
    // 0x38cb48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38cb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_38cb4c:
    // 0x38cb4c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x38cb4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38cb50:
    // 0x38cb50: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x38cb50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_38cb54:
    // 0x38cb54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x38cb54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38cb58:
    // 0x38cb58: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x38cb58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_38cb5c:
    // 0x38cb5c: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x38cb5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_38cb60:
    // 0x38cb60: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x38cb60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_38cb64:
    // 0x38cb64: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x38cb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_38cb68:
    // 0x38cb68: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x38cb68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_38cb6c:
    // 0x38cb6c: 0xc08bff0  jal         func_22FFC0
label_38cb70:
    if (ctx->pc == 0x38CB70u) {
        ctx->pc = 0x38CB70u;
            // 0x38cb70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38CB74u;
        goto label_38cb74;
    }
    ctx->pc = 0x38CB6Cu;
    SET_GPR_U32(ctx, 31, 0x38CB74u);
    ctx->pc = 0x38CB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38CB6Cu;
            // 0x38cb70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38CB74u; }
        if (ctx->pc != 0x38CB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38CB74u; }
        if (ctx->pc != 0x38CB74u) { return; }
    }
    ctx->pc = 0x38CB74u;
label_38cb74:
    // 0x38cb74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x38cb74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38cb78:
    // 0x38cb78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38cb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38cb7c:
    // 0x38cb7c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x38cb7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38cb80:
    // 0x38cb80: 0xc08914c  jal         func_224530
label_38cb84:
    if (ctx->pc == 0x38CB84u) {
        ctx->pc = 0x38CB84u;
            // 0x38cb84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38CB88u;
        goto label_38cb88;
    }
    ctx->pc = 0x38CB80u;
    SET_GPR_U32(ctx, 31, 0x38CB88u);
    ctx->pc = 0x38CB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38CB80u;
            // 0x38cb84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38CB88u; }
        if (ctx->pc != 0x38CB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38CB88u; }
        if (ctx->pc != 0x38CB88u) { return; }
    }
    ctx->pc = 0x38CB88u;
label_38cb88:
    // 0x38cb88: 0xc0754b4  jal         func_1D52D0
label_38cb8c:
    if (ctx->pc == 0x38CB8Cu) {
        ctx->pc = 0x38CB8Cu;
            // 0x38cb8c: 0x26240440  addiu       $a0, $s1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
        ctx->pc = 0x38CB90u;
        goto label_38cb90;
    }
    ctx->pc = 0x38CB88u;
    SET_GPR_U32(ctx, 31, 0x38CB90u);
    ctx->pc = 0x38CB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38CB88u;
            // 0x38cb8c: 0x26240440  addiu       $a0, $s1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38CB90u; }
        if (ctx->pc != 0x38CB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38CB90u; }
        if (ctx->pc != 0x38CB90u) { return; }
    }
    ctx->pc = 0x38CB90u;
label_38cb90:
    // 0x38cb90: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x38cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_38cb94:
    // 0x38cb94: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x38cb94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_38cb98:
    // 0x38cb98: 0x5040007a  beql        $v0, $zero, . + 4 + (0x7A << 2)
label_38cb9c:
    if (ctx->pc == 0x38CB9Cu) {
        ctx->pc = 0x38CB9Cu;
            // 0x38cb9c: 0x3c023ecc  lui         $v0, 0x3ECC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
        ctx->pc = 0x38CBA0u;
        goto label_38cba0;
    }
    ctx->pc = 0x38CB98u;
    {
        const bool branch_taken_0x38cb98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38cb98) {
            ctx->pc = 0x38CB9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38CB98u;
            // 0x38cb9c: 0x3c023ecc  lui         $v0, 0x3ECC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38CD84u;
            goto label_38cd84;
        }
    }
    ctx->pc = 0x38CBA0u;
label_38cba0:
    // 0x38cba0: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x38cba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
label_38cba4:
    // 0x38cba4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x38cba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_38cba8:
    // 0x38cba8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x38cba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38cbac:
    // 0x38cbac: 0x26250820  addiu       $a1, $s1, 0x820
    ctx->pc = 0x38cbacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2080));
label_38cbb0:
    // 0x38cbb0: 0xc04cc7c  jal         func_1331F0
label_38cbb4:
    if (ctx->pc == 0x38CBB4u) {
        ctx->pc = 0x38CBB4u;
            // 0x38cbb4: 0x262602e0  addiu       $a2, $s1, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
        ctx->pc = 0x38CBB8u;
        goto label_38cbb8;
    }
    ctx->pc = 0x38CBB0u;
    SET_GPR_U32(ctx, 31, 0x38CBB8u);
    ctx->pc = 0x38CBB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38CBB0u;
            // 0x38cbb4: 0x262602e0  addiu       $a2, $s1, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38CBB8u; }
        if (ctx->pc != 0x38CBB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38CBB8u; }
        if (ctx->pc != 0x38CBB8u) { return; }
    }
    ctx->pc = 0x38CBB8u;
label_38cbb8:
    // 0x38cbb8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x38cbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_38cbbc:
    // 0x38cbbc: 0xc04cc44  jal         func_133110
label_38cbc0:
    if (ctx->pc == 0x38CBC0u) {
        ctx->pc = 0x38CBC0u;
            // 0x38cbc0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38CBC4u;
        goto label_38cbc4;
    }
    ctx->pc = 0x38CBBCu;
    SET_GPR_U32(ctx, 31, 0x38CBC4u);
    ctx->pc = 0x38CBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38CBBCu;
            // 0x38cbc0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38CBC4u; }
        if (ctx->pc != 0x38CBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38CBC4u; }
        if (ctx->pc != 0x38CBC4u) { return; }
    }
    ctx->pc = 0x38CBC4u;
label_38cbc4:
    // 0x38cbc4: 0x3c023fed  lui         $v0, 0x3FED
    ctx->pc = 0x38cbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16365 << 16));
label_38cbc8:
    // 0x38cbc8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x38cbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_38cbcc:
    // 0x38cbcc: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x38cbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_38cbd0:
    // 0x38cbd0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x38cbd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38cbd4:
    // 0x38cbd4: 0xc04cc70  jal         func_1331C0
label_38cbd8:
    if (ctx->pc == 0x38CBD8u) {
        ctx->pc = 0x38CBD8u;
            // 0x38cbd8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x38CBDCu;
        goto label_38cbdc;
    }
    ctx->pc = 0x38CBD4u;
    SET_GPR_U32(ctx, 31, 0x38CBDCu);
    ctx->pc = 0x38CBD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38CBD4u;
            // 0x38cbd8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38CBDCu; }
        if (ctx->pc != 0x38CBDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38CBDCu; }
        if (ctx->pc != 0x38CBDCu) { return; }
    }
    ctx->pc = 0x38CBDCu;
label_38cbdc:
    // 0x38cbdc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38cbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38cbe0:
    // 0x38cbe0: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x38cbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_38cbe4:
    // 0x38cbe4: 0x8c43e3e0  lw          $v1, -0x1C20($v0)
    ctx->pc = 0x38cbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_38cbe8:
    // 0x38cbe8: 0xc7a60080  lwc1        $f6, 0x80($sp)
    ctx->pc = 0x38cbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_38cbec:
    // 0x38cbec: 0xc7a50084  lwc1        $f5, 0x84($sp)
    ctx->pc = 0x38cbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_38cbf0:
    // 0x38cbf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38cbf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38cbf4:
    // 0x38cbf4: 0xc7a40088  lwc1        $f4, 0x88($sp)
    ctx->pc = 0x38cbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_38cbf8:
    // 0x38cbf8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x38cbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_38cbfc:
    // 0x38cbfc: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x38cbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_38cc00:
    // 0x38cc00: 0xe7a60060  swc1        $f6, 0x60($sp)
    ctx->pc = 0x38cc00u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_38cc04:
    // 0x38cc04: 0xe7a50064  swc1        $f5, 0x64($sp)
    ctx->pc = 0x38cc04u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_38cc08:
    // 0x38cc08: 0xe7a40068  swc1        $f4, 0x68($sp)
    ctx->pc = 0x38cc08u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_38cc0c:
    // 0x38cc0c: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x38cc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38cc10:
    // 0x38cc10: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x38cc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38cc14:
    // 0x38cc14: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x38cc14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_38cc18:
    // 0x38cc18: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x38cc18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_38cc1c:
    // 0x38cc1c: 0x46023002  mul.s       $f0, $f6, $f2
    ctx->pc = 0x38cc1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_38cc20:
    // 0x38cc20: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x38cc20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_38cc24:
    // 0x38cc24: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x38cc24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_38cc28:
    // 0x38cc28: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x38cc28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_38cc2c:
    // 0x38cc2c: 0x46022042  mul.s       $f1, $f4, $f2
    ctx->pc = 0x38cc2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_38cc30:
    // 0x38cc30: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x38cc30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_38cc34:
    // 0x38cc34: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x38cc34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_38cc38:
    // 0x38cc38: 0xc088b74  jal         func_222DD0
label_38cc3c:
    if (ctx->pc == 0x38CC3Cu) {
        ctx->pc = 0x38CC3Cu;
            // 0x38cc3c: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->pc = 0x38CC40u;
        goto label_38cc40;
    }
    ctx->pc = 0x38CC38u;
    SET_GPR_U32(ctx, 31, 0x38CC40u);
    ctx->pc = 0x38CC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38CC38u;
            // 0x38cc3c: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38CC40u; }
        if (ctx->pc != 0x38CC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38CC40u; }
        if (ctx->pc != 0x38CC40u) { return; }
    }
    ctx->pc = 0x38CC40u;
label_38cc40:
    // 0x38cc40: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x38cc40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_38cc44:
    // 0x38cc44: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x38cc44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_38cc48:
    // 0x38cc48: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x38cc48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_38cc4c:
    // 0x38cc4c: 0x320f809  jalr        $t9
label_38cc50:
    if (ctx->pc == 0x38CC50u) {
        ctx->pc = 0x38CC50u;
            // 0x38cc50: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x38CC54u;
        goto label_38cc54;
    }
    ctx->pc = 0x38CC4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38CC54u);
        ctx->pc = 0x38CC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38CC4Cu;
            // 0x38cc50: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38CC54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38CC54u; }
            if (ctx->pc != 0x38CC54u) { return; }
        }
        }
    }
    ctx->pc = 0x38CC54u;
label_38cc54:
    // 0x38cc54: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38cc54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38cc58:
    // 0x38cc58: 0xc074740  jal         func_1D1D00
label_38cc5c:
    if (ctx->pc == 0x38CC5Cu) {
        ctx->pc = 0x38CC5Cu;
            // 0x38cc5c: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->pc = 0x38CC60u;
        goto label_38cc60;
    }
    ctx->pc = 0x38CC58u;
    SET_GPR_U32(ctx, 31, 0x38CC60u);
    ctx->pc = 0x38CC5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38CC58u;
            // 0x38cc5c: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38CC60u; }
        if (ctx->pc != 0x38CC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38CC60u; }
        if (ctx->pc != 0x38CC60u) { return; }
    }
    ctx->pc = 0x38CC60u;
label_38cc60:
    // 0x38cc60: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_38cc64:
    if (ctx->pc == 0x38CC64u) {
        ctx->pc = 0x38CC64u;
            // 0x38cc64: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x38CC68u;
        goto label_38cc68;
    }
    ctx->pc = 0x38CC60u;
    {
        const bool branch_taken_0x38cc60 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x38cc60) {
            ctx->pc = 0x38CC64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38CC60u;
            // 0x38cc64: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38CC74u;
            goto label_38cc74;
        }
    }
    ctx->pc = 0x38CC68u;
label_38cc68:
    // 0x38cc68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38cc68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38cc6c:
    // 0x38cc6c: 0x10000007  b           . + 4 + (0x7 << 2)
label_38cc70:
    if (ctx->pc == 0x38CC70u) {
        ctx->pc = 0x38CC70u;
            // 0x38cc70: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x38CC74u;
        goto label_38cc74;
    }
    ctx->pc = 0x38CC6Cu;
    {
        const bool branch_taken_0x38cc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38CC6Cu;
            // 0x38cc70: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cc6c) {
            ctx->pc = 0x38CC8Cu;
            goto label_38cc8c;
        }
    }
    ctx->pc = 0x38CC74u;
label_38cc74:
    // 0x38cc74: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x38cc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_38cc78:
    // 0x38cc78: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x38cc78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_38cc7c:
    // 0x38cc7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38cc7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38cc80:
    // 0x38cc80: 0x0  nop
    ctx->pc = 0x38cc80u;
    // NOP
label_38cc84:
    // 0x38cc84: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x38cc84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_38cc88:
    // 0x38cc88: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x38cc88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_38cc8c:
    // 0x38cc8c: 0x3c032f80  lui         $v1, 0x2F80
    ctx->pc = 0x38cc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12160 << 16));
label_38cc90:
    // 0x38cc90: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38cc90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38cc94:
    // 0x38cc94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38cc94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38cc98:
    // 0x38cc98: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x38cc98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_38cc9c:
    // 0x38cc9c: 0xc074740  jal         func_1D1D00
label_38cca0:
    if (ctx->pc == 0x38CCA0u) {
        ctx->pc = 0x38CCA0u;
            // 0x38cca0: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x38CCA4u;
        goto label_38cca4;
    }
    ctx->pc = 0x38CC9Cu;
    SET_GPR_U32(ctx, 31, 0x38CCA4u);
    ctx->pc = 0x38CCA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38CC9Cu;
            // 0x38cca0: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38CCA4u; }
        if (ctx->pc != 0x38CCA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38CCA4u; }
        if (ctx->pc != 0x38CCA4u) { return; }
    }
    ctx->pc = 0x38CCA4u;
label_38cca4:
    // 0x38cca4: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_38cca8:
    if (ctx->pc == 0x38CCA8u) {
        ctx->pc = 0x38CCA8u;
            // 0x38cca8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x38CCACu;
        goto label_38ccac;
    }
    ctx->pc = 0x38CCA4u;
    {
        const bool branch_taken_0x38cca4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x38cca4) {
            ctx->pc = 0x38CCA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38CCA4u;
            // 0x38cca8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38CCB8u;
            goto label_38ccb8;
        }
    }
    ctx->pc = 0x38CCACu;
label_38ccac:
    // 0x38ccac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38ccacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38ccb0:
    // 0x38ccb0: 0x10000007  b           . + 4 + (0x7 << 2)
label_38ccb4:
    if (ctx->pc == 0x38CCB4u) {
        ctx->pc = 0x38CCB4u;
            // 0x38ccb4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x38CCB8u;
        goto label_38ccb8;
    }
    ctx->pc = 0x38CCB0u;
    {
        const bool branch_taken_0x38ccb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38CCB0u;
            // 0x38ccb4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ccb0) {
            ctx->pc = 0x38CCD0u;
            goto label_38ccd0;
        }
    }
    ctx->pc = 0x38CCB8u;
label_38ccb8:
    // 0x38ccb8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x38ccb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_38ccbc:
    // 0x38ccbc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x38ccbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_38ccc0:
    // 0x38ccc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38ccc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38ccc4:
    // 0x38ccc4: 0x0  nop
    ctx->pc = 0x38ccc4u;
    // NOP
label_38ccc8:
    // 0x38ccc8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x38ccc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_38cccc:
    // 0x38cccc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x38ccccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_38ccd0:
    // 0x38ccd0: 0x3c032f80  lui         $v1, 0x2F80
    ctx->pc = 0x38ccd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12160 << 16));
label_38ccd4:
    // 0x38ccd4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38ccd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38ccd8:
    // 0x38ccd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38ccd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38ccdc:
    // 0x38ccdc: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x38ccdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_38cce0:
    // 0x38cce0: 0xc074740  jal         func_1D1D00
label_38cce4:
    if (ctx->pc == 0x38CCE4u) {
        ctx->pc = 0x38CCE4u;
            // 0x38cce4: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x38CCE8u;
        goto label_38cce8;
    }
    ctx->pc = 0x38CCE0u;
    SET_GPR_U32(ctx, 31, 0x38CCE8u);
    ctx->pc = 0x38CCE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38CCE0u;
            // 0x38cce4: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38CCE8u; }
        if (ctx->pc != 0x38CCE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38CCE8u; }
        if (ctx->pc != 0x38CCE8u) { return; }
    }
    ctx->pc = 0x38CCE8u;
label_38cce8:
    // 0x38cce8: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_38ccec:
    if (ctx->pc == 0x38CCECu) {
        ctx->pc = 0x38CCECu;
            // 0x38ccec: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x38CCF0u;
        goto label_38ccf0;
    }
    ctx->pc = 0x38CCE8u;
    {
        const bool branch_taken_0x38cce8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x38cce8) {
            ctx->pc = 0x38CCECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38CCE8u;
            // 0x38ccec: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38CCFCu;
            goto label_38ccfc;
        }
    }
    ctx->pc = 0x38CCF0u;
label_38ccf0:
    // 0x38ccf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38ccf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38ccf4:
    // 0x38ccf4: 0x10000007  b           . + 4 + (0x7 << 2)
label_38ccf8:
    if (ctx->pc == 0x38CCF8u) {
        ctx->pc = 0x38CCF8u;
            // 0x38ccf8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x38CCFCu;
        goto label_38ccfc;
    }
    ctx->pc = 0x38CCF4u;
    {
        const bool branch_taken_0x38ccf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CCF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38CCF4u;
            // 0x38ccf8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ccf4) {
            ctx->pc = 0x38CD14u;
            goto label_38cd14;
        }
    }
    ctx->pc = 0x38CCFCu;
label_38ccfc:
    // 0x38ccfc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x38ccfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_38cd00:
    // 0x38cd00: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x38cd00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_38cd04:
    // 0x38cd04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38cd04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38cd08:
    // 0x38cd08: 0x0  nop
    ctx->pc = 0x38cd08u;
    // NOP
label_38cd0c:
    // 0x38cd0c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x38cd0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_38cd10:
    // 0x38cd10: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x38cd10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_38cd14:
    // 0x38cd14: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x38cd14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_38cd18:
    // 0x38cd18: 0x3c033eb2  lui         $v1, 0x3EB2
    ctx->pc = 0x38cd18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16050 << 16));
label_38cd1c:
    // 0x38cd1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38cd1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38cd20:
    // 0x38cd20: 0x3463b8c2  ori         $v1, $v1, 0xB8C2
    ctx->pc = 0x38cd20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47298);
label_38cd24:
    // 0x38cd24: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x38cd24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_38cd28:
    // 0x38cd28: 0x3c023f32  lui         $v0, 0x3F32
    ctx->pc = 0x38cd28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16178 << 16));
label_38cd2c:
    // 0x38cd2c: 0x3444b8c2  ori         $a0, $v0, 0xB8C2
    ctx->pc = 0x38cd2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
label_38cd30:
    // 0x38cd30: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x38cd30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_38cd34:
    // 0x38cd34: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x38cd34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_38cd38:
    // 0x38cd38: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x38cd38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_38cd3c:
    // 0x38cd3c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x38cd3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_38cd40:
    // 0x38cd40: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x38cd40u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_38cd44:
    // 0x38cd44: 0x0  nop
    ctx->pc = 0x38cd44u;
    // NOP
label_38cd48:
    // 0x38cd48: 0x46041818  adda.s      $f3, $f4
    ctx->pc = 0x38cd48u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_38cd4c:
    // 0x38cd4c: 0x4600281d  msub.s      $f0, $f5, $f0
    ctx->pc = 0x38cd4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[0]));
label_38cd50:
    // 0x38cd50: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x38cd50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_38cd54:
    // 0x38cd54: 0x0  nop
    ctx->pc = 0x38cd54u;
    // NOP
label_38cd58:
    // 0x38cd58: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x38cd58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_38cd5c:
    // 0x38cd5c: 0x46041818  adda.s      $f3, $f4
    ctx->pc = 0x38cd5cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_38cd60:
    // 0x38cd60: 0x4614285d  msub.s      $f1, $f5, $f20
    ctx->pc = 0x38cd60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[20]));
label_38cd64:
    // 0x38cd64: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x38cd64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_38cd68:
    // 0x38cd68: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x38cd68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_38cd6c:
    // 0x38cd6c: 0x46041818  adda.s      $f3, $f4
    ctx->pc = 0x38cd6cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_38cd70:
    // 0x38cd70: 0x4615281d  msub.s      $f0, $f5, $f21
    ctx->pc = 0x38cd70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[21]));
label_38cd74:
    // 0x38cd74: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x38cd74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_38cd78:
    // 0x38cd78: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x38cd78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_38cd7c:
    // 0x38cd7c: 0x10000094  b           . + 4 + (0x94 << 2)
label_38cd80:
    if (ctx->pc == 0x38CD80u) {
        ctx->pc = 0x38CD80u;
            // 0x38cd80: 0xe7a00078  swc1        $f0, 0x78($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->pc = 0x38CD84u;
        goto label_38cd84;
    }
    ctx->pc = 0x38CD7Cu;
    {
        const bool branch_taken_0x38cd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38CD7Cu;
            // 0x38cd80: 0xe7a00078  swc1        $f0, 0x78($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cd7c) {
            ctx->pc = 0x38CFD0u;
            goto label_38cfd0;
        }
    }
    ctx->pc = 0x38CD84u;
label_38cd84:
    // 0x38cd84: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x38cd84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_38cd88:
    // 0x38cd88: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x38cd88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_38cd8c:
    // 0x38cd8c: 0x26250820  addiu       $a1, $s1, 0x820
    ctx->pc = 0x38cd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2080));
label_38cd90:
    // 0x38cd90: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x38cd90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38cd94:
    // 0x38cd94: 0xc04cc7c  jal         func_1331F0
label_38cd98:
    if (ctx->pc == 0x38CD98u) {
        ctx->pc = 0x38CD98u;
            // 0x38cd98: 0x262602e0  addiu       $a2, $s1, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
        ctx->pc = 0x38CD9Cu;
        goto label_38cd9c;
    }
    ctx->pc = 0x38CD94u;
    SET_GPR_U32(ctx, 31, 0x38CD9Cu);
    ctx->pc = 0x38CD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38CD94u;
            // 0x38cd98: 0x262602e0  addiu       $a2, $s1, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38CD9Cu; }
        if (ctx->pc != 0x38CD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38CD9Cu; }
        if (ctx->pc != 0x38CD9Cu) { return; }
    }
    ctx->pc = 0x38CD9Cu;
label_38cd9c:
    // 0x38cd9c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x38cd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_38cda0:
    // 0x38cda0: 0xc04cc44  jal         func_133110
label_38cda4:
    if (ctx->pc == 0x38CDA4u) {
        ctx->pc = 0x38CDA4u;
            // 0x38cda4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38CDA8u;
        goto label_38cda8;
    }
    ctx->pc = 0x38CDA0u;
    SET_GPR_U32(ctx, 31, 0x38CDA8u);
    ctx->pc = 0x38CDA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38CDA0u;
            // 0x38cda4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38CDA8u; }
        if (ctx->pc != 0x38CDA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38CDA8u; }
        if (ctx->pc != 0x38CDA8u) { return; }
    }
    ctx->pc = 0x38CDA8u;
label_38cda8:
    // 0x38cda8: 0x3c023e8e  lui         $v0, 0x3E8E
    ctx->pc = 0x38cda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16014 << 16));
label_38cdac:
    // 0x38cdac: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x38cdacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_38cdb0:
    // 0x38cdb0: 0x344338e4  ori         $v1, $v0, 0x38E4
    ctx->pc = 0x38cdb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14564);
label_38cdb4:
    // 0x38cdb4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x38cdb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_38cdb8:
    // 0x38cdb8: 0xc6210de4  lwc1        $f1, 0xDE4($s1)
    ctx->pc = 0x38cdb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38cdbc:
    // 0x38cdbc: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x38cdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_38cdc0:
    // 0x38cdc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38cdc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38cdc4:
    // 0x38cdc4: 0x0  nop
    ctx->pc = 0x38cdc4u;
    // NOP
label_38cdc8:
    // 0x38cdc8: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x38cdc8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_38cdcc:
    // 0x38cdcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38cdccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38cdd0:
    // 0x38cdd0: 0xc04cc70  jal         func_1331C0
label_38cdd4:
    if (ctx->pc == 0x38CDD4u) {
        ctx->pc = 0x38CDD4u;
            // 0x38cdd4: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x38CDD8u;
        goto label_38cdd8;
    }
    ctx->pc = 0x38CDD0u;
    SET_GPR_U32(ctx, 31, 0x38CDD8u);
    ctx->pc = 0x38CDD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38CDD0u;
            // 0x38cdd4: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38CDD8u; }
        if (ctx->pc != 0x38CDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38CDD8u; }
        if (ctx->pc != 0x38CDD8u) { return; }
    }
    ctx->pc = 0x38CDD8u;
label_38cdd8:
    // 0x38cdd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38cdd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38cddc:
    // 0x38cddc: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x38cddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_38cde0:
    // 0x38cde0: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x38cde0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_38cde4:
    // 0x38cde4: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x38cde4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_38cde8:
    // 0x38cde8: 0xc088b74  jal         func_222DD0
label_38cdec:
    if (ctx->pc == 0x38CDECu) {
        ctx->pc = 0x38CDECu;
            // 0x38cdec: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->pc = 0x38CDF0u;
        goto label_38cdf0;
    }
    ctx->pc = 0x38CDE8u;
    SET_GPR_U32(ctx, 31, 0x38CDF0u);
    ctx->pc = 0x38CDECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38CDE8u;
            // 0x38cdec: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38CDF0u; }
        if (ctx->pc != 0x38CDF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38CDF0u; }
        if (ctx->pc != 0x38CDF0u) { return; }
    }
    ctx->pc = 0x38CDF0u;
label_38cdf0:
    // 0x38cdf0: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x38cdf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_38cdf4:
    // 0x38cdf4: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x38cdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_38cdf8:
    // 0x38cdf8: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x38cdf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_38cdfc:
    // 0x38cdfc: 0x320f809  jalr        $t9
label_38ce00:
    if (ctx->pc == 0x38CE00u) {
        ctx->pc = 0x38CE00u;
            // 0x38ce00: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x38CE04u;
        goto label_38ce04;
    }
    ctx->pc = 0x38CDFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38CE04u);
        ctx->pc = 0x38CE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38CDFCu;
            // 0x38ce00: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38CE04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38CE04u; }
            if (ctx->pc != 0x38CE04u) { return; }
        }
        }
    }
    ctx->pc = 0x38CE04u;
label_38ce04:
    // 0x38ce04: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38ce08:
    // 0x38ce08: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x38ce08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_38ce0c:
    // 0x38ce0c: 0x8c43e3e0  lw          $v1, -0x1C20($v0)
    ctx->pc = 0x38ce0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_38ce10:
    // 0x38ce10: 0xc7a60080  lwc1        $f6, 0x80($sp)
    ctx->pc = 0x38ce10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_38ce14:
    // 0x38ce14: 0xc7a50084  lwc1        $f5, 0x84($sp)
    ctx->pc = 0x38ce14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_38ce18:
    // 0x38ce18: 0xc7a40088  lwc1        $f4, 0x88($sp)
    ctx->pc = 0x38ce18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_38ce1c:
    // 0x38ce1c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x38ce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_38ce20:
    // 0x38ce20: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x38ce20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_38ce24:
    // 0x38ce24: 0xe7a60040  swc1        $f6, 0x40($sp)
    ctx->pc = 0x38ce24u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_38ce28:
    // 0x38ce28: 0xe7a50044  swc1        $f5, 0x44($sp)
    ctx->pc = 0x38ce28u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_38ce2c:
    // 0x38ce2c: 0xe7a40048  swc1        $f4, 0x48($sp)
    ctx->pc = 0x38ce2cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_38ce30:
    // 0x38ce30: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x38ce30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38ce34:
    // 0x38ce34: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x38ce34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38ce38:
    // 0x38ce38: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x38ce38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_38ce3c:
    // 0x38ce3c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x38ce3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_38ce40:
    // 0x38ce40: 0x46023002  mul.s       $f0, $f6, $f2
    ctx->pc = 0x38ce40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_38ce44:
    // 0x38ce44: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x38ce44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_38ce48:
    // 0x38ce48: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x38ce48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_38ce4c:
    // 0x38ce4c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x38ce4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_38ce50:
    // 0x38ce50: 0x46022042  mul.s       $f1, $f4, $f2
    ctx->pc = 0x38ce50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_38ce54:
    // 0x38ce54: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x38ce54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_38ce58:
    // 0x38ce58: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x38ce58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_38ce5c:
    // 0x38ce5c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x38ce5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_38ce60:
    // 0x38ce60: 0xc4740018  lwc1        $f20, 0x18($v1)
    ctx->pc = 0x38ce60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_38ce64:
    // 0x38ce64: 0xc088b74  jal         func_222DD0
label_38ce68:
    if (ctx->pc == 0x38CE68u) {
        ctx->pc = 0x38CE68u;
            // 0x38ce68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38CE6Cu;
        goto label_38ce6c;
    }
    ctx->pc = 0x38CE64u;
    SET_GPR_U32(ctx, 31, 0x38CE6Cu);
    ctx->pc = 0x38CE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38CE64u;
            // 0x38ce68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38CE6Cu; }
        if (ctx->pc != 0x38CE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38CE6Cu; }
        if (ctx->pc != 0x38CE6Cu) { return; }
    }
    ctx->pc = 0x38CE6Cu;
label_38ce6c:
    // 0x38ce6c: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x38ce6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_38ce70:
    // 0x38ce70: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x38ce70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_38ce74:
    // 0x38ce74: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x38ce74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_38ce78:
    // 0x38ce78: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x38ce78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_38ce7c:
    // 0x38ce7c: 0x320f809  jalr        $t9
label_38ce80:
    if (ctx->pc == 0x38CE80u) {
        ctx->pc = 0x38CE80u;
            // 0x38ce80: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x38CE84u;
        goto label_38ce84;
    }
    ctx->pc = 0x38CE7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38CE84u);
        ctx->pc = 0x38CE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38CE7Cu;
            // 0x38ce80: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38CE84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38CE84u; }
            if (ctx->pc != 0x38CE84u) { return; }
        }
        }
    }
    ctx->pc = 0x38CE84u;
label_38ce84:
    // 0x38ce84: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38ce84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38ce88:
    // 0x38ce88: 0xc074740  jal         func_1D1D00
label_38ce8c:
    if (ctx->pc == 0x38CE8Cu) {
        ctx->pc = 0x38CE8Cu;
            // 0x38ce8c: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->pc = 0x38CE90u;
        goto label_38ce90;
    }
    ctx->pc = 0x38CE88u;
    SET_GPR_U32(ctx, 31, 0x38CE90u);
    ctx->pc = 0x38CE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38CE88u;
            // 0x38ce8c: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38CE90u; }
        if (ctx->pc != 0x38CE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38CE90u; }
        if (ctx->pc != 0x38CE90u) { return; }
    }
    ctx->pc = 0x38CE90u;
label_38ce90:
    // 0x38ce90: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_38ce94:
    if (ctx->pc == 0x38CE94u) {
        ctx->pc = 0x38CE94u;
            // 0x38ce94: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x38CE98u;
        goto label_38ce98;
    }
    ctx->pc = 0x38CE90u;
    {
        const bool branch_taken_0x38ce90 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x38ce90) {
            ctx->pc = 0x38CE94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38CE90u;
            // 0x38ce94: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38CEA4u;
            goto label_38cea4;
        }
    }
    ctx->pc = 0x38CE98u;
label_38ce98:
    // 0x38ce98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38ce98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38ce9c:
    // 0x38ce9c: 0x10000007  b           . + 4 + (0x7 << 2)
label_38cea0:
    if (ctx->pc == 0x38CEA0u) {
        ctx->pc = 0x38CEA0u;
            // 0x38cea0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x38CEA4u;
        goto label_38cea4;
    }
    ctx->pc = 0x38CE9Cu;
    {
        const bool branch_taken_0x38ce9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38CE9Cu;
            // 0x38cea0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ce9c) {
            ctx->pc = 0x38CEBCu;
            goto label_38cebc;
        }
    }
    ctx->pc = 0x38CEA4u;
label_38cea4:
    // 0x38cea4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x38cea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_38cea8:
    // 0x38cea8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x38cea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_38ceac:
    // 0x38ceac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38ceacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38ceb0:
    // 0x38ceb0: 0x0  nop
    ctx->pc = 0x38ceb0u;
    // NOP
label_38ceb4:
    // 0x38ceb4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x38ceb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_38ceb8:
    // 0x38ceb8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x38ceb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_38cebc:
    // 0x38cebc: 0x3c032f80  lui         $v1, 0x2F80
    ctx->pc = 0x38cebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12160 << 16));
label_38cec0:
    // 0x38cec0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38cec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38cec4:
    // 0x38cec4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38cec4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38cec8:
    // 0x38cec8: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x38cec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_38cecc:
    // 0x38cecc: 0xc074740  jal         func_1D1D00
label_38ced0:
    if (ctx->pc == 0x38CED0u) {
        ctx->pc = 0x38CED0u;
            // 0x38ced0: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x38CED4u;
        goto label_38ced4;
    }
    ctx->pc = 0x38CECCu;
    SET_GPR_U32(ctx, 31, 0x38CED4u);
    ctx->pc = 0x38CED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38CECCu;
            // 0x38ced0: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38CED4u; }
        if (ctx->pc != 0x38CED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38CED4u; }
        if (ctx->pc != 0x38CED4u) { return; }
    }
    ctx->pc = 0x38CED4u;
label_38ced4:
    // 0x38ced4: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_38ced8:
    if (ctx->pc == 0x38CED8u) {
        ctx->pc = 0x38CED8u;
            // 0x38ced8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x38CEDCu;
        goto label_38cedc;
    }
    ctx->pc = 0x38CED4u;
    {
        const bool branch_taken_0x38ced4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x38ced4) {
            ctx->pc = 0x38CED8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38CED4u;
            // 0x38ced8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38CEE8u;
            goto label_38cee8;
        }
    }
    ctx->pc = 0x38CEDCu;
label_38cedc:
    // 0x38cedc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38cedcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38cee0:
    // 0x38cee0: 0x10000007  b           . + 4 + (0x7 << 2)
label_38cee4:
    if (ctx->pc == 0x38CEE4u) {
        ctx->pc = 0x38CEE4u;
            // 0x38cee4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x38CEE8u;
        goto label_38cee8;
    }
    ctx->pc = 0x38CEE0u;
    {
        const bool branch_taken_0x38cee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38CEE0u;
            // 0x38cee4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cee0) {
            ctx->pc = 0x38CF00u;
            goto label_38cf00;
        }
    }
    ctx->pc = 0x38CEE8u;
label_38cee8:
    // 0x38cee8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x38cee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_38ceec:
    // 0x38ceec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x38ceecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_38cef0:
    // 0x38cef0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38cef0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38cef4:
    // 0x38cef4: 0x0  nop
    ctx->pc = 0x38cef4u;
    // NOP
label_38cef8:
    // 0x38cef8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x38cef8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_38cefc:
    // 0x38cefc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x38cefcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_38cf00:
    // 0x38cf00: 0x3c032f80  lui         $v1, 0x2F80
    ctx->pc = 0x38cf00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12160 << 16));
label_38cf04:
    // 0x38cf04: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38cf08:
    // 0x38cf08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38cf08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38cf0c:
    // 0x38cf0c: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x38cf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_38cf10:
    // 0x38cf10: 0xc074740  jal         func_1D1D00
label_38cf14:
    if (ctx->pc == 0x38CF14u) {
        ctx->pc = 0x38CF14u;
            // 0x38cf14: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x38CF18u;
        goto label_38cf18;
    }
    ctx->pc = 0x38CF10u;
    SET_GPR_U32(ctx, 31, 0x38CF18u);
    ctx->pc = 0x38CF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38CF10u;
            // 0x38cf14: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38CF18u; }
        if (ctx->pc != 0x38CF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38CF18u; }
        if (ctx->pc != 0x38CF18u) { return; }
    }
    ctx->pc = 0x38CF18u;
label_38cf18:
    // 0x38cf18: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_38cf1c:
    if (ctx->pc == 0x38CF1Cu) {
        ctx->pc = 0x38CF1Cu;
            // 0x38cf1c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x38CF20u;
        goto label_38cf20;
    }
    ctx->pc = 0x38CF18u;
    {
        const bool branch_taken_0x38cf18 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x38cf18) {
            ctx->pc = 0x38CF1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38CF18u;
            // 0x38cf1c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38CF2Cu;
            goto label_38cf2c;
        }
    }
    ctx->pc = 0x38CF20u;
label_38cf20:
    // 0x38cf20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38cf20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38cf24:
    // 0x38cf24: 0x10000007  b           . + 4 + (0x7 << 2)
label_38cf28:
    if (ctx->pc == 0x38CF28u) {
        ctx->pc = 0x38CF28u;
            // 0x38cf28: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x38CF2Cu;
        goto label_38cf2c;
    }
    ctx->pc = 0x38CF24u;
    {
        const bool branch_taken_0x38cf24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38CF24u;
            // 0x38cf28: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cf24) {
            ctx->pc = 0x38CF44u;
            goto label_38cf44;
        }
    }
    ctx->pc = 0x38CF2Cu;
label_38cf2c:
    // 0x38cf2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x38cf2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_38cf30:
    // 0x38cf30: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x38cf30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_38cf34:
    // 0x38cf34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38cf34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38cf38:
    // 0x38cf38: 0x0  nop
    ctx->pc = 0x38cf38u;
    // NOP
label_38cf3c:
    // 0x38cf3c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x38cf3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_38cf40:
    // 0x38cf40: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x38cf40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_38cf44:
    // 0x38cf44: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x38cf44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_38cf48:
    // 0x38cf48: 0x3c054270  lui         $a1, 0x4270
    ctx->pc = 0x38cf48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17008 << 16));
label_38cf4c:
    // 0x38cf4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38cf4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38cf50:
    // 0x38cf50: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x38cf50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_38cf54:
    // 0x38cf54: 0x3c023d8e  lui         $v0, 0x3D8E
    ctx->pc = 0x38cf54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15758 << 16));
label_38cf58:
    // 0x38cf58: 0x3447fa35  ori         $a3, $v0, 0xFA35
    ctx->pc = 0x38cf58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_38cf5c:
    // 0x38cf5c: 0x3c023d0e  lui         $v0, 0x3D0E
    ctx->pc = 0x38cf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15630 << 16));
label_38cf60:
    // 0x38cf60: 0x3446fa35  ori         $a2, $v0, 0xFA35
    ctx->pc = 0x38cf60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_38cf64:
    // 0x38cf64: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x38cf64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
label_38cf68:
    // 0x38cf68: 0x34447750  ori         $a0, $v0, 0x7750
    ctx->pc = 0x38cf68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
label_38cf6c:
    // 0x38cf6c: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x38cf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
label_38cf70:
    // 0x38cf70: 0x34437750  ori         $v1, $v0, 0x7750
    ctx->pc = 0x38cf70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
label_38cf74:
    // 0x38cf74: 0x460101c2  mul.s       $f7, $f0, $f1
    ctx->pc = 0x38cf74u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_38cf78:
    // 0x38cf78: 0x3c023e0e  lui         $v0, 0x3E0E
    ctx->pc = 0x38cf78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15886 << 16));
label_38cf7c:
    // 0x38cf7c: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x38cf7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_38cf80:
    // 0x38cf80: 0x44862800  mtc1        $a2, $f5
    ctx->pc = 0x38cf80u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_38cf84:
    // 0x38cf84: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x38cf84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_38cf88:
    // 0x38cf88: 0x44873000  mtc1        $a3, $f6
    ctx->pc = 0x38cf88u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_38cf8c:
    // 0x38cf8c: 0x46052018  adda.s      $f4, $f5
    ctx->pc = 0x38cf8cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
label_38cf90:
    // 0x38cf90: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x38cf90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38cf94:
    // 0x38cf94: 0x4607315d  msub.s      $f5, $f6, $f7
    ctx->pc = 0x38cf94u;
    ctx->f[5] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[7]));
label_38cf98:
    // 0x38cf98: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x38cf98u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_38cf9c:
    // 0x38cf9c: 0x46012018  adda.s      $f4, $f1
    ctx->pc = 0x38cf9cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_38cfa0:
    // 0x38cfa0: 0x4614105d  msub.s      $f1, $f2, $f20
    ctx->pc = 0x38cfa0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[20]));
label_38cfa4:
    // 0x38cfa4: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x38cfa4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_38cfa8:
    // 0x38cfa8: 0x0  nop
    ctx->pc = 0x38cfa8u;
    // NOP
label_38cfac:
    // 0x38cfac: 0x46051882  mul.s       $f2, $f3, $f5
    ctx->pc = 0x38cfacu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_38cfb0:
    // 0x38cfb0: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x38cfb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_38cfb4:
    // 0x38cfb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38cfb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38cfb8:
    // 0x38cfb8: 0x46062018  adda.s      $f4, $f6
    ctx->pc = 0x38cfb8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
label_38cfbc:
    // 0x38cfbc: 0x4615001d  msub.s      $f0, $f0, $f21
    ctx->pc = 0x38cfbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[21]));
label_38cfc0:
    // 0x38cfc0: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x38cfc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_38cfc4:
    // 0x38cfc4: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x38cfc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_38cfc8:
    // 0x38cfc8: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x38cfc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_38cfcc:
    // 0x38cfcc: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x38cfccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_38cfd0:
    // 0x38cfd0: 0x3c0240d5  lui         $v0, 0x40D5
    ctx->pc = 0x38cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16597 << 16));
label_38cfd4:
    // 0x38cfd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38cfd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38cfd8:
    // 0x38cfd8: 0x34425555  ori         $v0, $v0, 0x5555
    ctx->pc = 0x38cfd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21845);
label_38cfdc:
    // 0x38cfdc: 0xc088b74  jal         func_222DD0
label_38cfe0:
    if (ctx->pc == 0x38CFE0u) {
        ctx->pc = 0x38CFE0u;
            // 0x38cfe0: 0xae020158  sw          $v0, 0x158($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
        ctx->pc = 0x38CFE4u;
        goto label_38cfe4;
    }
    ctx->pc = 0x38CFDCu;
    SET_GPR_U32(ctx, 31, 0x38CFE4u);
    ctx->pc = 0x38CFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38CFDCu;
            // 0x38cfe0: 0xae020158  sw          $v0, 0x158($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38CFE4u; }
        if (ctx->pc != 0x38CFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38CFE4u; }
        if (ctx->pc != 0x38CFE4u) { return; }
    }
    ctx->pc = 0x38CFE4u;
label_38cfe4:
    // 0x38cfe4: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x38cfe4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_38cfe8:
    // 0x38cfe8: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x38cfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_38cfec:
    // 0x38cfec: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x38cfecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_38cff0:
    // 0x38cff0: 0x320f809  jalr        $t9
label_38cff4:
    if (ctx->pc == 0x38CFF4u) {
        ctx->pc = 0x38CFF4u;
            // 0x38cff4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x38CFF8u;
        goto label_38cff8;
    }
    ctx->pc = 0x38CFF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38CFF8u);
        ctx->pc = 0x38CFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38CFF0u;
            // 0x38cff4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38CFF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38CFF8u; }
            if (ctx->pc != 0x38CFF8u) { return; }
        }
        }
    }
    ctx->pc = 0x38CFF8u;
label_38cff8:
    // 0x38cff8: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x38cff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
label_38cffc:
    // 0x38cffc: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x38cffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_38d000:
    // 0x38d000: 0xae030160  sw          $v1, 0x160($s0)
    ctx->pc = 0x38d000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 3));
label_38d004:
    // 0x38d004: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x38d004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_38d008:
    // 0x38d008: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x38d008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_38d00c:
    // 0x38d00c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x38d00cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38d010:
    // 0x38d010: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x38d010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_38d014:
    // 0x38d014: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38d014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38d018:
    // 0x38d018: 0x3e00008  jr          $ra
label_38d01c:
    if (ctx->pc == 0x38D01Cu) {
        ctx->pc = 0x38D01Cu;
            // 0x38d01c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x38D020u;
        goto label_38d020;
    }
    ctx->pc = 0x38D018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38D018u;
            // 0x38d01c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38D020u;
label_38d020:
    // 0x38d020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38d020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_38d024:
    // 0x38d024: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x38d024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_38d028:
    // 0x38d028: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38d028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_38d02c:
    // 0x38d02c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38d02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_38d030:
    // 0x38d030: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x38d030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_38d034:
    // 0x38d034: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x38d034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_38d038:
    // 0x38d038: 0x28630006  slti        $v1, $v1, 0x6
    ctx->pc = 0x38d038u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_38d03c:
    // 0x38d03c: 0x14600030  bnez        $v1, . + 4 + (0x30 << 2)
label_38d040:
    if (ctx->pc == 0x38D040u) {
        ctx->pc = 0x38D040u;
            // 0x38d040: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38D044u;
        goto label_38d044;
    }
    ctx->pc = 0x38D03Cu;
    {
        const bool branch_taken_0x38d03c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38D03Cu;
            // 0x38d040: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d03c) {
            ctx->pc = 0x38D100u;
            goto label_38d100;
        }
    }
    ctx->pc = 0x38D044u;
label_38d044:
    // 0x38d044: 0xc60200b8  lwc1        $f2, 0xB8($s0)
    ctx->pc = 0x38d044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38d048:
    // 0x38d048: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x38d048u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38d04c:
    // 0x38d04c: 0x0  nop
    ctx->pc = 0x38d04cu;
    // NOP
label_38d050:
    // 0x38d050: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x38d050u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38d054:
    // 0x38d054: 0x4503002b  bc1tl       . + 4 + (0x2B << 2)
label_38d058:
    if (ctx->pc == 0x38D058u) {
        ctx->pc = 0x38D058u;
            // 0x38d058: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x38D05Cu;
        goto label_38d05c;
    }
    ctx->pc = 0x38D054u;
    {
        const bool branch_taken_0x38d054 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x38d054) {
            ctx->pc = 0x38D058u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38D054u;
            // 0x38d058: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38D104u;
            goto label_38d104;
        }
    }
    ctx->pc = 0x38D05Cu;
label_38d05c:
    // 0x38d05c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x38d05cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_38d060:
    // 0x38d060: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x38d060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_38d064:
    // 0x38d064: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x38d064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38d068:
    // 0x38d068: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x38d068u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_38d06c:
    // 0x38d06c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x38d06cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38d070:
    // 0x38d070: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_38d074:
    if (ctx->pc == 0x38D074u) {
        ctx->pc = 0x38D074u;
            // 0x38d074: 0xe60000b8  swc1        $f0, 0xB8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
        ctx->pc = 0x38D078u;
        goto label_38d078;
    }
    ctx->pc = 0x38D070u;
    {
        const bool branch_taken_0x38d070 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x38D074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38D070u;
            // 0x38d074: 0xe60000b8  swc1        $f0, 0xB8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d070) {
            ctx->pc = 0x38D07Cu;
            goto label_38d07c;
        }
    }
    ctx->pc = 0x38D078u;
label_38d078:
    // 0x38d078: 0xe60100b8  swc1        $f1, 0xB8($s0)
    ctx->pc = 0x38d078u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
label_38d07c:
    // 0x38d07c: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x38d07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_38d080:
    // 0x38d080: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_38d084:
    if (ctx->pc == 0x38D084u) {
        ctx->pc = 0x38D088u;
        goto label_38d088;
    }
    ctx->pc = 0x38D080u;
    {
        const bool branch_taken_0x38d080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d080) {
            ctx->pc = 0x38D100u;
            goto label_38d100;
        }
    }
    ctx->pc = 0x38D088u;
label_38d088:
    // 0x38d088: 0xc60100b8  lwc1        $f1, 0xB8($s0)
    ctx->pc = 0x38d088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38d08c:
    // 0x38d08c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x38d08cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_38d090:
    // 0x38d090: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38d090u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38d094:
    // 0x38d094: 0x0  nop
    ctx->pc = 0x38d094u;
    // NOP
label_38d098:
    // 0x38d098: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x38d098u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38d09c:
    // 0x38d09c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_38d0a0:
    if (ctx->pc == 0x38D0A0u) {
        ctx->pc = 0x38D0A0u;
            // 0x38d0a0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x38D0A4u;
        goto label_38d0a4;
    }
    ctx->pc = 0x38D09Cu;
    {
        const bool branch_taken_0x38d09c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x38d09c) {
            ctx->pc = 0x38D0A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38D09Cu;
            // 0x38d0a0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x38D0B4u;
            goto label_38d0b4;
        }
    }
    ctx->pc = 0x38D0A4u;
label_38d0a4:
    // 0x38d0a4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38d0a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_38d0a8:
    // 0x38d0a8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x38d0a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_38d0ac:
    // 0x38d0ac: 0x10000007  b           . + 4 + (0x7 << 2)
label_38d0b0:
    if (ctx->pc == 0x38D0B0u) {
        ctx->pc = 0x38D0B0u;
            // 0x38d0b0: 0x8e0300c8  lw          $v1, 0xC8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->pc = 0x38D0B4u;
        goto label_38d0b4;
    }
    ctx->pc = 0x38D0ACu;
    {
        const bool branch_taken_0x38d0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38D0ACu;
            // 0x38d0b0: 0x8e0300c8  lw          $v1, 0xC8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d0ac) {
            ctx->pc = 0x38D0CCu;
            goto label_38d0cc;
        }
    }
    ctx->pc = 0x38D0B4u;
label_38d0b4:
    // 0x38d0b4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x38d0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_38d0b8:
    // 0x38d0b8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38d0b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_38d0bc:
    // 0x38d0bc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x38d0bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_38d0c0:
    // 0x38d0c0: 0x0  nop
    ctx->pc = 0x38d0c0u;
    // NOP
label_38d0c4:
    // 0x38d0c4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x38d0c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_38d0c8:
    // 0x38d0c8: 0x8e0300c8  lw          $v1, 0xC8($s0)
    ctx->pc = 0x38d0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_38d0cc:
    // 0x38d0cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x38d0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_38d0d0:
    // 0x38d0d0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x38d0d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_38d0d4:
    // 0x38d0d4: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_38d0d8:
    if (ctx->pc == 0x38D0D8u) {
        ctx->pc = 0x38D0DCu;
        goto label_38d0dc;
    }
    ctx->pc = 0x38D0D4u;
    {
        const bool branch_taken_0x38d0d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x38d0d4) {
            ctx->pc = 0x38D100u;
            goto label_38d100;
        }
    }
    ctx->pc = 0x38D0DCu;
label_38d0dc:
    // 0x38d0dc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x38d0dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38d0e0:
    // 0x38d0e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38d0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38d0e4:
    // 0x38d0e4: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x38d0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_38d0e8:
    // 0x38d0e8: 0x8f390068  lw          $t9, 0x68($t9)
    ctx->pc = 0x38d0e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 104)));
label_38d0ec:
    // 0x38d0ec: 0x320f809  jalr        $t9
label_38d0f0:
    if (ctx->pc == 0x38D0F0u) {
        ctx->pc = 0x38D0F0u;
            // 0x38d0f0: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x38D0F4u;
        goto label_38d0f4;
    }
    ctx->pc = 0x38D0ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38D0F4u);
        ctx->pc = 0x38D0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38D0ECu;
            // 0x38d0f0: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38D0F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38D0F4u; }
            if (ctx->pc != 0x38D0F4u) { return; }
        }
        }
    }
    ctx->pc = 0x38D0F4u;
label_38d0f4:
    // 0x38d0f4: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x38d0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_38d0f8:
    // 0x38d0f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x38d0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_38d0fc:
    // 0x38d0fc: 0xae0300bc  sw          $v1, 0xBC($s0)
    ctx->pc = 0x38d0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 3));
label_38d100:
    // 0x38d100: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38d100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38d104:
    // 0x38d104: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38d104u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38d108:
    // 0x38d108: 0x3e00008  jr          $ra
label_38d10c:
    if (ctx->pc == 0x38D10Cu) {
        ctx->pc = 0x38D10Cu;
            // 0x38d10c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x38D110u;
        goto label_fallthrough_0x38d108;
    }
    ctx->pc = 0x38D108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38D108u;
            // 0x38d10c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x38d108:
    ctx->pc = 0x38D110u;
}
