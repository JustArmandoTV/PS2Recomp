#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E4190
// Address: 0x1e4190 - 0x1e4540
void sub_001E4190_0x1e4190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4190_0x1e4190");
#endif

    switch (ctx->pc) {
        case 0x1e4190u: goto label_1e4190;
        case 0x1e4194u: goto label_1e4194;
        case 0x1e4198u: goto label_1e4198;
        case 0x1e419cu: goto label_1e419c;
        case 0x1e41a0u: goto label_1e41a0;
        case 0x1e41a4u: goto label_1e41a4;
        case 0x1e41a8u: goto label_1e41a8;
        case 0x1e41acu: goto label_1e41ac;
        case 0x1e41b0u: goto label_1e41b0;
        case 0x1e41b4u: goto label_1e41b4;
        case 0x1e41b8u: goto label_1e41b8;
        case 0x1e41bcu: goto label_1e41bc;
        case 0x1e41c0u: goto label_1e41c0;
        case 0x1e41c4u: goto label_1e41c4;
        case 0x1e41c8u: goto label_1e41c8;
        case 0x1e41ccu: goto label_1e41cc;
        case 0x1e41d0u: goto label_1e41d0;
        case 0x1e41d4u: goto label_1e41d4;
        case 0x1e41d8u: goto label_1e41d8;
        case 0x1e41dcu: goto label_1e41dc;
        case 0x1e41e0u: goto label_1e41e0;
        case 0x1e41e4u: goto label_1e41e4;
        case 0x1e41e8u: goto label_1e41e8;
        case 0x1e41ecu: goto label_1e41ec;
        case 0x1e41f0u: goto label_1e41f0;
        case 0x1e41f4u: goto label_1e41f4;
        case 0x1e41f8u: goto label_1e41f8;
        case 0x1e41fcu: goto label_1e41fc;
        case 0x1e4200u: goto label_1e4200;
        case 0x1e4204u: goto label_1e4204;
        case 0x1e4208u: goto label_1e4208;
        case 0x1e420cu: goto label_1e420c;
        case 0x1e4210u: goto label_1e4210;
        case 0x1e4214u: goto label_1e4214;
        case 0x1e4218u: goto label_1e4218;
        case 0x1e421cu: goto label_1e421c;
        case 0x1e4220u: goto label_1e4220;
        case 0x1e4224u: goto label_1e4224;
        case 0x1e4228u: goto label_1e4228;
        case 0x1e422cu: goto label_1e422c;
        case 0x1e4230u: goto label_1e4230;
        case 0x1e4234u: goto label_1e4234;
        case 0x1e4238u: goto label_1e4238;
        case 0x1e423cu: goto label_1e423c;
        case 0x1e4240u: goto label_1e4240;
        case 0x1e4244u: goto label_1e4244;
        case 0x1e4248u: goto label_1e4248;
        case 0x1e424cu: goto label_1e424c;
        case 0x1e4250u: goto label_1e4250;
        case 0x1e4254u: goto label_1e4254;
        case 0x1e4258u: goto label_1e4258;
        case 0x1e425cu: goto label_1e425c;
        case 0x1e4260u: goto label_1e4260;
        case 0x1e4264u: goto label_1e4264;
        case 0x1e4268u: goto label_1e4268;
        case 0x1e426cu: goto label_1e426c;
        case 0x1e4270u: goto label_1e4270;
        case 0x1e4274u: goto label_1e4274;
        case 0x1e4278u: goto label_1e4278;
        case 0x1e427cu: goto label_1e427c;
        case 0x1e4280u: goto label_1e4280;
        case 0x1e4284u: goto label_1e4284;
        case 0x1e4288u: goto label_1e4288;
        case 0x1e428cu: goto label_1e428c;
        case 0x1e4290u: goto label_1e4290;
        case 0x1e4294u: goto label_1e4294;
        case 0x1e4298u: goto label_1e4298;
        case 0x1e429cu: goto label_1e429c;
        case 0x1e42a0u: goto label_1e42a0;
        case 0x1e42a4u: goto label_1e42a4;
        case 0x1e42a8u: goto label_1e42a8;
        case 0x1e42acu: goto label_1e42ac;
        case 0x1e42b0u: goto label_1e42b0;
        case 0x1e42b4u: goto label_1e42b4;
        case 0x1e42b8u: goto label_1e42b8;
        case 0x1e42bcu: goto label_1e42bc;
        case 0x1e42c0u: goto label_1e42c0;
        case 0x1e42c4u: goto label_1e42c4;
        case 0x1e42c8u: goto label_1e42c8;
        case 0x1e42ccu: goto label_1e42cc;
        case 0x1e42d0u: goto label_1e42d0;
        case 0x1e42d4u: goto label_1e42d4;
        case 0x1e42d8u: goto label_1e42d8;
        case 0x1e42dcu: goto label_1e42dc;
        case 0x1e42e0u: goto label_1e42e0;
        case 0x1e42e4u: goto label_1e42e4;
        case 0x1e42e8u: goto label_1e42e8;
        case 0x1e42ecu: goto label_1e42ec;
        case 0x1e42f0u: goto label_1e42f0;
        case 0x1e42f4u: goto label_1e42f4;
        case 0x1e42f8u: goto label_1e42f8;
        case 0x1e42fcu: goto label_1e42fc;
        case 0x1e4300u: goto label_1e4300;
        case 0x1e4304u: goto label_1e4304;
        case 0x1e4308u: goto label_1e4308;
        case 0x1e430cu: goto label_1e430c;
        case 0x1e4310u: goto label_1e4310;
        case 0x1e4314u: goto label_1e4314;
        case 0x1e4318u: goto label_1e4318;
        case 0x1e431cu: goto label_1e431c;
        case 0x1e4320u: goto label_1e4320;
        case 0x1e4324u: goto label_1e4324;
        case 0x1e4328u: goto label_1e4328;
        case 0x1e432cu: goto label_1e432c;
        case 0x1e4330u: goto label_1e4330;
        case 0x1e4334u: goto label_1e4334;
        case 0x1e4338u: goto label_1e4338;
        case 0x1e433cu: goto label_1e433c;
        case 0x1e4340u: goto label_1e4340;
        case 0x1e4344u: goto label_1e4344;
        case 0x1e4348u: goto label_1e4348;
        case 0x1e434cu: goto label_1e434c;
        case 0x1e4350u: goto label_1e4350;
        case 0x1e4354u: goto label_1e4354;
        case 0x1e4358u: goto label_1e4358;
        case 0x1e435cu: goto label_1e435c;
        case 0x1e4360u: goto label_1e4360;
        case 0x1e4364u: goto label_1e4364;
        case 0x1e4368u: goto label_1e4368;
        case 0x1e436cu: goto label_1e436c;
        case 0x1e4370u: goto label_1e4370;
        case 0x1e4374u: goto label_1e4374;
        case 0x1e4378u: goto label_1e4378;
        case 0x1e437cu: goto label_1e437c;
        case 0x1e4380u: goto label_1e4380;
        case 0x1e4384u: goto label_1e4384;
        case 0x1e4388u: goto label_1e4388;
        case 0x1e438cu: goto label_1e438c;
        case 0x1e4390u: goto label_1e4390;
        case 0x1e4394u: goto label_1e4394;
        case 0x1e4398u: goto label_1e4398;
        case 0x1e439cu: goto label_1e439c;
        case 0x1e43a0u: goto label_1e43a0;
        case 0x1e43a4u: goto label_1e43a4;
        case 0x1e43a8u: goto label_1e43a8;
        case 0x1e43acu: goto label_1e43ac;
        case 0x1e43b0u: goto label_1e43b0;
        case 0x1e43b4u: goto label_1e43b4;
        case 0x1e43b8u: goto label_1e43b8;
        case 0x1e43bcu: goto label_1e43bc;
        case 0x1e43c0u: goto label_1e43c0;
        case 0x1e43c4u: goto label_1e43c4;
        case 0x1e43c8u: goto label_1e43c8;
        case 0x1e43ccu: goto label_1e43cc;
        case 0x1e43d0u: goto label_1e43d0;
        case 0x1e43d4u: goto label_1e43d4;
        case 0x1e43d8u: goto label_1e43d8;
        case 0x1e43dcu: goto label_1e43dc;
        case 0x1e43e0u: goto label_1e43e0;
        case 0x1e43e4u: goto label_1e43e4;
        case 0x1e43e8u: goto label_1e43e8;
        case 0x1e43ecu: goto label_1e43ec;
        case 0x1e43f0u: goto label_1e43f0;
        case 0x1e43f4u: goto label_1e43f4;
        case 0x1e43f8u: goto label_1e43f8;
        case 0x1e43fcu: goto label_1e43fc;
        case 0x1e4400u: goto label_1e4400;
        case 0x1e4404u: goto label_1e4404;
        case 0x1e4408u: goto label_1e4408;
        case 0x1e440cu: goto label_1e440c;
        case 0x1e4410u: goto label_1e4410;
        case 0x1e4414u: goto label_1e4414;
        case 0x1e4418u: goto label_1e4418;
        case 0x1e441cu: goto label_1e441c;
        case 0x1e4420u: goto label_1e4420;
        case 0x1e4424u: goto label_1e4424;
        case 0x1e4428u: goto label_1e4428;
        case 0x1e442cu: goto label_1e442c;
        case 0x1e4430u: goto label_1e4430;
        case 0x1e4434u: goto label_1e4434;
        case 0x1e4438u: goto label_1e4438;
        case 0x1e443cu: goto label_1e443c;
        case 0x1e4440u: goto label_1e4440;
        case 0x1e4444u: goto label_1e4444;
        case 0x1e4448u: goto label_1e4448;
        case 0x1e444cu: goto label_1e444c;
        case 0x1e4450u: goto label_1e4450;
        case 0x1e4454u: goto label_1e4454;
        case 0x1e4458u: goto label_1e4458;
        case 0x1e445cu: goto label_1e445c;
        case 0x1e4460u: goto label_1e4460;
        case 0x1e4464u: goto label_1e4464;
        case 0x1e4468u: goto label_1e4468;
        case 0x1e446cu: goto label_1e446c;
        case 0x1e4470u: goto label_1e4470;
        case 0x1e4474u: goto label_1e4474;
        case 0x1e4478u: goto label_1e4478;
        case 0x1e447cu: goto label_1e447c;
        case 0x1e4480u: goto label_1e4480;
        case 0x1e4484u: goto label_1e4484;
        case 0x1e4488u: goto label_1e4488;
        case 0x1e448cu: goto label_1e448c;
        case 0x1e4490u: goto label_1e4490;
        case 0x1e4494u: goto label_1e4494;
        case 0x1e4498u: goto label_1e4498;
        case 0x1e449cu: goto label_1e449c;
        case 0x1e44a0u: goto label_1e44a0;
        case 0x1e44a4u: goto label_1e44a4;
        case 0x1e44a8u: goto label_1e44a8;
        case 0x1e44acu: goto label_1e44ac;
        case 0x1e44b0u: goto label_1e44b0;
        case 0x1e44b4u: goto label_1e44b4;
        case 0x1e44b8u: goto label_1e44b8;
        case 0x1e44bcu: goto label_1e44bc;
        case 0x1e44c0u: goto label_1e44c0;
        case 0x1e44c4u: goto label_1e44c4;
        case 0x1e44c8u: goto label_1e44c8;
        case 0x1e44ccu: goto label_1e44cc;
        case 0x1e44d0u: goto label_1e44d0;
        case 0x1e44d4u: goto label_1e44d4;
        case 0x1e44d8u: goto label_1e44d8;
        case 0x1e44dcu: goto label_1e44dc;
        case 0x1e44e0u: goto label_1e44e0;
        case 0x1e44e4u: goto label_1e44e4;
        case 0x1e44e8u: goto label_1e44e8;
        case 0x1e44ecu: goto label_1e44ec;
        case 0x1e44f0u: goto label_1e44f0;
        case 0x1e44f4u: goto label_1e44f4;
        case 0x1e44f8u: goto label_1e44f8;
        case 0x1e44fcu: goto label_1e44fc;
        case 0x1e4500u: goto label_1e4500;
        case 0x1e4504u: goto label_1e4504;
        case 0x1e4508u: goto label_1e4508;
        case 0x1e450cu: goto label_1e450c;
        case 0x1e4510u: goto label_1e4510;
        case 0x1e4514u: goto label_1e4514;
        case 0x1e4518u: goto label_1e4518;
        case 0x1e451cu: goto label_1e451c;
        case 0x1e4520u: goto label_1e4520;
        case 0x1e4524u: goto label_1e4524;
        case 0x1e4528u: goto label_1e4528;
        case 0x1e452cu: goto label_1e452c;
        case 0x1e4530u: goto label_1e4530;
        case 0x1e4534u: goto label_1e4534;
        case 0x1e4538u: goto label_1e4538;
        case 0x1e453cu: goto label_1e453c;
        default: break;
    }

    ctx->pc = 0x1e4190u;

label_1e4190:
    // 0x1e4190: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x1e4190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
label_1e4194:
    // 0x1e4194: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1e4194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1e4198:
    // 0x1e4198: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1e4198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1e419c:
    // 0x1e419c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e419cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e41a0:
    // 0x1e41a0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1e41a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_1e41a4:
    // 0x1e41a4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1e41a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1e41a8:
    // 0x1e41a8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e41a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e41ac:
    // 0x1e41ac: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1e41acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1e41b0:
    // 0x1e41b0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1e41b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1e41b4:
    // 0x1e41b4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1e41b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1e41b8:
    // 0x1e41b8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e41b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e41bc:
    // 0x1e41bc: 0xe7bf002c  swc1        $f31, 0x2C($sp)
    ctx->pc = 0x1e41bcu;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_1e41c0:
    // 0x1e41c0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1e41c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e41c4:
    // 0x1e41c4: 0xe7be0028  swc1        $f30, 0x28($sp)
    ctx->pc = 0x1e41c4u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1e41c8:
    // 0x1e41c8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1e41c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e41cc:
    // 0x1e41cc: 0xe7bd0024  swc1        $f29, 0x24($sp)
    ctx->pc = 0x1e41ccu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1e41d0:
    // 0x1e41d0: 0xe7bc0020  swc1        $f28, 0x20($sp)
    ctx->pc = 0x1e41d0u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1e41d4:
    // 0x1e41d4: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x1e41d4u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_1e41d8:
    // 0x1e41d8: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x1e41d8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1e41dc:
    // 0x1e41dc: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x1e41dcu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1e41e0:
    // 0x1e41e0: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x1e41e0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1e41e4:
    // 0x1e41e4: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1e41e4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1e41e8:
    // 0x1e41e8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1e41e8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1e41ec:
    // 0x1e41ec: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1e41ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1e41f0:
    // 0x1e41f0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1e41f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1e41f4:
    // 0x1e41f4: 0x8c63ea64  lw          $v1, -0x159C($v1)
    ctx->pc = 0x1e41f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1e41f8:
    // 0x1e41f8: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1e41f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1e41fc:
    // 0x1e41fc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1e41fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e4200:
    // 0x1e4200: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1e4204:
    if (ctx->pc == 0x1E4204u) {
        ctx->pc = 0x1E4204u;
            // 0x1e4204: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x1E4208u;
        goto label_1e4208;
    }
    ctx->pc = 0x1E4200u;
    {
        const bool branch_taken_0x1e4200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4200u;
            // 0x1e4204: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4200) {
            ctx->pc = 0x1E4230u;
            goto label_1e4230;
        }
    }
    ctx->pc = 0x1E4208u;
label_1e4208:
    // 0x1e4208: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1e4208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1e420c:
    // 0x1e420c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1e420cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1e4210:
    // 0x1e4210: 0x2442a8a0  addiu       $v0, $v0, -0x5760
    ctx->pc = 0x1e4210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944928));
label_1e4214:
    // 0x1e4214: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e4214u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1e4218:
    // 0x1e4218: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e4218u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1e421c:
    // 0x1e421c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1e421cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1e4220:
    // 0x1e4220: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e4220u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_1e4224:
    // 0x1e4224: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1e4224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1e4228:
    // 0x1e4228: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1e4228u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_1e422c:
    // 0x1e422c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1e422cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1e4230:
    // 0x1e4230: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1e4230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e4234:
    // 0x1e4234: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1e4234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_1e4238:
    // 0x1e4238: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1e4238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e423c:
    // 0x1e423c: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1e423cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1e4240:
    // 0x1e4240: 0xc4640010  lwc1        $f4, 0x10($v1)
    ctx->pc = 0x1e4240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1e4244:
    // 0x1e4244: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x1e4244u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1e4248:
    // 0x1e4248: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x1e4248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e424c:
    // 0x1e424c: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x1e424cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e4250:
    // 0x1e4250: 0xc4620020  lwc1        $f2, 0x20($v1)
    ctx->pc = 0x1e4250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e4254:
    // 0x1e4254: 0x46040e40  add.s       $f25, $f1, $f4
    ctx->pc = 0x1e4254u;
    ctx->f[25] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_1e4258:
    // 0x1e4258: 0x46040680  add.s       $f26, $f0, $f4
    ctx->pc = 0x1e4258u;
    ctx->f[26] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_1e425c:
    // 0x1e425c: 0xc461002c  lwc1        $f1, 0x2C($v1)
    ctx->pc = 0x1e425cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e4260:
    // 0x1e4260: 0x46041600  add.s       $f24, $f2, $f4
    ctx->pc = 0x1e4260u;
    ctx->f[24] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_1e4264:
    // 0x1e4264: 0x46040ec0  add.s       $f27, $f1, $f4
    ctx->pc = 0x1e4264u;
    ctx->f[27] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_1e4268:
    // 0x1e4268: 0xc4430010  lwc1        $f3, 0x10($v0)
    ctx->pc = 0x1e4268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e426c:
    // 0x1e426c: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x1e426cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e4270:
    // 0x1e4270: 0xc4420024  lwc1        $f2, 0x24($v0)
    ctx->pc = 0x1e4270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e4274:
    // 0x1e4274: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x1e4274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e4278:
    // 0x1e4278: 0x46030500  add.s       $f20, $f0, $f3
    ctx->pc = 0x1e4278u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1e427c:
    // 0x1e427c: 0xc440002c  lwc1        $f0, 0x2C($v0)
    ctx->pc = 0x1e427cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e4280:
    // 0x1e4280: 0x46031540  add.s       $f21, $f2, $f3
    ctx->pc = 0x1e4280u;
    ctx->f[21] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_1e4284:
    // 0x1e4284: 0x46030d80  add.s       $f22, $f1, $f3
    ctx->pc = 0x1e4284u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1e4288:
    // 0x1e4288: 0xc0a45a0  jal         func_291680
label_1e428c:
    if (ctx->pc == 0x1E428Cu) {
        ctx->pc = 0x1E428Cu;
            // 0x1e428c: 0x460305c0  add.s       $f23, $f0, $f3 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        ctx->pc = 0x1E4290u;
        goto label_1e4290;
    }
    ctx->pc = 0x1E4288u;
    SET_GPR_U32(ctx, 31, 0x1E4290u);
    ctx->pc = 0x1E428Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4288u;
            // 0x1e428c: 0x460305c0  add.s       $f23, $f0, $f3 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x291680u;
    if (runtime->hasFunction(0x291680u)) {
        auto targetFn = runtime->lookupFunction(0x291680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4290u; }
        if (ctx->pc != 0x1E4290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291680_0x291680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4290u; }
        if (ctx->pc != 0x1E4290u) { return; }
    }
    ctx->pc = 0x1E4290u;
label_1e4290:
    // 0x1e4290: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1e4290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e4294:
    // 0x1e4294: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1e4294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1e4298:
    // 0x1e4298: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1e4298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1e429c:
    // 0x1e429c: 0xc7a101b0  lwc1        $f1, 0x1B0($sp)
    ctx->pc = 0x1e429cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e42a0:
    // 0x1e42a0: 0xc7bf01b4  lwc1        $f31, 0x1B4($sp)
    ctx->pc = 0x1e42a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_1e42a4:
    // 0x1e42a4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1e42a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1e42a8:
    // 0x1e42a8: 0xc7be01b8  lwc1        $f30, 0x1B8($sp)
    ctx->pc = 0x1e42a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_1e42ac:
    // 0x1e42ac: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1e42acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_1e42b0:
    // 0x1e42b0: 0xafa50098  sw          $a1, 0x98($sp)
    ctx->pc = 0x1e42b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 5));
label_1e42b4:
    // 0x1e42b4: 0xc7bd01bc  lwc1        $f29, 0x1BC($sp)
    ctx->pc = 0x1e42b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_1e42b8:
    // 0x1e42b8: 0xafa30094  sw          $v1, 0x94($sp)
    ctx->pc = 0x1e42b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 3));
label_1e42bc:
    // 0x1e42bc: 0xc7bc01c0  lwc1        $f28, 0x1C0($sp)
    ctx->pc = 0x1e42bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_1e42c0:
    // 0x1e42c0: 0xafb30080  sw          $s3, 0x80($sp)
    ctx->pc = 0x1e42c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 19));
label_1e42c4:
    // 0x1e42c4: 0xc7b301c4  lwc1        $f19, 0x1C4($sp)
    ctx->pc = 0x1e42c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
label_1e42c8:
    // 0x1e42c8: 0xafb20084  sw          $s2, 0x84($sp)
    ctx->pc = 0x1e42c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 18));
label_1e42cc:
    // 0x1e42cc: 0xc7b201c8  lwc1        $f18, 0x1C8($sp)
    ctx->pc = 0x1e42ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_1e42d0:
    // 0x1e42d0: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x1e42d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
label_1e42d4:
    // 0x1e42d4: 0xc7b101cc  lwc1        $f17, 0x1CC($sp)
    ctx->pc = 0x1e42d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
label_1e42d8:
    // 0x1e42d8: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x1e42d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_1e42dc:
    // 0x1e42dc: 0xc7b001d0  lwc1        $f16, 0x1D0($sp)
    ctx->pc = 0x1e42dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_1e42e0:
    // 0x1e42e0: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x1e42e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_1e42e4:
    // 0x1e42e4: 0xc7af01d4  lwc1        $f15, 0x1D4($sp)
    ctx->pc = 0x1e42e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1e42e8:
    // 0x1e42e8: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x1e42e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1e42ec:
    // 0x1e42ec: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1e42ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1e42f0:
    // 0x1e42f0: 0xe7bf00a4  swc1        $f31, 0xA4($sp)
    ctx->pc = 0x1e42f0u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1e42f4:
    // 0x1e42f4: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1e42f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1e42f8:
    // 0x1e42f8: 0xe7be00a8  swc1        $f30, 0xA8($sp)
    ctx->pc = 0x1e42f8u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_1e42fc:
    // 0x1e42fc: 0xe7bd00ac  swc1        $f29, 0xAC($sp)
    ctx->pc = 0x1e42fcu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_1e4300:
    // 0x1e4300: 0xe7bc00b0  swc1        $f28, 0xB0($sp)
    ctx->pc = 0x1e4300u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1e4304:
    // 0x1e4304: 0xe7b300b4  swc1        $f19, 0xB4($sp)
    ctx->pc = 0x1e4304u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_1e4308:
    // 0x1e4308: 0xe7b200b8  swc1        $f18, 0xB8($sp)
    ctx->pc = 0x1e4308u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_1e430c:
    // 0x1e430c: 0xe7b100bc  swc1        $f17, 0xBC($sp)
    ctx->pc = 0x1e430cu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_1e4310:
    // 0x1e4310: 0xe7b000c0  swc1        $f16, 0xC0($sp)
    ctx->pc = 0x1e4310u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1e4314:
    // 0x1e4314: 0xc7ae01d8  lwc1        $f14, 0x1D8($sp)
    ctx->pc = 0x1e4314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1e4318:
    // 0x1e4318: 0xe7af00c4  swc1        $f15, 0xC4($sp)
    ctx->pc = 0x1e4318u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1e431c:
    // 0x1e431c: 0xc7ad01dc  lwc1        $f13, 0x1DC($sp)
    ctx->pc = 0x1e431cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1e4320:
    // 0x1e4320: 0xe7ae00c8  swc1        $f14, 0xC8($sp)
    ctx->pc = 0x1e4320u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1e4324:
    // 0x1e4324: 0xc7ac01e0  lwc1        $f12, 0x1E0($sp)
    ctx->pc = 0x1e4324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e4328:
    // 0x1e4328: 0xe7ad00cc  swc1        $f13, 0xCC($sp)
    ctx->pc = 0x1e4328u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1e432c:
    // 0x1e432c: 0xc7ab01e4  lwc1        $f11, 0x1E4($sp)
    ctx->pc = 0x1e432cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1e4330:
    // 0x1e4330: 0xe7ac00d0  swc1        $f12, 0xD0($sp)
    ctx->pc = 0x1e4330u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1e4334:
    // 0x1e4334: 0xc7aa01e8  lwc1        $f10, 0x1E8($sp)
    ctx->pc = 0x1e4334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1e4338:
    // 0x1e4338: 0xe7ab00d4  swc1        $f11, 0xD4($sp)
    ctx->pc = 0x1e4338u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_1e433c:
    // 0x1e433c: 0xc7a901ec  lwc1        $f9, 0x1EC($sp)
    ctx->pc = 0x1e433cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1e4340:
    // 0x1e4340: 0xe7aa00d8  swc1        $f10, 0xD8($sp)
    ctx->pc = 0x1e4340u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1e4344:
    // 0x1e4344: 0x46180200  add.s       $f8, $f0, $f24
    ctx->pc = 0x1e4344u;
    ctx->f[8] = FPU_ADD_S(ctx->f[0], ctx->f[24]);
label_1e4348:
    // 0x1e4348: 0xe7a900dc  swc1        $f9, 0xDC($sp)
    ctx->pc = 0x1e4348u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_1e434c:
    // 0x1e434c: 0x461901c0  add.s       $f7, $f0, $f25
    ctx->pc = 0x1e434cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[0], ctx->f[25]);
label_1e4350:
    // 0x1e4350: 0xafa20134  sw          $v0, 0x134($sp)
    ctx->pc = 0x1e4350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
label_1e4354:
    // 0x1e4354: 0x461a0180  add.s       $f6, $f0, $f26
    ctx->pc = 0x1e4354u;
    ctx->f[6] = FPU_ADD_S(ctx->f[0], ctx->f[26]);
label_1e4358:
    // 0x1e4358: 0x461b0140  add.s       $f5, $f0, $f27
    ctx->pc = 0x1e4358u;
    ctx->f[5] = FPU_ADD_S(ctx->f[0], ctx->f[27]);
label_1e435c:
    // 0x1e435c: 0x46140100  add.s       $f4, $f0, $f20
    ctx->pc = 0x1e435cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1e4360:
    // 0x1e4360: 0x461500c0  add.s       $f3, $f0, $f21
    ctx->pc = 0x1e4360u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_1e4364:
    // 0x1e4364: 0x46160080  add.s       $f2, $f0, $f22
    ctx->pc = 0x1e4364u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_1e4368:
    // 0x1e4368: 0x46170040  add.s       $f1, $f0, $f23
    ctx->pc = 0x1e4368u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
label_1e436c:
    // 0x1e436c: 0xe7a40120  swc1        $f4, 0x120($sp)
    ctx->pc = 0x1e436cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_1e4370:
    // 0x1e4370: 0xe7a5011c  swc1        $f5, 0x11C($sp)
    ctx->pc = 0x1e4370u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_1e4374:
    // 0x1e4374: 0xe7a1012c  swc1        $f1, 0x12C($sp)
    ctx->pc = 0x1e4374u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_1e4378:
    // 0x1e4378: 0xc7a400d4  lwc1        $f4, 0xD4($sp)
    ctx->pc = 0x1e4378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1e437c:
    // 0x1e437c: 0xe7a30124  swc1        $f3, 0x124($sp)
    ctx->pc = 0x1e437cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_1e4380:
    // 0x1e4380: 0xe7a20128  swc1        $f2, 0x128($sp)
    ctx->pc = 0x1e4380u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_1e4384:
    // 0x1e4384: 0xc7a500d0  lwc1        $f5, 0xD0($sp)
    ctx->pc = 0x1e4384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1e4388:
    // 0x1e4388: 0xc7a300d8  lwc1        $f3, 0xD8($sp)
    ctx->pc = 0x1e4388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e438c:
    // 0x1e438c: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x1e438cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_1e4390:
    // 0x1e4390: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x1e4390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1e4394:
    // 0x1e4394: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x1e4394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_1e4398:
    // 0x1e4398: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x1e4398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_1e439c:
    // 0x1e439c: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x1e439cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_1e43a0:
    // 0x1e43a0: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x1e43a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e43a4:
    // 0x1e43a4: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x1e43a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e43a8:
    // 0x1e43a8: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x1e43a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e43ac:
    // 0x1e43ac: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x1e43acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_1e43b0:
    // 0x1e43b0: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1e43b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e43b4:
    // 0x1e43b4: 0xe7b800e0  swc1        $f24, 0xE0($sp)
    ctx->pc = 0x1e43b4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1e43b8:
    // 0x1e43b8: 0xe7b900e4  swc1        $f25, 0xE4($sp)
    ctx->pc = 0x1e43b8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_1e43bc:
    // 0x1e43bc: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x1e43bcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1e43c0:
    // 0x1e43c0: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x1e43c0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_1e43c4:
    // 0x1e43c4: 0xe7ba00e8  swc1        $f26, 0xE8($sp)
    ctx->pc = 0x1e43c4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1e43c8:
    // 0x1e43c8: 0xe7bb00ec  swc1        $f27, 0xEC($sp)
    ctx->pc = 0x1e43c8u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_1e43cc:
    // 0x1e43cc: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x1e43ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1e43d0:
    // 0x1e43d0: 0xe7b500f4  swc1        $f21, 0xF4($sp)
    ctx->pc = 0x1e43d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_1e43d4:
    // 0x1e43d4: 0xe7b600f8  swc1        $f22, 0xF8($sp)
    ctx->pc = 0x1e43d4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1e43d8:
    // 0x1e43d8: 0xe7b700fc  swc1        $f23, 0xFC($sp)
    ctx->pc = 0x1e43d8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_1e43dc:
    // 0x1e43dc: 0xe7a80110  swc1        $f8, 0x110($sp)
    ctx->pc = 0x1e43dcu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_1e43e0:
    // 0x1e43e0: 0xe7a70114  swc1        $f7, 0x114($sp)
    ctx->pc = 0x1e43e0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_1e43e4:
    // 0x1e43e4: 0xe7a60118  swc1        $f6, 0x118($sp)
    ctx->pc = 0x1e43e4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_1e43e8:
    // 0x1e43e8: 0xe7a50140  swc1        $f5, 0x140($sp)
    ctx->pc = 0x1e43e8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_1e43ec:
    // 0x1e43ec: 0xe7a40144  swc1        $f4, 0x144($sp)
    ctx->pc = 0x1e43ecu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_1e43f0:
    // 0x1e43f0: 0xe7a30148  swc1        $f3, 0x148($sp)
    ctx->pc = 0x1e43f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_1e43f4:
    // 0x1e43f4: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1e43f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1e43f8:
    // 0x1e43f8: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1e43f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_1e43fc:
    // 0x1e43fc: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1e43fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e4400:
    // 0x1e4400: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x1e4400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e4404:
    // 0x1e4404: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x1e4404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e4408:
    // 0x1e4408: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x1e4408u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1e440c:
    // 0x1e440c: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x1e440cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_1e4410:
    // 0x1e4410: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1e4410u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1e4414:
    // 0x1e4414: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x1e4414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_1e4418:
    // 0x1e4418: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1e4418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e441c:
    // 0x1e441c: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x1e441cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e4420:
    // 0x1e4420: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x1e4420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e4424:
    // 0x1e4424: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x1e4424u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1e4428:
    // 0x1e4428: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x1e4428u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_1e442c:
    // 0x1e442c: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1e442cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1e4430:
    // 0x1e4430: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x1e4430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_1e4434:
    // 0x1e4434: 0xc092d40  jal         func_24B500
label_1e4438:
    if (ctx->pc == 0x1E4438u) {
        ctx->pc = 0x1E4438u;
            // 0x1e4438: 0xafa0015c  sw          $zero, 0x15C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
        ctx->pc = 0x1E443Cu;
        goto label_1e443c;
    }
    ctx->pc = 0x1E4434u;
    SET_GPR_U32(ctx, 31, 0x1E443Cu);
    ctx->pc = 0x1E4438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4434u;
            // 0x1e4438: 0xafa0015c  sw          $zero, 0x15C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24B500u;
    if (runtime->hasFunction(0x24B500u)) {
        auto targetFn = runtime->lookupFunction(0x24B500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E443Cu; }
        if (ctx->pc != 0x1E443Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024B500_0x24b500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E443Cu; }
        if (ctx->pc != 0x1E443Cu) { return; }
    }
    ctx->pc = 0x1E443Cu;
label_1e443c:
    // 0x1e443c: 0x401826  xor         $v1, $v0, $zero
    ctx->pc = 0x1e443cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_1e4440:
    // 0x1e4440: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1e4440u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1e4444:
    // 0x1e4444: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1e4448:
    if (ctx->pc == 0x1E4448u) {
        ctx->pc = 0x1E444Cu;
        goto label_1e444c;
    }
    ctx->pc = 0x1E4444u;
    {
        const bool branch_taken_0x1e4444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4444) {
            ctx->pc = 0x1E4464u;
            goto label_1e4464;
        }
    }
    ctx->pc = 0x1E444Cu;
label_1e444c:
    // 0x1e444c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1e444cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e4450:
    // 0x1e4450: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e4450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e4454:
    // 0x1e4454: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1e4454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e4458:
    // 0x1e4458: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1e4458u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1e445c:
    // 0x1e445c: 0x320f809  jalr        $t9
label_1e4460:
    if (ctx->pc == 0x1E4460u) {
        ctx->pc = 0x1E4460u;
            // 0x1e4460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4464u;
        goto label_1e4464;
    }
    ctx->pc = 0x1E445Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4464u);
        ctx->pc = 0x1E4460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E445Cu;
            // 0x1e4460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E4464u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E4464u; }
            if (ctx->pc != 0x1E4464u) { return; }
        }
        }
    }
    ctx->pc = 0x1E4464u;
label_1e4464:
    // 0x1e4464: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1e4464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1e4468:
    // 0x1e4468: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1e4468u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1e446c:
    // 0x1e446c: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1e446cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1e4470:
    // 0x1e4470: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1e4470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1e4474:
    // 0x1e4474: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1e4474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1e4478:
    // 0x1e4478: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1e4478u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e447c:
    // 0x1e447c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1e4480:
    if (ctx->pc == 0x1E4480u) {
        ctx->pc = 0x1E4480u;
            // 0x1e4480: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1E4484u;
        goto label_1e4484;
    }
    ctx->pc = 0x1E447Cu;
    {
        const bool branch_taken_0x1e447c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E447Cu;
            // 0x1e4480: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e447c) {
            ctx->pc = 0x1E44ACu;
            goto label_1e44ac;
        }
    }
    ctx->pc = 0x1E4484u;
label_1e4484:
    // 0x1e4484: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1e4484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1e4488:
    // 0x1e4488: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1e4488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1e448c:
    // 0x1e448c: 0x2463a8b0  addiu       $v1, $v1, -0x5750
    ctx->pc = 0x1e448cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944944));
label_1e4490:
    // 0x1e4490: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1e4490u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1e4494:
    // 0x1e4494: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e4494u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1e4498:
    // 0x1e4498: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1e4498u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1e449c:
    // 0x1e449c: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e449cu;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1e44a0:
    // 0x1e44a0: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1e44a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1e44a4:
    // 0x1e44a4: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1e44a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1e44a8:
    // 0x1e44a8: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1e44a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1e44ac:
    // 0x1e44ac: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1e44acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1e44b0:
    // 0x1e44b0: 0xc7bf002c  lwc1        $f31, 0x2C($sp)
    ctx->pc = 0x1e44b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_1e44b4:
    // 0x1e44b4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1e44b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e44b8:
    // 0x1e44b8: 0xc7be0028  lwc1        $f30, 0x28($sp)
    ctx->pc = 0x1e44b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_1e44bc:
    // 0x1e44bc: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1e44bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e44c0:
    // 0x1e44c0: 0xc7bd0024  lwc1        $f29, 0x24($sp)
    ctx->pc = 0x1e44c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_1e44c4:
    // 0x1e44c4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1e44c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e44c8:
    // 0x1e44c8: 0xc7bc0020  lwc1        $f28, 0x20($sp)
    ctx->pc = 0x1e44c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_1e44cc:
    // 0x1e44cc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1e44ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e44d0:
    // 0x1e44d0: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x1e44d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_1e44d4:
    // 0x1e44d4: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x1e44d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_1e44d8:
    // 0x1e44d8: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x1e44d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_1e44dc:
    // 0x1e44dc: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x1e44dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_1e44e0:
    // 0x1e44e0: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1e44e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1e44e4:
    // 0x1e44e4: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1e44e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1e44e8:
    // 0x1e44e8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1e44e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1e44ec:
    // 0x1e44ec: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e44ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e44f0:
    // 0x1e44f0: 0x3e00008  jr          $ra
label_1e44f4:
    if (ctx->pc == 0x1E44F4u) {
        ctx->pc = 0x1E44F4u;
            // 0x1e44f4: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x1E44F8u;
        goto label_1e44f8;
    }
    ctx->pc = 0x1E44F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E44F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E44F0u;
            // 0x1e44f4: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E44F8u;
label_1e44f8:
    // 0x1e44f8: 0x0  nop
    ctx->pc = 0x1e44f8u;
    // NOP
label_1e44fc:
    // 0x1e44fc: 0x0  nop
    ctx->pc = 0x1e44fcu;
    // NOP
label_1e4500:
    // 0x1e4500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e4500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e4504:
    // 0x1e4504: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1e4504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e4508:
    // 0x1e4508: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1e4508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e450c:
    // 0x1e450c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e450cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e4510:
    // 0x1e4510: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1e4510u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e4514:
    // 0x1e4514: 0xc079064  jal         func_1E4190
label_1e4518:
    if (ctx->pc == 0x1E4518u) {
        ctx->pc = 0x1E4518u;
            // 0x1e4518: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E451Cu;
        goto label_1e451c;
    }
    ctx->pc = 0x1E4514u;
    SET_GPR_U32(ctx, 31, 0x1E451Cu);
    ctx->pc = 0x1E4518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4514u;
            // 0x1e4518: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E4190u;
    goto label_1e4190;
    ctx->pc = 0x1E451Cu;
label_1e451c:
    // 0x1e451c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e451cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4520:
    // 0x1e4520: 0x3e00008  jr          $ra
label_1e4524:
    if (ctx->pc == 0x1E4524u) {
        ctx->pc = 0x1E4524u;
            // 0x1e4524: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1E4528u;
        goto label_1e4528;
    }
    ctx->pc = 0x1E4520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4520u;
            // 0x1e4524: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4528u;
label_1e4528:
    // 0x1e4528: 0x0  nop
    ctx->pc = 0x1e4528u;
    // NOP
label_1e452c:
    // 0x1e452c: 0x0  nop
    ctx->pc = 0x1e452cu;
    // NOP
label_1e4530:
    // 0x1e4530: 0x3e00008  jr          $ra
label_1e4534:
    if (ctx->pc == 0x1E4534u) {
        ctx->pc = 0x1E4538u;
        goto label_1e4538;
    }
    ctx->pc = 0x1E4530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4538u;
label_1e4538:
    // 0x1e4538: 0x0  nop
    ctx->pc = 0x1e4538u;
    // NOP
label_1e453c:
    // 0x1e453c: 0x0  nop
    ctx->pc = 0x1e453cu;
    // NOP
}
