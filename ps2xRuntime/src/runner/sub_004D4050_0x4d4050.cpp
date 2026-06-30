#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D4050
// Address: 0x4d4050 - 0x4d44f0
void sub_004D4050_0x4d4050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D4050_0x4d4050");
#endif

    switch (ctx->pc) {
        case 0x4d4050u: goto label_4d4050;
        case 0x4d4054u: goto label_4d4054;
        case 0x4d4058u: goto label_4d4058;
        case 0x4d405cu: goto label_4d405c;
        case 0x4d4060u: goto label_4d4060;
        case 0x4d4064u: goto label_4d4064;
        case 0x4d4068u: goto label_4d4068;
        case 0x4d406cu: goto label_4d406c;
        case 0x4d4070u: goto label_4d4070;
        case 0x4d4074u: goto label_4d4074;
        case 0x4d4078u: goto label_4d4078;
        case 0x4d407cu: goto label_4d407c;
        case 0x4d4080u: goto label_4d4080;
        case 0x4d4084u: goto label_4d4084;
        case 0x4d4088u: goto label_4d4088;
        case 0x4d408cu: goto label_4d408c;
        case 0x4d4090u: goto label_4d4090;
        case 0x4d4094u: goto label_4d4094;
        case 0x4d4098u: goto label_4d4098;
        case 0x4d409cu: goto label_4d409c;
        case 0x4d40a0u: goto label_4d40a0;
        case 0x4d40a4u: goto label_4d40a4;
        case 0x4d40a8u: goto label_4d40a8;
        case 0x4d40acu: goto label_4d40ac;
        case 0x4d40b0u: goto label_4d40b0;
        case 0x4d40b4u: goto label_4d40b4;
        case 0x4d40b8u: goto label_4d40b8;
        case 0x4d40bcu: goto label_4d40bc;
        case 0x4d40c0u: goto label_4d40c0;
        case 0x4d40c4u: goto label_4d40c4;
        case 0x4d40c8u: goto label_4d40c8;
        case 0x4d40ccu: goto label_4d40cc;
        case 0x4d40d0u: goto label_4d40d0;
        case 0x4d40d4u: goto label_4d40d4;
        case 0x4d40d8u: goto label_4d40d8;
        case 0x4d40dcu: goto label_4d40dc;
        case 0x4d40e0u: goto label_4d40e0;
        case 0x4d40e4u: goto label_4d40e4;
        case 0x4d40e8u: goto label_4d40e8;
        case 0x4d40ecu: goto label_4d40ec;
        case 0x4d40f0u: goto label_4d40f0;
        case 0x4d40f4u: goto label_4d40f4;
        case 0x4d40f8u: goto label_4d40f8;
        case 0x4d40fcu: goto label_4d40fc;
        case 0x4d4100u: goto label_4d4100;
        case 0x4d4104u: goto label_4d4104;
        case 0x4d4108u: goto label_4d4108;
        case 0x4d410cu: goto label_4d410c;
        case 0x4d4110u: goto label_4d4110;
        case 0x4d4114u: goto label_4d4114;
        case 0x4d4118u: goto label_4d4118;
        case 0x4d411cu: goto label_4d411c;
        case 0x4d4120u: goto label_4d4120;
        case 0x4d4124u: goto label_4d4124;
        case 0x4d4128u: goto label_4d4128;
        case 0x4d412cu: goto label_4d412c;
        case 0x4d4130u: goto label_4d4130;
        case 0x4d4134u: goto label_4d4134;
        case 0x4d4138u: goto label_4d4138;
        case 0x4d413cu: goto label_4d413c;
        case 0x4d4140u: goto label_4d4140;
        case 0x4d4144u: goto label_4d4144;
        case 0x4d4148u: goto label_4d4148;
        case 0x4d414cu: goto label_4d414c;
        case 0x4d4150u: goto label_4d4150;
        case 0x4d4154u: goto label_4d4154;
        case 0x4d4158u: goto label_4d4158;
        case 0x4d415cu: goto label_4d415c;
        case 0x4d4160u: goto label_4d4160;
        case 0x4d4164u: goto label_4d4164;
        case 0x4d4168u: goto label_4d4168;
        case 0x4d416cu: goto label_4d416c;
        case 0x4d4170u: goto label_4d4170;
        case 0x4d4174u: goto label_4d4174;
        case 0x4d4178u: goto label_4d4178;
        case 0x4d417cu: goto label_4d417c;
        case 0x4d4180u: goto label_4d4180;
        case 0x4d4184u: goto label_4d4184;
        case 0x4d4188u: goto label_4d4188;
        case 0x4d418cu: goto label_4d418c;
        case 0x4d4190u: goto label_4d4190;
        case 0x4d4194u: goto label_4d4194;
        case 0x4d4198u: goto label_4d4198;
        case 0x4d419cu: goto label_4d419c;
        case 0x4d41a0u: goto label_4d41a0;
        case 0x4d41a4u: goto label_4d41a4;
        case 0x4d41a8u: goto label_4d41a8;
        case 0x4d41acu: goto label_4d41ac;
        case 0x4d41b0u: goto label_4d41b0;
        case 0x4d41b4u: goto label_4d41b4;
        case 0x4d41b8u: goto label_4d41b8;
        case 0x4d41bcu: goto label_4d41bc;
        case 0x4d41c0u: goto label_4d41c0;
        case 0x4d41c4u: goto label_4d41c4;
        case 0x4d41c8u: goto label_4d41c8;
        case 0x4d41ccu: goto label_4d41cc;
        case 0x4d41d0u: goto label_4d41d0;
        case 0x4d41d4u: goto label_4d41d4;
        case 0x4d41d8u: goto label_4d41d8;
        case 0x4d41dcu: goto label_4d41dc;
        case 0x4d41e0u: goto label_4d41e0;
        case 0x4d41e4u: goto label_4d41e4;
        case 0x4d41e8u: goto label_4d41e8;
        case 0x4d41ecu: goto label_4d41ec;
        case 0x4d41f0u: goto label_4d41f0;
        case 0x4d41f4u: goto label_4d41f4;
        case 0x4d41f8u: goto label_4d41f8;
        case 0x4d41fcu: goto label_4d41fc;
        case 0x4d4200u: goto label_4d4200;
        case 0x4d4204u: goto label_4d4204;
        case 0x4d4208u: goto label_4d4208;
        case 0x4d420cu: goto label_4d420c;
        case 0x4d4210u: goto label_4d4210;
        case 0x4d4214u: goto label_4d4214;
        case 0x4d4218u: goto label_4d4218;
        case 0x4d421cu: goto label_4d421c;
        case 0x4d4220u: goto label_4d4220;
        case 0x4d4224u: goto label_4d4224;
        case 0x4d4228u: goto label_4d4228;
        case 0x4d422cu: goto label_4d422c;
        case 0x4d4230u: goto label_4d4230;
        case 0x4d4234u: goto label_4d4234;
        case 0x4d4238u: goto label_4d4238;
        case 0x4d423cu: goto label_4d423c;
        case 0x4d4240u: goto label_4d4240;
        case 0x4d4244u: goto label_4d4244;
        case 0x4d4248u: goto label_4d4248;
        case 0x4d424cu: goto label_4d424c;
        case 0x4d4250u: goto label_4d4250;
        case 0x4d4254u: goto label_4d4254;
        case 0x4d4258u: goto label_4d4258;
        case 0x4d425cu: goto label_4d425c;
        case 0x4d4260u: goto label_4d4260;
        case 0x4d4264u: goto label_4d4264;
        case 0x4d4268u: goto label_4d4268;
        case 0x4d426cu: goto label_4d426c;
        case 0x4d4270u: goto label_4d4270;
        case 0x4d4274u: goto label_4d4274;
        case 0x4d4278u: goto label_4d4278;
        case 0x4d427cu: goto label_4d427c;
        case 0x4d4280u: goto label_4d4280;
        case 0x4d4284u: goto label_4d4284;
        case 0x4d4288u: goto label_4d4288;
        case 0x4d428cu: goto label_4d428c;
        case 0x4d4290u: goto label_4d4290;
        case 0x4d4294u: goto label_4d4294;
        case 0x4d4298u: goto label_4d4298;
        case 0x4d429cu: goto label_4d429c;
        case 0x4d42a0u: goto label_4d42a0;
        case 0x4d42a4u: goto label_4d42a4;
        case 0x4d42a8u: goto label_4d42a8;
        case 0x4d42acu: goto label_4d42ac;
        case 0x4d42b0u: goto label_4d42b0;
        case 0x4d42b4u: goto label_4d42b4;
        case 0x4d42b8u: goto label_4d42b8;
        case 0x4d42bcu: goto label_4d42bc;
        case 0x4d42c0u: goto label_4d42c0;
        case 0x4d42c4u: goto label_4d42c4;
        case 0x4d42c8u: goto label_4d42c8;
        case 0x4d42ccu: goto label_4d42cc;
        case 0x4d42d0u: goto label_4d42d0;
        case 0x4d42d4u: goto label_4d42d4;
        case 0x4d42d8u: goto label_4d42d8;
        case 0x4d42dcu: goto label_4d42dc;
        case 0x4d42e0u: goto label_4d42e0;
        case 0x4d42e4u: goto label_4d42e4;
        case 0x4d42e8u: goto label_4d42e8;
        case 0x4d42ecu: goto label_4d42ec;
        case 0x4d42f0u: goto label_4d42f0;
        case 0x4d42f4u: goto label_4d42f4;
        case 0x4d42f8u: goto label_4d42f8;
        case 0x4d42fcu: goto label_4d42fc;
        case 0x4d4300u: goto label_4d4300;
        case 0x4d4304u: goto label_4d4304;
        case 0x4d4308u: goto label_4d4308;
        case 0x4d430cu: goto label_4d430c;
        case 0x4d4310u: goto label_4d4310;
        case 0x4d4314u: goto label_4d4314;
        case 0x4d4318u: goto label_4d4318;
        case 0x4d431cu: goto label_4d431c;
        case 0x4d4320u: goto label_4d4320;
        case 0x4d4324u: goto label_4d4324;
        case 0x4d4328u: goto label_4d4328;
        case 0x4d432cu: goto label_4d432c;
        case 0x4d4330u: goto label_4d4330;
        case 0x4d4334u: goto label_4d4334;
        case 0x4d4338u: goto label_4d4338;
        case 0x4d433cu: goto label_4d433c;
        case 0x4d4340u: goto label_4d4340;
        case 0x4d4344u: goto label_4d4344;
        case 0x4d4348u: goto label_4d4348;
        case 0x4d434cu: goto label_4d434c;
        case 0x4d4350u: goto label_4d4350;
        case 0x4d4354u: goto label_4d4354;
        case 0x4d4358u: goto label_4d4358;
        case 0x4d435cu: goto label_4d435c;
        case 0x4d4360u: goto label_4d4360;
        case 0x4d4364u: goto label_4d4364;
        case 0x4d4368u: goto label_4d4368;
        case 0x4d436cu: goto label_4d436c;
        case 0x4d4370u: goto label_4d4370;
        case 0x4d4374u: goto label_4d4374;
        case 0x4d4378u: goto label_4d4378;
        case 0x4d437cu: goto label_4d437c;
        case 0x4d4380u: goto label_4d4380;
        case 0x4d4384u: goto label_4d4384;
        case 0x4d4388u: goto label_4d4388;
        case 0x4d438cu: goto label_4d438c;
        case 0x4d4390u: goto label_4d4390;
        case 0x4d4394u: goto label_4d4394;
        case 0x4d4398u: goto label_4d4398;
        case 0x4d439cu: goto label_4d439c;
        case 0x4d43a0u: goto label_4d43a0;
        case 0x4d43a4u: goto label_4d43a4;
        case 0x4d43a8u: goto label_4d43a8;
        case 0x4d43acu: goto label_4d43ac;
        case 0x4d43b0u: goto label_4d43b0;
        case 0x4d43b4u: goto label_4d43b4;
        case 0x4d43b8u: goto label_4d43b8;
        case 0x4d43bcu: goto label_4d43bc;
        case 0x4d43c0u: goto label_4d43c0;
        case 0x4d43c4u: goto label_4d43c4;
        case 0x4d43c8u: goto label_4d43c8;
        case 0x4d43ccu: goto label_4d43cc;
        case 0x4d43d0u: goto label_4d43d0;
        case 0x4d43d4u: goto label_4d43d4;
        case 0x4d43d8u: goto label_4d43d8;
        case 0x4d43dcu: goto label_4d43dc;
        case 0x4d43e0u: goto label_4d43e0;
        case 0x4d43e4u: goto label_4d43e4;
        case 0x4d43e8u: goto label_4d43e8;
        case 0x4d43ecu: goto label_4d43ec;
        case 0x4d43f0u: goto label_4d43f0;
        case 0x4d43f4u: goto label_4d43f4;
        case 0x4d43f8u: goto label_4d43f8;
        case 0x4d43fcu: goto label_4d43fc;
        case 0x4d4400u: goto label_4d4400;
        case 0x4d4404u: goto label_4d4404;
        case 0x4d4408u: goto label_4d4408;
        case 0x4d440cu: goto label_4d440c;
        case 0x4d4410u: goto label_4d4410;
        case 0x4d4414u: goto label_4d4414;
        case 0x4d4418u: goto label_4d4418;
        case 0x4d441cu: goto label_4d441c;
        case 0x4d4420u: goto label_4d4420;
        case 0x4d4424u: goto label_4d4424;
        case 0x4d4428u: goto label_4d4428;
        case 0x4d442cu: goto label_4d442c;
        case 0x4d4430u: goto label_4d4430;
        case 0x4d4434u: goto label_4d4434;
        case 0x4d4438u: goto label_4d4438;
        case 0x4d443cu: goto label_4d443c;
        case 0x4d4440u: goto label_4d4440;
        case 0x4d4444u: goto label_4d4444;
        case 0x4d4448u: goto label_4d4448;
        case 0x4d444cu: goto label_4d444c;
        case 0x4d4450u: goto label_4d4450;
        case 0x4d4454u: goto label_4d4454;
        case 0x4d4458u: goto label_4d4458;
        case 0x4d445cu: goto label_4d445c;
        case 0x4d4460u: goto label_4d4460;
        case 0x4d4464u: goto label_4d4464;
        case 0x4d4468u: goto label_4d4468;
        case 0x4d446cu: goto label_4d446c;
        case 0x4d4470u: goto label_4d4470;
        case 0x4d4474u: goto label_4d4474;
        case 0x4d4478u: goto label_4d4478;
        case 0x4d447cu: goto label_4d447c;
        case 0x4d4480u: goto label_4d4480;
        case 0x4d4484u: goto label_4d4484;
        case 0x4d4488u: goto label_4d4488;
        case 0x4d448cu: goto label_4d448c;
        case 0x4d4490u: goto label_4d4490;
        case 0x4d4494u: goto label_4d4494;
        case 0x4d4498u: goto label_4d4498;
        case 0x4d449cu: goto label_4d449c;
        case 0x4d44a0u: goto label_4d44a0;
        case 0x4d44a4u: goto label_4d44a4;
        case 0x4d44a8u: goto label_4d44a8;
        case 0x4d44acu: goto label_4d44ac;
        case 0x4d44b0u: goto label_4d44b0;
        case 0x4d44b4u: goto label_4d44b4;
        case 0x4d44b8u: goto label_4d44b8;
        case 0x4d44bcu: goto label_4d44bc;
        case 0x4d44c0u: goto label_4d44c0;
        case 0x4d44c4u: goto label_4d44c4;
        case 0x4d44c8u: goto label_4d44c8;
        case 0x4d44ccu: goto label_4d44cc;
        case 0x4d44d0u: goto label_4d44d0;
        case 0x4d44d4u: goto label_4d44d4;
        case 0x4d44d8u: goto label_4d44d8;
        case 0x4d44dcu: goto label_4d44dc;
        case 0x4d44e0u: goto label_4d44e0;
        case 0x4d44e4u: goto label_4d44e4;
        case 0x4d44e8u: goto label_4d44e8;
        case 0x4d44ecu: goto label_4d44ec;
        default: break;
    }

    ctx->pc = 0x4d4050u;

label_4d4050:
    // 0x4d4050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d4050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4d4054:
    // 0x4d4054: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d4054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4d4058:
    // 0x4d4058: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d4058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d405c:
    // 0x4d405c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d405cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d4060:
    // 0x4d4060: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4d4060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d4064:
    // 0x4d4064: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_4d4068:
    if (ctx->pc == 0x4D4068u) {
        ctx->pc = 0x4D4068u;
            // 0x4d4068: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D406Cu;
        goto label_4d406c;
    }
    ctx->pc = 0x4D4064u;
    {
        const bool branch_taken_0x4d4064 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D4068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4064u;
            // 0x4d4068: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d4064) {
            ctx->pc = 0x4D4198u;
            goto label_4d4198;
        }
    }
    ctx->pc = 0x4D406Cu;
label_4d406c:
    // 0x4d406c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d406cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d4070:
    // 0x4d4070: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d4070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4d4074:
    // 0x4d4074: 0x24632470  addiu       $v1, $v1, 0x2470
    ctx->pc = 0x4d4074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9328));
label_4d4078:
    // 0x4d4078: 0x3c05004d  lui         $a1, 0x4D
    ctx->pc = 0x4d4078u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)77 << 16));
label_4d407c:
    // 0x4d407c: 0x244224a8  addiu       $v0, $v0, 0x24A8
    ctx->pc = 0x4d407cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9384));
label_4d4080:
    // 0x4d4080: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4d4080u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4d4084:
    // 0x4d4084: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4d4084u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4d4088:
    // 0x4d4088: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x4d4088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4d408c:
    // 0x4d408c: 0xc0407c0  jal         func_101F00
label_4d4090:
    if (ctx->pc == 0x4D4090u) {
        ctx->pc = 0x4D4090u;
            // 0x4d4090: 0x24a541b0  addiu       $a1, $a1, 0x41B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16816));
        ctx->pc = 0x4D4094u;
        goto label_4d4094;
    }
    ctx->pc = 0x4D408Cu;
    SET_GPR_U32(ctx, 31, 0x4D4094u);
    ctx->pc = 0x4D4090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D408Cu;
            // 0x4d4090: 0x24a541b0  addiu       $a1, $a1, 0x41B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4094u; }
        if (ctx->pc != 0x4D4094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4094u; }
        if (ctx->pc != 0x4D4094u) { return; }
    }
    ctx->pc = 0x4D4094u;
label_4d4094:
    // 0x4d4094: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x4d4094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4d4098:
    // 0x4d4098: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4d409c:
    if (ctx->pc == 0x4D409Cu) {
        ctx->pc = 0x4D409Cu;
            // 0x4d409c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x4D40A0u;
        goto label_4d40a0;
    }
    ctx->pc = 0x4D4098u;
    {
        const bool branch_taken_0x4d4098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d4098) {
            ctx->pc = 0x4D409Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4098u;
            // 0x4d409c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D40ACu;
            goto label_4d40ac;
        }
    }
    ctx->pc = 0x4D40A0u;
label_4d40a0:
    // 0x4d40a0: 0xc07507c  jal         func_1D41F0
label_4d40a4:
    if (ctx->pc == 0x4D40A4u) {
        ctx->pc = 0x4D40A4u;
            // 0x4d40a4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x4D40A8u;
        goto label_4d40a8;
    }
    ctx->pc = 0x4D40A0u;
    SET_GPR_U32(ctx, 31, 0x4D40A8u);
    ctx->pc = 0x4D40A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D40A0u;
            // 0x4d40a4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D40A8u; }
        if (ctx->pc != 0x4D40A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D40A8u; }
        if (ctx->pc != 0x4D40A8u) { return; }
    }
    ctx->pc = 0x4D40A8u;
label_4d40a8:
    // 0x4d40a8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x4d40a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4d40ac:
    // 0x4d40ac: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4d40b0:
    if (ctx->pc == 0x4D40B0u) {
        ctx->pc = 0x4D40B0u;
            // 0x4d40b0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x4D40B4u;
        goto label_4d40b4;
    }
    ctx->pc = 0x4D40ACu;
    {
        const bool branch_taken_0x4d40ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d40ac) {
            ctx->pc = 0x4D40B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D40ACu;
            // 0x4d40b0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D40DCu;
            goto label_4d40dc;
        }
    }
    ctx->pc = 0x4D40B4u;
label_4d40b4:
    // 0x4d40b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4d40b8:
    if (ctx->pc == 0x4D40B8u) {
        ctx->pc = 0x4D40BCu;
        goto label_4d40bc;
    }
    ctx->pc = 0x4D40B4u;
    {
        const bool branch_taken_0x4d40b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d40b4) {
            ctx->pc = 0x4D40D8u;
            goto label_4d40d8;
        }
    }
    ctx->pc = 0x4D40BCu;
label_4d40bc:
    // 0x4d40bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4d40c0:
    if (ctx->pc == 0x4D40C0u) {
        ctx->pc = 0x4D40C4u;
        goto label_4d40c4;
    }
    ctx->pc = 0x4D40BCu;
    {
        const bool branch_taken_0x4d40bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d40bc) {
            ctx->pc = 0x4D40D8u;
            goto label_4d40d8;
        }
    }
    ctx->pc = 0x4D40C4u;
label_4d40c4:
    // 0x4d40c4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x4d40c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_4d40c8:
    // 0x4d40c8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4d40cc:
    if (ctx->pc == 0x4D40CCu) {
        ctx->pc = 0x4D40D0u;
        goto label_4d40d0;
    }
    ctx->pc = 0x4D40C8u;
    {
        const bool branch_taken_0x4d40c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d40c8) {
            ctx->pc = 0x4D40D8u;
            goto label_4d40d8;
        }
    }
    ctx->pc = 0x4D40D0u;
label_4d40d0:
    // 0x4d40d0: 0xc0400a8  jal         func_1002A0
label_4d40d4:
    if (ctx->pc == 0x4D40D4u) {
        ctx->pc = 0x4D40D8u;
        goto label_4d40d8;
    }
    ctx->pc = 0x4D40D0u;
    SET_GPR_U32(ctx, 31, 0x4D40D8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D40D8u; }
        if (ctx->pc != 0x4D40D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D40D8u; }
        if (ctx->pc != 0x4D40D8u) { return; }
    }
    ctx->pc = 0x4D40D8u;
label_4d40d8:
    // 0x4d40d8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x4d40d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4d40dc:
    // 0x4d40dc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4d40e0:
    if (ctx->pc == 0x4D40E0u) {
        ctx->pc = 0x4D40E0u;
            // 0x4d40e0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4D40E4u;
        goto label_4d40e4;
    }
    ctx->pc = 0x4D40DCu;
    {
        const bool branch_taken_0x4d40dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d40dc) {
            ctx->pc = 0x4D40E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D40DCu;
            // 0x4d40e0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D410Cu;
            goto label_4d410c;
        }
    }
    ctx->pc = 0x4D40E4u;
label_4d40e4:
    // 0x4d40e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4d40e8:
    if (ctx->pc == 0x4D40E8u) {
        ctx->pc = 0x4D40ECu;
        goto label_4d40ec;
    }
    ctx->pc = 0x4D40E4u;
    {
        const bool branch_taken_0x4d40e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d40e4) {
            ctx->pc = 0x4D4108u;
            goto label_4d4108;
        }
    }
    ctx->pc = 0x4D40ECu;
label_4d40ec:
    // 0x4d40ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4d40f0:
    if (ctx->pc == 0x4D40F0u) {
        ctx->pc = 0x4D40F4u;
        goto label_4d40f4;
    }
    ctx->pc = 0x4D40ECu;
    {
        const bool branch_taken_0x4d40ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d40ec) {
            ctx->pc = 0x4D4108u;
            goto label_4d4108;
        }
    }
    ctx->pc = 0x4D40F4u;
label_4d40f4:
    // 0x4d40f4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x4d40f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4d40f8:
    // 0x4d40f8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4d40fc:
    if (ctx->pc == 0x4D40FCu) {
        ctx->pc = 0x4D4100u;
        goto label_4d4100;
    }
    ctx->pc = 0x4D40F8u;
    {
        const bool branch_taken_0x4d40f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d40f8) {
            ctx->pc = 0x4D4108u;
            goto label_4d4108;
        }
    }
    ctx->pc = 0x4D4100u;
label_4d4100:
    // 0x4d4100: 0xc0400a8  jal         func_1002A0
label_4d4104:
    if (ctx->pc == 0x4D4104u) {
        ctx->pc = 0x4D4108u;
        goto label_4d4108;
    }
    ctx->pc = 0x4D4100u;
    SET_GPR_U32(ctx, 31, 0x4D4108u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4108u; }
        if (ctx->pc != 0x4D4108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4108u; }
        if (ctx->pc != 0x4D4108u) { return; }
    }
    ctx->pc = 0x4D4108u;
label_4d4108:
    // 0x4d4108: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x4d4108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4d410c:
    // 0x4d410c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4d4110:
    if (ctx->pc == 0x4D4110u) {
        ctx->pc = 0x4D4114u;
        goto label_4d4114;
    }
    ctx->pc = 0x4D410Cu;
    {
        const bool branch_taken_0x4d410c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d410c) {
            ctx->pc = 0x4D4128u;
            goto label_4d4128;
        }
    }
    ctx->pc = 0x4D4114u;
label_4d4114:
    // 0x4d4114: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d4114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d4118:
    // 0x4d4118: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4d4118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4d411c:
    // 0x4d411c: 0x24632458  addiu       $v1, $v1, 0x2458
    ctx->pc = 0x4d411cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9304));
label_4d4120:
    // 0x4d4120: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x4d4120u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_4d4124:
    // 0x4d4124: 0xac40aa40  sw          $zero, -0x55C0($v0)
    ctx->pc = 0x4d4124u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945344), GPR_U32(ctx, 0));
label_4d4128:
    // 0x4d4128: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_4d412c:
    if (ctx->pc == 0x4D412Cu) {
        ctx->pc = 0x4D412Cu;
            // 0x4d412c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4D4130u;
        goto label_4d4130;
    }
    ctx->pc = 0x4D4128u;
    {
        const bool branch_taken_0x4d4128 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d4128) {
            ctx->pc = 0x4D412Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4128u;
            // 0x4d412c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D4184u;
            goto label_4d4184;
        }
    }
    ctx->pc = 0x4D4130u;
label_4d4130:
    // 0x4d4130: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4d4130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4d4134:
    // 0x4d4134: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4d4134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4d4138:
    // 0x4d4138: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4d4138u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4d413c:
    // 0x4d413c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x4d413cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4d4140:
    // 0x4d4140: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4d4144:
    if (ctx->pc == 0x4D4144u) {
        ctx->pc = 0x4D4144u;
            // 0x4d4144: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x4D4148u;
        goto label_4d4148;
    }
    ctx->pc = 0x4D4140u;
    {
        const bool branch_taken_0x4d4140 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d4140) {
            ctx->pc = 0x4D4144u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4140u;
            // 0x4d4144: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D415Cu;
            goto label_4d415c;
        }
    }
    ctx->pc = 0x4D4148u;
label_4d4148:
    // 0x4d4148: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d4148u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d414c:
    // 0x4d414c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4d414cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4d4150:
    // 0x4d4150: 0x320f809  jalr        $t9
label_4d4154:
    if (ctx->pc == 0x4D4154u) {
        ctx->pc = 0x4D4154u;
            // 0x4d4154: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4D4158u;
        goto label_4d4158;
    }
    ctx->pc = 0x4D4150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D4158u);
        ctx->pc = 0x4D4154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4150u;
            // 0x4d4154: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D4158u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D4158u; }
            if (ctx->pc != 0x4D4158u) { return; }
        }
        }
    }
    ctx->pc = 0x4D4158u;
label_4d4158:
    // 0x4d4158: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x4d4158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_4d415c:
    // 0x4d415c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4d4160:
    if (ctx->pc == 0x4D4160u) {
        ctx->pc = 0x4D4160u;
            // 0x4d4160: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D4164u;
        goto label_4d4164;
    }
    ctx->pc = 0x4D415Cu;
    {
        const bool branch_taken_0x4d415c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d415c) {
            ctx->pc = 0x4D4160u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D415Cu;
            // 0x4d4160: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D4178u;
            goto label_4d4178;
        }
    }
    ctx->pc = 0x4D4164u;
label_4d4164:
    // 0x4d4164: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d4164u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d4168:
    // 0x4d4168: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4d4168u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4d416c:
    // 0x4d416c: 0x320f809  jalr        $t9
label_4d4170:
    if (ctx->pc == 0x4D4170u) {
        ctx->pc = 0x4D4170u;
            // 0x4d4170: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4D4174u;
        goto label_4d4174;
    }
    ctx->pc = 0x4D416Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D4174u);
        ctx->pc = 0x4D4170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D416Cu;
            // 0x4d4170: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D4174u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D4174u; }
            if (ctx->pc != 0x4D4174u) { return; }
        }
        }
    }
    ctx->pc = 0x4D4174u;
label_4d4174:
    // 0x4d4174: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d4174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d4178:
    // 0x4d4178: 0xc075bf8  jal         func_1D6FE0
label_4d417c:
    if (ctx->pc == 0x4D417Cu) {
        ctx->pc = 0x4D417Cu;
            // 0x4d417c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D4180u;
        goto label_4d4180;
    }
    ctx->pc = 0x4D4178u;
    SET_GPR_U32(ctx, 31, 0x4D4180u);
    ctx->pc = 0x4D417Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4178u;
            // 0x4d417c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4180u; }
        if (ctx->pc != 0x4D4180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4180u; }
        if (ctx->pc != 0x4D4180u) { return; }
    }
    ctx->pc = 0x4D4180u;
label_4d4180:
    // 0x4d4180: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4d4180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4d4184:
    // 0x4d4184: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4d4184u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4d4188:
    // 0x4d4188: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4d418c:
    if (ctx->pc == 0x4D418Cu) {
        ctx->pc = 0x4D418Cu;
            // 0x4d418c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D4190u;
        goto label_4d4190;
    }
    ctx->pc = 0x4D4188u;
    {
        const bool branch_taken_0x4d4188 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4d4188) {
            ctx->pc = 0x4D418Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4188u;
            // 0x4d418c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D419Cu;
            goto label_4d419c;
        }
    }
    ctx->pc = 0x4D4190u;
label_4d4190:
    // 0x4d4190: 0xc0400a8  jal         func_1002A0
label_4d4194:
    if (ctx->pc == 0x4D4194u) {
        ctx->pc = 0x4D4194u;
            // 0x4d4194: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D4198u;
        goto label_4d4198;
    }
    ctx->pc = 0x4D4190u;
    SET_GPR_U32(ctx, 31, 0x4D4198u);
    ctx->pc = 0x4D4194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4190u;
            // 0x4d4194: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4198u; }
        if (ctx->pc != 0x4D4198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4198u; }
        if (ctx->pc != 0x4D4198u) { return; }
    }
    ctx->pc = 0x4D4198u;
label_4d4198:
    // 0x4d4198: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4d4198u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d419c:
    // 0x4d419c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d419cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d41a0:
    // 0x4d41a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d41a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d41a4:
    // 0x4d41a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d41a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d41a8:
    // 0x4d41a8: 0x3e00008  jr          $ra
label_4d41ac:
    if (ctx->pc == 0x4D41ACu) {
        ctx->pc = 0x4D41ACu;
            // 0x4d41ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4D41B0u;
        goto label_4d41b0;
    }
    ctx->pc = 0x4D41A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D41ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D41A8u;
            // 0x4d41ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D41B0u;
label_4d41b0:
    // 0x4d41b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d41b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4d41b4:
    // 0x4d41b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d41b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4d41b8:
    // 0x4d41b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d41b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d41bc:
    // 0x4d41bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d41bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d41c0:
    // 0x4d41c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4d41c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d41c4:
    // 0x4d41c4: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_4d41c8:
    if (ctx->pc == 0x4D41C8u) {
        ctx->pc = 0x4D41C8u;
            // 0x4d41c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D41CCu;
        goto label_4d41cc;
    }
    ctx->pc = 0x4D41C4u;
    {
        const bool branch_taken_0x4d41c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D41C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D41C4u;
            // 0x4d41c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d41c4) {
            ctx->pc = 0x4D4218u;
            goto label_4d4218;
        }
    }
    ctx->pc = 0x4D41CCu;
label_4d41cc:
    // 0x4d41cc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d41ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d41d0:
    // 0x4d41d0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d41d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4d41d4:
    // 0x4d41d4: 0x24632510  addiu       $v1, $v1, 0x2510
    ctx->pc = 0x4d41d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9488));
label_4d41d8:
    // 0x4d41d8: 0x24422550  addiu       $v0, $v0, 0x2550
    ctx->pc = 0x4d41d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9552));
label_4d41dc:
    // 0x4d41dc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4d41dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4d41e0:
    // 0x4d41e0: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x4d41e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_4d41e4:
    // 0x4d41e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d41e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d41e8:
    // 0x4d41e8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4d41e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4d41ec:
    // 0x4d41ec: 0x320f809  jalr        $t9
label_4d41f0:
    if (ctx->pc == 0x4D41F0u) {
        ctx->pc = 0x4D41F4u;
        goto label_4d41f4;
    }
    ctx->pc = 0x4D41ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D41F4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D41F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D41F4u; }
            if (ctx->pc != 0x4D41F4u) { return; }
        }
        }
    }
    ctx->pc = 0x4D41F4u;
label_4d41f4:
    // 0x4d41f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d41f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d41f8:
    // 0x4d41f8: 0xc12e684  jal         func_4B9A10
label_4d41fc:
    if (ctx->pc == 0x4D41FCu) {
        ctx->pc = 0x4D41FCu;
            // 0x4d41fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D4200u;
        goto label_4d4200;
    }
    ctx->pc = 0x4D41F8u;
    SET_GPR_U32(ctx, 31, 0x4D4200u);
    ctx->pc = 0x4D41FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D41F8u;
            // 0x4d41fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9A10u;
    if (runtime->hasFunction(0x4B9A10u)) {
        auto targetFn = runtime->lookupFunction(0x4B9A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4200u; }
        if (ctx->pc != 0x4D4200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9A10_0x4b9a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4200u; }
        if (ctx->pc != 0x4D4200u) { return; }
    }
    ctx->pc = 0x4D4200u;
label_4d4200:
    // 0x4d4200: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4d4200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4d4204:
    // 0x4d4204: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4d4204u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4d4208:
    // 0x4d4208: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4d420c:
    if (ctx->pc == 0x4D420Cu) {
        ctx->pc = 0x4D420Cu;
            // 0x4d420c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D4210u;
        goto label_4d4210;
    }
    ctx->pc = 0x4D4208u;
    {
        const bool branch_taken_0x4d4208 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4d4208) {
            ctx->pc = 0x4D420Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4208u;
            // 0x4d420c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D421Cu;
            goto label_4d421c;
        }
    }
    ctx->pc = 0x4D4210u;
label_4d4210:
    // 0x4d4210: 0xc0400a8  jal         func_1002A0
label_4d4214:
    if (ctx->pc == 0x4D4214u) {
        ctx->pc = 0x4D4214u;
            // 0x4d4214: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D4218u;
        goto label_4d4218;
    }
    ctx->pc = 0x4D4210u;
    SET_GPR_U32(ctx, 31, 0x4D4218u);
    ctx->pc = 0x4D4214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4210u;
            // 0x4d4214: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4218u; }
        if (ctx->pc != 0x4D4218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4218u; }
        if (ctx->pc != 0x4D4218u) { return; }
    }
    ctx->pc = 0x4D4218u;
label_4d4218:
    // 0x4d4218: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4d4218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d421c:
    // 0x4d421c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d421cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d4220:
    // 0x4d4220: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d4220u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d4224:
    // 0x4d4224: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d4224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d4228:
    // 0x4d4228: 0x3e00008  jr          $ra
label_4d422c:
    if (ctx->pc == 0x4D422Cu) {
        ctx->pc = 0x4D422Cu;
            // 0x4d422c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4D4230u;
        goto label_4d4230;
    }
    ctx->pc = 0x4D4228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D422Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4228u;
            // 0x4d422c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D4230u;
label_4d4230:
    // 0x4d4230: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x4d4230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_4d4234:
    // 0x4d4234: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4d4234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4d4238:
    // 0x4d4238: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4d4238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_4d423c:
    // 0x4d423c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4d423cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4d4240:
    // 0x4d4240: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4d4240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4d4244:
    // 0x4d4244: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4d4244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4d4248:
    // 0x4d4248: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4d4248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4d424c:
    // 0x4d424c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d424cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d4250:
    // 0x4d4250: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d4250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d4254:
    // 0x4d4254: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4d4254u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4d4258:
    // 0x4d4258: 0x10a30018  beq         $a1, $v1, . + 4 + (0x18 << 2)
label_4d425c:
    if (ctx->pc == 0x4D425Cu) {
        ctx->pc = 0x4D425Cu;
            // 0x4d425c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D4260u;
        goto label_4d4260;
    }
    ctx->pc = 0x4D4258u;
    {
        const bool branch_taken_0x4d4258 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4D425Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4258u;
            // 0x4d425c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d4258) {
            ctx->pc = 0x4D42BCu;
            goto label_4d42bc;
        }
    }
    ctx->pc = 0x4D4260u;
label_4d4260:
    // 0x4d4260: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4d4260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4d4264:
    // 0x4d4264: 0x50a30010  beql        $a1, $v1, . + 4 + (0x10 << 2)
label_4d4268:
    if (ctx->pc == 0x4D4268u) {
        ctx->pc = 0x4D4268u;
            // 0x4d4268: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4D426Cu;
        goto label_4d426c;
    }
    ctx->pc = 0x4D4264u;
    {
        const bool branch_taken_0x4d4264 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4d4264) {
            ctx->pc = 0x4D4268u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4264u;
            // 0x4d4268: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D42A8u;
            goto label_4d42a8;
        }
    }
    ctx->pc = 0x4D426Cu;
label_4d426c:
    // 0x4d426c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4d426cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4d4270:
    // 0x4d4270: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4d4274:
    if (ctx->pc == 0x4D4274u) {
        ctx->pc = 0x4D4278u;
        goto label_4d4278;
    }
    ctx->pc = 0x4D4270u;
    {
        const bool branch_taken_0x4d4270 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4d4270) {
            ctx->pc = 0x4D4280u;
            goto label_4d4280;
        }
    }
    ctx->pc = 0x4D4278u;
label_4d4278:
    // 0x4d4278: 0x10000043  b           . + 4 + (0x43 << 2)
label_4d427c:
    if (ctx->pc == 0x4D427Cu) {
        ctx->pc = 0x4D427Cu;
            // 0x4d427c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x4D4280u;
        goto label_4d4280;
    }
    ctx->pc = 0x4D4278u;
    {
        const bool branch_taken_0x4d4278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D427Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4278u;
            // 0x4d427c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d4278) {
            ctx->pc = 0x4D4388u;
            goto label_4d4388;
        }
    }
    ctx->pc = 0x4D4280u;
label_4d4280:
    // 0x4d4280: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d4280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4d4284:
    // 0x4d4284: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d4284u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d4288:
    // 0x4d4288: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4d4288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4d428c:
    // 0x4d428c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4d428cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4d4290:
    // 0x4d4290: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x4d4290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_4d4294:
    // 0x4d4294: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4d4294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4d4298:
    // 0x4d4298: 0x320f809  jalr        $t9
label_4d429c:
    if (ctx->pc == 0x4D429Cu) {
        ctx->pc = 0x4D429Cu;
            // 0x4d429c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4D42A0u;
        goto label_4d42a0;
    }
    ctx->pc = 0x4D4298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D42A0u);
        ctx->pc = 0x4D429Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4298u;
            // 0x4d429c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D42A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D42A0u; }
            if (ctx->pc != 0x4D42A0u) { return; }
        }
        }
    }
    ctx->pc = 0x4D42A0u;
label_4d42a0:
    // 0x4d42a0: 0x10000038  b           . + 4 + (0x38 << 2)
label_4d42a4:
    if (ctx->pc == 0x4D42A4u) {
        ctx->pc = 0x4D42A8u;
        goto label_4d42a8;
    }
    ctx->pc = 0x4D42A0u;
    {
        const bool branch_taken_0x4d42a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d42a0) {
            ctx->pc = 0x4D4384u;
            goto label_4d4384;
        }
    }
    ctx->pc = 0x4D42A8u;
label_4d42a8:
    // 0x4d42a8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4d42a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4d42ac:
    // 0x4d42ac: 0x320f809  jalr        $t9
label_4d42b0:
    if (ctx->pc == 0x4D42B0u) {
        ctx->pc = 0x4D42B4u;
        goto label_4d42b4;
    }
    ctx->pc = 0x4D42ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D42B4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D42B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D42B4u; }
            if (ctx->pc != 0x4D42B4u) { return; }
        }
        }
    }
    ctx->pc = 0x4D42B4u;
label_4d42b4:
    // 0x4d42b4: 0x10000033  b           . + 4 + (0x33 << 2)
label_4d42b8:
    if (ctx->pc == 0x4D42B8u) {
        ctx->pc = 0x4D42BCu;
        goto label_4d42bc;
    }
    ctx->pc = 0x4D42B4u;
    {
        const bool branch_taken_0x4d42b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d42b4) {
            ctx->pc = 0x4D4384u;
            goto label_4d4384;
        }
    }
    ctx->pc = 0x4D42BCu;
label_4d42bc:
    // 0x4d42bc: 0x8eb00070  lw          $s0, 0x70($s5)
    ctx->pc = 0x4d42bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_4d42c0:
    // 0x4d42c0: 0x12000030  beqz        $s0, . + 4 + (0x30 << 2)
label_4d42c4:
    if (ctx->pc == 0x4D42C4u) {
        ctx->pc = 0x4D42C8u;
        goto label_4d42c8;
    }
    ctx->pc = 0x4D42C0u;
    {
        const bool branch_taken_0x4d42c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d42c0) {
            ctx->pc = 0x4D4384u;
            goto label_4d4384;
        }
    }
    ctx->pc = 0x4D42C8u;
label_4d42c8:
    // 0x4d42c8: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4d42c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4d42cc:
    // 0x4d42cc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4d42ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4d42d0:
    // 0x4d42d0: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x4d42d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_4d42d4:
    // 0x4d42d4: 0x26b30084  addiu       $s3, $s5, 0x84
    ctx->pc = 0x4d42d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
label_4d42d8:
    // 0x4d42d8: 0x8c44d120  lw          $a0, -0x2EE0($v0)
    ctx->pc = 0x4d42d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_4d42dc:
    // 0x4d42dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4d42dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d42e0:
    // 0x4d42e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4d42e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d42e4:
    // 0x4d42e4: 0x8ca50130  lw          $a1, 0x130($a1)
    ctx->pc = 0x4d42e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_4d42e8:
    // 0x4d42e8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d42e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d42ec:
    // 0x4d42ec: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x4d42ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_4d42f0:
    // 0x4d42f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d42f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d42f4:
    // 0x4d42f4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4d42f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4d42f8:
    // 0x4d42f8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4d42f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4d42fc:
    // 0x4d42fc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4d42fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d4300:
    // 0x4d4300: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x4d4300u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_4d4304:
    // 0x4d4304: 0x24940010  addiu       $s4, $a0, 0x10
    ctx->pc = 0x4d4304u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_4d4308:
    // 0x4d4308: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x4d4308u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_4d430c:
    // 0x4d430c: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x4d430cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_4d4310:
    // 0x4d4310: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4d4310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4d4314:
    // 0x4d4314: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x4d4314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4d4318:
    // 0x4d4318: 0x27a700fc  addiu       $a3, $sp, 0xFC
    ctx->pc = 0x4d4318u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
label_4d431c:
    // 0x4d431c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x4d431cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4d4320:
    // 0x4d4320: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4d4320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4d4324:
    // 0x4d4324: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4d4324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4d4328:
    // 0x4d4328: 0xc1353c8  jal         func_4D4F20
label_4d432c:
    if (ctx->pc == 0x4D432Cu) {
        ctx->pc = 0x4D432Cu;
            // 0x4d432c: 0x27a90070  addiu       $t1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4D4330u;
        goto label_4d4330;
    }
    ctx->pc = 0x4D4328u;
    SET_GPR_U32(ctx, 31, 0x4D4330u);
    ctx->pc = 0x4D432Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4328u;
            // 0x4d432c: 0x27a90070  addiu       $t1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D4F20u;
    if (runtime->hasFunction(0x4D4F20u)) {
        auto targetFn = runtime->lookupFunction(0x4D4F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4330u; }
        if (ctx->pc != 0x4D4330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D4F20_0x4d4f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4330u; }
        if (ctx->pc != 0x4D4330u) { return; }
    }
    ctx->pc = 0x4D4330u;
label_4d4330:
    // 0x4d4330: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4d4330u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4d4334:
    // 0x4d4334: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x4d4334u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4d4338:
    // 0x4d4338: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_4d433c:
    if (ctx->pc == 0x4D433Cu) {
        ctx->pc = 0x4D433Cu;
            // 0x4d433c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4D4340u;
        goto label_4d4340;
    }
    ctx->pc = 0x4D4338u;
    {
        const bool branch_taken_0x4d4338 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D433Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4338u;
            // 0x4d433c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d4338) {
            ctx->pc = 0x4D430Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d430c;
        }
    }
    ctx->pc = 0x4D4340u;
label_4d4340:
    // 0x4d4340: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d4340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d4344:
    // 0x4d4344: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x4d4344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4d4348:
    // 0x4d4348: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
label_4d434c:
    if (ctx->pc == 0x4D434Cu) {
        ctx->pc = 0x4D4350u;
        goto label_4d4350;
    }
    ctx->pc = 0x4D4348u;
    {
        const bool branch_taken_0x4d4348 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x4d4348) {
            ctx->pc = 0x4D4384u;
            goto label_4d4384;
        }
    }
    ctx->pc = 0x4D4350u;
label_4d4350:
    // 0x4d4350: 0xc04e738  jal         func_139CE0
label_4d4354:
    if (ctx->pc == 0x4D4354u) {
        ctx->pc = 0x4D4354u;
            // 0x4d4354: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x4D4358u;
        goto label_4d4358;
    }
    ctx->pc = 0x4D4350u;
    SET_GPR_U32(ctx, 31, 0x4D4358u);
    ctx->pc = 0x4D4354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4350u;
            // 0x4d4354: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4358u; }
        if (ctx->pc != 0x4D4358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4358u; }
        if (ctx->pc != 0x4D4358u) { return; }
    }
    ctx->pc = 0x4D4358u;
label_4d4358:
    // 0x4d4358: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d4358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d435c:
    // 0x4d435c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4d435cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4d4360:
    // 0x4d4360: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x4d4360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_4d4364:
    // 0x4d4364: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4d4364u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4d4368:
    // 0x4d4368: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x4d4368u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_4d436c:
    // 0x4d436c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d436cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d4370:
    // 0x4d4370: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x4d4370u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_4d4374:
    // 0x4d4374: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d4374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d4378:
    // 0x4d4378: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x4d4378u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_4d437c:
    // 0x4d437c: 0xc055ea8  jal         func_157AA0
label_4d4380:
    if (ctx->pc == 0x4D4380u) {
        ctx->pc = 0x4D4380u;
            // 0x4d4380: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D4384u;
        goto label_4d4384;
    }
    ctx->pc = 0x4D437Cu;
    SET_GPR_U32(ctx, 31, 0x4D4384u);
    ctx->pc = 0x4D4380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D437Cu;
            // 0x4d4380: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4384u; }
        if (ctx->pc != 0x4D4384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4384u; }
        if (ctx->pc != 0x4D4384u) { return; }
    }
    ctx->pc = 0x4D4384u;
label_4d4384:
    // 0x4d4384: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4d4384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4d4388:
    // 0x4d4388: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4d4388u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4d438c:
    // 0x4d438c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4d438cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4d4390:
    // 0x4d4390: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4d4390u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4d4394:
    // 0x4d4394: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4d4394u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4d4398:
    // 0x4d4398: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d4398u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d439c:
    // 0x4d439c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d439cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d43a0:
    // 0x4d43a0: 0x3e00008  jr          $ra
label_4d43a4:
    if (ctx->pc == 0x4D43A4u) {
        ctx->pc = 0x4D43A4u;
            // 0x4d43a4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4D43A8u;
        goto label_4d43a8;
    }
    ctx->pc = 0x4D43A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D43A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D43A0u;
            // 0x4d43a4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D43A8u;
label_4d43a8:
    // 0x4d43a8: 0x0  nop
    ctx->pc = 0x4d43a8u;
    // NOP
label_4d43ac:
    // 0x4d43ac: 0x0  nop
    ctx->pc = 0x4d43acu;
    // NOP
label_4d43b0:
    // 0x4d43b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4d43b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4d43b4:
    // 0x4d43b4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4d43b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4d43b8:
    // 0x4d43b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4d43b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4d43bc:
    // 0x4d43bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4d43bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4d43c0:
    // 0x4d43c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4d43c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4d43c4:
    // 0x4d43c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d43c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d43c8:
    // 0x4d43c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d43c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d43cc:
    // 0x4d43cc: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4d43ccu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4d43d0:
    // 0x4d43d0: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_4d43d4:
    if (ctx->pc == 0x4D43D4u) {
        ctx->pc = 0x4D43D4u;
            // 0x4d43d4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D43D8u;
        goto label_4d43d8;
    }
    ctx->pc = 0x4D43D0u;
    {
        const bool branch_taken_0x4d43d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4D43D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D43D0u;
            // 0x4d43d4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d43d0) {
            ctx->pc = 0x4D4404u;
            goto label_4d4404;
        }
    }
    ctx->pc = 0x4D43D8u;
label_4d43d8:
    // 0x4d43d8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4d43d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4d43dc:
    // 0x4d43dc: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_4d43e0:
    if (ctx->pc == 0x4D43E0u) {
        ctx->pc = 0x4D43E0u;
            // 0x4d43e0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4D43E4u;
        goto label_4d43e4;
    }
    ctx->pc = 0x4D43DCu;
    {
        const bool branch_taken_0x4d43dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4d43dc) {
            ctx->pc = 0x4D43E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D43DCu;
            // 0x4d43e0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D43F8u;
            goto label_4d43f8;
        }
    }
    ctx->pc = 0x4D43E4u;
label_4d43e4:
    // 0x4d43e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4d43e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4d43e8:
    // 0x4d43e8: 0x10a30017  beq         $a1, $v1, . + 4 + (0x17 << 2)
label_4d43ec:
    if (ctx->pc == 0x4D43ECu) {
        ctx->pc = 0x4D43F0u;
        goto label_4d43f0;
    }
    ctx->pc = 0x4D43E8u;
    {
        const bool branch_taken_0x4d43e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4d43e8) {
            ctx->pc = 0x4D4448u;
            goto label_4d4448;
        }
    }
    ctx->pc = 0x4D43F0u;
label_4d43f0:
    // 0x4d43f0: 0x10000015  b           . + 4 + (0x15 << 2)
label_4d43f4:
    if (ctx->pc == 0x4D43F4u) {
        ctx->pc = 0x4D43F8u;
        goto label_4d43f8;
    }
    ctx->pc = 0x4D43F0u;
    {
        const bool branch_taken_0x4d43f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d43f0) {
            ctx->pc = 0x4D4448u;
            goto label_4d4448;
        }
    }
    ctx->pc = 0x4D43F8u;
label_4d43f8:
    // 0x4d43f8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4d43f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4d43fc:
    // 0x4d43fc: 0x320f809  jalr        $t9
label_4d4400:
    if (ctx->pc == 0x4D4400u) {
        ctx->pc = 0x4D4404u;
        goto label_4d4404;
    }
    ctx->pc = 0x4D43FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D4404u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D4404u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D4404u; }
            if (ctx->pc != 0x4D4404u) { return; }
        }
        }
    }
    ctx->pc = 0x4D4404u;
label_4d4404:
    // 0x4d4404: 0x8e700070  lw          $s0, 0x70($s3)
    ctx->pc = 0x4d4404u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_4d4408:
    // 0x4d4408: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_4d440c:
    if (ctx->pc == 0x4D440Cu) {
        ctx->pc = 0x4D4410u;
        goto label_4d4410;
    }
    ctx->pc = 0x4D4408u;
    {
        const bool branch_taken_0x4d4408 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d4408) {
            ctx->pc = 0x4D4448u;
            goto label_4d4448;
        }
    }
    ctx->pc = 0x4D4410u;
label_4d4410:
    // 0x4d4410: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4d4410u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d4414:
    // 0x4d4414: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4d4414u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d4418:
    // 0x4d4418: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x4d4418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_4d441c:
    // 0x4d441c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4d441cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4d4420:
    // 0x4d4420: 0xc0e3658  jal         func_38D960
label_4d4424:
    if (ctx->pc == 0x4D4424u) {
        ctx->pc = 0x4D4424u;
            // 0x4d4424: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4D4428u;
        goto label_4d4428;
    }
    ctx->pc = 0x4D4420u;
    SET_GPR_U32(ctx, 31, 0x4D4428u);
    ctx->pc = 0x4D4424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4420u;
            // 0x4d4424: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4428u; }
        if (ctx->pc != 0x4D4428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4428u; }
        if (ctx->pc != 0x4D4428u) { return; }
    }
    ctx->pc = 0x4D4428u;
label_4d4428:
    // 0x4d4428: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x4d4428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_4d442c:
    // 0x4d442c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4d442cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4d4430:
    // 0x4d4430: 0xc1352a4  jal         func_4D4A90
label_4d4434:
    if (ctx->pc == 0x4D4434u) {
        ctx->pc = 0x4D4434u;
            // 0x4d4434: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4D4438u;
        goto label_4d4438;
    }
    ctx->pc = 0x4D4430u;
    SET_GPR_U32(ctx, 31, 0x4D4438u);
    ctx->pc = 0x4D4434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4430u;
            // 0x4d4434: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D4A90u;
    if (runtime->hasFunction(0x4D4A90u)) {
        auto targetFn = runtime->lookupFunction(0x4D4A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4438u; }
        if (ctx->pc != 0x4D4438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D4A90_0x4d4a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4438u; }
        if (ctx->pc != 0x4D4438u) { return; }
    }
    ctx->pc = 0x4D4438u;
label_4d4438:
    // 0x4d4438: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4d4438u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4d443c:
    // 0x4d443c: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x4d443cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4d4440:
    // 0x4d4440: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_4d4444:
    if (ctx->pc == 0x4D4444u) {
        ctx->pc = 0x4D4444u;
            // 0x4d4444: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4D4448u;
        goto label_4d4448;
    }
    ctx->pc = 0x4D4440u;
    {
        const bool branch_taken_0x4d4440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D4444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4440u;
            // 0x4d4444: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d4440) {
            ctx->pc = 0x4D4418u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d4418;
        }
    }
    ctx->pc = 0x4D4448u;
label_4d4448:
    // 0x4d4448: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4d4448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4d444c:
    // 0x4d444c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4d444cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4d4450:
    // 0x4d4450: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4d4450u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4d4454:
    // 0x4d4454: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d4454u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d4458:
    // 0x4d4458: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d4458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d445c:
    // 0x4d445c: 0x3e00008  jr          $ra
label_4d4460:
    if (ctx->pc == 0x4D4460u) {
        ctx->pc = 0x4D4460u;
            // 0x4d4460: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4D4464u;
        goto label_4d4464;
    }
    ctx->pc = 0x4D445Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D4460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D445Cu;
            // 0x4d4460: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D4464u;
label_4d4464:
    // 0x4d4464: 0x0  nop
    ctx->pc = 0x4d4464u;
    // NOP
label_4d4468:
    // 0x4d4468: 0x0  nop
    ctx->pc = 0x4d4468u;
    // NOP
label_4d446c:
    // 0x4d446c: 0x0  nop
    ctx->pc = 0x4d446cu;
    // NOP
label_4d4470:
    // 0x4d4470: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4d4470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4d4474:
    // 0x4d4474: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4d4474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4d4478:
    // 0x4d4478: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4d4478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4d447c:
    // 0x4d447c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4d447cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4d4480:
    // 0x4d4480: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d4480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d4484:
    // 0x4d4484: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d4484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d4488:
    // 0x4d4488: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x4d4488u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4d448c:
    // 0x4d448c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_4d4490:
    if (ctx->pc == 0x4D4490u) {
        ctx->pc = 0x4D4490u;
            // 0x4d4490: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D4494u;
        goto label_4d4494;
    }
    ctx->pc = 0x4D448Cu;
    {
        const bool branch_taken_0x4d448c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D4490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D448Cu;
            // 0x4d4490: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d448c) {
            ctx->pc = 0x4D44C8u;
            goto label_4d44c8;
        }
    }
    ctx->pc = 0x4D4494u;
label_4d4494:
    // 0x4d4494: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4d4494u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d4498:
    // 0x4d4498: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4d4498u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d449c:
    // 0x4d449c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x4d449cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_4d44a0:
    // 0x4d44a0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4d44a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4d44a4:
    // 0x4d44a4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4d44a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4d44a8:
    // 0x4d44a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d44a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d44ac:
    // 0x4d44ac: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x4d44acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_4d44b0:
    // 0x4d44b0: 0x320f809  jalr        $t9
label_4d44b4:
    if (ctx->pc == 0x4D44B4u) {
        ctx->pc = 0x4D44B8u;
        goto label_4d44b8;
    }
    ctx->pc = 0x4D44B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D44B8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D44B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D44B8u; }
            if (ctx->pc != 0x4D44B8u) { return; }
        }
        }
    }
    ctx->pc = 0x4D44B8u;
label_4d44b8:
    // 0x4d44b8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4d44b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4d44bc:
    // 0x4d44bc: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4d44bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4d44c0:
    // 0x4d44c0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_4d44c4:
    if (ctx->pc == 0x4D44C4u) {
        ctx->pc = 0x4D44C4u;
            // 0x4d44c4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4D44C8u;
        goto label_4d44c8;
    }
    ctx->pc = 0x4D44C0u;
    {
        const bool branch_taken_0x4d44c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D44C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D44C0u;
            // 0x4d44c4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d44c0) {
            ctx->pc = 0x4D449Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d449c;
        }
    }
    ctx->pc = 0x4D44C8u;
label_4d44c8:
    // 0x4d44c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4d44c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4d44cc:
    // 0x4d44cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4d44ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4d44d0:
    // 0x4d44d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4d44d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4d44d4:
    // 0x4d44d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d44d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d44d8:
    // 0x4d44d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d44d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d44dc:
    // 0x4d44dc: 0x3e00008  jr          $ra
label_4d44e0:
    if (ctx->pc == 0x4D44E0u) {
        ctx->pc = 0x4D44E0u;
            // 0x4d44e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4D44E4u;
        goto label_4d44e4;
    }
    ctx->pc = 0x4D44DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D44E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D44DCu;
            // 0x4d44e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D44E4u;
label_4d44e4:
    // 0x4d44e4: 0x0  nop
    ctx->pc = 0x4d44e4u;
    // NOP
label_4d44e8:
    // 0x4d44e8: 0x0  nop
    ctx->pc = 0x4d44e8u;
    // NOP
label_4d44ec:
    // 0x4d44ec: 0x0  nop
    ctx->pc = 0x4d44ecu;
    // NOP
}
