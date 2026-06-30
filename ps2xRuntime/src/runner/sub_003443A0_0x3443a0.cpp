#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003443A0
// Address: 0x3443a0 - 0x344800
void sub_003443A0_0x3443a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003443A0_0x3443a0");
#endif

    switch (ctx->pc) {
        case 0x3443a0u: goto label_3443a0;
        case 0x3443a4u: goto label_3443a4;
        case 0x3443a8u: goto label_3443a8;
        case 0x3443acu: goto label_3443ac;
        case 0x3443b0u: goto label_3443b0;
        case 0x3443b4u: goto label_3443b4;
        case 0x3443b8u: goto label_3443b8;
        case 0x3443bcu: goto label_3443bc;
        case 0x3443c0u: goto label_3443c0;
        case 0x3443c4u: goto label_3443c4;
        case 0x3443c8u: goto label_3443c8;
        case 0x3443ccu: goto label_3443cc;
        case 0x3443d0u: goto label_3443d0;
        case 0x3443d4u: goto label_3443d4;
        case 0x3443d8u: goto label_3443d8;
        case 0x3443dcu: goto label_3443dc;
        case 0x3443e0u: goto label_3443e0;
        case 0x3443e4u: goto label_3443e4;
        case 0x3443e8u: goto label_3443e8;
        case 0x3443ecu: goto label_3443ec;
        case 0x3443f0u: goto label_3443f0;
        case 0x3443f4u: goto label_3443f4;
        case 0x3443f8u: goto label_3443f8;
        case 0x3443fcu: goto label_3443fc;
        case 0x344400u: goto label_344400;
        case 0x344404u: goto label_344404;
        case 0x344408u: goto label_344408;
        case 0x34440cu: goto label_34440c;
        case 0x344410u: goto label_344410;
        case 0x344414u: goto label_344414;
        case 0x344418u: goto label_344418;
        case 0x34441cu: goto label_34441c;
        case 0x344420u: goto label_344420;
        case 0x344424u: goto label_344424;
        case 0x344428u: goto label_344428;
        case 0x34442cu: goto label_34442c;
        case 0x344430u: goto label_344430;
        case 0x344434u: goto label_344434;
        case 0x344438u: goto label_344438;
        case 0x34443cu: goto label_34443c;
        case 0x344440u: goto label_344440;
        case 0x344444u: goto label_344444;
        case 0x344448u: goto label_344448;
        case 0x34444cu: goto label_34444c;
        case 0x344450u: goto label_344450;
        case 0x344454u: goto label_344454;
        case 0x344458u: goto label_344458;
        case 0x34445cu: goto label_34445c;
        case 0x344460u: goto label_344460;
        case 0x344464u: goto label_344464;
        case 0x344468u: goto label_344468;
        case 0x34446cu: goto label_34446c;
        case 0x344470u: goto label_344470;
        case 0x344474u: goto label_344474;
        case 0x344478u: goto label_344478;
        case 0x34447cu: goto label_34447c;
        case 0x344480u: goto label_344480;
        case 0x344484u: goto label_344484;
        case 0x344488u: goto label_344488;
        case 0x34448cu: goto label_34448c;
        case 0x344490u: goto label_344490;
        case 0x344494u: goto label_344494;
        case 0x344498u: goto label_344498;
        case 0x34449cu: goto label_34449c;
        case 0x3444a0u: goto label_3444a0;
        case 0x3444a4u: goto label_3444a4;
        case 0x3444a8u: goto label_3444a8;
        case 0x3444acu: goto label_3444ac;
        case 0x3444b0u: goto label_3444b0;
        case 0x3444b4u: goto label_3444b4;
        case 0x3444b8u: goto label_3444b8;
        case 0x3444bcu: goto label_3444bc;
        case 0x3444c0u: goto label_3444c0;
        case 0x3444c4u: goto label_3444c4;
        case 0x3444c8u: goto label_3444c8;
        case 0x3444ccu: goto label_3444cc;
        case 0x3444d0u: goto label_3444d0;
        case 0x3444d4u: goto label_3444d4;
        case 0x3444d8u: goto label_3444d8;
        case 0x3444dcu: goto label_3444dc;
        case 0x3444e0u: goto label_3444e0;
        case 0x3444e4u: goto label_3444e4;
        case 0x3444e8u: goto label_3444e8;
        case 0x3444ecu: goto label_3444ec;
        case 0x3444f0u: goto label_3444f0;
        case 0x3444f4u: goto label_3444f4;
        case 0x3444f8u: goto label_3444f8;
        case 0x3444fcu: goto label_3444fc;
        case 0x344500u: goto label_344500;
        case 0x344504u: goto label_344504;
        case 0x344508u: goto label_344508;
        case 0x34450cu: goto label_34450c;
        case 0x344510u: goto label_344510;
        case 0x344514u: goto label_344514;
        case 0x344518u: goto label_344518;
        case 0x34451cu: goto label_34451c;
        case 0x344520u: goto label_344520;
        case 0x344524u: goto label_344524;
        case 0x344528u: goto label_344528;
        case 0x34452cu: goto label_34452c;
        case 0x344530u: goto label_344530;
        case 0x344534u: goto label_344534;
        case 0x344538u: goto label_344538;
        case 0x34453cu: goto label_34453c;
        case 0x344540u: goto label_344540;
        case 0x344544u: goto label_344544;
        case 0x344548u: goto label_344548;
        case 0x34454cu: goto label_34454c;
        case 0x344550u: goto label_344550;
        case 0x344554u: goto label_344554;
        case 0x344558u: goto label_344558;
        case 0x34455cu: goto label_34455c;
        case 0x344560u: goto label_344560;
        case 0x344564u: goto label_344564;
        case 0x344568u: goto label_344568;
        case 0x34456cu: goto label_34456c;
        case 0x344570u: goto label_344570;
        case 0x344574u: goto label_344574;
        case 0x344578u: goto label_344578;
        case 0x34457cu: goto label_34457c;
        case 0x344580u: goto label_344580;
        case 0x344584u: goto label_344584;
        case 0x344588u: goto label_344588;
        case 0x34458cu: goto label_34458c;
        case 0x344590u: goto label_344590;
        case 0x344594u: goto label_344594;
        case 0x344598u: goto label_344598;
        case 0x34459cu: goto label_34459c;
        case 0x3445a0u: goto label_3445a0;
        case 0x3445a4u: goto label_3445a4;
        case 0x3445a8u: goto label_3445a8;
        case 0x3445acu: goto label_3445ac;
        case 0x3445b0u: goto label_3445b0;
        case 0x3445b4u: goto label_3445b4;
        case 0x3445b8u: goto label_3445b8;
        case 0x3445bcu: goto label_3445bc;
        case 0x3445c0u: goto label_3445c0;
        case 0x3445c4u: goto label_3445c4;
        case 0x3445c8u: goto label_3445c8;
        case 0x3445ccu: goto label_3445cc;
        case 0x3445d0u: goto label_3445d0;
        case 0x3445d4u: goto label_3445d4;
        case 0x3445d8u: goto label_3445d8;
        case 0x3445dcu: goto label_3445dc;
        case 0x3445e0u: goto label_3445e0;
        case 0x3445e4u: goto label_3445e4;
        case 0x3445e8u: goto label_3445e8;
        case 0x3445ecu: goto label_3445ec;
        case 0x3445f0u: goto label_3445f0;
        case 0x3445f4u: goto label_3445f4;
        case 0x3445f8u: goto label_3445f8;
        case 0x3445fcu: goto label_3445fc;
        case 0x344600u: goto label_344600;
        case 0x344604u: goto label_344604;
        case 0x344608u: goto label_344608;
        case 0x34460cu: goto label_34460c;
        case 0x344610u: goto label_344610;
        case 0x344614u: goto label_344614;
        case 0x344618u: goto label_344618;
        case 0x34461cu: goto label_34461c;
        case 0x344620u: goto label_344620;
        case 0x344624u: goto label_344624;
        case 0x344628u: goto label_344628;
        case 0x34462cu: goto label_34462c;
        case 0x344630u: goto label_344630;
        case 0x344634u: goto label_344634;
        case 0x344638u: goto label_344638;
        case 0x34463cu: goto label_34463c;
        case 0x344640u: goto label_344640;
        case 0x344644u: goto label_344644;
        case 0x344648u: goto label_344648;
        case 0x34464cu: goto label_34464c;
        case 0x344650u: goto label_344650;
        case 0x344654u: goto label_344654;
        case 0x344658u: goto label_344658;
        case 0x34465cu: goto label_34465c;
        case 0x344660u: goto label_344660;
        case 0x344664u: goto label_344664;
        case 0x344668u: goto label_344668;
        case 0x34466cu: goto label_34466c;
        case 0x344670u: goto label_344670;
        case 0x344674u: goto label_344674;
        case 0x344678u: goto label_344678;
        case 0x34467cu: goto label_34467c;
        case 0x344680u: goto label_344680;
        case 0x344684u: goto label_344684;
        case 0x344688u: goto label_344688;
        case 0x34468cu: goto label_34468c;
        case 0x344690u: goto label_344690;
        case 0x344694u: goto label_344694;
        case 0x344698u: goto label_344698;
        case 0x34469cu: goto label_34469c;
        case 0x3446a0u: goto label_3446a0;
        case 0x3446a4u: goto label_3446a4;
        case 0x3446a8u: goto label_3446a8;
        case 0x3446acu: goto label_3446ac;
        case 0x3446b0u: goto label_3446b0;
        case 0x3446b4u: goto label_3446b4;
        case 0x3446b8u: goto label_3446b8;
        case 0x3446bcu: goto label_3446bc;
        case 0x3446c0u: goto label_3446c0;
        case 0x3446c4u: goto label_3446c4;
        case 0x3446c8u: goto label_3446c8;
        case 0x3446ccu: goto label_3446cc;
        case 0x3446d0u: goto label_3446d0;
        case 0x3446d4u: goto label_3446d4;
        case 0x3446d8u: goto label_3446d8;
        case 0x3446dcu: goto label_3446dc;
        case 0x3446e0u: goto label_3446e0;
        case 0x3446e4u: goto label_3446e4;
        case 0x3446e8u: goto label_3446e8;
        case 0x3446ecu: goto label_3446ec;
        case 0x3446f0u: goto label_3446f0;
        case 0x3446f4u: goto label_3446f4;
        case 0x3446f8u: goto label_3446f8;
        case 0x3446fcu: goto label_3446fc;
        case 0x344700u: goto label_344700;
        case 0x344704u: goto label_344704;
        case 0x344708u: goto label_344708;
        case 0x34470cu: goto label_34470c;
        case 0x344710u: goto label_344710;
        case 0x344714u: goto label_344714;
        case 0x344718u: goto label_344718;
        case 0x34471cu: goto label_34471c;
        case 0x344720u: goto label_344720;
        case 0x344724u: goto label_344724;
        case 0x344728u: goto label_344728;
        case 0x34472cu: goto label_34472c;
        case 0x344730u: goto label_344730;
        case 0x344734u: goto label_344734;
        case 0x344738u: goto label_344738;
        case 0x34473cu: goto label_34473c;
        case 0x344740u: goto label_344740;
        case 0x344744u: goto label_344744;
        case 0x344748u: goto label_344748;
        case 0x34474cu: goto label_34474c;
        case 0x344750u: goto label_344750;
        case 0x344754u: goto label_344754;
        case 0x344758u: goto label_344758;
        case 0x34475cu: goto label_34475c;
        case 0x344760u: goto label_344760;
        case 0x344764u: goto label_344764;
        case 0x344768u: goto label_344768;
        case 0x34476cu: goto label_34476c;
        case 0x344770u: goto label_344770;
        case 0x344774u: goto label_344774;
        case 0x344778u: goto label_344778;
        case 0x34477cu: goto label_34477c;
        case 0x344780u: goto label_344780;
        case 0x344784u: goto label_344784;
        case 0x344788u: goto label_344788;
        case 0x34478cu: goto label_34478c;
        case 0x344790u: goto label_344790;
        case 0x344794u: goto label_344794;
        case 0x344798u: goto label_344798;
        case 0x34479cu: goto label_34479c;
        case 0x3447a0u: goto label_3447a0;
        case 0x3447a4u: goto label_3447a4;
        case 0x3447a8u: goto label_3447a8;
        case 0x3447acu: goto label_3447ac;
        case 0x3447b0u: goto label_3447b0;
        case 0x3447b4u: goto label_3447b4;
        case 0x3447b8u: goto label_3447b8;
        case 0x3447bcu: goto label_3447bc;
        case 0x3447c0u: goto label_3447c0;
        case 0x3447c4u: goto label_3447c4;
        case 0x3447c8u: goto label_3447c8;
        case 0x3447ccu: goto label_3447cc;
        case 0x3447d0u: goto label_3447d0;
        case 0x3447d4u: goto label_3447d4;
        case 0x3447d8u: goto label_3447d8;
        case 0x3447dcu: goto label_3447dc;
        case 0x3447e0u: goto label_3447e0;
        case 0x3447e4u: goto label_3447e4;
        case 0x3447e8u: goto label_3447e8;
        case 0x3447ecu: goto label_3447ec;
        case 0x3447f0u: goto label_3447f0;
        case 0x3447f4u: goto label_3447f4;
        case 0x3447f8u: goto label_3447f8;
        case 0x3447fcu: goto label_3447fc;
        default: break;
    }

    ctx->pc = 0x3443a0u;

label_3443a0:
    // 0x3443a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3443a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3443a4:
    // 0x3443a4: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x3443a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_3443a8:
    // 0x3443a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3443a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3443ac:
    // 0x3443ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3443acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3443b0:
    // 0x3443b0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3443b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3443b4:
    // 0x3443b4: 0x34457a10  ori         $a1, $v0, 0x7A10
    ctx->pc = 0x3443b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31248);
label_3443b8:
    // 0x3443b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3443b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3443bc:
    // 0x3443bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3443bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3443c0:
    // 0x3443c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3443c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3443c4:
    // 0x3443c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3443c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3443c8:
    // 0x3443c8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3443c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3443cc:
    // 0x3443cc: 0xc10ca68  jal         func_4329A0
label_3443d0:
    if (ctx->pc == 0x3443D0u) {
        ctx->pc = 0x3443D0u;
            // 0x3443d0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x3443D4u;
        goto label_3443d4;
    }
    ctx->pc = 0x3443CCu;
    SET_GPR_U32(ctx, 31, 0x3443D4u);
    ctx->pc = 0x3443D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3443CCu;
            // 0x3443d0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3443D4u; }
        if (ctx->pc != 0x3443D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3443D4u; }
        if (ctx->pc != 0x3443D4u) { return; }
    }
    ctx->pc = 0x3443D4u;
label_3443d4:
    // 0x3443d4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3443d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3443d8:
    // 0x3443d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3443d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3443dc:
    // 0x3443dc: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x3443dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_3443e0:
    // 0x3443e0: 0x244256e0  addiu       $v0, $v0, 0x56E0
    ctx->pc = 0x3443e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22240));
label_3443e4:
    // 0x3443e4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3443e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3443e8:
    // 0x3443e8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3443e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3443ec:
    // 0x3443ec: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3443ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3443f0:
    // 0x3443f0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3443f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3443f4:
    // 0x3443f4: 0x8c7089f0  lw          $s0, -0x7610($v1)
    ctx->pc = 0x3443f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
label_3443f8:
    // 0x3443f8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3443f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3443fc:
    // 0x3443fc: 0x8c4289e0  lw          $v0, -0x7620($v0)
    ctx->pc = 0x3443fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_344400:
    // 0x344400: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x344400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_344404:
    // 0x344404: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x344404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_344408:
    // 0x344408: 0x8c590008  lw          $t9, 0x8($v0)
    ctx->pc = 0x344408u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_34440c:
    // 0x34440c: 0x24520004  addiu       $s2, $v0, 0x4
    ctx->pc = 0x34440cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_344410:
    // 0x344410: 0x46800d20  cvt.s.w     $f20, $f1
    ctx->pc = 0x344410u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_344414:
    // 0x344414: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x344414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_344418:
    // 0x344418: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x344418u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_34441c:
    // 0x34441c: 0x320f809  jalr        $t9
label_344420:
    if (ctx->pc == 0x344420u) {
        ctx->pc = 0x344420u;
            // 0x344420: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x344424u;
        goto label_344424;
    }
    ctx->pc = 0x34441Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x344424u);
        ctx->pc = 0x344420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34441Cu;
            // 0x344420: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x344424u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x344424u; }
            if (ctx->pc != 0x344424u) { return; }
        }
        }
    }
    ctx->pc = 0x344424u;
label_344424:
    // 0x344424: 0x8e590004  lw          $t9, 0x4($s2)
    ctx->pc = 0x344424u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_344428:
    // 0x344428: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x344428u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_34442c:
    // 0x34442c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x34442cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_344430:
    // 0x344430: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x344430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_344434:
    // 0x344434: 0x46156380  add.s       $f14, $f12, $f21
    ctx->pc = 0x344434u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[21]);
label_344438:
    // 0x344438: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x344438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_34443c:
    // 0x34443c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x34443cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_344440:
    // 0x344440: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x344440u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_344444:
    // 0x344444: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x344444u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_344448:
    // 0x344448: 0x461463c0  add.s       $f15, $f12, $f20
    ctx->pc = 0x344448u;
    ctx->f[15] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
label_34444c:
    // 0x34444c: 0x44828000  mtc1        $v0, $f16
    ctx->pc = 0x34444cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_344450:
    // 0x344450: 0x320f809  jalr        $t9
label_344454:
    if (ctx->pc == 0x344454u) {
        ctx->pc = 0x344454u;
            // 0x344454: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x344458u;
        goto label_344458;
    }
    ctx->pc = 0x344450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x344458u);
        ctx->pc = 0x344454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344450u;
            // 0x344454: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x344458u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x344458u; }
            if (ctx->pc != 0x344458u) { return; }
        }
        }
    }
    ctx->pc = 0x344458u;
label_344458:
    // 0x344458: 0x8e590004  lw          $t9, 0x4($s2)
    ctx->pc = 0x344458u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_34445c:
    // 0x34445c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x34445cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_344460:
    // 0x344460: 0x320f809  jalr        $t9
label_344464:
    if (ctx->pc == 0x344464u) {
        ctx->pc = 0x344464u;
            // 0x344464: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x344468u;
        goto label_344468;
    }
    ctx->pc = 0x344460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x344468u);
        ctx->pc = 0x344464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344460u;
            // 0x344464: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x344468u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x344468u; }
            if (ctx->pc != 0x344468u) { return; }
        }
        }
    }
    ctx->pc = 0x344468u;
label_344468:
    // 0x344468: 0x92020029  lbu         $v0, 0x29($s0)
    ctx->pc = 0x344468u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
label_34446c:
    // 0x34446c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_344470:
    if (ctx->pc == 0x344470u) {
        ctx->pc = 0x344470u;
            // 0x344470: 0x24020104  addiu       $v0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x344474u;
        goto label_344474;
    }
    ctx->pc = 0x34446Cu;
    {
        const bool branch_taken_0x34446c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34446c) {
            ctx->pc = 0x344470u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34446Cu;
            // 0x344470: 0x24020104  addiu       $v0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
            ctx->pc = 0x344480u;
            goto label_344480;
        }
    }
    ctx->pc = 0x344474u;
label_344474:
    // 0x344474: 0x240200e6  addiu       $v0, $zero, 0xE6
    ctx->pc = 0x344474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
label_344478:
    // 0x344478: 0x10000002  b           . + 4 + (0x2 << 2)
label_34447c:
    if (ctx->pc == 0x34447Cu) {
        ctx->pc = 0x34447Cu;
            // 0x34447c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x344480u;
        goto label_344480;
    }
    ctx->pc = 0x344478u;
    {
        const bool branch_taken_0x344478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34447Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344478u;
            // 0x34447c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344478) {
            ctx->pc = 0x344484u;
            goto label_344484;
        }
    }
    ctx->pc = 0x344480u;
label_344480:
    // 0x344480: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x344480u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_344484:
    // 0x344484: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x344484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_344488:
    // 0x344488: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x344488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_34448c:
    // 0x34448c: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x34448cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
label_344490:
    // 0x344490: 0xac433ea0  sw          $v1, 0x3EA0($v0)
    ctx->pc = 0x344490u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16032), GPR_U32(ctx, 3));
label_344494:
    // 0x344494: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x344494u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_344498:
    // 0x344498: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x344498u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_34449c:
    // 0x34449c: 0x320f809  jalr        $t9
label_3444a0:
    if (ctx->pc == 0x3444A0u) {
        ctx->pc = 0x3444A0u;
            // 0x3444a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3444A4u;
        goto label_3444a4;
    }
    ctx->pc = 0x34449Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3444A4u);
        ctx->pc = 0x3444A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34449Cu;
            // 0x3444a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3444A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3444A4u; }
            if (ctx->pc != 0x3444A4u) { return; }
        }
        }
    }
    ctx->pc = 0x3444A4u;
label_3444a4:
    // 0x3444a4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3444a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3444a8:
    // 0x3444a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3444a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3444ac:
    // 0x3444ac: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x3444acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3444b0:
    // 0x3444b0: 0x8c4289e0  lw          $v0, -0x7620($v0)
    ctx->pc = 0x3444b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3444b4:
    // 0x3444b4: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x3444b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3444b8:
    // 0x3444b8: 0x8c590008  lw          $t9, 0x8($v0)
    ctx->pc = 0x3444b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3444bc:
    // 0x3444bc: 0x46800d20  cvt.s.w     $f20, $f1
    ctx->pc = 0x3444bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_3444c0:
    // 0x3444c0: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x3444c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3444c4:
    // 0x3444c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3444c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3444c8:
    // 0x3444c8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3444c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3444cc:
    // 0x3444cc: 0x320f809  jalr        $t9
label_3444d0:
    if (ctx->pc == 0x3444D0u) {
        ctx->pc = 0x3444D0u;
            // 0x3444d0: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3444D4u;
        goto label_3444d4;
    }
    ctx->pc = 0x3444CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3444D4u);
        ctx->pc = 0x3444D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3444CCu;
            // 0x3444d0: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3444D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3444D4u; }
            if (ctx->pc != 0x3444D4u) { return; }
        }
        }
    }
    ctx->pc = 0x3444D4u;
label_3444d4:
    // 0x3444d4: 0x8e190004  lw          $t9, 0x4($s0)
    ctx->pc = 0x3444d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3444d8:
    // 0x3444d8: 0x3c03c080  lui         $v1, 0xC080
    ctx->pc = 0x3444d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49280 << 16));
label_3444dc:
    // 0x3444dc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3444dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3444e0:
    // 0x3444e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3444e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3444e4:
    // 0x3444e4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3444e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3444e8:
    // 0x3444e8: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x3444e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3444ec:
    // 0x3444ec: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3444ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3444f0:
    // 0x3444f0: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x3444f0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
label_3444f4:
    // 0x3444f4: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x3444f4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_3444f8:
    // 0x3444f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3444f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3444fc:
    // 0x3444fc: 0x44828000  mtc1        $v0, $f16
    ctx->pc = 0x3444fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_344500:
    // 0x344500: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x344500u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_344504:
    // 0x344504: 0x320f809  jalr        $t9
label_344508:
    if (ctx->pc == 0x344508u) {
        ctx->pc = 0x344508u;
            // 0x344508: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x34450Cu;
        goto label_34450c;
    }
    ctx->pc = 0x344504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34450Cu);
        ctx->pc = 0x344508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344504u;
            // 0x344508: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x34450Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x34450Cu; }
            if (ctx->pc != 0x34450Cu) { return; }
        }
        }
    }
    ctx->pc = 0x34450Cu;
label_34450c:
    // 0x34450c: 0x8e190004  lw          $t9, 0x4($s0)
    ctx->pc = 0x34450cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_344510:
    // 0x344510: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x344510u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_344514:
    // 0x344514: 0x320f809  jalr        $t9
label_344518:
    if (ctx->pc == 0x344518u) {
        ctx->pc = 0x344518u;
            // 0x344518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34451Cu;
        goto label_34451c;
    }
    ctx->pc = 0x344514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34451Cu);
        ctx->pc = 0x344518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344514u;
            // 0x344518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x34451Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x34451Cu; }
            if (ctx->pc != 0x34451Cu) { return; }
        }
        }
    }
    ctx->pc = 0x34451Cu;
label_34451c:
    // 0x34451c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34451cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_344520:
    // 0x344520: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x344520u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_344524:
    // 0x344524: 0xa2230058  sb          $v1, 0x58($s1)
    ctx->pc = 0x344524u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 88), (uint8_t)GPR_U32(ctx, 3));
label_344528:
    // 0x344528: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x344528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_34452c:
    // 0x34452c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x34452cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_344530:
    // 0x344530: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x344530u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_344534:
    // 0x344534: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x344534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_344538:
    // 0x344538: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x344538u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_34453c:
    // 0x34453c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x34453cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_344540:
    // 0x344540: 0x3e00008  jr          $ra
label_344544:
    if (ctx->pc == 0x344544u) {
        ctx->pc = 0x344544u;
            // 0x344544: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x344548u;
        goto label_344548;
    }
    ctx->pc = 0x344540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344540u;
            // 0x344544: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x344548u;
label_344548:
    // 0x344548: 0x0  nop
    ctx->pc = 0x344548u;
    // NOP
label_34454c:
    // 0x34454c: 0x0  nop
    ctx->pc = 0x34454cu;
    // NOP
label_344550:
    // 0x344550: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x344550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_344554:
    // 0x344554: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x344554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_344558:
    // 0x344558: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x344558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_34455c:
    // 0x34455c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34455cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_344560:
    // 0x344560: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x344560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_344564:
    // 0x344564: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_344568:
    if (ctx->pc == 0x344568u) {
        ctx->pc = 0x344568u;
            // 0x344568: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34456Cu;
        goto label_34456c;
    }
    ctx->pc = 0x344564u;
    {
        const bool branch_taken_0x344564 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x344568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344564u;
            // 0x344568: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344564) {
            ctx->pc = 0x3445A8u;
            goto label_3445a8;
        }
    }
    ctx->pc = 0x34456Cu;
label_34456c:
    // 0x34456c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34456cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_344570:
    // 0x344570: 0x244256e0  addiu       $v0, $v0, 0x56E0
    ctx->pc = 0x344570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22240));
label_344574:
    // 0x344574: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_344578:
    if (ctx->pc == 0x344578u) {
        ctx->pc = 0x344578u;
            // 0x344578: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x34457Cu;
        goto label_34457c;
    }
    ctx->pc = 0x344574u;
    {
        const bool branch_taken_0x344574 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x344578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344574u;
            // 0x344578: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344574) {
            ctx->pc = 0x344590u;
            goto label_344590;
        }
    }
    ctx->pc = 0x34457Cu;
label_34457c:
    // 0x34457c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34457cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_344580:
    // 0x344580: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x344580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_344584:
    // 0x344584: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x344584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_344588:
    // 0x344588: 0xc057a68  jal         func_15E9A0
label_34458c:
    if (ctx->pc == 0x34458Cu) {
        ctx->pc = 0x34458Cu;
            // 0x34458c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x344590u;
        goto label_344590;
    }
    ctx->pc = 0x344588u;
    SET_GPR_U32(ctx, 31, 0x344590u);
    ctx->pc = 0x34458Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x344588u;
            // 0x34458c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344590u; }
        if (ctx->pc != 0x344590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344590u; }
        if (ctx->pc != 0x344590u) { return; }
    }
    ctx->pc = 0x344590u;
label_344590:
    // 0x344590: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x344590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_344594:
    // 0x344594: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x344594u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_344598:
    // 0x344598: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_34459c:
    if (ctx->pc == 0x34459Cu) {
        ctx->pc = 0x34459Cu;
            // 0x34459c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3445A0u;
        goto label_3445a0;
    }
    ctx->pc = 0x344598u;
    {
        const bool branch_taken_0x344598 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x344598) {
            ctx->pc = 0x34459Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x344598u;
            // 0x34459c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3445ACu;
            goto label_3445ac;
        }
    }
    ctx->pc = 0x3445A0u;
label_3445a0:
    // 0x3445a0: 0xc0400a8  jal         func_1002A0
label_3445a4:
    if (ctx->pc == 0x3445A4u) {
        ctx->pc = 0x3445A4u;
            // 0x3445a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3445A8u;
        goto label_3445a8;
    }
    ctx->pc = 0x3445A0u;
    SET_GPR_U32(ctx, 31, 0x3445A8u);
    ctx->pc = 0x3445A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3445A0u;
            // 0x3445a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3445A8u; }
        if (ctx->pc != 0x3445A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3445A8u; }
        if (ctx->pc != 0x3445A8u) { return; }
    }
    ctx->pc = 0x3445A8u;
label_3445a8:
    // 0x3445a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3445a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3445ac:
    // 0x3445ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3445acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3445b0:
    // 0x3445b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3445b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3445b4:
    // 0x3445b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3445b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3445b8:
    // 0x3445b8: 0x3e00008  jr          $ra
label_3445bc:
    if (ctx->pc == 0x3445BCu) {
        ctx->pc = 0x3445BCu;
            // 0x3445bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3445C0u;
        goto label_3445c0;
    }
    ctx->pc = 0x3445B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3445BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3445B8u;
            // 0x3445bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3445C0u;
label_3445c0:
    // 0x3445c0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3445c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3445c4:
    // 0x3445c4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x3445c4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3445c8:
    // 0x3445c8: 0x8c658a08  lw          $a1, -0x75F8($v1)
    ctx->pc = 0x3445c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3445cc:
    // 0x3445cc: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x3445ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
label_3445d0:
    // 0x3445d0: 0x80a9007a  lb          $t1, 0x7A($a1)
    ctx->pc = 0x3445d0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 122)));
label_3445d4:
    // 0x3445d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3445d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3445d8:
    // 0x3445d8: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x3445d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_3445dc:
    // 0x3445dc: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x3445dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3445e0:
    // 0x3445e0: 0x8c6bd130  lw          $t3, -0x2ED0($v1)
    ctx->pc = 0x3445e0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_3445e4:
    // 0x3445e4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3445e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3445e8:
    // 0x3445e8: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x3445e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3445ec:
    // 0x3445ec: 0x8c6a0e80  lw          $t2, 0xE80($v1)
    ctx->pc = 0x3445ecu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3445f0:
    // 0x3445f0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3445f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3445f4:
    // 0x3445f4: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x3445f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3445f8:
    // 0x3445f8: 0x8c6589d0  lw          $a1, -0x7630($v1)
    ctx->pc = 0x3445f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_3445fc:
    // 0x3445fc: 0x8ca50084  lw          $a1, 0x84($a1)
    ctx->pc = 0x3445fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 132)));
label_344600:
    // 0x344600: 0x14a8000d  bne         $a1, $t0, . + 4 + (0xD << 2)
label_344604:
    if (ctx->pc == 0x344604u) {
        ctx->pc = 0x344608u;
        goto label_344608;
    }
    ctx->pc = 0x344600u;
    {
        const bool branch_taken_0x344600 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 8));
        if (branch_taken_0x344600) {
            ctx->pc = 0x344638u;
            goto label_344638;
        }
    }
    ctx->pc = 0x344608u;
label_344608:
    // 0x344608: 0x16c2821  addu        $a1, $t3, $t4
    ctx->pc = 0x344608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
label_34460c:
    // 0x34460c: 0x90a50129  lbu         $a1, 0x129($a1)
    ctx->pc = 0x34460cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 297)));
label_344610:
    // 0x344610: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
label_344614:
    if (ctx->pc == 0x344614u) {
        ctx->pc = 0x344618u;
        goto label_344618;
    }
    ctx->pc = 0x344610u;
    {
        const bool branch_taken_0x344610 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x344610) {
            ctx->pc = 0x344638u;
            goto label_344638;
        }
    }
    ctx->pc = 0x344618u;
label_344618:
    // 0x344618: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x344618u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_34461c:
    // 0x34461c: 0x16c2821  addu        $a1, $t3, $t4
    ctx->pc = 0x34461cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
label_344620:
    // 0x344620: 0x90a50129  lbu         $a1, 0x129($a1)
    ctx->pc = 0x344620u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 297)));
label_344624:
    // 0x344624: 0x0  nop
    ctx->pc = 0x344624u;
    // NOP
label_344628:
    // 0x344628: 0x0  nop
    ctx->pc = 0x344628u;
    // NOP
label_34462c:
    // 0x34462c: 0x10a0fffa  beqz        $a1, . + 4 + (-0x6 << 2)
label_344630:
    if (ctx->pc == 0x344630u) {
        ctx->pc = 0x344634u;
        goto label_344634;
    }
    ctx->pc = 0x34462Cu;
    {
        const bool branch_taken_0x34462c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x34462c) {
            ctx->pc = 0x344618u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_344618;
        }
    }
    ctx->pc = 0x344634u;
label_344634:
    // 0x344634: 0x0  nop
    ctx->pc = 0x344634u;
    // NOP
label_344638:
    // 0x344638: 0xc2840  sll         $a1, $t4, 1
    ctx->pc = 0x344638u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
label_34463c:
    // 0x34463c: 0xac3021  addu        $a2, $a1, $t4
    ctx->pc = 0x34463cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
label_344640:
    // 0x344640: 0xc2880  sll         $a1, $t4, 2
    ctx->pc = 0x344640u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
label_344644:
    // 0x344644: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x344644u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_344648:
    // 0x344648: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x344648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_34464c:
    // 0x34464c: 0xec2821  addu        $a1, $a3, $t4
    ctx->pc = 0x34464cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_344650:
    // 0x344650: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x344650u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_344654:
    // 0x344654: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x344654u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_344658:
    // 0x344658: 0xaa3821  addu        $a3, $a1, $t2
    ctx->pc = 0x344658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_34465c:
    // 0x34465c: 0xc4e000e8  lwc1        $f0, 0xE8($a3)
    ctx->pc = 0x34465cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_344660:
    // 0x344660: 0x189282b  sltu        $a1, $t4, $t1
    ctx->pc = 0x344660u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_344664:
    // 0x344664: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x344664u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_344668:
    // 0x344668: 0xe4e000e8  swc1        $f0, 0xE8($a3)
    ctx->pc = 0x344668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 232), bits); }
label_34466c:
    // 0x34466c: 0xc4c000a0  lwc1        $f0, 0xA0($a2)
    ctx->pc = 0x34466cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_344670:
    // 0x344670: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x344670u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_344674:
    // 0x344674: 0x14a0ffe0  bnez        $a1, . + 4 + (-0x20 << 2)
label_344678:
    if (ctx->pc == 0x344678u) {
        ctx->pc = 0x344678u;
            // 0x344678: 0xe4c000a0  swc1        $f0, 0xA0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 160), bits); }
        ctx->pc = 0x34467Cu;
        goto label_34467c;
    }
    ctx->pc = 0x344674u;
    {
        const bool branch_taken_0x344674 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x344678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344674u;
            // 0x344678: 0xe4c000a0  swc1        $f0, 0xA0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x344674) {
            ctx->pc = 0x3445F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3445f8;
        }
    }
    ctx->pc = 0x34467Cu;
label_34467c:
    // 0x34467c: 0x3e00008  jr          $ra
label_344680:
    if (ctx->pc == 0x344680u) {
        ctx->pc = 0x344684u;
        goto label_344684;
    }
    ctx->pc = 0x34467Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x344684u;
label_344684:
    // 0x344684: 0x0  nop
    ctx->pc = 0x344684u;
    // NOP
label_344688:
    // 0x344688: 0x0  nop
    ctx->pc = 0x344688u;
    // NOP
label_34468c:
    // 0x34468c: 0x0  nop
    ctx->pc = 0x34468cu;
    // NOP
label_344690:
    // 0x344690: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x344690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_344694:
    // 0x344694: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x344694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_344698:
    // 0x344698: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x344698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_34469c:
    // 0x34469c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x34469cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3446a0:
    // 0x3446a0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3446a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3446a4:
    // 0x3446a4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3446a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3446a8:
    // 0x3446a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3446a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3446ac:
    // 0x3446ac: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3446acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3446b0:
    // 0x3446b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3446b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3446b4:
    // 0x3446b4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3446b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3446b8:
    // 0x3446b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3446b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3446bc:
    // 0x3446bc: 0x142880  sll         $a1, $s4, 2
    ctx->pc = 0x3446bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_3446c0:
    // 0x3446c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3446c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3446c4:
    // 0x3446c4: 0x8c72e378  lw          $s2, -0x1C88($v1)
    ctx->pc = 0x3446c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_3446c8:
    // 0x3446c8: 0xc4c00030  lwc1        $f0, 0x30($a2)
    ctx->pc = 0x3446c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3446cc:
    // 0x3446cc: 0x8c91e370  lw          $s1, -0x1C90($a0)
    ctx->pc = 0x3446ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294959984)));
label_3446d0:
    // 0x3446d0: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x3446d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_3446d4:
    // 0x3446d4: 0x8c64d120  lw          $a0, -0x2EE0($v1)
    ctx->pc = 0x3446d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_3446d8:
    // 0x3446d8: 0x8cc30028  lw          $v1, 0x28($a2)
    ctx->pc = 0x3446d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_3446dc:
    // 0x3446dc: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x3446dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3446e0:
    // 0x3446e0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x3446e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3446e4:
    // 0x3446e4: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x3446e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3446e8:
    // 0x3446e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3446e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3446ec:
    // 0x3446ec: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x3446ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3446f0:
    // 0x3446f0: 0x45010039  bc1t        . + 4 + (0x39 << 2)
label_3446f4:
    if (ctx->pc == 0x3446F4u) {
        ctx->pc = 0x3446F4u;
            // 0x3446f4: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3446F8u;
        goto label_3446f8;
    }
    ctx->pc = 0x3446F0u;
    {
        const bool branch_taken_0x3446f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3446F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3446F0u;
            // 0x3446f4: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3446f0) {
            ctx->pc = 0x3447D8u;
            goto label_3447d8;
        }
    }
    ctx->pc = 0x3446F8u;
label_3446f8:
    // 0x3446f8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3446f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3446fc:
    // 0x3446fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3446fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_344700:
    // 0x344700: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x344700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_344704:
    // 0x344704: 0xc04e4a4  jal         func_139290
label_344708:
    if (ctx->pc == 0x344708u) {
        ctx->pc = 0x344708u;
            // 0x344708: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34470Cu;
        goto label_34470c;
    }
    ctx->pc = 0x344704u;
    SET_GPR_U32(ctx, 31, 0x34470Cu);
    ctx->pc = 0x344708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x344704u;
            // 0x344708: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34470Cu; }
        if (ctx->pc != 0x34470Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34470Cu; }
        if (ctx->pc != 0x34470Cu) { return; }
    }
    ctx->pc = 0x34470Cu;
label_34470c:
    // 0x34470c: 0x26a40060  addiu       $a0, $s5, 0x60
    ctx->pc = 0x34470cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_344710:
    // 0x344710: 0xc04f674  jal         func_13D9D0
label_344714:
    if (ctx->pc == 0x344714u) {
        ctx->pc = 0x344714u;
            // 0x344714: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x344718u;
        goto label_344718;
    }
    ctx->pc = 0x344710u;
    SET_GPR_U32(ctx, 31, 0x344718u);
    ctx->pc = 0x344714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x344710u;
            // 0x344714: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D9D0u;
    if (runtime->hasFunction(0x13D9D0u)) {
        auto targetFn = runtime->lookupFunction(0x13D9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344718u; }
        if (ctx->pc != 0x344718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D9D0_0x13d9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344718u; }
        if (ctx->pc != 0x344718u) { return; }
    }
    ctx->pc = 0x344718u;
label_344718:
    // 0x344718: 0xc04f26c  jal         func_13C9B0
label_34471c:
    if (ctx->pc == 0x34471Cu) {
        ctx->pc = 0x34471Cu;
            // 0x34471c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x344720u;
        goto label_344720;
    }
    ctx->pc = 0x344718u;
    SET_GPR_U32(ctx, 31, 0x344720u);
    ctx->pc = 0x34471Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x344718u;
            // 0x34471c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344720u; }
        if (ctx->pc != 0x344720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344720u; }
        if (ctx->pc != 0x344720u) { return; }
    }
    ctx->pc = 0x344720u;
label_344720:
    // 0x344720: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x344720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_344724:
    // 0x344724: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x344724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_344728:
    // 0x344728: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x344728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_34472c:
    // 0x34472c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x34472cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_344730:
    // 0x344730: 0xc6ad00cc  lwc1        $f13, 0xCC($s5)
    ctx->pc = 0x344730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_344734:
    // 0x344734: 0xc04ce50  jal         func_133940
label_344738:
    if (ctx->pc == 0x344738u) {
        ctx->pc = 0x344738u;
            // 0x344738: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x34473Cu;
        goto label_34473c;
    }
    ctx->pc = 0x344734u;
    SET_GPR_U32(ctx, 31, 0x34473Cu);
    ctx->pc = 0x344738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x344734u;
            // 0x344738: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34473Cu; }
        if (ctx->pc != 0x34473Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34473Cu; }
        if (ctx->pc != 0x34473Cu) { return; }
    }
    ctx->pc = 0x34473Cu;
label_34473c:
    // 0x34473c: 0xc04e738  jal         func_139CE0
label_344740:
    if (ctx->pc == 0x344740u) {
        ctx->pc = 0x344740u;
            // 0x344740: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x344744u;
        goto label_344744;
    }
    ctx->pc = 0x34473Cu;
    SET_GPR_U32(ctx, 31, 0x344744u);
    ctx->pc = 0x344740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34473Cu;
            // 0x344740: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344744u; }
        if (ctx->pc != 0x344744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344744u; }
        if (ctx->pc != 0x344744u) { return; }
    }
    ctx->pc = 0x344744u;
label_344744:
    // 0x344744: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x344744u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_344748:
    // 0x344748: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x344748u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_34474c:
    // 0x34474c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34474cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_344750:
    // 0x344750: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x344750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_344754:
    // 0x344754: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x344754u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_344758:
    // 0x344758: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x344758u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_34475c:
    // 0x34475c: 0xc04cfcc  jal         func_133F30
label_344760:
    if (ctx->pc == 0x344760u) {
        ctx->pc = 0x344760u;
            // 0x344760: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x344764u;
        goto label_344764;
    }
    ctx->pc = 0x34475Cu;
    SET_GPR_U32(ctx, 31, 0x344764u);
    ctx->pc = 0x344760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34475Cu;
            // 0x344760: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344764u; }
        if (ctx->pc != 0x344764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344764u; }
        if (ctx->pc != 0x344764u) { return; }
    }
    ctx->pc = 0x344764u;
label_344764:
    // 0x344764: 0xc66c0030  lwc1        $f12, 0x30($s3)
    ctx->pc = 0x344764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_344768:
    // 0x344768: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x344768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_34476c:
    // 0x34476c: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x34476cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_344770:
    // 0x344770: 0xc054bbc  jal         func_152EF0
label_344774:
    if (ctx->pc == 0x344774u) {
        ctx->pc = 0x344774u;
            // 0x344774: 0x8e640010  lw          $a0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->pc = 0x344778u;
        goto label_344778;
    }
    ctx->pc = 0x344770u;
    SET_GPR_U32(ctx, 31, 0x344778u);
    ctx->pc = 0x344774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x344770u;
            // 0x344774: 0x8e640010  lw          $a0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344778u; }
        if (ctx->pc != 0x344778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344778u; }
        if (ctx->pc != 0x344778u) { return; }
    }
    ctx->pc = 0x344778u;
label_344778:
    // 0x344778: 0xc66c0030  lwc1        $f12, 0x30($s3)
    ctx->pc = 0x344778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_34477c:
    // 0x34477c: 0x8e650024  lw          $a1, 0x24($s3)
    ctx->pc = 0x34477cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_344780:
    // 0x344780: 0x8e660028  lw          $a2, 0x28($s3)
    ctx->pc = 0x344780u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_344784:
    // 0x344784: 0xc0525e0  jal         func_149780
label_344788:
    if (ctx->pc == 0x344788u) {
        ctx->pc = 0x344788u;
            // 0x344788: 0x8e64002c  lw          $a0, 0x2C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
        ctx->pc = 0x34478Cu;
        goto label_34478c;
    }
    ctx->pc = 0x344784u;
    SET_GPR_U32(ctx, 31, 0x34478Cu);
    ctx->pc = 0x344788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x344784u;
            // 0x344788: 0x8e64002c  lw          $a0, 0x2C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149780u;
    if (runtime->hasFunction(0x149780u)) {
        auto targetFn = runtime->lookupFunction(0x149780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34478Cu; }
        if (ctx->pc != 0x34478Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149780_0x149780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34478Cu; }
        if (ctx->pc != 0x34478Cu) { return; }
    }
    ctx->pc = 0x34478Cu;
label_34478c:
    // 0x34478c: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x34478cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_344790:
    // 0x344790: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x344790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_344794:
    // 0x344794: 0x8e660024  lw          $a2, 0x24($s3)
    ctx->pc = 0x344794u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_344798:
    // 0x344798: 0x8e67002c  lw          $a3, 0x2C($s3)
    ctx->pc = 0x344798u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_34479c:
    // 0x34479c: 0xc052398  jal         func_148E60
label_3447a0:
    if (ctx->pc == 0x3447A0u) {
        ctx->pc = 0x3447A0u;
            // 0x3447a0: 0x240803ff  addiu       $t0, $zero, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
        ctx->pc = 0x3447A4u;
        goto label_3447a4;
    }
    ctx->pc = 0x34479Cu;
    SET_GPR_U32(ctx, 31, 0x3447A4u);
    ctx->pc = 0x3447A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34479Cu;
            // 0x3447a0: 0x240803ff  addiu       $t0, $zero, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148E60u;
    if (runtime->hasFunction(0x148E60u)) {
        auto targetFn = runtime->lookupFunction(0x148E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3447A4u; }
        if (ctx->pc != 0x3447A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00148E60_0x148e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3447A4u; }
        if (ctx->pc != 0x3447A4u) { return; }
    }
    ctx->pc = 0x3447A4u;
label_3447a4:
    // 0x3447a4: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x3447a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_3447a8:
    // 0x3447a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3447a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3447ac:
    // 0x3447ac: 0xc0d1200  jal         func_344800
label_3447b0:
    if (ctx->pc == 0x3447B0u) {
        ctx->pc = 0x3447B0u;
            // 0x3447b0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3447B4u;
        goto label_3447b4;
    }
    ctx->pc = 0x3447ACu;
    SET_GPR_U32(ctx, 31, 0x3447B4u);
    ctx->pc = 0x3447B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3447ACu;
            // 0x3447b0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x344800u;
    if (runtime->hasFunction(0x344800u)) {
        auto targetFn = runtime->lookupFunction(0x344800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3447B4u; }
        if (ctx->pc != 0x3447B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00344800_0x344800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3447B4u; }
        if (ctx->pc != 0x3447B4u) { return; }
    }
    ctx->pc = 0x3447B4u;
label_3447b4:
    // 0x3447b4: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x3447b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_3447b8:
    // 0x3447b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3447b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3447bc:
    // 0x3447bc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3447bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3447c0:
    // 0x3447c0: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3447c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_3447c4:
    // 0x3447c4: 0xc0525a4  jal         func_149690
label_3447c8:
    if (ctx->pc == 0x3447C8u) {
        ctx->pc = 0x3447C8u;
            // 0x3447c8: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x3447CCu;
        goto label_3447cc;
    }
    ctx->pc = 0x3447C4u;
    SET_GPR_U32(ctx, 31, 0x3447CCu);
    ctx->pc = 0x3447C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3447C4u;
            // 0x3447c8: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149690u;
    if (runtime->hasFunction(0x149690u)) {
        auto targetFn = runtime->lookupFunction(0x149690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3447CCu; }
        if (ctx->pc != 0x3447CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149690_0x149690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3447CCu; }
        if (ctx->pc != 0x3447CCu) { return; }
    }
    ctx->pc = 0x3447CCu;
label_3447cc:
    // 0x3447cc: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x3447ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_3447d0:
    // 0x3447d0: 0xc04f674  jal         func_13D9D0
label_3447d4:
    if (ctx->pc == 0x3447D4u) {
        ctx->pc = 0x3447D4u;
            // 0x3447d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3447D8u;
        goto label_3447d8;
    }
    ctx->pc = 0x3447D0u;
    SET_GPR_U32(ctx, 31, 0x3447D8u);
    ctx->pc = 0x3447D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3447D0u;
            // 0x3447d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D9D0u;
    if (runtime->hasFunction(0x13D9D0u)) {
        auto targetFn = runtime->lookupFunction(0x13D9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3447D8u; }
        if (ctx->pc != 0x3447D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D9D0_0x13d9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3447D8u; }
        if (ctx->pc != 0x3447D8u) { return; }
    }
    ctx->pc = 0x3447D8u;
label_3447d8:
    // 0x3447d8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3447d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3447dc:
    // 0x3447dc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3447dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3447e0:
    // 0x3447e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3447e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3447e4:
    // 0x3447e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3447e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3447e8:
    // 0x3447e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3447e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3447ec:
    // 0x3447ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3447ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3447f0:
    // 0x3447f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3447f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3447f4:
    // 0x3447f4: 0x3e00008  jr          $ra
label_3447f8:
    if (ctx->pc == 0x3447F8u) {
        ctx->pc = 0x3447F8u;
            // 0x3447f8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x3447FCu;
        goto label_3447fc;
    }
    ctx->pc = 0x3447F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3447F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3447F4u;
            // 0x3447f8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3447FCu;
label_3447fc:
    // 0x3447fc: 0x0  nop
    ctx->pc = 0x3447fcu;
    // NOP
}
