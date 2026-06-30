#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D82A0
// Address: 0x1d82a0 - 0x1d8590
void sub_001D82A0_0x1d82a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D82A0_0x1d82a0");
#endif

    switch (ctx->pc) {
        case 0x1d82a0u: goto label_1d82a0;
        case 0x1d82a4u: goto label_1d82a4;
        case 0x1d82a8u: goto label_1d82a8;
        case 0x1d82acu: goto label_1d82ac;
        case 0x1d82b0u: goto label_1d82b0;
        case 0x1d82b4u: goto label_1d82b4;
        case 0x1d82b8u: goto label_1d82b8;
        case 0x1d82bcu: goto label_1d82bc;
        case 0x1d82c0u: goto label_1d82c0;
        case 0x1d82c4u: goto label_1d82c4;
        case 0x1d82c8u: goto label_1d82c8;
        case 0x1d82ccu: goto label_1d82cc;
        case 0x1d82d0u: goto label_1d82d0;
        case 0x1d82d4u: goto label_1d82d4;
        case 0x1d82d8u: goto label_1d82d8;
        case 0x1d82dcu: goto label_1d82dc;
        case 0x1d82e0u: goto label_1d82e0;
        case 0x1d82e4u: goto label_1d82e4;
        case 0x1d82e8u: goto label_1d82e8;
        case 0x1d82ecu: goto label_1d82ec;
        case 0x1d82f0u: goto label_1d82f0;
        case 0x1d82f4u: goto label_1d82f4;
        case 0x1d82f8u: goto label_1d82f8;
        case 0x1d82fcu: goto label_1d82fc;
        case 0x1d8300u: goto label_1d8300;
        case 0x1d8304u: goto label_1d8304;
        case 0x1d8308u: goto label_1d8308;
        case 0x1d830cu: goto label_1d830c;
        case 0x1d8310u: goto label_1d8310;
        case 0x1d8314u: goto label_1d8314;
        case 0x1d8318u: goto label_1d8318;
        case 0x1d831cu: goto label_1d831c;
        case 0x1d8320u: goto label_1d8320;
        case 0x1d8324u: goto label_1d8324;
        case 0x1d8328u: goto label_1d8328;
        case 0x1d832cu: goto label_1d832c;
        case 0x1d8330u: goto label_1d8330;
        case 0x1d8334u: goto label_1d8334;
        case 0x1d8338u: goto label_1d8338;
        case 0x1d833cu: goto label_1d833c;
        case 0x1d8340u: goto label_1d8340;
        case 0x1d8344u: goto label_1d8344;
        case 0x1d8348u: goto label_1d8348;
        case 0x1d834cu: goto label_1d834c;
        case 0x1d8350u: goto label_1d8350;
        case 0x1d8354u: goto label_1d8354;
        case 0x1d8358u: goto label_1d8358;
        case 0x1d835cu: goto label_1d835c;
        case 0x1d8360u: goto label_1d8360;
        case 0x1d8364u: goto label_1d8364;
        case 0x1d8368u: goto label_1d8368;
        case 0x1d836cu: goto label_1d836c;
        case 0x1d8370u: goto label_1d8370;
        case 0x1d8374u: goto label_1d8374;
        case 0x1d8378u: goto label_1d8378;
        case 0x1d837cu: goto label_1d837c;
        case 0x1d8380u: goto label_1d8380;
        case 0x1d8384u: goto label_1d8384;
        case 0x1d8388u: goto label_1d8388;
        case 0x1d838cu: goto label_1d838c;
        case 0x1d8390u: goto label_1d8390;
        case 0x1d8394u: goto label_1d8394;
        case 0x1d8398u: goto label_1d8398;
        case 0x1d839cu: goto label_1d839c;
        case 0x1d83a0u: goto label_1d83a0;
        case 0x1d83a4u: goto label_1d83a4;
        case 0x1d83a8u: goto label_1d83a8;
        case 0x1d83acu: goto label_1d83ac;
        case 0x1d83b0u: goto label_1d83b0;
        case 0x1d83b4u: goto label_1d83b4;
        case 0x1d83b8u: goto label_1d83b8;
        case 0x1d83bcu: goto label_1d83bc;
        case 0x1d83c0u: goto label_1d83c0;
        case 0x1d83c4u: goto label_1d83c4;
        case 0x1d83c8u: goto label_1d83c8;
        case 0x1d83ccu: goto label_1d83cc;
        case 0x1d83d0u: goto label_1d83d0;
        case 0x1d83d4u: goto label_1d83d4;
        case 0x1d83d8u: goto label_1d83d8;
        case 0x1d83dcu: goto label_1d83dc;
        case 0x1d83e0u: goto label_1d83e0;
        case 0x1d83e4u: goto label_1d83e4;
        case 0x1d83e8u: goto label_1d83e8;
        case 0x1d83ecu: goto label_1d83ec;
        case 0x1d83f0u: goto label_1d83f0;
        case 0x1d83f4u: goto label_1d83f4;
        case 0x1d83f8u: goto label_1d83f8;
        case 0x1d83fcu: goto label_1d83fc;
        case 0x1d8400u: goto label_1d8400;
        case 0x1d8404u: goto label_1d8404;
        case 0x1d8408u: goto label_1d8408;
        case 0x1d840cu: goto label_1d840c;
        case 0x1d8410u: goto label_1d8410;
        case 0x1d8414u: goto label_1d8414;
        case 0x1d8418u: goto label_1d8418;
        case 0x1d841cu: goto label_1d841c;
        case 0x1d8420u: goto label_1d8420;
        case 0x1d8424u: goto label_1d8424;
        case 0x1d8428u: goto label_1d8428;
        case 0x1d842cu: goto label_1d842c;
        case 0x1d8430u: goto label_1d8430;
        case 0x1d8434u: goto label_1d8434;
        case 0x1d8438u: goto label_1d8438;
        case 0x1d843cu: goto label_1d843c;
        case 0x1d8440u: goto label_1d8440;
        case 0x1d8444u: goto label_1d8444;
        case 0x1d8448u: goto label_1d8448;
        case 0x1d844cu: goto label_1d844c;
        case 0x1d8450u: goto label_1d8450;
        case 0x1d8454u: goto label_1d8454;
        case 0x1d8458u: goto label_1d8458;
        case 0x1d845cu: goto label_1d845c;
        case 0x1d8460u: goto label_1d8460;
        case 0x1d8464u: goto label_1d8464;
        case 0x1d8468u: goto label_1d8468;
        case 0x1d846cu: goto label_1d846c;
        case 0x1d8470u: goto label_1d8470;
        case 0x1d8474u: goto label_1d8474;
        case 0x1d8478u: goto label_1d8478;
        case 0x1d847cu: goto label_1d847c;
        case 0x1d8480u: goto label_1d8480;
        case 0x1d8484u: goto label_1d8484;
        case 0x1d8488u: goto label_1d8488;
        case 0x1d848cu: goto label_1d848c;
        case 0x1d8490u: goto label_1d8490;
        case 0x1d8494u: goto label_1d8494;
        case 0x1d8498u: goto label_1d8498;
        case 0x1d849cu: goto label_1d849c;
        case 0x1d84a0u: goto label_1d84a0;
        case 0x1d84a4u: goto label_1d84a4;
        case 0x1d84a8u: goto label_1d84a8;
        case 0x1d84acu: goto label_1d84ac;
        case 0x1d84b0u: goto label_1d84b0;
        case 0x1d84b4u: goto label_1d84b4;
        case 0x1d84b8u: goto label_1d84b8;
        case 0x1d84bcu: goto label_1d84bc;
        case 0x1d84c0u: goto label_1d84c0;
        case 0x1d84c4u: goto label_1d84c4;
        case 0x1d84c8u: goto label_1d84c8;
        case 0x1d84ccu: goto label_1d84cc;
        case 0x1d84d0u: goto label_1d84d0;
        case 0x1d84d4u: goto label_1d84d4;
        case 0x1d84d8u: goto label_1d84d8;
        case 0x1d84dcu: goto label_1d84dc;
        case 0x1d84e0u: goto label_1d84e0;
        case 0x1d84e4u: goto label_1d84e4;
        case 0x1d84e8u: goto label_1d84e8;
        case 0x1d84ecu: goto label_1d84ec;
        case 0x1d84f0u: goto label_1d84f0;
        case 0x1d84f4u: goto label_1d84f4;
        case 0x1d84f8u: goto label_1d84f8;
        case 0x1d84fcu: goto label_1d84fc;
        case 0x1d8500u: goto label_1d8500;
        case 0x1d8504u: goto label_1d8504;
        case 0x1d8508u: goto label_1d8508;
        case 0x1d850cu: goto label_1d850c;
        case 0x1d8510u: goto label_1d8510;
        case 0x1d8514u: goto label_1d8514;
        case 0x1d8518u: goto label_1d8518;
        case 0x1d851cu: goto label_1d851c;
        case 0x1d8520u: goto label_1d8520;
        case 0x1d8524u: goto label_1d8524;
        case 0x1d8528u: goto label_1d8528;
        case 0x1d852cu: goto label_1d852c;
        case 0x1d8530u: goto label_1d8530;
        case 0x1d8534u: goto label_1d8534;
        case 0x1d8538u: goto label_1d8538;
        case 0x1d853cu: goto label_1d853c;
        case 0x1d8540u: goto label_1d8540;
        case 0x1d8544u: goto label_1d8544;
        case 0x1d8548u: goto label_1d8548;
        case 0x1d854cu: goto label_1d854c;
        case 0x1d8550u: goto label_1d8550;
        case 0x1d8554u: goto label_1d8554;
        case 0x1d8558u: goto label_1d8558;
        case 0x1d855cu: goto label_1d855c;
        case 0x1d8560u: goto label_1d8560;
        case 0x1d8564u: goto label_1d8564;
        case 0x1d8568u: goto label_1d8568;
        case 0x1d856cu: goto label_1d856c;
        case 0x1d8570u: goto label_1d8570;
        case 0x1d8574u: goto label_1d8574;
        case 0x1d8578u: goto label_1d8578;
        case 0x1d857cu: goto label_1d857c;
        case 0x1d8580u: goto label_1d8580;
        case 0x1d8584u: goto label_1d8584;
        case 0x1d8588u: goto label_1d8588;
        case 0x1d858cu: goto label_1d858c;
        default: break;
    }

    ctx->pc = 0x1d82a0u;

label_1d82a0:
    // 0x1d82a0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1d82a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_1d82a4:
    // 0x1d82a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1d82a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1d82a8:
    // 0x1d82a8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1d82a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1d82ac:
    // 0x1d82ac: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d82acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d82b0:
    // 0x1d82b0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1d82b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1d82b4:
    // 0x1d82b4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1d82b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1d82b8:
    // 0x1d82b8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1d82b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1d82bc:
    // 0x1d82bc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d82bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1d82c0:
    // 0x1d82c0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d82c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1d82c4:
    // 0x1d82c4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1d82c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d82c8:
    // 0x1d82c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d82c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1d82cc:
    // 0x1d82cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d82ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d82d0:
    // 0x1d82d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d82d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d82d4:
    // 0x1d82d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d82d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d82d8:
    // 0x1d82d8: 0x8c930d6c  lw          $s3, 0xD6C($a0)
    ctx->pc = 0x1d82d8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3436)));
label_1d82dc:
    // 0x1d82dc: 0x8c56e360  lw          $s6, -0x1CA0($v0)
    ctx->pc = 0x1d82dcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
label_1d82e0:
    // 0x1d82e0: 0x8e790054  lw          $t9, 0x54($s3)
    ctx->pc = 0x1d82e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_1d82e4:
    // 0x1d82e4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1d82e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1d82e8:
    // 0x1d82e8: 0x320f809  jalr        $t9
label_1d82ec:
    if (ctx->pc == 0x1D82ECu) {
        ctx->pc = 0x1D82ECu;
            // 0x1d82ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D82F0u;
        goto label_1d82f0;
    }
    ctx->pc = 0x1D82E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D82F0u);
        ctx->pc = 0x1D82ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D82E8u;
            // 0x1d82ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D82F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D82F0u; }
            if (ctx->pc != 0x1D82F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1D82F0u;
label_1d82f0:
    // 0x1d82f0: 0x8e790054  lw          $t9, 0x54($s3)
    ctx->pc = 0x1d82f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_1d82f4:
    // 0x1d82f4: 0x2963c  dsll32      $s2, $v0, 24
    ctx->pc = 0x1d82f4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 24));
label_1d82f8:
    // 0x1d82f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d82f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d82fc:
    // 0x1d82fc: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x1d82fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_1d8300:
    // 0x1d8300: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1d8300u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1d8304:
    // 0x1d8304: 0x320f809  jalr        $t9
label_1d8308:
    if (ctx->pc == 0x1D8308u) {
        ctx->pc = 0x1D8308u;
            // 0x1d8308: 0x12963f  dsra32      $s2, $s2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
        ctx->pc = 0x1D830Cu;
        goto label_1d830c;
    }
    ctx->pc = 0x1D8304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D830Cu);
        ctx->pc = 0x1D8308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8304u;
            // 0x1d8308: 0x12963f  dsra32      $s2, $s2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D830Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D830Cu; }
            if (ctx->pc != 0x1D830Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1D830Cu;
label_1d830c:
    // 0x1d830c: 0x28e3c  dsll32      $s1, $v0, 24
    ctx->pc = 0x1d830cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 24));
label_1d8310:
    // 0x1d8310: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x1d8310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_1d8314:
    // 0x1d8314: 0x118e3f  dsra32      $s1, $s1, 24
    ctx->pc = 0x1d8314u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
label_1d8318:
    // 0x1d8318: 0x24a5a780  addiu       $a1, $a1, -0x5880
    ctx->pc = 0x1d8318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944640));
label_1d831c:
    // 0x1d831c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1d831cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1d8320:
    // 0x1d8320: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x1d8320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1d8324:
    // 0x1d8324: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d8324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d8328:
    // 0x1d8328: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d8328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1d832c:
    // 0x1d832c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1d832cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1d8330:
    // 0x1d8330: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1d8330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_1d8334:
    // 0x1d8334: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1d8334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_1d8338:
    // 0x1d8338: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
label_1d833c:
    if (ctx->pc == 0x1D833Cu) {
        ctx->pc = 0x1D8340u;
        goto label_1d8340;
    }
    ctx->pc = 0x1D8338u;
    {
        const bool branch_taken_0x1d8338 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1d8338) {
            ctx->pc = 0x1D8324u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d8324;
        }
    }
    ctx->pc = 0x1D8340u;
label_1d8340:
    // 0x1d8340: 0x92620010  lbu         $v0, 0x10($s3)
    ctx->pc = 0x1d8340u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 16)));
label_1d8344:
    // 0x1d8344: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d8344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d8348:
    // 0x1d8348: 0x8e790054  lw          $t9, 0x54($s3)
    ctx->pc = 0x1d8348u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_1d834c:
    // 0x1d834c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d834cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d8350:
    // 0x1d8350: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1d8350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_1d8354:
    // 0x1d8354: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1d8354u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1d8358:
    // 0x1d8358: 0x8c5000f0  lw          $s0, 0xF0($v0)
    ctx->pc = 0x1d8358u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_1d835c:
    // 0x1d835c: 0x320f809  jalr        $t9
label_1d8360:
    if (ctx->pc == 0x1D8360u) {
        ctx->pc = 0x1D8360u;
            // 0x1d8360: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x1D8364u;
        goto label_1d8364;
    }
    ctx->pc = 0x1D835Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D8364u);
        ctx->pc = 0x1D8360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D835Cu;
            // 0x1d8360: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D8364u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D8364u; }
            if (ctx->pc != 0x1D8364u) { return; }
        }
        }
    }
    ctx->pc = 0x1D8364u;
label_1d8364:
    // 0x1d8364: 0x8e790054  lw          $t9, 0x54($s3)
    ctx->pc = 0x1d8364u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_1d8368:
    // 0x1d8368: 0x2be3c  dsll32      $s7, $v0, 24
    ctx->pc = 0x1d8368u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 24));
label_1d836c:
    // 0x1d836c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d836cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d8370:
    // 0x1d8370: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1d8370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d8374:
    // 0x1d8374: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1d8374u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1d8378:
    // 0x1d8378: 0x320f809  jalr        $t9
label_1d837c:
    if (ctx->pc == 0x1D837Cu) {
        ctx->pc = 0x1D837Cu;
            // 0x1d837c: 0x17be3f  dsra32      $s7, $s7, 24 (Delay Slot)
        SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 24));
        ctx->pc = 0x1D8380u;
        goto label_1d8380;
    }
    ctx->pc = 0x1D8378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D8380u);
        ctx->pc = 0x1D837Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8378u;
            // 0x1d837c: 0x17be3f  dsra32      $s7, $s7, 24 (Delay Slot)
        SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D8380u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D8380u; }
            if (ctx->pc != 0x1D8380u) { return; }
        }
        }
    }
    ctx->pc = 0x1D8380u;
label_1d8380:
    // 0x1d8380: 0x8e790054  lw          $t9, 0x54($s3)
    ctx->pc = 0x1d8380u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_1d8384:
    // 0x1d8384: 0x2f63c  dsll32      $fp, $v0, 24
    ctx->pc = 0x1d8384u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) << (32 + 24));
label_1d8388:
    // 0x1d8388: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d8388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d838c:
    // 0x1d838c: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x1d838cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1d8390:
    // 0x1d8390: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1d8390u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1d8394:
    // 0x1d8394: 0x320f809  jalr        $t9
label_1d8398:
    if (ctx->pc == 0x1D8398u) {
        ctx->pc = 0x1D8398u;
            // 0x1d8398: 0x1ef63f  dsra32      $fp, $fp, 24 (Delay Slot)
        SET_GPR_S64(ctx, 30, GPR_S64(ctx, 30) >> (32 + 24));
        ctx->pc = 0x1D839Cu;
        goto label_1d839c;
    }
    ctx->pc = 0x1D8394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D839Cu);
        ctx->pc = 0x1D8398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8394u;
            // 0x1d8398: 0x1ef63f  dsra32      $fp, $fp, 24 (Delay Slot)
        SET_GPR_S64(ctx, 30, GPR_S64(ctx, 30) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D839Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D839Cu; }
            if (ctx->pc != 0x1D839Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1D839Cu;
label_1d839c:
    // 0x1d839c: 0x8e790054  lw          $t9, 0x54($s3)
    ctx->pc = 0x1d839cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_1d83a0:
    // 0x1d83a0: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1d83a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_1d83a4:
    // 0x1d83a4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1d83a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_1d83a8:
    // 0x1d83a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d83a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d83ac:
    // 0x1d83ac: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x1d83acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_1d83b0:
    // 0x1d83b0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1d83b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1d83b4:
    // 0x1d83b4: 0x320f809  jalr        $t9
label_1d83b8:
    if (ctx->pc == 0x1D83B8u) {
        ctx->pc = 0x1D83B8u;
            // 0x1d83b8: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->pc = 0x1D83BCu;
        goto label_1d83bc;
    }
    ctx->pc = 0x1D83B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D83BCu);
        ctx->pc = 0x1D83B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D83B4u;
            // 0x1d83b8: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D83BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D83BCu; }
            if (ctx->pc != 0x1D83BCu) { return; }
        }
        }
    }
    ctx->pc = 0x1D83BCu;
label_1d83bc:
    // 0x1d83bc: 0x8e790054  lw          $t9, 0x54($s3)
    ctx->pc = 0x1d83bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_1d83c0:
    // 0x1d83c0: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1d83c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_1d83c4:
    // 0x1d83c4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1d83c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_1d83c8:
    // 0x1d83c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d83c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d83cc:
    // 0x1d83cc: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x1d83ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_1d83d0:
    // 0x1d83d0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1d83d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1d83d4:
    // 0x1d83d4: 0x320f809  jalr        $t9
label_1d83d8:
    if (ctx->pc == 0x1D83D8u) {
        ctx->pc = 0x1D83D8u;
            // 0x1d83d8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1D83DCu;
        goto label_1d83dc;
    }
    ctx->pc = 0x1D83D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D83DCu);
        ctx->pc = 0x1D83D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D83D4u;
            // 0x1d83d8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D83DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D83DCu; }
            if (ctx->pc != 0x1D83DCu) { return; }
        }
        }
    }
    ctx->pc = 0x1D83DCu;
label_1d83dc:
    // 0x1d83dc: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x1d83dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
label_1d83e0:
    // 0x1d83e0: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x1d83e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1d83e4:
    // 0x1d83e4: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x1d83e4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_1d83e8:
    // 0x1d83e8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_1d83ec:
    if (ctx->pc == 0x1D83ECu) {
        ctx->pc = 0x1D83ECu;
            // 0x1d83ec: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x1D83F0u;
        goto label_1d83f0;
    }
    ctx->pc = 0x1D83E8u;
    {
        const bool branch_taken_0x1d83e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D83ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D83E8u;
            // 0x1d83ec: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d83e8) {
            ctx->pc = 0x1D840Cu;
            goto label_1d840c;
        }
    }
    ctx->pc = 0x1D83F0u;
label_1d83f0:
    // 0x1d83f0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1d83f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1d83f4:
    // 0x1d83f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d83f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1d83f8:
    // 0x1d83f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d83f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d83fc:
    // 0x1d83fc: 0x0  nop
    ctx->pc = 0x1d83fcu;
    // NOP
label_1d8400:
    // 0x1d8400: 0x0  nop
    ctx->pc = 0x1d8400u;
    // NOP
label_1d8404:
    // 0x1d8404: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1d8408:
    if (ctx->pc == 0x1D8408u) {
        ctx->pc = 0x1D840Cu;
        goto label_1d840c;
    }
    ctx->pc = 0x1D8404u;
    {
        const bool branch_taken_0x1d8404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8404) {
            ctx->pc = 0x1D83F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d83f0;
        }
    }
    ctx->pc = 0x1D840Cu;
label_1d840c:
    // 0x1d840c: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x1d840cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1d8410:
    // 0x1d8410: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1d8410u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8414:
    // 0x1d8414: 0xafb200d0  sw          $s2, 0xD0($sp)
    ctx->pc = 0x1d8414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 18));
label_1d8418:
    // 0x1d8418: 0xafb000d4  sw          $s0, 0xD4($sp)
    ctx->pc = 0x1d8418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 16));
label_1d841c:
    // 0x1d841c: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x1d841cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
label_1d8420:
    // 0x1d8420: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x1d8420u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1d8424:
    // 0x1d8424: 0xafb100d8  sw          $s1, 0xD8($sp)
    ctx->pc = 0x1d8424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 17));
label_1d8428:
    // 0x1d8428: 0xafb700dc  sw          $s7, 0xDC($sp)
    ctx->pc = 0x1d8428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 23));
label_1d842c:
    // 0x1d842c: 0xafbe00e0  sw          $fp, 0xE0($sp)
    ctx->pc = 0x1d842cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 30));
label_1d8430:
    // 0x1d8430: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x1d8430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
label_1d8434:
    // 0x1d8434: 0xafa400ec  sw          $a0, 0xEC($sp)
    ctx->pc = 0x1d8434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 4));
label_1d8438:
    // 0x1d8438: 0x329000ff  andi        $s0, $s4, 0xFF
    ctx->pc = 0x1d8438u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_1d843c:
    // 0x1d843c: 0x92a30e3d  lbu         $v1, 0xE3D($s5)
    ctx->pc = 0x1d843cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3645)));
label_1d8440:
    // 0x1d8440: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1d8440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1d8444:
    // 0x1d8444: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x1d8444u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_1d8448:
    // 0x1d8448: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1d8448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_1d844c:
    // 0x1d844c: 0x2a48821  addu        $s1, $s5, $a0
    ctx->pc = 0x1d844cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_1d8450:
    // 0x1d8450: 0x8c4200d0  lw          $v0, 0xD0($v0)
    ctx->pc = 0x1d8450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
label_1d8454:
    // 0x1d8454: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1d8454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1d8458:
    // 0x1d8458: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1d8458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_1d845c:
    // 0x1d845c: 0x26240f40  addiu       $a0, $s1, 0xF40
    ctx->pc = 0x1d845cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3904));
label_1d8460:
    // 0x1d8460: 0x246500c0  addiu       $a1, $v1, 0xC0
    ctx->pc = 0x1d8460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
label_1d8464:
    // 0x1d8464: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1d8464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1d8468:
    // 0x1d8468: 0xc04cd60  jal         func_133580
label_1d846c:
    if (ctx->pc == 0x1D846Cu) {
        ctx->pc = 0x1D846Cu;
            // 0x1d846c: 0x2c23021  addu        $a2, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->pc = 0x1D8470u;
        goto label_1d8470;
    }
    ctx->pc = 0x1D8468u;
    SET_GPR_U32(ctx, 31, 0x1D8470u);
    ctx->pc = 0x1D846Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8468u;
            // 0x1d846c: 0x2c23021  addu        $a2, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8470u; }
        if (ctx->pc != 0x1D8470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8470u; }
        if (ctx->pc != 0x1D8470u) { return; }
    }
    ctx->pc = 0x1D8470u;
label_1d8470:
    // 0x1d8470: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1d8470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_1d8474:
    // 0x1d8474: 0x26320f40  addiu       $s2, $s1, 0xF40
    ctx->pc = 0x1d8474u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 3904));
label_1d8478:
    // 0x1d8478: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1d8478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1d847c:
    // 0x1d847c: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1d847cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_1d8480:
    // 0x1d8480: 0x24510ec0  addiu       $s1, $v0, 0xEC0
    ctx->pc = 0x1d8480u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 3776));
label_1d8484:
    // 0x1d8484: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d8484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d8488:
    // 0x1d8488: 0x24c6c8f0  addiu       $a2, $a2, -0x3710
    ctx->pc = 0x1d8488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953200));
label_1d848c:
    // 0x1d848c: 0xc04cca0  jal         func_133280
label_1d8490:
    if (ctx->pc == 0x1D8490u) {
        ctx->pc = 0x1D8490u;
            // 0x1d8490: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D8494u;
        goto label_1d8494;
    }
    ctx->pc = 0x1D848Cu;
    SET_GPR_U32(ctx, 31, 0x1D8494u);
    ctx->pc = 0x1D8490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D848Cu;
            // 0x1d8490: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8494u; }
        if (ctx->pc != 0x1D8494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8494u; }
        if (ctx->pc != 0x1D8494u) { return; }
    }
    ctx->pc = 0x1D8494u;
label_1d8494:
    // 0x1d8494: 0x8ea40db0  lw          $a0, 0xDB0($s5)
    ctx->pc = 0x1d8494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3504)));
label_1d8498:
    // 0x1d8498: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x1d8498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1d849c:
    // 0x1d849c: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
label_1d84a0:
    if (ctx->pc == 0x1D84A0u) {
        ctx->pc = 0x1D84A4u;
        goto label_1d84a4;
    }
    ctx->pc = 0x1D849Cu;
    {
        const bool branch_taken_0x1d849c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d849c) {
            ctx->pc = 0x1D84D0u;
            goto label_1d84d0;
        }
    }
    ctx->pc = 0x1D84A4u;
label_1d84a4:
    // 0x1d84a4: 0x8e630050  lw          $v1, 0x50($s3)
    ctx->pc = 0x1d84a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_1d84a8:
    // 0x1d84a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d84a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d84ac:
    // 0x1d84ac: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
label_1d84b0:
    if (ctx->pc == 0x1D84B0u) {
        ctx->pc = 0x1D84B4u;
        goto label_1d84b4;
    }
    ctx->pc = 0x1D84ACu;
    {
        const bool branch_taken_0x1d84ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d84ac) {
            ctx->pc = 0x1D84D0u;
            goto label_1d84d0;
        }
    }
    ctx->pc = 0x1D84B4u;
label_1d84b4:
    // 0x1d84b4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1d84b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1d84b8:
    // 0x1d84b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d84b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d84bc:
    // 0x1d84bc: 0xc04cca0  jal         func_133280
label_1d84c0:
    if (ctx->pc == 0x1D84C0u) {
        ctx->pc = 0x1D84C0u;
            // 0x1d84c0: 0x26660030  addiu       $a2, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->pc = 0x1D84C4u;
        goto label_1d84c4;
    }
    ctx->pc = 0x1D84BCu;
    SET_GPR_U32(ctx, 31, 0x1D84C4u);
    ctx->pc = 0x1D84C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D84BCu;
            // 0x1d84c0: 0x26660030  addiu       $a2, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D84C4u; }
        if (ctx->pc != 0x1D84C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D84C4u; }
        if (ctx->pc != 0x1D84C4u) { return; }
    }
    ctx->pc = 0x1D84C4u;
label_1d84c4:
    // 0x1d84c4: 0x26640040  addiu       $a0, $s3, 0x40
    ctx->pc = 0x1d84c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_1d84c8:
    // 0x1d84c8: 0xc04cc04  jal         func_133010
label_1d84cc:
    if (ctx->pc == 0x1D84CCu) {
        ctx->pc = 0x1D84CCu;
            // 0x1d84cc: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x1D84D0u;
        goto label_1d84d0;
    }
    ctx->pc = 0x1D84C8u;
    SET_GPR_U32(ctx, 31, 0x1D84D0u);
    ctx->pc = 0x1D84CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D84C8u;
            // 0x1d84cc: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D84D0u; }
        if (ctx->pc != 0x1D84D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D84D0u; }
        if (ctx->pc != 0x1D84D0u) { return; }
    }
    ctx->pc = 0x1D84D0u;
label_1d84d0:
    // 0x1d84d0: 0x8ea40db0  lw          $a0, 0xDB0($s5)
    ctx->pc = 0x1d84d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3504)));
label_1d84d4:
    // 0x1d84d4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1d84d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1d84d8:
    // 0x1d84d8: 0x14830015  bne         $a0, $v1, . + 4 + (0x15 << 2)
label_1d84dc:
    if (ctx->pc == 0x1D84DCu) {
        ctx->pc = 0x1D84E0u;
        goto label_1d84e0;
    }
    ctx->pc = 0x1D84D8u;
    {
        const bool branch_taken_0x1d84d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d84d8) {
            ctx->pc = 0x1D8530u;
            goto label_1d8530;
        }
    }
    ctx->pc = 0x1D84E0u;
label_1d84e0:
    // 0x1d84e0: 0x92630010  lbu         $v1, 0x10($s3)
    ctx->pc = 0x1d84e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 16)));
label_1d84e4:
    // 0x1d84e4: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x1d84e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_1d84e8:
    // 0x1d84e8: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x1d84e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1d84ec:
    // 0x1d84ec: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_1d84f0:
    if (ctx->pc == 0x1D84F0u) {
        ctx->pc = 0x1D84F4u;
        goto label_1d84f4;
    }
    ctx->pc = 0x1D84ECu;
    {
        const bool branch_taken_0x1d84ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d84ec) {
            ctx->pc = 0x1D8530u;
            goto label_1d8530;
        }
    }
    ctx->pc = 0x1D84F4u;
label_1d84f4:
    // 0x1d84f4: 0x8e630050  lw          $v1, 0x50($s3)
    ctx->pc = 0x1d84f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_1d84f8:
    // 0x1d84f8: 0x328400ff  andi        $a0, $s4, 0xFF
    ctx->pc = 0x1d84f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_1d84fc:
    // 0x1d84fc: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
label_1d8500:
    if (ctx->pc == 0x1D8500u) {
        ctx->pc = 0x1D8504u;
        goto label_1d8504;
    }
    ctx->pc = 0x1D84FCu;
    {
        const bool branch_taken_0x1d84fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d84fc) {
            ctx->pc = 0x1D8530u;
            goto label_1d8530;
        }
    }
    ctx->pc = 0x1D8504u;
label_1d8504:
    // 0x1d8504: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d8504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d8508:
    // 0x1d8508: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1d8508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1d850c:
    // 0x1d850c: 0xc04cca0  jal         func_133280
label_1d8510:
    if (ctx->pc == 0x1D8510u) {
        ctx->pc = 0x1D8510u;
            // 0x1d8510: 0x26660030  addiu       $a2, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->pc = 0x1D8514u;
        goto label_1d8514;
    }
    ctx->pc = 0x1D850Cu;
    SET_GPR_U32(ctx, 31, 0x1D8514u);
    ctx->pc = 0x1D8510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D850Cu;
            // 0x1d8510: 0x26660030  addiu       $a2, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8514u; }
        if (ctx->pc != 0x1D8514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8514u; }
        if (ctx->pc != 0x1D8514u) { return; }
    }
    ctx->pc = 0x1D8514u;
label_1d8514:
    // 0x1d8514: 0x26640040  addiu       $a0, $s3, 0x40
    ctx->pc = 0x1d8514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_1d8518:
    // 0x1d8518: 0xc04cc04  jal         func_133010
label_1d851c:
    if (ctx->pc == 0x1D851Cu) {
        ctx->pc = 0x1D851Cu;
            // 0x1d851c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x1D8520u;
        goto label_1d8520;
    }
    ctx->pc = 0x1D8518u;
    SET_GPR_U32(ctx, 31, 0x1D8520u);
    ctx->pc = 0x1D851Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8518u;
            // 0x1d851c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8520u; }
        if (ctx->pc != 0x1D8520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8520u; }
        if (ctx->pc != 0x1D8520u) { return; }
    }
    ctx->pc = 0x1D8520u;
label_1d8520:
    // 0x1d8520: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d8524:
    // 0x1d8524: 0xc04cc04  jal         func_133010
label_1d8528:
    if (ctx->pc == 0x1D8528u) {
        ctx->pc = 0x1D8528u;
            // 0x1d8528: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x1D852Cu;
        goto label_1d852c;
    }
    ctx->pc = 0x1D8524u;
    SET_GPR_U32(ctx, 31, 0x1D852Cu);
    ctx->pc = 0x1D8528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8524u;
            // 0x1d8528: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D852Cu; }
        if (ctx->pc != 0x1D852Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D852Cu; }
        if (ctx->pc != 0x1D852Cu) { return; }
    }
    ctx->pc = 0x1D852Cu;
label_1d852c:
    // 0x1d852c: 0x0  nop
    ctx->pc = 0x1d852cu;
    // NOP
label_1d8530:
    // 0x1d8530: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x1d8530u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_1d8534:
    // 0x1d8534: 0x2a32021  addu        $a0, $s5, $v1
    ctx->pc = 0x1d8534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_1d8538:
    // 0x1d8538: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x1d8538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1d853c:
    // 0x1d853c: 0xac800f78  sw          $zero, 0xF78($a0)
    ctx->pc = 0x1d853cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3960), GPR_U32(ctx, 0));
label_1d8540:
    // 0x1d8540: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x1d8540u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1d8544:
    // 0x1d8544: 0xac800f74  sw          $zero, 0xF74($a0)
    ctx->pc = 0x1d8544u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3956), GPR_U32(ctx, 0));
label_1d8548:
    // 0x1d8548: 0x2a830008  slti        $v1, $s4, 0x8
    ctx->pc = 0x1d8548u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)8) ? 1 : 0);
label_1d854c:
    // 0x1d854c: 0x1460ffba  bnez        $v1, . + 4 + (-0x46 << 2)
label_1d8550:
    if (ctx->pc == 0x1D8550u) {
        ctx->pc = 0x1D8550u;
            // 0x1d8550: 0xac800f70  sw          $zero, 0xF70($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3952), GPR_U32(ctx, 0));
        ctx->pc = 0x1D8554u;
        goto label_1d8554;
    }
    ctx->pc = 0x1D854Cu;
    {
        const bool branch_taken_0x1d854c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D854Cu;
            // 0x1d8550: 0xac800f70  sw          $zero, 0xF70($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3952), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d854c) {
            ctx->pc = 0x1D8438u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d8438;
        }
    }
    ctx->pc = 0x1D8554u;
label_1d8554:
    // 0x1d8554: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1d8554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1d8558:
    // 0x1d8558: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1d8558u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1d855c:
    // 0x1d855c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1d855cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1d8560:
    // 0x1d8560: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d8560u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1d8564:
    // 0x1d8564: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d8564u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d8568:
    // 0x1d8568: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d8568u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d856c:
    // 0x1d856c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d856cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d8570:
    // 0x1d8570: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d8570u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d8574:
    // 0x1d8574: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d8574u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d8578:
    // 0x1d8578: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d8578u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d857c:
    // 0x1d857c: 0x3e00008  jr          $ra
label_1d8580:
    if (ctx->pc == 0x1D8580u) {
        ctx->pc = 0x1D8580u;
            // 0x1d8580: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x1D8584u;
        goto label_1d8584;
    }
    ctx->pc = 0x1D857Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D857Cu;
            // 0x1d8580: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D8584u;
label_1d8584:
    // 0x1d8584: 0x0  nop
    ctx->pc = 0x1d8584u;
    // NOP
label_1d8588:
    // 0x1d8588: 0x0  nop
    ctx->pc = 0x1d8588u;
    // NOP
label_1d858c:
    // 0x1d858c: 0x0  nop
    ctx->pc = 0x1d858cu;
    // NOP
}
