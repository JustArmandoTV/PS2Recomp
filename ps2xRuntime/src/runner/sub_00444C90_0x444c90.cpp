#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00444C90
// Address: 0x444c90 - 0x4458e0
void sub_00444C90_0x444c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00444C90_0x444c90");
#endif

    switch (ctx->pc) {
        case 0x444c90u: goto label_444c90;
        case 0x444c94u: goto label_444c94;
        case 0x444c98u: goto label_444c98;
        case 0x444c9cu: goto label_444c9c;
        case 0x444ca0u: goto label_444ca0;
        case 0x444ca4u: goto label_444ca4;
        case 0x444ca8u: goto label_444ca8;
        case 0x444cacu: goto label_444cac;
        case 0x444cb0u: goto label_444cb0;
        case 0x444cb4u: goto label_444cb4;
        case 0x444cb8u: goto label_444cb8;
        case 0x444cbcu: goto label_444cbc;
        case 0x444cc0u: goto label_444cc0;
        case 0x444cc4u: goto label_444cc4;
        case 0x444cc8u: goto label_444cc8;
        case 0x444cccu: goto label_444ccc;
        case 0x444cd0u: goto label_444cd0;
        case 0x444cd4u: goto label_444cd4;
        case 0x444cd8u: goto label_444cd8;
        case 0x444cdcu: goto label_444cdc;
        case 0x444ce0u: goto label_444ce0;
        case 0x444ce4u: goto label_444ce4;
        case 0x444ce8u: goto label_444ce8;
        case 0x444cecu: goto label_444cec;
        case 0x444cf0u: goto label_444cf0;
        case 0x444cf4u: goto label_444cf4;
        case 0x444cf8u: goto label_444cf8;
        case 0x444cfcu: goto label_444cfc;
        case 0x444d00u: goto label_444d00;
        case 0x444d04u: goto label_444d04;
        case 0x444d08u: goto label_444d08;
        case 0x444d0cu: goto label_444d0c;
        case 0x444d10u: goto label_444d10;
        case 0x444d14u: goto label_444d14;
        case 0x444d18u: goto label_444d18;
        case 0x444d1cu: goto label_444d1c;
        case 0x444d20u: goto label_444d20;
        case 0x444d24u: goto label_444d24;
        case 0x444d28u: goto label_444d28;
        case 0x444d2cu: goto label_444d2c;
        case 0x444d30u: goto label_444d30;
        case 0x444d34u: goto label_444d34;
        case 0x444d38u: goto label_444d38;
        case 0x444d3cu: goto label_444d3c;
        case 0x444d40u: goto label_444d40;
        case 0x444d44u: goto label_444d44;
        case 0x444d48u: goto label_444d48;
        case 0x444d4cu: goto label_444d4c;
        case 0x444d50u: goto label_444d50;
        case 0x444d54u: goto label_444d54;
        case 0x444d58u: goto label_444d58;
        case 0x444d5cu: goto label_444d5c;
        case 0x444d60u: goto label_444d60;
        case 0x444d64u: goto label_444d64;
        case 0x444d68u: goto label_444d68;
        case 0x444d6cu: goto label_444d6c;
        case 0x444d70u: goto label_444d70;
        case 0x444d74u: goto label_444d74;
        case 0x444d78u: goto label_444d78;
        case 0x444d7cu: goto label_444d7c;
        case 0x444d80u: goto label_444d80;
        case 0x444d84u: goto label_444d84;
        case 0x444d88u: goto label_444d88;
        case 0x444d8cu: goto label_444d8c;
        case 0x444d90u: goto label_444d90;
        case 0x444d94u: goto label_444d94;
        case 0x444d98u: goto label_444d98;
        case 0x444d9cu: goto label_444d9c;
        case 0x444da0u: goto label_444da0;
        case 0x444da4u: goto label_444da4;
        case 0x444da8u: goto label_444da8;
        case 0x444dacu: goto label_444dac;
        case 0x444db0u: goto label_444db0;
        case 0x444db4u: goto label_444db4;
        case 0x444db8u: goto label_444db8;
        case 0x444dbcu: goto label_444dbc;
        case 0x444dc0u: goto label_444dc0;
        case 0x444dc4u: goto label_444dc4;
        case 0x444dc8u: goto label_444dc8;
        case 0x444dccu: goto label_444dcc;
        case 0x444dd0u: goto label_444dd0;
        case 0x444dd4u: goto label_444dd4;
        case 0x444dd8u: goto label_444dd8;
        case 0x444ddcu: goto label_444ddc;
        case 0x444de0u: goto label_444de0;
        case 0x444de4u: goto label_444de4;
        case 0x444de8u: goto label_444de8;
        case 0x444decu: goto label_444dec;
        case 0x444df0u: goto label_444df0;
        case 0x444df4u: goto label_444df4;
        case 0x444df8u: goto label_444df8;
        case 0x444dfcu: goto label_444dfc;
        case 0x444e00u: goto label_444e00;
        case 0x444e04u: goto label_444e04;
        case 0x444e08u: goto label_444e08;
        case 0x444e0cu: goto label_444e0c;
        case 0x444e10u: goto label_444e10;
        case 0x444e14u: goto label_444e14;
        case 0x444e18u: goto label_444e18;
        case 0x444e1cu: goto label_444e1c;
        case 0x444e20u: goto label_444e20;
        case 0x444e24u: goto label_444e24;
        case 0x444e28u: goto label_444e28;
        case 0x444e2cu: goto label_444e2c;
        case 0x444e30u: goto label_444e30;
        case 0x444e34u: goto label_444e34;
        case 0x444e38u: goto label_444e38;
        case 0x444e3cu: goto label_444e3c;
        case 0x444e40u: goto label_444e40;
        case 0x444e44u: goto label_444e44;
        case 0x444e48u: goto label_444e48;
        case 0x444e4cu: goto label_444e4c;
        case 0x444e50u: goto label_444e50;
        case 0x444e54u: goto label_444e54;
        case 0x444e58u: goto label_444e58;
        case 0x444e5cu: goto label_444e5c;
        case 0x444e60u: goto label_444e60;
        case 0x444e64u: goto label_444e64;
        case 0x444e68u: goto label_444e68;
        case 0x444e6cu: goto label_444e6c;
        case 0x444e70u: goto label_444e70;
        case 0x444e74u: goto label_444e74;
        case 0x444e78u: goto label_444e78;
        case 0x444e7cu: goto label_444e7c;
        case 0x444e80u: goto label_444e80;
        case 0x444e84u: goto label_444e84;
        case 0x444e88u: goto label_444e88;
        case 0x444e8cu: goto label_444e8c;
        case 0x444e90u: goto label_444e90;
        case 0x444e94u: goto label_444e94;
        case 0x444e98u: goto label_444e98;
        case 0x444e9cu: goto label_444e9c;
        case 0x444ea0u: goto label_444ea0;
        case 0x444ea4u: goto label_444ea4;
        case 0x444ea8u: goto label_444ea8;
        case 0x444eacu: goto label_444eac;
        case 0x444eb0u: goto label_444eb0;
        case 0x444eb4u: goto label_444eb4;
        case 0x444eb8u: goto label_444eb8;
        case 0x444ebcu: goto label_444ebc;
        case 0x444ec0u: goto label_444ec0;
        case 0x444ec4u: goto label_444ec4;
        case 0x444ec8u: goto label_444ec8;
        case 0x444eccu: goto label_444ecc;
        case 0x444ed0u: goto label_444ed0;
        case 0x444ed4u: goto label_444ed4;
        case 0x444ed8u: goto label_444ed8;
        case 0x444edcu: goto label_444edc;
        case 0x444ee0u: goto label_444ee0;
        case 0x444ee4u: goto label_444ee4;
        case 0x444ee8u: goto label_444ee8;
        case 0x444eecu: goto label_444eec;
        case 0x444ef0u: goto label_444ef0;
        case 0x444ef4u: goto label_444ef4;
        case 0x444ef8u: goto label_444ef8;
        case 0x444efcu: goto label_444efc;
        case 0x444f00u: goto label_444f00;
        case 0x444f04u: goto label_444f04;
        case 0x444f08u: goto label_444f08;
        case 0x444f0cu: goto label_444f0c;
        case 0x444f10u: goto label_444f10;
        case 0x444f14u: goto label_444f14;
        case 0x444f18u: goto label_444f18;
        case 0x444f1cu: goto label_444f1c;
        case 0x444f20u: goto label_444f20;
        case 0x444f24u: goto label_444f24;
        case 0x444f28u: goto label_444f28;
        case 0x444f2cu: goto label_444f2c;
        case 0x444f30u: goto label_444f30;
        case 0x444f34u: goto label_444f34;
        case 0x444f38u: goto label_444f38;
        case 0x444f3cu: goto label_444f3c;
        case 0x444f40u: goto label_444f40;
        case 0x444f44u: goto label_444f44;
        case 0x444f48u: goto label_444f48;
        case 0x444f4cu: goto label_444f4c;
        case 0x444f50u: goto label_444f50;
        case 0x444f54u: goto label_444f54;
        case 0x444f58u: goto label_444f58;
        case 0x444f5cu: goto label_444f5c;
        case 0x444f60u: goto label_444f60;
        case 0x444f64u: goto label_444f64;
        case 0x444f68u: goto label_444f68;
        case 0x444f6cu: goto label_444f6c;
        case 0x444f70u: goto label_444f70;
        case 0x444f74u: goto label_444f74;
        case 0x444f78u: goto label_444f78;
        case 0x444f7cu: goto label_444f7c;
        case 0x444f80u: goto label_444f80;
        case 0x444f84u: goto label_444f84;
        case 0x444f88u: goto label_444f88;
        case 0x444f8cu: goto label_444f8c;
        case 0x444f90u: goto label_444f90;
        case 0x444f94u: goto label_444f94;
        case 0x444f98u: goto label_444f98;
        case 0x444f9cu: goto label_444f9c;
        case 0x444fa0u: goto label_444fa0;
        case 0x444fa4u: goto label_444fa4;
        case 0x444fa8u: goto label_444fa8;
        case 0x444facu: goto label_444fac;
        case 0x444fb0u: goto label_444fb0;
        case 0x444fb4u: goto label_444fb4;
        case 0x444fb8u: goto label_444fb8;
        case 0x444fbcu: goto label_444fbc;
        case 0x444fc0u: goto label_444fc0;
        case 0x444fc4u: goto label_444fc4;
        case 0x444fc8u: goto label_444fc8;
        case 0x444fccu: goto label_444fcc;
        case 0x444fd0u: goto label_444fd0;
        case 0x444fd4u: goto label_444fd4;
        case 0x444fd8u: goto label_444fd8;
        case 0x444fdcu: goto label_444fdc;
        case 0x444fe0u: goto label_444fe0;
        case 0x444fe4u: goto label_444fe4;
        case 0x444fe8u: goto label_444fe8;
        case 0x444fecu: goto label_444fec;
        case 0x444ff0u: goto label_444ff0;
        case 0x444ff4u: goto label_444ff4;
        case 0x444ff8u: goto label_444ff8;
        case 0x444ffcu: goto label_444ffc;
        case 0x445000u: goto label_445000;
        case 0x445004u: goto label_445004;
        case 0x445008u: goto label_445008;
        case 0x44500cu: goto label_44500c;
        case 0x445010u: goto label_445010;
        case 0x445014u: goto label_445014;
        case 0x445018u: goto label_445018;
        case 0x44501cu: goto label_44501c;
        case 0x445020u: goto label_445020;
        case 0x445024u: goto label_445024;
        case 0x445028u: goto label_445028;
        case 0x44502cu: goto label_44502c;
        case 0x445030u: goto label_445030;
        case 0x445034u: goto label_445034;
        case 0x445038u: goto label_445038;
        case 0x44503cu: goto label_44503c;
        case 0x445040u: goto label_445040;
        case 0x445044u: goto label_445044;
        case 0x445048u: goto label_445048;
        case 0x44504cu: goto label_44504c;
        case 0x445050u: goto label_445050;
        case 0x445054u: goto label_445054;
        case 0x445058u: goto label_445058;
        case 0x44505cu: goto label_44505c;
        case 0x445060u: goto label_445060;
        case 0x445064u: goto label_445064;
        case 0x445068u: goto label_445068;
        case 0x44506cu: goto label_44506c;
        case 0x445070u: goto label_445070;
        case 0x445074u: goto label_445074;
        case 0x445078u: goto label_445078;
        case 0x44507cu: goto label_44507c;
        case 0x445080u: goto label_445080;
        case 0x445084u: goto label_445084;
        case 0x445088u: goto label_445088;
        case 0x44508cu: goto label_44508c;
        case 0x445090u: goto label_445090;
        case 0x445094u: goto label_445094;
        case 0x445098u: goto label_445098;
        case 0x44509cu: goto label_44509c;
        case 0x4450a0u: goto label_4450a0;
        case 0x4450a4u: goto label_4450a4;
        case 0x4450a8u: goto label_4450a8;
        case 0x4450acu: goto label_4450ac;
        case 0x4450b0u: goto label_4450b0;
        case 0x4450b4u: goto label_4450b4;
        case 0x4450b8u: goto label_4450b8;
        case 0x4450bcu: goto label_4450bc;
        case 0x4450c0u: goto label_4450c0;
        case 0x4450c4u: goto label_4450c4;
        case 0x4450c8u: goto label_4450c8;
        case 0x4450ccu: goto label_4450cc;
        case 0x4450d0u: goto label_4450d0;
        case 0x4450d4u: goto label_4450d4;
        case 0x4450d8u: goto label_4450d8;
        case 0x4450dcu: goto label_4450dc;
        case 0x4450e0u: goto label_4450e0;
        case 0x4450e4u: goto label_4450e4;
        case 0x4450e8u: goto label_4450e8;
        case 0x4450ecu: goto label_4450ec;
        case 0x4450f0u: goto label_4450f0;
        case 0x4450f4u: goto label_4450f4;
        case 0x4450f8u: goto label_4450f8;
        case 0x4450fcu: goto label_4450fc;
        case 0x445100u: goto label_445100;
        case 0x445104u: goto label_445104;
        case 0x445108u: goto label_445108;
        case 0x44510cu: goto label_44510c;
        case 0x445110u: goto label_445110;
        case 0x445114u: goto label_445114;
        case 0x445118u: goto label_445118;
        case 0x44511cu: goto label_44511c;
        case 0x445120u: goto label_445120;
        case 0x445124u: goto label_445124;
        case 0x445128u: goto label_445128;
        case 0x44512cu: goto label_44512c;
        case 0x445130u: goto label_445130;
        case 0x445134u: goto label_445134;
        case 0x445138u: goto label_445138;
        case 0x44513cu: goto label_44513c;
        case 0x445140u: goto label_445140;
        case 0x445144u: goto label_445144;
        case 0x445148u: goto label_445148;
        case 0x44514cu: goto label_44514c;
        case 0x445150u: goto label_445150;
        case 0x445154u: goto label_445154;
        case 0x445158u: goto label_445158;
        case 0x44515cu: goto label_44515c;
        case 0x445160u: goto label_445160;
        case 0x445164u: goto label_445164;
        case 0x445168u: goto label_445168;
        case 0x44516cu: goto label_44516c;
        case 0x445170u: goto label_445170;
        case 0x445174u: goto label_445174;
        case 0x445178u: goto label_445178;
        case 0x44517cu: goto label_44517c;
        case 0x445180u: goto label_445180;
        case 0x445184u: goto label_445184;
        case 0x445188u: goto label_445188;
        case 0x44518cu: goto label_44518c;
        case 0x445190u: goto label_445190;
        case 0x445194u: goto label_445194;
        case 0x445198u: goto label_445198;
        case 0x44519cu: goto label_44519c;
        case 0x4451a0u: goto label_4451a0;
        case 0x4451a4u: goto label_4451a4;
        case 0x4451a8u: goto label_4451a8;
        case 0x4451acu: goto label_4451ac;
        case 0x4451b0u: goto label_4451b0;
        case 0x4451b4u: goto label_4451b4;
        case 0x4451b8u: goto label_4451b8;
        case 0x4451bcu: goto label_4451bc;
        case 0x4451c0u: goto label_4451c0;
        case 0x4451c4u: goto label_4451c4;
        case 0x4451c8u: goto label_4451c8;
        case 0x4451ccu: goto label_4451cc;
        case 0x4451d0u: goto label_4451d0;
        case 0x4451d4u: goto label_4451d4;
        case 0x4451d8u: goto label_4451d8;
        case 0x4451dcu: goto label_4451dc;
        case 0x4451e0u: goto label_4451e0;
        case 0x4451e4u: goto label_4451e4;
        case 0x4451e8u: goto label_4451e8;
        case 0x4451ecu: goto label_4451ec;
        case 0x4451f0u: goto label_4451f0;
        case 0x4451f4u: goto label_4451f4;
        case 0x4451f8u: goto label_4451f8;
        case 0x4451fcu: goto label_4451fc;
        case 0x445200u: goto label_445200;
        case 0x445204u: goto label_445204;
        case 0x445208u: goto label_445208;
        case 0x44520cu: goto label_44520c;
        case 0x445210u: goto label_445210;
        case 0x445214u: goto label_445214;
        case 0x445218u: goto label_445218;
        case 0x44521cu: goto label_44521c;
        case 0x445220u: goto label_445220;
        case 0x445224u: goto label_445224;
        case 0x445228u: goto label_445228;
        case 0x44522cu: goto label_44522c;
        case 0x445230u: goto label_445230;
        case 0x445234u: goto label_445234;
        case 0x445238u: goto label_445238;
        case 0x44523cu: goto label_44523c;
        case 0x445240u: goto label_445240;
        case 0x445244u: goto label_445244;
        case 0x445248u: goto label_445248;
        case 0x44524cu: goto label_44524c;
        case 0x445250u: goto label_445250;
        case 0x445254u: goto label_445254;
        case 0x445258u: goto label_445258;
        case 0x44525cu: goto label_44525c;
        case 0x445260u: goto label_445260;
        case 0x445264u: goto label_445264;
        case 0x445268u: goto label_445268;
        case 0x44526cu: goto label_44526c;
        case 0x445270u: goto label_445270;
        case 0x445274u: goto label_445274;
        case 0x445278u: goto label_445278;
        case 0x44527cu: goto label_44527c;
        case 0x445280u: goto label_445280;
        case 0x445284u: goto label_445284;
        case 0x445288u: goto label_445288;
        case 0x44528cu: goto label_44528c;
        case 0x445290u: goto label_445290;
        case 0x445294u: goto label_445294;
        case 0x445298u: goto label_445298;
        case 0x44529cu: goto label_44529c;
        case 0x4452a0u: goto label_4452a0;
        case 0x4452a4u: goto label_4452a4;
        case 0x4452a8u: goto label_4452a8;
        case 0x4452acu: goto label_4452ac;
        case 0x4452b0u: goto label_4452b0;
        case 0x4452b4u: goto label_4452b4;
        case 0x4452b8u: goto label_4452b8;
        case 0x4452bcu: goto label_4452bc;
        case 0x4452c0u: goto label_4452c0;
        case 0x4452c4u: goto label_4452c4;
        case 0x4452c8u: goto label_4452c8;
        case 0x4452ccu: goto label_4452cc;
        case 0x4452d0u: goto label_4452d0;
        case 0x4452d4u: goto label_4452d4;
        case 0x4452d8u: goto label_4452d8;
        case 0x4452dcu: goto label_4452dc;
        case 0x4452e0u: goto label_4452e0;
        case 0x4452e4u: goto label_4452e4;
        case 0x4452e8u: goto label_4452e8;
        case 0x4452ecu: goto label_4452ec;
        case 0x4452f0u: goto label_4452f0;
        case 0x4452f4u: goto label_4452f4;
        case 0x4452f8u: goto label_4452f8;
        case 0x4452fcu: goto label_4452fc;
        case 0x445300u: goto label_445300;
        case 0x445304u: goto label_445304;
        case 0x445308u: goto label_445308;
        case 0x44530cu: goto label_44530c;
        case 0x445310u: goto label_445310;
        case 0x445314u: goto label_445314;
        case 0x445318u: goto label_445318;
        case 0x44531cu: goto label_44531c;
        case 0x445320u: goto label_445320;
        case 0x445324u: goto label_445324;
        case 0x445328u: goto label_445328;
        case 0x44532cu: goto label_44532c;
        case 0x445330u: goto label_445330;
        case 0x445334u: goto label_445334;
        case 0x445338u: goto label_445338;
        case 0x44533cu: goto label_44533c;
        case 0x445340u: goto label_445340;
        case 0x445344u: goto label_445344;
        case 0x445348u: goto label_445348;
        case 0x44534cu: goto label_44534c;
        case 0x445350u: goto label_445350;
        case 0x445354u: goto label_445354;
        case 0x445358u: goto label_445358;
        case 0x44535cu: goto label_44535c;
        case 0x445360u: goto label_445360;
        case 0x445364u: goto label_445364;
        case 0x445368u: goto label_445368;
        case 0x44536cu: goto label_44536c;
        case 0x445370u: goto label_445370;
        case 0x445374u: goto label_445374;
        case 0x445378u: goto label_445378;
        case 0x44537cu: goto label_44537c;
        case 0x445380u: goto label_445380;
        case 0x445384u: goto label_445384;
        case 0x445388u: goto label_445388;
        case 0x44538cu: goto label_44538c;
        case 0x445390u: goto label_445390;
        case 0x445394u: goto label_445394;
        case 0x445398u: goto label_445398;
        case 0x44539cu: goto label_44539c;
        case 0x4453a0u: goto label_4453a0;
        case 0x4453a4u: goto label_4453a4;
        case 0x4453a8u: goto label_4453a8;
        case 0x4453acu: goto label_4453ac;
        case 0x4453b0u: goto label_4453b0;
        case 0x4453b4u: goto label_4453b4;
        case 0x4453b8u: goto label_4453b8;
        case 0x4453bcu: goto label_4453bc;
        case 0x4453c0u: goto label_4453c0;
        case 0x4453c4u: goto label_4453c4;
        case 0x4453c8u: goto label_4453c8;
        case 0x4453ccu: goto label_4453cc;
        case 0x4453d0u: goto label_4453d0;
        case 0x4453d4u: goto label_4453d4;
        case 0x4453d8u: goto label_4453d8;
        case 0x4453dcu: goto label_4453dc;
        case 0x4453e0u: goto label_4453e0;
        case 0x4453e4u: goto label_4453e4;
        case 0x4453e8u: goto label_4453e8;
        case 0x4453ecu: goto label_4453ec;
        case 0x4453f0u: goto label_4453f0;
        case 0x4453f4u: goto label_4453f4;
        case 0x4453f8u: goto label_4453f8;
        case 0x4453fcu: goto label_4453fc;
        case 0x445400u: goto label_445400;
        case 0x445404u: goto label_445404;
        case 0x445408u: goto label_445408;
        case 0x44540cu: goto label_44540c;
        case 0x445410u: goto label_445410;
        case 0x445414u: goto label_445414;
        case 0x445418u: goto label_445418;
        case 0x44541cu: goto label_44541c;
        case 0x445420u: goto label_445420;
        case 0x445424u: goto label_445424;
        case 0x445428u: goto label_445428;
        case 0x44542cu: goto label_44542c;
        case 0x445430u: goto label_445430;
        case 0x445434u: goto label_445434;
        case 0x445438u: goto label_445438;
        case 0x44543cu: goto label_44543c;
        case 0x445440u: goto label_445440;
        case 0x445444u: goto label_445444;
        case 0x445448u: goto label_445448;
        case 0x44544cu: goto label_44544c;
        case 0x445450u: goto label_445450;
        case 0x445454u: goto label_445454;
        case 0x445458u: goto label_445458;
        case 0x44545cu: goto label_44545c;
        case 0x445460u: goto label_445460;
        case 0x445464u: goto label_445464;
        case 0x445468u: goto label_445468;
        case 0x44546cu: goto label_44546c;
        case 0x445470u: goto label_445470;
        case 0x445474u: goto label_445474;
        case 0x445478u: goto label_445478;
        case 0x44547cu: goto label_44547c;
        case 0x445480u: goto label_445480;
        case 0x445484u: goto label_445484;
        case 0x445488u: goto label_445488;
        case 0x44548cu: goto label_44548c;
        case 0x445490u: goto label_445490;
        case 0x445494u: goto label_445494;
        case 0x445498u: goto label_445498;
        case 0x44549cu: goto label_44549c;
        case 0x4454a0u: goto label_4454a0;
        case 0x4454a4u: goto label_4454a4;
        case 0x4454a8u: goto label_4454a8;
        case 0x4454acu: goto label_4454ac;
        case 0x4454b0u: goto label_4454b0;
        case 0x4454b4u: goto label_4454b4;
        case 0x4454b8u: goto label_4454b8;
        case 0x4454bcu: goto label_4454bc;
        case 0x4454c0u: goto label_4454c0;
        case 0x4454c4u: goto label_4454c4;
        case 0x4454c8u: goto label_4454c8;
        case 0x4454ccu: goto label_4454cc;
        case 0x4454d0u: goto label_4454d0;
        case 0x4454d4u: goto label_4454d4;
        case 0x4454d8u: goto label_4454d8;
        case 0x4454dcu: goto label_4454dc;
        case 0x4454e0u: goto label_4454e0;
        case 0x4454e4u: goto label_4454e4;
        case 0x4454e8u: goto label_4454e8;
        case 0x4454ecu: goto label_4454ec;
        case 0x4454f0u: goto label_4454f0;
        case 0x4454f4u: goto label_4454f4;
        case 0x4454f8u: goto label_4454f8;
        case 0x4454fcu: goto label_4454fc;
        case 0x445500u: goto label_445500;
        case 0x445504u: goto label_445504;
        case 0x445508u: goto label_445508;
        case 0x44550cu: goto label_44550c;
        case 0x445510u: goto label_445510;
        case 0x445514u: goto label_445514;
        case 0x445518u: goto label_445518;
        case 0x44551cu: goto label_44551c;
        case 0x445520u: goto label_445520;
        case 0x445524u: goto label_445524;
        case 0x445528u: goto label_445528;
        case 0x44552cu: goto label_44552c;
        case 0x445530u: goto label_445530;
        case 0x445534u: goto label_445534;
        case 0x445538u: goto label_445538;
        case 0x44553cu: goto label_44553c;
        case 0x445540u: goto label_445540;
        case 0x445544u: goto label_445544;
        case 0x445548u: goto label_445548;
        case 0x44554cu: goto label_44554c;
        case 0x445550u: goto label_445550;
        case 0x445554u: goto label_445554;
        case 0x445558u: goto label_445558;
        case 0x44555cu: goto label_44555c;
        case 0x445560u: goto label_445560;
        case 0x445564u: goto label_445564;
        case 0x445568u: goto label_445568;
        case 0x44556cu: goto label_44556c;
        case 0x445570u: goto label_445570;
        case 0x445574u: goto label_445574;
        case 0x445578u: goto label_445578;
        case 0x44557cu: goto label_44557c;
        case 0x445580u: goto label_445580;
        case 0x445584u: goto label_445584;
        case 0x445588u: goto label_445588;
        case 0x44558cu: goto label_44558c;
        case 0x445590u: goto label_445590;
        case 0x445594u: goto label_445594;
        case 0x445598u: goto label_445598;
        case 0x44559cu: goto label_44559c;
        case 0x4455a0u: goto label_4455a0;
        case 0x4455a4u: goto label_4455a4;
        case 0x4455a8u: goto label_4455a8;
        case 0x4455acu: goto label_4455ac;
        case 0x4455b0u: goto label_4455b0;
        case 0x4455b4u: goto label_4455b4;
        case 0x4455b8u: goto label_4455b8;
        case 0x4455bcu: goto label_4455bc;
        case 0x4455c0u: goto label_4455c0;
        case 0x4455c4u: goto label_4455c4;
        case 0x4455c8u: goto label_4455c8;
        case 0x4455ccu: goto label_4455cc;
        case 0x4455d0u: goto label_4455d0;
        case 0x4455d4u: goto label_4455d4;
        case 0x4455d8u: goto label_4455d8;
        case 0x4455dcu: goto label_4455dc;
        case 0x4455e0u: goto label_4455e0;
        case 0x4455e4u: goto label_4455e4;
        case 0x4455e8u: goto label_4455e8;
        case 0x4455ecu: goto label_4455ec;
        case 0x4455f0u: goto label_4455f0;
        case 0x4455f4u: goto label_4455f4;
        case 0x4455f8u: goto label_4455f8;
        case 0x4455fcu: goto label_4455fc;
        case 0x445600u: goto label_445600;
        case 0x445604u: goto label_445604;
        case 0x445608u: goto label_445608;
        case 0x44560cu: goto label_44560c;
        case 0x445610u: goto label_445610;
        case 0x445614u: goto label_445614;
        case 0x445618u: goto label_445618;
        case 0x44561cu: goto label_44561c;
        case 0x445620u: goto label_445620;
        case 0x445624u: goto label_445624;
        case 0x445628u: goto label_445628;
        case 0x44562cu: goto label_44562c;
        case 0x445630u: goto label_445630;
        case 0x445634u: goto label_445634;
        case 0x445638u: goto label_445638;
        case 0x44563cu: goto label_44563c;
        case 0x445640u: goto label_445640;
        case 0x445644u: goto label_445644;
        case 0x445648u: goto label_445648;
        case 0x44564cu: goto label_44564c;
        case 0x445650u: goto label_445650;
        case 0x445654u: goto label_445654;
        case 0x445658u: goto label_445658;
        case 0x44565cu: goto label_44565c;
        case 0x445660u: goto label_445660;
        case 0x445664u: goto label_445664;
        case 0x445668u: goto label_445668;
        case 0x44566cu: goto label_44566c;
        case 0x445670u: goto label_445670;
        case 0x445674u: goto label_445674;
        case 0x445678u: goto label_445678;
        case 0x44567cu: goto label_44567c;
        case 0x445680u: goto label_445680;
        case 0x445684u: goto label_445684;
        case 0x445688u: goto label_445688;
        case 0x44568cu: goto label_44568c;
        case 0x445690u: goto label_445690;
        case 0x445694u: goto label_445694;
        case 0x445698u: goto label_445698;
        case 0x44569cu: goto label_44569c;
        case 0x4456a0u: goto label_4456a0;
        case 0x4456a4u: goto label_4456a4;
        case 0x4456a8u: goto label_4456a8;
        case 0x4456acu: goto label_4456ac;
        case 0x4456b0u: goto label_4456b0;
        case 0x4456b4u: goto label_4456b4;
        case 0x4456b8u: goto label_4456b8;
        case 0x4456bcu: goto label_4456bc;
        case 0x4456c0u: goto label_4456c0;
        case 0x4456c4u: goto label_4456c4;
        case 0x4456c8u: goto label_4456c8;
        case 0x4456ccu: goto label_4456cc;
        case 0x4456d0u: goto label_4456d0;
        case 0x4456d4u: goto label_4456d4;
        case 0x4456d8u: goto label_4456d8;
        case 0x4456dcu: goto label_4456dc;
        case 0x4456e0u: goto label_4456e0;
        case 0x4456e4u: goto label_4456e4;
        case 0x4456e8u: goto label_4456e8;
        case 0x4456ecu: goto label_4456ec;
        case 0x4456f0u: goto label_4456f0;
        case 0x4456f4u: goto label_4456f4;
        case 0x4456f8u: goto label_4456f8;
        case 0x4456fcu: goto label_4456fc;
        case 0x445700u: goto label_445700;
        case 0x445704u: goto label_445704;
        case 0x445708u: goto label_445708;
        case 0x44570cu: goto label_44570c;
        case 0x445710u: goto label_445710;
        case 0x445714u: goto label_445714;
        case 0x445718u: goto label_445718;
        case 0x44571cu: goto label_44571c;
        case 0x445720u: goto label_445720;
        case 0x445724u: goto label_445724;
        case 0x445728u: goto label_445728;
        case 0x44572cu: goto label_44572c;
        case 0x445730u: goto label_445730;
        case 0x445734u: goto label_445734;
        case 0x445738u: goto label_445738;
        case 0x44573cu: goto label_44573c;
        case 0x445740u: goto label_445740;
        case 0x445744u: goto label_445744;
        case 0x445748u: goto label_445748;
        case 0x44574cu: goto label_44574c;
        case 0x445750u: goto label_445750;
        case 0x445754u: goto label_445754;
        case 0x445758u: goto label_445758;
        case 0x44575cu: goto label_44575c;
        case 0x445760u: goto label_445760;
        case 0x445764u: goto label_445764;
        case 0x445768u: goto label_445768;
        case 0x44576cu: goto label_44576c;
        case 0x445770u: goto label_445770;
        case 0x445774u: goto label_445774;
        case 0x445778u: goto label_445778;
        case 0x44577cu: goto label_44577c;
        case 0x445780u: goto label_445780;
        case 0x445784u: goto label_445784;
        case 0x445788u: goto label_445788;
        case 0x44578cu: goto label_44578c;
        case 0x445790u: goto label_445790;
        case 0x445794u: goto label_445794;
        case 0x445798u: goto label_445798;
        case 0x44579cu: goto label_44579c;
        case 0x4457a0u: goto label_4457a0;
        case 0x4457a4u: goto label_4457a4;
        case 0x4457a8u: goto label_4457a8;
        case 0x4457acu: goto label_4457ac;
        case 0x4457b0u: goto label_4457b0;
        case 0x4457b4u: goto label_4457b4;
        case 0x4457b8u: goto label_4457b8;
        case 0x4457bcu: goto label_4457bc;
        case 0x4457c0u: goto label_4457c0;
        case 0x4457c4u: goto label_4457c4;
        case 0x4457c8u: goto label_4457c8;
        case 0x4457ccu: goto label_4457cc;
        case 0x4457d0u: goto label_4457d0;
        case 0x4457d4u: goto label_4457d4;
        case 0x4457d8u: goto label_4457d8;
        case 0x4457dcu: goto label_4457dc;
        case 0x4457e0u: goto label_4457e0;
        case 0x4457e4u: goto label_4457e4;
        case 0x4457e8u: goto label_4457e8;
        case 0x4457ecu: goto label_4457ec;
        case 0x4457f0u: goto label_4457f0;
        case 0x4457f4u: goto label_4457f4;
        case 0x4457f8u: goto label_4457f8;
        case 0x4457fcu: goto label_4457fc;
        case 0x445800u: goto label_445800;
        case 0x445804u: goto label_445804;
        case 0x445808u: goto label_445808;
        case 0x44580cu: goto label_44580c;
        case 0x445810u: goto label_445810;
        case 0x445814u: goto label_445814;
        case 0x445818u: goto label_445818;
        case 0x44581cu: goto label_44581c;
        case 0x445820u: goto label_445820;
        case 0x445824u: goto label_445824;
        case 0x445828u: goto label_445828;
        case 0x44582cu: goto label_44582c;
        case 0x445830u: goto label_445830;
        case 0x445834u: goto label_445834;
        case 0x445838u: goto label_445838;
        case 0x44583cu: goto label_44583c;
        case 0x445840u: goto label_445840;
        case 0x445844u: goto label_445844;
        case 0x445848u: goto label_445848;
        case 0x44584cu: goto label_44584c;
        case 0x445850u: goto label_445850;
        case 0x445854u: goto label_445854;
        case 0x445858u: goto label_445858;
        case 0x44585cu: goto label_44585c;
        case 0x445860u: goto label_445860;
        case 0x445864u: goto label_445864;
        case 0x445868u: goto label_445868;
        case 0x44586cu: goto label_44586c;
        case 0x445870u: goto label_445870;
        case 0x445874u: goto label_445874;
        case 0x445878u: goto label_445878;
        case 0x44587cu: goto label_44587c;
        case 0x445880u: goto label_445880;
        case 0x445884u: goto label_445884;
        case 0x445888u: goto label_445888;
        case 0x44588cu: goto label_44588c;
        case 0x445890u: goto label_445890;
        case 0x445894u: goto label_445894;
        case 0x445898u: goto label_445898;
        case 0x44589cu: goto label_44589c;
        case 0x4458a0u: goto label_4458a0;
        case 0x4458a4u: goto label_4458a4;
        case 0x4458a8u: goto label_4458a8;
        case 0x4458acu: goto label_4458ac;
        case 0x4458b0u: goto label_4458b0;
        case 0x4458b4u: goto label_4458b4;
        case 0x4458b8u: goto label_4458b8;
        case 0x4458bcu: goto label_4458bc;
        case 0x4458c0u: goto label_4458c0;
        case 0x4458c4u: goto label_4458c4;
        case 0x4458c8u: goto label_4458c8;
        case 0x4458ccu: goto label_4458cc;
        case 0x4458d0u: goto label_4458d0;
        case 0x4458d4u: goto label_4458d4;
        case 0x4458d8u: goto label_4458d8;
        case 0x4458dcu: goto label_4458dc;
        default: break;
    }

    ctx->pc = 0x444c90u;

label_444c90:
    // 0x444c90: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x444c90u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_444c94:
    // 0x444c94: 0x248b02b0  addiu       $t3, $a0, 0x2B0
    ctx->pc = 0x444c94u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 688));
label_444c98:
    // 0x444c98: 0x3c0a3f80  lui         $t2, 0x3F80
    ctx->pc = 0x444c98u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16256 << 16));
label_444c9c:
    // 0x444c9c: 0x8c8802f0  lw          $t0, 0x2F0($a0)
    ctx->pc = 0x444c9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 752)));
label_444ca0:
    // 0x444ca0: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x444ca0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_444ca4:
    // 0x444ca4: 0x29830002  slti        $v1, $t4, 0x2
    ctx->pc = 0x444ca4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)2) ? 1 : 0);
label_444ca8:
    // 0x444ca8: 0xad050080  sw          $a1, 0x80($t0)
    ctx->pc = 0x444ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 128), GPR_U32(ctx, 5));
label_444cac:
    // 0x444cac: 0xad060084  sw          $a2, 0x84($t0)
    ctx->pc = 0x444cacu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 132), GPR_U32(ctx, 6));
label_444cb0:
    // 0x444cb0: 0xad0b0088  sw          $t3, 0x88($t0)
    ctx->pc = 0x444cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 136), GPR_U32(ctx, 11));
label_444cb4:
    // 0x444cb4: 0xad07008c  sw          $a3, 0x8C($t0)
    ctx->pc = 0x444cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 140), GPR_U32(ctx, 7));
label_444cb8:
    // 0x444cb8: 0xad0a0090  sw          $t2, 0x90($t0)
    ctx->pc = 0x444cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 144), GPR_U32(ctx, 10));
label_444cbc:
    // 0x444cbc: 0x8c8902f0  lw          $t1, 0x2F0($a0)
    ctx->pc = 0x444cbcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 752)));
label_444cc0:
    // 0x444cc0: 0x95280064  lhu         $t0, 0x64($t1)
    ctx->pc = 0x444cc0u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 100)));
label_444cc4:
    // 0x444cc4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x444cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_444cc8:
    // 0x444cc8: 0x35080100  ori         $t0, $t0, 0x100
    ctx->pc = 0x444cc8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)256);
label_444ccc:
    // 0x444ccc: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_444cd0:
    if (ctx->pc == 0x444CD0u) {
        ctx->pc = 0x444CD0u;
            // 0x444cd0: 0xa5280064  sh          $t0, 0x64($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 100), (uint16_t)GPR_U32(ctx, 8));
        ctx->pc = 0x444CD4u;
        goto label_444cd4;
    }
    ctx->pc = 0x444CCCu;
    {
        const bool branch_taken_0x444ccc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x444CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x444CCCu;
            // 0x444cd0: 0xa5280064  sh          $t0, 0x64($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 100), (uint16_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444ccc) {
            ctx->pc = 0x444C9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_444c9c;
        }
    }
    ctx->pc = 0x444CD4u;
label_444cd4:
    // 0x444cd4: 0x3e00008  jr          $ra
label_444cd8:
    if (ctx->pc == 0x444CD8u) {
        ctx->pc = 0x444CDCu;
        goto label_444cdc;
    }
    ctx->pc = 0x444CD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x444CDCu;
label_444cdc:
    // 0x444cdc: 0x0  nop
    ctx->pc = 0x444cdcu;
    // NOP
label_444ce0:
    // 0x444ce0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x444ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_444ce4:
    // 0x444ce4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x444ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_444ce8:
    // 0x444ce8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x444ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_444cec:
    // 0x444cec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x444cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_444cf0:
    // 0x444cf0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x444cf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_444cf4:
    // 0x444cf4: 0x12200037  beqz        $s1, . + 4 + (0x37 << 2)
label_444cf8:
    if (ctx->pc == 0x444CF8u) {
        ctx->pc = 0x444CF8u;
            // 0x444cf8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x444CFCu;
        goto label_444cfc;
    }
    ctx->pc = 0x444CF4u;
    {
        const bool branch_taken_0x444cf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x444CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x444CF4u;
            // 0x444cf8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444cf4) {
            ctx->pc = 0x444DD4u;
            goto label_444dd4;
        }
    }
    ctx->pc = 0x444CFCu;
label_444cfc:
    // 0x444cfc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x444cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_444d00:
    // 0x444d00: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x444d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_444d04:
    // 0x444d04: 0x2463d3a0  addiu       $v1, $v1, -0x2C60
    ctx->pc = 0x444d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955936));
label_444d08:
    // 0x444d08: 0x2442d3e0  addiu       $v0, $v0, -0x2C20
    ctx->pc = 0x444d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956000));
label_444d0c:
    // 0x444d0c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x444d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_444d10:
    // 0x444d10: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x444d10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_444d14:
    // 0x444d14: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x444d14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_444d18:
    // 0x444d18: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x444d18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_444d1c:
    // 0x444d1c: 0x320f809  jalr        $t9
label_444d20:
    if (ctx->pc == 0x444D20u) {
        ctx->pc = 0x444D24u;
        goto label_444d24;
    }
    ctx->pc = 0x444D1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x444D24u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x444D24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x444D24u; }
            if (ctx->pc != 0x444D24u) { return; }
        }
        }
    }
    ctx->pc = 0x444D24u;
label_444d24:
    // 0x444d24: 0x262200e0  addiu       $v0, $s1, 0xE0
    ctx->pc = 0x444d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_444d28:
    // 0x444d28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_444d2c:
    if (ctx->pc == 0x444D2Cu) {
        ctx->pc = 0x444D30u;
        goto label_444d30;
    }
    ctx->pc = 0x444D28u;
    {
        const bool branch_taken_0x444d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x444d28) {
            ctx->pc = 0x444D3Cu;
            goto label_444d3c;
        }
    }
    ctx->pc = 0x444D30u;
label_444d30:
    // 0x444d30: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x444d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_444d34:
    // 0x444d34: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x444d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
label_444d38:
    // 0x444d38: 0xae2200e0  sw          $v0, 0xE0($s1)
    ctx->pc = 0x444d38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 2));
label_444d3c:
    // 0x444d3c: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_444d40:
    if (ctx->pc == 0x444D40u) {
        ctx->pc = 0x444D40u;
            // 0x444d40: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x444D44u;
        goto label_444d44;
    }
    ctx->pc = 0x444D3Cu;
    {
        const bool branch_taken_0x444d3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x444d3c) {
            ctx->pc = 0x444D40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x444D3Cu;
            // 0x444d40: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x444DC0u;
            goto label_444dc0;
        }
    }
    ctx->pc = 0x444D44u;
label_444d44:
    // 0x444d44: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x444d44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_444d48:
    // 0x444d48: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x444d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_444d4c:
    // 0x444d4c: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x444d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_444d50:
    // 0x444d50: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x444d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_444d54:
    // 0x444d54: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x444d54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_444d58:
    // 0x444d58: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x444d58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_444d5c:
    // 0x444d5c: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x444d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_444d60:
    // 0x444d60: 0xc0aecc4  jal         func_2BB310
label_444d64:
    if (ctx->pc == 0x444D64u) {
        ctx->pc = 0x444D64u;
            // 0x444d64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x444D68u;
        goto label_444d68;
    }
    ctx->pc = 0x444D60u;
    SET_GPR_U32(ctx, 31, 0x444D68u);
    ctx->pc = 0x444D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444D60u;
            // 0x444d64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444D68u; }
        if (ctx->pc != 0x444D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444D68u; }
        if (ctx->pc != 0x444D68u) { return; }
    }
    ctx->pc = 0x444D68u;
label_444d68:
    // 0x444d68: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x444d68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_444d6c:
    // 0x444d6c: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x444d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_444d70:
    // 0x444d70: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_444d74:
    if (ctx->pc == 0x444D74u) {
        ctx->pc = 0x444D74u;
            // 0x444d74: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x444D78u;
        goto label_444d78;
    }
    ctx->pc = 0x444D70u;
    {
        const bool branch_taken_0x444d70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x444d70) {
            ctx->pc = 0x444D74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x444D70u;
            // 0x444d74: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x444D8Cu;
            goto label_444d8c;
        }
    }
    ctx->pc = 0x444D78u;
label_444d78:
    // 0x444d78: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x444d78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_444d7c:
    // 0x444d7c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x444d7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_444d80:
    // 0x444d80: 0x320f809  jalr        $t9
label_444d84:
    if (ctx->pc == 0x444D84u) {
        ctx->pc = 0x444D84u;
            // 0x444d84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x444D88u;
        goto label_444d88;
    }
    ctx->pc = 0x444D80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x444D88u);
        ctx->pc = 0x444D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x444D80u;
            // 0x444d84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x444D88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x444D88u; }
            if (ctx->pc != 0x444D88u) { return; }
        }
        }
    }
    ctx->pc = 0x444D88u;
label_444d88:
    // 0x444d88: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x444d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_444d8c:
    // 0x444d8c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x444d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_444d90:
    // 0x444d90: 0xc0aec9c  jal         func_2BB270
label_444d94:
    if (ctx->pc == 0x444D94u) {
        ctx->pc = 0x444D94u;
            // 0x444d94: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x444D98u;
        goto label_444d98;
    }
    ctx->pc = 0x444D90u;
    SET_GPR_U32(ctx, 31, 0x444D98u);
    ctx->pc = 0x444D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444D90u;
            // 0x444d94: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444D98u; }
        if (ctx->pc != 0x444D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444D98u; }
        if (ctx->pc != 0x444D98u) { return; }
    }
    ctx->pc = 0x444D98u;
label_444d98:
    // 0x444d98: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x444d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_444d9c:
    // 0x444d9c: 0xc0aec88  jal         func_2BB220
label_444da0:
    if (ctx->pc == 0x444DA0u) {
        ctx->pc = 0x444DA0u;
            // 0x444da0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x444DA4u;
        goto label_444da4;
    }
    ctx->pc = 0x444D9Cu;
    SET_GPR_U32(ctx, 31, 0x444DA4u);
    ctx->pc = 0x444DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444D9Cu;
            // 0x444da0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444DA4u; }
        if (ctx->pc != 0x444DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444DA4u; }
        if (ctx->pc != 0x444DA4u) { return; }
    }
    ctx->pc = 0x444DA4u;
label_444da4:
    // 0x444da4: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x444da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_444da8:
    // 0x444da8: 0xc0aec0c  jal         func_2BB030
label_444dac:
    if (ctx->pc == 0x444DACu) {
        ctx->pc = 0x444DACu;
            // 0x444dac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x444DB0u;
        goto label_444db0;
    }
    ctx->pc = 0x444DA8u;
    SET_GPR_U32(ctx, 31, 0x444DB0u);
    ctx->pc = 0x444DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444DA8u;
            // 0x444dac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444DB0u; }
        if (ctx->pc != 0x444DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444DB0u; }
        if (ctx->pc != 0x444DB0u) { return; }
    }
    ctx->pc = 0x444DB0u;
label_444db0:
    // 0x444db0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x444db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_444db4:
    // 0x444db4: 0xc0aeaa8  jal         func_2BAAA0
label_444db8:
    if (ctx->pc == 0x444DB8u) {
        ctx->pc = 0x444DB8u;
            // 0x444db8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x444DBCu;
        goto label_444dbc;
    }
    ctx->pc = 0x444DB4u;
    SET_GPR_U32(ctx, 31, 0x444DBCu);
    ctx->pc = 0x444DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444DB4u;
            // 0x444db8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444DBCu; }
        if (ctx->pc != 0x444DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444DBCu; }
        if (ctx->pc != 0x444DBCu) { return; }
    }
    ctx->pc = 0x444DBCu;
label_444dbc:
    // 0x444dbc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x444dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_444dc0:
    // 0x444dc0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x444dc0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_444dc4:
    // 0x444dc4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_444dc8:
    if (ctx->pc == 0x444DC8u) {
        ctx->pc = 0x444DC8u;
            // 0x444dc8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x444DCCu;
        goto label_444dcc;
    }
    ctx->pc = 0x444DC4u;
    {
        const bool branch_taken_0x444dc4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x444dc4) {
            ctx->pc = 0x444DC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x444DC4u;
            // 0x444dc8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x444DD8u;
            goto label_444dd8;
        }
    }
    ctx->pc = 0x444DCCu;
label_444dcc:
    // 0x444dcc: 0xc0400a8  jal         func_1002A0
label_444dd0:
    if (ctx->pc == 0x444DD0u) {
        ctx->pc = 0x444DD0u;
            // 0x444dd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x444DD4u;
        goto label_444dd4;
    }
    ctx->pc = 0x444DCCu;
    SET_GPR_U32(ctx, 31, 0x444DD4u);
    ctx->pc = 0x444DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444DCCu;
            // 0x444dd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444DD4u; }
        if (ctx->pc != 0x444DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444DD4u; }
        if (ctx->pc != 0x444DD4u) { return; }
    }
    ctx->pc = 0x444DD4u;
label_444dd4:
    // 0x444dd4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x444dd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_444dd8:
    // 0x444dd8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x444dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_444ddc:
    // 0x444ddc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x444ddcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_444de0:
    // 0x444de0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x444de0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_444de4:
    // 0x444de4: 0x3e00008  jr          $ra
label_444de8:
    if (ctx->pc == 0x444DE8u) {
        ctx->pc = 0x444DE8u;
            // 0x444de8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x444DECu;
        goto label_444dec;
    }
    ctx->pc = 0x444DE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x444DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x444DE4u;
            // 0x444de8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x444DECu;
label_444dec:
    // 0x444dec: 0x0  nop
    ctx->pc = 0x444decu;
    // NOP
label_444df0:
    // 0x444df0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x444df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_444df4:
    // 0x444df4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x444df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_444df8:
    // 0x444df8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x444df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_444dfc:
    // 0x444dfc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x444dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_444e00:
    // 0x444e00: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x444e00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_444e04:
    // 0x444e04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x444e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_444e08:
    // 0x444e08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x444e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_444e0c:
    // 0x444e0c: 0xc0aeebc  jal         func_2BBAF0
label_444e10:
    if (ctx->pc == 0x444E10u) {
        ctx->pc = 0x444E10u;
            // 0x444e10: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x444E14u;
        goto label_444e14;
    }
    ctx->pc = 0x444E0Cu;
    SET_GPR_U32(ctx, 31, 0x444E14u);
    ctx->pc = 0x444E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444E0Cu;
            // 0x444e10: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444E14u; }
        if (ctx->pc != 0x444E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444E14u; }
        if (ctx->pc != 0x444E14u) { return; }
    }
    ctx->pc = 0x444E14u;
label_444e14:
    // 0x444e14: 0xc0aeeb4  jal         func_2BBAD0
label_444e18:
    if (ctx->pc == 0x444E18u) {
        ctx->pc = 0x444E18u;
            // 0x444e18: 0x26840050  addiu       $a0, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->pc = 0x444E1Cu;
        goto label_444e1c;
    }
    ctx->pc = 0x444E14u;
    SET_GPR_U32(ctx, 31, 0x444E1Cu);
    ctx->pc = 0x444E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444E14u;
            // 0x444e18: 0x26840050  addiu       $a0, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444E1Cu; }
        if (ctx->pc != 0x444E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444E1Cu; }
        if (ctx->pc != 0x444E1Cu) { return; }
    }
    ctx->pc = 0x444E1Cu;
label_444e1c:
    // 0x444e1c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x444e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_444e20:
    // 0x444e20: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x444e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_444e24:
    // 0x444e24: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x444e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_444e28:
    // 0x444e28: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x444e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_444e2c:
    // 0x444e2c: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x444e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_444e30:
    // 0x444e30: 0x26840058  addiu       $a0, $s4, 0x58
    ctx->pc = 0x444e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 88));
label_444e34:
    // 0x444e34: 0xc0aeea4  jal         func_2BBA90
label_444e38:
    if (ctx->pc == 0x444E38u) {
        ctx->pc = 0x444E38u;
            // 0x444e38: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x444E3Cu;
        goto label_444e3c;
    }
    ctx->pc = 0x444E34u;
    SET_GPR_U32(ctx, 31, 0x444E3Cu);
    ctx->pc = 0x444E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444E34u;
            // 0x444e38: 0xae820054  sw          $v0, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444E3Cu; }
        if (ctx->pc != 0x444E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444E3Cu; }
        if (ctx->pc != 0x444E3Cu) { return; }
    }
    ctx->pc = 0x444E3Cu;
label_444e3c:
    // 0x444e3c: 0xc0aee8c  jal         func_2BBA30
label_444e40:
    if (ctx->pc == 0x444E40u) {
        ctx->pc = 0x444E40u;
            // 0x444e40: 0x2684006c  addiu       $a0, $s4, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
        ctx->pc = 0x444E44u;
        goto label_444e44;
    }
    ctx->pc = 0x444E3Cu;
    SET_GPR_U32(ctx, 31, 0x444E44u);
    ctx->pc = 0x444E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444E3Cu;
            // 0x444e40: 0x2684006c  addiu       $a0, $s4, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444E44u; }
        if (ctx->pc != 0x444E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444E44u; }
        if (ctx->pc != 0x444E44u) { return; }
    }
    ctx->pc = 0x444E44u;
label_444e44:
    // 0x444e44: 0xae80009c  sw          $zero, 0x9C($s4)
    ctx->pc = 0x444e44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 0));
label_444e48:
    // 0x444e48: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x444e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_444e4c:
    // 0x444e4c: 0xae8000a0  sw          $zero, 0xA0($s4)
    ctx->pc = 0x444e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 160), GPR_U32(ctx, 0));
label_444e50:
    // 0x444e50: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x444e50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_444e54:
    // 0x444e54: 0xae8000a4  sw          $zero, 0xA4($s4)
    ctx->pc = 0x444e54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 0));
label_444e58:
    // 0x444e58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x444e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_444e5c:
    // 0x444e5c: 0xae8000a8  sw          $zero, 0xA8($s4)
    ctx->pc = 0x444e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 168), GPR_U32(ctx, 0));
label_444e60:
    // 0x444e60: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x444e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_444e64:
    // 0x444e64: 0xae8000ac  sw          $zero, 0xAC($s4)
    ctx->pc = 0x444e64u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 172), GPR_U32(ctx, 0));
label_444e68:
    // 0x444e68: 0xae8500b0  sw          $a1, 0xB0($s4)
    ctx->pc = 0x444e68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 176), GPR_U32(ctx, 5));
label_444e6c:
    // 0x444e6c: 0xae8000b4  sw          $zero, 0xB4($s4)
    ctx->pc = 0x444e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 180), GPR_U32(ctx, 0));
label_444e70:
    // 0x444e70: 0xae8000b8  sw          $zero, 0xB8($s4)
    ctx->pc = 0x444e70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 184), GPR_U32(ctx, 0));
label_444e74:
    // 0x444e74: 0xae8000c0  sw          $zero, 0xC0($s4)
    ctx->pc = 0x444e74u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 192), GPR_U32(ctx, 0));
label_444e78:
    // 0x444e78: 0xae8400c4  sw          $a0, 0xC4($s4)
    ctx->pc = 0x444e78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 196), GPR_U32(ctx, 4));
label_444e7c:
    // 0x444e7c: 0xae8300c8  sw          $v1, 0xC8($s4)
    ctx->pc = 0x444e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 200), GPR_U32(ctx, 3));
label_444e80:
    // 0x444e80: 0xc0775b8  jal         func_1DD6E0
label_444e84:
    if (ctx->pc == 0x444E84u) {
        ctx->pc = 0x444E84u;
            // 0x444e84: 0xa28200cc  sb          $v0, 0xCC($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x444E88u;
        goto label_444e88;
    }
    ctx->pc = 0x444E80u;
    SET_GPR_U32(ctx, 31, 0x444E88u);
    ctx->pc = 0x444E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444E80u;
            // 0x444e84: 0xa28200cc  sb          $v0, 0xCC($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444E88u; }
        if (ctx->pc != 0x444E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444E88u; }
        if (ctx->pc != 0x444E88u) { return; }
    }
    ctx->pc = 0x444E88u;
label_444e88:
    // 0x444e88: 0xc077314  jal         func_1DCC50
label_444e8c:
    if (ctx->pc == 0x444E8Cu) {
        ctx->pc = 0x444E8Cu;
            // 0x444e8c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x444E90u;
        goto label_444e90;
    }
    ctx->pc = 0x444E88u;
    SET_GPR_U32(ctx, 31, 0x444E90u);
    ctx->pc = 0x444E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444E88u;
            // 0x444e8c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444E90u; }
        if (ctx->pc != 0x444E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444E90u; }
        if (ctx->pc != 0x444E90u) { return; }
    }
    ctx->pc = 0x444E90u;
label_444e90:
    // 0x444e90: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x444e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_444e94:
    // 0x444e94: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x444e94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_444e98:
    // 0x444e98: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x444e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_444e9c:
    // 0x444e9c: 0x269100e0  addiu       $s1, $s4, 0xE0
    ctx->pc = 0x444e9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 224));
label_444ea0:
    // 0x444ea0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x444ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_444ea4:
    // 0x444ea4: 0x8e8400c8  lw          $a0, 0xC8($s4)
    ctx->pc = 0x444ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
label_444ea8:
    // 0x444ea8: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x444ea8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_444eac:
    // 0x444eac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x444eacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_444eb0:
    // 0x444eb0: 0x24a5d3a0  addiu       $a1, $a1, -0x2C60
    ctx->pc = 0x444eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955936));
label_444eb4:
    // 0x444eb4: 0x2463d3e0  addiu       $v1, $v1, -0x2C20
    ctx->pc = 0x444eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956000));
label_444eb8:
    // 0x444eb8: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x444eb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_444ebc:
    // 0x444ebc: 0x863018  mult        $a2, $a0, $a2
    ctx->pc = 0x444ebcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_444ec0:
    // 0x444ec0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x444ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_444ec4:
    // 0x444ec4: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x444ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
label_444ec8:
    // 0x444ec8: 0xae8600c8  sw          $a2, 0xC8($s4)
    ctx->pc = 0x444ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 200), GPR_U32(ctx, 6));
label_444ecc:
    // 0x444ecc: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x444eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_444ed0:
    // 0x444ed0: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x444ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
label_444ed4:
    // 0x444ed4: 0xae830054  sw          $v1, 0x54($s4)
    ctx->pc = 0x444ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 3));
label_444ed8:
    // 0x444ed8: 0xae8200e0  sw          $v0, 0xE0($s4)
    ctx->pc = 0x444ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 224), GPR_U32(ctx, 2));
label_444edc:
    // 0x444edc: 0xae800180  sw          $zero, 0x180($s4)
    ctx->pc = 0x444edcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 384), GPR_U32(ctx, 0));
label_444ee0:
    // 0x444ee0: 0xae800184  sw          $zero, 0x184($s4)
    ctx->pc = 0x444ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 388), GPR_U32(ctx, 0));
label_444ee4:
    // 0x444ee4: 0xc04c968  jal         func_1325A0
label_444ee8:
    if (ctx->pc == 0x444EE8u) {
        ctx->pc = 0x444EE8u;
            // 0x444ee8: 0xa2800188  sb          $zero, 0x188($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 392), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x444EECu;
        goto label_444eec;
    }
    ctx->pc = 0x444EE4u;
    SET_GPR_U32(ctx, 31, 0x444EECu);
    ctx->pc = 0x444EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444EE4u;
            // 0x444ee8: 0xa2800188  sb          $zero, 0x188($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 392), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444EECu; }
        if (ctx->pc != 0x444EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444EECu; }
        if (ctx->pc != 0x444EECu) { return; }
    }
    ctx->pc = 0x444EECu;
label_444eec:
    // 0x444eec: 0xc04c968  jal         func_1325A0
label_444ef0:
    if (ctx->pc == 0x444EF0u) {
        ctx->pc = 0x444EF0u;
            // 0x444ef0: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x444EF4u;
        goto label_444ef4;
    }
    ctx->pc = 0x444EECu;
    SET_GPR_U32(ctx, 31, 0x444EF4u);
    ctx->pc = 0x444EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444EECu;
            // 0x444ef0: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444EF4u; }
        if (ctx->pc != 0x444EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444EF4u; }
        if (ctx->pc != 0x444EF4u) { return; }
    }
    ctx->pc = 0x444EF4u;
label_444ef4:
    // 0x444ef4: 0xc04c968  jal         func_1325A0
label_444ef8:
    if (ctx->pc == 0x444EF8u) {
        ctx->pc = 0x444EF8u;
            // 0x444ef8: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->pc = 0x444EFCu;
        goto label_444efc;
    }
    ctx->pc = 0x444EF4u;
    SET_GPR_U32(ctx, 31, 0x444EFCu);
    ctx->pc = 0x444EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444EF4u;
            // 0x444ef8: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444EFCu; }
        if (ctx->pc != 0x444EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444EFCu; }
        if (ctx->pc != 0x444EFCu) { return; }
    }
    ctx->pc = 0x444EFCu;
label_444efc:
    // 0x444efc: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x444efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_444f00:
    // 0x444f00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x444f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_444f04:
    // 0x444f04: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x444f04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_444f08:
    // 0x444f08: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x444f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_444f0c:
    // 0x444f0c: 0xc04f26c  jal         func_13C9B0
label_444f10:
    if (ctx->pc == 0x444F10u) {
        ctx->pc = 0x444F10u;
            // 0x444f10: 0xae0000a8  sw          $zero, 0xA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
        ctx->pc = 0x444F14u;
        goto label_444f14;
    }
    ctx->pc = 0x444F0Cu;
    SET_GPR_U32(ctx, 31, 0x444F14u);
    ctx->pc = 0x444F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444F0Cu;
            // 0x444f10: 0xae0000a8  sw          $zero, 0xA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444F14u; }
        if (ctx->pc != 0x444F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444F14u; }
        if (ctx->pc != 0x444F14u) { return; }
    }
    ctx->pc = 0x444F14u;
label_444f14:
    // 0x444f14: 0xc04c968  jal         func_1325A0
label_444f18:
    if (ctx->pc == 0x444F18u) {
        ctx->pc = 0x444F18u;
            // 0x444f18: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x444F1Cu;
        goto label_444f1c;
    }
    ctx->pc = 0x444F14u;
    SET_GPR_U32(ctx, 31, 0x444F1Cu);
    ctx->pc = 0x444F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444F14u;
            // 0x444f18: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444F1Cu; }
        if (ctx->pc != 0x444F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444F1Cu; }
        if (ctx->pc != 0x444F1Cu) { return; }
    }
    ctx->pc = 0x444F1Cu;
label_444f1c:
    // 0x444f1c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x444f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_444f20:
    // 0x444f20: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x444f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_444f24:
    // 0x444f24: 0xc04cc04  jal         func_133010
label_444f28:
    if (ctx->pc == 0x444F28u) {
        ctx->pc = 0x444F28u;
            // 0x444f28: 0x24a5d4e0  addiu       $a1, $a1, -0x2B20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956256));
        ctx->pc = 0x444F2Cu;
        goto label_444f2c;
    }
    ctx->pc = 0x444F24u;
    SET_GPR_U32(ctx, 31, 0x444F2Cu);
    ctx->pc = 0x444F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444F24u;
            // 0x444f28: 0x24a5d4e0  addiu       $a1, $a1, -0x2B20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444F2Cu; }
        if (ctx->pc != 0x444F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444F2Cu; }
        if (ctx->pc != 0x444F2Cu) { return; }
    }
    ctx->pc = 0x444F2Cu;
label_444f2c:
    // 0x444f2c: 0xae200100  sw          $zero, 0x100($s1)
    ctx->pc = 0x444f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
label_444f30:
    // 0x444f30: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x444f30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_444f34:
    // 0x444f34: 0xae200104  sw          $zero, 0x104($s1)
    ctx->pc = 0x444f34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 0));
label_444f38:
    // 0x444f38: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x444f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_444f3c:
    // 0x444f3c: 0xae200108  sw          $zero, 0x108($s1)
    ctx->pc = 0x444f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 0));
label_444f40:
    // 0x444f40: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x444f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
label_444f44:
    // 0x444f44: 0xa6200110  sh          $zero, 0x110($s1)
    ctx->pc = 0x444f44u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 272), (uint16_t)GPR_U32(ctx, 0));
label_444f48:
    // 0x444f48: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x444f48u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_444f4c:
    // 0x444f4c: 0xa6200112  sh          $zero, 0x112($s1)
    ctx->pc = 0x444f4cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 274), (uint16_t)GPR_U32(ctx, 0));
label_444f50:
    // 0x444f50: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x444f50u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_444f54:
    // 0x444f54: 0xa6220114  sh          $v0, 0x114($s1)
    ctx->pc = 0x444f54u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 276), (uint16_t)GPR_U32(ctx, 2));
label_444f58:
    // 0x444f58: 0xc04cbd8  jal         func_132F60
label_444f5c:
    if (ctx->pc == 0x444F5Cu) {
        ctx->pc = 0x444F5Cu;
            // 0x444f5c: 0xa6200116  sh          $zero, 0x116($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 278), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x444F60u;
        goto label_444f60;
    }
    ctx->pc = 0x444F58u;
    SET_GPR_U32(ctx, 31, 0x444F60u);
    ctx->pc = 0x444F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444F58u;
            // 0x444f5c: 0xa6200116  sh          $zero, 0x116($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 278), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444F60u; }
        if (ctx->pc != 0x444F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444F60u; }
        if (ctx->pc != 0x444F60u) { return; }
    }
    ctx->pc = 0x444F60u;
label_444f60:
    // 0x444f60: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x444f60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_444f64:
    // 0x444f64: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x444f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_444f68:
    // 0x444f68: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x444f68u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_444f6c:
    // 0x444f6c: 0xc04cbd8  jal         func_132F60
label_444f70:
    if (ctx->pc == 0x444F70u) {
        ctx->pc = 0x444F70u;
            // 0x444f70: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x444F74u;
        goto label_444f74;
    }
    ctx->pc = 0x444F6Cu;
    SET_GPR_U32(ctx, 31, 0x444F74u);
    ctx->pc = 0x444F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444F6Cu;
            // 0x444f70: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444F74u; }
        if (ctx->pc != 0x444F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444F74u; }
        if (ctx->pc != 0x444F74u) { return; }
    }
    ctx->pc = 0x444F74u;
label_444f74:
    // 0x444f74: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x444f74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_444f78:
    // 0x444f78: 0x262400e0  addiu       $a0, $s1, 0xE0
    ctx->pc = 0x444f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_444f7c:
    // 0x444f7c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x444f7cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_444f80:
    // 0x444f80: 0xc04cbd8  jal         func_132F60
label_444f84:
    if (ctx->pc == 0x444F84u) {
        ctx->pc = 0x444F84u;
            // 0x444f84: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x444F88u;
        goto label_444f88;
    }
    ctx->pc = 0x444F80u;
    SET_GPR_U32(ctx, 31, 0x444F88u);
    ctx->pc = 0x444F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444F80u;
            // 0x444f84: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444F88u; }
        if (ctx->pc != 0x444F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444F88u; }
        if (ctx->pc != 0x444F88u) { return; }
    }
    ctx->pc = 0x444F88u;
label_444f88:
    // 0x444f88: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x444f88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_444f8c:
    // 0x444f8c: 0x262400f0  addiu       $a0, $s1, 0xF0
    ctx->pc = 0x444f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
label_444f90:
    // 0x444f90: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x444f90u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_444f94:
    // 0x444f94: 0xc04cbd8  jal         func_132F60
label_444f98:
    if (ctx->pc == 0x444F98u) {
        ctx->pc = 0x444F98u;
            // 0x444f98: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x444F9Cu;
        goto label_444f9c;
    }
    ctx->pc = 0x444F94u;
    SET_GPR_U32(ctx, 31, 0x444F9Cu);
    ctx->pc = 0x444F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444F94u;
            // 0x444f98: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444F9Cu; }
        if (ctx->pc != 0x444F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444F9Cu; }
        if (ctx->pc != 0x444F9Cu) { return; }
    }
    ctx->pc = 0x444F9Cu;
label_444f9c:
    // 0x444f9c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x444f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_444fa0:
    // 0x444fa0: 0x268402b0  addiu       $a0, $s4, 0x2B0
    ctx->pc = 0x444fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 688));
label_444fa4:
    // 0x444fa4: 0x24a5d4a0  addiu       $a1, $a1, -0x2B60
    ctx->pc = 0x444fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956192));
label_444fa8:
    // 0x444fa8: 0xc04cce8  jal         func_1333A0
label_444fac:
    if (ctx->pc == 0x444FACu) {
        ctx->pc = 0x444FACu;
            // 0x444fac: 0xae80029c  sw          $zero, 0x29C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 668), GPR_U32(ctx, 0));
        ctx->pc = 0x444FB0u;
        goto label_444fb0;
    }
    ctx->pc = 0x444FA8u;
    SET_GPR_U32(ctx, 31, 0x444FB0u);
    ctx->pc = 0x444FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444FA8u;
            // 0x444fac: 0xae80029c  sw          $zero, 0x29C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 668), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444FB0u; }
        if (ctx->pc != 0x444FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444FB0u; }
        if (ctx->pc != 0x444FB0u) { return; }
    }
    ctx->pc = 0x444FB0u;
label_444fb0:
    // 0x444fb0: 0x3c120061  lui         $s2, 0x61
    ctx->pc = 0x444fb0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)97 << 16));
label_444fb4:
    // 0x444fb4: 0x3c100061  lui         $s0, 0x61
    ctx->pc = 0x444fb4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)97 << 16));
label_444fb8:
    // 0x444fb8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x444fb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_444fbc:
    // 0x444fbc: 0x26520260  addiu       $s2, $s2, 0x260
    ctx->pc = 0x444fbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 608));
label_444fc0:
    // 0x444fc0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x444fc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_444fc4:
    // 0x444fc4: 0x26100360  addiu       $s0, $s0, 0x360
    ctx->pc = 0x444fc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
label_444fc8:
    // 0x444fc8: 0xc040180  jal         func_100600
label_444fcc:
    if (ctx->pc == 0x444FCCu) {
        ctx->pc = 0x444FCCu;
            // 0x444fcc: 0x240404c0  addiu       $a0, $zero, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
        ctx->pc = 0x444FD0u;
        goto label_444fd0;
    }
    ctx->pc = 0x444FC8u;
    SET_GPR_U32(ctx, 31, 0x444FD0u);
    ctx->pc = 0x444FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444FC8u;
            // 0x444fcc: 0x240404c0  addiu       $a0, $zero, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444FD0u; }
        if (ctx->pc != 0x444FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444FD0u; }
        if (ctx->pc != 0x444FD0u) { return; }
    }
    ctx->pc = 0x444FD0u;
label_444fd0:
    // 0x444fd0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_444fd4:
    if (ctx->pc == 0x444FD4u) {
        ctx->pc = 0x444FD8u;
        goto label_444fd8;
    }
    ctx->pc = 0x444FD0u;
    {
        const bool branch_taken_0x444fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x444fd0) {
            ctx->pc = 0x444FF0u;
            goto label_444ff0;
        }
    }
    ctx->pc = 0x444FD8u;
label_444fd8:
    // 0x444fd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x444fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_444fdc:
    // 0x444fdc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x444fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_444fe0:
    // 0x444fe0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x444fe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_444fe4:
    // 0x444fe4: 0xc0c3f60  jal         func_30FD80
label_444fe8:
    if (ctx->pc == 0x444FE8u) {
        ctx->pc = 0x444FE8u;
            // 0x444fe8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x444FECu;
        goto label_444fec;
    }
    ctx->pc = 0x444FE4u;
    SET_GPR_U32(ctx, 31, 0x444FECu);
    ctx->pc = 0x444FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x444FE4u;
            // 0x444fe8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30FD80u;
    if (runtime->hasFunction(0x30FD80u)) {
        auto targetFn = runtime->lookupFunction(0x30FD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444FECu; }
        if (ctx->pc != 0x444FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030FD80_0x30fd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x444FECu; }
        if (ctx->pc != 0x444FECu) { return; }
    }
    ctx->pc = 0x444FECu;
label_444fec:
    // 0x444fec: 0x0  nop
    ctx->pc = 0x444fecu;
    // NOP
label_444ff0:
    // 0x444ff0: 0x2911821  addu        $v1, $s4, $s1
    ctx->pc = 0x444ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_444ff4:
    // 0x444ff4: 0xac6202f0  sw          $v0, 0x2F0($v1)
    ctx->pc = 0x444ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 752), GPR_U32(ctx, 2));
label_444ff8:
    // 0x444ff8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x444ff8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_444ffc:
    // 0x444ffc: 0xac5000d4  sw          $s0, 0xD4($v0)
    ctx->pc = 0x444ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 212), GPR_U32(ctx, 16));
label_445000:
    // 0x445000: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x445000u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_445004:
    // 0x445004: 0x8c6402f0  lw          $a0, 0x2F0($v1)
    ctx->pc = 0x445004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 752)));
label_445008:
    // 0x445008: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x445008u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
label_44500c:
    // 0x44500c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x44500cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_445010:
    // 0x445010: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x445010u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_445014:
    // 0x445014: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x445014u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_445018:
    // 0x445018: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x445018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_44501c:
    // 0x44501c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_445020:
    if (ctx->pc == 0x445020u) {
        ctx->pc = 0x445020u;
            // 0x445020: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x445024u;
        goto label_445024;
    }
    ctx->pc = 0x44501Cu;
    {
        const bool branch_taken_0x44501c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x445020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44501Cu;
            // 0x445020: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44501c) {
            ctx->pc = 0x444FC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_444fc8;
        }
    }
    ctx->pc = 0x445024u;
label_445024:
    // 0x445024: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x445024u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_445028:
    // 0x445028: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x445028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_44502c:
    // 0x44502c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x44502cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_445030:
    // 0x445030: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x445030u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_445034:
    // 0x445034: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x445034u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_445038:
    // 0x445038: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x445038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44503c:
    // 0x44503c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44503cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_445040:
    // 0x445040: 0x3e00008  jr          $ra
label_445044:
    if (ctx->pc == 0x445044u) {
        ctx->pc = 0x445044u;
            // 0x445044: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x445048u;
        goto label_445048;
    }
    ctx->pc = 0x445040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x445044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x445040u;
            // 0x445044: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x445048u;
label_445048:
    // 0x445048: 0x0  nop
    ctx->pc = 0x445048u;
    // NOP
label_44504c:
    // 0x44504c: 0x0  nop
    ctx->pc = 0x44504cu;
    // NOP
label_445050:
    // 0x445050: 0x8111338  j           func_444CE0
label_445054:
    if (ctx->pc == 0x445054u) {
        ctx->pc = 0x445054u;
            // 0x445054: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x445058u;
        goto label_445058;
    }
    ctx->pc = 0x445050u;
    ctx->pc = 0x445054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x445050u;
            // 0x445054: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x444CE0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_444ce0;
    ctx->pc = 0x445058u;
label_445058:
    // 0x445058: 0x0  nop
    ctx->pc = 0x445058u;
    // NOP
label_44505c:
    // 0x44505c: 0x0  nop
    ctx->pc = 0x44505cu;
    // NOP
label_445060:
    // 0x445060: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x445060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_445064:
    // 0x445064: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x445064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_445068:
    // 0x445068: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x445068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44506c:
    // 0x44506c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44506cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_445070:
    // 0x445070: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x445070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_445074:
    // 0x445074: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_445078:
    if (ctx->pc == 0x445078u) {
        ctx->pc = 0x445078u;
            // 0x445078: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44507Cu;
        goto label_44507c;
    }
    ctx->pc = 0x445074u;
    {
        const bool branch_taken_0x445074 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x445078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x445074u;
            // 0x445078: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445074) {
            ctx->pc = 0x4450D8u;
            goto label_4450d8;
        }
    }
    ctx->pc = 0x44507Cu;
label_44507c:
    // 0x44507c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x44507cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_445080:
    // 0x445080: 0x2442d440  addiu       $v0, $v0, -0x2BC0
    ctx->pc = 0x445080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956096));
label_445084:
    // 0x445084: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_445088:
    if (ctx->pc == 0x445088u) {
        ctx->pc = 0x445088u;
            // 0x445088: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x44508Cu;
        goto label_44508c;
    }
    ctx->pc = 0x445084u;
    {
        const bool branch_taken_0x445084 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x445088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x445084u;
            // 0x445088: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445084) {
            ctx->pc = 0x4450C0u;
            goto label_4450c0;
        }
    }
    ctx->pc = 0x44508Cu;
label_44508c:
    // 0x44508c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x44508cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_445090:
    // 0x445090: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x445090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_445094:
    // 0x445094: 0xc0d37dc  jal         func_34DF70
label_445098:
    if (ctx->pc == 0x445098u) {
        ctx->pc = 0x445098u;
            // 0x445098: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x44509Cu;
        goto label_44509c;
    }
    ctx->pc = 0x445094u;
    SET_GPR_U32(ctx, 31, 0x44509Cu);
    ctx->pc = 0x445098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x445094u;
            // 0x445098: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44509Cu; }
        if (ctx->pc != 0x44509Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44509Cu; }
        if (ctx->pc != 0x44509Cu) { return; }
    }
    ctx->pc = 0x44509Cu;
label_44509c:
    // 0x44509c: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_4450a0:
    if (ctx->pc == 0x4450A0u) {
        ctx->pc = 0x4450A0u;
            // 0x4450a0: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x4450A4u;
        goto label_4450a4;
    }
    ctx->pc = 0x44509Cu;
    {
        const bool branch_taken_0x44509c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x44509c) {
            ctx->pc = 0x4450A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44509Cu;
            // 0x4450a0: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4450C4u;
            goto label_4450c4;
        }
    }
    ctx->pc = 0x4450A4u;
label_4450a4:
    // 0x4450a4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4450a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4450a8:
    // 0x4450a8: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x4450a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_4450ac:
    // 0x4450ac: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_4450b0:
    if (ctx->pc == 0x4450B0u) {
        ctx->pc = 0x4450B0u;
            // 0x4450b0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4450B4u;
        goto label_4450b4;
    }
    ctx->pc = 0x4450ACu;
    {
        const bool branch_taken_0x4450ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4450B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4450ACu;
            // 0x4450b0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4450ac) {
            ctx->pc = 0x4450C0u;
            goto label_4450c0;
        }
    }
    ctx->pc = 0x4450B4u;
label_4450b4:
    // 0x4450b4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4450b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4450b8:
    // 0x4450b8: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x4450b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_4450bc:
    // 0x4450bc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4450bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4450c0:
    // 0x4450c0: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4450c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4450c4:
    // 0x4450c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4450c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4450c8:
    // 0x4450c8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4450cc:
    if (ctx->pc == 0x4450CCu) {
        ctx->pc = 0x4450CCu;
            // 0x4450cc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4450D0u;
        goto label_4450d0;
    }
    ctx->pc = 0x4450C8u;
    {
        const bool branch_taken_0x4450c8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4450c8) {
            ctx->pc = 0x4450CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4450C8u;
            // 0x4450cc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4450DCu;
            goto label_4450dc;
        }
    }
    ctx->pc = 0x4450D0u;
label_4450d0:
    // 0x4450d0: 0xc0400a8  jal         func_1002A0
label_4450d4:
    if (ctx->pc == 0x4450D4u) {
        ctx->pc = 0x4450D4u;
            // 0x4450d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4450D8u;
        goto label_4450d8;
    }
    ctx->pc = 0x4450D0u;
    SET_GPR_U32(ctx, 31, 0x4450D8u);
    ctx->pc = 0x4450D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4450D0u;
            // 0x4450d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4450D8u; }
        if (ctx->pc != 0x4450D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4450D8u; }
        if (ctx->pc != 0x4450D8u) { return; }
    }
    ctx->pc = 0x4450D8u;
label_4450d8:
    // 0x4450d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4450d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4450dc:
    // 0x4450dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4450dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4450e0:
    // 0x4450e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4450e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4450e4:
    // 0x4450e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4450e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4450e8:
    // 0x4450e8: 0x3e00008  jr          $ra
label_4450ec:
    if (ctx->pc == 0x4450ECu) {
        ctx->pc = 0x4450ECu;
            // 0x4450ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4450F0u;
        goto label_4450f0;
    }
    ctx->pc = 0x4450E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4450ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4450E8u;
            // 0x4450ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4450F0u;
label_4450f0:
    // 0x4450f0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x4450f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_4450f4:
    // 0x4450f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4450f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4450f8:
    // 0x4450f8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x4450f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_4450fc:
    // 0x4450fc: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x4450fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_445100:
    // 0x445100: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x445100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_445104:
    // 0x445104: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x445104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_445108:
    // 0x445108: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x445108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_44510c:
    // 0x44510c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x44510cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_445110:
    // 0x445110: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x445110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_445114:
    // 0x445114: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x445114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_445118:
    // 0x445118: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x445118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_44511c:
    // 0x44511c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x44511cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_445120:
    // 0x445120: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x445120u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_445124:
    // 0x445124: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x445124u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_445128:
    // 0x445128: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x445128u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_44512c:
    // 0x44512c: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_445130:
    if (ctx->pc == 0x445130u) {
        ctx->pc = 0x445130u;
            // 0x445130: 0xafa400fc  sw          $a0, 0xFC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 4));
        ctx->pc = 0x445134u;
        goto label_445134;
    }
    ctx->pc = 0x44512Cu;
    {
        const bool branch_taken_0x44512c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x445130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44512Cu;
            // 0x445130: 0xafa400fc  sw          $a0, 0xFC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44512c) {
            ctx->pc = 0x44517Cu;
            goto label_44517c;
        }
    }
    ctx->pc = 0x445134u;
label_445134:
    // 0x445134: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x445134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_445138:
    // 0x445138: 0x50a30078  beql        $a1, $v1, . + 4 + (0x78 << 2)
label_44513c:
    if (ctx->pc == 0x44513Cu) {
        ctx->pc = 0x44513Cu;
            // 0x44513c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x445140u;
        goto label_445140;
    }
    ctx->pc = 0x445138u;
    {
        const bool branch_taken_0x445138 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x445138) {
            ctx->pc = 0x44513Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x445138u;
            // 0x44513c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44531Cu;
            goto label_44531c;
        }
    }
    ctx->pc = 0x445140u;
label_445140:
    // 0x445140: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x445140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_445144:
    // 0x445144: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_445148:
    if (ctx->pc == 0x445148u) {
        ctx->pc = 0x44514Cu;
        goto label_44514c;
    }
    ctx->pc = 0x445144u;
    {
        const bool branch_taken_0x445144 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x445144) {
            ctx->pc = 0x445154u;
            goto label_445154;
        }
    }
    ctx->pc = 0x44514Cu;
label_44514c:
    // 0x44514c: 0x10000072  b           . + 4 + (0x72 << 2)
label_445150:
    if (ctx->pc == 0x445150u) {
        ctx->pc = 0x445154u;
        goto label_445154;
    }
    ctx->pc = 0x44514Cu;
    {
        const bool branch_taken_0x44514c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44514c) {
            ctx->pc = 0x445318u;
            goto label_445318;
        }
    }
    ctx->pc = 0x445154u;
label_445154:
    // 0x445154: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x445154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_445158:
    // 0x445158: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x445158u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44515c:
    // 0x44515c: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x44515cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_445160:
    // 0x445160: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x445160u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_445164:
    // 0x445164: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x445164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_445168:
    // 0x445168: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x445168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_44516c:
    // 0x44516c: 0x320f809  jalr        $t9
label_445170:
    if (ctx->pc == 0x445170u) {
        ctx->pc = 0x445170u;
            // 0x445170: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x445174u;
        goto label_445174;
    }
    ctx->pc = 0x44516Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x445174u);
        ctx->pc = 0x445170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44516Cu;
            // 0x445170: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x445174u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x445174u; }
            if (ctx->pc != 0x445174u) { return; }
        }
        }
    }
    ctx->pc = 0x445174u;
label_445174:
    // 0x445174: 0x10000068  b           . + 4 + (0x68 << 2)
label_445178:
    if (ctx->pc == 0x445178u) {
        ctx->pc = 0x44517Cu;
        goto label_44517c;
    }
    ctx->pc = 0x445174u;
    {
        const bool branch_taken_0x445174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x445174) {
            ctx->pc = 0x445318u;
            goto label_445318;
        }
    }
    ctx->pc = 0x44517Cu;
label_44517c:
    // 0x44517c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x44517cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_445180:
    // 0x445180: 0x8c7e0070  lw          $fp, 0x70($v1)
    ctx->pc = 0x445180u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_445184:
    // 0x445184: 0x13c00064  beqz        $fp, . + 4 + (0x64 << 2)
label_445188:
    if (ctx->pc == 0x445188u) {
        ctx->pc = 0x44518Cu;
        goto label_44518c;
    }
    ctx->pc = 0x445184u;
    {
        const bool branch_taken_0x445184 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x445184) {
            ctx->pc = 0x445318u;
            goto label_445318;
        }
    }
    ctx->pc = 0x44518Cu;
label_44518c:
    // 0x44518c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x44518cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_445190:
    // 0x445190: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x445190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
label_445194:
    // 0x445194: 0x8c63e378  lw          $v1, -0x1C88($v1)
    ctx->pc = 0x445194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_445198:
    // 0x445198: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x445198u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44519c:
    // 0x44519c: 0x8c86d130  lw          $a2, -0x2ED0($a0)
    ctx->pc = 0x44519cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955312)));
label_4451a0:
    // 0x4451a0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x4451a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4451a4:
    // 0x4451a4: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x4451a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_4451a8:
    // 0x4451a8: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4451a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4451ac:
    // 0x4451ac: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x4451acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_4451b0:
    // 0x4451b0: 0x8c65d120  lw          $a1, -0x2EE0($v1)
    ctx->pc = 0x4451b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_4451b4:
    // 0x4451b4: 0x8cc70130  lw          $a3, 0x130($a2)
    ctx->pc = 0x4451b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
label_4451b8:
    // 0x4451b8: 0x8fa300fc  lw          $v1, 0xFC($sp)
    ctx->pc = 0x4451b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_4451bc:
    // 0x4451bc: 0x8ca60010  lw          $a2, 0x10($a1)
    ctx->pc = 0x4451bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_4451c0:
    // 0x4451c0: 0x24770084  addiu       $s7, $v1, 0x84
    ctx->pc = 0x4451c0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 132));
label_4451c4:
    // 0x4451c4: 0x8c83e370  lw          $v1, -0x1C90($a0)
    ctx->pc = 0x4451c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294959984)));
label_4451c8:
    // 0x4451c8: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x4451c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_4451cc:
    // 0x4451cc: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x4451ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_4451d0:
    // 0x4451d0: 0x3c043e99  lui         $a0, 0x3E99
    ctx->pc = 0x4451d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16025 << 16));
label_4451d4:
    // 0x4451d4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4451d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4451d8:
    // 0x4451d8: 0x3484999a  ori         $a0, $a0, 0x999A
    ctx->pc = 0x4451d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39322);
label_4451dc:
    // 0x4451dc: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4451dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4451e0:
    // 0x4451e0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4451e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4451e4:
    // 0x4451e4: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x4451e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_4451e8:
    // 0x4451e8: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x4451e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_4451ec:
    // 0x4451ec: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x4451ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4451f0:
    // 0x4451f0: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x4451f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4451f4:
    // 0x4451f4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x4451f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_4451f8:
    // 0x4451f8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x4451f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4451fc:
    // 0x4451fc: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x4451fcu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_445200:
    // 0x445200: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x445200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
label_445204:
    // 0x445204: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x445204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_445208:
    // 0x445208: 0xaca0e3d8  sw          $zero, -0x1C28($a1)
    ctx->pc = 0x445208u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 0));
label_44520c:
    // 0x44520c: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x44520cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_445210:
    // 0x445210: 0xac80e3c0  sw          $zero, -0x1C40($a0)
    ctx->pc = 0x445210u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960064), GPR_U32(ctx, 0));
label_445214:
    // 0x445214: 0x8fa300fc  lw          $v1, 0xFC($sp)
    ctx->pc = 0x445214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_445218:
    // 0x445218: 0x8c630074  lw          $v1, 0x74($v1)
    ctx->pc = 0x445218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_44521c:
    // 0x44521c: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x44521cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_445220:
    // 0x445220: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x445220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_445224:
    // 0x445224: 0x9074006c  lbu         $s4, 0x6C($v1)
    ctx->pc = 0x445224u;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 108)));
label_445228:
    // 0x445228: 0x1a800027  blez        $s4, . + 4 + (0x27 << 2)
label_44522c:
    if (ctx->pc == 0x44522Cu) {
        ctx->pc = 0x445230u;
        goto label_445230;
    }
    ctx->pc = 0x445228u;
    {
        const bool branch_taken_0x445228 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x445228) {
            ctx->pc = 0x4452C8u;
            goto label_4452c8;
        }
    }
    ctx->pc = 0x445230u;
label_445230:
    // 0x445230: 0x8c720068  lw          $s2, 0x68($v1)
    ctx->pc = 0x445230u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
label_445234:
    // 0x445234: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x445234u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_445238:
    // 0x445238: 0x758021  addu        $s0, $v1, $s5
    ctx->pc = 0x445238u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_44523c:
    // 0x44523c: 0x0  nop
    ctx->pc = 0x44523cu;
    // NOP
label_445240:
    // 0x445240: 0x92430600  lbu         $v1, 0x600($s2)
    ctx->pc = 0x445240u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1536)));
label_445244:
    // 0x445244: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_445248:
    if (ctx->pc == 0x445248u) {
        ctx->pc = 0x44524Cu;
        goto label_44524c;
    }
    ctx->pc = 0x445244u;
    {
        const bool branch_taken_0x445244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x445244) {
            ctx->pc = 0x4452B8u;
            goto label_4452b8;
        }
    }
    ctx->pc = 0x44524Cu;
label_44524c:
    // 0x44524c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x44524cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_445250:
    // 0x445250: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
label_445254:
    if (ctx->pc == 0x445254u) {
        ctx->pc = 0x445254u;
            // 0x445254: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x445258u;
        goto label_445258;
    }
    ctx->pc = 0x445250u;
    {
        const bool branch_taken_0x445250 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x445254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x445250u;
            // 0x445254: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445250) {
            ctx->pc = 0x445264u;
            goto label_445264;
        }
    }
    ctx->pc = 0x445258u;
label_445258:
    // 0x445258: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x445258u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_44525c:
    // 0x44525c: 0x10000008  b           . + 4 + (0x8 << 2)
label_445260:
    if (ctx->pc == 0x445260u) {
        ctx->pc = 0x445260u;
            // 0x445260: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x445264u;
        goto label_445264;
    }
    ctx->pc = 0x44525Cu;
    {
        const bool branch_taken_0x44525c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x445260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44525Cu;
            // 0x445260: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x44525c) {
            ctx->pc = 0x445280u;
            goto label_445280;
        }
    }
    ctx->pc = 0x445264u;
label_445264:
    // 0x445264: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x445264u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
label_445268:
    // 0x445268: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x445268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_44526c:
    // 0x44526c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x44526cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_445270:
    // 0x445270: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x445270u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_445274:
    // 0x445274: 0x0  nop
    ctx->pc = 0x445274u;
    // NOP
label_445278:
    // 0x445278: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x445278u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_44527c:
    // 0x44527c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x44527cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_445280:
    // 0x445280: 0x4600ad02  mul.s       $f20, $f21, $f0
    ctx->pc = 0x445280u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_445284:
    // 0x445284: 0x0  nop
    ctx->pc = 0x445284u;
    // NOP
label_445288:
    // 0x445288: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x445288u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_44528c:
    // 0x44528c: 0x8fa700e0  lw          $a3, 0xE0($sp)
    ctx->pc = 0x44528cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_445290:
    // 0x445290: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x445290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_445294:
    // 0x445294: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x445294u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_445298:
    // 0x445298: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x445298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_44529c:
    // 0x44529c: 0x27a90100  addiu       $t1, $sp, 0x100
    ctx->pc = 0x44529cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_4452a0:
    // 0x4452a0: 0xc110a0c  jal         func_442830
label_4452a4:
    if (ctx->pc == 0x4452A4u) {
        ctx->pc = 0x4452A4u;
            // 0x4452a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4452A8u;
        goto label_4452a8;
    }
    ctx->pc = 0x4452A0u;
    SET_GPR_U32(ctx, 31, 0x4452A8u);
    ctx->pc = 0x4452A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4452A0u;
            // 0x4452a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x442830u;
    if (runtime->hasFunction(0x442830u)) {
        auto targetFn = runtime->lookupFunction(0x442830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4452A8u; }
        if (ctx->pc != 0x4452A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442830_0x442830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4452A8u; }
        if (ctx->pc != 0x4452A8u) { return; }
    }
    ctx->pc = 0x4452A8u;
label_4452a8:
    // 0x4452a8: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x4452a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_4452ac:
    // 0x4452ac: 0x1660fff6  bnez        $s3, . + 4 + (-0xA << 2)
label_4452b0:
    if (ctx->pc == 0x4452B0u) {
        ctx->pc = 0x4452B0u;
            // 0x4452b0: 0x26310300  addiu       $s1, $s1, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
        ctx->pc = 0x4452B4u;
        goto label_4452b4;
    }
    ctx->pc = 0x4452ACu;
    {
        const bool branch_taken_0x4452ac = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x4452B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4452ACu;
            // 0x4452b0: 0x26310300  addiu       $s1, $s1, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4452ac) {
            ctx->pc = 0x445288u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_445288;
        }
    }
    ctx->pc = 0x4452B4u;
label_4452b4:
    // 0x4452b4: 0x0  nop
    ctx->pc = 0x4452b4u;
    // NOP
label_4452b8:
    // 0x4452b8: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x4452b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_4452bc:
    // 0x4452bc: 0x1680ffe0  bnez        $s4, . + 4 + (-0x20 << 2)
label_4452c0:
    if (ctx->pc == 0x4452C0u) {
        ctx->pc = 0x4452C0u;
            // 0x4452c0: 0x26520610  addiu       $s2, $s2, 0x610 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1552));
        ctx->pc = 0x4452C4u;
        goto label_4452c4;
    }
    ctx->pc = 0x4452BCu;
    {
        const bool branch_taken_0x4452bc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x4452C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4452BCu;
            // 0x4452c0: 0x26520610  addiu       $s2, $s2, 0x610 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4452bc) {
            ctx->pc = 0x445240u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_445240;
        }
    }
    ctx->pc = 0x4452C4u;
label_4452c4:
    // 0x4452c4: 0x0  nop
    ctx->pc = 0x4452c4u;
    // NOP
label_4452c8:
    // 0x4452c8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x4452c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_4452cc:
    // 0x4452cc: 0x2be182b  sltu        $v1, $s5, $fp
    ctx->pc = 0x4452ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_4452d0:
    // 0x4452d0: 0x1460ffd0  bnez        $v1, . + 4 + (-0x30 << 2)
label_4452d4:
    if (ctx->pc == 0x4452D4u) {
        ctx->pc = 0x4452D4u;
            // 0x4452d4: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x4452D8u;
        goto label_4452d8;
    }
    ctx->pc = 0x4452D0u;
    {
        const bool branch_taken_0x4452d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4452D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4452D0u;
            // 0x4452d4: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4452d0) {
            ctx->pc = 0x445214u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_445214;
        }
    }
    ctx->pc = 0x4452D8u;
label_4452d8:
    // 0x4452d8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4452d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4452dc:
    // 0x4452dc: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x4452dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4452e0:
    // 0x4452e0: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
label_4452e4:
    if (ctx->pc == 0x4452E4u) {
        ctx->pc = 0x4452E8u;
        goto label_4452e8;
    }
    ctx->pc = 0x4452E0u;
    {
        const bool branch_taken_0x4452e0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x4452e0) {
            ctx->pc = 0x445318u;
            goto label_445318;
        }
    }
    ctx->pc = 0x4452E8u;
label_4452e8:
    // 0x4452e8: 0xc04e738  jal         func_139CE0
label_4452ec:
    if (ctx->pc == 0x4452ECu) {
        ctx->pc = 0x4452ECu;
            // 0x4452ec: 0x8ee40004  lw          $a0, 0x4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
        ctx->pc = 0x4452F0u;
        goto label_4452f0;
    }
    ctx->pc = 0x4452E8u;
    SET_GPR_U32(ctx, 31, 0x4452F0u);
    ctx->pc = 0x4452ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4452E8u;
            // 0x4452ec: 0x8ee40004  lw          $a0, 0x4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4452F0u; }
        if (ctx->pc != 0x4452F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4452F0u; }
        if (ctx->pc != 0x4452F0u) { return; }
    }
    ctx->pc = 0x4452F0u;
label_4452f0:
    // 0x4452f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4452f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4452f4:
    // 0x4452f4: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x4452f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_4452f8:
    // 0x4452f8: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x4452f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_4452fc:
    // 0x4452fc: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4452fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_445300:
    // 0x445300: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x445300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_445304:
    // 0x445304: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x445304u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_445308:
    // 0x445308: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x445308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44530c:
    // 0x44530c: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x44530cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_445310:
    // 0x445310: 0xc055990  jal         func_156640
label_445314:
    if (ctx->pc == 0x445314u) {
        ctx->pc = 0x445314u;
            // 0x445314: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x445318u;
        goto label_445318;
    }
    ctx->pc = 0x445310u;
    SET_GPR_U32(ctx, 31, 0x445318u);
    ctx->pc = 0x445314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x445310u;
            // 0x445314: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156640u;
    if (runtime->hasFunction(0x156640u)) {
        auto targetFn = runtime->lookupFunction(0x156640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445318u; }
        if (ctx->pc != 0x445318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156640_0x156640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445318u; }
        if (ctx->pc != 0x445318u) { return; }
    }
    ctx->pc = 0x445318u;
label_445318:
    // 0x445318: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x445318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_44531c:
    // 0x44531c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x44531cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_445320:
    // 0x445320: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x445320u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_445324:
    // 0x445324: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x445324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_445328:
    // 0x445328: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x445328u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_44532c:
    // 0x44532c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x44532cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_445330:
    // 0x445330: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x445330u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_445334:
    // 0x445334: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x445334u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_445338:
    // 0x445338: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x445338u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_44533c:
    // 0x44533c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x44533cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_445340:
    // 0x445340: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x445340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_445344:
    // 0x445344: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x445344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_445348:
    // 0x445348: 0x3e00008  jr          $ra
label_44534c:
    if (ctx->pc == 0x44534Cu) {
        ctx->pc = 0x44534Cu;
            // 0x44534c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x445350u;
        goto label_445350;
    }
    ctx->pc = 0x445348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44534Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x445348u;
            // 0x44534c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x445350u;
label_445350:
    // 0x445350: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x445350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_445354:
    // 0x445354: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x445354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_445358:
    // 0x445358: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x445358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_44535c:
    // 0x44535c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x44535cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_445360:
    // 0x445360: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x445360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_445364:
    // 0x445364: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x445364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_445368:
    // 0x445368: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x445368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_44536c:
    // 0x44536c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x44536cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_445370:
    // 0x445370: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x445370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_445374:
    // 0x445374: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x445374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_445378:
    // 0x445378: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x445378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44537c:
    // 0x44537c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44537cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_445380:
    // 0x445380: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x445380u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_445384:
    // 0x445384: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_445388:
    if (ctx->pc == 0x445388u) {
        ctx->pc = 0x445388u;
            // 0x445388: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44538Cu;
        goto label_44538c;
    }
    ctx->pc = 0x445384u;
    {
        const bool branch_taken_0x445384 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x445388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x445384u;
            // 0x445388: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445384) {
            ctx->pc = 0x4453B8u;
            goto label_4453b8;
        }
    }
    ctx->pc = 0x44538Cu;
label_44538c:
    // 0x44538c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x44538cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_445390:
    // 0x445390: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_445394:
    if (ctx->pc == 0x445394u) {
        ctx->pc = 0x445394u;
            // 0x445394: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x445398u;
        goto label_445398;
    }
    ctx->pc = 0x445390u;
    {
        const bool branch_taken_0x445390 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x445390) {
            ctx->pc = 0x445394u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x445390u;
            // 0x445394: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4453ACu;
            goto label_4453ac;
        }
    }
    ctx->pc = 0x445398u;
label_445398:
    // 0x445398: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x445398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_44539c:
    // 0x44539c: 0x10a30066  beq         $a1, $v1, . + 4 + (0x66 << 2)
label_4453a0:
    if (ctx->pc == 0x4453A0u) {
        ctx->pc = 0x4453A4u;
        goto label_4453a4;
    }
    ctx->pc = 0x44539Cu;
    {
        const bool branch_taken_0x44539c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x44539c) {
            ctx->pc = 0x445538u;
            goto label_445538;
        }
    }
    ctx->pc = 0x4453A4u;
label_4453a4:
    // 0x4453a4: 0x10000064  b           . + 4 + (0x64 << 2)
label_4453a8:
    if (ctx->pc == 0x4453A8u) {
        ctx->pc = 0x4453ACu;
        goto label_4453ac;
    }
    ctx->pc = 0x4453A4u;
    {
        const bool branch_taken_0x4453a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4453a4) {
            ctx->pc = 0x445538u;
            goto label_445538;
        }
    }
    ctx->pc = 0x4453ACu;
label_4453ac:
    // 0x4453ac: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4453acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4453b0:
    // 0x4453b0: 0x320f809  jalr        $t9
label_4453b4:
    if (ctx->pc == 0x4453B4u) {
        ctx->pc = 0x4453B8u;
        goto label_4453b8;
    }
    ctx->pc = 0x4453B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4453B8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4453B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4453B8u; }
            if (ctx->pc != 0x4453B8u) { return; }
        }
        }
    }
    ctx->pc = 0x4453B8u;
label_4453b8:
    // 0x4453b8: 0x8fd70070  lw          $s7, 0x70($fp)
    ctx->pc = 0x4453b8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 112)));
label_4453bc:
    // 0x4453bc: 0x12e0005e  beqz        $s7, . + 4 + (0x5E << 2)
label_4453c0:
    if (ctx->pc == 0x4453C0u) {
        ctx->pc = 0x4453C4u;
        goto label_4453c4;
    }
    ctx->pc = 0x4453BCu;
    {
        const bool branch_taken_0x4453bc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x4453bc) {
            ctx->pc = 0x445538u;
            goto label_445538;
        }
    }
    ctx->pc = 0x4453C4u;
label_4453c4:
    // 0x4453c4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4453c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4453c8:
    // 0x4453c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4453c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4453cc:
    // 0x4453cc: 0x8fc40074  lw          $a0, 0x74($fp)
    ctx->pc = 0x4453ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 116)));
label_4453d0:
    // 0x4453d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4453d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4453d4:
    // 0x4453d4: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x4453d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_4453d8:
    // 0x4453d8: 0x8c960000  lw          $s6, 0x0($a0)
    ctx->pc = 0x4453d8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4453dc:
    // 0x4453dc: 0x8ec40060  lw          $a0, 0x60($s6)
    ctx->pc = 0x4453dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 96)));
label_4453e0:
    // 0x4453e0: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_4453e4:
    if (ctx->pc == 0x4453E4u) {
        ctx->pc = 0x4453E8u;
        goto label_4453e8;
    }
    ctx->pc = 0x4453E0u;
    {
        const bool branch_taken_0x4453e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4453e0) {
            ctx->pc = 0x445400u;
            goto label_445400;
        }
    }
    ctx->pc = 0x4453E8u;
label_4453e8:
    // 0x4453e8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4453ec:
    if (ctx->pc == 0x4453ECu) {
        ctx->pc = 0x4453F0u;
        goto label_4453f0;
    }
    ctx->pc = 0x4453E8u;
    {
        const bool branch_taken_0x4453e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4453e8) {
            ctx->pc = 0x4453F8u;
            goto label_4453f8;
        }
    }
    ctx->pc = 0x4453F0u;
label_4453f0:
    // 0x4453f0: 0x1000004d  b           . + 4 + (0x4D << 2)
label_4453f4:
    if (ctx->pc == 0x4453F4u) {
        ctx->pc = 0x4453F8u;
        goto label_4453f8;
    }
    ctx->pc = 0x4453F0u;
    {
        const bool branch_taken_0x4453f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4453f0) {
            ctx->pc = 0x445528u;
            goto label_445528;
        }
    }
    ctx->pc = 0x4453F8u;
label_4453f8:
    // 0x4453f8: 0xaec30060  sw          $v1, 0x60($s6)
    ctx->pc = 0x4453f8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 96), GPR_U32(ctx, 3));
label_4453fc:
    // 0x4453fc: 0x0  nop
    ctx->pc = 0x4453fcu;
    // NOP
label_445400:
    // 0x445400: 0x26c5005c  addiu       $a1, $s6, 0x5C
    ctx->pc = 0x445400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 92));
label_445404:
    // 0x445404: 0xc6c1005c  lwc1        $f1, 0x5C($s6)
    ctx->pc = 0x445404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_445408:
    // 0x445408: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x445408u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_44540c:
    // 0x44540c: 0x0  nop
    ctx->pc = 0x44540cu;
    // NOP
label_445410:
    // 0x445410: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x445410u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_445414:
    // 0x445414: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_445418:
    if (ctx->pc == 0x445418u) {
        ctx->pc = 0x445418u;
            // 0x445418: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x44541Cu;
        goto label_44541c;
    }
    ctx->pc = 0x445414u;
    {
        const bool branch_taken_0x445414 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x445418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x445414u;
            // 0x445418: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445414) {
            ctx->pc = 0x445420u;
            goto label_445420;
        }
    }
    ctx->pc = 0x44541Cu;
label_44541c:
    // 0x44541c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x44541cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_445420:
    // 0x445420: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_445424:
    if (ctx->pc == 0x445424u) {
        ctx->pc = 0x445424u;
            // 0x445424: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x445428u;
        goto label_445428;
    }
    ctx->pc = 0x445420u;
    {
        const bool branch_taken_0x445420 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x445420) {
            ctx->pc = 0x445424u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x445420u;
            // 0x445424: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x445434u;
            goto label_445434;
        }
    }
    ctx->pc = 0x445428u;
label_445428:
    // 0x445428: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x445428u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_44542c:
    // 0x44542c: 0x10000007  b           . + 4 + (0x7 << 2)
label_445430:
    if (ctx->pc == 0x445430u) {
        ctx->pc = 0x445430u;
            // 0x445430: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x445434u;
        goto label_445434;
    }
    ctx->pc = 0x44542Cu;
    {
        const bool branch_taken_0x44542c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x445430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44542Cu;
            // 0x445430: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x44542c) {
            ctx->pc = 0x44544Cu;
            goto label_44544c;
        }
    }
    ctx->pc = 0x445434u;
label_445434:
    // 0x445434: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x445434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_445438:
    // 0x445438: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x445438u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_44543c:
    // 0x44543c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x44543cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_445440:
    // 0x445440: 0x0  nop
    ctx->pc = 0x445440u;
    // NOP
label_445444:
    // 0x445444: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x445444u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_445448:
    // 0x445448: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x445448u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_44544c:
    // 0x44544c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x44544cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_445450:
    // 0x445450: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x445450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_445454:
    // 0x445454: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x445454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_445458:
    // 0x445458: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x445458u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_44545c:
    // 0x44545c: 0x0  nop
    ctx->pc = 0x44545cu;
    // NOP
label_445460:
    // 0x445460: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x445460u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_445464:
    // 0x445464: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x445464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_445468:
    // 0x445468: 0x4600101d  msub.s      $f0, $f2, $f0
    ctx->pc = 0x445468u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_44546c:
    // 0x44546c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x44546cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_445470:
    // 0x445470: 0x92d4006c  lbu         $s4, 0x6C($s6)
    ctx->pc = 0x445470u;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 108)));
label_445474:
    // 0x445474: 0x1a80002c  blez        $s4, . + 4 + (0x2C << 2)
label_445478:
    if (ctx->pc == 0x445478u) {
        ctx->pc = 0x44547Cu;
        goto label_44547c;
    }
    ctx->pc = 0x445474u;
    {
        const bool branch_taken_0x445474 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x445474) {
            ctx->pc = 0x445528u;
            goto label_445528;
        }
    }
    ctx->pc = 0x44547Cu;
label_44547c:
    // 0x44547c: 0x8ed20068  lw          $s2, 0x68($s6)
    ctx->pc = 0x44547cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
label_445480:
    // 0x445480: 0x92430600  lbu         $v1, 0x600($s2)
    ctx->pc = 0x445480u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1536)));
label_445484:
    // 0x445484: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_445488:
    if (ctx->pc == 0x445488u) {
        ctx->pc = 0x44548Cu;
        goto label_44548c;
    }
    ctx->pc = 0x445484u;
    {
        const bool branch_taken_0x445484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x445484) {
            ctx->pc = 0x4454B8u;
            goto label_4454b8;
        }
    }
    ctx->pc = 0x44548Cu;
label_44548c:
    // 0x44548c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x44548cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_445490:
    // 0x445490: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x445490u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_445494:
    // 0x445494: 0x0  nop
    ctx->pc = 0x445494u;
    // NOP
label_445498:
    // 0x445498: 0xc0e3658  jal         func_38D960
label_44549c:
    if (ctx->pc == 0x44549Cu) {
        ctx->pc = 0x44549Cu;
            // 0x44549c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4454A0u;
        goto label_4454a0;
    }
    ctx->pc = 0x445498u;
    SET_GPR_U32(ctx, 31, 0x4454A0u);
    ctx->pc = 0x44549Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x445498u;
            // 0x44549c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4454A0u; }
        if (ctx->pc != 0x4454A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4454A0u; }
        if (ctx->pc != 0x4454A0u) { return; }
    }
    ctx->pc = 0x4454A0u;
label_4454a0:
    // 0x4454a0: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x4454a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_4454a4:
    // 0x4454a4: 0x26310300  addiu       $s1, $s1, 0x300
    ctx->pc = 0x4454a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
label_4454a8:
    // 0x4454a8: 0x0  nop
    ctx->pc = 0x4454a8u;
    // NOP
label_4454ac:
    // 0x4454ac: 0x1660fffa  bnez        $s3, . + 4 + (-0x6 << 2)
label_4454b0:
    if (ctx->pc == 0x4454B0u) {
        ctx->pc = 0x4454B4u;
        goto label_4454b4;
    }
    ctx->pc = 0x4454ACu;
    {
        const bool branch_taken_0x4454ac = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x4454ac) {
            ctx->pc = 0x445498u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_445498;
        }
    }
    ctx->pc = 0x4454B4u;
label_4454b4:
    // 0x4454b4: 0x0  nop
    ctx->pc = 0x4454b4u;
    // NOP
label_4454b8:
    // 0x4454b8: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x4454b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_4454bc:
    // 0x4454bc: 0x1680fff0  bnez        $s4, . + 4 + (-0x10 << 2)
label_4454c0:
    if (ctx->pc == 0x4454C0u) {
        ctx->pc = 0x4454C0u;
            // 0x4454c0: 0x26520610  addiu       $s2, $s2, 0x610 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1552));
        ctx->pc = 0x4454C4u;
        goto label_4454c4;
    }
    ctx->pc = 0x4454BCu;
    {
        const bool branch_taken_0x4454bc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x4454C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4454BCu;
            // 0x4454c0: 0x26520610  addiu       $s2, $s2, 0x610 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4454bc) {
            ctx->pc = 0x445480u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_445480;
        }
    }
    ctx->pc = 0x4454C4u;
label_4454c4:
    // 0x4454c4: 0x92c8006c  lbu         $t0, 0x6C($s6)
    ctx->pc = 0x4454c4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 108)));
label_4454c8:
    // 0x4454c8: 0x11000017  beqz        $t0, . + 4 + (0x17 << 2)
label_4454cc:
    if (ctx->pc == 0x4454CCu) {
        ctx->pc = 0x4454CCu;
            // 0x4454cc: 0x8ec90068  lw          $t1, 0x68($s6) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
        ctx->pc = 0x4454D0u;
        goto label_4454d0;
    }
    ctx->pc = 0x4454C8u;
    {
        const bool branch_taken_0x4454c8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4454CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4454C8u;
            // 0x4454cc: 0x8ec90068  lw          $t1, 0x68($s6) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4454c8) {
            ctx->pc = 0x445528u;
            goto label_445528;
        }
    }
    ctx->pc = 0x4454D0u;
label_4454d0:
    // 0x4454d0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4454d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4454d4:
    // 0x4454d4: 0x0  nop
    ctx->pc = 0x4454d4u;
    // NOP
label_4454d8:
    // 0x4454d8: 0x91230600  lbu         $v1, 0x600($t1)
    ctx->pc = 0x4454d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1536)));
label_4454dc:
    // 0x4454dc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_4454e0:
    if (ctx->pc == 0x4454E0u) {
        ctx->pc = 0x4454E4u;
        goto label_4454e4;
    }
    ctx->pc = 0x4454DCu;
    {
        const bool branch_taken_0x4454dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4454dc) {
            ctx->pc = 0x445518u;
            goto label_445518;
        }
    }
    ctx->pc = 0x4454E4u;
label_4454e4:
    // 0x4454e4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4454e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4454e8:
    // 0x4454e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4454e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4454ec:
    // 0x4454ec: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x4454ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4454f0:
    // 0x4454f0: 0x8ce300d0  lw          $v1, 0xD0($a3)
    ctx->pc = 0x4454f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 208)));
label_4454f4:
    // 0x4454f4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4454f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_4454f8:
    // 0x4454f8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x4454f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_4454fc:
    // 0x4454fc: 0x24e70300  addiu       $a3, $a3, 0x300
    ctx->pc = 0x4454fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 768));
label_445500:
    // 0x445500: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x445500u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_445504:
    // 0x445504: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
label_445508:
    if (ctx->pc == 0x445508u) {
        ctx->pc = 0x445508u;
            // 0x445508: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->pc = 0x44550Cu;
        goto label_44550c;
    }
    ctx->pc = 0x445504u;
    {
        const bool branch_taken_0x445504 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x445508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x445504u;
            // 0x445508: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445504) {
            ctx->pc = 0x4454F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4454f0;
        }
    }
    ctx->pc = 0x44550Cu;
label_44550c:
    // 0x44550c: 0x38a30002  xori        $v1, $a1, 0x2
    ctx->pc = 0x44550cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
label_445510:
    // 0x445510: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x445510u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_445514:
    // 0x445514: 0xa1230600  sb          $v1, 0x600($t1)
    ctx->pc = 0x445514u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1536), (uint8_t)GPR_U32(ctx, 3));
label_445518:
    // 0x445518: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x445518u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_44551c:
    // 0x44551c: 0x1500ffee  bnez        $t0, . + 4 + (-0x12 << 2)
label_445520:
    if (ctx->pc == 0x445520u) {
        ctx->pc = 0x445520u;
            // 0x445520: 0x25290610  addiu       $t1, $t1, 0x610 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1552));
        ctx->pc = 0x445524u;
        goto label_445524;
    }
    ctx->pc = 0x44551Cu;
    {
        const bool branch_taken_0x44551c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x445520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44551Cu;
            // 0x445520: 0x25290610  addiu       $t1, $t1, 0x610 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44551c) {
            ctx->pc = 0x4454D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4454d8;
        }
    }
    ctx->pc = 0x445524u;
label_445524:
    // 0x445524: 0x0  nop
    ctx->pc = 0x445524u;
    // NOP
label_445528:
    // 0x445528: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x445528u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_44552c:
    // 0x44552c: 0x2b7182b  sltu        $v1, $s5, $s7
    ctx->pc = 0x44552cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_445530:
    // 0x445530: 0x1460ffa6  bnez        $v1, . + 4 + (-0x5A << 2)
label_445534:
    if (ctx->pc == 0x445534u) {
        ctx->pc = 0x445534u;
            // 0x445534: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x445538u;
        goto label_445538;
    }
    ctx->pc = 0x445530u;
    {
        const bool branch_taken_0x445530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x445534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x445530u;
            // 0x445534: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445530) {
            ctx->pc = 0x4453CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4453cc;
        }
    }
    ctx->pc = 0x445538u;
label_445538:
    // 0x445538: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x445538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_44553c:
    // 0x44553c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x44553cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_445540:
    // 0x445540: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x445540u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_445544:
    // 0x445544: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x445544u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_445548:
    // 0x445548: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x445548u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_44554c:
    // 0x44554c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x44554cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_445550:
    // 0x445550: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x445550u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_445554:
    // 0x445554: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x445554u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_445558:
    // 0x445558: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x445558u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44555c:
    // 0x44555c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44555cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_445560:
    // 0x445560: 0x3e00008  jr          $ra
label_445564:
    if (ctx->pc == 0x445564u) {
        ctx->pc = 0x445564u;
            // 0x445564: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x445568u;
        goto label_445568;
    }
    ctx->pc = 0x445560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x445564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x445560u;
            // 0x445564: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x445568u;
label_445568:
    // 0x445568: 0x0  nop
    ctx->pc = 0x445568u;
    // NOP
label_44556c:
    // 0x44556c: 0x0  nop
    ctx->pc = 0x44556cu;
    // NOP
label_445570:
    // 0x445570: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x445570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_445574:
    // 0x445574: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x445574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_445578:
    // 0x445578: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x445578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_44557c:
    // 0x44557c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x44557cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_445580:
    // 0x445580: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x445580u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_445584:
    // 0x445584: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x445584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_445588:
    // 0x445588: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x445588u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_44558c:
    // 0x44558c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44558cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_445590:
    // 0x445590: 0x8c900058  lw          $s0, 0x58($a0)
    ctx->pc = 0x445590u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_445594:
    // 0x445594: 0x1200006b  beqz        $s0, . + 4 + (0x6B << 2)
label_445598:
    if (ctx->pc == 0x445598u) {
        ctx->pc = 0x445598u;
            // 0x445598: 0x26710084  addiu       $s1, $s3, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 132));
        ctx->pc = 0x44559Cu;
        goto label_44559c;
    }
    ctx->pc = 0x445594u;
    {
        const bool branch_taken_0x445594 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x445598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x445594u;
            // 0x445598: 0x26710084  addiu       $s1, $s3, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445594) {
            ctx->pc = 0x445744u;
            goto label_445744;
        }
    }
    ctx->pc = 0x44559Cu;
label_44559c:
    // 0x44559c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x44559cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4455a0:
    // 0x4455a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4455a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4455a4:
    // 0x4455a4: 0x26450004  addiu       $a1, $s2, 0x4
    ctx->pc = 0x4455a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_4455a8:
    // 0x4455a8: 0xc075128  jal         func_1D44A0
label_4455ac:
    if (ctx->pc == 0x4455ACu) {
        ctx->pc = 0x4455ACu;
            // 0x4455ac: 0xae620054  sw          $v0, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x4455B0u;
        goto label_4455b0;
    }
    ctx->pc = 0x4455A8u;
    SET_GPR_U32(ctx, 31, 0x4455B0u);
    ctx->pc = 0x4455ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4455A8u;
            // 0x4455ac: 0xae620054  sw          $v0, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4455B0u; }
        if (ctx->pc != 0x4455B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4455B0u; }
        if (ctx->pc != 0x4455B0u) { return; }
    }
    ctx->pc = 0x4455B0u;
label_4455b0:
    // 0x4455b0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4455b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4455b4:
    // 0x4455b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4455b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4455b8:
    // 0x4455b8: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x4455b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_4455bc:
    // 0x4455bc: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x4455bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4455c0:
    // 0x4455c0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4455c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4455c4:
    // 0x4455c4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4455c8:
    if (ctx->pc == 0x4455C8u) {
        ctx->pc = 0x4455C8u;
            // 0x4455c8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x4455CCu;
        goto label_4455cc;
    }
    ctx->pc = 0x4455C4u;
    {
        const bool branch_taken_0x4455c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4455c4) {
            ctx->pc = 0x4455C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4455C4u;
            // 0x4455c8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4455D8u;
            goto label_4455d8;
        }
    }
    ctx->pc = 0x4455CCu;
label_4455cc:
    // 0x4455cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4455ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4455d0:
    // 0x4455d0: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x4455d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_4455d4:
    // 0x4455d4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4455d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4455d8:
    // 0x4455d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4455d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4455dc:
    // 0x4455dc: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4455dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4455e0:
    // 0x4455e0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4455e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4455e4:
    // 0x4455e4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4455e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4455e8:
    // 0x4455e8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4455ec:
    if (ctx->pc == 0x4455ECu) {
        ctx->pc = 0x4455ECu;
            // 0x4455ec: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x4455F0u;
        goto label_4455f0;
    }
    ctx->pc = 0x4455E8u;
    {
        const bool branch_taken_0x4455e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4455e8) {
            ctx->pc = 0x4455ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4455E8u;
            // 0x4455ec: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4455FCu;
            goto label_4455fc;
        }
    }
    ctx->pc = 0x4455F0u;
label_4455f0:
    // 0x4455f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4455f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4455f4:
    // 0x4455f4: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4455f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4455f8:
    // 0x4455f8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4455f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4455fc:
    // 0x4455fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4455fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_445600:
    // 0x445600: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x445600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_445604:
    // 0x445604: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x445604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_445608:
    // 0x445608: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x445608u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_44560c:
    // 0x44560c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_445610:
    if (ctx->pc == 0x445610u) {
        ctx->pc = 0x445610u;
            // 0x445610: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x445614u;
        goto label_445614;
    }
    ctx->pc = 0x44560Cu;
    {
        const bool branch_taken_0x44560c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x44560c) {
            ctx->pc = 0x445610u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44560Cu;
            // 0x445610: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x445620u;
            goto label_445620;
        }
    }
    ctx->pc = 0x445614u;
label_445614:
    // 0x445614: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x445614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_445618:
    // 0x445618: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x445618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_44561c:
    // 0x44561c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x44561cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_445620:
    // 0x445620: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x445620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_445624:
    // 0x445624: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x445624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_445628:
    // 0x445628: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x445628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_44562c:
    // 0x44562c: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x44562cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_445630:
    // 0x445630: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x445630u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_445634:
    // 0x445634: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_445638:
    if (ctx->pc == 0x445638u) {
        ctx->pc = 0x445638u;
            // 0x445638: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x44563Cu;
        goto label_44563c;
    }
    ctx->pc = 0x445634u;
    {
        const bool branch_taken_0x445634 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x445634) {
            ctx->pc = 0x445638u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x445634u;
            // 0x445638: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x445648u;
            goto label_445648;
        }
    }
    ctx->pc = 0x44563Cu;
label_44563c:
    // 0x44563c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44563cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_445640:
    // 0x445640: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x445640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_445644:
    // 0x445644: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x445644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_445648:
    // 0x445648: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x445648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44564c:
    // 0x44564c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x44564cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_445650:
    // 0x445650: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x445650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_445654:
    // 0x445654: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x445654u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_445658:
    // 0x445658: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x445658u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_44565c:
    // 0x44565c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_445660:
    if (ctx->pc == 0x445660u) {
        ctx->pc = 0x445660u;
            // 0x445660: 0x8e420020  lw          $v0, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->pc = 0x445664u;
        goto label_445664;
    }
    ctx->pc = 0x44565Cu;
    {
        const bool branch_taken_0x44565c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x44565c) {
            ctx->pc = 0x445660u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44565Cu;
            // 0x445660: 0x8e420020  lw          $v0, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x445670u;
            goto label_445670;
        }
    }
    ctx->pc = 0x445664u;
label_445664:
    // 0x445664: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x445664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_445668:
    // 0x445668: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x445668u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_44566c:
    // 0x44566c: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x44566cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_445670:
    // 0x445670: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x445670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_445674:
    // 0x445674: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x445674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_445678:
    // 0x445678: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x445678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44567c:
    // 0x44567c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x44567cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_445680:
    // 0x445680: 0xc074f30  jal         func_1D3CC0
label_445684:
    if (ctx->pc == 0x445684u) {
        ctx->pc = 0x445684u;
            // 0x445684: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x445688u;
        goto label_445688;
    }
    ctx->pc = 0x445680u;
    SET_GPR_U32(ctx, 31, 0x445688u);
    ctx->pc = 0x445684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x445680u;
            // 0x445684: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445688u; }
        if (ctx->pc != 0x445688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x445688u; }
        if (ctx->pc != 0x445688u) { return; }
    }
    ctx->pc = 0x445688u;
label_445688:
    // 0x445688: 0x8e460020  lw          $a2, 0x20($s2)
    ctx->pc = 0x445688u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_44568c:
    // 0x44568c: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x44568cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_445690:
    // 0x445690: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x445690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_445694:
    // 0x445694: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x445694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_445698:
    // 0x445698: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x445698u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_44569c:
    // 0x44569c: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x44569cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_4456a0:
    // 0x4456a0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4456a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_4456a4:
    // 0x4456a4: 0xc0751b8  jal         func_1D46E0
label_4456a8:
    if (ctx->pc == 0x4456A8u) {
        ctx->pc = 0x4456A8u;
            // 0x4456a8: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x4456ACu;
        goto label_4456ac;
    }
    ctx->pc = 0x4456A4u;
    SET_GPR_U32(ctx, 31, 0x4456ACu);
    ctx->pc = 0x4456A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4456A4u;
            // 0x4456a8: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4456ACu; }
        if (ctx->pc != 0x4456ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4456ACu; }
        if (ctx->pc != 0x4456ACu) { return; }
    }
    ctx->pc = 0x4456ACu;
label_4456ac:
    // 0x4456ac: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x4456acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4456b0:
    // 0x4456b0: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4456b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4456b4:
    // 0x4456b4: 0x320f809  jalr        $t9
label_4456b8:
    if (ctx->pc == 0x4456B8u) {
        ctx->pc = 0x4456B8u;
            // 0x4456b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4456BCu;
        goto label_4456bc;
    }
    ctx->pc = 0x4456B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4456BCu);
        ctx->pc = 0x4456B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4456B4u;
            // 0x4456b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4456BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4456BCu; }
            if (ctx->pc != 0x4456BCu) { return; }
        }
        }
    }
    ctx->pc = 0x4456BCu;
label_4456bc:
    // 0x4456bc: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x4456bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_4456c0:
    // 0x4456c0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4456c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4456c4:
    // 0x4456c4: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x4456c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_4456c8:
    // 0x4456c8: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4456c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4456cc:
    // 0x4456cc: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x4456ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4456d0:
    // 0x4456d0: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4456d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4456d4:
    // 0x4456d4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4456d8:
    if (ctx->pc == 0x4456D8u) {
        ctx->pc = 0x4456D8u;
            // 0x4456d8: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->pc = 0x4456DCu;
        goto label_4456dc;
    }
    ctx->pc = 0x4456D4u;
    {
        const bool branch_taken_0x4456d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4456d4) {
            ctx->pc = 0x4456D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4456D4u;
            // 0x4456d8: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4456E8u;
            goto label_4456e8;
        }
    }
    ctx->pc = 0x4456DCu;
label_4456dc:
    // 0x4456dc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4456dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4456e0:
    // 0x4456e0: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4456e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4456e4:
    // 0x4456e4: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x4456e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_4456e8:
    // 0x4456e8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4456e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4456ec:
    // 0x4456ec: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4456ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4456f0:
    // 0x4456f0: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4456f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4456f4:
    // 0x4456f4: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x4456f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4456f8:
    // 0x4456f8: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4456f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4456fc:
    // 0x4456fc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_445700:
    if (ctx->pc == 0x445700u) {
        ctx->pc = 0x445704u;
        goto label_445704;
    }
    ctx->pc = 0x4456FCu;
    {
        const bool branch_taken_0x4456fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4456fc) {
            ctx->pc = 0x44570Cu;
            goto label_44570c;
        }
    }
    ctx->pc = 0x445704u;
label_445704:
    // 0x445704: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x445704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_445708:
    // 0x445708: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x445708u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_44570c:
    // 0x44570c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x44570cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_445710:
    // 0x445710: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x445710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_445714:
    // 0x445714: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x445714u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_445718:
    // 0x445718: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_44571c:
    if (ctx->pc == 0x44571Cu) {
        ctx->pc = 0x445720u;
        goto label_445720;
    }
    ctx->pc = 0x445718u;
    {
        const bool branch_taken_0x445718 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x445718) {
            ctx->pc = 0x445728u;
            goto label_445728;
        }
    }
    ctx->pc = 0x445720u;
label_445720:
    // 0x445720: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x445720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_445724:
    // 0x445724: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x445724u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_445728:
    // 0x445728: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x445728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_44572c:
    // 0x44572c: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x44572cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_445730:
    // 0x445730: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x445730u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_445734:
    // 0x445734: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_445738:
    if (ctx->pc == 0x445738u) {
        ctx->pc = 0x445738u;
            // 0x445738: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x44573Cu;
        goto label_44573c;
    }
    ctx->pc = 0x445734u;
    {
        const bool branch_taken_0x445734 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x445734) {
            ctx->pc = 0x445738u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x445734u;
            // 0x445738: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x445748u;
            goto label_445748;
        }
    }
    ctx->pc = 0x44573Cu;
label_44573c:
    // 0x44573c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x44573cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_445740:
    // 0x445740: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x445740u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_445744:
    // 0x445744: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x445744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_445748:
    // 0x445748: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x445748u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_44574c:
    // 0x44574c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x44574cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_445750:
    // 0x445750: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x445750u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_445754:
    // 0x445754: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x445754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_445758:
    // 0x445758: 0x3e00008  jr          $ra
label_44575c:
    if (ctx->pc == 0x44575Cu) {
        ctx->pc = 0x44575Cu;
            // 0x44575c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x445760u;
        goto label_445760;
    }
    ctx->pc = 0x445758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44575Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x445758u;
            // 0x44575c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x445760u;
label_445760:
    // 0x445760: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x445760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_445764:
    // 0x445764: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x445764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_445768:
    // 0x445768: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x445768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_44576c:
    // 0x44576c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x44576cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_445770:
    // 0x445770: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x445770u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_445774:
    // 0x445774: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x445774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_445778:
    // 0x445778: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x445778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44577c:
    // 0x44577c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44577cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_445780:
    // 0x445780: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x445780u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_445784:
    // 0x445784: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_445788:
    if (ctx->pc == 0x445788u) {
        ctx->pc = 0x445788u;
            // 0x445788: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44578Cu;
        goto label_44578c;
    }
    ctx->pc = 0x445784u;
    {
        const bool branch_taken_0x445784 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x445788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x445784u;
            // 0x445788: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445784) {
            ctx->pc = 0x4457C8u;
            goto label_4457c8;
        }
    }
    ctx->pc = 0x44578Cu;
label_44578c:
    // 0x44578c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x44578cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_445790:
    // 0x445790: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x445790u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_445794:
    // 0x445794: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x445794u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_445798:
    // 0x445798: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x445798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_44579c:
    // 0x44579c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x44579cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4457a0:
    // 0x4457a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4457a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4457a4:
    // 0x4457a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4457a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4457a8:
    // 0x4457a8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4457a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4457ac:
    // 0x4457ac: 0x320f809  jalr        $t9
label_4457b0:
    if (ctx->pc == 0x4457B0u) {
        ctx->pc = 0x4457B4u;
        goto label_4457b4;
    }
    ctx->pc = 0x4457ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4457B4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4457B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4457B4u; }
            if (ctx->pc != 0x4457B4u) { return; }
        }
        }
    }
    ctx->pc = 0x4457B4u;
label_4457b4:
    // 0x4457b4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4457b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4457b8:
    // 0x4457b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4457b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4457bc:
    // 0x4457bc: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4457bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4457c0:
    // 0x4457c0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4457c4:
    if (ctx->pc == 0x4457C4u) {
        ctx->pc = 0x4457C4u;
            // 0x4457c4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4457C8u;
        goto label_4457c8;
    }
    ctx->pc = 0x4457C0u;
    {
        const bool branch_taken_0x4457c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4457C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4457C0u;
            // 0x4457c4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4457c0) {
            ctx->pc = 0x445798u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_445798;
        }
    }
    ctx->pc = 0x4457C8u;
label_4457c8:
    // 0x4457c8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4457c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4457cc:
    // 0x4457cc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4457ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4457d0:
    // 0x4457d0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4457d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4457d4:
    // 0x4457d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4457d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4457d8:
    // 0x4457d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4457d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4457dc:
    // 0x4457dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4457dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4457e0:
    // 0x4457e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4457e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4457e4:
    // 0x4457e4: 0x3e00008  jr          $ra
label_4457e8:
    if (ctx->pc == 0x4457E8u) {
        ctx->pc = 0x4457E8u;
            // 0x4457e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4457ECu;
        goto label_4457ec;
    }
    ctx->pc = 0x4457E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4457E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4457E4u;
            // 0x4457e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4457ECu;
label_4457ec:
    // 0x4457ec: 0x0  nop
    ctx->pc = 0x4457ecu;
    // NOP
label_4457f0:
    // 0x4457f0: 0x3e00008  jr          $ra
label_4457f4:
    if (ctx->pc == 0x4457F4u) {
        ctx->pc = 0x4457F4u;
            // 0x4457f4: 0x9082006c  lbu         $v0, 0x6C($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 108)));
        ctx->pc = 0x4457F8u;
        goto label_4457f8;
    }
    ctx->pc = 0x4457F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4457F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4457F0u;
            // 0x4457f4: 0x9082006c  lbu         $v0, 0x6C($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4457F8u;
label_4457f8:
    // 0x4457f8: 0x0  nop
    ctx->pc = 0x4457f8u;
    // NOP
label_4457fc:
    // 0x4457fc: 0x0  nop
    ctx->pc = 0x4457fcu;
    // NOP
label_445800:
    // 0x445800: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x445800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_445804:
    // 0x445804: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x445804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_445808:
    // 0x445808: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x445808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_44580c:
    // 0x44580c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x44580cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_445810:
    // 0x445810: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x445810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_445814:
    // 0x445814: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x445814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_445818:
    // 0x445818: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x445818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_44581c:
    // 0x44581c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x44581cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_445820:
    // 0x445820: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x445820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_445824:
    // 0x445824: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x445824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_445828:
    // 0x445828: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x445828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44582c:
    // 0x44582c: 0x8c970070  lw          $s7, 0x70($a0)
    ctx->pc = 0x44582cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_445830:
    // 0x445830: 0x12e0001f  beqz        $s7, . + 4 + (0x1F << 2)
label_445834:
    if (ctx->pc == 0x445834u) {
        ctx->pc = 0x445834u;
            // 0x445834: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x445838u;
        goto label_445838;
    }
    ctx->pc = 0x445830u;
    {
        const bool branch_taken_0x445830 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x445834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x445830u;
            // 0x445834: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445830) {
            ctx->pc = 0x4458B0u;
            goto label_4458b0;
        }
    }
    ctx->pc = 0x445838u;
label_445838:
    // 0x445838: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x445838u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44583c:
    // 0x44583c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x44583cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_445840:
    // 0x445840: 0x8fc30074  lw          $v1, 0x74($fp)
    ctx->pc = 0x445840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 116)));
label_445844:
    // 0x445844: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x445844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_445848:
    // 0x445848: 0x8c760000  lw          $s6, 0x0($v1)
    ctx->pc = 0x445848u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_44584c:
    // 0x44584c: 0x92d4006c  lbu         $s4, 0x6C($s6)
    ctx->pc = 0x44584cu;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 108)));
label_445850:
    // 0x445850: 0x12800011  beqz        $s4, . + 4 + (0x11 << 2)
label_445854:
    if (ctx->pc == 0x445854u) {
        ctx->pc = 0x445858u;
        goto label_445858;
    }
    ctx->pc = 0x445850u;
    {
        const bool branch_taken_0x445850 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x445850) {
            ctx->pc = 0x445898u;
            goto label_445898;
        }
    }
    ctx->pc = 0x445858u;
label_445858:
    // 0x445858: 0x8ed30068  lw          $s3, 0x68($s6)
    ctx->pc = 0x445858u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
label_44585c:
    // 0x44585c: 0x0  nop
    ctx->pc = 0x44585cu;
    // NOP
label_445860:
    // 0x445860: 0xa2600600  sb          $zero, 0x600($s3)
    ctx->pc = 0x445860u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1536), (uint8_t)GPR_U32(ctx, 0));
label_445864:
    // 0x445864: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x445864u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_445868:
    // 0x445868: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x445868u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_44586c:
    // 0x44586c: 0x0  nop
    ctx->pc = 0x44586cu;
    // NOP
label_445870:
    // 0x445870: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x445870u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_445874:
    // 0x445874: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x445874u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_445878:
    // 0x445878: 0x320f809  jalr        $t9
label_44587c:
    if (ctx->pc == 0x44587Cu) {
        ctx->pc = 0x44587Cu;
            // 0x44587c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x445880u;
        goto label_445880;
    }
    ctx->pc = 0x445878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x445880u);
        ctx->pc = 0x44587Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x445878u;
            // 0x44587c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x445880u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x445880u; }
            if (ctx->pc != 0x445880u) { return; }
        }
        }
    }
    ctx->pc = 0x445880u;
label_445880:
    // 0x445880: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x445880u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_445884:
    // 0x445884: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
label_445888:
    if (ctx->pc == 0x445888u) {
        ctx->pc = 0x445888u;
            // 0x445888: 0x26520300  addiu       $s2, $s2, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 768));
        ctx->pc = 0x44588Cu;
        goto label_44588c;
    }
    ctx->pc = 0x445884u;
    {
        const bool branch_taken_0x445884 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x445888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x445884u;
            // 0x445888: 0x26520300  addiu       $s2, $s2, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445884) {
            ctx->pc = 0x445870u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_445870;
        }
    }
    ctx->pc = 0x44588Cu;
label_44588c:
    // 0x44588c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x44588cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_445890:
    // 0x445890: 0x1680fff3  bnez        $s4, . + 4 + (-0xD << 2)
label_445894:
    if (ctx->pc == 0x445894u) {
        ctx->pc = 0x445894u;
            // 0x445894: 0x26730610  addiu       $s3, $s3, 0x610 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1552));
        ctx->pc = 0x445898u;
        goto label_445898;
    }
    ctx->pc = 0x445890u;
    {
        const bool branch_taken_0x445890 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x445894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x445890u;
            // 0x445894: 0x26730610  addiu       $s3, $s3, 0x610 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445890) {
            ctx->pc = 0x445860u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_445860;
        }
    }
    ctx->pc = 0x445898u;
label_445898:
    // 0x445898: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x445898u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_44589c:
    // 0x44589c: 0x2b7182b  sltu        $v1, $s5, $s7
    ctx->pc = 0x44589cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_4458a0:
    // 0x4458a0: 0xaec0005c  sw          $zero, 0x5C($s6)
    ctx->pc = 0x4458a0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 92), GPR_U32(ctx, 0));
label_4458a4:
    // 0x4458a4: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
label_4458a8:
    if (ctx->pc == 0x4458A8u) {
        ctx->pc = 0x4458A8u;
            // 0x4458a8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x4458ACu;
        goto label_4458ac;
    }
    ctx->pc = 0x4458A4u;
    {
        const bool branch_taken_0x4458a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4458A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4458A4u;
            // 0x4458a8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4458a4) {
            ctx->pc = 0x445840u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_445840;
        }
    }
    ctx->pc = 0x4458ACu;
label_4458ac:
    // 0x4458ac: 0x0  nop
    ctx->pc = 0x4458acu;
    // NOP
label_4458b0:
    // 0x4458b0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4458b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4458b4:
    // 0x4458b4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x4458b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4458b8:
    // 0x4458b8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4458b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4458bc:
    // 0x4458bc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4458bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4458c0:
    // 0x4458c0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4458c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4458c4:
    // 0x4458c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4458c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4458c8:
    // 0x4458c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4458c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4458cc:
    // 0x4458cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4458ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4458d0:
    // 0x4458d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4458d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4458d4:
    // 0x4458d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4458d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4458d8:
    // 0x4458d8: 0x3e00008  jr          $ra
label_4458dc:
    if (ctx->pc == 0x4458DCu) {
        ctx->pc = 0x4458DCu;
            // 0x4458dc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4458E0u;
        goto label_fallthrough_0x4458d8;
    }
    ctx->pc = 0x4458D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4458DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4458D8u;
            // 0x4458dc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x4458d8:
    ctx->pc = 0x4458E0u;
}
