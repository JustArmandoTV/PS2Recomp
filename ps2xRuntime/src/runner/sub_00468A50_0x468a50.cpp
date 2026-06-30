#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00468A50
// Address: 0x468a50 - 0x46a030
void sub_00468A50_0x468a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00468A50_0x468a50");
#endif

    switch (ctx->pc) {
        case 0x468a50u: goto label_468a50;
        case 0x468a54u: goto label_468a54;
        case 0x468a58u: goto label_468a58;
        case 0x468a5cu: goto label_468a5c;
        case 0x468a60u: goto label_468a60;
        case 0x468a64u: goto label_468a64;
        case 0x468a68u: goto label_468a68;
        case 0x468a6cu: goto label_468a6c;
        case 0x468a70u: goto label_468a70;
        case 0x468a74u: goto label_468a74;
        case 0x468a78u: goto label_468a78;
        case 0x468a7cu: goto label_468a7c;
        case 0x468a80u: goto label_468a80;
        case 0x468a84u: goto label_468a84;
        case 0x468a88u: goto label_468a88;
        case 0x468a8cu: goto label_468a8c;
        case 0x468a90u: goto label_468a90;
        case 0x468a94u: goto label_468a94;
        case 0x468a98u: goto label_468a98;
        case 0x468a9cu: goto label_468a9c;
        case 0x468aa0u: goto label_468aa0;
        case 0x468aa4u: goto label_468aa4;
        case 0x468aa8u: goto label_468aa8;
        case 0x468aacu: goto label_468aac;
        case 0x468ab0u: goto label_468ab0;
        case 0x468ab4u: goto label_468ab4;
        case 0x468ab8u: goto label_468ab8;
        case 0x468abcu: goto label_468abc;
        case 0x468ac0u: goto label_468ac0;
        case 0x468ac4u: goto label_468ac4;
        case 0x468ac8u: goto label_468ac8;
        case 0x468accu: goto label_468acc;
        case 0x468ad0u: goto label_468ad0;
        case 0x468ad4u: goto label_468ad4;
        case 0x468ad8u: goto label_468ad8;
        case 0x468adcu: goto label_468adc;
        case 0x468ae0u: goto label_468ae0;
        case 0x468ae4u: goto label_468ae4;
        case 0x468ae8u: goto label_468ae8;
        case 0x468aecu: goto label_468aec;
        case 0x468af0u: goto label_468af0;
        case 0x468af4u: goto label_468af4;
        case 0x468af8u: goto label_468af8;
        case 0x468afcu: goto label_468afc;
        case 0x468b00u: goto label_468b00;
        case 0x468b04u: goto label_468b04;
        case 0x468b08u: goto label_468b08;
        case 0x468b0cu: goto label_468b0c;
        case 0x468b10u: goto label_468b10;
        case 0x468b14u: goto label_468b14;
        case 0x468b18u: goto label_468b18;
        case 0x468b1cu: goto label_468b1c;
        case 0x468b20u: goto label_468b20;
        case 0x468b24u: goto label_468b24;
        case 0x468b28u: goto label_468b28;
        case 0x468b2cu: goto label_468b2c;
        case 0x468b30u: goto label_468b30;
        case 0x468b34u: goto label_468b34;
        case 0x468b38u: goto label_468b38;
        case 0x468b3cu: goto label_468b3c;
        case 0x468b40u: goto label_468b40;
        case 0x468b44u: goto label_468b44;
        case 0x468b48u: goto label_468b48;
        case 0x468b4cu: goto label_468b4c;
        case 0x468b50u: goto label_468b50;
        case 0x468b54u: goto label_468b54;
        case 0x468b58u: goto label_468b58;
        case 0x468b5cu: goto label_468b5c;
        case 0x468b60u: goto label_468b60;
        case 0x468b64u: goto label_468b64;
        case 0x468b68u: goto label_468b68;
        case 0x468b6cu: goto label_468b6c;
        case 0x468b70u: goto label_468b70;
        case 0x468b74u: goto label_468b74;
        case 0x468b78u: goto label_468b78;
        case 0x468b7cu: goto label_468b7c;
        case 0x468b80u: goto label_468b80;
        case 0x468b84u: goto label_468b84;
        case 0x468b88u: goto label_468b88;
        case 0x468b8cu: goto label_468b8c;
        case 0x468b90u: goto label_468b90;
        case 0x468b94u: goto label_468b94;
        case 0x468b98u: goto label_468b98;
        case 0x468b9cu: goto label_468b9c;
        case 0x468ba0u: goto label_468ba0;
        case 0x468ba4u: goto label_468ba4;
        case 0x468ba8u: goto label_468ba8;
        case 0x468bacu: goto label_468bac;
        case 0x468bb0u: goto label_468bb0;
        case 0x468bb4u: goto label_468bb4;
        case 0x468bb8u: goto label_468bb8;
        case 0x468bbcu: goto label_468bbc;
        case 0x468bc0u: goto label_468bc0;
        case 0x468bc4u: goto label_468bc4;
        case 0x468bc8u: goto label_468bc8;
        case 0x468bccu: goto label_468bcc;
        case 0x468bd0u: goto label_468bd0;
        case 0x468bd4u: goto label_468bd4;
        case 0x468bd8u: goto label_468bd8;
        case 0x468bdcu: goto label_468bdc;
        case 0x468be0u: goto label_468be0;
        case 0x468be4u: goto label_468be4;
        case 0x468be8u: goto label_468be8;
        case 0x468becu: goto label_468bec;
        case 0x468bf0u: goto label_468bf0;
        case 0x468bf4u: goto label_468bf4;
        case 0x468bf8u: goto label_468bf8;
        case 0x468bfcu: goto label_468bfc;
        case 0x468c00u: goto label_468c00;
        case 0x468c04u: goto label_468c04;
        case 0x468c08u: goto label_468c08;
        case 0x468c0cu: goto label_468c0c;
        case 0x468c10u: goto label_468c10;
        case 0x468c14u: goto label_468c14;
        case 0x468c18u: goto label_468c18;
        case 0x468c1cu: goto label_468c1c;
        case 0x468c20u: goto label_468c20;
        case 0x468c24u: goto label_468c24;
        case 0x468c28u: goto label_468c28;
        case 0x468c2cu: goto label_468c2c;
        case 0x468c30u: goto label_468c30;
        case 0x468c34u: goto label_468c34;
        case 0x468c38u: goto label_468c38;
        case 0x468c3cu: goto label_468c3c;
        case 0x468c40u: goto label_468c40;
        case 0x468c44u: goto label_468c44;
        case 0x468c48u: goto label_468c48;
        case 0x468c4cu: goto label_468c4c;
        case 0x468c50u: goto label_468c50;
        case 0x468c54u: goto label_468c54;
        case 0x468c58u: goto label_468c58;
        case 0x468c5cu: goto label_468c5c;
        case 0x468c60u: goto label_468c60;
        case 0x468c64u: goto label_468c64;
        case 0x468c68u: goto label_468c68;
        case 0x468c6cu: goto label_468c6c;
        case 0x468c70u: goto label_468c70;
        case 0x468c74u: goto label_468c74;
        case 0x468c78u: goto label_468c78;
        case 0x468c7cu: goto label_468c7c;
        case 0x468c80u: goto label_468c80;
        case 0x468c84u: goto label_468c84;
        case 0x468c88u: goto label_468c88;
        case 0x468c8cu: goto label_468c8c;
        case 0x468c90u: goto label_468c90;
        case 0x468c94u: goto label_468c94;
        case 0x468c98u: goto label_468c98;
        case 0x468c9cu: goto label_468c9c;
        case 0x468ca0u: goto label_468ca0;
        case 0x468ca4u: goto label_468ca4;
        case 0x468ca8u: goto label_468ca8;
        case 0x468cacu: goto label_468cac;
        case 0x468cb0u: goto label_468cb0;
        case 0x468cb4u: goto label_468cb4;
        case 0x468cb8u: goto label_468cb8;
        case 0x468cbcu: goto label_468cbc;
        case 0x468cc0u: goto label_468cc0;
        case 0x468cc4u: goto label_468cc4;
        case 0x468cc8u: goto label_468cc8;
        case 0x468cccu: goto label_468ccc;
        case 0x468cd0u: goto label_468cd0;
        case 0x468cd4u: goto label_468cd4;
        case 0x468cd8u: goto label_468cd8;
        case 0x468cdcu: goto label_468cdc;
        case 0x468ce0u: goto label_468ce0;
        case 0x468ce4u: goto label_468ce4;
        case 0x468ce8u: goto label_468ce8;
        case 0x468cecu: goto label_468cec;
        case 0x468cf0u: goto label_468cf0;
        case 0x468cf4u: goto label_468cf4;
        case 0x468cf8u: goto label_468cf8;
        case 0x468cfcu: goto label_468cfc;
        case 0x468d00u: goto label_468d00;
        case 0x468d04u: goto label_468d04;
        case 0x468d08u: goto label_468d08;
        case 0x468d0cu: goto label_468d0c;
        case 0x468d10u: goto label_468d10;
        case 0x468d14u: goto label_468d14;
        case 0x468d18u: goto label_468d18;
        case 0x468d1cu: goto label_468d1c;
        case 0x468d20u: goto label_468d20;
        case 0x468d24u: goto label_468d24;
        case 0x468d28u: goto label_468d28;
        case 0x468d2cu: goto label_468d2c;
        case 0x468d30u: goto label_468d30;
        case 0x468d34u: goto label_468d34;
        case 0x468d38u: goto label_468d38;
        case 0x468d3cu: goto label_468d3c;
        case 0x468d40u: goto label_468d40;
        case 0x468d44u: goto label_468d44;
        case 0x468d48u: goto label_468d48;
        case 0x468d4cu: goto label_468d4c;
        case 0x468d50u: goto label_468d50;
        case 0x468d54u: goto label_468d54;
        case 0x468d58u: goto label_468d58;
        case 0x468d5cu: goto label_468d5c;
        case 0x468d60u: goto label_468d60;
        case 0x468d64u: goto label_468d64;
        case 0x468d68u: goto label_468d68;
        case 0x468d6cu: goto label_468d6c;
        case 0x468d70u: goto label_468d70;
        case 0x468d74u: goto label_468d74;
        case 0x468d78u: goto label_468d78;
        case 0x468d7cu: goto label_468d7c;
        case 0x468d80u: goto label_468d80;
        case 0x468d84u: goto label_468d84;
        case 0x468d88u: goto label_468d88;
        case 0x468d8cu: goto label_468d8c;
        case 0x468d90u: goto label_468d90;
        case 0x468d94u: goto label_468d94;
        case 0x468d98u: goto label_468d98;
        case 0x468d9cu: goto label_468d9c;
        case 0x468da0u: goto label_468da0;
        case 0x468da4u: goto label_468da4;
        case 0x468da8u: goto label_468da8;
        case 0x468dacu: goto label_468dac;
        case 0x468db0u: goto label_468db0;
        case 0x468db4u: goto label_468db4;
        case 0x468db8u: goto label_468db8;
        case 0x468dbcu: goto label_468dbc;
        case 0x468dc0u: goto label_468dc0;
        case 0x468dc4u: goto label_468dc4;
        case 0x468dc8u: goto label_468dc8;
        case 0x468dccu: goto label_468dcc;
        case 0x468dd0u: goto label_468dd0;
        case 0x468dd4u: goto label_468dd4;
        case 0x468dd8u: goto label_468dd8;
        case 0x468ddcu: goto label_468ddc;
        case 0x468de0u: goto label_468de0;
        case 0x468de4u: goto label_468de4;
        case 0x468de8u: goto label_468de8;
        case 0x468decu: goto label_468dec;
        case 0x468df0u: goto label_468df0;
        case 0x468df4u: goto label_468df4;
        case 0x468df8u: goto label_468df8;
        case 0x468dfcu: goto label_468dfc;
        case 0x468e00u: goto label_468e00;
        case 0x468e04u: goto label_468e04;
        case 0x468e08u: goto label_468e08;
        case 0x468e0cu: goto label_468e0c;
        case 0x468e10u: goto label_468e10;
        case 0x468e14u: goto label_468e14;
        case 0x468e18u: goto label_468e18;
        case 0x468e1cu: goto label_468e1c;
        case 0x468e20u: goto label_468e20;
        case 0x468e24u: goto label_468e24;
        case 0x468e28u: goto label_468e28;
        case 0x468e2cu: goto label_468e2c;
        case 0x468e30u: goto label_468e30;
        case 0x468e34u: goto label_468e34;
        case 0x468e38u: goto label_468e38;
        case 0x468e3cu: goto label_468e3c;
        case 0x468e40u: goto label_468e40;
        case 0x468e44u: goto label_468e44;
        case 0x468e48u: goto label_468e48;
        case 0x468e4cu: goto label_468e4c;
        case 0x468e50u: goto label_468e50;
        case 0x468e54u: goto label_468e54;
        case 0x468e58u: goto label_468e58;
        case 0x468e5cu: goto label_468e5c;
        case 0x468e60u: goto label_468e60;
        case 0x468e64u: goto label_468e64;
        case 0x468e68u: goto label_468e68;
        case 0x468e6cu: goto label_468e6c;
        case 0x468e70u: goto label_468e70;
        case 0x468e74u: goto label_468e74;
        case 0x468e78u: goto label_468e78;
        case 0x468e7cu: goto label_468e7c;
        case 0x468e80u: goto label_468e80;
        case 0x468e84u: goto label_468e84;
        case 0x468e88u: goto label_468e88;
        case 0x468e8cu: goto label_468e8c;
        case 0x468e90u: goto label_468e90;
        case 0x468e94u: goto label_468e94;
        case 0x468e98u: goto label_468e98;
        case 0x468e9cu: goto label_468e9c;
        case 0x468ea0u: goto label_468ea0;
        case 0x468ea4u: goto label_468ea4;
        case 0x468ea8u: goto label_468ea8;
        case 0x468eacu: goto label_468eac;
        case 0x468eb0u: goto label_468eb0;
        case 0x468eb4u: goto label_468eb4;
        case 0x468eb8u: goto label_468eb8;
        case 0x468ebcu: goto label_468ebc;
        case 0x468ec0u: goto label_468ec0;
        case 0x468ec4u: goto label_468ec4;
        case 0x468ec8u: goto label_468ec8;
        case 0x468eccu: goto label_468ecc;
        case 0x468ed0u: goto label_468ed0;
        case 0x468ed4u: goto label_468ed4;
        case 0x468ed8u: goto label_468ed8;
        case 0x468edcu: goto label_468edc;
        case 0x468ee0u: goto label_468ee0;
        case 0x468ee4u: goto label_468ee4;
        case 0x468ee8u: goto label_468ee8;
        case 0x468eecu: goto label_468eec;
        case 0x468ef0u: goto label_468ef0;
        case 0x468ef4u: goto label_468ef4;
        case 0x468ef8u: goto label_468ef8;
        case 0x468efcu: goto label_468efc;
        case 0x468f00u: goto label_468f00;
        case 0x468f04u: goto label_468f04;
        case 0x468f08u: goto label_468f08;
        case 0x468f0cu: goto label_468f0c;
        case 0x468f10u: goto label_468f10;
        case 0x468f14u: goto label_468f14;
        case 0x468f18u: goto label_468f18;
        case 0x468f1cu: goto label_468f1c;
        case 0x468f20u: goto label_468f20;
        case 0x468f24u: goto label_468f24;
        case 0x468f28u: goto label_468f28;
        case 0x468f2cu: goto label_468f2c;
        case 0x468f30u: goto label_468f30;
        case 0x468f34u: goto label_468f34;
        case 0x468f38u: goto label_468f38;
        case 0x468f3cu: goto label_468f3c;
        case 0x468f40u: goto label_468f40;
        case 0x468f44u: goto label_468f44;
        case 0x468f48u: goto label_468f48;
        case 0x468f4cu: goto label_468f4c;
        case 0x468f50u: goto label_468f50;
        case 0x468f54u: goto label_468f54;
        case 0x468f58u: goto label_468f58;
        case 0x468f5cu: goto label_468f5c;
        case 0x468f60u: goto label_468f60;
        case 0x468f64u: goto label_468f64;
        case 0x468f68u: goto label_468f68;
        case 0x468f6cu: goto label_468f6c;
        case 0x468f70u: goto label_468f70;
        case 0x468f74u: goto label_468f74;
        case 0x468f78u: goto label_468f78;
        case 0x468f7cu: goto label_468f7c;
        case 0x468f80u: goto label_468f80;
        case 0x468f84u: goto label_468f84;
        case 0x468f88u: goto label_468f88;
        case 0x468f8cu: goto label_468f8c;
        case 0x468f90u: goto label_468f90;
        case 0x468f94u: goto label_468f94;
        case 0x468f98u: goto label_468f98;
        case 0x468f9cu: goto label_468f9c;
        case 0x468fa0u: goto label_468fa0;
        case 0x468fa4u: goto label_468fa4;
        case 0x468fa8u: goto label_468fa8;
        case 0x468facu: goto label_468fac;
        case 0x468fb0u: goto label_468fb0;
        case 0x468fb4u: goto label_468fb4;
        case 0x468fb8u: goto label_468fb8;
        case 0x468fbcu: goto label_468fbc;
        case 0x468fc0u: goto label_468fc0;
        case 0x468fc4u: goto label_468fc4;
        case 0x468fc8u: goto label_468fc8;
        case 0x468fccu: goto label_468fcc;
        case 0x468fd0u: goto label_468fd0;
        case 0x468fd4u: goto label_468fd4;
        case 0x468fd8u: goto label_468fd8;
        case 0x468fdcu: goto label_468fdc;
        case 0x468fe0u: goto label_468fe0;
        case 0x468fe4u: goto label_468fe4;
        case 0x468fe8u: goto label_468fe8;
        case 0x468fecu: goto label_468fec;
        case 0x468ff0u: goto label_468ff0;
        case 0x468ff4u: goto label_468ff4;
        case 0x468ff8u: goto label_468ff8;
        case 0x468ffcu: goto label_468ffc;
        case 0x469000u: goto label_469000;
        case 0x469004u: goto label_469004;
        case 0x469008u: goto label_469008;
        case 0x46900cu: goto label_46900c;
        case 0x469010u: goto label_469010;
        case 0x469014u: goto label_469014;
        case 0x469018u: goto label_469018;
        case 0x46901cu: goto label_46901c;
        case 0x469020u: goto label_469020;
        case 0x469024u: goto label_469024;
        case 0x469028u: goto label_469028;
        case 0x46902cu: goto label_46902c;
        case 0x469030u: goto label_469030;
        case 0x469034u: goto label_469034;
        case 0x469038u: goto label_469038;
        case 0x46903cu: goto label_46903c;
        case 0x469040u: goto label_469040;
        case 0x469044u: goto label_469044;
        case 0x469048u: goto label_469048;
        case 0x46904cu: goto label_46904c;
        case 0x469050u: goto label_469050;
        case 0x469054u: goto label_469054;
        case 0x469058u: goto label_469058;
        case 0x46905cu: goto label_46905c;
        case 0x469060u: goto label_469060;
        case 0x469064u: goto label_469064;
        case 0x469068u: goto label_469068;
        case 0x46906cu: goto label_46906c;
        case 0x469070u: goto label_469070;
        case 0x469074u: goto label_469074;
        case 0x469078u: goto label_469078;
        case 0x46907cu: goto label_46907c;
        case 0x469080u: goto label_469080;
        case 0x469084u: goto label_469084;
        case 0x469088u: goto label_469088;
        case 0x46908cu: goto label_46908c;
        case 0x469090u: goto label_469090;
        case 0x469094u: goto label_469094;
        case 0x469098u: goto label_469098;
        case 0x46909cu: goto label_46909c;
        case 0x4690a0u: goto label_4690a0;
        case 0x4690a4u: goto label_4690a4;
        case 0x4690a8u: goto label_4690a8;
        case 0x4690acu: goto label_4690ac;
        case 0x4690b0u: goto label_4690b0;
        case 0x4690b4u: goto label_4690b4;
        case 0x4690b8u: goto label_4690b8;
        case 0x4690bcu: goto label_4690bc;
        case 0x4690c0u: goto label_4690c0;
        case 0x4690c4u: goto label_4690c4;
        case 0x4690c8u: goto label_4690c8;
        case 0x4690ccu: goto label_4690cc;
        case 0x4690d0u: goto label_4690d0;
        case 0x4690d4u: goto label_4690d4;
        case 0x4690d8u: goto label_4690d8;
        case 0x4690dcu: goto label_4690dc;
        case 0x4690e0u: goto label_4690e0;
        case 0x4690e4u: goto label_4690e4;
        case 0x4690e8u: goto label_4690e8;
        case 0x4690ecu: goto label_4690ec;
        case 0x4690f0u: goto label_4690f0;
        case 0x4690f4u: goto label_4690f4;
        case 0x4690f8u: goto label_4690f8;
        case 0x4690fcu: goto label_4690fc;
        case 0x469100u: goto label_469100;
        case 0x469104u: goto label_469104;
        case 0x469108u: goto label_469108;
        case 0x46910cu: goto label_46910c;
        case 0x469110u: goto label_469110;
        case 0x469114u: goto label_469114;
        case 0x469118u: goto label_469118;
        case 0x46911cu: goto label_46911c;
        case 0x469120u: goto label_469120;
        case 0x469124u: goto label_469124;
        case 0x469128u: goto label_469128;
        case 0x46912cu: goto label_46912c;
        case 0x469130u: goto label_469130;
        case 0x469134u: goto label_469134;
        case 0x469138u: goto label_469138;
        case 0x46913cu: goto label_46913c;
        case 0x469140u: goto label_469140;
        case 0x469144u: goto label_469144;
        case 0x469148u: goto label_469148;
        case 0x46914cu: goto label_46914c;
        case 0x469150u: goto label_469150;
        case 0x469154u: goto label_469154;
        case 0x469158u: goto label_469158;
        case 0x46915cu: goto label_46915c;
        case 0x469160u: goto label_469160;
        case 0x469164u: goto label_469164;
        case 0x469168u: goto label_469168;
        case 0x46916cu: goto label_46916c;
        case 0x469170u: goto label_469170;
        case 0x469174u: goto label_469174;
        case 0x469178u: goto label_469178;
        case 0x46917cu: goto label_46917c;
        case 0x469180u: goto label_469180;
        case 0x469184u: goto label_469184;
        case 0x469188u: goto label_469188;
        case 0x46918cu: goto label_46918c;
        case 0x469190u: goto label_469190;
        case 0x469194u: goto label_469194;
        case 0x469198u: goto label_469198;
        case 0x46919cu: goto label_46919c;
        case 0x4691a0u: goto label_4691a0;
        case 0x4691a4u: goto label_4691a4;
        case 0x4691a8u: goto label_4691a8;
        case 0x4691acu: goto label_4691ac;
        case 0x4691b0u: goto label_4691b0;
        case 0x4691b4u: goto label_4691b4;
        case 0x4691b8u: goto label_4691b8;
        case 0x4691bcu: goto label_4691bc;
        case 0x4691c0u: goto label_4691c0;
        case 0x4691c4u: goto label_4691c4;
        case 0x4691c8u: goto label_4691c8;
        case 0x4691ccu: goto label_4691cc;
        case 0x4691d0u: goto label_4691d0;
        case 0x4691d4u: goto label_4691d4;
        case 0x4691d8u: goto label_4691d8;
        case 0x4691dcu: goto label_4691dc;
        case 0x4691e0u: goto label_4691e0;
        case 0x4691e4u: goto label_4691e4;
        case 0x4691e8u: goto label_4691e8;
        case 0x4691ecu: goto label_4691ec;
        case 0x4691f0u: goto label_4691f0;
        case 0x4691f4u: goto label_4691f4;
        case 0x4691f8u: goto label_4691f8;
        case 0x4691fcu: goto label_4691fc;
        case 0x469200u: goto label_469200;
        case 0x469204u: goto label_469204;
        case 0x469208u: goto label_469208;
        case 0x46920cu: goto label_46920c;
        case 0x469210u: goto label_469210;
        case 0x469214u: goto label_469214;
        case 0x469218u: goto label_469218;
        case 0x46921cu: goto label_46921c;
        case 0x469220u: goto label_469220;
        case 0x469224u: goto label_469224;
        case 0x469228u: goto label_469228;
        case 0x46922cu: goto label_46922c;
        case 0x469230u: goto label_469230;
        case 0x469234u: goto label_469234;
        case 0x469238u: goto label_469238;
        case 0x46923cu: goto label_46923c;
        case 0x469240u: goto label_469240;
        case 0x469244u: goto label_469244;
        case 0x469248u: goto label_469248;
        case 0x46924cu: goto label_46924c;
        case 0x469250u: goto label_469250;
        case 0x469254u: goto label_469254;
        case 0x469258u: goto label_469258;
        case 0x46925cu: goto label_46925c;
        case 0x469260u: goto label_469260;
        case 0x469264u: goto label_469264;
        case 0x469268u: goto label_469268;
        case 0x46926cu: goto label_46926c;
        case 0x469270u: goto label_469270;
        case 0x469274u: goto label_469274;
        case 0x469278u: goto label_469278;
        case 0x46927cu: goto label_46927c;
        case 0x469280u: goto label_469280;
        case 0x469284u: goto label_469284;
        case 0x469288u: goto label_469288;
        case 0x46928cu: goto label_46928c;
        case 0x469290u: goto label_469290;
        case 0x469294u: goto label_469294;
        case 0x469298u: goto label_469298;
        case 0x46929cu: goto label_46929c;
        case 0x4692a0u: goto label_4692a0;
        case 0x4692a4u: goto label_4692a4;
        case 0x4692a8u: goto label_4692a8;
        case 0x4692acu: goto label_4692ac;
        case 0x4692b0u: goto label_4692b0;
        case 0x4692b4u: goto label_4692b4;
        case 0x4692b8u: goto label_4692b8;
        case 0x4692bcu: goto label_4692bc;
        case 0x4692c0u: goto label_4692c0;
        case 0x4692c4u: goto label_4692c4;
        case 0x4692c8u: goto label_4692c8;
        case 0x4692ccu: goto label_4692cc;
        case 0x4692d0u: goto label_4692d0;
        case 0x4692d4u: goto label_4692d4;
        case 0x4692d8u: goto label_4692d8;
        case 0x4692dcu: goto label_4692dc;
        case 0x4692e0u: goto label_4692e0;
        case 0x4692e4u: goto label_4692e4;
        case 0x4692e8u: goto label_4692e8;
        case 0x4692ecu: goto label_4692ec;
        case 0x4692f0u: goto label_4692f0;
        case 0x4692f4u: goto label_4692f4;
        case 0x4692f8u: goto label_4692f8;
        case 0x4692fcu: goto label_4692fc;
        case 0x469300u: goto label_469300;
        case 0x469304u: goto label_469304;
        case 0x469308u: goto label_469308;
        case 0x46930cu: goto label_46930c;
        case 0x469310u: goto label_469310;
        case 0x469314u: goto label_469314;
        case 0x469318u: goto label_469318;
        case 0x46931cu: goto label_46931c;
        case 0x469320u: goto label_469320;
        case 0x469324u: goto label_469324;
        case 0x469328u: goto label_469328;
        case 0x46932cu: goto label_46932c;
        case 0x469330u: goto label_469330;
        case 0x469334u: goto label_469334;
        case 0x469338u: goto label_469338;
        case 0x46933cu: goto label_46933c;
        case 0x469340u: goto label_469340;
        case 0x469344u: goto label_469344;
        case 0x469348u: goto label_469348;
        case 0x46934cu: goto label_46934c;
        case 0x469350u: goto label_469350;
        case 0x469354u: goto label_469354;
        case 0x469358u: goto label_469358;
        case 0x46935cu: goto label_46935c;
        case 0x469360u: goto label_469360;
        case 0x469364u: goto label_469364;
        case 0x469368u: goto label_469368;
        case 0x46936cu: goto label_46936c;
        case 0x469370u: goto label_469370;
        case 0x469374u: goto label_469374;
        case 0x469378u: goto label_469378;
        case 0x46937cu: goto label_46937c;
        case 0x469380u: goto label_469380;
        case 0x469384u: goto label_469384;
        case 0x469388u: goto label_469388;
        case 0x46938cu: goto label_46938c;
        case 0x469390u: goto label_469390;
        case 0x469394u: goto label_469394;
        case 0x469398u: goto label_469398;
        case 0x46939cu: goto label_46939c;
        case 0x4693a0u: goto label_4693a0;
        case 0x4693a4u: goto label_4693a4;
        case 0x4693a8u: goto label_4693a8;
        case 0x4693acu: goto label_4693ac;
        case 0x4693b0u: goto label_4693b0;
        case 0x4693b4u: goto label_4693b4;
        case 0x4693b8u: goto label_4693b8;
        case 0x4693bcu: goto label_4693bc;
        case 0x4693c0u: goto label_4693c0;
        case 0x4693c4u: goto label_4693c4;
        case 0x4693c8u: goto label_4693c8;
        case 0x4693ccu: goto label_4693cc;
        case 0x4693d0u: goto label_4693d0;
        case 0x4693d4u: goto label_4693d4;
        case 0x4693d8u: goto label_4693d8;
        case 0x4693dcu: goto label_4693dc;
        case 0x4693e0u: goto label_4693e0;
        case 0x4693e4u: goto label_4693e4;
        case 0x4693e8u: goto label_4693e8;
        case 0x4693ecu: goto label_4693ec;
        case 0x4693f0u: goto label_4693f0;
        case 0x4693f4u: goto label_4693f4;
        case 0x4693f8u: goto label_4693f8;
        case 0x4693fcu: goto label_4693fc;
        case 0x469400u: goto label_469400;
        case 0x469404u: goto label_469404;
        case 0x469408u: goto label_469408;
        case 0x46940cu: goto label_46940c;
        case 0x469410u: goto label_469410;
        case 0x469414u: goto label_469414;
        case 0x469418u: goto label_469418;
        case 0x46941cu: goto label_46941c;
        case 0x469420u: goto label_469420;
        case 0x469424u: goto label_469424;
        case 0x469428u: goto label_469428;
        case 0x46942cu: goto label_46942c;
        case 0x469430u: goto label_469430;
        case 0x469434u: goto label_469434;
        case 0x469438u: goto label_469438;
        case 0x46943cu: goto label_46943c;
        case 0x469440u: goto label_469440;
        case 0x469444u: goto label_469444;
        case 0x469448u: goto label_469448;
        case 0x46944cu: goto label_46944c;
        case 0x469450u: goto label_469450;
        case 0x469454u: goto label_469454;
        case 0x469458u: goto label_469458;
        case 0x46945cu: goto label_46945c;
        case 0x469460u: goto label_469460;
        case 0x469464u: goto label_469464;
        case 0x469468u: goto label_469468;
        case 0x46946cu: goto label_46946c;
        case 0x469470u: goto label_469470;
        case 0x469474u: goto label_469474;
        case 0x469478u: goto label_469478;
        case 0x46947cu: goto label_46947c;
        case 0x469480u: goto label_469480;
        case 0x469484u: goto label_469484;
        case 0x469488u: goto label_469488;
        case 0x46948cu: goto label_46948c;
        case 0x469490u: goto label_469490;
        case 0x469494u: goto label_469494;
        case 0x469498u: goto label_469498;
        case 0x46949cu: goto label_46949c;
        case 0x4694a0u: goto label_4694a0;
        case 0x4694a4u: goto label_4694a4;
        case 0x4694a8u: goto label_4694a8;
        case 0x4694acu: goto label_4694ac;
        case 0x4694b0u: goto label_4694b0;
        case 0x4694b4u: goto label_4694b4;
        case 0x4694b8u: goto label_4694b8;
        case 0x4694bcu: goto label_4694bc;
        case 0x4694c0u: goto label_4694c0;
        case 0x4694c4u: goto label_4694c4;
        case 0x4694c8u: goto label_4694c8;
        case 0x4694ccu: goto label_4694cc;
        case 0x4694d0u: goto label_4694d0;
        case 0x4694d4u: goto label_4694d4;
        case 0x4694d8u: goto label_4694d8;
        case 0x4694dcu: goto label_4694dc;
        case 0x4694e0u: goto label_4694e0;
        case 0x4694e4u: goto label_4694e4;
        case 0x4694e8u: goto label_4694e8;
        case 0x4694ecu: goto label_4694ec;
        case 0x4694f0u: goto label_4694f0;
        case 0x4694f4u: goto label_4694f4;
        case 0x4694f8u: goto label_4694f8;
        case 0x4694fcu: goto label_4694fc;
        case 0x469500u: goto label_469500;
        case 0x469504u: goto label_469504;
        case 0x469508u: goto label_469508;
        case 0x46950cu: goto label_46950c;
        case 0x469510u: goto label_469510;
        case 0x469514u: goto label_469514;
        case 0x469518u: goto label_469518;
        case 0x46951cu: goto label_46951c;
        case 0x469520u: goto label_469520;
        case 0x469524u: goto label_469524;
        case 0x469528u: goto label_469528;
        case 0x46952cu: goto label_46952c;
        case 0x469530u: goto label_469530;
        case 0x469534u: goto label_469534;
        case 0x469538u: goto label_469538;
        case 0x46953cu: goto label_46953c;
        case 0x469540u: goto label_469540;
        case 0x469544u: goto label_469544;
        case 0x469548u: goto label_469548;
        case 0x46954cu: goto label_46954c;
        case 0x469550u: goto label_469550;
        case 0x469554u: goto label_469554;
        case 0x469558u: goto label_469558;
        case 0x46955cu: goto label_46955c;
        case 0x469560u: goto label_469560;
        case 0x469564u: goto label_469564;
        case 0x469568u: goto label_469568;
        case 0x46956cu: goto label_46956c;
        case 0x469570u: goto label_469570;
        case 0x469574u: goto label_469574;
        case 0x469578u: goto label_469578;
        case 0x46957cu: goto label_46957c;
        case 0x469580u: goto label_469580;
        case 0x469584u: goto label_469584;
        case 0x469588u: goto label_469588;
        case 0x46958cu: goto label_46958c;
        case 0x469590u: goto label_469590;
        case 0x469594u: goto label_469594;
        case 0x469598u: goto label_469598;
        case 0x46959cu: goto label_46959c;
        case 0x4695a0u: goto label_4695a0;
        case 0x4695a4u: goto label_4695a4;
        case 0x4695a8u: goto label_4695a8;
        case 0x4695acu: goto label_4695ac;
        case 0x4695b0u: goto label_4695b0;
        case 0x4695b4u: goto label_4695b4;
        case 0x4695b8u: goto label_4695b8;
        case 0x4695bcu: goto label_4695bc;
        case 0x4695c0u: goto label_4695c0;
        case 0x4695c4u: goto label_4695c4;
        case 0x4695c8u: goto label_4695c8;
        case 0x4695ccu: goto label_4695cc;
        case 0x4695d0u: goto label_4695d0;
        case 0x4695d4u: goto label_4695d4;
        case 0x4695d8u: goto label_4695d8;
        case 0x4695dcu: goto label_4695dc;
        case 0x4695e0u: goto label_4695e0;
        case 0x4695e4u: goto label_4695e4;
        case 0x4695e8u: goto label_4695e8;
        case 0x4695ecu: goto label_4695ec;
        case 0x4695f0u: goto label_4695f0;
        case 0x4695f4u: goto label_4695f4;
        case 0x4695f8u: goto label_4695f8;
        case 0x4695fcu: goto label_4695fc;
        case 0x469600u: goto label_469600;
        case 0x469604u: goto label_469604;
        case 0x469608u: goto label_469608;
        case 0x46960cu: goto label_46960c;
        case 0x469610u: goto label_469610;
        case 0x469614u: goto label_469614;
        case 0x469618u: goto label_469618;
        case 0x46961cu: goto label_46961c;
        case 0x469620u: goto label_469620;
        case 0x469624u: goto label_469624;
        case 0x469628u: goto label_469628;
        case 0x46962cu: goto label_46962c;
        case 0x469630u: goto label_469630;
        case 0x469634u: goto label_469634;
        case 0x469638u: goto label_469638;
        case 0x46963cu: goto label_46963c;
        case 0x469640u: goto label_469640;
        case 0x469644u: goto label_469644;
        case 0x469648u: goto label_469648;
        case 0x46964cu: goto label_46964c;
        case 0x469650u: goto label_469650;
        case 0x469654u: goto label_469654;
        case 0x469658u: goto label_469658;
        case 0x46965cu: goto label_46965c;
        case 0x469660u: goto label_469660;
        case 0x469664u: goto label_469664;
        case 0x469668u: goto label_469668;
        case 0x46966cu: goto label_46966c;
        case 0x469670u: goto label_469670;
        case 0x469674u: goto label_469674;
        case 0x469678u: goto label_469678;
        case 0x46967cu: goto label_46967c;
        case 0x469680u: goto label_469680;
        case 0x469684u: goto label_469684;
        case 0x469688u: goto label_469688;
        case 0x46968cu: goto label_46968c;
        case 0x469690u: goto label_469690;
        case 0x469694u: goto label_469694;
        case 0x469698u: goto label_469698;
        case 0x46969cu: goto label_46969c;
        case 0x4696a0u: goto label_4696a0;
        case 0x4696a4u: goto label_4696a4;
        case 0x4696a8u: goto label_4696a8;
        case 0x4696acu: goto label_4696ac;
        case 0x4696b0u: goto label_4696b0;
        case 0x4696b4u: goto label_4696b4;
        case 0x4696b8u: goto label_4696b8;
        case 0x4696bcu: goto label_4696bc;
        case 0x4696c0u: goto label_4696c0;
        case 0x4696c4u: goto label_4696c4;
        case 0x4696c8u: goto label_4696c8;
        case 0x4696ccu: goto label_4696cc;
        case 0x4696d0u: goto label_4696d0;
        case 0x4696d4u: goto label_4696d4;
        case 0x4696d8u: goto label_4696d8;
        case 0x4696dcu: goto label_4696dc;
        case 0x4696e0u: goto label_4696e0;
        case 0x4696e4u: goto label_4696e4;
        case 0x4696e8u: goto label_4696e8;
        case 0x4696ecu: goto label_4696ec;
        case 0x4696f0u: goto label_4696f0;
        case 0x4696f4u: goto label_4696f4;
        case 0x4696f8u: goto label_4696f8;
        case 0x4696fcu: goto label_4696fc;
        case 0x469700u: goto label_469700;
        case 0x469704u: goto label_469704;
        case 0x469708u: goto label_469708;
        case 0x46970cu: goto label_46970c;
        case 0x469710u: goto label_469710;
        case 0x469714u: goto label_469714;
        case 0x469718u: goto label_469718;
        case 0x46971cu: goto label_46971c;
        case 0x469720u: goto label_469720;
        case 0x469724u: goto label_469724;
        case 0x469728u: goto label_469728;
        case 0x46972cu: goto label_46972c;
        case 0x469730u: goto label_469730;
        case 0x469734u: goto label_469734;
        case 0x469738u: goto label_469738;
        case 0x46973cu: goto label_46973c;
        case 0x469740u: goto label_469740;
        case 0x469744u: goto label_469744;
        case 0x469748u: goto label_469748;
        case 0x46974cu: goto label_46974c;
        case 0x469750u: goto label_469750;
        case 0x469754u: goto label_469754;
        case 0x469758u: goto label_469758;
        case 0x46975cu: goto label_46975c;
        case 0x469760u: goto label_469760;
        case 0x469764u: goto label_469764;
        case 0x469768u: goto label_469768;
        case 0x46976cu: goto label_46976c;
        case 0x469770u: goto label_469770;
        case 0x469774u: goto label_469774;
        case 0x469778u: goto label_469778;
        case 0x46977cu: goto label_46977c;
        case 0x469780u: goto label_469780;
        case 0x469784u: goto label_469784;
        case 0x469788u: goto label_469788;
        case 0x46978cu: goto label_46978c;
        case 0x469790u: goto label_469790;
        case 0x469794u: goto label_469794;
        case 0x469798u: goto label_469798;
        case 0x46979cu: goto label_46979c;
        case 0x4697a0u: goto label_4697a0;
        case 0x4697a4u: goto label_4697a4;
        case 0x4697a8u: goto label_4697a8;
        case 0x4697acu: goto label_4697ac;
        case 0x4697b0u: goto label_4697b0;
        case 0x4697b4u: goto label_4697b4;
        case 0x4697b8u: goto label_4697b8;
        case 0x4697bcu: goto label_4697bc;
        case 0x4697c0u: goto label_4697c0;
        case 0x4697c4u: goto label_4697c4;
        case 0x4697c8u: goto label_4697c8;
        case 0x4697ccu: goto label_4697cc;
        case 0x4697d0u: goto label_4697d0;
        case 0x4697d4u: goto label_4697d4;
        case 0x4697d8u: goto label_4697d8;
        case 0x4697dcu: goto label_4697dc;
        case 0x4697e0u: goto label_4697e0;
        case 0x4697e4u: goto label_4697e4;
        case 0x4697e8u: goto label_4697e8;
        case 0x4697ecu: goto label_4697ec;
        case 0x4697f0u: goto label_4697f0;
        case 0x4697f4u: goto label_4697f4;
        case 0x4697f8u: goto label_4697f8;
        case 0x4697fcu: goto label_4697fc;
        case 0x469800u: goto label_469800;
        case 0x469804u: goto label_469804;
        case 0x469808u: goto label_469808;
        case 0x46980cu: goto label_46980c;
        case 0x469810u: goto label_469810;
        case 0x469814u: goto label_469814;
        case 0x469818u: goto label_469818;
        case 0x46981cu: goto label_46981c;
        case 0x469820u: goto label_469820;
        case 0x469824u: goto label_469824;
        case 0x469828u: goto label_469828;
        case 0x46982cu: goto label_46982c;
        case 0x469830u: goto label_469830;
        case 0x469834u: goto label_469834;
        case 0x469838u: goto label_469838;
        case 0x46983cu: goto label_46983c;
        case 0x469840u: goto label_469840;
        case 0x469844u: goto label_469844;
        case 0x469848u: goto label_469848;
        case 0x46984cu: goto label_46984c;
        case 0x469850u: goto label_469850;
        case 0x469854u: goto label_469854;
        case 0x469858u: goto label_469858;
        case 0x46985cu: goto label_46985c;
        case 0x469860u: goto label_469860;
        case 0x469864u: goto label_469864;
        case 0x469868u: goto label_469868;
        case 0x46986cu: goto label_46986c;
        case 0x469870u: goto label_469870;
        case 0x469874u: goto label_469874;
        case 0x469878u: goto label_469878;
        case 0x46987cu: goto label_46987c;
        case 0x469880u: goto label_469880;
        case 0x469884u: goto label_469884;
        case 0x469888u: goto label_469888;
        case 0x46988cu: goto label_46988c;
        case 0x469890u: goto label_469890;
        case 0x469894u: goto label_469894;
        case 0x469898u: goto label_469898;
        case 0x46989cu: goto label_46989c;
        case 0x4698a0u: goto label_4698a0;
        case 0x4698a4u: goto label_4698a4;
        case 0x4698a8u: goto label_4698a8;
        case 0x4698acu: goto label_4698ac;
        case 0x4698b0u: goto label_4698b0;
        case 0x4698b4u: goto label_4698b4;
        case 0x4698b8u: goto label_4698b8;
        case 0x4698bcu: goto label_4698bc;
        case 0x4698c0u: goto label_4698c0;
        case 0x4698c4u: goto label_4698c4;
        case 0x4698c8u: goto label_4698c8;
        case 0x4698ccu: goto label_4698cc;
        case 0x4698d0u: goto label_4698d0;
        case 0x4698d4u: goto label_4698d4;
        case 0x4698d8u: goto label_4698d8;
        case 0x4698dcu: goto label_4698dc;
        case 0x4698e0u: goto label_4698e0;
        case 0x4698e4u: goto label_4698e4;
        case 0x4698e8u: goto label_4698e8;
        case 0x4698ecu: goto label_4698ec;
        case 0x4698f0u: goto label_4698f0;
        case 0x4698f4u: goto label_4698f4;
        case 0x4698f8u: goto label_4698f8;
        case 0x4698fcu: goto label_4698fc;
        case 0x469900u: goto label_469900;
        case 0x469904u: goto label_469904;
        case 0x469908u: goto label_469908;
        case 0x46990cu: goto label_46990c;
        case 0x469910u: goto label_469910;
        case 0x469914u: goto label_469914;
        case 0x469918u: goto label_469918;
        case 0x46991cu: goto label_46991c;
        case 0x469920u: goto label_469920;
        case 0x469924u: goto label_469924;
        case 0x469928u: goto label_469928;
        case 0x46992cu: goto label_46992c;
        case 0x469930u: goto label_469930;
        case 0x469934u: goto label_469934;
        case 0x469938u: goto label_469938;
        case 0x46993cu: goto label_46993c;
        case 0x469940u: goto label_469940;
        case 0x469944u: goto label_469944;
        case 0x469948u: goto label_469948;
        case 0x46994cu: goto label_46994c;
        case 0x469950u: goto label_469950;
        case 0x469954u: goto label_469954;
        case 0x469958u: goto label_469958;
        case 0x46995cu: goto label_46995c;
        case 0x469960u: goto label_469960;
        case 0x469964u: goto label_469964;
        case 0x469968u: goto label_469968;
        case 0x46996cu: goto label_46996c;
        case 0x469970u: goto label_469970;
        case 0x469974u: goto label_469974;
        case 0x469978u: goto label_469978;
        case 0x46997cu: goto label_46997c;
        case 0x469980u: goto label_469980;
        case 0x469984u: goto label_469984;
        case 0x469988u: goto label_469988;
        case 0x46998cu: goto label_46998c;
        case 0x469990u: goto label_469990;
        case 0x469994u: goto label_469994;
        case 0x469998u: goto label_469998;
        case 0x46999cu: goto label_46999c;
        case 0x4699a0u: goto label_4699a0;
        case 0x4699a4u: goto label_4699a4;
        case 0x4699a8u: goto label_4699a8;
        case 0x4699acu: goto label_4699ac;
        case 0x4699b0u: goto label_4699b0;
        case 0x4699b4u: goto label_4699b4;
        case 0x4699b8u: goto label_4699b8;
        case 0x4699bcu: goto label_4699bc;
        case 0x4699c0u: goto label_4699c0;
        case 0x4699c4u: goto label_4699c4;
        case 0x4699c8u: goto label_4699c8;
        case 0x4699ccu: goto label_4699cc;
        case 0x4699d0u: goto label_4699d0;
        case 0x4699d4u: goto label_4699d4;
        case 0x4699d8u: goto label_4699d8;
        case 0x4699dcu: goto label_4699dc;
        case 0x4699e0u: goto label_4699e0;
        case 0x4699e4u: goto label_4699e4;
        case 0x4699e8u: goto label_4699e8;
        case 0x4699ecu: goto label_4699ec;
        case 0x4699f0u: goto label_4699f0;
        case 0x4699f4u: goto label_4699f4;
        case 0x4699f8u: goto label_4699f8;
        case 0x4699fcu: goto label_4699fc;
        case 0x469a00u: goto label_469a00;
        case 0x469a04u: goto label_469a04;
        case 0x469a08u: goto label_469a08;
        case 0x469a0cu: goto label_469a0c;
        case 0x469a10u: goto label_469a10;
        case 0x469a14u: goto label_469a14;
        case 0x469a18u: goto label_469a18;
        case 0x469a1cu: goto label_469a1c;
        case 0x469a20u: goto label_469a20;
        case 0x469a24u: goto label_469a24;
        case 0x469a28u: goto label_469a28;
        case 0x469a2cu: goto label_469a2c;
        case 0x469a30u: goto label_469a30;
        case 0x469a34u: goto label_469a34;
        case 0x469a38u: goto label_469a38;
        case 0x469a3cu: goto label_469a3c;
        case 0x469a40u: goto label_469a40;
        case 0x469a44u: goto label_469a44;
        case 0x469a48u: goto label_469a48;
        case 0x469a4cu: goto label_469a4c;
        case 0x469a50u: goto label_469a50;
        case 0x469a54u: goto label_469a54;
        case 0x469a58u: goto label_469a58;
        case 0x469a5cu: goto label_469a5c;
        case 0x469a60u: goto label_469a60;
        case 0x469a64u: goto label_469a64;
        case 0x469a68u: goto label_469a68;
        case 0x469a6cu: goto label_469a6c;
        case 0x469a70u: goto label_469a70;
        case 0x469a74u: goto label_469a74;
        case 0x469a78u: goto label_469a78;
        case 0x469a7cu: goto label_469a7c;
        case 0x469a80u: goto label_469a80;
        case 0x469a84u: goto label_469a84;
        case 0x469a88u: goto label_469a88;
        case 0x469a8cu: goto label_469a8c;
        case 0x469a90u: goto label_469a90;
        case 0x469a94u: goto label_469a94;
        case 0x469a98u: goto label_469a98;
        case 0x469a9cu: goto label_469a9c;
        case 0x469aa0u: goto label_469aa0;
        case 0x469aa4u: goto label_469aa4;
        case 0x469aa8u: goto label_469aa8;
        case 0x469aacu: goto label_469aac;
        case 0x469ab0u: goto label_469ab0;
        case 0x469ab4u: goto label_469ab4;
        case 0x469ab8u: goto label_469ab8;
        case 0x469abcu: goto label_469abc;
        case 0x469ac0u: goto label_469ac0;
        case 0x469ac4u: goto label_469ac4;
        case 0x469ac8u: goto label_469ac8;
        case 0x469accu: goto label_469acc;
        case 0x469ad0u: goto label_469ad0;
        case 0x469ad4u: goto label_469ad4;
        case 0x469ad8u: goto label_469ad8;
        case 0x469adcu: goto label_469adc;
        case 0x469ae0u: goto label_469ae0;
        case 0x469ae4u: goto label_469ae4;
        case 0x469ae8u: goto label_469ae8;
        case 0x469aecu: goto label_469aec;
        case 0x469af0u: goto label_469af0;
        case 0x469af4u: goto label_469af4;
        case 0x469af8u: goto label_469af8;
        case 0x469afcu: goto label_469afc;
        case 0x469b00u: goto label_469b00;
        case 0x469b04u: goto label_469b04;
        case 0x469b08u: goto label_469b08;
        case 0x469b0cu: goto label_469b0c;
        case 0x469b10u: goto label_469b10;
        case 0x469b14u: goto label_469b14;
        case 0x469b18u: goto label_469b18;
        case 0x469b1cu: goto label_469b1c;
        case 0x469b20u: goto label_469b20;
        case 0x469b24u: goto label_469b24;
        case 0x469b28u: goto label_469b28;
        case 0x469b2cu: goto label_469b2c;
        case 0x469b30u: goto label_469b30;
        case 0x469b34u: goto label_469b34;
        case 0x469b38u: goto label_469b38;
        case 0x469b3cu: goto label_469b3c;
        case 0x469b40u: goto label_469b40;
        case 0x469b44u: goto label_469b44;
        case 0x469b48u: goto label_469b48;
        case 0x469b4cu: goto label_469b4c;
        case 0x469b50u: goto label_469b50;
        case 0x469b54u: goto label_469b54;
        case 0x469b58u: goto label_469b58;
        case 0x469b5cu: goto label_469b5c;
        case 0x469b60u: goto label_469b60;
        case 0x469b64u: goto label_469b64;
        case 0x469b68u: goto label_469b68;
        case 0x469b6cu: goto label_469b6c;
        case 0x469b70u: goto label_469b70;
        case 0x469b74u: goto label_469b74;
        case 0x469b78u: goto label_469b78;
        case 0x469b7cu: goto label_469b7c;
        case 0x469b80u: goto label_469b80;
        case 0x469b84u: goto label_469b84;
        case 0x469b88u: goto label_469b88;
        case 0x469b8cu: goto label_469b8c;
        case 0x469b90u: goto label_469b90;
        case 0x469b94u: goto label_469b94;
        case 0x469b98u: goto label_469b98;
        case 0x469b9cu: goto label_469b9c;
        case 0x469ba0u: goto label_469ba0;
        case 0x469ba4u: goto label_469ba4;
        case 0x469ba8u: goto label_469ba8;
        case 0x469bacu: goto label_469bac;
        case 0x469bb0u: goto label_469bb0;
        case 0x469bb4u: goto label_469bb4;
        case 0x469bb8u: goto label_469bb8;
        case 0x469bbcu: goto label_469bbc;
        case 0x469bc0u: goto label_469bc0;
        case 0x469bc4u: goto label_469bc4;
        case 0x469bc8u: goto label_469bc8;
        case 0x469bccu: goto label_469bcc;
        case 0x469bd0u: goto label_469bd0;
        case 0x469bd4u: goto label_469bd4;
        case 0x469bd8u: goto label_469bd8;
        case 0x469bdcu: goto label_469bdc;
        case 0x469be0u: goto label_469be0;
        case 0x469be4u: goto label_469be4;
        case 0x469be8u: goto label_469be8;
        case 0x469becu: goto label_469bec;
        case 0x469bf0u: goto label_469bf0;
        case 0x469bf4u: goto label_469bf4;
        case 0x469bf8u: goto label_469bf8;
        case 0x469bfcu: goto label_469bfc;
        case 0x469c00u: goto label_469c00;
        case 0x469c04u: goto label_469c04;
        case 0x469c08u: goto label_469c08;
        case 0x469c0cu: goto label_469c0c;
        case 0x469c10u: goto label_469c10;
        case 0x469c14u: goto label_469c14;
        case 0x469c18u: goto label_469c18;
        case 0x469c1cu: goto label_469c1c;
        case 0x469c20u: goto label_469c20;
        case 0x469c24u: goto label_469c24;
        case 0x469c28u: goto label_469c28;
        case 0x469c2cu: goto label_469c2c;
        case 0x469c30u: goto label_469c30;
        case 0x469c34u: goto label_469c34;
        case 0x469c38u: goto label_469c38;
        case 0x469c3cu: goto label_469c3c;
        case 0x469c40u: goto label_469c40;
        case 0x469c44u: goto label_469c44;
        case 0x469c48u: goto label_469c48;
        case 0x469c4cu: goto label_469c4c;
        case 0x469c50u: goto label_469c50;
        case 0x469c54u: goto label_469c54;
        case 0x469c58u: goto label_469c58;
        case 0x469c5cu: goto label_469c5c;
        case 0x469c60u: goto label_469c60;
        case 0x469c64u: goto label_469c64;
        case 0x469c68u: goto label_469c68;
        case 0x469c6cu: goto label_469c6c;
        case 0x469c70u: goto label_469c70;
        case 0x469c74u: goto label_469c74;
        case 0x469c78u: goto label_469c78;
        case 0x469c7cu: goto label_469c7c;
        case 0x469c80u: goto label_469c80;
        case 0x469c84u: goto label_469c84;
        case 0x469c88u: goto label_469c88;
        case 0x469c8cu: goto label_469c8c;
        case 0x469c90u: goto label_469c90;
        case 0x469c94u: goto label_469c94;
        case 0x469c98u: goto label_469c98;
        case 0x469c9cu: goto label_469c9c;
        case 0x469ca0u: goto label_469ca0;
        case 0x469ca4u: goto label_469ca4;
        case 0x469ca8u: goto label_469ca8;
        case 0x469cacu: goto label_469cac;
        case 0x469cb0u: goto label_469cb0;
        case 0x469cb4u: goto label_469cb4;
        case 0x469cb8u: goto label_469cb8;
        case 0x469cbcu: goto label_469cbc;
        case 0x469cc0u: goto label_469cc0;
        case 0x469cc4u: goto label_469cc4;
        case 0x469cc8u: goto label_469cc8;
        case 0x469cccu: goto label_469ccc;
        case 0x469cd0u: goto label_469cd0;
        case 0x469cd4u: goto label_469cd4;
        case 0x469cd8u: goto label_469cd8;
        case 0x469cdcu: goto label_469cdc;
        case 0x469ce0u: goto label_469ce0;
        case 0x469ce4u: goto label_469ce4;
        case 0x469ce8u: goto label_469ce8;
        case 0x469cecu: goto label_469cec;
        case 0x469cf0u: goto label_469cf0;
        case 0x469cf4u: goto label_469cf4;
        case 0x469cf8u: goto label_469cf8;
        case 0x469cfcu: goto label_469cfc;
        case 0x469d00u: goto label_469d00;
        case 0x469d04u: goto label_469d04;
        case 0x469d08u: goto label_469d08;
        case 0x469d0cu: goto label_469d0c;
        case 0x469d10u: goto label_469d10;
        case 0x469d14u: goto label_469d14;
        case 0x469d18u: goto label_469d18;
        case 0x469d1cu: goto label_469d1c;
        case 0x469d20u: goto label_469d20;
        case 0x469d24u: goto label_469d24;
        case 0x469d28u: goto label_469d28;
        case 0x469d2cu: goto label_469d2c;
        case 0x469d30u: goto label_469d30;
        case 0x469d34u: goto label_469d34;
        case 0x469d38u: goto label_469d38;
        case 0x469d3cu: goto label_469d3c;
        case 0x469d40u: goto label_469d40;
        case 0x469d44u: goto label_469d44;
        case 0x469d48u: goto label_469d48;
        case 0x469d4cu: goto label_469d4c;
        case 0x469d50u: goto label_469d50;
        case 0x469d54u: goto label_469d54;
        case 0x469d58u: goto label_469d58;
        case 0x469d5cu: goto label_469d5c;
        case 0x469d60u: goto label_469d60;
        case 0x469d64u: goto label_469d64;
        case 0x469d68u: goto label_469d68;
        case 0x469d6cu: goto label_469d6c;
        case 0x469d70u: goto label_469d70;
        case 0x469d74u: goto label_469d74;
        case 0x469d78u: goto label_469d78;
        case 0x469d7cu: goto label_469d7c;
        case 0x469d80u: goto label_469d80;
        case 0x469d84u: goto label_469d84;
        case 0x469d88u: goto label_469d88;
        case 0x469d8cu: goto label_469d8c;
        case 0x469d90u: goto label_469d90;
        case 0x469d94u: goto label_469d94;
        case 0x469d98u: goto label_469d98;
        case 0x469d9cu: goto label_469d9c;
        case 0x469da0u: goto label_469da0;
        case 0x469da4u: goto label_469da4;
        case 0x469da8u: goto label_469da8;
        case 0x469dacu: goto label_469dac;
        case 0x469db0u: goto label_469db0;
        case 0x469db4u: goto label_469db4;
        case 0x469db8u: goto label_469db8;
        case 0x469dbcu: goto label_469dbc;
        case 0x469dc0u: goto label_469dc0;
        case 0x469dc4u: goto label_469dc4;
        case 0x469dc8u: goto label_469dc8;
        case 0x469dccu: goto label_469dcc;
        case 0x469dd0u: goto label_469dd0;
        case 0x469dd4u: goto label_469dd4;
        case 0x469dd8u: goto label_469dd8;
        case 0x469ddcu: goto label_469ddc;
        case 0x469de0u: goto label_469de0;
        case 0x469de4u: goto label_469de4;
        case 0x469de8u: goto label_469de8;
        case 0x469decu: goto label_469dec;
        case 0x469df0u: goto label_469df0;
        case 0x469df4u: goto label_469df4;
        case 0x469df8u: goto label_469df8;
        case 0x469dfcu: goto label_469dfc;
        case 0x469e00u: goto label_469e00;
        case 0x469e04u: goto label_469e04;
        case 0x469e08u: goto label_469e08;
        case 0x469e0cu: goto label_469e0c;
        case 0x469e10u: goto label_469e10;
        case 0x469e14u: goto label_469e14;
        case 0x469e18u: goto label_469e18;
        case 0x469e1cu: goto label_469e1c;
        case 0x469e20u: goto label_469e20;
        case 0x469e24u: goto label_469e24;
        case 0x469e28u: goto label_469e28;
        case 0x469e2cu: goto label_469e2c;
        case 0x469e30u: goto label_469e30;
        case 0x469e34u: goto label_469e34;
        case 0x469e38u: goto label_469e38;
        case 0x469e3cu: goto label_469e3c;
        case 0x469e40u: goto label_469e40;
        case 0x469e44u: goto label_469e44;
        case 0x469e48u: goto label_469e48;
        case 0x469e4cu: goto label_469e4c;
        case 0x469e50u: goto label_469e50;
        case 0x469e54u: goto label_469e54;
        case 0x469e58u: goto label_469e58;
        case 0x469e5cu: goto label_469e5c;
        case 0x469e60u: goto label_469e60;
        case 0x469e64u: goto label_469e64;
        case 0x469e68u: goto label_469e68;
        case 0x469e6cu: goto label_469e6c;
        case 0x469e70u: goto label_469e70;
        case 0x469e74u: goto label_469e74;
        case 0x469e78u: goto label_469e78;
        case 0x469e7cu: goto label_469e7c;
        case 0x469e80u: goto label_469e80;
        case 0x469e84u: goto label_469e84;
        case 0x469e88u: goto label_469e88;
        case 0x469e8cu: goto label_469e8c;
        case 0x469e90u: goto label_469e90;
        case 0x469e94u: goto label_469e94;
        case 0x469e98u: goto label_469e98;
        case 0x469e9cu: goto label_469e9c;
        case 0x469ea0u: goto label_469ea0;
        case 0x469ea4u: goto label_469ea4;
        case 0x469ea8u: goto label_469ea8;
        case 0x469eacu: goto label_469eac;
        case 0x469eb0u: goto label_469eb0;
        case 0x469eb4u: goto label_469eb4;
        case 0x469eb8u: goto label_469eb8;
        case 0x469ebcu: goto label_469ebc;
        case 0x469ec0u: goto label_469ec0;
        case 0x469ec4u: goto label_469ec4;
        case 0x469ec8u: goto label_469ec8;
        case 0x469eccu: goto label_469ecc;
        case 0x469ed0u: goto label_469ed0;
        case 0x469ed4u: goto label_469ed4;
        case 0x469ed8u: goto label_469ed8;
        case 0x469edcu: goto label_469edc;
        case 0x469ee0u: goto label_469ee0;
        case 0x469ee4u: goto label_469ee4;
        case 0x469ee8u: goto label_469ee8;
        case 0x469eecu: goto label_469eec;
        case 0x469ef0u: goto label_469ef0;
        case 0x469ef4u: goto label_469ef4;
        case 0x469ef8u: goto label_469ef8;
        case 0x469efcu: goto label_469efc;
        case 0x469f00u: goto label_469f00;
        case 0x469f04u: goto label_469f04;
        case 0x469f08u: goto label_469f08;
        case 0x469f0cu: goto label_469f0c;
        case 0x469f10u: goto label_469f10;
        case 0x469f14u: goto label_469f14;
        case 0x469f18u: goto label_469f18;
        case 0x469f1cu: goto label_469f1c;
        case 0x469f20u: goto label_469f20;
        case 0x469f24u: goto label_469f24;
        case 0x469f28u: goto label_469f28;
        case 0x469f2cu: goto label_469f2c;
        case 0x469f30u: goto label_469f30;
        case 0x469f34u: goto label_469f34;
        case 0x469f38u: goto label_469f38;
        case 0x469f3cu: goto label_469f3c;
        case 0x469f40u: goto label_469f40;
        case 0x469f44u: goto label_469f44;
        case 0x469f48u: goto label_469f48;
        case 0x469f4cu: goto label_469f4c;
        case 0x469f50u: goto label_469f50;
        case 0x469f54u: goto label_469f54;
        case 0x469f58u: goto label_469f58;
        case 0x469f5cu: goto label_469f5c;
        case 0x469f60u: goto label_469f60;
        case 0x469f64u: goto label_469f64;
        case 0x469f68u: goto label_469f68;
        case 0x469f6cu: goto label_469f6c;
        case 0x469f70u: goto label_469f70;
        case 0x469f74u: goto label_469f74;
        case 0x469f78u: goto label_469f78;
        case 0x469f7cu: goto label_469f7c;
        case 0x469f80u: goto label_469f80;
        case 0x469f84u: goto label_469f84;
        case 0x469f88u: goto label_469f88;
        case 0x469f8cu: goto label_469f8c;
        case 0x469f90u: goto label_469f90;
        case 0x469f94u: goto label_469f94;
        case 0x469f98u: goto label_469f98;
        case 0x469f9cu: goto label_469f9c;
        case 0x469fa0u: goto label_469fa0;
        case 0x469fa4u: goto label_469fa4;
        case 0x469fa8u: goto label_469fa8;
        case 0x469facu: goto label_469fac;
        case 0x469fb0u: goto label_469fb0;
        case 0x469fb4u: goto label_469fb4;
        case 0x469fb8u: goto label_469fb8;
        case 0x469fbcu: goto label_469fbc;
        case 0x469fc0u: goto label_469fc0;
        case 0x469fc4u: goto label_469fc4;
        case 0x469fc8u: goto label_469fc8;
        case 0x469fccu: goto label_469fcc;
        case 0x469fd0u: goto label_469fd0;
        case 0x469fd4u: goto label_469fd4;
        case 0x469fd8u: goto label_469fd8;
        case 0x469fdcu: goto label_469fdc;
        case 0x469fe0u: goto label_469fe0;
        case 0x469fe4u: goto label_469fe4;
        case 0x469fe8u: goto label_469fe8;
        case 0x469fecu: goto label_469fec;
        case 0x469ff0u: goto label_469ff0;
        case 0x469ff4u: goto label_469ff4;
        case 0x469ff8u: goto label_469ff8;
        case 0x469ffcu: goto label_469ffc;
        case 0x46a000u: goto label_46a000;
        case 0x46a004u: goto label_46a004;
        case 0x46a008u: goto label_46a008;
        case 0x46a00cu: goto label_46a00c;
        case 0x46a010u: goto label_46a010;
        case 0x46a014u: goto label_46a014;
        case 0x46a018u: goto label_46a018;
        case 0x46a01cu: goto label_46a01c;
        case 0x46a020u: goto label_46a020;
        case 0x46a024u: goto label_46a024;
        case 0x46a028u: goto label_46a028;
        case 0x46a02cu: goto label_46a02c;
        default: break;
    }

    ctx->pc = 0x468a50u;

label_468a50:
    // 0x468a50: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x468a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_468a54:
    // 0x468a54: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x468a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_468a58:
    // 0x468a58: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x468a58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_468a5c:
    // 0x468a5c: 0x0  nop
    ctx->pc = 0x468a5cu;
    // NOP
label_468a60:
    // 0x468a60: 0x0  nop
    ctx->pc = 0x468a60u;
    // NOP
label_468a64:
    // 0x468a64: 0x0  nop
    ctx->pc = 0x468a64u;
    // NOP
label_468a68:
    // 0x468a68: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_468a6c:
    if (ctx->pc == 0x468A6Cu) {
        ctx->pc = 0x468A70u;
        goto label_468a70;
    }
    ctx->pc = 0x468A68u;
    {
        const bool branch_taken_0x468a68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x468a68) {
            ctx->pc = 0x468A54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_468a54;
        }
    }
    ctx->pc = 0x468A70u;
label_468a70:
    // 0x468a70: 0x3e00008  jr          $ra
label_468a74:
    if (ctx->pc == 0x468A74u) {
        ctx->pc = 0x468A78u;
        goto label_468a78;
    }
    ctx->pc = 0x468A70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x468A78u;
label_468a78:
    // 0x468a78: 0x0  nop
    ctx->pc = 0x468a78u;
    // NOP
label_468a7c:
    // 0x468a7c: 0x0  nop
    ctx->pc = 0x468a7cu;
    // NOP
label_468a80:
    // 0x468a80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x468a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_468a84:
    // 0x468a84: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x468a84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_468a88:
    // 0x468a88: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x468a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_468a8c:
    // 0x468a8c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x468a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_468a90:
    // 0x468a90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x468a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_468a94:
    // 0x468a94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x468a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_468a98:
    // 0x468a98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x468a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_468a9c:
    // 0x468a9c: 0x8cb1a140  lw          $s1, -0x5EC0($a1)
    ctx->pc = 0x468a9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294943040)));
label_468aa0:
    // 0x468aa0: 0x90860010  lbu         $a2, 0x10($a0)
    ctx->pc = 0x468aa0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_468aa4:
    // 0x468aa4: 0x8c70d130  lw          $s0, -0x2ED0($v1)
    ctx->pc = 0x468aa4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_468aa8:
    // 0x468aa8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x468aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_468aac:
    // 0x468aac: 0x10c50096  beq         $a2, $a1, . + 4 + (0x96 << 2)
label_468ab0:
    if (ctx->pc == 0x468AB0u) {
        ctx->pc = 0x468AB0u;
            // 0x468ab0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x468AB4u;
        goto label_468ab4;
    }
    ctx->pc = 0x468AACu;
    {
        const bool branch_taken_0x468aac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x468AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x468AACu;
            // 0x468ab0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468aac) {
            ctx->pc = 0x468D08u;
            goto label_468d08;
        }
    }
    ctx->pc = 0x468AB4u;
label_468ab4:
    // 0x468ab4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x468ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_468ab8:
    // 0x468ab8: 0x50c3008c  beql        $a2, $v1, . + 4 + (0x8C << 2)
label_468abc:
    if (ctx->pc == 0x468ABCu) {
        ctx->pc = 0x468ABCu;
            // 0x468abc: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x468AC0u;
        goto label_468ac0;
    }
    ctx->pc = 0x468AB8u;
    {
        const bool branch_taken_0x468ab8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x468ab8) {
            ctx->pc = 0x468ABCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x468AB8u;
            // 0x468abc: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x468CECu;
            goto label_468cec;
        }
    }
    ctx->pc = 0x468AC0u;
label_468ac0:
    // 0x468ac0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x468ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_468ac4:
    // 0x468ac4: 0x50c3004f  beql        $a2, $v1, . + 4 + (0x4F << 2)
label_468ac8:
    if (ctx->pc == 0x468AC8u) {
        ctx->pc = 0x468AC8u;
            // 0x468ac8: 0x3c030300  lui         $v1, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)768 << 16));
        ctx->pc = 0x468ACCu;
        goto label_468acc;
    }
    ctx->pc = 0x468AC4u;
    {
        const bool branch_taken_0x468ac4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x468ac4) {
            ctx->pc = 0x468AC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x468AC4u;
            // 0x468ac8: 0x3c030300  lui         $v1, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)768 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x468C04u;
            goto label_468c04;
        }
    }
    ctx->pc = 0x468ACCu;
label_468acc:
    // 0x468acc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x468accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_468ad0:
    // 0x468ad0: 0x50c30003  beql        $a2, $v1, . + 4 + (0x3 << 2)
label_468ad4:
    if (ctx->pc == 0x468AD4u) {
        ctx->pc = 0x468AD4u;
            // 0x468ad4: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->pc = 0x468AD8u;
        goto label_468ad8;
    }
    ctx->pc = 0x468AD0u;
    {
        const bool branch_taken_0x468ad0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x468ad0) {
            ctx->pc = 0x468AD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x468AD0u;
            // 0x468ad4: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x468AE0u;
            goto label_468ae0;
        }
    }
    ctx->pc = 0x468AD8u;
label_468ad8:
    // 0x468ad8: 0x100000e3  b           . + 4 + (0xE3 << 2)
label_468adc:
    if (ctx->pc == 0x468ADCu) {
        ctx->pc = 0x468ADCu;
            // 0x468adc: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x468AE0u;
        goto label_468ae0;
    }
    ctx->pc = 0x468AD8u;
    {
        const bool branch_taken_0x468ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x468ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x468AD8u;
            // 0x468adc: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468ad8) {
            ctx->pc = 0x468E68u;
            goto label_468e68;
        }
    }
    ctx->pc = 0x468AE0u;
label_468ae0:
    // 0x468ae0: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x468ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_468ae4:
    // 0x468ae4: 0x34640010  ori         $a0, $v1, 0x10
    ctx->pc = 0x468ae4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_468ae8:
    // 0x468ae8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x468ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_468aec:
    // 0x468aec: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x468aecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_468af0:
    // 0x468af0: 0x806675f0  lb          $a2, 0x75F0($v1)
    ctx->pc = 0x468af0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 30192)));
label_468af4:
    // 0x468af4: 0x5382b  sltu        $a3, $zero, $a1
    ctx->pc = 0x468af4u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_468af8:
    // 0x468af8: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x468af8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
label_468afc:
    // 0x468afc: 0x34850020  ori         $a1, $a0, 0x20
    ctx->pc = 0x468afcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
label_468b00:
    // 0x468b00: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x468b00u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_468b04:
    // 0x468b04: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x468b04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_468b08:
    // 0x468b08: 0x8c8706a8  lw          $a3, 0x6A8($a0)
    ctx->pc = 0x468b08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1704)));
label_468b0c:
    // 0x468b0c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x468b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_468b10:
    // 0x468b10: 0xa06675f0  sb          $a2, 0x75F0($v1)
    ctx->pc = 0x468b10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 30192), (uint8_t)GPR_U32(ctx, 6));
label_468b14:
    // 0x468b14: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x468b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_468b18:
    // 0x468b18: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x468b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_468b1c:
    // 0x468b1c: 0x8c6306a8  lw          $v1, 0x6A8($v1)
    ctx->pc = 0x468b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1704)));
label_468b20:
    // 0x468b20: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x468b20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_468b24:
    // 0x468b24: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x468b24u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_468b28:
    // 0x468b28: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x468b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_468b2c:
    // 0x468b2c: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x468b2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
label_468b30:
    // 0x468b30: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x468b30u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_468b34:
    // 0x468b34: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x468b34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_468b38:
    // 0x468b38: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_468b3c:
    if (ctx->pc == 0x468B3Cu) {
        ctx->pc = 0x468B40u;
        goto label_468b40;
    }
    ctx->pc = 0x468B38u;
    {
        const bool branch_taken_0x468b38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x468b38) {
            ctx->pc = 0x468B48u;
            goto label_468b48;
        }
    }
    ctx->pc = 0x468B40u;
label_468b40:
    // 0x468b40: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x468b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_468b44:
    // 0x468b44: 0x8c6406b0  lw          $a0, 0x6B0($v1)
    ctx->pc = 0x468b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1712)));
label_468b48:
    // 0x468b48: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x468b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_468b4c:
    // 0x468b4c: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x468b4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
label_468b50:
    // 0x468b50: 0x8c6306b0  lw          $v1, 0x6B0($v1)
    ctx->pc = 0x468b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1712)));
label_468b54:
    // 0x468b54: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x468b54u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_468b58:
    // 0x468b58: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x468b58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_468b5c:
    // 0x468b5c: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_468b60:
    if (ctx->pc == 0x468B60u) {
        ctx->pc = 0x468B60u;
            // 0x468b60: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x468B64u;
        goto label_468b64;
    }
    ctx->pc = 0x468B5Cu;
    {
        const bool branch_taken_0x468b5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x468b5c) {
            ctx->pc = 0x468B60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x468B5Cu;
            // 0x468b60: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x468B64u;
            goto label_468b64;
        }
    }
    ctx->pc = 0x468B64u;
label_468b64:
    // 0x468b64: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x468b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_468b68:
    // 0x468b68: 0xa06775f0  sb          $a3, 0x75F0($v1)
    ctx->pc = 0x468b68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 30192), (uint8_t)GPR_U32(ctx, 7));
label_468b6c:
    // 0x468b6c: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x468b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_468b70:
    // 0x468b70: 0x30a30402  andi        $v1, $a1, 0x402
    ctx->pc = 0x468b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1026);
label_468b74:
    // 0x468b74: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
label_468b78:
    if (ctx->pc == 0x468B78u) {
        ctx->pc = 0x468B78u;
            // 0x468b78: 0x3c040001  lui         $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x468B7Cu;
        goto label_468b7c;
    }
    ctx->pc = 0x468B74u;
    {
        const bool branch_taken_0x468b74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x468b74) {
            ctx->pc = 0x468B78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x468B74u;
            // 0x468b78: 0x3c040001  lui         $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x468BA0u;
            goto label_468ba0;
        }
    }
    ctx->pc = 0x468B7Cu;
label_468b7c:
    // 0x468b7c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x468b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_468b80:
    // 0x468b80: 0xc073234  jal         func_1CC8D0
label_468b84:
    if (ctx->pc == 0x468B84u) {
        ctx->pc = 0x468B84u;
            // 0x468b84: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x468B88u;
        goto label_468b88;
    }
    ctx->pc = 0x468B80u;
    SET_GPR_U32(ctx, 31, 0x468B88u);
    ctx->pc = 0x468B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x468B80u;
            // 0x468b84: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468B88u; }
        if (ctx->pc != 0x468B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468B88u; }
        if (ctx->pc != 0x468B88u) { return; }
    }
    ctx->pc = 0x468B88u;
label_468b88:
    // 0x468b88: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x468b88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_468b8c:
    // 0x468b8c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x468b8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_468b90:
    // 0x468b90: 0x320f809  jalr        $t9
label_468b94:
    if (ctx->pc == 0x468B94u) {
        ctx->pc = 0x468B94u;
            // 0x468b94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x468B98u;
        goto label_468b98;
    }
    ctx->pc = 0x468B90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x468B98u);
        ctx->pc = 0x468B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x468B90u;
            // 0x468b94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x468B98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x468B98u; }
            if (ctx->pc != 0x468B98u) { return; }
        }
        }
    }
    ctx->pc = 0x468B98u;
label_468b98:
    // 0x468b98: 0x100000b2  b           . + 4 + (0xB2 << 2)
label_468b9c:
    if (ctx->pc == 0x468B9Cu) {
        ctx->pc = 0x468BA0u;
        goto label_468ba0;
    }
    ctx->pc = 0x468B98u;
    {
        const bool branch_taken_0x468b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x468b98) {
            ctx->pc = 0x468E64u;
            goto label_468e64;
        }
    }
    ctx->pc = 0x468BA0u;
label_468ba0:
    // 0x468ba0: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x468ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_468ba4:
    // 0x468ba4: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
label_468ba8:
    if (ctx->pc == 0x468BA8u) {
        ctx->pc = 0x468BA8u;
            // 0x468ba8: 0x30a30001  andi        $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x468BACu;
        goto label_468bac;
    }
    ctx->pc = 0x468BA4u;
    {
        const bool branch_taken_0x468ba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x468ba4) {
            ctx->pc = 0x468BA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x468BA4u;
            // 0x468ba8: 0x30a30001  andi        $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x468BD0u;
            goto label_468bd0;
        }
    }
    ctx->pc = 0x468BACu;
label_468bac:
    // 0x468bac: 0xc073234  jal         func_1CC8D0
label_468bb0:
    if (ctx->pc == 0x468BB0u) {
        ctx->pc = 0x468BB0u;
            // 0x468bb0: 0x348400a9  ori         $a0, $a0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x468BB4u;
        goto label_468bb4;
    }
    ctx->pc = 0x468BACu;
    SET_GPR_U32(ctx, 31, 0x468BB4u);
    ctx->pc = 0x468BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x468BACu;
            // 0x468bb0: 0x348400a9  ori         $a0, $a0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468BB4u; }
        if (ctx->pc != 0x468BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468BB4u; }
        if (ctx->pc != 0x468BB4u) { return; }
    }
    ctx->pc = 0x468BB4u;
label_468bb4:
    // 0x468bb4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x468bb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_468bb8:
    // 0x468bb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x468bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_468bbc:
    // 0x468bbc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x468bbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_468bc0:
    // 0x468bc0: 0x320f809  jalr        $t9
label_468bc4:
    if (ctx->pc == 0x468BC4u) {
        ctx->pc = 0x468BC4u;
            // 0x468bc4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x468BC8u;
        goto label_468bc8;
    }
    ctx->pc = 0x468BC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x468BC8u);
        ctx->pc = 0x468BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x468BC0u;
            // 0x468bc4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x468BC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x468BC8u; }
            if (ctx->pc != 0x468BC8u) { return; }
        }
        }
    }
    ctx->pc = 0x468BC8u;
label_468bc8:
    // 0x468bc8: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_468bcc:
    if (ctx->pc == 0x468BCCu) {
        ctx->pc = 0x468BD0u;
        goto label_468bd0;
    }
    ctx->pc = 0x468BC8u;
    {
        const bool branch_taken_0x468bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x468bc8) {
            ctx->pc = 0x468E64u;
            goto label_468e64;
        }
    }
    ctx->pc = 0x468BD0u;
label_468bd0:
    // 0x468bd0: 0x106000a4  beqz        $v1, . + 4 + (0xA4 << 2)
label_468bd4:
    if (ctx->pc == 0x468BD4u) {
        ctx->pc = 0x468BD8u;
        goto label_468bd8;
    }
    ctx->pc = 0x468BD0u;
    {
        const bool branch_taken_0x468bd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x468bd0) {
            ctx->pc = 0x468E64u;
            goto label_468e64;
        }
    }
    ctx->pc = 0x468BD8u;
label_468bd8:
    // 0x468bd8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x468bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_468bdc:
    // 0x468bdc: 0xc073234  jal         func_1CC8D0
label_468be0:
    if (ctx->pc == 0x468BE0u) {
        ctx->pc = 0x468BE0u;
            // 0x468be0: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x468BE4u;
        goto label_468be4;
    }
    ctx->pc = 0x468BDCu;
    SET_GPR_U32(ctx, 31, 0x468BE4u);
    ctx->pc = 0x468BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x468BDCu;
            // 0x468be0: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468BE4u; }
        if (ctx->pc != 0x468BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468BE4u; }
        if (ctx->pc != 0x468BE4u) { return; }
    }
    ctx->pc = 0x468BE4u;
label_468be4:
    // 0x468be4: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x468be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_468be8:
    // 0x468be8: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x468be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_468bec:
    // 0x468bec: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x468becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_468bf0:
    // 0x468bf0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x468bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_468bf4:
    // 0x468bf4: 0xc057b7c  jal         func_15EDF0
label_468bf8:
    if (ctx->pc == 0x468BF8u) {
        ctx->pc = 0x468BF8u;
            // 0x468bf8: 0xac430064  sw          $v1, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
        ctx->pc = 0x468BFCu;
        goto label_468bfc;
    }
    ctx->pc = 0x468BF4u;
    SET_GPR_U32(ctx, 31, 0x468BFCu);
    ctx->pc = 0x468BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x468BF4u;
            // 0x468bf8: 0xac430064  sw          $v1, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468BFCu; }
        if (ctx->pc != 0x468BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468BFCu; }
        if (ctx->pc != 0x468BFCu) { return; }
    }
    ctx->pc = 0x468BFCu;
label_468bfc:
    // 0x468bfc: 0x10000099  b           . + 4 + (0x99 << 2)
label_468c00:
    if (ctx->pc == 0x468C00u) {
        ctx->pc = 0x468C04u;
        goto label_468c04;
    }
    ctx->pc = 0x468BFCu;
    {
        const bool branch_taken_0x468bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x468bfc) {
            ctx->pc = 0x468E64u;
            goto label_468e64;
        }
    }
    ctx->pc = 0x468C04u;
label_468c04:
    // 0x468c04: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x468c04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_468c08:
    // 0x468c08: 0x34640030  ori         $a0, $v1, 0x30
    ctx->pc = 0x468c08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48);
label_468c0c:
    // 0x468c0c: 0x92430059  lbu         $v1, 0x59($s2)
    ctx->pc = 0x468c0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 89)));
label_468c10:
    // 0x468c10: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x468c10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_468c14:
    // 0x468c14: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x468c14u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_468c18:
    // 0x468c18: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x468c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
label_468c1c:
    // 0x468c1c: 0xa2430059  sb          $v1, 0x59($s2)
    ctx->pc = 0x468c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 89), (uint8_t)GPR_U32(ctx, 3));
label_468c20:
    // 0x468c20: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x468c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_468c24:
    // 0x468c24: 0x30830402  andi        $v1, $a0, 0x402
    ctx->pc = 0x468c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1026);
label_468c28:
    // 0x468c28: 0x50600025  beql        $v1, $zero, . + 4 + (0x25 << 2)
label_468c2c:
    if (ctx->pc == 0x468C2Cu) {
        ctx->pc = 0x468C2Cu;
            // 0x468c2c: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x468C30u;
        goto label_468c30;
    }
    ctx->pc = 0x468C28u;
    {
        const bool branch_taken_0x468c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x468c28) {
            ctx->pc = 0x468C2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x468C28u;
            // 0x468c2c: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x468CC0u;
            goto label_468cc0;
        }
    }
    ctx->pc = 0x468C30u;
label_468c30:
    // 0x468c30: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x468c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_468c34:
    // 0x468c34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x468c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_468c38:
    // 0x468c38: 0x24639760  addiu       $v1, $v1, -0x68A0
    ctx->pc = 0x468c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940512));
label_468c3c:
    // 0x468c3c: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x468c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_468c40:
    // 0x468c40: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x468c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_468c44:
    // 0x468c44: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x468c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_468c48:
    // 0x468c48: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x468c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_468c4c:
    // 0x468c4c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x468c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_468c50:
    // 0x468c50: 0x30420402  andi        $v0, $v0, 0x402
    ctx->pc = 0x468c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1026);
label_468c54:
    // 0x468c54: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x468c54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_468c58:
    // 0x468c58: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x468c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_468c5c:
    // 0x468c5c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_468c60:
    if (ctx->pc == 0x468C60u) {
        ctx->pc = 0x468C60u;
            // 0x468c60: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x468C64u;
        goto label_468c64;
    }
    ctx->pc = 0x468C5Cu;
    {
        const bool branch_taken_0x468c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x468c5c) {
            ctx->pc = 0x468C60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x468C5Cu;
            // 0x468c60: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x468C70u;
            goto label_468c70;
        }
    }
    ctx->pc = 0x468C64u;
label_468c64:
    // 0x468c64: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x468c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_468c68:
    // 0x468c68: 0x10000005  b           . + 4 + (0x5 << 2)
label_468c6c:
    if (ctx->pc == 0x468C6Cu) {
        ctx->pc = 0x468C6Cu;
            // 0x468c6c: 0xa044015d  sb          $a0, 0x15D($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 349), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x468C70u;
        goto label_468c70;
    }
    ctx->pc = 0x468C68u;
    {
        const bool branch_taken_0x468c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x468C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x468C68u;
            // 0x468c6c: 0xa044015d  sb          $a0, 0x15D($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 349), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468c68) {
            ctx->pc = 0x468C80u;
            goto label_468c80;
        }
    }
    ctx->pc = 0x468C70u;
label_468c70:
    // 0x468c70: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x468c70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_468c74:
    // 0x468c74: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
label_468c78:
    if (ctx->pc == 0x468C78u) {
        ctx->pc = 0x468C78u;
            // 0x468c78: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x468C7Cu;
        goto label_468c7c;
    }
    ctx->pc = 0x468C74u;
    {
        const bool branch_taken_0x468c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x468c74) {
            ctx->pc = 0x468C78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x468C74u;
            // 0x468c78: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x468C40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_468c40;
        }
    }
    ctx->pc = 0x468C7Cu;
label_468c7c:
    // 0x468c7c: 0x0  nop
    ctx->pc = 0x468c7cu;
    // NOP
label_468c80:
    // 0x468c80: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x468c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_468c84:
    // 0x468c84: 0x92470059  lbu         $a3, 0x59($s2)
    ctx->pc = 0x468c84u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 89)));
label_468c88:
    // 0x468c88: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x468c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_468c8c:
    // 0x468c8c: 0x804675f0  lb          $a2, 0x75F0($v0)
    ctx->pc = 0x468c8cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 30192)));
label_468c90:
    // 0x468c90: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x468c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_468c94:
    // 0x468c94: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x468c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_468c98:
    // 0x468c98: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x468c98u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_468c9c:
    // 0x468c9c: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x468c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_468ca0:
    // 0x468ca0: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x468ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_468ca4:
    // 0x468ca4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x468ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_468ca8:
    // 0x468ca8: 0xa046008c  sb          $a2, 0x8C($v0)
    ctx->pc = 0x468ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 140), (uint8_t)GPR_U32(ctx, 6));
label_468cac:
    // 0x468cac: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x468cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_468cb0:
    // 0x468cb0: 0xc057b7c  jal         func_15EDF0
label_468cb4:
    if (ctx->pc == 0x468CB4u) {
        ctx->pc = 0x468CB4u;
            // 0x468cb4: 0xac430064  sw          $v1, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
        ctx->pc = 0x468CB8u;
        goto label_468cb8;
    }
    ctx->pc = 0x468CB0u;
    SET_GPR_U32(ctx, 31, 0x468CB8u);
    ctx->pc = 0x468CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x468CB0u;
            // 0x468cb4: 0xac430064  sw          $v1, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468CB8u; }
        if (ctx->pc != 0x468CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468CB8u; }
        if (ctx->pc != 0x468CB8u) { return; }
    }
    ctx->pc = 0x468CB8u;
label_468cb8:
    // 0x468cb8: 0x1000006a  b           . + 4 + (0x6A << 2)
label_468cbc:
    if (ctx->pc == 0x468CBCu) {
        ctx->pc = 0x468CC0u;
        goto label_468cc0;
    }
    ctx->pc = 0x468CB8u;
    {
        const bool branch_taken_0x468cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x468cb8) {
            ctx->pc = 0x468E64u;
            goto label_468e64;
        }
    }
    ctx->pc = 0x468CC0u;
label_468cc0:
    // 0x468cc0: 0x10600068  beqz        $v1, . + 4 + (0x68 << 2)
label_468cc4:
    if (ctx->pc == 0x468CC4u) {
        ctx->pc = 0x468CC8u;
        goto label_468cc8;
    }
    ctx->pc = 0x468CC0u;
    {
        const bool branch_taken_0x468cc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x468cc0) {
            ctx->pc = 0x468E64u;
            goto label_468e64;
        }
    }
    ctx->pc = 0x468CC8u;
label_468cc8:
    // 0x468cc8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x468cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_468ccc:
    // 0x468ccc: 0xc073234  jal         func_1CC8D0
label_468cd0:
    if (ctx->pc == 0x468CD0u) {
        ctx->pc = 0x468CD0u;
            // 0x468cd0: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x468CD4u;
        goto label_468cd4;
    }
    ctx->pc = 0x468CCCu;
    SET_GPR_U32(ctx, 31, 0x468CD4u);
    ctx->pc = 0x468CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x468CCCu;
            // 0x468cd0: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468CD4u; }
        if (ctx->pc != 0x468CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468CD4u; }
        if (ctx->pc != 0x468CD4u) { return; }
    }
    ctx->pc = 0x468CD4u;
label_468cd4:
    // 0x468cd4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x468cd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_468cd8:
    // 0x468cd8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x468cd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_468cdc:
    // 0x468cdc: 0x320f809  jalr        $t9
label_468ce0:
    if (ctx->pc == 0x468CE0u) {
        ctx->pc = 0x468CE0u;
            // 0x468ce0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x468CE4u;
        goto label_468ce4;
    }
    ctx->pc = 0x468CDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x468CE4u);
        ctx->pc = 0x468CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x468CDCu;
            // 0x468ce0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x468CE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x468CE4u; }
            if (ctx->pc != 0x468CE4u) { return; }
        }
        }
    }
    ctx->pc = 0x468CE4u;
label_468ce4:
    // 0x468ce4: 0x1000005f  b           . + 4 + (0x5F << 2)
label_468ce8:
    if (ctx->pc == 0x468CE8u) {
        ctx->pc = 0x468CECu;
        goto label_468cec;
    }
    ctx->pc = 0x468CE4u;
    {
        const bool branch_taken_0x468ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x468ce4) {
            ctx->pc = 0x468E64u;
            goto label_468e64;
        }
    }
    ctx->pc = 0x468CECu;
label_468cec:
    // 0x468cec: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x468cecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_468cf0:
    // 0x468cf0: 0x320f809  jalr        $t9
label_468cf4:
    if (ctx->pc == 0x468CF4u) {
        ctx->pc = 0x468CF8u;
        goto label_468cf8;
    }
    ctx->pc = 0x468CF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x468CF8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x468CF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x468CF8u; }
            if (ctx->pc != 0x468CF8u) { return; }
        }
        }
    }
    ctx->pc = 0x468CF8u;
label_468cf8:
    // 0x468cf8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x468cf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_468cfc:
    // 0x468cfc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x468cfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_468d00:
    // 0x468d00: 0x320f809  jalr        $t9
label_468d04:
    if (ctx->pc == 0x468D04u) {
        ctx->pc = 0x468D04u;
            // 0x468d04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x468D08u;
        goto label_468d08;
    }
    ctx->pc = 0x468D00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x468D08u);
        ctx->pc = 0x468D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x468D00u;
            // 0x468d04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x468D08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x468D08u; }
            if (ctx->pc != 0x468D08u) { return; }
        }
        }
    }
    ctx->pc = 0x468D08u;
label_468d08:
    // 0x468d08: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x468d08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_468d0c:
    // 0x468d0c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x468d0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_468d10:
    // 0x468d10: 0x320f809  jalr        $t9
label_468d14:
    if (ctx->pc == 0x468D14u) {
        ctx->pc = 0x468D14u;
            // 0x468d14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x468D18u;
        goto label_468d18;
    }
    ctx->pc = 0x468D10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x468D18u);
        ctx->pc = 0x468D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x468D10u;
            // 0x468d14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x468D18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x468D18u; }
            if (ctx->pc != 0x468D18u) { return; }
        }
        }
    }
    ctx->pc = 0x468D18u;
label_468d18:
    // 0x468d18: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x468d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_468d1c:
    // 0x468d1c: 0x82450058  lb          $a1, 0x58($s2)
    ctx->pc = 0x468d1cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 88)));
label_468d20:
    // 0x468d20: 0x806475f8  lb          $a0, 0x75F8($v1)
    ctx->pc = 0x468d20u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 30200)));
label_468d24:
    // 0x468d24: 0x5485000d  bnel        $a0, $a1, . + 4 + (0xD << 2)
label_468d28:
    if (ctx->pc == 0x468D28u) {
        ctx->pc = 0x468D28u;
            // 0x468d28: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x468D2Cu;
        goto label_468d2c;
    }
    ctx->pc = 0x468D24u;
    {
        const bool branch_taken_0x468d24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x468d24) {
            ctx->pc = 0x468D28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x468D24u;
            // 0x468d28: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x468D5Cu;
            goto label_468d5c;
        }
    }
    ctx->pc = 0x468D2Cu;
label_468d2c:
    // 0x468d2c: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x468d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_468d30:
    // 0x468d30: 0x3c030c00  lui         $v1, 0xC00
    ctx->pc = 0x468d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3072 << 16));
label_468d34:
    // 0x468d34: 0x346304c2  ori         $v1, $v1, 0x4C2
    ctx->pc = 0x468d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1218);
label_468d38:
    // 0x468d38: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x468d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_468d3c:
    // 0x468d3c: 0x5060001a  beql        $v1, $zero, . + 4 + (0x1A << 2)
label_468d40:
    if (ctx->pc == 0x468D40u) {
        ctx->pc = 0x468D40u;
            // 0x468d40: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->pc = 0x468D44u;
        goto label_468d44;
    }
    ctx->pc = 0x468D3Cu;
    {
        const bool branch_taken_0x468d3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x468d3c) {
            ctx->pc = 0x468D40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x468D3Cu;
            // 0x468d40: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x468DA8u;
            goto label_468da8;
        }
    }
    ctx->pc = 0x468D44u;
label_468d44:
    // 0x468d44: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x468d44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_468d48:
    // 0x468d48: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x468d48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_468d4c:
    // 0x468d4c: 0x320f809  jalr        $t9
label_468d50:
    if (ctx->pc == 0x468D50u) {
        ctx->pc = 0x468D50u;
            // 0x468d50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x468D54u;
        goto label_468d54;
    }
    ctx->pc = 0x468D4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x468D54u);
        ctx->pc = 0x468D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x468D4Cu;
            // 0x468d50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x468D54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x468D54u; }
            if (ctx->pc != 0x468D54u) { return; }
        }
        }
    }
    ctx->pc = 0x468D54u;
label_468d54:
    // 0x468d54: 0x10000013  b           . + 4 + (0x13 << 2)
label_468d58:
    if (ctx->pc == 0x468D58u) {
        ctx->pc = 0x468D5Cu;
        goto label_468d5c;
    }
    ctx->pc = 0x468D54u;
    {
        const bool branch_taken_0x468d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x468d54) {
            ctx->pc = 0x468DA4u;
            goto label_468da4;
        }
    }
    ctx->pc = 0x468D5Cu;
label_468d5c:
    // 0x468d5c: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
label_468d60:
    if (ctx->pc == 0x468D60u) {
        ctx->pc = 0x468D64u;
        goto label_468d64;
    }
    ctx->pc = 0x468D5Cu;
    {
        const bool branch_taken_0x468d5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x468d5c) {
            ctx->pc = 0x468DA4u;
            goto label_468da4;
        }
    }
    ctx->pc = 0x468D64u;
label_468d64:
    // 0x468d64: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x468d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_468d68:
    // 0x468d68: 0x30630402  andi        $v1, $v1, 0x402
    ctx->pc = 0x468d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1026);
label_468d6c:
    // 0x468d6c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_468d70:
    if (ctx->pc == 0x468D70u) {
        ctx->pc = 0x468D74u;
        goto label_468d74;
    }
    ctx->pc = 0x468D6Cu;
    {
        const bool branch_taken_0x468d6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x468d6c) {
            ctx->pc = 0x468DA4u;
            goto label_468da4;
        }
    }
    ctx->pc = 0x468D74u;
label_468d74:
    // 0x468d74: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x468d74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_468d78:
    // 0x468d78: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x468d78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_468d7c:
    // 0x468d7c: 0x320f809  jalr        $t9
label_468d80:
    if (ctx->pc == 0x468D80u) {
        ctx->pc = 0x468D80u;
            // 0x468d80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x468D84u;
        goto label_468d84;
    }
    ctx->pc = 0x468D7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x468D84u);
        ctx->pc = 0x468D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x468D7Cu;
            // 0x468d80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x468D84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x468D84u; }
            if (ctx->pc != 0x468D84u) { return; }
        }
        }
    }
    ctx->pc = 0x468D84u;
label_468d84:
    // 0x468d84: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x468d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_468d88:
    // 0x468d88: 0xc073234  jal         func_1CC8D0
label_468d8c:
    if (ctx->pc == 0x468D8Cu) {
        ctx->pc = 0x468D8Cu;
            // 0x468d8c: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x468D90u;
        goto label_468d90;
    }
    ctx->pc = 0x468D88u;
    SET_GPR_U32(ctx, 31, 0x468D90u);
    ctx->pc = 0x468D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x468D88u;
            // 0x468d8c: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468D90u; }
        if (ctx->pc != 0x468D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468D90u; }
        if (ctx->pc != 0x468D90u) { return; }
    }
    ctx->pc = 0x468D90u;
label_468d90:
    // 0x468d90: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x468d90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_468d94:
    // 0x468d94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x468d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_468d98:
    // 0x468d98: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x468d98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_468d9c:
    // 0x468d9c: 0x320f809  jalr        $t9
label_468da0:
    if (ctx->pc == 0x468DA0u) {
        ctx->pc = 0x468DA0u;
            // 0x468da0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x468DA4u;
        goto label_468da4;
    }
    ctx->pc = 0x468D9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x468DA4u);
        ctx->pc = 0x468DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x468D9Cu;
            // 0x468da0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x468DA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x468DA4u; }
            if (ctx->pc != 0x468DA4u) { return; }
        }
        }
    }
    ctx->pc = 0x468DA4u;
label_468da4:
    // 0x468da4: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x468da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_468da8:
    // 0x468da8: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x468da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_468dac:
    // 0x468dac: 0x34640010  ori         $a0, $v1, 0x10
    ctx->pc = 0x468dacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_468db0:
    // 0x468db0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x468db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_468db4:
    // 0x468db4: 0x806675f8  lb          $a2, 0x75F8($v1)
    ctx->pc = 0x468db4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 30200)));
label_468db8:
    // 0x468db8: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x468db8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_468dbc:
    // 0x468dbc: 0x5382b  sltu        $a3, $zero, $a1
    ctx->pc = 0x468dbcu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_468dc0:
    // 0x468dc0: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x468dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
label_468dc4:
    // 0x468dc4: 0x34850020  ori         $a1, $a0, 0x20
    ctx->pc = 0x468dc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
label_468dc8:
    // 0x468dc8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x468dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_468dcc:
    // 0x468dcc: 0xc73823  subu        $a3, $a2, $a3
    ctx->pc = 0x468dccu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_468dd0:
    // 0x468dd0: 0xa06775f8  sb          $a3, 0x75F8($v1)
    ctx->pc = 0x468dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 30200), (uint8_t)GPR_U32(ctx, 7));
label_468dd4:
    // 0x468dd4: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x468dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_468dd8:
    // 0x468dd8: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x468dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_468ddc:
    // 0x468ddc: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x468ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_468de0:
    // 0x468de0: 0x8c6806b8  lw          $t0, 0x6B8($v1)
    ctx->pc = 0x468de0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1720)));
label_468de4:
    // 0x468de4: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x468de4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_468de8:
    // 0x468de8: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x468de8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_468dec:
    // 0x468dec: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x468decu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_468df0:
    // 0x468df0: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x468df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_468df4:
    // 0x468df4: 0x8c6306b8  lw          $v1, 0x6B8($v1)
    ctx->pc = 0x468df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1720)));
label_468df8:
    // 0x468df8: 0xa08575f8  sb          $a1, 0x75F8($a0)
    ctx->pc = 0x468df8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 30200), (uint8_t)GPR_U32(ctx, 5));
label_468dfc:
    // 0x468dfc: 0x5263c  dsll32      $a0, $a1, 24
    ctx->pc = 0x468dfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 24));
label_468e00:
    // 0x468e00: 0x82450058  lb          $a1, 0x58($s2)
    ctx->pc = 0x468e00u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 88)));
label_468e04:
    // 0x468e04: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x468e04u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_468e08:
    // 0x468e08: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x468e08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_468e0c:
    // 0x468e0c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_468e10:
    if (ctx->pc == 0x468E10u) {
        ctx->pc = 0x468E10u;
            // 0x468e10: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x468E14u;
        goto label_468e14;
    }
    ctx->pc = 0x468E0Cu;
    {
        const bool branch_taken_0x468e0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x468E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x468E0Cu;
            // 0x468e10: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468e0c) {
            ctx->pc = 0x468E18u;
            goto label_468e18;
        }
    }
    ctx->pc = 0x468E14u;
label_468e14:
    // 0x468e14: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x468e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_468e18:
    // 0x468e18: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x468e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
label_468e1c:
    // 0x468e1c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x468e1cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_468e20:
    // 0x468e20: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x468e20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_468e24:
    // 0x468e24: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_468e28:
    if (ctx->pc == 0x468E28u) {
        ctx->pc = 0x468E28u;
            // 0x468e28: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x468E2Cu;
        goto label_468e2c;
    }
    ctx->pc = 0x468E24u;
    {
        const bool branch_taken_0x468e24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x468e24) {
            ctx->pc = 0x468E28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x468E24u;
            // 0x468e28: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x468E2Cu;
            goto label_468e2c;
        }
    }
    ctx->pc = 0x468E2Cu;
label_468e2c:
    // 0x468e2c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x468e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_468e30:
    // 0x468e30: 0xa06875f8  sb          $t0, 0x75F8($v1)
    ctx->pc = 0x468e30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 30200), (uint8_t)GPR_U32(ctx, 8));
label_468e34:
    // 0x468e34: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x468e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_468e38:
    // 0x468e38: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x468e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_468e3c:
    // 0x468e3c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_468e40:
    if (ctx->pc == 0x468E40u) {
        ctx->pc = 0x468E44u;
        goto label_468e44;
    }
    ctx->pc = 0x468E3Cu;
    {
        const bool branch_taken_0x468e3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x468e3c) {
            ctx->pc = 0x468E64u;
            goto label_468e64;
        }
    }
    ctx->pc = 0x468E44u;
label_468e44:
    // 0x468e44: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x468e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_468e48:
    // 0x468e48: 0xc073234  jal         func_1CC8D0
label_468e4c:
    if (ctx->pc == 0x468E4Cu) {
        ctx->pc = 0x468E4Cu;
            // 0x468e4c: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x468E50u;
        goto label_468e50;
    }
    ctx->pc = 0x468E48u;
    SET_GPR_U32(ctx, 31, 0x468E50u);
    ctx->pc = 0x468E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x468E48u;
            // 0x468e4c: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468E50u; }
        if (ctx->pc != 0x468E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468E50u; }
        if (ctx->pc != 0x468E50u) { return; }
    }
    ctx->pc = 0x468E50u;
label_468e50:
    // 0x468e50: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x468e50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_468e54:
    // 0x468e54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x468e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_468e58:
    // 0x468e58: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x468e58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_468e5c:
    // 0x468e5c: 0x320f809  jalr        $t9
label_468e60:
    if (ctx->pc == 0x468E60u) {
        ctx->pc = 0x468E60u;
            // 0x468e60: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x468E64u;
        goto label_468e64;
    }
    ctx->pc = 0x468E5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x468E64u);
        ctx->pc = 0x468E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x468E5Cu;
            // 0x468e60: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x468E64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x468E64u; }
            if (ctx->pc != 0x468E64u) { return; }
        }
        }
    }
    ctx->pc = 0x468E64u;
label_468e64:
    // 0x468e64: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x468e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_468e68:
    // 0x468e68: 0x3c030300  lui         $v1, 0x300
    ctx->pc = 0x468e68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)768 << 16));
label_468e6c:
    // 0x468e6c: 0x34630030  ori         $v1, $v1, 0x30
    ctx->pc = 0x468e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48);
label_468e70:
    // 0x468e70: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x468e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_468e74:
    // 0x468e74: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_468e78:
    if (ctx->pc == 0x468E78u) {
        ctx->pc = 0x468E78u;
            // 0x468e78: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x468E7Cu;
        goto label_468e7c;
    }
    ctx->pc = 0x468E74u;
    {
        const bool branch_taken_0x468e74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x468e74) {
            ctx->pc = 0x468E78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x468E74u;
            // 0x468e78: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x468E88u;
            goto label_468e88;
        }
    }
    ctx->pc = 0x468E7Cu;
label_468e7c:
    // 0x468e7c: 0xc073234  jal         func_1CC8D0
label_468e80:
    if (ctx->pc == 0x468E80u) {
        ctx->pc = 0x468E80u;
            // 0x468e80: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->pc = 0x468E84u;
        goto label_468e84;
    }
    ctx->pc = 0x468E7Cu;
    SET_GPR_U32(ctx, 31, 0x468E84u);
    ctx->pc = 0x468E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x468E7Cu;
            // 0x468e80: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468E84u; }
        if (ctx->pc != 0x468E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468E84u; }
        if (ctx->pc != 0x468E84u) { return; }
    }
    ctx->pc = 0x468E84u;
label_468e84:
    // 0x468e84: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x468e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_468e88:
    // 0x468e88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x468e88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_468e8c:
    // 0x468e8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x468e8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_468e90:
    // 0x468e90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x468e90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_468e94:
    // 0x468e94: 0x3e00008  jr          $ra
label_468e98:
    if (ctx->pc == 0x468E98u) {
        ctx->pc = 0x468E98u;
            // 0x468e98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x468E9Cu;
        goto label_468e9c;
    }
    ctx->pc = 0x468E94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x468E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x468E94u;
            // 0x468e98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x468E9Cu;
label_468e9c:
    // 0x468e9c: 0x0  nop
    ctx->pc = 0x468e9cu;
    // NOP
label_468ea0:
    // 0x468ea0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x468ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_468ea4:
    // 0x468ea4: 0x8c69a140  lw          $t1, -0x5EC0($v1)
    ctx->pc = 0x468ea4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943040)));
label_468ea8:
    // 0x468ea8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x468ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_468eac:
    // 0x468eac: 0x806575f8  lb          $a1, 0x75F8($v1)
    ctx->pc = 0x468eacu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 30200)));
label_468eb0:
    // 0x468eb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x468eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_468eb4:
    // 0x468eb4: 0x50a3002a  beql        $a1, $v1, . + 4 + (0x2A << 2)
label_468eb8:
    if (ctx->pc == 0x468EB8u) {
        ctx->pc = 0x468EB8u;
            // 0x468eb8: 0x3c030c00  lui         $v1, 0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3072 << 16));
        ctx->pc = 0x468EBCu;
        goto label_468ebc;
    }
    ctx->pc = 0x468EB4u;
    {
        const bool branch_taken_0x468eb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x468eb4) {
            ctx->pc = 0x468EB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x468EB4u;
            // 0x468eb8: 0x3c030c00  lui         $v1, 0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3072 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x468F60u;
            goto label_468f60;
        }
    }
    ctx->pc = 0x468EBCu;
label_468ebc:
    // 0x468ebc: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_468ec0:
    if (ctx->pc == 0x468EC0u) {
        ctx->pc = 0x468EC0u;
            // 0x468ec0: 0x8d280014  lw          $t0, 0x14($t1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
        ctx->pc = 0x468EC4u;
        goto label_468ec4;
    }
    ctx->pc = 0x468EBCu;
    {
        const bool branch_taken_0x468ebc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x468ebc) {
            ctx->pc = 0x468EC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x468EBCu;
            // 0x468ec0: 0x8d280014  lw          $t0, 0x14($t1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x468ECCu;
            goto label_468ecc;
        }
    }
    ctx->pc = 0x468EC4u;
label_468ec4:
    // 0x468ec4: 0x1000002d  b           . + 4 + (0x2D << 2)
label_468ec8:
    if (ctx->pc == 0x468EC8u) {
        ctx->pc = 0x468ECCu;
        goto label_468ecc;
    }
    ctx->pc = 0x468EC4u;
    {
        const bool branch_taken_0x468ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x468ec4) {
            ctx->pc = 0x468F7Cu;
            goto label_468f7c;
        }
    }
    ctx->pc = 0x468ECCu;
label_468ecc:
    // 0x468ecc: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x468eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_468ed0:
    // 0x468ed0: 0x34660040  ori         $a2, $v1, 0x40
    ctx->pc = 0x468ed0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_468ed4:
    // 0x468ed4: 0x8087005a  lb          $a3, 0x5A($a0)
    ctx->pc = 0x468ed4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 90)));
label_468ed8:
    // 0x468ed8: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x468ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
label_468edc:
    // 0x468edc: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x468edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_468ee0:
    // 0x468ee0: 0x1064024  and         $t0, $t0, $a2
    ctx->pc = 0x468ee0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
label_468ee4:
    // 0x468ee4: 0x34a60080  ori         $a2, $a1, 0x80
    ctx->pc = 0x468ee4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
label_468ee8:
    // 0x468ee8: 0x8282b  sltu        $a1, $zero, $t0
    ctx->pc = 0x468ee8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_468eec:
    // 0x468eec: 0xe53823  subu        $a3, $a3, $a1
    ctx->pc = 0x468eecu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_468ef0:
    // 0x468ef0: 0x8c68e8f8  lw          $t0, -0x1708($v1)
    ctx->pc = 0x468ef0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961400)));
label_468ef4:
    // 0x468ef4: 0x72e3c  dsll32      $a1, $a3, 24
    ctx->pc = 0x468ef4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << (32 + 24));
label_468ef8:
    // 0x468ef8: 0xa087005a  sb          $a3, 0x5A($a0)
    ctx->pc = 0x468ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 90), (uint8_t)GPR_U32(ctx, 7));
label_468efc:
    // 0x468efc: 0x8d270014  lw          $a3, 0x14($t1)
    ctx->pc = 0x468efcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
label_468f00:
    // 0x468f00: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x468f00u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
label_468f04:
    // 0x468f04: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x468f04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_468f08:
    // 0x468f08: 0x8c63e8f8  lw          $v1, -0x1708($v1)
    ctx->pc = 0x468f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961400)));
label_468f0c:
    // 0x468f0c: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x468f0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
label_468f10:
    // 0x468f10: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x468f10u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_468f14:
    // 0x468f14: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x468f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_468f18:
    // 0x468f18: 0xa085005a  sb          $a1, 0x5A($a0)
    ctx->pc = 0x468f18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 90), (uint8_t)GPR_U32(ctx, 5));
label_468f1c:
    // 0x468f1c: 0x52e3c  dsll32      $a1, $a1, 24
    ctx->pc = 0x468f1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 24));
label_468f20:
    // 0x468f20: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x468f20u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
label_468f24:
    // 0x468f24: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x468f24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_468f28:
    // 0x468f28: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_468f2c:
    if (ctx->pc == 0x468F2Cu) {
        ctx->pc = 0x468F30u;
        goto label_468f30;
    }
    ctx->pc = 0x468F28u;
    {
        const bool branch_taken_0x468f28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x468f28) {
            ctx->pc = 0x468F38u;
            goto label_468f38;
        }
    }
    ctx->pc = 0x468F30u;
label_468f30:
    // 0x468f30: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x468f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_468f34:
    // 0x468f34: 0x8c65e900  lw          $a1, -0x1700($v1)
    ctx->pc = 0x468f34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961408)));
label_468f38:
    // 0x468f38: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x468f38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_468f3c:
    // 0x468f3c: 0xa085005a  sb          $a1, 0x5A($a0)
    ctx->pc = 0x468f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 90), (uint8_t)GPR_U32(ctx, 5));
label_468f40:
    // 0x468f40: 0x8c63e900  lw          $v1, -0x1700($v1)
    ctx->pc = 0x468f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961408)));
label_468f44:
    // 0x468f44: 0x52e3c  dsll32      $a1, $a1, 24
    ctx->pc = 0x468f44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 24));
label_468f48:
    // 0x468f48: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x468f48u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
label_468f4c:
    // 0x468f4c: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x468f4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_468f50:
    // 0x468f50: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_468f54:
    if (ctx->pc == 0x468F54u) {
        ctx->pc = 0x468F54u;
            // 0x468f54: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x468F58u;
        goto label_468f58;
    }
    ctx->pc = 0x468F50u;
    {
        const bool branch_taken_0x468f50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x468f50) {
            ctx->pc = 0x468F54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x468F50u;
            // 0x468f54: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x468F58u;
            goto label_468f58;
        }
    }
    ctx->pc = 0x468F58u;
label_468f58:
    // 0x468f58: 0x10000008  b           . + 4 + (0x8 << 2)
label_468f5c:
    if (ctx->pc == 0x468F5Cu) {
        ctx->pc = 0x468F5Cu;
            // 0x468f5c: 0xa088005a  sb          $t0, 0x5A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 90), (uint8_t)GPR_U32(ctx, 8));
        ctx->pc = 0x468F60u;
        goto label_468f60;
    }
    ctx->pc = 0x468F58u;
    {
        const bool branch_taken_0x468f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x468F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x468F58u;
            // 0x468f5c: 0xa088005a  sb          $t0, 0x5A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 90), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x468f58) {
            ctx->pc = 0x468F7Cu;
            goto label_468f7c;
        }
    }
    ctx->pc = 0x468F60u;
label_468f60:
    // 0x468f60: 0x8d260014  lw          $a2, 0x14($t1)
    ctx->pc = 0x468f60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
label_468f64:
    // 0x468f64: 0x346500c0  ori         $a1, $v1, 0xC0
    ctx->pc = 0x468f64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)192);
label_468f68:
    // 0x468f68: 0x9083005b  lbu         $v1, 0x5B($a0)
    ctx->pc = 0x468f68u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 91)));
label_468f6c:
    // 0x468f6c: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x468f6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_468f70:
    // 0x468f70: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x468f70u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_468f74:
    // 0x468f74: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x468f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
label_468f78:
    // 0x468f78: 0xa083005b  sb          $v1, 0x5B($a0)
    ctx->pc = 0x468f78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 91), (uint8_t)GPR_U32(ctx, 3));
label_468f7c:
    // 0x468f7c: 0x3e00008  jr          $ra
label_468f80:
    if (ctx->pc == 0x468F80u) {
        ctx->pc = 0x468F84u;
        goto label_468f84;
    }
    ctx->pc = 0x468F7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x468F84u;
label_468f84:
    // 0x468f84: 0x0  nop
    ctx->pc = 0x468f84u;
    // NOP
label_468f88:
    // 0x468f88: 0x0  nop
    ctx->pc = 0x468f88u;
    // NOP
label_468f8c:
    // 0x468f8c: 0x0  nop
    ctx->pc = 0x468f8cu;
    // NOP
label_468f90:
    // 0x468f90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x468f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_468f94:
    // 0x468f94: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x468f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_468f98:
    // 0x468f98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x468f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_468f9c:
    // 0x468f9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x468f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_468fa0:
    // 0x468fa0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x468fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_468fa4:
    // 0x468fa4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x468fa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_468fa8:
    // 0x468fa8: 0x8c5089d0  lw          $s0, -0x7630($v0)
    ctx->pc = 0x468fa8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_468fac:
    // 0x468fac: 0x8225005a  lb          $a1, 0x5A($s1)
    ctx->pc = 0x468facu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 90)));
label_468fb0:
    // 0x468fb0: 0xc0b8cac  jal         func_2E32B0
label_468fb4:
    if (ctx->pc == 0x468FB4u) {
        ctx->pc = 0x468FB4u;
            // 0x468fb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x468FB8u;
        goto label_468fb8;
    }
    ctx->pc = 0x468FB0u;
    SET_GPR_U32(ctx, 31, 0x468FB8u);
    ctx->pc = 0x468FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x468FB0u;
            // 0x468fb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32B0u;
    if (runtime->hasFunction(0x2E32B0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468FB8u; }
        if (ctx->pc != 0x468FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E32B0_0x2e32b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468FB8u; }
        if (ctx->pc != 0x468FB8u) { return; }
    }
    ctx->pc = 0x468FB8u;
label_468fb8:
    // 0x468fb8: 0x8225005b  lb          $a1, 0x5B($s1)
    ctx->pc = 0x468fb8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 91)));
label_468fbc:
    // 0x468fbc: 0xc0b8c94  jal         func_2E3250
label_468fc0:
    if (ctx->pc == 0x468FC0u) {
        ctx->pc = 0x468FC0u;
            // 0x468fc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x468FC4u;
        goto label_468fc4;
    }
    ctx->pc = 0x468FBCu;
    SET_GPR_U32(ctx, 31, 0x468FC4u);
    ctx->pc = 0x468FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x468FBCu;
            // 0x468fc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3250u;
    if (runtime->hasFunction(0x2E3250u)) {
        auto targetFn = runtime->lookupFunction(0x2E3250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468FC4u; }
        if (ctx->pc != 0x468FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E3250_0x2e3250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x468FC4u; }
        if (ctx->pc != 0x468FC4u) { return; }
    }
    ctx->pc = 0x468FC4u;
label_468fc4:
    // 0x468fc4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x468fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_468fc8:
    // 0x468fc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x468fc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_468fcc:
    // 0x468fcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x468fccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_468fd0:
    // 0x468fd0: 0x3e00008  jr          $ra
label_468fd4:
    if (ctx->pc == 0x468FD4u) {
        ctx->pc = 0x468FD4u;
            // 0x468fd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x468FD8u;
        goto label_468fd8;
    }
    ctx->pc = 0x468FD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x468FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x468FD0u;
            // 0x468fd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x468FD8u;
label_468fd8:
    // 0x468fd8: 0x0  nop
    ctx->pc = 0x468fd8u;
    // NOP
label_468fdc:
    // 0x468fdc: 0x0  nop
    ctx->pc = 0x468fdcu;
    // NOP
label_468fe0:
    // 0x468fe0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x468fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_468fe4:
    // 0x468fe4: 0xa083005a  sb          $v1, 0x5A($a0)
    ctx->pc = 0x468fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 90), (uint8_t)GPR_U32(ctx, 3));
label_468fe8:
    // 0x468fe8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x468fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_468fec:
    // 0x468fec: 0x3e00008  jr          $ra
label_468ff0:
    if (ctx->pc == 0x468FF0u) {
        ctx->pc = 0x468FF0u;
            // 0x468ff0: 0xa083005b  sb          $v1, 0x5B($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 91), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x468FF4u;
        goto label_468ff4;
    }
    ctx->pc = 0x468FECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x468FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x468FECu;
            // 0x468ff0: 0xa083005b  sb          $v1, 0x5B($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 91), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x468FF4u;
label_468ff4:
    // 0x468ff4: 0x0  nop
    ctx->pc = 0x468ff4u;
    // NOP
label_468ff8:
    // 0x468ff8: 0x0  nop
    ctx->pc = 0x468ff8u;
    // NOP
label_468ffc:
    // 0x468ffc: 0x0  nop
    ctx->pc = 0x468ffcu;
    // NOP
label_469000:
    // 0x469000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x469000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_469004:
    // 0x469004: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x469004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_469008:
    // 0x469008: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x469008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_46900c:
    // 0x46900c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46900cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_469010:
    // 0x469010: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x469010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_469014:
    // 0x469014: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x469014u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_469018:
    // 0x469018: 0x8c5089d0  lw          $s0, -0x7630($v0)
    ctx->pc = 0x469018u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_46901c:
    // 0x46901c: 0xc0b8c3c  jal         func_2E30F0
label_469020:
    if (ctx->pc == 0x469020u) {
        ctx->pc = 0x469020u;
            // 0x469020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469024u;
        goto label_469024;
    }
    ctx->pc = 0x46901Cu;
    SET_GPR_U32(ctx, 31, 0x469024u);
    ctx->pc = 0x469020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46901Cu;
            // 0x469020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E30F0u;
    if (runtime->hasFunction(0x2E30F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E30F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469024u; }
        if (ctx->pc != 0x469024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E30F0_0x2e30f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469024u; }
        if (ctx->pc != 0x469024u) { return; }
    }
    ctx->pc = 0x469024u;
label_469024:
    // 0x469024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x469024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_469028:
    // 0x469028: 0xc0b8c24  jal         func_2E3090
label_46902c:
    if (ctx->pc == 0x46902Cu) {
        ctx->pc = 0x46902Cu;
            // 0x46902c: 0xa222005a  sb          $v0, 0x5A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 90), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x469030u;
        goto label_469030;
    }
    ctx->pc = 0x469028u;
    SET_GPR_U32(ctx, 31, 0x469030u);
    ctx->pc = 0x46902Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469028u;
            // 0x46902c: 0xa222005a  sb          $v0, 0x5A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 90), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3090u;
    if (runtime->hasFunction(0x2E3090u)) {
        auto targetFn = runtime->lookupFunction(0x2E3090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469030u; }
        if (ctx->pc != 0x469030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E3090_0x2e3090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469030u; }
        if (ctx->pc != 0x469030u) { return; }
    }
    ctx->pc = 0x469030u;
label_469030:
    // 0x469030: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x469030u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_469034:
    // 0x469034: 0xa223005b  sb          $v1, 0x5B($s1)
    ctx->pc = 0x469034u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 91), (uint8_t)GPR_U32(ctx, 3));
label_469038:
    // 0x469038: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x469038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_46903c:
    // 0x46903c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46903cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_469040:
    // 0x469040: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x469040u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_469044:
    // 0x469044: 0x3e00008  jr          $ra
label_469048:
    if (ctx->pc == 0x469048u) {
        ctx->pc = 0x469048u;
            // 0x469048: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x46904Cu;
        goto label_46904c;
    }
    ctx->pc = 0x469044u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x469048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469044u;
            // 0x469048: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x46904Cu;
label_46904c:
    // 0x46904c: 0x0  nop
    ctx->pc = 0x46904cu;
    // NOP
label_469050:
    // 0x469050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x469050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_469054:
    // 0x469054: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x469054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_469058:
    // 0x469058: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x469058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_46905c:
    // 0x46905c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46905cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_469060:
    // 0x469060: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x469060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_469064:
    // 0x469064: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_469068:
    if (ctx->pc == 0x469068u) {
        ctx->pc = 0x469068u;
            // 0x469068: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46906Cu;
        goto label_46906c;
    }
    ctx->pc = 0x469064u;
    {
        const bool branch_taken_0x469064 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x469068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469064u;
            // 0x469068: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469064) {
            ctx->pc = 0x4690A8u;
            goto label_4690a8;
        }
    }
    ctx->pc = 0x46906Cu;
label_46906c:
    // 0x46906c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x46906cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_469070:
    // 0x469070: 0x2442e960  addiu       $v0, $v0, -0x16A0
    ctx->pc = 0x469070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961504));
label_469074:
    // 0x469074: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_469078:
    if (ctx->pc == 0x469078u) {
        ctx->pc = 0x469078u;
            // 0x469078: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x46907Cu;
        goto label_46907c;
    }
    ctx->pc = 0x469074u;
    {
        const bool branch_taken_0x469074 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x469078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469074u;
            // 0x469078: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469074) {
            ctx->pc = 0x469090u;
            goto label_469090;
        }
    }
    ctx->pc = 0x46907Cu;
label_46907c:
    // 0x46907c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x46907cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_469080:
    // 0x469080: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x469080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_469084:
    // 0x469084: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x469084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_469088:
    // 0x469088: 0xc057a68  jal         func_15E9A0
label_46908c:
    if (ctx->pc == 0x46908Cu) {
        ctx->pc = 0x46908Cu;
            // 0x46908c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x469090u;
        goto label_469090;
    }
    ctx->pc = 0x469088u;
    SET_GPR_U32(ctx, 31, 0x469090u);
    ctx->pc = 0x46908Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469088u;
            // 0x46908c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469090u; }
        if (ctx->pc != 0x469090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469090u; }
        if (ctx->pc != 0x469090u) { return; }
    }
    ctx->pc = 0x469090u;
label_469090:
    // 0x469090: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x469090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_469094:
    // 0x469094: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x469094u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_469098:
    // 0x469098: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_46909c:
    if (ctx->pc == 0x46909Cu) {
        ctx->pc = 0x46909Cu;
            // 0x46909c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4690A0u;
        goto label_4690a0;
    }
    ctx->pc = 0x469098u;
    {
        const bool branch_taken_0x469098 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x469098) {
            ctx->pc = 0x46909Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x469098u;
            // 0x46909c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4690ACu;
            goto label_4690ac;
        }
    }
    ctx->pc = 0x4690A0u;
label_4690a0:
    // 0x4690a0: 0xc0400a8  jal         func_1002A0
label_4690a4:
    if (ctx->pc == 0x4690A4u) {
        ctx->pc = 0x4690A4u;
            // 0x4690a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4690A8u;
        goto label_4690a8;
    }
    ctx->pc = 0x4690A0u;
    SET_GPR_U32(ctx, 31, 0x4690A8u);
    ctx->pc = 0x4690A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4690A0u;
            // 0x4690a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4690A8u; }
        if (ctx->pc != 0x4690A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4690A8u; }
        if (ctx->pc != 0x4690A8u) { return; }
    }
    ctx->pc = 0x4690A8u;
label_4690a8:
    // 0x4690a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4690a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4690ac:
    // 0x4690ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4690acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4690b0:
    // 0x4690b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4690b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4690b4:
    // 0x4690b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4690b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4690b8:
    // 0x4690b8: 0x3e00008  jr          $ra
label_4690bc:
    if (ctx->pc == 0x4690BCu) {
        ctx->pc = 0x4690BCu;
            // 0x4690bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4690C0u;
        goto label_4690c0;
    }
    ctx->pc = 0x4690B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4690BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4690B8u;
            // 0x4690bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4690C0u;
label_4690c0:
    // 0x4690c0: 0x3e00008  jr          $ra
label_4690c4:
    if (ctx->pc == 0x4690C4u) {
        ctx->pc = 0x4690C8u;
        goto label_4690c8;
    }
    ctx->pc = 0x4690C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4690C8u;
label_4690c8:
    // 0x4690c8: 0x0  nop
    ctx->pc = 0x4690c8u;
    // NOP
label_4690cc:
    // 0x4690cc: 0x0  nop
    ctx->pc = 0x4690ccu;
    // NOP
label_4690d0:
    // 0x4690d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4690d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4690d4:
    // 0x4690d4: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4690d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4690d8:
    // 0x4690d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4690d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4690dc:
    // 0x4690dc: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x4690dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_4690e0:
    // 0x4690e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4690e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4690e4:
    // 0x4690e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4690e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4690e8:
    // 0x4690e8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4690e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4690ec:
    // 0x4690ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4690ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4690f0:
    // 0x4690f0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x4690f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_4690f4:
    // 0x4690f4: 0x8c91a140  lw          $s1, -0x5EC0($a0)
    ctx->pc = 0x4690f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294943040)));
label_4690f8:
    // 0x4690f8: 0x8c70d130  lw          $s0, -0x2ED0($v1)
    ctx->pc = 0x4690f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_4690fc:
    // 0x4690fc: 0x8e290014  lw          $t1, 0x14($s1)
    ctx->pc = 0x4690fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_469100:
    // 0x469100: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x469100u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_469104:
    // 0x469104: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x469104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_469108:
    // 0x469108: 0x34880010  ori         $t0, $a0, 0x10
    ctx->pc = 0x469108u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
label_46910c:
    // 0x46910c: 0x80677600  lb          $a3, 0x7600($v1)
    ctx->pc = 0x46910cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 30208)));
label_469110:
    // 0x469110: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x469110u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_469114:
    // 0x469114: 0x1284024  and         $t0, $t1, $t0
    ctx->pc = 0x469114u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
label_469118:
    // 0x469118: 0x8c8406c0  lw          $a0, 0x6C0($a0)
    ctx->pc = 0x469118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1728)));
label_46911c:
    // 0x46911c: 0x8402b  sltu        $t0, $zero, $t0
    ctx->pc = 0x46911cu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_469120:
    // 0x469120: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x469120u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_469124:
    // 0x469124: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x469124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_469128:
    // 0x469128: 0xa0a77600  sb          $a3, 0x7600($a1)
    ctx->pc = 0x469128u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 30208), (uint8_t)GPR_U32(ctx, 7));
label_46912c:
    // 0x46912c: 0x34660020  ori         $a2, $v1, 0x20
    ctx->pc = 0x46912cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
label_469130:
    // 0x469130: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x469130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_469134:
    // 0x469134: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x469134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_469138:
    // 0x469138: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x469138u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
label_46913c:
    // 0x46913c: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x46913cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_469140:
    // 0x469140: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x469140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_469144:
    // 0x469144: 0x52e3c  dsll32      $a1, $a1, 24
    ctx->pc = 0x469144u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 24));
label_469148:
    // 0x469148: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x469148u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
label_46914c:
    // 0x46914c: 0xa4082a  slt         $at, $a1, $a0
    ctx->pc = 0x46914cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_469150:
    // 0x469150: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_469154:
    if (ctx->pc == 0x469154u) {
        ctx->pc = 0x469154u;
            // 0x469154: 0x8c6306c0  lw          $v1, 0x6C0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1728)));
        ctx->pc = 0x469158u;
        goto label_469158;
    }
    ctx->pc = 0x469150u;
    {
        const bool branch_taken_0x469150 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x469154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469150u;
            // 0x469154: 0x8c6306c0  lw          $v1, 0x6C0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469150) {
            ctx->pc = 0x469160u;
            goto label_469160;
        }
    }
    ctx->pc = 0x469158u;
label_469158:
    // 0x469158: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x469158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_46915c:
    // 0x46915c: 0x8c8506c8  lw          $a1, 0x6C8($a0)
    ctx->pc = 0x46915cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
label_469160:
    // 0x469160: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x469160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_469164:
    // 0x469164: 0x52e3c  dsll32      $a1, $a1, 24
    ctx->pc = 0x469164u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 24));
label_469168:
    // 0x469168: 0x8c8406c8  lw          $a0, 0x6C8($a0)
    ctx->pc = 0x469168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
label_46916c:
    // 0x46916c: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x46916cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
label_469170:
    // 0x469170: 0x85082a  slt         $at, $a0, $a1
    ctx->pc = 0x469170u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_469174:
    // 0x469174: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_469178:
    if (ctx->pc == 0x469178u) {
        ctx->pc = 0x469178u;
            // 0x469178: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46917Cu;
        goto label_46917c;
    }
    ctx->pc = 0x469174u;
    {
        const bool branch_taken_0x469174 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x469174) {
            ctx->pc = 0x469178u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x469174u;
            // 0x469178: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46917Cu;
            goto label_46917c;
        }
    }
    ctx->pc = 0x46917Cu;
label_46917c:
    // 0x46917c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x46917cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_469180:
    // 0x469180: 0x3c050300  lui         $a1, 0x300
    ctx->pc = 0x469180u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)768 << 16));
label_469184:
    // 0x469184: 0xa0837600  sb          $v1, 0x7600($a0)
    ctx->pc = 0x469184u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 30208), (uint8_t)GPR_U32(ctx, 3));
label_469188:
    // 0x469188: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x469188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_46918c:
    // 0x46918c: 0x34a30030  ori         $v1, $a1, 0x30
    ctx->pc = 0x46918cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)48);
label_469190:
    // 0x469190: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x469190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_469194:
    // 0x469194: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_469198:
    if (ctx->pc == 0x469198u) {
        ctx->pc = 0x469198u;
            // 0x469198: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x46919Cu;
        goto label_46919c;
    }
    ctx->pc = 0x469194u;
    {
        const bool branch_taken_0x469194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x469194) {
            ctx->pc = 0x469198u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x469194u;
            // 0x469198: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4691A8u;
            goto label_4691a8;
        }
    }
    ctx->pc = 0x46919Cu;
label_46919c:
    // 0x46919c: 0xc073234  jal         func_1CC8D0
label_4691a0:
    if (ctx->pc == 0x4691A0u) {
        ctx->pc = 0x4691A0u;
            // 0x4691a0: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->pc = 0x4691A4u;
        goto label_4691a4;
    }
    ctx->pc = 0x46919Cu;
    SET_GPR_U32(ctx, 31, 0x4691A4u);
    ctx->pc = 0x4691A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46919Cu;
            // 0x4691a0: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4691A4u; }
        if (ctx->pc != 0x4691A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4691A4u; }
        if (ctx->pc != 0x4691A4u) { return; }
    }
    ctx->pc = 0x4691A4u;
label_4691a4:
    // 0x4691a4: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x4691a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4691a8:
    // 0x4691a8: 0x30830402  andi        $v1, $a0, 0x402
    ctx->pc = 0x4691a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1026);
label_4691ac:
    // 0x4691ac: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
label_4691b0:
    if (ctx->pc == 0x4691B0u) {
        ctx->pc = 0x4691B0u;
            // 0x4691b0: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x4691B4u;
        goto label_4691b4;
    }
    ctx->pc = 0x4691ACu;
    {
        const bool branch_taken_0x4691ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4691ac) {
            ctx->pc = 0x4691B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4691ACu;
            // 0x4691b0: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4691FCu;
            goto label_4691fc;
        }
    }
    ctx->pc = 0x4691B4u;
label_4691b4:
    // 0x4691b4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4691b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4691b8:
    // 0x4691b8: 0x80637600  lb          $v1, 0x7600($v1)
    ctx->pc = 0x4691b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 30208)));
label_4691bc:
    // 0x4691bc: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x4691bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_4691c0:
    // 0x4691c0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_4691c4:
    if (ctx->pc == 0x4691C4u) {
        ctx->pc = 0x4691C8u;
        goto label_4691c8;
    }
    ctx->pc = 0x4691C0u;
    {
        const bool branch_taken_0x4691c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4691c0) {
            ctx->pc = 0x4691F8u;
            goto label_4691f8;
        }
    }
    ctx->pc = 0x4691C8u;
label_4691c8:
    // 0x4691c8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4691c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4691cc:
    // 0x4691cc: 0xc073234  jal         func_1CC8D0
label_4691d0:
    if (ctx->pc == 0x4691D0u) {
        ctx->pc = 0x4691D0u;
            // 0x4691d0: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x4691D4u;
        goto label_4691d4;
    }
    ctx->pc = 0x4691CCu;
    SET_GPR_U32(ctx, 31, 0x4691D4u);
    ctx->pc = 0x4691D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4691CCu;
            // 0x4691d0: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4691D4u; }
        if (ctx->pc != 0x4691D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4691D4u; }
        if (ctx->pc != 0x4691D4u) { return; }
    }
    ctx->pc = 0x4691D4u;
label_4691d4:
    // 0x4691d4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4691d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4691d8:
    // 0x4691d8: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x4691d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4691dc:
    // 0x4691dc: 0x80437600  lb          $v1, 0x7600($v0)
    ctx->pc = 0x4691dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 30208)));
label_4691e0:
    // 0x4691e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4691e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4691e4:
    // 0x4691e4: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x4691e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_4691e8:
    // 0x4691e8: 0xc057b7c  jal         func_15EDF0
label_4691ec:
    if (ctx->pc == 0x4691ECu) {
        ctx->pc = 0x4691ECu;
            // 0x4691ec: 0xac430064  sw          $v1, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
        ctx->pc = 0x4691F0u;
        goto label_4691f0;
    }
    ctx->pc = 0x4691E8u;
    SET_GPR_U32(ctx, 31, 0x4691F0u);
    ctx->pc = 0x4691ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4691E8u;
            // 0x4691ec: 0xac430064  sw          $v1, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4691F0u; }
        if (ctx->pc != 0x4691F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4691F0u; }
        if (ctx->pc != 0x4691F0u) { return; }
    }
    ctx->pc = 0x4691F0u;
label_4691f0:
    // 0x4691f0: 0x1000000e  b           . + 4 + (0xE << 2)
label_4691f4:
    if (ctx->pc == 0x4691F4u) {
        ctx->pc = 0x4691F4u;
            // 0x4691f4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x4691F8u;
        goto label_4691f8;
    }
    ctx->pc = 0x4691F0u;
    {
        const bool branch_taken_0x4691f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4691F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4691F0u;
            // 0x4691f4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4691f0) {
            ctx->pc = 0x46922Cu;
            goto label_46922c;
        }
    }
    ctx->pc = 0x4691F8u;
label_4691f8:
    // 0x4691f8: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x4691f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_4691fc:
    // 0x4691fc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_469200:
    if (ctx->pc == 0x469200u) {
        ctx->pc = 0x469204u;
        goto label_469204;
    }
    ctx->pc = 0x4691FCu;
    {
        const bool branch_taken_0x4691fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4691fc) {
            ctx->pc = 0x469228u;
            goto label_469228;
        }
    }
    ctx->pc = 0x469204u;
label_469204:
    // 0x469204: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x469204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_469208:
    // 0x469208: 0xc073234  jal         func_1CC8D0
label_46920c:
    if (ctx->pc == 0x46920Cu) {
        ctx->pc = 0x46920Cu;
            // 0x46920c: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x469210u;
        goto label_469210;
    }
    ctx->pc = 0x469208u;
    SET_GPR_U32(ctx, 31, 0x469210u);
    ctx->pc = 0x46920Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469208u;
            // 0x46920c: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469210u; }
        if (ctx->pc != 0x469210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469210u; }
        if (ctx->pc != 0x469210u) { return; }
    }
    ctx->pc = 0x469210u;
label_469210:
    // 0x469210: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x469210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_469214:
    // 0x469214: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x469214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_469218:
    // 0x469218: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x469218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_46921c:
    // 0x46921c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x46921cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_469220:
    // 0x469220: 0xc057b7c  jal         func_15EDF0
label_469224:
    if (ctx->pc == 0x469224u) {
        ctx->pc = 0x469224u;
            // 0x469224: 0xac430064  sw          $v1, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
        ctx->pc = 0x469228u;
        goto label_469228;
    }
    ctx->pc = 0x469220u;
    SET_GPR_U32(ctx, 31, 0x469228u);
    ctx->pc = 0x469224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469220u;
            // 0x469224: 0xac430064  sw          $v1, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469228u; }
        if (ctx->pc != 0x469228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469228u; }
        if (ctx->pc != 0x469228u) { return; }
    }
    ctx->pc = 0x469228u;
label_469228:
    // 0x469228: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x469228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_46922c:
    // 0x46922c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x46922cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_469230:
    // 0x469230: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x469230u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_469234:
    // 0x469234: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x469234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_469238:
    // 0x469238: 0x3e00008  jr          $ra
label_46923c:
    if (ctx->pc == 0x46923Cu) {
        ctx->pc = 0x46923Cu;
            // 0x46923c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x469240u;
        goto label_469240;
    }
    ctx->pc = 0x469238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46923Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469238u;
            // 0x46923c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x469240u;
label_469240:
    // 0x469240: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x469240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_469244:
    // 0x469244: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x469244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_469248:
    // 0x469248: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x469248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_46924c:
    // 0x46924c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46924cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_469250:
    // 0x469250: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x469250u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_469254:
    // 0x469254: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_469258:
    if (ctx->pc == 0x469258u) {
        ctx->pc = 0x469258u;
            // 0x469258: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46925Cu;
        goto label_46925c;
    }
    ctx->pc = 0x469254u;
    {
        const bool branch_taken_0x469254 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x469258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469254u;
            // 0x469258: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469254) {
            ctx->pc = 0x4692A8u;
            goto label_4692a8;
        }
    }
    ctx->pc = 0x46925Cu;
label_46925c:
    // 0x46925c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x46925cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_469260:
    // 0x469260: 0x2442e990  addiu       $v0, $v0, -0x1670
    ctx->pc = 0x469260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961552));
label_469264:
    // 0x469264: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_469268:
    if (ctx->pc == 0x469268u) {
        ctx->pc = 0x469268u;
            // 0x469268: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x46926Cu;
        goto label_46926c;
    }
    ctx->pc = 0x469264u;
    {
        const bool branch_taken_0x469264 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x469268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469264u;
            // 0x469268: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469264) {
            ctx->pc = 0x469290u;
            goto label_469290;
        }
    }
    ctx->pc = 0x46926Cu;
label_46926c:
    // 0x46926c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x46926cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_469270:
    // 0x469270: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x469270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_469274:
    // 0x469274: 0x2442e910  addiu       $v0, $v0, -0x16F0
    ctx->pc = 0x469274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961424));
label_469278:
    // 0x469278: 0x2484e950  addiu       $a0, $a0, -0x16B0
    ctx->pc = 0x469278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961488));
label_46927c:
    // 0x46927c: 0xc0ad6c4  jal         func_2B5B10
label_469280:
    if (ctx->pc == 0x469280u) {
        ctx->pc = 0x469280u;
            // 0x469280: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x469284u;
        goto label_469284;
    }
    ctx->pc = 0x46927Cu;
    SET_GPR_U32(ctx, 31, 0x469284u);
    ctx->pc = 0x469280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46927Cu;
            // 0x469280: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469284u; }
        if (ctx->pc != 0x469284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B10_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469284u; }
        if (ctx->pc != 0x469284u) { return; }
    }
    ctx->pc = 0x469284u;
label_469284:
    // 0x469284: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x469284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_469288:
    // 0x469288: 0xc075bf8  jal         func_1D6FE0
label_46928c:
    if (ctx->pc == 0x46928Cu) {
        ctx->pc = 0x46928Cu;
            // 0x46928c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469290u;
        goto label_469290;
    }
    ctx->pc = 0x469288u;
    SET_GPR_U32(ctx, 31, 0x469290u);
    ctx->pc = 0x46928Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469288u;
            // 0x46928c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469290u; }
        if (ctx->pc != 0x469290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469290u; }
        if (ctx->pc != 0x469290u) { return; }
    }
    ctx->pc = 0x469290u;
label_469290:
    // 0x469290: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x469290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_469294:
    // 0x469294: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x469294u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_469298:
    // 0x469298: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_46929c:
    if (ctx->pc == 0x46929Cu) {
        ctx->pc = 0x46929Cu;
            // 0x46929c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4692A0u;
        goto label_4692a0;
    }
    ctx->pc = 0x469298u;
    {
        const bool branch_taken_0x469298 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x469298) {
            ctx->pc = 0x46929Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x469298u;
            // 0x46929c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4692ACu;
            goto label_4692ac;
        }
    }
    ctx->pc = 0x4692A0u;
label_4692a0:
    // 0x4692a0: 0xc0400a8  jal         func_1002A0
label_4692a4:
    if (ctx->pc == 0x4692A4u) {
        ctx->pc = 0x4692A4u;
            // 0x4692a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4692A8u;
        goto label_4692a8;
    }
    ctx->pc = 0x4692A0u;
    SET_GPR_U32(ctx, 31, 0x4692A8u);
    ctx->pc = 0x4692A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4692A0u;
            // 0x4692a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4692A8u; }
        if (ctx->pc != 0x4692A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4692A8u; }
        if (ctx->pc != 0x4692A8u) { return; }
    }
    ctx->pc = 0x4692A8u;
label_4692a8:
    // 0x4692a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4692a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4692ac:
    // 0x4692ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4692acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4692b0:
    // 0x4692b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4692b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4692b4:
    // 0x4692b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4692b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4692b8:
    // 0x4692b8: 0x3e00008  jr          $ra
label_4692bc:
    if (ctx->pc == 0x4692BCu) {
        ctx->pc = 0x4692BCu;
            // 0x4692bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4692C0u;
        goto label_4692c0;
    }
    ctx->pc = 0x4692B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4692BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4692B8u;
            // 0x4692bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4692C0u;
label_4692c0:
    // 0x4692c0: 0x3e00008  jr          $ra
label_4692c4:
    if (ctx->pc == 0x4692C4u) {
        ctx->pc = 0x4692C8u;
        goto label_4692c8;
    }
    ctx->pc = 0x4692C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4692C8u;
label_4692c8:
    // 0x4692c8: 0x0  nop
    ctx->pc = 0x4692c8u;
    // NOP
label_4692cc:
    // 0x4692cc: 0x0  nop
    ctx->pc = 0x4692ccu;
    // NOP
label_4692d0:
    // 0x4692d0: 0x3e00008  jr          $ra
label_4692d4:
    if (ctx->pc == 0x4692D4u) {
        ctx->pc = 0x4692D8u;
        goto label_4692d8;
    }
    ctx->pc = 0x4692D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4692D8u;
label_4692d8:
    // 0x4692d8: 0x0  nop
    ctx->pc = 0x4692d8u;
    // NOP
label_4692dc:
    // 0x4692dc: 0x0  nop
    ctx->pc = 0x4692dcu;
    // NOP
label_4692e0:
    // 0x4692e0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4692e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4692e4:
    // 0x4692e4: 0x8c65a140  lw          $a1, -0x5EC0($v1)
    ctx->pc = 0x4692e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943040)));
label_4692e8:
    // 0x4692e8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4692e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4692ec:
    // 0x4692ec: 0x806375f8  lb          $v1, 0x75F8($v1)
    ctx->pc = 0x4692ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 30200)));
label_4692f0:
    // 0x4692f0: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_4692f4:
    if (ctx->pc == 0x4692F4u) {
        ctx->pc = 0x4692F4u;
            // 0x4692f4: 0x8ca60014  lw          $a2, 0x14($a1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
        ctx->pc = 0x4692F8u;
        goto label_4692f8;
    }
    ctx->pc = 0x4692F0u;
    {
        const bool branch_taken_0x4692f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4692f0) {
            ctx->pc = 0x4692F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4692F0u;
            // 0x4692f4: 0x8ca60014  lw          $a2, 0x14($a1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x469300u;
            goto label_469300;
        }
    }
    ctx->pc = 0x4692F8u;
label_4692f8:
    // 0x4692f8: 0x10000008  b           . + 4 + (0x8 << 2)
label_4692fc:
    if (ctx->pc == 0x4692FCu) {
        ctx->pc = 0x469300u;
        goto label_469300;
    }
    ctx->pc = 0x4692F8u;
    {
        const bool branch_taken_0x4692f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4692f8) {
            ctx->pc = 0x46931Cu;
            goto label_46931c;
        }
    }
    ctx->pc = 0x469300u;
label_469300:
    // 0x469300: 0x3c030c00  lui         $v1, 0xC00
    ctx->pc = 0x469300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3072 << 16));
label_469304:
    // 0x469304: 0x346500c0  ori         $a1, $v1, 0xC0
    ctx->pc = 0x469304u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)192);
label_469308:
    // 0x469308: 0x9083005b  lbu         $v1, 0x5B($a0)
    ctx->pc = 0x469308u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 91)));
label_46930c:
    // 0x46930c: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x46930cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_469310:
    // 0x469310: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x469310u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_469314:
    // 0x469314: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x469314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
label_469318:
    // 0x469318: 0xa083005b  sb          $v1, 0x5B($a0)
    ctx->pc = 0x469318u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 91), (uint8_t)GPR_U32(ctx, 3));
label_46931c:
    // 0x46931c: 0x3e00008  jr          $ra
label_469320:
    if (ctx->pc == 0x469320u) {
        ctx->pc = 0x469324u;
        goto label_469324;
    }
    ctx->pc = 0x46931Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x469324u;
label_469324:
    // 0x469324: 0x0  nop
    ctx->pc = 0x469324u;
    // NOP
label_469328:
    // 0x469328: 0x0  nop
    ctx->pc = 0x469328u;
    // NOP
label_46932c:
    // 0x46932c: 0x0  nop
    ctx->pc = 0x46932cu;
    // NOP
label_469330:
    // 0x469330: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x469330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_469334:
    // 0x469334: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x469334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_469338:
    // 0x469338: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x469338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_46933c:
    // 0x46933c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46933cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_469340:
    // 0x469340: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x469340u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_469344:
    // 0x469344: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x469344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_469348:
    // 0x469348: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x469348u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_46934c:
    // 0x46934c: 0x2c61000a  sltiu       $at, $v1, 0xA
    ctx->pc = 0x46934cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_469350:
    // 0x469350: 0x1020032d  beqz        $at, . + 4 + (0x32D << 2)
label_469354:
    if (ctx->pc == 0x469354u) {
        ctx->pc = 0x469354u;
            // 0x469354: 0x2411006e  addiu       $s1, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->pc = 0x469358u;
        goto label_469358;
    }
    ctx->pc = 0x469350u;
    {
        const bool branch_taken_0x469350 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x469354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469350u;
            // 0x469354: 0x2411006e  addiu       $s1, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469350) {
            ctx->pc = 0x46A008u;
            goto label_46a008;
        }
    }
    ctx->pc = 0x469358u;
label_469358:
    // 0x469358: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x469358u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_46935c:
    // 0x46935c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x46935cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_469360:
    // 0x469360: 0x24a5ed60  addiu       $a1, $a1, -0x12A0
    ctx->pc = 0x469360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962528));
label_469364:
    // 0x469364: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x469364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_469368:
    // 0x469368: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x469368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_46936c:
    // 0x46936c: 0x600008  jr          $v1
label_469370:
    if (ctx->pc == 0x469370u) {
        ctx->pc = 0x469374u;
        goto label_469374;
    }
    ctx->pc = 0x46936Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x469374u: goto label_469374;
            case 0x46937Cu: goto label_46937c;
            case 0x469530u: goto label_469530;
            case 0x469770u: goto label_469770;
            case 0x4699ECu: goto label_4699ec;
            case 0x469CA8u: goto label_469ca8;
            case 0x469E5Cu: goto label_469e5c;
            case 0x46A008u: goto label_46a008;
            default: break;
        }
        return;
    }
    ctx->pc = 0x469374u;
label_469374:
    // 0x469374: 0xc11ae28  jal         func_46B8A0
label_469378:
    if (ctx->pc == 0x469378u) {
        ctx->pc = 0x46937Cu;
        goto label_46937c;
    }
    ctx->pc = 0x469374u;
    SET_GPR_U32(ctx, 31, 0x46937Cu);
    ctx->pc = 0x46B8A0u;
    if (runtime->hasFunction(0x46B8A0u)) {
        auto targetFn = runtime->lookupFunction(0x46B8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46937Cu; }
        if (ctx->pc != 0x46937Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046B8A0_0x46b8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46937Cu; }
        if (ctx->pc != 0x46937Cu) { return; }
    }
    ctx->pc = 0x46937Cu;
label_46937c:
    // 0x46937c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x46937cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_469380:
    // 0x469380: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x469380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_469384:
    // 0x469384: 0x8c5089f0  lw          $s0, -0x7610($v0)
    ctx->pc = 0x469384u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_469388:
    // 0x469388: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x469388u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_46938c:
    // 0x46938c: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x46938cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_469390:
    // 0x469390: 0x320f809  jalr        $t9
label_469394:
    if (ctx->pc == 0x469394u) {
        ctx->pc = 0x469394u;
            // 0x469394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469398u;
        goto label_469398;
    }
    ctx->pc = 0x469390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x469398u);
        ctx->pc = 0x469394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469390u;
            // 0x469394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x469398u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x469398u; }
            if (ctx->pc != 0x469398u) { return; }
        }
        }
    }
    ctx->pc = 0x469398u;
label_469398:
    // 0x469398: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x469398u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_46939c:
    // 0x46939c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x46939cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4693a0:
    // 0x4693a0: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x4693a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_4693a4:
    // 0x4693a4: 0x320f809  jalr        $t9
label_4693a8:
    if (ctx->pc == 0x4693A8u) {
        ctx->pc = 0x4693A8u;
            // 0x4693a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4693ACu;
        goto label_4693ac;
    }
    ctx->pc = 0x4693A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4693ACu);
        ctx->pc = 0x4693A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4693A4u;
            // 0x4693a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4693ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4693ACu; }
            if (ctx->pc != 0x4693ACu) { return; }
        }
        }
    }
    ctx->pc = 0x4693ACu;
label_4693ac:
    // 0x4693ac: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x4693acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_4693b0:
    // 0x4693b0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4693b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4693b4:
    // 0x4693b4: 0xc1234b8  jal         func_48D2E0
label_4693b8:
    if (ctx->pc == 0x4693B8u) {
        ctx->pc = 0x4693B8u;
            // 0x4693b8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4693BCu;
        goto label_4693bc;
    }
    ctx->pc = 0x4693B4u;
    SET_GPR_U32(ctx, 31, 0x4693BCu);
    ctx->pc = 0x4693B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4693B4u;
            // 0x4693b8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D2E0u;
    if (runtime->hasFunction(0x48D2E0u)) {
        auto targetFn = runtime->lookupFunction(0x48D2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4693BCu; }
        if (ctx->pc != 0x4693BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D2E0_0x48d2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4693BCu; }
        if (ctx->pc != 0x4693BCu) { return; }
    }
    ctx->pc = 0x4693BCu;
label_4693bc:
    // 0x4693bc: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x4693bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_4693c0:
    // 0x4693c0: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x4693c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_4693c4:
    // 0x4693c4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x4693c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4693c8:
    // 0x4693c8: 0xa040007c  sb          $zero, 0x7C($v0)
    ctx->pc = 0x4693c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 124), (uint8_t)GPR_U32(ctx, 0));
label_4693cc:
    // 0x4693cc: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x4693ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_4693d0:
    // 0x4693d0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4693d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4693d4:
    // 0x4693d4: 0xc1232ac  jal         func_48CAB0
label_4693d8:
    if (ctx->pc == 0x4693D8u) {
        ctx->pc = 0x4693D8u;
            // 0x4693d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4693DCu;
        goto label_4693dc;
    }
    ctx->pc = 0x4693D4u;
    SET_GPR_U32(ctx, 31, 0x4693DCu);
    ctx->pc = 0x4693D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4693D4u;
            // 0x4693d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4693DCu; }
        if (ctx->pc != 0x4693DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4693DCu; }
        if (ctx->pc != 0x4693DCu) { return; }
    }
    ctx->pc = 0x4693DCu;
label_4693dc:
    // 0x4693dc: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x4693dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_4693e0:
    // 0x4693e0: 0x2405009d  addiu       $a1, $zero, 0x9D
    ctx->pc = 0x4693e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
label_4693e4:
    // 0x4693e4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4693e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4693e8:
    // 0x4693e8: 0xc1232ac  jal         func_48CAB0
label_4693ec:
    if (ctx->pc == 0x4693ECu) {
        ctx->pc = 0x4693ECu;
            // 0x4693ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4693F0u;
        goto label_4693f0;
    }
    ctx->pc = 0x4693E8u;
    SET_GPR_U32(ctx, 31, 0x4693F0u);
    ctx->pc = 0x4693ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4693E8u;
            // 0x4693ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4693F0u; }
        if (ctx->pc != 0x4693F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4693F0u; }
        if (ctx->pc != 0x4693F0u) { return; }
    }
    ctx->pc = 0x4693F0u;
label_4693f0:
    // 0x4693f0: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x4693f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_4693f4:
    // 0x4693f4: 0x2405009e  addiu       $a1, $zero, 0x9E
    ctx->pc = 0x4693f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
label_4693f8:
    // 0x4693f8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4693f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4693fc:
    // 0x4693fc: 0xc1232ac  jal         func_48CAB0
label_469400:
    if (ctx->pc == 0x469400u) {
        ctx->pc = 0x469400u;
            // 0x469400: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469404u;
        goto label_469404;
    }
    ctx->pc = 0x4693FCu;
    SET_GPR_U32(ctx, 31, 0x469404u);
    ctx->pc = 0x469400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4693FCu;
            // 0x469400: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469404u; }
        if (ctx->pc != 0x469404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469404u; }
        if (ctx->pc != 0x469404u) { return; }
    }
    ctx->pc = 0x469404u;
label_469404:
    // 0x469404: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x469404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_469408:
    // 0x469408: 0x2405009f  addiu       $a1, $zero, 0x9F
    ctx->pc = 0x469408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
label_46940c:
    // 0x46940c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x46940cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_469410:
    // 0x469410: 0xc1232ac  jal         func_48CAB0
label_469414:
    if (ctx->pc == 0x469414u) {
        ctx->pc = 0x469414u;
            // 0x469414: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469418u;
        goto label_469418;
    }
    ctx->pc = 0x469410u;
    SET_GPR_U32(ctx, 31, 0x469418u);
    ctx->pc = 0x469414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469410u;
            // 0x469414: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469418u; }
        if (ctx->pc != 0x469418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469418u; }
        if (ctx->pc != 0x469418u) { return; }
    }
    ctx->pc = 0x469418u;
label_469418:
    // 0x469418: 0x8e440068  lw          $a0, 0x68($s2)
    ctx->pc = 0x469418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_46941c:
    // 0x46941c: 0xc0c9190  jal         func_324640
label_469420:
    if (ctx->pc == 0x469420u) {
        ctx->pc = 0x469420u;
            // 0x469420: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x469424u;
        goto label_469424;
    }
    ctx->pc = 0x46941Cu;
    SET_GPR_U32(ctx, 31, 0x469424u);
    ctx->pc = 0x469420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46941Cu;
            // 0x469420: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324640u;
    if (runtime->hasFunction(0x324640u)) {
        auto targetFn = runtime->lookupFunction(0x324640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469424u; }
        if (ctx->pc != 0x469424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324640_0x324640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469424u; }
        if (ctx->pc != 0x469424u) { return; }
    }
    ctx->pc = 0x469424u;
label_469424:
    // 0x469424: 0xc0c9c84  jal         func_327210
label_469428:
    if (ctx->pc == 0x469428u) {
        ctx->pc = 0x469428u;
            // 0x469428: 0x8e440068  lw          $a0, 0x68($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->pc = 0x46942Cu;
        goto label_46942c;
    }
    ctx->pc = 0x469424u;
    SET_GPR_U32(ctx, 31, 0x46942Cu);
    ctx->pc = 0x469428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469424u;
            // 0x469428: 0x8e440068  lw          $a0, 0x68($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x327210u;
    if (runtime->hasFunction(0x327210u)) {
        auto targetFn = runtime->lookupFunction(0x327210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46942Cu; }
        if (ctx->pc != 0x46942Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00327210_0x327210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46942Cu; }
        if (ctx->pc != 0x46942Cu) { return; }
    }
    ctx->pc = 0x46942Cu;
label_46942c:
    // 0x46942c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x46942cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_469430:
    // 0x469430: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x469430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_469434:
    // 0x469434: 0x8c5089f0  lw          $s0, -0x7610($v0)
    ctx->pc = 0x469434u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_469438:
    // 0x469438: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x469438u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_46943c:
    // 0x46943c: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x46943cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_469440:
    // 0x469440: 0x320f809  jalr        $t9
label_469444:
    if (ctx->pc == 0x469444u) {
        ctx->pc = 0x469444u;
            // 0x469444: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469448u;
        goto label_469448;
    }
    ctx->pc = 0x469440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x469448u);
        ctx->pc = 0x469444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469440u;
            // 0x469444: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x469448u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x469448u; }
            if (ctx->pc != 0x469448u) { return; }
        }
        }
    }
    ctx->pc = 0x469448u;
label_469448:
    // 0x469448: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x469448u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_46944c:
    // 0x46944c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x46944cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_469450:
    // 0x469450: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x469450u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_469454:
    // 0x469454: 0x320f809  jalr        $t9
label_469458:
    if (ctx->pc == 0x469458u) {
        ctx->pc = 0x469458u;
            // 0x469458: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46945Cu;
        goto label_46945c;
    }
    ctx->pc = 0x469454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46945Cu);
        ctx->pc = 0x469458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469454u;
            // 0x469458: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46945Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46945Cu; }
            if (ctx->pc != 0x46945Cu) { return; }
        }
        }
    }
    ctx->pc = 0x46945Cu;
label_46945c:
    // 0x46945c: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x46945cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_469460:
    // 0x469460: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x469460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_469464:
    // 0x469464: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x469464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_469468:
    // 0x469468: 0x8c440088  lw          $a0, 0x88($v0)
    ctx->pc = 0x469468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_46946c:
    // 0x46946c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46946cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_469470:
    // 0x469470: 0x8f390060  lw          $t9, 0x60($t9)
    ctx->pc = 0x469470u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 96)));
label_469474:
    // 0x469474: 0x320f809  jalr        $t9
label_469478:
    if (ctx->pc == 0x469478u) {
        ctx->pc = 0x469478u;
            // 0x469478: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46947Cu;
        goto label_46947c;
    }
    ctx->pc = 0x469474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46947Cu);
        ctx->pc = 0x469478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469474u;
            // 0x469478: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46947Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46947Cu; }
            if (ctx->pc != 0x46947Cu) { return; }
        }
        }
    }
    ctx->pc = 0x46947Cu;
label_46947c:
    // 0x46947c: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x46947cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_469480:
    // 0x469480: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x469480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_469484:
    // 0x469484: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x469484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_469488:
    // 0x469488: 0xc1232ac  jal         func_48CAB0
label_46948c:
    if (ctx->pc == 0x46948Cu) {
        ctx->pc = 0x46948Cu;
            // 0x46948c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469490u;
        goto label_469490;
    }
    ctx->pc = 0x469488u;
    SET_GPR_U32(ctx, 31, 0x469490u);
    ctx->pc = 0x46948Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469488u;
            // 0x46948c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469490u; }
        if (ctx->pc != 0x469490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469490u; }
        if (ctx->pc != 0x469490u) { return; }
    }
    ctx->pc = 0x469490u;
label_469490:
    // 0x469490: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x469490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_469494:
    // 0x469494: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x469494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_469498:
    // 0x469498: 0x8c5089f0  lw          $s0, -0x7610($v0)
    ctx->pc = 0x469498u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_46949c:
    // 0x46949c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x46949cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4694a0:
    // 0x4694a0: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x4694a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_4694a4:
    // 0x4694a4: 0x320f809  jalr        $t9
label_4694a8:
    if (ctx->pc == 0x4694A8u) {
        ctx->pc = 0x4694A8u;
            // 0x4694a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4694ACu;
        goto label_4694ac;
    }
    ctx->pc = 0x4694A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4694ACu);
        ctx->pc = 0x4694A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4694A4u;
            // 0x4694a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4694ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4694ACu; }
            if (ctx->pc != 0x4694ACu) { return; }
        }
        }
    }
    ctx->pc = 0x4694ACu;
label_4694ac:
    // 0x4694ac: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4694acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4694b0:
    // 0x4694b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4694b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4694b4:
    // 0x4694b4: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x4694b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_4694b8:
    // 0x4694b8: 0x320f809  jalr        $t9
label_4694bc:
    if (ctx->pc == 0x4694BCu) {
        ctx->pc = 0x4694BCu;
            // 0x4694bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4694C0u;
        goto label_4694c0;
    }
    ctx->pc = 0x4694B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4694C0u);
        ctx->pc = 0x4694BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4694B8u;
            // 0x4694bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4694C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4694C0u; }
            if (ctx->pc != 0x4694C0u) { return; }
        }
        }
    }
    ctx->pc = 0x4694C0u;
label_4694c0:
    // 0x4694c0: 0xc0c85f8  jal         func_3217E0
label_4694c4:
    if (ctx->pc == 0x4694C4u) {
        ctx->pc = 0x4694C4u;
            // 0x4694c4: 0x8e440068  lw          $a0, 0x68($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->pc = 0x4694C8u;
        goto label_4694c8;
    }
    ctx->pc = 0x4694C0u;
    SET_GPR_U32(ctx, 31, 0x4694C8u);
    ctx->pc = 0x4694C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4694C0u;
            // 0x4694c4: 0x8e440068  lw          $a0, 0x68($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3217E0u;
    if (runtime->hasFunction(0x3217E0u)) {
        auto targetFn = runtime->lookupFunction(0x3217E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4694C8u; }
        if (ctx->pc != 0x4694C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003217E0_0x3217e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4694C8u; }
        if (ctx->pc != 0x4694C8u) { return; }
    }
    ctx->pc = 0x4694C8u;
label_4694c8:
    // 0x4694c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4694c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4694cc:
    // 0x4694cc: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x4694ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_4694d0:
    // 0x4694d0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4694d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4694d4:
    // 0x4694d4: 0xc1232d0  jal         func_48CB40
label_4694d8:
    if (ctx->pc == 0x4694D8u) {
        ctx->pc = 0x4694D8u;
            // 0x4694d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4694DCu;
        goto label_4694dc;
    }
    ctx->pc = 0x4694D4u;
    SET_GPR_U32(ctx, 31, 0x4694DCu);
    ctx->pc = 0x4694D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4694D4u;
            // 0x4694d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB40u;
    if (runtime->hasFunction(0x48CB40u)) {
        auto targetFn = runtime->lookupFunction(0x48CB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4694DCu; }
        if (ctx->pc != 0x4694DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB40_0x48cb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4694DCu; }
        if (ctx->pc != 0x4694DCu) { return; }
    }
    ctx->pc = 0x4694DCu;
label_4694dc:
    // 0x4694dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4694dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_4694e0:
    // 0x4694e0: 0x2a0200a0  slti        $v0, $s0, 0xA0
    ctx->pc = 0x4694e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)160) ? 1 : 0);
label_4694e4:
    // 0x4694e4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_4694e8:
    if (ctx->pc == 0x4694E8u) {
        ctx->pc = 0x4694E8u;
            // 0x4694e8: 0x8e42006c  lw          $v0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->pc = 0x4694ECu;
        goto label_4694ec;
    }
    ctx->pc = 0x4694E4u;
    {
        const bool branch_taken_0x4694e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4694e4) {
            ctx->pc = 0x4694E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4694E4u;
            // 0x4694e8: 0x8e42006c  lw          $v0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4694D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4694d0;
        }
    }
    ctx->pc = 0x4694ECu;
label_4694ec:
    // 0x4694ec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4694ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4694f0:
    // 0x4694f0: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x4694f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_4694f4:
    // 0x4694f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4694f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4694f8:
    // 0x4694f8: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x4694f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_4694fc:
    // 0x4694fc: 0x320f809  jalr        $t9
label_469500:
    if (ctx->pc == 0x469500u) {
        ctx->pc = 0x469504u;
        goto label_469504;
    }
    ctx->pc = 0x4694FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x469504u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x469504u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x469504u; }
            if (ctx->pc != 0x469504u) { return; }
        }
        }
    }
    ctx->pc = 0x469504u;
label_469504:
    // 0x469504: 0x3c023f26  lui         $v0, 0x3F26
    ctx->pc = 0x469504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16166 << 16));
label_469508:
    // 0x469508: 0x8e440068  lw          $a0, 0x68($s2)
    ctx->pc = 0x469508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_46950c:
    // 0x46950c: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x46950cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_469510:
    // 0x469510: 0x2407fc18  addiu       $a3, $zero, -0x3E8
    ctx->pc = 0x469510u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
label_469514:
    // 0x469514: 0x2405006e  addiu       $a1, $zero, 0x6E
    ctx->pc = 0x469514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_469518:
    // 0x469518: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x469518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_46951c:
    // 0x46951c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x46951cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_469520:
    // 0x469520: 0xc0c85cc  jal         func_321730
label_469524:
    if (ctx->pc == 0x469524u) {
        ctx->pc = 0x469524u;
            // 0x469524: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469528u;
        goto label_469528;
    }
    ctx->pc = 0x469520u;
    SET_GPR_U32(ctx, 31, 0x469528u);
    ctx->pc = 0x469524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469520u;
            // 0x469524: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321730u;
    if (runtime->hasFunction(0x321730u)) {
        auto targetFn = runtime->lookupFunction(0x321730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469528u; }
        if (ctx->pc != 0x469528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321730_0x321730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469528u; }
        if (ctx->pc != 0x469528u) { return; }
    }
    ctx->pc = 0x469528u;
label_469528:
    // 0x469528: 0x100002b8  b           . + 4 + (0x2B8 << 2)
label_46952c:
    if (ctx->pc == 0x46952Cu) {
        ctx->pc = 0x46952Cu;
            // 0x46952c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x469530u;
        goto label_469530;
    }
    ctx->pc = 0x469528u;
    {
        const bool branch_taken_0x469528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46952Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469528u;
            // 0x46952c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469528) {
            ctx->pc = 0x46A00Cu;
            goto label_46a00c;
        }
    }
    ctx->pc = 0x469530u;
label_469530:
    // 0x469530: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x469530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_469534:
    // 0x469534: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x469534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_469538:
    // 0x469538: 0x8c5089f0  lw          $s0, -0x7610($v0)
    ctx->pc = 0x469538u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_46953c:
    // 0x46953c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x46953cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_469540:
    // 0x469540: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x469540u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_469544:
    // 0x469544: 0x320f809  jalr        $t9
label_469548:
    if (ctx->pc == 0x469548u) {
        ctx->pc = 0x469548u;
            // 0x469548: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46954Cu;
        goto label_46954c;
    }
    ctx->pc = 0x469544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46954Cu);
        ctx->pc = 0x469548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469544u;
            // 0x469548: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46954Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46954Cu; }
            if (ctx->pc != 0x46954Cu) { return; }
        }
        }
    }
    ctx->pc = 0x46954Cu;
label_46954c:
    // 0x46954c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x46954cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_469550:
    // 0x469550: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x469550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_469554:
    // 0x469554: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x469554u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_469558:
    // 0x469558: 0x320f809  jalr        $t9
label_46955c:
    if (ctx->pc == 0x46955Cu) {
        ctx->pc = 0x46955Cu;
            // 0x46955c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469560u;
        goto label_469560;
    }
    ctx->pc = 0x469558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x469560u);
        ctx->pc = 0x46955Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469558u;
            // 0x46955c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x469560u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x469560u; }
            if (ctx->pc != 0x469560u) { return; }
        }
        }
    }
    ctx->pc = 0x469560u;
label_469560:
    // 0x469560: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x469560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_469564:
    // 0x469564: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x469564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_469568:
    // 0x469568: 0xc1234b8  jal         func_48D2E0
label_46956c:
    if (ctx->pc == 0x46956Cu) {
        ctx->pc = 0x46956Cu;
            // 0x46956c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x469570u;
        goto label_469570;
    }
    ctx->pc = 0x469568u;
    SET_GPR_U32(ctx, 31, 0x469570u);
    ctx->pc = 0x46956Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469568u;
            // 0x46956c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D2E0u;
    if (runtime->hasFunction(0x48D2E0u)) {
        auto targetFn = runtime->lookupFunction(0x48D2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469570u; }
        if (ctx->pc != 0x469570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D2E0_0x48d2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469570u; }
        if (ctx->pc != 0x469570u) { return; }
    }
    ctx->pc = 0x469570u;
label_469570:
    // 0x469570: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x469570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_469574:
    // 0x469574: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x469574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_469578:
    // 0x469578: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x469578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46957c:
    // 0x46957c: 0xa040007c  sb          $zero, 0x7C($v0)
    ctx->pc = 0x46957cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 124), (uint8_t)GPR_U32(ctx, 0));
label_469580:
    // 0x469580: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x469580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_469584:
    // 0x469584: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x469584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_469588:
    // 0x469588: 0xc1232ac  jal         func_48CAB0
label_46958c:
    if (ctx->pc == 0x46958Cu) {
        ctx->pc = 0x46958Cu;
            // 0x46958c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469590u;
        goto label_469590;
    }
    ctx->pc = 0x469588u;
    SET_GPR_U32(ctx, 31, 0x469590u);
    ctx->pc = 0x46958Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469588u;
            // 0x46958c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469590u; }
        if (ctx->pc != 0x469590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469590u; }
        if (ctx->pc != 0x469590u) { return; }
    }
    ctx->pc = 0x469590u;
label_469590:
    // 0x469590: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x469590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_469594:
    // 0x469594: 0x2405009d  addiu       $a1, $zero, 0x9D
    ctx->pc = 0x469594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
label_469598:
    // 0x469598: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x469598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46959c:
    // 0x46959c: 0xc1232ac  jal         func_48CAB0
label_4695a0:
    if (ctx->pc == 0x4695A0u) {
        ctx->pc = 0x4695A0u;
            // 0x4695a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4695A4u;
        goto label_4695a4;
    }
    ctx->pc = 0x46959Cu;
    SET_GPR_U32(ctx, 31, 0x4695A4u);
    ctx->pc = 0x4695A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46959Cu;
            // 0x4695a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4695A4u; }
        if (ctx->pc != 0x4695A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4695A4u; }
        if (ctx->pc != 0x4695A4u) { return; }
    }
    ctx->pc = 0x4695A4u;
label_4695a4:
    // 0x4695a4: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x4695a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_4695a8:
    // 0x4695a8: 0x2405009e  addiu       $a1, $zero, 0x9E
    ctx->pc = 0x4695a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
label_4695ac:
    // 0x4695ac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4695acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4695b0:
    // 0x4695b0: 0xc1232ac  jal         func_48CAB0
label_4695b4:
    if (ctx->pc == 0x4695B4u) {
        ctx->pc = 0x4695B4u;
            // 0x4695b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4695B8u;
        goto label_4695b8;
    }
    ctx->pc = 0x4695B0u;
    SET_GPR_U32(ctx, 31, 0x4695B8u);
    ctx->pc = 0x4695B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4695B0u;
            // 0x4695b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4695B8u; }
        if (ctx->pc != 0x4695B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4695B8u; }
        if (ctx->pc != 0x4695B8u) { return; }
    }
    ctx->pc = 0x4695B8u;
label_4695b8:
    // 0x4695b8: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x4695b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_4695bc:
    // 0x4695bc: 0x2405009f  addiu       $a1, $zero, 0x9F
    ctx->pc = 0x4695bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
label_4695c0:
    // 0x4695c0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4695c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4695c4:
    // 0x4695c4: 0xc1232ac  jal         func_48CAB0
label_4695c8:
    if (ctx->pc == 0x4695C8u) {
        ctx->pc = 0x4695C8u;
            // 0x4695c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4695CCu;
        goto label_4695cc;
    }
    ctx->pc = 0x4695C4u;
    SET_GPR_U32(ctx, 31, 0x4695CCu);
    ctx->pc = 0x4695C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4695C4u;
            // 0x4695c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4695CCu; }
        if (ctx->pc != 0x4695CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4695CCu; }
        if (ctx->pc != 0x4695CCu) { return; }
    }
    ctx->pc = 0x4695CCu;
label_4695cc:
    // 0x4695cc: 0x8e440068  lw          $a0, 0x68($s2)
    ctx->pc = 0x4695ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_4695d0:
    // 0x4695d0: 0xc0c9190  jal         func_324640
label_4695d4:
    if (ctx->pc == 0x4695D4u) {
        ctx->pc = 0x4695D4u;
            // 0x4695d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4695D8u;
        goto label_4695d8;
    }
    ctx->pc = 0x4695D0u;
    SET_GPR_U32(ctx, 31, 0x4695D8u);
    ctx->pc = 0x4695D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4695D0u;
            // 0x4695d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324640u;
    if (runtime->hasFunction(0x324640u)) {
        auto targetFn = runtime->lookupFunction(0x324640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4695D8u; }
        if (ctx->pc != 0x4695D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324640_0x324640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4695D8u; }
        if (ctx->pc != 0x4695D8u) { return; }
    }
    ctx->pc = 0x4695D8u;
label_4695d8:
    // 0x4695d8: 0xc0c9c84  jal         func_327210
label_4695dc:
    if (ctx->pc == 0x4695DCu) {
        ctx->pc = 0x4695DCu;
            // 0x4695dc: 0x8e440068  lw          $a0, 0x68($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->pc = 0x4695E0u;
        goto label_4695e0;
    }
    ctx->pc = 0x4695D8u;
    SET_GPR_U32(ctx, 31, 0x4695E0u);
    ctx->pc = 0x4695DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4695D8u;
            // 0x4695dc: 0x8e440068  lw          $a0, 0x68($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x327210u;
    if (runtime->hasFunction(0x327210u)) {
        auto targetFn = runtime->lookupFunction(0x327210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4695E0u; }
        if (ctx->pc != 0x4695E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00327210_0x327210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4695E0u; }
        if (ctx->pc != 0x4695E0u) { return; }
    }
    ctx->pc = 0x4695E0u;
label_4695e0:
    // 0x4695e0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4695e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4695e4:
    // 0x4695e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4695e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4695e8:
    // 0x4695e8: 0x8c5089f0  lw          $s0, -0x7610($v0)
    ctx->pc = 0x4695e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_4695ec:
    // 0x4695ec: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4695ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4695f0:
    // 0x4695f0: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x4695f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_4695f4:
    // 0x4695f4: 0x320f809  jalr        $t9
label_4695f8:
    if (ctx->pc == 0x4695F8u) {
        ctx->pc = 0x4695F8u;
            // 0x4695f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4695FCu;
        goto label_4695fc;
    }
    ctx->pc = 0x4695F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4695FCu);
        ctx->pc = 0x4695F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4695F4u;
            // 0x4695f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4695FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4695FCu; }
            if (ctx->pc != 0x4695FCu) { return; }
        }
        }
    }
    ctx->pc = 0x4695FCu;
label_4695fc:
    // 0x4695fc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4695fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_469600:
    // 0x469600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x469600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_469604:
    // 0x469604: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x469604u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_469608:
    // 0x469608: 0x320f809  jalr        $t9
label_46960c:
    if (ctx->pc == 0x46960Cu) {
        ctx->pc = 0x46960Cu;
            // 0x46960c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469610u;
        goto label_469610;
    }
    ctx->pc = 0x469608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x469610u);
        ctx->pc = 0x46960Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469608u;
            // 0x46960c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x469610u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x469610u; }
            if (ctx->pc != 0x469610u) { return; }
        }
        }
    }
    ctx->pc = 0x469610u;
label_469610:
    // 0x469610: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x469610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_469614:
    // 0x469614: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x469614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_469618:
    // 0x469618: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x469618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_46961c:
    // 0x46961c: 0x8c440088  lw          $a0, 0x88($v0)
    ctx->pc = 0x46961cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_469620:
    // 0x469620: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x469620u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_469624:
    // 0x469624: 0x8f390060  lw          $t9, 0x60($t9)
    ctx->pc = 0x469624u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 96)));
label_469628:
    // 0x469628: 0x320f809  jalr        $t9
label_46962c:
    if (ctx->pc == 0x46962Cu) {
        ctx->pc = 0x46962Cu;
            // 0x46962c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469630u;
        goto label_469630;
    }
    ctx->pc = 0x469628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x469630u);
        ctx->pc = 0x46962Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469628u;
            // 0x46962c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x469630u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x469630u; }
            if (ctx->pc != 0x469630u) { return; }
        }
        }
    }
    ctx->pc = 0x469630u;
label_469630:
    // 0x469630: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x469630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_469634:
    // 0x469634: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x469634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_469638:
    // 0x469638: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x469638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46963c:
    // 0x46963c: 0xc1232ac  jal         func_48CAB0
label_469640:
    if (ctx->pc == 0x469640u) {
        ctx->pc = 0x469640u;
            // 0x469640: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469644u;
        goto label_469644;
    }
    ctx->pc = 0x46963Cu;
    SET_GPR_U32(ctx, 31, 0x469644u);
    ctx->pc = 0x469640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46963Cu;
            // 0x469640: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469644u; }
        if (ctx->pc != 0x469644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469644u; }
        if (ctx->pc != 0x469644u) { return; }
    }
    ctx->pc = 0x469644u;
label_469644:
    // 0x469644: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x469644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_469648:
    // 0x469648: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x469648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46964c:
    // 0x46964c: 0x8c5089f0  lw          $s0, -0x7610($v0)
    ctx->pc = 0x46964cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_469650:
    // 0x469650: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x469650u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_469654:
    // 0x469654: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x469654u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_469658:
    // 0x469658: 0x320f809  jalr        $t9
label_46965c:
    if (ctx->pc == 0x46965Cu) {
        ctx->pc = 0x46965Cu;
            // 0x46965c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469660u;
        goto label_469660;
    }
    ctx->pc = 0x469658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x469660u);
        ctx->pc = 0x46965Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469658u;
            // 0x46965c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x469660u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x469660u; }
            if (ctx->pc != 0x469660u) { return; }
        }
        }
    }
    ctx->pc = 0x469660u;
label_469660:
    // 0x469660: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x469660u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_469664:
    // 0x469664: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x469664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_469668:
    // 0x469668: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x469668u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_46966c:
    // 0x46966c: 0x320f809  jalr        $t9
label_469670:
    if (ctx->pc == 0x469670u) {
        ctx->pc = 0x469670u;
            // 0x469670: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469674u;
        goto label_469674;
    }
    ctx->pc = 0x46966Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x469674u);
        ctx->pc = 0x469670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46966Cu;
            // 0x469670: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x469674u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x469674u; }
            if (ctx->pc != 0x469674u) { return; }
        }
        }
    }
    ctx->pc = 0x469674u;
label_469674:
    // 0x469674: 0xc0c85f8  jal         func_3217E0
label_469678:
    if (ctx->pc == 0x469678u) {
        ctx->pc = 0x469678u;
            // 0x469678: 0x8e440068  lw          $a0, 0x68($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->pc = 0x46967Cu;
        goto label_46967c;
    }
    ctx->pc = 0x469674u;
    SET_GPR_U32(ctx, 31, 0x46967Cu);
    ctx->pc = 0x469678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469674u;
            // 0x469678: 0x8e440068  lw          $a0, 0x68($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3217E0u;
    if (runtime->hasFunction(0x3217E0u)) {
        auto targetFn = runtime->lookupFunction(0x3217E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46967Cu; }
        if (ctx->pc != 0x46967Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003217E0_0x3217e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46967Cu; }
        if (ctx->pc != 0x46967Cu) { return; }
    }
    ctx->pc = 0x46967Cu;
label_46967c:
    // 0x46967c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x46967cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_469680:
    // 0x469680: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x469680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_469684:
    // 0x469684: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x469684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_469688:
    // 0x469688: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x469688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46968c:
    // 0x46968c: 0xc123240  jal         func_48C900
label_469690:
    if (ctx->pc == 0x469690u) {
        ctx->pc = 0x469690u;
            // 0x469690: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->pc = 0x469694u;
        goto label_469694;
    }
    ctx->pc = 0x46968Cu;
    SET_GPR_U32(ctx, 31, 0x469694u);
    ctx->pc = 0x469690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46968Cu;
            // 0x469690: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C900u;
    if (runtime->hasFunction(0x48C900u)) {
        auto targetFn = runtime->lookupFunction(0x48C900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469694u; }
        if (ctx->pc != 0x469694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C900_0x48c900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469694u; }
        if (ctx->pc != 0x469694u) { return; }
    }
    ctx->pc = 0x469694u;
label_469694:
    // 0x469694: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x469694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_469698:
    // 0x469698: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x469698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_46969c:
    // 0x46969c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_4696a0:
    if (ctx->pc == 0x4696A0u) {
        ctx->pc = 0x4696A4u;
        goto label_4696a4;
    }
    ctx->pc = 0x46969Cu;
    {
        const bool branch_taken_0x46969c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x46969c) {
            ctx->pc = 0x4696E0u;
            goto label_4696e0;
        }
    }
    ctx->pc = 0x4696A4u;
label_4696a4:
    // 0x4696a4: 0x8e440058  lw          $a0, 0x58($s2)
    ctx->pc = 0x4696a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_4696a8:
    // 0x4696a8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4696a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4696ac:
    // 0x4696ac: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_4696b0:
    if (ctx->pc == 0x4696B0u) {
        ctx->pc = 0x4696B0u;
            // 0x4696b0: 0x8e46006c  lw          $a2, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->pc = 0x4696B4u;
        goto label_4696b4;
    }
    ctx->pc = 0x4696ACu;
    {
        const bool branch_taken_0x4696ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x4696B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4696ACu;
            // 0x4696b0: 0x8e46006c  lw          $a2, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4696ac) {
            ctx->pc = 0x4696C4u;
            goto label_4696c4;
        }
    }
    ctx->pc = 0x4696B4u;
label_4696b4:
    // 0x4696b4: 0x32030002  andi        $v1, $s0, 0x2
    ctx->pc = 0x4696b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_4696b8:
    // 0x4696b8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x4696b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4696bc:
    // 0x4696bc: 0x10000002  b           . + 4 + (0x2 << 2)
label_4696c0:
    if (ctx->pc == 0x4696C0u) {
        ctx->pc = 0x4696C0u;
            // 0x4696c0: 0x2465009d  addiu       $a1, $v1, 0x9D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 157));
        ctx->pc = 0x4696C4u;
        goto label_4696c4;
    }
    ctx->pc = 0x4696BCu;
    {
        const bool branch_taken_0x4696bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4696C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4696BCu;
            // 0x4696c0: 0x2465009d  addiu       $a1, $v1, 0x9D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 157));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4696bc) {
            ctx->pc = 0x4696C8u;
            goto label_4696c8;
        }
    }
    ctx->pc = 0x4696C4u;
label_4696c4:
    // 0x4696c4: 0x2405009d  addiu       $a1, $zero, 0x9D
    ctx->pc = 0x4696c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
label_4696c8:
    // 0x4696c8: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x4696c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_4696cc:
    // 0x4696cc: 0xc1232ac  jal         func_48CAB0
label_4696d0:
    if (ctx->pc == 0x4696D0u) {
        ctx->pc = 0x4696D0u;
            // 0x4696d0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4696D4u;
        goto label_4696d4;
    }
    ctx->pc = 0x4696CCu;
    SET_GPR_U32(ctx, 31, 0x4696D4u);
    ctx->pc = 0x4696D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4696CCu;
            // 0x4696d0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4696D4u; }
        if (ctx->pc != 0x4696D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4696D4u; }
        if (ctx->pc != 0x4696D4u) { return; }
    }
    ctx->pc = 0x4696D4u;
label_4696d4:
    // 0x4696d4: 0x10000008  b           . + 4 + (0x8 << 2)
label_4696d8:
    if (ctx->pc == 0x4696D8u) {
        ctx->pc = 0x4696DCu;
        goto label_4696dc;
    }
    ctx->pc = 0x4696D4u;
    {
        const bool branch_taken_0x4696d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4696d4) {
            ctx->pc = 0x4696F8u;
            goto label_4696f8;
        }
    }
    ctx->pc = 0x4696DCu;
label_4696dc:
    // 0x4696dc: 0x0  nop
    ctx->pc = 0x4696dcu;
    // NOP
label_4696e0:
    // 0x4696e0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4696e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4696e4:
    // 0x4696e4: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x4696e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_4696e8:
    // 0x4696e8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4696e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4696ec:
    // 0x4696ec: 0xc1232ac  jal         func_48CAB0
label_4696f0:
    if (ctx->pc == 0x4696F0u) {
        ctx->pc = 0x4696F0u;
            // 0x4696f0: 0x2405009d  addiu       $a1, $zero, 0x9D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
        ctx->pc = 0x4696F4u;
        goto label_4696f4;
    }
    ctx->pc = 0x4696ECu;
    SET_GPR_U32(ctx, 31, 0x4696F4u);
    ctx->pc = 0x4696F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4696ECu;
            // 0x4696f0: 0x2405009d  addiu       $a1, $zero, 0x9D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4696F4u; }
        if (ctx->pc != 0x4696F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4696F4u; }
        if (ctx->pc != 0x4696F4u) { return; }
    }
    ctx->pc = 0x4696F4u;
label_4696f4:
    // 0x4696f4: 0x0  nop
    ctx->pc = 0x4696f4u;
    // NOP
label_4696f8:
    // 0x4696f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4696f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_4696fc:
    // 0x4696fc: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x4696fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_469700:
    // 0x469700: 0x5440ffe0  bnel        $v0, $zero, . + 4 + (-0x20 << 2)
label_469704:
    if (ctx->pc == 0x469704u) {
        ctx->pc = 0x469704u;
            // 0x469704: 0x8e42006c  lw          $v0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->pc = 0x469708u;
        goto label_469708;
    }
    ctx->pc = 0x469700u;
    {
        const bool branch_taken_0x469700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x469700) {
            ctx->pc = 0x469704u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x469700u;
            // 0x469704: 0x8e42006c  lw          $v0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x469684u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_469684;
        }
    }
    ctx->pc = 0x469708u;
label_469708:
    // 0x469708: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x469708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46970c:
    // 0x46970c: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x46970cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_469710:
    // 0x469710: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x469710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_469714:
    // 0x469714: 0xc1232d0  jal         func_48CB40
label_469718:
    if (ctx->pc == 0x469718u) {
        ctx->pc = 0x469718u;
            // 0x469718: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46971Cu;
        goto label_46971c;
    }
    ctx->pc = 0x469714u;
    SET_GPR_U32(ctx, 31, 0x46971Cu);
    ctx->pc = 0x469718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469714u;
            // 0x469718: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB40u;
    if (runtime->hasFunction(0x48CB40u)) {
        auto targetFn = runtime->lookupFunction(0x48CB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46971Cu; }
        if (ctx->pc != 0x46971Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB40_0x48cb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46971Cu; }
        if (ctx->pc != 0x46971Cu) { return; }
    }
    ctx->pc = 0x46971Cu;
label_46971c:
    // 0x46971c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x46971cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_469720:
    // 0x469720: 0x2a0200a0  slti        $v0, $s0, 0xA0
    ctx->pc = 0x469720u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)160) ? 1 : 0);
label_469724:
    // 0x469724: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_469728:
    if (ctx->pc == 0x469728u) {
        ctx->pc = 0x469728u;
            // 0x469728: 0x8e42006c  lw          $v0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->pc = 0x46972Cu;
        goto label_46972c;
    }
    ctx->pc = 0x469724u;
    {
        const bool branch_taken_0x469724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x469724) {
            ctx->pc = 0x469728u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x469724u;
            // 0x469728: 0x8e42006c  lw          $v0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x469710u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_469710;
        }
    }
    ctx->pc = 0x46972Cu;
label_46972c:
    // 0x46972c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x46972cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_469730:
    // 0x469730: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x469730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_469734:
    // 0x469734: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x469734u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_469738:
    // 0x469738: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x469738u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_46973c:
    // 0x46973c: 0x320f809  jalr        $t9
label_469740:
    if (ctx->pc == 0x469740u) {
        ctx->pc = 0x469744u;
        goto label_469744;
    }
    ctx->pc = 0x46973Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x469744u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x469744u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x469744u; }
            if (ctx->pc != 0x469744u) { return; }
        }
        }
    }
    ctx->pc = 0x469744u;
label_469744:
    // 0x469744: 0x3c023f26  lui         $v0, 0x3F26
    ctx->pc = 0x469744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16166 << 16));
label_469748:
    // 0x469748: 0x8e440068  lw          $a0, 0x68($s2)
    ctx->pc = 0x469748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_46974c:
    // 0x46974c: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x46974cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_469750:
    // 0x469750: 0x2407fc18  addiu       $a3, $zero, -0x3E8
    ctx->pc = 0x469750u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
label_469754:
    // 0x469754: 0x2405006e  addiu       $a1, $zero, 0x6E
    ctx->pc = 0x469754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_469758:
    // 0x469758: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x469758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_46975c:
    // 0x46975c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x46975cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_469760:
    // 0x469760: 0xc0c85cc  jal         func_321730
label_469764:
    if (ctx->pc == 0x469764u) {
        ctx->pc = 0x469764u;
            // 0x469764: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469768u;
        goto label_469768;
    }
    ctx->pc = 0x469760u;
    SET_GPR_U32(ctx, 31, 0x469768u);
    ctx->pc = 0x469764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469760u;
            // 0x469764: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321730u;
    if (runtime->hasFunction(0x321730u)) {
        auto targetFn = runtime->lookupFunction(0x321730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469768u; }
        if (ctx->pc != 0x469768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321730_0x321730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469768u; }
        if (ctx->pc != 0x469768u) { return; }
    }
    ctx->pc = 0x469768u;
label_469768:
    // 0x469768: 0x10000227  b           . + 4 + (0x227 << 2)
label_46976c:
    if (ctx->pc == 0x46976Cu) {
        ctx->pc = 0x469770u;
        goto label_469770;
    }
    ctx->pc = 0x469768u;
    {
        const bool branch_taken_0x469768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x469768) {
            ctx->pc = 0x46A008u;
            goto label_46a008;
        }
    }
    ctx->pc = 0x469770u;
label_469770:
    // 0x469770: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x469770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_469774:
    // 0x469774: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x469774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_469778:
    // 0x469778: 0x8c5089f0  lw          $s0, -0x7610($v0)
    ctx->pc = 0x469778u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_46977c:
    // 0x46977c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x46977cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_469780:
    // 0x469780: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x469780u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_469784:
    // 0x469784: 0x320f809  jalr        $t9
label_469788:
    if (ctx->pc == 0x469788u) {
        ctx->pc = 0x469788u;
            // 0x469788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46978Cu;
        goto label_46978c;
    }
    ctx->pc = 0x469784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46978Cu);
        ctx->pc = 0x469788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469784u;
            // 0x469788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46978Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46978Cu; }
            if (ctx->pc != 0x46978Cu) { return; }
        }
        }
    }
    ctx->pc = 0x46978Cu;
label_46978c:
    // 0x46978c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x46978cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_469790:
    // 0x469790: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x469790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_469794:
    // 0x469794: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x469794u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_469798:
    // 0x469798: 0x320f809  jalr        $t9
label_46979c:
    if (ctx->pc == 0x46979Cu) {
        ctx->pc = 0x46979Cu;
            // 0x46979c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4697A0u;
        goto label_4697a0;
    }
    ctx->pc = 0x469798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4697A0u);
        ctx->pc = 0x46979Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469798u;
            // 0x46979c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4697A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4697A0u; }
            if (ctx->pc != 0x4697A0u) { return; }
        }
        }
    }
    ctx->pc = 0x4697A0u;
label_4697a0:
    // 0x4697a0: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x4697a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_4697a4:
    // 0x4697a4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4697a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4697a8:
    // 0x4697a8: 0xc1234b8  jal         func_48D2E0
label_4697ac:
    if (ctx->pc == 0x4697ACu) {
        ctx->pc = 0x4697ACu;
            // 0x4697ac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4697B0u;
        goto label_4697b0;
    }
    ctx->pc = 0x4697A8u;
    SET_GPR_U32(ctx, 31, 0x4697B0u);
    ctx->pc = 0x4697ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4697A8u;
            // 0x4697ac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D2E0u;
    if (runtime->hasFunction(0x48D2E0u)) {
        auto targetFn = runtime->lookupFunction(0x48D2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4697B0u; }
        if (ctx->pc != 0x4697B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D2E0_0x48d2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4697B0u; }
        if (ctx->pc != 0x4697B0u) { return; }
    }
    ctx->pc = 0x4697B0u;
label_4697b0:
    // 0x4697b0: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x4697b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_4697b4:
    // 0x4697b4: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x4697b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_4697b8:
    // 0x4697b8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x4697b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4697bc:
    // 0x4697bc: 0xa040007c  sb          $zero, 0x7C($v0)
    ctx->pc = 0x4697bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 124), (uint8_t)GPR_U32(ctx, 0));
label_4697c0:
    // 0x4697c0: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x4697c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_4697c4:
    // 0x4697c4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4697c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4697c8:
    // 0x4697c8: 0xc1232ac  jal         func_48CAB0
label_4697cc:
    if (ctx->pc == 0x4697CCu) {
        ctx->pc = 0x4697CCu;
            // 0x4697cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4697D0u;
        goto label_4697d0;
    }
    ctx->pc = 0x4697C8u;
    SET_GPR_U32(ctx, 31, 0x4697D0u);
    ctx->pc = 0x4697CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4697C8u;
            // 0x4697cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4697D0u; }
        if (ctx->pc != 0x4697D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4697D0u; }
        if (ctx->pc != 0x4697D0u) { return; }
    }
    ctx->pc = 0x4697D0u;
label_4697d0:
    // 0x4697d0: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x4697d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_4697d4:
    // 0x4697d4: 0x2405009d  addiu       $a1, $zero, 0x9D
    ctx->pc = 0x4697d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
label_4697d8:
    // 0x4697d8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4697d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4697dc:
    // 0x4697dc: 0xc1232ac  jal         func_48CAB0
label_4697e0:
    if (ctx->pc == 0x4697E0u) {
        ctx->pc = 0x4697E0u;
            // 0x4697e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4697E4u;
        goto label_4697e4;
    }
    ctx->pc = 0x4697DCu;
    SET_GPR_U32(ctx, 31, 0x4697E4u);
    ctx->pc = 0x4697E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4697DCu;
            // 0x4697e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4697E4u; }
        if (ctx->pc != 0x4697E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4697E4u; }
        if (ctx->pc != 0x4697E4u) { return; }
    }
    ctx->pc = 0x4697E4u;
label_4697e4:
    // 0x4697e4: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x4697e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_4697e8:
    // 0x4697e8: 0x2405009e  addiu       $a1, $zero, 0x9E
    ctx->pc = 0x4697e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
label_4697ec:
    // 0x4697ec: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4697ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4697f0:
    // 0x4697f0: 0xc1232ac  jal         func_48CAB0
label_4697f4:
    if (ctx->pc == 0x4697F4u) {
        ctx->pc = 0x4697F4u;
            // 0x4697f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4697F8u;
        goto label_4697f8;
    }
    ctx->pc = 0x4697F0u;
    SET_GPR_U32(ctx, 31, 0x4697F8u);
    ctx->pc = 0x4697F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4697F0u;
            // 0x4697f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4697F8u; }
        if (ctx->pc != 0x4697F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4697F8u; }
        if (ctx->pc != 0x4697F8u) { return; }
    }
    ctx->pc = 0x4697F8u;
label_4697f8:
    // 0x4697f8: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x4697f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_4697fc:
    // 0x4697fc: 0x2405009f  addiu       $a1, $zero, 0x9F
    ctx->pc = 0x4697fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
label_469800:
    // 0x469800: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x469800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_469804:
    // 0x469804: 0xc1232ac  jal         func_48CAB0
label_469808:
    if (ctx->pc == 0x469808u) {
        ctx->pc = 0x469808u;
            // 0x469808: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46980Cu;
        goto label_46980c;
    }
    ctx->pc = 0x469804u;
    SET_GPR_U32(ctx, 31, 0x46980Cu);
    ctx->pc = 0x469808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469804u;
            // 0x469808: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46980Cu; }
        if (ctx->pc != 0x46980Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46980Cu; }
        if (ctx->pc != 0x46980Cu) { return; }
    }
    ctx->pc = 0x46980Cu;
label_46980c:
    // 0x46980c: 0x8e440068  lw          $a0, 0x68($s2)
    ctx->pc = 0x46980cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_469810:
    // 0x469810: 0xc0c9190  jal         func_324640
label_469814:
    if (ctx->pc == 0x469814u) {
        ctx->pc = 0x469814u;
            // 0x469814: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x469818u;
        goto label_469818;
    }
    ctx->pc = 0x469810u;
    SET_GPR_U32(ctx, 31, 0x469818u);
    ctx->pc = 0x469814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469810u;
            // 0x469814: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324640u;
    if (runtime->hasFunction(0x324640u)) {
        auto targetFn = runtime->lookupFunction(0x324640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469818u; }
        if (ctx->pc != 0x469818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324640_0x324640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469818u; }
        if (ctx->pc != 0x469818u) { return; }
    }
    ctx->pc = 0x469818u;
label_469818:
    // 0x469818: 0xc0c9c84  jal         func_327210
label_46981c:
    if (ctx->pc == 0x46981Cu) {
        ctx->pc = 0x46981Cu;
            // 0x46981c: 0x8e440068  lw          $a0, 0x68($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->pc = 0x469820u;
        goto label_469820;
    }
    ctx->pc = 0x469818u;
    SET_GPR_U32(ctx, 31, 0x469820u);
    ctx->pc = 0x46981Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469818u;
            // 0x46981c: 0x8e440068  lw          $a0, 0x68($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x327210u;
    if (runtime->hasFunction(0x327210u)) {
        auto targetFn = runtime->lookupFunction(0x327210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469820u; }
        if (ctx->pc != 0x469820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00327210_0x327210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469820u; }
        if (ctx->pc != 0x469820u) { return; }
    }
    ctx->pc = 0x469820u;
label_469820:
    // 0x469820: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x469820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_469824:
    // 0x469824: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x469824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_469828:
    // 0x469828: 0x8c5089f0  lw          $s0, -0x7610($v0)
    ctx->pc = 0x469828u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_46982c:
    // 0x46982c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x46982cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_469830:
    // 0x469830: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x469830u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_469834:
    // 0x469834: 0x320f809  jalr        $t9
label_469838:
    if (ctx->pc == 0x469838u) {
        ctx->pc = 0x469838u;
            // 0x469838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46983Cu;
        goto label_46983c;
    }
    ctx->pc = 0x469834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46983Cu);
        ctx->pc = 0x469838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469834u;
            // 0x469838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46983Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46983Cu; }
            if (ctx->pc != 0x46983Cu) { return; }
        }
        }
    }
    ctx->pc = 0x46983Cu;
label_46983c:
    // 0x46983c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x46983cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_469840:
    // 0x469840: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x469840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_469844:
    // 0x469844: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x469844u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_469848:
    // 0x469848: 0x320f809  jalr        $t9
label_46984c:
    if (ctx->pc == 0x46984Cu) {
        ctx->pc = 0x46984Cu;
            // 0x46984c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469850u;
        goto label_469850;
    }
    ctx->pc = 0x469848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x469850u);
        ctx->pc = 0x46984Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469848u;
            // 0x46984c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x469850u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x469850u; }
            if (ctx->pc != 0x469850u) { return; }
        }
        }
    }
    ctx->pc = 0x469850u;
label_469850:
    // 0x469850: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x469850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_469854:
    // 0x469854: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x469854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_469858:
    // 0x469858: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x469858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_46985c:
    // 0x46985c: 0x8c440088  lw          $a0, 0x88($v0)
    ctx->pc = 0x46985cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_469860:
    // 0x469860: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x469860u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_469864:
    // 0x469864: 0x8f390060  lw          $t9, 0x60($t9)
    ctx->pc = 0x469864u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 96)));
label_469868:
    // 0x469868: 0x320f809  jalr        $t9
label_46986c:
    if (ctx->pc == 0x46986Cu) {
        ctx->pc = 0x46986Cu;
            // 0x46986c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469870u;
        goto label_469870;
    }
    ctx->pc = 0x469868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x469870u);
        ctx->pc = 0x46986Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469868u;
            // 0x46986c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x469870u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x469870u; }
            if (ctx->pc != 0x469870u) { return; }
        }
        }
    }
    ctx->pc = 0x469870u;
label_469870:
    // 0x469870: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x469870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_469874:
    // 0x469874: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x469874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_469878:
    // 0x469878: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x469878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46987c:
    // 0x46987c: 0xc1232ac  jal         func_48CAB0
label_469880:
    if (ctx->pc == 0x469880u) {
        ctx->pc = 0x469880u;
            // 0x469880: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469884u;
        goto label_469884;
    }
    ctx->pc = 0x46987Cu;
    SET_GPR_U32(ctx, 31, 0x469884u);
    ctx->pc = 0x469880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46987Cu;
            // 0x469880: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469884u; }
        if (ctx->pc != 0x469884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469884u; }
        if (ctx->pc != 0x469884u) { return; }
    }
    ctx->pc = 0x469884u;
label_469884:
    // 0x469884: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x469884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_469888:
    // 0x469888: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x469888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46988c:
    // 0x46988c: 0x8c5089f0  lw          $s0, -0x7610($v0)
    ctx->pc = 0x46988cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_469890:
    // 0x469890: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x469890u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_469894:
    // 0x469894: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x469894u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_469898:
    // 0x469898: 0x320f809  jalr        $t9
label_46989c:
    if (ctx->pc == 0x46989Cu) {
        ctx->pc = 0x46989Cu;
            // 0x46989c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4698A0u;
        goto label_4698a0;
    }
    ctx->pc = 0x469898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4698A0u);
        ctx->pc = 0x46989Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469898u;
            // 0x46989c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4698A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4698A0u; }
            if (ctx->pc != 0x4698A0u) { return; }
        }
        }
    }
    ctx->pc = 0x4698A0u;
label_4698a0:
    // 0x4698a0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4698a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4698a4:
    // 0x4698a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4698a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4698a8:
    // 0x4698a8: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x4698a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_4698ac:
    // 0x4698ac: 0x320f809  jalr        $t9
label_4698b0:
    if (ctx->pc == 0x4698B0u) {
        ctx->pc = 0x4698B0u;
            // 0x4698b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4698B4u;
        goto label_4698b4;
    }
    ctx->pc = 0x4698ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4698B4u);
        ctx->pc = 0x4698B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4698ACu;
            // 0x4698b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4698B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4698B4u; }
            if (ctx->pc != 0x4698B4u) { return; }
        }
        }
    }
    ctx->pc = 0x4698B4u;
label_4698b4:
    // 0x4698b4: 0xc0c85f8  jal         func_3217E0
label_4698b8:
    if (ctx->pc == 0x4698B8u) {
        ctx->pc = 0x4698B8u;
            // 0x4698b8: 0x8e440068  lw          $a0, 0x68($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->pc = 0x4698BCu;
        goto label_4698bc;
    }
    ctx->pc = 0x4698B4u;
    SET_GPR_U32(ctx, 31, 0x4698BCu);
    ctx->pc = 0x4698B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4698B4u;
            // 0x4698b8: 0x8e440068  lw          $a0, 0x68($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3217E0u;
    if (runtime->hasFunction(0x3217E0u)) {
        auto targetFn = runtime->lookupFunction(0x3217E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4698BCu; }
        if (ctx->pc != 0x4698BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003217E0_0x3217e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4698BCu; }
        if (ctx->pc != 0x4698BCu) { return; }
    }
    ctx->pc = 0x4698BCu;
label_4698bc:
    // 0x4698bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4698bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4698c0:
    // 0x4698c0: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x4698c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_4698c4:
    // 0x4698c4: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x4698c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_4698c8:
    // 0x4698c8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4698c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4698cc:
    // 0x4698cc: 0xc123240  jal         func_48C900
label_4698d0:
    if (ctx->pc == 0x4698D0u) {
        ctx->pc = 0x4698D0u;
            // 0x4698d0: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->pc = 0x4698D4u;
        goto label_4698d4;
    }
    ctx->pc = 0x4698CCu;
    SET_GPR_U32(ctx, 31, 0x4698D4u);
    ctx->pc = 0x4698D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4698CCu;
            // 0x4698d0: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C900u;
    if (runtime->hasFunction(0x48C900u)) {
        auto targetFn = runtime->lookupFunction(0x48C900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4698D4u; }
        if (ctx->pc != 0x4698D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C900_0x48c900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4698D4u; }
        if (ctx->pc != 0x4698D4u) { return; }
    }
    ctx->pc = 0x4698D4u;
label_4698d4:
    // 0x4698d4: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x4698d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_4698d8:
    // 0x4698d8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4698d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4698dc:
    // 0x4698dc: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_4698e0:
    if (ctx->pc == 0x4698E0u) {
        ctx->pc = 0x4698E4u;
        goto label_4698e4;
    }
    ctx->pc = 0x4698DCu;
    {
        const bool branch_taken_0x4698dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4698dc) {
            ctx->pc = 0x469920u;
            goto label_469920;
        }
    }
    ctx->pc = 0x4698E4u;
label_4698e4:
    // 0x4698e4: 0x8e440058  lw          $a0, 0x58($s2)
    ctx->pc = 0x4698e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_4698e8:
    // 0x4698e8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4698e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4698ec:
    // 0x4698ec: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_4698f0:
    if (ctx->pc == 0x4698F0u) {
        ctx->pc = 0x4698F0u;
            // 0x4698f0: 0x8e46006c  lw          $a2, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->pc = 0x4698F4u;
        goto label_4698f4;
    }
    ctx->pc = 0x4698ECu;
    {
        const bool branch_taken_0x4698ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x4698F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4698ECu;
            // 0x4698f0: 0x8e46006c  lw          $a2, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4698ec) {
            ctx->pc = 0x469904u;
            goto label_469904;
        }
    }
    ctx->pc = 0x4698F4u;
label_4698f4:
    // 0x4698f4: 0x32030002  andi        $v1, $s0, 0x2
    ctx->pc = 0x4698f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_4698f8:
    // 0x4698f8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x4698f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4698fc:
    // 0x4698fc: 0x10000002  b           . + 4 + (0x2 << 2)
label_469900:
    if (ctx->pc == 0x469900u) {
        ctx->pc = 0x469900u;
            // 0x469900: 0x2465009d  addiu       $a1, $v1, 0x9D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 157));
        ctx->pc = 0x469904u;
        goto label_469904;
    }
    ctx->pc = 0x4698FCu;
    {
        const bool branch_taken_0x4698fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x469900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4698FCu;
            // 0x469900: 0x2465009d  addiu       $a1, $v1, 0x9D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 157));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4698fc) {
            ctx->pc = 0x469908u;
            goto label_469908;
        }
    }
    ctx->pc = 0x469904u;
label_469904:
    // 0x469904: 0x2405009d  addiu       $a1, $zero, 0x9D
    ctx->pc = 0x469904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
label_469908:
    // 0x469908: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x469908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_46990c:
    // 0x46990c: 0xc1232ac  jal         func_48CAB0
label_469910:
    if (ctx->pc == 0x469910u) {
        ctx->pc = 0x469910u;
            // 0x469910: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469914u;
        goto label_469914;
    }
    ctx->pc = 0x46990Cu;
    SET_GPR_U32(ctx, 31, 0x469914u);
    ctx->pc = 0x469910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46990Cu;
            // 0x469910: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469914u; }
        if (ctx->pc != 0x469914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469914u; }
        if (ctx->pc != 0x469914u) { return; }
    }
    ctx->pc = 0x469914u;
label_469914:
    // 0x469914: 0x10000008  b           . + 4 + (0x8 << 2)
label_469918:
    if (ctx->pc == 0x469918u) {
        ctx->pc = 0x46991Cu;
        goto label_46991c;
    }
    ctx->pc = 0x469914u;
    {
        const bool branch_taken_0x469914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x469914) {
            ctx->pc = 0x469938u;
            goto label_469938;
        }
    }
    ctx->pc = 0x46991Cu;
label_46991c:
    // 0x46991c: 0x0  nop
    ctx->pc = 0x46991cu;
    // NOP
label_469920:
    // 0x469920: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x469920u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_469924:
    // 0x469924: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x469924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_469928:
    // 0x469928: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x469928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46992c:
    // 0x46992c: 0xc1232ac  jal         func_48CAB0
label_469930:
    if (ctx->pc == 0x469930u) {
        ctx->pc = 0x469930u;
            // 0x469930: 0x2405009d  addiu       $a1, $zero, 0x9D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
        ctx->pc = 0x469934u;
        goto label_469934;
    }
    ctx->pc = 0x46992Cu;
    SET_GPR_U32(ctx, 31, 0x469934u);
    ctx->pc = 0x469930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46992Cu;
            // 0x469930: 0x2405009d  addiu       $a1, $zero, 0x9D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469934u; }
        if (ctx->pc != 0x469934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469934u; }
        if (ctx->pc != 0x469934u) { return; }
    }
    ctx->pc = 0x469934u;
label_469934:
    // 0x469934: 0x0  nop
    ctx->pc = 0x469934u;
    // NOP
label_469938:
    // 0x469938: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x469938u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_46993c:
    // 0x46993c: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x46993cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_469940:
    // 0x469940: 0x5440ffe0  bnel        $v0, $zero, . + 4 + (-0x20 << 2)
label_469944:
    if (ctx->pc == 0x469944u) {
        ctx->pc = 0x469944u;
            // 0x469944: 0x8e42006c  lw          $v0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->pc = 0x469948u;
        goto label_469948;
    }
    ctx->pc = 0x469940u;
    {
        const bool branch_taken_0x469940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x469940) {
            ctx->pc = 0x469944u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x469940u;
            // 0x469944: 0x8e42006c  lw          $v0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4698C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4698c4;
        }
    }
    ctx->pc = 0x469948u;
label_469948:
    // 0x469948: 0xc11af84  jal         func_46BE10
label_46994c:
    if (ctx->pc == 0x46994Cu) {
        ctx->pc = 0x46994Cu;
            // 0x46994c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469950u;
        goto label_469950;
    }
    ctx->pc = 0x469948u;
    SET_GPR_U32(ctx, 31, 0x469950u);
    ctx->pc = 0x46994Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469948u;
            // 0x46994c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46BE10u;
    if (runtime->hasFunction(0x46BE10u)) {
        auto targetFn = runtime->lookupFunction(0x46BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469950u; }
        if (ctx->pc != 0x469950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046BE10_0x46be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469950u; }
        if (ctx->pc != 0x469950u) { return; }
    }
    ctx->pc = 0x469950u;
label_469950:
    // 0x469950: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x469950u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_469954:
    // 0x469954: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x469954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_469958:
    // 0x469958: 0xc11a80c  jal         func_46A030
label_46995c:
    if (ctx->pc == 0x46995Cu) {
        ctx->pc = 0x46995Cu;
            // 0x46995c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469960u;
        goto label_469960;
    }
    ctx->pc = 0x469958u;
    SET_GPR_U32(ctx, 31, 0x469960u);
    ctx->pc = 0x46995Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469958u;
            // 0x46995c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46A030u;
    if (runtime->hasFunction(0x46A030u)) {
        auto targetFn = runtime->lookupFunction(0x46A030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469960u; }
        if (ctx->pc != 0x469960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046A030_0x46a030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469960u; }
        if (ctx->pc != 0x469960u) { return; }
    }
    ctx->pc = 0x469960u;
label_469960:
    // 0x469960: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x469960u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_469964:
    // 0x469964: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x469964u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_469968:
    // 0x469968: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_46996c:
    if (ctx->pc == 0x46996Cu) {
        ctx->pc = 0x469970u;
        goto label_469970;
    }
    ctx->pc = 0x469968u;
    {
        const bool branch_taken_0x469968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x469968) {
            ctx->pc = 0x469954u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_469954;
        }
    }
    ctx->pc = 0x469970u;
label_469970:
    // 0x469970: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x469970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_469974:
    // 0x469974: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x469974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_469978:
    // 0x469978: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x469978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46997c:
    // 0x46997c: 0xc1232d0  jal         func_48CB40
label_469980:
    if (ctx->pc == 0x469980u) {
        ctx->pc = 0x469980u;
            // 0x469980: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469984u;
        goto label_469984;
    }
    ctx->pc = 0x46997Cu;
    SET_GPR_U32(ctx, 31, 0x469984u);
    ctx->pc = 0x469980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46997Cu;
            // 0x469980: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB40u;
    if (runtime->hasFunction(0x48CB40u)) {
        auto targetFn = runtime->lookupFunction(0x48CB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469984u; }
        if (ctx->pc != 0x469984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB40_0x48cb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469984u; }
        if (ctx->pc != 0x469984u) { return; }
    }
    ctx->pc = 0x469984u;
label_469984:
    // 0x469984: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x469984u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_469988:
    // 0x469988: 0x2a0200a0  slti        $v0, $s0, 0xA0
    ctx->pc = 0x469988u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)160) ? 1 : 0);
label_46998c:
    // 0x46998c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_469990:
    if (ctx->pc == 0x469990u) {
        ctx->pc = 0x469990u;
            // 0x469990: 0x8e42006c  lw          $v0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->pc = 0x469994u;
        goto label_469994;
    }
    ctx->pc = 0x46998Cu;
    {
        const bool branch_taken_0x46998c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46998c) {
            ctx->pc = 0x469990u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46998Cu;
            // 0x469990: 0x8e42006c  lw          $v0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x469978u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_469978;
        }
    }
    ctx->pc = 0x469994u;
label_469994:
    // 0x469994: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x469994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_469998:
    // 0x469998: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x469998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_46999c:
    // 0x46999c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46999cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4699a0:
    // 0x4699a0: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x4699a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_4699a4:
    // 0x4699a4: 0x320f809  jalr        $t9
label_4699a8:
    if (ctx->pc == 0x4699A8u) {
        ctx->pc = 0x4699ACu;
        goto label_4699ac;
    }
    ctx->pc = 0x4699A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4699ACu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4699ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4699ACu; }
            if (ctx->pc != 0x4699ACu) { return; }
        }
        }
    }
    ctx->pc = 0x4699ACu;
label_4699ac:
    // 0x4699ac: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x4699acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_4699b0:
    // 0x4699b0: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x4699b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
label_4699b4:
    // 0x4699b4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_4699b8:
    if (ctx->pc == 0x4699B8u) {
        ctx->pc = 0x4699B8u;
            // 0x4699b8: 0x3c023f26  lui         $v0, 0x3F26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16166 << 16));
        ctx->pc = 0x4699BCu;
        goto label_4699bc;
    }
    ctx->pc = 0x4699B4u;
    {
        const bool branch_taken_0x4699b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4699b4) {
            ctx->pc = 0x4699B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4699B4u;
            // 0x4699b8: 0x3c023f26  lui         $v0, 0x3F26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16166 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4699C4u;
            goto label_4699c4;
        }
    }
    ctx->pc = 0x4699BCu;
label_4699bc:
    // 0x4699bc: 0x2411006f  addiu       $s1, $zero, 0x6F
    ctx->pc = 0x4699bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
label_4699c0:
    // 0x4699c0: 0x3c023f26  lui         $v0, 0x3F26
    ctx->pc = 0x4699c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16166 << 16));
label_4699c4:
    // 0x4699c4: 0x8e440068  lw          $a0, 0x68($s2)
    ctx->pc = 0x4699c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_4699c8:
    // 0x4699c8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x4699c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_4699cc:
    // 0x4699cc: 0x2407fc18  addiu       $a3, $zero, -0x3E8
    ctx->pc = 0x4699ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
label_4699d0:
    // 0x4699d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4699d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4699d4:
    // 0x4699d4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x4699d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4699d8:
    // 0x4699d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4699d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4699dc:
    // 0x4699dc: 0xc0c85cc  jal         func_321730
label_4699e0:
    if (ctx->pc == 0x4699E0u) {
        ctx->pc = 0x4699E0u;
            // 0x4699e0: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4699E4u;
        goto label_4699e4;
    }
    ctx->pc = 0x4699DCu;
    SET_GPR_U32(ctx, 31, 0x4699E4u);
    ctx->pc = 0x4699E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4699DCu;
            // 0x4699e0: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321730u;
    if (runtime->hasFunction(0x321730u)) {
        auto targetFn = runtime->lookupFunction(0x321730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4699E4u; }
        if (ctx->pc != 0x4699E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321730_0x321730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4699E4u; }
        if (ctx->pc != 0x4699E4u) { return; }
    }
    ctx->pc = 0x4699E4u;
label_4699e4:
    // 0x4699e4: 0x10000188  b           . + 4 + (0x188 << 2)
label_4699e8:
    if (ctx->pc == 0x4699E8u) {
        ctx->pc = 0x4699ECu;
        goto label_4699ec;
    }
    ctx->pc = 0x4699E4u;
    {
        const bool branch_taken_0x4699e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4699e4) {
            ctx->pc = 0x46A008u;
            goto label_46a008;
        }
    }
    ctx->pc = 0x4699ECu;
label_4699ec:
    // 0x4699ec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4699ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4699f0:
    // 0x4699f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4699f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4699f4:
    // 0x4699f4: 0x8c5089f0  lw          $s0, -0x7610($v0)
    ctx->pc = 0x4699f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_4699f8:
    // 0x4699f8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4699f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4699fc:
    // 0x4699fc: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x4699fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_469a00:
    // 0x469a00: 0x320f809  jalr        $t9
label_469a04:
    if (ctx->pc == 0x469A04u) {
        ctx->pc = 0x469A04u;
            // 0x469a04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469A08u;
        goto label_469a08;
    }
    ctx->pc = 0x469A00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x469A08u);
        ctx->pc = 0x469A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469A00u;
            // 0x469a04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x469A08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x469A08u; }
            if (ctx->pc != 0x469A08u) { return; }
        }
        }
    }
    ctx->pc = 0x469A08u;
label_469a08:
    // 0x469a08: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x469a08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_469a0c:
    // 0x469a0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x469a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_469a10:
    // 0x469a10: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x469a10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_469a14:
    // 0x469a14: 0x320f809  jalr        $t9
label_469a18:
    if (ctx->pc == 0x469A18u) {
        ctx->pc = 0x469A18u;
            // 0x469a18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469A1Cu;
        goto label_469a1c;
    }
    ctx->pc = 0x469A14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x469A1Cu);
        ctx->pc = 0x469A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469A14u;
            // 0x469a18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x469A1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x469A1Cu; }
            if (ctx->pc != 0x469A1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x469A1Cu;
label_469a1c:
    // 0x469a1c: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x469a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_469a20:
    // 0x469a20: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x469a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_469a24:
    // 0x469a24: 0xc1234b8  jal         func_48D2E0
label_469a28:
    if (ctx->pc == 0x469A28u) {
        ctx->pc = 0x469A28u;
            // 0x469a28: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x469A2Cu;
        goto label_469a2c;
    }
    ctx->pc = 0x469A24u;
    SET_GPR_U32(ctx, 31, 0x469A2Cu);
    ctx->pc = 0x469A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469A24u;
            // 0x469a28: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D2E0u;
    if (runtime->hasFunction(0x48D2E0u)) {
        auto targetFn = runtime->lookupFunction(0x48D2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469A2Cu; }
        if (ctx->pc != 0x469A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D2E0_0x48d2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469A2Cu; }
        if (ctx->pc != 0x469A2Cu) { return; }
    }
    ctx->pc = 0x469A2Cu;
label_469a2c:
    // 0x469a2c: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x469a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_469a30:
    // 0x469a30: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x469a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_469a34:
    // 0x469a34: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x469a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_469a38:
    // 0x469a38: 0xa040007c  sb          $zero, 0x7C($v0)
    ctx->pc = 0x469a38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 124), (uint8_t)GPR_U32(ctx, 0));
label_469a3c:
    // 0x469a3c: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x469a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_469a40:
    // 0x469a40: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x469a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_469a44:
    // 0x469a44: 0xc1232ac  jal         func_48CAB0
label_469a48:
    if (ctx->pc == 0x469A48u) {
        ctx->pc = 0x469A48u;
            // 0x469a48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469A4Cu;
        goto label_469a4c;
    }
    ctx->pc = 0x469A44u;
    SET_GPR_U32(ctx, 31, 0x469A4Cu);
    ctx->pc = 0x469A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469A44u;
            // 0x469a48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469A4Cu; }
        if (ctx->pc != 0x469A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469A4Cu; }
        if (ctx->pc != 0x469A4Cu) { return; }
    }
    ctx->pc = 0x469A4Cu;
label_469a4c:
    // 0x469a4c: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x469a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_469a50:
    // 0x469a50: 0x2405009d  addiu       $a1, $zero, 0x9D
    ctx->pc = 0x469a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
label_469a54:
    // 0x469a54: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x469a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_469a58:
    // 0x469a58: 0xc1232ac  jal         func_48CAB0
label_469a5c:
    if (ctx->pc == 0x469A5Cu) {
        ctx->pc = 0x469A5Cu;
            // 0x469a5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469A60u;
        goto label_469a60;
    }
    ctx->pc = 0x469A58u;
    SET_GPR_U32(ctx, 31, 0x469A60u);
    ctx->pc = 0x469A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469A58u;
            // 0x469a5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469A60u; }
        if (ctx->pc != 0x469A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469A60u; }
        if (ctx->pc != 0x469A60u) { return; }
    }
    ctx->pc = 0x469A60u;
label_469a60:
    // 0x469a60: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x469a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_469a64:
    // 0x469a64: 0x2405009e  addiu       $a1, $zero, 0x9E
    ctx->pc = 0x469a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
label_469a68:
    // 0x469a68: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x469a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_469a6c:
    // 0x469a6c: 0xc1232ac  jal         func_48CAB0
label_469a70:
    if (ctx->pc == 0x469A70u) {
        ctx->pc = 0x469A70u;
            // 0x469a70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469A74u;
        goto label_469a74;
    }
    ctx->pc = 0x469A6Cu;
    SET_GPR_U32(ctx, 31, 0x469A74u);
    ctx->pc = 0x469A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469A6Cu;
            // 0x469a70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469A74u; }
        if (ctx->pc != 0x469A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469A74u; }
        if (ctx->pc != 0x469A74u) { return; }
    }
    ctx->pc = 0x469A74u;
label_469a74:
    // 0x469a74: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x469a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_469a78:
    // 0x469a78: 0x2405009f  addiu       $a1, $zero, 0x9F
    ctx->pc = 0x469a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
label_469a7c:
    // 0x469a7c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x469a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_469a80:
    // 0x469a80: 0xc1232ac  jal         func_48CAB0
label_469a84:
    if (ctx->pc == 0x469A84u) {
        ctx->pc = 0x469A84u;
            // 0x469a84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469A88u;
        goto label_469a88;
    }
    ctx->pc = 0x469A80u;
    SET_GPR_U32(ctx, 31, 0x469A88u);
    ctx->pc = 0x469A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469A80u;
            // 0x469a84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469A88u; }
        if (ctx->pc != 0x469A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469A88u; }
        if (ctx->pc != 0x469A88u) { return; }
    }
    ctx->pc = 0x469A88u;
label_469a88:
    // 0x469a88: 0x8e440068  lw          $a0, 0x68($s2)
    ctx->pc = 0x469a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_469a8c:
    // 0x469a8c: 0xc0c9190  jal         func_324640
label_469a90:
    if (ctx->pc == 0x469A90u) {
        ctx->pc = 0x469A90u;
            // 0x469a90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x469A94u;
        goto label_469a94;
    }
    ctx->pc = 0x469A8Cu;
    SET_GPR_U32(ctx, 31, 0x469A94u);
    ctx->pc = 0x469A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469A8Cu;
            // 0x469a90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324640u;
    if (runtime->hasFunction(0x324640u)) {
        auto targetFn = runtime->lookupFunction(0x324640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469A94u; }
        if (ctx->pc != 0x469A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324640_0x324640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469A94u; }
        if (ctx->pc != 0x469A94u) { return; }
    }
    ctx->pc = 0x469A94u;
label_469a94:
    // 0x469a94: 0xc0c9c84  jal         func_327210
label_469a98:
    if (ctx->pc == 0x469A98u) {
        ctx->pc = 0x469A98u;
            // 0x469a98: 0x8e440068  lw          $a0, 0x68($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->pc = 0x469A9Cu;
        goto label_469a9c;
    }
    ctx->pc = 0x469A94u;
    SET_GPR_U32(ctx, 31, 0x469A9Cu);
    ctx->pc = 0x469A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469A94u;
            // 0x469a98: 0x8e440068  lw          $a0, 0x68($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x327210u;
    if (runtime->hasFunction(0x327210u)) {
        auto targetFn = runtime->lookupFunction(0x327210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469A9Cu; }
        if (ctx->pc != 0x469A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00327210_0x327210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469A9Cu; }
        if (ctx->pc != 0x469A9Cu) { return; }
    }
    ctx->pc = 0x469A9Cu;
label_469a9c:
    // 0x469a9c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x469a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_469aa0:
    // 0x469aa0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x469aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_469aa4:
    // 0x469aa4: 0x8c5089f0  lw          $s0, -0x7610($v0)
    ctx->pc = 0x469aa4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_469aa8:
    // 0x469aa8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x469aa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_469aac:
    // 0x469aac: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x469aacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_469ab0:
    // 0x469ab0: 0x320f809  jalr        $t9
label_469ab4:
    if (ctx->pc == 0x469AB4u) {
        ctx->pc = 0x469AB4u;
            // 0x469ab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469AB8u;
        goto label_469ab8;
    }
    ctx->pc = 0x469AB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x469AB8u);
        ctx->pc = 0x469AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469AB0u;
            // 0x469ab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x469AB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x469AB8u; }
            if (ctx->pc != 0x469AB8u) { return; }
        }
        }
    }
    ctx->pc = 0x469AB8u;
label_469ab8:
    // 0x469ab8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x469ab8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_469abc:
    // 0x469abc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x469abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_469ac0:
    // 0x469ac0: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x469ac0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_469ac4:
    // 0x469ac4: 0x320f809  jalr        $t9
label_469ac8:
    if (ctx->pc == 0x469AC8u) {
        ctx->pc = 0x469AC8u;
            // 0x469ac8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469ACCu;
        goto label_469acc;
    }
    ctx->pc = 0x469AC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x469ACCu);
        ctx->pc = 0x469AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469AC4u;
            // 0x469ac8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x469ACCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x469ACCu; }
            if (ctx->pc != 0x469ACCu) { return; }
        }
        }
    }
    ctx->pc = 0x469ACCu;
label_469acc:
    // 0x469acc: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x469accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_469ad0:
    // 0x469ad0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x469ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_469ad4:
    // 0x469ad4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x469ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_469ad8:
    // 0x469ad8: 0x8c440088  lw          $a0, 0x88($v0)
    ctx->pc = 0x469ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_469adc:
    // 0x469adc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x469adcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_469ae0:
    // 0x469ae0: 0x8f390060  lw          $t9, 0x60($t9)
    ctx->pc = 0x469ae0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 96)));
label_469ae4:
    // 0x469ae4: 0x320f809  jalr        $t9
label_469ae8:
    if (ctx->pc == 0x469AE8u) {
        ctx->pc = 0x469AE8u;
            // 0x469ae8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469AECu;
        goto label_469aec;
    }
    ctx->pc = 0x469AE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x469AECu);
        ctx->pc = 0x469AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469AE4u;
            // 0x469ae8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x469AECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x469AECu; }
            if (ctx->pc != 0x469AECu) { return; }
        }
        }
    }
    ctx->pc = 0x469AECu;
label_469aec:
    // 0x469aec: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x469aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_469af0:
    // 0x469af0: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x469af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_469af4:
    // 0x469af4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x469af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_469af8:
    // 0x469af8: 0xc1232ac  jal         func_48CAB0
label_469afc:
    if (ctx->pc == 0x469AFCu) {
        ctx->pc = 0x469AFCu;
            // 0x469afc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469B00u;
        goto label_469b00;
    }
    ctx->pc = 0x469AF8u;
    SET_GPR_U32(ctx, 31, 0x469B00u);
    ctx->pc = 0x469AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469AF8u;
            // 0x469afc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469B00u; }
        if (ctx->pc != 0x469B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469B00u; }
        if (ctx->pc != 0x469B00u) { return; }
    }
    ctx->pc = 0x469B00u;
label_469b00:
    // 0x469b00: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x469b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_469b04:
    // 0x469b04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x469b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_469b08:
    // 0x469b08: 0x8c5089f0  lw          $s0, -0x7610($v0)
    ctx->pc = 0x469b08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_469b0c:
    // 0x469b0c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x469b0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_469b10:
    // 0x469b10: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x469b10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_469b14:
    // 0x469b14: 0x320f809  jalr        $t9
label_469b18:
    if (ctx->pc == 0x469B18u) {
        ctx->pc = 0x469B18u;
            // 0x469b18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469B1Cu;
        goto label_469b1c;
    }
    ctx->pc = 0x469B14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x469B1Cu);
        ctx->pc = 0x469B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469B14u;
            // 0x469b18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x469B1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x469B1Cu; }
            if (ctx->pc != 0x469B1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x469B1Cu;
label_469b1c:
    // 0x469b1c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x469b1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_469b20:
    // 0x469b20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x469b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_469b24:
    // 0x469b24: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x469b24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_469b28:
    // 0x469b28: 0x320f809  jalr        $t9
label_469b2c:
    if (ctx->pc == 0x469B2Cu) {
        ctx->pc = 0x469B2Cu;
            // 0x469b2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469B30u;
        goto label_469b30;
    }
    ctx->pc = 0x469B28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x469B30u);
        ctx->pc = 0x469B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469B28u;
            // 0x469b2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x469B30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x469B30u; }
            if (ctx->pc != 0x469B30u) { return; }
        }
        }
    }
    ctx->pc = 0x469B30u;
label_469b30:
    // 0x469b30: 0xc0c85f8  jal         func_3217E0
label_469b34:
    if (ctx->pc == 0x469B34u) {
        ctx->pc = 0x469B34u;
            // 0x469b34: 0x8e440068  lw          $a0, 0x68($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->pc = 0x469B38u;
        goto label_469b38;
    }
    ctx->pc = 0x469B30u;
    SET_GPR_U32(ctx, 31, 0x469B38u);
    ctx->pc = 0x469B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469B30u;
            // 0x469b34: 0x8e440068  lw          $a0, 0x68($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3217E0u;
    if (runtime->hasFunction(0x3217E0u)) {
        auto targetFn = runtime->lookupFunction(0x3217E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469B38u; }
        if (ctx->pc != 0x469B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003217E0_0x3217e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469B38u; }
        if (ctx->pc != 0x469B38u) { return; }
    }
    ctx->pc = 0x469B38u;
label_469b38:
    // 0x469b38: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x469b38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_469b3c:
    // 0x469b3c: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x469b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_469b40:
    // 0x469b40: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x469b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_469b44:
    // 0x469b44: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x469b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_469b48:
    // 0x469b48: 0xc123240  jal         func_48C900
label_469b4c:
    if (ctx->pc == 0x469B4Cu) {
        ctx->pc = 0x469B4Cu;
            // 0x469b4c: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->pc = 0x469B50u;
        goto label_469b50;
    }
    ctx->pc = 0x469B48u;
    SET_GPR_U32(ctx, 31, 0x469B50u);
    ctx->pc = 0x469B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469B48u;
            // 0x469b4c: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C900u;
    if (runtime->hasFunction(0x48C900u)) {
        auto targetFn = runtime->lookupFunction(0x48C900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469B50u; }
        if (ctx->pc != 0x469B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C900_0x48c900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469B50u; }
        if (ctx->pc != 0x469B50u) { return; }
    }
    ctx->pc = 0x469B50u;
label_469b50:
    // 0x469b50: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x469b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_469b54:
    // 0x469b54: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x469b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_469b58:
    // 0x469b58: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_469b5c:
    if (ctx->pc == 0x469B5Cu) {
        ctx->pc = 0x469B60u;
        goto label_469b60;
    }
    ctx->pc = 0x469B58u;
    {
        const bool branch_taken_0x469b58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x469b58) {
            ctx->pc = 0x469B98u;
            goto label_469b98;
        }
    }
    ctx->pc = 0x469B60u;
label_469b60:
    // 0x469b60: 0x8e440058  lw          $a0, 0x58($s2)
    ctx->pc = 0x469b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_469b64:
    // 0x469b64: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x469b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_469b68:
    // 0x469b68: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_469b6c:
    if (ctx->pc == 0x469B6Cu) {
        ctx->pc = 0x469B6Cu;
            // 0x469b6c: 0x8e46006c  lw          $a2, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->pc = 0x469B70u;
        goto label_469b70;
    }
    ctx->pc = 0x469B68u;
    {
        const bool branch_taken_0x469b68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x469B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469B68u;
            // 0x469b6c: 0x8e46006c  lw          $a2, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469b68) {
            ctx->pc = 0x469B80u;
            goto label_469b80;
        }
    }
    ctx->pc = 0x469B70u;
label_469b70:
    // 0x469b70: 0x32030002  andi        $v1, $s0, 0x2
    ctx->pc = 0x469b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_469b74:
    // 0x469b74: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x469b74u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_469b78:
    // 0x469b78: 0x10000002  b           . + 4 + (0x2 << 2)
label_469b7c:
    if (ctx->pc == 0x469B7Cu) {
        ctx->pc = 0x469B7Cu;
            // 0x469b7c: 0x2465009d  addiu       $a1, $v1, 0x9D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 157));
        ctx->pc = 0x469B80u;
        goto label_469b80;
    }
    ctx->pc = 0x469B78u;
    {
        const bool branch_taken_0x469b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x469B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469B78u;
            // 0x469b7c: 0x2465009d  addiu       $a1, $v1, 0x9D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 157));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469b78) {
            ctx->pc = 0x469B84u;
            goto label_469b84;
        }
    }
    ctx->pc = 0x469B80u;
label_469b80:
    // 0x469b80: 0x2405009d  addiu       $a1, $zero, 0x9D
    ctx->pc = 0x469b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
label_469b84:
    // 0x469b84: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x469b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_469b88:
    // 0x469b88: 0xc1232ac  jal         func_48CAB0
label_469b8c:
    if (ctx->pc == 0x469B8Cu) {
        ctx->pc = 0x469B8Cu;
            // 0x469b8c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469B90u;
        goto label_469b90;
    }
    ctx->pc = 0x469B88u;
    SET_GPR_U32(ctx, 31, 0x469B90u);
    ctx->pc = 0x469B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469B88u;
            // 0x469b8c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469B90u; }
        if (ctx->pc != 0x469B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469B90u; }
        if (ctx->pc != 0x469B90u) { return; }
    }
    ctx->pc = 0x469B90u;
label_469b90:
    // 0x469b90: 0x10000007  b           . + 4 + (0x7 << 2)
label_469b94:
    if (ctx->pc == 0x469B94u) {
        ctx->pc = 0x469B98u;
        goto label_469b98;
    }
    ctx->pc = 0x469B90u;
    {
        const bool branch_taken_0x469b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x469b90) {
            ctx->pc = 0x469BB0u;
            goto label_469bb0;
        }
    }
    ctx->pc = 0x469B98u;
label_469b98:
    // 0x469b98: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x469b98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_469b9c:
    // 0x469b9c: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x469b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_469ba0:
    // 0x469ba0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x469ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_469ba4:
    // 0x469ba4: 0xc1232ac  jal         func_48CAB0
label_469ba8:
    if (ctx->pc == 0x469BA8u) {
        ctx->pc = 0x469BA8u;
            // 0x469ba8: 0x2405009d  addiu       $a1, $zero, 0x9D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
        ctx->pc = 0x469BACu;
        goto label_469bac;
    }
    ctx->pc = 0x469BA4u;
    SET_GPR_U32(ctx, 31, 0x469BACu);
    ctx->pc = 0x469BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469BA4u;
            // 0x469ba8: 0x2405009d  addiu       $a1, $zero, 0x9D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469BACu; }
        if (ctx->pc != 0x469BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469BACu; }
        if (ctx->pc != 0x469BACu) { return; }
    }
    ctx->pc = 0x469BACu;
label_469bac:
    // 0x469bac: 0x0  nop
    ctx->pc = 0x469bacu;
    // NOP
label_469bb0:
    // 0x469bb0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x469bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_469bb4:
    // 0x469bb4: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x469bb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_469bb8:
    // 0x469bb8: 0x5440ffe1  bnel        $v0, $zero, . + 4 + (-0x1F << 2)
label_469bbc:
    if (ctx->pc == 0x469BBCu) {
        ctx->pc = 0x469BBCu;
            // 0x469bbc: 0x8e42006c  lw          $v0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->pc = 0x469BC0u;
        goto label_469bc0;
    }
    ctx->pc = 0x469BB8u;
    {
        const bool branch_taken_0x469bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x469bb8) {
            ctx->pc = 0x469BBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x469BB8u;
            // 0x469bbc: 0x8e42006c  lw          $v0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x469B40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_469b40;
        }
    }
    ctx->pc = 0x469BC0u;
label_469bc0:
    // 0x469bc0: 0xc11af84  jal         func_46BE10
label_469bc4:
    if (ctx->pc == 0x469BC4u) {
        ctx->pc = 0x469BC4u;
            // 0x469bc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469BC8u;
        goto label_469bc8;
    }
    ctx->pc = 0x469BC0u;
    SET_GPR_U32(ctx, 31, 0x469BC8u);
    ctx->pc = 0x469BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469BC0u;
            // 0x469bc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46BE10u;
    if (runtime->hasFunction(0x46BE10u)) {
        auto targetFn = runtime->lookupFunction(0x46BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469BC8u; }
        if (ctx->pc != 0x469BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046BE10_0x46be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469BC8u; }
        if (ctx->pc != 0x469BC8u) { return; }
    }
    ctx->pc = 0x469BC8u;
label_469bc8:
    // 0x469bc8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x469bc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_469bcc:
    // 0x469bcc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x469bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_469bd0:
    // 0x469bd0: 0xc11a80c  jal         func_46A030
label_469bd4:
    if (ctx->pc == 0x469BD4u) {
        ctx->pc = 0x469BD4u;
            // 0x469bd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469BD8u;
        goto label_469bd8;
    }
    ctx->pc = 0x469BD0u;
    SET_GPR_U32(ctx, 31, 0x469BD8u);
    ctx->pc = 0x469BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469BD0u;
            // 0x469bd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46A030u;
    if (runtime->hasFunction(0x46A030u)) {
        auto targetFn = runtime->lookupFunction(0x46A030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469BD8u; }
        if (ctx->pc != 0x469BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046A030_0x46a030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469BD8u; }
        if (ctx->pc != 0x469BD8u) { return; }
    }
    ctx->pc = 0x469BD8u;
label_469bd8:
    // 0x469bd8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x469bd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_469bdc:
    // 0x469bdc: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x469bdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_469be0:
    // 0x469be0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_469be4:
    if (ctx->pc == 0x469BE4u) {
        ctx->pc = 0x469BE8u;
        goto label_469be8;
    }
    ctx->pc = 0x469BE0u;
    {
        const bool branch_taken_0x469be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x469be0) {
            ctx->pc = 0x469BCCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_469bcc;
        }
    }
    ctx->pc = 0x469BE8u;
label_469be8:
    // 0x469be8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x469be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_469bec:
    // 0x469bec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x469becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_469bf0:
    // 0x469bf0: 0x8c5089f0  lw          $s0, -0x7610($v0)
    ctx->pc = 0x469bf0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_469bf4:
    // 0x469bf4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x469bf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_469bf8:
    // 0x469bf8: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x469bf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_469bfc:
    // 0x469bfc: 0x320f809  jalr        $t9
label_469c00:
    if (ctx->pc == 0x469C00u) {
        ctx->pc = 0x469C00u;
            // 0x469c00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469C04u;
        goto label_469c04;
    }
    ctx->pc = 0x469BFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x469C04u);
        ctx->pc = 0x469C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469BFCu;
            // 0x469c00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x469C04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x469C04u; }
            if (ctx->pc != 0x469C04u) { return; }
        }
        }
    }
    ctx->pc = 0x469C04u;
label_469c04:
    // 0x469c04: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x469c04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_469c08:
    // 0x469c08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x469c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_469c0c:
    // 0x469c0c: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x469c0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_469c10:
    // 0x469c10: 0x320f809  jalr        $t9
label_469c14:
    if (ctx->pc == 0x469C14u) {
        ctx->pc = 0x469C14u;
            // 0x469c14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469C18u;
        goto label_469c18;
    }
    ctx->pc = 0x469C10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x469C18u);
        ctx->pc = 0x469C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469C10u;
            // 0x469c14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x469C18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x469C18u; }
            if (ctx->pc != 0x469C18u) { return; }
        }
        }
    }
    ctx->pc = 0x469C18u;
label_469c18:
    // 0x469c18: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x469c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_469c1c:
    // 0x469c1c: 0x24050079  addiu       $a1, $zero, 0x79
    ctx->pc = 0x469c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
label_469c20:
    // 0x469c20: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x469c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_469c24:
    // 0x469c24: 0xc1232ac  jal         func_48CAB0
label_469c28:
    if (ctx->pc == 0x469C28u) {
        ctx->pc = 0x469C28u;
            // 0x469c28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469C2Cu;
        goto label_469c2c;
    }
    ctx->pc = 0x469C24u;
    SET_GPR_U32(ctx, 31, 0x469C2Cu);
    ctx->pc = 0x469C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469C24u;
            // 0x469c28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469C2Cu; }
        if (ctx->pc != 0x469C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469C2Cu; }
        if (ctx->pc != 0x469C2Cu) { return; }
    }
    ctx->pc = 0x469C2Cu;
label_469c2c:
    // 0x469c2c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x469c2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_469c30:
    // 0x469c30: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x469c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_469c34:
    // 0x469c34: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x469c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_469c38:
    // 0x469c38: 0xc1232d0  jal         func_48CB40
label_469c3c:
    if (ctx->pc == 0x469C3Cu) {
        ctx->pc = 0x469C3Cu;
            // 0x469c3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469C40u;
        goto label_469c40;
    }
    ctx->pc = 0x469C38u;
    SET_GPR_U32(ctx, 31, 0x469C40u);
    ctx->pc = 0x469C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469C38u;
            // 0x469c3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB40u;
    if (runtime->hasFunction(0x48CB40u)) {
        auto targetFn = runtime->lookupFunction(0x48CB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469C40u; }
        if (ctx->pc != 0x469C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB40_0x48cb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469C40u; }
        if (ctx->pc != 0x469C40u) { return; }
    }
    ctx->pc = 0x469C40u;
label_469c40:
    // 0x469c40: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x469c40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_469c44:
    // 0x469c44: 0x2a0200a0  slti        $v0, $s0, 0xA0
    ctx->pc = 0x469c44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)160) ? 1 : 0);
label_469c48:
    // 0x469c48: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_469c4c:
    if (ctx->pc == 0x469C4Cu) {
        ctx->pc = 0x469C4Cu;
            // 0x469c4c: 0x8e42006c  lw          $v0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->pc = 0x469C50u;
        goto label_469c50;
    }
    ctx->pc = 0x469C48u;
    {
        const bool branch_taken_0x469c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x469c48) {
            ctx->pc = 0x469C4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x469C48u;
            // 0x469c4c: 0x8e42006c  lw          $v0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x469C34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_469c34;
        }
    }
    ctx->pc = 0x469C50u;
label_469c50:
    // 0x469c50: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x469c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_469c54:
    // 0x469c54: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x469c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_469c58:
    // 0x469c58: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x469c58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_469c5c:
    // 0x469c5c: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x469c5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_469c60:
    // 0x469c60: 0x320f809  jalr        $t9
label_469c64:
    if (ctx->pc == 0x469C64u) {
        ctx->pc = 0x469C68u;
        goto label_469c68;
    }
    ctx->pc = 0x469C60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x469C68u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x469C68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x469C68u; }
            if (ctx->pc != 0x469C68u) { return; }
        }
        }
    }
    ctx->pc = 0x469C68u;
label_469c68:
    // 0x469c68: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x469c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_469c6c:
    // 0x469c6c: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x469c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
label_469c70:
    // 0x469c70: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_469c74:
    if (ctx->pc == 0x469C74u) {
        ctx->pc = 0x469C74u;
            // 0x469c74: 0x3c023f26  lui         $v0, 0x3F26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16166 << 16));
        ctx->pc = 0x469C78u;
        goto label_469c78;
    }
    ctx->pc = 0x469C70u;
    {
        const bool branch_taken_0x469c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x469c70) {
            ctx->pc = 0x469C74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x469C70u;
            // 0x469c74: 0x3c023f26  lui         $v0, 0x3F26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16166 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x469C80u;
            goto label_469c80;
        }
    }
    ctx->pc = 0x469C78u;
label_469c78:
    // 0x469c78: 0x2411006f  addiu       $s1, $zero, 0x6F
    ctx->pc = 0x469c78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
label_469c7c:
    // 0x469c7c: 0x3c023f26  lui         $v0, 0x3F26
    ctx->pc = 0x469c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16166 << 16));
label_469c80:
    // 0x469c80: 0x8e440068  lw          $a0, 0x68($s2)
    ctx->pc = 0x469c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_469c84:
    // 0x469c84: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x469c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_469c88:
    // 0x469c88: 0x2407fc18  addiu       $a3, $zero, -0x3E8
    ctx->pc = 0x469c88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
label_469c8c:
    // 0x469c8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x469c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_469c90:
    // 0x469c90: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x469c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_469c94:
    // 0x469c94: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x469c94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_469c98:
    // 0x469c98: 0xc0c85cc  jal         func_321730
label_469c9c:
    if (ctx->pc == 0x469C9Cu) {
        ctx->pc = 0x469C9Cu;
            // 0x469c9c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469CA0u;
        goto label_469ca0;
    }
    ctx->pc = 0x469C98u;
    SET_GPR_U32(ctx, 31, 0x469CA0u);
    ctx->pc = 0x469C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469C98u;
            // 0x469c9c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321730u;
    if (runtime->hasFunction(0x321730u)) {
        auto targetFn = runtime->lookupFunction(0x321730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469CA0u; }
        if (ctx->pc != 0x469CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321730_0x321730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469CA0u; }
        if (ctx->pc != 0x469CA0u) { return; }
    }
    ctx->pc = 0x469CA0u;
label_469ca0:
    // 0x469ca0: 0x100000d9  b           . + 4 + (0xD9 << 2)
label_469ca4:
    if (ctx->pc == 0x469CA4u) {
        ctx->pc = 0x469CA8u;
        goto label_469ca8;
    }
    ctx->pc = 0x469CA0u;
    {
        const bool branch_taken_0x469ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x469ca0) {
            ctx->pc = 0x46A008u;
            goto label_46a008;
        }
    }
    ctx->pc = 0x469CA8u;
label_469ca8:
    // 0x469ca8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x469ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_469cac:
    // 0x469cac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x469cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_469cb0:
    // 0x469cb0: 0x8c5089f0  lw          $s0, -0x7610($v0)
    ctx->pc = 0x469cb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_469cb4:
    // 0x469cb4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x469cb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_469cb8:
    // 0x469cb8: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x469cb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_469cbc:
    // 0x469cbc: 0x320f809  jalr        $t9
label_469cc0:
    if (ctx->pc == 0x469CC0u) {
        ctx->pc = 0x469CC0u;
            // 0x469cc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469CC4u;
        goto label_469cc4;
    }
    ctx->pc = 0x469CBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x469CC4u);
        ctx->pc = 0x469CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469CBCu;
            // 0x469cc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x469CC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x469CC4u; }
            if (ctx->pc != 0x469CC4u) { return; }
        }
        }
    }
    ctx->pc = 0x469CC4u;
label_469cc4:
    // 0x469cc4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x469cc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_469cc8:
    // 0x469cc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x469cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_469ccc:
    // 0x469ccc: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x469cccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_469cd0:
    // 0x469cd0: 0x320f809  jalr        $t9
label_469cd4:
    if (ctx->pc == 0x469CD4u) {
        ctx->pc = 0x469CD4u;
            // 0x469cd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469CD8u;
        goto label_469cd8;
    }
    ctx->pc = 0x469CD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x469CD8u);
        ctx->pc = 0x469CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469CD0u;
            // 0x469cd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x469CD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x469CD8u; }
            if (ctx->pc != 0x469CD8u) { return; }
        }
        }
    }
    ctx->pc = 0x469CD8u;
label_469cd8:
    // 0x469cd8: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x469cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_469cdc:
    // 0x469cdc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x469cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_469ce0:
    // 0x469ce0: 0xc1234b8  jal         func_48D2E0
label_469ce4:
    if (ctx->pc == 0x469CE4u) {
        ctx->pc = 0x469CE4u;
            // 0x469ce4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x469CE8u;
        goto label_469ce8;
    }
    ctx->pc = 0x469CE0u;
    SET_GPR_U32(ctx, 31, 0x469CE8u);
    ctx->pc = 0x469CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469CE0u;
            // 0x469ce4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D2E0u;
    if (runtime->hasFunction(0x48D2E0u)) {
        auto targetFn = runtime->lookupFunction(0x48D2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469CE8u; }
        if (ctx->pc != 0x469CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D2E0_0x48d2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469CE8u; }
        if (ctx->pc != 0x469CE8u) { return; }
    }
    ctx->pc = 0x469CE8u;
label_469ce8:
    // 0x469ce8: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x469ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_469cec:
    // 0x469cec: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x469cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_469cf0:
    // 0x469cf0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x469cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_469cf4:
    // 0x469cf4: 0xa040007c  sb          $zero, 0x7C($v0)
    ctx->pc = 0x469cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 124), (uint8_t)GPR_U32(ctx, 0));
label_469cf8:
    // 0x469cf8: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x469cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_469cfc:
    // 0x469cfc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x469cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_469d00:
    // 0x469d00: 0xc1232ac  jal         func_48CAB0
label_469d04:
    if (ctx->pc == 0x469D04u) {
        ctx->pc = 0x469D04u;
            // 0x469d04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469D08u;
        goto label_469d08;
    }
    ctx->pc = 0x469D00u;
    SET_GPR_U32(ctx, 31, 0x469D08u);
    ctx->pc = 0x469D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469D00u;
            // 0x469d04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469D08u; }
        if (ctx->pc != 0x469D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469D08u; }
        if (ctx->pc != 0x469D08u) { return; }
    }
    ctx->pc = 0x469D08u;
label_469d08:
    // 0x469d08: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x469d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_469d0c:
    // 0x469d0c: 0x2405009d  addiu       $a1, $zero, 0x9D
    ctx->pc = 0x469d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
label_469d10:
    // 0x469d10: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x469d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_469d14:
    // 0x469d14: 0xc1232ac  jal         func_48CAB0
label_469d18:
    if (ctx->pc == 0x469D18u) {
        ctx->pc = 0x469D18u;
            // 0x469d18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469D1Cu;
        goto label_469d1c;
    }
    ctx->pc = 0x469D14u;
    SET_GPR_U32(ctx, 31, 0x469D1Cu);
    ctx->pc = 0x469D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469D14u;
            // 0x469d18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469D1Cu; }
        if (ctx->pc != 0x469D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469D1Cu; }
        if (ctx->pc != 0x469D1Cu) { return; }
    }
    ctx->pc = 0x469D1Cu;
label_469d1c:
    // 0x469d1c: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x469d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_469d20:
    // 0x469d20: 0x2405009e  addiu       $a1, $zero, 0x9E
    ctx->pc = 0x469d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
label_469d24:
    // 0x469d24: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x469d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_469d28:
    // 0x469d28: 0xc1232ac  jal         func_48CAB0
label_469d2c:
    if (ctx->pc == 0x469D2Cu) {
        ctx->pc = 0x469D2Cu;
            // 0x469d2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469D30u;
        goto label_469d30;
    }
    ctx->pc = 0x469D28u;
    SET_GPR_U32(ctx, 31, 0x469D30u);
    ctx->pc = 0x469D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469D28u;
            // 0x469d2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469D30u; }
        if (ctx->pc != 0x469D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469D30u; }
        if (ctx->pc != 0x469D30u) { return; }
    }
    ctx->pc = 0x469D30u;
label_469d30:
    // 0x469d30: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x469d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_469d34:
    // 0x469d34: 0x2405009f  addiu       $a1, $zero, 0x9F
    ctx->pc = 0x469d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
label_469d38:
    // 0x469d38: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x469d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_469d3c:
    // 0x469d3c: 0xc1232ac  jal         func_48CAB0
label_469d40:
    if (ctx->pc == 0x469D40u) {
        ctx->pc = 0x469D40u;
            // 0x469d40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469D44u;
        goto label_469d44;
    }
    ctx->pc = 0x469D3Cu;
    SET_GPR_U32(ctx, 31, 0x469D44u);
    ctx->pc = 0x469D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469D3Cu;
            // 0x469d40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469D44u; }
        if (ctx->pc != 0x469D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469D44u; }
        if (ctx->pc != 0x469D44u) { return; }
    }
    ctx->pc = 0x469D44u;
label_469d44:
    // 0x469d44: 0x8e440068  lw          $a0, 0x68($s2)
    ctx->pc = 0x469d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_469d48:
    // 0x469d48: 0xc0c9190  jal         func_324640
label_469d4c:
    if (ctx->pc == 0x469D4Cu) {
        ctx->pc = 0x469D4Cu;
            // 0x469d4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x469D50u;
        goto label_469d50;
    }
    ctx->pc = 0x469D48u;
    SET_GPR_U32(ctx, 31, 0x469D50u);
    ctx->pc = 0x469D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469D48u;
            // 0x469d4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324640u;
    if (runtime->hasFunction(0x324640u)) {
        auto targetFn = runtime->lookupFunction(0x324640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469D50u; }
        if (ctx->pc != 0x469D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324640_0x324640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469D50u; }
        if (ctx->pc != 0x469D50u) { return; }
    }
    ctx->pc = 0x469D50u;
label_469d50:
    // 0x469d50: 0xc0c9c84  jal         func_327210
label_469d54:
    if (ctx->pc == 0x469D54u) {
        ctx->pc = 0x469D54u;
            // 0x469d54: 0x8e440068  lw          $a0, 0x68($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->pc = 0x469D58u;
        goto label_469d58;
    }
    ctx->pc = 0x469D50u;
    SET_GPR_U32(ctx, 31, 0x469D58u);
    ctx->pc = 0x469D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469D50u;
            // 0x469d54: 0x8e440068  lw          $a0, 0x68($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x327210u;
    if (runtime->hasFunction(0x327210u)) {
        auto targetFn = runtime->lookupFunction(0x327210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469D58u; }
        if (ctx->pc != 0x469D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00327210_0x327210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469D58u; }
        if (ctx->pc != 0x469D58u) { return; }
    }
    ctx->pc = 0x469D58u;
label_469d58:
    // 0x469d58: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x469d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_469d5c:
    // 0x469d5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x469d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_469d60:
    // 0x469d60: 0x8c5089f0  lw          $s0, -0x7610($v0)
    ctx->pc = 0x469d60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_469d64:
    // 0x469d64: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x469d64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_469d68:
    // 0x469d68: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x469d68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_469d6c:
    // 0x469d6c: 0x320f809  jalr        $t9
label_469d70:
    if (ctx->pc == 0x469D70u) {
        ctx->pc = 0x469D70u;
            // 0x469d70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469D74u;
        goto label_469d74;
    }
    ctx->pc = 0x469D6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x469D74u);
        ctx->pc = 0x469D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469D6Cu;
            // 0x469d70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x469D74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x469D74u; }
            if (ctx->pc != 0x469D74u) { return; }
        }
        }
    }
    ctx->pc = 0x469D74u;
label_469d74:
    // 0x469d74: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x469d74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_469d78:
    // 0x469d78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x469d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_469d7c:
    // 0x469d7c: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x469d7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_469d80:
    // 0x469d80: 0x320f809  jalr        $t9
label_469d84:
    if (ctx->pc == 0x469D84u) {
        ctx->pc = 0x469D84u;
            // 0x469d84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469D88u;
        goto label_469d88;
    }
    ctx->pc = 0x469D80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x469D88u);
        ctx->pc = 0x469D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469D80u;
            // 0x469d84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x469D88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x469D88u; }
            if (ctx->pc != 0x469D88u) { return; }
        }
        }
    }
    ctx->pc = 0x469D88u;
label_469d88:
    // 0x469d88: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x469d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_469d8c:
    // 0x469d8c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x469d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_469d90:
    // 0x469d90: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x469d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_469d94:
    // 0x469d94: 0x8c440088  lw          $a0, 0x88($v0)
    ctx->pc = 0x469d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_469d98:
    // 0x469d98: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x469d98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_469d9c:
    // 0x469d9c: 0x8f390060  lw          $t9, 0x60($t9)
    ctx->pc = 0x469d9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 96)));
label_469da0:
    // 0x469da0: 0x320f809  jalr        $t9
label_469da4:
    if (ctx->pc == 0x469DA4u) {
        ctx->pc = 0x469DA4u;
            // 0x469da4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469DA8u;
        goto label_469da8;
    }
    ctx->pc = 0x469DA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x469DA8u);
        ctx->pc = 0x469DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469DA0u;
            // 0x469da4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x469DA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x469DA8u; }
            if (ctx->pc != 0x469DA8u) { return; }
        }
        }
    }
    ctx->pc = 0x469DA8u;
label_469da8:
    // 0x469da8: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x469da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_469dac:
    // 0x469dac: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x469dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_469db0:
    // 0x469db0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x469db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_469db4:
    // 0x469db4: 0xc1232ac  jal         func_48CAB0
label_469db8:
    if (ctx->pc == 0x469DB8u) {
        ctx->pc = 0x469DB8u;
            // 0x469db8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469DBCu;
        goto label_469dbc;
    }
    ctx->pc = 0x469DB4u;
    SET_GPR_U32(ctx, 31, 0x469DBCu);
    ctx->pc = 0x469DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469DB4u;
            // 0x469db8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469DBCu; }
        if (ctx->pc != 0x469DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469DBCu; }
        if (ctx->pc != 0x469DBCu) { return; }
    }
    ctx->pc = 0x469DBCu;
label_469dbc:
    // 0x469dbc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x469dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_469dc0:
    // 0x469dc0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x469dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_469dc4:
    // 0x469dc4: 0x8c5089f0  lw          $s0, -0x7610($v0)
    ctx->pc = 0x469dc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_469dc8:
    // 0x469dc8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x469dc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_469dcc:
    // 0x469dcc: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x469dccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_469dd0:
    // 0x469dd0: 0x320f809  jalr        $t9
label_469dd4:
    if (ctx->pc == 0x469DD4u) {
        ctx->pc = 0x469DD4u;
            // 0x469dd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469DD8u;
        goto label_469dd8;
    }
    ctx->pc = 0x469DD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x469DD8u);
        ctx->pc = 0x469DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469DD0u;
            // 0x469dd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x469DD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x469DD8u; }
            if (ctx->pc != 0x469DD8u) { return; }
        }
        }
    }
    ctx->pc = 0x469DD8u;
label_469dd8:
    // 0x469dd8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x469dd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_469ddc:
    // 0x469ddc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x469ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_469de0:
    // 0x469de0: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x469de0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_469de4:
    // 0x469de4: 0x320f809  jalr        $t9
label_469de8:
    if (ctx->pc == 0x469DE8u) {
        ctx->pc = 0x469DE8u;
            // 0x469de8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469DECu;
        goto label_469dec;
    }
    ctx->pc = 0x469DE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x469DECu);
        ctx->pc = 0x469DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469DE4u;
            // 0x469de8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x469DECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x469DECu; }
            if (ctx->pc != 0x469DECu) { return; }
        }
        }
    }
    ctx->pc = 0x469DECu;
label_469dec:
    // 0x469dec: 0xc0c85f8  jal         func_3217E0
label_469df0:
    if (ctx->pc == 0x469DF0u) {
        ctx->pc = 0x469DF0u;
            // 0x469df0: 0x8e440068  lw          $a0, 0x68($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->pc = 0x469DF4u;
        goto label_469df4;
    }
    ctx->pc = 0x469DECu;
    SET_GPR_U32(ctx, 31, 0x469DF4u);
    ctx->pc = 0x469DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469DECu;
            // 0x469df0: 0x8e440068  lw          $a0, 0x68($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3217E0u;
    if (runtime->hasFunction(0x3217E0u)) {
        auto targetFn = runtime->lookupFunction(0x3217E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469DF4u; }
        if (ctx->pc != 0x469DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003217E0_0x3217e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469DF4u; }
        if (ctx->pc != 0x469DF4u) { return; }
    }
    ctx->pc = 0x469DF4u;
label_469df4:
    // 0x469df4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x469df4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_469df8:
    // 0x469df8: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x469df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_469dfc:
    // 0x469dfc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x469dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_469e00:
    // 0x469e00: 0xc1232d0  jal         func_48CB40
label_469e04:
    if (ctx->pc == 0x469E04u) {
        ctx->pc = 0x469E04u;
            // 0x469e04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469E08u;
        goto label_469e08;
    }
    ctx->pc = 0x469E00u;
    SET_GPR_U32(ctx, 31, 0x469E08u);
    ctx->pc = 0x469E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469E00u;
            // 0x469e04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB40u;
    if (runtime->hasFunction(0x48CB40u)) {
        auto targetFn = runtime->lookupFunction(0x48CB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469E08u; }
        if (ctx->pc != 0x469E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB40_0x48cb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469E08u; }
        if (ctx->pc != 0x469E08u) { return; }
    }
    ctx->pc = 0x469E08u;
label_469e08:
    // 0x469e08: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x469e08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_469e0c:
    // 0x469e0c: 0x2a0200a0  slti        $v0, $s0, 0xA0
    ctx->pc = 0x469e0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)160) ? 1 : 0);
label_469e10:
    // 0x469e10: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_469e14:
    if (ctx->pc == 0x469E14u) {
        ctx->pc = 0x469E14u;
            // 0x469e14: 0x8e42006c  lw          $v0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->pc = 0x469E18u;
        goto label_469e18;
    }
    ctx->pc = 0x469E10u;
    {
        const bool branch_taken_0x469e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x469e10) {
            ctx->pc = 0x469E14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x469E10u;
            // 0x469e14: 0x8e42006c  lw          $v0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x469DFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_469dfc;
        }
    }
    ctx->pc = 0x469E18u;
label_469e18:
    // 0x469e18: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x469e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_469e1c:
    // 0x469e1c: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x469e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_469e20:
    // 0x469e20: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x469e20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_469e24:
    // 0x469e24: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x469e24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_469e28:
    // 0x469e28: 0x320f809  jalr        $t9
label_469e2c:
    if (ctx->pc == 0x469E2Cu) {
        ctx->pc = 0x469E30u;
        goto label_469e30;
    }
    ctx->pc = 0x469E28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x469E30u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x469E30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x469E30u; }
            if (ctx->pc != 0x469E30u) { return; }
        }
        }
    }
    ctx->pc = 0x469E30u;
label_469e30:
    // 0x469e30: 0x3c023f26  lui         $v0, 0x3F26
    ctx->pc = 0x469e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16166 << 16));
label_469e34:
    // 0x469e34: 0x8e440068  lw          $a0, 0x68($s2)
    ctx->pc = 0x469e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_469e38:
    // 0x469e38: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x469e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_469e3c:
    // 0x469e3c: 0x2407fc18  addiu       $a3, $zero, -0x3E8
    ctx->pc = 0x469e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
label_469e40:
    // 0x469e40: 0x2405006e  addiu       $a1, $zero, 0x6E
    ctx->pc = 0x469e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_469e44:
    // 0x469e44: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x469e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_469e48:
    // 0x469e48: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x469e48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_469e4c:
    // 0x469e4c: 0xc0c85cc  jal         func_321730
label_469e50:
    if (ctx->pc == 0x469E50u) {
        ctx->pc = 0x469E50u;
            // 0x469e50: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469E54u;
        goto label_469e54;
    }
    ctx->pc = 0x469E4Cu;
    SET_GPR_U32(ctx, 31, 0x469E54u);
    ctx->pc = 0x469E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469E4Cu;
            // 0x469e50: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321730u;
    if (runtime->hasFunction(0x321730u)) {
        auto targetFn = runtime->lookupFunction(0x321730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469E54u; }
        if (ctx->pc != 0x469E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321730_0x321730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469E54u; }
        if (ctx->pc != 0x469E54u) { return; }
    }
    ctx->pc = 0x469E54u;
label_469e54:
    // 0x469e54: 0x1000006c  b           . + 4 + (0x6C << 2)
label_469e58:
    if (ctx->pc == 0x469E58u) {
        ctx->pc = 0x469E5Cu;
        goto label_469e5c;
    }
    ctx->pc = 0x469E54u;
    {
        const bool branch_taken_0x469e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x469e54) {
            ctx->pc = 0x46A008u;
            goto label_46a008;
        }
    }
    ctx->pc = 0x469E5Cu;
label_469e5c:
    // 0x469e5c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x469e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_469e60:
    // 0x469e60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x469e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_469e64:
    // 0x469e64: 0x8c5089f0  lw          $s0, -0x7610($v0)
    ctx->pc = 0x469e64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_469e68:
    // 0x469e68: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x469e68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_469e6c:
    // 0x469e6c: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x469e6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_469e70:
    // 0x469e70: 0x320f809  jalr        $t9
label_469e74:
    if (ctx->pc == 0x469E74u) {
        ctx->pc = 0x469E74u;
            // 0x469e74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469E78u;
        goto label_469e78;
    }
    ctx->pc = 0x469E70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x469E78u);
        ctx->pc = 0x469E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469E70u;
            // 0x469e74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x469E78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x469E78u; }
            if (ctx->pc != 0x469E78u) { return; }
        }
        }
    }
    ctx->pc = 0x469E78u;
label_469e78:
    // 0x469e78: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x469e78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_469e7c:
    // 0x469e7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x469e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_469e80:
    // 0x469e80: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x469e80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_469e84:
    // 0x469e84: 0x320f809  jalr        $t9
label_469e88:
    if (ctx->pc == 0x469E88u) {
        ctx->pc = 0x469E88u;
            // 0x469e88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469E8Cu;
        goto label_469e8c;
    }
    ctx->pc = 0x469E84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x469E8Cu);
        ctx->pc = 0x469E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469E84u;
            // 0x469e88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x469E8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x469E8Cu; }
            if (ctx->pc != 0x469E8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x469E8Cu;
label_469e8c:
    // 0x469e8c: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x469e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_469e90:
    // 0x469e90: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x469e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_469e94:
    // 0x469e94: 0xc1234b8  jal         func_48D2E0
label_469e98:
    if (ctx->pc == 0x469E98u) {
        ctx->pc = 0x469E98u;
            // 0x469e98: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x469E9Cu;
        goto label_469e9c;
    }
    ctx->pc = 0x469E94u;
    SET_GPR_U32(ctx, 31, 0x469E9Cu);
    ctx->pc = 0x469E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469E94u;
            // 0x469e98: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D2E0u;
    if (runtime->hasFunction(0x48D2E0u)) {
        auto targetFn = runtime->lookupFunction(0x48D2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469E9Cu; }
        if (ctx->pc != 0x469E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D2E0_0x48d2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469E9Cu; }
        if (ctx->pc != 0x469E9Cu) { return; }
    }
    ctx->pc = 0x469E9Cu;
label_469e9c:
    // 0x469e9c: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x469e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_469ea0:
    // 0x469ea0: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x469ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_469ea4:
    // 0x469ea4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x469ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_469ea8:
    // 0x469ea8: 0xa040007c  sb          $zero, 0x7C($v0)
    ctx->pc = 0x469ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 124), (uint8_t)GPR_U32(ctx, 0));
label_469eac:
    // 0x469eac: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x469eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_469eb0:
    // 0x469eb0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x469eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_469eb4:
    // 0x469eb4: 0xc1232ac  jal         func_48CAB0
label_469eb8:
    if (ctx->pc == 0x469EB8u) {
        ctx->pc = 0x469EB8u;
            // 0x469eb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469EBCu;
        goto label_469ebc;
    }
    ctx->pc = 0x469EB4u;
    SET_GPR_U32(ctx, 31, 0x469EBCu);
    ctx->pc = 0x469EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469EB4u;
            // 0x469eb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469EBCu; }
        if (ctx->pc != 0x469EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469EBCu; }
        if (ctx->pc != 0x469EBCu) { return; }
    }
    ctx->pc = 0x469EBCu;
label_469ebc:
    // 0x469ebc: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x469ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_469ec0:
    // 0x469ec0: 0x2405009d  addiu       $a1, $zero, 0x9D
    ctx->pc = 0x469ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
label_469ec4:
    // 0x469ec4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x469ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_469ec8:
    // 0x469ec8: 0xc1232ac  jal         func_48CAB0
label_469ecc:
    if (ctx->pc == 0x469ECCu) {
        ctx->pc = 0x469ECCu;
            // 0x469ecc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469ED0u;
        goto label_469ed0;
    }
    ctx->pc = 0x469EC8u;
    SET_GPR_U32(ctx, 31, 0x469ED0u);
    ctx->pc = 0x469ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469EC8u;
            // 0x469ecc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469ED0u; }
        if (ctx->pc != 0x469ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469ED0u; }
        if (ctx->pc != 0x469ED0u) { return; }
    }
    ctx->pc = 0x469ED0u;
label_469ed0:
    // 0x469ed0: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x469ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_469ed4:
    // 0x469ed4: 0x2405009e  addiu       $a1, $zero, 0x9E
    ctx->pc = 0x469ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
label_469ed8:
    // 0x469ed8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x469ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_469edc:
    // 0x469edc: 0xc1232ac  jal         func_48CAB0
label_469ee0:
    if (ctx->pc == 0x469EE0u) {
        ctx->pc = 0x469EE0u;
            // 0x469ee0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469EE4u;
        goto label_469ee4;
    }
    ctx->pc = 0x469EDCu;
    SET_GPR_U32(ctx, 31, 0x469EE4u);
    ctx->pc = 0x469EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469EDCu;
            // 0x469ee0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469EE4u; }
        if (ctx->pc != 0x469EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469EE4u; }
        if (ctx->pc != 0x469EE4u) { return; }
    }
    ctx->pc = 0x469EE4u;
label_469ee4:
    // 0x469ee4: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x469ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_469ee8:
    // 0x469ee8: 0x2405009f  addiu       $a1, $zero, 0x9F
    ctx->pc = 0x469ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
label_469eec:
    // 0x469eec: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x469eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_469ef0:
    // 0x469ef0: 0xc1232ac  jal         func_48CAB0
label_469ef4:
    if (ctx->pc == 0x469EF4u) {
        ctx->pc = 0x469EF4u;
            // 0x469ef4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469EF8u;
        goto label_469ef8;
    }
    ctx->pc = 0x469EF0u;
    SET_GPR_U32(ctx, 31, 0x469EF8u);
    ctx->pc = 0x469EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469EF0u;
            // 0x469ef4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469EF8u; }
        if (ctx->pc != 0x469EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469EF8u; }
        if (ctx->pc != 0x469EF8u) { return; }
    }
    ctx->pc = 0x469EF8u;
label_469ef8:
    // 0x469ef8: 0x8e440068  lw          $a0, 0x68($s2)
    ctx->pc = 0x469ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_469efc:
    // 0x469efc: 0xc0c9190  jal         func_324640
label_469f00:
    if (ctx->pc == 0x469F00u) {
        ctx->pc = 0x469F00u;
            // 0x469f00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x469F04u;
        goto label_469f04;
    }
    ctx->pc = 0x469EFCu;
    SET_GPR_U32(ctx, 31, 0x469F04u);
    ctx->pc = 0x469F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469EFCu;
            // 0x469f00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324640u;
    if (runtime->hasFunction(0x324640u)) {
        auto targetFn = runtime->lookupFunction(0x324640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469F04u; }
        if (ctx->pc != 0x469F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324640_0x324640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469F04u; }
        if (ctx->pc != 0x469F04u) { return; }
    }
    ctx->pc = 0x469F04u;
label_469f04:
    // 0x469f04: 0xc0c9c84  jal         func_327210
label_469f08:
    if (ctx->pc == 0x469F08u) {
        ctx->pc = 0x469F08u;
            // 0x469f08: 0x8e440068  lw          $a0, 0x68($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->pc = 0x469F0Cu;
        goto label_469f0c;
    }
    ctx->pc = 0x469F04u;
    SET_GPR_U32(ctx, 31, 0x469F0Cu);
    ctx->pc = 0x469F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469F04u;
            // 0x469f08: 0x8e440068  lw          $a0, 0x68($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x327210u;
    if (runtime->hasFunction(0x327210u)) {
        auto targetFn = runtime->lookupFunction(0x327210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469F0Cu; }
        if (ctx->pc != 0x469F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00327210_0x327210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469F0Cu; }
        if (ctx->pc != 0x469F0Cu) { return; }
    }
    ctx->pc = 0x469F0Cu;
label_469f0c:
    // 0x469f0c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x469f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_469f10:
    // 0x469f10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x469f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_469f14:
    // 0x469f14: 0x8c5089f0  lw          $s0, -0x7610($v0)
    ctx->pc = 0x469f14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_469f18:
    // 0x469f18: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x469f18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_469f1c:
    // 0x469f1c: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x469f1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_469f20:
    // 0x469f20: 0x320f809  jalr        $t9
label_469f24:
    if (ctx->pc == 0x469F24u) {
        ctx->pc = 0x469F24u;
            // 0x469f24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469F28u;
        goto label_469f28;
    }
    ctx->pc = 0x469F20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x469F28u);
        ctx->pc = 0x469F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469F20u;
            // 0x469f24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x469F28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x469F28u; }
            if (ctx->pc != 0x469F28u) { return; }
        }
        }
    }
    ctx->pc = 0x469F28u;
label_469f28:
    // 0x469f28: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x469f28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_469f2c:
    // 0x469f2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x469f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_469f30:
    // 0x469f30: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x469f30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_469f34:
    // 0x469f34: 0x320f809  jalr        $t9
label_469f38:
    if (ctx->pc == 0x469F38u) {
        ctx->pc = 0x469F38u;
            // 0x469f38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469F3Cu;
        goto label_469f3c;
    }
    ctx->pc = 0x469F34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x469F3Cu);
        ctx->pc = 0x469F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469F34u;
            // 0x469f38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x469F3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x469F3Cu; }
            if (ctx->pc != 0x469F3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x469F3Cu;
label_469f3c:
    // 0x469f3c: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x469f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_469f40:
    // 0x469f40: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x469f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_469f44:
    // 0x469f44: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x469f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_469f48:
    // 0x469f48: 0x8c440088  lw          $a0, 0x88($v0)
    ctx->pc = 0x469f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_469f4c:
    // 0x469f4c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x469f4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_469f50:
    // 0x469f50: 0x8f390060  lw          $t9, 0x60($t9)
    ctx->pc = 0x469f50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 96)));
label_469f54:
    // 0x469f54: 0x320f809  jalr        $t9
label_469f58:
    if (ctx->pc == 0x469F58u) {
        ctx->pc = 0x469F58u;
            // 0x469f58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469F5Cu;
        goto label_469f5c;
    }
    ctx->pc = 0x469F54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x469F5Cu);
        ctx->pc = 0x469F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469F54u;
            // 0x469f58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x469F5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x469F5Cu; }
            if (ctx->pc != 0x469F5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x469F5Cu;
label_469f5c:
    // 0x469f5c: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x469f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_469f60:
    // 0x469f60: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x469f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_469f64:
    // 0x469f64: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x469f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_469f68:
    // 0x469f68: 0xc1232ac  jal         func_48CAB0
label_469f6c:
    if (ctx->pc == 0x469F6Cu) {
        ctx->pc = 0x469F6Cu;
            // 0x469f6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469F70u;
        goto label_469f70;
    }
    ctx->pc = 0x469F68u;
    SET_GPR_U32(ctx, 31, 0x469F70u);
    ctx->pc = 0x469F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469F68u;
            // 0x469f6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CAB0u;
    if (runtime->hasFunction(0x48CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x48CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469F70u; }
        if (ctx->pc != 0x469F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CAB0_0x48cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469F70u; }
        if (ctx->pc != 0x469F70u) { return; }
    }
    ctx->pc = 0x469F70u;
label_469f70:
    // 0x469f70: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x469f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_469f74:
    // 0x469f74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x469f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_469f78:
    // 0x469f78: 0x8c5089f0  lw          $s0, -0x7610($v0)
    ctx->pc = 0x469f78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_469f7c:
    // 0x469f7c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x469f7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_469f80:
    // 0x469f80: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x469f80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_469f84:
    // 0x469f84: 0x320f809  jalr        $t9
label_469f88:
    if (ctx->pc == 0x469F88u) {
        ctx->pc = 0x469F88u;
            // 0x469f88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469F8Cu;
        goto label_469f8c;
    }
    ctx->pc = 0x469F84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x469F8Cu);
        ctx->pc = 0x469F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469F84u;
            // 0x469f88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x469F8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x469F8Cu; }
            if (ctx->pc != 0x469F8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x469F8Cu;
label_469f8c:
    // 0x469f8c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x469f8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_469f90:
    // 0x469f90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x469f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_469f94:
    // 0x469f94: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x469f94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_469f98:
    // 0x469f98: 0x320f809  jalr        $t9
label_469f9c:
    if (ctx->pc == 0x469F9Cu) {
        ctx->pc = 0x469F9Cu;
            // 0x469f9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469FA0u;
        goto label_469fa0;
    }
    ctx->pc = 0x469F98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x469FA0u);
        ctx->pc = 0x469F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x469F98u;
            // 0x469f9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x469FA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x469FA0u; }
            if (ctx->pc != 0x469FA0u) { return; }
        }
        }
    }
    ctx->pc = 0x469FA0u;
label_469fa0:
    // 0x469fa0: 0xc0c85f8  jal         func_3217E0
label_469fa4:
    if (ctx->pc == 0x469FA4u) {
        ctx->pc = 0x469FA4u;
            // 0x469fa4: 0x8e440068  lw          $a0, 0x68($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->pc = 0x469FA8u;
        goto label_469fa8;
    }
    ctx->pc = 0x469FA0u;
    SET_GPR_U32(ctx, 31, 0x469FA8u);
    ctx->pc = 0x469FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469FA0u;
            // 0x469fa4: 0x8e440068  lw          $a0, 0x68($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3217E0u;
    if (runtime->hasFunction(0x3217E0u)) {
        auto targetFn = runtime->lookupFunction(0x3217E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469FA8u; }
        if (ctx->pc != 0x469FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003217E0_0x3217e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469FA8u; }
        if (ctx->pc != 0x469FA8u) { return; }
    }
    ctx->pc = 0x469FA8u;
label_469fa8:
    // 0x469fa8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x469fa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_469fac:
    // 0x469fac: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x469facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_469fb0:
    // 0x469fb0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x469fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_469fb4:
    // 0x469fb4: 0xc1232d0  jal         func_48CB40
label_469fb8:
    if (ctx->pc == 0x469FB8u) {
        ctx->pc = 0x469FB8u;
            // 0x469fb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x469FBCu;
        goto label_469fbc;
    }
    ctx->pc = 0x469FB4u;
    SET_GPR_U32(ctx, 31, 0x469FBCu);
    ctx->pc = 0x469FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x469FB4u;
            // 0x469fb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB40u;
    if (runtime->hasFunction(0x48CB40u)) {
        auto targetFn = runtime->lookupFunction(0x48CB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469FBCu; }
        if (ctx->pc != 0x469FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB40_0x48cb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x469FBCu; }
        if (ctx->pc != 0x469FBCu) { return; }
    }
    ctx->pc = 0x469FBCu;
label_469fbc:
    // 0x469fbc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x469fbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_469fc0:
    // 0x469fc0: 0x2a0200a0  slti        $v0, $s0, 0xA0
    ctx->pc = 0x469fc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)160) ? 1 : 0);
label_469fc4:
    // 0x469fc4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_469fc8:
    if (ctx->pc == 0x469FC8u) {
        ctx->pc = 0x469FC8u;
            // 0x469fc8: 0x8e42006c  lw          $v0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->pc = 0x469FCCu;
        goto label_469fcc;
    }
    ctx->pc = 0x469FC4u;
    {
        const bool branch_taken_0x469fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x469fc4) {
            ctx->pc = 0x469FC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x469FC4u;
            // 0x469fc8: 0x8e42006c  lw          $v0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x469FB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_469fb0;
        }
    }
    ctx->pc = 0x469FCCu;
label_469fcc:
    // 0x469fcc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x469fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_469fd0:
    // 0x469fd0: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x469fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_469fd4:
    // 0x469fd4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x469fd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_469fd8:
    // 0x469fd8: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x469fd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_469fdc:
    // 0x469fdc: 0x320f809  jalr        $t9
label_469fe0:
    if (ctx->pc == 0x469FE0u) {
        ctx->pc = 0x469FE4u;
        goto label_469fe4;
    }
    ctx->pc = 0x469FDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x469FE4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x469FE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x469FE4u; }
            if (ctx->pc != 0x469FE4u) { return; }
        }
        }
    }
    ctx->pc = 0x469FE4u;
label_469fe4:
    // 0x469fe4: 0x3c023f26  lui         $v0, 0x3F26
    ctx->pc = 0x469fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16166 << 16));
label_469fe8:
    // 0x469fe8: 0x8e440068  lw          $a0, 0x68($s2)
    ctx->pc = 0x469fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_469fec:
    // 0x469fec: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x469fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_469ff0:
    // 0x469ff0: 0x2407fc18  addiu       $a3, $zero, -0x3E8
    ctx->pc = 0x469ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
label_469ff4:
    // 0x469ff4: 0x2405006e  addiu       $a1, $zero, 0x6E
    ctx->pc = 0x469ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_469ff8:
    // 0x469ff8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x469ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_469ffc:
    // 0x469ffc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x469ffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_46a000:
    // 0x46a000: 0xc0c85cc  jal         func_321730
label_46a004:
    if (ctx->pc == 0x46A004u) {
        ctx->pc = 0x46A004u;
            // 0x46a004: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46A008u;
        goto label_46a008;
    }
    ctx->pc = 0x46A000u;
    SET_GPR_U32(ctx, 31, 0x46A008u);
    ctx->pc = 0x46A004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46A000u;
            // 0x46a004: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321730u;
    if (runtime->hasFunction(0x321730u)) {
        auto targetFn = runtime->lookupFunction(0x321730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A008u; }
        if (ctx->pc != 0x46A008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321730_0x321730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46A008u; }
        if (ctx->pc != 0x46A008u) { return; }
    }
    ctx->pc = 0x46A008u;
label_46a008:
    // 0x46a008: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x46a008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_46a00c:
    // 0x46a00c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x46a00cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_46a010:
    // 0x46a010: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46a010u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_46a014:
    // 0x46a014: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46a014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_46a018:
    // 0x46a018: 0x3e00008  jr          $ra
label_46a01c:
    if (ctx->pc == 0x46A01Cu) {
        ctx->pc = 0x46A01Cu;
            // 0x46a01c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x46A020u;
        goto label_46a020;
    }
    ctx->pc = 0x46A018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46A01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46A018u;
            // 0x46a01c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x46A020u;
label_46a020:
    // 0x46a020: 0x3e00008  jr          $ra
label_46a024:
    if (ctx->pc == 0x46A024u) {
        ctx->pc = 0x46A028u;
        goto label_46a028;
    }
    ctx->pc = 0x46A020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x46A028u;
label_46a028:
    // 0x46a028: 0x0  nop
    ctx->pc = 0x46a028u;
    // NOP
label_46a02c:
    // 0x46a02c: 0x0  nop
    ctx->pc = 0x46a02cu;
    // NOP
}
