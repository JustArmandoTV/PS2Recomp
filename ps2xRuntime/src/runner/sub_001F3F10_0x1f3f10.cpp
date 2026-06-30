#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F3F10
// Address: 0x1f3f10 - 0x1f4980
void sub_001F3F10_0x1f3f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3F10_0x1f3f10");
#endif

    switch (ctx->pc) {
        case 0x1f3f10u: goto label_1f3f10;
        case 0x1f3f14u: goto label_1f3f14;
        case 0x1f3f18u: goto label_1f3f18;
        case 0x1f3f1cu: goto label_1f3f1c;
        case 0x1f3f20u: goto label_1f3f20;
        case 0x1f3f24u: goto label_1f3f24;
        case 0x1f3f28u: goto label_1f3f28;
        case 0x1f3f2cu: goto label_1f3f2c;
        case 0x1f3f30u: goto label_1f3f30;
        case 0x1f3f34u: goto label_1f3f34;
        case 0x1f3f38u: goto label_1f3f38;
        case 0x1f3f3cu: goto label_1f3f3c;
        case 0x1f3f40u: goto label_1f3f40;
        case 0x1f3f44u: goto label_1f3f44;
        case 0x1f3f48u: goto label_1f3f48;
        case 0x1f3f4cu: goto label_1f3f4c;
        case 0x1f3f50u: goto label_1f3f50;
        case 0x1f3f54u: goto label_1f3f54;
        case 0x1f3f58u: goto label_1f3f58;
        case 0x1f3f5cu: goto label_1f3f5c;
        case 0x1f3f60u: goto label_1f3f60;
        case 0x1f3f64u: goto label_1f3f64;
        case 0x1f3f68u: goto label_1f3f68;
        case 0x1f3f6cu: goto label_1f3f6c;
        case 0x1f3f70u: goto label_1f3f70;
        case 0x1f3f74u: goto label_1f3f74;
        case 0x1f3f78u: goto label_1f3f78;
        case 0x1f3f7cu: goto label_1f3f7c;
        case 0x1f3f80u: goto label_1f3f80;
        case 0x1f3f84u: goto label_1f3f84;
        case 0x1f3f88u: goto label_1f3f88;
        case 0x1f3f8cu: goto label_1f3f8c;
        case 0x1f3f90u: goto label_1f3f90;
        case 0x1f3f94u: goto label_1f3f94;
        case 0x1f3f98u: goto label_1f3f98;
        case 0x1f3f9cu: goto label_1f3f9c;
        case 0x1f3fa0u: goto label_1f3fa0;
        case 0x1f3fa4u: goto label_1f3fa4;
        case 0x1f3fa8u: goto label_1f3fa8;
        case 0x1f3facu: goto label_1f3fac;
        case 0x1f3fb0u: goto label_1f3fb0;
        case 0x1f3fb4u: goto label_1f3fb4;
        case 0x1f3fb8u: goto label_1f3fb8;
        case 0x1f3fbcu: goto label_1f3fbc;
        case 0x1f3fc0u: goto label_1f3fc0;
        case 0x1f3fc4u: goto label_1f3fc4;
        case 0x1f3fc8u: goto label_1f3fc8;
        case 0x1f3fccu: goto label_1f3fcc;
        case 0x1f3fd0u: goto label_1f3fd0;
        case 0x1f3fd4u: goto label_1f3fd4;
        case 0x1f3fd8u: goto label_1f3fd8;
        case 0x1f3fdcu: goto label_1f3fdc;
        case 0x1f3fe0u: goto label_1f3fe0;
        case 0x1f3fe4u: goto label_1f3fe4;
        case 0x1f3fe8u: goto label_1f3fe8;
        case 0x1f3fecu: goto label_1f3fec;
        case 0x1f3ff0u: goto label_1f3ff0;
        case 0x1f3ff4u: goto label_1f3ff4;
        case 0x1f3ff8u: goto label_1f3ff8;
        case 0x1f3ffcu: goto label_1f3ffc;
        case 0x1f4000u: goto label_1f4000;
        case 0x1f4004u: goto label_1f4004;
        case 0x1f4008u: goto label_1f4008;
        case 0x1f400cu: goto label_1f400c;
        case 0x1f4010u: goto label_1f4010;
        case 0x1f4014u: goto label_1f4014;
        case 0x1f4018u: goto label_1f4018;
        case 0x1f401cu: goto label_1f401c;
        case 0x1f4020u: goto label_1f4020;
        case 0x1f4024u: goto label_1f4024;
        case 0x1f4028u: goto label_1f4028;
        case 0x1f402cu: goto label_1f402c;
        case 0x1f4030u: goto label_1f4030;
        case 0x1f4034u: goto label_1f4034;
        case 0x1f4038u: goto label_1f4038;
        case 0x1f403cu: goto label_1f403c;
        case 0x1f4040u: goto label_1f4040;
        case 0x1f4044u: goto label_1f4044;
        case 0x1f4048u: goto label_1f4048;
        case 0x1f404cu: goto label_1f404c;
        case 0x1f4050u: goto label_1f4050;
        case 0x1f4054u: goto label_1f4054;
        case 0x1f4058u: goto label_1f4058;
        case 0x1f405cu: goto label_1f405c;
        case 0x1f4060u: goto label_1f4060;
        case 0x1f4064u: goto label_1f4064;
        case 0x1f4068u: goto label_1f4068;
        case 0x1f406cu: goto label_1f406c;
        case 0x1f4070u: goto label_1f4070;
        case 0x1f4074u: goto label_1f4074;
        case 0x1f4078u: goto label_1f4078;
        case 0x1f407cu: goto label_1f407c;
        case 0x1f4080u: goto label_1f4080;
        case 0x1f4084u: goto label_1f4084;
        case 0x1f4088u: goto label_1f4088;
        case 0x1f408cu: goto label_1f408c;
        case 0x1f4090u: goto label_1f4090;
        case 0x1f4094u: goto label_1f4094;
        case 0x1f4098u: goto label_1f4098;
        case 0x1f409cu: goto label_1f409c;
        case 0x1f40a0u: goto label_1f40a0;
        case 0x1f40a4u: goto label_1f40a4;
        case 0x1f40a8u: goto label_1f40a8;
        case 0x1f40acu: goto label_1f40ac;
        case 0x1f40b0u: goto label_1f40b0;
        case 0x1f40b4u: goto label_1f40b4;
        case 0x1f40b8u: goto label_1f40b8;
        case 0x1f40bcu: goto label_1f40bc;
        case 0x1f40c0u: goto label_1f40c0;
        case 0x1f40c4u: goto label_1f40c4;
        case 0x1f40c8u: goto label_1f40c8;
        case 0x1f40ccu: goto label_1f40cc;
        case 0x1f40d0u: goto label_1f40d0;
        case 0x1f40d4u: goto label_1f40d4;
        case 0x1f40d8u: goto label_1f40d8;
        case 0x1f40dcu: goto label_1f40dc;
        case 0x1f40e0u: goto label_1f40e0;
        case 0x1f40e4u: goto label_1f40e4;
        case 0x1f40e8u: goto label_1f40e8;
        case 0x1f40ecu: goto label_1f40ec;
        case 0x1f40f0u: goto label_1f40f0;
        case 0x1f40f4u: goto label_1f40f4;
        case 0x1f40f8u: goto label_1f40f8;
        case 0x1f40fcu: goto label_1f40fc;
        case 0x1f4100u: goto label_1f4100;
        case 0x1f4104u: goto label_1f4104;
        case 0x1f4108u: goto label_1f4108;
        case 0x1f410cu: goto label_1f410c;
        case 0x1f4110u: goto label_1f4110;
        case 0x1f4114u: goto label_1f4114;
        case 0x1f4118u: goto label_1f4118;
        case 0x1f411cu: goto label_1f411c;
        case 0x1f4120u: goto label_1f4120;
        case 0x1f4124u: goto label_1f4124;
        case 0x1f4128u: goto label_1f4128;
        case 0x1f412cu: goto label_1f412c;
        case 0x1f4130u: goto label_1f4130;
        case 0x1f4134u: goto label_1f4134;
        case 0x1f4138u: goto label_1f4138;
        case 0x1f413cu: goto label_1f413c;
        case 0x1f4140u: goto label_1f4140;
        case 0x1f4144u: goto label_1f4144;
        case 0x1f4148u: goto label_1f4148;
        case 0x1f414cu: goto label_1f414c;
        case 0x1f4150u: goto label_1f4150;
        case 0x1f4154u: goto label_1f4154;
        case 0x1f4158u: goto label_1f4158;
        case 0x1f415cu: goto label_1f415c;
        case 0x1f4160u: goto label_1f4160;
        case 0x1f4164u: goto label_1f4164;
        case 0x1f4168u: goto label_1f4168;
        case 0x1f416cu: goto label_1f416c;
        case 0x1f4170u: goto label_1f4170;
        case 0x1f4174u: goto label_1f4174;
        case 0x1f4178u: goto label_1f4178;
        case 0x1f417cu: goto label_1f417c;
        case 0x1f4180u: goto label_1f4180;
        case 0x1f4184u: goto label_1f4184;
        case 0x1f4188u: goto label_1f4188;
        case 0x1f418cu: goto label_1f418c;
        case 0x1f4190u: goto label_1f4190;
        case 0x1f4194u: goto label_1f4194;
        case 0x1f4198u: goto label_1f4198;
        case 0x1f419cu: goto label_1f419c;
        case 0x1f41a0u: goto label_1f41a0;
        case 0x1f41a4u: goto label_1f41a4;
        case 0x1f41a8u: goto label_1f41a8;
        case 0x1f41acu: goto label_1f41ac;
        case 0x1f41b0u: goto label_1f41b0;
        case 0x1f41b4u: goto label_1f41b4;
        case 0x1f41b8u: goto label_1f41b8;
        case 0x1f41bcu: goto label_1f41bc;
        case 0x1f41c0u: goto label_1f41c0;
        case 0x1f41c4u: goto label_1f41c4;
        case 0x1f41c8u: goto label_1f41c8;
        case 0x1f41ccu: goto label_1f41cc;
        case 0x1f41d0u: goto label_1f41d0;
        case 0x1f41d4u: goto label_1f41d4;
        case 0x1f41d8u: goto label_1f41d8;
        case 0x1f41dcu: goto label_1f41dc;
        case 0x1f41e0u: goto label_1f41e0;
        case 0x1f41e4u: goto label_1f41e4;
        case 0x1f41e8u: goto label_1f41e8;
        case 0x1f41ecu: goto label_1f41ec;
        case 0x1f41f0u: goto label_1f41f0;
        case 0x1f41f4u: goto label_1f41f4;
        case 0x1f41f8u: goto label_1f41f8;
        case 0x1f41fcu: goto label_1f41fc;
        case 0x1f4200u: goto label_1f4200;
        case 0x1f4204u: goto label_1f4204;
        case 0x1f4208u: goto label_1f4208;
        case 0x1f420cu: goto label_1f420c;
        case 0x1f4210u: goto label_1f4210;
        case 0x1f4214u: goto label_1f4214;
        case 0x1f4218u: goto label_1f4218;
        case 0x1f421cu: goto label_1f421c;
        case 0x1f4220u: goto label_1f4220;
        case 0x1f4224u: goto label_1f4224;
        case 0x1f4228u: goto label_1f4228;
        case 0x1f422cu: goto label_1f422c;
        case 0x1f4230u: goto label_1f4230;
        case 0x1f4234u: goto label_1f4234;
        case 0x1f4238u: goto label_1f4238;
        case 0x1f423cu: goto label_1f423c;
        case 0x1f4240u: goto label_1f4240;
        case 0x1f4244u: goto label_1f4244;
        case 0x1f4248u: goto label_1f4248;
        case 0x1f424cu: goto label_1f424c;
        case 0x1f4250u: goto label_1f4250;
        case 0x1f4254u: goto label_1f4254;
        case 0x1f4258u: goto label_1f4258;
        case 0x1f425cu: goto label_1f425c;
        case 0x1f4260u: goto label_1f4260;
        case 0x1f4264u: goto label_1f4264;
        case 0x1f4268u: goto label_1f4268;
        case 0x1f426cu: goto label_1f426c;
        case 0x1f4270u: goto label_1f4270;
        case 0x1f4274u: goto label_1f4274;
        case 0x1f4278u: goto label_1f4278;
        case 0x1f427cu: goto label_1f427c;
        case 0x1f4280u: goto label_1f4280;
        case 0x1f4284u: goto label_1f4284;
        case 0x1f4288u: goto label_1f4288;
        case 0x1f428cu: goto label_1f428c;
        case 0x1f4290u: goto label_1f4290;
        case 0x1f4294u: goto label_1f4294;
        case 0x1f4298u: goto label_1f4298;
        case 0x1f429cu: goto label_1f429c;
        case 0x1f42a0u: goto label_1f42a0;
        case 0x1f42a4u: goto label_1f42a4;
        case 0x1f42a8u: goto label_1f42a8;
        case 0x1f42acu: goto label_1f42ac;
        case 0x1f42b0u: goto label_1f42b0;
        case 0x1f42b4u: goto label_1f42b4;
        case 0x1f42b8u: goto label_1f42b8;
        case 0x1f42bcu: goto label_1f42bc;
        case 0x1f42c0u: goto label_1f42c0;
        case 0x1f42c4u: goto label_1f42c4;
        case 0x1f42c8u: goto label_1f42c8;
        case 0x1f42ccu: goto label_1f42cc;
        case 0x1f42d0u: goto label_1f42d0;
        case 0x1f42d4u: goto label_1f42d4;
        case 0x1f42d8u: goto label_1f42d8;
        case 0x1f42dcu: goto label_1f42dc;
        case 0x1f42e0u: goto label_1f42e0;
        case 0x1f42e4u: goto label_1f42e4;
        case 0x1f42e8u: goto label_1f42e8;
        case 0x1f42ecu: goto label_1f42ec;
        case 0x1f42f0u: goto label_1f42f0;
        case 0x1f42f4u: goto label_1f42f4;
        case 0x1f42f8u: goto label_1f42f8;
        case 0x1f42fcu: goto label_1f42fc;
        case 0x1f4300u: goto label_1f4300;
        case 0x1f4304u: goto label_1f4304;
        case 0x1f4308u: goto label_1f4308;
        case 0x1f430cu: goto label_1f430c;
        case 0x1f4310u: goto label_1f4310;
        case 0x1f4314u: goto label_1f4314;
        case 0x1f4318u: goto label_1f4318;
        case 0x1f431cu: goto label_1f431c;
        case 0x1f4320u: goto label_1f4320;
        case 0x1f4324u: goto label_1f4324;
        case 0x1f4328u: goto label_1f4328;
        case 0x1f432cu: goto label_1f432c;
        case 0x1f4330u: goto label_1f4330;
        case 0x1f4334u: goto label_1f4334;
        case 0x1f4338u: goto label_1f4338;
        case 0x1f433cu: goto label_1f433c;
        case 0x1f4340u: goto label_1f4340;
        case 0x1f4344u: goto label_1f4344;
        case 0x1f4348u: goto label_1f4348;
        case 0x1f434cu: goto label_1f434c;
        case 0x1f4350u: goto label_1f4350;
        case 0x1f4354u: goto label_1f4354;
        case 0x1f4358u: goto label_1f4358;
        case 0x1f435cu: goto label_1f435c;
        case 0x1f4360u: goto label_1f4360;
        case 0x1f4364u: goto label_1f4364;
        case 0x1f4368u: goto label_1f4368;
        case 0x1f436cu: goto label_1f436c;
        case 0x1f4370u: goto label_1f4370;
        case 0x1f4374u: goto label_1f4374;
        case 0x1f4378u: goto label_1f4378;
        case 0x1f437cu: goto label_1f437c;
        case 0x1f4380u: goto label_1f4380;
        case 0x1f4384u: goto label_1f4384;
        case 0x1f4388u: goto label_1f4388;
        case 0x1f438cu: goto label_1f438c;
        case 0x1f4390u: goto label_1f4390;
        case 0x1f4394u: goto label_1f4394;
        case 0x1f4398u: goto label_1f4398;
        case 0x1f439cu: goto label_1f439c;
        case 0x1f43a0u: goto label_1f43a0;
        case 0x1f43a4u: goto label_1f43a4;
        case 0x1f43a8u: goto label_1f43a8;
        case 0x1f43acu: goto label_1f43ac;
        case 0x1f43b0u: goto label_1f43b0;
        case 0x1f43b4u: goto label_1f43b4;
        case 0x1f43b8u: goto label_1f43b8;
        case 0x1f43bcu: goto label_1f43bc;
        case 0x1f43c0u: goto label_1f43c0;
        case 0x1f43c4u: goto label_1f43c4;
        case 0x1f43c8u: goto label_1f43c8;
        case 0x1f43ccu: goto label_1f43cc;
        case 0x1f43d0u: goto label_1f43d0;
        case 0x1f43d4u: goto label_1f43d4;
        case 0x1f43d8u: goto label_1f43d8;
        case 0x1f43dcu: goto label_1f43dc;
        case 0x1f43e0u: goto label_1f43e0;
        case 0x1f43e4u: goto label_1f43e4;
        case 0x1f43e8u: goto label_1f43e8;
        case 0x1f43ecu: goto label_1f43ec;
        case 0x1f43f0u: goto label_1f43f0;
        case 0x1f43f4u: goto label_1f43f4;
        case 0x1f43f8u: goto label_1f43f8;
        case 0x1f43fcu: goto label_1f43fc;
        case 0x1f4400u: goto label_1f4400;
        case 0x1f4404u: goto label_1f4404;
        case 0x1f4408u: goto label_1f4408;
        case 0x1f440cu: goto label_1f440c;
        case 0x1f4410u: goto label_1f4410;
        case 0x1f4414u: goto label_1f4414;
        case 0x1f4418u: goto label_1f4418;
        case 0x1f441cu: goto label_1f441c;
        case 0x1f4420u: goto label_1f4420;
        case 0x1f4424u: goto label_1f4424;
        case 0x1f4428u: goto label_1f4428;
        case 0x1f442cu: goto label_1f442c;
        case 0x1f4430u: goto label_1f4430;
        case 0x1f4434u: goto label_1f4434;
        case 0x1f4438u: goto label_1f4438;
        case 0x1f443cu: goto label_1f443c;
        case 0x1f4440u: goto label_1f4440;
        case 0x1f4444u: goto label_1f4444;
        case 0x1f4448u: goto label_1f4448;
        case 0x1f444cu: goto label_1f444c;
        case 0x1f4450u: goto label_1f4450;
        case 0x1f4454u: goto label_1f4454;
        case 0x1f4458u: goto label_1f4458;
        case 0x1f445cu: goto label_1f445c;
        case 0x1f4460u: goto label_1f4460;
        case 0x1f4464u: goto label_1f4464;
        case 0x1f4468u: goto label_1f4468;
        case 0x1f446cu: goto label_1f446c;
        case 0x1f4470u: goto label_1f4470;
        case 0x1f4474u: goto label_1f4474;
        case 0x1f4478u: goto label_1f4478;
        case 0x1f447cu: goto label_1f447c;
        case 0x1f4480u: goto label_1f4480;
        case 0x1f4484u: goto label_1f4484;
        case 0x1f4488u: goto label_1f4488;
        case 0x1f448cu: goto label_1f448c;
        case 0x1f4490u: goto label_1f4490;
        case 0x1f4494u: goto label_1f4494;
        case 0x1f4498u: goto label_1f4498;
        case 0x1f449cu: goto label_1f449c;
        case 0x1f44a0u: goto label_1f44a0;
        case 0x1f44a4u: goto label_1f44a4;
        case 0x1f44a8u: goto label_1f44a8;
        case 0x1f44acu: goto label_1f44ac;
        case 0x1f44b0u: goto label_1f44b0;
        case 0x1f44b4u: goto label_1f44b4;
        case 0x1f44b8u: goto label_1f44b8;
        case 0x1f44bcu: goto label_1f44bc;
        case 0x1f44c0u: goto label_1f44c0;
        case 0x1f44c4u: goto label_1f44c4;
        case 0x1f44c8u: goto label_1f44c8;
        case 0x1f44ccu: goto label_1f44cc;
        case 0x1f44d0u: goto label_1f44d0;
        case 0x1f44d4u: goto label_1f44d4;
        case 0x1f44d8u: goto label_1f44d8;
        case 0x1f44dcu: goto label_1f44dc;
        case 0x1f44e0u: goto label_1f44e0;
        case 0x1f44e4u: goto label_1f44e4;
        case 0x1f44e8u: goto label_1f44e8;
        case 0x1f44ecu: goto label_1f44ec;
        case 0x1f44f0u: goto label_1f44f0;
        case 0x1f44f4u: goto label_1f44f4;
        case 0x1f44f8u: goto label_1f44f8;
        case 0x1f44fcu: goto label_1f44fc;
        case 0x1f4500u: goto label_1f4500;
        case 0x1f4504u: goto label_1f4504;
        case 0x1f4508u: goto label_1f4508;
        case 0x1f450cu: goto label_1f450c;
        case 0x1f4510u: goto label_1f4510;
        case 0x1f4514u: goto label_1f4514;
        case 0x1f4518u: goto label_1f4518;
        case 0x1f451cu: goto label_1f451c;
        case 0x1f4520u: goto label_1f4520;
        case 0x1f4524u: goto label_1f4524;
        case 0x1f4528u: goto label_1f4528;
        case 0x1f452cu: goto label_1f452c;
        case 0x1f4530u: goto label_1f4530;
        case 0x1f4534u: goto label_1f4534;
        case 0x1f4538u: goto label_1f4538;
        case 0x1f453cu: goto label_1f453c;
        case 0x1f4540u: goto label_1f4540;
        case 0x1f4544u: goto label_1f4544;
        case 0x1f4548u: goto label_1f4548;
        case 0x1f454cu: goto label_1f454c;
        case 0x1f4550u: goto label_1f4550;
        case 0x1f4554u: goto label_1f4554;
        case 0x1f4558u: goto label_1f4558;
        case 0x1f455cu: goto label_1f455c;
        case 0x1f4560u: goto label_1f4560;
        case 0x1f4564u: goto label_1f4564;
        case 0x1f4568u: goto label_1f4568;
        case 0x1f456cu: goto label_1f456c;
        case 0x1f4570u: goto label_1f4570;
        case 0x1f4574u: goto label_1f4574;
        case 0x1f4578u: goto label_1f4578;
        case 0x1f457cu: goto label_1f457c;
        case 0x1f4580u: goto label_1f4580;
        case 0x1f4584u: goto label_1f4584;
        case 0x1f4588u: goto label_1f4588;
        case 0x1f458cu: goto label_1f458c;
        case 0x1f4590u: goto label_1f4590;
        case 0x1f4594u: goto label_1f4594;
        case 0x1f4598u: goto label_1f4598;
        case 0x1f459cu: goto label_1f459c;
        case 0x1f45a0u: goto label_1f45a0;
        case 0x1f45a4u: goto label_1f45a4;
        case 0x1f45a8u: goto label_1f45a8;
        case 0x1f45acu: goto label_1f45ac;
        case 0x1f45b0u: goto label_1f45b0;
        case 0x1f45b4u: goto label_1f45b4;
        case 0x1f45b8u: goto label_1f45b8;
        case 0x1f45bcu: goto label_1f45bc;
        case 0x1f45c0u: goto label_1f45c0;
        case 0x1f45c4u: goto label_1f45c4;
        case 0x1f45c8u: goto label_1f45c8;
        case 0x1f45ccu: goto label_1f45cc;
        case 0x1f45d0u: goto label_1f45d0;
        case 0x1f45d4u: goto label_1f45d4;
        case 0x1f45d8u: goto label_1f45d8;
        case 0x1f45dcu: goto label_1f45dc;
        case 0x1f45e0u: goto label_1f45e0;
        case 0x1f45e4u: goto label_1f45e4;
        case 0x1f45e8u: goto label_1f45e8;
        case 0x1f45ecu: goto label_1f45ec;
        case 0x1f45f0u: goto label_1f45f0;
        case 0x1f45f4u: goto label_1f45f4;
        case 0x1f45f8u: goto label_1f45f8;
        case 0x1f45fcu: goto label_1f45fc;
        case 0x1f4600u: goto label_1f4600;
        case 0x1f4604u: goto label_1f4604;
        case 0x1f4608u: goto label_1f4608;
        case 0x1f460cu: goto label_1f460c;
        case 0x1f4610u: goto label_1f4610;
        case 0x1f4614u: goto label_1f4614;
        case 0x1f4618u: goto label_1f4618;
        case 0x1f461cu: goto label_1f461c;
        case 0x1f4620u: goto label_1f4620;
        case 0x1f4624u: goto label_1f4624;
        case 0x1f4628u: goto label_1f4628;
        case 0x1f462cu: goto label_1f462c;
        case 0x1f4630u: goto label_1f4630;
        case 0x1f4634u: goto label_1f4634;
        case 0x1f4638u: goto label_1f4638;
        case 0x1f463cu: goto label_1f463c;
        case 0x1f4640u: goto label_1f4640;
        case 0x1f4644u: goto label_1f4644;
        case 0x1f4648u: goto label_1f4648;
        case 0x1f464cu: goto label_1f464c;
        case 0x1f4650u: goto label_1f4650;
        case 0x1f4654u: goto label_1f4654;
        case 0x1f4658u: goto label_1f4658;
        case 0x1f465cu: goto label_1f465c;
        case 0x1f4660u: goto label_1f4660;
        case 0x1f4664u: goto label_1f4664;
        case 0x1f4668u: goto label_1f4668;
        case 0x1f466cu: goto label_1f466c;
        case 0x1f4670u: goto label_1f4670;
        case 0x1f4674u: goto label_1f4674;
        case 0x1f4678u: goto label_1f4678;
        case 0x1f467cu: goto label_1f467c;
        case 0x1f4680u: goto label_1f4680;
        case 0x1f4684u: goto label_1f4684;
        case 0x1f4688u: goto label_1f4688;
        case 0x1f468cu: goto label_1f468c;
        case 0x1f4690u: goto label_1f4690;
        case 0x1f4694u: goto label_1f4694;
        case 0x1f4698u: goto label_1f4698;
        case 0x1f469cu: goto label_1f469c;
        case 0x1f46a0u: goto label_1f46a0;
        case 0x1f46a4u: goto label_1f46a4;
        case 0x1f46a8u: goto label_1f46a8;
        case 0x1f46acu: goto label_1f46ac;
        case 0x1f46b0u: goto label_1f46b0;
        case 0x1f46b4u: goto label_1f46b4;
        case 0x1f46b8u: goto label_1f46b8;
        case 0x1f46bcu: goto label_1f46bc;
        case 0x1f46c0u: goto label_1f46c0;
        case 0x1f46c4u: goto label_1f46c4;
        case 0x1f46c8u: goto label_1f46c8;
        case 0x1f46ccu: goto label_1f46cc;
        case 0x1f46d0u: goto label_1f46d0;
        case 0x1f46d4u: goto label_1f46d4;
        case 0x1f46d8u: goto label_1f46d8;
        case 0x1f46dcu: goto label_1f46dc;
        case 0x1f46e0u: goto label_1f46e0;
        case 0x1f46e4u: goto label_1f46e4;
        case 0x1f46e8u: goto label_1f46e8;
        case 0x1f46ecu: goto label_1f46ec;
        case 0x1f46f0u: goto label_1f46f0;
        case 0x1f46f4u: goto label_1f46f4;
        case 0x1f46f8u: goto label_1f46f8;
        case 0x1f46fcu: goto label_1f46fc;
        case 0x1f4700u: goto label_1f4700;
        case 0x1f4704u: goto label_1f4704;
        case 0x1f4708u: goto label_1f4708;
        case 0x1f470cu: goto label_1f470c;
        case 0x1f4710u: goto label_1f4710;
        case 0x1f4714u: goto label_1f4714;
        case 0x1f4718u: goto label_1f4718;
        case 0x1f471cu: goto label_1f471c;
        case 0x1f4720u: goto label_1f4720;
        case 0x1f4724u: goto label_1f4724;
        case 0x1f4728u: goto label_1f4728;
        case 0x1f472cu: goto label_1f472c;
        case 0x1f4730u: goto label_1f4730;
        case 0x1f4734u: goto label_1f4734;
        case 0x1f4738u: goto label_1f4738;
        case 0x1f473cu: goto label_1f473c;
        case 0x1f4740u: goto label_1f4740;
        case 0x1f4744u: goto label_1f4744;
        case 0x1f4748u: goto label_1f4748;
        case 0x1f474cu: goto label_1f474c;
        case 0x1f4750u: goto label_1f4750;
        case 0x1f4754u: goto label_1f4754;
        case 0x1f4758u: goto label_1f4758;
        case 0x1f475cu: goto label_1f475c;
        case 0x1f4760u: goto label_1f4760;
        case 0x1f4764u: goto label_1f4764;
        case 0x1f4768u: goto label_1f4768;
        case 0x1f476cu: goto label_1f476c;
        case 0x1f4770u: goto label_1f4770;
        case 0x1f4774u: goto label_1f4774;
        case 0x1f4778u: goto label_1f4778;
        case 0x1f477cu: goto label_1f477c;
        case 0x1f4780u: goto label_1f4780;
        case 0x1f4784u: goto label_1f4784;
        case 0x1f4788u: goto label_1f4788;
        case 0x1f478cu: goto label_1f478c;
        case 0x1f4790u: goto label_1f4790;
        case 0x1f4794u: goto label_1f4794;
        case 0x1f4798u: goto label_1f4798;
        case 0x1f479cu: goto label_1f479c;
        case 0x1f47a0u: goto label_1f47a0;
        case 0x1f47a4u: goto label_1f47a4;
        case 0x1f47a8u: goto label_1f47a8;
        case 0x1f47acu: goto label_1f47ac;
        case 0x1f47b0u: goto label_1f47b0;
        case 0x1f47b4u: goto label_1f47b4;
        case 0x1f47b8u: goto label_1f47b8;
        case 0x1f47bcu: goto label_1f47bc;
        case 0x1f47c0u: goto label_1f47c0;
        case 0x1f47c4u: goto label_1f47c4;
        case 0x1f47c8u: goto label_1f47c8;
        case 0x1f47ccu: goto label_1f47cc;
        case 0x1f47d0u: goto label_1f47d0;
        case 0x1f47d4u: goto label_1f47d4;
        case 0x1f47d8u: goto label_1f47d8;
        case 0x1f47dcu: goto label_1f47dc;
        case 0x1f47e0u: goto label_1f47e0;
        case 0x1f47e4u: goto label_1f47e4;
        case 0x1f47e8u: goto label_1f47e8;
        case 0x1f47ecu: goto label_1f47ec;
        case 0x1f47f0u: goto label_1f47f0;
        case 0x1f47f4u: goto label_1f47f4;
        case 0x1f47f8u: goto label_1f47f8;
        case 0x1f47fcu: goto label_1f47fc;
        case 0x1f4800u: goto label_1f4800;
        case 0x1f4804u: goto label_1f4804;
        case 0x1f4808u: goto label_1f4808;
        case 0x1f480cu: goto label_1f480c;
        case 0x1f4810u: goto label_1f4810;
        case 0x1f4814u: goto label_1f4814;
        case 0x1f4818u: goto label_1f4818;
        case 0x1f481cu: goto label_1f481c;
        case 0x1f4820u: goto label_1f4820;
        case 0x1f4824u: goto label_1f4824;
        case 0x1f4828u: goto label_1f4828;
        case 0x1f482cu: goto label_1f482c;
        case 0x1f4830u: goto label_1f4830;
        case 0x1f4834u: goto label_1f4834;
        case 0x1f4838u: goto label_1f4838;
        case 0x1f483cu: goto label_1f483c;
        case 0x1f4840u: goto label_1f4840;
        case 0x1f4844u: goto label_1f4844;
        case 0x1f4848u: goto label_1f4848;
        case 0x1f484cu: goto label_1f484c;
        case 0x1f4850u: goto label_1f4850;
        case 0x1f4854u: goto label_1f4854;
        case 0x1f4858u: goto label_1f4858;
        case 0x1f485cu: goto label_1f485c;
        case 0x1f4860u: goto label_1f4860;
        case 0x1f4864u: goto label_1f4864;
        case 0x1f4868u: goto label_1f4868;
        case 0x1f486cu: goto label_1f486c;
        case 0x1f4870u: goto label_1f4870;
        case 0x1f4874u: goto label_1f4874;
        case 0x1f4878u: goto label_1f4878;
        case 0x1f487cu: goto label_1f487c;
        case 0x1f4880u: goto label_1f4880;
        case 0x1f4884u: goto label_1f4884;
        case 0x1f4888u: goto label_1f4888;
        case 0x1f488cu: goto label_1f488c;
        case 0x1f4890u: goto label_1f4890;
        case 0x1f4894u: goto label_1f4894;
        case 0x1f4898u: goto label_1f4898;
        case 0x1f489cu: goto label_1f489c;
        case 0x1f48a0u: goto label_1f48a0;
        case 0x1f48a4u: goto label_1f48a4;
        case 0x1f48a8u: goto label_1f48a8;
        case 0x1f48acu: goto label_1f48ac;
        case 0x1f48b0u: goto label_1f48b0;
        case 0x1f48b4u: goto label_1f48b4;
        case 0x1f48b8u: goto label_1f48b8;
        case 0x1f48bcu: goto label_1f48bc;
        case 0x1f48c0u: goto label_1f48c0;
        case 0x1f48c4u: goto label_1f48c4;
        case 0x1f48c8u: goto label_1f48c8;
        case 0x1f48ccu: goto label_1f48cc;
        case 0x1f48d0u: goto label_1f48d0;
        case 0x1f48d4u: goto label_1f48d4;
        case 0x1f48d8u: goto label_1f48d8;
        case 0x1f48dcu: goto label_1f48dc;
        case 0x1f48e0u: goto label_1f48e0;
        case 0x1f48e4u: goto label_1f48e4;
        case 0x1f48e8u: goto label_1f48e8;
        case 0x1f48ecu: goto label_1f48ec;
        case 0x1f48f0u: goto label_1f48f0;
        case 0x1f48f4u: goto label_1f48f4;
        case 0x1f48f8u: goto label_1f48f8;
        case 0x1f48fcu: goto label_1f48fc;
        case 0x1f4900u: goto label_1f4900;
        case 0x1f4904u: goto label_1f4904;
        case 0x1f4908u: goto label_1f4908;
        case 0x1f490cu: goto label_1f490c;
        case 0x1f4910u: goto label_1f4910;
        case 0x1f4914u: goto label_1f4914;
        case 0x1f4918u: goto label_1f4918;
        case 0x1f491cu: goto label_1f491c;
        case 0x1f4920u: goto label_1f4920;
        case 0x1f4924u: goto label_1f4924;
        case 0x1f4928u: goto label_1f4928;
        case 0x1f492cu: goto label_1f492c;
        case 0x1f4930u: goto label_1f4930;
        case 0x1f4934u: goto label_1f4934;
        case 0x1f4938u: goto label_1f4938;
        case 0x1f493cu: goto label_1f493c;
        case 0x1f4940u: goto label_1f4940;
        case 0x1f4944u: goto label_1f4944;
        case 0x1f4948u: goto label_1f4948;
        case 0x1f494cu: goto label_1f494c;
        case 0x1f4950u: goto label_1f4950;
        case 0x1f4954u: goto label_1f4954;
        case 0x1f4958u: goto label_1f4958;
        case 0x1f495cu: goto label_1f495c;
        case 0x1f4960u: goto label_1f4960;
        case 0x1f4964u: goto label_1f4964;
        case 0x1f4968u: goto label_1f4968;
        case 0x1f496cu: goto label_1f496c;
        case 0x1f4970u: goto label_1f4970;
        case 0x1f4974u: goto label_1f4974;
        case 0x1f4978u: goto label_1f4978;
        case 0x1f497cu: goto label_1f497c;
        default: break;
    }

    ctx->pc = 0x1f3f10u;

label_1f3f10:
    // 0x1f3f10: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x1f3f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_1f3f14:
    // 0x1f3f14: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1f3f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1f3f18:
    // 0x1f3f18: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1f3f18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f3f1c:
    // 0x1f3f1c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1f3f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1f3f20:
    // 0x1f3f20: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1f3f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1f3f24:
    // 0x1f3f24: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f3f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1f3f28:
    // 0x1f3f28: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1f3f28u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f3f2c:
    // 0x1f3f2c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f3f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f3f30:
    // 0x1f3f30: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1f3f30u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f3f34:
    // 0x1f3f34: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f3f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f3f38:
    // 0x1f3f38: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1f3f38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f3f3c:
    // 0x1f3f3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f3f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f3f40:
    // 0x1f3f40: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1f3f40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f3f44:
    // 0x1f3f44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f3f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f3f48:
    // 0x1f3f48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f3f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f3f4c:
    // 0x1f3f4c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1f3f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1f3f50:
    // 0x1f3f50: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x1f3f50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f3f54:
    // 0x1f3f54: 0xc4700004  lwc1        $f16, 0x4($v1)
    ctx->pc = 0x1f3f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_1f3f58:
    // 0x1f3f58: 0xc46f0008  lwc1        $f15, 0x8($v1)
    ctx->pc = 0x1f3f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1f3f5c:
    // 0x1f3f5c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1f3f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1f3f60:
    // 0x1f3f60: 0xc46e000c  lwc1        $f14, 0xC($v1)
    ctx->pc = 0x1f3f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1f3f64:
    // 0x1f3f64: 0xc46d0010  lwc1        $f13, 0x10($v1)
    ctx->pc = 0x1f3f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1f3f68:
    // 0x1f3f68: 0xc46b0014  lwc1        $f11, 0x14($v1)
    ctx->pc = 0x1f3f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1f3f6c:
    // 0x1f3f6c: 0xc46a0018  lwc1        $f10, 0x18($v1)
    ctx->pc = 0x1f3f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1f3f70:
    // 0x1f3f70: 0xc469001c  lwc1        $f9, 0x1C($v1)
    ctx->pc = 0x1f3f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1f3f74:
    // 0x1f3f74: 0xc4680020  lwc1        $f8, 0x20($v1)
    ctx->pc = 0x1f3f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1f3f78:
    // 0x1f3f78: 0xc4670024  lwc1        $f7, 0x24($v1)
    ctx->pc = 0x1f3f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f3f7c:
    // 0x1f3f7c: 0xc4660028  lwc1        $f6, 0x28($v1)
    ctx->pc = 0x1f3f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f3f80:
    // 0x1f3f80: 0xc465002c  lwc1        $f5, 0x2C($v1)
    ctx->pc = 0x1f3f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f3f84:
    // 0x1f3f84: 0xc4640030  lwc1        $f4, 0x30($v1)
    ctx->pc = 0x1f3f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f3f88:
    // 0x1f3f88: 0xc4630034  lwc1        $f3, 0x34($v1)
    ctx->pc = 0x1f3f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f3f8c:
    // 0x1f3f8c: 0xc4620038  lwc1        $f2, 0x38($v1)
    ctx->pc = 0x1f3f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f3f90:
    // 0x1f3f90: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x1f3f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f3f94:
    // 0x1f3f94: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1f3f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3f98:
    // 0x1f3f98: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1f3f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1f3f9c:
    // 0x1f3f9c: 0xe7b000d4  swc1        $f16, 0xD4($sp)
    ctx->pc = 0x1f3f9cu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_1f3fa0:
    // 0x1f3fa0: 0xe7af00d8  swc1        $f15, 0xD8($sp)
    ctx->pc = 0x1f3fa0u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1f3fa4:
    // 0x1f3fa4: 0xe7ae00dc  swc1        $f14, 0xDC($sp)
    ctx->pc = 0x1f3fa4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_1f3fa8:
    // 0x1f3fa8: 0xe7ad00e0  swc1        $f13, 0xE0($sp)
    ctx->pc = 0x1f3fa8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1f3fac:
    // 0x1f3fac: 0xe7ab00e4  swc1        $f11, 0xE4($sp)
    ctx->pc = 0x1f3facu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_1f3fb0:
    // 0x1f3fb0: 0xe7aa00e8  swc1        $f10, 0xE8($sp)
    ctx->pc = 0x1f3fb0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1f3fb4:
    // 0x1f3fb4: 0xe7a900ec  swc1        $f9, 0xEC($sp)
    ctx->pc = 0x1f3fb4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_1f3fb8:
    // 0x1f3fb8: 0xe7a800f0  swc1        $f8, 0xF0($sp)
    ctx->pc = 0x1f3fb8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1f3fbc:
    // 0x1f3fbc: 0xe7a700f4  swc1        $f7, 0xF4($sp)
    ctx->pc = 0x1f3fbcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_1f3fc0:
    // 0x1f3fc0: 0xe7a600f8  swc1        $f6, 0xF8($sp)
    ctx->pc = 0x1f3fc0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1f3fc4:
    // 0x1f3fc4: 0xe7a500fc  swc1        $f5, 0xFC($sp)
    ctx->pc = 0x1f3fc4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_1f3fc8:
    // 0x1f3fc8: 0xe7a40100  swc1        $f4, 0x100($sp)
    ctx->pc = 0x1f3fc8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1f3fcc:
    // 0x1f3fcc: 0xe7a30104  swc1        $f3, 0x104($sp)
    ctx->pc = 0x1f3fccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_1f3fd0:
    // 0x1f3fd0: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x1f3fd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_1f3fd4:
    // 0x1f3fd4: 0xe7a1010c  swc1        $f1, 0x10C($sp)
    ctx->pc = 0x1f3fd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_1f3fd8:
    // 0x1f3fd8: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x1f3fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3fdc:
    // 0x1f3fdc: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x1f3fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_1f3fe0:
    // 0x1f3fe0: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x1f3fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3fe4:
    // 0x1f3fe4: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x1f3fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_1f3fe8:
    // 0x1f3fe8: 0xc4600048  lwc1        $f0, 0x48($v1)
    ctx->pc = 0x1f3fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3fec:
    // 0x1f3fec: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x1f3fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_1f3ff0:
    // 0x1f3ff0: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x1f3ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3ff4:
    // 0x1f3ff4: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x1f3ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_1f3ff8:
    // 0x1f3ff8: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x1f3ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f3ffc:
    // 0x1f3ffc: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x1f3ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_1f4000:
    // 0x1f4000: 0xc4600054  lwc1        $f0, 0x54($v1)
    ctx->pc = 0x1f4000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4004:
    // 0x1f4004: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x1f4004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_1f4008:
    // 0x1f4008: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x1f4008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f400c:
    // 0x1f400c: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x1f400cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_1f4010:
    // 0x1f4010: 0xc460005c  lwc1        $f0, 0x5C($v1)
    ctx->pc = 0x1f4010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4014:
    // 0x1f4014: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x1f4014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_1f4018:
    // 0x1f4018: 0xc4600060  lwc1        $f0, 0x60($v1)
    ctx->pc = 0x1f4018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f401c:
    // 0x1f401c: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x1f401cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_1f4020:
    // 0x1f4020: 0xc4600064  lwc1        $f0, 0x64($v1)
    ctx->pc = 0x1f4020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4024:
    // 0x1f4024: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x1f4024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_1f4028:
    // 0x1f4028: 0xc4600068  lwc1        $f0, 0x68($v1)
    ctx->pc = 0x1f4028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f402c:
    // 0x1f402c: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x1f402cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_1f4030:
    // 0x1f4030: 0xc460006c  lwc1        $f0, 0x6C($v1)
    ctx->pc = 0x1f4030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4034:
    // 0x1f4034: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x1f4034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_1f4038:
    // 0x1f4038: 0xc4600070  lwc1        $f0, 0x70($v1)
    ctx->pc = 0x1f4038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f403c:
    // 0x1f403c: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x1f403cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_1f4040:
    // 0x1f4040: 0xc4600074  lwc1        $f0, 0x74($v1)
    ctx->pc = 0x1f4040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4044:
    // 0x1f4044: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1f4044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_1f4048:
    // 0x1f4048: 0xc4600078  lwc1        $f0, 0x78($v1)
    ctx->pc = 0x1f4048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f404c:
    // 0x1f404c: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x1f404cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_1f4050:
    // 0x1f4050: 0xc460007c  lwc1        $f0, 0x7C($v1)
    ctx->pc = 0x1f4050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4054:
    // 0x1f4054: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x1f4054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_1f4058:
    // 0x1f4058: 0xc4600080  lwc1        $f0, 0x80($v1)
    ctx->pc = 0x1f4058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f405c:
    // 0x1f405c: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1f405cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_1f4060:
    // 0x1f4060: 0xc4600084  lwc1        $f0, 0x84($v1)
    ctx->pc = 0x1f4060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4064:
    // 0x1f4064: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x1f4064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_1f4068:
    // 0x1f4068: 0xc4600088  lwc1        $f0, 0x88($v1)
    ctx->pc = 0x1f4068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f406c:
    // 0x1f406c: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x1f406cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_1f4070:
    // 0x1f4070: 0xc460008c  lwc1        $f0, 0x8C($v1)
    ctx->pc = 0x1f4070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4074:
    // 0x1f4074: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x1f4074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_1f4078:
    // 0x1f4078: 0xc4600090  lwc1        $f0, 0x90($v1)
    ctx->pc = 0x1f4078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f407c:
    // 0x1f407c: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x1f407cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_1f4080:
    // 0x1f4080: 0xc4600094  lwc1        $f0, 0x94($v1)
    ctx->pc = 0x1f4080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4084:
    // 0x1f4084: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x1f4084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_1f4088:
    // 0x1f4088: 0xc4600098  lwc1        $f0, 0x98($v1)
    ctx->pc = 0x1f4088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f408c:
    // 0x1f408c: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x1f408cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_1f4090:
    // 0x1f4090: 0xc460009c  lwc1        $f0, 0x9C($v1)
    ctx->pc = 0x1f4090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4094:
    // 0x1f4094: 0xe7a0016c  swc1        $f0, 0x16C($sp)
    ctx->pc = 0x1f4094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
label_1f4098:
    // 0x1f4098: 0xc46000a0  lwc1        $f0, 0xA0($v1)
    ctx->pc = 0x1f4098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f409c:
    // 0x1f409c: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x1f409cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_1f40a0:
    // 0x1f40a0: 0xc46000a4  lwc1        $f0, 0xA4($v1)
    ctx->pc = 0x1f40a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f40a4:
    // 0x1f40a4: 0xe7a00174  swc1        $f0, 0x174($sp)
    ctx->pc = 0x1f40a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_1f40a8:
    // 0x1f40a8: 0xc46000a8  lwc1        $f0, 0xA8($v1)
    ctx->pc = 0x1f40a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f40ac:
    // 0x1f40ac: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x1f40acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_1f40b0:
    // 0x1f40b0: 0xc46000ac  lwc1        $f0, 0xAC($v1)
    ctx->pc = 0x1f40b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f40b4:
    // 0x1f40b4: 0xe7a0017c  swc1        $f0, 0x17C($sp)
    ctx->pc = 0x1f40b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
label_1f40b8:
    // 0x1f40b8: 0xc46000b0  lwc1        $f0, 0xB0($v1)
    ctx->pc = 0x1f40b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f40bc:
    // 0x1f40bc: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x1f40bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_1f40c0:
    // 0x1f40c0: 0x946200b4  lhu         $v0, 0xB4($v1)
    ctx->pc = 0x1f40c0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 180)));
label_1f40c4:
    // 0x1f40c4: 0xa7a20184  sh          $v0, 0x184($sp)
    ctx->pc = 0x1f40c4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 388), (uint16_t)GPR_U32(ctx, 2));
label_1f40c8:
    // 0x1f40c8: 0x946200b6  lhu         $v0, 0xB6($v1)
    ctx->pc = 0x1f40c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 182)));
label_1f40cc:
    // 0x1f40cc: 0xa7a20186  sh          $v0, 0x186($sp)
    ctx->pc = 0x1f40ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 390), (uint16_t)GPR_U32(ctx, 2));
label_1f40d0:
    // 0x1f40d0: 0xc46100b8  lwc1        $f1, 0xB8($v1)
    ctx->pc = 0x1f40d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f40d4:
    // 0x1f40d4: 0xc46000bc  lwc1        $f0, 0xBC($v1)
    ctx->pc = 0x1f40d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f40d8:
    // 0x1f40d8: 0xe7a10188  swc1        $f1, 0x188($sp)
    ctx->pc = 0x1f40d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_1f40dc:
    // 0x1f40dc: 0xc0827ac  jal         func_209EB0
label_1f40e0:
    if (ctx->pc == 0x1F40E0u) {
        ctx->pc = 0x1F40E0u;
            // 0x1f40e0: 0xe7a0018c  swc1        $f0, 0x18C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
        ctx->pc = 0x1F40E4u;
        goto label_1f40e4;
    }
    ctx->pc = 0x1F40DCu;
    SET_GPR_U32(ctx, 31, 0x1F40E4u);
    ctx->pc = 0x1F40E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F40DCu;
            // 0x1f40e0: 0xe7a0018c  swc1        $f0, 0x18C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F40E4u; }
        if (ctx->pc != 0x1F40E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F40E4u; }
        if (ctx->pc != 0x1F40E4u) { return; }
    }
    ctx->pc = 0x1F40E4u;
label_1f40e4:
    // 0x1f40e4: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x1f40e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1f40e8:
    // 0x1f40e8: 0xafb500ac  sw          $s5, 0xAC($sp)
    ctx->pc = 0x1f40e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 21));
label_1f40ec:
    // 0x1f40ec: 0xafa300a8  sw          $v1, 0xA8($sp)
    ctx->pc = 0x1f40ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
label_1f40f0:
    // 0x1f40f0: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x1f40f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1f40f4:
    // 0x1f40f4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1f40f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1f40f8:
    // 0x1f40f8: 0x8c97000c  lw          $s7, 0xC($a0)
    ctx->pc = 0x1f40f8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1f40fc:
    // 0x1f40fc: 0x18600046  blez        $v1, . + 4 + (0x46 << 2)
label_1f4100:
    if (ctx->pc == 0x1F4100u) {
        ctx->pc = 0x1F4100u;
            // 0x1f4100: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F4104u;
        goto label_1f4104;
    }
    ctx->pc = 0x1F40FCu;
    {
        const bool branch_taken_0x1f40fc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1F4100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F40FCu;
            // 0x1f4100: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f40fc) {
            ctx->pc = 0x1F4218u;
            goto label_1f4218;
        }
    }
    ctx->pc = 0x1F4104u;
label_1f4104:
    // 0x1f4104: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x1f4104u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1f4108:
    // 0x1f4108: 0xc6280004  lwc1        $f8, 0x4($s1)
    ctx->pc = 0x1f4108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1f410c:
    // 0x1f410c: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x1f410cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1f4110:
    // 0x1f4110: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x1f4110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4114:
    // 0x1f4114: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x1f4114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1f4118:
    // 0x1f4118: 0xc6290000  lwc1        $f9, 0x0($s1)
    ctx->pc = 0x1f4118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1f411c:
    // 0x1f411c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1f411cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1f4120:
    // 0x1f4120: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x1f4120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f4124:
    // 0x1f4124: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1f4124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f4128:
    // 0x1f4128: 0x4600401a  mula.s      $f8, $f0
    ctx->pc = 0x1f4128u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
label_1f412c:
    // 0x1f412c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1f412cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f4130:
    // 0x1f4130: 0xc7a500f0  lwc1        $f5, 0xF0($sp)
    ctx->pc = 0x1f4130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f4134:
    // 0x1f4134: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1f4134u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f4138:
    // 0x1f4138: 0x4601481e  madda.s     $f9, $f1
    ctx->pc = 0x1f4138u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[1]));
label_1f413c:
    // 0x1f413c: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x1f413cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_1f4140:
    // 0x1f4140: 0xc6270008  lwc1        $f7, 0x8($s1)
    ctx->pc = 0x1f4140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f4144:
    // 0x1f4144: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x1f4144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4148:
    // 0x1f4148: 0xc7a300d4  lwc1        $f3, 0xD4($sp)
    ctx->pc = 0x1f4148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f414c:
    // 0x1f414c: 0x4605395c  madd.s      $f5, $f7, $f5
    ctx->pc = 0x1f414cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[5]));
label_1f4150:
    // 0x1f4150: 0x4600401a  mula.s      $f8, $f0
    ctx->pc = 0x1f4150u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
label_1f4154:
    // 0x1f4154: 0xc7a400f4  lwc1        $f4, 0xF4($sp)
    ctx->pc = 0x1f4154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f4158:
    // 0x1f4158: 0x4603481e  madda.s     $f9, $f3
    ctx->pc = 0x1f4158u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[3]));
label_1f415c:
    // 0x1f415c: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x1f415cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4160:
    // 0x1f4160: 0x460438dc  madd.s      $f3, $f7, $f4
    ctx->pc = 0x1f4160u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[4]));
label_1f4164:
    // 0x1f4164: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x1f4164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f4168:
    // 0x1f4168: 0x4600401a  mula.s      $f8, $f0
    ctx->pc = 0x1f4168u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
label_1f416c:
    // 0x1f416c: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x1f416cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4170:
    // 0x1f4170: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x1f4170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f4174:
    // 0x1f4174: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x1f4174u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1f4178:
    // 0x1f4178: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x1f4178u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_1f417c:
    // 0x1f417c: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x1f417cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1f4180:
    // 0x1f4180: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x1f4180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4184:
    // 0x1f4184: 0x4601481e  madda.s     $f9, $f1
    ctx->pc = 0x1f4184u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[1]));
label_1f4188:
    // 0x1f4188: 0x4602385c  madd.s      $f1, $f7, $f2
    ctx->pc = 0x1f4188u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[2]));
label_1f418c:
    // 0x1f418c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1f418cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1f4190:
    // 0x1f4190: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x1f4190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_1f4194:
    // 0x1f4194: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x1f4194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4198:
    // 0x1f4198: 0xe7a50090  swc1        $f5, 0x90($sp)
    ctx->pc = 0x1f4198u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1f419c:
    // 0x1f419c: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x1f419cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1f41a0:
    // 0x1f41a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f41a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1f41a4:
    // 0x1f41a4: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x1f41a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_1f41a8:
    // 0x1f41a8: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x1f41a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f41ac:
    // 0x1f41ac: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x1f41acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
label_1f41b0:
    // 0x1f41b0: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x1f41b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_1f41b4:
    // 0x1f41b4: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1f41b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f41b8:
    // 0x1f41b8: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1f41b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1f41bc:
    // 0x1f41bc: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1f41bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_1f41c0:
    // 0x1f41c0: 0xafb200a4  sw          $s2, 0xA4($sp)
    ctx->pc = 0x1f41c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 18));
label_1f41c4:
    // 0x1f41c4: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1f41c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_1f41c8:
    // 0x1f41c8: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x1f41c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1f41cc:
    // 0x1f41cc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1f41ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1f41d0:
    // 0x1f41d0: 0x2e81821  addu        $v1, $s7, $t0
    ctx->pc = 0x1f41d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 8)));
label_1f41d4:
    // 0x1f41d4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f41d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f41d8:
    // 0x1f41d8: 0x904301a0  lbu         $v1, 0x1A0($v0)
    ctx->pc = 0x1f41d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 416)));
label_1f41dc:
    // 0x1f41dc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1f41dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f41e0:
    // 0x1f41e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f41e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f41e4:
    // 0x1f41e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f41e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f41e8:
    // 0x1f41e8: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1f41e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_1f41ec:
    // 0x1f41ec: 0x8c4209a4  lw          $v0, 0x9A4($v0)
    ctx->pc = 0x1f41ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2468)));
label_1f41f0:
    // 0x1f41f0: 0x40f809  jalr        $v0
label_1f41f4:
    if (ctx->pc == 0x1F41F4u) {
        ctx->pc = 0x1F41F4u;
            // 0x1f41f4: 0xe7a10098  swc1        $f1, 0x98($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->pc = 0x1F41F8u;
        goto label_1f41f8;
    }
    ctx->pc = 0x1F41F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F41F8u);
        ctx->pc = 0x1F41F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F41F0u;
            // 0x1f41f4: 0xe7a10098  swc1        $f1, 0x98($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F41F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F41F8u; }
            if (ctx->pc != 0x1F41F8u) { return; }
        }
        }
    }
    ctx->pc = 0x1F41F8u;
label_1f41f8:
    // 0x1f41f8: 0x82630004  lb          $v1, 0x4($s3)
    ctx->pc = 0x1f41f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
label_1f41fc:
    // 0x1f41fc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_1f4200:
    if (ctx->pc == 0x1F4200u) {
        ctx->pc = 0x1F4204u;
        goto label_1f4204;
    }
    ctx->pc = 0x1F41FCu;
    {
        const bool branch_taken_0x1f41fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f41fc) {
            ctx->pc = 0x1F4218u;
            goto label_1f4218;
        }
    }
    ctx->pc = 0x1F4204u;
label_1f4204:
    // 0x1f4204: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1f4204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1f4208:
    // 0x1f4208: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1f4208u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1f420c:
    // 0x1f420c: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x1f420cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1f4210:
    // 0x1f4210: 0x1460ffbd  bnez        $v1, . + 4 + (-0x43 << 2)
label_1f4214:
    if (ctx->pc == 0x1F4214u) {
        ctx->pc = 0x1F4214u;
            // 0x1f4214: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x1F4218u;
        goto label_1f4218;
    }
    ctx->pc = 0x1F4210u;
    {
        const bool branch_taken_0x1f4210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4210u;
            // 0x1f4214: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4210) {
            ctx->pc = 0x1F4108u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f4108;
        }
    }
    ctx->pc = 0x1F4218u;
label_1f4218:
    // 0x1f4218: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f4218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f421c:
    // 0x1f421c: 0x2463d420  addiu       $v1, $v1, -0x2BE0
    ctx->pc = 0x1f421cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956064));
label_1f4220:
    // 0x1f4220: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x1f4220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_1f4224:
    // 0x1f4224: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1f4224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1f4228:
    // 0x1f4228: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1f4228u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1f422c:
    // 0x1f422c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1f422cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f4230:
    // 0x1f4230: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f4230u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f4234:
    // 0x1f4234: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f4234u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f4238:
    // 0x1f4238: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f4238u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f423c:
    // 0x1f423c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f423cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f4240:
    // 0x1f4240: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f4240u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f4244:
    // 0x1f4244: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f4244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f4248:
    // 0x1f4248: 0x3e00008  jr          $ra
label_1f424c:
    if (ctx->pc == 0x1F424Cu) {
        ctx->pc = 0x1F424Cu;
            // 0x1f424c: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x1F4250u;
        goto label_1f4250;
    }
    ctx->pc = 0x1F4248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F424Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4248u;
            // 0x1f424c: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F4250u;
label_1f4250:
    // 0x1f4250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f4250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f4254:
    // 0x1f4254: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f4254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1f4258:
    // 0x1f4258: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f4258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f425c:
    // 0x1f425c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f425cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f4260:
    // 0x1f4260: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
label_1f4264:
    if (ctx->pc == 0x1F4264u) {
        ctx->pc = 0x1F4264u;
            // 0x1f4264: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F4268u;
        goto label_1f4268;
    }
    ctx->pc = 0x1F4260u;
    {
        const bool branch_taken_0x1f4260 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4260) {
            ctx->pc = 0x1F4264u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4260u;
            // 0x1f4264: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F42D0u;
            goto label_1f42d0;
        }
    }
    ctx->pc = 0x1F4268u;
label_1f4268:
    // 0x1f4268: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f4268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f426c:
    // 0x1f426c: 0x2442db60  addiu       $v0, $v0, -0x24A0
    ctx->pc = 0x1f426cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957920));
label_1f4270:
    // 0x1f4270: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_1f4274:
    if (ctx->pc == 0x1F4274u) {
        ctx->pc = 0x1F4274u;
            // 0x1f4274: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1F4278u;
        goto label_1f4278;
    }
    ctx->pc = 0x1F4270u;
    {
        const bool branch_taken_0x1f4270 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4270u;
            // 0x1f4274: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4270) {
            ctx->pc = 0x1F42A4u;
            goto label_1f42a4;
        }
    }
    ctx->pc = 0x1F4278u;
label_1f4278:
    // 0x1f4278: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f4278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f427c:
    // 0x1f427c: 0x2442e370  addiu       $v0, $v0, -0x1C90
    ctx->pc = 0x1f427cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959984));
label_1f4280:
    // 0x1f4280: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1f4284:
    if (ctx->pc == 0x1F4284u) {
        ctx->pc = 0x1F4284u;
            // 0x1f4284: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1F4288u;
        goto label_1f4288;
    }
    ctx->pc = 0x1F4280u;
    {
        const bool branch_taken_0x1f4280 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4280u;
            // 0x1f4284: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4280) {
            ctx->pc = 0x1F42A4u;
            goto label_1f42a4;
        }
    }
    ctx->pc = 0x1F4288u;
label_1f4288:
    // 0x1f4288: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f4288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f428c:
    // 0x1f428c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1f428cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_1f4290:
    // 0x1f4290: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1f4294:
    if (ctx->pc == 0x1F4294u) {
        ctx->pc = 0x1F4294u;
            // 0x1f4294: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1F4298u;
        goto label_1f4298;
    }
    ctx->pc = 0x1F4290u;
    {
        const bool branch_taken_0x1f4290 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4290u;
            // 0x1f4294: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4290) {
            ctx->pc = 0x1F42A4u;
            goto label_1f42a4;
        }
    }
    ctx->pc = 0x1F4298u;
label_1f4298:
    // 0x1f4298: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f4298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f429c:
    // 0x1f429c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1f429cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_1f42a0:
    // 0x1f42a0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1f42a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1f42a4:
    // 0x1f42a4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1f42a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1f42a8:
    // 0x1f42a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f42a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1f42ac:
    // 0x1f42ac: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_1f42b0:
    if (ctx->pc == 0x1F42B0u) {
        ctx->pc = 0x1F42B4u;
        goto label_1f42b4;
    }
    ctx->pc = 0x1F42ACu;
    {
        const bool branch_taken_0x1f42ac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1f42ac) {
            ctx->pc = 0x1F42CCu;
            goto label_1f42cc;
        }
    }
    ctx->pc = 0x1F42B4u;
label_1f42b4:
    // 0x1f42b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f42b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f42b8:
    // 0x1f42b8: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x1f42b8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_1f42bc:
    // 0x1f42bc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1f42bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1f42c0:
    // 0x1f42c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f42c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f42c4:
    // 0x1f42c4: 0xc0a7ab4  jal         func_29EAD0
label_1f42c8:
    if (ctx->pc == 0x1F42C8u) {
        ctx->pc = 0x1F42C8u;
            // 0x1f42c8: 0x24070025  addiu       $a3, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x1F42CCu;
        goto label_1f42cc;
    }
    ctx->pc = 0x1F42C4u;
    SET_GPR_U32(ctx, 31, 0x1F42CCu);
    ctx->pc = 0x1F42C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F42C4u;
            // 0x1f42c8: 0x24070025  addiu       $a3, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F42CCu; }
        if (ctx->pc != 0x1F42CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F42CCu; }
        if (ctx->pc != 0x1F42CCu) { return; }
    }
    ctx->pc = 0x1F42CCu;
label_1f42cc:
    // 0x1f42cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f42ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f42d0:
    // 0x1f42d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f42d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f42d4:
    // 0x1f42d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f42d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f42d8:
    // 0x1f42d8: 0x3e00008  jr          $ra
label_1f42dc:
    if (ctx->pc == 0x1F42DCu) {
        ctx->pc = 0x1F42DCu;
            // 0x1f42dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1F42E0u;
        goto label_1f42e0;
    }
    ctx->pc = 0x1F42D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F42DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F42D8u;
            // 0x1f42dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F42E0u;
label_1f42e0:
    // 0x1f42e0: 0x3e00008  jr          $ra
label_1f42e4:
    if (ctx->pc == 0x1F42E4u) {
        ctx->pc = 0x1F42E4u;
            // 0x1f42e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F42E8u;
        goto label_1f42e8;
    }
    ctx->pc = 0x1F42E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F42E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F42E0u;
            // 0x1f42e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F42E8u;
label_1f42e8:
    // 0x1f42e8: 0x0  nop
    ctx->pc = 0x1f42e8u;
    // NOP
label_1f42ec:
    // 0x1f42ec: 0x0  nop
    ctx->pc = 0x1f42ecu;
    // NOP
label_1f42f0:
    // 0x1f42f0: 0x3e00008  jr          $ra
label_1f42f4:
    if (ctx->pc == 0x1F42F4u) {
        ctx->pc = 0x1F42F4u;
            // 0x1f42f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1F42F8u;
        goto label_1f42f8;
    }
    ctx->pc = 0x1F42F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F42F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F42F0u;
            // 0x1f42f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F42F8u;
label_1f42f8:
    // 0x1f42f8: 0x0  nop
    ctx->pc = 0x1f42f8u;
    // NOP
label_1f42fc:
    // 0x1f42fc: 0x0  nop
    ctx->pc = 0x1f42fcu;
    // NOP
label_1f4300:
    // 0x1f4300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f4300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1f4304:
    // 0x1f4304: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f4304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1f4308:
    // 0x1f4308: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f4308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f430c:
    // 0x1f430c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f430cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f4310:
    // 0x1f4310: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f4310u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f4314:
    // 0x1f4314: 0x12200035  beqz        $s1, . + 4 + (0x35 << 2)
label_1f4318:
    if (ctx->pc == 0x1F4318u) {
        ctx->pc = 0x1F4318u;
            // 0x1f4318: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F431Cu;
        goto label_1f431c;
    }
    ctx->pc = 0x1F4314u;
    {
        const bool branch_taken_0x1f4314 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4314u;
            // 0x1f4318: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4314) {
            ctx->pc = 0x1F43ECu;
            goto label_1f43ec;
        }
    }
    ctx->pc = 0x1F431Cu;
label_1f431c:
    // 0x1f431c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f431cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f4320:
    // 0x1f4320: 0x2442db90  addiu       $v0, $v0, -0x2470
    ctx->pc = 0x1f4320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957968));
label_1f4324:
    // 0x1f4324: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
label_1f4328:
    if (ctx->pc == 0x1F4328u) {
        ctx->pc = 0x1F4328u;
            // 0x1f4328: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1F432Cu;
        goto label_1f432c;
    }
    ctx->pc = 0x1F4324u;
    {
        const bool branch_taken_0x1f4324 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4324u;
            // 0x1f4328: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4324) {
            ctx->pc = 0x1F43C4u;
            goto label_1f43c4;
        }
    }
    ctx->pc = 0x1F432Cu;
label_1f432c:
    // 0x1f432c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f432cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f4330:
    // 0x1f4330: 0x2442dbd0  addiu       $v0, $v0, -0x2430
    ctx->pc = 0x1f4330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958032));
label_1f4334:
    // 0x1f4334: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
label_1f4338:
    if (ctx->pc == 0x1F4338u) {
        ctx->pc = 0x1F4338u;
            // 0x1f4338: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1F433Cu;
        goto label_1f433c;
    }
    ctx->pc = 0x1F4334u;
    {
        const bool branch_taken_0x1f4334 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4334u;
            // 0x1f4338: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4334) {
            ctx->pc = 0x1F43C4u;
            goto label_1f43c4;
        }
    }
    ctx->pc = 0x1F433Cu;
label_1f433c:
    // 0x1f433c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f433cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f4340:
    // 0x1f4340: 0x2622000c  addiu       $v0, $s1, 0xC
    ctx->pc = 0x1f4340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_1f4344:
    // 0x1f4344: 0x2463db20  addiu       $v1, $v1, -0x24E0
    ctx->pc = 0x1f4344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957856));
label_1f4348:
    // 0x1f4348: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1f434c:
    if (ctx->pc == 0x1F434Cu) {
        ctx->pc = 0x1F434Cu;
            // 0x1f434c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x1F4350u;
        goto label_1f4350;
    }
    ctx->pc = 0x1F4348u;
    {
        const bool branch_taken_0x1f4348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F434Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4348u;
            // 0x1f434c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4348) {
            ctx->pc = 0x1F4390u;
            goto label_1f4390;
        }
    }
    ctx->pc = 0x1F4350u;
label_1f4350:
    // 0x1f4350: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1f4354:
    if (ctx->pc == 0x1F4354u) {
        ctx->pc = 0x1F4358u;
        goto label_1f4358;
    }
    ctx->pc = 0x1F4350u;
    {
        const bool branch_taken_0x1f4350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4350) {
            ctx->pc = 0x1F4390u;
            goto label_1f4390;
        }
    }
    ctx->pc = 0x1F4358u;
label_1f4358:
    // 0x1f4358: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1f4358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1f435c:
    // 0x1f435c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1f435cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1f4360:
    // 0x1f4360: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f4360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1f4364:
    // 0x1f4364: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1f4368:
    if (ctx->pc == 0x1F4368u) {
        ctx->pc = 0x1F436Cu;
        goto label_1f436c;
    }
    ctx->pc = 0x1F4364u;
    {
        const bool branch_taken_0x1f4364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4364) {
            ctx->pc = 0x1F4390u;
            goto label_1f4390;
        }
    }
    ctx->pc = 0x1F436Cu;
label_1f436c:
    // 0x1f436c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f436cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f4370:
    // 0x1f4370: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1f4370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1f4374:
    // 0x1f4374: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1f4374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1f4378:
    // 0x1f4378: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x1f4378u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1f437c:
    // 0x1f437c: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1f437cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1f4380:
    // 0x1f4380: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x1f4380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_1f4384:
    // 0x1f4384: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x1f4384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_1f4388:
    // 0x1f4388: 0xc0a7ab4  jal         func_29EAD0
label_1f438c:
    if (ctx->pc == 0x1F438Cu) {
        ctx->pc = 0x1F438Cu;
            // 0x1f438c: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->pc = 0x1F4390u;
        goto label_1f4390;
    }
    ctx->pc = 0x1F4388u;
    SET_GPR_U32(ctx, 31, 0x1F4390u);
    ctx->pc = 0x1F438Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4388u;
            // 0x1f438c: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4390u; }
        if (ctx->pc != 0x1F4390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4390u; }
        if (ctx->pc != 0x1F4390u) { return; }
    }
    ctx->pc = 0x1F4390u;
label_1f4390:
    // 0x1f4390: 0x5220000d  beql        $s1, $zero, . + 4 + (0xD << 2)
label_1f4394:
    if (ctx->pc == 0x1F4394u) {
        ctx->pc = 0x1F4394u;
            // 0x1f4394: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x1F4398u;
        goto label_1f4398;
    }
    ctx->pc = 0x1F4390u;
    {
        const bool branch_taken_0x1f4390 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4390) {
            ctx->pc = 0x1F4394u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4390u;
            // 0x1f4394: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F43C8u;
            goto label_1f43c8;
        }
    }
    ctx->pc = 0x1F4398u;
label_1f4398:
    // 0x1f4398: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f4398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f439c:
    // 0x1f439c: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1f439cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
label_1f43a0:
    // 0x1f43a0: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_1f43a4:
    if (ctx->pc == 0x1F43A4u) {
        ctx->pc = 0x1F43A4u;
            // 0x1f43a4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1F43A8u;
        goto label_1f43a8;
    }
    ctx->pc = 0x1F43A0u;
    {
        const bool branch_taken_0x1f43a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F43A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F43A0u;
            // 0x1f43a4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f43a0) {
            ctx->pc = 0x1F43C4u;
            goto label_1f43c4;
        }
    }
    ctx->pc = 0x1F43A8u;
label_1f43a8:
    // 0x1f43a8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f43a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f43ac:
    // 0x1f43ac: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1f43acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_1f43b0:
    // 0x1f43b0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1f43b4:
    if (ctx->pc == 0x1F43B4u) {
        ctx->pc = 0x1F43B4u;
            // 0x1f43b4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1F43B8u;
        goto label_1f43b8;
    }
    ctx->pc = 0x1F43B0u;
    {
        const bool branch_taken_0x1f43b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F43B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F43B0u;
            // 0x1f43b4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f43b0) {
            ctx->pc = 0x1F43C4u;
            goto label_1f43c4;
        }
    }
    ctx->pc = 0x1F43B8u;
label_1f43b8:
    // 0x1f43b8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f43b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f43bc:
    // 0x1f43bc: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1f43bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_1f43c0:
    // 0x1f43c0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1f43c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1f43c4:
    // 0x1f43c4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1f43c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1f43c8:
    // 0x1f43c8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f43c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1f43cc:
    // 0x1f43cc: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_1f43d0:
    if (ctx->pc == 0x1F43D0u) {
        ctx->pc = 0x1F43D0u;
            // 0x1f43d0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F43D4u;
        goto label_1f43d4;
    }
    ctx->pc = 0x1F43CCu;
    {
        const bool branch_taken_0x1f43cc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1f43cc) {
            ctx->pc = 0x1F43D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F43CCu;
            // 0x1f43d0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F43F0u;
            goto label_1f43f0;
        }
    }
    ctx->pc = 0x1F43D4u;
label_1f43d4:
    // 0x1f43d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f43d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f43d8:
    // 0x1f43d8: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x1f43d8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_1f43dc:
    // 0x1f43dc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1f43dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1f43e0:
    // 0x1f43e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f43e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f43e4:
    // 0x1f43e4: 0xc0a7ab4  jal         func_29EAD0
label_1f43e8:
    if (ctx->pc == 0x1F43E8u) {
        ctx->pc = 0x1F43E8u;
            // 0x1f43e8: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1F43ECu;
        goto label_1f43ec;
    }
    ctx->pc = 0x1F43E4u;
    SET_GPR_U32(ctx, 31, 0x1F43ECu);
    ctx->pc = 0x1F43E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F43E4u;
            // 0x1f43e8: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F43ECu; }
        if (ctx->pc != 0x1F43ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F43ECu; }
        if (ctx->pc != 0x1F43ECu) { return; }
    }
    ctx->pc = 0x1F43ECu;
label_1f43ec:
    // 0x1f43ec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1f43ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f43f0:
    // 0x1f43f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f43f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1f43f4:
    // 0x1f43f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f43f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f43f8:
    // 0x1f43f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f43f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f43fc:
    // 0x1f43fc: 0x3e00008  jr          $ra
label_1f4400:
    if (ctx->pc == 0x1F4400u) {
        ctx->pc = 0x1F4400u;
            // 0x1f4400: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1F4404u;
        goto label_1f4404;
    }
    ctx->pc = 0x1F43FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F43FCu;
            // 0x1f4400: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F4404u;
label_1f4404:
    // 0x1f4404: 0x0  nop
    ctx->pc = 0x1f4404u;
    // NOP
label_1f4408:
    // 0x1f4408: 0x0  nop
    ctx->pc = 0x1f4408u;
    // NOP
label_1f440c:
    // 0x1f440c: 0x0  nop
    ctx->pc = 0x1f440cu;
    // NOP
label_1f4410:
    // 0x1f4410: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f4410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1f4414:
    // 0x1f4414: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1f4414u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f4418:
    // 0x1f4418: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f4418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1f441c:
    // 0x1f441c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f441cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f4420:
    // 0x1f4420: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f4420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1f4424:
    // 0x1f4424: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f4424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4428:
    // 0x1f4428: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f4428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1f442c:
    // 0x1f442c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1f442cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1f4430:
    // 0x1f4430: 0x8d110000  lw          $s1, 0x0($t0)
    ctx->pc = 0x1f4430u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1f4434:
    // 0x1f4434: 0xc5143030  lwc1        $f20, 0x3030($t0)
    ctx->pc = 0x1f4434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1f4438:
    // 0x1f4438: 0xc07cacc  jal         func_1F2B30
label_1f443c:
    if (ctx->pc == 0x1F443Cu) {
        ctx->pc = 0x1F443Cu;
            // 0x1f443c: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F4440u;
        goto label_1f4440;
    }
    ctx->pc = 0x1F4438u;
    SET_GPR_U32(ctx, 31, 0x1F4440u);
    ctx->pc = 0x1F443Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4438u;
            // 0x1f443c: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F2B30u;
    if (runtime->hasFunction(0x1F2B30u)) {
        auto targetFn = runtime->lookupFunction(0x1F2B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4440u; }
        if (ctx->pc != 0x1F4440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F2B30_0x1f2b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4440u; }
        if (ctx->pc != 0x1F4440u) { return; }
    }
    ctx->pc = 0x1F4440u;
label_1f4440:
    // 0x1f4440: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1f4440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f4444:
    // 0x1f4444: 0x223082b  sltu        $at, $s1, $v1
    ctx->pc = 0x1f4444u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1f4448:
    // 0x1f4448: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
label_1f444c:
    if (ctx->pc == 0x1F444Cu) {
        ctx->pc = 0x1F4450u;
        goto label_1f4450;
    }
    ctx->pc = 0x1F4448u;
    {
        const bool branch_taken_0x1f4448 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4448) {
            ctx->pc = 0x1F44E8u;
            goto label_1f44e8;
        }
    }
    ctx->pc = 0x1F4450u;
label_1f4450:
    // 0x1f4450: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1f4450u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1f4454:
    // 0x1f4454: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1f4454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4458:
    // 0x1f4458: 0xc623001c  lwc1        $f3, 0x1C($s1)
    ctx->pc = 0x1f4458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f445c:
    // 0x1f445c: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x1f445cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f4460:
    // 0x1f4460: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1f4460u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1f4464:
    // 0x1f4464: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x1f4464u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_1f4468:
    // 0x1f4468: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1f4468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1f446c:
    // 0x1f446c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1f446cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4470:
    // 0x1f4470: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1f4470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f4474:
    // 0x1f4474: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1f4474u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1f4478:
    // 0x1f4478: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x1f4478u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_1f447c:
    // 0x1f447c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1f447cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1f4480:
    // 0x1f4480: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1f4480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4484:
    // 0x1f4484: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x1f4484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f4488:
    // 0x1f4488: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1f4488u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1f448c:
    // 0x1f448c: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x1f448cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_1f4490:
    // 0x1f4490: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1f4490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1f4494:
    // 0x1f4494: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1f4494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4498:
    // 0x1f4498: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x1f4498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f449c:
    // 0x1f449c: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1f449cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1f44a0:
    // 0x1f44a0: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x1f44a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_1f44a4:
    // 0x1f44a4: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x1f44a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1f44a8:
    // 0x1f44a8: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1f44a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f44ac:
    // 0x1f44ac: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f44acu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1f44b0:
    // 0x1f44b0: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x1f44b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_1f44b4:
    // 0x1f44b4: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1f44b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f44b8:
    // 0x1f44b8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f44b8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1f44bc:
    // 0x1f44bc: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x1f44bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_1f44c0:
    // 0x1f44c0: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1f44c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f44c4:
    // 0x1f44c4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f44c4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1f44c8:
    // 0x1f44c8: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x1f44c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_1f44cc:
    // 0x1f44cc: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x1f44ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f44d0:
    // 0x1f44d0: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x1f44d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_1f44d4:
    // 0x1f44d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1f44d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f44d8:
    // 0x1f44d8: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x1f44d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_1f44dc:
    // 0x1f44dc: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x1f44dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1f44e0:
    // 0x1f44e0: 0x5460ffdd  bnel        $v1, $zero, . + 4 + (-0x23 << 2)
label_1f44e4:
    if (ctx->pc == 0x1F44E4u) {
        ctx->pc = 0x1F44E4u;
            // 0x1f44e4: 0xc6200000  lwc1        $f0, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x1F44E8u;
        goto label_1f44e8;
    }
    ctx->pc = 0x1F44E0u;
    {
        const bool branch_taken_0x1f44e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f44e0) {
            ctx->pc = 0x1F44E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F44E0u;
            // 0x1f44e4: 0xc6200000  lwc1        $f0, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F4458u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f4458;
        }
    }
    ctx->pc = 0x1F44E8u;
label_1f44e8:
    // 0x1f44e8: 0xc6003030  lwc1        $f0, 0x3030($s0)
    ctx->pc = 0x1f44e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f44ec:
    // 0x1f44ec: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1f44ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f44f0:
    // 0x1f44f0: 0x45030029  bc1tl       . + 4 + (0x29 << 2)
label_1f44f4:
    if (ctx->pc == 0x1F44F4u) {
        ctx->pc = 0x1F44F4u;
            // 0x1f44f4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x1F44F8u;
        goto label_1f44f8;
    }
    ctx->pc = 0x1F44F0u;
    {
        const bool branch_taken_0x1f44f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f44f0) {
            ctx->pc = 0x1F44F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F44F0u;
            // 0x1f44f4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F4598u;
            goto label_1f4598;
        }
    }
    ctx->pc = 0x1F44F8u;
label_1f44f8:
    // 0x1f44f8: 0xc6003020  lwc1        $f0, 0x3020($s0)
    ctx->pc = 0x1f44f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f44fc:
    // 0x1f44fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f44fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f4500:
    // 0x1f4500: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f4500u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1f4504:
    // 0x1f4504: 0xe6003020  swc1        $f0, 0x3020($s0)
    ctx->pc = 0x1f4504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12320), bits); }
label_1f4508:
    // 0x1f4508: 0xc6003024  lwc1        $f0, 0x3024($s0)
    ctx->pc = 0x1f4508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f450c:
    // 0x1f450c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f450cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1f4510:
    // 0x1f4510: 0xe6003024  swc1        $f0, 0x3024($s0)
    ctx->pc = 0x1f4510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12324), bits); }
label_1f4514:
    // 0x1f4514: 0xc6003028  lwc1        $f0, 0x3028($s0)
    ctx->pc = 0x1f4514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4518:
    // 0x1f4518: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f4518u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1f451c:
    // 0x1f451c: 0xe6003028  swc1        $f0, 0x3028($s0)
    ctx->pc = 0x1f451cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12328), bits); }
label_1f4520:
    // 0x1f4520: 0xc600302c  lwc1        $f0, 0x302C($s0)
    ctx->pc = 0x1f4520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4524:
    // 0x1f4524: 0xe600302c  swc1        $f0, 0x302C($s0)
    ctx->pc = 0x1f4524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12332), bits); }
label_1f4528:
    // 0x1f4528: 0x92053042  lbu         $a1, 0x3042($s0)
    ctx->pc = 0x1f4528u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12354)));
label_1f452c:
    // 0x1f452c: 0x92043043  lbu         $a0, 0x3043($s0)
    ctx->pc = 0x1f452cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12355)));
label_1f4530:
    // 0x1f4530: 0xa2043042  sb          $a0, 0x3042($s0)
    ctx->pc = 0x1f4530u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12354), (uint8_t)GPR_U32(ctx, 4));
label_1f4534:
    // 0x1f4534: 0xa2053043  sb          $a1, 0x3043($s0)
    ctx->pc = 0x1f4534u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12355), (uint8_t)GPR_U32(ctx, 5));
label_1f4538:
    // 0x1f4538: 0x92053040  lbu         $a1, 0x3040($s0)
    ctx->pc = 0x1f4538u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12352)));
label_1f453c:
    // 0x1f453c: 0x92043041  lbu         $a0, 0x3041($s0)
    ctx->pc = 0x1f453cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12353)));
label_1f4540:
    // 0x1f4540: 0xa2043040  sb          $a0, 0x3040($s0)
    ctx->pc = 0x1f4540u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12352), (uint8_t)GPR_U32(ctx, 4));
label_1f4544:
    // 0x1f4544: 0xa2053041  sb          $a1, 0x3041($s0)
    ctx->pc = 0x1f4544u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12353), (uint8_t)GPR_U32(ctx, 5));
label_1f4548:
    // 0x1f4548: 0x92053040  lbu         $a1, 0x3040($s0)
    ctx->pc = 0x1f4548u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12352)));
label_1f454c:
    // 0x1f454c: 0x92043041  lbu         $a0, 0x3041($s0)
    ctx->pc = 0x1f454cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12353)));
label_1f4550:
    // 0x1f4550: 0x96063038  lhu         $a2, 0x3038($s0)
    ctx->pc = 0x1f4550u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12344)));
label_1f4554:
    // 0x1f4554: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1f4554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1f4558:
    // 0x1f4558: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1f4558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1f455c:
    // 0x1f455c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1f455cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1f4560:
    // 0x1f4560: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x1f4560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_1f4564:
    // 0x1f4564: 0x94a43038  lhu         $a0, 0x3038($a1)
    ctx->pc = 0x1f4564u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12344)));
label_1f4568:
    // 0x1f4568: 0xa6043038  sh          $a0, 0x3038($s0)
    ctx->pc = 0x1f4568u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12344), (uint16_t)GPR_U32(ctx, 4));
label_1f456c:
    // 0x1f456c: 0xa4a63038  sh          $a2, 0x3038($a1)
    ctx->pc = 0x1f456cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12344), (uint16_t)GPR_U32(ctx, 6));
label_1f4570:
    // 0x1f4570: 0x92053040  lbu         $a1, 0x3040($s0)
    ctx->pc = 0x1f4570u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12352)));
label_1f4574:
    // 0x1f4574: 0x92043041  lbu         $a0, 0x3041($s0)
    ctx->pc = 0x1f4574u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12353)));
label_1f4578:
    // 0x1f4578: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x1f4578u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_1f457c:
    // 0x1f457c: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_1f4580:
    if (ctx->pc == 0x1F4580u) {
        ctx->pc = 0x1F4584u;
        goto label_1f4584;
    }
    ctx->pc = 0x1F457Cu;
    {
        const bool branch_taken_0x1f457c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f457c) {
            ctx->pc = 0x1F4594u;
            goto label_1f4594;
        }
    }
    ctx->pc = 0x1F4584u;
label_1f4584:
    // 0x1f4584: 0x9604303a  lhu         $a0, 0x303A($s0)
    ctx->pc = 0x1f4584u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12346)));
label_1f4588:
    // 0x1f4588: 0x9603303c  lhu         $v1, 0x303C($s0)
    ctx->pc = 0x1f4588u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12348)));
label_1f458c:
    // 0x1f458c: 0xa603303a  sh          $v1, 0x303A($s0)
    ctx->pc = 0x1f458cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12346), (uint16_t)GPR_U32(ctx, 3));
label_1f4590:
    // 0x1f4590: 0xa604303c  sh          $a0, 0x303C($s0)
    ctx->pc = 0x1f4590u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12348), (uint16_t)GPR_U32(ctx, 4));
label_1f4594:
    // 0x1f4594: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f4594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1f4598:
    // 0x1f4598: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1f4598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1f459c:
    // 0x1f459c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f459cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f45a0:
    // 0x1f45a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f45a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f45a4:
    // 0x1f45a4: 0x3e00008  jr          $ra
label_1f45a8:
    if (ctx->pc == 0x1F45A8u) {
        ctx->pc = 0x1F45A8u;
            // 0x1f45a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1F45ACu;
        goto label_1f45ac;
    }
    ctx->pc = 0x1F45A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F45A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F45A4u;
            // 0x1f45a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F45ACu;
label_1f45ac:
    // 0x1f45ac: 0x0  nop
    ctx->pc = 0x1f45acu;
    // NOP
label_1f45b0:
    // 0x1f45b0: 0x3e00008  jr          $ra
label_1f45b4:
    if (ctx->pc == 0x1F45B4u) {
        ctx->pc = 0x1F45B8u;
        goto label_1f45b8;
    }
    ctx->pc = 0x1F45B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F45B8u;
label_1f45b8:
    // 0x1f45b8: 0x0  nop
    ctx->pc = 0x1f45b8u;
    // NOP
label_1f45bc:
    // 0x1f45bc: 0x0  nop
    ctx->pc = 0x1f45bcu;
    // NOP
label_1f45c0:
    // 0x1f45c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1f45c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1f45c4:
    // 0x1f45c4: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1f45c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_1f45c8:
    // 0x1f45c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f45c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f45cc:
    // 0x1f45cc: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1f45ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f45d0:
    // 0x1f45d0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1f45d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f45d4:
    // 0x1f45d4: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x1f45d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_1f45d8:
    // 0x1f45d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f45d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f45dc:
    // 0x1f45dc: 0x2442dea0  addiu       $v0, $v0, -0x2160
    ctx->pc = 0x1f45dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958752));
label_1f45e0:
    // 0x1f45e0: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x1f45e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
label_1f45e4:
    // 0x1f45e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f45e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f45e8:
    // 0x1f45e8: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1f45e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f45ec:
    // 0x1f45ec: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x1f45ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1f45f0:
    // 0x1f45f0: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1f45f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1f45f4:
    // 0x1f45f4: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x1f45f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
label_1f45f8:
    // 0x1f45f8: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x1f45f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1f45fc:
    // 0x1f45fc: 0xafa4007c  sw          $a0, 0x7C($sp)
    ctx->pc = 0x1f45fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 4));
label_1f4600:
    // 0x1f4600: 0x80c40010  lb          $a0, 0x10($a2)
    ctx->pc = 0x1f4600u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
label_1f4604:
    // 0x1f4604: 0xa3a40080  sb          $a0, 0x80($sp)
    ctx->pc = 0x1f4604u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 4));
label_1f4608:
    // 0x1f4608: 0xc4c90020  lwc1        $f9, 0x20($a2)
    ctx->pc = 0x1f4608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1f460c:
    // 0x1f460c: 0xe7a90090  swc1        $f9, 0x90($sp)
    ctx->pc = 0x1f460cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1f4610:
    // 0x1f4610: 0xc4c80024  lwc1        $f8, 0x24($a2)
    ctx->pc = 0x1f4610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1f4614:
    // 0x1f4614: 0x46004907  neg.s       $f4, $f9
    ctx->pc = 0x1f4614u;
    ctx->f[4] = FPU_NEG_S(ctx->f[9]);
label_1f4618:
    // 0x1f4618: 0xe7a80094  swc1        $f8, 0x94($sp)
    ctx->pc = 0x1f4618u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1f461c:
    // 0x1f461c: 0xc4c70028  lwc1        $f7, 0x28($a2)
    ctx->pc = 0x1f461cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f4620:
    // 0x1f4620: 0x460040c7  neg.s       $f3, $f8
    ctx->pc = 0x1f4620u;
    ctx->f[3] = FPU_NEG_S(ctx->f[8]);
label_1f4624:
    // 0x1f4624: 0xe7a70098  swc1        $f7, 0x98($sp)
    ctx->pc = 0x1f4624u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1f4628:
    // 0x1f4628: 0xc4c6002c  lwc1        $f6, 0x2C($a2)
    ctx->pc = 0x1f4628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f462c:
    // 0x1f462c: 0x46003887  neg.s       $f2, $f7
    ctx->pc = 0x1f462cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[7]);
label_1f4630:
    // 0x1f4630: 0xe7a6009c  swc1        $f6, 0x9C($sp)
    ctx->pc = 0x1f4630u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1f4634:
    // 0x1f4634: 0xc4c50030  lwc1        $f5, 0x30($a2)
    ctx->pc = 0x1f4634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f4638:
    // 0x1f4638: 0x46003047  neg.s       $f1, $f6
    ctx->pc = 0x1f4638u;
    ctx->f[1] = FPU_NEG_S(ctx->f[6]);
label_1f463c:
    // 0x1f463c: 0xe7a500a0  swc1        $f5, 0xA0($sp)
    ctx->pc = 0x1f463cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1f4640:
    // 0x1f4640: 0xc4c50034  lwc1        $f5, 0x34($a2)
    ctx->pc = 0x1f4640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f4644:
    // 0x1f4644: 0xe7a500a4  swc1        $f5, 0xA4($sp)
    ctx->pc = 0x1f4644u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1f4648:
    // 0x1f4648: 0x8cc40038  lw          $a0, 0x38($a2)
    ctx->pc = 0x1f4648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
label_1f464c:
    // 0x1f464c: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x1f464cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
label_1f4650:
    // 0x1f4650: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x1f4650u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1f4654:
    // 0x1f4654: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x1f4654u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1f4658:
    // 0x1f4658: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x1f4658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_1f465c:
    // 0x1f465c: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x1f465cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1f4660:
    // 0x1f4660: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x1f4660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
label_1f4664:
    // 0x1f4664: 0xe7a1009c  swc1        $f1, 0x9C($sp)
    ctx->pc = 0x1f4664u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1f4668:
    // 0x1f4668: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1f4668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1f466c:
    // 0x1f466c: 0xe7a90050  swc1        $f9, 0x50($sp)
    ctx->pc = 0x1f466cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1f4670:
    // 0x1f4670: 0xe7a80054  swc1        $f8, 0x54($sp)
    ctx->pc = 0x1f4670u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1f4674:
    // 0x1f4674: 0xe7a70058  swc1        $f7, 0x58($sp)
    ctx->pc = 0x1f4674u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1f4678:
    // 0x1f4678: 0x11000012  beqz        $t0, . + 4 + (0x12 << 2)
label_1f467c:
    if (ctx->pc == 0x1F467Cu) {
        ctx->pc = 0x1F467Cu;
            // 0x1f467c: 0xe7a6005c  swc1        $f6, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->pc = 0x1F4680u;
        goto label_1f4680;
    }
    ctx->pc = 0x1F4678u;
    {
        const bool branch_taken_0x1f4678 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F467Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4678u;
            // 0x1f467c: 0xe7a6005c  swc1        $f6, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4678) {
            ctx->pc = 0x1F46C4u;
            goto label_1f46c4;
        }
    }
    ctx->pc = 0x1F4680u;
label_1f4680:
    // 0x1f4680: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f4680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f4684:
    // 0x1f4684: 0xafa80030  sw          $t0, 0x30($sp)
    ctx->pc = 0x1f4684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 8));
label_1f4688:
    // 0x1f4688: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1f4688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1f468c:
    // 0x1f468c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1f468cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1f4690:
    // 0x1f4690: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1f4690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1f4694:
    // 0x1f4694: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1f4694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f4698:
    // 0x1f4698: 0xe7a90020  swc1        $f9, 0x20($sp)
    ctx->pc = 0x1f4698u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1f469c:
    // 0x1f469c: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1f469cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1f46a0:
    // 0x1f46a0: 0xe7a80024  swc1        $f8, 0x24($sp)
    ctx->pc = 0x1f46a0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1f46a4:
    // 0x1f46a4: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x1f46a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1f46a8:
    // 0x1f46a8: 0xe7a70028  swc1        $f7, 0x28($sp)
    ctx->pc = 0x1f46a8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1f46ac:
    // 0x1f46ac: 0xc07ce20  jal         func_1F3880
label_1f46b0:
    if (ctx->pc == 0x1F46B0u) {
        ctx->pc = 0x1F46B0u;
            // 0x1f46b0: 0xe7a6002c  swc1        $f6, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->pc = 0x1F46B4u;
        goto label_1f46b4;
    }
    ctx->pc = 0x1F46ACu;
    SET_GPR_U32(ctx, 31, 0x1F46B4u);
    ctx->pc = 0x1F46B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F46ACu;
            // 0x1f46b0: 0xe7a6002c  swc1        $f6, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F3880u;
    if (runtime->hasFunction(0x1F3880u)) {
        auto targetFn = runtime->lookupFunction(0x1F3880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F46B4u; }
        if (ctx->pc != 0x1F46B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F3880_0x1f3880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F46B4u; }
        if (ctx->pc != 0x1F46B4u) { return; }
    }
    ctx->pc = 0x1F46B4u;
label_1f46b4:
    // 0x1f46b4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f46b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f46b8:
    // 0x1f46b8: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1f46b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1f46bc:
    // 0x1f46bc: 0x10000007  b           . + 4 + (0x7 << 2)
label_1f46c0:
    if (ctx->pc == 0x1F46C0u) {
        ctx->pc = 0x1F46C0u;
            // 0x1f46c0: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->pc = 0x1F46C4u;
        goto label_1f46c4;
    }
    ctx->pc = 0x1F46BCu;
    {
        const bool branch_taken_0x1f46bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F46C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F46BCu;
            // 0x1f46c0: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f46bc) {
            ctx->pc = 0x1F46DCu;
            goto label_1f46dc;
        }
    }
    ctx->pc = 0x1F46C4u;
label_1f46c4:
    // 0x1f46c4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f46c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f46c8:
    // 0x1f46c8: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1f46c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f46cc:
    // 0x1f46cc: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1f46ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1f46d0:
    // 0x1f46d0: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1f46d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1f46d4:
    // 0x1f46d4: 0xc07ce20  jal         func_1F3880
label_1f46d8:
    if (ctx->pc == 0x1F46D8u) {
        ctx->pc = 0x1F46D8u;
            // 0x1f46d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F46DCu;
        goto label_1f46dc;
    }
    ctx->pc = 0x1F46D4u;
    SET_GPR_U32(ctx, 31, 0x1F46DCu);
    ctx->pc = 0x1F46D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F46D4u;
            // 0x1f46d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F3880u;
    if (runtime->hasFunction(0x1F3880u)) {
        auto targetFn = runtime->lookupFunction(0x1F3880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F46DCu; }
        if (ctx->pc != 0x1F46DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F3880_0x1f3880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F46DCu; }
        if (ctx->pc != 0x1F46DCu) { return; }
    }
    ctx->pc = 0x1F46DCu;
label_1f46dc:
    // 0x1f46dc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f46dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f46e0:
    // 0x1f46e0: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1f46e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1f46e4:
    // 0x1f46e4: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x1f46e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_1f46e8:
    // 0x1f46e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f46e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f46ec:
    // 0x1f46ec: 0x3e00008  jr          $ra
label_1f46f0:
    if (ctx->pc == 0x1F46F0u) {
        ctx->pc = 0x1F46F0u;
            // 0x1f46f0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1F46F4u;
        goto label_1f46f4;
    }
    ctx->pc = 0x1F46ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F46F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F46ECu;
            // 0x1f46f0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F46F4u;
label_1f46f4:
    // 0x1f46f4: 0x0  nop
    ctx->pc = 0x1f46f4u;
    // NOP
label_1f46f8:
    // 0x1f46f8: 0x0  nop
    ctx->pc = 0x1f46f8u;
    // NOP
label_1f46fc:
    // 0x1f46fc: 0x0  nop
    ctx->pc = 0x1f46fcu;
    // NOP
label_1f4700:
    // 0x1f4700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f4700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f4704:
    // 0x1f4704: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1f4704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_1f4708:
    // 0x1f4708: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f4708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f470c:
    // 0x1f470c: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x1f470cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_1f4710:
    // 0x1f4710: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x1f4710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
label_1f4714:
    // 0x1f4714: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f4714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f4718:
    // 0x1f4718: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1f4718u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f471c:
    // 0x1f471c: 0x2442deb0  addiu       $v0, $v0, -0x2150
    ctx->pc = 0x1f471cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958768));
label_1f4720:
    // 0x1f4720: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f4720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f4724:
    // 0x1f4724: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1f4724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_1f4728:
    // 0x1f4728: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1f4728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f472c:
    // 0x1f472c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1f472cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1f4730:
    // 0x1f4730: 0xc07cc7c  jal         func_1F31F0
label_1f4734:
    if (ctx->pc == 0x1F4734u) {
        ctx->pc = 0x1F4734u;
            // 0x1f4734: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1F4738u;
        goto label_1f4738;
    }
    ctx->pc = 0x1F4730u;
    SET_GPR_U32(ctx, 31, 0x1F4738u);
    ctx->pc = 0x1F4734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4730u;
            // 0x1f4734: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F31F0u;
    if (runtime->hasFunction(0x1F31F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F31F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4738u; }
        if (ctx->pc != 0x1F4738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F31F0_0x1f31f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4738u; }
        if (ctx->pc != 0x1F4738u) { return; }
    }
    ctx->pc = 0x1F4738u;
label_1f4738:
    // 0x1f4738: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f4738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f473c:
    // 0x1f473c: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1f473cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1f4740:
    // 0x1f4740: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1f4740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1f4744:
    // 0x1f4744: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f4748:
    // 0x1f4748: 0x3e00008  jr          $ra
label_1f474c:
    if (ctx->pc == 0x1F474Cu) {
        ctx->pc = 0x1F474Cu;
            // 0x1f474c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1F4750u;
        goto label_1f4750;
    }
    ctx->pc = 0x1F4748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F474Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4748u;
            // 0x1f474c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F4750u;
label_1f4750:
    // 0x1f4750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f4750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f4754:
    // 0x1f4754: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1f4754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_1f4758:
    // 0x1f4758: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f4758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f475c:
    // 0x1f475c: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x1f475cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_1f4760:
    // 0x1f4760: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x1f4760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
label_1f4764:
    // 0x1f4764: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f4764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f4768:
    // 0x1f4768: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1f4768u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f476c:
    // 0x1f476c: 0x2442deb0  addiu       $v0, $v0, -0x2150
    ctx->pc = 0x1f476cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958768));
label_1f4770:
    // 0x1f4770: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f4770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f4774:
    // 0x1f4774: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1f4774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_1f4778:
    // 0x1f4778: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1f4778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1f477c:
    // 0x1f477c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1f477cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1f4780:
    // 0x1f4780: 0xc07cbb0  jal         func_1F2EC0
label_1f4784:
    if (ctx->pc == 0x1F4784u) {
        ctx->pc = 0x1F4784u;
            // 0x1f4784: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1F4788u;
        goto label_1f4788;
    }
    ctx->pc = 0x1F4780u;
    SET_GPR_U32(ctx, 31, 0x1F4788u);
    ctx->pc = 0x1F4784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4780u;
            // 0x1f4784: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F2EC0u;
    if (runtime->hasFunction(0x1F2EC0u)) {
        auto targetFn = runtime->lookupFunction(0x1F2EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4788u; }
        if (ctx->pc != 0x1F4788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F2EC0_0x1f2ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4788u; }
        if (ctx->pc != 0x1F4788u) { return; }
    }
    ctx->pc = 0x1F4788u;
label_1f4788:
    // 0x1f4788: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f4788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f478c:
    // 0x1f478c: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1f478cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1f4790:
    // 0x1f4790: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1f4790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1f4794:
    // 0x1f4794: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f4798:
    // 0x1f4798: 0x3e00008  jr          $ra
label_1f479c:
    if (ctx->pc == 0x1F479Cu) {
        ctx->pc = 0x1F479Cu;
            // 0x1f479c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1F47A0u;
        goto label_1f47a0;
    }
    ctx->pc = 0x1F4798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F479Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4798u;
            // 0x1f479c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F47A0u;
label_1f47a0:
    // 0x1f47a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f47a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f47a4:
    // 0x1f47a4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1f47a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f47a8:
    // 0x1f47a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f47a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f47ac:
    // 0x1f47ac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f47acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f47b0:
    // 0x1f47b0: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x1f47b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
label_1f47b4:
    // 0x1f47b4: 0x2442de90  addiu       $v0, $v0, -0x2170
    ctx->pc = 0x1f47b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958736));
label_1f47b8:
    // 0x1f47b8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f47b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f47bc:
    // 0x1f47bc: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1f47bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1f47c0:
    // 0x1f47c0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f47c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f47c4:
    // 0x1f47c4: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1f47c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1f47c8:
    // 0x1f47c8: 0xc07cfc4  jal         func_1F3F10
label_1f47cc:
    if (ctx->pc == 0x1F47CCu) {
        ctx->pc = 0x1F47CCu;
            // 0x1f47cc: 0xa3a00014  sb          $zero, 0x14($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1F47D0u;
        goto label_1f47d0;
    }
    ctx->pc = 0x1F47C8u;
    SET_GPR_U32(ctx, 31, 0x1F47D0u);
    ctx->pc = 0x1F47CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F47C8u;
            // 0x1f47cc: 0xa3a00014  sb          $zero, 0x14($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F3F10u;
    goto label_1f3f10;
    ctx->pc = 0x1F47D0u;
label_1f47d0:
    // 0x1f47d0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f47d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f47d4:
    // 0x1f47d4: 0x2463d4f0  addiu       $v1, $v1, -0x2B10
    ctx->pc = 0x1f47d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956272));
label_1f47d8:
    // 0x1f47d8: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1f47d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1f47dc:
    // 0x1f47dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f47dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f47e0:
    // 0x1f47e0: 0x3e00008  jr          $ra
label_1f47e4:
    if (ctx->pc == 0x1F47E4u) {
        ctx->pc = 0x1F47E4u;
            // 0x1f47e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1F47E8u;
        goto label_1f47e8;
    }
    ctx->pc = 0x1F47E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F47E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F47E0u;
            // 0x1f47e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F47E8u;
label_1f47e8:
    // 0x1f47e8: 0x0  nop
    ctx->pc = 0x1f47e8u;
    // NOP
label_1f47ec:
    // 0x1f47ec: 0x0  nop
    ctx->pc = 0x1f47ecu;
    // NOP
label_1f47f0:
    // 0x1f47f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f47f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f47f4:
    // 0x1f47f4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1f47f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f47f8:
    // 0x1f47f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f47f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f47fc:
    // 0x1f47fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f47fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f4800:
    // 0x1f4800: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x1f4800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
label_1f4804:
    // 0x1f4804: 0x2442de90  addiu       $v0, $v0, -0x2170
    ctx->pc = 0x1f4804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958736));
label_1f4808:
    // 0x1f4808: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f4808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f480c:
    // 0x1f480c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1f480cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1f4810:
    // 0x1f4810: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1f4810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f4814:
    // 0x1f4814: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x1f4814u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1f4818:
    // 0x1f4818: 0xc07cef8  jal         func_1F3BE0
label_1f481c:
    if (ctx->pc == 0x1F481Cu) {
        ctx->pc = 0x1F481Cu;
            // 0x1f481c: 0xa3a00014  sb          $zero, 0x14($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1F4820u;
        goto label_1f4820;
    }
    ctx->pc = 0x1F4818u;
    SET_GPR_U32(ctx, 31, 0x1F4820u);
    ctx->pc = 0x1F481Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4818u;
            // 0x1f481c: 0xa3a00014  sb          $zero, 0x14($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F3BE0u;
    if (runtime->hasFunction(0x1F3BE0u)) {
        auto targetFn = runtime->lookupFunction(0x1F3BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4820u; }
        if (ctx->pc != 0x1F4820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F3BE0_0x1f3be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4820u; }
        if (ctx->pc != 0x1F4820u) { return; }
    }
    ctx->pc = 0x1F4820u;
label_1f4820:
    // 0x1f4820: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f4820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f4824:
    // 0x1f4824: 0x2463d4f0  addiu       $v1, $v1, -0x2B10
    ctx->pc = 0x1f4824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956272));
label_1f4828:
    // 0x1f4828: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1f4828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1f482c:
    // 0x1f482c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f482cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f4830:
    // 0x1f4830: 0x3e00008  jr          $ra
label_1f4834:
    if (ctx->pc == 0x1F4834u) {
        ctx->pc = 0x1F4834u;
            // 0x1f4834: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1F4838u;
        goto label_1f4838;
    }
    ctx->pc = 0x1F4830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4830u;
            // 0x1f4834: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F4838u;
label_1f4838:
    // 0x1f4838: 0x0  nop
    ctx->pc = 0x1f4838u;
    // NOP
label_1f483c:
    // 0x1f483c: 0x0  nop
    ctx->pc = 0x1f483cu;
    // NOP
label_1f4840:
    // 0x1f4840: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1f4840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1f4844:
    // 0x1f4844: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1f4844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_1f4848:
    // 0x1f4848: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f4848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f484c:
    // 0x1f484c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x1f484cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f4850:
    // 0x1f4850: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1f4850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1f4854:
    // 0x1f4854: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x1f4854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_1f4858:
    // 0x1f4858: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f4858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f485c:
    // 0x1f485c: 0x2442dea0  addiu       $v0, $v0, -0x2160
    ctx->pc = 0x1f485cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958752));
label_1f4860:
    // 0x1f4860: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x1f4860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
label_1f4864:
    // 0x1f4864: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f4864u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f4868:
    // 0x1f4868: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x1f4868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f486c:
    // 0x1f486c: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x1f486cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1f4870:
    // 0x1f4870: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x1f4870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_1f4874:
    // 0x1f4874: 0xafa50078  sw          $a1, 0x78($sp)
    ctx->pc = 0x1f4874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 5));
label_1f4878:
    // 0x1f4878: 0x8ce5000c  lw          $a1, 0xC($a3)
    ctx->pc = 0x1f4878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_1f487c:
    // 0x1f487c: 0xafa5007c  sw          $a1, 0x7C($sp)
    ctx->pc = 0x1f487cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 5));
label_1f4880:
    // 0x1f4880: 0x80e50010  lb          $a1, 0x10($a3)
    ctx->pc = 0x1f4880u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
label_1f4884:
    // 0x1f4884: 0xa3a50080  sb          $a1, 0x80($sp)
    ctx->pc = 0x1f4884u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 5));
label_1f4888:
    // 0x1f4888: 0xc4e90020  lwc1        $f9, 0x20($a3)
    ctx->pc = 0x1f4888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1f488c:
    // 0x1f488c: 0xe7a90090  swc1        $f9, 0x90($sp)
    ctx->pc = 0x1f488cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1f4890:
    // 0x1f4890: 0xc4e80024  lwc1        $f8, 0x24($a3)
    ctx->pc = 0x1f4890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1f4894:
    // 0x1f4894: 0x46004907  neg.s       $f4, $f9
    ctx->pc = 0x1f4894u;
    ctx->f[4] = FPU_NEG_S(ctx->f[9]);
label_1f4898:
    // 0x1f4898: 0xe7a80094  swc1        $f8, 0x94($sp)
    ctx->pc = 0x1f4898u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1f489c:
    // 0x1f489c: 0xc4e70028  lwc1        $f7, 0x28($a3)
    ctx->pc = 0x1f489cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f48a0:
    // 0x1f48a0: 0x460040c7  neg.s       $f3, $f8
    ctx->pc = 0x1f48a0u;
    ctx->f[3] = FPU_NEG_S(ctx->f[8]);
label_1f48a4:
    // 0x1f48a4: 0xe7a70098  swc1        $f7, 0x98($sp)
    ctx->pc = 0x1f48a4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1f48a8:
    // 0x1f48a8: 0xc4e6002c  lwc1        $f6, 0x2C($a3)
    ctx->pc = 0x1f48a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f48ac:
    // 0x1f48ac: 0x46003887  neg.s       $f2, $f7
    ctx->pc = 0x1f48acu;
    ctx->f[2] = FPU_NEG_S(ctx->f[7]);
label_1f48b0:
    // 0x1f48b0: 0xe7a6009c  swc1        $f6, 0x9C($sp)
    ctx->pc = 0x1f48b0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1f48b4:
    // 0x1f48b4: 0xc4e50030  lwc1        $f5, 0x30($a3)
    ctx->pc = 0x1f48b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f48b8:
    // 0x1f48b8: 0x46003047  neg.s       $f1, $f6
    ctx->pc = 0x1f48b8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[6]);
label_1f48bc:
    // 0x1f48bc: 0xe7a500a0  swc1        $f5, 0xA0($sp)
    ctx->pc = 0x1f48bcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1f48c0:
    // 0x1f48c0: 0xc4e50034  lwc1        $f5, 0x34($a3)
    ctx->pc = 0x1f48c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f48c4:
    // 0x1f48c4: 0xe7a500a4  swc1        $f5, 0xA4($sp)
    ctx->pc = 0x1f48c4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1f48c8:
    // 0x1f48c8: 0x8ce50038  lw          $a1, 0x38($a3)
    ctx->pc = 0x1f48c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
label_1f48cc:
    // 0x1f48cc: 0xafa500a8  sw          $a1, 0xA8($sp)
    ctx->pc = 0x1f48ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 5));
label_1f48d0:
    // 0x1f48d0: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x1f48d0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1f48d4:
    // 0x1f48d4: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x1f48d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1f48d8:
    // 0x1f48d8: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x1f48d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_1f48dc:
    // 0x1f48dc: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x1f48dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1f48e0:
    // 0x1f48e0: 0xafa80060  sw          $t0, 0x60($sp)
    ctx->pc = 0x1f48e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 8));
label_1f48e4:
    // 0x1f48e4: 0xe7a1009c  swc1        $f1, 0x9C($sp)
    ctx->pc = 0x1f48e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1f48e8:
    // 0x1f48e8: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1f48e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1f48ec:
    // 0x1f48ec: 0xe7a90050  swc1        $f9, 0x50($sp)
    ctx->pc = 0x1f48ecu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1f48f0:
    // 0x1f48f0: 0xe7a80054  swc1        $f8, 0x54($sp)
    ctx->pc = 0x1f48f0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1f48f4:
    // 0x1f48f4: 0xe7a70058  swc1        $f7, 0x58($sp)
    ctx->pc = 0x1f48f4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1f48f8:
    // 0x1f48f8: 0x11200012  beqz        $t1, . + 4 + (0x12 << 2)
label_1f48fc:
    if (ctx->pc == 0x1F48FCu) {
        ctx->pc = 0x1F48FCu;
            // 0x1f48fc: 0xe7a6005c  swc1        $f6, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->pc = 0x1F4900u;
        goto label_1f4900;
    }
    ctx->pc = 0x1F48F8u;
    {
        const bool branch_taken_0x1f48f8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F48FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F48F8u;
            // 0x1f48fc: 0xe7a6005c  swc1        $f6, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f48f8) {
            ctx->pc = 0x1F4944u;
            goto label_1f4944;
        }
    }
    ctx->pc = 0x1F4900u;
label_1f4900:
    // 0x1f4900: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f4900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f4904:
    // 0x1f4904: 0xafa90030  sw          $t1, 0x30($sp)
    ctx->pc = 0x1f4904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 9));
label_1f4908:
    // 0x1f4908: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1f4908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1f490c:
    // 0x1f490c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1f490cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1f4910:
    // 0x1f4910: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x1f4910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1f4914:
    // 0x1f4914: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x1f4914u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f4918:
    // 0x1f4918: 0xe7a90020  swc1        $f9, 0x20($sp)
    ctx->pc = 0x1f4918u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1f491c:
    // 0x1f491c: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x1f491cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1f4920:
    // 0x1f4920: 0xe7a80024  swc1        $f8, 0x24($sp)
    ctx->pc = 0x1f4920u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1f4924:
    // 0x1f4924: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x1f4924u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1f4928:
    // 0x1f4928: 0xe7a70028  swc1        $f7, 0x28($sp)
    ctx->pc = 0x1f4928u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1f492c:
    // 0x1f492c: 0xc07cd50  jal         func_1F3540
label_1f4930:
    if (ctx->pc == 0x1F4930u) {
        ctx->pc = 0x1F4930u;
            // 0x1f4930: 0xe7a6002c  swc1        $f6, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->pc = 0x1F4934u;
        goto label_1f4934;
    }
    ctx->pc = 0x1F492Cu;
    SET_GPR_U32(ctx, 31, 0x1F4934u);
    ctx->pc = 0x1F4930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F492Cu;
            // 0x1f4930: 0xe7a6002c  swc1        $f6, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F3540u;
    if (runtime->hasFunction(0x1F3540u)) {
        auto targetFn = runtime->lookupFunction(0x1F3540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4934u; }
        if (ctx->pc != 0x1F4934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F3540_0x1f3540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4934u; }
        if (ctx->pc != 0x1F4934u) { return; }
    }
    ctx->pc = 0x1F4934u;
label_1f4934:
    // 0x1f4934: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f4934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f4938:
    // 0x1f4938: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1f4938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1f493c:
    // 0x1f493c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1f4940:
    if (ctx->pc == 0x1F4940u) {
        ctx->pc = 0x1F4940u;
            // 0x1f4940: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->pc = 0x1F4944u;
        goto label_1f4944;
    }
    ctx->pc = 0x1F493Cu;
    {
        const bool branch_taken_0x1f493c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F493Cu;
            // 0x1f4940: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f493c) {
            ctx->pc = 0x1F495Cu;
            goto label_1f495c;
        }
    }
    ctx->pc = 0x1F4944u;
label_1f4944:
    // 0x1f4944: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f4944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f4948:
    // 0x1f4948: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x1f4948u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f494c:
    // 0x1f494c: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x1f494cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1f4950:
    // 0x1f4950: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x1f4950u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1f4954:
    // 0x1f4954: 0xc07cd50  jal         func_1F3540
label_1f4958:
    if (ctx->pc == 0x1F4958u) {
        ctx->pc = 0x1F4958u;
            // 0x1f4958: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F495Cu;
        goto label_1f495c;
    }
    ctx->pc = 0x1F4954u;
    SET_GPR_U32(ctx, 31, 0x1F495Cu);
    ctx->pc = 0x1F4958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4954u;
            // 0x1f4958: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F3540u;
    if (runtime->hasFunction(0x1F3540u)) {
        auto targetFn = runtime->lookupFunction(0x1F3540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F495Cu; }
        if (ctx->pc != 0x1F495Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F3540_0x1f3540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F495Cu; }
        if (ctx->pc != 0x1F495Cu) { return; }
    }
    ctx->pc = 0x1F495Cu;
label_1f495c:
    // 0x1f495c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f495cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f4960:
    // 0x1f4960: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1f4960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1f4964:
    // 0x1f4964: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x1f4964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_1f4968:
    // 0x1f4968: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f496c:
    // 0x1f496c: 0x3e00008  jr          $ra
label_1f4970:
    if (ctx->pc == 0x1F4970u) {
        ctx->pc = 0x1F4970u;
            // 0x1f4970: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1F4974u;
        goto label_1f4974;
    }
    ctx->pc = 0x1F496Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F496Cu;
            // 0x1f4970: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F4974u;
label_1f4974:
    // 0x1f4974: 0x0  nop
    ctx->pc = 0x1f4974u;
    // NOP
label_1f4978:
    // 0x1f4978: 0x0  nop
    ctx->pc = 0x1f4978u;
    // NOP
label_1f497c:
    // 0x1f497c: 0x0  nop
    ctx->pc = 0x1f497cu;
    // NOP
}
