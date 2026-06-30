#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00464390
// Address: 0x464390 - 0x4646d0
void sub_00464390_0x464390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00464390_0x464390");
#endif

    switch (ctx->pc) {
        case 0x464390u: goto label_464390;
        case 0x464394u: goto label_464394;
        case 0x464398u: goto label_464398;
        case 0x46439cu: goto label_46439c;
        case 0x4643a0u: goto label_4643a0;
        case 0x4643a4u: goto label_4643a4;
        case 0x4643a8u: goto label_4643a8;
        case 0x4643acu: goto label_4643ac;
        case 0x4643b0u: goto label_4643b0;
        case 0x4643b4u: goto label_4643b4;
        case 0x4643b8u: goto label_4643b8;
        case 0x4643bcu: goto label_4643bc;
        case 0x4643c0u: goto label_4643c0;
        case 0x4643c4u: goto label_4643c4;
        case 0x4643c8u: goto label_4643c8;
        case 0x4643ccu: goto label_4643cc;
        case 0x4643d0u: goto label_4643d0;
        case 0x4643d4u: goto label_4643d4;
        case 0x4643d8u: goto label_4643d8;
        case 0x4643dcu: goto label_4643dc;
        case 0x4643e0u: goto label_4643e0;
        case 0x4643e4u: goto label_4643e4;
        case 0x4643e8u: goto label_4643e8;
        case 0x4643ecu: goto label_4643ec;
        case 0x4643f0u: goto label_4643f0;
        case 0x4643f4u: goto label_4643f4;
        case 0x4643f8u: goto label_4643f8;
        case 0x4643fcu: goto label_4643fc;
        case 0x464400u: goto label_464400;
        case 0x464404u: goto label_464404;
        case 0x464408u: goto label_464408;
        case 0x46440cu: goto label_46440c;
        case 0x464410u: goto label_464410;
        case 0x464414u: goto label_464414;
        case 0x464418u: goto label_464418;
        case 0x46441cu: goto label_46441c;
        case 0x464420u: goto label_464420;
        case 0x464424u: goto label_464424;
        case 0x464428u: goto label_464428;
        case 0x46442cu: goto label_46442c;
        case 0x464430u: goto label_464430;
        case 0x464434u: goto label_464434;
        case 0x464438u: goto label_464438;
        case 0x46443cu: goto label_46443c;
        case 0x464440u: goto label_464440;
        case 0x464444u: goto label_464444;
        case 0x464448u: goto label_464448;
        case 0x46444cu: goto label_46444c;
        case 0x464450u: goto label_464450;
        case 0x464454u: goto label_464454;
        case 0x464458u: goto label_464458;
        case 0x46445cu: goto label_46445c;
        case 0x464460u: goto label_464460;
        case 0x464464u: goto label_464464;
        case 0x464468u: goto label_464468;
        case 0x46446cu: goto label_46446c;
        case 0x464470u: goto label_464470;
        case 0x464474u: goto label_464474;
        case 0x464478u: goto label_464478;
        case 0x46447cu: goto label_46447c;
        case 0x464480u: goto label_464480;
        case 0x464484u: goto label_464484;
        case 0x464488u: goto label_464488;
        case 0x46448cu: goto label_46448c;
        case 0x464490u: goto label_464490;
        case 0x464494u: goto label_464494;
        case 0x464498u: goto label_464498;
        case 0x46449cu: goto label_46449c;
        case 0x4644a0u: goto label_4644a0;
        case 0x4644a4u: goto label_4644a4;
        case 0x4644a8u: goto label_4644a8;
        case 0x4644acu: goto label_4644ac;
        case 0x4644b0u: goto label_4644b0;
        case 0x4644b4u: goto label_4644b4;
        case 0x4644b8u: goto label_4644b8;
        case 0x4644bcu: goto label_4644bc;
        case 0x4644c0u: goto label_4644c0;
        case 0x4644c4u: goto label_4644c4;
        case 0x4644c8u: goto label_4644c8;
        case 0x4644ccu: goto label_4644cc;
        case 0x4644d0u: goto label_4644d0;
        case 0x4644d4u: goto label_4644d4;
        case 0x4644d8u: goto label_4644d8;
        case 0x4644dcu: goto label_4644dc;
        case 0x4644e0u: goto label_4644e0;
        case 0x4644e4u: goto label_4644e4;
        case 0x4644e8u: goto label_4644e8;
        case 0x4644ecu: goto label_4644ec;
        case 0x4644f0u: goto label_4644f0;
        case 0x4644f4u: goto label_4644f4;
        case 0x4644f8u: goto label_4644f8;
        case 0x4644fcu: goto label_4644fc;
        case 0x464500u: goto label_464500;
        case 0x464504u: goto label_464504;
        case 0x464508u: goto label_464508;
        case 0x46450cu: goto label_46450c;
        case 0x464510u: goto label_464510;
        case 0x464514u: goto label_464514;
        case 0x464518u: goto label_464518;
        case 0x46451cu: goto label_46451c;
        case 0x464520u: goto label_464520;
        case 0x464524u: goto label_464524;
        case 0x464528u: goto label_464528;
        case 0x46452cu: goto label_46452c;
        case 0x464530u: goto label_464530;
        case 0x464534u: goto label_464534;
        case 0x464538u: goto label_464538;
        case 0x46453cu: goto label_46453c;
        case 0x464540u: goto label_464540;
        case 0x464544u: goto label_464544;
        case 0x464548u: goto label_464548;
        case 0x46454cu: goto label_46454c;
        case 0x464550u: goto label_464550;
        case 0x464554u: goto label_464554;
        case 0x464558u: goto label_464558;
        case 0x46455cu: goto label_46455c;
        case 0x464560u: goto label_464560;
        case 0x464564u: goto label_464564;
        case 0x464568u: goto label_464568;
        case 0x46456cu: goto label_46456c;
        case 0x464570u: goto label_464570;
        case 0x464574u: goto label_464574;
        case 0x464578u: goto label_464578;
        case 0x46457cu: goto label_46457c;
        case 0x464580u: goto label_464580;
        case 0x464584u: goto label_464584;
        case 0x464588u: goto label_464588;
        case 0x46458cu: goto label_46458c;
        case 0x464590u: goto label_464590;
        case 0x464594u: goto label_464594;
        case 0x464598u: goto label_464598;
        case 0x46459cu: goto label_46459c;
        case 0x4645a0u: goto label_4645a0;
        case 0x4645a4u: goto label_4645a4;
        case 0x4645a8u: goto label_4645a8;
        case 0x4645acu: goto label_4645ac;
        case 0x4645b0u: goto label_4645b0;
        case 0x4645b4u: goto label_4645b4;
        case 0x4645b8u: goto label_4645b8;
        case 0x4645bcu: goto label_4645bc;
        case 0x4645c0u: goto label_4645c0;
        case 0x4645c4u: goto label_4645c4;
        case 0x4645c8u: goto label_4645c8;
        case 0x4645ccu: goto label_4645cc;
        case 0x4645d0u: goto label_4645d0;
        case 0x4645d4u: goto label_4645d4;
        case 0x4645d8u: goto label_4645d8;
        case 0x4645dcu: goto label_4645dc;
        case 0x4645e0u: goto label_4645e0;
        case 0x4645e4u: goto label_4645e4;
        case 0x4645e8u: goto label_4645e8;
        case 0x4645ecu: goto label_4645ec;
        case 0x4645f0u: goto label_4645f0;
        case 0x4645f4u: goto label_4645f4;
        case 0x4645f8u: goto label_4645f8;
        case 0x4645fcu: goto label_4645fc;
        case 0x464600u: goto label_464600;
        case 0x464604u: goto label_464604;
        case 0x464608u: goto label_464608;
        case 0x46460cu: goto label_46460c;
        case 0x464610u: goto label_464610;
        case 0x464614u: goto label_464614;
        case 0x464618u: goto label_464618;
        case 0x46461cu: goto label_46461c;
        case 0x464620u: goto label_464620;
        case 0x464624u: goto label_464624;
        case 0x464628u: goto label_464628;
        case 0x46462cu: goto label_46462c;
        case 0x464630u: goto label_464630;
        case 0x464634u: goto label_464634;
        case 0x464638u: goto label_464638;
        case 0x46463cu: goto label_46463c;
        case 0x464640u: goto label_464640;
        case 0x464644u: goto label_464644;
        case 0x464648u: goto label_464648;
        case 0x46464cu: goto label_46464c;
        case 0x464650u: goto label_464650;
        case 0x464654u: goto label_464654;
        case 0x464658u: goto label_464658;
        case 0x46465cu: goto label_46465c;
        case 0x464660u: goto label_464660;
        case 0x464664u: goto label_464664;
        case 0x464668u: goto label_464668;
        case 0x46466cu: goto label_46466c;
        case 0x464670u: goto label_464670;
        case 0x464674u: goto label_464674;
        case 0x464678u: goto label_464678;
        case 0x46467cu: goto label_46467c;
        case 0x464680u: goto label_464680;
        case 0x464684u: goto label_464684;
        case 0x464688u: goto label_464688;
        case 0x46468cu: goto label_46468c;
        case 0x464690u: goto label_464690;
        case 0x464694u: goto label_464694;
        case 0x464698u: goto label_464698;
        case 0x46469cu: goto label_46469c;
        case 0x4646a0u: goto label_4646a0;
        case 0x4646a4u: goto label_4646a4;
        case 0x4646a8u: goto label_4646a8;
        case 0x4646acu: goto label_4646ac;
        case 0x4646b0u: goto label_4646b0;
        case 0x4646b4u: goto label_4646b4;
        case 0x4646b8u: goto label_4646b8;
        case 0x4646bcu: goto label_4646bc;
        case 0x4646c0u: goto label_4646c0;
        case 0x4646c4u: goto label_4646c4;
        case 0x4646c8u: goto label_4646c8;
        case 0x4646ccu: goto label_4646cc;
        default: break;
    }

    ctx->pc = 0x464390u;

label_464390:
    // 0x464390: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x464390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_464394:
    // 0x464394: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x464394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_464398:
    // 0x464398: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x464398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_46439c:
    // 0x46439c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x46439cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4643a0:
    // 0x4643a0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4643a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4643a4:
    // 0x4643a4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4643a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4643a8:
    // 0x4643a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4643a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4643ac:
    // 0x4643ac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4643acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4643b0:
    // 0x4643b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4643b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4643b4:
    // 0x4643b4: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x4643b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_4643b8:
    // 0x4643b8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4643b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4643bc:
    // 0x4643bc: 0x265001a0  addiu       $s0, $s2, 0x1A0
    ctx->pc = 0x4643bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 416));
label_4643c0:
    // 0x4643c0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4643c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4643c4:
    // 0x4643c4: 0x8c430c78  lw          $v1, 0xC78($v0)
    ctx->pc = 0x4643c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_4643c8:
    // 0x4643c8: 0x849101f4  lh          $s1, 0x1F4($a0)
    ctx->pc = 0x4643c8u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 500)));
label_4643cc:
    // 0x4643cc: 0x264200f0  addiu       $v0, $s2, 0xF0
    ctx->pc = 0x4643ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
label_4643d0:
    // 0x4643d0: 0x8c730008  lw          $s3, 0x8($v1)
    ctx->pc = 0x4643d0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4643d4:
    // 0x4643d4: 0x24470040  addiu       $a3, $v0, 0x40
    ctx->pc = 0x4643d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_4643d8:
    // 0x4643d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4643d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4643dc:
    // 0x4643dc: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x4643dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_4643e0:
    // 0x4643e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4643e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4643e4:
    // 0x4643e4: 0xc0b838c  jal         func_2E0E30
label_4643e8:
    if (ctx->pc == 0x4643E8u) {
        ctx->pc = 0x4643E8u;
            // 0x4643e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4643ECu;
        goto label_4643ec;
    }
    ctx->pc = 0x4643E4u;
    SET_GPR_U32(ctx, 31, 0x4643ECu);
    ctx->pc = 0x4643E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4643E4u;
            // 0x4643e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0E30u;
    if (runtime->hasFunction(0x2E0E30u)) {
        auto targetFn = runtime->lookupFunction(0x2E0E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4643ECu; }
        if (ctx->pc != 0x4643ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0E30_0x2e0e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4643ECu; }
        if (ctx->pc != 0x4643ECu) { return; }
    }
    ctx->pc = 0x4643ECu;
label_4643ec:
    // 0x4643ec: 0x96020050  lhu         $v0, 0x50($s0)
    ctx->pc = 0x4643ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
label_4643f0:
    // 0x4643f0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_4643f4:
    if (ctx->pc == 0x4643F4u) {
        ctx->pc = 0x4643F4u;
            // 0x4643f4: 0x264200f0  addiu       $v0, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->pc = 0x4643F8u;
        goto label_4643f8;
    }
    ctx->pc = 0x4643F0u;
    {
        const bool branch_taken_0x4643f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4643f0) {
            ctx->pc = 0x4643F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4643F0u;
            // 0x4643f4: 0x264200f0  addiu       $v0, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->in_delay_slot = false;
            ctx->pc = 0x464410u;
            goto label_464410;
        }
    }
    ctx->pc = 0x4643F8u;
label_4643f8:
    // 0x4643f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4643f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4643fc:
    // 0x4643fc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4643fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_464400:
    // 0x464400: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x464400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_464404:
    // 0x464404: 0xc0b89e4  jal         func_2E2790
label_464408:
    if (ctx->pc == 0x464408u) {
        ctx->pc = 0x464408u;
            // 0x464408: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x46440Cu;
        goto label_46440c;
    }
    ctx->pc = 0x464404u;
    SET_GPR_U32(ctx, 31, 0x46440Cu);
    ctx->pc = 0x464408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464404u;
            // 0x464408: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2790u;
    if (runtime->hasFunction(0x2E2790u)) {
        auto targetFn = runtime->lookupFunction(0x2E2790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46440Cu; }
        if (ctx->pc != 0x46440Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2790_0x2e2790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46440Cu; }
        if (ctx->pc != 0x46440Cu) { return; }
    }
    ctx->pc = 0x46440Cu;
label_46440c:
    // 0x46440c: 0x264200f0  addiu       $v0, $s2, 0xF0
    ctx->pc = 0x46440cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
label_464410:
    // 0x464410: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x464410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_464414:
    // 0x464414: 0x24460040  addiu       $a2, $v0, 0x40
    ctx->pc = 0x464414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_464418:
    // 0x464418: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x464418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_46441c:
    // 0x46441c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x46441cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_464420:
    // 0x464420: 0xc0b82c4  jal         func_2E0B10
label_464424:
    if (ctx->pc == 0x464424u) {
        ctx->pc = 0x464424u;
            // 0x464424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x464428u;
        goto label_464428;
    }
    ctx->pc = 0x464420u;
    SET_GPR_U32(ctx, 31, 0x464428u);
    ctx->pc = 0x464424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464420u;
            // 0x464424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B10u;
    if (runtime->hasFunction(0x2E0B10u)) {
        auto targetFn = runtime->lookupFunction(0x2E0B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464428u; }
        if (ctx->pc != 0x464428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0B10_0x2e0b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464428u; }
        if (ctx->pc != 0x464428u) { return; }
    }
    ctx->pc = 0x464428u;
label_464428:
    // 0x464428: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x464428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46442c:
    // 0x46442c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x46442cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_464430:
    // 0x464430: 0xa6030050  sh          $v1, 0x50($s0)
    ctx->pc = 0x464430u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 3));
label_464434:
    // 0x464434: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x464434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_464438:
    // 0x464438: 0x8c458a08  lw          $a1, -0x75F8($v0)
    ctx->pc = 0x464438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_46443c:
    // 0x46443c: 0x3c033f31  lui         $v1, 0x3F31
    ctx->pc = 0x46443cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16177 << 16));
label_464440:
    // 0x464440: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x464440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_464444:
    // 0x464444: 0x3462c71c  ori         $v0, $v1, 0xC71C
    ctx->pc = 0x464444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)50972);
label_464448:
    // 0x464448: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x464448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_46444c:
    // 0x46444c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x46444cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_464450:
    // 0x464450: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x464450u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_464454:
    // 0x464454: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x464454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_464458:
    // 0x464458: 0xc0b8160  jal         func_2E0580
label_46445c:
    if (ctx->pc == 0x46445Cu) {
        ctx->pc = 0x46445Cu;
            // 0x46445c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x464460u;
        goto label_464460;
    }
    ctx->pc = 0x464458u;
    SET_GPR_U32(ctx, 31, 0x464460u);
    ctx->pc = 0x46445Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464458u;
            // 0x46445c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0580u;
    if (runtime->hasFunction(0x2E0580u)) {
        auto targetFn = runtime->lookupFunction(0x2E0580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464460u; }
        if (ctx->pc != 0x464460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0580_0x2e0580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464460u; }
        if (ctx->pc != 0x464460u) { return; }
    }
    ctx->pc = 0x464460u;
label_464460:
    // 0x464460: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x464460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_464464:
    // 0x464464: 0xc04cc04  jal         func_133010
label_464468:
    if (ctx->pc == 0x464468u) {
        ctx->pc = 0x464468u;
            // 0x464468: 0x26440270  addiu       $a0, $s2, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 624));
        ctx->pc = 0x46446Cu;
        goto label_46446c;
    }
    ctx->pc = 0x464464u;
    SET_GPR_U32(ctx, 31, 0x46446Cu);
    ctx->pc = 0x464468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464464u;
            // 0x464468: 0x26440270  addiu       $a0, $s2, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46446Cu; }
        if (ctx->pc != 0x46446Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46446Cu; }
        if (ctx->pc != 0x46446Cu) { return; }
    }
    ctx->pc = 0x46446Cu;
label_46446c:
    // 0x46446c: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x46446cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_464470:
    // 0x464470: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x464470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_464474:
    // 0x464474: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x464474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_464478:
    // 0x464478: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x464478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_46447c:
    // 0x46447c: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x46447cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_464480:
    // 0x464480: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x464480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_464484:
    // 0x464484: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x464484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_464488:
    // 0x464488: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x464488u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_46448c:
    // 0x46448c: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x46448cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_464490:
    // 0x464490: 0xc0892a0  jal         func_224A80
label_464494:
    if (ctx->pc == 0x464494u) {
        ctx->pc = 0x464494u;
            // 0x464494: 0xe7a300bc  swc1        $f3, 0xBC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
        ctx->pc = 0x464498u;
        goto label_464498;
    }
    ctx->pc = 0x464490u;
    SET_GPR_U32(ctx, 31, 0x464498u);
    ctx->pc = 0x464494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464490u;
            // 0x464494: 0xe7a300bc  swc1        $f3, 0xBC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224A80u;
    if (runtime->hasFunction(0x224A80u)) {
        auto targetFn = runtime->lookupFunction(0x224A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464498u; }
        if (ctx->pc != 0x464498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224A80_0x224a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464498u; }
        if (ctx->pc != 0x464498u) { return; }
    }
    ctx->pc = 0x464498u;
label_464498:
    // 0x464498: 0x3c023f31  lui         $v0, 0x3F31
    ctx->pc = 0x464498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16177 << 16));
label_46449c:
    // 0x46449c: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x46449cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_4644a0:
    // 0x4644a0: 0x3442c71c  ori         $v0, $v0, 0xC71C
    ctx->pc = 0x4644a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50972);
label_4644a4:
    // 0x4644a4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x4644a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_4644a8:
    // 0x4644a8: 0xae420200  sw          $v0, 0x200($s2)
    ctx->pc = 0x4644a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 512), GPR_U32(ctx, 2));
label_4644ac:
    // 0x4644ac: 0xc04cc90  jal         func_133240
label_4644b0:
    if (ctx->pc == 0x4644B0u) {
        ctx->pc = 0x4644B0u;
            // 0x4644b0: 0x26450270  addiu       $a1, $s2, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 624));
        ctx->pc = 0x4644B4u;
        goto label_4644b4;
    }
    ctx->pc = 0x4644ACu;
    SET_GPR_U32(ctx, 31, 0x4644B4u);
    ctx->pc = 0x4644B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4644ACu;
            // 0x4644b0: 0x26450270  addiu       $a1, $s2, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4644B4u; }
        if (ctx->pc != 0x4644B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4644B4u; }
        if (ctx->pc != 0x4644B4u) { return; }
    }
    ctx->pc = 0x4644B4u;
label_4644b4:
    // 0x4644b4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x4644b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_4644b8:
    // 0x4644b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4644b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4644bc:
    // 0x4644bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4644bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4644c0:
    // 0x4644c0: 0xc04cc7c  jal         func_1331F0
label_4644c4:
    if (ctx->pc == 0x4644C4u) {
        ctx->pc = 0x4644C4u;
            // 0x4644c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4644C8u;
        goto label_4644c8;
    }
    ctx->pc = 0x4644C0u;
    SET_GPR_U32(ctx, 31, 0x4644C8u);
    ctx->pc = 0x4644C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4644C0u;
            // 0x4644c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4644C8u; }
        if (ctx->pc != 0x4644C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4644C8u; }
        if (ctx->pc != 0x4644C8u) { return; }
    }
    ctx->pc = 0x4644C8u;
label_4644c8:
    // 0x4644c8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x4644c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_4644cc:
    // 0x4644cc: 0xc04cc44  jal         func_133110
label_4644d0:
    if (ctx->pc == 0x4644D0u) {
        ctx->pc = 0x4644D0u;
            // 0x4644d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4644D4u;
        goto label_4644d4;
    }
    ctx->pc = 0x4644CCu;
    SET_GPR_U32(ctx, 31, 0x4644D4u);
    ctx->pc = 0x4644D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4644CCu;
            // 0x4644d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4644D4u; }
        if (ctx->pc != 0x4644D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4644D4u; }
        if (ctx->pc != 0x4644D4u) { return; }
    }
    ctx->pc = 0x4644D4u;
label_4644d4:
    // 0x4644d4: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x4644d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4644d8:
    // 0x4644d8: 0x265000f0  addiu       $s0, $s2, 0xF0
    ctx->pc = 0x4644d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
label_4644dc:
    // 0x4644dc: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x4644dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4644e0:
    // 0x4644e0: 0xc7ac00c4  lwc1        $f12, 0xC4($sp)
    ctx->pc = 0x4644e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4644e4:
    // 0x4644e4: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x4644e4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_4644e8:
    // 0x4644e8: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x4644e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_4644ec:
    // 0x4644ec: 0x46000344  c1          0x344
    ctx->pc = 0x4644ecu;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_4644f0:
    // 0x4644f0: 0x0  nop
    ctx->pc = 0x4644f0u;
    // NOP
label_4644f4:
    // 0x4644f4: 0x0  nop
    ctx->pc = 0x4644f4u;
    // NOP
label_4644f8:
    // 0x4644f8: 0xc04780a  jal         func_11E028
label_4644fc:
    if (ctx->pc == 0x4644FCu) {
        ctx->pc = 0x464500u;
        goto label_464500;
    }
    ctx->pc = 0x4644F8u;
    SET_GPR_U32(ctx, 31, 0x464500u);
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464500u; }
        if (ctx->pc != 0x464500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464500u; }
        if (ctx->pc != 0x464500u) { return; }
    }
    ctx->pc = 0x464500u;
label_464500:
    // 0x464500: 0xc7ac00c0  lwc1        $f12, 0xC0($sp)
    ctx->pc = 0x464500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_464504:
    // 0x464504: 0xc7ad00c8  lwc1        $f13, 0xC8($sp)
    ctx->pc = 0x464504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_464508:
    // 0x464508: 0xc04780a  jal         func_11E028
label_46450c:
    if (ctx->pc == 0x46450Cu) {
        ctx->pc = 0x46450Cu;
            // 0x46450c: 0x46000547  neg.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_NEG_S(ctx->f[0]);
        ctx->pc = 0x464510u;
        goto label_464510;
    }
    ctx->pc = 0x464508u;
    SET_GPR_U32(ctx, 31, 0x464510u);
    ctx->pc = 0x46450Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464508u;
            // 0x46450c: 0x46000547  neg.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464510u; }
        if (ctx->pc != 0x464510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464510u; }
        if (ctx->pc != 0x464510u) { return; }
    }
    ctx->pc = 0x464510u;
label_464510:
    // 0x464510: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x464510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_464514:
    // 0x464514: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x464514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_464518:
    // 0x464518: 0x3443f983  ori         $v1, $v0, 0xF983
    ctx->pc = 0x464518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_46451c:
    // 0x46451c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x46451cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_464520:
    // 0x464520: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x464520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_464524:
    // 0x464524: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x464524u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_464528:
    // 0x464528: 0x0  nop
    ctx->pc = 0x464528u;
    // NOP
label_46452c:
    // 0x46452c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x46452cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_464530:
    // 0x464530: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x464530u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_464534:
    // 0x464534: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x464534u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_464538:
    // 0x464538: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x464538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_46453c:
    // 0x46453c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x46453cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_464540:
    // 0x464540: 0xc04c970  jal         func_1325C0
label_464544:
    if (ctx->pc == 0x464544u) {
        ctx->pc = 0x464544u;
            // 0x464544: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x464548u;
        goto label_464548;
    }
    ctx->pc = 0x464540u;
    SET_GPR_U32(ctx, 31, 0x464548u);
    ctx->pc = 0x464544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464540u;
            // 0x464544: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464548u; }
        if (ctx->pc != 0x464548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464548u; }
        if (ctx->pc != 0x464548u) { return; }
    }
    ctx->pc = 0x464548u;
label_464548:
    // 0x464548: 0x3c034622  lui         $v1, 0x4622
    ctx->pc = 0x464548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17954 << 16));
label_46454c:
    // 0x46454c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x46454cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_464550:
    // 0x464550: 0x3463f983  ori         $v1, $v1, 0xF983
    ctx->pc = 0x464550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63875);
label_464554:
    // 0x464554: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x464554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_464558:
    // 0x464558: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x464558u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_46455c:
    // 0x46455c: 0x0  nop
    ctx->pc = 0x46455cu;
    // NOP
label_464560:
    // 0x464560: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x464560u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_464564:
    // 0x464564: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x464564u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_464568:
    // 0x464568: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x464568u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_46456c:
    // 0x46456c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x46456cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_464570:
    // 0x464570: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x464570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_464574:
    // 0x464574: 0xc04c970  jal         func_1325C0
label_464578:
    if (ctx->pc == 0x464578u) {
        ctx->pc = 0x464578u;
            // 0x464578: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x46457Cu;
        goto label_46457c;
    }
    ctx->pc = 0x464574u;
    SET_GPR_U32(ctx, 31, 0x46457Cu);
    ctx->pc = 0x464578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464574u;
            // 0x464578: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46457Cu; }
        if (ctx->pc != 0x46457Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46457Cu; }
        if (ctx->pc != 0x46457Cu) { return; }
    }
    ctx->pc = 0x46457Cu;
label_46457c:
    // 0x46457c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x46457cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_464580:
    // 0x464580: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x464580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_464584:
    // 0x464584: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x464584u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_464588:
    // 0x464588: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x464588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_46458c:
    // 0x46458c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x46458cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_464590:
    // 0x464590: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x464590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_464594:
    // 0x464594: 0xc04c970  jal         func_1325C0
label_464598:
    if (ctx->pc == 0x464598u) {
        ctx->pc = 0x464598u;
            // 0x464598: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x46459Cu;
        goto label_46459c;
    }
    ctx->pc = 0x464594u;
    SET_GPR_U32(ctx, 31, 0x46459Cu);
    ctx->pc = 0x464598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464594u;
            // 0x464598: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46459Cu; }
        if (ctx->pc != 0x46459Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46459Cu; }
        if (ctx->pc != 0x46459Cu) { return; }
    }
    ctx->pc = 0x46459Cu;
label_46459c:
    // 0x46459c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x46459cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4645a0:
    // 0x4645a0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x4645a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4645a4:
    // 0x4645a4: 0xc04c72c  jal         func_131CB0
label_4645a8:
    if (ctx->pc == 0x4645A8u) {
        ctx->pc = 0x4645A8u;
            // 0x4645a8: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4645ACu;
        goto label_4645ac;
    }
    ctx->pc = 0x4645A4u;
    SET_GPR_U32(ctx, 31, 0x4645ACu);
    ctx->pc = 0x4645A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4645A4u;
            // 0x4645a8: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4645ACu; }
        if (ctx->pc != 0x4645ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4645ACu; }
        if (ctx->pc != 0x4645ACu) { return; }
    }
    ctx->pc = 0x4645ACu;
label_4645ac:
    // 0x4645ac: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x4645acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4645b0:
    // 0x4645b0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x4645b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4645b4:
    // 0x4645b4: 0xc04c72c  jal         func_131CB0
label_4645b8:
    if (ctx->pc == 0x4645B8u) {
        ctx->pc = 0x4645B8u;
            // 0x4645b8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4645BCu;
        goto label_4645bc;
    }
    ctx->pc = 0x4645B4u;
    SET_GPR_U32(ctx, 31, 0x4645BCu);
    ctx->pc = 0x4645B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4645B4u;
            // 0x4645b8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4645BCu; }
        if (ctx->pc != 0x4645BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4645BCu; }
        if (ctx->pc != 0x4645BCu) { return; }
    }
    ctx->pc = 0x4645BCu;
label_4645bc:
    // 0x4645bc: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x4645bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_4645c0:
    // 0x4645c0: 0xc04c74c  jal         func_131D30
label_4645c4:
    if (ctx->pc == 0x4645C4u) {
        ctx->pc = 0x4645C4u;
            // 0x4645c4: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->pc = 0x4645C8u;
        goto label_4645c8;
    }
    ctx->pc = 0x4645C0u;
    SET_GPR_U32(ctx, 31, 0x4645C8u);
    ctx->pc = 0x4645C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4645C0u;
            // 0x4645c4: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4645C8u; }
        if (ctx->pc != 0x4645C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4645C8u; }
        if (ctx->pc != 0x4645C8u) { return; }
    }
    ctx->pc = 0x4645C8u;
label_4645c8:
    // 0x4645c8: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x4645c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_4645cc:
    // 0x4645cc: 0xc04c74c  jal         func_131D30
label_4645d0:
    if (ctx->pc == 0x4645D0u) {
        ctx->pc = 0x4645D0u;
            // 0x4645d0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4645D4u;
        goto label_4645d4;
    }
    ctx->pc = 0x4645CCu;
    SET_GPR_U32(ctx, 31, 0x4645D4u);
    ctx->pc = 0x4645D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4645CCu;
            // 0x4645d0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4645D4u; }
        if (ctx->pc != 0x4645D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4645D4u; }
        if (ctx->pc != 0x4645D4u) { return; }
    }
    ctx->pc = 0x4645D4u;
label_4645d4:
    // 0x4645d4: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x4645d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_4645d8:
    // 0x4645d8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4645d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4645dc:
    // 0x4645dc: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x4645dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4645e0:
    // 0x4645e0: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x4645e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
label_4645e4:
    // 0x4645e4: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x4645e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_4645e8:
    // 0x4645e8: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x4645e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4645ec:
    // 0x4645ec: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x4645ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_4645f0:
    // 0x4645f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4645f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4645f4:
    // 0x4645f4: 0x3c033f31  lui         $v1, 0x3F31
    ctx->pc = 0x4645f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16177 << 16));
label_4645f8:
    // 0x4645f8: 0x3463c71c  ori         $v1, $v1, 0xC71C
    ctx->pc = 0x4645f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)50972);
label_4645fc:
    // 0x4645fc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4645fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_464600:
    // 0x464600: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x464600u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_464604:
    // 0x464604: 0xe6010094  swc1        $f1, 0x94($s0)
    ctx->pc = 0x464604u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
label_464608:
    // 0x464608: 0xc7a500c8  lwc1        $f5, 0xC8($sp)
    ctx->pc = 0x464608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_46460c:
    // 0x46460c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x46460cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_464610:
    // 0x464610: 0xc7a400c4  lwc1        $f4, 0xC4($sp)
    ctx->pc = 0x464610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_464614:
    // 0x464614: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x464614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_464618:
    // 0x464618: 0xc7a300c0  lwc1        $f3, 0xC0($sp)
    ctx->pc = 0x464618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_46461c:
    // 0x46461c: 0xe7a50068  swc1        $f5, 0x68($sp)
    ctx->pc = 0x46461cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_464620:
    // 0x464620: 0xe7a40064  swc1        $f4, 0x64($sp)
    ctx->pc = 0x464620u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_464624:
    // 0x464624: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x464624u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_464628:
    // 0x464628: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x464628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_46462c:
    // 0x46462c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x46462cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_464630:
    // 0x464630: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x464630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_464634:
    // 0x464634: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x464634u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_464638:
    // 0x464638: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x464638u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_46463c:
    // 0x46463c: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x46463cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_464640:
    // 0x464640: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x464640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_464644:
    // 0x464644: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x464644u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_464648:
    // 0x464648: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x464648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_46464c:
    // 0x46464c: 0x46022842  mul.s       $f1, $f5, $f2
    ctx->pc = 0x46464cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_464650:
    // 0x464650: 0x46023002  mul.s       $f0, $f6, $f2
    ctx->pc = 0x464650u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_464654:
    // 0x464654: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x464654u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_464658:
    // 0x464658: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x464658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_46465c:
    // 0x46465c: 0x8e500050  lw          $s0, 0x50($s2)
    ctx->pc = 0x46465cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_464660:
    // 0x464660: 0xc088b74  jal         func_222DD0
label_464664:
    if (ctx->pc == 0x464664u) {
        ctx->pc = 0x464664u;
            // 0x464664: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x464668u;
        goto label_464668;
    }
    ctx->pc = 0x464660u;
    SET_GPR_U32(ctx, 31, 0x464668u);
    ctx->pc = 0x464664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464660u;
            // 0x464664: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464668u; }
        if (ctx->pc != 0x464668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464668u; }
        if (ctx->pc != 0x464668u) { return; }
    }
    ctx->pc = 0x464668u;
label_464668:
    // 0x464668: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x464668u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_46466c:
    // 0x46466c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x46466cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_464670:
    // 0x464670: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x464670u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_464674:
    // 0x464674: 0x320f809  jalr        $t9
label_464678:
    if (ctx->pc == 0x464678u) {
        ctx->pc = 0x464678u;
            // 0x464678: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x46467Cu;
        goto label_46467c;
    }
    ctx->pc = 0x464674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46467Cu);
        ctx->pc = 0x464678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x464674u;
            // 0x464678: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46467Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46467Cu; }
            if (ctx->pc != 0x46467Cu) { return; }
        }
        }
    }
    ctx->pc = 0x46467Cu;
label_46467c:
    // 0x46467c: 0xae400260  sw          $zero, 0x260($s2)
    ctx->pc = 0x46467cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 0));
label_464680:
    // 0x464680: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x464680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_464684:
    // 0x464684: 0xae400258  sw          $zero, 0x258($s2)
    ctx->pc = 0x464684u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 600), GPR_U32(ctx, 0));
label_464688:
    // 0x464688: 0x26430264  addiu       $v1, $s2, 0x264
    ctx->pc = 0x464688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 612));
label_46468c:
    // 0x46468c: 0xae400254  sw          $zero, 0x254($s2)
    ctx->pc = 0x46468cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 596), GPR_U32(ctx, 0));
label_464690:
    // 0x464690: 0xae400250  sw          $zero, 0x250($s2)
    ctx->pc = 0x464690u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 0));
label_464694:
    // 0x464694: 0xae44025c  sw          $a0, 0x25C($s2)
    ctx->pc = 0x464694u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 604), GPR_U32(ctx, 4));
label_464698:
    // 0x464698: 0xb0600007  sdl         $zero, 0x7($v1)
    ctx->pc = 0x464698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 0); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_46469c:
    // 0x46469c: 0xb4600000  sdr         $zero, 0x0($v1)
    ctx->pc = 0x46469cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 0); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4646a0:
    // 0x4646a0: 0xae40026c  sw          $zero, 0x26C($s2)
    ctx->pc = 0x4646a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 620), GPR_U32(ctx, 0));
label_4646a4:
    // 0x4646a4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4646a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4646a8:
    // 0x4646a8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4646a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4646ac:
    // 0x4646ac: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4646acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4646b0:
    // 0x4646b0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4646b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4646b4:
    // 0x4646b4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4646b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4646b8:
    // 0x4646b8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4646b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4646bc:
    // 0x4646bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4646bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4646c0:
    // 0x4646c0: 0x3e00008  jr          $ra
label_4646c4:
    if (ctx->pc == 0x4646C4u) {
        ctx->pc = 0x4646C4u;
            // 0x4646c4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x4646C8u;
        goto label_4646c8;
    }
    ctx->pc = 0x4646C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4646C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4646C0u;
            // 0x4646c4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4646C8u;
label_4646c8:
    // 0x4646c8: 0x0  nop
    ctx->pc = 0x4646c8u;
    // NOP
label_4646cc:
    // 0x4646cc: 0x0  nop
    ctx->pc = 0x4646ccu;
    // NOP
}
