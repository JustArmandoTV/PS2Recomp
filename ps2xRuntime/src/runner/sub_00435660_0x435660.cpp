#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00435660
// Address: 0x435660 - 0x435bb0
void sub_00435660_0x435660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00435660_0x435660");
#endif

    switch (ctx->pc) {
        case 0x435660u: goto label_435660;
        case 0x435664u: goto label_435664;
        case 0x435668u: goto label_435668;
        case 0x43566cu: goto label_43566c;
        case 0x435670u: goto label_435670;
        case 0x435674u: goto label_435674;
        case 0x435678u: goto label_435678;
        case 0x43567cu: goto label_43567c;
        case 0x435680u: goto label_435680;
        case 0x435684u: goto label_435684;
        case 0x435688u: goto label_435688;
        case 0x43568cu: goto label_43568c;
        case 0x435690u: goto label_435690;
        case 0x435694u: goto label_435694;
        case 0x435698u: goto label_435698;
        case 0x43569cu: goto label_43569c;
        case 0x4356a0u: goto label_4356a0;
        case 0x4356a4u: goto label_4356a4;
        case 0x4356a8u: goto label_4356a8;
        case 0x4356acu: goto label_4356ac;
        case 0x4356b0u: goto label_4356b0;
        case 0x4356b4u: goto label_4356b4;
        case 0x4356b8u: goto label_4356b8;
        case 0x4356bcu: goto label_4356bc;
        case 0x4356c0u: goto label_4356c0;
        case 0x4356c4u: goto label_4356c4;
        case 0x4356c8u: goto label_4356c8;
        case 0x4356ccu: goto label_4356cc;
        case 0x4356d0u: goto label_4356d0;
        case 0x4356d4u: goto label_4356d4;
        case 0x4356d8u: goto label_4356d8;
        case 0x4356dcu: goto label_4356dc;
        case 0x4356e0u: goto label_4356e0;
        case 0x4356e4u: goto label_4356e4;
        case 0x4356e8u: goto label_4356e8;
        case 0x4356ecu: goto label_4356ec;
        case 0x4356f0u: goto label_4356f0;
        case 0x4356f4u: goto label_4356f4;
        case 0x4356f8u: goto label_4356f8;
        case 0x4356fcu: goto label_4356fc;
        case 0x435700u: goto label_435700;
        case 0x435704u: goto label_435704;
        case 0x435708u: goto label_435708;
        case 0x43570cu: goto label_43570c;
        case 0x435710u: goto label_435710;
        case 0x435714u: goto label_435714;
        case 0x435718u: goto label_435718;
        case 0x43571cu: goto label_43571c;
        case 0x435720u: goto label_435720;
        case 0x435724u: goto label_435724;
        case 0x435728u: goto label_435728;
        case 0x43572cu: goto label_43572c;
        case 0x435730u: goto label_435730;
        case 0x435734u: goto label_435734;
        case 0x435738u: goto label_435738;
        case 0x43573cu: goto label_43573c;
        case 0x435740u: goto label_435740;
        case 0x435744u: goto label_435744;
        case 0x435748u: goto label_435748;
        case 0x43574cu: goto label_43574c;
        case 0x435750u: goto label_435750;
        case 0x435754u: goto label_435754;
        case 0x435758u: goto label_435758;
        case 0x43575cu: goto label_43575c;
        case 0x435760u: goto label_435760;
        case 0x435764u: goto label_435764;
        case 0x435768u: goto label_435768;
        case 0x43576cu: goto label_43576c;
        case 0x435770u: goto label_435770;
        case 0x435774u: goto label_435774;
        case 0x435778u: goto label_435778;
        case 0x43577cu: goto label_43577c;
        case 0x435780u: goto label_435780;
        case 0x435784u: goto label_435784;
        case 0x435788u: goto label_435788;
        case 0x43578cu: goto label_43578c;
        case 0x435790u: goto label_435790;
        case 0x435794u: goto label_435794;
        case 0x435798u: goto label_435798;
        case 0x43579cu: goto label_43579c;
        case 0x4357a0u: goto label_4357a0;
        case 0x4357a4u: goto label_4357a4;
        case 0x4357a8u: goto label_4357a8;
        case 0x4357acu: goto label_4357ac;
        case 0x4357b0u: goto label_4357b0;
        case 0x4357b4u: goto label_4357b4;
        case 0x4357b8u: goto label_4357b8;
        case 0x4357bcu: goto label_4357bc;
        case 0x4357c0u: goto label_4357c0;
        case 0x4357c4u: goto label_4357c4;
        case 0x4357c8u: goto label_4357c8;
        case 0x4357ccu: goto label_4357cc;
        case 0x4357d0u: goto label_4357d0;
        case 0x4357d4u: goto label_4357d4;
        case 0x4357d8u: goto label_4357d8;
        case 0x4357dcu: goto label_4357dc;
        case 0x4357e0u: goto label_4357e0;
        case 0x4357e4u: goto label_4357e4;
        case 0x4357e8u: goto label_4357e8;
        case 0x4357ecu: goto label_4357ec;
        case 0x4357f0u: goto label_4357f0;
        case 0x4357f4u: goto label_4357f4;
        case 0x4357f8u: goto label_4357f8;
        case 0x4357fcu: goto label_4357fc;
        case 0x435800u: goto label_435800;
        case 0x435804u: goto label_435804;
        case 0x435808u: goto label_435808;
        case 0x43580cu: goto label_43580c;
        case 0x435810u: goto label_435810;
        case 0x435814u: goto label_435814;
        case 0x435818u: goto label_435818;
        case 0x43581cu: goto label_43581c;
        case 0x435820u: goto label_435820;
        case 0x435824u: goto label_435824;
        case 0x435828u: goto label_435828;
        case 0x43582cu: goto label_43582c;
        case 0x435830u: goto label_435830;
        case 0x435834u: goto label_435834;
        case 0x435838u: goto label_435838;
        case 0x43583cu: goto label_43583c;
        case 0x435840u: goto label_435840;
        case 0x435844u: goto label_435844;
        case 0x435848u: goto label_435848;
        case 0x43584cu: goto label_43584c;
        case 0x435850u: goto label_435850;
        case 0x435854u: goto label_435854;
        case 0x435858u: goto label_435858;
        case 0x43585cu: goto label_43585c;
        case 0x435860u: goto label_435860;
        case 0x435864u: goto label_435864;
        case 0x435868u: goto label_435868;
        case 0x43586cu: goto label_43586c;
        case 0x435870u: goto label_435870;
        case 0x435874u: goto label_435874;
        case 0x435878u: goto label_435878;
        case 0x43587cu: goto label_43587c;
        case 0x435880u: goto label_435880;
        case 0x435884u: goto label_435884;
        case 0x435888u: goto label_435888;
        case 0x43588cu: goto label_43588c;
        case 0x435890u: goto label_435890;
        case 0x435894u: goto label_435894;
        case 0x435898u: goto label_435898;
        case 0x43589cu: goto label_43589c;
        case 0x4358a0u: goto label_4358a0;
        case 0x4358a4u: goto label_4358a4;
        case 0x4358a8u: goto label_4358a8;
        case 0x4358acu: goto label_4358ac;
        case 0x4358b0u: goto label_4358b0;
        case 0x4358b4u: goto label_4358b4;
        case 0x4358b8u: goto label_4358b8;
        case 0x4358bcu: goto label_4358bc;
        case 0x4358c0u: goto label_4358c0;
        case 0x4358c4u: goto label_4358c4;
        case 0x4358c8u: goto label_4358c8;
        case 0x4358ccu: goto label_4358cc;
        case 0x4358d0u: goto label_4358d0;
        case 0x4358d4u: goto label_4358d4;
        case 0x4358d8u: goto label_4358d8;
        case 0x4358dcu: goto label_4358dc;
        case 0x4358e0u: goto label_4358e0;
        case 0x4358e4u: goto label_4358e4;
        case 0x4358e8u: goto label_4358e8;
        case 0x4358ecu: goto label_4358ec;
        case 0x4358f0u: goto label_4358f0;
        case 0x4358f4u: goto label_4358f4;
        case 0x4358f8u: goto label_4358f8;
        case 0x4358fcu: goto label_4358fc;
        case 0x435900u: goto label_435900;
        case 0x435904u: goto label_435904;
        case 0x435908u: goto label_435908;
        case 0x43590cu: goto label_43590c;
        case 0x435910u: goto label_435910;
        case 0x435914u: goto label_435914;
        case 0x435918u: goto label_435918;
        case 0x43591cu: goto label_43591c;
        case 0x435920u: goto label_435920;
        case 0x435924u: goto label_435924;
        case 0x435928u: goto label_435928;
        case 0x43592cu: goto label_43592c;
        case 0x435930u: goto label_435930;
        case 0x435934u: goto label_435934;
        case 0x435938u: goto label_435938;
        case 0x43593cu: goto label_43593c;
        case 0x435940u: goto label_435940;
        case 0x435944u: goto label_435944;
        case 0x435948u: goto label_435948;
        case 0x43594cu: goto label_43594c;
        case 0x435950u: goto label_435950;
        case 0x435954u: goto label_435954;
        case 0x435958u: goto label_435958;
        case 0x43595cu: goto label_43595c;
        case 0x435960u: goto label_435960;
        case 0x435964u: goto label_435964;
        case 0x435968u: goto label_435968;
        case 0x43596cu: goto label_43596c;
        case 0x435970u: goto label_435970;
        case 0x435974u: goto label_435974;
        case 0x435978u: goto label_435978;
        case 0x43597cu: goto label_43597c;
        case 0x435980u: goto label_435980;
        case 0x435984u: goto label_435984;
        case 0x435988u: goto label_435988;
        case 0x43598cu: goto label_43598c;
        case 0x435990u: goto label_435990;
        case 0x435994u: goto label_435994;
        case 0x435998u: goto label_435998;
        case 0x43599cu: goto label_43599c;
        case 0x4359a0u: goto label_4359a0;
        case 0x4359a4u: goto label_4359a4;
        case 0x4359a8u: goto label_4359a8;
        case 0x4359acu: goto label_4359ac;
        case 0x4359b0u: goto label_4359b0;
        case 0x4359b4u: goto label_4359b4;
        case 0x4359b8u: goto label_4359b8;
        case 0x4359bcu: goto label_4359bc;
        case 0x4359c0u: goto label_4359c0;
        case 0x4359c4u: goto label_4359c4;
        case 0x4359c8u: goto label_4359c8;
        case 0x4359ccu: goto label_4359cc;
        case 0x4359d0u: goto label_4359d0;
        case 0x4359d4u: goto label_4359d4;
        case 0x4359d8u: goto label_4359d8;
        case 0x4359dcu: goto label_4359dc;
        case 0x4359e0u: goto label_4359e0;
        case 0x4359e4u: goto label_4359e4;
        case 0x4359e8u: goto label_4359e8;
        case 0x4359ecu: goto label_4359ec;
        case 0x4359f0u: goto label_4359f0;
        case 0x4359f4u: goto label_4359f4;
        case 0x4359f8u: goto label_4359f8;
        case 0x4359fcu: goto label_4359fc;
        case 0x435a00u: goto label_435a00;
        case 0x435a04u: goto label_435a04;
        case 0x435a08u: goto label_435a08;
        case 0x435a0cu: goto label_435a0c;
        case 0x435a10u: goto label_435a10;
        case 0x435a14u: goto label_435a14;
        case 0x435a18u: goto label_435a18;
        case 0x435a1cu: goto label_435a1c;
        case 0x435a20u: goto label_435a20;
        case 0x435a24u: goto label_435a24;
        case 0x435a28u: goto label_435a28;
        case 0x435a2cu: goto label_435a2c;
        case 0x435a30u: goto label_435a30;
        case 0x435a34u: goto label_435a34;
        case 0x435a38u: goto label_435a38;
        case 0x435a3cu: goto label_435a3c;
        case 0x435a40u: goto label_435a40;
        case 0x435a44u: goto label_435a44;
        case 0x435a48u: goto label_435a48;
        case 0x435a4cu: goto label_435a4c;
        case 0x435a50u: goto label_435a50;
        case 0x435a54u: goto label_435a54;
        case 0x435a58u: goto label_435a58;
        case 0x435a5cu: goto label_435a5c;
        case 0x435a60u: goto label_435a60;
        case 0x435a64u: goto label_435a64;
        case 0x435a68u: goto label_435a68;
        case 0x435a6cu: goto label_435a6c;
        case 0x435a70u: goto label_435a70;
        case 0x435a74u: goto label_435a74;
        case 0x435a78u: goto label_435a78;
        case 0x435a7cu: goto label_435a7c;
        case 0x435a80u: goto label_435a80;
        case 0x435a84u: goto label_435a84;
        case 0x435a88u: goto label_435a88;
        case 0x435a8cu: goto label_435a8c;
        case 0x435a90u: goto label_435a90;
        case 0x435a94u: goto label_435a94;
        case 0x435a98u: goto label_435a98;
        case 0x435a9cu: goto label_435a9c;
        case 0x435aa0u: goto label_435aa0;
        case 0x435aa4u: goto label_435aa4;
        case 0x435aa8u: goto label_435aa8;
        case 0x435aacu: goto label_435aac;
        case 0x435ab0u: goto label_435ab0;
        case 0x435ab4u: goto label_435ab4;
        case 0x435ab8u: goto label_435ab8;
        case 0x435abcu: goto label_435abc;
        case 0x435ac0u: goto label_435ac0;
        case 0x435ac4u: goto label_435ac4;
        case 0x435ac8u: goto label_435ac8;
        case 0x435accu: goto label_435acc;
        case 0x435ad0u: goto label_435ad0;
        case 0x435ad4u: goto label_435ad4;
        case 0x435ad8u: goto label_435ad8;
        case 0x435adcu: goto label_435adc;
        case 0x435ae0u: goto label_435ae0;
        case 0x435ae4u: goto label_435ae4;
        case 0x435ae8u: goto label_435ae8;
        case 0x435aecu: goto label_435aec;
        case 0x435af0u: goto label_435af0;
        case 0x435af4u: goto label_435af4;
        case 0x435af8u: goto label_435af8;
        case 0x435afcu: goto label_435afc;
        case 0x435b00u: goto label_435b00;
        case 0x435b04u: goto label_435b04;
        case 0x435b08u: goto label_435b08;
        case 0x435b0cu: goto label_435b0c;
        case 0x435b10u: goto label_435b10;
        case 0x435b14u: goto label_435b14;
        case 0x435b18u: goto label_435b18;
        case 0x435b1cu: goto label_435b1c;
        case 0x435b20u: goto label_435b20;
        case 0x435b24u: goto label_435b24;
        case 0x435b28u: goto label_435b28;
        case 0x435b2cu: goto label_435b2c;
        case 0x435b30u: goto label_435b30;
        case 0x435b34u: goto label_435b34;
        case 0x435b38u: goto label_435b38;
        case 0x435b3cu: goto label_435b3c;
        case 0x435b40u: goto label_435b40;
        case 0x435b44u: goto label_435b44;
        case 0x435b48u: goto label_435b48;
        case 0x435b4cu: goto label_435b4c;
        case 0x435b50u: goto label_435b50;
        case 0x435b54u: goto label_435b54;
        case 0x435b58u: goto label_435b58;
        case 0x435b5cu: goto label_435b5c;
        case 0x435b60u: goto label_435b60;
        case 0x435b64u: goto label_435b64;
        case 0x435b68u: goto label_435b68;
        case 0x435b6cu: goto label_435b6c;
        case 0x435b70u: goto label_435b70;
        case 0x435b74u: goto label_435b74;
        case 0x435b78u: goto label_435b78;
        case 0x435b7cu: goto label_435b7c;
        case 0x435b80u: goto label_435b80;
        case 0x435b84u: goto label_435b84;
        case 0x435b88u: goto label_435b88;
        case 0x435b8cu: goto label_435b8c;
        case 0x435b90u: goto label_435b90;
        case 0x435b94u: goto label_435b94;
        case 0x435b98u: goto label_435b98;
        case 0x435b9cu: goto label_435b9c;
        case 0x435ba0u: goto label_435ba0;
        case 0x435ba4u: goto label_435ba4;
        case 0x435ba8u: goto label_435ba8;
        case 0x435bacu: goto label_435bac;
        default: break;
    }

    ctx->pc = 0x435660u;

label_435660:
    // 0x435660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x435660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_435664:
    // 0x435664: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x435664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_435668:
    // 0x435668: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x435668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_43566c:
    // 0x43566c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43566cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_435670:
    // 0x435670: 0x90830094  lbu         $v1, 0x94($a0)
    ctx->pc = 0x435670u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 148)));
label_435674:
    // 0x435674: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_435678:
    if (ctx->pc == 0x435678u) {
        ctx->pc = 0x435678u;
            // 0x435678: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43567Cu;
        goto label_43567c;
    }
    ctx->pc = 0x435674u;
    {
        const bool branch_taken_0x435674 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x435678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x435674u;
            // 0x435678: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435674) {
            ctx->pc = 0x435690u;
            goto label_435690;
        }
    }
    ctx->pc = 0x43567Cu;
label_43567c:
    // 0x43567c: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x43567cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_435680:
    // 0x435680: 0xc074f30  jal         func_1D3CC0
label_435684:
    if (ctx->pc == 0x435684u) {
        ctx->pc = 0x435684u;
            // 0x435684: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x435688u;
        goto label_435688;
    }
    ctx->pc = 0x435680u;
    SET_GPR_U32(ctx, 31, 0x435688u);
    ctx->pc = 0x435684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435680u;
            // 0x435684: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435688u; }
        if (ctx->pc != 0x435688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435688u; }
        if (ctx->pc != 0x435688u) { return; }
    }
    ctx->pc = 0x435688u;
label_435688:
    // 0x435688: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x435688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43568c:
    // 0x43568c: 0xa2030094  sb          $v1, 0x94($s0)
    ctx->pc = 0x43568cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 148), (uint8_t)GPR_U32(ctx, 3));
label_435690:
    // 0x435690: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x435690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_435694:
    // 0x435694: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x435694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_435698:
    // 0x435698: 0x3e00008  jr          $ra
label_43569c:
    if (ctx->pc == 0x43569Cu) {
        ctx->pc = 0x43569Cu;
            // 0x43569c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4356A0u;
        goto label_4356a0;
    }
    ctx->pc = 0x435698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43569Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x435698u;
            // 0x43569c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4356A0u;
label_4356a0:
    // 0x4356a0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x4356a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_4356a4:
    // 0x4356a4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4356a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4356a8:
    // 0x4356a8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4356a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_4356ac:
    // 0x4356ac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4356acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4356b0:
    // 0x4356b0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4356b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4356b4:
    // 0x4356b4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4356b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4356b8:
    // 0x4356b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4356b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4356bc:
    // 0x4356bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4356bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4356c0:
    // 0x4356c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4356c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4356c4:
    // 0x4356c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4356c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4356c8:
    // 0x4356c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4356c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4356cc:
    // 0x4356cc: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x4356ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4356d0:
    // 0x4356d0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4356d0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4356d4:
    // 0x4356d4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4356d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4356d8:
    // 0x4356d8: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_4356dc:
    if (ctx->pc == 0x4356DCu) {
        ctx->pc = 0x4356DCu;
            // 0x4356dc: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4356E0u;
        goto label_4356e0;
    }
    ctx->pc = 0x4356D8u;
    {
        const bool branch_taken_0x4356d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4356DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4356D8u;
            // 0x4356dc: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4356d8) {
            ctx->pc = 0x43571Cu;
            goto label_43571c;
        }
    }
    ctx->pc = 0x4356E0u;
label_4356e0:
    // 0x4356e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4356e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4356e4:
    // 0x4356e4: 0x10a3005c  beq         $a1, $v1, . + 4 + (0x5C << 2)
label_4356e8:
    if (ctx->pc == 0x4356E8u) {
        ctx->pc = 0x4356ECu;
        goto label_4356ec;
    }
    ctx->pc = 0x4356E4u;
    {
        const bool branch_taken_0x4356e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4356e4) {
            ctx->pc = 0x435858u;
            goto label_435858;
        }
    }
    ctx->pc = 0x4356ECu;
label_4356ec:
    // 0x4356ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4356ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4356f0:
    // 0x4356f0: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_4356f4:
    if (ctx->pc == 0x4356F4u) {
        ctx->pc = 0x4356F4u;
            // 0x4356f4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4356F8u;
        goto label_4356f8;
    }
    ctx->pc = 0x4356F0u;
    {
        const bool branch_taken_0x4356f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4356f0) {
            ctx->pc = 0x4356F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4356F0u;
            // 0x4356f4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x435700u;
            goto label_435700;
        }
    }
    ctx->pc = 0x4356F8u;
label_4356f8:
    // 0x4356f8: 0x10000057  b           . + 4 + (0x57 << 2)
label_4356fc:
    if (ctx->pc == 0x4356FCu) {
        ctx->pc = 0x435700u;
        goto label_435700;
    }
    ctx->pc = 0x4356F8u;
    {
        const bool branch_taken_0x4356f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4356f8) {
            ctx->pc = 0x435858u;
            goto label_435858;
        }
    }
    ctx->pc = 0x435700u;
label_435700:
    // 0x435700: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x435700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_435704:
    // 0x435704: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x435704u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_435708:
    // 0x435708: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x435708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_43570c:
    // 0x43570c: 0x320f809  jalr        $t9
label_435710:
    if (ctx->pc == 0x435710u) {
        ctx->pc = 0x435710u;
            // 0x435710: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x435714u;
        goto label_435714;
    }
    ctx->pc = 0x43570Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x435714u);
        ctx->pc = 0x435710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43570Cu;
            // 0x435710: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x435714u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x435714u; }
            if (ctx->pc != 0x435714u) { return; }
        }
        }
    }
    ctx->pc = 0x435714u;
label_435714:
    // 0x435714: 0x10000050  b           . + 4 + (0x50 << 2)
label_435718:
    if (ctx->pc == 0x435718u) {
        ctx->pc = 0x43571Cu;
        goto label_43571c;
    }
    ctx->pc = 0x435714u;
    {
        const bool branch_taken_0x435714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x435714) {
            ctx->pc = 0x435858u;
            goto label_435858;
        }
    }
    ctx->pc = 0x43571Cu;
label_43571c:
    // 0x43571c: 0x8eb00070  lw          $s0, 0x70($s5)
    ctx->pc = 0x43571cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_435720:
    // 0x435720: 0x1200004d  beqz        $s0, . + 4 + (0x4D << 2)
label_435724:
    if (ctx->pc == 0x435724u) {
        ctx->pc = 0x435728u;
        goto label_435728;
    }
    ctx->pc = 0x435720u;
    {
        const bool branch_taken_0x435720 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x435720) {
            ctx->pc = 0x435858u;
            goto label_435858;
        }
    }
    ctx->pc = 0x435728u;
label_435728:
    // 0x435728: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x435728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43572c:
    // 0x43572c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x43572cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_435730:
    // 0x435730: 0x8c74e378  lw          $s4, -0x1C88($v1)
    ctx->pc = 0x435730u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_435734:
    // 0x435734: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x435734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_435738:
    // 0x435738: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x435738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_43573c:
    // 0x43573c: 0x8c64d120  lw          $a0, -0x2EE0($v1)
    ctx->pc = 0x43573cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_435740:
    // 0x435740: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x435740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_435744:
    // 0x435744: 0x8ca50130  lw          $a1, 0x130($a1)
    ctx->pc = 0x435744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_435748:
    // 0x435748: 0x8c57e370  lw          $s7, -0x1C90($v0)
    ctx->pc = 0x435748u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_43574c:
    // 0x43574c: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x43574cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_435750:
    // 0x435750: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x435750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_435754:
    // 0x435754: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x435754u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_435758:
    // 0x435758: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x435758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43575c:
    // 0x43575c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x43575cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_435760:
    // 0x435760: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x435760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_435764:
    // 0x435764: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x435764u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_435768:
    // 0x435768: 0x24960010  addiu       $s6, $a0, 0x10
    ctx->pc = 0x435768u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_43576c:
    // 0x43576c: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x43576cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_435770:
    // 0x435770: 0x8ea40088  lw          $a0, 0x88($s5)
    ctx->pc = 0x435770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
label_435774:
    // 0x435774: 0xc04e738  jal         func_139CE0
label_435778:
    if (ctx->pc == 0x435778u) {
        ctx->pc = 0x435778u;
            // 0x435778: 0x26b30084  addiu       $s3, $s5, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
        ctx->pc = 0x43577Cu;
        goto label_43577c;
    }
    ctx->pc = 0x435774u;
    SET_GPR_U32(ctx, 31, 0x43577Cu);
    ctx->pc = 0x435778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435774u;
            // 0x435778: 0x26b30084  addiu       $s3, $s5, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43577Cu; }
        if (ctx->pc != 0x43577Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43577Cu; }
        if (ctx->pc != 0x43577Cu) { return; }
    }
    ctx->pc = 0x43577Cu;
label_43577c:
    // 0x43577c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x43577cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_435780:
    // 0x435780: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x435780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_435784:
    // 0x435784: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x435784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_435788:
    // 0x435788: 0xc04e4a4  jal         func_139290
label_43578c:
    if (ctx->pc == 0x43578Cu) {
        ctx->pc = 0x43578Cu;
            // 0x43578c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x435790u;
        goto label_435790;
    }
    ctx->pc = 0x435788u;
    SET_GPR_U32(ctx, 31, 0x435790u);
    ctx->pc = 0x43578Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435788u;
            // 0x43578c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435790u; }
        if (ctx->pc != 0x435790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435790u; }
        if (ctx->pc != 0x435790u) { return; }
    }
    ctx->pc = 0x435790u;
label_435790:
    // 0x435790: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x435790u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_435794:
    // 0x435794: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x435794u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_435798:
    // 0x435798: 0x8ea30074  lw          $v1, 0x74($s5)
    ctx->pc = 0x435798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_43579c:
    // 0x43579c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x43579cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4357a0:
    // 0x4357a0: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4357a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4357a4:
    // 0x4357a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4357a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4357a8:
    // 0x4357a8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x4357a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4357ac:
    // 0x4357ac: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x4357acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4357b0:
    // 0x4357b0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x4357b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_4357b4:
    // 0x4357b4: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x4357b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4357b8:
    // 0x4357b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4357b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4357bc:
    // 0x4357bc: 0x8c4a0130  lw          $t2, 0x130($v0)
    ctx->pc = 0x4357bcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_4357c0:
    // 0x4357c0: 0xc10d990  jal         func_436640
label_4357c4:
    if (ctx->pc == 0x4357C4u) {
        ctx->pc = 0x4357C4u;
            // 0x4357c4: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4357C8u;
        goto label_4357c8;
    }
    ctx->pc = 0x4357C0u;
    SET_GPR_U32(ctx, 31, 0x4357C8u);
    ctx->pc = 0x4357C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4357C0u;
            // 0x4357c4: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x436640u;
    if (runtime->hasFunction(0x436640u)) {
        auto targetFn = runtime->lookupFunction(0x436640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4357C8u; }
        if (ctx->pc != 0x4357C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00436640_0x436640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4357C8u; }
        if (ctx->pc != 0x4357C8u) { return; }
    }
    ctx->pc = 0x4357C8u;
label_4357c8:
    // 0x4357c8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4357c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4357cc:
    // 0x4357cc: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4357ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4357d0:
    // 0x4357d0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_4357d4:
    if (ctx->pc == 0x4357D4u) {
        ctx->pc = 0x4357D4u;
            // 0x4357d4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4357D8u;
        goto label_4357d8;
    }
    ctx->pc = 0x4357D0u;
    {
        const bool branch_taken_0x4357d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4357D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4357D0u;
            // 0x4357d4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4357d0) {
            ctx->pc = 0x435798u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_435798;
        }
    }
    ctx->pc = 0x4357D8u;
label_4357d8:
    // 0x4357d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4357d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4357dc:
    // 0x4357dc: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x4357dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_4357e0:
    // 0x4357e0: 0x19200008  blez        $t1, . + 4 + (0x8 << 2)
label_4357e4:
    if (ctx->pc == 0x4357E4u) {
        ctx->pc = 0x4357E4u;
            // 0x4357e4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x4357E8u;
        goto label_4357e8;
    }
    ctx->pc = 0x4357E0u;
    {
        const bool branch_taken_0x4357e0 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x4357E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4357E0u;
            // 0x4357e4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4357e0) {
            ctx->pc = 0x435804u;
            goto label_435804;
        }
    }
    ctx->pc = 0x4357E8u;
label_4357e8:
    // 0x4357e8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4357e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4357ec:
    // 0x4357ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4357ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4357f0:
    // 0x4357f0: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x4357f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4357f4:
    // 0x4357f4: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4357f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4357f8:
    // 0x4357f8: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x4357f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_4357fc:
    // 0x4357fc: 0xc055990  jal         func_156640
label_435800:
    if (ctx->pc == 0x435800u) {
        ctx->pc = 0x435800u;
            // 0x435800: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x435804u;
        goto label_435804;
    }
    ctx->pc = 0x4357FCu;
    SET_GPR_U32(ctx, 31, 0x435804u);
    ctx->pc = 0x435800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4357FCu;
            // 0x435800: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156640u;
    if (runtime->hasFunction(0x156640u)) {
        auto targetFn = runtime->lookupFunction(0x156640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435804u; }
        if (ctx->pc != 0x435804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156640_0x156640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435804u; }
        if (ctx->pc != 0x435804u) { return; }
    }
    ctx->pc = 0x435804u;
label_435804:
    // 0x435804: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x435804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_435808:
    // 0x435808: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x435808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_43580c:
    // 0x43580c: 0xac40e3d8  sw          $zero, -0x1C28($v0)
    ctx->pc = 0x43580cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960088), GPR_U32(ctx, 0));
label_435810:
    // 0x435810: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x435810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_435814:
    // 0x435814: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x435814u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_435818:
    // 0x435818: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x435818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_43581c:
    // 0x43581c: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x43581cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_435820:
    // 0x435820: 0xc04e4a4  jal         func_139290
label_435824:
    if (ctx->pc == 0x435824u) {
        ctx->pc = 0x435824u;
            // 0x435824: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x435828u;
        goto label_435828;
    }
    ctx->pc = 0x435820u;
    SET_GPR_U32(ctx, 31, 0x435828u);
    ctx->pc = 0x435824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435820u;
            // 0x435824: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435828u; }
        if (ctx->pc != 0x435828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435828u; }
        if (ctx->pc != 0x435828u) { return; }
    }
    ctx->pc = 0x435828u;
label_435828:
    // 0x435828: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x435828u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43582c:
    // 0x43582c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x43582cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_435830:
    // 0x435830: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x435830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_435834:
    // 0x435834: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x435834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_435838:
    // 0x435838: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x435838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_43583c:
    // 0x43583c: 0xc10d88c  jal         func_436230
label_435840:
    if (ctx->pc == 0x435840u) {
        ctx->pc = 0x435840u;
            // 0x435840: 0x26a50090  addiu       $a1, $s5, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
        ctx->pc = 0x435844u;
        goto label_435844;
    }
    ctx->pc = 0x43583Cu;
    SET_GPR_U32(ctx, 31, 0x435844u);
    ctx->pc = 0x435840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43583Cu;
            // 0x435840: 0x26a50090  addiu       $a1, $s5, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x436230u;
    if (runtime->hasFunction(0x436230u)) {
        auto targetFn = runtime->lookupFunction(0x436230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435844u; }
        if (ctx->pc != 0x435844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00436230_0x436230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435844u; }
        if (ctx->pc != 0x435844u) { return; }
    }
    ctx->pc = 0x435844u;
label_435844:
    // 0x435844: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x435844u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_435848:
    // 0x435848: 0x230182b  sltu        $v1, $s1, $s0
    ctx->pc = 0x435848u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_43584c:
    // 0x43584c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_435850:
    if (ctx->pc == 0x435850u) {
        ctx->pc = 0x435850u;
            // 0x435850: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x435854u;
        goto label_435854;
    }
    ctx->pc = 0x43584Cu;
    {
        const bool branch_taken_0x43584c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x435850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43584Cu;
            // 0x435850: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43584c) {
            ctx->pc = 0x435830u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_435830;
        }
    }
    ctx->pc = 0x435854u;
label_435854:
    // 0x435854: 0x0  nop
    ctx->pc = 0x435854u;
    // NOP
label_435858:
    // 0x435858: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x435858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_43585c:
    // 0x43585c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x43585cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_435860:
    // 0x435860: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x435860u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_435864:
    // 0x435864: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x435864u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_435868:
    // 0x435868: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x435868u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_43586c:
    // 0x43586c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x43586cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_435870:
    // 0x435870: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x435870u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_435874:
    // 0x435874: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x435874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_435878:
    // 0x435878: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x435878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43587c:
    // 0x43587c: 0x3e00008  jr          $ra
label_435880:
    if (ctx->pc == 0x435880u) {
        ctx->pc = 0x435880u;
            // 0x435880: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x435884u;
        goto label_435884;
    }
    ctx->pc = 0x43587Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43587Cu;
            // 0x435880: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x435884u;
label_435884:
    // 0x435884: 0x0  nop
    ctx->pc = 0x435884u;
    // NOP
label_435888:
    // 0x435888: 0x0  nop
    ctx->pc = 0x435888u;
    // NOP
label_43588c:
    // 0x43588c: 0x0  nop
    ctx->pc = 0x43588cu;
    // NOP
label_435890:
    // 0x435890: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x435890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_435894:
    // 0x435894: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x435894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_435898:
    // 0x435898: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x435898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_43589c:
    // 0x43589c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x43589cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4358a0:
    // 0x4358a0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4358a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4358a4:
    // 0x4358a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4358a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4358a8:
    // 0x4358a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4358a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4358ac:
    // 0x4358ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4358acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4358b0:
    // 0x4358b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4358b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4358b4:
    // 0x4358b4: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4358b4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4358b8:
    // 0x4358b8: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_4358bc:
    if (ctx->pc == 0x4358BCu) {
        ctx->pc = 0x4358BCu;
            // 0x4358bc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4358C0u;
        goto label_4358c0;
    }
    ctx->pc = 0x4358B8u;
    {
        const bool branch_taken_0x4358b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4358BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4358B8u;
            // 0x4358bc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4358b8) {
            ctx->pc = 0x4358ECu;
            goto label_4358ec;
        }
    }
    ctx->pc = 0x4358C0u;
label_4358c0:
    // 0x4358c0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4358c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4358c4:
    // 0x4358c4: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_4358c8:
    if (ctx->pc == 0x4358C8u) {
        ctx->pc = 0x4358C8u;
            // 0x4358c8: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4358CCu;
        goto label_4358cc;
    }
    ctx->pc = 0x4358C4u;
    {
        const bool branch_taken_0x4358c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4358c4) {
            ctx->pc = 0x4358C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4358C4u;
            // 0x4358c8: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4358E0u;
            goto label_4358e0;
        }
    }
    ctx->pc = 0x4358CCu;
label_4358cc:
    // 0x4358cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4358ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4358d0:
    // 0x4358d0: 0x10a3008b  beq         $a1, $v1, . + 4 + (0x8B << 2)
label_4358d4:
    if (ctx->pc == 0x4358D4u) {
        ctx->pc = 0x4358D8u;
        goto label_4358d8;
    }
    ctx->pc = 0x4358D0u;
    {
        const bool branch_taken_0x4358d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4358d0) {
            ctx->pc = 0x435B00u;
            goto label_435b00;
        }
    }
    ctx->pc = 0x4358D8u;
label_4358d8:
    // 0x4358d8: 0x10000089  b           . + 4 + (0x89 << 2)
label_4358dc:
    if (ctx->pc == 0x4358DCu) {
        ctx->pc = 0x4358E0u;
        goto label_4358e0;
    }
    ctx->pc = 0x4358D8u;
    {
        const bool branch_taken_0x4358d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4358d8) {
            ctx->pc = 0x435B00u;
            goto label_435b00;
        }
    }
    ctx->pc = 0x4358E0u;
label_4358e0:
    // 0x4358e0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4358e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4358e4:
    // 0x4358e4: 0x320f809  jalr        $t9
label_4358e8:
    if (ctx->pc == 0x4358E8u) {
        ctx->pc = 0x4358ECu;
        goto label_4358ec;
    }
    ctx->pc = 0x4358E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4358ECu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4358ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4358ECu; }
            if (ctx->pc != 0x4358ECu) { return; }
        }
        }
    }
    ctx->pc = 0x4358ECu;
label_4358ec:
    // 0x4358ec: 0x8e340070  lw          $s4, 0x70($s1)
    ctx->pc = 0x4358ecu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_4358f0:
    // 0x4358f0: 0x12800083  beqz        $s4, . + 4 + (0x83 << 2)
label_4358f4:
    if (ctx->pc == 0x4358F4u) {
        ctx->pc = 0x4358F8u;
        goto label_4358f8;
    }
    ctx->pc = 0x4358F0u;
    {
        const bool branch_taken_0x4358f0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x4358f0) {
            ctx->pc = 0x435B00u;
            goto label_435b00;
        }
    }
    ctx->pc = 0x4358F8u;
label_4358f8:
    // 0x4358f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4358f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4358fc:
    // 0x4358fc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4358fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_435900:
    // 0x435900: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x435900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_435904:
    // 0x435904: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x435904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_435908:
    // 0x435908: 0xc0e3658  jal         func_38D960
label_43590c:
    if (ctx->pc == 0x43590Cu) {
        ctx->pc = 0x43590Cu;
            // 0x43590c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x435910u;
        goto label_435910;
    }
    ctx->pc = 0x435908u;
    SET_GPR_U32(ctx, 31, 0x435910u);
    ctx->pc = 0x43590Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435908u;
            // 0x43590c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435910u; }
        if (ctx->pc != 0x435910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435910u; }
        if (ctx->pc != 0x435910u) { return; }
    }
    ctx->pc = 0x435910u;
label_435910:
    // 0x435910: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x435910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_435914:
    // 0x435914: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x435914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_435918:
    // 0x435918: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x435918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_43591c:
    // 0x43591c: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x43591cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_435920:
    // 0x435920: 0x8e6400d0  lw          $a0, 0xD0($s3)
    ctx->pc = 0x435920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 208)));
label_435924:
    // 0x435924: 0x1483002c  bne         $a0, $v1, . + 4 + (0x2C << 2)
label_435928:
    if (ctx->pc == 0x435928u) {
        ctx->pc = 0x43592Cu;
        goto label_43592c;
    }
    ctx->pc = 0x435924u;
    {
        const bool branch_taken_0x435924 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x435924) {
            ctx->pc = 0x4359D8u;
            goto label_4359d8;
        }
    }
    ctx->pc = 0x43592Cu;
label_43592c:
    // 0x43592c: 0x8e720050  lw          $s2, 0x50($s3)
    ctx->pc = 0x43592cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_435930:
    // 0x435930: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x435930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_435934:
    // 0x435934: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x435934u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_435938:
    // 0x435938: 0xc6400180  lwc1        $f0, 0x180($s2)
    ctx->pc = 0x435938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43593c:
    // 0x43593c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x43593cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_435940:
    // 0x435940: 0x45000025  bc1f        . + 4 + (0x25 << 2)
label_435944:
    if (ctx->pc == 0x435944u) {
        ctx->pc = 0x435944u;
            // 0x435944: 0x26430180  addiu       $v1, $s2, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
        ctx->pc = 0x435948u;
        goto label_435948;
    }
    ctx->pc = 0x435940u;
    {
        const bool branch_taken_0x435940 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x435944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x435940u;
            // 0x435944: 0x26430180  addiu       $v1, $s2, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435940) {
            ctx->pc = 0x4359D8u;
            goto label_4359d8;
        }
    }
    ctx->pc = 0x435948u;
label_435948:
    // 0x435948: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x435948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43594c:
    // 0x43594c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x43594cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_435950:
    // 0x435950: 0x45000021  bc1f        . + 4 + (0x21 << 2)
label_435954:
    if (ctx->pc == 0x435954u) {
        ctx->pc = 0x435958u;
        goto label_435958;
    }
    ctx->pc = 0x435950u;
    {
        const bool branch_taken_0x435950 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x435950) {
            ctx->pc = 0x4359D8u;
            goto label_4359d8;
        }
    }
    ctx->pc = 0x435958u;
label_435958:
    // 0x435958: 0xc66100d4  lwc1        $f1, 0xD4($s3)
    ctx->pc = 0x435958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43595c:
    // 0x43595c: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x43595cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
label_435960:
    // 0x435960: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x435960u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_435964:
    // 0x435964: 0x0  nop
    ctx->pc = 0x435964u;
    // NOP
label_435968:
    // 0x435968: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x435968u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_43596c:
    // 0x43596c: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_435970:
    if (ctx->pc == 0x435970u) {
        ctx->pc = 0x435974u;
        goto label_435974;
    }
    ctx->pc = 0x43596Cu;
    {
        const bool branch_taken_0x43596c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x43596c) {
            ctx->pc = 0x4359D8u;
            goto label_4359d8;
        }
    }
    ctx->pc = 0x435974u;
label_435974:
    // 0x435974: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x435974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_435978:
    // 0x435978: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x435978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_43597c:
    // 0x43597c: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x43597cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_435980:
    // 0x435980: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x435980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
label_435984:
    // 0x435984: 0xc088b74  jal         func_222DD0
label_435988:
    if (ctx->pc == 0x435988u) {
        ctx->pc = 0x435988u;
            // 0x435988: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
        ctx->pc = 0x43598Cu;
        goto label_43598c;
    }
    ctx->pc = 0x435984u;
    SET_GPR_U32(ctx, 31, 0x43598Cu);
    ctx->pc = 0x435988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435984u;
            // 0x435988: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43598Cu; }
        if (ctx->pc != 0x43598Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43598Cu; }
        if (ctx->pc != 0x43598Cu) { return; }
    }
    ctx->pc = 0x43598Cu;
label_43598c:
    // 0x43598c: 0x8e5900a0  lw          $t9, 0xA0($s2)
    ctx->pc = 0x43598cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_435990:
    // 0x435990: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x435990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_435994:
    // 0x435994: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x435994u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_435998:
    // 0x435998: 0x320f809  jalr        $t9
label_43599c:
    if (ctx->pc == 0x43599Cu) {
        ctx->pc = 0x43599Cu;
            // 0x43599c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4359A0u;
        goto label_4359a0;
    }
    ctx->pc = 0x435998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4359A0u);
        ctx->pc = 0x43599Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x435998u;
            // 0x43599c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4359A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4359A0u; }
            if (ctx->pc != 0x4359A0u) { return; }
        }
        }
    }
    ctx->pc = 0x4359A0u;
label_4359a0:
    // 0x4359a0: 0x8e720050  lw          $s2, 0x50($s3)
    ctx->pc = 0x4359a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_4359a4:
    // 0x4359a4: 0xc088b74  jal         func_222DD0
label_4359a8:
    if (ctx->pc == 0x4359A8u) {
        ctx->pc = 0x4359A8u;
            // 0x4359a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4359ACu;
        goto label_4359ac;
    }
    ctx->pc = 0x4359A4u;
    SET_GPR_U32(ctx, 31, 0x4359ACu);
    ctx->pc = 0x4359A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4359A4u;
            // 0x4359a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4359ACu; }
        if (ctx->pc != 0x4359ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4359ACu; }
        if (ctx->pc != 0x4359ACu) { return; }
    }
    ctx->pc = 0x4359ACu;
label_4359ac:
    // 0x4359ac: 0x8e5900a0  lw          $t9, 0xA0($s2)
    ctx->pc = 0x4359acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_4359b0:
    // 0x4359b0: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x4359b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_4359b4:
    // 0x4359b4: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x4359b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_4359b8:
    // 0x4359b8: 0x320f809  jalr        $t9
label_4359bc:
    if (ctx->pc == 0x4359BCu) {
        ctx->pc = 0x4359BCu;
            // 0x4359bc: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4359C0u;
        goto label_4359c0;
    }
    ctx->pc = 0x4359B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4359C0u);
        ctx->pc = 0x4359BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4359B8u;
            // 0x4359bc: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4359C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4359C0u; }
            if (ctx->pc != 0x4359C0u) { return; }
        }
        }
    }
    ctx->pc = 0x4359C0u;
label_4359c0:
    // 0x4359c0: 0x8e640050  lw          $a0, 0x50($s3)
    ctx->pc = 0x4359c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_4359c4:
    // 0x4359c4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4359c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4359c8:
    // 0x4359c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4359c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4359cc:
    // 0x4359cc: 0xc08914c  jal         func_224530
label_4359d0:
    if (ctx->pc == 0x4359D0u) {
        ctx->pc = 0x4359D0u;
            // 0x4359d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4359D4u;
        goto label_4359d4;
    }
    ctx->pc = 0x4359CCu;
    SET_GPR_U32(ctx, 31, 0x4359D4u);
    ctx->pc = 0x4359D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4359CCu;
            // 0x4359d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4359D4u; }
        if (ctx->pc != 0x4359D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4359D4u; }
        if (ctx->pc != 0x4359D4u) { return; }
    }
    ctx->pc = 0x4359D4u;
label_4359d4:
    // 0x4359d4: 0xae6000d0  sw          $zero, 0xD0($s3)
    ctx->pc = 0x4359d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 208), GPR_U32(ctx, 0));
label_4359d8:
    // 0x4359d8: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x4359d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4359dc:
    // 0x4359dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4359dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4359e0:
    // 0x4359e0: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x4359e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_4359e4:
    // 0x4359e4: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x4359e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4359e8:
    // 0x4359e8: 0x8e4400d0  lw          $a0, 0xD0($s2)
    ctx->pc = 0x4359e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_4359ec:
    // 0x4359ec: 0x14830040  bne         $a0, $v1, . + 4 + (0x40 << 2)
label_4359f0:
    if (ctx->pc == 0x4359F0u) {
        ctx->pc = 0x4359F4u;
        goto label_4359f4;
    }
    ctx->pc = 0x4359ECu;
    {
        const bool branch_taken_0x4359ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4359ec) {
            ctx->pc = 0x435AF0u;
            goto label_435af0;
        }
    }
    ctx->pc = 0x4359F4u;
label_4359f4:
    // 0x4359f4: 0xc64100d4  lwc1        $f1, 0xD4($s2)
    ctx->pc = 0x4359f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4359f8:
    // 0x4359f8: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x4359f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_4359fc:
    // 0x4359fc: 0x0  nop
    ctx->pc = 0x4359fcu;
    // NOP
label_435a00:
    // 0x435a00: 0x460f0836  c.le.s      $f1, $f15
    ctx->pc = 0x435a00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_435a04:
    // 0x435a04: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
label_435a08:
    if (ctx->pc == 0x435A08u) {
        ctx->pc = 0x435A0Cu;
        goto label_435a0c;
    }
    ctx->pc = 0x435A04u;
    {
        const bool branch_taken_0x435a04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x435a04) {
            ctx->pc = 0x435A70u;
            goto label_435a70;
        }
    }
    ctx->pc = 0x435A0Cu;
label_435a0c:
    // 0x435a0c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x435a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_435a10:
    // 0x435a10: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x435a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_435a14:
    // 0x435a14: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x435a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_435a18:
    // 0x435a18: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x435a18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_435a1c:
    // 0x435a1c: 0x460f0036  c.le.s      $f0, $f15
    ctx->pc = 0x435a1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_435a20:
    // 0x435a20: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_435a24:
    if (ctx->pc == 0x435A24u) {
        ctx->pc = 0x435A24u;
            // 0x435a24: 0xe64000d4  swc1        $f0, 0xD4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
        ctx->pc = 0x435A28u;
        goto label_435a28;
    }
    ctx->pc = 0x435A20u;
    {
        const bool branch_taken_0x435a20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x435A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x435A20u;
            // 0x435a24: 0xe64000d4  swc1        $f0, 0xD4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x435a20) {
            ctx->pc = 0x435A70u;
            goto label_435a70;
        }
    }
    ctx->pc = 0x435A28u;
label_435a28:
    // 0x435a28: 0xc64c0010  lwc1        $f12, 0x10($s2)
    ctx->pc = 0x435a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_435a2c:
    // 0x435a2c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x435a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_435a30:
    // 0x435a30: 0xc64d0014  lwc1        $f13, 0x14($s2)
    ctx->pc = 0x435a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_435a34:
    // 0x435a34: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x435a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_435a38:
    // 0x435a38: 0xc64e0018  lwc1        $f14, 0x18($s2)
    ctx->pc = 0x435a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_435a3c:
    // 0x435a3c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x435a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_435a40:
    // 0x435a40: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x435a40u;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
label_435a44:
    // 0x435a44: 0xc0bafb8  jal         func_2EBEE0
label_435a48:
    if (ctx->pc == 0x435A48u) {
        ctx->pc = 0x435A48u;
            // 0x435a48: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->pc = 0x435A4Cu;
        goto label_435a4c;
    }
    ctx->pc = 0x435A44u;
    SET_GPR_U32(ctx, 31, 0x435A4Cu);
    ctx->pc = 0x435A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435A44u;
            // 0x435a48: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435A4Cu; }
        if (ctx->pc != 0x435A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435A4Cu; }
        if (ctx->pc != 0x435A4Cu) { return; }
    }
    ctx->pc = 0x435A4Cu;
label_435a4c:
    // 0x435a4c: 0x8e4400e0  lw          $a0, 0xE0($s2)
    ctx->pc = 0x435a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
label_435a50:
    // 0x435a50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x435a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_435a54:
    // 0x435a54: 0xc122d2c  jal         func_48B4B0
label_435a58:
    if (ctx->pc == 0x435A58u) {
        ctx->pc = 0x435A58u;
            // 0x435a58: 0x26460010  addiu       $a2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x435A5Cu;
        goto label_435a5c;
    }
    ctx->pc = 0x435A54u;
    SET_GPR_U32(ctx, 31, 0x435A5Cu);
    ctx->pc = 0x435A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435A54u;
            // 0x435a58: 0x26460010  addiu       $a2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435A5Cu; }
        if (ctx->pc != 0x435A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435A5Cu; }
        if (ctx->pc != 0x435A5Cu) { return; }
    }
    ctx->pc = 0x435A5Cu;
label_435a5c:
    // 0x435a5c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x435a5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_435a60:
    // 0x435a60: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x435a60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_435a64:
    // 0x435a64: 0x320f809  jalr        $t9
label_435a68:
    if (ctx->pc == 0x435A68u) {
        ctx->pc = 0x435A68u;
            // 0x435a68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x435A6Cu;
        goto label_435a6c;
    }
    ctx->pc = 0x435A64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x435A6Cu);
        ctx->pc = 0x435A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x435A64u;
            // 0x435a68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x435A6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x435A6Cu; }
            if (ctx->pc != 0x435A6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x435A6Cu;
label_435a6c:
    // 0x435a6c: 0x0  nop
    ctx->pc = 0x435a6cu;
    // NOP
label_435a70:
    // 0x435a70: 0x8e4300d8  lw          $v1, 0xD8($s2)
    ctx->pc = 0x435a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_435a74:
    // 0x435a74: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x435a74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_435a78:
    // 0x435a78: 0x1420001d  bnez        $at, . + 4 + (0x1D << 2)
label_435a7c:
    if (ctx->pc == 0x435A7Cu) {
        ctx->pc = 0x435A80u;
        goto label_435a80;
    }
    ctx->pc = 0x435A78u;
    {
        const bool branch_taken_0x435a78 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x435a78) {
            ctx->pc = 0x435AF0u;
            goto label_435af0;
        }
    }
    ctx->pc = 0x435A80u;
label_435a80:
    // 0x435a80: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x435a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_435a84:
    // 0x435a84: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x435a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_435a88:
    // 0x435a88: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x435a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_435a8c:
    // 0x435a8c: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x435a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_435a90:
    // 0x435a90: 0x8e530050  lw          $s3, 0x50($s2)
    ctx->pc = 0x435a90u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_435a94:
    // 0x435a94: 0xc088b74  jal         func_222DD0
label_435a98:
    if (ctx->pc == 0x435A98u) {
        ctx->pc = 0x435A98u;
            // 0x435a98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x435A9Cu;
        goto label_435a9c;
    }
    ctx->pc = 0x435A94u;
    SET_GPR_U32(ctx, 31, 0x435A9Cu);
    ctx->pc = 0x435A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435A94u;
            // 0x435a98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435A9Cu; }
        if (ctx->pc != 0x435A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435A9Cu; }
        if (ctx->pc != 0x435A9Cu) { return; }
    }
    ctx->pc = 0x435A9Cu;
label_435a9c:
    // 0x435a9c: 0x8e7900a0  lw          $t9, 0xA0($s3)
    ctx->pc = 0x435a9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_435aa0:
    // 0x435aa0: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x435aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_435aa4:
    // 0x435aa4: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x435aa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_435aa8:
    // 0x435aa8: 0x320f809  jalr        $t9
label_435aac:
    if (ctx->pc == 0x435AACu) {
        ctx->pc = 0x435AACu;
            // 0x435aac: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x435AB0u;
        goto label_435ab0;
    }
    ctx->pc = 0x435AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x435AB0u);
        ctx->pc = 0x435AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x435AA8u;
            // 0x435aac: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x435AB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x435AB0u; }
            if (ctx->pc != 0x435AB0u) { return; }
        }
        }
    }
    ctx->pc = 0x435AB0u;
label_435ab0:
    // 0x435ab0: 0x8e530050  lw          $s3, 0x50($s2)
    ctx->pc = 0x435ab0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_435ab4:
    // 0x435ab4: 0xc088b74  jal         func_222DD0
label_435ab8:
    if (ctx->pc == 0x435AB8u) {
        ctx->pc = 0x435AB8u;
            // 0x435ab8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x435ABCu;
        goto label_435abc;
    }
    ctx->pc = 0x435AB4u;
    SET_GPR_U32(ctx, 31, 0x435ABCu);
    ctx->pc = 0x435AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435AB4u;
            // 0x435ab8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435ABCu; }
        if (ctx->pc != 0x435ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435ABCu; }
        if (ctx->pc != 0x435ABCu) { return; }
    }
    ctx->pc = 0x435ABCu;
label_435abc:
    // 0x435abc: 0x8e7900a0  lw          $t9, 0xA0($s3)
    ctx->pc = 0x435abcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_435ac0:
    // 0x435ac0: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x435ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_435ac4:
    // 0x435ac4: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x435ac4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_435ac8:
    // 0x435ac8: 0x320f809  jalr        $t9
label_435acc:
    if (ctx->pc == 0x435ACCu) {
        ctx->pc = 0x435ACCu;
            // 0x435acc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x435AD0u;
        goto label_435ad0;
    }
    ctx->pc = 0x435AC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x435AD0u);
        ctx->pc = 0x435ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x435AC8u;
            // 0x435acc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x435AD0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x435AD0u; }
            if (ctx->pc != 0x435AD0u) { return; }
        }
        }
    }
    ctx->pc = 0x435AD0u;
label_435ad0:
    // 0x435ad0: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x435ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_435ad4:
    // 0x435ad4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x435ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_435ad8:
    // 0x435ad8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x435ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_435adc:
    // 0x435adc: 0xc08914c  jal         func_224530
label_435ae0:
    if (ctx->pc == 0x435AE0u) {
        ctx->pc = 0x435AE0u;
            // 0x435ae0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x435AE4u;
        goto label_435ae4;
    }
    ctx->pc = 0x435ADCu;
    SET_GPR_U32(ctx, 31, 0x435AE4u);
    ctx->pc = 0x435AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435ADCu;
            // 0x435ae0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435AE4u; }
        if (ctx->pc != 0x435AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435AE4u; }
        if (ctx->pc != 0x435AE4u) { return; }
    }
    ctx->pc = 0x435AE4u;
label_435ae4:
    // 0x435ae4: 0xae4000d0  sw          $zero, 0xD0($s2)
    ctx->pc = 0x435ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 0));
label_435ae8:
    // 0x435ae8: 0xae4000d8  sw          $zero, 0xD8($s2)
    ctx->pc = 0x435ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 0));
label_435aec:
    // 0x435aec: 0x0  nop
    ctx->pc = 0x435aecu;
    // NOP
label_435af0:
    // 0x435af0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x435af0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_435af4:
    // 0x435af4: 0x214182b  sltu        $v1, $s0, $s4
    ctx->pc = 0x435af4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_435af8:
    // 0x435af8: 0x1460ff81  bnez        $v1, . + 4 + (-0x7F << 2)
label_435afc:
    if (ctx->pc == 0x435AFCu) {
        ctx->pc = 0x435AFCu;
            // 0x435afc: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x435B00u;
        goto label_435b00;
    }
    ctx->pc = 0x435AF8u;
    {
        const bool branch_taken_0x435af8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x435AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x435AF8u;
            // 0x435afc: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435af8) {
            ctx->pc = 0x435900u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_435900;
        }
    }
    ctx->pc = 0x435B00u;
label_435b00:
    // 0x435b00: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x435b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_435b04:
    // 0x435b04: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x435b04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_435b08:
    // 0x435b08: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x435b08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_435b0c:
    // 0x435b0c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x435b0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_435b10:
    // 0x435b10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x435b10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_435b14:
    // 0x435b14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x435b14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_435b18:
    // 0x435b18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x435b18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_435b1c:
    // 0x435b1c: 0x3e00008  jr          $ra
label_435b20:
    if (ctx->pc == 0x435B20u) {
        ctx->pc = 0x435B20u;
            // 0x435b20: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x435B24u;
        goto label_435b24;
    }
    ctx->pc = 0x435B1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x435B1Cu;
            // 0x435b20: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x435B24u;
label_435b24:
    // 0x435b24: 0x0  nop
    ctx->pc = 0x435b24u;
    // NOP
label_435b28:
    // 0x435b28: 0x0  nop
    ctx->pc = 0x435b28u;
    // NOP
label_435b2c:
    // 0x435b2c: 0x0  nop
    ctx->pc = 0x435b2cu;
    // NOP
label_435b30:
    // 0x435b30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x435b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_435b34:
    // 0x435b34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x435b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_435b38:
    // 0x435b38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x435b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_435b3c:
    // 0x435b3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x435b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_435b40:
    // 0x435b40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x435b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_435b44:
    // 0x435b44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x435b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_435b48:
    // 0x435b48: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x435b48u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_435b4c:
    // 0x435b4c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_435b50:
    if (ctx->pc == 0x435B50u) {
        ctx->pc = 0x435B50u;
            // 0x435b50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x435B54u;
        goto label_435b54;
    }
    ctx->pc = 0x435B4Cu;
    {
        const bool branch_taken_0x435b4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x435B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x435B4Cu;
            // 0x435b50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435b4c) {
            ctx->pc = 0x435B88u;
            goto label_435b88;
        }
    }
    ctx->pc = 0x435B54u;
label_435b54:
    // 0x435b54: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x435b54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_435b58:
    // 0x435b58: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x435b58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_435b5c:
    // 0x435b5c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x435b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_435b60:
    // 0x435b60: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x435b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_435b64:
    // 0x435b64: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x435b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_435b68:
    // 0x435b68: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x435b68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_435b6c:
    // 0x435b6c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x435b6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_435b70:
    // 0x435b70: 0x320f809  jalr        $t9
label_435b74:
    if (ctx->pc == 0x435B74u) {
        ctx->pc = 0x435B78u;
        goto label_435b78;
    }
    ctx->pc = 0x435B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x435B78u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x435B78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x435B78u; }
            if (ctx->pc != 0x435B78u) { return; }
        }
        }
    }
    ctx->pc = 0x435B78u;
label_435b78:
    // 0x435b78: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x435b78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_435b7c:
    // 0x435b7c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x435b7cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_435b80:
    // 0x435b80: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_435b84:
    if (ctx->pc == 0x435B84u) {
        ctx->pc = 0x435B84u;
            // 0x435b84: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x435B88u;
        goto label_435b88;
    }
    ctx->pc = 0x435B80u;
    {
        const bool branch_taken_0x435b80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x435B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x435B80u;
            // 0x435b84: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435b80) {
            ctx->pc = 0x435B5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_435b5c;
        }
    }
    ctx->pc = 0x435B88u;
label_435b88:
    // 0x435b88: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x435b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_435b8c:
    // 0x435b8c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x435b8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_435b90:
    // 0x435b90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x435b90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_435b94:
    // 0x435b94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x435b94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_435b98:
    // 0x435b98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x435b98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_435b9c:
    // 0x435b9c: 0x3e00008  jr          $ra
label_435ba0:
    if (ctx->pc == 0x435BA0u) {
        ctx->pc = 0x435BA0u;
            // 0x435ba0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x435BA4u;
        goto label_435ba4;
    }
    ctx->pc = 0x435B9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x435B9Cu;
            // 0x435ba0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x435BA4u;
label_435ba4:
    // 0x435ba4: 0x0  nop
    ctx->pc = 0x435ba4u;
    // NOP
label_435ba8:
    // 0x435ba8: 0x0  nop
    ctx->pc = 0x435ba8u;
    // NOP
label_435bac:
    // 0x435bac: 0x0  nop
    ctx->pc = 0x435bacu;
    // NOP
}
