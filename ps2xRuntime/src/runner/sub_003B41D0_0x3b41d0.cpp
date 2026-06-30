#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B41D0
// Address: 0x3b41d0 - 0x3b4460
void sub_003B41D0_0x3b41d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B41D0_0x3b41d0");
#endif

    switch (ctx->pc) {
        case 0x3b41d0u: goto label_3b41d0;
        case 0x3b41d4u: goto label_3b41d4;
        case 0x3b41d8u: goto label_3b41d8;
        case 0x3b41dcu: goto label_3b41dc;
        case 0x3b41e0u: goto label_3b41e0;
        case 0x3b41e4u: goto label_3b41e4;
        case 0x3b41e8u: goto label_3b41e8;
        case 0x3b41ecu: goto label_3b41ec;
        case 0x3b41f0u: goto label_3b41f0;
        case 0x3b41f4u: goto label_3b41f4;
        case 0x3b41f8u: goto label_3b41f8;
        case 0x3b41fcu: goto label_3b41fc;
        case 0x3b4200u: goto label_3b4200;
        case 0x3b4204u: goto label_3b4204;
        case 0x3b4208u: goto label_3b4208;
        case 0x3b420cu: goto label_3b420c;
        case 0x3b4210u: goto label_3b4210;
        case 0x3b4214u: goto label_3b4214;
        case 0x3b4218u: goto label_3b4218;
        case 0x3b421cu: goto label_3b421c;
        case 0x3b4220u: goto label_3b4220;
        case 0x3b4224u: goto label_3b4224;
        case 0x3b4228u: goto label_3b4228;
        case 0x3b422cu: goto label_3b422c;
        case 0x3b4230u: goto label_3b4230;
        case 0x3b4234u: goto label_3b4234;
        case 0x3b4238u: goto label_3b4238;
        case 0x3b423cu: goto label_3b423c;
        case 0x3b4240u: goto label_3b4240;
        case 0x3b4244u: goto label_3b4244;
        case 0x3b4248u: goto label_3b4248;
        case 0x3b424cu: goto label_3b424c;
        case 0x3b4250u: goto label_3b4250;
        case 0x3b4254u: goto label_3b4254;
        case 0x3b4258u: goto label_3b4258;
        case 0x3b425cu: goto label_3b425c;
        case 0x3b4260u: goto label_3b4260;
        case 0x3b4264u: goto label_3b4264;
        case 0x3b4268u: goto label_3b4268;
        case 0x3b426cu: goto label_3b426c;
        case 0x3b4270u: goto label_3b4270;
        case 0x3b4274u: goto label_3b4274;
        case 0x3b4278u: goto label_3b4278;
        case 0x3b427cu: goto label_3b427c;
        case 0x3b4280u: goto label_3b4280;
        case 0x3b4284u: goto label_3b4284;
        case 0x3b4288u: goto label_3b4288;
        case 0x3b428cu: goto label_3b428c;
        case 0x3b4290u: goto label_3b4290;
        case 0x3b4294u: goto label_3b4294;
        case 0x3b4298u: goto label_3b4298;
        case 0x3b429cu: goto label_3b429c;
        case 0x3b42a0u: goto label_3b42a0;
        case 0x3b42a4u: goto label_3b42a4;
        case 0x3b42a8u: goto label_3b42a8;
        case 0x3b42acu: goto label_3b42ac;
        case 0x3b42b0u: goto label_3b42b0;
        case 0x3b42b4u: goto label_3b42b4;
        case 0x3b42b8u: goto label_3b42b8;
        case 0x3b42bcu: goto label_3b42bc;
        case 0x3b42c0u: goto label_3b42c0;
        case 0x3b42c4u: goto label_3b42c4;
        case 0x3b42c8u: goto label_3b42c8;
        case 0x3b42ccu: goto label_3b42cc;
        case 0x3b42d0u: goto label_3b42d0;
        case 0x3b42d4u: goto label_3b42d4;
        case 0x3b42d8u: goto label_3b42d8;
        case 0x3b42dcu: goto label_3b42dc;
        case 0x3b42e0u: goto label_3b42e0;
        case 0x3b42e4u: goto label_3b42e4;
        case 0x3b42e8u: goto label_3b42e8;
        case 0x3b42ecu: goto label_3b42ec;
        case 0x3b42f0u: goto label_3b42f0;
        case 0x3b42f4u: goto label_3b42f4;
        case 0x3b42f8u: goto label_3b42f8;
        case 0x3b42fcu: goto label_3b42fc;
        case 0x3b4300u: goto label_3b4300;
        case 0x3b4304u: goto label_3b4304;
        case 0x3b4308u: goto label_3b4308;
        case 0x3b430cu: goto label_3b430c;
        case 0x3b4310u: goto label_3b4310;
        case 0x3b4314u: goto label_3b4314;
        case 0x3b4318u: goto label_3b4318;
        case 0x3b431cu: goto label_3b431c;
        case 0x3b4320u: goto label_3b4320;
        case 0x3b4324u: goto label_3b4324;
        case 0x3b4328u: goto label_3b4328;
        case 0x3b432cu: goto label_3b432c;
        case 0x3b4330u: goto label_3b4330;
        case 0x3b4334u: goto label_3b4334;
        case 0x3b4338u: goto label_3b4338;
        case 0x3b433cu: goto label_3b433c;
        case 0x3b4340u: goto label_3b4340;
        case 0x3b4344u: goto label_3b4344;
        case 0x3b4348u: goto label_3b4348;
        case 0x3b434cu: goto label_3b434c;
        case 0x3b4350u: goto label_3b4350;
        case 0x3b4354u: goto label_3b4354;
        case 0x3b4358u: goto label_3b4358;
        case 0x3b435cu: goto label_3b435c;
        case 0x3b4360u: goto label_3b4360;
        case 0x3b4364u: goto label_3b4364;
        case 0x3b4368u: goto label_3b4368;
        case 0x3b436cu: goto label_3b436c;
        case 0x3b4370u: goto label_3b4370;
        case 0x3b4374u: goto label_3b4374;
        case 0x3b4378u: goto label_3b4378;
        case 0x3b437cu: goto label_3b437c;
        case 0x3b4380u: goto label_3b4380;
        case 0x3b4384u: goto label_3b4384;
        case 0x3b4388u: goto label_3b4388;
        case 0x3b438cu: goto label_3b438c;
        case 0x3b4390u: goto label_3b4390;
        case 0x3b4394u: goto label_3b4394;
        case 0x3b4398u: goto label_3b4398;
        case 0x3b439cu: goto label_3b439c;
        case 0x3b43a0u: goto label_3b43a0;
        case 0x3b43a4u: goto label_3b43a4;
        case 0x3b43a8u: goto label_3b43a8;
        case 0x3b43acu: goto label_3b43ac;
        case 0x3b43b0u: goto label_3b43b0;
        case 0x3b43b4u: goto label_3b43b4;
        case 0x3b43b8u: goto label_3b43b8;
        case 0x3b43bcu: goto label_3b43bc;
        case 0x3b43c0u: goto label_3b43c0;
        case 0x3b43c4u: goto label_3b43c4;
        case 0x3b43c8u: goto label_3b43c8;
        case 0x3b43ccu: goto label_3b43cc;
        case 0x3b43d0u: goto label_3b43d0;
        case 0x3b43d4u: goto label_3b43d4;
        case 0x3b43d8u: goto label_3b43d8;
        case 0x3b43dcu: goto label_3b43dc;
        case 0x3b43e0u: goto label_3b43e0;
        case 0x3b43e4u: goto label_3b43e4;
        case 0x3b43e8u: goto label_3b43e8;
        case 0x3b43ecu: goto label_3b43ec;
        case 0x3b43f0u: goto label_3b43f0;
        case 0x3b43f4u: goto label_3b43f4;
        case 0x3b43f8u: goto label_3b43f8;
        case 0x3b43fcu: goto label_3b43fc;
        case 0x3b4400u: goto label_3b4400;
        case 0x3b4404u: goto label_3b4404;
        case 0x3b4408u: goto label_3b4408;
        case 0x3b440cu: goto label_3b440c;
        case 0x3b4410u: goto label_3b4410;
        case 0x3b4414u: goto label_3b4414;
        case 0x3b4418u: goto label_3b4418;
        case 0x3b441cu: goto label_3b441c;
        case 0x3b4420u: goto label_3b4420;
        case 0x3b4424u: goto label_3b4424;
        case 0x3b4428u: goto label_3b4428;
        case 0x3b442cu: goto label_3b442c;
        case 0x3b4430u: goto label_3b4430;
        case 0x3b4434u: goto label_3b4434;
        case 0x3b4438u: goto label_3b4438;
        case 0x3b443cu: goto label_3b443c;
        case 0x3b4440u: goto label_3b4440;
        case 0x3b4444u: goto label_3b4444;
        case 0x3b4448u: goto label_3b4448;
        case 0x3b444cu: goto label_3b444c;
        case 0x3b4450u: goto label_3b4450;
        case 0x3b4454u: goto label_3b4454;
        case 0x3b4458u: goto label_3b4458;
        case 0x3b445cu: goto label_3b445c;
        default: break;
    }

    ctx->pc = 0x3b41d0u;

label_3b41d0:
    // 0x3b41d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3b41d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3b41d4:
    // 0x3b41d4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3b41d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3b41d8:
    // 0x3b41d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3b41d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3b41dc:
    // 0x3b41dc: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x3b41dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3b41e0:
    // 0x3b41e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3b41e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3b41e4:
    // 0x3b41e4: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x3b41e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
label_3b41e8:
    // 0x3b41e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b41e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3b41ec:
    // 0x3b41ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b41ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3b41f0:
    // 0x3b41f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b41f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b41f4:
    // 0x3b41f4: 0xc0aeaf4  jal         func_2BABD0
label_3b41f8:
    if (ctx->pc == 0x3B41F8u) {
        ctx->pc = 0x3B41F8u;
            // 0x3b41f8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x3B41FCu;
        goto label_3b41fc;
    }
    ctx->pc = 0x3B41F4u;
    SET_GPR_U32(ctx, 31, 0x3B41FCu);
    ctx->pc = 0x3B41F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B41F4u;
            // 0x3b41f8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BABD0u;
    if (runtime->hasFunction(0x2BABD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B41FCu; }
        if (ctx->pc != 0x3B41FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BABD0_0x2babd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B41FCu; }
        if (ctx->pc != 0x3B41FCu) { return; }
    }
    ctx->pc = 0x3B41FCu;
label_3b41fc:
    // 0x3b41fc: 0xc0ed19c  jal         func_3B4670
label_3b4200:
    if (ctx->pc == 0x3B4200u) {
        ctx->pc = 0x3B4200u;
            // 0x3b4200: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x3B4204u;
        goto label_3b4204;
    }
    ctx->pc = 0x3B41FCu;
    SET_GPR_U32(ctx, 31, 0x3B4204u);
    ctx->pc = 0x3B4200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B41FCu;
            // 0x3b4200: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B4670u;
    if (runtime->hasFunction(0x3B4670u)) {
        auto targetFn = runtime->lookupFunction(0x3B4670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4204u; }
        if (ctx->pc != 0x3B4204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B4670_0x3b4670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4204u; }
        if (ctx->pc != 0x3B4204u) { return; }
    }
    ctx->pc = 0x3B4204u;
label_3b4204:
    // 0x3b4204: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3b4204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3b4208:
    // 0x3b4208: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3b4208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3b420c:
    // 0x3b420c: 0x246389e0  addiu       $v1, $v1, -0x7620
    ctx->pc = 0x3b420cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937056));
label_3b4210:
    // 0x3b4210: 0x24428a18  addiu       $v0, $v0, -0x75E8
    ctx->pc = 0x3b4210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937112));
label_3b4214:
    // 0x3b4214: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3b4214u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3b4218:
    // 0x3b4218: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x3b4218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_3b421c:
    // 0x3b421c: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x3b421cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_3b4220:
    // 0x3b4220: 0xc0ed194  jal         func_3B4650
label_3b4224:
    if (ctx->pc == 0x3B4224u) {
        ctx->pc = 0x3B4224u;
            // 0x3b4224: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x3B4228u;
        goto label_3b4228;
    }
    ctx->pc = 0x3B4220u;
    SET_GPR_U32(ctx, 31, 0x3B4228u);
    ctx->pc = 0x3B4224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4220u;
            // 0x3b4224: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B4650u;
    if (runtime->hasFunction(0x3B4650u)) {
        auto targetFn = runtime->lookupFunction(0x3B4650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4228u; }
        if (ctx->pc != 0x3B4228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B4650_0x3b4650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4228u; }
        if (ctx->pc != 0x3B4228u) { return; }
    }
    ctx->pc = 0x3B4228u;
label_3b4228:
    // 0x3b4228: 0xc0ed194  jal         func_3B4650
label_3b422c:
    if (ctx->pc == 0x3B422Cu) {
        ctx->pc = 0x3B422Cu;
            // 0x3b422c: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x3B4230u;
        goto label_3b4230;
    }
    ctx->pc = 0x3B4228u;
    SET_GPR_U32(ctx, 31, 0x3B4230u);
    ctx->pc = 0x3B422Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4228u;
            // 0x3b422c: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B4650u;
    if (runtime->hasFunction(0x3B4650u)) {
        auto targetFn = runtime->lookupFunction(0x3B4650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4230u; }
        if (ctx->pc != 0x3B4230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B4650_0x3b4650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4230u; }
        if (ctx->pc != 0x3B4230u) { return; }
    }
    ctx->pc = 0x3B4230u;
label_3b4230:
    // 0x3b4230: 0xc0a8d10  jal         func_2A3440
label_3b4234:
    if (ctx->pc == 0x3B4234u) {
        ctx->pc = 0x3B4234u;
            // 0x3b4234: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->pc = 0x3B4238u;
        goto label_3b4238;
    }
    ctx->pc = 0x3B4230u;
    SET_GPR_U32(ctx, 31, 0x3B4238u);
    ctx->pc = 0x3B4234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4230u;
            // 0x3b4234: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3440u;
    if (runtime->hasFunction(0x2A3440u)) {
        auto targetFn = runtime->lookupFunction(0x2A3440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4238u; }
        if (ctx->pc != 0x3B4238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3440_0x2a3440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4238u; }
        if (ctx->pc != 0x3B4238u) { return; }
    }
    ctx->pc = 0x3B4238u;
label_3b4238:
    // 0x3b4238: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b4238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b423c:
    // 0x3b423c: 0xc0aeac0  jal         func_2BAB00
label_3b4240:
    if (ctx->pc == 0x3B4240u) {
        ctx->pc = 0x3B4240u;
            // 0x3b4240: 0xae20008c  sw          $zero, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
        ctx->pc = 0x3B4244u;
        goto label_3b4244;
    }
    ctx->pc = 0x3B423Cu;
    SET_GPR_U32(ctx, 31, 0x3B4244u);
    ctx->pc = 0x3B4240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B423Cu;
            // 0x3b4240: 0xae20008c  sw          $zero, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB00u;
    if (runtime->hasFunction(0x2BAB00u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4244u; }
        if (ctx->pc != 0x3B4244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB00_0x2bab00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4244u; }
        if (ctx->pc != 0x3B4244u) { return; }
    }
    ctx->pc = 0x3B4244u;
label_3b4244:
    // 0x3b4244: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b4244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b4248:
    // 0x3b4248: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_3b424c:
    if (ctx->pc == 0x3B424Cu) {
        ctx->pc = 0x3B4250u;
        goto label_3b4250;
    }
    ctx->pc = 0x3B4248u;
    {
        const bool branch_taken_0x3b4248 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4248) {
            ctx->pc = 0x3B42C8u;
            goto label_3b42c8;
        }
    }
    ctx->pc = 0x3B4250u;
label_3b4250:
    // 0x3b4250: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x3b4250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_3b4254:
    // 0x3b4254: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3b4254u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3b4258:
    // 0x3b4258: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3b4258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3b425c:
    // 0x3b425c: 0xc040138  jal         func_1004E0
label_3b4260:
    if (ctx->pc == 0x3B4260u) {
        ctx->pc = 0x3B4260u;
            // 0x3b4260: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x3B4264u;
        goto label_3b4264;
    }
    ctx->pc = 0x3B425Cu;
    SET_GPR_U32(ctx, 31, 0x3B4264u);
    ctx->pc = 0x3B4260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B425Cu;
            // 0x3b4260: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4264u; }
        if (ctx->pc != 0x3B4264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4264u; }
        if (ctx->pc != 0x3B4264u) { return; }
    }
    ctx->pc = 0x3B4264u;
label_3b4264:
    // 0x3b4264: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x3b4264u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
label_3b4268:
    // 0x3b4268: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x3b4268u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
label_3b426c:
    // 0x3b426c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b426cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b4270:
    // 0x3b4270: 0x24a54490  addiu       $a1, $a1, 0x4490
    ctx->pc = 0x3b4270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17552));
label_3b4274:
    // 0x3b4274: 0x24c64040  addiu       $a2, $a2, 0x4040
    ctx->pc = 0x3b4274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16448));
label_3b4278:
    // 0x3b4278: 0x240700f0  addiu       $a3, $zero, 0xF0
    ctx->pc = 0x3b4278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_3b427c:
    // 0x3b427c: 0xc040840  jal         func_102100
label_3b4280:
    if (ctx->pc == 0x3B4280u) {
        ctx->pc = 0x3B4280u;
            // 0x3b4280: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B4284u;
        goto label_3b4284;
    }
    ctx->pc = 0x3B427Cu;
    SET_GPR_U32(ctx, 31, 0x3B4284u);
    ctx->pc = 0x3B4280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B427Cu;
            // 0x3b4280: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4284u; }
        if (ctx->pc != 0x3B4284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4284u; }
        if (ctx->pc != 0x3B4284u) { return; }
    }
    ctx->pc = 0x3B4284u;
label_3b4284:
    // 0x3b4284: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x3b4284u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
label_3b4288:
    // 0x3b4288: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3b4288u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b428c:
    // 0x3b428c: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x3b428cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_3b4290:
    // 0x3b4290: 0xc0ed120  jal         func_3B4480
label_3b4294:
    if (ctx->pc == 0x3B4294u) {
        ctx->pc = 0x3B4294u;
            // 0x3b4294: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B4298u;
        goto label_3b4298;
    }
    ctx->pc = 0x3B4290u;
    SET_GPR_U32(ctx, 31, 0x3B4298u);
    ctx->pc = 0x3B4294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4290u;
            // 0x3b4294: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B4480u;
    if (runtime->hasFunction(0x3B4480u)) {
        auto targetFn = runtime->lookupFunction(0x3B4480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4298u; }
        if (ctx->pc != 0x3B4298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B4480_0x3b4480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4298u; }
        if (ctx->pc != 0x3B4298u) { return; }
    }
    ctx->pc = 0x3B4298u;
label_3b4298:
    // 0x3b4298: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x3b4298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_3b429c:
    // 0x3b429c: 0xc0ed120  jal         func_3B4480
label_3b42a0:
    if (ctx->pc == 0x3B42A0u) {
        ctx->pc = 0x3B42A0u;
            // 0x3b42a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B42A4u;
        goto label_3b42a4;
    }
    ctx->pc = 0x3B429Cu;
    SET_GPR_U32(ctx, 31, 0x3B42A4u);
    ctx->pc = 0x3B42A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B429Cu;
            // 0x3b42a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B4480u;
    if (runtime->hasFunction(0x3B4480u)) {
        auto targetFn = runtime->lookupFunction(0x3B4480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B42A4u; }
        if (ctx->pc != 0x3B42A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B4480_0x3b4480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B42A4u; }
        if (ctx->pc != 0x3B42A4u) { return; }
    }
    ctx->pc = 0x3B42A4u;
label_3b42a4:
    // 0x3b42a4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3b42a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b42a8:
    // 0x3b42a8: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x3b42a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_3b42ac:
    // 0x3b42ac: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x3b42acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_3b42b0:
    // 0x3b42b0: 0xc0ed118  jal         func_3B4460
label_3b42b4:
    if (ctx->pc == 0x3B42B4u) {
        ctx->pc = 0x3B42B4u;
            // 0x3b42b4: 0xafb3005c  sw          $s3, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 19));
        ctx->pc = 0x3B42B8u;
        goto label_3b42b8;
    }
    ctx->pc = 0x3B42B0u;
    SET_GPR_U32(ctx, 31, 0x3B42B8u);
    ctx->pc = 0x3B42B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B42B0u;
            // 0x3b42b4: 0xafb3005c  sw          $s3, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B4460u;
    if (runtime->hasFunction(0x3B4460u)) {
        auto targetFn = runtime->lookupFunction(0x3B4460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B42B8u; }
        if (ctx->pc != 0x3B42B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B4460_0x3b4460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B42B8u; }
        if (ctx->pc != 0x3B42B8u) { return; }
    }
    ctx->pc = 0x3B42B8u;
label_3b42b8:
    // 0x3b42b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3b42b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3b42bc:
    // 0x3b42bc: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x3b42bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3b42c0:
    // 0x3b42c0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_3b42c4:
    if (ctx->pc == 0x3B42C4u) {
        ctx->pc = 0x3B42C4u;
            // 0x3b42c4: 0x267300f0  addiu       $s3, $s3, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 240));
        ctx->pc = 0x3B42C8u;
        goto label_3b42c8;
    }
    ctx->pc = 0x3B42C0u;
    {
        const bool branch_taken_0x3b42c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B42C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B42C0u;
            // 0x3b42c4: 0x267300f0  addiu       $s3, $s3, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b42c0) {
            ctx->pc = 0x3B42A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3b42a8;
        }
    }
    ctx->pc = 0x3B42C8u;
label_3b42c8:
    // 0x3b42c8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3b42c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3b42cc:
    // 0x3b42cc: 0x24428980  addiu       $v0, $v0, -0x7680
    ctx->pc = 0x3b42ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936960));
label_3b42d0:
    // 0x3b42d0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3b42d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3b42d4:
    // 0x3b42d4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3b42d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3b42d8:
    // 0x3b42d8: 0x244289b8  addiu       $v0, $v0, -0x7648
    ctx->pc = 0x3b42d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937016));
label_3b42dc:
    // 0x3b42dc: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x3b42dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_3b42e0:
    // 0x3b42e0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b42e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b42e4:
    // 0x3b42e4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3b42e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3b42e8:
    // 0x3b42e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3b42e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b42ec:
    // 0x3b42ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b42ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b42f0:
    // 0x3b42f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b42f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b42f4:
    // 0x3b42f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b42f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3b42f8:
    // 0x3b42f8: 0x3e00008  jr          $ra
label_3b42fc:
    if (ctx->pc == 0x3B42FCu) {
        ctx->pc = 0x3B42FCu;
            // 0x3b42fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3B4300u;
        goto label_3b4300;
    }
    ctx->pc = 0x3B42F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B42FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B42F8u;
            // 0x3b42fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B4300u;
label_3b4300:
    // 0x3b4300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b4300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3b4304:
    // 0x3b4304: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b4304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3b4308:
    // 0x3b4308: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b4308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3b430c:
    // 0x3b430c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b430cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3b4310:
    // 0x3b4310: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b4310u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b4314:
    // 0x3b4314: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_3b4318:
    if (ctx->pc == 0x3B4318u) {
        ctx->pc = 0x3B4318u;
            // 0x3b4318: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B431Cu;
        goto label_3b431c;
    }
    ctx->pc = 0x3B4314u;
    {
        const bool branch_taken_0x3b4314 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4314u;
            // 0x3b4318: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4314) {
            ctx->pc = 0x3B4448u;
            goto label_3b4448;
        }
    }
    ctx->pc = 0x3B431Cu;
label_3b431c:
    // 0x3b431c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3b431cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3b4320:
    // 0x3b4320: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3b4320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3b4324:
    // 0x3b4324: 0x246389e0  addiu       $v1, $v1, -0x7620
    ctx->pc = 0x3b4324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937056));
label_3b4328:
    // 0x3b4328: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x3b4328u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
label_3b432c:
    // 0x3b432c: 0x24428a18  addiu       $v0, $v0, -0x75E8
    ctx->pc = 0x3b432cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937112));
label_3b4330:
    // 0x3b4330: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3b4330u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3b4334:
    // 0x3b4334: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x3b4334u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_3b4338:
    // 0x3b4338: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x3b4338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_3b433c:
    // 0x3b433c: 0xc0407c0  jal         func_101F00
label_3b4340:
    if (ctx->pc == 0x3B4340u) {
        ctx->pc = 0x3B4340u;
            // 0x3b4340: 0x24a54040  addiu       $a1, $a1, 0x4040 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16448));
        ctx->pc = 0x3B4344u;
        goto label_3b4344;
    }
    ctx->pc = 0x3B433Cu;
    SET_GPR_U32(ctx, 31, 0x3B4344u);
    ctx->pc = 0x3B4340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B433Cu;
            // 0x3b4340: 0x24a54040  addiu       $a1, $a1, 0x4040 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4344u; }
        if (ctx->pc != 0x3B4344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4344u; }
        if (ctx->pc != 0x3B4344u) { return; }
    }
    ctx->pc = 0x3B4344u;
label_3b4344:
    // 0x3b4344: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x3b4344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_3b4348:
    // 0x3b4348: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3b434c:
    if (ctx->pc == 0x3B434Cu) {
        ctx->pc = 0x3B434Cu;
            // 0x3b434c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x3B4350u;
        goto label_3b4350;
    }
    ctx->pc = 0x3B4348u;
    {
        const bool branch_taken_0x3b4348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4348) {
            ctx->pc = 0x3B434Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4348u;
            // 0x3b434c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B435Cu;
            goto label_3b435c;
        }
    }
    ctx->pc = 0x3B4350u;
label_3b4350:
    // 0x3b4350: 0xc07507c  jal         func_1D41F0
label_3b4354:
    if (ctx->pc == 0x3B4354u) {
        ctx->pc = 0x3B4354u;
            // 0x3b4354: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x3B4358u;
        goto label_3b4358;
    }
    ctx->pc = 0x3B4350u;
    SET_GPR_U32(ctx, 31, 0x3B4358u);
    ctx->pc = 0x3B4354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4350u;
            // 0x3b4354: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4358u; }
        if (ctx->pc != 0x3B4358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4358u; }
        if (ctx->pc != 0x3B4358u) { return; }
    }
    ctx->pc = 0x3B4358u;
label_3b4358:
    // 0x3b4358: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x3b4358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_3b435c:
    // 0x3b435c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3b4360:
    if (ctx->pc == 0x3B4360u) {
        ctx->pc = 0x3B4360u;
            // 0x3b4360: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x3B4364u;
        goto label_3b4364;
    }
    ctx->pc = 0x3B435Cu;
    {
        const bool branch_taken_0x3b435c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b435c) {
            ctx->pc = 0x3B4360u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B435Cu;
            // 0x3b4360: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B438Cu;
            goto label_3b438c;
        }
    }
    ctx->pc = 0x3B4364u;
label_3b4364:
    // 0x3b4364: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3b4368:
    if (ctx->pc == 0x3B4368u) {
        ctx->pc = 0x3B436Cu;
        goto label_3b436c;
    }
    ctx->pc = 0x3B4364u;
    {
        const bool branch_taken_0x3b4364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4364) {
            ctx->pc = 0x3B4388u;
            goto label_3b4388;
        }
    }
    ctx->pc = 0x3B436Cu;
label_3b436c:
    // 0x3b436c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3b4370:
    if (ctx->pc == 0x3B4370u) {
        ctx->pc = 0x3B4374u;
        goto label_3b4374;
    }
    ctx->pc = 0x3B436Cu;
    {
        const bool branch_taken_0x3b436c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b436c) {
            ctx->pc = 0x3B4388u;
            goto label_3b4388;
        }
    }
    ctx->pc = 0x3B4374u;
label_3b4374:
    // 0x3b4374: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x3b4374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_3b4378:
    // 0x3b4378: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3b437c:
    if (ctx->pc == 0x3B437Cu) {
        ctx->pc = 0x3B4380u;
        goto label_3b4380;
    }
    ctx->pc = 0x3B4378u;
    {
        const bool branch_taken_0x3b4378 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4378) {
            ctx->pc = 0x3B4388u;
            goto label_3b4388;
        }
    }
    ctx->pc = 0x3B4380u;
label_3b4380:
    // 0x3b4380: 0xc0400a8  jal         func_1002A0
label_3b4384:
    if (ctx->pc == 0x3B4384u) {
        ctx->pc = 0x3B4388u;
        goto label_3b4388;
    }
    ctx->pc = 0x3B4380u;
    SET_GPR_U32(ctx, 31, 0x3B4388u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4388u; }
        if (ctx->pc != 0x3B4388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4388u; }
        if (ctx->pc != 0x3B4388u) { return; }
    }
    ctx->pc = 0x3B4388u;
label_3b4388:
    // 0x3b4388: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x3b4388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_3b438c:
    // 0x3b438c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3b4390:
    if (ctx->pc == 0x3B4390u) {
        ctx->pc = 0x3B4390u;
            // 0x3b4390: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x3B4394u;
        goto label_3b4394;
    }
    ctx->pc = 0x3B438Cu;
    {
        const bool branch_taken_0x3b438c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b438c) {
            ctx->pc = 0x3B4390u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B438Cu;
            // 0x3b4390: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B43BCu;
            goto label_3b43bc;
        }
    }
    ctx->pc = 0x3B4394u;
label_3b4394:
    // 0x3b4394: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3b4398:
    if (ctx->pc == 0x3B4398u) {
        ctx->pc = 0x3B439Cu;
        goto label_3b439c;
    }
    ctx->pc = 0x3B4394u;
    {
        const bool branch_taken_0x3b4394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4394) {
            ctx->pc = 0x3B43B8u;
            goto label_3b43b8;
        }
    }
    ctx->pc = 0x3B439Cu;
label_3b439c:
    // 0x3b439c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3b43a0:
    if (ctx->pc == 0x3B43A0u) {
        ctx->pc = 0x3B43A4u;
        goto label_3b43a4;
    }
    ctx->pc = 0x3B439Cu;
    {
        const bool branch_taken_0x3b439c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b439c) {
            ctx->pc = 0x3B43B8u;
            goto label_3b43b8;
        }
    }
    ctx->pc = 0x3B43A4u;
label_3b43a4:
    // 0x3b43a4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x3b43a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_3b43a8:
    // 0x3b43a8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3b43ac:
    if (ctx->pc == 0x3B43ACu) {
        ctx->pc = 0x3B43B0u;
        goto label_3b43b0;
    }
    ctx->pc = 0x3B43A8u;
    {
        const bool branch_taken_0x3b43a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b43a8) {
            ctx->pc = 0x3B43B8u;
            goto label_3b43b8;
        }
    }
    ctx->pc = 0x3B43B0u;
label_3b43b0:
    // 0x3b43b0: 0xc0400a8  jal         func_1002A0
label_3b43b4:
    if (ctx->pc == 0x3B43B4u) {
        ctx->pc = 0x3B43B8u;
        goto label_3b43b8;
    }
    ctx->pc = 0x3B43B0u;
    SET_GPR_U32(ctx, 31, 0x3B43B8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B43B8u; }
        if (ctx->pc != 0x3B43B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B43B8u; }
        if (ctx->pc != 0x3B43B8u) { return; }
    }
    ctx->pc = 0x3B43B8u;
label_3b43b8:
    // 0x3b43b8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x3b43b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_3b43bc:
    // 0x3b43bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3b43c0:
    if (ctx->pc == 0x3B43C0u) {
        ctx->pc = 0x3B43C4u;
        goto label_3b43c4;
    }
    ctx->pc = 0x3B43BCu;
    {
        const bool branch_taken_0x3b43bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b43bc) {
            ctx->pc = 0x3B43D8u;
            goto label_3b43d8;
        }
    }
    ctx->pc = 0x3B43C4u;
label_3b43c4:
    // 0x3b43c4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3b43c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3b43c8:
    // 0x3b43c8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3b43c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3b43cc:
    // 0x3b43cc: 0x246389c8  addiu       $v1, $v1, -0x7638
    ctx->pc = 0x3b43ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937032));
label_3b43d0:
    // 0x3b43d0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x3b43d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_3b43d4:
    // 0x3b43d4: 0xac4064f0  sw          $zero, 0x64F0($v0)
    ctx->pc = 0x3b43d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25840), GPR_U32(ctx, 0));
label_3b43d8:
    // 0x3b43d8: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_3b43dc:
    if (ctx->pc == 0x3B43DCu) {
        ctx->pc = 0x3B43DCu;
            // 0x3b43dc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x3B43E0u;
        goto label_3b43e0;
    }
    ctx->pc = 0x3B43D8u;
    {
        const bool branch_taken_0x3b43d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b43d8) {
            ctx->pc = 0x3B43DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B43D8u;
            // 0x3b43dc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B4434u;
            goto label_3b4434;
        }
    }
    ctx->pc = 0x3B43E0u;
label_3b43e0:
    // 0x3b43e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3b43e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3b43e4:
    // 0x3b43e4: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x3b43e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_3b43e8:
    // 0x3b43e8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3b43e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3b43ec:
    // 0x3b43ec: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x3b43ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_3b43f0:
    // 0x3b43f0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3b43f4:
    if (ctx->pc == 0x3B43F4u) {
        ctx->pc = 0x3B43F4u;
            // 0x3b43f4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x3B43F8u;
        goto label_3b43f8;
    }
    ctx->pc = 0x3B43F0u;
    {
        const bool branch_taken_0x3b43f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b43f0) {
            ctx->pc = 0x3B43F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B43F0u;
            // 0x3b43f4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B440Cu;
            goto label_3b440c;
        }
    }
    ctx->pc = 0x3B43F8u;
label_3b43f8:
    // 0x3b43f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3b43f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b43fc:
    // 0x3b43fc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3b43fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3b4400:
    // 0x3b4400: 0x320f809  jalr        $t9
label_3b4404:
    if (ctx->pc == 0x3B4404u) {
        ctx->pc = 0x3B4404u;
            // 0x3b4404: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3B4408u;
        goto label_3b4408;
    }
    ctx->pc = 0x3B4400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B4408u);
        ctx->pc = 0x3B4404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4400u;
            // 0x3b4404: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B4408u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B4408u; }
            if (ctx->pc != 0x3B4408u) { return; }
        }
        }
    }
    ctx->pc = 0x3B4408u;
label_3b4408:
    // 0x3b4408: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x3b4408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_3b440c:
    // 0x3b440c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3b4410:
    if (ctx->pc == 0x3B4410u) {
        ctx->pc = 0x3B4410u;
            // 0x3b4410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B4414u;
        goto label_3b4414;
    }
    ctx->pc = 0x3B440Cu;
    {
        const bool branch_taken_0x3b440c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b440c) {
            ctx->pc = 0x3B4410u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B440Cu;
            // 0x3b4410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B4428u;
            goto label_3b4428;
        }
    }
    ctx->pc = 0x3B4414u;
label_3b4414:
    // 0x3b4414: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3b4414u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b4418:
    // 0x3b4418: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3b4418u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3b441c:
    // 0x3b441c: 0x320f809  jalr        $t9
label_3b4420:
    if (ctx->pc == 0x3B4420u) {
        ctx->pc = 0x3B4420u;
            // 0x3b4420: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3B4424u;
        goto label_3b4424;
    }
    ctx->pc = 0x3B441Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B4424u);
        ctx->pc = 0x3B4420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B441Cu;
            // 0x3b4420: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B4424u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B4424u; }
            if (ctx->pc != 0x3B4424u) { return; }
        }
        }
    }
    ctx->pc = 0x3B4424u;
label_3b4424:
    // 0x3b4424: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b4424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b4428:
    // 0x3b4428: 0xc075bf8  jal         func_1D6FE0
label_3b442c:
    if (ctx->pc == 0x3B442Cu) {
        ctx->pc = 0x3B442Cu;
            // 0x3b442c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B4430u;
        goto label_3b4430;
    }
    ctx->pc = 0x3B4428u;
    SET_GPR_U32(ctx, 31, 0x3B4430u);
    ctx->pc = 0x3B442Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4428u;
            // 0x3b442c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4430u; }
        if (ctx->pc != 0x3B4430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4430u; }
        if (ctx->pc != 0x3B4430u) { return; }
    }
    ctx->pc = 0x3B4430u;
label_3b4430:
    // 0x3b4430: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3b4430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3b4434:
    // 0x3b4434: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3b4434u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3b4438:
    // 0x3b4438: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3b443c:
    if (ctx->pc == 0x3B443Cu) {
        ctx->pc = 0x3B443Cu;
            // 0x3b443c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B4440u;
        goto label_3b4440;
    }
    ctx->pc = 0x3B4438u;
    {
        const bool branch_taken_0x3b4438 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3b4438) {
            ctx->pc = 0x3B443Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4438u;
            // 0x3b443c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B444Cu;
            goto label_3b444c;
        }
    }
    ctx->pc = 0x3B4440u;
label_3b4440:
    // 0x3b4440: 0xc0400a8  jal         func_1002A0
label_3b4444:
    if (ctx->pc == 0x3B4444u) {
        ctx->pc = 0x3B4444u;
            // 0x3b4444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B4448u;
        goto label_3b4448;
    }
    ctx->pc = 0x3B4440u;
    SET_GPR_U32(ctx, 31, 0x3B4448u);
    ctx->pc = 0x3B4444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4440u;
            // 0x3b4444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4448u; }
        if (ctx->pc != 0x3B4448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4448u; }
        if (ctx->pc != 0x3B4448u) { return; }
    }
    ctx->pc = 0x3B4448u;
label_3b4448:
    // 0x3b4448: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b4448u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b444c:
    // 0x3b444c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b444cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3b4450:
    // 0x3b4450: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b4450u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b4454:
    // 0x3b4454: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b4454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3b4458:
    // 0x3b4458: 0x3e00008  jr          $ra
label_3b445c:
    if (ctx->pc == 0x3B445Cu) {
        ctx->pc = 0x3B445Cu;
            // 0x3b445c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3B4460u;
        goto label_fallthrough_0x3b4458;
    }
    ctx->pc = 0x3B4458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B445Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4458u;
            // 0x3b445c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3b4458:
    ctx->pc = 0x3B4460u;
}
