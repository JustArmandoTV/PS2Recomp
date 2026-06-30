#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F62D0
// Address: 0x1f62d0 - 0x1f65c0
void sub_001F62D0_0x1f62d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F62D0_0x1f62d0");
#endif

    switch (ctx->pc) {
        case 0x1f62d0u: goto label_1f62d0;
        case 0x1f62d4u: goto label_1f62d4;
        case 0x1f62d8u: goto label_1f62d8;
        case 0x1f62dcu: goto label_1f62dc;
        case 0x1f62e0u: goto label_1f62e0;
        case 0x1f62e4u: goto label_1f62e4;
        case 0x1f62e8u: goto label_1f62e8;
        case 0x1f62ecu: goto label_1f62ec;
        case 0x1f62f0u: goto label_1f62f0;
        case 0x1f62f4u: goto label_1f62f4;
        case 0x1f62f8u: goto label_1f62f8;
        case 0x1f62fcu: goto label_1f62fc;
        case 0x1f6300u: goto label_1f6300;
        case 0x1f6304u: goto label_1f6304;
        case 0x1f6308u: goto label_1f6308;
        case 0x1f630cu: goto label_1f630c;
        case 0x1f6310u: goto label_1f6310;
        case 0x1f6314u: goto label_1f6314;
        case 0x1f6318u: goto label_1f6318;
        case 0x1f631cu: goto label_1f631c;
        case 0x1f6320u: goto label_1f6320;
        case 0x1f6324u: goto label_1f6324;
        case 0x1f6328u: goto label_1f6328;
        case 0x1f632cu: goto label_1f632c;
        case 0x1f6330u: goto label_1f6330;
        case 0x1f6334u: goto label_1f6334;
        case 0x1f6338u: goto label_1f6338;
        case 0x1f633cu: goto label_1f633c;
        case 0x1f6340u: goto label_1f6340;
        case 0x1f6344u: goto label_1f6344;
        case 0x1f6348u: goto label_1f6348;
        case 0x1f634cu: goto label_1f634c;
        case 0x1f6350u: goto label_1f6350;
        case 0x1f6354u: goto label_1f6354;
        case 0x1f6358u: goto label_1f6358;
        case 0x1f635cu: goto label_1f635c;
        case 0x1f6360u: goto label_1f6360;
        case 0x1f6364u: goto label_1f6364;
        case 0x1f6368u: goto label_1f6368;
        case 0x1f636cu: goto label_1f636c;
        case 0x1f6370u: goto label_1f6370;
        case 0x1f6374u: goto label_1f6374;
        case 0x1f6378u: goto label_1f6378;
        case 0x1f637cu: goto label_1f637c;
        case 0x1f6380u: goto label_1f6380;
        case 0x1f6384u: goto label_1f6384;
        case 0x1f6388u: goto label_1f6388;
        case 0x1f638cu: goto label_1f638c;
        case 0x1f6390u: goto label_1f6390;
        case 0x1f6394u: goto label_1f6394;
        case 0x1f6398u: goto label_1f6398;
        case 0x1f639cu: goto label_1f639c;
        case 0x1f63a0u: goto label_1f63a0;
        case 0x1f63a4u: goto label_1f63a4;
        case 0x1f63a8u: goto label_1f63a8;
        case 0x1f63acu: goto label_1f63ac;
        case 0x1f63b0u: goto label_1f63b0;
        case 0x1f63b4u: goto label_1f63b4;
        case 0x1f63b8u: goto label_1f63b8;
        case 0x1f63bcu: goto label_1f63bc;
        case 0x1f63c0u: goto label_1f63c0;
        case 0x1f63c4u: goto label_1f63c4;
        case 0x1f63c8u: goto label_1f63c8;
        case 0x1f63ccu: goto label_1f63cc;
        case 0x1f63d0u: goto label_1f63d0;
        case 0x1f63d4u: goto label_1f63d4;
        case 0x1f63d8u: goto label_1f63d8;
        case 0x1f63dcu: goto label_1f63dc;
        case 0x1f63e0u: goto label_1f63e0;
        case 0x1f63e4u: goto label_1f63e4;
        case 0x1f63e8u: goto label_1f63e8;
        case 0x1f63ecu: goto label_1f63ec;
        case 0x1f63f0u: goto label_1f63f0;
        case 0x1f63f4u: goto label_1f63f4;
        case 0x1f63f8u: goto label_1f63f8;
        case 0x1f63fcu: goto label_1f63fc;
        case 0x1f6400u: goto label_1f6400;
        case 0x1f6404u: goto label_1f6404;
        case 0x1f6408u: goto label_1f6408;
        case 0x1f640cu: goto label_1f640c;
        case 0x1f6410u: goto label_1f6410;
        case 0x1f6414u: goto label_1f6414;
        case 0x1f6418u: goto label_1f6418;
        case 0x1f641cu: goto label_1f641c;
        case 0x1f6420u: goto label_1f6420;
        case 0x1f6424u: goto label_1f6424;
        case 0x1f6428u: goto label_1f6428;
        case 0x1f642cu: goto label_1f642c;
        case 0x1f6430u: goto label_1f6430;
        case 0x1f6434u: goto label_1f6434;
        case 0x1f6438u: goto label_1f6438;
        case 0x1f643cu: goto label_1f643c;
        case 0x1f6440u: goto label_1f6440;
        case 0x1f6444u: goto label_1f6444;
        case 0x1f6448u: goto label_1f6448;
        case 0x1f644cu: goto label_1f644c;
        case 0x1f6450u: goto label_1f6450;
        case 0x1f6454u: goto label_1f6454;
        case 0x1f6458u: goto label_1f6458;
        case 0x1f645cu: goto label_1f645c;
        case 0x1f6460u: goto label_1f6460;
        case 0x1f6464u: goto label_1f6464;
        case 0x1f6468u: goto label_1f6468;
        case 0x1f646cu: goto label_1f646c;
        case 0x1f6470u: goto label_1f6470;
        case 0x1f6474u: goto label_1f6474;
        case 0x1f6478u: goto label_1f6478;
        case 0x1f647cu: goto label_1f647c;
        case 0x1f6480u: goto label_1f6480;
        case 0x1f6484u: goto label_1f6484;
        case 0x1f6488u: goto label_1f6488;
        case 0x1f648cu: goto label_1f648c;
        case 0x1f6490u: goto label_1f6490;
        case 0x1f6494u: goto label_1f6494;
        case 0x1f6498u: goto label_1f6498;
        case 0x1f649cu: goto label_1f649c;
        case 0x1f64a0u: goto label_1f64a0;
        case 0x1f64a4u: goto label_1f64a4;
        case 0x1f64a8u: goto label_1f64a8;
        case 0x1f64acu: goto label_1f64ac;
        case 0x1f64b0u: goto label_1f64b0;
        case 0x1f64b4u: goto label_1f64b4;
        case 0x1f64b8u: goto label_1f64b8;
        case 0x1f64bcu: goto label_1f64bc;
        case 0x1f64c0u: goto label_1f64c0;
        case 0x1f64c4u: goto label_1f64c4;
        case 0x1f64c8u: goto label_1f64c8;
        case 0x1f64ccu: goto label_1f64cc;
        case 0x1f64d0u: goto label_1f64d0;
        case 0x1f64d4u: goto label_1f64d4;
        case 0x1f64d8u: goto label_1f64d8;
        case 0x1f64dcu: goto label_1f64dc;
        case 0x1f64e0u: goto label_1f64e0;
        case 0x1f64e4u: goto label_1f64e4;
        case 0x1f64e8u: goto label_1f64e8;
        case 0x1f64ecu: goto label_1f64ec;
        case 0x1f64f0u: goto label_1f64f0;
        case 0x1f64f4u: goto label_1f64f4;
        case 0x1f64f8u: goto label_1f64f8;
        case 0x1f64fcu: goto label_1f64fc;
        case 0x1f6500u: goto label_1f6500;
        case 0x1f6504u: goto label_1f6504;
        case 0x1f6508u: goto label_1f6508;
        case 0x1f650cu: goto label_1f650c;
        case 0x1f6510u: goto label_1f6510;
        case 0x1f6514u: goto label_1f6514;
        case 0x1f6518u: goto label_1f6518;
        case 0x1f651cu: goto label_1f651c;
        case 0x1f6520u: goto label_1f6520;
        case 0x1f6524u: goto label_1f6524;
        case 0x1f6528u: goto label_1f6528;
        case 0x1f652cu: goto label_1f652c;
        case 0x1f6530u: goto label_1f6530;
        case 0x1f6534u: goto label_1f6534;
        case 0x1f6538u: goto label_1f6538;
        case 0x1f653cu: goto label_1f653c;
        case 0x1f6540u: goto label_1f6540;
        case 0x1f6544u: goto label_1f6544;
        case 0x1f6548u: goto label_1f6548;
        case 0x1f654cu: goto label_1f654c;
        case 0x1f6550u: goto label_1f6550;
        case 0x1f6554u: goto label_1f6554;
        case 0x1f6558u: goto label_1f6558;
        case 0x1f655cu: goto label_1f655c;
        case 0x1f6560u: goto label_1f6560;
        case 0x1f6564u: goto label_1f6564;
        case 0x1f6568u: goto label_1f6568;
        case 0x1f656cu: goto label_1f656c;
        case 0x1f6570u: goto label_1f6570;
        case 0x1f6574u: goto label_1f6574;
        case 0x1f6578u: goto label_1f6578;
        case 0x1f657cu: goto label_1f657c;
        case 0x1f6580u: goto label_1f6580;
        case 0x1f6584u: goto label_1f6584;
        case 0x1f6588u: goto label_1f6588;
        case 0x1f658cu: goto label_1f658c;
        case 0x1f6590u: goto label_1f6590;
        case 0x1f6594u: goto label_1f6594;
        case 0x1f6598u: goto label_1f6598;
        case 0x1f659cu: goto label_1f659c;
        case 0x1f65a0u: goto label_1f65a0;
        case 0x1f65a4u: goto label_1f65a4;
        case 0x1f65a8u: goto label_1f65a8;
        case 0x1f65acu: goto label_1f65ac;
        case 0x1f65b0u: goto label_1f65b0;
        case 0x1f65b4u: goto label_1f65b4;
        case 0x1f65b8u: goto label_1f65b8;
        case 0x1f65bcu: goto label_1f65bc;
        default: break;
    }

    ctx->pc = 0x1f62d0u;

label_1f62d0:
    // 0x1f62d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f62d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1f62d4:
    // 0x1f62d4: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1f62d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
label_1f62d8:
    // 0x1f62d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f62d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1f62dc:
    // 0x1f62dc: 0x24426390  addiu       $v0, $v0, 0x6390
    ctx->pc = 0x1f62dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25488));
label_1f62e0:
    // 0x1f62e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f62e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f62e4:
    // 0x1f62e4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1f62e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1f62e8:
    // 0x1f62e8: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1f62e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1f62ec:
    // 0x1f62ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f62ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f62f0:
    // 0x1f62f0: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1f62f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
label_1f62f4:
    // 0x1f62f4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1f62f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1f62f8:
    // 0x1f62f8: 0x24427d70  addiu       $v0, $v0, 0x7D70
    ctx->pc = 0x1f62f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32112));
label_1f62fc:
    // 0x1f62fc: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1f62fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f6300:
    // 0x1f6300: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x1f6300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_1f6304:
    // 0x1f6304: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1f6304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
label_1f6308:
    // 0x1f6308: 0xa3a00051  sb          $zero, 0x51($sp)
    ctx->pc = 0x1f6308u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 81), (uint8_t)GPR_U32(ctx, 0));
label_1f630c:
    // 0x1f630c: 0x24427cd0  addiu       $v0, $v0, 0x7CD0
    ctx->pc = 0x1f630cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31952));
label_1f6310:
    // 0x1f6310: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1f6310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_1f6314:
    // 0x1f6314: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1f6314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
label_1f6318:
    // 0x1f6318: 0x24427b90  addiu       $v0, $v0, 0x7B90
    ctx->pc = 0x1f6318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31632));
label_1f631c:
    // 0x1f631c: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1f631cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_1f6320:
    // 0x1f6320: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f6320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f6324:
    // 0x1f6324: 0xc07ff48  jal         func_1FFD20
label_1f6328:
    if (ctx->pc == 0x1F6328u) {
        ctx->pc = 0x1F6328u;
            // 0x1f6328: 0xa3a20050  sb          $v0, 0x50($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1F632Cu;
        goto label_1f632c;
    }
    ctx->pc = 0x1F6324u;
    SET_GPR_U32(ctx, 31, 0x1F632Cu);
    ctx->pc = 0x1F6328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6324u;
            // 0x1f6328: 0xa3a20050  sb          $v0, 0x50($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFD20u;
    if (runtime->hasFunction(0x1FFD20u)) {
        auto targetFn = runtime->lookupFunction(0x1FFD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F632Cu; }
        if (ctx->pc != 0x1F632Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFD20_0x1ffd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F632Cu; }
        if (ctx->pc != 0x1F632Cu) { return; }
    }
    ctx->pc = 0x1F632Cu;
label_1f632c:
    // 0x1f632c: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1f632cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
label_1f6330:
    // 0x1f6330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f6330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f6334:
    // 0x1f6334: 0x244264d0  addiu       $v0, $v0, 0x64D0
    ctx->pc = 0x1f6334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25808));
label_1f6338:
    // 0x1f6338: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1f6338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1f633c:
    // 0x1f633c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1f633cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_1f6340:
    // 0x1f6340: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1f6340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f6344:
    // 0x1f6344: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1f6344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
label_1f6348:
    // 0x1f6348: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x1f6348u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1f634c:
    // 0x1f634c: 0x24427630  addiu       $v0, $v0, 0x7630
    ctx->pc = 0x1f634cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30256));
label_1f6350:
    // 0x1f6350: 0xa3a00030  sb          $zero, 0x30($sp)
    ctx->pc = 0x1f6350u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 0));
label_1f6354:
    // 0x1f6354: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x1f6354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_1f6358:
    // 0x1f6358: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1f6358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
label_1f635c:
    // 0x1f635c: 0xa3a00031  sb          $zero, 0x31($sp)
    ctx->pc = 0x1f635cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 0));
label_1f6360:
    // 0x1f6360: 0x244270e0  addiu       $v0, $v0, 0x70E0
    ctx->pc = 0x1f6360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28896));
label_1f6364:
    // 0x1f6364: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x1f6364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_1f6368:
    // 0x1f6368: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1f6368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
label_1f636c:
    // 0x1f636c: 0x24420d90  addiu       $v0, $v0, 0xD90
    ctx->pc = 0x1f636cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3472));
label_1f6370:
    // 0x1f6370: 0xc07ff48  jal         func_1FFD20
label_1f6374:
    if (ctx->pc == 0x1F6374u) {
        ctx->pc = 0x1F6374u;
            // 0x1f6374: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->pc = 0x1F6378u;
        goto label_1f6378;
    }
    ctx->pc = 0x1F6370u;
    SET_GPR_U32(ctx, 31, 0x1F6378u);
    ctx->pc = 0x1F6374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6370u;
            // 0x1f6374: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFD20u;
    if (runtime->hasFunction(0x1FFD20u)) {
        auto targetFn = runtime->lookupFunction(0x1FFD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6378u; }
        if (ctx->pc != 0x1F6378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFD20_0x1ffd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6378u; }
        if (ctx->pc != 0x1F6378u) { return; }
    }
    ctx->pc = 0x1F6378u;
label_1f6378:
    // 0x1f6378: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f6378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f637c:
    // 0x1f637c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f637cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f6380:
    // 0x1f6380: 0x3e00008  jr          $ra
label_1f6384:
    if (ctx->pc == 0x1F6384u) {
        ctx->pc = 0x1F6384u;
            // 0x1f6384: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1F6388u;
        goto label_1f6388;
    }
    ctx->pc = 0x1F6380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6380u;
            // 0x1f6384: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F6388u;
label_1f6388:
    // 0x1f6388: 0x0  nop
    ctx->pc = 0x1f6388u;
    // NOP
label_1f638c:
    // 0x1f638c: 0x0  nop
    ctx->pc = 0x1f638cu;
    // NOP
label_1f6390:
    // 0x1f6390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f6390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f6394:
    // 0x1f6394: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f6394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f6398:
    // 0x1f6398: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f6398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1f639c:
    // 0x1f639c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1f639cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f63a0:
    // 0x1f63a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f63a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f63a4:
    // 0x1f63a4: 0x2406001d  addiu       $a2, $zero, 0x1D
    ctx->pc = 0x1f63a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_1f63a8:
    // 0x1f63a8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1f63a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1f63ac:
    // 0x1f63ac: 0xc0a7a88  jal         func_29EA20
label_1f63b0:
    if (ctx->pc == 0x1F63B0u) {
        ctx->pc = 0x1F63B0u;
            // 0x1f63b0: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F63B4u;
        goto label_1f63b4;
    }
    ctx->pc = 0x1F63ACu;
    SET_GPR_U32(ctx, 31, 0x1F63B4u);
    ctx->pc = 0x1F63B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F63ACu;
            // 0x1f63b0: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F63B4u; }
        if (ctx->pc != 0x1F63B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F63B4u; }
        if (ctx->pc != 0x1F63B4u) { return; }
    }
    ctx->pc = 0x1F63B4u;
label_1f63b4:
    // 0x1f63b4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1f63b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f63b8:
    // 0x1f63b8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1f63bc:
    if (ctx->pc == 0x1F63BCu) {
        ctx->pc = 0x1F63BCu;
            // 0x1f63bc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1F63C0u;
        goto label_1f63c0;
    }
    ctx->pc = 0x1F63B8u;
    {
        const bool branch_taken_0x1f63b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F63BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F63B8u;
            // 0x1f63bc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f63b8) {
            ctx->pc = 0x1F641Cu;
            goto label_1f641c;
        }
    }
    ctx->pc = 0x1F63C0u;
label_1f63c0:
    // 0x1f63c0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f63c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f63c4:
    // 0x1f63c4: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1f63c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_1f63c8:
    // 0x1f63c8: 0x2463d420  addiu       $v1, $v1, -0x2BE0
    ctx->pc = 0x1f63c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956064));
label_1f63cc:
    // 0x1f63cc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1f63ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1f63d0:
    // 0x1f63d0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1f63d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1f63d4:
    // 0x1f63d4: 0x2484d430  addiu       $a0, $a0, -0x2BD0
    ctx->pc = 0x1f63d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956080));
label_1f63d8:
    // 0x1f63d8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1f63d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1f63dc:
    // 0x1f63dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f63dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f63e0:
    // 0x1f63e0: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1f63e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_1f63e4:
    // 0x1f63e4: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x1f63e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
label_1f63e8:
    // 0x1f63e8: 0x2484d9e0  addiu       $a0, $a0, -0x2620
    ctx->pc = 0x1f63e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957536));
label_1f63ec:
    // 0x1f63ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f63ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f63f0:
    // 0x1f63f0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1f63f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1f63f4:
    // 0x1f63f4: 0x2463da20  addiu       $v1, $v1, -0x25E0
    ctx->pc = 0x1f63f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957600));
label_1f63f8:
    // 0x1f63f8: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x1f63f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
label_1f63fc:
    // 0x1f63fc: 0x24a5dcd0  addiu       $a1, $a1, -0x2330
    ctx->pc = 0x1f63fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958288));
label_1f6400:
    // 0x1f6400: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1f6400u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1f6404:
    // 0x1f6404: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1f6404u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1f6408:
    // 0x1f6408: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f6408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f640c:
    // 0x1f640c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1f640cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_1f6410:
    // 0x1f6410: 0x2463dd10  addiu       $v1, $v1, -0x22F0
    ctx->pc = 0x1f6410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958352));
label_1f6414:
    // 0x1f6414: 0xa444000c  sh          $a0, 0xC($v0)
    ctx->pc = 0x1f6414u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 4));
label_1f6418:
    // 0x1f6418: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1f6418u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1f641c:
    // 0x1f641c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f641cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f6420:
    // 0x1f6420: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f6420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f6424:
    // 0x1f6424: 0x3e00008  jr          $ra
label_1f6428:
    if (ctx->pc == 0x1F6428u) {
        ctx->pc = 0x1F6428u;
            // 0x1f6428: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1F642Cu;
        goto label_1f642c;
    }
    ctx->pc = 0x1F6424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6424u;
            // 0x1f6428: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F642Cu;
label_1f642c:
    // 0x1f642c: 0x0  nop
    ctx->pc = 0x1f642cu;
    // NOP
label_1f6430:
    // 0x1f6430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f6430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f6434:
    // 0x1f6434: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f6434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1f6438:
    // 0x1f6438: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f6438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f643c:
    // 0x1f643c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f643cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f6440:
    // 0x1f6440: 0x5200001f  beql        $s0, $zero, . + 4 + (0x1F << 2)
label_1f6444:
    if (ctx->pc == 0x1F6444u) {
        ctx->pc = 0x1F6444u;
            // 0x1f6444: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F6448u;
        goto label_1f6448;
    }
    ctx->pc = 0x1F6440u;
    {
        const bool branch_taken_0x1f6440 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6440) {
            ctx->pc = 0x1F6444u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6440u;
            // 0x1f6444: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F64C0u;
            goto label_1f64c0;
        }
    }
    ctx->pc = 0x1F6448u;
label_1f6448:
    // 0x1f6448: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f6448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f644c:
    // 0x1f644c: 0x2442dcd0  addiu       $v0, $v0, -0x2330
    ctx->pc = 0x1f644cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958288));
label_1f6450:
    // 0x1f6450: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_1f6454:
    if (ctx->pc == 0x1F6454u) {
        ctx->pc = 0x1F6454u;
            // 0x1f6454: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1F6458u;
        goto label_1f6458;
    }
    ctx->pc = 0x1F6450u;
    {
        const bool branch_taken_0x1f6450 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6450u;
            // 0x1f6454: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6450) {
            ctx->pc = 0x1F6494u;
            goto label_1f6494;
        }
    }
    ctx->pc = 0x1F6458u;
label_1f6458:
    // 0x1f6458: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f6458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f645c:
    // 0x1f645c: 0x2442da20  addiu       $v0, $v0, -0x25E0
    ctx->pc = 0x1f645cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957600));
label_1f6460:
    // 0x1f6460: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_1f6464:
    if (ctx->pc == 0x1F6464u) {
        ctx->pc = 0x1F6464u;
            // 0x1f6464: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1F6468u;
        goto label_1f6468;
    }
    ctx->pc = 0x1F6460u;
    {
        const bool branch_taken_0x1f6460 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6460u;
            // 0x1f6464: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6460) {
            ctx->pc = 0x1F6494u;
            goto label_1f6494;
        }
    }
    ctx->pc = 0x1F6468u;
label_1f6468:
    // 0x1f6468: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f6468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f646c:
    // 0x1f646c: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1f646cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
label_1f6470:
    // 0x1f6470: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1f6474:
    if (ctx->pc == 0x1F6474u) {
        ctx->pc = 0x1F6474u;
            // 0x1f6474: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1F6478u;
        goto label_1f6478;
    }
    ctx->pc = 0x1F6470u;
    {
        const bool branch_taken_0x1f6470 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6470u;
            // 0x1f6474: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6470) {
            ctx->pc = 0x1F6494u;
            goto label_1f6494;
        }
    }
    ctx->pc = 0x1F6478u;
label_1f6478:
    // 0x1f6478: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f6478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f647c:
    // 0x1f647c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1f647cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_1f6480:
    // 0x1f6480: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1f6484:
    if (ctx->pc == 0x1F6484u) {
        ctx->pc = 0x1F6484u;
            // 0x1f6484: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1F6488u;
        goto label_1f6488;
    }
    ctx->pc = 0x1F6480u;
    {
        const bool branch_taken_0x1f6480 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6480u;
            // 0x1f6484: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6480) {
            ctx->pc = 0x1F6494u;
            goto label_1f6494;
        }
    }
    ctx->pc = 0x1F6488u;
label_1f6488:
    // 0x1f6488: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f6488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f648c:
    // 0x1f648c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1f648cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_1f6490:
    // 0x1f6490: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1f6490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1f6494:
    // 0x1f6494: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1f6494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1f6498:
    // 0x1f6498: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f6498u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1f649c:
    // 0x1f649c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_1f64a0:
    if (ctx->pc == 0x1F64A0u) {
        ctx->pc = 0x1F64A4u;
        goto label_1f64a4;
    }
    ctx->pc = 0x1F649Cu;
    {
        const bool branch_taken_0x1f649c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1f649c) {
            ctx->pc = 0x1F64BCu;
            goto label_1f64bc;
        }
    }
    ctx->pc = 0x1F64A4u;
label_1f64a4:
    // 0x1f64a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f64a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f64a8:
    // 0x1f64a8: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x1f64a8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_1f64ac:
    // 0x1f64ac: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1f64acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1f64b0:
    // 0x1f64b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f64b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f64b4:
    // 0x1f64b4: 0xc0a7ab4  jal         func_29EAD0
label_1f64b8:
    if (ctx->pc == 0x1F64B8u) {
        ctx->pc = 0x1F64B8u;
            // 0x1f64b8: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1F64BCu;
        goto label_1f64bc;
    }
    ctx->pc = 0x1F64B4u;
    SET_GPR_U32(ctx, 31, 0x1F64BCu);
    ctx->pc = 0x1F64B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F64B4u;
            // 0x1f64b8: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F64BCu; }
        if (ctx->pc != 0x1F64BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F64BCu; }
        if (ctx->pc != 0x1F64BCu) { return; }
    }
    ctx->pc = 0x1F64BCu;
label_1f64bc:
    // 0x1f64bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f64bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f64c0:
    // 0x1f64c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f64c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f64c4:
    // 0x1f64c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f64c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f64c8:
    // 0x1f64c8: 0x3e00008  jr          $ra
label_1f64cc:
    if (ctx->pc == 0x1F64CCu) {
        ctx->pc = 0x1F64CCu;
            // 0x1f64cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1F64D0u;
        goto label_1f64d0;
    }
    ctx->pc = 0x1F64C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F64CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F64C8u;
            // 0x1f64cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F64D0u;
label_1f64d0:
    // 0x1f64d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f64d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f64d4:
    // 0x1f64d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f64d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f64d8:
    // 0x1f64d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f64d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1f64dc:
    // 0x1f64dc: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1f64dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f64e0:
    // 0x1f64e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f64e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f64e4:
    // 0x1f64e4: 0x2406001d  addiu       $a2, $zero, 0x1D
    ctx->pc = 0x1f64e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_1f64e8:
    // 0x1f64e8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1f64e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1f64ec:
    // 0x1f64ec: 0xc0a7a88  jal         func_29EA20
label_1f64f0:
    if (ctx->pc == 0x1F64F0u) {
        ctx->pc = 0x1F64F0u;
            // 0x1f64f0: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F64F4u;
        goto label_1f64f4;
    }
    ctx->pc = 0x1F64ECu;
    SET_GPR_U32(ctx, 31, 0x1F64F4u);
    ctx->pc = 0x1F64F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F64ECu;
            // 0x1f64f0: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F64F4u; }
        if (ctx->pc != 0x1F64F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F64F4u; }
        if (ctx->pc != 0x1F64F4u) { return; }
    }
    ctx->pc = 0x1F64F4u;
label_1f64f4:
    // 0x1f64f4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1f64f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f64f8:
    // 0x1f64f8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1f64fc:
    if (ctx->pc == 0x1F64FCu) {
        ctx->pc = 0x1F64FCu;
            // 0x1f64fc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1F6500u;
        goto label_1f6500;
    }
    ctx->pc = 0x1F64F8u;
    {
        const bool branch_taken_0x1f64f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F64FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F64F8u;
            // 0x1f64fc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f64f8) {
            ctx->pc = 0x1F6550u;
            goto label_1f6550;
        }
    }
    ctx->pc = 0x1F6500u;
label_1f6500:
    // 0x1f6500: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1f6500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_1f6504:
    // 0x1f6504: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f6504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f6508:
    // 0x1f6508: 0x2484d420  addiu       $a0, $a0, -0x2BE0
    ctx->pc = 0x1f6508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956064));
label_1f650c:
    // 0x1f650c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1f650cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1f6510:
    // 0x1f6510: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1f6510u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1f6514:
    // 0x1f6514: 0x2463d430  addiu       $v1, $v1, -0x2BD0
    ctx->pc = 0x1f6514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956080));
label_1f6518:
    // 0x1f6518: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1f6518u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1f651c:
    // 0x1f651c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f651cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f6520:
    // 0x1f6520: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f6520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f6524:
    // 0x1f6524: 0xa4440006  sh          $a0, 0x6($v0)
    ctx->pc = 0x1f6524u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 4));
label_1f6528:
    // 0x1f6528: 0x2463d9e0  addiu       $v1, $v1, -0x2620
    ctx->pc = 0x1f6528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957536));
label_1f652c:
    // 0x1f652c: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1f652cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_1f6530:
    // 0x1f6530: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1f6530u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1f6534:
    // 0x1f6534: 0x24a5da20  addiu       $a1, $a1, -0x25E0
    ctx->pc = 0x1f6534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957600));
label_1f6538:
    // 0x1f6538: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x1f6538u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
label_1f653c:
    // 0x1f653c: 0x2484dcd0  addiu       $a0, $a0, -0x2330
    ctx->pc = 0x1f653cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958288));
label_1f6540:
    // 0x1f6540: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1f6540u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_1f6544:
    // 0x1f6544: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1f6544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1f6548:
    // 0x1f6548: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1f6548u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1f654c:
    // 0x1f654c: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x1f654cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
label_1f6550:
    // 0x1f6550: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f6550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f6554:
    // 0x1f6554: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f6554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f6558:
    // 0x1f6558: 0x3e00008  jr          $ra
label_1f655c:
    if (ctx->pc == 0x1F655Cu) {
        ctx->pc = 0x1F655Cu;
            // 0x1f655c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1F6560u;
        goto label_1f6560;
    }
    ctx->pc = 0x1F6558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F655Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6558u;
            // 0x1f655c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F6560u;
label_1f6560:
    // 0x1f6560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f6560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f6564:
    // 0x1f6564: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1f6564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f6568:
    // 0x1f6568: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f6568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1f656c:
    // 0x1f656c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1f656cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1f6570:
    // 0x1f6570: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f6570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f6574:
    // 0x1f6574: 0x9485000c  lhu         $a1, 0xC($a0)
    ctx->pc = 0x1f6574u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
label_1f6578:
    // 0x1f6578: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
label_1f657c:
    if (ctx->pc == 0x1F657Cu) {
        ctx->pc = 0x1F657Cu;
            // 0x1f657c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F6580u;
        goto label_1f6580;
    }
    ctx->pc = 0x1F6578u;
    {
        const bool branch_taken_0x1f6578 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F657Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6578u;
            // 0x1f657c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6578) {
            ctx->pc = 0x1F6594u;
            goto label_1f6594;
        }
    }
    ctx->pc = 0x1F6580u;
label_1f6580:
    // 0x1f6580: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1f6580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f6584:
    // 0x1f6584: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f6584u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f6588:
    // 0x1f6588: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1f6588u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1f658c:
    // 0x1f658c: 0x320f809  jalr        $t9
label_1f6590:
    if (ctx->pc == 0x1F6590u) {
        ctx->pc = 0x1F6594u;
        goto label_1f6594;
    }
    ctx->pc = 0x1F658Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F6594u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F6594u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F6594u; }
            if (ctx->pc != 0x1F6594u) { return; }
        }
        }
    }
    ctx->pc = 0x1F6594u;
label_1f6594:
    // 0x1f6594: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
label_1f6598:
    if (ctx->pc == 0x1F6598u) {
        ctx->pc = 0x1F6598u;
            // 0x1f6598: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1F659Cu;
        goto label_1f659c;
    }
    ctx->pc = 0x1F6594u;
    {
        const bool branch_taken_0x1f6594 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6594) {
            ctx->pc = 0x1F6598u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6594u;
            // 0x1f6598: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F65B4u;
            goto label_1f65b4;
        }
    }
    ctx->pc = 0x1F659Cu;
label_1f659c:
    // 0x1f659c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1f659cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f65a0:
    // 0x1f65a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f65a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f65a4:
    // 0x1f65a4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1f65a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1f65a8:
    // 0x1f65a8: 0x320f809  jalr        $t9
label_1f65ac:
    if (ctx->pc == 0x1F65ACu) {
        ctx->pc = 0x1F65ACu;
            // 0x1f65ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F65B0u;
        goto label_1f65b0;
    }
    ctx->pc = 0x1F65A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F65B0u);
        ctx->pc = 0x1F65ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F65A8u;
            // 0x1f65ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F65B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F65B0u; }
            if (ctx->pc != 0x1F65B0u) { return; }
        }
        }
    }
    ctx->pc = 0x1F65B0u;
label_1f65b0:
    // 0x1f65b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f65b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f65b4:
    // 0x1f65b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f65b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f65b8:
    // 0x1f65b8: 0x3e00008  jr          $ra
label_1f65bc:
    if (ctx->pc == 0x1F65BCu) {
        ctx->pc = 0x1F65BCu;
            // 0x1f65bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1F65C0u;
        goto label_fallthrough_0x1f65b8;
    }
    ctx->pc = 0x1F65B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F65BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F65B8u;
            // 0x1f65bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1f65b8:
    ctx->pc = 0x1F65C0u;
}
