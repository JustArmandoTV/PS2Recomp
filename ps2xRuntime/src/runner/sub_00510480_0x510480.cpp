#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00510480
// Address: 0x510480 - 0x510960
void sub_00510480_0x510480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00510480_0x510480");
#endif

    switch (ctx->pc) {
        case 0x510480u: goto label_510480;
        case 0x510484u: goto label_510484;
        case 0x510488u: goto label_510488;
        case 0x51048cu: goto label_51048c;
        case 0x510490u: goto label_510490;
        case 0x510494u: goto label_510494;
        case 0x510498u: goto label_510498;
        case 0x51049cu: goto label_51049c;
        case 0x5104a0u: goto label_5104a0;
        case 0x5104a4u: goto label_5104a4;
        case 0x5104a8u: goto label_5104a8;
        case 0x5104acu: goto label_5104ac;
        case 0x5104b0u: goto label_5104b0;
        case 0x5104b4u: goto label_5104b4;
        case 0x5104b8u: goto label_5104b8;
        case 0x5104bcu: goto label_5104bc;
        case 0x5104c0u: goto label_5104c0;
        case 0x5104c4u: goto label_5104c4;
        case 0x5104c8u: goto label_5104c8;
        case 0x5104ccu: goto label_5104cc;
        case 0x5104d0u: goto label_5104d0;
        case 0x5104d4u: goto label_5104d4;
        case 0x5104d8u: goto label_5104d8;
        case 0x5104dcu: goto label_5104dc;
        case 0x5104e0u: goto label_5104e0;
        case 0x5104e4u: goto label_5104e4;
        case 0x5104e8u: goto label_5104e8;
        case 0x5104ecu: goto label_5104ec;
        case 0x5104f0u: goto label_5104f0;
        case 0x5104f4u: goto label_5104f4;
        case 0x5104f8u: goto label_5104f8;
        case 0x5104fcu: goto label_5104fc;
        case 0x510500u: goto label_510500;
        case 0x510504u: goto label_510504;
        case 0x510508u: goto label_510508;
        case 0x51050cu: goto label_51050c;
        case 0x510510u: goto label_510510;
        case 0x510514u: goto label_510514;
        case 0x510518u: goto label_510518;
        case 0x51051cu: goto label_51051c;
        case 0x510520u: goto label_510520;
        case 0x510524u: goto label_510524;
        case 0x510528u: goto label_510528;
        case 0x51052cu: goto label_51052c;
        case 0x510530u: goto label_510530;
        case 0x510534u: goto label_510534;
        case 0x510538u: goto label_510538;
        case 0x51053cu: goto label_51053c;
        case 0x510540u: goto label_510540;
        case 0x510544u: goto label_510544;
        case 0x510548u: goto label_510548;
        case 0x51054cu: goto label_51054c;
        case 0x510550u: goto label_510550;
        case 0x510554u: goto label_510554;
        case 0x510558u: goto label_510558;
        case 0x51055cu: goto label_51055c;
        case 0x510560u: goto label_510560;
        case 0x510564u: goto label_510564;
        case 0x510568u: goto label_510568;
        case 0x51056cu: goto label_51056c;
        case 0x510570u: goto label_510570;
        case 0x510574u: goto label_510574;
        case 0x510578u: goto label_510578;
        case 0x51057cu: goto label_51057c;
        case 0x510580u: goto label_510580;
        case 0x510584u: goto label_510584;
        case 0x510588u: goto label_510588;
        case 0x51058cu: goto label_51058c;
        case 0x510590u: goto label_510590;
        case 0x510594u: goto label_510594;
        case 0x510598u: goto label_510598;
        case 0x51059cu: goto label_51059c;
        case 0x5105a0u: goto label_5105a0;
        case 0x5105a4u: goto label_5105a4;
        case 0x5105a8u: goto label_5105a8;
        case 0x5105acu: goto label_5105ac;
        case 0x5105b0u: goto label_5105b0;
        case 0x5105b4u: goto label_5105b4;
        case 0x5105b8u: goto label_5105b8;
        case 0x5105bcu: goto label_5105bc;
        case 0x5105c0u: goto label_5105c0;
        case 0x5105c4u: goto label_5105c4;
        case 0x5105c8u: goto label_5105c8;
        case 0x5105ccu: goto label_5105cc;
        case 0x5105d0u: goto label_5105d0;
        case 0x5105d4u: goto label_5105d4;
        case 0x5105d8u: goto label_5105d8;
        case 0x5105dcu: goto label_5105dc;
        case 0x5105e0u: goto label_5105e0;
        case 0x5105e4u: goto label_5105e4;
        case 0x5105e8u: goto label_5105e8;
        case 0x5105ecu: goto label_5105ec;
        case 0x5105f0u: goto label_5105f0;
        case 0x5105f4u: goto label_5105f4;
        case 0x5105f8u: goto label_5105f8;
        case 0x5105fcu: goto label_5105fc;
        case 0x510600u: goto label_510600;
        case 0x510604u: goto label_510604;
        case 0x510608u: goto label_510608;
        case 0x51060cu: goto label_51060c;
        case 0x510610u: goto label_510610;
        case 0x510614u: goto label_510614;
        case 0x510618u: goto label_510618;
        case 0x51061cu: goto label_51061c;
        case 0x510620u: goto label_510620;
        case 0x510624u: goto label_510624;
        case 0x510628u: goto label_510628;
        case 0x51062cu: goto label_51062c;
        case 0x510630u: goto label_510630;
        case 0x510634u: goto label_510634;
        case 0x510638u: goto label_510638;
        case 0x51063cu: goto label_51063c;
        case 0x510640u: goto label_510640;
        case 0x510644u: goto label_510644;
        case 0x510648u: goto label_510648;
        case 0x51064cu: goto label_51064c;
        case 0x510650u: goto label_510650;
        case 0x510654u: goto label_510654;
        case 0x510658u: goto label_510658;
        case 0x51065cu: goto label_51065c;
        case 0x510660u: goto label_510660;
        case 0x510664u: goto label_510664;
        case 0x510668u: goto label_510668;
        case 0x51066cu: goto label_51066c;
        case 0x510670u: goto label_510670;
        case 0x510674u: goto label_510674;
        case 0x510678u: goto label_510678;
        case 0x51067cu: goto label_51067c;
        case 0x510680u: goto label_510680;
        case 0x510684u: goto label_510684;
        case 0x510688u: goto label_510688;
        case 0x51068cu: goto label_51068c;
        case 0x510690u: goto label_510690;
        case 0x510694u: goto label_510694;
        case 0x510698u: goto label_510698;
        case 0x51069cu: goto label_51069c;
        case 0x5106a0u: goto label_5106a0;
        case 0x5106a4u: goto label_5106a4;
        case 0x5106a8u: goto label_5106a8;
        case 0x5106acu: goto label_5106ac;
        case 0x5106b0u: goto label_5106b0;
        case 0x5106b4u: goto label_5106b4;
        case 0x5106b8u: goto label_5106b8;
        case 0x5106bcu: goto label_5106bc;
        case 0x5106c0u: goto label_5106c0;
        case 0x5106c4u: goto label_5106c4;
        case 0x5106c8u: goto label_5106c8;
        case 0x5106ccu: goto label_5106cc;
        case 0x5106d0u: goto label_5106d0;
        case 0x5106d4u: goto label_5106d4;
        case 0x5106d8u: goto label_5106d8;
        case 0x5106dcu: goto label_5106dc;
        case 0x5106e0u: goto label_5106e0;
        case 0x5106e4u: goto label_5106e4;
        case 0x5106e8u: goto label_5106e8;
        case 0x5106ecu: goto label_5106ec;
        case 0x5106f0u: goto label_5106f0;
        case 0x5106f4u: goto label_5106f4;
        case 0x5106f8u: goto label_5106f8;
        case 0x5106fcu: goto label_5106fc;
        case 0x510700u: goto label_510700;
        case 0x510704u: goto label_510704;
        case 0x510708u: goto label_510708;
        case 0x51070cu: goto label_51070c;
        case 0x510710u: goto label_510710;
        case 0x510714u: goto label_510714;
        case 0x510718u: goto label_510718;
        case 0x51071cu: goto label_51071c;
        case 0x510720u: goto label_510720;
        case 0x510724u: goto label_510724;
        case 0x510728u: goto label_510728;
        case 0x51072cu: goto label_51072c;
        case 0x510730u: goto label_510730;
        case 0x510734u: goto label_510734;
        case 0x510738u: goto label_510738;
        case 0x51073cu: goto label_51073c;
        case 0x510740u: goto label_510740;
        case 0x510744u: goto label_510744;
        case 0x510748u: goto label_510748;
        case 0x51074cu: goto label_51074c;
        case 0x510750u: goto label_510750;
        case 0x510754u: goto label_510754;
        case 0x510758u: goto label_510758;
        case 0x51075cu: goto label_51075c;
        case 0x510760u: goto label_510760;
        case 0x510764u: goto label_510764;
        case 0x510768u: goto label_510768;
        case 0x51076cu: goto label_51076c;
        case 0x510770u: goto label_510770;
        case 0x510774u: goto label_510774;
        case 0x510778u: goto label_510778;
        case 0x51077cu: goto label_51077c;
        case 0x510780u: goto label_510780;
        case 0x510784u: goto label_510784;
        case 0x510788u: goto label_510788;
        case 0x51078cu: goto label_51078c;
        case 0x510790u: goto label_510790;
        case 0x510794u: goto label_510794;
        case 0x510798u: goto label_510798;
        case 0x51079cu: goto label_51079c;
        case 0x5107a0u: goto label_5107a0;
        case 0x5107a4u: goto label_5107a4;
        case 0x5107a8u: goto label_5107a8;
        case 0x5107acu: goto label_5107ac;
        case 0x5107b0u: goto label_5107b0;
        case 0x5107b4u: goto label_5107b4;
        case 0x5107b8u: goto label_5107b8;
        case 0x5107bcu: goto label_5107bc;
        case 0x5107c0u: goto label_5107c0;
        case 0x5107c4u: goto label_5107c4;
        case 0x5107c8u: goto label_5107c8;
        case 0x5107ccu: goto label_5107cc;
        case 0x5107d0u: goto label_5107d0;
        case 0x5107d4u: goto label_5107d4;
        case 0x5107d8u: goto label_5107d8;
        case 0x5107dcu: goto label_5107dc;
        case 0x5107e0u: goto label_5107e0;
        case 0x5107e4u: goto label_5107e4;
        case 0x5107e8u: goto label_5107e8;
        case 0x5107ecu: goto label_5107ec;
        case 0x5107f0u: goto label_5107f0;
        case 0x5107f4u: goto label_5107f4;
        case 0x5107f8u: goto label_5107f8;
        case 0x5107fcu: goto label_5107fc;
        case 0x510800u: goto label_510800;
        case 0x510804u: goto label_510804;
        case 0x510808u: goto label_510808;
        case 0x51080cu: goto label_51080c;
        case 0x510810u: goto label_510810;
        case 0x510814u: goto label_510814;
        case 0x510818u: goto label_510818;
        case 0x51081cu: goto label_51081c;
        case 0x510820u: goto label_510820;
        case 0x510824u: goto label_510824;
        case 0x510828u: goto label_510828;
        case 0x51082cu: goto label_51082c;
        case 0x510830u: goto label_510830;
        case 0x510834u: goto label_510834;
        case 0x510838u: goto label_510838;
        case 0x51083cu: goto label_51083c;
        case 0x510840u: goto label_510840;
        case 0x510844u: goto label_510844;
        case 0x510848u: goto label_510848;
        case 0x51084cu: goto label_51084c;
        case 0x510850u: goto label_510850;
        case 0x510854u: goto label_510854;
        case 0x510858u: goto label_510858;
        case 0x51085cu: goto label_51085c;
        case 0x510860u: goto label_510860;
        case 0x510864u: goto label_510864;
        case 0x510868u: goto label_510868;
        case 0x51086cu: goto label_51086c;
        case 0x510870u: goto label_510870;
        case 0x510874u: goto label_510874;
        case 0x510878u: goto label_510878;
        case 0x51087cu: goto label_51087c;
        case 0x510880u: goto label_510880;
        case 0x510884u: goto label_510884;
        case 0x510888u: goto label_510888;
        case 0x51088cu: goto label_51088c;
        case 0x510890u: goto label_510890;
        case 0x510894u: goto label_510894;
        case 0x510898u: goto label_510898;
        case 0x51089cu: goto label_51089c;
        case 0x5108a0u: goto label_5108a0;
        case 0x5108a4u: goto label_5108a4;
        case 0x5108a8u: goto label_5108a8;
        case 0x5108acu: goto label_5108ac;
        case 0x5108b0u: goto label_5108b0;
        case 0x5108b4u: goto label_5108b4;
        case 0x5108b8u: goto label_5108b8;
        case 0x5108bcu: goto label_5108bc;
        case 0x5108c0u: goto label_5108c0;
        case 0x5108c4u: goto label_5108c4;
        case 0x5108c8u: goto label_5108c8;
        case 0x5108ccu: goto label_5108cc;
        case 0x5108d0u: goto label_5108d0;
        case 0x5108d4u: goto label_5108d4;
        case 0x5108d8u: goto label_5108d8;
        case 0x5108dcu: goto label_5108dc;
        case 0x5108e0u: goto label_5108e0;
        case 0x5108e4u: goto label_5108e4;
        case 0x5108e8u: goto label_5108e8;
        case 0x5108ecu: goto label_5108ec;
        case 0x5108f0u: goto label_5108f0;
        case 0x5108f4u: goto label_5108f4;
        case 0x5108f8u: goto label_5108f8;
        case 0x5108fcu: goto label_5108fc;
        case 0x510900u: goto label_510900;
        case 0x510904u: goto label_510904;
        case 0x510908u: goto label_510908;
        case 0x51090cu: goto label_51090c;
        case 0x510910u: goto label_510910;
        case 0x510914u: goto label_510914;
        case 0x510918u: goto label_510918;
        case 0x51091cu: goto label_51091c;
        case 0x510920u: goto label_510920;
        case 0x510924u: goto label_510924;
        case 0x510928u: goto label_510928;
        case 0x51092cu: goto label_51092c;
        case 0x510930u: goto label_510930;
        case 0x510934u: goto label_510934;
        case 0x510938u: goto label_510938;
        case 0x51093cu: goto label_51093c;
        case 0x510940u: goto label_510940;
        case 0x510944u: goto label_510944;
        case 0x510948u: goto label_510948;
        case 0x51094cu: goto label_51094c;
        case 0x510950u: goto label_510950;
        case 0x510954u: goto label_510954;
        case 0x510958u: goto label_510958;
        case 0x51095cu: goto label_51095c;
        default: break;
    }

    ctx->pc = 0x510480u;

label_510480:
    // 0x510480: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x510480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_510484:
    // 0x510484: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x510484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_510488:
    // 0x510488: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x510488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_51048c:
    // 0x51048c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x51048cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_510490:
    // 0x510490: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x510490u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_510494:
    // 0x510494: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x510494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_510498:
    // 0x510498: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x510498u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_51049c:
    // 0x51049c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x51049cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_5104a0:
    // 0x5104a0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x5104a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_5104a4:
    // 0x5104a4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x5104a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_5104a8:
    // 0x5104a8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x5104a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_5104ac:
    // 0x5104ac: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x5104acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_5104b0:
    // 0x5104b0: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x5104b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_5104b4:
    // 0x5104b4: 0xc04f278  jal         func_13C9E0
label_5104b8:
    if (ctx->pc == 0x5104B8u) {
        ctx->pc = 0x5104B8u;
            // 0x5104b8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x5104BCu;
        goto label_5104bc;
    }
    ctx->pc = 0x5104B4u;
    SET_GPR_U32(ctx, 31, 0x5104BCu);
    ctx->pc = 0x5104B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5104B4u;
            // 0x5104b8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5104BCu; }
        if (ctx->pc != 0x5104BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5104BCu; }
        if (ctx->pc != 0x5104BCu) { return; }
    }
    ctx->pc = 0x5104BCu;
label_5104bc:
    // 0x5104bc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x5104bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_5104c0:
    // 0x5104c0: 0xc04ce80  jal         func_133A00
label_5104c4:
    if (ctx->pc == 0x5104C4u) {
        ctx->pc = 0x5104C4u;
            // 0x5104c4: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x5104C8u;
        goto label_5104c8;
    }
    ctx->pc = 0x5104C0u;
    SET_GPR_U32(ctx, 31, 0x5104C8u);
    ctx->pc = 0x5104C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5104C0u;
            // 0x5104c4: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5104C8u; }
        if (ctx->pc != 0x5104C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5104C8u; }
        if (ctx->pc != 0x5104C8u) { return; }
    }
    ctx->pc = 0x5104C8u;
label_5104c8:
    // 0x5104c8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x5104c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_5104cc:
    // 0x5104cc: 0xc04ccf4  jal         func_1333D0
label_5104d0:
    if (ctx->pc == 0x5104D0u) {
        ctx->pc = 0x5104D0u;
            // 0x5104d0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x5104D4u;
        goto label_5104d4;
    }
    ctx->pc = 0x5104CCu;
    SET_GPR_U32(ctx, 31, 0x5104D4u);
    ctx->pc = 0x5104D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5104CCu;
            // 0x5104d0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5104D4u; }
        if (ctx->pc != 0x5104D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5104D4u; }
        if (ctx->pc != 0x5104D4u) { return; }
    }
    ctx->pc = 0x5104D4u;
label_5104d4:
    // 0x5104d4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x5104d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5104d8:
    // 0x5104d8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x5104d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_5104dc:
    // 0x5104dc: 0xc04cca0  jal         func_133280
label_5104e0:
    if (ctx->pc == 0x5104E0u) {
        ctx->pc = 0x5104E0u;
            // 0x5104e0: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x5104E4u;
        goto label_5104e4;
    }
    ctx->pc = 0x5104DCu;
    SET_GPR_U32(ctx, 31, 0x5104E4u);
    ctx->pc = 0x5104E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5104DCu;
            // 0x5104e0: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5104E4u; }
        if (ctx->pc != 0x5104E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5104E4u; }
        if (ctx->pc != 0x5104E4u) { return; }
    }
    ctx->pc = 0x5104E4u;
label_5104e4:
    // 0x5104e4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x5104e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_5104e8:
    // 0x5104e8: 0xc04cc44  jal         func_133110
label_5104ec:
    if (ctx->pc == 0x5104ECu) {
        ctx->pc = 0x5104ECu;
            // 0x5104ec: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x5104F0u;
        goto label_5104f0;
    }
    ctx->pc = 0x5104E8u;
    SET_GPR_U32(ctx, 31, 0x5104F0u);
    ctx->pc = 0x5104ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5104E8u;
            // 0x5104ec: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5104F0u; }
        if (ctx->pc != 0x5104F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5104F0u; }
        if (ctx->pc != 0x5104F0u) { return; }
    }
    ctx->pc = 0x5104F0u;
label_5104f0:
    // 0x5104f0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x5104f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_5104f4:
    // 0x5104f4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x5104f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_5104f8:
    // 0x5104f8: 0xc04cc08  jal         func_133020
label_5104fc:
    if (ctx->pc == 0x5104FCu) {
        ctx->pc = 0x5104FCu;
            // 0x5104fc: 0x2484bcc0  addiu       $a0, $a0, -0x4340 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950080));
        ctx->pc = 0x510500u;
        goto label_510500;
    }
    ctx->pc = 0x5104F8u;
    SET_GPR_U32(ctx, 31, 0x510500u);
    ctx->pc = 0x5104FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5104F8u;
            // 0x5104fc: 0x2484bcc0  addiu       $a0, $a0, -0x4340 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510500u; }
        if (ctx->pc != 0x510500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510500u; }
        if (ctx->pc != 0x510500u) { return; }
    }
    ctx->pc = 0x510500u;
label_510500:
    // 0x510500: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x510500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_510504:
    // 0x510504: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x510504u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_510508:
    // 0x510508: 0xc04cc14  jal         func_133050
label_51050c:
    if (ctx->pc == 0x51050Cu) {
        ctx->pc = 0x51050Cu;
            // 0x51050c: 0x2484bcc0  addiu       $a0, $a0, -0x4340 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950080));
        ctx->pc = 0x510510u;
        goto label_510510;
    }
    ctx->pc = 0x510508u;
    SET_GPR_U32(ctx, 31, 0x510510u);
    ctx->pc = 0x51050Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510508u;
            // 0x51050c: 0x2484bcc0  addiu       $a0, $a0, -0x4340 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510510u; }
        if (ctx->pc != 0x510510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510510u; }
        if (ctx->pc != 0x510510u) { return; }
    }
    ctx->pc = 0x510510u;
label_510510:
    // 0x510510: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x510510u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_510514:
    // 0x510514: 0xc04cc14  jal         func_133050
label_510518:
    if (ctx->pc == 0x510518u) {
        ctx->pc = 0x510518u;
            // 0x510518: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x51051Cu;
        goto label_51051c;
    }
    ctx->pc = 0x510514u;
    SET_GPR_U32(ctx, 31, 0x51051Cu);
    ctx->pc = 0x510518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x510514u;
            // 0x510518: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51051Cu; }
        if (ctx->pc != 0x51051Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51051Cu; }
        if (ctx->pc != 0x51051Cu) { return; }
    }
    ctx->pc = 0x51051Cu;
label_51051c:
    // 0x51051c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x51051cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_510520:
    // 0x510520: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x510520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_510524:
    // 0x510524: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x510524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_510528:
    // 0x510528: 0x4600b043  div.s       $f1, $f22, $f0
    ctx->pc = 0x510528u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[1] = ctx->f[22] / ctx->f[0];
label_51052c:
    // 0x51052c: 0x0  nop
    ctx->pc = 0x51052cu;
    // NOP
label_510530:
    // 0x510530: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x510530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_510534:
    // 0x510534: 0x0  nop
    ctx->pc = 0x510534u;
    // NOP
label_510538:
    // 0x510538: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x510538u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_51053c:
    // 0x51053c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_510540:
    if (ctx->pc == 0x510540u) {
        ctx->pc = 0x510540u;
            // 0x510540: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x510544u;
        goto label_510544;
    }
    ctx->pc = 0x51053Cu;
    {
        const bool branch_taken_0x51053c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x51053c) {
            ctx->pc = 0x510540u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51053Cu;
            // 0x510540: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51054Cu;
            goto label_51054c;
        }
    }
    ctx->pc = 0x510544u;
label_510544:
    // 0x510544: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x510544u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_510548:
    // 0x510548: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x510548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_51054c:
    // 0x51054c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x51054cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_510550:
    // 0x510550: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x510550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_510554:
    // 0x510554: 0x0  nop
    ctx->pc = 0x510554u;
    // NOP
label_510558:
    // 0x510558: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x510558u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_51055c:
    // 0x51055c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_510560:
    if (ctx->pc == 0x510560u) {
        ctx->pc = 0x510560u;
            // 0x510560: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x510564u;
        goto label_510564;
    }
    ctx->pc = 0x51055Cu;
    {
        const bool branch_taken_0x51055c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x510560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51055Cu;
            // 0x510560: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51055c) {
            ctx->pc = 0x510568u;
            goto label_510568;
        }
    }
    ctx->pc = 0x510564u;
label_510564:
    // 0x510564: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x510564u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_510568:
    // 0x510568: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x510568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_51056c:
    // 0x51056c: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x51056cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_510570:
    // 0x510570: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x510570u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_510574:
    // 0x510574: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x510574u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_510578:
    // 0x510578: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x510578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_51057c:
    // 0x51057c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x51057cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_510580:
    // 0x510580: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x510580u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_510584:
    // 0x510584: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x510584u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_510588:
    // 0x510588: 0x0  nop
    ctx->pc = 0x510588u;
    // NOP
label_51058c:
    // 0x51058c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x51058cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_510590:
    // 0x510590: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x510590u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_510594:
    // 0x510594: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x510594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_510598:
    // 0x510598: 0x0  nop
    ctx->pc = 0x510598u;
    // NOP
label_51059c:
    // 0x51059c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x51059cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_5105a0:
    // 0x5105a0: 0xc0477fe  jal         func_11DFF8
label_5105a4:
    if (ctx->pc == 0x5105A4u) {
        ctx->pc = 0x5105A4u;
            // 0x5105a4: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x5105A8u;
        goto label_5105a8;
    }
    ctx->pc = 0x5105A0u;
    SET_GPR_U32(ctx, 31, 0x5105A8u);
    ctx->pc = 0x5105A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5105A0u;
            // 0x5105a4: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DFF8u;
    if (runtime->hasFunction(0x11DFF8u)) {
        auto targetFn = runtime->lookupFunction(0x11DFF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5105A8u; }
        if (ctx->pc != 0x5105A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DFF8_0x11dff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5105A8u; }
        if (ctx->pc != 0x5105A8u) { return; }
    }
    ctx->pc = 0x5105A8u;
label_5105a8:
    // 0x5105a8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x5105a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_5105ac:
    // 0x5105ac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x5105acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_5105b0:
    // 0x5105b0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x5105b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_5105b4:
    // 0x5105b4: 0x0  nop
    ctx->pc = 0x5105b4u;
    // NOP
label_5105b8:
    // 0x5105b8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x5105b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5105bc:
    // 0x5105bc: 0x4501002c  bc1t        . + 4 + (0x2C << 2)
label_5105c0:
    if (ctx->pc == 0x5105C0u) {
        ctx->pc = 0x5105C0u;
            // 0x5105c0: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x5105C4u;
        goto label_5105c4;
    }
    ctx->pc = 0x5105BCu;
    {
        const bool branch_taken_0x5105bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x5105C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5105BCu;
            // 0x5105c0: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x5105bc) {
            ctx->pc = 0x510670u;
            goto label_510670;
        }
    }
    ctx->pc = 0x5105C4u;
label_5105c4:
    // 0x5105c4: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x5105c4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_5105c8:
    // 0x5105c8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x5105c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_5105cc:
    // 0x5105cc: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x5105ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_5105d0:
    // 0x5105d0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x5105d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_5105d4:
    // 0x5105d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x5105d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_5105d8:
    // 0x5105d8: 0x0  nop
    ctx->pc = 0x5105d8u;
    // NOP
label_5105dc:
    // 0x5105dc: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x5105dcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[1];
label_5105e0:
    // 0x5105e0: 0x0  nop
    ctx->pc = 0x5105e0u;
    // NOP
label_5105e4:
    // 0x5105e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x5105e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_5105e8:
    // 0x5105e8: 0x0  nop
    ctx->pc = 0x5105e8u;
    // NOP
label_5105ec:
    // 0x5105ec: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x5105ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5105f0:
    // 0x5105f0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_5105f4:
    if (ctx->pc == 0x5105F4u) {
        ctx->pc = 0x5105F4u;
            // 0x5105f4: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->pc = 0x5105F8u;
        goto label_5105f8;
    }
    ctx->pc = 0x5105F0u;
    {
        const bool branch_taken_0x5105f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x5105f0) {
            ctx->pc = 0x5105F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5105F0u;
            // 0x5105f4: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x510608u;
            goto label_510608;
        }
    }
    ctx->pc = 0x5105F8u;
label_5105f8:
    // 0x5105f8: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5105f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_5105fc:
    // 0x5105fc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x5105fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_510600:
    // 0x510600: 0x10000006  b           . + 4 + (0x6 << 2)
label_510604:
    if (ctx->pc == 0x510604u) {
        ctx->pc = 0x510608u;
        goto label_510608;
    }
    ctx->pc = 0x510600u;
    {
        const bool branch_taken_0x510600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x510600) {
            ctx->pc = 0x51061Cu;
            goto label_51061c;
        }
    }
    ctx->pc = 0x510608u;
label_510608:
    // 0x510608: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x510608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_51060c:
    // 0x51060c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x51060cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_510610:
    // 0x510610: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x510610u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_510614:
    // 0x510614: 0x0  nop
    ctx->pc = 0x510614u;
    // NOP
label_510618:
    // 0x510618: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x510618u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_51061c:
    // 0x51061c: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_510620:
    if (ctx->pc == 0x510620u) {
        ctx->pc = 0x510620u;
            // 0x510620: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x510624u;
        goto label_510624;
    }
    ctx->pc = 0x51061Cu;
    {
        const bool branch_taken_0x51061c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x51061c) {
            ctx->pc = 0x510620u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51061Cu;
            // 0x510620: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x510630u;
            goto label_510630;
        }
    }
    ctx->pc = 0x510624u;
label_510624:
    // 0x510624: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x510624u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_510628:
    // 0x510628: 0x10000007  b           . + 4 + (0x7 << 2)
label_51062c:
    if (ctx->pc == 0x51062Cu) {
        ctx->pc = 0x51062Cu;
            // 0x51062c: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x510630u;
        goto label_510630;
    }
    ctx->pc = 0x510628u;
    {
        const bool branch_taken_0x510628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51062Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x510628u;
            // 0x51062c: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x510628) {
            ctx->pc = 0x510648u;
            goto label_510648;
        }
    }
    ctx->pc = 0x510630u;
label_510630:
    // 0x510630: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x510630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_510634:
    // 0x510634: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x510634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_510638:
    // 0x510638: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x510638u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_51063c:
    // 0x51063c: 0x0  nop
    ctx->pc = 0x51063cu;
    // NOP
label_510640:
    // 0x510640: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x510640u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_510644:
    // 0x510644: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x510644u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_510648:
    // 0x510648: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x510648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_51064c:
    // 0x51064c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x51064cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_510650:
    // 0x510650: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x510650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_510654:
    // 0x510654: 0x0  nop
    ctx->pc = 0x510654u;
    // NOP
label_510658:
    // 0x510658: 0x46020041  sub.s       $f1, $f0, $f2
    ctx->pc = 0x510658u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_51065c:
    // 0x51065c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x51065cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_510660:
    // 0x510660: 0x0  nop
    ctx->pc = 0x510660u;
    // NOP
label_510664:
    // 0x510664: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x510664u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_510668:
    // 0x510668: 0x1000004c  b           . + 4 + (0x4C << 2)
label_51066c:
    if (ctx->pc == 0x51066Cu) {
        ctx->pc = 0x51066Cu;
            // 0x51066c: 0x4603155d  msub.s      $f21, $f2, $f3 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
        ctx->pc = 0x510670u;
        goto label_510670;
    }
    ctx->pc = 0x510668u;
    {
        const bool branch_taken_0x510668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51066Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x510668u;
            // 0x51066c: 0x4603155d  msub.s      $f21, $f2, $f3 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x510668) {
            ctx->pc = 0x51079Cu;
            goto label_51079c;
        }
    }
    ctx->pc = 0x510670u;
label_510670:
    // 0x510670: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x510670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_510674:
    // 0x510674: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x510674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_510678:
    // 0x510678: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x510678u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_51067c:
    // 0x51067c: 0x0  nop
    ctx->pc = 0x51067cu;
    // NOP
label_510680:
    // 0x510680: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x510680u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_510684:
    // 0x510684: 0x45020046  bc1fl       . + 4 + (0x46 << 2)
label_510688:
    if (ctx->pc == 0x510688u) {
        ctx->pc = 0x510688u;
            // 0x510688: 0x4614ad42  mul.s       $f21, $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
        ctx->pc = 0x51068Cu;
        goto label_51068c;
    }
    ctx->pc = 0x510684u;
    {
        const bool branch_taken_0x510684 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x510684) {
            ctx->pc = 0x510688u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x510684u;
            // 0x510688: 0x4614ad42  mul.s       $f21, $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x5107A0u;
            goto label_5107a0;
        }
    }
    ctx->pc = 0x51068Cu;
label_51068c:
    // 0x51068c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x51068cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_510690:
    // 0x510690: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x510690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_510694:
    // 0x510694: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x510694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_510698:
    // 0x510698: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x510698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_51069c:
    // 0x51069c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x51069cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_5106a0:
    // 0x5106a0: 0x0  nop
    ctx->pc = 0x5106a0u;
    // NOP
label_5106a4:
    // 0x5106a4: 0x46011183  div.s       $f6, $f2, $f1
    ctx->pc = 0x5106a4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[6] = ctx->f[2] / ctx->f[1];
label_5106a8:
    // 0x5106a8: 0x0  nop
    ctx->pc = 0x5106a8u;
    // NOP
label_5106ac:
    // 0x5106ac: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x5106acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_5106b0:
    // 0x5106b0: 0x0  nop
    ctx->pc = 0x5106b0u;
    // NOP
label_5106b4:
    // 0x5106b4: 0x46013034  c.lt.s      $f6, $f1
    ctx->pc = 0x5106b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5106b8:
    // 0x5106b8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_5106bc:
    if (ctx->pc == 0x5106BCu) {
        ctx->pc = 0x5106C0u;
        goto label_5106c0;
    }
    ctx->pc = 0x5106B8u;
    {
        const bool branch_taken_0x5106b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x5106b8) {
            ctx->pc = 0x5106C4u;
            goto label_5106c4;
        }
    }
    ctx->pc = 0x5106C0u;
label_5106c0:
    // 0x5106c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x5106c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5106c4:
    // 0x5106c4: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_5106c8:
    if (ctx->pc == 0x5106C8u) {
        ctx->pc = 0x5106C8u;
            // 0x5106c8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x5106CCu;
        goto label_5106cc;
    }
    ctx->pc = 0x5106C4u;
    {
        const bool branch_taken_0x5106c4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x5106c4) {
            ctx->pc = 0x5106C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5106C4u;
            // 0x5106c8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5106D8u;
            goto label_5106d8;
        }
    }
    ctx->pc = 0x5106CCu;
label_5106cc:
    // 0x5106cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x5106ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_5106d0:
    // 0x5106d0: 0x10000007  b           . + 4 + (0x7 << 2)
label_5106d4:
    if (ctx->pc == 0x5106D4u) {
        ctx->pc = 0x5106D4u;
            // 0x5106d4: 0x46800960  cvt.s.w     $f5, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x5106D8u;
        goto label_5106d8;
    }
    ctx->pc = 0x5106D0u;
    {
        const bool branch_taken_0x5106d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5106D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5106D0u;
            // 0x5106d4: 0x46800960  cvt.s.w     $f5, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5106d0) {
            ctx->pc = 0x5106F0u;
            goto label_5106f0;
        }
    }
    ctx->pc = 0x5106D8u;
label_5106d8:
    // 0x5106d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x5106d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_5106dc:
    // 0x5106dc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5106dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_5106e0:
    // 0x5106e0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x5106e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_5106e4:
    // 0x5106e4: 0x0  nop
    ctx->pc = 0x5106e4u;
    // NOP
label_5106e8:
    // 0x5106e8: 0x46800960  cvt.s.w     $f5, $f1
    ctx->pc = 0x5106e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_5106ec:
    // 0x5106ec: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x5106ecu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
label_5106f0:
    // 0x5106f0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x5106f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_5106f4:
    // 0x5106f4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x5106f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_5106f8:
    // 0x5106f8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x5106f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_5106fc:
    // 0x5106fc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x5106fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_510700:
    // 0x510700: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x510700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_510704:
    // 0x510704: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x510704u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_510708:
    // 0x510708: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x510708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_51070c:
    // 0x51070c: 0x4605209d  msub.s      $f2, $f4, $f5
    ctx->pc = 0x51070cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[5]));
label_510710:
    // 0x510710: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x510710u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_510714:
    // 0x510714: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x510714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_510718:
    // 0x510718: 0x0  nop
    ctx->pc = 0x510718u;
    // NOP
label_51071c:
    // 0x51071c: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x51071cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_510720:
    // 0x510720: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_510724:
    if (ctx->pc == 0x510724u) {
        ctx->pc = 0x510724u;
            // 0x510724: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->pc = 0x510728u;
        goto label_510728;
    }
    ctx->pc = 0x510720u;
    {
        const bool branch_taken_0x510720 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x510720) {
            ctx->pc = 0x510724u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x510720u;
            // 0x510724: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x510738u;
            goto label_510738;
        }
    }
    ctx->pc = 0x510728u;
label_510728:
    // 0x510728: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x510728u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_51072c:
    // 0x51072c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x51072cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_510730:
    // 0x510730: 0x10000006  b           . + 4 + (0x6 << 2)
label_510734:
    if (ctx->pc == 0x510734u) {
        ctx->pc = 0x510738u;
        goto label_510738;
    }
    ctx->pc = 0x510730u;
    {
        const bool branch_taken_0x510730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x510730) {
            ctx->pc = 0x51074Cu;
            goto label_51074c;
        }
    }
    ctx->pc = 0x510738u;
label_510738:
    // 0x510738: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x510738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_51073c:
    // 0x51073c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x51073cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_510740:
    // 0x510740: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x510740u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_510744:
    // 0x510744: 0x0  nop
    ctx->pc = 0x510744u;
    // NOP
label_510748:
    // 0x510748: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x510748u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_51074c:
    // 0x51074c: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_510750:
    if (ctx->pc == 0x510750u) {
        ctx->pc = 0x510750u;
            // 0x510750: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x510754u;
        goto label_510754;
    }
    ctx->pc = 0x51074Cu;
    {
        const bool branch_taken_0x51074c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x51074c) {
            ctx->pc = 0x510750u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51074Cu;
            // 0x510750: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x510760u;
            goto label_510760;
        }
    }
    ctx->pc = 0x510754u;
label_510754:
    // 0x510754: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x510754u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_510758:
    // 0x510758: 0x10000007  b           . + 4 + (0x7 << 2)
label_51075c:
    if (ctx->pc == 0x51075Cu) {
        ctx->pc = 0x51075Cu;
            // 0x51075c: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x510760u;
        goto label_510760;
    }
    ctx->pc = 0x510758u;
    {
        const bool branch_taken_0x510758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51075Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x510758u;
            // 0x51075c: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x510758) {
            ctx->pc = 0x510778u;
            goto label_510778;
        }
    }
    ctx->pc = 0x510760u;
label_510760:
    // 0x510760: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x510760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_510764:
    // 0x510764: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x510764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_510768:
    // 0x510768: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x510768u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_51076c:
    // 0x51076c: 0x0  nop
    ctx->pc = 0x51076cu;
    // NOP
label_510770:
    // 0x510770: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x510770u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_510774:
    // 0x510774: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x510774u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_510778:
    // 0x510778: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x510778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_51077c:
    // 0x51077c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x51077cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_510780:
    // 0x510780: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x510780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_510784:
    // 0x510784: 0x0  nop
    ctx->pc = 0x510784u;
    // NOP
label_510788:
    // 0x510788: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x510788u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_51078c:
    // 0x51078c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x51078cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_510790:
    // 0x510790: 0x0  nop
    ctx->pc = 0x510790u;
    // NOP
label_510794:
    // 0x510794: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x510794u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_510798:
    // 0x510798: 0x4603155c  madd.s      $f21, $f2, $f3
    ctx->pc = 0x510798u;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_51079c:
    // 0x51079c: 0x4614ad42  mul.s       $f21, $f21, $f20
    ctx->pc = 0x51079cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
label_5107a0:
    // 0x5107a0: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x5107a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_5107a4:
    // 0x5107a4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x5107a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_5107a8:
    // 0x5107a8: 0x24a5bcc0  addiu       $a1, $a1, -0x4340
    ctx->pc = 0x5107a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950080));
label_5107ac:
    // 0x5107ac: 0xc04cbf0  jal         func_132FC0
label_5107b0:
    if (ctx->pc == 0x5107B0u) {
        ctx->pc = 0x5107B0u;
            // 0x5107b0: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x5107B4u;
        goto label_5107b4;
    }
    ctx->pc = 0x5107ACu;
    SET_GPR_U32(ctx, 31, 0x5107B4u);
    ctx->pc = 0x5107B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5107ACu;
            // 0x5107b0: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5107B4u; }
        if (ctx->pc != 0x5107B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5107B4u; }
        if (ctx->pc != 0x5107B4u) { return; }
    }
    ctx->pc = 0x5107B4u;
label_5107b4:
    // 0x5107b4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x5107b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_5107b8:
    // 0x5107b8: 0xc04cc44  jal         func_133110
label_5107bc:
    if (ctx->pc == 0x5107BCu) {
        ctx->pc = 0x5107BCu;
            // 0x5107bc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5107C0u;
        goto label_5107c0;
    }
    ctx->pc = 0x5107B8u;
    SET_GPR_U32(ctx, 31, 0x5107C0u);
    ctx->pc = 0x5107BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5107B8u;
            // 0x5107bc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5107C0u; }
        if (ctx->pc != 0x5107C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5107C0u; }
        if (ctx->pc != 0x5107C0u) { return; }
    }
    ctx->pc = 0x5107C0u;
label_5107c0:
    // 0x5107c0: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x5107c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_5107c4:
    // 0x5107c4: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x5107c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_5107c8:
    // 0x5107c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5107c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5107cc:
    // 0x5107cc: 0x0  nop
    ctx->pc = 0x5107ccu;
    // NOP
label_5107d0:
    // 0x5107d0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x5107d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_5107d4:
    // 0x5107d4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5107d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_5107d8:
    // 0x5107d8: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x5107d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_5107dc:
    // 0x5107dc: 0xc7ad0054  lwc1        $f13, 0x54($sp)
    ctx->pc = 0x5107dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_5107e0:
    // 0x5107e0: 0xc7ae0058  lwc1        $f14, 0x58($sp)
    ctx->pc = 0x5107e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_5107e4:
    // 0x5107e4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x5107e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_5107e8:
    // 0x5107e8: 0xc04c970  jal         func_1325C0
label_5107ec:
    if (ctx->pc == 0x5107ECu) {
        ctx->pc = 0x5107ECu;
            // 0x5107ec: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x5107F0u;
        goto label_5107f0;
    }
    ctx->pc = 0x5107E8u;
    SET_GPR_U32(ctx, 31, 0x5107F0u);
    ctx->pc = 0x5107ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5107E8u;
            // 0x5107ec: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5107F0u; }
        if (ctx->pc != 0x5107F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5107F0u; }
        if (ctx->pc != 0x5107F0u) { return; }
    }
    ctx->pc = 0x5107F0u;
label_5107f0:
    // 0x5107f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5107f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5107f4:
    // 0x5107f4: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x5107f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_5107f8:
    // 0x5107f8: 0xc04c72c  jal         func_131CB0
label_5107fc:
    if (ctx->pc == 0x5107FCu) {
        ctx->pc = 0x5107FCu;
            // 0x5107fc: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x510800u;
        goto label_510800;
    }
    ctx->pc = 0x5107F8u;
    SET_GPR_U32(ctx, 31, 0x510800u);
    ctx->pc = 0x5107FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5107F8u;
            // 0x5107fc: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510800u; }
        if (ctx->pc != 0x510800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510800u; }
        if (ctx->pc != 0x510800u) { return; }
    }
    ctx->pc = 0x510800u;
label_510800:
    // 0x510800: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x510800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_510804:
    // 0x510804: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x510804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_510808:
    // 0x510808: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x510808u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_51080c:
    // 0x51080c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x51080cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_510810:
    // 0x510810: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x510810u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_510814:
    // 0x510814: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x510814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_510818:
    // 0x510818: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x510818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_51081c:
    // 0x51081c: 0x3e00008  jr          $ra
label_510820:
    if (ctx->pc == 0x510820u) {
        ctx->pc = 0x510820u;
            // 0x510820: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x510824u;
        goto label_510824;
    }
    ctx->pc = 0x51081Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x510820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51081Cu;
            // 0x510820: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x510824u;
label_510824:
    // 0x510824: 0x0  nop
    ctx->pc = 0x510824u;
    // NOP
label_510828:
    // 0x510828: 0x0  nop
    ctx->pc = 0x510828u;
    // NOP
label_51082c:
    // 0x51082c: 0x0  nop
    ctx->pc = 0x51082cu;
    // NOP
label_510830:
    // 0x510830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x510830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_510834:
    // 0x510834: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x510834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_510838:
    // 0x510838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x510838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_51083c:
    // 0x51083c: 0xc0e393c  jal         func_38E4F0
label_510840:
    if (ctx->pc == 0x510840u) {
        ctx->pc = 0x510840u;
            // 0x510840: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x510844u;
        goto label_510844;
    }
    ctx->pc = 0x51083Cu;
    SET_GPR_U32(ctx, 31, 0x510844u);
    ctx->pc = 0x510840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51083Cu;
            // 0x510840: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510844u; }
        if (ctx->pc != 0x510844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x510844u; }
        if (ctx->pc != 0x510844u) { return; }
    }
    ctx->pc = 0x510844u;
label_510844:
    // 0x510844: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x510844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_510848:
    // 0x510848: 0x442000c  bltzl       $v0, . + 4 + (0xC << 2)
label_51084c:
    if (ctx->pc == 0x51084Cu) {
        ctx->pc = 0x51084Cu;
            // 0x51084c: 0xae000124  sw          $zero, 0x124($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 0));
        ctx->pc = 0x510850u;
        goto label_510850;
    }
    ctx->pc = 0x510848u;
    {
        const bool branch_taken_0x510848 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x510848) {
            ctx->pc = 0x51084Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x510848u;
            // 0x51084c: 0xae000124  sw          $zero, 0x124($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51087Cu;
            goto label_51087c;
        }
    }
    ctx->pc = 0x510850u;
label_510850:
    // 0x510850: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x510850u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_510854:
    // 0x510854: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x510854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_510858:
    // 0x510858: 0x24420e84  addiu       $v0, $v0, 0xE84
    ctx->pc = 0x510858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3716));
label_51085c:
    // 0x51085c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x51085cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_510860:
    // 0x510860: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x510860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_510864:
    // 0x510864: 0x8c440d60  lw          $a0, 0xD60($v0)
    ctx->pc = 0x510864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3424)));
label_510868:
    // 0x510868: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x510868u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_51086c:
    // 0x51086c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x51086cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_510870:
    // 0x510870: 0x320f809  jalr        $t9
label_510874:
    if (ctx->pc == 0x510874u) {
        ctx->pc = 0x510874u;
            // 0x510874: 0x8c4500b0  lw          $a1, 0xB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
        ctx->pc = 0x510878u;
        goto label_510878;
    }
    ctx->pc = 0x510870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x510878u);
        ctx->pc = 0x510874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x510870u;
            // 0x510874: 0x8c4500b0  lw          $a1, 0xB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x510878u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x510878u; }
            if (ctx->pc != 0x510878u) { return; }
        }
        }
    }
    ctx->pc = 0x510878u;
label_510878:
    // 0x510878: 0xae000124  sw          $zero, 0x124($s0)
    ctx->pc = 0x510878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 0));
label_51087c:
    // 0x51087c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51087cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_510880:
    // 0x510880: 0xae00013c  sw          $zero, 0x13C($s0)
    ctx->pc = 0x510880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 0));
label_510884:
    // 0x510884: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x510884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_510888:
    // 0x510888: 0xae000138  sw          $zero, 0x138($s0)
    ctx->pc = 0x510888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 0));
label_51088c:
    // 0x51088c: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x51088cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_510890:
    // 0x510890: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x510890u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
label_510894:
    // 0x510894: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x510894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_510898:
    // 0x510898: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x510898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_51089c:
    // 0x51089c: 0xc08bff0  jal         func_22FFC0
label_5108a0:
    if (ctx->pc == 0x5108A0u) {
        ctx->pc = 0x5108A0u;
            // 0x5108a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5108A4u;
        goto label_5108a4;
    }
    ctx->pc = 0x51089Cu;
    SET_GPR_U32(ctx, 31, 0x5108A4u);
    ctx->pc = 0x5108A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51089Cu;
            // 0x5108a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5108A4u; }
        if (ctx->pc != 0x5108A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5108A4u; }
        if (ctx->pc != 0x5108A4u) { return; }
    }
    ctx->pc = 0x5108A4u;
label_5108a4:
    // 0x5108a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x5108a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_5108a8:
    // 0x5108a8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5108a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5108ac:
    // 0x5108ac: 0xae030128  sw          $v1, 0x128($s0)
    ctx->pc = 0x5108acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
label_5108b0:
    // 0x5108b0: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x5108b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_5108b4:
    // 0x5108b4: 0xae03012c  sw          $v1, 0x12C($s0)
    ctx->pc = 0x5108b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 3));
label_5108b8:
    // 0x5108b8: 0x8c420cc8  lw          $v0, 0xCC8($v0)
    ctx->pc = 0x5108b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3272)));
label_5108bc:
    // 0x5108bc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x5108bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_5108c0:
    // 0x5108c0: 0x8e05011c  lw          $a1, 0x11C($s0)
    ctx->pc = 0x5108c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_5108c4:
    // 0x5108c4: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x5108c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_5108c8:
    // 0x5108c8: 0xaca20080  sw          $v0, 0x80($a1)
    ctx->pc = 0x5108c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 2));
label_5108cc:
    // 0x5108cc: 0xaca00084  sw          $zero, 0x84($a1)
    ctx->pc = 0x5108ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 0));
label_5108d0:
    // 0x5108d0: 0xaca40088  sw          $a0, 0x88($a1)
    ctx->pc = 0x5108d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 136), GPR_U32(ctx, 4));
label_5108d4:
    // 0x5108d4: 0xaca0008c  sw          $zero, 0x8C($a1)
    ctx->pc = 0x5108d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 140), GPR_U32(ctx, 0));
label_5108d8:
    // 0x5108d8: 0xaca30090  sw          $v1, 0x90($a1)
    ctx->pc = 0x5108d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 3));
label_5108dc:
    // 0x5108dc: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x5108dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_5108e0:
    // 0x5108e0: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x5108e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_5108e4:
    // 0x5108e4: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x5108e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_5108e8:
    // 0x5108e8: 0xa4620064  sh          $v0, 0x64($v1)
    ctx->pc = 0x5108e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
label_5108ec:
    // 0x5108ec: 0x8e04011c  lw          $a0, 0x11C($s0)
    ctx->pc = 0x5108ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_5108f0:
    // 0x5108f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5108f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5108f4:
    // 0x5108f4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x5108f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_5108f8:
    // 0x5108f8: 0x320f809  jalr        $t9
label_5108fc:
    if (ctx->pc == 0x5108FCu) {
        ctx->pc = 0x510900u;
        goto label_510900;
    }
    ctx->pc = 0x5108F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x510900u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x510900u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x510900u; }
            if (ctx->pc != 0x510900u) { return; }
        }
        }
    }
    ctx->pc = 0x510900u;
label_510900:
    // 0x510900: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x510900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_510904:
    // 0x510904: 0x8e050120  lw          $a1, 0x120($s0)
    ctx->pc = 0x510904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_510908:
    // 0x510908: 0x8c440cc8  lw          $a0, 0xCC8($v0)
    ctx->pc = 0x510908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3272)));
label_51090c:
    // 0x51090c: 0x260300d0  addiu       $v1, $s0, 0xD0
    ctx->pc = 0x51090cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_510910:
    // 0x510910: 0x8c840084  lw          $a0, 0x84($a0)
    ctx->pc = 0x510910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_510914:
    // 0x510914: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x510914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_510918:
    // 0x510918: 0xaca40080  sw          $a0, 0x80($a1)
    ctx->pc = 0x510918u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 4));
label_51091c:
    // 0x51091c: 0xaca00084  sw          $zero, 0x84($a1)
    ctx->pc = 0x51091cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 0));
label_510920:
    // 0x510920: 0xaca30088  sw          $v1, 0x88($a1)
    ctx->pc = 0x510920u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 136), GPR_U32(ctx, 3));
label_510924:
    // 0x510924: 0xaca0008c  sw          $zero, 0x8C($a1)
    ctx->pc = 0x510924u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 140), GPR_U32(ctx, 0));
label_510928:
    // 0x510928: 0xaca20090  sw          $v0, 0x90($a1)
    ctx->pc = 0x510928u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 2));
label_51092c:
    // 0x51092c: 0x8e030120  lw          $v1, 0x120($s0)
    ctx->pc = 0x51092cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_510930:
    // 0x510930: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x510930u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_510934:
    // 0x510934: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x510934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_510938:
    // 0x510938: 0xa4620064  sh          $v0, 0x64($v1)
    ctx->pc = 0x510938u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
label_51093c:
    // 0x51093c: 0x8e040120  lw          $a0, 0x120($s0)
    ctx->pc = 0x51093cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_510940:
    // 0x510940: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x510940u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_510944:
    // 0x510944: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x510944u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_510948:
    // 0x510948: 0x320f809  jalr        $t9
label_51094c:
    if (ctx->pc == 0x51094Cu) {
        ctx->pc = 0x510950u;
        goto label_510950;
    }
    ctx->pc = 0x510948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x510950u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x510950u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x510950u; }
            if (ctx->pc != 0x510950u) { return; }
        }
        }
    }
    ctx->pc = 0x510950u;
label_510950:
    // 0x510950: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x510950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_510954:
    // 0x510954: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x510954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_510958:
    // 0x510958: 0x3e00008  jr          $ra
label_51095c:
    if (ctx->pc == 0x51095Cu) {
        ctx->pc = 0x51095Cu;
            // 0x51095c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x510960u;
        goto label_fallthrough_0x510958;
    }
    ctx->pc = 0x510958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51095Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x510958u;
            // 0x51095c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x510958:
    ctx->pc = 0x510960u;
}
