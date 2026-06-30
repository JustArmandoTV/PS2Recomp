#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004DC1C0
// Address: 0x4dc1c0 - 0x4dc580
void sub_004DC1C0_0x4dc1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DC1C0_0x4dc1c0");
#endif

    switch (ctx->pc) {
        case 0x4dc1c0u: goto label_4dc1c0;
        case 0x4dc1c4u: goto label_4dc1c4;
        case 0x4dc1c8u: goto label_4dc1c8;
        case 0x4dc1ccu: goto label_4dc1cc;
        case 0x4dc1d0u: goto label_4dc1d0;
        case 0x4dc1d4u: goto label_4dc1d4;
        case 0x4dc1d8u: goto label_4dc1d8;
        case 0x4dc1dcu: goto label_4dc1dc;
        case 0x4dc1e0u: goto label_4dc1e0;
        case 0x4dc1e4u: goto label_4dc1e4;
        case 0x4dc1e8u: goto label_4dc1e8;
        case 0x4dc1ecu: goto label_4dc1ec;
        case 0x4dc1f0u: goto label_4dc1f0;
        case 0x4dc1f4u: goto label_4dc1f4;
        case 0x4dc1f8u: goto label_4dc1f8;
        case 0x4dc1fcu: goto label_4dc1fc;
        case 0x4dc200u: goto label_4dc200;
        case 0x4dc204u: goto label_4dc204;
        case 0x4dc208u: goto label_4dc208;
        case 0x4dc20cu: goto label_4dc20c;
        case 0x4dc210u: goto label_4dc210;
        case 0x4dc214u: goto label_4dc214;
        case 0x4dc218u: goto label_4dc218;
        case 0x4dc21cu: goto label_4dc21c;
        case 0x4dc220u: goto label_4dc220;
        case 0x4dc224u: goto label_4dc224;
        case 0x4dc228u: goto label_4dc228;
        case 0x4dc22cu: goto label_4dc22c;
        case 0x4dc230u: goto label_4dc230;
        case 0x4dc234u: goto label_4dc234;
        case 0x4dc238u: goto label_4dc238;
        case 0x4dc23cu: goto label_4dc23c;
        case 0x4dc240u: goto label_4dc240;
        case 0x4dc244u: goto label_4dc244;
        case 0x4dc248u: goto label_4dc248;
        case 0x4dc24cu: goto label_4dc24c;
        case 0x4dc250u: goto label_4dc250;
        case 0x4dc254u: goto label_4dc254;
        case 0x4dc258u: goto label_4dc258;
        case 0x4dc25cu: goto label_4dc25c;
        case 0x4dc260u: goto label_4dc260;
        case 0x4dc264u: goto label_4dc264;
        case 0x4dc268u: goto label_4dc268;
        case 0x4dc26cu: goto label_4dc26c;
        case 0x4dc270u: goto label_4dc270;
        case 0x4dc274u: goto label_4dc274;
        case 0x4dc278u: goto label_4dc278;
        case 0x4dc27cu: goto label_4dc27c;
        case 0x4dc280u: goto label_4dc280;
        case 0x4dc284u: goto label_4dc284;
        case 0x4dc288u: goto label_4dc288;
        case 0x4dc28cu: goto label_4dc28c;
        case 0x4dc290u: goto label_4dc290;
        case 0x4dc294u: goto label_4dc294;
        case 0x4dc298u: goto label_4dc298;
        case 0x4dc29cu: goto label_4dc29c;
        case 0x4dc2a0u: goto label_4dc2a0;
        case 0x4dc2a4u: goto label_4dc2a4;
        case 0x4dc2a8u: goto label_4dc2a8;
        case 0x4dc2acu: goto label_4dc2ac;
        case 0x4dc2b0u: goto label_4dc2b0;
        case 0x4dc2b4u: goto label_4dc2b4;
        case 0x4dc2b8u: goto label_4dc2b8;
        case 0x4dc2bcu: goto label_4dc2bc;
        case 0x4dc2c0u: goto label_4dc2c0;
        case 0x4dc2c4u: goto label_4dc2c4;
        case 0x4dc2c8u: goto label_4dc2c8;
        case 0x4dc2ccu: goto label_4dc2cc;
        case 0x4dc2d0u: goto label_4dc2d0;
        case 0x4dc2d4u: goto label_4dc2d4;
        case 0x4dc2d8u: goto label_4dc2d8;
        case 0x4dc2dcu: goto label_4dc2dc;
        case 0x4dc2e0u: goto label_4dc2e0;
        case 0x4dc2e4u: goto label_4dc2e4;
        case 0x4dc2e8u: goto label_4dc2e8;
        case 0x4dc2ecu: goto label_4dc2ec;
        case 0x4dc2f0u: goto label_4dc2f0;
        case 0x4dc2f4u: goto label_4dc2f4;
        case 0x4dc2f8u: goto label_4dc2f8;
        case 0x4dc2fcu: goto label_4dc2fc;
        case 0x4dc300u: goto label_4dc300;
        case 0x4dc304u: goto label_4dc304;
        case 0x4dc308u: goto label_4dc308;
        case 0x4dc30cu: goto label_4dc30c;
        case 0x4dc310u: goto label_4dc310;
        case 0x4dc314u: goto label_4dc314;
        case 0x4dc318u: goto label_4dc318;
        case 0x4dc31cu: goto label_4dc31c;
        case 0x4dc320u: goto label_4dc320;
        case 0x4dc324u: goto label_4dc324;
        case 0x4dc328u: goto label_4dc328;
        case 0x4dc32cu: goto label_4dc32c;
        case 0x4dc330u: goto label_4dc330;
        case 0x4dc334u: goto label_4dc334;
        case 0x4dc338u: goto label_4dc338;
        case 0x4dc33cu: goto label_4dc33c;
        case 0x4dc340u: goto label_4dc340;
        case 0x4dc344u: goto label_4dc344;
        case 0x4dc348u: goto label_4dc348;
        case 0x4dc34cu: goto label_4dc34c;
        case 0x4dc350u: goto label_4dc350;
        case 0x4dc354u: goto label_4dc354;
        case 0x4dc358u: goto label_4dc358;
        case 0x4dc35cu: goto label_4dc35c;
        case 0x4dc360u: goto label_4dc360;
        case 0x4dc364u: goto label_4dc364;
        case 0x4dc368u: goto label_4dc368;
        case 0x4dc36cu: goto label_4dc36c;
        case 0x4dc370u: goto label_4dc370;
        case 0x4dc374u: goto label_4dc374;
        case 0x4dc378u: goto label_4dc378;
        case 0x4dc37cu: goto label_4dc37c;
        case 0x4dc380u: goto label_4dc380;
        case 0x4dc384u: goto label_4dc384;
        case 0x4dc388u: goto label_4dc388;
        case 0x4dc38cu: goto label_4dc38c;
        case 0x4dc390u: goto label_4dc390;
        case 0x4dc394u: goto label_4dc394;
        case 0x4dc398u: goto label_4dc398;
        case 0x4dc39cu: goto label_4dc39c;
        case 0x4dc3a0u: goto label_4dc3a0;
        case 0x4dc3a4u: goto label_4dc3a4;
        case 0x4dc3a8u: goto label_4dc3a8;
        case 0x4dc3acu: goto label_4dc3ac;
        case 0x4dc3b0u: goto label_4dc3b0;
        case 0x4dc3b4u: goto label_4dc3b4;
        case 0x4dc3b8u: goto label_4dc3b8;
        case 0x4dc3bcu: goto label_4dc3bc;
        case 0x4dc3c0u: goto label_4dc3c0;
        case 0x4dc3c4u: goto label_4dc3c4;
        case 0x4dc3c8u: goto label_4dc3c8;
        case 0x4dc3ccu: goto label_4dc3cc;
        case 0x4dc3d0u: goto label_4dc3d0;
        case 0x4dc3d4u: goto label_4dc3d4;
        case 0x4dc3d8u: goto label_4dc3d8;
        case 0x4dc3dcu: goto label_4dc3dc;
        case 0x4dc3e0u: goto label_4dc3e0;
        case 0x4dc3e4u: goto label_4dc3e4;
        case 0x4dc3e8u: goto label_4dc3e8;
        case 0x4dc3ecu: goto label_4dc3ec;
        case 0x4dc3f0u: goto label_4dc3f0;
        case 0x4dc3f4u: goto label_4dc3f4;
        case 0x4dc3f8u: goto label_4dc3f8;
        case 0x4dc3fcu: goto label_4dc3fc;
        case 0x4dc400u: goto label_4dc400;
        case 0x4dc404u: goto label_4dc404;
        case 0x4dc408u: goto label_4dc408;
        case 0x4dc40cu: goto label_4dc40c;
        case 0x4dc410u: goto label_4dc410;
        case 0x4dc414u: goto label_4dc414;
        case 0x4dc418u: goto label_4dc418;
        case 0x4dc41cu: goto label_4dc41c;
        case 0x4dc420u: goto label_4dc420;
        case 0x4dc424u: goto label_4dc424;
        case 0x4dc428u: goto label_4dc428;
        case 0x4dc42cu: goto label_4dc42c;
        case 0x4dc430u: goto label_4dc430;
        case 0x4dc434u: goto label_4dc434;
        case 0x4dc438u: goto label_4dc438;
        case 0x4dc43cu: goto label_4dc43c;
        case 0x4dc440u: goto label_4dc440;
        case 0x4dc444u: goto label_4dc444;
        case 0x4dc448u: goto label_4dc448;
        case 0x4dc44cu: goto label_4dc44c;
        case 0x4dc450u: goto label_4dc450;
        case 0x4dc454u: goto label_4dc454;
        case 0x4dc458u: goto label_4dc458;
        case 0x4dc45cu: goto label_4dc45c;
        case 0x4dc460u: goto label_4dc460;
        case 0x4dc464u: goto label_4dc464;
        case 0x4dc468u: goto label_4dc468;
        case 0x4dc46cu: goto label_4dc46c;
        case 0x4dc470u: goto label_4dc470;
        case 0x4dc474u: goto label_4dc474;
        case 0x4dc478u: goto label_4dc478;
        case 0x4dc47cu: goto label_4dc47c;
        case 0x4dc480u: goto label_4dc480;
        case 0x4dc484u: goto label_4dc484;
        case 0x4dc488u: goto label_4dc488;
        case 0x4dc48cu: goto label_4dc48c;
        case 0x4dc490u: goto label_4dc490;
        case 0x4dc494u: goto label_4dc494;
        case 0x4dc498u: goto label_4dc498;
        case 0x4dc49cu: goto label_4dc49c;
        case 0x4dc4a0u: goto label_4dc4a0;
        case 0x4dc4a4u: goto label_4dc4a4;
        case 0x4dc4a8u: goto label_4dc4a8;
        case 0x4dc4acu: goto label_4dc4ac;
        case 0x4dc4b0u: goto label_4dc4b0;
        case 0x4dc4b4u: goto label_4dc4b4;
        case 0x4dc4b8u: goto label_4dc4b8;
        case 0x4dc4bcu: goto label_4dc4bc;
        case 0x4dc4c0u: goto label_4dc4c0;
        case 0x4dc4c4u: goto label_4dc4c4;
        case 0x4dc4c8u: goto label_4dc4c8;
        case 0x4dc4ccu: goto label_4dc4cc;
        case 0x4dc4d0u: goto label_4dc4d0;
        case 0x4dc4d4u: goto label_4dc4d4;
        case 0x4dc4d8u: goto label_4dc4d8;
        case 0x4dc4dcu: goto label_4dc4dc;
        case 0x4dc4e0u: goto label_4dc4e0;
        case 0x4dc4e4u: goto label_4dc4e4;
        case 0x4dc4e8u: goto label_4dc4e8;
        case 0x4dc4ecu: goto label_4dc4ec;
        case 0x4dc4f0u: goto label_4dc4f0;
        case 0x4dc4f4u: goto label_4dc4f4;
        case 0x4dc4f8u: goto label_4dc4f8;
        case 0x4dc4fcu: goto label_4dc4fc;
        case 0x4dc500u: goto label_4dc500;
        case 0x4dc504u: goto label_4dc504;
        case 0x4dc508u: goto label_4dc508;
        case 0x4dc50cu: goto label_4dc50c;
        case 0x4dc510u: goto label_4dc510;
        case 0x4dc514u: goto label_4dc514;
        case 0x4dc518u: goto label_4dc518;
        case 0x4dc51cu: goto label_4dc51c;
        case 0x4dc520u: goto label_4dc520;
        case 0x4dc524u: goto label_4dc524;
        case 0x4dc528u: goto label_4dc528;
        case 0x4dc52cu: goto label_4dc52c;
        case 0x4dc530u: goto label_4dc530;
        case 0x4dc534u: goto label_4dc534;
        case 0x4dc538u: goto label_4dc538;
        case 0x4dc53cu: goto label_4dc53c;
        case 0x4dc540u: goto label_4dc540;
        case 0x4dc544u: goto label_4dc544;
        case 0x4dc548u: goto label_4dc548;
        case 0x4dc54cu: goto label_4dc54c;
        case 0x4dc550u: goto label_4dc550;
        case 0x4dc554u: goto label_4dc554;
        case 0x4dc558u: goto label_4dc558;
        case 0x4dc55cu: goto label_4dc55c;
        case 0x4dc560u: goto label_4dc560;
        case 0x4dc564u: goto label_4dc564;
        case 0x4dc568u: goto label_4dc568;
        case 0x4dc56cu: goto label_4dc56c;
        case 0x4dc570u: goto label_4dc570;
        case 0x4dc574u: goto label_4dc574;
        case 0x4dc578u: goto label_4dc578;
        case 0x4dc57cu: goto label_4dc57c;
        default: break;
    }

    ctx->pc = 0x4dc1c0u;

label_4dc1c0:
    // 0x4dc1c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4dc1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_4dc1c4:
    // 0x4dc1c4: 0x7163c  dsll32      $v0, $a3, 24
    ctx->pc = 0x4dc1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 24));
label_4dc1c8:
    // 0x4dc1c8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4dc1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_4dc1cc:
    // 0x4dc1cc: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x4dc1ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_4dc1d0:
    // 0x4dc1d0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4dc1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4dc1d4:
    // 0x4dc1d4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4dc1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4dc1d8:
    // 0x4dc1d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4dc1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4dc1dc:
    // 0x4dc1dc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x4dc1dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4dc1e0:
    // 0x4dc1e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4dc1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4dc1e4:
    // 0x4dc1e4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4dc1e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4dc1e8:
    // 0x4dc1e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4dc1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4dc1ec:
    // 0x4dc1ec: 0x30b300ff  andi        $s3, $a1, 0xFF
    ctx->pc = 0x4dc1ecu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_4dc1f0:
    // 0x4dc1f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4dc1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4dc1f4:
    // 0x4dc1f4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4dc1f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4dc1f8:
    // 0x4dc1f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4dc1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4dc1fc:
    // 0x4dc1fc: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x4dc1fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4dc200:
    // 0x4dc200: 0x8c960070  lw          $s6, 0x70($a0)
    ctx->pc = 0x4dc200u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4dc204:
    // 0x4dc204: 0x15843c  dsll32      $s0, $s5, 16
    ctx->pc = 0x4dc204u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 21) << (32 + 16));
label_4dc208:
    // 0x4dc208: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x4dc208u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
label_4dc20c:
    // 0x4dc20c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4dc20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4dc210:
    // 0x4dc210: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4dc210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4dc214:
    // 0x4dc214: 0x8c4264b0  lw          $v0, 0x64B0($v0)
    ctx->pc = 0x4dc214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25776)));
label_4dc218:
    // 0x4dc218: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4dc218u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4dc21c:
    // 0x4dc21c: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x4dc21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_4dc220:
    // 0x4dc220: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4dc220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4dc224:
    // 0x4dc224: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4dc224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4dc228:
    // 0x4dc228: 0xc1373f0  jal         func_4DCFC0
label_4dc22c:
    if (ctx->pc == 0x4DC22Cu) {
        ctx->pc = 0x4DC22Cu;
            // 0x4dc22c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DC230u;
        goto label_4dc230;
    }
    ctx->pc = 0x4DC228u;
    SET_GPR_U32(ctx, 31, 0x4DC230u);
    ctx->pc = 0x4DC22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC228u;
            // 0x4dc22c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DCFC0u;
    if (runtime->hasFunction(0x4DCFC0u)) {
        auto targetFn = runtime->lookupFunction(0x4DCFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC230u; }
        if (ctx->pc != 0x4DC230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DCFC0_0x4dcfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC230u; }
        if (ctx->pc != 0x4DC230u) { return; }
    }
    ctx->pc = 0x4DC230u;
label_4dc230:
    // 0x4dc230: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x4dc230u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4dc234:
    // 0x4dc234: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x4dc234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_4dc238:
    // 0x4dc238: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_4dc23c:
    if (ctx->pc == 0x4DC23Cu) {
        ctx->pc = 0x4DC240u;
        goto label_4dc240;
    }
    ctx->pc = 0x4DC238u;
    {
        const bool branch_taken_0x4dc238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dc238) {
            ctx->pc = 0x4DC250u;
            goto label_4dc250;
        }
    }
    ctx->pc = 0x4DC240u;
label_4dc240:
    // 0x4dc240: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4dc240u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_4dc244:
    // 0x4dc244: 0x296182b  sltu        $v1, $s4, $s6
    ctx->pc = 0x4dc244u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_4dc248:
    // 0x4dc248: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_4dc24c:
    if (ctx->pc == 0x4DC24Cu) {
        ctx->pc = 0x4DC24Cu;
            // 0x4dc24c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4DC250u;
        goto label_4dc250;
    }
    ctx->pc = 0x4DC248u;
    {
        const bool branch_taken_0x4dc248 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DC24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC248u;
            // 0x4dc24c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dc248) {
            ctx->pc = 0x4DC20Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4dc20c;
        }
    }
    ctx->pc = 0x4DC250u;
label_4dc250:
    // 0x4dc250: 0x158c3c  dsll32      $s1, $s5, 16
    ctx->pc = 0x4dc250u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 21) << (32 + 16));
label_4dc254:
    // 0x4dc254: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x4dc254u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
label_4dc258:
    // 0x4dc258: 0x2a210002  slti        $at, $s1, 0x2
    ctx->pc = 0x4dc258u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_4dc25c:
    // 0x4dc25c: 0x1420001e  bnez        $at, . + 4 + (0x1E << 2)
label_4dc260:
    if (ctx->pc == 0x4DC260u) {
        ctx->pc = 0x4DC264u;
        goto label_4dc264;
    }
    ctx->pc = 0x4DC25Cu;
    {
        const bool branch_taken_0x4dc25c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4dc25c) {
            ctx->pc = 0x4DC2D8u;
            goto label_4dc2d8;
        }
    }
    ctx->pc = 0x4DC264u;
label_4dc264:
    // 0x4dc264: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4dc264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4dc268:
    // 0x4dc268: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4dc268u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4dc26c:
    // 0x4dc26c: 0x8c6364b8  lw          $v1, 0x64B8($v1)
    ctx->pc = 0x4dc26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25784)));
label_4dc270:
    // 0x4dc270: 0x8c700070  lw          $s0, 0x70($v1)
    ctx->pc = 0x4dc270u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_4dc274:
    // 0x4dc274: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_4dc278:
    if (ctx->pc == 0x4DC278u) {
        ctx->pc = 0x4DC278u;
            // 0x4dc278: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DC27Cu;
        goto label_4dc27c;
    }
    ctx->pc = 0x4DC274u;
    {
        const bool branch_taken_0x4dc274 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DC278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC274u;
            // 0x4dc278: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dc274) {
            ctx->pc = 0x4DC2C8u;
            goto label_4dc2c8;
        }
    }
    ctx->pc = 0x4DC27Cu;
label_4dc27c:
    // 0x4dc27c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4dc27cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4dc280:
    // 0x4dc280: 0x2636ffff  addiu       $s6, $s1, -0x1
    ctx->pc = 0x4dc280u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_4dc284:
    // 0x4dc284: 0x0  nop
    ctx->pc = 0x4dc284u;
    // NOP
label_4dc288:
    // 0x4dc288: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4dc288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4dc28c:
    // 0x4dc28c: 0x8c4264b8  lw          $v0, 0x64B8($v0)
    ctx->pc = 0x4dc28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25784)));
label_4dc290:
    // 0x4dc290: 0x26a70002  addiu       $a3, $s5, 0x2
    ctx->pc = 0x4dc290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
label_4dc294:
    // 0x4dc294: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4dc294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4dc298:
    // 0x4dc298: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x4dc298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_4dc29c:
    // 0x4dc29c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x4dc29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_4dc2a0:
    // 0x4dc2a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4dc2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4dc2a4:
    // 0x4dc2a4: 0xc136d60  jal         func_4DB580
label_4dc2a8:
    if (ctx->pc == 0x4DC2A8u) {
        ctx->pc = 0x4DC2A8u;
            // 0x4dc2a8: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DC2ACu;
        goto label_4dc2ac;
    }
    ctx->pc = 0x4DC2A4u;
    SET_GPR_U32(ctx, 31, 0x4DC2ACu);
    ctx->pc = 0x4DC2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC2A4u;
            // 0x4dc2a8: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DB580u;
    if (runtime->hasFunction(0x4DB580u)) {
        auto targetFn = runtime->lookupFunction(0x4DB580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC2ACu; }
        if (ctx->pc != 0x4DC2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DB580_0x4db580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC2ACu; }
        if (ctx->pc != 0x4DC2ACu) { return; }
    }
    ctx->pc = 0x4DC2ACu;
label_4dc2ac:
    // 0x4dc2ac: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_4dc2b0:
    if (ctx->pc == 0x4DC2B0u) {
        ctx->pc = 0x4DC2B4u;
        goto label_4dc2b4;
    }
    ctx->pc = 0x4DC2ACu;
    {
        const bool branch_taken_0x4dc2ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4dc2ac) {
            ctx->pc = 0x4DC2C8u;
            goto label_4dc2c8;
        }
    }
    ctx->pc = 0x4DC2B4u;
label_4dc2b4:
    // 0x4dc2b4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4dc2b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4dc2b8:
    // 0x4dc2b8: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x4dc2b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4dc2bc:
    // 0x4dc2bc: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_4dc2c0:
    if (ctx->pc == 0x4DC2C0u) {
        ctx->pc = 0x4DC2C0u;
            // 0x4dc2c0: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x4DC2C4u;
        goto label_4dc2c4;
    }
    ctx->pc = 0x4DC2BCu;
    {
        const bool branch_taken_0x4dc2bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DC2C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC2BCu;
            // 0x4dc2c0: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dc2bc) {
            ctx->pc = 0x4DC288u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4dc288;
        }
    }
    ctx->pc = 0x4DC2C4u;
label_4dc2c4:
    // 0x4dc2c4: 0x0  nop
    ctx->pc = 0x4dc2c4u;
    // NOP
label_4dc2c8:
    // 0x4dc2c8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x4dc2c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_4dc2cc:
    // 0x4dc2cc: 0x2ea30005  sltiu       $v1, $s5, 0x5
    ctx->pc = 0x4dc2ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_4dc2d0:
    // 0x4dc2d0: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
label_4dc2d4:
    if (ctx->pc == 0x4DC2D4u) {
        ctx->pc = 0x4DC2D8u;
        goto label_4dc2d8;
    }
    ctx->pc = 0x4DC2D0u;
    {
        const bool branch_taken_0x4dc2d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4dc2d0) {
            ctx->pc = 0x4DC274u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4dc274;
        }
    }
    ctx->pc = 0x4DC2D8u;
label_4dc2d8:
    // 0x4dc2d8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4dc2d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_4dc2dc:
    // 0x4dc2dc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4dc2dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4dc2e0:
    // 0x4dc2e0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4dc2e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4dc2e4:
    // 0x4dc2e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4dc2e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4dc2e8:
    // 0x4dc2e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4dc2e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4dc2ec:
    // 0x4dc2ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4dc2ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4dc2f0:
    // 0x4dc2f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4dc2f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dc2f4:
    // 0x4dc2f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4dc2f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4dc2f8:
    // 0x4dc2f8: 0x3e00008  jr          $ra
label_4dc2fc:
    if (ctx->pc == 0x4DC2FCu) {
        ctx->pc = 0x4DC2FCu;
            // 0x4dc2fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4DC300u;
        goto label_4dc300;
    }
    ctx->pc = 0x4DC2F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DC2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC2F8u;
            // 0x4dc2fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DC300u;
label_4dc300:
    // 0x4dc300: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x4dc300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_4dc304:
    // 0x4dc304: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4dc304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4dc308:
    // 0x4dc308: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4dc308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_4dc30c:
    // 0x4dc30c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x4dc30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_4dc310:
    // 0x4dc310: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4dc310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4dc314:
    // 0x4dc314: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4dc314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4dc318:
    // 0x4dc318: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4dc318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4dc31c:
    // 0x4dc31c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4dc31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4dc320:
    // 0x4dc320: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4dc320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4dc324:
    // 0x4dc324: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4dc324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4dc328:
    // 0x4dc328: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4dc328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4dc32c:
    // 0x4dc32c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4dc32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4dc330:
    // 0x4dc330: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4dc330u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4dc334:
    // 0x4dc334: 0x10a30018  beq         $a1, $v1, . + 4 + (0x18 << 2)
label_4dc338:
    if (ctx->pc == 0x4DC338u) {
        ctx->pc = 0x4DC338u;
            // 0x4dc338: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DC33Cu;
        goto label_4dc33c;
    }
    ctx->pc = 0x4DC334u;
    {
        const bool branch_taken_0x4dc334 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4DC338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC334u;
            // 0x4dc338: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dc334) {
            ctx->pc = 0x4DC398u;
            goto label_4dc398;
        }
    }
    ctx->pc = 0x4DC33Cu;
label_4dc33c:
    // 0x4dc33c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4dc33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4dc340:
    // 0x4dc340: 0x50a30010  beql        $a1, $v1, . + 4 + (0x10 << 2)
label_4dc344:
    if (ctx->pc == 0x4DC344u) {
        ctx->pc = 0x4DC344u;
            // 0x4dc344: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4DC348u;
        goto label_4dc348;
    }
    ctx->pc = 0x4DC340u;
    {
        const bool branch_taken_0x4dc340 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4dc340) {
            ctx->pc = 0x4DC344u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC340u;
            // 0x4dc344: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DC384u;
            goto label_4dc384;
        }
    }
    ctx->pc = 0x4DC348u;
label_4dc348:
    // 0x4dc348: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4dc348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4dc34c:
    // 0x4dc34c: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4dc350:
    if (ctx->pc == 0x4DC350u) {
        ctx->pc = 0x4DC354u;
        goto label_4dc354;
    }
    ctx->pc = 0x4DC34Cu;
    {
        const bool branch_taken_0x4dc34c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4dc34c) {
            ctx->pc = 0x4DC35Cu;
            goto label_4dc35c;
        }
    }
    ctx->pc = 0x4DC354u;
label_4dc354:
    // 0x4dc354: 0x1000007c  b           . + 4 + (0x7C << 2)
label_4dc358:
    if (ctx->pc == 0x4DC358u) {
        ctx->pc = 0x4DC358u;
            // 0x4dc358: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x4DC35Cu;
        goto label_4dc35c;
    }
    ctx->pc = 0x4DC354u;
    {
        const bool branch_taken_0x4dc354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DC358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC354u;
            // 0x4dc358: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dc354) {
            ctx->pc = 0x4DC548u;
            goto label_4dc548;
        }
    }
    ctx->pc = 0x4DC35Cu;
label_4dc35c:
    // 0x4dc35c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4dc35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4dc360:
    // 0x4dc360: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4dc360u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4dc364:
    // 0x4dc364: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4dc364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4dc368:
    // 0x4dc368: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4dc368u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4dc36c:
    // 0x4dc36c: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x4dc36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_4dc370:
    // 0x4dc370: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4dc370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4dc374:
    // 0x4dc374: 0x320f809  jalr        $t9
label_4dc378:
    if (ctx->pc == 0x4DC378u) {
        ctx->pc = 0x4DC378u;
            // 0x4dc378: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4DC37Cu;
        goto label_4dc37c;
    }
    ctx->pc = 0x4DC374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DC37Cu);
        ctx->pc = 0x4DC378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC374u;
            // 0x4dc378: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DC37Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DC37Cu; }
            if (ctx->pc != 0x4DC37Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4DC37Cu;
label_4dc37c:
    // 0x4dc37c: 0x10000071  b           . + 4 + (0x71 << 2)
label_4dc380:
    if (ctx->pc == 0x4DC380u) {
        ctx->pc = 0x4DC384u;
        goto label_4dc384;
    }
    ctx->pc = 0x4DC37Cu;
    {
        const bool branch_taken_0x4dc37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dc37c) {
            ctx->pc = 0x4DC544u;
            goto label_4dc544;
        }
    }
    ctx->pc = 0x4DC384u;
label_4dc384:
    // 0x4dc384: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4dc384u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4dc388:
    // 0x4dc388: 0x320f809  jalr        $t9
label_4dc38c:
    if (ctx->pc == 0x4DC38Cu) {
        ctx->pc = 0x4DC390u;
        goto label_4dc390;
    }
    ctx->pc = 0x4DC388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DC390u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DC390u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DC390u; }
            if (ctx->pc != 0x4DC390u) { return; }
        }
        }
    }
    ctx->pc = 0x4DC390u;
label_4dc390:
    // 0x4dc390: 0x1000006c  b           . + 4 + (0x6C << 2)
label_4dc394:
    if (ctx->pc == 0x4DC394u) {
        ctx->pc = 0x4DC398u;
        goto label_4dc398;
    }
    ctx->pc = 0x4DC390u;
    {
        const bool branch_taken_0x4dc390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dc390) {
            ctx->pc = 0x4DC544u;
            goto label_4dc544;
        }
    }
    ctx->pc = 0x4DC398u;
label_4dc398:
    // 0x4dc398: 0x8ed70070  lw          $s7, 0x70($s6)
    ctx->pc = 0x4dc398u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
label_4dc39c:
    // 0x4dc39c: 0x12e00069  beqz        $s7, . + 4 + (0x69 << 2)
label_4dc3a0:
    if (ctx->pc == 0x4DC3A0u) {
        ctx->pc = 0x4DC3A4u;
        goto label_4dc3a4;
    }
    ctx->pc = 0x4DC39Cu;
    {
        const bool branch_taken_0x4dc39c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dc39c) {
            ctx->pc = 0x4DC544u;
            goto label_4dc544;
        }
    }
    ctx->pc = 0x4DC3A4u;
label_4dc3a4:
    // 0x4dc3a4: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4dc3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4dc3a8:
    // 0x4dc3a8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4dc3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4dc3ac:
    // 0x4dc3ac: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x4dc3acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_4dc3b0:
    // 0x4dc3b0: 0x8c44d120  lw          $a0, -0x2EE0($v0)
    ctx->pc = 0x4dc3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_4dc3b4:
    // 0x4dc3b4: 0x8ca50130  lw          $a1, 0x130($a1)
    ctx->pc = 0x4dc3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_4dc3b8:
    // 0x4dc3b8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4dc3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4dc3bc:
    // 0x4dc3bc: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x4dc3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_4dc3c0:
    // 0x4dc3c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4dc3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4dc3c4:
    // 0x4dc3c4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4dc3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4dc3c8:
    // 0x4dc3c8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4dc3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4dc3cc:
    // 0x4dc3cc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4dc3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4dc3d0:
    // 0x4dc3d0: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x4dc3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_4dc3d4:
    // 0x4dc3d4: 0x249e0010  addiu       $fp, $a0, 0x10
    ctx->pc = 0x4dc3d4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_4dc3d8:
    // 0x4dc3d8: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x4dc3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_4dc3dc:
    // 0x4dc3dc: 0x8ec40088  lw          $a0, 0x88($s6)
    ctx->pc = 0x4dc3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 136)));
label_4dc3e0:
    // 0x4dc3e0: 0xc04e738  jal         func_139CE0
label_4dc3e4:
    if (ctx->pc == 0x4DC3E4u) {
        ctx->pc = 0x4DC3E4u;
            // 0x4dc3e4: 0x26d50084  addiu       $s5, $s6, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 132));
        ctx->pc = 0x4DC3E8u;
        goto label_4dc3e8;
    }
    ctx->pc = 0x4DC3E0u;
    SET_GPR_U32(ctx, 31, 0x4DC3E8u);
    ctx->pc = 0x4DC3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC3E0u;
            // 0x4dc3e4: 0x26d50084  addiu       $s5, $s6, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC3E8u; }
        if (ctx->pc != 0x4DC3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC3E8u; }
        if (ctx->pc != 0x4DC3E8u) { return; }
    }
    ctx->pc = 0x4DC3E8u;
label_4dc3e8:
    // 0x4dc3e8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4dc3e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4dc3ec:
    // 0x4dc3ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4dc3ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4dc3f0:
    // 0x4dc3f0: 0x27a3017c  addiu       $v1, $sp, 0x17C
    ctx->pc = 0x4dc3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
label_4dc3f4:
    // 0x4dc3f4: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x4dc3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_4dc3f8:
    // 0x4dc3f8: 0xafa30178  sw          $v1, 0x178($sp)
    ctx->pc = 0x4dc3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 3));
label_4dc3fc:
    // 0x4dc3fc: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x4dc3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_4dc400:
    // 0x4dc400: 0x8ec20074  lw          $v0, 0x74($s6)
    ctx->pc = 0x4dc400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
label_4dc404:
    // 0x4dc404: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4dc404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4dc408:
    // 0x4dc408: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x4dc408u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4dc40c:
    // 0x4dc40c: 0xc0d639c  jal         func_358E70
label_4dc410:
    if (ctx->pc == 0x4DC410u) {
        ctx->pc = 0x4DC410u;
            // 0x4dc410: 0x2664006c  addiu       $a0, $s3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
        ctx->pc = 0x4DC414u;
        goto label_4dc414;
    }
    ctx->pc = 0x4DC40Cu;
    SET_GPR_U32(ctx, 31, 0x4DC414u);
    ctx->pc = 0x4DC410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC40Cu;
            // 0x4dc410: 0x2664006c  addiu       $a0, $s3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC414u; }
        if (ctx->pc != 0x4DC414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC414u; }
        if (ctx->pc != 0x4DC414u) { return; }
    }
    ctx->pc = 0x4DC414u;
label_4dc414:
    // 0x4dc414: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_4dc418:
    if (ctx->pc == 0x4DC418u) {
        ctx->pc = 0x4DC41Cu;
        goto label_4dc41c;
    }
    ctx->pc = 0x4DC414u;
    {
        const bool branch_taken_0x4dc414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dc414) {
            ctx->pc = 0x4DC508u;
            goto label_4dc508;
        }
    }
    ctx->pc = 0x4DC41Cu;
label_4dc41c:
    // 0x4dc41c: 0xc0d1c14  jal         func_347050
label_4dc420:
    if (ctx->pc == 0x4DC420u) {
        ctx->pc = 0x4DC420u;
            // 0x4dc420: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DC424u;
        goto label_4dc424;
    }
    ctx->pc = 0x4DC41Cu;
    SET_GPR_U32(ctx, 31, 0x4DC424u);
    ctx->pc = 0x4DC420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC41Cu;
            // 0x4dc420: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC424u; }
        if (ctx->pc != 0x4DC424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC424u; }
        if (ctx->pc != 0x4DC424u) { return; }
    }
    ctx->pc = 0x4DC424u;
label_4dc424:
    // 0x4dc424: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4dc424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4dc428:
    // 0x4dc428: 0xc04f278  jal         func_13C9E0
label_4dc42c:
    if (ctx->pc == 0x4DC42Cu) {
        ctx->pc = 0x4DC42Cu;
            // 0x4dc42c: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x4DC430u;
        goto label_4dc430;
    }
    ctx->pc = 0x4DC428u;
    SET_GPR_U32(ctx, 31, 0x4DC430u);
    ctx->pc = 0x4DC42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC428u;
            // 0x4dc42c: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC430u; }
        if (ctx->pc != 0x4DC430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC430u; }
        if (ctx->pc != 0x4DC430u) { return; }
    }
    ctx->pc = 0x4DC430u;
label_4dc430:
    // 0x4dc430: 0xc0d1c10  jal         func_347040
label_4dc434:
    if (ctx->pc == 0x4DC434u) {
        ctx->pc = 0x4DC434u;
            // 0x4dc434: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DC438u;
        goto label_4dc438;
    }
    ctx->pc = 0x4DC430u;
    SET_GPR_U32(ctx, 31, 0x4DC438u);
    ctx->pc = 0x4DC434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC430u;
            // 0x4dc434: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC438u; }
        if (ctx->pc != 0x4DC438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC438u; }
        if (ctx->pc != 0x4DC438u) { return; }
    }
    ctx->pc = 0x4DC438u;
label_4dc438:
    // 0x4dc438: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4dc438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4dc43c:
    // 0x4dc43c: 0xc04ce80  jal         func_133A00
label_4dc440:
    if (ctx->pc == 0x4DC440u) {
        ctx->pc = 0x4DC440u;
            // 0x4dc440: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x4DC444u;
        goto label_4dc444;
    }
    ctx->pc = 0x4DC43Cu;
    SET_GPR_U32(ctx, 31, 0x4DC444u);
    ctx->pc = 0x4DC440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC43Cu;
            // 0x4dc440: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC444u; }
        if (ctx->pc != 0x4DC444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC444u; }
        if (ctx->pc != 0x4DC444u) { return; }
    }
    ctx->pc = 0x4DC444u;
label_4dc444:
    // 0x4dc444: 0xc0d4108  jal         func_350420
label_4dc448:
    if (ctx->pc == 0x4DC448u) {
        ctx->pc = 0x4DC44Cu;
        goto label_4dc44c;
    }
    ctx->pc = 0x4DC444u;
    SET_GPR_U32(ctx, 31, 0x4DC44Cu);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC44Cu; }
        if (ctx->pc != 0x4DC44Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC44Cu; }
        if (ctx->pc != 0x4DC44Cu) { return; }
    }
    ctx->pc = 0x4DC44Cu;
label_4dc44c:
    // 0x4dc44c: 0xc0b36b4  jal         func_2CDAD0
label_4dc450:
    if (ctx->pc == 0x4DC450u) {
        ctx->pc = 0x4DC450u;
            // 0x4dc450: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DC454u;
        goto label_4dc454;
    }
    ctx->pc = 0x4DC44Cu;
    SET_GPR_U32(ctx, 31, 0x4DC454u);
    ctx->pc = 0x4DC450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC44Cu;
            // 0x4dc450: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC454u; }
        if (ctx->pc != 0x4DC454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC454u; }
        if (ctx->pc != 0x4DC454u) { return; }
    }
    ctx->pc = 0x4DC454u;
label_4dc454:
    // 0x4dc454: 0xc0b9c64  jal         func_2E7190
label_4dc458:
    if (ctx->pc == 0x4DC458u) {
        ctx->pc = 0x4DC458u;
            // 0x4dc458: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DC45Cu;
        goto label_4dc45c;
    }
    ctx->pc = 0x4DC454u;
    SET_GPR_U32(ctx, 31, 0x4DC45Cu);
    ctx->pc = 0x4DC458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC454u;
            // 0x4dc458: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC45Cu; }
        if (ctx->pc != 0x4DC45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC45Cu; }
        if (ctx->pc != 0x4DC45Cu) { return; }
    }
    ctx->pc = 0x4DC45Cu;
label_4dc45c:
    // 0x4dc45c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4dc45cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4dc460:
    // 0x4dc460: 0xc0d4104  jal         func_350410
label_4dc464:
    if (ctx->pc == 0x4DC464u) {
        ctx->pc = 0x4DC464u;
            // 0x4dc464: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DC468u;
        goto label_4dc468;
    }
    ctx->pc = 0x4DC460u;
    SET_GPR_U32(ctx, 31, 0x4DC468u);
    ctx->pc = 0x4DC464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC460u;
            // 0x4dc464: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC468u; }
        if (ctx->pc != 0x4DC468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC468u; }
        if (ctx->pc != 0x4DC468u) { return; }
    }
    ctx->pc = 0x4DC468u;
label_4dc468:
    // 0x4dc468: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4dc468u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4dc46c:
    // 0x4dc46c: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x4dc46cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4dc470:
    // 0x4dc470: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4dc470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4dc474:
    // 0x4dc474: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4dc474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4dc478:
    // 0x4dc478: 0xc44caa68  lwc1        $f12, -0x5598($v0)
    ctx->pc = 0x4dc478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294945384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4dc47c:
    // 0x4dc47c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4dc47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4dc480:
    // 0x4dc480: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x4dc480u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_4dc484:
    // 0x4dc484: 0xc0d40ac  jal         func_3502B0
label_4dc488:
    if (ctx->pc == 0x4DC488u) {
        ctx->pc = 0x4DC488u;
            // 0x4dc488: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DC48Cu;
        goto label_4dc48c;
    }
    ctx->pc = 0x4DC484u;
    SET_GPR_U32(ctx, 31, 0x4DC48Cu);
    ctx->pc = 0x4DC488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC484u;
            // 0x4dc488: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC48Cu; }
        if (ctx->pc != 0x4DC48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC48Cu; }
        if (ctx->pc != 0x4DC48Cu) { return; }
    }
    ctx->pc = 0x4DC48Cu;
label_4dc48c:
    // 0x4dc48c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x4dc48cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_4dc490:
    // 0x4dc490: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
label_4dc494:
    if (ctx->pc == 0x4DC494u) {
        ctx->pc = 0x4DC494u;
            // 0x4dc494: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x4DC498u;
        goto label_4dc498;
    }
    ctx->pc = 0x4DC490u;
    {
        const bool branch_taken_0x4dc490 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DC494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC490u;
            // 0x4dc494: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dc490) {
            ctx->pc = 0x4DC508u;
            goto label_4dc508;
        }
    }
    ctx->pc = 0x4DC498u;
label_4dc498:
    // 0x4dc498: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x4dc498u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4dc49c:
    // 0x4dc49c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x4dc49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_4dc4a0:
    // 0x4dc4a0: 0x27a60178  addiu       $a2, $sp, 0x178
    ctx->pc = 0x4dc4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_4dc4a4:
    // 0x4dc4a4: 0xc137160  jal         func_4DC580
label_4dc4a8:
    if (ctx->pc == 0x4DC4A8u) {
        ctx->pc = 0x4DC4A8u;
            // 0x4dc4a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DC4ACu;
        goto label_4dc4ac;
    }
    ctx->pc = 0x4DC4A4u;
    SET_GPR_U32(ctx, 31, 0x4DC4ACu);
    ctx->pc = 0x4DC4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC4A4u;
            // 0x4dc4a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DC580u;
    if (runtime->hasFunction(0x4DC580u)) {
        auto targetFn = runtime->lookupFunction(0x4DC580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC4ACu; }
        if (ctx->pc != 0x4DC4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DC580_0x4dc580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC4ACu; }
        if (ctx->pc != 0x4DC4ACu) { return; }
    }
    ctx->pc = 0x4DC4ACu;
label_4dc4ac:
    // 0x4dc4ac: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x4dc4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4dc4b0:
    // 0x4dc4b0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x4dc4b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4dc4b4:
    // 0x4dc4b4: 0xc04cd60  jal         func_133580
label_4dc4b8:
    if (ctx->pc == 0x4DC4B8u) {
        ctx->pc = 0x4DC4B8u;
            // 0x4dc4b8: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x4DC4BCu;
        goto label_4dc4bc;
    }
    ctx->pc = 0x4DC4B4u;
    SET_GPR_U32(ctx, 31, 0x4DC4BCu);
    ctx->pc = 0x4DC4B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC4B4u;
            // 0x4dc4b8: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC4BCu; }
        if (ctx->pc != 0x4DC4BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC4BCu; }
        if (ctx->pc != 0x4DC4BCu) { return; }
    }
    ctx->pc = 0x4DC4BCu;
label_4dc4bc:
    // 0x4dc4bc: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4dc4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4dc4c0:
    // 0x4dc4c0: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x4dc4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_4dc4c4:
    // 0x4dc4c4: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x4dc4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4dc4c8:
    // 0x4dc4c8: 0xc04e4a4  jal         func_139290
label_4dc4cc:
    if (ctx->pc == 0x4DC4CCu) {
        ctx->pc = 0x4DC4CCu;
            // 0x4dc4cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DC4D0u;
        goto label_4dc4d0;
    }
    ctx->pc = 0x4DC4C8u;
    SET_GPR_U32(ctx, 31, 0x4DC4D0u);
    ctx->pc = 0x4DC4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC4C8u;
            // 0x4dc4cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC4D0u; }
        if (ctx->pc != 0x4DC4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC4D0u; }
        if (ctx->pc != 0x4DC4D0u) { return; }
    }
    ctx->pc = 0x4DC4D0u;
label_4dc4d0:
    // 0x4dc4d0: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x4dc4d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4dc4d4:
    // 0x4dc4d4: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4dc4d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4dc4d8:
    // 0x4dc4d8: 0x320f809  jalr        $t9
label_4dc4dc:
    if (ctx->pc == 0x4DC4DCu) {
        ctx->pc = 0x4DC4DCu;
            // 0x4dc4dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DC4E0u;
        goto label_4dc4e0;
    }
    ctx->pc = 0x4DC4D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DC4E0u);
        ctx->pc = 0x4DC4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC4D8u;
            // 0x4dc4dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DC4E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DC4E0u; }
            if (ctx->pc != 0x4DC4E0u) { return; }
        }
        }
    }
    ctx->pc = 0x4DC4E0u;
label_4dc4e0:
    // 0x4dc4e0: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x4dc4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_4dc4e4:
    // 0x4dc4e4: 0xc66c00e4  lwc1        $f12, 0xE4($s3)
    ctx->pc = 0x4dc4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4dc4e8:
    // 0x4dc4e8: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4dc4e8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_4dc4ec:
    // 0x4dc4ec: 0x8fa50178  lw          $a1, 0x178($sp)
    ctx->pc = 0x4dc4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_4dc4f0:
    // 0x4dc4f0: 0x8ea70008  lw          $a3, 0x8($s5)
    ctx->pc = 0x4dc4f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_4dc4f4:
    // 0x4dc4f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4dc4f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4dc4f8:
    // 0x4dc4f8: 0x27a800a0  addiu       $t0, $sp, 0xA0
    ctx->pc = 0x4dc4f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4dc4fc:
    // 0x4dc4fc: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x4dc4fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
label_4dc500:
    // 0x4dc500: 0xc04cff4  jal         func_133FD0
label_4dc504:
    if (ctx->pc == 0x4DC504u) {
        ctx->pc = 0x4DC504u;
            // 0x4dc504: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DC508u;
        goto label_4dc508;
    }
    ctx->pc = 0x4DC500u;
    SET_GPR_U32(ctx, 31, 0x4DC508u);
    ctx->pc = 0x4DC504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC500u;
            // 0x4dc504: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC508u; }
        if (ctx->pc != 0x4DC508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC508u; }
        if (ctx->pc != 0x4DC508u) { return; }
    }
    ctx->pc = 0x4DC508u;
label_4dc508:
    // 0x4dc508: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4dc508u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_4dc50c:
    // 0x4dc50c: 0x297182b  sltu        $v1, $s4, $s7
    ctx->pc = 0x4dc50cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_4dc510:
    // 0x4dc510: 0x1460ffb7  bnez        $v1, . + 4 + (-0x49 << 2)
label_4dc514:
    if (ctx->pc == 0x4DC514u) {
        ctx->pc = 0x4DC514u;
            // 0x4dc514: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4DC518u;
        goto label_4dc518;
    }
    ctx->pc = 0x4DC510u;
    {
        const bool branch_taken_0x4dc510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DC514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC510u;
            // 0x4dc514: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dc510) {
            ctx->pc = 0x4DC3F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4dc3f0;
        }
    }
    ctx->pc = 0x4DC518u;
label_4dc518:
    // 0x4dc518: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4dc518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4dc51c:
    // 0x4dc51c: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x4dc51cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4dc520:
    // 0x4dc520: 0x19200008  blez        $t1, . + 4 + (0x8 << 2)
label_4dc524:
    if (ctx->pc == 0x4DC524u) {
        ctx->pc = 0x4DC524u;
            // 0x4dc524: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x4DC528u;
        goto label_4dc528;
    }
    ctx->pc = 0x4DC520u;
    {
        const bool branch_taken_0x4dc520 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x4DC524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC520u;
            // 0x4dc524: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dc520) {
            ctx->pc = 0x4DC544u;
            goto label_4dc544;
        }
    }
    ctx->pc = 0x4DC528u;
label_4dc528:
    // 0x4dc528: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4dc528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4dc52c:
    // 0x4dc52c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4dc52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4dc530:
    // 0x4dc530: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x4dc530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4dc534:
    // 0x4dc534: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4dc534u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4dc538:
    // 0x4dc538: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x4dc538u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_4dc53c:
    // 0x4dc53c: 0xc055990  jal         func_156640
label_4dc540:
    if (ctx->pc == 0x4DC540u) {
        ctx->pc = 0x4DC540u;
            // 0x4dc540: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DC544u;
        goto label_4dc544;
    }
    ctx->pc = 0x4DC53Cu;
    SET_GPR_U32(ctx, 31, 0x4DC544u);
    ctx->pc = 0x4DC540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC53Cu;
            // 0x4dc540: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156640u;
    if (runtime->hasFunction(0x156640u)) {
        auto targetFn = runtime->lookupFunction(0x156640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC544u; }
        if (ctx->pc != 0x4DC544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156640_0x156640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC544u; }
        if (ctx->pc != 0x4DC544u) { return; }
    }
    ctx->pc = 0x4DC544u;
label_4dc544:
    // 0x4dc544: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4dc544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4dc548:
    // 0x4dc548: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x4dc548u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4dc54c:
    // 0x4dc54c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4dc54cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4dc550:
    // 0x4dc550: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4dc550u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4dc554:
    // 0x4dc554: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4dc554u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4dc558:
    // 0x4dc558: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4dc558u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4dc55c:
    // 0x4dc55c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4dc55cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4dc560:
    // 0x4dc560: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4dc560u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4dc564:
    // 0x4dc564: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4dc564u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dc568:
    // 0x4dc568: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4dc568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4dc56c:
    // 0x4dc56c: 0x3e00008  jr          $ra
label_4dc570:
    if (ctx->pc == 0x4DC570u) {
        ctx->pc = 0x4DC570u;
            // 0x4dc570: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x4DC574u;
        goto label_4dc574;
    }
    ctx->pc = 0x4DC56Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DC570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC56Cu;
            // 0x4dc570: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DC574u;
label_4dc574:
    // 0x4dc574: 0x0  nop
    ctx->pc = 0x4dc574u;
    // NOP
label_4dc578:
    // 0x4dc578: 0x0  nop
    ctx->pc = 0x4dc578u;
    // NOP
label_4dc57c:
    // 0x4dc57c: 0x0  nop
    ctx->pc = 0x4dc57cu;
    // NOP
}
