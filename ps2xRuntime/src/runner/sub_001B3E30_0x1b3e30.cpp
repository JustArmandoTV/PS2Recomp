#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B3E30
// Address: 0x1b3e30 - 0x1b4428
void sub_001B3E30_0x1b3e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3E30_0x1b3e30");
#endif

    switch (ctx->pc) {
        case 0x1b3e30u: goto label_1b3e30;
        case 0x1b3e34u: goto label_1b3e34;
        case 0x1b3e38u: goto label_1b3e38;
        case 0x1b3e3cu: goto label_1b3e3c;
        case 0x1b3e40u: goto label_1b3e40;
        case 0x1b3e44u: goto label_1b3e44;
        case 0x1b3e48u: goto label_1b3e48;
        case 0x1b3e4cu: goto label_1b3e4c;
        case 0x1b3e50u: goto label_1b3e50;
        case 0x1b3e54u: goto label_1b3e54;
        case 0x1b3e58u: goto label_1b3e58;
        case 0x1b3e5cu: goto label_1b3e5c;
        case 0x1b3e60u: goto label_1b3e60;
        case 0x1b3e64u: goto label_1b3e64;
        case 0x1b3e68u: goto label_1b3e68;
        case 0x1b3e6cu: goto label_1b3e6c;
        case 0x1b3e70u: goto label_1b3e70;
        case 0x1b3e74u: goto label_1b3e74;
        case 0x1b3e78u: goto label_1b3e78;
        case 0x1b3e7cu: goto label_1b3e7c;
        case 0x1b3e80u: goto label_1b3e80;
        case 0x1b3e84u: goto label_1b3e84;
        case 0x1b3e88u: goto label_1b3e88;
        case 0x1b3e8cu: goto label_1b3e8c;
        case 0x1b3e90u: goto label_1b3e90;
        case 0x1b3e94u: goto label_1b3e94;
        case 0x1b3e98u: goto label_1b3e98;
        case 0x1b3e9cu: goto label_1b3e9c;
        case 0x1b3ea0u: goto label_1b3ea0;
        case 0x1b3ea4u: goto label_1b3ea4;
        case 0x1b3ea8u: goto label_1b3ea8;
        case 0x1b3eacu: goto label_1b3eac;
        case 0x1b3eb0u: goto label_1b3eb0;
        case 0x1b3eb4u: goto label_1b3eb4;
        case 0x1b3eb8u: goto label_1b3eb8;
        case 0x1b3ebcu: goto label_1b3ebc;
        case 0x1b3ec0u: goto label_1b3ec0;
        case 0x1b3ec4u: goto label_1b3ec4;
        case 0x1b3ec8u: goto label_1b3ec8;
        case 0x1b3eccu: goto label_1b3ecc;
        case 0x1b3ed0u: goto label_1b3ed0;
        case 0x1b3ed4u: goto label_1b3ed4;
        case 0x1b3ed8u: goto label_1b3ed8;
        case 0x1b3edcu: goto label_1b3edc;
        case 0x1b3ee0u: goto label_1b3ee0;
        case 0x1b3ee4u: goto label_1b3ee4;
        case 0x1b3ee8u: goto label_1b3ee8;
        case 0x1b3eecu: goto label_1b3eec;
        case 0x1b3ef0u: goto label_1b3ef0;
        case 0x1b3ef4u: goto label_1b3ef4;
        case 0x1b3ef8u: goto label_1b3ef8;
        case 0x1b3efcu: goto label_1b3efc;
        case 0x1b3f00u: goto label_1b3f00;
        case 0x1b3f04u: goto label_1b3f04;
        case 0x1b3f08u: goto label_1b3f08;
        case 0x1b3f0cu: goto label_1b3f0c;
        case 0x1b3f10u: goto label_1b3f10;
        case 0x1b3f14u: goto label_1b3f14;
        case 0x1b3f18u: goto label_1b3f18;
        case 0x1b3f1cu: goto label_1b3f1c;
        case 0x1b3f20u: goto label_1b3f20;
        case 0x1b3f24u: goto label_1b3f24;
        case 0x1b3f28u: goto label_1b3f28;
        case 0x1b3f2cu: goto label_1b3f2c;
        case 0x1b3f30u: goto label_1b3f30;
        case 0x1b3f34u: goto label_1b3f34;
        case 0x1b3f38u: goto label_1b3f38;
        case 0x1b3f3cu: goto label_1b3f3c;
        case 0x1b3f40u: goto label_1b3f40;
        case 0x1b3f44u: goto label_1b3f44;
        case 0x1b3f48u: goto label_1b3f48;
        case 0x1b3f4cu: goto label_1b3f4c;
        case 0x1b3f50u: goto label_1b3f50;
        case 0x1b3f54u: goto label_1b3f54;
        case 0x1b3f58u: goto label_1b3f58;
        case 0x1b3f5cu: goto label_1b3f5c;
        case 0x1b3f60u: goto label_1b3f60;
        case 0x1b3f64u: goto label_1b3f64;
        case 0x1b3f68u: goto label_1b3f68;
        case 0x1b3f6cu: goto label_1b3f6c;
        case 0x1b3f70u: goto label_1b3f70;
        case 0x1b3f74u: goto label_1b3f74;
        case 0x1b3f78u: goto label_1b3f78;
        case 0x1b3f7cu: goto label_1b3f7c;
        case 0x1b3f80u: goto label_1b3f80;
        case 0x1b3f84u: goto label_1b3f84;
        case 0x1b3f88u: goto label_1b3f88;
        case 0x1b3f8cu: goto label_1b3f8c;
        case 0x1b3f90u: goto label_1b3f90;
        case 0x1b3f94u: goto label_1b3f94;
        case 0x1b3f98u: goto label_1b3f98;
        case 0x1b3f9cu: goto label_1b3f9c;
        case 0x1b3fa0u: goto label_1b3fa0;
        case 0x1b3fa4u: goto label_1b3fa4;
        case 0x1b3fa8u: goto label_1b3fa8;
        case 0x1b3facu: goto label_1b3fac;
        case 0x1b3fb0u: goto label_1b3fb0;
        case 0x1b3fb4u: goto label_1b3fb4;
        case 0x1b3fb8u: goto label_1b3fb8;
        case 0x1b3fbcu: goto label_1b3fbc;
        case 0x1b3fc0u: goto label_1b3fc0;
        case 0x1b3fc4u: goto label_1b3fc4;
        case 0x1b3fc8u: goto label_1b3fc8;
        case 0x1b3fccu: goto label_1b3fcc;
        case 0x1b3fd0u: goto label_1b3fd0;
        case 0x1b3fd4u: goto label_1b3fd4;
        case 0x1b3fd8u: goto label_1b3fd8;
        case 0x1b3fdcu: goto label_1b3fdc;
        case 0x1b3fe0u: goto label_1b3fe0;
        case 0x1b3fe4u: goto label_1b3fe4;
        case 0x1b3fe8u: goto label_1b3fe8;
        case 0x1b3fecu: goto label_1b3fec;
        case 0x1b3ff0u: goto label_1b3ff0;
        case 0x1b3ff4u: goto label_1b3ff4;
        case 0x1b3ff8u: goto label_1b3ff8;
        case 0x1b3ffcu: goto label_1b3ffc;
        case 0x1b4000u: goto label_1b4000;
        case 0x1b4004u: goto label_1b4004;
        case 0x1b4008u: goto label_1b4008;
        case 0x1b400cu: goto label_1b400c;
        case 0x1b4010u: goto label_1b4010;
        case 0x1b4014u: goto label_1b4014;
        case 0x1b4018u: goto label_1b4018;
        case 0x1b401cu: goto label_1b401c;
        case 0x1b4020u: goto label_1b4020;
        case 0x1b4024u: goto label_1b4024;
        case 0x1b4028u: goto label_1b4028;
        case 0x1b402cu: goto label_1b402c;
        case 0x1b4030u: goto label_1b4030;
        case 0x1b4034u: goto label_1b4034;
        case 0x1b4038u: goto label_1b4038;
        case 0x1b403cu: goto label_1b403c;
        case 0x1b4040u: goto label_1b4040;
        case 0x1b4044u: goto label_1b4044;
        case 0x1b4048u: goto label_1b4048;
        case 0x1b404cu: goto label_1b404c;
        case 0x1b4050u: goto label_1b4050;
        case 0x1b4054u: goto label_1b4054;
        case 0x1b4058u: goto label_1b4058;
        case 0x1b405cu: goto label_1b405c;
        case 0x1b4060u: goto label_1b4060;
        case 0x1b4064u: goto label_1b4064;
        case 0x1b4068u: goto label_1b4068;
        case 0x1b406cu: goto label_1b406c;
        case 0x1b4070u: goto label_1b4070;
        case 0x1b4074u: goto label_1b4074;
        case 0x1b4078u: goto label_1b4078;
        case 0x1b407cu: goto label_1b407c;
        case 0x1b4080u: goto label_1b4080;
        case 0x1b4084u: goto label_1b4084;
        case 0x1b4088u: goto label_1b4088;
        case 0x1b408cu: goto label_1b408c;
        case 0x1b4090u: goto label_1b4090;
        case 0x1b4094u: goto label_1b4094;
        case 0x1b4098u: goto label_1b4098;
        case 0x1b409cu: goto label_1b409c;
        case 0x1b40a0u: goto label_1b40a0;
        case 0x1b40a4u: goto label_1b40a4;
        case 0x1b40a8u: goto label_1b40a8;
        case 0x1b40acu: goto label_1b40ac;
        case 0x1b40b0u: goto label_1b40b0;
        case 0x1b40b4u: goto label_1b40b4;
        case 0x1b40b8u: goto label_1b40b8;
        case 0x1b40bcu: goto label_1b40bc;
        case 0x1b40c0u: goto label_1b40c0;
        case 0x1b40c4u: goto label_1b40c4;
        case 0x1b40c8u: goto label_1b40c8;
        case 0x1b40ccu: goto label_1b40cc;
        case 0x1b40d0u: goto label_1b40d0;
        case 0x1b40d4u: goto label_1b40d4;
        case 0x1b40d8u: goto label_1b40d8;
        case 0x1b40dcu: goto label_1b40dc;
        case 0x1b40e0u: goto label_1b40e0;
        case 0x1b40e4u: goto label_1b40e4;
        case 0x1b40e8u: goto label_1b40e8;
        case 0x1b40ecu: goto label_1b40ec;
        case 0x1b40f0u: goto label_1b40f0;
        case 0x1b40f4u: goto label_1b40f4;
        case 0x1b40f8u: goto label_1b40f8;
        case 0x1b40fcu: goto label_1b40fc;
        case 0x1b4100u: goto label_1b4100;
        case 0x1b4104u: goto label_1b4104;
        case 0x1b4108u: goto label_1b4108;
        case 0x1b410cu: goto label_1b410c;
        case 0x1b4110u: goto label_1b4110;
        case 0x1b4114u: goto label_1b4114;
        case 0x1b4118u: goto label_1b4118;
        case 0x1b411cu: goto label_1b411c;
        case 0x1b4120u: goto label_1b4120;
        case 0x1b4124u: goto label_1b4124;
        case 0x1b4128u: goto label_1b4128;
        case 0x1b412cu: goto label_1b412c;
        case 0x1b4130u: goto label_1b4130;
        case 0x1b4134u: goto label_1b4134;
        case 0x1b4138u: goto label_1b4138;
        case 0x1b413cu: goto label_1b413c;
        case 0x1b4140u: goto label_1b4140;
        case 0x1b4144u: goto label_1b4144;
        case 0x1b4148u: goto label_1b4148;
        case 0x1b414cu: goto label_1b414c;
        case 0x1b4150u: goto label_1b4150;
        case 0x1b4154u: goto label_1b4154;
        case 0x1b4158u: goto label_1b4158;
        case 0x1b415cu: goto label_1b415c;
        case 0x1b4160u: goto label_1b4160;
        case 0x1b4164u: goto label_1b4164;
        case 0x1b4168u: goto label_1b4168;
        case 0x1b416cu: goto label_1b416c;
        case 0x1b4170u: goto label_1b4170;
        case 0x1b4174u: goto label_1b4174;
        case 0x1b4178u: goto label_1b4178;
        case 0x1b417cu: goto label_1b417c;
        case 0x1b4180u: goto label_1b4180;
        case 0x1b4184u: goto label_1b4184;
        case 0x1b4188u: goto label_1b4188;
        case 0x1b418cu: goto label_1b418c;
        case 0x1b4190u: goto label_1b4190;
        case 0x1b4194u: goto label_1b4194;
        case 0x1b4198u: goto label_1b4198;
        case 0x1b419cu: goto label_1b419c;
        case 0x1b41a0u: goto label_1b41a0;
        case 0x1b41a4u: goto label_1b41a4;
        case 0x1b41a8u: goto label_1b41a8;
        case 0x1b41acu: goto label_1b41ac;
        case 0x1b41b0u: goto label_1b41b0;
        case 0x1b41b4u: goto label_1b41b4;
        case 0x1b41b8u: goto label_1b41b8;
        case 0x1b41bcu: goto label_1b41bc;
        case 0x1b41c0u: goto label_1b41c0;
        case 0x1b41c4u: goto label_1b41c4;
        case 0x1b41c8u: goto label_1b41c8;
        case 0x1b41ccu: goto label_1b41cc;
        case 0x1b41d0u: goto label_1b41d0;
        case 0x1b41d4u: goto label_1b41d4;
        case 0x1b41d8u: goto label_1b41d8;
        case 0x1b41dcu: goto label_1b41dc;
        case 0x1b41e0u: goto label_1b41e0;
        case 0x1b41e4u: goto label_1b41e4;
        case 0x1b41e8u: goto label_1b41e8;
        case 0x1b41ecu: goto label_1b41ec;
        case 0x1b41f0u: goto label_1b41f0;
        case 0x1b41f4u: goto label_1b41f4;
        case 0x1b41f8u: goto label_1b41f8;
        case 0x1b41fcu: goto label_1b41fc;
        case 0x1b4200u: goto label_1b4200;
        case 0x1b4204u: goto label_1b4204;
        case 0x1b4208u: goto label_1b4208;
        case 0x1b420cu: goto label_1b420c;
        case 0x1b4210u: goto label_1b4210;
        case 0x1b4214u: goto label_1b4214;
        case 0x1b4218u: goto label_1b4218;
        case 0x1b421cu: goto label_1b421c;
        case 0x1b4220u: goto label_1b4220;
        case 0x1b4224u: goto label_1b4224;
        case 0x1b4228u: goto label_1b4228;
        case 0x1b422cu: goto label_1b422c;
        case 0x1b4230u: goto label_1b4230;
        case 0x1b4234u: goto label_1b4234;
        case 0x1b4238u: goto label_1b4238;
        case 0x1b423cu: goto label_1b423c;
        case 0x1b4240u: goto label_1b4240;
        case 0x1b4244u: goto label_1b4244;
        case 0x1b4248u: goto label_1b4248;
        case 0x1b424cu: goto label_1b424c;
        case 0x1b4250u: goto label_1b4250;
        case 0x1b4254u: goto label_1b4254;
        case 0x1b4258u: goto label_1b4258;
        case 0x1b425cu: goto label_1b425c;
        case 0x1b4260u: goto label_1b4260;
        case 0x1b4264u: goto label_1b4264;
        case 0x1b4268u: goto label_1b4268;
        case 0x1b426cu: goto label_1b426c;
        case 0x1b4270u: goto label_1b4270;
        case 0x1b4274u: goto label_1b4274;
        case 0x1b4278u: goto label_1b4278;
        case 0x1b427cu: goto label_1b427c;
        case 0x1b4280u: goto label_1b4280;
        case 0x1b4284u: goto label_1b4284;
        case 0x1b4288u: goto label_1b4288;
        case 0x1b428cu: goto label_1b428c;
        case 0x1b4290u: goto label_1b4290;
        case 0x1b4294u: goto label_1b4294;
        case 0x1b4298u: goto label_1b4298;
        case 0x1b429cu: goto label_1b429c;
        case 0x1b42a0u: goto label_1b42a0;
        case 0x1b42a4u: goto label_1b42a4;
        case 0x1b42a8u: goto label_1b42a8;
        case 0x1b42acu: goto label_1b42ac;
        case 0x1b42b0u: goto label_1b42b0;
        case 0x1b42b4u: goto label_1b42b4;
        case 0x1b42b8u: goto label_1b42b8;
        case 0x1b42bcu: goto label_1b42bc;
        case 0x1b42c0u: goto label_1b42c0;
        case 0x1b42c4u: goto label_1b42c4;
        case 0x1b42c8u: goto label_1b42c8;
        case 0x1b42ccu: goto label_1b42cc;
        case 0x1b42d0u: goto label_1b42d0;
        case 0x1b42d4u: goto label_1b42d4;
        case 0x1b42d8u: goto label_1b42d8;
        case 0x1b42dcu: goto label_1b42dc;
        case 0x1b42e0u: goto label_1b42e0;
        case 0x1b42e4u: goto label_1b42e4;
        case 0x1b42e8u: goto label_1b42e8;
        case 0x1b42ecu: goto label_1b42ec;
        case 0x1b42f0u: goto label_1b42f0;
        case 0x1b42f4u: goto label_1b42f4;
        case 0x1b42f8u: goto label_1b42f8;
        case 0x1b42fcu: goto label_1b42fc;
        case 0x1b4300u: goto label_1b4300;
        case 0x1b4304u: goto label_1b4304;
        case 0x1b4308u: goto label_1b4308;
        case 0x1b430cu: goto label_1b430c;
        case 0x1b4310u: goto label_1b4310;
        case 0x1b4314u: goto label_1b4314;
        case 0x1b4318u: goto label_1b4318;
        case 0x1b431cu: goto label_1b431c;
        case 0x1b4320u: goto label_1b4320;
        case 0x1b4324u: goto label_1b4324;
        case 0x1b4328u: goto label_1b4328;
        case 0x1b432cu: goto label_1b432c;
        case 0x1b4330u: goto label_1b4330;
        case 0x1b4334u: goto label_1b4334;
        case 0x1b4338u: goto label_1b4338;
        case 0x1b433cu: goto label_1b433c;
        case 0x1b4340u: goto label_1b4340;
        case 0x1b4344u: goto label_1b4344;
        case 0x1b4348u: goto label_1b4348;
        case 0x1b434cu: goto label_1b434c;
        case 0x1b4350u: goto label_1b4350;
        case 0x1b4354u: goto label_1b4354;
        case 0x1b4358u: goto label_1b4358;
        case 0x1b435cu: goto label_1b435c;
        case 0x1b4360u: goto label_1b4360;
        case 0x1b4364u: goto label_1b4364;
        case 0x1b4368u: goto label_1b4368;
        case 0x1b436cu: goto label_1b436c;
        case 0x1b4370u: goto label_1b4370;
        case 0x1b4374u: goto label_1b4374;
        case 0x1b4378u: goto label_1b4378;
        case 0x1b437cu: goto label_1b437c;
        case 0x1b4380u: goto label_1b4380;
        case 0x1b4384u: goto label_1b4384;
        case 0x1b4388u: goto label_1b4388;
        case 0x1b438cu: goto label_1b438c;
        case 0x1b4390u: goto label_1b4390;
        case 0x1b4394u: goto label_1b4394;
        case 0x1b4398u: goto label_1b4398;
        case 0x1b439cu: goto label_1b439c;
        case 0x1b43a0u: goto label_1b43a0;
        case 0x1b43a4u: goto label_1b43a4;
        case 0x1b43a8u: goto label_1b43a8;
        case 0x1b43acu: goto label_1b43ac;
        case 0x1b43b0u: goto label_1b43b0;
        case 0x1b43b4u: goto label_1b43b4;
        case 0x1b43b8u: goto label_1b43b8;
        case 0x1b43bcu: goto label_1b43bc;
        case 0x1b43c0u: goto label_1b43c0;
        case 0x1b43c4u: goto label_1b43c4;
        case 0x1b43c8u: goto label_1b43c8;
        case 0x1b43ccu: goto label_1b43cc;
        case 0x1b43d0u: goto label_1b43d0;
        case 0x1b43d4u: goto label_1b43d4;
        case 0x1b43d8u: goto label_1b43d8;
        case 0x1b43dcu: goto label_1b43dc;
        case 0x1b43e0u: goto label_1b43e0;
        case 0x1b43e4u: goto label_1b43e4;
        case 0x1b43e8u: goto label_1b43e8;
        case 0x1b43ecu: goto label_1b43ec;
        case 0x1b43f0u: goto label_1b43f0;
        case 0x1b43f4u: goto label_1b43f4;
        case 0x1b43f8u: goto label_1b43f8;
        case 0x1b43fcu: goto label_1b43fc;
        case 0x1b4400u: goto label_1b4400;
        case 0x1b4404u: goto label_1b4404;
        case 0x1b4408u: goto label_1b4408;
        case 0x1b440cu: goto label_1b440c;
        case 0x1b4410u: goto label_1b4410;
        case 0x1b4414u: goto label_1b4414;
        case 0x1b4418u: goto label_1b4418;
        case 0x1b441cu: goto label_1b441c;
        case 0x1b4420u: goto label_1b4420;
        case 0x1b4424u: goto label_1b4424;
        default: break;
    }

    ctx->pc = 0x1b3e30u;

label_1b3e30:
    // 0x1b3e30: 0x27bdfcb0  addiu       $sp, $sp, -0x350
    ctx->pc = 0x1b3e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966448));
label_1b3e34:
    // 0x1b3e34: 0xffb00300  sd          $s0, 0x300($sp)
    ctx->pc = 0x1b3e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 768), GPR_U64(ctx, 16));
label_1b3e38:
    // 0x1b3e38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b3e38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b3e3c:
    // 0x1b3e3c: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x1b3e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
label_1b3e40:
    // 0x1b3e40: 0xffb10308  sd          $s1, 0x308($sp)
    ctx->pc = 0x1b3e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 776), GPR_U64(ctx, 17));
label_1b3e44:
    // 0x1b3e44: 0xffb20310  sd          $s2, 0x310($sp)
    ctx->pc = 0x1b3e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 784), GPR_U64(ctx, 18));
label_1b3e48:
    // 0x1b3e48: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b3e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b3e4c:
    // 0x1b3e4c: 0xffb30318  sd          $s3, 0x318($sp)
    ctx->pc = 0x1b3e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 792), GPR_U64(ctx, 19));
label_1b3e50:
    // 0x1b3e50: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x1b3e50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b3e54:
    // 0x1b3e54: 0xffb40320  sd          $s4, 0x320($sp)
    ctx->pc = 0x1b3e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 800), GPR_U64(ctx, 20));
label_1b3e58:
    // 0x1b3e58: 0xffb50328  sd          $s5, 0x328($sp)
    ctx->pc = 0x1b3e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 808), GPR_U64(ctx, 21));
label_1b3e5c:
    // 0x1b3e5c: 0xffb60330  sd          $s6, 0x330($sp)
    ctx->pc = 0x1b3e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 816), GPR_U64(ctx, 22));
label_1b3e60:
    // 0x1b3e60: 0xffb70338  sd          $s7, 0x338($sp)
    ctx->pc = 0x1b3e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 824), GPR_U64(ctx, 23));
label_1b3e64:
    // 0x1b3e64: 0xffbe0340  sd          $fp, 0x340($sp)
    ctx->pc = 0x1b3e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 832), GPR_U64(ctx, 30));
label_1b3e68:
    // 0x1b3e68: 0xffbf0348  sd          $ra, 0x348($sp)
    ctx->pc = 0x1b3e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 840), GPR_U64(ctx, 31));
label_1b3e6c:
    // 0x1b3e6c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1b3e70:
    if (ctx->pc == 0x1B3E70u) {
        ctx->pc = 0x1B3E70u;
            // 0x1b3e70: 0xafa002c0  sw          $zero, 0x2C0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 0));
        ctx->pc = 0x1B3E74u;
        goto label_1b3e74;
    }
    ctx->pc = 0x1B3E6Cu;
    {
        const bool branch_taken_0x1b3e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3E6Cu;
            // 0x1b3e70: 0xafa002c0  sw          $zero, 0x2C0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3e6c) {
            ctx->pc = 0x1B3ED8u;
            goto label_1b3ed8;
        }
    }
    ctx->pc = 0x1B3E74u;
label_1b3e74:
    // 0x1b3e74: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x1b3e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1b3e78:
    // 0x1b3e78: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x1b3e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1b3e7c:
    // 0x1b3e7c: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x1b3e7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1b3e80:
    // 0x1b3e80: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x1b3e80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1b3e84:
    // 0x1b3e84: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x1b3e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1b3e88:
    // 0x1b3e88: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x1b3e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1b3e8c:
    // 0x1b3e8c: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x1b3e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1b3e90:
    // 0x1b3e90: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x1b3e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1b3e94:
    // 0x1b3e94: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x1b3e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1b3e98:
    // 0x1b3e98: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x1b3e98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b3e9c:
    // 0x1b3e9c: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x1b3e9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b3ea0:
    // 0x1b3ea0: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x1b3ea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b3ea4:
    // 0x1b3ea4: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x1b3ea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b3ea8:
    // 0x1b3ea8: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x1b3ea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b3eac:
    // 0x1b3eac: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x1b3eacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b3eb0:
    // 0x1b3eb0: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x1b3eb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b3eb4:
    // 0x1b3eb4: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x1b3eb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b3eb8:
    // 0x1b3eb8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1b3eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1b3ebc:
    // 0x1b3ebc: 0x0  nop
    ctx->pc = 0x1b3ebcu;
    // NOP
label_1b3ec0:
    // 0x1b3ec0: 0x0  nop
    ctx->pc = 0x1b3ec0u;
    // NOP
label_1b3ec4:
    // 0x1b3ec4: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
label_1b3ec8:
    if (ctx->pc == 0x1B3EC8u) {
        ctx->pc = 0x1B3EC8u;
            // 0x1b3ec8: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->pc = 0x1B3ECCu;
        goto label_1b3ecc;
    }
    ctx->pc = 0x1B3EC4u;
    {
        const bool branch_taken_0x1b3ec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B3EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3EC4u;
            // 0x1b3ec8: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3ec4) {
            ctx->pc = 0x1B3E78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b3e78;
        }
    }
    ctx->pc = 0x1B3ECCu;
label_1b3ecc:
    // 0x1b3ecc: 0x10000010  b           . + 4 + (0x10 << 2)
label_1b3ed0:
    if (ctx->pc == 0x1B3ED0u) {
        ctx->pc = 0x1B3ED4u;
        goto label_1b3ed4;
    }
    ctx->pc = 0x1B3ECCu;
    {
        const bool branch_taken_0x1b3ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3ecc) {
            ctx->pc = 0x1B3F10u;
            goto label_1b3f10;
        }
    }
    ctx->pc = 0x1B3ED4u;
label_1b3ed4:
    // 0x1b3ed4: 0x0  nop
    ctx->pc = 0x1b3ed4u;
    // NOP
label_1b3ed8:
    // 0x1b3ed8: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x1b3ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1b3edc:
    // 0x1b3edc: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x1b3edcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_1b3ee0:
    // 0x1b3ee0: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x1b3ee0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_1b3ee4:
    // 0x1b3ee4: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x1b3ee4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_1b3ee8:
    // 0x1b3ee8: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x1b3ee8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
label_1b3eec:
    // 0x1b3eec: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x1b3eecu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
label_1b3ef0:
    // 0x1b3ef0: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x1b3ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
label_1b3ef4:
    // 0x1b3ef4: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x1b3ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
label_1b3ef8:
    // 0x1b3ef8: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x1b3ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
label_1b3efc:
    // 0x1b3efc: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1b3efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1b3f00:
    // 0x1b3f00: 0x0  nop
    ctx->pc = 0x1b3f00u;
    // NOP
label_1b3f04:
    // 0x1b3f04: 0x0  nop
    ctx->pc = 0x1b3f04u;
    // NOP
label_1b3f08:
    // 0x1b3f08: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
label_1b3f0c:
    if (ctx->pc == 0x1B3F0Cu) {
        ctx->pc = 0x1B3F0Cu;
            // 0x1b3f0c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->pc = 0x1B3F10u;
        goto label_1b3f10;
    }
    ctx->pc = 0x1B3F08u;
    {
        const bool branch_taken_0x1b3f08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B3F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3F08u;
            // 0x1b3f0c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3f08) {
            ctx->pc = 0x1B3EDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b3edc;
        }
    }
    ctx->pc = 0x1B3F10u;
label_1b3f10:
    // 0x1b3f10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b3f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1b3f14:
    // 0x1b3f14: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1b3f14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1b3f18:
    // 0x1b3f18: 0x8e150a2c  lw          $s5, 0xA2C($s0)
    ctx->pc = 0x1b3f18u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2604)));
label_1b3f1c:
    // 0x1b3f1c: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
label_1b3f20:
    if (ctx->pc == 0x1B3F20u) {
        ctx->pc = 0x1B3F24u;
        goto label_1b3f24;
    }
    ctx->pc = 0x1B3F1Cu;
    {
        const bool branch_taken_0x1b3f1c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3f1c) {
            ctx->pc = 0x1B3F38u;
            goto label_1b3f38;
        }
    }
    ctx->pc = 0x1B3F24u;
label_1b3f24:
    // 0x1b3f24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b3f28:
    // 0x1b3f28: 0xc06d134  jal         func_1B44D0
label_1b3f2c:
    if (ctx->pc == 0x1B3F2Cu) {
        ctx->pc = 0x1B3F2Cu;
            // 0x1b3f2c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1B3F30u;
        goto label_1b3f30;
    }
    ctx->pc = 0x1B3F28u;
    SET_GPR_U32(ctx, 31, 0x1B3F30u);
    ctx->pc = 0x1B3F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3F28u;
            // 0x1b3f2c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B44D0u;
    if (runtime->hasFunction(0x1B44D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B44D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3F30u; }
        if (ctx->pc != 0x1B3F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B44D0_0x1b44d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3F30u; }
        if (ctx->pc != 0x1B3F30u) { return; }
    }
    ctx->pc = 0x1B3F30u;
label_1b3f30:
    // 0x1b3f30: 0x8fa80064  lw          $t0, 0x64($sp)
    ctx->pc = 0x1b3f30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_1b3f34:
    // 0x1b3f34: 0xafa802c0  sw          $t0, 0x2C0($sp)
    ctx->pc = 0x1b3f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 8));
label_1b3f38:
    // 0x1b3f38: 0xc069e7a  jal         func_1A79E8
label_1b3f3c:
    if (ctx->pc == 0x1B3F3Cu) {
        ctx->pc = 0x1B3F3Cu;
            // 0x1b3f3c: 0x26040078  addiu       $a0, $s0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
        ctx->pc = 0x1B3F40u;
        goto label_1b3f40;
    }
    ctx->pc = 0x1B3F38u;
    SET_GPR_U32(ctx, 31, 0x1B3F40u);
    ctx->pc = 0x1B3F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3F38u;
            // 0x1b3f3c: 0x26040078  addiu       $a0, $s0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A79E8u;
    if (runtime->hasFunction(0x1A79E8u)) {
        auto targetFn = runtime->lookupFunction(0x1A79E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3F40u; }
        if (ctx->pc != 0x1B3F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A79E8_0x1a79e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3F40u; }
        if (ctx->pc != 0x1B3F40u) { return; }
    }
    ctx->pc = 0x1B3F40u;
label_1b3f40:
    // 0x1b3f40: 0xc069490  jal         func_1A5240
label_1b3f44:
    if (ctx->pc == 0x1B3F44u) {
        ctx->pc = 0x1B3F44u;
            // 0x1b3f44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B3F48u;
        goto label_1b3f48;
    }
    ctx->pc = 0x1B3F40u;
    SET_GPR_U32(ctx, 31, 0x1B3F48u);
    ctx->pc = 0x1B3F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3F40u;
            // 0x1b3f44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5240u;
    if (runtime->hasFunction(0x1A5240u)) {
        auto targetFn = runtime->lookupFunction(0x1A5240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3F48u; }
        if (ctx->pc != 0x1B3F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5240_0x1a5240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3F48u; }
        if (ctx->pc != 0x1B3F48u) { return; }
    }
    ctx->pc = 0x1B3F48u;
label_1b3f48:
    // 0x1b3f48: 0x26030d2c  addiu       $v1, $s0, 0xD2C
    ctx->pc = 0x1b3f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3372));
label_1b3f4c:
    // 0x1b3f4c: 0x27a50240  addiu       $a1, $sp, 0x240
    ctx->pc = 0x1b3f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_1b3f50:
    // 0x1b3f50: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x1b3f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_1b3f54:
    // 0x1b3f54: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1b3f58:
    if (ctx->pc == 0x1B3F58u) {
        ctx->pc = 0x1B3F58u;
            // 0x1b3f58: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B3F5Cu;
        goto label_1b3f5c;
    }
    ctx->pc = 0x1B3F54u;
    {
        const bool branch_taken_0x1b3f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3F54u;
            // 0x1b3f58: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3f54) {
            ctx->pc = 0x1B3FC0u;
            goto label_1b3fc0;
        }
    }
    ctx->pc = 0x1B3F5Cu;
label_1b3f5c:
    // 0x1b3f5c: 0x26020d6c  addiu       $v0, $s0, 0xD6C
    ctx->pc = 0x1b3f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3436));
label_1b3f60:
    // 0x1b3f60: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x1b3f60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1b3f64:
    // 0x1b3f64: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x1b3f64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1b3f68:
    // 0x1b3f68: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x1b3f68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1b3f6c:
    // 0x1b3f6c: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x1b3f6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1b3f70:
    // 0x1b3f70: 0x68680017  ldl         $t0, 0x17($v1)
    ctx->pc = 0x1b3f70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1b3f74:
    // 0x1b3f74: 0x6c680010  ldr         $t0, 0x10($v1)
    ctx->pc = 0x1b3f74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1b3f78:
    // 0x1b3f78: 0x6865001f  ldl         $a1, 0x1F($v1)
    ctx->pc = 0x1b3f78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1b3f7c:
    // 0x1b3f7c: 0x6c650018  ldr         $a1, 0x18($v1)
    ctx->pc = 0x1b3f7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1b3f80:
    // 0x1b3f80: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x1b3f80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b3f84:
    // 0x1b3f84: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x1b3f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b3f88:
    // 0x1b3f88: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x1b3f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b3f8c:
    // 0x1b3f8c: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x1b3f8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b3f90:
    // 0x1b3f90: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x1b3f90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b3f94:
    // 0x1b3f94: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x1b3f94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b3f98:
    // 0x1b3f98: 0xb085001f  sdl         $a1, 0x1F($a0)
    ctx->pc = 0x1b3f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b3f9c:
    // 0x1b3f9c: 0xb4850018  sdr         $a1, 0x18($a0)
    ctx->pc = 0x1b3f9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b3fa0:
    // 0x1b3fa0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1b3fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1b3fa4:
    // 0x1b3fa4: 0x0  nop
    ctx->pc = 0x1b3fa4u;
    // NOP
label_1b3fa8:
    // 0x1b3fa8: 0x0  nop
    ctx->pc = 0x1b3fa8u;
    // NOP
label_1b3fac:
    // 0x1b3fac: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
label_1b3fb0:
    if (ctx->pc == 0x1B3FB0u) {
        ctx->pc = 0x1B3FB0u;
            // 0x1b3fb0: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->pc = 0x1B3FB4u;
        goto label_1b3fb4;
    }
    ctx->pc = 0x1B3FACu;
    {
        const bool branch_taken_0x1b3fac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B3FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3FACu;
            // 0x1b3fb0: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3fac) {
            ctx->pc = 0x1B3F60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b3f60;
        }
    }
    ctx->pc = 0x1B3FB4u;
label_1b3fb4:
    // 0x1b3fb4: 0x10000010  b           . + 4 + (0x10 << 2)
label_1b3fb8:
    if (ctx->pc == 0x1B3FB8u) {
        ctx->pc = 0x1B3FBCu;
        goto label_1b3fbc;
    }
    ctx->pc = 0x1B3FB4u;
    {
        const bool branch_taken_0x1b3fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3fb4) {
            ctx->pc = 0x1B3FF8u;
            goto label_1b3ff8;
        }
    }
    ctx->pc = 0x1B3FBCu;
label_1b3fbc:
    // 0x1b3fbc: 0x0  nop
    ctx->pc = 0x1b3fbcu;
    // NOP
label_1b3fc0:
    // 0x1b3fc0: 0x26020d6c  addiu       $v0, $s0, 0xD6C
    ctx->pc = 0x1b3fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3436));
label_1b3fc4:
    // 0x1b3fc4: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x1b3fc4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_1b3fc8:
    // 0x1b3fc8: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x1b3fc8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_1b3fcc:
    // 0x1b3fcc: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x1b3fccu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_1b3fd0:
    // 0x1b3fd0: 0xdc650018  ld          $a1, 0x18($v1)
    ctx->pc = 0x1b3fd0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 24)));
label_1b3fd4:
    // 0x1b3fd4: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x1b3fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
label_1b3fd8:
    // 0x1b3fd8: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x1b3fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
label_1b3fdc:
    // 0x1b3fdc: 0xfc880010  sd          $t0, 0x10($a0)
    ctx->pc = 0x1b3fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
label_1b3fe0:
    // 0x1b3fe0: 0xfc850018  sd          $a1, 0x18($a0)
    ctx->pc = 0x1b3fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 5));
label_1b3fe4:
    // 0x1b3fe4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1b3fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1b3fe8:
    // 0x1b3fe8: 0x0  nop
    ctx->pc = 0x1b3fe8u;
    // NOP
label_1b3fec:
    // 0x1b3fec: 0x0  nop
    ctx->pc = 0x1b3fecu;
    // NOP
label_1b3ff0:
    // 0x1b3ff0: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
label_1b3ff4:
    if (ctx->pc == 0x1B3FF4u) {
        ctx->pc = 0x1B3FF4u;
            // 0x1b3ff4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->pc = 0x1B3FF8u;
        goto label_1b3ff8;
    }
    ctx->pc = 0x1B3FF0u;
    {
        const bool branch_taken_0x1b3ff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B3FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3FF0u;
            // 0x1b3ff4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3ff0) {
            ctx->pc = 0x1B3FC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b3fc4;
        }
    }
    ctx->pc = 0x1B3FF8u;
label_1b3ff8:
    // 0x1b3ff8: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x1b3ff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1b3ffc:
    // 0x1b3ffc: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x1b3ffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1b4000:
    // 0x1b4000: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x1b4000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1b4004:
    // 0x1b4004: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x1b4004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1b4008:
    // 0x1b4008: 0x68680017  ldl         $t0, 0x17($v1)
    ctx->pc = 0x1b4008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1b400c:
    // 0x1b400c: 0x6c680010  ldr         $t0, 0x10($v1)
    ctx->pc = 0x1b400cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1b4010:
    // 0x1b4010: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1b4010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1b4014:
    // 0x1b4014: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x1b4014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b4018:
    // 0x1b4018: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x1b4018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b401c:
    // 0x1b401c: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x1b401cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b4020:
    // 0x1b4020: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x1b4020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b4024:
    // 0x1b4024: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x1b4024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b4028:
    // 0x1b4028: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x1b4028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b402c:
    // 0x1b402c: 0x27be02a0  addiu       $fp, $sp, 0x2A0
    ctx->pc = 0x1b402cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_1b4030:
    // 0x1b4030: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x1b4030u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
label_1b4034:
    // 0x1b4034: 0x8e071074  lw          $a3, 0x1074($s0)
    ctx->pc = 0x1b4034u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4212)));
label_1b4038:
    // 0x1b4038: 0x6a031347  ldl         $v1, 0x1347($s0)
    ctx->pc = 0x1b4038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4935); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1b403c:
    // 0x1b403c: 0x6e031340  ldr         $v1, 0x1340($s0)
    ctx->pc = 0x1b403cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4928); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1b4040:
    // 0x1b4040: 0x8e041348  lw          $a0, 0x1348($s0)
    ctx->pc = 0x1b4040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4936)));
label_1b4044:
    // 0x1b4044: 0xb3c30007  sdl         $v1, 0x7($fp)
    ctx->pc = 0x1b4044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b4048:
    // 0x1b4048: 0xb7c30000  sdr         $v1, 0x0($fp)
    ctx->pc = 0x1b4048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b404c:
    // 0x1b404c: 0xafc40008  sw          $a0, 0x8($fp)
    ctx->pc = 0x1b404cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 4));
label_1b4050:
    // 0x1b4050: 0x8e123720  lw          $s2, 0x3720($s0)
    ctx->pc = 0x1b4050u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14112)));
label_1b4054:
    // 0x1b4054: 0xafa702d0  sw          $a3, 0x2D0($sp)
    ctx->pc = 0x1b4054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 7));
label_1b4058:
    // 0x1b4058: 0x8e081034  lw          $t0, 0x1034($s0)
    ctx->pc = 0x1b4058u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4148)));
label_1b405c:
    // 0x1b405c: 0xafa802dc  sw          $t0, 0x2DC($sp)
    ctx->pc = 0x1b405cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 732), GPR_U32(ctx, 8));
label_1b4060:
    // 0x1b4060: 0x8e0609fc  lw          $a2, 0x9FC($s0)
    ctx->pc = 0x1b4060u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2556)));
label_1b4064:
    // 0x1b4064: 0x6a021353  ldl         $v0, 0x1353($s0)
    ctx->pc = 0x1b4064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4947); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1b4068:
    // 0x1b4068: 0x6e02134c  ldr         $v0, 0x134C($s0)
    ctx->pc = 0x1b4068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4940); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1b406c:
    // 0x1b406c: 0x6a03135b  ldl         $v1, 0x135B($s0)
    ctx->pc = 0x1b406cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4955); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1b4070:
    // 0x1b4070: 0x6e031354  ldr         $v1, 0x1354($s0)
    ctx->pc = 0x1b4070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4948); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1b4074:
    // 0x1b4074: 0xb3a202b7  sdl         $v0, 0x2B7($sp)
    ctx->pc = 0x1b4074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 695); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b4078:
    // 0x1b4078: 0xb7a202b0  sdr         $v0, 0x2B0($sp)
    ctx->pc = 0x1b4078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 688); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b407c:
    // 0x1b407c: 0xb3a302bf  sdl         $v1, 0x2BF($sp)
    ctx->pc = 0x1b407cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 703); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b4080:
    // 0x1b4080: 0xb7a302b8  sdr         $v1, 0x2B8($sp)
    ctx->pc = 0x1b4080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 696); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b4084:
    // 0x1b4084: 0x8e1609f8  lw          $s6, 0x9F8($s0)
    ctx->pc = 0x1b4084u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2552)));
label_1b4088:
    // 0x1b4088: 0xafa602c4  sw          $a2, 0x2C4($sp)
    ctx->pc = 0x1b4088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 708), GPR_U32(ctx, 6));
label_1b408c:
    // 0x1b408c: 0x8e071060  lw          $a3, 0x1060($s0)
    ctx->pc = 0x1b408cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4192)));
label_1b4090:
    // 0x1b4090: 0x8e17105c  lw          $s7, 0x105C($s0)
    ctx->pc = 0x1b4090u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4188)));
label_1b4094:
    // 0x1b4094: 0xafa702c8  sw          $a3, 0x2C8($sp)
    ctx->pc = 0x1b4094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 712), GPR_U32(ctx, 7));
label_1b4098:
    // 0x1b4098: 0x8e081064  lw          $t0, 0x1064($s0)
    ctx->pc = 0x1b4098u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4196)));
label_1b409c:
    // 0x1b409c: 0xafa802cc  sw          $t0, 0x2CC($sp)
    ctx->pc = 0x1b409cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 716), GPR_U32(ctx, 8));
label_1b40a0:
    // 0x1b40a0: 0x8e021078  lw          $v0, 0x1078($s0)
    ctx->pc = 0x1b40a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4216)));
label_1b40a4:
    // 0x1b40a4: 0xafa202d4  sw          $v0, 0x2D4($sp)
    ctx->pc = 0x1b40a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 2));
label_1b40a8:
    // 0x1b40a8: 0x8e030da0  lw          $v1, 0xDA0($s0)
    ctx->pc = 0x1b40a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
label_1b40ac:
    // 0x1b40ac: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
label_1b40b0:
    if (ctx->pc == 0x1B40B0u) {
        ctx->pc = 0x1B40B0u;
            // 0x1b40b0: 0xafa302d8  sw          $v1, 0x2D8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 3));
        ctx->pc = 0x1B40B4u;
        goto label_1b40b4;
    }
    ctx->pc = 0x1B40ACu;
    {
        const bool branch_taken_0x1b40ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B40B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B40ACu;
            // 0x1b40b0: 0xafa302d8  sw          $v1, 0x2D8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b40ac) {
            ctx->pc = 0x1B40E0u;
            goto label_1b40e0;
        }
    }
    ctx->pc = 0x1B40B4u;
label_1b40b4:
    // 0x1b40b4: 0x8e440dd0  lw          $a0, 0xDD0($s2)
    ctx->pc = 0x1b40b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3536)));
label_1b40b8:
    // 0x1b40b8: 0xafa402e0  sw          $a0, 0x2E0($sp)
    ctx->pc = 0x1b40b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 4));
label_1b40bc:
    // 0x1b40bc: 0x8e450dc4  lw          $a1, 0xDC4($s2)
    ctx->pc = 0x1b40bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3524)));
label_1b40c0:
    // 0x1b40c0: 0xafa502e4  sw          $a1, 0x2E4($sp)
    ctx->pc = 0x1b40c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 740), GPR_U32(ctx, 5));
label_1b40c4:
    // 0x1b40c4: 0x8e460dc8  lw          $a2, 0xDC8($s2)
    ctx->pc = 0x1b40c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3528)));
label_1b40c8:
    // 0x1b40c8: 0xafa602e8  sw          $a2, 0x2E8($sp)
    ctx->pc = 0x1b40c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 744), GPR_U32(ctx, 6));
label_1b40cc:
    // 0x1b40cc: 0x8e470dcc  lw          $a3, 0xDCC($s2)
    ctx->pc = 0x1b40ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3532)));
label_1b40d0:
    // 0x1b40d0: 0xafa702ec  sw          $a3, 0x2EC($sp)
    ctx->pc = 0x1b40d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 748), GPR_U32(ctx, 7));
label_1b40d4:
    // 0x1b40d4: 0x8e480dd4  lw          $t0, 0xDD4($s2)
    ctx->pc = 0x1b40d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3540)));
label_1b40d8:
    // 0x1b40d8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1b40dc:
    if (ctx->pc == 0x1B40DCu) {
        ctx->pc = 0x1B40DCu;
            // 0x1b40dc: 0xafa802f0  sw          $t0, 0x2F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 8));
        ctx->pc = 0x1B40E0u;
        goto label_1b40e0;
    }
    ctx->pc = 0x1B40D8u;
    {
        const bool branch_taken_0x1b40d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B40DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B40D8u;
            // 0x1b40dc: 0xafa802f0  sw          $t0, 0x2F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b40d8) {
            ctx->pc = 0x1B40F4u;
            goto label_1b40f4;
        }
    }
    ctx->pc = 0x1B40E0u;
label_1b40e0:
    // 0x1b40e0: 0xafa002f0  sw          $zero, 0x2F0($sp)
    ctx->pc = 0x1b40e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 0));
label_1b40e4:
    // 0x1b40e4: 0xafa002ec  sw          $zero, 0x2EC($sp)
    ctx->pc = 0x1b40e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 748), GPR_U32(ctx, 0));
label_1b40e8:
    // 0x1b40e8: 0xafa002e8  sw          $zero, 0x2E8($sp)
    ctx->pc = 0x1b40e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 744), GPR_U32(ctx, 0));
label_1b40ec:
    // 0x1b40ec: 0xafa002e4  sw          $zero, 0x2E4($sp)
    ctx->pc = 0x1b40ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 740), GPR_U32(ctx, 0));
label_1b40f0:
    // 0x1b40f0: 0xafa002e0  sw          $zero, 0x2E0($sp)
    ctx->pc = 0x1b40f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 0));
label_1b40f4:
    // 0x1b40f4: 0x2603142c  addiu       $v1, $s0, 0x142C
    ctx->pc = 0x1b40f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 5164));
label_1b40f8:
    // 0x1b40f8: 0x27b40200  addiu       $s4, $sp, 0x200
    ctx->pc = 0x1b40f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_1b40fc:
    // 0x1b40fc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1b40fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1b4100:
    // 0x1b4100: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b4104:
    // 0x1b4104: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1b4104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b4108:
    // 0x1b4108: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1b4108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1b410c:
    // 0x1b410c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1b410cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1b4110:
    // 0x1b4110: 0xafa202f8  sw          $v0, 0x2F8($sp)
    ctx->pc = 0x1b4110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 760), GPR_U32(ctx, 2));
label_1b4114:
    // 0x1b4114: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1b4114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1b4118:
    // 0x1b4118: 0xc06aba2  jal         func_1AAE88
label_1b411c:
    if (ctx->pc == 0x1B411Cu) {
        ctx->pc = 0x1B411Cu;
            // 0x1b411c: 0xafa302f4  sw          $v1, 0x2F4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 756), GPR_U32(ctx, 3));
        ctx->pc = 0x1B4120u;
        goto label_1b4120;
    }
    ctx->pc = 0x1B4118u;
    SET_GPR_U32(ctx, 31, 0x1B4120u);
    ctx->pc = 0x1B411Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4118u;
            // 0x1b411c: 0xafa302f4  sw          $v1, 0x2F4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 756), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE88u;
    if (runtime->hasFunction(0x1AAE88u)) {
        auto targetFn = runtime->lookupFunction(0x1AAE88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4120u; }
        if (ctx->pc != 0x1B4120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AAE88_0x1aae88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4120u; }
        if (ctx->pc != 0x1B4120u) { return; }
    }
    ctx->pc = 0x1B4120u;
label_1b4120:
    // 0x1b4120: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b4124:
    // 0x1b4124: 0xc06cf04  jal         func_1B3C10
label_1b4128:
    if (ctx->pc == 0x1B4128u) {
        ctx->pc = 0x1B4128u;
            // 0x1b4128: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B412Cu;
        goto label_1b412c;
    }
    ctx->pc = 0x1B4124u;
    SET_GPR_U32(ctx, 31, 0x1B412Cu);
    ctx->pc = 0x1B4128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4124u;
            // 0x1b4128: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C10u;
    if (runtime->hasFunction(0x1B3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1B3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B412Cu; }
        if (ctx->pc != 0x1B412Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3C10_0x1b3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B412Cu; }
        if (ctx->pc != 0x1B412Cu) { return; }
    }
    ctx->pc = 0x1B412Cu;
label_1b412c:
    // 0x1b412c: 0x544000b2  bnel        $v0, $zero, . + 4 + (0xB2 << 2)
label_1b4130:
    if (ctx->pc == 0x1B4130u) {
        ctx->pc = 0x1B4130u;
            // 0x1b4130: 0xdfb00300  ld          $s0, 0x300($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 768)));
        ctx->pc = 0x1B4134u;
        goto label_1b4134;
    }
    ctx->pc = 0x1B412Cu;
    {
        const bool branch_taken_0x1b412c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b412c) {
            ctx->pc = 0x1B4130u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B412Cu;
            // 0x1b4130: 0xdfb00300  ld          $s0, 0x300($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 768)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B43F8u;
            goto label_1b43f8;
        }
    }
    ctx->pc = 0x1B4134u;
label_1b4134:
    // 0x1b4134: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x1b4134u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1b4138:
    // 0x1b4138: 0x26050b9c  addiu       $a1, $s0, 0xB9C
    ctx->pc = 0x1b4138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2972));
label_1b413c:
    // 0x1b413c: 0x24060190  addiu       $a2, $zero, 0x190
    ctx->pc = 0x1b413cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_1b4140:
    // 0x1b4140: 0xc064080  jal         func_190200
label_1b4144:
    if (ctx->pc == 0x1B4144u) {
        ctx->pc = 0x1B4144u;
            // 0x1b4144: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4148u;
        goto label_1b4148;
    }
    ctx->pc = 0x1B4140u;
    SET_GPR_U32(ctx, 31, 0x1B4148u);
    ctx->pc = 0x1B4144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4140u;
            // 0x1b4144: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190200u;
    if (runtime->hasFunction(0x190200u)) {
        auto targetFn = runtime->lookupFunction(0x190200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4148u; }
        if (ctx->pc != 0x1B4148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00190200_0x190200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4148u; }
        if (ctx->pc != 0x1B4148u) { return; }
    }
    ctx->pc = 0x1B4148u;
label_1b4148:
    // 0x1b4148: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b4148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b414c:
    // 0x1b414c: 0xc06cdc8  jal         func_1B3720
label_1b4150:
    if (ctx->pc == 0x1B4150u) {
        ctx->pc = 0x1B4150u;
            // 0x1b4150: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4154u;
        goto label_1b4154;
    }
    ctx->pc = 0x1B414Cu;
    SET_GPR_U32(ctx, 31, 0x1B4154u);
    ctx->pc = 0x1B4150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B414Cu;
            // 0x1b4150: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3720u;
    if (runtime->hasFunction(0x1B3720u)) {
        auto targetFn = runtime->lookupFunction(0x1B3720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4154u; }
        if (ctx->pc != 0x1B4154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3720_0x1b3720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4154u; }
        if (ctx->pc != 0x1B4154u) { return; }
    }
    ctx->pc = 0x1B4154u;
label_1b4154:
    // 0x1b4154: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b4154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b4158:
    // 0x1b4158: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
label_1b415c:
    if (ctx->pc == 0x1B415Cu) {
        ctx->pc = 0x1B415Cu;
            // 0x1b415c: 0x26040a0c  addiu       $a0, $s0, 0xA0C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2572));
        ctx->pc = 0x1B4160u;
        goto label_1b4160;
    }
    ctx->pc = 0x1B4158u;
    {
        const bool branch_taken_0x1b4158 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B415Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4158u;
            // 0x1b415c: 0x26040a0c  addiu       $a0, $s0, 0xA0C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2572));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4158) {
            ctx->pc = 0x1B4178u;
            goto label_1b4178;
        }
    }
    ctx->pc = 0x1B4160u;
label_1b4160:
    // 0x1b4160: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b4160u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_1b4164:
    // 0x1b4164: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b4164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b4168:
    // 0x1b4168: 0xc06a1ac  jal         func_1A86B0
label_1b416c:
    if (ctx->pc == 0x1B416Cu) {
        ctx->pc = 0x1B416Cu;
            // 0x1b416c: 0x34a50202  ori         $a1, $a1, 0x202 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)514);
        ctx->pc = 0x1B4170u;
        goto label_1b4170;
    }
    ctx->pc = 0x1B4168u;
    SET_GPR_U32(ctx, 31, 0x1B4170u);
    ctx->pc = 0x1B416Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4168u;
            // 0x1b416c: 0x34a50202  ori         $a1, $a1, 0x202 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)514);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4170u; }
        if (ctx->pc != 0x1B4170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4170u; }
        if (ctx->pc != 0x1B4170u) { return; }
    }
    ctx->pc = 0x1B4170u;
label_1b4170:
    // 0x1b4170: 0x100000a1  b           . + 4 + (0xA1 << 2)
label_1b4174:
    if (ctx->pc == 0x1B4174u) {
        ctx->pc = 0x1B4174u;
            // 0x1b4174: 0xdfb00300  ld          $s0, 0x300($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 768)));
        ctx->pc = 0x1B4178u;
        goto label_1b4178;
    }
    ctx->pc = 0x1B4170u;
    {
        const bool branch_taken_0x1b4170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4170u;
            // 0x1b4174: 0xdfb00300  ld          $s0, 0x300($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4170) {
            ctx->pc = 0x1B43F8u;
            goto label_1b43f8;
        }
    }
    ctx->pc = 0x1B4178u;
label_1b4178:
    // 0x1b4178: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b4178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b417c:
    // 0x1b417c: 0xc064080  jal         func_190200
label_1b4180:
    if (ctx->pc == 0x1B4180u) {
        ctx->pc = 0x1B4180u;
            // 0x1b4180: 0x24060190  addiu       $a2, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->pc = 0x1B4184u;
        goto label_1b4184;
    }
    ctx->pc = 0x1B417Cu;
    SET_GPR_U32(ctx, 31, 0x1B4184u);
    ctx->pc = 0x1B4180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B417Cu;
            // 0x1b4180: 0x24060190  addiu       $a2, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190200u;
    if (runtime->hasFunction(0x190200u)) {
        auto targetFn = runtime->lookupFunction(0x190200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4184u; }
        if (ctx->pc != 0x1B4184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00190200_0x190200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4184u; }
        if (ctx->pc != 0x1B4184u) { return; }
    }
    ctx->pc = 0x1B4184u;
label_1b4184:
    // 0x1b4184: 0x26040b9c  addiu       $a0, $s0, 0xB9C
    ctx->pc = 0x1b4184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2972));
label_1b4188:
    // 0x1b4188: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b4188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b418c:
    // 0x1b418c: 0xc064080  jal         func_190200
label_1b4190:
    if (ctx->pc == 0x1B4190u) {
        ctx->pc = 0x1B4190u;
            // 0x1b4190: 0x24060190  addiu       $a2, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->pc = 0x1B4194u;
        goto label_1b4194;
    }
    ctx->pc = 0x1B418Cu;
    SET_GPR_U32(ctx, 31, 0x1B4194u);
    ctx->pc = 0x1B4190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B418Cu;
            // 0x1b4190: 0x24060190  addiu       $a2, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190200u;
    if (runtime->hasFunction(0x190200u)) {
        auto targetFn = runtime->lookupFunction(0x190200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4194u; }
        if (ctx->pc != 0x1B4194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00190200_0x190200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4194u; }
        if (ctx->pc != 0x1B4194u) { return; }
    }
    ctx->pc = 0x1B4194u;
label_1b4194:
    // 0x1b4194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b4198:
    // 0x1b4198: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1b4198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b419c:
    // 0x1b419c: 0xc06abc4  jal         func_1AAF10
label_1b41a0:
    if (ctx->pc == 0x1B41A0u) {
        ctx->pc = 0x1B41A0u;
            // 0x1b41a0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B41A4u;
        goto label_1b41a4;
    }
    ctx->pc = 0x1B419Cu;
    SET_GPR_U32(ctx, 31, 0x1B41A4u);
    ctx->pc = 0x1B41A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B419Cu;
            // 0x1b41a0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AAF10u;
    if (runtime->hasFunction(0x1AAF10u)) {
        auto targetFn = runtime->lookupFunction(0x1AAF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B41A4u; }
        if (ctx->pc != 0x1B41A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AAF10_0x1aaf10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B41A4u; }
        if (ctx->pc != 0x1B41A4u) { return; }
    }
    ctx->pc = 0x1B41A4u;
label_1b41a4:
    // 0x1b41a4: 0x12a0000d  beqz        $s5, . + 4 + (0xD << 2)
label_1b41a8:
    if (ctx->pc == 0x1B41A8u) {
        ctx->pc = 0x1B41A8u;
            // 0x1b41a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B41ACu;
        goto label_1b41ac;
    }
    ctx->pc = 0x1B41A4u;
    {
        const bool branch_taken_0x1b41a4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B41A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B41A4u;
            // 0x1b41a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b41a4) {
            ctx->pc = 0x1B41DCu;
            goto label_1b41dc;
        }
    }
    ctx->pc = 0x1B41ACu;
label_1b41ac:
    // 0x1b41ac: 0xc06d134  jal         func_1B44D0
label_1b41b0:
    if (ctx->pc == 0x1B41B0u) {
        ctx->pc = 0x1B41B0u;
            // 0x1b41b0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1B41B4u;
        goto label_1b41b4;
    }
    ctx->pc = 0x1B41ACu;
    SET_GPR_U32(ctx, 31, 0x1B41B4u);
    ctx->pc = 0x1B41B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B41ACu;
            // 0x1b41b0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B44D0u;
    if (runtime->hasFunction(0x1B44D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B44D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B41B4u; }
        if (ctx->pc != 0x1B41B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B44D0_0x1b44d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B41B4u; }
        if (ctx->pc != 0x1B41B4u) { return; }
    }
    ctx->pc = 0x1B41B4u;
label_1b41b4:
    // 0x1b41b4: 0x54400090  bnel        $v0, $zero, . + 4 + (0x90 << 2)
label_1b41b8:
    if (ctx->pc == 0x1B41B8u) {
        ctx->pc = 0x1B41B8u;
            // 0x1b41b8: 0xdfb00300  ld          $s0, 0x300($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 768)));
        ctx->pc = 0x1B41BCu;
        goto label_1b41bc;
    }
    ctx->pc = 0x1B41B4u;
    {
        const bool branch_taken_0x1b41b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b41b4) {
            ctx->pc = 0x1B41B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B41B4u;
            // 0x1b41b8: 0xdfb00300  ld          $s0, 0x300($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 768)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B43F8u;
            goto label_1b43f8;
        }
    }
    ctx->pc = 0x1B41BCu;
label_1b41bc:
    // 0x1b41bc: 0x8fa60064  lw          $a2, 0x64($sp)
    ctx->pc = 0x1b41bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_1b41c0:
    // 0x1b41c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b41c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b41c4:
    // 0x1b41c4: 0xc06d150  jal         func_1B4540
label_1b41c8:
    if (ctx->pc == 0x1B41C8u) {
        ctx->pc = 0x1B41C8u;
            // 0x1b41c8: 0x8fa502c0  lw          $a1, 0x2C0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->pc = 0x1B41CCu;
        goto label_1b41cc;
    }
    ctx->pc = 0x1B41C4u;
    SET_GPR_U32(ctx, 31, 0x1B41CCu);
    ctx->pc = 0x1B41C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B41C4u;
            // 0x1b41c8: 0x8fa502c0  lw          $a1, 0x2C0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4540u;
    if (runtime->hasFunction(0x1B4540u)) {
        auto targetFn = runtime->lookupFunction(0x1B4540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B41CCu; }
        if (ctx->pc != 0x1B41CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4540_0x1b4540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B41CCu; }
        if (ctx->pc != 0x1B41CCu) { return; }
    }
    ctx->pc = 0x1B41CCu;
label_1b41cc:
    // 0x1b41cc: 0x5440008a  bnel        $v0, $zero, . + 4 + (0x8A << 2)
label_1b41d0:
    if (ctx->pc == 0x1B41D0u) {
        ctx->pc = 0x1B41D0u;
            // 0x1b41d0: 0xdfb00300  ld          $s0, 0x300($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 768)));
        ctx->pc = 0x1B41D4u;
        goto label_1b41d4;
    }
    ctx->pc = 0x1B41CCu;
    {
        const bool branch_taken_0x1b41cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b41cc) {
            ctx->pc = 0x1B41D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B41CCu;
            // 0x1b41d0: 0xdfb00300  ld          $s0, 0x300($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 768)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B43F8u;
            goto label_1b43f8;
        }
    }
    ctx->pc = 0x1B41D4u;
label_1b41d4:
    // 0x1b41d4: 0xc06d170  jal         func_1B45C0
label_1b41d8:
    if (ctx->pc == 0x1B41D8u) {
        ctx->pc = 0x1B41D8u;
            // 0x1b41d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B41DCu;
        goto label_1b41dc;
    }
    ctx->pc = 0x1B41D4u;
    SET_GPR_U32(ctx, 31, 0x1B41DCu);
    ctx->pc = 0x1B41D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B41D4u;
            // 0x1b41d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B45C0u;
    if (runtime->hasFunction(0x1B45C0u)) {
        auto targetFn = runtime->lookupFunction(0x1B45C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B41DCu; }
        if (ctx->pc != 0x1B41DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B45C0_0x1b45c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B41DCu; }
        if (ctx->pc != 0x1B41DCu) { return; }
    }
    ctx->pc = 0x1B41DCu;
label_1b41dc:
    // 0x1b41dc: 0x27a20240  addiu       $v0, $sp, 0x240
    ctx->pc = 0x1b41dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_1b41e0:
    // 0x1b41e0: 0x26040d2c  addiu       $a0, $s0, 0xD2C
    ctx->pc = 0x1b41e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3372));
label_1b41e4:
    // 0x1b41e4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b41e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b41e8:
    // 0x1b41e8: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x1b41e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
label_1b41ec:
    // 0x1b41ec: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1b41f0:
    if (ctx->pc == 0x1B41F0u) {
        ctx->pc = 0x1B41F0u;
            // 0x1b41f0: 0x27a20280  addiu       $v0, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = 0x1B41F4u;
        goto label_1b41f4;
    }
    ctx->pc = 0x1B41ECu;
    {
        const bool branch_taken_0x1b41ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B41F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B41ECu;
            // 0x1b41f0: 0x27a20280  addiu       $v0, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b41ec) {
            ctx->pc = 0x1B4250u;
            goto label_1b4250;
        }
    }
    ctx->pc = 0x1B41F4u;
label_1b41f4:
    // 0x1b41f4: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x1b41f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1b41f8:
    // 0x1b41f8: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x1b41f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1b41fc:
    // 0x1b41fc: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x1b41fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1b4200:
    // 0x1b4200: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x1b4200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1b4204:
    // 0x1b4204: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x1b4204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1b4208:
    // 0x1b4208: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x1b4208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1b420c:
    // 0x1b420c: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x1b420cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1b4210:
    // 0x1b4210: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x1b4210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1b4214:
    // 0x1b4214: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x1b4214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b4218:
    // 0x1b4218: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x1b4218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b421c:
    // 0x1b421c: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x1b421cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b4220:
    // 0x1b4220: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x1b4220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b4224:
    // 0x1b4224: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x1b4224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b4228:
    // 0x1b4228: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x1b4228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b422c:
    // 0x1b422c: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x1b422cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b4230:
    // 0x1b4230: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x1b4230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b4234:
    // 0x1b4234: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1b4234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1b4238:
    // 0x1b4238: 0x0  nop
    ctx->pc = 0x1b4238u;
    // NOP
label_1b423c:
    // 0x1b423c: 0x0  nop
    ctx->pc = 0x1b423cu;
    // NOP
label_1b4240:
    // 0x1b4240: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
label_1b4244:
    if (ctx->pc == 0x1B4244u) {
        ctx->pc = 0x1B4244u;
            // 0x1b4244: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->pc = 0x1B4248u;
        goto label_1b4248;
    }
    ctx->pc = 0x1B4240u;
    {
        const bool branch_taken_0x1b4240 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B4244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4240u;
            // 0x1b4244: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4240) {
            ctx->pc = 0x1B41F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b41f4;
        }
    }
    ctx->pc = 0x1B4248u;
label_1b4248:
    // 0x1b4248: 0x1000000e  b           . + 4 + (0xE << 2)
label_1b424c:
    if (ctx->pc == 0x1B424Cu) {
        ctx->pc = 0x1B4250u;
        goto label_1b4250;
    }
    ctx->pc = 0x1B4248u;
    {
        const bool branch_taken_0x1b4248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4248) {
            ctx->pc = 0x1B4284u;
            goto label_1b4284;
        }
    }
    ctx->pc = 0x1B4250u;
label_1b4250:
    // 0x1b4250: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x1b4250u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_1b4254:
    // 0x1b4254: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x1b4254u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_1b4258:
    // 0x1b4258: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x1b4258u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_1b425c:
    // 0x1b425c: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x1b425cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
label_1b4260:
    // 0x1b4260: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x1b4260u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
label_1b4264:
    // 0x1b4264: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x1b4264u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
label_1b4268:
    // 0x1b4268: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x1b4268u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
label_1b426c:
    // 0x1b426c: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x1b426cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
label_1b4270:
    // 0x1b4270: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1b4270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1b4274:
    // 0x1b4274: 0x0  nop
    ctx->pc = 0x1b4274u;
    // NOP
label_1b4278:
    // 0x1b4278: 0x0  nop
    ctx->pc = 0x1b4278u;
    // NOP
label_1b427c:
    // 0x1b427c: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
label_1b4280:
    if (ctx->pc == 0x1B4280u) {
        ctx->pc = 0x1B4280u;
            // 0x1b4280: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->pc = 0x1B4284u;
        goto label_1b4284;
    }
    ctx->pc = 0x1B427Cu;
    {
        const bool branch_taken_0x1b427c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B4280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B427Cu;
            // 0x1b4280: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b427c) {
            ctx->pc = 0x1B4250u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b4250;
        }
    }
    ctx->pc = 0x1B4284u;
label_1b4284:
    // 0x1b4284: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x1b4284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1b4288:
    // 0x1b4288: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x1b4288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1b428c:
    // 0x1b428c: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x1b428cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1b4290:
    // 0x1b4290: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x1b4290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1b4294:
    // 0x1b4294: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x1b4294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1b4298:
    // 0x1b4298: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x1b4298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1b429c:
    // 0x1b429c: 0x8c670018  lw          $a3, 0x18($v1)
    ctx->pc = 0x1b429cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1b42a0:
    // 0x1b42a0: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x1b42a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b42a4:
    // 0x1b42a4: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x1b42a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b42a8:
    // 0x1b42a8: 0xb085000f  sdl         $a1, 0xF($a0)
    ctx->pc = 0x1b42a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b42ac:
    // 0x1b42ac: 0xb4850008  sdr         $a1, 0x8($a0)
    ctx->pc = 0x1b42acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b42b0:
    // 0x1b42b0: 0xb0860017  sdl         $a2, 0x17($a0)
    ctx->pc = 0x1b42b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b42b4:
    // 0x1b42b4: 0xb4860010  sdr         $a2, 0x10($a0)
    ctx->pc = 0x1b42b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b42b8:
    // 0x1b42b8: 0xac870018  sw          $a3, 0x18($a0)
    ctx->pc = 0x1b42b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 7));
label_1b42bc:
    // 0x1b42bc: 0x8e060d74  lw          $a2, 0xD74($s0)
    ctx->pc = 0x1b42bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_1b42c0:
    // 0x1b42c0: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_1b42c4:
    if (ctx->pc == 0x1B42C4u) {
        ctx->pc = 0x1B42C4u;
            // 0x1b42c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B42C8u;
        goto label_1b42c8;
    }
    ctx->pc = 0x1B42C0u;
    {
        const bool branch_taken_0x1b42c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B42C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B42C0u;
            // 0x1b42c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b42c0) {
            ctx->pc = 0x1B42D4u;
            goto label_1b42d4;
        }
    }
    ctx->pc = 0x1B42C8u;
label_1b42c8:
    // 0x1b42c8: 0x8e050d7c  lw          $a1, 0xD7C($s0)
    ctx->pc = 0x1b42c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3452)));
label_1b42cc:
    // 0x1b42cc: 0xc06ac7e  jal         func_1AB1F8
label_1b42d0:
    if (ctx->pc == 0x1B42D0u) {
        ctx->pc = 0x1B42D0u;
            // 0x1b42d0: 0x8e070d78  lw          $a3, 0xD78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3448)));
        ctx->pc = 0x1B42D4u;
        goto label_1b42d4;
    }
    ctx->pc = 0x1B42CCu;
    SET_GPR_U32(ctx, 31, 0x1B42D4u);
    ctx->pc = 0x1B42D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B42CCu;
            // 0x1b42d0: 0x8e070d78  lw          $a3, 0xD78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3448)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AB1F8u;
    if (runtime->hasFunction(0x1AB1F8u)) {
        auto targetFn = runtime->lookupFunction(0x1AB1F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B42D4u; }
        if (ctx->pc != 0x1B42D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB1F8_0x1ab1f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B42D4u; }
        if (ctx->pc != 0x1B42D4u) { return; }
    }
    ctx->pc = 0x1B42D4u;
label_1b42d4:
    // 0x1b42d4: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
label_1b42d8:
    if (ctx->pc == 0x1B42D8u) {
        ctx->pc = 0x1B42D8u;
            // 0x1b42d8: 0x8fa602c4  lw          $a2, 0x2C4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
        ctx->pc = 0x1B42DCu;
        goto label_1b42dc;
    }
    ctx->pc = 0x1B42D4u;
    {
        const bool branch_taken_0x1b42d4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B42D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B42D4u;
            // 0x1b42d8: 0x8fa602c4  lw          $a2, 0x2C4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b42d4) {
            ctx->pc = 0x1B42E8u;
            goto label_1b42e8;
        }
    }
    ctx->pc = 0x1B42DCu;
label_1b42dc:
    // 0x1b42dc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1b42dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1b42e0:
    // 0x1b42e0: 0xc06a1d8  jal         func_1A8760
label_1b42e4:
    if (ctx->pc == 0x1B42E4u) {
        ctx->pc = 0x1B42E4u;
            // 0x1b42e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B42E8u;
        goto label_1b42e8;
    }
    ctx->pc = 0x1B42E0u;
    SET_GPR_U32(ctx, 31, 0x1B42E8u);
    ctx->pc = 0x1B42E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B42E0u;
            // 0x1b42e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8760u;
    if (runtime->hasFunction(0x1A8760u)) {
        auto targetFn = runtime->lookupFunction(0x1A8760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B42E8u; }
        if (ctx->pc != 0x1B42E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8760_0x1a8760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B42E8u; }
        if (ctx->pc != 0x1B42E8u) { return; }
    }
    ctx->pc = 0x1B42E8u;
label_1b42e8:
    // 0x1b42e8: 0x12e00004  beqz        $s7, . + 4 + (0x4 << 2)
label_1b42ec:
    if (ctx->pc == 0x1B42ECu) {
        ctx->pc = 0x1B42ECu;
            // 0x1b42ec: 0x8fa602c8  lw          $a2, 0x2C8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 712)));
        ctx->pc = 0x1B42F0u;
        goto label_1b42f0;
    }
    ctx->pc = 0x1B42E8u;
    {
        const bool branch_taken_0x1b42e8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B42ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B42E8u;
            // 0x1b42ec: 0x8fa602c8  lw          $a2, 0x2C8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b42e8) {
            ctx->pc = 0x1B42FCu;
            goto label_1b42fc;
        }
    }
    ctx->pc = 0x1B42F0u;
label_1b42f0:
    // 0x1b42f0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1b42f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1b42f4:
    // 0x1b42f4: 0xc06dcd8  jal         func_1B7360
label_1b42f8:
    if (ctx->pc == 0x1B42F8u) {
        ctx->pc = 0x1B42F8u;
            // 0x1b42f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B42FCu;
        goto label_1b42fc;
    }
    ctx->pc = 0x1B42F4u;
    SET_GPR_U32(ctx, 31, 0x1B42FCu);
    ctx->pc = 0x1B42F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B42F4u;
            // 0x1b42f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7360u;
    if (runtime->hasFunction(0x1B7360u)) {
        auto targetFn = runtime->lookupFunction(0x1B7360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B42FCu; }
        if (ctx->pc != 0x1B42FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7360_0x1b7360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B42FCu; }
        if (ctx->pc != 0x1B42FCu) { return; }
    }
    ctx->pc = 0x1B42FCu;
label_1b42fc:
    // 0x1b42fc: 0x8fa802cc  lw          $t0, 0x2CC($sp)
    ctx->pc = 0x1b42fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
label_1b4300:
    // 0x1b4300: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
label_1b4304:
    if (ctx->pc == 0x1B4304u) {
        ctx->pc = 0x1B4304u;
            // 0x1b4304: 0x8fa602d0  lw          $a2, 0x2D0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
        ctx->pc = 0x1B4308u;
        goto label_1b4308;
    }
    ctx->pc = 0x1B4300u;
    {
        const bool branch_taken_0x1b4300 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4300u;
            // 0x1b4304: 0x8fa602d0  lw          $a2, 0x2D0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4300) {
            ctx->pc = 0x1B4318u;
            goto label_1b4318;
        }
    }
    ctx->pc = 0x1B4308u;
label_1b4308:
    // 0x1b4308: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1b4308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1b430c:
    // 0x1b430c: 0x8fa702d4  lw          $a3, 0x2D4($sp)
    ctx->pc = 0x1b430cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
label_1b4310:
    // 0x1b4310: 0xc06dcf4  jal         func_1B73D0
label_1b4314:
    if (ctx->pc == 0x1B4314u) {
        ctx->pc = 0x1B4314u;
            // 0x1b4314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4318u;
        goto label_1b4318;
    }
    ctx->pc = 0x1B4310u;
    SET_GPR_U32(ctx, 31, 0x1B4318u);
    ctx->pc = 0x1B4314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4310u;
            // 0x1b4314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B73D0u;
    if (runtime->hasFunction(0x1B73D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B73D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4318u; }
        if (ctx->pc != 0x1B4318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B73D0_0x1b73d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4318u; }
        if (ctx->pc != 0x1B4318u) { return; }
    }
    ctx->pc = 0x1B4318u;
label_1b4318:
    // 0x1b4318: 0x8fa202d8  lw          $v0, 0x2D8($sp)
    ctx->pc = 0x1b4318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
label_1b431c:
    // 0x1b431c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b4320:
    if (ctx->pc == 0x1B4320u) {
        ctx->pc = 0x1B4320u;
            // 0x1b4320: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4324u;
        goto label_1b4324;
    }
    ctx->pc = 0x1B431Cu;
    {
        const bool branch_taken_0x1b431c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B431Cu;
            // 0x1b4320: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b431c) {
            ctx->pc = 0x1B432Cu;
            goto label_1b432c;
        }
    }
    ctx->pc = 0x1B4324u;
label_1b4324:
    // 0x1b4324: 0xc06dcbc  jal         func_1B72F0
label_1b4328:
    if (ctx->pc == 0x1B4328u) {
        ctx->pc = 0x1B4328u;
            // 0x1b4328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B432Cu;
        goto label_1b432c;
    }
    ctx->pc = 0x1B4324u;
    SET_GPR_U32(ctx, 31, 0x1B432Cu);
    ctx->pc = 0x1B4328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4324u;
            // 0x1b4328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B72F0u;
    if (runtime->hasFunction(0x1B72F0u)) {
        auto targetFn = runtime->lookupFunction(0x1B72F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B432Cu; }
        if (ctx->pc != 0x1B432Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B72F0_0x1b72f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B432Cu; }
        if (ctx->pc != 0x1B432Cu) { return; }
    }
    ctx->pc = 0x1B432Cu;
label_1b432c:
    // 0x1b432c: 0x8fa302dc  lw          $v1, 0x2DC($sp)
    ctx->pc = 0x1b432cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 732)));
label_1b4330:
    // 0x1b4330: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x1b4330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_1b4334:
    // 0x1b4334: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1b4338:
    if (ctx->pc == 0x1B4338u) {
        ctx->pc = 0x1B4338u;
            // 0x1b4338: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B433Cu;
        goto label_1b433c;
    }
    ctx->pc = 0x1B4334u;
    {
        const bool branch_taken_0x1b4334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B4338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4334u;
            // 0x1b4338: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4334) {
            ctx->pc = 0x1B4344u;
            goto label_1b4344;
        }
    }
    ctx->pc = 0x1B433Cu;
label_1b433c:
    // 0x1b433c: 0xc06c8ca  jal         func_1B2328
label_1b4340:
    if (ctx->pc == 0x1B4340u) {
        ctx->pc = 0x1B4340u;
            // 0x1b4340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4344u;
        goto label_1b4344;
    }
    ctx->pc = 0x1B433Cu;
    SET_GPR_U32(ctx, 31, 0x1B4344u);
    ctx->pc = 0x1B4340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B433Cu;
            // 0x1b4340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2328u;
    if (runtime->hasFunction(0x1B2328u)) {
        auto targetFn = runtime->lookupFunction(0x1B2328u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4344u; }
        if (ctx->pc != 0x1B4344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2328_0x1b2328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4344u; }
        if (ctx->pc != 0x1B4344u) { return; }
    }
    ctx->pc = 0x1B4344u;
label_1b4344:
    // 0x1b4344: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b4344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
label_1b4348:
    // 0x1b4348: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1b434c:
    if (ctx->pc == 0x1B434Cu) {
        ctx->pc = 0x1B434Cu;
            // 0x1b434c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->pc = 0x1B4350u;
        goto label_1b4350;
    }
    ctx->pc = 0x1B4348u;
    {
        const bool branch_taken_0x1b4348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B434Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4348u;
            // 0x1b434c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4348) {
            ctx->pc = 0x1B437Cu;
            goto label_1b437c;
        }
    }
    ctx->pc = 0x1B4350u;
label_1b4350:
    // 0x1b4350: 0x6bc40007  ldl         $a0, 0x7($fp)
    ctx->pc = 0x1b4350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1b4354:
    // 0x1b4354: 0x6fc40000  ldr         $a0, 0x0($fp)
    ctx->pc = 0x1b4354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1b4358:
    // 0x1b4358: 0x8fc50008  lw          $a1, 0x8($fp)
    ctx->pc = 0x1b4358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_1b435c:
    // 0x1b435c: 0xb2041347  sdl         $a0, 0x1347($s0)
    ctx->pc = 0x1b435cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4935); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b4360:
    // 0x1b4360: 0xb6041340  sdr         $a0, 0x1340($s0)
    ctx->pc = 0x1b4360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4928); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b4364:
    // 0x1b4364: 0xae051348  sw          $a1, 0x1348($s0)
    ctx->pc = 0x1b4364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4936), GPR_U32(ctx, 5));
label_1b4368:
    // 0x1b4368: 0x8c429bc8  lw          $v0, -0x6438($v0)
    ctx->pc = 0x1b4368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941640)));
label_1b436c:
    // 0x1b436c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b4370:
    if (ctx->pc == 0x1B4370u) {
        ctx->pc = 0x1B4370u;
            // 0x1b4370: 0x8fa602b4  lw          $a2, 0x2B4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 692)));
        ctx->pc = 0x1B4374u;
        goto label_1b4374;
    }
    ctx->pc = 0x1B436Cu;
    {
        const bool branch_taken_0x1b436c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B436Cu;
            // 0x1b4370: 0x8fa602b4  lw          $a2, 0x2B4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b436c) {
            ctx->pc = 0x1B4380u;
            goto label_1b4380;
        }
    }
    ctx->pc = 0x1B4374u;
label_1b4374:
    // 0x1b4374: 0x40f809  jalr        $v0
label_1b4378:
    if (ctx->pc == 0x1B4378u) {
        ctx->pc = 0x1B4378u;
            // 0x1b4378: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B437Cu;
        goto label_1b437c;
    }
    ctx->pc = 0x1B4374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B437Cu);
        ctx->pc = 0x1B4378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4374u;
            // 0x1b4378: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B437Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B437Cu; }
            if (ctx->pc != 0x1B437Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1B437Cu;
label_1b437c:
    // 0x1b437c: 0x8fa602b4  lw          $a2, 0x2B4($sp)
    ctx->pc = 0x1b437cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 692)));
label_1b4380:
    // 0x1b4380: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_1b4384:
    if (ctx->pc == 0x1B4384u) {
        ctx->pc = 0x1B4384u;
            // 0x1b4384: 0x8fa502b0  lw          $a1, 0x2B0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
        ctx->pc = 0x1B4388u;
        goto label_1b4388;
    }
    ctx->pc = 0x1B4380u;
    {
        const bool branch_taken_0x1b4380 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4380u;
            // 0x1b4384: 0x8fa502b0  lw          $a1, 0x2B0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4380) {
            ctx->pc = 0x1B4390u;
            goto label_1b4390;
        }
    }
    ctx->pc = 0x1B4388u;
label_1b4388:
    // 0x1b4388: 0xc06e07e  jal         func_1B81F8
label_1b438c:
    if (ctx->pc == 0x1B438Cu) {
        ctx->pc = 0x1B438Cu;
            // 0x1b438c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B4390u;
        goto label_1b4390;
    }
    ctx->pc = 0x1B4388u;
    SET_GPR_U32(ctx, 31, 0x1B4390u);
    ctx->pc = 0x1B438Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4388u;
            // 0x1b438c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B81F8u;
    if (runtime->hasFunction(0x1B81F8u)) {
        auto targetFn = runtime->lookupFunction(0x1B81F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4390u; }
        if (ctx->pc != 0x1B4390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B81F8_0x1b81f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4390u; }
        if (ctx->pc != 0x1B4390u) { return; }
    }
    ctx->pc = 0x1B4390u;
label_1b4390:
    // 0x1b4390: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
label_1b4394:
    if (ctx->pc == 0x1B4394u) {
        ctx->pc = 0x1B4394u;
            // 0x1b4394: 0x8fa802f4  lw          $t0, 0x2F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 756)));
        ctx->pc = 0x1B4398u;
        goto label_1b4398;
    }
    ctx->pc = 0x1B4390u;
    {
        const bool branch_taken_0x1b4390 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4390u;
            // 0x1b4394: 0x8fa802f4  lw          $t0, 0x2F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4390) {
            ctx->pc = 0x1B43DCu;
            goto label_1b43dc;
        }
    }
    ctx->pc = 0x1B4398u;
label_1b4398:
    // 0x1b4398: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b4398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b439c:
    // 0x1b439c: 0xc06d436  jal         func_1B50D8
label_1b43a0:
    if (ctx->pc == 0x1B43A0u) {
        ctx->pc = 0x1B43A0u;
            // 0x1b43a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B43A4u;
        goto label_1b43a4;
    }
    ctx->pc = 0x1B439Cu;
    SET_GPR_U32(ctx, 31, 0x1B43A4u);
    ctx->pc = 0x1B43A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B439Cu;
            // 0x1b43a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B50D8u;
    if (runtime->hasFunction(0x1B50D8u)) {
        auto targetFn = runtime->lookupFunction(0x1B50D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B43A4u; }
        if (ctx->pc != 0x1B43A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B50D8_0x1b50d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B43A4u; }
        if (ctx->pc != 0x1B43A4u) { return; }
    }
    ctx->pc = 0x1B43A4u;
label_1b43a4:
    // 0x1b43a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b43a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b43a8:
    // 0x1b43a8: 0xc06d6a0  jal         func_1B5A80
label_1b43ac:
    if (ctx->pc == 0x1B43ACu) {
        ctx->pc = 0x1B43ACu;
            // 0x1b43ac: 0x8fa502e0  lw          $a1, 0x2E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
        ctx->pc = 0x1B43B0u;
        goto label_1b43b0;
    }
    ctx->pc = 0x1B43A8u;
    SET_GPR_U32(ctx, 31, 0x1B43B0u);
    ctx->pc = 0x1B43ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B43A8u;
            // 0x1b43ac: 0x8fa502e0  lw          $a1, 0x2E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5A80u;
    if (runtime->hasFunction(0x1B5A80u)) {
        auto targetFn = runtime->lookupFunction(0x1B5A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B43B0u; }
        if (ctx->pc != 0x1B43B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5A80_0x1b5a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B43B0u; }
        if (ctx->pc != 0x1B43B0u) { return; }
    }
    ctx->pc = 0x1B43B0u;
label_1b43b0:
    // 0x1b43b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b43b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b43b4:
    // 0x1b43b4: 0xc06d662  jal         func_1B5988
label_1b43b8:
    if (ctx->pc == 0x1B43B8u) {
        ctx->pc = 0x1B43B8u;
            // 0x1b43b8: 0x8fa502e4  lw          $a1, 0x2E4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 740)));
        ctx->pc = 0x1B43BCu;
        goto label_1b43bc;
    }
    ctx->pc = 0x1B43B4u;
    SET_GPR_U32(ctx, 31, 0x1B43BCu);
    ctx->pc = 0x1B43B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B43B4u;
            // 0x1b43b8: 0x8fa502e4  lw          $a1, 0x2E4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 740)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5988u;
    if (runtime->hasFunction(0x1B5988u)) {
        auto targetFn = runtime->lookupFunction(0x1B5988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B43BCu; }
        if (ctx->pc != 0x1B43BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5988_0x1b5988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B43BCu; }
        if (ctx->pc != 0x1B43BCu) { return; }
    }
    ctx->pc = 0x1B43BCu;
label_1b43bc:
    // 0x1b43bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b43bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b43c0:
    // 0x1b43c0: 0x8fa502e8  lw          $a1, 0x2E8($sp)
    ctx->pc = 0x1b43c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
label_1b43c4:
    // 0x1b43c4: 0xc06d67e  jal         func_1B59F8
label_1b43c8:
    if (ctx->pc == 0x1B43C8u) {
        ctx->pc = 0x1B43C8u;
            // 0x1b43c8: 0x8fa602ec  lw          $a2, 0x2EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 748)));
        ctx->pc = 0x1B43CCu;
        goto label_1b43cc;
    }
    ctx->pc = 0x1B43C4u;
    SET_GPR_U32(ctx, 31, 0x1B43CCu);
    ctx->pc = 0x1B43C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B43C4u;
            // 0x1b43c8: 0x8fa602ec  lw          $a2, 0x2EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 748)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B59F8u;
    if (runtime->hasFunction(0x1B59F8u)) {
        auto targetFn = runtime->lookupFunction(0x1B59F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B43CCu; }
        if (ctx->pc != 0x1B43CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B59F8_0x1b59f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B43CCu; }
        if (ctx->pc != 0x1B43CCu) { return; }
    }
    ctx->pc = 0x1B43CCu;
label_1b43cc:
    // 0x1b43cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b43ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b43d0:
    // 0x1b43d0: 0xc06d6bc  jal         func_1B5AF0
label_1b43d4:
    if (ctx->pc == 0x1B43D4u) {
        ctx->pc = 0x1B43D4u;
            // 0x1b43d4: 0x8fa502f0  lw          $a1, 0x2F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
        ctx->pc = 0x1B43D8u;
        goto label_1b43d8;
    }
    ctx->pc = 0x1B43D0u;
    SET_GPR_U32(ctx, 31, 0x1B43D8u);
    ctx->pc = 0x1B43D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B43D0u;
            // 0x1b43d4: 0x8fa502f0  lw          $a1, 0x2F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5AF0u;
    if (runtime->hasFunction(0x1B5AF0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B43D8u; }
        if (ctx->pc != 0x1B43D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5AF0_0x1b5af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B43D8u; }
        if (ctx->pc != 0x1B43D8u) { return; }
    }
    ctx->pc = 0x1B43D8u;
label_1b43d8:
    // 0x1b43d8: 0x8fa802f4  lw          $t0, 0x2F4($sp)
    ctx->pc = 0x1b43d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 756)));
label_1b43dc:
    // 0x1b43dc: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
label_1b43e0:
    if (ctx->pc == 0x1B43E0u) {
        ctx->pc = 0x1B43E0u;
            // 0x1b43e0: 0x8fa602f8  lw          $a2, 0x2F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 760)));
        ctx->pc = 0x1B43E4u;
        goto label_1b43e4;
    }
    ctx->pc = 0x1B43DCu;
    {
        const bool branch_taken_0x1b43dc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B43E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B43DCu;
            // 0x1b43e0: 0x8fa602f8  lw          $a2, 0x2F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b43dc) {
            ctx->pc = 0x1B43F0u;
            goto label_1b43f0;
        }
    }
    ctx->pc = 0x1B43E4u;
label_1b43e4:
    // 0x1b43e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b43e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b43e8:
    // 0x1b43e8: 0xc06d2c0  jal         func_1B4B00
label_1b43ec:
    if (ctx->pc == 0x1B43ECu) {
        ctx->pc = 0x1B43ECu;
            // 0x1b43ec: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B43F0u;
        goto label_1b43f0;
    }
    ctx->pc = 0x1B43E8u;
    SET_GPR_U32(ctx, 31, 0x1B43F0u);
    ctx->pc = 0x1B43ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B43E8u;
            // 0x1b43ec: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4B00u;
    if (runtime->hasFunction(0x1B4B00u)) {
        auto targetFn = runtime->lookupFunction(0x1B4B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B43F0u; }
        if (ctx->pc != 0x1B43F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4B00_0x1b4b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B43F0u; }
        if (ctx->pc != 0x1B43F0u) { return; }
    }
    ctx->pc = 0x1B43F0u;
label_1b43f0:
    // 0x1b43f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b43f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b43f4:
    // 0x1b43f4: 0xdfb00300  ld          $s0, 0x300($sp)
    ctx->pc = 0x1b43f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 768)));
label_1b43f8:
    // 0x1b43f8: 0xdfb10308  ld          $s1, 0x308($sp)
    ctx->pc = 0x1b43f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 776)));
label_1b43fc:
    // 0x1b43fc: 0xdfb20310  ld          $s2, 0x310($sp)
    ctx->pc = 0x1b43fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 784)));
label_1b4400:
    // 0x1b4400: 0xdfb30318  ld          $s3, 0x318($sp)
    ctx->pc = 0x1b4400u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 792)));
label_1b4404:
    // 0x1b4404: 0xdfb40320  ld          $s4, 0x320($sp)
    ctx->pc = 0x1b4404u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 800)));
label_1b4408:
    // 0x1b4408: 0xdfb50328  ld          $s5, 0x328($sp)
    ctx->pc = 0x1b4408u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 808)));
label_1b440c:
    // 0x1b440c: 0xdfb60330  ld          $s6, 0x330($sp)
    ctx->pc = 0x1b440cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 816)));
label_1b4410:
    // 0x1b4410: 0xdfb70338  ld          $s7, 0x338($sp)
    ctx->pc = 0x1b4410u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 824)));
label_1b4414:
    // 0x1b4414: 0xdfbe0340  ld          $fp, 0x340($sp)
    ctx->pc = 0x1b4414u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 832)));
label_1b4418:
    // 0x1b4418: 0xdfbf0348  ld          $ra, 0x348($sp)
    ctx->pc = 0x1b4418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 840)));
label_1b441c:
    // 0x1b441c: 0x3e00008  jr          $ra
label_1b4420:
    if (ctx->pc == 0x1B4420u) {
        ctx->pc = 0x1B4420u;
            // 0x1b4420: 0x27bd0350  addiu       $sp, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->pc = 0x1B4424u;
        goto label_1b4424;
    }
    ctx->pc = 0x1B441Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B441Cu;
            // 0x1b4420: 0x27bd0350  addiu       $sp, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B4424u;
label_1b4424:
    // 0x1b4424: 0x0  nop
    ctx->pc = 0x1b4424u;
    // NOP
}
