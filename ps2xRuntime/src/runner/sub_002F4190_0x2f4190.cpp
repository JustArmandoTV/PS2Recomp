#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F4190
// Address: 0x2f4190 - 0x2f48b0
void sub_002F4190_0x2f4190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4190_0x2f4190");
#endif

    switch (ctx->pc) {
        case 0x2f4190u: goto label_2f4190;
        case 0x2f4194u: goto label_2f4194;
        case 0x2f4198u: goto label_2f4198;
        case 0x2f419cu: goto label_2f419c;
        case 0x2f41a0u: goto label_2f41a0;
        case 0x2f41a4u: goto label_2f41a4;
        case 0x2f41a8u: goto label_2f41a8;
        case 0x2f41acu: goto label_2f41ac;
        case 0x2f41b0u: goto label_2f41b0;
        case 0x2f41b4u: goto label_2f41b4;
        case 0x2f41b8u: goto label_2f41b8;
        case 0x2f41bcu: goto label_2f41bc;
        case 0x2f41c0u: goto label_2f41c0;
        case 0x2f41c4u: goto label_2f41c4;
        case 0x2f41c8u: goto label_2f41c8;
        case 0x2f41ccu: goto label_2f41cc;
        case 0x2f41d0u: goto label_2f41d0;
        case 0x2f41d4u: goto label_2f41d4;
        case 0x2f41d8u: goto label_2f41d8;
        case 0x2f41dcu: goto label_2f41dc;
        case 0x2f41e0u: goto label_2f41e0;
        case 0x2f41e4u: goto label_2f41e4;
        case 0x2f41e8u: goto label_2f41e8;
        case 0x2f41ecu: goto label_2f41ec;
        case 0x2f41f0u: goto label_2f41f0;
        case 0x2f41f4u: goto label_2f41f4;
        case 0x2f41f8u: goto label_2f41f8;
        case 0x2f41fcu: goto label_2f41fc;
        case 0x2f4200u: goto label_2f4200;
        case 0x2f4204u: goto label_2f4204;
        case 0x2f4208u: goto label_2f4208;
        case 0x2f420cu: goto label_2f420c;
        case 0x2f4210u: goto label_2f4210;
        case 0x2f4214u: goto label_2f4214;
        case 0x2f4218u: goto label_2f4218;
        case 0x2f421cu: goto label_2f421c;
        case 0x2f4220u: goto label_2f4220;
        case 0x2f4224u: goto label_2f4224;
        case 0x2f4228u: goto label_2f4228;
        case 0x2f422cu: goto label_2f422c;
        case 0x2f4230u: goto label_2f4230;
        case 0x2f4234u: goto label_2f4234;
        case 0x2f4238u: goto label_2f4238;
        case 0x2f423cu: goto label_2f423c;
        case 0x2f4240u: goto label_2f4240;
        case 0x2f4244u: goto label_2f4244;
        case 0x2f4248u: goto label_2f4248;
        case 0x2f424cu: goto label_2f424c;
        case 0x2f4250u: goto label_2f4250;
        case 0x2f4254u: goto label_2f4254;
        case 0x2f4258u: goto label_2f4258;
        case 0x2f425cu: goto label_2f425c;
        case 0x2f4260u: goto label_2f4260;
        case 0x2f4264u: goto label_2f4264;
        case 0x2f4268u: goto label_2f4268;
        case 0x2f426cu: goto label_2f426c;
        case 0x2f4270u: goto label_2f4270;
        case 0x2f4274u: goto label_2f4274;
        case 0x2f4278u: goto label_2f4278;
        case 0x2f427cu: goto label_2f427c;
        case 0x2f4280u: goto label_2f4280;
        case 0x2f4284u: goto label_2f4284;
        case 0x2f4288u: goto label_2f4288;
        case 0x2f428cu: goto label_2f428c;
        case 0x2f4290u: goto label_2f4290;
        case 0x2f4294u: goto label_2f4294;
        case 0x2f4298u: goto label_2f4298;
        case 0x2f429cu: goto label_2f429c;
        case 0x2f42a0u: goto label_2f42a0;
        case 0x2f42a4u: goto label_2f42a4;
        case 0x2f42a8u: goto label_2f42a8;
        case 0x2f42acu: goto label_2f42ac;
        case 0x2f42b0u: goto label_2f42b0;
        case 0x2f42b4u: goto label_2f42b4;
        case 0x2f42b8u: goto label_2f42b8;
        case 0x2f42bcu: goto label_2f42bc;
        case 0x2f42c0u: goto label_2f42c0;
        case 0x2f42c4u: goto label_2f42c4;
        case 0x2f42c8u: goto label_2f42c8;
        case 0x2f42ccu: goto label_2f42cc;
        case 0x2f42d0u: goto label_2f42d0;
        case 0x2f42d4u: goto label_2f42d4;
        case 0x2f42d8u: goto label_2f42d8;
        case 0x2f42dcu: goto label_2f42dc;
        case 0x2f42e0u: goto label_2f42e0;
        case 0x2f42e4u: goto label_2f42e4;
        case 0x2f42e8u: goto label_2f42e8;
        case 0x2f42ecu: goto label_2f42ec;
        case 0x2f42f0u: goto label_2f42f0;
        case 0x2f42f4u: goto label_2f42f4;
        case 0x2f42f8u: goto label_2f42f8;
        case 0x2f42fcu: goto label_2f42fc;
        case 0x2f4300u: goto label_2f4300;
        case 0x2f4304u: goto label_2f4304;
        case 0x2f4308u: goto label_2f4308;
        case 0x2f430cu: goto label_2f430c;
        case 0x2f4310u: goto label_2f4310;
        case 0x2f4314u: goto label_2f4314;
        case 0x2f4318u: goto label_2f4318;
        case 0x2f431cu: goto label_2f431c;
        case 0x2f4320u: goto label_2f4320;
        case 0x2f4324u: goto label_2f4324;
        case 0x2f4328u: goto label_2f4328;
        case 0x2f432cu: goto label_2f432c;
        case 0x2f4330u: goto label_2f4330;
        case 0x2f4334u: goto label_2f4334;
        case 0x2f4338u: goto label_2f4338;
        case 0x2f433cu: goto label_2f433c;
        case 0x2f4340u: goto label_2f4340;
        case 0x2f4344u: goto label_2f4344;
        case 0x2f4348u: goto label_2f4348;
        case 0x2f434cu: goto label_2f434c;
        case 0x2f4350u: goto label_2f4350;
        case 0x2f4354u: goto label_2f4354;
        case 0x2f4358u: goto label_2f4358;
        case 0x2f435cu: goto label_2f435c;
        case 0x2f4360u: goto label_2f4360;
        case 0x2f4364u: goto label_2f4364;
        case 0x2f4368u: goto label_2f4368;
        case 0x2f436cu: goto label_2f436c;
        case 0x2f4370u: goto label_2f4370;
        case 0x2f4374u: goto label_2f4374;
        case 0x2f4378u: goto label_2f4378;
        case 0x2f437cu: goto label_2f437c;
        case 0x2f4380u: goto label_2f4380;
        case 0x2f4384u: goto label_2f4384;
        case 0x2f4388u: goto label_2f4388;
        case 0x2f438cu: goto label_2f438c;
        case 0x2f4390u: goto label_2f4390;
        case 0x2f4394u: goto label_2f4394;
        case 0x2f4398u: goto label_2f4398;
        case 0x2f439cu: goto label_2f439c;
        case 0x2f43a0u: goto label_2f43a0;
        case 0x2f43a4u: goto label_2f43a4;
        case 0x2f43a8u: goto label_2f43a8;
        case 0x2f43acu: goto label_2f43ac;
        case 0x2f43b0u: goto label_2f43b0;
        case 0x2f43b4u: goto label_2f43b4;
        case 0x2f43b8u: goto label_2f43b8;
        case 0x2f43bcu: goto label_2f43bc;
        case 0x2f43c0u: goto label_2f43c0;
        case 0x2f43c4u: goto label_2f43c4;
        case 0x2f43c8u: goto label_2f43c8;
        case 0x2f43ccu: goto label_2f43cc;
        case 0x2f43d0u: goto label_2f43d0;
        case 0x2f43d4u: goto label_2f43d4;
        case 0x2f43d8u: goto label_2f43d8;
        case 0x2f43dcu: goto label_2f43dc;
        case 0x2f43e0u: goto label_2f43e0;
        case 0x2f43e4u: goto label_2f43e4;
        case 0x2f43e8u: goto label_2f43e8;
        case 0x2f43ecu: goto label_2f43ec;
        case 0x2f43f0u: goto label_2f43f0;
        case 0x2f43f4u: goto label_2f43f4;
        case 0x2f43f8u: goto label_2f43f8;
        case 0x2f43fcu: goto label_2f43fc;
        case 0x2f4400u: goto label_2f4400;
        case 0x2f4404u: goto label_2f4404;
        case 0x2f4408u: goto label_2f4408;
        case 0x2f440cu: goto label_2f440c;
        case 0x2f4410u: goto label_2f4410;
        case 0x2f4414u: goto label_2f4414;
        case 0x2f4418u: goto label_2f4418;
        case 0x2f441cu: goto label_2f441c;
        case 0x2f4420u: goto label_2f4420;
        case 0x2f4424u: goto label_2f4424;
        case 0x2f4428u: goto label_2f4428;
        case 0x2f442cu: goto label_2f442c;
        case 0x2f4430u: goto label_2f4430;
        case 0x2f4434u: goto label_2f4434;
        case 0x2f4438u: goto label_2f4438;
        case 0x2f443cu: goto label_2f443c;
        case 0x2f4440u: goto label_2f4440;
        case 0x2f4444u: goto label_2f4444;
        case 0x2f4448u: goto label_2f4448;
        case 0x2f444cu: goto label_2f444c;
        case 0x2f4450u: goto label_2f4450;
        case 0x2f4454u: goto label_2f4454;
        case 0x2f4458u: goto label_2f4458;
        case 0x2f445cu: goto label_2f445c;
        case 0x2f4460u: goto label_2f4460;
        case 0x2f4464u: goto label_2f4464;
        case 0x2f4468u: goto label_2f4468;
        case 0x2f446cu: goto label_2f446c;
        case 0x2f4470u: goto label_2f4470;
        case 0x2f4474u: goto label_2f4474;
        case 0x2f4478u: goto label_2f4478;
        case 0x2f447cu: goto label_2f447c;
        case 0x2f4480u: goto label_2f4480;
        case 0x2f4484u: goto label_2f4484;
        case 0x2f4488u: goto label_2f4488;
        case 0x2f448cu: goto label_2f448c;
        case 0x2f4490u: goto label_2f4490;
        case 0x2f4494u: goto label_2f4494;
        case 0x2f4498u: goto label_2f4498;
        case 0x2f449cu: goto label_2f449c;
        case 0x2f44a0u: goto label_2f44a0;
        case 0x2f44a4u: goto label_2f44a4;
        case 0x2f44a8u: goto label_2f44a8;
        case 0x2f44acu: goto label_2f44ac;
        case 0x2f44b0u: goto label_2f44b0;
        case 0x2f44b4u: goto label_2f44b4;
        case 0x2f44b8u: goto label_2f44b8;
        case 0x2f44bcu: goto label_2f44bc;
        case 0x2f44c0u: goto label_2f44c0;
        case 0x2f44c4u: goto label_2f44c4;
        case 0x2f44c8u: goto label_2f44c8;
        case 0x2f44ccu: goto label_2f44cc;
        case 0x2f44d0u: goto label_2f44d0;
        case 0x2f44d4u: goto label_2f44d4;
        case 0x2f44d8u: goto label_2f44d8;
        case 0x2f44dcu: goto label_2f44dc;
        case 0x2f44e0u: goto label_2f44e0;
        case 0x2f44e4u: goto label_2f44e4;
        case 0x2f44e8u: goto label_2f44e8;
        case 0x2f44ecu: goto label_2f44ec;
        case 0x2f44f0u: goto label_2f44f0;
        case 0x2f44f4u: goto label_2f44f4;
        case 0x2f44f8u: goto label_2f44f8;
        case 0x2f44fcu: goto label_2f44fc;
        case 0x2f4500u: goto label_2f4500;
        case 0x2f4504u: goto label_2f4504;
        case 0x2f4508u: goto label_2f4508;
        case 0x2f450cu: goto label_2f450c;
        case 0x2f4510u: goto label_2f4510;
        case 0x2f4514u: goto label_2f4514;
        case 0x2f4518u: goto label_2f4518;
        case 0x2f451cu: goto label_2f451c;
        case 0x2f4520u: goto label_2f4520;
        case 0x2f4524u: goto label_2f4524;
        case 0x2f4528u: goto label_2f4528;
        case 0x2f452cu: goto label_2f452c;
        case 0x2f4530u: goto label_2f4530;
        case 0x2f4534u: goto label_2f4534;
        case 0x2f4538u: goto label_2f4538;
        case 0x2f453cu: goto label_2f453c;
        case 0x2f4540u: goto label_2f4540;
        case 0x2f4544u: goto label_2f4544;
        case 0x2f4548u: goto label_2f4548;
        case 0x2f454cu: goto label_2f454c;
        case 0x2f4550u: goto label_2f4550;
        case 0x2f4554u: goto label_2f4554;
        case 0x2f4558u: goto label_2f4558;
        case 0x2f455cu: goto label_2f455c;
        case 0x2f4560u: goto label_2f4560;
        case 0x2f4564u: goto label_2f4564;
        case 0x2f4568u: goto label_2f4568;
        case 0x2f456cu: goto label_2f456c;
        case 0x2f4570u: goto label_2f4570;
        case 0x2f4574u: goto label_2f4574;
        case 0x2f4578u: goto label_2f4578;
        case 0x2f457cu: goto label_2f457c;
        case 0x2f4580u: goto label_2f4580;
        case 0x2f4584u: goto label_2f4584;
        case 0x2f4588u: goto label_2f4588;
        case 0x2f458cu: goto label_2f458c;
        case 0x2f4590u: goto label_2f4590;
        case 0x2f4594u: goto label_2f4594;
        case 0x2f4598u: goto label_2f4598;
        case 0x2f459cu: goto label_2f459c;
        case 0x2f45a0u: goto label_2f45a0;
        case 0x2f45a4u: goto label_2f45a4;
        case 0x2f45a8u: goto label_2f45a8;
        case 0x2f45acu: goto label_2f45ac;
        case 0x2f45b0u: goto label_2f45b0;
        case 0x2f45b4u: goto label_2f45b4;
        case 0x2f45b8u: goto label_2f45b8;
        case 0x2f45bcu: goto label_2f45bc;
        case 0x2f45c0u: goto label_2f45c0;
        case 0x2f45c4u: goto label_2f45c4;
        case 0x2f45c8u: goto label_2f45c8;
        case 0x2f45ccu: goto label_2f45cc;
        case 0x2f45d0u: goto label_2f45d0;
        case 0x2f45d4u: goto label_2f45d4;
        case 0x2f45d8u: goto label_2f45d8;
        case 0x2f45dcu: goto label_2f45dc;
        case 0x2f45e0u: goto label_2f45e0;
        case 0x2f45e4u: goto label_2f45e4;
        case 0x2f45e8u: goto label_2f45e8;
        case 0x2f45ecu: goto label_2f45ec;
        case 0x2f45f0u: goto label_2f45f0;
        case 0x2f45f4u: goto label_2f45f4;
        case 0x2f45f8u: goto label_2f45f8;
        case 0x2f45fcu: goto label_2f45fc;
        case 0x2f4600u: goto label_2f4600;
        case 0x2f4604u: goto label_2f4604;
        case 0x2f4608u: goto label_2f4608;
        case 0x2f460cu: goto label_2f460c;
        case 0x2f4610u: goto label_2f4610;
        case 0x2f4614u: goto label_2f4614;
        case 0x2f4618u: goto label_2f4618;
        case 0x2f461cu: goto label_2f461c;
        case 0x2f4620u: goto label_2f4620;
        case 0x2f4624u: goto label_2f4624;
        case 0x2f4628u: goto label_2f4628;
        case 0x2f462cu: goto label_2f462c;
        case 0x2f4630u: goto label_2f4630;
        case 0x2f4634u: goto label_2f4634;
        case 0x2f4638u: goto label_2f4638;
        case 0x2f463cu: goto label_2f463c;
        case 0x2f4640u: goto label_2f4640;
        case 0x2f4644u: goto label_2f4644;
        case 0x2f4648u: goto label_2f4648;
        case 0x2f464cu: goto label_2f464c;
        case 0x2f4650u: goto label_2f4650;
        case 0x2f4654u: goto label_2f4654;
        case 0x2f4658u: goto label_2f4658;
        case 0x2f465cu: goto label_2f465c;
        case 0x2f4660u: goto label_2f4660;
        case 0x2f4664u: goto label_2f4664;
        case 0x2f4668u: goto label_2f4668;
        case 0x2f466cu: goto label_2f466c;
        case 0x2f4670u: goto label_2f4670;
        case 0x2f4674u: goto label_2f4674;
        case 0x2f4678u: goto label_2f4678;
        case 0x2f467cu: goto label_2f467c;
        case 0x2f4680u: goto label_2f4680;
        case 0x2f4684u: goto label_2f4684;
        case 0x2f4688u: goto label_2f4688;
        case 0x2f468cu: goto label_2f468c;
        case 0x2f4690u: goto label_2f4690;
        case 0x2f4694u: goto label_2f4694;
        case 0x2f4698u: goto label_2f4698;
        case 0x2f469cu: goto label_2f469c;
        case 0x2f46a0u: goto label_2f46a0;
        case 0x2f46a4u: goto label_2f46a4;
        case 0x2f46a8u: goto label_2f46a8;
        case 0x2f46acu: goto label_2f46ac;
        case 0x2f46b0u: goto label_2f46b0;
        case 0x2f46b4u: goto label_2f46b4;
        case 0x2f46b8u: goto label_2f46b8;
        case 0x2f46bcu: goto label_2f46bc;
        case 0x2f46c0u: goto label_2f46c0;
        case 0x2f46c4u: goto label_2f46c4;
        case 0x2f46c8u: goto label_2f46c8;
        case 0x2f46ccu: goto label_2f46cc;
        case 0x2f46d0u: goto label_2f46d0;
        case 0x2f46d4u: goto label_2f46d4;
        case 0x2f46d8u: goto label_2f46d8;
        case 0x2f46dcu: goto label_2f46dc;
        case 0x2f46e0u: goto label_2f46e0;
        case 0x2f46e4u: goto label_2f46e4;
        case 0x2f46e8u: goto label_2f46e8;
        case 0x2f46ecu: goto label_2f46ec;
        case 0x2f46f0u: goto label_2f46f0;
        case 0x2f46f4u: goto label_2f46f4;
        case 0x2f46f8u: goto label_2f46f8;
        case 0x2f46fcu: goto label_2f46fc;
        case 0x2f4700u: goto label_2f4700;
        case 0x2f4704u: goto label_2f4704;
        case 0x2f4708u: goto label_2f4708;
        case 0x2f470cu: goto label_2f470c;
        case 0x2f4710u: goto label_2f4710;
        case 0x2f4714u: goto label_2f4714;
        case 0x2f4718u: goto label_2f4718;
        case 0x2f471cu: goto label_2f471c;
        case 0x2f4720u: goto label_2f4720;
        case 0x2f4724u: goto label_2f4724;
        case 0x2f4728u: goto label_2f4728;
        case 0x2f472cu: goto label_2f472c;
        case 0x2f4730u: goto label_2f4730;
        case 0x2f4734u: goto label_2f4734;
        case 0x2f4738u: goto label_2f4738;
        case 0x2f473cu: goto label_2f473c;
        case 0x2f4740u: goto label_2f4740;
        case 0x2f4744u: goto label_2f4744;
        case 0x2f4748u: goto label_2f4748;
        case 0x2f474cu: goto label_2f474c;
        case 0x2f4750u: goto label_2f4750;
        case 0x2f4754u: goto label_2f4754;
        case 0x2f4758u: goto label_2f4758;
        case 0x2f475cu: goto label_2f475c;
        case 0x2f4760u: goto label_2f4760;
        case 0x2f4764u: goto label_2f4764;
        case 0x2f4768u: goto label_2f4768;
        case 0x2f476cu: goto label_2f476c;
        case 0x2f4770u: goto label_2f4770;
        case 0x2f4774u: goto label_2f4774;
        case 0x2f4778u: goto label_2f4778;
        case 0x2f477cu: goto label_2f477c;
        case 0x2f4780u: goto label_2f4780;
        case 0x2f4784u: goto label_2f4784;
        case 0x2f4788u: goto label_2f4788;
        case 0x2f478cu: goto label_2f478c;
        case 0x2f4790u: goto label_2f4790;
        case 0x2f4794u: goto label_2f4794;
        case 0x2f4798u: goto label_2f4798;
        case 0x2f479cu: goto label_2f479c;
        case 0x2f47a0u: goto label_2f47a0;
        case 0x2f47a4u: goto label_2f47a4;
        case 0x2f47a8u: goto label_2f47a8;
        case 0x2f47acu: goto label_2f47ac;
        case 0x2f47b0u: goto label_2f47b0;
        case 0x2f47b4u: goto label_2f47b4;
        case 0x2f47b8u: goto label_2f47b8;
        case 0x2f47bcu: goto label_2f47bc;
        case 0x2f47c0u: goto label_2f47c0;
        case 0x2f47c4u: goto label_2f47c4;
        case 0x2f47c8u: goto label_2f47c8;
        case 0x2f47ccu: goto label_2f47cc;
        case 0x2f47d0u: goto label_2f47d0;
        case 0x2f47d4u: goto label_2f47d4;
        case 0x2f47d8u: goto label_2f47d8;
        case 0x2f47dcu: goto label_2f47dc;
        case 0x2f47e0u: goto label_2f47e0;
        case 0x2f47e4u: goto label_2f47e4;
        case 0x2f47e8u: goto label_2f47e8;
        case 0x2f47ecu: goto label_2f47ec;
        case 0x2f47f0u: goto label_2f47f0;
        case 0x2f47f4u: goto label_2f47f4;
        case 0x2f47f8u: goto label_2f47f8;
        case 0x2f47fcu: goto label_2f47fc;
        case 0x2f4800u: goto label_2f4800;
        case 0x2f4804u: goto label_2f4804;
        case 0x2f4808u: goto label_2f4808;
        case 0x2f480cu: goto label_2f480c;
        case 0x2f4810u: goto label_2f4810;
        case 0x2f4814u: goto label_2f4814;
        case 0x2f4818u: goto label_2f4818;
        case 0x2f481cu: goto label_2f481c;
        case 0x2f4820u: goto label_2f4820;
        case 0x2f4824u: goto label_2f4824;
        case 0x2f4828u: goto label_2f4828;
        case 0x2f482cu: goto label_2f482c;
        case 0x2f4830u: goto label_2f4830;
        case 0x2f4834u: goto label_2f4834;
        case 0x2f4838u: goto label_2f4838;
        case 0x2f483cu: goto label_2f483c;
        case 0x2f4840u: goto label_2f4840;
        case 0x2f4844u: goto label_2f4844;
        case 0x2f4848u: goto label_2f4848;
        case 0x2f484cu: goto label_2f484c;
        case 0x2f4850u: goto label_2f4850;
        case 0x2f4854u: goto label_2f4854;
        case 0x2f4858u: goto label_2f4858;
        case 0x2f485cu: goto label_2f485c;
        case 0x2f4860u: goto label_2f4860;
        case 0x2f4864u: goto label_2f4864;
        case 0x2f4868u: goto label_2f4868;
        case 0x2f486cu: goto label_2f486c;
        case 0x2f4870u: goto label_2f4870;
        case 0x2f4874u: goto label_2f4874;
        case 0x2f4878u: goto label_2f4878;
        case 0x2f487cu: goto label_2f487c;
        case 0x2f4880u: goto label_2f4880;
        case 0x2f4884u: goto label_2f4884;
        case 0x2f4888u: goto label_2f4888;
        case 0x2f488cu: goto label_2f488c;
        case 0x2f4890u: goto label_2f4890;
        case 0x2f4894u: goto label_2f4894;
        case 0x2f4898u: goto label_2f4898;
        case 0x2f489cu: goto label_2f489c;
        case 0x2f48a0u: goto label_2f48a0;
        case 0x2f48a4u: goto label_2f48a4;
        case 0x2f48a8u: goto label_2f48a8;
        case 0x2f48acu: goto label_2f48ac;
        default: break;
    }

    ctx->pc = 0x2f4190u;

label_2f4190:
    // 0x2f4190: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x2f4190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_2f4194:
    // 0x2f4194: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2f4194u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f4198:
    // 0x2f4198: 0x1067002f  beq         $v1, $a3, . + 4 + (0x2F << 2)
label_2f419c:
    if (ctx->pc == 0x2F419Cu) {
        ctx->pc = 0x2F419Cu;
            // 0x2f419c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F41A0u;
        goto label_2f41a0;
    }
    ctx->pc = 0x2F4198u;
    {
        const bool branch_taken_0x2f4198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x2F419Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4198u;
            // 0x2f419c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4198) {
            ctx->pc = 0x2F4258u;
            goto label_2f4258;
        }
    }
    ctx->pc = 0x2F41A0u;
label_2f41a0:
    // 0x2f41a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f41a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f41a4:
    // 0x2f41a4: 0x10670005  beq         $v1, $a3, . + 4 + (0x5 << 2)
label_2f41a8:
    if (ctx->pc == 0x2F41A8u) {
        ctx->pc = 0x2F41ACu;
        goto label_2f41ac;
    }
    ctx->pc = 0x2F41A4u;
    {
        const bool branch_taken_0x2f41a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x2f41a4) {
            ctx->pc = 0x2F41BCu;
            goto label_2f41bc;
        }
    }
    ctx->pc = 0x2F41ACu;
label_2f41ac:
    // 0x2f41ac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2f41b0:
    if (ctx->pc == 0x2F41B0u) {
        ctx->pc = 0x2F41B4u;
        goto label_2f41b4;
    }
    ctx->pc = 0x2F41ACu;
    {
        const bool branch_taken_0x2f41ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f41ac) {
            ctx->pc = 0x2F41BCu;
            goto label_2f41bc;
        }
    }
    ctx->pc = 0x2F41B4u;
label_2f41b4:
    // 0x2f41b4: 0x10000052  b           . + 4 + (0x52 << 2)
label_2f41b8:
    if (ctx->pc == 0x2F41B8u) {
        ctx->pc = 0x2F41BCu;
        goto label_2f41bc;
    }
    ctx->pc = 0x2F41B4u;
    {
        const bool branch_taken_0x2f41b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f41b4) {
            ctx->pc = 0x2F4300u;
            goto label_2f4300;
        }
    }
    ctx->pc = 0x2F41BCu;
label_2f41bc:
    // 0x2f41bc: 0x50800014  beql        $a0, $zero, . + 4 + (0x14 << 2)
label_2f41c0:
    if (ctx->pc == 0x2F41C0u) {
        ctx->pc = 0x2F41C0u;
            // 0x2f41c0: 0x30a400ff  andi        $a0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x2F41C4u;
        goto label_2f41c4;
    }
    ctx->pc = 0x2F41BCu;
    {
        const bool branch_taken_0x2f41bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f41bc) {
            ctx->pc = 0x2F41C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F41BCu;
            // 0x2f41c0: 0x30a400ff  andi        $a0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F4210u;
            goto label_2f4210;
        }
    }
    ctx->pc = 0x2F41C4u;
label_2f41c4:
    // 0x2f41c4: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2f41c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2f41c8:
    // 0x2f41c8: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2f41c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_2f41cc:
    // 0x2f41cc: 0x803826  xor         $a3, $a0, $zero
    ctx->pc = 0x2f41ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 0));
label_2f41d0:
    // 0x2f41d0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2f41d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2f41d4:
    // 0x2f41d4: 0x2ce70001  sltiu       $a3, $a3, 0x1
    ctx->pc = 0x2f41d4u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2f41d8:
    // 0x2f41d8: 0x3c040007  lui         $a0, 0x7
    ctx->pc = 0x2f41d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7 << 16));
label_2f41dc:
    // 0x2f41dc: 0x72940  sll         $a1, $a3, 5
    ctx->pc = 0x2f41dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_2f41e0:
    // 0x2f41e0: 0xa73023  subu        $a2, $a1, $a3
    ctx->pc = 0x2f41e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_2f41e4:
    // 0x2f41e4: 0x34857df9  ori         $a1, $a0, 0x7DF9
    ctx->pc = 0x2f41e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32249);
label_2f41e8:
    // 0x2f41e8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2f41e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2f41ec:
    // 0x2f41ec: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2f41ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2f41f0:
    // 0x2f41f0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2f41f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2f41f4:
    // 0x2f41f4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2f41f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2f41f8:
    // 0x2f41f8: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x2f41f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2f41fc:
    // 0x2f41fc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2f41fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2f4200:
    // 0x2f4200: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2f4200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2f4204:
    // 0x2f4204: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2f4204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2f4208:
    // 0x2f4208: 0x1000003d  b           . + 4 + (0x3D << 2)
label_2f420c:
    if (ctx->pc == 0x2F420Cu) {
        ctx->pc = 0x2F420Cu;
            // 0x2f420c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F4210u;
        goto label_2f4210;
    }
    ctx->pc = 0x2F4208u;
    {
        const bool branch_taken_0x2f4208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F420Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4208u;
            // 0x2f420c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4208) {
            ctx->pc = 0x2F4300u;
            goto label_2f4300;
        }
    }
    ctx->pc = 0x2F4210u;
label_2f4210:
    // 0x2f4210: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2f4210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_2f4214:
    // 0x2f4214: 0x803826  xor         $a3, $a0, $zero
    ctx->pc = 0x2f4214u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 0));
label_2f4218:
    // 0x2f4218: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2f4218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2f421c:
    // 0x2f421c: 0x2ce70001  sltiu       $a3, $a3, 0x1
    ctx->pc = 0x2f421cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2f4220:
    // 0x2f4220: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x2f4220u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
label_2f4224:
    // 0x2f4224: 0x72940  sll         $a1, $a3, 5
    ctx->pc = 0x2f4224u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_2f4228:
    // 0x2f4228: 0xa73023  subu        $a2, $a1, $a3
    ctx->pc = 0x2f4228u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_2f422c:
    // 0x2f422c: 0x3485d091  ori         $a1, $a0, 0xD091
    ctx->pc = 0x2f422cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53393);
label_2f4230:
    // 0x2f4230: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2f4230u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2f4234:
    // 0x2f4234: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2f4234u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2f4238:
    // 0x2f4238: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2f4238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2f423c:
    // 0x2f423c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2f423cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2f4240:
    // 0x2f4240: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x2f4240u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2f4244:
    // 0x2f4244: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2f4244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2f4248:
    // 0x2f4248: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2f4248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2f424c:
    // 0x2f424c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2f424cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2f4250:
    // 0x2f4250: 0x1000002b  b           . + 4 + (0x2B << 2)
label_2f4254:
    if (ctx->pc == 0x2F4254u) {
        ctx->pc = 0x2F4254u;
            // 0x2f4254: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F4258u;
        goto label_2f4258;
    }
    ctx->pc = 0x2F4250u;
    {
        const bool branch_taken_0x2f4250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4250u;
            // 0x2f4254: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4250) {
            ctx->pc = 0x2F4300u;
            goto label_2f4300;
        }
    }
    ctx->pc = 0x2F4258u;
label_2f4258:
    // 0x2f4258: 0x50800016  beql        $a0, $zero, . + 4 + (0x16 << 2)
label_2f425c:
    if (ctx->pc == 0x2F425Cu) {
        ctx->pc = 0x2F425Cu;
            // 0x2f425c: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x2F4260u;
        goto label_2f4260;
    }
    ctx->pc = 0x2F4258u;
    {
        const bool branch_taken_0x2f4258 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4258) {
            ctx->pc = 0x2F425Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4258u;
            // 0x2f425c: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F42B4u;
            goto label_2f42b4;
        }
    }
    ctx->pc = 0x2F4260u;
label_2f4260:
    // 0x2f4260: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2f4260u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2f4264:
    // 0x2f4264: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x2f4264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_2f4268:
    // 0x2f4268: 0xa03826  xor         $a3, $a1, $zero
    ctx->pc = 0x2f4268u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 0));
label_2f426c:
    // 0x2f426c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x2f426cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2f4270:
    // 0x2f4270: 0x2ce70001  sltiu       $a3, $a3, 0x1
    ctx->pc = 0x2f4270u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2f4274:
    // 0x2f4274: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2f4274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_2f4278:
    // 0x2f4278: 0x71940  sll         $v1, $a3, 5
    ctx->pc = 0x2f4278u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_2f427c:
    // 0x2f427c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2f427cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2f4280:
    // 0x2f4280: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x2f4280u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2f4284:
    // 0x2f4284: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x2f4284u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2f4288:
    // 0x2f4288: 0xa73021  addu        $a2, $a1, $a3
    ctx->pc = 0x2f4288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_2f428c:
    // 0x2f428c: 0x3c030007  lui         $v1, 0x7
    ctx->pc = 0x2f428cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7 << 16));
label_2f4290:
    // 0x2f4290: 0x34657df9  ori         $a1, $v1, 0x7DF9
    ctx->pc = 0x2f4290u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32249);
label_2f4294:
    // 0x2f4294: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x2f4294u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2f4298:
    // 0x2f4298: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2f4298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2f429c:
    // 0x2f429c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2f429cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_2f42a0:
    // 0x2f42a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f42a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2f42a4:
    // 0x2f42a4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2f42a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2f42a8:
    // 0x2f42a8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2f42a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2f42ac:
    // 0x2f42ac: 0x10000014  b           . + 4 + (0x14 << 2)
label_2f42b0:
    if (ctx->pc == 0x2F42B0u) {
        ctx->pc = 0x2F42B0u;
            // 0x2f42b0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2F42B4u;
        goto label_2f42b4;
    }
    ctx->pc = 0x2F42ACu;
    {
        const bool branch_taken_0x2f42ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F42B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F42ACu;
            // 0x2f42b0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f42ac) {
            ctx->pc = 0x2F4300u;
            goto label_2f4300;
        }
    }
    ctx->pc = 0x2F42B4u;
label_2f42b4:
    // 0x2f42b4: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x2f42b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_2f42b8:
    // 0x2f42b8: 0xa03826  xor         $a3, $a1, $zero
    ctx->pc = 0x2f42b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 0));
label_2f42bc:
    // 0x2f42bc: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x2f42bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2f42c0:
    // 0x2f42c0: 0x2ce70001  sltiu       $a3, $a3, 0x1
    ctx->pc = 0x2f42c0u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2f42c4:
    // 0x2f42c4: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2f42c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_2f42c8:
    // 0x2f42c8: 0x71940  sll         $v1, $a3, 5
    ctx->pc = 0x2f42c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_2f42cc:
    // 0x2f42cc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2f42ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2f42d0:
    // 0x2f42d0: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x2f42d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2f42d4:
    // 0x2f42d4: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x2f42d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2f42d8:
    // 0x2f42d8: 0xa73021  addu        $a2, $a1, $a3
    ctx->pc = 0x2f42d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_2f42dc:
    // 0x2f42dc: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x2f42dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
label_2f42e0:
    // 0x2f42e0: 0x3465d091  ori         $a1, $v1, 0xD091
    ctx->pc = 0x2f42e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53393);
label_2f42e4:
    // 0x2f42e4: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x2f42e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2f42e8:
    // 0x2f42e8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2f42e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2f42ec:
    // 0x2f42ec: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2f42ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_2f42f0:
    // 0x2f42f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f42f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2f42f4:
    // 0x2f42f4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2f42f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2f42f8:
    // 0x2f42f8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2f42f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2f42fc:
    // 0x2f42fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f42fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f4300:
    // 0x2f4300: 0x3e00008  jr          $ra
label_2f4304:
    if (ctx->pc == 0x2F4304u) {
        ctx->pc = 0x2F4308u;
        goto label_2f4308;
    }
    ctx->pc = 0x2F4300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F4308u;
label_2f4308:
    // 0x2f4308: 0x0  nop
    ctx->pc = 0x2f4308u;
    // NOP
label_2f430c:
    // 0x2f430c: 0x0  nop
    ctx->pc = 0x2f430cu;
    // NOP
label_2f4310:
    // 0x2f4310: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f4310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2f4314:
    // 0x2f4314: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x2f4314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_2f4318:
    // 0x2f4318: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f4318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2f431c:
    // 0x2f431c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f431cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2f4320:
    // 0x2f4320: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f4320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2f4324:
    // 0x2f4324: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f4324u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f4328:
    // 0x2f4328: 0x90840055  lbu         $a0, 0x55($a0)
    ctx->pc = 0x2f4328u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 85)));
label_2f432c:
    // 0x2f432c: 0x2c81000a  sltiu       $at, $a0, 0xA
    ctx->pc = 0x2f432cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_2f4330:
    // 0x2f4330: 0x102000a3  beqz        $at, . + 4 + (0xA3 << 2)
label_2f4334:
    if (ctx->pc == 0x2F4334u) {
        ctx->pc = 0x2F4334u;
            // 0x2f4334: 0x8c7089f0  lw          $s0, -0x7610($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
        ctx->pc = 0x2F4338u;
        goto label_2f4338;
    }
    ctx->pc = 0x2F4330u;
    {
        const bool branch_taken_0x2f4330 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4330u;
            // 0x2f4334: 0x8c7089f0  lw          $s0, -0x7610($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4330) {
            ctx->pc = 0x2F45C0u;
            goto label_2f45c0;
        }
    }
    ctx->pc = 0x2F4338u;
label_2f4338:
    // 0x2f4338: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2f4338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2f433c:
    // 0x2f433c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2f433cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_2f4340:
    // 0x2f4340: 0x24842200  addiu       $a0, $a0, 0x2200
    ctx->pc = 0x2f4340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8704));
label_2f4344:
    // 0x2f4344: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f4344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2f4348:
    // 0x2f4348: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2f4348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f434c:
    // 0x2f434c: 0x600008  jr          $v1
label_2f4350:
    if (ctx->pc == 0x2F4350u) {
        ctx->pc = 0x2F4354u;
        goto label_2f4354;
    }
    ctx->pc = 0x2F434Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F4354u: goto label_2f4354;
            case 0x2F4364u: goto label_2f4364;
            case 0x2F43D0u: goto label_2f43d0;
            case 0x2F43F8u: goto label_2f43f8;
            case 0x2F443Cu: goto label_2f443c;
            case 0x2F4490u: goto label_2f4490;
            case 0x2F44E8u: goto label_2f44e8;
            case 0x2F4528u: goto label_2f4528;
            case 0x2F4568u: goto label_2f4568;
            case 0x2F45A4u: goto label_2f45a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F4354u;
label_2f4354:
    // 0x2f4354: 0xc05068c  jal         func_141A30
label_2f4358:
    if (ctx->pc == 0x2F4358u) {
        ctx->pc = 0x2F4358u;
            // 0x2f4358: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F435Cu;
        goto label_2f435c;
    }
    ctx->pc = 0x2F4354u;
    SET_GPR_U32(ctx, 31, 0x2F435Cu);
    ctx->pc = 0x2F4358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4354u;
            // 0x2f4358: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F435Cu; }
        if (ctx->pc != 0x2F435Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F435Cu; }
        if (ctx->pc != 0x2F435Cu) { return; }
    }
    ctx->pc = 0x2F435Cu;
label_2f435c:
    // 0x2f435c: 0x10000099  b           . + 4 + (0x99 << 2)
label_2f4360:
    if (ctx->pc == 0x2F4360u) {
        ctx->pc = 0x2F4360u;
            // 0x2f4360: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x2F4364u;
        goto label_2f4364;
    }
    ctx->pc = 0x2F435Cu;
    {
        const bool branch_taken_0x2f435c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F435Cu;
            // 0x2f4360: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f435c) {
            ctx->pc = 0x2F45C4u;
            goto label_2f45c4;
        }
    }
    ctx->pc = 0x2F4364u;
label_2f4364:
    // 0x2f4364: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x2f4364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_2f4368:
    // 0x2f4368: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x2f4368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_2f436c:
    // 0x2f436c: 0x8c63d130  lw          $v1, -0x2ED0($v1)
    ctx->pc = 0x2f436cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_2f4370:
    // 0x2f4370: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2f4370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_2f4374:
    // 0x2f4374: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x2f4374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_2f4378:
    // 0x2f4378: 0x24841d50  addiu       $a0, $a0, 0x1D50
    ctx->pc = 0x2f4378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7504));
label_2f437c:
    // 0x2f437c: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x2f437cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_2f4380:
    // 0x2f4380: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2f4380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2f4384:
    // 0x2f4384: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2f4384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2f4388:
    // 0x2f4388: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f438c:
    // 0x2f438c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2f438cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f4390:
    // 0x2f4390: 0xc04ccf4  jal         func_1333D0
label_2f4394:
    if (ctx->pc == 0x2F4394u) {
        ctx->pc = 0x2F4394u;
            // 0x2f4394: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x2F4398u;
        goto label_2f4398;
    }
    ctx->pc = 0x2F4390u;
    SET_GPR_U32(ctx, 31, 0x2F4398u);
    ctx->pc = 0x2F4394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4390u;
            // 0x2f4394: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4398u; }
        if (ctx->pc != 0x2F4398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4398u; }
        if (ctx->pc != 0x2F4398u) { return; }
    }
    ctx->pc = 0x2F4398u;
label_2f4398:
    // 0x2f4398: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2f4398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2f439c:
    // 0x2f439c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2f439cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_2f43a0:
    // 0x2f43a0: 0xac401d84  sw          $zero, 0x1D84($v0)
    ctx->pc = 0x2f43a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7556), GPR_U32(ctx, 0));
label_2f43a4:
    // 0x2f43a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2f43a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2f43a8:
    // 0x2f43a8: 0xac601d88  sw          $zero, 0x1D88($v1)
    ctx->pc = 0x2f43a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7560), GPR_U32(ctx, 0));
label_2f43ac:
    // 0x2f43ac: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x2f43acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_2f43b0:
    // 0x2f43b0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2f43b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_2f43b4:
    // 0x2f43b4: 0xac601d80  sw          $zero, 0x1D80($v1)
    ctx->pc = 0x2f43b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7552), GPR_U32(ctx, 0));
label_2f43b8:
    // 0x2f43b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f43b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f43bc:
    // 0x2f43bc: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x2f43bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_2f43c0:
    // 0x2f43c0: 0x320f809  jalr        $t9
label_2f43c4:
    if (ctx->pc == 0x2F43C4u) {
        ctx->pc = 0x2F43C8u;
        goto label_2f43c8;
    }
    ctx->pc = 0x2F43C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F43C8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F43C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F43C8u; }
            if (ctx->pc != 0x2F43C8u) { return; }
        }
        }
    }
    ctx->pc = 0x2F43C8u;
label_2f43c8:
    // 0x2f43c8: 0x1000007d  b           . + 4 + (0x7D << 2)
label_2f43cc:
    if (ctx->pc == 0x2F43CCu) {
        ctx->pc = 0x2F43D0u;
        goto label_2f43d0;
    }
    ctx->pc = 0x2F43C8u;
    {
        const bool branch_taken_0x2f43c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f43c8) {
            ctx->pc = 0x2F45C0u;
            goto label_2f45c0;
        }
    }
    ctx->pc = 0x2F43D0u;
label_2f43d0:
    // 0x2f43d0: 0xc05068c  jal         func_141A30
label_2f43d4:
    if (ctx->pc == 0x2F43D4u) {
        ctx->pc = 0x2F43D4u;
            // 0x2f43d4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2F43D8u;
        goto label_2f43d8;
    }
    ctx->pc = 0x2F43D0u;
    SET_GPR_U32(ctx, 31, 0x2F43D8u);
    ctx->pc = 0x2F43D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F43D0u;
            // 0x2f43d4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F43D8u; }
        if (ctx->pc != 0x2F43D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F43D8u; }
        if (ctx->pc != 0x2F43D8u) { return; }
    }
    ctx->pc = 0x2F43D8u;
label_2f43d8:
    // 0x2f43d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2f43d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2f43dc:
    // 0x2f43dc: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x2f43dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_2f43e0:
    // 0x2f43e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f43e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f43e4:
    // 0x2f43e4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2f43e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2f43e8:
    // 0x2f43e8: 0x320f809  jalr        $t9
label_2f43ec:
    if (ctx->pc == 0x2F43ECu) {
        ctx->pc = 0x2F43F0u;
        goto label_2f43f0;
    }
    ctx->pc = 0x2F43E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F43F0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F43F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F43F0u; }
            if (ctx->pc != 0x2F43F0u) { return; }
        }
        }
    }
    ctx->pc = 0x2F43F0u;
label_2f43f0:
    // 0x2f43f0: 0x10000073  b           . + 4 + (0x73 << 2)
label_2f43f4:
    if (ctx->pc == 0x2F43F4u) {
        ctx->pc = 0x2F43F8u;
        goto label_2f43f8;
    }
    ctx->pc = 0x2F43F0u;
    {
        const bool branch_taken_0x2f43f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f43f0) {
            ctx->pc = 0x2F45C0u;
            goto label_2f45c0;
        }
    }
    ctx->pc = 0x2F43F8u;
label_2f43f8:
    // 0x2f43f8: 0x92240054  lbu         $a0, 0x54($s1)
    ctx->pc = 0x2f43f8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 84)));
label_2f43fc:
    // 0x2f43fc: 0x92250057  lbu         $a1, 0x57($s1)
    ctx->pc = 0x2f43fcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 87)));
label_2f4400:
    // 0x2f4400: 0x92260056  lbu         $a2, 0x56($s1)
    ctx->pc = 0x2f4400u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 86)));
label_2f4404:
    // 0x2f4404: 0x92270058  lbu         $a3, 0x58($s1)
    ctx->pc = 0x2f4404u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 88)));
label_2f4408:
    // 0x2f4408: 0xc0bb678  jal         func_2ED9E0
label_2f440c:
    if (ctx->pc == 0x2F440Cu) {
        ctx->pc = 0x2F440Cu;
            // 0x2f440c: 0x9228005a  lbu         $t0, 0x5A($s1) (Delay Slot)
        SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 90)));
        ctx->pc = 0x2F4410u;
        goto label_2f4410;
    }
    ctx->pc = 0x2F4408u;
    SET_GPR_U32(ctx, 31, 0x2F4410u);
    ctx->pc = 0x2F440Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4408u;
            // 0x2f440c: 0x9228005a  lbu         $t0, 0x5A($s1) (Delay Slot)
        SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 90)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED9E0u;
    if (runtime->hasFunction(0x2ED9E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4410u; }
        if (ctx->pc != 0x2F4410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED9E0_0x2ed9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4410u; }
        if (ctx->pc != 0x2F4410u) { return; }
    }
    ctx->pc = 0x2F4410u;
label_2f4410:
    // 0x2f4410: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2f4414:
    if (ctx->pc == 0x2F4414u) {
        ctx->pc = 0x2F4414u;
            // 0x2f4414: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x2F4418u;
        goto label_2f4418;
    }
    ctx->pc = 0x2F4410u;
    {
        const bool branch_taken_0x2f4410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4410) {
            ctx->pc = 0x2F4414u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4410u;
            // 0x2f4414: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F4424u;
            goto label_2f4424;
        }
    }
    ctx->pc = 0x2F4418u;
label_2f4418:
    // 0x2f4418: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2f4418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2f441c:
    // 0x2f441c: 0x10000068  b           . + 4 + (0x68 << 2)
label_2f4420:
    if (ctx->pc == 0x2F4420u) {
        ctx->pc = 0x2F4420u;
            // 0x2f4420: 0xa2230055  sb          $v1, 0x55($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2F4424u;
        goto label_2f4424;
    }
    ctx->pc = 0x2F441Cu;
    {
        const bool branch_taken_0x2f441c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F441Cu;
            // 0x2f4420: 0xa2230055  sb          $v1, 0x55($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f441c) {
            ctx->pc = 0x2F45C0u;
            goto label_2f45c0;
        }
    }
    ctx->pc = 0x2F4424u;
label_2f4424:
    // 0x2f4424: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f4428:
    // 0x2f4428: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x2f4428u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_2f442c:
    // 0x2f442c: 0x320f809  jalr        $t9
label_2f4430:
    if (ctx->pc == 0x2F4430u) {
        ctx->pc = 0x2F4430u;
            // 0x2f4430: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2F4434u;
        goto label_2f4434;
    }
    ctx->pc = 0x2F442Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F4434u);
        ctx->pc = 0x2F4430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F442Cu;
            // 0x2f4430: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F4434u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F4434u; }
            if (ctx->pc != 0x2F4434u) { return; }
        }
        }
    }
    ctx->pc = 0x2F4434u;
label_2f4434:
    // 0x2f4434: 0x10000062  b           . + 4 + (0x62 << 2)
label_2f4438:
    if (ctx->pc == 0x2F4438u) {
        ctx->pc = 0x2F443Cu;
        goto label_2f443c;
    }
    ctx->pc = 0x2F4434u;
    {
        const bool branch_taken_0x2f4434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4434) {
            ctx->pc = 0x2F45C0u;
            goto label_2f45c0;
        }
    }
    ctx->pc = 0x2F443Cu;
label_2f443c:
    // 0x2f443c: 0x92240054  lbu         $a0, 0x54($s1)
    ctx->pc = 0x2f443cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 84)));
label_2f4440:
    // 0x2f4440: 0x92250057  lbu         $a1, 0x57($s1)
    ctx->pc = 0x2f4440u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 87)));
label_2f4444:
    // 0x2f4444: 0x92260056  lbu         $a2, 0x56($s1)
    ctx->pc = 0x2f4444u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 86)));
label_2f4448:
    // 0x2f4448: 0x92270058  lbu         $a3, 0x58($s1)
    ctx->pc = 0x2f4448u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 88)));
label_2f444c:
    // 0x2f444c: 0xc0bb678  jal         func_2ED9E0
label_2f4450:
    if (ctx->pc == 0x2F4450u) {
        ctx->pc = 0x2F4450u;
            // 0x2f4450: 0x9228005a  lbu         $t0, 0x5A($s1) (Delay Slot)
        SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 90)));
        ctx->pc = 0x2F4454u;
        goto label_2f4454;
    }
    ctx->pc = 0x2F444Cu;
    SET_GPR_U32(ctx, 31, 0x2F4454u);
    ctx->pc = 0x2F4450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F444Cu;
            // 0x2f4450: 0x9228005a  lbu         $t0, 0x5A($s1) (Delay Slot)
        SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 90)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED9E0u;
    if (runtime->hasFunction(0x2ED9E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4454u; }
        if (ctx->pc != 0x2F4454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED9E0_0x2ed9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4454u; }
        if (ctx->pc != 0x2F4454u) { return; }
    }
    ctx->pc = 0x2F4454u;
label_2f4454:
    // 0x2f4454: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2f4458:
    if (ctx->pc == 0x2F4458u) {
        ctx->pc = 0x2F4458u;
            // 0x2f4458: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x2F445Cu;
        goto label_2f445c;
    }
    ctx->pc = 0x2F4454u;
    {
        const bool branch_taken_0x2f4454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4454) {
            ctx->pc = 0x2F4458u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4454u;
            // 0x2f4458: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F4468u;
            goto label_2f4468;
        }
    }
    ctx->pc = 0x2F445Cu;
label_2f445c:
    // 0x2f445c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2f445cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2f4460:
    // 0x2f4460: 0x10000057  b           . + 4 + (0x57 << 2)
label_2f4464:
    if (ctx->pc == 0x2F4464u) {
        ctx->pc = 0x2F4464u;
            // 0x2f4464: 0xa2230055  sb          $v1, 0x55($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2F4468u;
        goto label_2f4468;
    }
    ctx->pc = 0x2F4460u;
    {
        const bool branch_taken_0x2f4460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4460u;
            // 0x2f4464: 0xa2230055  sb          $v1, 0x55($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4460) {
            ctx->pc = 0x2F45C0u;
            goto label_2f45c0;
        }
    }
    ctx->pc = 0x2F4468u;
label_2f4468:
    // 0x2f4468: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x2f4468u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_2f446c:
    // 0x2f446c: 0x320f809  jalr        $t9
label_2f4470:
    if (ctx->pc == 0x2F4470u) {
        ctx->pc = 0x2F4470u;
            // 0x2f4470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F4474u;
        goto label_2f4474;
    }
    ctx->pc = 0x2F446Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F4474u);
        ctx->pc = 0x2F4470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F446Cu;
            // 0x2f4470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F4474u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F4474u; }
            if (ctx->pc != 0x2F4474u) { return; }
        }
        }
    }
    ctx->pc = 0x2F4474u;
label_2f4474:
    // 0x2f4474: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2f4474u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f4478:
    // 0x2f4478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f447c:
    // 0x2f447c: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x2f447cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_2f4480:
    // 0x2f4480: 0x320f809  jalr        $t9
label_2f4484:
    if (ctx->pc == 0x2F4484u) {
        ctx->pc = 0x2F4484u;
            // 0x2f4484: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F4488u;
        goto label_2f4488;
    }
    ctx->pc = 0x2F4480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F4488u);
        ctx->pc = 0x2F4484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4480u;
            // 0x2f4484: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F4488u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F4488u; }
            if (ctx->pc != 0x2F4488u) { return; }
        }
        }
    }
    ctx->pc = 0x2F4488u;
label_2f4488:
    // 0x2f4488: 0x1000004d  b           . + 4 + (0x4D << 2)
label_2f448c:
    if (ctx->pc == 0x2F448Cu) {
        ctx->pc = 0x2F4490u;
        goto label_2f4490;
    }
    ctx->pc = 0x2F4488u;
    {
        const bool branch_taken_0x2f4488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4488) {
            ctx->pc = 0x2F45C0u;
            goto label_2f45c0;
        }
    }
    ctx->pc = 0x2F4490u;
label_2f4490:
    // 0x2f4490: 0x92240054  lbu         $a0, 0x54($s1)
    ctx->pc = 0x2f4490u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 84)));
label_2f4494:
    // 0x2f4494: 0x92250057  lbu         $a1, 0x57($s1)
    ctx->pc = 0x2f4494u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 87)));
label_2f4498:
    // 0x2f4498: 0x92260056  lbu         $a2, 0x56($s1)
    ctx->pc = 0x2f4498u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 86)));
label_2f449c:
    // 0x2f449c: 0x92270058  lbu         $a3, 0x58($s1)
    ctx->pc = 0x2f449cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 88)));
label_2f44a0:
    // 0x2f44a0: 0xc0bb678  jal         func_2ED9E0
label_2f44a4:
    if (ctx->pc == 0x2F44A4u) {
        ctx->pc = 0x2F44A4u;
            // 0x2f44a4: 0x9228005a  lbu         $t0, 0x5A($s1) (Delay Slot)
        SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 90)));
        ctx->pc = 0x2F44A8u;
        goto label_2f44a8;
    }
    ctx->pc = 0x2F44A0u;
    SET_GPR_U32(ctx, 31, 0x2F44A8u);
    ctx->pc = 0x2F44A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F44A0u;
            // 0x2f44a4: 0x9228005a  lbu         $t0, 0x5A($s1) (Delay Slot)
        SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 90)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED9E0u;
    if (runtime->hasFunction(0x2ED9E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F44A8u; }
        if (ctx->pc != 0x2F44A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED9E0_0x2ed9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F44A8u; }
        if (ctx->pc != 0x2F44A8u) { return; }
    }
    ctx->pc = 0x2F44A8u;
label_2f44a8:
    // 0x2f44a8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2f44ac:
    if (ctx->pc == 0x2F44ACu) {
        ctx->pc = 0x2F44ACu;
            // 0x2f44ac: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x2F44B0u;
        goto label_2f44b0;
    }
    ctx->pc = 0x2F44A8u;
    {
        const bool branch_taken_0x2f44a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f44a8) {
            ctx->pc = 0x2F44ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F44A8u;
            // 0x2f44ac: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F44BCu;
            goto label_2f44bc;
        }
    }
    ctx->pc = 0x2F44B0u;
label_2f44b0:
    // 0x2f44b0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2f44b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2f44b4:
    // 0x2f44b4: 0x10000042  b           . + 4 + (0x42 << 2)
label_2f44b8:
    if (ctx->pc == 0x2F44B8u) {
        ctx->pc = 0x2F44B8u;
            // 0x2f44b8: 0xa2230055  sb          $v1, 0x55($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2F44BCu;
        goto label_2f44bc;
    }
    ctx->pc = 0x2F44B4u;
    {
        const bool branch_taken_0x2f44b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F44B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F44B4u;
            // 0x2f44b8: 0xa2230055  sb          $v1, 0x55($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f44b4) {
            ctx->pc = 0x2F45C0u;
            goto label_2f45c0;
        }
    }
    ctx->pc = 0x2F44BCu;
label_2f44bc:
    // 0x2f44bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f44bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f44c0:
    // 0x2f44c0: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x2f44c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_2f44c4:
    // 0x2f44c4: 0x320f809  jalr        $t9
label_2f44c8:
    if (ctx->pc == 0x2F44C8u) {
        ctx->pc = 0x2F44C8u;
            // 0x2f44c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2F44CCu;
        goto label_2f44cc;
    }
    ctx->pc = 0x2F44C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F44CCu);
        ctx->pc = 0x2F44C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F44C4u;
            // 0x2f44c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F44CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F44CCu; }
            if (ctx->pc != 0x2F44CCu) { return; }
        }
        }
    }
    ctx->pc = 0x2F44CCu;
label_2f44cc:
    // 0x2f44cc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2f44ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f44d0:
    // 0x2f44d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f44d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f44d4:
    // 0x2f44d4: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x2f44d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_2f44d8:
    // 0x2f44d8: 0x320f809  jalr        $t9
label_2f44dc:
    if (ctx->pc == 0x2F44DCu) {
        ctx->pc = 0x2F44DCu;
            // 0x2f44dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F44E0u;
        goto label_2f44e0;
    }
    ctx->pc = 0x2F44D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F44E0u);
        ctx->pc = 0x2F44DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F44D8u;
            // 0x2f44dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F44E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F44E0u; }
            if (ctx->pc != 0x2F44E0u) { return; }
        }
        }
    }
    ctx->pc = 0x2F44E0u;
label_2f44e0:
    // 0x2f44e0: 0x10000037  b           . + 4 + (0x37 << 2)
label_2f44e4:
    if (ctx->pc == 0x2F44E4u) {
        ctx->pc = 0x2F44E8u;
        goto label_2f44e8;
    }
    ctx->pc = 0x2F44E0u;
    {
        const bool branch_taken_0x2f44e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f44e0) {
            ctx->pc = 0x2F45C0u;
            goto label_2f45c0;
        }
    }
    ctx->pc = 0x2F44E8u;
label_2f44e8:
    // 0x2f44e8: 0x92240054  lbu         $a0, 0x54($s1)
    ctx->pc = 0x2f44e8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 84)));
label_2f44ec:
    // 0x2f44ec: 0x92250057  lbu         $a1, 0x57($s1)
    ctx->pc = 0x2f44ecu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 87)));
label_2f44f0:
    // 0x2f44f0: 0x92260056  lbu         $a2, 0x56($s1)
    ctx->pc = 0x2f44f0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 86)));
label_2f44f4:
    // 0x2f44f4: 0x92270058  lbu         $a3, 0x58($s1)
    ctx->pc = 0x2f44f4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 88)));
label_2f44f8:
    // 0x2f44f8: 0xc0bb678  jal         func_2ED9E0
label_2f44fc:
    if (ctx->pc == 0x2F44FCu) {
        ctx->pc = 0x2F44FCu;
            // 0x2f44fc: 0x9228005a  lbu         $t0, 0x5A($s1) (Delay Slot)
        SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 90)));
        ctx->pc = 0x2F4500u;
        goto label_2f4500;
    }
    ctx->pc = 0x2F44F8u;
    SET_GPR_U32(ctx, 31, 0x2F4500u);
    ctx->pc = 0x2F44FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F44F8u;
            // 0x2f44fc: 0x9228005a  lbu         $t0, 0x5A($s1) (Delay Slot)
        SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 90)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED9E0u;
    if (runtime->hasFunction(0x2ED9E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4500u; }
        if (ctx->pc != 0x2F4500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED9E0_0x2ed9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4500u; }
        if (ctx->pc != 0x2F4500u) { return; }
    }
    ctx->pc = 0x2F4500u;
label_2f4500:
    // 0x2f4500: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2f4504:
    if (ctx->pc == 0x2F4504u) {
        ctx->pc = 0x2F4504u;
            // 0x2f4504: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x2F4508u;
        goto label_2f4508;
    }
    ctx->pc = 0x2F4500u;
    {
        const bool branch_taken_0x2f4500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4500) {
            ctx->pc = 0x2F4504u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4500u;
            // 0x2f4504: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F4514u;
            goto label_2f4514;
        }
    }
    ctx->pc = 0x2F4508u;
label_2f4508:
    // 0x2f4508: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2f4508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2f450c:
    // 0x2f450c: 0x1000002c  b           . + 4 + (0x2C << 2)
label_2f4510:
    if (ctx->pc == 0x2F4510u) {
        ctx->pc = 0x2F4510u;
            // 0x2f4510: 0xa2230055  sb          $v1, 0x55($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2F4514u;
        goto label_2f4514;
    }
    ctx->pc = 0x2F450Cu;
    {
        const bool branch_taken_0x2f450c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F450Cu;
            // 0x2f4510: 0xa2230055  sb          $v1, 0x55($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f450c) {
            ctx->pc = 0x2F45C0u;
            goto label_2f45c0;
        }
    }
    ctx->pc = 0x2F4514u;
label_2f4514:
    // 0x2f4514: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x2f4514u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_2f4518:
    // 0x2f4518: 0x320f809  jalr        $t9
label_2f451c:
    if (ctx->pc == 0x2F451Cu) {
        ctx->pc = 0x2F451Cu;
            // 0x2f451c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F4520u;
        goto label_2f4520;
    }
    ctx->pc = 0x2F4518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F4520u);
        ctx->pc = 0x2F451Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4518u;
            // 0x2f451c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F4520u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F4520u; }
            if (ctx->pc != 0x2F4520u) { return; }
        }
        }
    }
    ctx->pc = 0x2F4520u;
label_2f4520:
    // 0x2f4520: 0x10000027  b           . + 4 + (0x27 << 2)
label_2f4524:
    if (ctx->pc == 0x2F4524u) {
        ctx->pc = 0x2F4528u;
        goto label_2f4528;
    }
    ctx->pc = 0x2F4520u;
    {
        const bool branch_taken_0x2f4520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4520) {
            ctx->pc = 0x2F45C0u;
            goto label_2f45c0;
        }
    }
    ctx->pc = 0x2F4528u;
label_2f4528:
    // 0x2f4528: 0x92240054  lbu         $a0, 0x54($s1)
    ctx->pc = 0x2f4528u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 84)));
label_2f452c:
    // 0x2f452c: 0x92250057  lbu         $a1, 0x57($s1)
    ctx->pc = 0x2f452cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 87)));
label_2f4530:
    // 0x2f4530: 0x92260056  lbu         $a2, 0x56($s1)
    ctx->pc = 0x2f4530u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 86)));
label_2f4534:
    // 0x2f4534: 0x92270058  lbu         $a3, 0x58($s1)
    ctx->pc = 0x2f4534u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 88)));
label_2f4538:
    // 0x2f4538: 0xc0bb678  jal         func_2ED9E0
label_2f453c:
    if (ctx->pc == 0x2F453Cu) {
        ctx->pc = 0x2F453Cu;
            // 0x2f453c: 0x9228005a  lbu         $t0, 0x5A($s1) (Delay Slot)
        SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 90)));
        ctx->pc = 0x2F4540u;
        goto label_2f4540;
    }
    ctx->pc = 0x2F4538u;
    SET_GPR_U32(ctx, 31, 0x2F4540u);
    ctx->pc = 0x2F453Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4538u;
            // 0x2f453c: 0x9228005a  lbu         $t0, 0x5A($s1) (Delay Slot)
        SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 90)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED9E0u;
    if (runtime->hasFunction(0x2ED9E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4540u; }
        if (ctx->pc != 0x2F4540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED9E0_0x2ed9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4540u; }
        if (ctx->pc != 0x2F4540u) { return; }
    }
    ctx->pc = 0x2F4540u;
label_2f4540:
    // 0x2f4540: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2f4544:
    if (ctx->pc == 0x2F4544u) {
        ctx->pc = 0x2F4548u;
        goto label_2f4548;
    }
    ctx->pc = 0x2F4540u;
    {
        const bool branch_taken_0x2f4540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4540) {
            ctx->pc = 0x2F4554u;
            goto label_2f4554;
        }
    }
    ctx->pc = 0x2F4548u;
label_2f4548:
    // 0x2f4548: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2f4548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2f454c:
    // 0x2f454c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_2f4550:
    if (ctx->pc == 0x2F4550u) {
        ctx->pc = 0x2F4550u;
            // 0x2f4550: 0xa2230055  sb          $v1, 0x55($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2F4554u;
        goto label_2f4554;
    }
    ctx->pc = 0x2F454Cu;
    {
        const bool branch_taken_0x2f454c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F454Cu;
            // 0x2f4550: 0xa2230055  sb          $v1, 0x55($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f454c) {
            ctx->pc = 0x2F45C0u;
            goto label_2f45c0;
        }
    }
    ctx->pc = 0x2F4554u;
label_2f4554:
    // 0x2f4554: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2f4554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_2f4558:
    // 0x2f4558: 0xc0508b0  jal         func_1422C0
label_2f455c:
    if (ctx->pc == 0x2F455Cu) {
        ctx->pc = 0x2F455Cu;
            // 0x2f455c: 0x24842250  addiu       $a0, $a0, 0x2250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8784));
        ctx->pc = 0x2F4560u;
        goto label_2f4560;
    }
    ctx->pc = 0x2F4558u;
    SET_GPR_U32(ctx, 31, 0x2F4560u);
    ctx->pc = 0x2F455Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4558u;
            // 0x2f455c: 0x24842250  addiu       $a0, $a0, 0x2250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422C0u;
    if (runtime->hasFunction(0x1422C0u)) {
        auto targetFn = runtime->lookupFunction(0x1422C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4560u; }
        if (ctx->pc != 0x2F4560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422C0_0x1422c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4560u; }
        if (ctx->pc != 0x2F4560u) { return; }
    }
    ctx->pc = 0x2F4560u;
label_2f4560:
    // 0x2f4560: 0x10000017  b           . + 4 + (0x17 << 2)
label_2f4564:
    if (ctx->pc == 0x2F4564u) {
        ctx->pc = 0x2F4568u;
        goto label_2f4568;
    }
    ctx->pc = 0x2F4560u;
    {
        const bool branch_taken_0x2f4560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4560) {
            ctx->pc = 0x2F45C0u;
            goto label_2f45c0;
        }
    }
    ctx->pc = 0x2F4568u;
label_2f4568:
    // 0x2f4568: 0x92240054  lbu         $a0, 0x54($s1)
    ctx->pc = 0x2f4568u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 84)));
label_2f456c:
    // 0x2f456c: 0x92250057  lbu         $a1, 0x57($s1)
    ctx->pc = 0x2f456cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 87)));
label_2f4570:
    // 0x2f4570: 0x92260056  lbu         $a2, 0x56($s1)
    ctx->pc = 0x2f4570u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 86)));
label_2f4574:
    // 0x2f4574: 0x92270058  lbu         $a3, 0x58($s1)
    ctx->pc = 0x2f4574u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 88)));
label_2f4578:
    // 0x2f4578: 0xc0bb678  jal         func_2ED9E0
label_2f457c:
    if (ctx->pc == 0x2F457Cu) {
        ctx->pc = 0x2F457Cu;
            // 0x2f457c: 0x9228005a  lbu         $t0, 0x5A($s1) (Delay Slot)
        SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 90)));
        ctx->pc = 0x2F4580u;
        goto label_2f4580;
    }
    ctx->pc = 0x2F4578u;
    SET_GPR_U32(ctx, 31, 0x2F4580u);
    ctx->pc = 0x2F457Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4578u;
            // 0x2f457c: 0x9228005a  lbu         $t0, 0x5A($s1) (Delay Slot)
        SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 90)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED9E0u;
    if (runtime->hasFunction(0x2ED9E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4580u; }
        if (ctx->pc != 0x2F4580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED9E0_0x2ed9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4580u; }
        if (ctx->pc != 0x2F4580u) { return; }
    }
    ctx->pc = 0x2F4580u;
label_2f4580:
    // 0x2f4580: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2f4584:
    if (ctx->pc == 0x2F4584u) {
        ctx->pc = 0x2F4584u;
            // 0x2f4584: 0x9625005a  lhu         $a1, 0x5A($s1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 90)));
        ctx->pc = 0x2F4588u;
        goto label_2f4588;
    }
    ctx->pc = 0x2F4580u;
    {
        const bool branch_taken_0x2f4580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4580) {
            ctx->pc = 0x2F4584u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4580u;
            // 0x2f4584: 0x9625005a  lhu         $a1, 0x5A($s1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 90)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F4594u;
            goto label_2f4594;
        }
    }
    ctx->pc = 0x2F4588u;
label_2f4588:
    // 0x2f4588: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2f4588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2f458c:
    // 0x2f458c: 0x1000000c  b           . + 4 + (0xC << 2)
label_2f4590:
    if (ctx->pc == 0x2F4590u) {
        ctx->pc = 0x2F4590u;
            // 0x2f4590: 0xa2230055  sb          $v1, 0x55($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2F4594u;
        goto label_2f4594;
    }
    ctx->pc = 0x2F458Cu;
    {
        const bool branch_taken_0x2f458c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F458Cu;
            // 0x2f4590: 0xa2230055  sb          $v1, 0x55($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f458c) {
            ctx->pc = 0x2F45C0u;
            goto label_2f45c0;
        }
    }
    ctx->pc = 0x2F4594u;
label_2f4594:
    // 0x2f4594: 0xc0506ac  jal         func_141AB0
label_2f4598:
    if (ctx->pc == 0x2F4598u) {
        ctx->pc = 0x2F4598u;
            // 0x2f4598: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->pc = 0x2F459Cu;
        goto label_2f459c;
    }
    ctx->pc = 0x2F4594u;
    SET_GPR_U32(ctx, 31, 0x2F459Cu);
    ctx->pc = 0x2F4598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4594u;
            // 0x2f4598: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F459Cu; }
        if (ctx->pc != 0x2F459Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F459Cu; }
        if (ctx->pc != 0x2F459Cu) { return; }
    }
    ctx->pc = 0x2F459Cu;
label_2f459c:
    // 0x2f459c: 0x10000008  b           . + 4 + (0x8 << 2)
label_2f45a0:
    if (ctx->pc == 0x2F45A0u) {
        ctx->pc = 0x2F45A4u;
        goto label_2f45a4;
    }
    ctx->pc = 0x2F459Cu;
    {
        const bool branch_taken_0x2f459c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f459c) {
            ctx->pc = 0x2F45C0u;
            goto label_2f45c0;
        }
    }
    ctx->pc = 0x2F45A4u;
label_2f45a4:
    // 0x2f45a4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x2f45a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_2f45a8:
    // 0x2f45a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f45a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f45ac:
    // 0x2f45ac: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x2f45acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_2f45b0:
    // 0x2f45b0: 0xc057b7c  jal         func_15EDF0
label_2f45b4:
    if (ctx->pc == 0x2F45B4u) {
        ctx->pc = 0x2F45B4u;
            // 0x2f45b4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x2F45B8u;
        goto label_2f45b8;
    }
    ctx->pc = 0x2F45B0u;
    SET_GPR_U32(ctx, 31, 0x2F45B8u);
    ctx->pc = 0x2F45B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F45B0u;
            // 0x2f45b4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F45B8u; }
        if (ctx->pc != 0x2F45B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F45B8u; }
        if (ctx->pc != 0x2F45B8u) { return; }
    }
    ctx->pc = 0x2F45B8u;
label_2f45b8:
    // 0x2f45b8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2f45b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2f45bc:
    // 0x2f45bc: 0xa2230055  sb          $v1, 0x55($s1)
    ctx->pc = 0x2f45bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 85), (uint8_t)GPR_U32(ctx, 3));
label_2f45c0:
    // 0x2f45c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f45c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f45c4:
    // 0x2f45c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f45c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f45c8:
    // 0x2f45c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f45c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f45cc:
    // 0x2f45cc: 0x3e00008  jr          $ra
label_2f45d0:
    if (ctx->pc == 0x2F45D0u) {
        ctx->pc = 0x2F45D0u;
            // 0x2f45d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2F45D4u;
        goto label_2f45d4;
    }
    ctx->pc = 0x2F45CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F45D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F45CCu;
            // 0x2f45d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F45D4u;
label_2f45d4:
    // 0x2f45d4: 0x0  nop
    ctx->pc = 0x2f45d4u;
    // NOP
label_2f45d8:
    // 0x2f45d8: 0x0  nop
    ctx->pc = 0x2f45d8u;
    // NOP
label_2f45dc:
    // 0x2f45dc: 0x0  nop
    ctx->pc = 0x2f45dcu;
    // NOP
label_2f45e0:
    // 0x2f45e0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2f45e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2f45e4:
    // 0x2f45e4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2f45e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f45e8:
    // 0x2f45e8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2f45e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2f45ec:
    // 0x2f45ec: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2f45ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2f45f0:
    // 0x2f45f0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2f45f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2f45f4:
    // 0x2f45f4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2f45f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2f45f8:
    // 0x2f45f8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2f45f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2f45fc:
    // 0x2f45fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2f45fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2f4600:
    // 0x2f4600: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2f4600u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f4604:
    // 0x2f4604: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f4604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2f4608:
    // 0x2f4608: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f4608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2f460c:
    // 0x2f460c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f460cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2f4610:
    // 0x2f4610: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f4610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2f4614:
    // 0x2f4614: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x2f4614u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_2f4618:
    // 0x2f4618: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_2f461c:
    if (ctx->pc == 0x2F461Cu) {
        ctx->pc = 0x2F4620u;
        goto label_2f4620;
    }
    ctx->pc = 0x2F4618u;
    {
        const bool branch_taken_0x2f4618 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f4618) {
            ctx->pc = 0x2F4628u;
            goto label_2f4628;
        }
    }
    ctx->pc = 0x2F4620u;
label_2f4620:
    // 0x2f4620: 0x10000097  b           . + 4 + (0x97 << 2)
label_2f4624:
    if (ctx->pc == 0x2F4624u) {
        ctx->pc = 0x2F4624u;
            // 0x2f4624: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x2F4628u;
        goto label_2f4628;
    }
    ctx->pc = 0x2F4620u;
    {
        const bool branch_taken_0x2f4620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4620u;
            // 0x2f4624: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4620) {
            ctx->pc = 0x2F4880u;
            goto label_2f4880;
        }
    }
    ctx->pc = 0x2F4628u;
label_2f4628:
    // 0x2f4628: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x2f4628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_2f462c:
    // 0x2f462c: 0x8c50d120  lw          $s0, -0x2EE0($v0)
    ctx->pc = 0x2f462cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_2f4630:
    // 0x2f4630: 0xc05395c  jal         func_14E570
label_2f4634:
    if (ctx->pc == 0x2F4634u) {
        ctx->pc = 0x2F4634u;
            // 0x2f4634: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2F4638u;
        goto label_2f4638;
    }
    ctx->pc = 0x2F4630u;
    SET_GPR_U32(ctx, 31, 0x2F4638u);
    ctx->pc = 0x2F4634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4630u;
            // 0x2f4634: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E570u;
    if (runtime->hasFunction(0x14E570u)) {
        auto targetFn = runtime->lookupFunction(0x14E570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4638u; }
        if (ctx->pc != 0x2F4638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E570_0x14e570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4638u; }
        if (ctx->pc != 0x2F4638u) { return; }
    }
    ctx->pc = 0x2F4638u;
label_2f4638:
    // 0x2f4638: 0xc04e738  jal         func_139CE0
label_2f463c:
    if (ctx->pc == 0x2F463Cu) {
        ctx->pc = 0x2F463Cu;
            // 0x2f463c: 0x8ea40058  lw          $a0, 0x58($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
        ctx->pc = 0x2F4640u;
        goto label_2f4640;
    }
    ctx->pc = 0x2F4638u;
    SET_GPR_U32(ctx, 31, 0x2F4640u);
    ctx->pc = 0x2F463Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4638u;
            // 0x2f463c: 0x8ea40058  lw          $a0, 0x58($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4640u; }
        if (ctx->pc != 0x2F4640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4640u; }
        if (ctx->pc != 0x2F4640u) { return; }
    }
    ctx->pc = 0x2F4640u;
label_2f4640:
    // 0x2f4640: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x2f4640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_2f4644:
    // 0x2f4644: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2f4644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2f4648:
    // 0x2f4648: 0x8c47d130  lw          $a3, -0x2ED0($v0)
    ctx->pc = 0x2f4648u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_2f464c:
    // 0x2f464c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2f464cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2f4650:
    // 0x2f4650: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f4650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4654:
    // 0x2f4654: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2f4654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2f4658:
    // 0x2f4658: 0x8cf00130  lw          $s0, 0x130($a3)
    ctx->pc = 0x2f4658u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
label_2f465c:
    // 0x2f465c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2f465cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2f4660:
    // 0x2f4660: 0x24420e84  addiu       $v0, $v0, 0xE84
    ctx->pc = 0x2f4660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3716));
label_2f4664:
    // 0x2f4664: 0x109080  sll         $s2, $s0, 2
    ctx->pc = 0x2f4664u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2f4668:
    // 0x2f4668: 0x529821  addu        $s3, $v0, $s2
    ctx->pc = 0x2f4668u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_2f466c:
    // 0x2f466c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2f466cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_2f4670:
    // 0x2f4670: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f4670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f4674:
    // 0x2f4674: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x2f4674u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f4678:
    // 0x2f4678: 0x24570010  addiu       $s7, $v0, 0x10
    ctx->pc = 0x2f4678u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2f467c:
    // 0x2f467c: 0xa7a000b0  sh          $zero, 0xB0($sp)
    ctx->pc = 0x2f467cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 176), (uint16_t)GPR_U32(ctx, 0));
label_2f4680:
    // 0x2f4680: 0xa7a000b2  sh          $zero, 0xB2($sp)
    ctx->pc = 0x2f4680u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 178), (uint16_t)GPR_U32(ctx, 0));
label_2f4684:
    // 0x2f4684: 0xc04a576  jal         func_1295D8
label_2f4688:
    if (ctx->pc == 0x2F4688u) {
        ctx->pc = 0x2F4688u;
            // 0x2f4688: 0xa7a000b4  sh          $zero, 0xB4($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 180), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2F468Cu;
        goto label_2f468c;
    }
    ctx->pc = 0x2F4684u;
    SET_GPR_U32(ctx, 31, 0x2F468Cu);
    ctx->pc = 0x2F4688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4684u;
            // 0x2f4688: 0xa7a000b4  sh          $zero, 0xB4($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 180), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F468Cu; }
        if (ctx->pc != 0x2F468Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F468Cu; }
        if (ctx->pc != 0x2F468Cu) { return; }
    }
    ctx->pc = 0x2F468Cu;
label_2f468c:
    // 0x2f468c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f468cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f4690:
    // 0x2f4690: 0xc0b72b4  jal         func_2DCAD0
label_2f4694:
    if (ctx->pc == 0x2F4694u) {
        ctx->pc = 0x2F4694u;
            // 0x2f4694: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x2F4698u;
        goto label_2f4698;
    }
    ctx->pc = 0x2F4690u;
    SET_GPR_U32(ctx, 31, 0x2F4698u);
    ctx->pc = 0x2F4694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4690u;
            // 0x2f4694: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DCAD0u;
    if (runtime->hasFunction(0x2DCAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2DCAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4698u; }
        if (ctx->pc != 0x2F4698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DCAD0_0x2dcad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4698u; }
        if (ctx->pc != 0x2F4698u) { return; }
    }
    ctx->pc = 0x2F4698u;
label_2f4698:
    // 0x2f4698: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2f4698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f469c:
    // 0x2f469c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2f469cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_2f46a0:
    // 0x2f46a0: 0xc44222d0  lwc1        $f2, 0x22D0($v0)
    ctx->pc = 0x2f46a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f46a4:
    // 0x2f46a4: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x2f46a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f46a8:
    // 0x2f46a8: 0x8c630d94  lw          $v1, 0xD94($v1)
    ctx->pc = 0x2f46a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3476)));
label_2f46ac:
    // 0x2f46ac: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x2f46acu;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
label_2f46b0:
    // 0x2f46b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f46b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f46b4:
    // 0x2f46b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2f46b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f46b8:
    // 0x2f46b8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2f46b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2f46bc:
    // 0x2f46bc: 0x602026  xor         $a0, $v1, $zero
    ctx->pc = 0x2f46bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
label_2f46c0:
    // 0x2f46c0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2f46c4:
    if (ctx->pc == 0x2F46C4u) {
        ctx->pc = 0x2F46C4u;
            // 0x2f46c4: 0x2c840001  sltiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x2F46C8u;
        goto label_2f46c8;
    }
    ctx->pc = 0x2F46C0u;
    {
        const bool branch_taken_0x2f46c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F46C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F46C0u;
            // 0x2f46c4: 0x2c840001  sltiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f46c0) {
            ctx->pc = 0x2F46CCu;
            goto label_2f46cc;
        }
    }
    ctx->pc = 0x2F46C8u;
label_2f46c8:
    // 0x2f46c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f46c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f46cc:
    // 0x2f46cc: 0x8e230d94  lw          $v1, 0xD94($s1)
    ctx->pc = 0x2f46ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3476)));
label_2f46d0:
    // 0x2f46d0: 0xc6200c88  lwc1        $f0, 0xC88($s1)
    ctx->pc = 0x2f46d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f46d4:
    // 0x2f46d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f46d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2f46d8:
    // 0x2f46d8: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x2f46d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2f46dc:
    // 0x2f46dc: 0x4982b  sltu        $s3, $zero, $a0
    ctx->pc = 0x2f46dcu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2f46e0:
    // 0x2f46e0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2f46e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2f46e4:
    // 0x2f46e4: 0x602026  xor         $a0, $v1, $zero
    ctx->pc = 0x2f46e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
label_2f46e8:
    // 0x2f46e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f46e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f46ec:
    // 0x2f46ec: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2f46ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f46f0:
    // 0x2f46f0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2f46f4:
    if (ctx->pc == 0x2F46F4u) {
        ctx->pc = 0x2F46F4u;
            // 0x2f46f4: 0x2c840001  sltiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x2F46F8u;
        goto label_2f46f8;
    }
    ctx->pc = 0x2F46F0u;
    {
        const bool branch_taken_0x2f46f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F46F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F46F0u;
            // 0x2f46f4: 0x2c840001  sltiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f46f0) {
            ctx->pc = 0x2F46FCu;
            goto label_2f46fc;
        }
    }
    ctx->pc = 0x2F46F8u;
label_2f46f8:
    // 0x2f46f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f46f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f46fc:
    // 0x2f46fc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f46fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2f4700:
    // 0x2f4700: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f4700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f4704:
    // 0x2f4704: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x2f4704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_2f4708:
    // 0x2f4708: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2f4708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_2f470c:
    // 0x2f470c: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x2f470cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_2f4710:
    // 0x2f4710: 0x3a02b  sltu        $s4, $zero, $v1
    ctx->pc = 0x2f4710u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2f4714:
    // 0x2f4714: 0x26a40458  addiu       $a0, $s5, 0x458
    ctx->pc = 0x2f4714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1112));
label_2f4718:
    // 0x2f4718: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2f4718u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f471c:
    // 0x2f471c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2f471cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2f4720:
    // 0x2f4720: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2f4720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_2f4724:
    // 0x2f4724: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2f4724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f4728:
    // 0x2f4728: 0xc0bd544  jal         func_2F5510
label_2f472c:
    if (ctx->pc == 0x2F472Cu) {
        ctx->pc = 0x2F472Cu;
            // 0x2f472c: 0x244601a4  addiu       $a2, $v0, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 420));
        ctx->pc = 0x2F4730u;
        goto label_2f4730;
    }
    ctx->pc = 0x2F4728u;
    SET_GPR_U32(ctx, 31, 0x2F4730u);
    ctx->pc = 0x2F472Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4728u;
            // 0x2f472c: 0x244601a4  addiu       $a2, $v0, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 420));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5510u;
    if (runtime->hasFunction(0x2F5510u)) {
        auto targetFn = runtime->lookupFunction(0x2F5510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4730u; }
        if (ctx->pc != 0x2F4730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5510_0x2f5510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4730u; }
        if (ctx->pc != 0x2F4730u) { return; }
    }
    ctx->pc = 0x2F4730u;
label_2f4730:
    // 0x2f4730: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x2f4730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_2f4734:
    // 0x2f4734: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2f4734u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f4738:
    // 0x2f4738: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x2f4738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_2f473c:
    // 0x2f473c: 0x26a40074  addiu       $a0, $s5, 0x74
    ctx->pc = 0x2f473cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 116));
label_2f4740:
    // 0x2f4740: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f4740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f4744:
    // 0x2f4744: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2f4744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2f4748:
    // 0x2f4748: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2f4748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_2f474c:
    // 0x2f474c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2f474cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f4750:
    // 0x2f4750: 0xc0bd544  jal         func_2F5510
label_2f4754:
    if (ctx->pc == 0x2F4754u) {
        ctx->pc = 0x2F4754u;
            // 0x2f4754: 0x244601a4  addiu       $a2, $v0, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 420));
        ctx->pc = 0x2F4758u;
        goto label_2f4758;
    }
    ctx->pc = 0x2F4750u;
    SET_GPR_U32(ctx, 31, 0x2F4758u);
    ctx->pc = 0x2F4754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4750u;
            // 0x2f4754: 0x244601a4  addiu       $a2, $v0, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 420));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5510u;
    if (runtime->hasFunction(0x2F5510u)) {
        auto targetFn = runtime->lookupFunction(0x2F5510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4758u; }
        if (ctx->pc != 0x2F4758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5510_0x2f5510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4758u; }
        if (ctx->pc != 0x2F4758u) { return; }
    }
    ctx->pc = 0x2F4758u;
label_2f4758:
    // 0x2f4758: 0x262602c0  addiu       $a2, $s1, 0x2C0
    ctx->pc = 0x2f4758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
label_2f475c:
    // 0x2f475c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2f475cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f4760:
    // 0x2f4760: 0x26a400d0  addiu       $a0, $s5, 0xD0
    ctx->pc = 0x2f4760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 208));
label_2f4764:
    // 0x2f4764: 0xc0bd544  jal         func_2F5510
label_2f4768:
    if (ctx->pc == 0x2F4768u) {
        ctx->pc = 0x2F4768u;
            // 0x2f4768: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F476Cu;
        goto label_2f476c;
    }
    ctx->pc = 0x2F4764u;
    SET_GPR_U32(ctx, 31, 0x2F476Cu);
    ctx->pc = 0x2F4768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4764u;
            // 0x2f4768: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5510u;
    if (runtime->hasFunction(0x2F5510u)) {
        auto targetFn = runtime->lookupFunction(0x2F5510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F476Cu; }
        if (ctx->pc != 0x2F476Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5510_0x2f5510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F476Cu; }
        if (ctx->pc != 0x2F476Cu) { return; }
    }
    ctx->pc = 0x2F476Cu;
label_2f476c:
    // 0x2f476c: 0x2551021  addu        $v0, $s2, $s5
    ctx->pc = 0x2f476cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_2f4770:
    // 0x2f4770: 0x26b40134  addiu       $s4, $s5, 0x134
    ctx->pc = 0x2f4770u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 308));
label_2f4774:
    // 0x2f4774: 0x905e0461  lbu         $fp, 0x461($v0)
    ctx->pc = 0x2f4774u;
    SET_GPR_U32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1121)));
label_2f4778:
    // 0x2f4778: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2f4778u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f477c:
    // 0x2f477c: 0x8eb204b4  lw          $s2, 0x4B4($s5)
    ctx->pc = 0x2f477cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1204)));
label_2f4780:
    // 0x2f4780: 0x6416002e  daddiu      $s6, $zero, 0x2E
    ctx->pc = 0x2f4780u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)46);
label_2f4784:
    // 0x2f4784: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f4784u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4788:
    // 0x2f4788: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x2f4788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_2f478c:
    // 0x2f478c: 0x8ea3045c  lw          $v1, 0x45C($s5)
    ctx->pc = 0x2f478cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1116)));
label_2f4790:
    // 0x2f4790: 0x532023  subu        $a0, $v0, $s3
    ctx->pc = 0x2f4790u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2f4794:
    // 0x2f4794: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2f4794u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2f4798:
    // 0x2f4798: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x2f4798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_2f479c:
    // 0x2f479c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f479cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2f47a0:
    // 0x2f47a0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_2f47a4:
    if (ctx->pc == 0x2F47A4u) {
        ctx->pc = 0x2F47A4u;
            // 0x2f47a4: 0x90660014  lbu         $a2, 0x14($v1) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->pc = 0x2F47A8u;
        goto label_2f47a8;
    }
    ctx->pc = 0x2F47A0u;
    {
        const bool branch_taken_0x2f47a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F47A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F47A0u;
            // 0x2f47a4: 0x90660014  lbu         $a2, 0x14($v1) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f47a0) {
            ctx->pc = 0x2F47D8u;
            goto label_2f47d8;
        }
    }
    ctx->pc = 0x2F47A8u;
label_2f47a8:
    // 0x2f47a8: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x2f47a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_2f47ac:
    // 0x2f47ac: 0x32c200ff  andi        $v0, $s6, 0xFF
    ctx->pc = 0x2f47acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_2f47b0:
    // 0x2f47b0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2f47b4:
    if (ctx->pc == 0x2F47B4u) {
        ctx->pc = 0x2F47B8u;
        goto label_2f47b8;
    }
    ctx->pc = 0x2F47B0u;
    {
        const bool branch_taken_0x2f47b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f47b0) {
            ctx->pc = 0x2F47C8u;
            goto label_2f47c8;
        }
    }
    ctx->pc = 0x2F47B8u;
label_2f47b8:
    // 0x2f47b8: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x2f47b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2f47bc:
    // 0x2f47bc: 0x10000008  b           . + 4 + (0x8 << 2)
label_2f47c0:
    if (ctx->pc == 0x2F47C0u) {
        ctx->pc = 0x2F47C0u;
            // 0x2f47c0: 0x26940020  addiu       $s4, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->pc = 0x2F47C4u;
        goto label_2f47c4;
    }
    ctx->pc = 0x2F47BCu;
    {
        const bool branch_taken_0x2f47bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F47C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F47BCu;
            // 0x2f47c0: 0x26940020  addiu       $s4, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f47bc) {
            ctx->pc = 0x2F47E0u;
            goto label_2f47e0;
        }
    }
    ctx->pc = 0x2F47C4u;
label_2f47c4:
    // 0x2f47c4: 0x0  nop
    ctx->pc = 0x2f47c4u;
    // NOP
label_2f47c8:
    // 0x2f47c8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2f47c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2f47cc:
    // 0x2f47cc: 0x10000024  b           . + 4 + (0x24 << 2)
label_2f47d0:
    if (ctx->pc == 0x2F47D0u) {
        ctx->pc = 0x2F47D0u;
            // 0x2f47d0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x2F47D4u;
        goto label_2f47d4;
    }
    ctx->pc = 0x2F47CCu;
    {
        const bool branch_taken_0x2f47cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F47D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F47CCu;
            // 0x2f47d0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f47cc) {
            ctx->pc = 0x2F4860u;
            goto label_2f4860;
        }
    }
    ctx->pc = 0x2F47D4u;
label_2f47d4:
    // 0x2f47d4: 0x0  nop
    ctx->pc = 0x2f47d4u;
    // NOP
label_2f47d8:
    // 0x2f47d8: 0x26940020  addiu       $s4, $s4, 0x20
    ctx->pc = 0x2f47d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_2f47dc:
    // 0x2f47dc: 0x0  nop
    ctx->pc = 0x2f47dcu;
    // NOP
label_2f47e0:
    // 0x2f47e0: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x2f47e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_2f47e4:
    // 0x2f47e4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2f47e8:
    if (ctx->pc == 0x2F47E8u) {
        ctx->pc = 0x2F47ECu;
        goto label_2f47ec;
    }
    ctx->pc = 0x2F47E4u;
    {
        const bool branch_taken_0x2f47e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f47e4) {
            ctx->pc = 0x2F4810u;
            goto label_2f4810;
        }
    }
    ctx->pc = 0x2F47ECu;
label_2f47ec:
    // 0x2f47ec: 0x26a40458  addiu       $a0, $s5, 0x458
    ctx->pc = 0x2f47ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1112));
label_2f47f0:
    // 0x2f47f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f47f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f47f4:
    // 0x2f47f4: 0xc0bd22c  jal         func_2F48B0
label_2f47f8:
    if (ctx->pc == 0x2F47F8u) {
        ctx->pc = 0x2F47F8u;
            // 0x2f47f8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x2F47FCu;
        goto label_2f47fc;
    }
    ctx->pc = 0x2F47F4u;
    SET_GPR_U32(ctx, 31, 0x2F47FCu);
    ctx->pc = 0x2F47F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F47F4u;
            // 0x2f47f8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F48B0u;
    if (runtime->hasFunction(0x2F48B0u)) {
        auto targetFn = runtime->lookupFunction(0x2F48B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F47FCu; }
        if (ctx->pc != 0x2F47FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F48B0_0x2f48b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F47FCu; }
        if (ctx->pc != 0x2F47FCu) { return; }
    }
    ctx->pc = 0x2F47FCu;
label_2f47fc:
    // 0x2f47fc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2f47fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f4800:
    // 0x2f4800: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
label_2f4804:
    if (ctx->pc == 0x2F4804u) {
        ctx->pc = 0x2F4808u;
        goto label_2f4808;
    }
    ctx->pc = 0x2F4800u;
    {
        const bool branch_taken_0x2f4800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f4800) {
            ctx->pc = 0x2F4850u;
            goto label_2f4850;
        }
    }
    ctx->pc = 0x2F4808u;
label_2f4808:
    // 0x2f4808: 0x10000015  b           . + 4 + (0x15 << 2)
label_2f480c:
    if (ctx->pc == 0x2F480Cu) {
        ctx->pc = 0x2F4810u;
        goto label_2f4810;
    }
    ctx->pc = 0x2F4808u;
    {
        const bool branch_taken_0x2f4808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4808) {
            ctx->pc = 0x2F4860u;
            goto label_2f4860;
        }
    }
    ctx->pc = 0x2F4810u;
label_2f4810:
    // 0x2f4810: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
label_2f4814:
    if (ctx->pc == 0x2F4814u) {
        ctx->pc = 0x2F4818u;
        goto label_2f4818;
    }
    ctx->pc = 0x2F4810u;
    {
        const bool branch_taken_0x2f4810 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4810) {
            ctx->pc = 0x2F4850u;
            goto label_2f4850;
        }
    }
    ctx->pc = 0x2F4818u;
label_2f4818:
    // 0x2f4818: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2f4818u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f481c:
    // 0x2f481c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f481cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4820:
    // 0x2f4820: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x2f4820u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_2f4824:
    // 0x2f4824: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2f4824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2f4828:
    // 0x2f4828: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2f4828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2f482c:
    // 0x2f482c: 0x2ca20012  sltiu       $v0, $a1, 0x12
    ctx->pc = 0x2f482cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
label_2f4830:
    // 0x2f4830: 0x9e2026  xor         $a0, $a0, $fp
    ctx->pc = 0x2f4830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 30));
label_2f4834:
    // 0x2f4834: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2f4834u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2f4838:
    // 0x2f4838: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x2f4838u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2f483c:
    // 0x2f483c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2f483cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_2f4840:
    // 0x2f4840: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_2f4844:
    if (ctx->pc == 0x2F4844u) {
        ctx->pc = 0x2F4844u;
            // 0x2f4844: 0x3182b  sltu        $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->pc = 0x2F4848u;
        goto label_2f4848;
    }
    ctx->pc = 0x2F4840u;
    {
        const bool branch_taken_0x2f4840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4840u;
            // 0x2f4844: 0x3182b  sltu        $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4840) {
            ctx->pc = 0x2F4820u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f4820;
        }
    }
    ctx->pc = 0x2F4848u;
label_2f4848:
    // 0x2f4848: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_2f484c:
    if (ctx->pc == 0x2F484Cu) {
        ctx->pc = 0x2F4850u;
        goto label_2f4850;
    }
    ctx->pc = 0x2F4848u;
    {
        const bool branch_taken_0x2f4848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f4848) {
            ctx->pc = 0x2F4860u;
            goto label_2f4860;
        }
    }
    ctx->pc = 0x2F4850u;
label_2f4850:
    // 0x2f4850: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2f4850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f4854:
    // 0x2f4854: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2f4854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f4858:
    // 0x2f4858: 0xc0bd2b8  jal         func_2F4AE0
label_2f485c:
    if (ctx->pc == 0x2F485Cu) {
        ctx->pc = 0x2F485Cu;
            // 0x2f485c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F4860u;
        goto label_2f4860;
    }
    ctx->pc = 0x2F4858u;
    SET_GPR_U32(ctx, 31, 0x2F4860u);
    ctx->pc = 0x2F485Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4858u;
            // 0x2f485c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F4AE0u;
    if (runtime->hasFunction(0x2F4AE0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4860u; }
        if (ctx->pc != 0x2F4860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F4AE0_0x2f4ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4860u; }
        if (ctx->pc != 0x2F4860u) { return; }
    }
    ctx->pc = 0x2F4860u;
label_2f4860:
    // 0x2f4860: 0x8ea20454  lw          $v0, 0x454($s5)
    ctx->pc = 0x2f4860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1108)));
label_2f4864:
    // 0x2f4864: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2f4864u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2f4868:
    // 0x2f4868: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2f4868u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2f486c:
    // 0x2f486c: 0x5440ffc7  bnel        $v0, $zero, . + 4 + (-0x39 << 2)
label_2f4870:
    if (ctx->pc == 0x2F4870u) {
        ctx->pc = 0x2F4870u;
            // 0x2f4870: 0x1310c0  sll         $v0, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
        ctx->pc = 0x2F4874u;
        goto label_2f4874;
    }
    ctx->pc = 0x2F486Cu;
    {
        const bool branch_taken_0x2f486c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f486c) {
            ctx->pc = 0x2F4870u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F486Cu;
            // 0x2f4870: 0x1310c0  sll         $v0, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F478Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f478c;
        }
    }
    ctx->pc = 0x2F4874u;
label_2f4874:
    // 0x2f4874: 0xc05395c  jal         func_14E570
label_2f4878:
    if (ctx->pc == 0x2F4878u) {
        ctx->pc = 0x2F4878u;
            // 0x2f4878: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F487Cu;
        goto label_2f487c;
    }
    ctx->pc = 0x2F4874u;
    SET_GPR_U32(ctx, 31, 0x2F487Cu);
    ctx->pc = 0x2F4878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4874u;
            // 0x2f4878: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E570u;
    if (runtime->hasFunction(0x14E570u)) {
        auto targetFn = runtime->lookupFunction(0x14E570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F487Cu; }
        if (ctx->pc != 0x2F487Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E570_0x14e570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F487Cu; }
        if (ctx->pc != 0x2F487Cu) { return; }
    }
    ctx->pc = 0x2F487Cu;
label_2f487c:
    // 0x2f487c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2f487cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2f4880:
    // 0x2f4880: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2f4880u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2f4884:
    // 0x2f4884: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2f4884u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2f4888:
    // 0x2f4888: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2f4888u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2f488c:
    // 0x2f488c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2f488cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2f4890:
    // 0x2f4890: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f4890u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f4894:
    // 0x2f4894: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f4894u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f4898:
    // 0x2f4898: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f4898u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f489c:
    // 0x2f489c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f489cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f48a0:
    // 0x2f48a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f48a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f48a4:
    // 0x2f48a4: 0x3e00008  jr          $ra
label_2f48a8:
    if (ctx->pc == 0x2F48A8u) {
        ctx->pc = 0x2F48A8u;
            // 0x2f48a8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x2F48ACu;
        goto label_2f48ac;
    }
    ctx->pc = 0x2F48A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F48A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F48A4u;
            // 0x2f48a8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F48ACu;
label_2f48ac:
    // 0x2f48ac: 0x0  nop
    ctx->pc = 0x2f48acu;
    // NOP
}
