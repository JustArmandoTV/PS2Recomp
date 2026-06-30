#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F4320
// Address: 0x3f4320 - 0x3f4500
void sub_003F4320_0x3f4320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F4320_0x3f4320");
#endif

    switch (ctx->pc) {
        case 0x3f4320u: goto label_3f4320;
        case 0x3f4324u: goto label_3f4324;
        case 0x3f4328u: goto label_3f4328;
        case 0x3f432cu: goto label_3f432c;
        case 0x3f4330u: goto label_3f4330;
        case 0x3f4334u: goto label_3f4334;
        case 0x3f4338u: goto label_3f4338;
        case 0x3f433cu: goto label_3f433c;
        case 0x3f4340u: goto label_3f4340;
        case 0x3f4344u: goto label_3f4344;
        case 0x3f4348u: goto label_3f4348;
        case 0x3f434cu: goto label_3f434c;
        case 0x3f4350u: goto label_3f4350;
        case 0x3f4354u: goto label_3f4354;
        case 0x3f4358u: goto label_3f4358;
        case 0x3f435cu: goto label_3f435c;
        case 0x3f4360u: goto label_3f4360;
        case 0x3f4364u: goto label_3f4364;
        case 0x3f4368u: goto label_3f4368;
        case 0x3f436cu: goto label_3f436c;
        case 0x3f4370u: goto label_3f4370;
        case 0x3f4374u: goto label_3f4374;
        case 0x3f4378u: goto label_3f4378;
        case 0x3f437cu: goto label_3f437c;
        case 0x3f4380u: goto label_3f4380;
        case 0x3f4384u: goto label_3f4384;
        case 0x3f4388u: goto label_3f4388;
        case 0x3f438cu: goto label_3f438c;
        case 0x3f4390u: goto label_3f4390;
        case 0x3f4394u: goto label_3f4394;
        case 0x3f4398u: goto label_3f4398;
        case 0x3f439cu: goto label_3f439c;
        case 0x3f43a0u: goto label_3f43a0;
        case 0x3f43a4u: goto label_3f43a4;
        case 0x3f43a8u: goto label_3f43a8;
        case 0x3f43acu: goto label_3f43ac;
        case 0x3f43b0u: goto label_3f43b0;
        case 0x3f43b4u: goto label_3f43b4;
        case 0x3f43b8u: goto label_3f43b8;
        case 0x3f43bcu: goto label_3f43bc;
        case 0x3f43c0u: goto label_3f43c0;
        case 0x3f43c4u: goto label_3f43c4;
        case 0x3f43c8u: goto label_3f43c8;
        case 0x3f43ccu: goto label_3f43cc;
        case 0x3f43d0u: goto label_3f43d0;
        case 0x3f43d4u: goto label_3f43d4;
        case 0x3f43d8u: goto label_3f43d8;
        case 0x3f43dcu: goto label_3f43dc;
        case 0x3f43e0u: goto label_3f43e0;
        case 0x3f43e4u: goto label_3f43e4;
        case 0x3f43e8u: goto label_3f43e8;
        case 0x3f43ecu: goto label_3f43ec;
        case 0x3f43f0u: goto label_3f43f0;
        case 0x3f43f4u: goto label_3f43f4;
        case 0x3f43f8u: goto label_3f43f8;
        case 0x3f43fcu: goto label_3f43fc;
        case 0x3f4400u: goto label_3f4400;
        case 0x3f4404u: goto label_3f4404;
        case 0x3f4408u: goto label_3f4408;
        case 0x3f440cu: goto label_3f440c;
        case 0x3f4410u: goto label_3f4410;
        case 0x3f4414u: goto label_3f4414;
        case 0x3f4418u: goto label_3f4418;
        case 0x3f441cu: goto label_3f441c;
        case 0x3f4420u: goto label_3f4420;
        case 0x3f4424u: goto label_3f4424;
        case 0x3f4428u: goto label_3f4428;
        case 0x3f442cu: goto label_3f442c;
        case 0x3f4430u: goto label_3f4430;
        case 0x3f4434u: goto label_3f4434;
        case 0x3f4438u: goto label_3f4438;
        case 0x3f443cu: goto label_3f443c;
        case 0x3f4440u: goto label_3f4440;
        case 0x3f4444u: goto label_3f4444;
        case 0x3f4448u: goto label_3f4448;
        case 0x3f444cu: goto label_3f444c;
        case 0x3f4450u: goto label_3f4450;
        case 0x3f4454u: goto label_3f4454;
        case 0x3f4458u: goto label_3f4458;
        case 0x3f445cu: goto label_3f445c;
        case 0x3f4460u: goto label_3f4460;
        case 0x3f4464u: goto label_3f4464;
        case 0x3f4468u: goto label_3f4468;
        case 0x3f446cu: goto label_3f446c;
        case 0x3f4470u: goto label_3f4470;
        case 0x3f4474u: goto label_3f4474;
        case 0x3f4478u: goto label_3f4478;
        case 0x3f447cu: goto label_3f447c;
        case 0x3f4480u: goto label_3f4480;
        case 0x3f4484u: goto label_3f4484;
        case 0x3f4488u: goto label_3f4488;
        case 0x3f448cu: goto label_3f448c;
        case 0x3f4490u: goto label_3f4490;
        case 0x3f4494u: goto label_3f4494;
        case 0x3f4498u: goto label_3f4498;
        case 0x3f449cu: goto label_3f449c;
        case 0x3f44a0u: goto label_3f44a0;
        case 0x3f44a4u: goto label_3f44a4;
        case 0x3f44a8u: goto label_3f44a8;
        case 0x3f44acu: goto label_3f44ac;
        case 0x3f44b0u: goto label_3f44b0;
        case 0x3f44b4u: goto label_3f44b4;
        case 0x3f44b8u: goto label_3f44b8;
        case 0x3f44bcu: goto label_3f44bc;
        case 0x3f44c0u: goto label_3f44c0;
        case 0x3f44c4u: goto label_3f44c4;
        case 0x3f44c8u: goto label_3f44c8;
        case 0x3f44ccu: goto label_3f44cc;
        case 0x3f44d0u: goto label_3f44d0;
        case 0x3f44d4u: goto label_3f44d4;
        case 0x3f44d8u: goto label_3f44d8;
        case 0x3f44dcu: goto label_3f44dc;
        case 0x3f44e0u: goto label_3f44e0;
        case 0x3f44e4u: goto label_3f44e4;
        case 0x3f44e8u: goto label_3f44e8;
        case 0x3f44ecu: goto label_3f44ec;
        case 0x3f44f0u: goto label_3f44f0;
        case 0x3f44f4u: goto label_3f44f4;
        case 0x3f44f8u: goto label_3f44f8;
        case 0x3f44fcu: goto label_3f44fc;
        default: break;
    }

    ctx->pc = 0x3f4320u;

label_3f4320:
    // 0x3f4320: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3f4320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3f4324:
    // 0x3f4324: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3f4324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_3f4328:
    // 0x3f4328: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3f4328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3f432c:
    // 0x3f432c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3f432cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3f4330:
    // 0x3f4330: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x3f4330u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3f4334:
    // 0x3f4334: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3f4334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3f4338:
    // 0x3f4338: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x3f4338u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3f433c:
    // 0x3f433c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3f433cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3f4340:
    // 0x3f4340: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x3f4340u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3f4344:
    // 0x3f4344: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3f4344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3f4348:
    // 0x3f4348: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x3f4348u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3f434c:
    // 0x3f434c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f434cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3f4350:
    // 0x3f4350: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f4350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f4354:
    // 0x3f4354: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f4354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f4358:
    // 0x3f4358: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f4358u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f435c:
    // 0x3f435c: 0xc0fd080  jal         func_3F4200
label_3f4360:
    if (ctx->pc == 0x3F4360u) {
        ctx->pc = 0x3F4360u;
            // 0x3f4360: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F4364u;
        goto label_3f4364;
    }
    ctx->pc = 0x3F435Cu;
    SET_GPR_U32(ctx, 31, 0x3F4364u);
    ctx->pc = 0x3F4360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F435Cu;
            // 0x3f4360: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F4200u;
    if (runtime->hasFunction(0x3F4200u)) {
        auto targetFn = runtime->lookupFunction(0x3F4200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4364u; }
        if (ctx->pc != 0x3F4364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4200_0x3f4200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4364u; }
        if (ctx->pc != 0x3F4364u) { return; }
    }
    ctx->pc = 0x3F4364u;
label_3f4364:
    // 0x3f4364: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x3f4364u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3f4368:
    // 0x3f4368: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x3f4368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3f436c:
    // 0x3f436c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3f436cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3f4370:
    // 0x3f4370: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3f4370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3f4374:
    // 0x3f4374: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3f4374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3f4378:
    // 0x3f4378: 0xc040180  jal         func_100600
label_3f437c:
    if (ctx->pc == 0x3F437Cu) {
        ctx->pc = 0x3F437Cu;
            // 0x3f437c: 0x24520050  addiu       $s2, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->pc = 0x3F4380u;
        goto label_3f4380;
    }
    ctx->pc = 0x3F4378u;
    SET_GPR_U32(ctx, 31, 0x3F4380u);
    ctx->pc = 0x3F437Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4378u;
            // 0x3f437c: 0x24520050  addiu       $s2, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4380u; }
        if (ctx->pc != 0x3F4380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4380u; }
        if (ctx->pc != 0x3F4380u) { return; }
    }
    ctx->pc = 0x3F4380u;
label_3f4380:
    // 0x3f4380: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_3f4384:
    if (ctx->pc == 0x3F4384u) {
        ctx->pc = 0x3F4384u;
            // 0x3f4384: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F4388u;
        goto label_3f4388;
    }
    ctx->pc = 0x3F4380u;
    {
        const bool branch_taken_0x3f4380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4380u;
            // 0x3f4384: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4380) {
            ctx->pc = 0x3F43E0u;
            goto label_3f43e0;
        }
    }
    ctx->pc = 0x3F4388u;
label_3f4388:
    // 0x3f4388: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3f4388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3f438c:
    // 0x3f438c: 0x26640004  addiu       $a0, $s3, 0x4
    ctx->pc = 0x3f438cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_3f4390:
    // 0x3f4390: 0x2442fed0  addiu       $v0, $v0, -0x130
    ctx->pc = 0x3f4390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966992));
label_3f4394:
    // 0x3f4394: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3f4394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3f4398:
    // 0x3f4398: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x3f4398u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_3f439c:
    // 0x3f439c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3f439cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f43a0:
    // 0x3f43a0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3f43a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3f43a4:
    // 0x3f43a4: 0x2442fea0  addiu       $v0, $v0, -0x160
    ctx->pc = 0x3f43a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966944));
label_3f43a8:
    // 0x3f43a8: 0xae62001c  sw          $v0, 0x1C($s3)
    ctx->pc = 0x3f43a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
label_3f43ac:
    // 0x3f43ac: 0xae750004  sw          $s5, 0x4($s3)
    ctx->pc = 0x3f43acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 21));
label_3f43b0:
    // 0x3f43b0: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x3f43b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_3f43b4:
    // 0x3f43b4: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x3f43b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_3f43b8:
    // 0x3f43b8: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x3f43b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_3f43bc:
    // 0x3f43bc: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x3f43bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_3f43c0:
    // 0x3f43c0: 0xc0fcbcc  jal         func_3F2F30
label_3f43c4:
    if (ctx->pc == 0x3F43C4u) {
        ctx->pc = 0x3F43C4u;
            // 0x3f43c4: 0xae600018  sw          $zero, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
        ctx->pc = 0x3F43C8u;
        goto label_3f43c8;
    }
    ctx->pc = 0x3F43C0u;
    SET_GPR_U32(ctx, 31, 0x3F43C8u);
    ctx->pc = 0x3F43C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F43C0u;
            // 0x3f43c4: 0xae600018  sw          $zero, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F2F30u;
    if (runtime->hasFunction(0x3F2F30u)) {
        auto targetFn = runtime->lookupFunction(0x3F2F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F43C8u; }
        if (ctx->pc != 0x3F43C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F2F30_0x3f2f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F43C8u; }
        if (ctx->pc != 0x3F43C8u) { return; }
    }
    ctx->pc = 0x3F43C8u;
label_3f43c8:
    // 0x3f43c8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3f43c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3f43cc:
    // 0x3f43cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3f43ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3f43d0:
    // 0x3f43d0: 0x24634600  addiu       $v1, $v1, 0x4600
    ctx->pc = 0x3f43d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17920));
label_3f43d4:
    // 0x3f43d4: 0x24424618  addiu       $v0, $v0, 0x4618
    ctx->pc = 0x3f43d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17944));
label_3f43d8:
    // 0x3f43d8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x3f43d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_3f43dc:
    // 0x3f43dc: 0xae62001c  sw          $v0, 0x1C($s3)
    ctx->pc = 0x3f43dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
label_3f43e0:
    // 0x3f43e0: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x3f43e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_3f43e4:
    // 0x3f43e4: 0xc040180  jal         func_100600
label_3f43e8:
    if (ctx->pc == 0x3F43E8u) {
        ctx->pc = 0x3F43E8u;
            // 0x3f43e8: 0xae530000  sw          $s3, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
        ctx->pc = 0x3F43ECu;
        goto label_3f43ec;
    }
    ctx->pc = 0x3F43E4u;
    SET_GPR_U32(ctx, 31, 0x3F43ECu);
    ctx->pc = 0x3F43E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F43E4u;
            // 0x3f43e8: 0xae530000  sw          $s3, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F43ECu; }
        if (ctx->pc != 0x3F43ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F43ECu; }
        if (ctx->pc != 0x3F43ECu) { return; }
    }
    ctx->pc = 0x3F43ECu;
label_3f43ec:
    // 0x3f43ec: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_3f43f0:
    if (ctx->pc == 0x3F43F0u) {
        ctx->pc = 0x3F43F0u;
            // 0x3f43f0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F43F4u;
        goto label_3f43f4;
    }
    ctx->pc = 0x3F43ECu;
    {
        const bool branch_taken_0x3f43ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F43F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F43ECu;
            // 0x3f43f0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f43ec) {
            ctx->pc = 0x3F4428u;
            goto label_3f4428;
        }
    }
    ctx->pc = 0x3F43F4u;
label_3f43f4:
    // 0x3f43f4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3f43f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3f43f8:
    // 0x3f43f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f43f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f43fc:
    // 0x3f43fc: 0x24428bf0  addiu       $v0, $v0, -0x7410
    ctx->pc = 0x3f43fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937584));
label_3f4400:
    // 0x3f4400: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x3f4400u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
label_3f4404:
    // 0x3f4404: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x3f4404u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
label_3f4408:
    // 0x3f4408: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x3f4408u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_3f440c:
    // 0x3f440c: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x3f440cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_3f4410:
    // 0x3f4410: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x3f4410u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_3f4414:
    // 0x3f4414: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x3f4414u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_3f4418:
    // 0x3f4418: 0x8e790014  lw          $t9, 0x14($s3)
    ctx->pc = 0x3f4418u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_3f441c:
    // 0x3f441c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3f441cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3f4420:
    // 0x3f4420: 0x320f809  jalr        $t9
label_3f4424:
    if (ctx->pc == 0x3F4424u) {
        ctx->pc = 0x3F4424u;
            // 0x3f4424: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F4428u;
        goto label_3f4428;
    }
    ctx->pc = 0x3F4420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F4428u);
        ctx->pc = 0x3F4424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4420u;
            // 0x3f4424: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F4428u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F4428u; }
            if (ctx->pc != 0x3F4428u) { return; }
        }
        }
    }
    ctx->pc = 0x3F4428u;
label_3f4428:
    // 0x3f4428: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x3f4428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_3f442c:
    // 0x3f442c: 0xc040180  jal         func_100600
label_3f4430:
    if (ctx->pc == 0x3F4430u) {
        ctx->pc = 0x3F4430u;
            // 0x3f4430: 0xae530008  sw          $s3, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 19));
        ctx->pc = 0x3F4434u;
        goto label_3f4434;
    }
    ctx->pc = 0x3F442Cu;
    SET_GPR_U32(ctx, 31, 0x3F4434u);
    ctx->pc = 0x3F4430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F442Cu;
            // 0x3f4430: 0xae530008  sw          $s3, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4434u; }
        if (ctx->pc != 0x3F4434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4434u; }
        if (ctx->pc != 0x3F4434u) { return; }
    }
    ctx->pc = 0x3F4434u;
label_3f4434:
    // 0x3f4434: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_3f4438:
    if (ctx->pc == 0x3F4438u) {
        ctx->pc = 0x3F4438u;
            // 0x3f4438: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F443Cu;
        goto label_3f443c;
    }
    ctx->pc = 0x3F4434u;
    {
        const bool branch_taken_0x3f4434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4434u;
            // 0x3f4438: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4434) {
            ctx->pc = 0x3F44A8u;
            goto label_3f44a8;
        }
    }
    ctx->pc = 0x3F443Cu;
label_3f443c:
    // 0x3f443c: 0x8e530008  lw          $s3, 0x8($s2)
    ctx->pc = 0x3f443cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3f4440:
    // 0x3f4440: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3f4440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3f4444:
    // 0x3f4444: 0x8e540000  lw          $s4, 0x0($s2)
    ctx->pc = 0x3f4444u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3f4448:
    // 0x3f4448: 0x24428bd0  addiu       $v0, $v0, -0x7430
    ctx->pc = 0x3f4448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937552));
label_3f444c:
    // 0x3f444c: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x3f444cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_3f4450:
    // 0x3f4450: 0x27a5009c  addiu       $a1, $sp, 0x9C
    ctx->pc = 0x3f4450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_3f4454:
    // 0x3f4454: 0x27a60098  addiu       $a2, $sp, 0x98
    ctx->pc = 0x3f4454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_3f4458:
    // 0x3f4458: 0xc0fd1ec  jal         func_3F47B0
label_3f445c:
    if (ctx->pc == 0x3F445Cu) {
        ctx->pc = 0x3F445Cu;
            // 0x3f445c: 0xaea20030  sw          $v0, 0x30($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 48), GPR_U32(ctx, 2));
        ctx->pc = 0x3F4460u;
        goto label_3f4460;
    }
    ctx->pc = 0x3F4458u;
    SET_GPR_U32(ctx, 31, 0x3F4460u);
    ctx->pc = 0x3F445Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4458u;
            // 0x3f445c: 0xaea20030  sw          $v0, 0x30($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F47B0u;
    if (runtime->hasFunction(0x3F47B0u)) {
        auto targetFn = runtime->lookupFunction(0x3F47B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4460u; }
        if (ctx->pc != 0x3F4460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F47B0_0x3f47b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4460u; }
        if (ctx->pc != 0x3F4460u) { return; }
    }
    ctx->pc = 0x3F4460u;
label_3f4460:
    // 0x3f4460: 0x26a40020  addiu       $a0, $s5, 0x20
    ctx->pc = 0x3f4460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_3f4464:
    // 0x3f4464: 0x27a50094  addiu       $a1, $sp, 0x94
    ctx->pc = 0x3f4464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
label_3f4468:
    // 0x3f4468: 0xc0fd1ec  jal         func_3F47B0
label_3f446c:
    if (ctx->pc == 0x3F446Cu) {
        ctx->pc = 0x3F446Cu;
            // 0x3f446c: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3F4470u;
        goto label_3f4470;
    }
    ctx->pc = 0x3F4468u;
    SET_GPR_U32(ctx, 31, 0x3F4470u);
    ctx->pc = 0x3F446Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4468u;
            // 0x3f446c: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F47B0u;
    if (runtime->hasFunction(0x3F47B0u)) {
        auto targetFn = runtime->lookupFunction(0x3F47B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4470u; }
        if (ctx->pc != 0x3F4470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F47B0_0x3f47b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4470u; }
        if (ctx->pc != 0x3F4470u) { return; }
    }
    ctx->pc = 0x3F4470u;
label_3f4470:
    // 0x3f4470: 0xaeb40000  sw          $s4, 0x0($s5)
    ctx->pc = 0x3f4470u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 20));
label_3f4474:
    // 0x3f4474: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3f4474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f4478:
    // 0x3f4478: 0xaeb60008  sw          $s6, 0x8($s5)
    ctx->pc = 0x3f4478u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 22));
label_3f447c:
    // 0x3f447c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3f447cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3f4480:
    // 0x3f4480: 0xaeb3000c  sw          $s3, 0xC($s5)
    ctx->pc = 0x3f4480u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 19));
label_3f4484:
    // 0x3f4484: 0x8eb90030  lw          $t9, 0x30($s5)
    ctx->pc = 0x3f4484u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
label_3f4488:
    // 0x3f4488: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3f4488u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3f448c:
    // 0x3f448c: 0x320f809  jalr        $t9
label_3f4490:
    if (ctx->pc == 0x3F4490u) {
        ctx->pc = 0x3F4490u;
            // 0x3f4490: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F4494u;
        goto label_3f4494;
    }
    ctx->pc = 0x3F448Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F4494u);
        ctx->pc = 0x3F4490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F448Cu;
            // 0x3f4490: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F4494u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F4494u; }
            if (ctx->pc != 0x3F4494u) { return; }
        }
        }
    }
    ctx->pc = 0x3F4494u;
label_3f4494:
    // 0x3f4494: 0x8eb90030  lw          $t9, 0x30($s5)
    ctx->pc = 0x3f4494u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
label_3f4498:
    // 0x3f4498: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3f4498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f449c:
    // 0x3f449c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3f449cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3f44a0:
    // 0x3f44a0: 0x320f809  jalr        $t9
label_3f44a4:
    if (ctx->pc == 0x3F44A4u) {
        ctx->pc = 0x3F44A4u;
            // 0x3f44a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F44A8u;
        goto label_3f44a8;
    }
    ctx->pc = 0x3F44A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F44A8u);
        ctx->pc = 0x3F44A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F44A0u;
            // 0x3f44a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F44A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F44A8u; }
            if (ctx->pc != 0x3F44A8u) { return; }
        }
        }
    }
    ctx->pc = 0x3F44A8u;
label_3f44a8:
    // 0x3f44a8: 0xae550004  sw          $s5, 0x4($s2)
    ctx->pc = 0x3f44a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 21));
label_3f44ac:
    // 0x3f44ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3f44acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f44b0:
    // 0x3f44b0: 0xae570020  sw          $s7, 0x20($s2)
    ctx->pc = 0x3f44b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 23));
label_3f44b4:
    // 0x3f44b4: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x3f44b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3f44b8:
    // 0x3f44b8: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x3f44b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
label_3f44bc:
    // 0x3f44bc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3f44bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3f44c0:
    // 0x3f44c0: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x3f44c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3f44c4:
    // 0x3f44c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3f44c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3f44c8:
    // 0x3f44c8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3f44c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3f44cc:
    // 0x3f44cc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x3f44ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_3f44d0:
    // 0x3f44d0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3f44d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3f44d4:
    // 0x3f44d4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3f44d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3f44d8:
    // 0x3f44d8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3f44d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3f44dc:
    // 0x3f44dc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3f44dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3f44e0:
    // 0x3f44e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3f44e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3f44e4:
    // 0x3f44e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3f44e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f44e8:
    // 0x3f44e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f44e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f44ec:
    // 0x3f44ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f44ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f44f0:
    // 0x3f44f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f44f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f44f4:
    // 0x3f44f4: 0x3e00008  jr          $ra
label_3f44f8:
    if (ctx->pc == 0x3F44F8u) {
        ctx->pc = 0x3F44F8u;
            // 0x3f44f8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x3F44FCu;
        goto label_3f44fc;
    }
    ctx->pc = 0x3F44F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F44F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F44F4u;
            // 0x3f44f8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F44FCu;
label_3f44fc:
    // 0x3f44fc: 0x0  nop
    ctx->pc = 0x3f44fcu;
    // NOP
}
