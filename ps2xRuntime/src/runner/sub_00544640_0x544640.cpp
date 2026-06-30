#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00544640
// Address: 0x544640 - 0x544b40
void sub_00544640_0x544640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00544640_0x544640");
#endif

    switch (ctx->pc) {
        case 0x544640u: goto label_544640;
        case 0x544644u: goto label_544644;
        case 0x544648u: goto label_544648;
        case 0x54464cu: goto label_54464c;
        case 0x544650u: goto label_544650;
        case 0x544654u: goto label_544654;
        case 0x544658u: goto label_544658;
        case 0x54465cu: goto label_54465c;
        case 0x544660u: goto label_544660;
        case 0x544664u: goto label_544664;
        case 0x544668u: goto label_544668;
        case 0x54466cu: goto label_54466c;
        case 0x544670u: goto label_544670;
        case 0x544674u: goto label_544674;
        case 0x544678u: goto label_544678;
        case 0x54467cu: goto label_54467c;
        case 0x544680u: goto label_544680;
        case 0x544684u: goto label_544684;
        case 0x544688u: goto label_544688;
        case 0x54468cu: goto label_54468c;
        case 0x544690u: goto label_544690;
        case 0x544694u: goto label_544694;
        case 0x544698u: goto label_544698;
        case 0x54469cu: goto label_54469c;
        case 0x5446a0u: goto label_5446a0;
        case 0x5446a4u: goto label_5446a4;
        case 0x5446a8u: goto label_5446a8;
        case 0x5446acu: goto label_5446ac;
        case 0x5446b0u: goto label_5446b0;
        case 0x5446b4u: goto label_5446b4;
        case 0x5446b8u: goto label_5446b8;
        case 0x5446bcu: goto label_5446bc;
        case 0x5446c0u: goto label_5446c0;
        case 0x5446c4u: goto label_5446c4;
        case 0x5446c8u: goto label_5446c8;
        case 0x5446ccu: goto label_5446cc;
        case 0x5446d0u: goto label_5446d0;
        case 0x5446d4u: goto label_5446d4;
        case 0x5446d8u: goto label_5446d8;
        case 0x5446dcu: goto label_5446dc;
        case 0x5446e0u: goto label_5446e0;
        case 0x5446e4u: goto label_5446e4;
        case 0x5446e8u: goto label_5446e8;
        case 0x5446ecu: goto label_5446ec;
        case 0x5446f0u: goto label_5446f0;
        case 0x5446f4u: goto label_5446f4;
        case 0x5446f8u: goto label_5446f8;
        case 0x5446fcu: goto label_5446fc;
        case 0x544700u: goto label_544700;
        case 0x544704u: goto label_544704;
        case 0x544708u: goto label_544708;
        case 0x54470cu: goto label_54470c;
        case 0x544710u: goto label_544710;
        case 0x544714u: goto label_544714;
        case 0x544718u: goto label_544718;
        case 0x54471cu: goto label_54471c;
        case 0x544720u: goto label_544720;
        case 0x544724u: goto label_544724;
        case 0x544728u: goto label_544728;
        case 0x54472cu: goto label_54472c;
        case 0x544730u: goto label_544730;
        case 0x544734u: goto label_544734;
        case 0x544738u: goto label_544738;
        case 0x54473cu: goto label_54473c;
        case 0x544740u: goto label_544740;
        case 0x544744u: goto label_544744;
        case 0x544748u: goto label_544748;
        case 0x54474cu: goto label_54474c;
        case 0x544750u: goto label_544750;
        case 0x544754u: goto label_544754;
        case 0x544758u: goto label_544758;
        case 0x54475cu: goto label_54475c;
        case 0x544760u: goto label_544760;
        case 0x544764u: goto label_544764;
        case 0x544768u: goto label_544768;
        case 0x54476cu: goto label_54476c;
        case 0x544770u: goto label_544770;
        case 0x544774u: goto label_544774;
        case 0x544778u: goto label_544778;
        case 0x54477cu: goto label_54477c;
        case 0x544780u: goto label_544780;
        case 0x544784u: goto label_544784;
        case 0x544788u: goto label_544788;
        case 0x54478cu: goto label_54478c;
        case 0x544790u: goto label_544790;
        case 0x544794u: goto label_544794;
        case 0x544798u: goto label_544798;
        case 0x54479cu: goto label_54479c;
        case 0x5447a0u: goto label_5447a0;
        case 0x5447a4u: goto label_5447a4;
        case 0x5447a8u: goto label_5447a8;
        case 0x5447acu: goto label_5447ac;
        case 0x5447b0u: goto label_5447b0;
        case 0x5447b4u: goto label_5447b4;
        case 0x5447b8u: goto label_5447b8;
        case 0x5447bcu: goto label_5447bc;
        case 0x5447c0u: goto label_5447c0;
        case 0x5447c4u: goto label_5447c4;
        case 0x5447c8u: goto label_5447c8;
        case 0x5447ccu: goto label_5447cc;
        case 0x5447d0u: goto label_5447d0;
        case 0x5447d4u: goto label_5447d4;
        case 0x5447d8u: goto label_5447d8;
        case 0x5447dcu: goto label_5447dc;
        case 0x5447e0u: goto label_5447e0;
        case 0x5447e4u: goto label_5447e4;
        case 0x5447e8u: goto label_5447e8;
        case 0x5447ecu: goto label_5447ec;
        case 0x5447f0u: goto label_5447f0;
        case 0x5447f4u: goto label_5447f4;
        case 0x5447f8u: goto label_5447f8;
        case 0x5447fcu: goto label_5447fc;
        case 0x544800u: goto label_544800;
        case 0x544804u: goto label_544804;
        case 0x544808u: goto label_544808;
        case 0x54480cu: goto label_54480c;
        case 0x544810u: goto label_544810;
        case 0x544814u: goto label_544814;
        case 0x544818u: goto label_544818;
        case 0x54481cu: goto label_54481c;
        case 0x544820u: goto label_544820;
        case 0x544824u: goto label_544824;
        case 0x544828u: goto label_544828;
        case 0x54482cu: goto label_54482c;
        case 0x544830u: goto label_544830;
        case 0x544834u: goto label_544834;
        case 0x544838u: goto label_544838;
        case 0x54483cu: goto label_54483c;
        case 0x544840u: goto label_544840;
        case 0x544844u: goto label_544844;
        case 0x544848u: goto label_544848;
        case 0x54484cu: goto label_54484c;
        case 0x544850u: goto label_544850;
        case 0x544854u: goto label_544854;
        case 0x544858u: goto label_544858;
        case 0x54485cu: goto label_54485c;
        case 0x544860u: goto label_544860;
        case 0x544864u: goto label_544864;
        case 0x544868u: goto label_544868;
        case 0x54486cu: goto label_54486c;
        case 0x544870u: goto label_544870;
        case 0x544874u: goto label_544874;
        case 0x544878u: goto label_544878;
        case 0x54487cu: goto label_54487c;
        case 0x544880u: goto label_544880;
        case 0x544884u: goto label_544884;
        case 0x544888u: goto label_544888;
        case 0x54488cu: goto label_54488c;
        case 0x544890u: goto label_544890;
        case 0x544894u: goto label_544894;
        case 0x544898u: goto label_544898;
        case 0x54489cu: goto label_54489c;
        case 0x5448a0u: goto label_5448a0;
        case 0x5448a4u: goto label_5448a4;
        case 0x5448a8u: goto label_5448a8;
        case 0x5448acu: goto label_5448ac;
        case 0x5448b0u: goto label_5448b0;
        case 0x5448b4u: goto label_5448b4;
        case 0x5448b8u: goto label_5448b8;
        case 0x5448bcu: goto label_5448bc;
        case 0x5448c0u: goto label_5448c0;
        case 0x5448c4u: goto label_5448c4;
        case 0x5448c8u: goto label_5448c8;
        case 0x5448ccu: goto label_5448cc;
        case 0x5448d0u: goto label_5448d0;
        case 0x5448d4u: goto label_5448d4;
        case 0x5448d8u: goto label_5448d8;
        case 0x5448dcu: goto label_5448dc;
        case 0x5448e0u: goto label_5448e0;
        case 0x5448e4u: goto label_5448e4;
        case 0x5448e8u: goto label_5448e8;
        case 0x5448ecu: goto label_5448ec;
        case 0x5448f0u: goto label_5448f0;
        case 0x5448f4u: goto label_5448f4;
        case 0x5448f8u: goto label_5448f8;
        case 0x5448fcu: goto label_5448fc;
        case 0x544900u: goto label_544900;
        case 0x544904u: goto label_544904;
        case 0x544908u: goto label_544908;
        case 0x54490cu: goto label_54490c;
        case 0x544910u: goto label_544910;
        case 0x544914u: goto label_544914;
        case 0x544918u: goto label_544918;
        case 0x54491cu: goto label_54491c;
        case 0x544920u: goto label_544920;
        case 0x544924u: goto label_544924;
        case 0x544928u: goto label_544928;
        case 0x54492cu: goto label_54492c;
        case 0x544930u: goto label_544930;
        case 0x544934u: goto label_544934;
        case 0x544938u: goto label_544938;
        case 0x54493cu: goto label_54493c;
        case 0x544940u: goto label_544940;
        case 0x544944u: goto label_544944;
        case 0x544948u: goto label_544948;
        case 0x54494cu: goto label_54494c;
        case 0x544950u: goto label_544950;
        case 0x544954u: goto label_544954;
        case 0x544958u: goto label_544958;
        case 0x54495cu: goto label_54495c;
        case 0x544960u: goto label_544960;
        case 0x544964u: goto label_544964;
        case 0x544968u: goto label_544968;
        case 0x54496cu: goto label_54496c;
        case 0x544970u: goto label_544970;
        case 0x544974u: goto label_544974;
        case 0x544978u: goto label_544978;
        case 0x54497cu: goto label_54497c;
        case 0x544980u: goto label_544980;
        case 0x544984u: goto label_544984;
        case 0x544988u: goto label_544988;
        case 0x54498cu: goto label_54498c;
        case 0x544990u: goto label_544990;
        case 0x544994u: goto label_544994;
        case 0x544998u: goto label_544998;
        case 0x54499cu: goto label_54499c;
        case 0x5449a0u: goto label_5449a0;
        case 0x5449a4u: goto label_5449a4;
        case 0x5449a8u: goto label_5449a8;
        case 0x5449acu: goto label_5449ac;
        case 0x5449b0u: goto label_5449b0;
        case 0x5449b4u: goto label_5449b4;
        case 0x5449b8u: goto label_5449b8;
        case 0x5449bcu: goto label_5449bc;
        case 0x5449c0u: goto label_5449c0;
        case 0x5449c4u: goto label_5449c4;
        case 0x5449c8u: goto label_5449c8;
        case 0x5449ccu: goto label_5449cc;
        case 0x5449d0u: goto label_5449d0;
        case 0x5449d4u: goto label_5449d4;
        case 0x5449d8u: goto label_5449d8;
        case 0x5449dcu: goto label_5449dc;
        case 0x5449e0u: goto label_5449e0;
        case 0x5449e4u: goto label_5449e4;
        case 0x5449e8u: goto label_5449e8;
        case 0x5449ecu: goto label_5449ec;
        case 0x5449f0u: goto label_5449f0;
        case 0x5449f4u: goto label_5449f4;
        case 0x5449f8u: goto label_5449f8;
        case 0x5449fcu: goto label_5449fc;
        case 0x544a00u: goto label_544a00;
        case 0x544a04u: goto label_544a04;
        case 0x544a08u: goto label_544a08;
        case 0x544a0cu: goto label_544a0c;
        case 0x544a10u: goto label_544a10;
        case 0x544a14u: goto label_544a14;
        case 0x544a18u: goto label_544a18;
        case 0x544a1cu: goto label_544a1c;
        case 0x544a20u: goto label_544a20;
        case 0x544a24u: goto label_544a24;
        case 0x544a28u: goto label_544a28;
        case 0x544a2cu: goto label_544a2c;
        case 0x544a30u: goto label_544a30;
        case 0x544a34u: goto label_544a34;
        case 0x544a38u: goto label_544a38;
        case 0x544a3cu: goto label_544a3c;
        case 0x544a40u: goto label_544a40;
        case 0x544a44u: goto label_544a44;
        case 0x544a48u: goto label_544a48;
        case 0x544a4cu: goto label_544a4c;
        case 0x544a50u: goto label_544a50;
        case 0x544a54u: goto label_544a54;
        case 0x544a58u: goto label_544a58;
        case 0x544a5cu: goto label_544a5c;
        case 0x544a60u: goto label_544a60;
        case 0x544a64u: goto label_544a64;
        case 0x544a68u: goto label_544a68;
        case 0x544a6cu: goto label_544a6c;
        case 0x544a70u: goto label_544a70;
        case 0x544a74u: goto label_544a74;
        case 0x544a78u: goto label_544a78;
        case 0x544a7cu: goto label_544a7c;
        case 0x544a80u: goto label_544a80;
        case 0x544a84u: goto label_544a84;
        case 0x544a88u: goto label_544a88;
        case 0x544a8cu: goto label_544a8c;
        case 0x544a90u: goto label_544a90;
        case 0x544a94u: goto label_544a94;
        case 0x544a98u: goto label_544a98;
        case 0x544a9cu: goto label_544a9c;
        case 0x544aa0u: goto label_544aa0;
        case 0x544aa4u: goto label_544aa4;
        case 0x544aa8u: goto label_544aa8;
        case 0x544aacu: goto label_544aac;
        case 0x544ab0u: goto label_544ab0;
        case 0x544ab4u: goto label_544ab4;
        case 0x544ab8u: goto label_544ab8;
        case 0x544abcu: goto label_544abc;
        case 0x544ac0u: goto label_544ac0;
        case 0x544ac4u: goto label_544ac4;
        case 0x544ac8u: goto label_544ac8;
        case 0x544accu: goto label_544acc;
        case 0x544ad0u: goto label_544ad0;
        case 0x544ad4u: goto label_544ad4;
        case 0x544ad8u: goto label_544ad8;
        case 0x544adcu: goto label_544adc;
        case 0x544ae0u: goto label_544ae0;
        case 0x544ae4u: goto label_544ae4;
        case 0x544ae8u: goto label_544ae8;
        case 0x544aecu: goto label_544aec;
        case 0x544af0u: goto label_544af0;
        case 0x544af4u: goto label_544af4;
        case 0x544af8u: goto label_544af8;
        case 0x544afcu: goto label_544afc;
        case 0x544b00u: goto label_544b00;
        case 0x544b04u: goto label_544b04;
        case 0x544b08u: goto label_544b08;
        case 0x544b0cu: goto label_544b0c;
        case 0x544b10u: goto label_544b10;
        case 0x544b14u: goto label_544b14;
        case 0x544b18u: goto label_544b18;
        case 0x544b1cu: goto label_544b1c;
        case 0x544b20u: goto label_544b20;
        case 0x544b24u: goto label_544b24;
        case 0x544b28u: goto label_544b28;
        case 0x544b2cu: goto label_544b2c;
        case 0x544b30u: goto label_544b30;
        case 0x544b34u: goto label_544b34;
        case 0x544b38u: goto label_544b38;
        case 0x544b3cu: goto label_544b3c;
        default: break;
    }

    ctx->pc = 0x544640u;

label_544640:
    // 0x544640: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x544640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_544644:
    // 0x544644: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x544644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_544648:
    // 0x544648: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x544648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_54464c:
    // 0x54464c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x54464cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_544650:
    // 0x544650: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x544650u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_544654:
    // 0x544654: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x544654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_544658:
    // 0x544658: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x544658u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_54465c:
    // 0x54465c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x54465cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_544660:
    // 0x544660: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x544660u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_544664:
    // 0x544664: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x544664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_544668:
    // 0x544668: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x544668u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_54466c:
    // 0x54466c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x54466cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_544670:
    // 0x544670: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x544670u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_544674:
    // 0x544674: 0xc14f6cc  jal         func_53DB30
label_544678:
    if (ctx->pc == 0x544678u) {
        ctx->pc = 0x544678u;
            // 0x544678: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x54467Cu;
        goto label_54467c;
    }
    ctx->pc = 0x544674u;
    SET_GPR_U32(ctx, 31, 0x54467Cu);
    ctx->pc = 0x544678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x544674u;
            // 0x544678: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53DB30u;
    if (runtime->hasFunction(0x53DB30u)) {
        auto targetFn = runtime->lookupFunction(0x53DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54467Cu; }
        if (ctx->pc != 0x54467Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053DB30_0x53db30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54467Cu; }
        if (ctx->pc != 0x54467Cu) { return; }
    }
    ctx->pc = 0x54467Cu;
label_54467c:
    // 0x54467c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x54467cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_544680:
    // 0x544680: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x544680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_544684:
    // 0x544684: 0x244275f0  addiu       $v0, $v0, 0x75F0
    ctx->pc = 0x544684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30192));
label_544688:
    // 0x544688: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x544688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_54468c:
    // 0x54468c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x54468cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_544690:
    // 0x544690: 0xaea000c0  sw          $zero, 0xC0($s5)
    ctx->pc = 0x544690u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 192), GPR_U32(ctx, 0));
label_544694:
    // 0x544694: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x544694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_544698:
    // 0x544698: 0xa2a400c4  sb          $a0, 0xC4($s5)
    ctx->pc = 0x544698u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 196), (uint8_t)GPR_U32(ctx, 4));
label_54469c:
    // 0x54469c: 0xaea000c8  sw          $zero, 0xC8($s5)
    ctx->pc = 0x54469cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 200), GPR_U32(ctx, 0));
label_5446a0:
    // 0x5446a0: 0xa2a000d0  sb          $zero, 0xD0($s5)
    ctx->pc = 0x5446a0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 208), (uint8_t)GPR_U32(ctx, 0));
label_5446a4:
    // 0x5446a4: 0xa2a000d1  sb          $zero, 0xD1($s5)
    ctx->pc = 0x5446a4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 209), (uint8_t)GPR_U32(ctx, 0));
label_5446a8:
    // 0x5446a8: 0xa2a000d4  sb          $zero, 0xD4($s5)
    ctx->pc = 0x5446a8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 212), (uint8_t)GPR_U32(ctx, 0));
label_5446ac:
    // 0x5446ac: 0xa2a000d5  sb          $zero, 0xD5($s5)
    ctx->pc = 0x5446acu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 213), (uint8_t)GPR_U32(ctx, 0));
label_5446b0:
    // 0x5446b0: 0xaea000d8  sw          $zero, 0xD8($s5)
    ctx->pc = 0x5446b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 216), GPR_U32(ctx, 0));
label_5446b4:
    // 0x5446b4: 0x1263000e  beq         $s3, $v1, . + 4 + (0xE << 2)
label_5446b8:
    if (ctx->pc == 0x5446B8u) {
        ctx->pc = 0x5446B8u;
            // 0x5446b8: 0x8c503e28  lw          $s0, 0x3E28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15912)));
        ctx->pc = 0x5446BCu;
        goto label_5446bc;
    }
    ctx->pc = 0x5446B4u;
    {
        const bool branch_taken_0x5446b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x5446B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5446B4u;
            // 0x5446b8: 0x8c503e28  lw          $s0, 0x3E28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5446b4) {
            ctx->pc = 0x5446F0u;
            goto label_5446f0;
        }
    }
    ctx->pc = 0x5446BCu;
label_5446bc:
    // 0x5446bc: 0x12640009  beq         $s3, $a0, . + 4 + (0x9 << 2)
label_5446c0:
    if (ctx->pc == 0x5446C0u) {
        ctx->pc = 0x5446C4u;
        goto label_5446c4;
    }
    ctx->pc = 0x5446BCu;
    {
        const bool branch_taken_0x5446bc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 4));
        if (branch_taken_0x5446bc) {
            ctx->pc = 0x5446E4u;
            goto label_5446e4;
        }
    }
    ctx->pc = 0x5446C4u;
label_5446c4:
    // 0x5446c4: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_5446c8:
    if (ctx->pc == 0x5446C8u) {
        ctx->pc = 0x5446CCu;
        goto label_5446cc;
    }
    ctx->pc = 0x5446C4u;
    {
        const bool branch_taken_0x5446c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x5446c4) {
            ctx->pc = 0x5446D4u;
            goto label_5446d4;
        }
    }
    ctx->pc = 0x5446CCu;
label_5446cc:
    // 0x5446cc: 0x10000009  b           . + 4 + (0x9 << 2)
label_5446d0:
    if (ctx->pc == 0x5446D0u) {
        ctx->pc = 0x5446D0u;
            // 0x5446d0: 0x8ea20090  lw          $v0, 0x90($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 144)));
        ctx->pc = 0x5446D4u;
        goto label_5446d4;
    }
    ctx->pc = 0x5446CCu;
    {
        const bool branch_taken_0x5446cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5446D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5446CCu;
            // 0x5446d0: 0x8ea20090  lw          $v0, 0x90($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5446cc) {
            ctx->pc = 0x5446F4u;
            goto label_5446f4;
        }
    }
    ctx->pc = 0x5446D4u;
label_5446d4:
    // 0x5446d4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x5446d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_5446d8:
    // 0x5446d8: 0x24424af0  addiu       $v0, $v0, 0x4AF0
    ctx->pc = 0x5446d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19184));
label_5446dc:
    // 0x5446dc: 0x10000004  b           . + 4 + (0x4 << 2)
label_5446e0:
    if (ctx->pc == 0x5446E0u) {
        ctx->pc = 0x5446E0u;
            // 0x5446e0: 0xaea200a4  sw          $v0, 0xA4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 164), GPR_U32(ctx, 2));
        ctx->pc = 0x5446E4u;
        goto label_5446e4;
    }
    ctx->pc = 0x5446DCu;
    {
        const bool branch_taken_0x5446dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5446E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5446DCu;
            // 0x5446e0: 0xaea200a4  sw          $v0, 0xA4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5446dc) {
            ctx->pc = 0x5446F0u;
            goto label_5446f0;
        }
    }
    ctx->pc = 0x5446E4u;
label_5446e4:
    // 0x5446e4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x5446e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_5446e8:
    // 0x5446e8: 0x24424aa0  addiu       $v0, $v0, 0x4AA0
    ctx->pc = 0x5446e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19104));
label_5446ec:
    // 0x5446ec: 0xaea200a4  sw          $v0, 0xA4($s5)
    ctx->pc = 0x5446ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 164), GPR_U32(ctx, 2));
label_5446f0:
    // 0x5446f0: 0x8ea20090  lw          $v0, 0x90($s5)
    ctx->pc = 0x5446f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 144)));
label_5446f4:
    // 0x5446f4: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x5446f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_5446f8:
    // 0x5446f8: 0x3c070067  lui         $a3, 0x67
    ctx->pc = 0x5446f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)103 << 16));
label_5446fc:
    // 0x5446fc: 0x26a400a8  addiu       $a0, $s5, 0xA8
    ctx->pc = 0x5446fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 168));
label_544700:
    // 0x544700: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x544700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_544704:
    // 0x544704: 0x24c6daa0  addiu       $a2, $a2, -0x2560
    ctx->pc = 0x544704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957728));
label_544708:
    // 0x544708: 0x24e7daa8  addiu       $a3, $a3, -0x2558
    ctx->pc = 0x544708u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957736));
label_54470c:
    // 0x54470c: 0xc043be4  jal         func_10EF90
label_544710:
    if (ctx->pc == 0x544710u) {
        ctx->pc = 0x544710u;
            // 0x544710: 0x24480004  addiu       $t0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x544714u;
        goto label_544714;
    }
    ctx->pc = 0x54470Cu;
    SET_GPR_U32(ctx, 31, 0x544714u);
    ctx->pc = 0x544710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54470Cu;
            // 0x544710: 0x24480004  addiu       $t0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x544714u; }
        if (ctx->pc != 0x544714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x544714u; }
        if (ctx->pc != 0x544714u) { return; }
    }
    ctx->pc = 0x544714u;
label_544714:
    // 0x544714: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x544714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_544718:
    // 0x544718: 0x12620076  beq         $s3, $v0, . + 4 + (0x76 << 2)
label_54471c:
    if (ctx->pc == 0x54471Cu) {
        ctx->pc = 0x544720u;
        goto label_544720;
    }
    ctx->pc = 0x544718u;
    {
        const bool branch_taken_0x544718 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x544718) {
            ctx->pc = 0x5448F4u;
            goto label_5448f4;
        }
    }
    ctx->pc = 0x544720u;
label_544720:
    // 0x544720: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x544720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_544724:
    // 0x544724: 0x12620039  beq         $s3, $v0, . + 4 + (0x39 << 2)
label_544728:
    if (ctx->pc == 0x544728u) {
        ctx->pc = 0x54472Cu;
        goto label_54472c;
    }
    ctx->pc = 0x544724u;
    {
        const bool branch_taken_0x544724 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x544724) {
            ctx->pc = 0x54480Cu;
            goto label_54480c;
        }
    }
    ctx->pc = 0x54472Cu;
label_54472c:
    // 0x54472c: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_544730:
    if (ctx->pc == 0x544730u) {
        ctx->pc = 0x544734u;
        goto label_544734;
    }
    ctx->pc = 0x54472Cu;
    {
        const bool branch_taken_0x54472c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x54472c) {
            ctx->pc = 0x54473Cu;
            goto label_54473c;
        }
    }
    ctx->pc = 0x544734u;
label_544734:
    // 0x544734: 0x1000006f  b           . + 4 + (0x6F << 2)
label_544738:
    if (ctx->pc == 0x544738u) {
        ctx->pc = 0x54473Cu;
        goto label_54473c;
    }
    ctx->pc = 0x544734u;
    {
        const bool branch_taken_0x544734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x544734) {
            ctx->pc = 0x5448F4u;
            goto label_5448f4;
        }
    }
    ctx->pc = 0x54473Cu;
label_54473c:
    // 0x54473c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54473cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_544740:
    // 0x544740: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x544740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_544744:
    // 0x544744: 0xc440d7c0  lwc1        $f0, -0x2840($v0)
    ctx->pc = 0x544744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_544748:
    // 0x544748: 0x7865d7b0  lq          $a1, -0x2850($v1)
    ctx->pc = 0x544748u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 4294956976)));
label_54474c:
    // 0x54474c: 0x3c060063  lui         $a2, 0x63
    ctx->pc = 0x54474cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)99 << 16));
label_544750:
    // 0x544750: 0x24c6d7c8  addiu       $a2, $a2, -0x2838
    ctx->pc = 0x544750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957000));
label_544754:
    // 0x544754: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x544754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_544758:
    // 0x544758: 0x7fa500b0  sq          $a1, 0xB0($sp)
    ctx->pc = 0x544758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 5));
label_54475c:
    // 0x54475c: 0x8444d7c4  lh          $a0, -0x283C($v0)
    ctx->pc = 0x54475cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294956996)));
label_544760:
    // 0x544760: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x544760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_544764:
    // 0x544764: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x544764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_544768:
    // 0x544768: 0x9063d7c6  lbu         $v1, -0x283A($v1)
    ctx->pc = 0x544768u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294956998)));
label_54476c:
    // 0x54476c: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x54476cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_544770:
    // 0x544770: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x544770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_544774:
    // 0x544774: 0xa7a400c4  sh          $a0, 0xC4($sp)
    ctx->pc = 0x544774u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 196), (uint16_t)GPR_U32(ctx, 4));
label_544778:
    // 0x544778: 0x9042d7c7  lbu         $v0, -0x2839($v0)
    ctx->pc = 0x544778u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294956999)));
label_54477c:
    // 0x54477c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x54477cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_544780:
    // 0x544780: 0xa3a300c6  sb          $v1, 0xC6($sp)
    ctx->pc = 0x544780u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 198), (uint8_t)GPR_U32(ctx, 3));
label_544784:
    // 0x544784: 0xa3a200c7  sb          $v0, 0xC7($sp)
    ctx->pc = 0x544784u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 199), (uint8_t)GPR_U32(ctx, 2));
label_544788:
    // 0x544788: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x544788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_54478c:
    // 0x54478c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x54478cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_544790:
    // 0x544790: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x544790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_544794:
    // 0x544794: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x544794u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_544798:
    // 0x544798: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x544798u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_54479c:
    // 0x54479c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x54479cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_5447a0:
    // 0x5447a0: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_5447a4:
    if (ctx->pc == 0x5447A4u) {
        ctx->pc = 0x5447A4u;
            // 0x5447a4: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x5447A8u;
        goto label_5447a8;
    }
    ctx->pc = 0x5447A0u;
    {
        const bool branch_taken_0x5447a0 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x5447A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5447A0u;
            // 0x5447a4: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5447a0) {
            ctx->pc = 0x544788u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_544788;
        }
    }
    ctx->pc = 0x5447A8u;
label_5447a8:
    // 0x5447a8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x5447a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_5447ac:
    // 0x5447ac: 0x123880  sll         $a3, $s2, 2
    ctx->pc = 0x5447acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_5447b0:
    // 0x5447b0: 0x2442d618  addiu       $v0, $v0, -0x29E8
    ctx->pc = 0x5447b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956568));
label_5447b4:
    // 0x5447b4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x5447b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_5447b8:
    // 0x5447b8: 0x16800002  bnez        $s4, . + 4 + (0x2 << 2)
label_5447bc:
    if (ctx->pc == 0x5447BCu) {
        ctx->pc = 0x5447BCu;
            // 0x5447bc: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x5447C0u;
        goto label_5447c0;
    }
    ctx->pc = 0x5447B8u;
    {
        const bool branch_taken_0x5447b8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x5447BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5447B8u;
            // 0x5447bc: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5447b8) {
            ctx->pc = 0x5447C4u;
            goto label_5447c4;
        }
    }
    ctx->pc = 0x5447C0u;
label_5447c0:
    // 0x5447c0: 0x3411bb64  ori         $s1, $zero, 0xBB64
    ctx->pc = 0x5447c0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)47972);
label_5447c4:
    // 0x5447c4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5447c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_5447c8:
    // 0x5447c8: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x5447c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_5447cc:
    // 0x5447cc: 0x8c468a08  lw          $a2, -0x75F8($v0)
    ctx->pc = 0x5447ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_5447d0:
    // 0x5447d0: 0x2463d860  addiu       $v1, $v1, -0x27A0
    ctx->pc = 0x5447d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957152));
label_5447d4:
    // 0x5447d4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x5447d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_5447d8:
    // 0x5447d8: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x5447d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_5447dc:
    // 0x5447dc: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x5447dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_5447e0:
    // 0x5447e0: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x5447e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_5447e4:
    // 0x5447e4: 0x2442da60  addiu       $v0, $v0, -0x25A0
    ctx->pc = 0x5447e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957664));
label_5447e8:
    // 0x5447e8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x5447e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_5447ec:
    // 0x5447ec: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x5447ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_5447f0:
    // 0x5447f0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x5447f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_5447f4:
    // 0x5447f4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x5447f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_5447f8:
    // 0x5447f8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x5447f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_5447fc:
    // 0x5447fc: 0xc043be4  jal         func_10EF90
label_544800:
    if (ctx->pc == 0x544800u) {
        ctx->pc = 0x544800u;
            // 0x544800: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
        ctx->pc = 0x544804u;
        goto label_544804;
    }
    ctx->pc = 0x5447FCu;
    SET_GPR_U32(ctx, 31, 0x544804u);
    ctx->pc = 0x544800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5447FCu;
            // 0x544800: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x544804u; }
        if (ctx->pc != 0x544804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x544804u; }
        if (ctx->pc != 0x544804u) { return; }
    }
    ctx->pc = 0x544804u;
label_544804:
    // 0x544804: 0x1000003b  b           . + 4 + (0x3B << 2)
label_544808:
    if (ctx->pc == 0x544808u) {
        ctx->pc = 0x54480Cu;
        goto label_54480c;
    }
    ctx->pc = 0x544804u;
    {
        const bool branch_taken_0x544804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x544804) {
            ctx->pc = 0x5448F4u;
            goto label_5448f4;
        }
    }
    ctx->pc = 0x54480Cu;
label_54480c:
    // 0x54480c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54480cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_544810:
    // 0x544810: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x544810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_544814:
    // 0x544814: 0xc440d880  lwc1        $f0, -0x2780($v0)
    ctx->pc = 0x544814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_544818:
    // 0x544818: 0x7865d870  lq          $a1, -0x2790($v1)
    ctx->pc = 0x544818u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 4294957168)));
label_54481c:
    // 0x54481c: 0x3c060063  lui         $a2, 0x63
    ctx->pc = 0x54481cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)99 << 16));
label_544820:
    // 0x544820: 0x24c6d888  addiu       $a2, $a2, -0x2778
    ctx->pc = 0x544820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957192));
label_544824:
    // 0x544824: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x544824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_544828:
    // 0x544828: 0x7fa500b0  sq          $a1, 0xB0($sp)
    ctx->pc = 0x544828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 5));
label_54482c:
    // 0x54482c: 0x8444d884  lh          $a0, -0x277C($v0)
    ctx->pc = 0x54482cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957188)));
label_544830:
    // 0x544830: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x544830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_544834:
    // 0x544834: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x544834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_544838:
    // 0x544838: 0x9063d886  lbu         $v1, -0x277A($v1)
    ctx->pc = 0x544838u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957190)));
label_54483c:
    // 0x54483c: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x54483cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_544840:
    // 0x544840: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x544840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_544844:
    // 0x544844: 0xa7a400c4  sh          $a0, 0xC4($sp)
    ctx->pc = 0x544844u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 196), (uint16_t)GPR_U32(ctx, 4));
label_544848:
    // 0x544848: 0x9042d887  lbu         $v0, -0x2779($v0)
    ctx->pc = 0x544848u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957191)));
label_54484c:
    // 0x54484c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x54484cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_544850:
    // 0x544850: 0xa3a300c6  sb          $v1, 0xC6($sp)
    ctx->pc = 0x544850u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 198), (uint8_t)GPR_U32(ctx, 3));
label_544854:
    // 0x544854: 0xa3a200c7  sb          $v0, 0xC7($sp)
    ctx->pc = 0x544854u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 199), (uint8_t)GPR_U32(ctx, 2));
label_544858:
    // 0x544858: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x544858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_54485c:
    // 0x54485c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x54485cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_544860:
    // 0x544860: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x544860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_544864:
    // 0x544864: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x544864u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_544868:
    // 0x544868: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x544868u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_54486c:
    // 0x54486c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x54486cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_544870:
    // 0x544870: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_544874:
    if (ctx->pc == 0x544874u) {
        ctx->pc = 0x544874u;
            // 0x544874: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x544878u;
        goto label_544878;
    }
    ctx->pc = 0x544870u;
    {
        const bool branch_taken_0x544870 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x544874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x544870u;
            // 0x544874: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x544870) {
            ctx->pc = 0x544858u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_544858;
        }
    }
    ctx->pc = 0x544878u;
label_544878:
    // 0x544878: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x544878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_54487c:
    // 0x54487c: 0x122180  sll         $a0, $s2, 6
    ctx->pc = 0x54487cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
label_544880:
    // 0x544880: 0x2463d62c  addiu       $v1, $v1, -0x29D4
    ctx->pc = 0x544880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956588));
label_544884:
    // 0x544884: 0x163880  sll         $a3, $s6, 2
    ctx->pc = 0x544884u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_544888:
    // 0x544888: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x544888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_54488c:
    // 0x54488c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x54488cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_544890:
    // 0x544890: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x544890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_544894:
    // 0x544894: 0x16820002  bne         $s4, $v0, . + 4 + (0x2 << 2)
label_544898:
    if (ctx->pc == 0x544898u) {
        ctx->pc = 0x544898u;
            // 0x544898: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x54489Cu;
        goto label_54489c;
    }
    ctx->pc = 0x544894u;
    {
        const bool branch_taken_0x544894 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x544898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x544894u;
            // 0x544898: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x544894) {
            ctx->pc = 0x5448A0u;
            goto label_5448a0;
        }
    }
    ctx->pc = 0x54489Cu;
label_54489c:
    // 0x54489c: 0x3411b9ea  ori         $s1, $zero, 0xB9EA
    ctx->pc = 0x54489cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)47594);
label_5448a0:
    // 0x5448a0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5448a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_5448a4:
    // 0x5448a4: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x5448a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_5448a8:
    // 0x5448a8: 0x8c458a08  lw          $a1, -0x75F8($v0)
    ctx->pc = 0x5448a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_5448ac:
    // 0x5448ac: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x5448acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_5448b0:
    // 0x5448b0: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x5448b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_5448b4:
    // 0x5448b4: 0x24c6d9c0  addiu       $a2, $a2, -0x2640
    ctx->pc = 0x5448b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957504));
label_5448b8:
    // 0x5448b8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x5448b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_5448bc:
    // 0x5448bc: 0x8ca9000c  lw          $t1, 0xC($a1)
    ctx->pc = 0x5448bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_5448c0:
    // 0x5448c0: 0x2442da60  addiu       $v0, $v0, -0x25A0
    ctx->pc = 0x5448c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957664));
label_5448c4:
    // 0x5448c4: 0x248400c0  addiu       $a0, $a0, 0xC0
    ctx->pc = 0x5448c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
label_5448c8:
    // 0x5448c8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x5448c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_5448cc:
    // 0x5448cc: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x5448ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_5448d0:
    // 0x5448d0: 0x2442da5c  addiu       $v0, $v0, -0x25A4
    ctx->pc = 0x5448d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957660));
label_5448d4:
    // 0x5448d4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x5448d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_5448d8:
    // 0x5448d8: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x5448d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_5448dc:
    // 0x5448dc: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x5448dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_5448e0:
    // 0x5448e0: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x5448e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_5448e4:
    // 0x5448e4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x5448e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_5448e8:
    // 0x5448e8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x5448e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_5448ec:
    // 0x5448ec: 0xc043be4  jal         func_10EF90
label_5448f0:
    if (ctx->pc == 0x5448F0u) {
        ctx->pc = 0x5448F0u;
            // 0x5448f0: 0x24050044  addiu       $a1, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->pc = 0x5448F4u;
        goto label_5448f4;
    }
    ctx->pc = 0x5448ECu;
    SET_GPR_U32(ctx, 31, 0x5448F4u);
    ctx->pc = 0x5448F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5448ECu;
            // 0x5448f0: 0x24050044  addiu       $a1, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5448F4u; }
        if (ctx->pc != 0x5448F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5448F4u; }
        if (ctx->pc != 0x5448F4u) { return; }
    }
    ctx->pc = 0x5448F4u;
label_5448f4:
    // 0x5448f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5448f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5448f8:
    // 0x5448f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x5448f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5448fc:
    // 0x5448fc: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x5448fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
label_544900:
    // 0x544900: 0xc0fe54c  jal         func_3F9530
label_544904:
    if (ctx->pc == 0x544904u) {
        ctx->pc = 0x544904u;
            // 0x544904: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x544908u;
        goto label_544908;
    }
    ctx->pc = 0x544900u;
    SET_GPR_U32(ctx, 31, 0x544908u);
    ctx->pc = 0x544904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x544900u;
            // 0x544904: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x544908u; }
        if (ctx->pc != 0x544908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x544908u; }
        if (ctx->pc != 0x544908u) { return; }
    }
    ctx->pc = 0x544908u;
label_544908:
    // 0x544908: 0xaea200d8  sw          $v0, 0xD8($s5)
    ctx->pc = 0x544908u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 216), GPR_U32(ctx, 2));
label_54490c:
    // 0x54490c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x54490cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_544910:
    // 0x544910: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x544910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_544914:
    // 0x544914: 0xc04a576  jal         func_1295D8
label_544918:
    if (ctx->pc == 0x544918u) {
        ctx->pc = 0x544918u;
            // 0x544918: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54491Cu;
        goto label_54491c;
    }
    ctx->pc = 0x544914u;
    SET_GPR_U32(ctx, 31, 0x54491Cu);
    ctx->pc = 0x544918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x544914u;
            // 0x544918: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54491Cu; }
        if (ctx->pc != 0x54491Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54491Cu; }
        if (ctx->pc != 0x54491Cu) { return; }
    }
    ctx->pc = 0x54491Cu;
label_54491c:
    // 0x54491c: 0xc151cd4  jal         func_547350
label_544920:
    if (ctx->pc == 0x544920u) {
        ctx->pc = 0x544920u;
            // 0x544920: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x544924u;
        goto label_544924;
    }
    ctx->pc = 0x54491Cu;
    SET_GPR_U32(ctx, 31, 0x544924u);
    ctx->pc = 0x544920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54491Cu;
            // 0x544920: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x547350u;
    if (runtime->hasFunction(0x547350u)) {
        auto targetFn = runtime->lookupFunction(0x547350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x544924u; }
        if (ctx->pc != 0x544924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00547350_0x547350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x544924u; }
        if (ctx->pc != 0x544924u) { return; }
    }
    ctx->pc = 0x544924u;
label_544924:
    // 0x544924: 0x8ea400d8  lw          $a0, 0xD8($s5)
    ctx->pc = 0x544924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 216)));
label_544928:
    // 0x544928: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x544928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_54492c:
    // 0x54492c: 0xc04a508  jal         func_129420
label_544930:
    if (ctx->pc == 0x544930u) {
        ctx->pc = 0x544930u;
            // 0x544930: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x544934u;
        goto label_544934;
    }
    ctx->pc = 0x54492Cu;
    SET_GPR_U32(ctx, 31, 0x544934u);
    ctx->pc = 0x544930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54492Cu;
            // 0x544930: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x544934u; }
        if (ctx->pc != 0x544934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x544934u; }
        if (ctx->pc != 0x544934u) { return; }
    }
    ctx->pc = 0x544934u;
label_544934:
    // 0x544934: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x544934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_544938:
    // 0x544938: 0x240503c4  addiu       $a1, $zero, 0x3C4
    ctx->pc = 0x544938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
label_54493c:
    // 0x54493c: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x54493cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
label_544940:
    // 0x544940: 0xc0fe54c  jal         func_3F9530
label_544944:
    if (ctx->pc == 0x544944u) {
        ctx->pc = 0x544944u;
            // 0x544944: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x544948u;
        goto label_544948;
    }
    ctx->pc = 0x544940u;
    SET_GPR_U32(ctx, 31, 0x544948u);
    ctx->pc = 0x544944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x544940u;
            // 0x544944: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x544948u; }
        if (ctx->pc != 0x544948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x544948u; }
        if (ctx->pc != 0x544948u) { return; }
    }
    ctx->pc = 0x544948u;
label_544948:
    // 0x544948: 0xaea200dc  sw          $v0, 0xDC($s5)
    ctx->pc = 0x544948u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 220), GPR_U32(ctx, 2));
label_54494c:
    // 0x54494c: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x54494cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_544950:
    // 0x544950: 0x8fa600ec  lw          $a2, 0xEC($sp)
    ctx->pc = 0x544950u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_544954:
    // 0x544954: 0xc04a508  jal         func_129420
label_544958:
    if (ctx->pc == 0x544958u) {
        ctx->pc = 0x544958u;
            // 0x544958: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54495Cu;
        goto label_54495c;
    }
    ctx->pc = 0x544954u;
    SET_GPR_U32(ctx, 31, 0x54495Cu);
    ctx->pc = 0x544958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x544954u;
            // 0x544958: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54495Cu; }
        if (ctx->pc != 0x54495Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54495Cu; }
        if (ctx->pc != 0x54495Cu) { return; }
    }
    ctx->pc = 0x54495Cu;
label_54495c:
    // 0x54495c: 0x8ea200dc  lw          $v0, 0xDC($s5)
    ctx->pc = 0x54495cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 220)));
label_544960:
    // 0x544960: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x544960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_544964:
    // 0x544964: 0x26a500a8  addiu       $a1, $s5, 0xA8
    ctx->pc = 0x544964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 168));
label_544968:
    // 0x544968: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x544968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_54496c:
    // 0x54496c: 0xc04b156  jal         func_12C558
label_544970:
    if (ctx->pc == 0x544970u) {
        ctx->pc = 0x544970u;
            // 0x544970: 0xafa200e8  sw          $v0, 0xE8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
        ctx->pc = 0x544974u;
        goto label_544974;
    }
    ctx->pc = 0x54496Cu;
    SET_GPR_U32(ctx, 31, 0x544974u);
    ctx->pc = 0x544970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54496Cu;
            // 0x544970: 0xafa200e8  sw          $v0, 0xE8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C558u;
    if (runtime->hasFunction(0x12C558u)) {
        auto targetFn = runtime->lookupFunction(0x12C558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x544974u; }
        if (ctx->pc != 0x544974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C558_0x12c558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x544974u; }
        if (ctx->pc != 0x544974u) { return; }
    }
    ctx->pc = 0x544974u;
label_544974:
    // 0x544974: 0x8ea200d8  lw          $v0, 0xD8($s5)
    ctx->pc = 0x544974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 216)));
label_544978:
    // 0x544978: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x544978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_54497c:
    // 0x54497c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x54497cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_544980:
    // 0x544980: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x544980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_544984:
    // 0x544984: 0xafb10114  sw          $s1, 0x114($sp)
    ctx->pc = 0x544984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 17));
label_544988:
    // 0x544988: 0x8ea20090  lw          $v0, 0x90($s5)
    ctx->pc = 0x544988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 144)));
label_54498c:
    // 0x54498c: 0xc043be4  jal         func_10EF90
label_544990:
    if (ctx->pc == 0x544990u) {
        ctx->pc = 0x544990u;
            // 0x544990: 0x24460004  addiu       $a2, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x544994u;
        goto label_544994;
    }
    ctx->pc = 0x54498Cu;
    SET_GPR_U32(ctx, 31, 0x544994u);
    ctx->pc = 0x544990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54498Cu;
            // 0x544990: 0x24460004  addiu       $a2, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x544994u; }
        if (ctx->pc != 0x544994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x544994u; }
        if (ctx->pc != 0x544994u) { return; }
    }
    ctx->pc = 0x544994u;
label_544994:
    // 0x544994: 0x8ea40090  lw          $a0, 0x90($s5)
    ctx->pc = 0x544994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 144)));
label_544998:
    // 0x544998: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x544998u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54499c:
    // 0x54499c: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x54499cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_5449a0:
    // 0x5449a0: 0x320f809  jalr        $t9
label_5449a4:
    if (ctx->pc == 0x5449A4u) {
        ctx->pc = 0x5449A8u;
        goto label_5449a8;
    }
    ctx->pc = 0x5449A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5449A8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x5449A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5449A8u; }
            if (ctx->pc != 0x5449A8u) { return; }
        }
        }
    }
    ctx->pc = 0x5449A8u;
label_5449a8:
    // 0x5449a8: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x5449a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_5449ac:
    // 0x5449ac: 0x8ea40090  lw          $a0, 0x90($s5)
    ctx->pc = 0x5449acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 144)));
label_5449b0:
    // 0x5449b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5449b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5449b4:
    // 0x5449b4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x5449b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_5449b8:
    // 0x5449b8: 0x320f809  jalr        $t9
label_5449bc:
    if (ctx->pc == 0x5449BCu) {
        ctx->pc = 0x5449C0u;
        goto label_5449c0;
    }
    ctx->pc = 0x5449B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5449C0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x5449C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5449C0u; }
            if (ctx->pc != 0x5449C0u) { return; }
        }
        }
    }
    ctx->pc = 0x5449C0u;
label_5449c0:
    // 0x5449c0: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x5449c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
label_5449c4:
    // 0x5449c4: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x5449c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_5449c8:
    // 0x5449c8: 0x26050338  addiu       $a1, $s0, 0x338
    ctx->pc = 0x5449c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 824));
label_5449cc:
    // 0x5449cc: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x5449ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_5449d0:
    // 0x5449d0: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x5449d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_5449d4:
    // 0x5449d4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x5449d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_5449d8:
    // 0x5449d8: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x5449d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_5449dc:
    // 0x5449dc: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x5449dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_5449e0:
    // 0x5449e0: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x5449e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_5449e4:
    // 0x5449e4: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x5449e4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
label_5449e8:
    // 0x5449e8: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_5449ec:
    if (ctx->pc == 0x5449ECu) {
        ctx->pc = 0x5449ECu;
            // 0x5449ec: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x5449F0u;
        goto label_5449f0;
    }
    ctx->pc = 0x5449E8u;
    {
        const bool branch_taken_0x5449e8 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x5449ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5449E8u;
            // 0x5449ec: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5449e8) {
            ctx->pc = 0x5449D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5449d0;
        }
    }
    ctx->pc = 0x5449F0u;
label_5449f0:
    // 0x5449f0: 0x93a200c6  lbu         $v0, 0xC6($sp)
    ctx->pc = 0x5449f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 198)));
label_5449f4:
    // 0x5449f4: 0x27a600c8  addiu       $a2, $sp, 0xC8
    ctx->pc = 0x5449f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_5449f8:
    // 0x5449f8: 0x26050350  addiu       $a1, $s0, 0x350
    ctx->pc = 0x5449f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 848));
label_5449fc:
    // 0x5449fc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x5449fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_544a00:
    // 0x544a00: 0xa202034e  sb          $v0, 0x34E($s0)
    ctx->pc = 0x544a00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 846), (uint8_t)GPR_U32(ctx, 2));
label_544a04:
    // 0x544a04: 0x93a200c7  lbu         $v0, 0xC7($sp)
    ctx->pc = 0x544a04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 199)));
label_544a08:
    // 0x544a08: 0xa202034f  sb          $v0, 0x34F($s0)
    ctx->pc = 0x544a08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 847), (uint8_t)GPR_U32(ctx, 2));
label_544a0c:
    // 0x544a0c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x544a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_544a10:
    // 0x544a10: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x544a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_544a14:
    // 0x544a14: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x544a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_544a18:
    // 0x544a18: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x544a18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_544a1c:
    // 0x544a1c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x544a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_544a20:
    // 0x544a20: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x544a20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_544a24:
    // 0x544a24: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_544a28:
    if (ctx->pc == 0x544A28u) {
        ctx->pc = 0x544A28u;
            // 0x544a28: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x544A2Cu;
        goto label_544a2c;
    }
    ctx->pc = 0x544A24u;
    {
        const bool branch_taken_0x544a24 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x544A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x544A24u;
            // 0x544a28: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x544a24) {
            ctx->pc = 0x544A0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_544a0c;
        }
    }
    ctx->pc = 0x544A2Cu;
label_544a2c:
    // 0x544a2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x544a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_544a30:
    // 0x544a30: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x544a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_544a34:
    // 0x544a34: 0xc14d670  jal         func_5359C0
label_544a38:
    if (ctx->pc == 0x544A38u) {
        ctx->pc = 0x544A38u;
            // 0x544a38: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x544A3Cu;
        goto label_544a3c;
    }
    ctx->pc = 0x544A34u;
    SET_GPR_U32(ctx, 31, 0x544A3Cu);
    ctx->pc = 0x544A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x544A34u;
            // 0x544a38: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5359C0u;
    if (runtime->hasFunction(0x5359C0u)) {
        auto targetFn = runtime->lookupFunction(0x5359C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x544A3Cu; }
        if (ctx->pc != 0x544A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005359C0_0x5359c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x544A3Cu; }
        if (ctx->pc != 0x544A3Cu) { return; }
    }
    ctx->pc = 0x544A3Cu;
label_544a3c:
    // 0x544a3c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x544a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_544a40:
    // 0x544a40: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x544a40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_544a44:
    // 0x544a44: 0x8c470e68  lw          $a3, 0xE68($v0)
    ctx->pc = 0x544a44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_544a48:
    // 0x544a48: 0x24050074  addiu       $a1, $zero, 0x74
    ctx->pc = 0x544a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_544a4c:
    // 0x544a4c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x544a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_544a50:
    // 0x544a50: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x544a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_544a54:
    // 0x544a54: 0xace603cc  sw          $a2, 0x3CC($a3)
    ctx->pc = 0x544a54u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 972), GPR_U32(ctx, 6));
label_544a58:
    // 0x544a58: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x544a58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_544a5c:
    // 0x544a5c: 0xace503d0  sw          $a1, 0x3D0($a3)
    ctx->pc = 0x544a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 976), GPR_U32(ctx, 5));
label_544a60:
    // 0x544a60: 0xace003d8  sw          $zero, 0x3D8($a3)
    ctx->pc = 0x544a60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 984), GPR_U32(ctx, 0));
label_544a64:
    // 0x544a64: 0x8c843e28  lw          $a0, 0x3E28($a0)
    ctx->pc = 0x544a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15912)));
label_544a68:
    // 0x544a68: 0x90840022  lbu         $a0, 0x22($a0)
    ctx->pc = 0x544a68u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
label_544a6c:
    // 0x544a6c: 0xa2a400d2  sb          $a0, 0xD2($s5)
    ctx->pc = 0x544a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 210), (uint8_t)GPR_U32(ctx, 4));
label_544a70:
    // 0x544a70: 0x9063cff8  lbu         $v1, -0x3008($v1)
    ctx->pc = 0x544a70u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294955000)));
label_544a74:
    // 0x544a74: 0xa2a300d3  sb          $v1, 0xD3($s5)
    ctx->pc = 0x544a74u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 211), (uint8_t)GPR_U32(ctx, 3));
label_544a78:
    // 0x544a78: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x544a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_544a7c:
    // 0x544a7c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x544a7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_544a80:
    // 0x544a80: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x544a80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_544a84:
    // 0x544a84: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x544a84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_544a88:
    // 0x544a88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x544a88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_544a8c:
    // 0x544a8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x544a8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_544a90:
    // 0x544a90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x544a90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_544a94:
    // 0x544a94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x544a94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_544a98:
    // 0x544a98: 0x3e00008  jr          $ra
label_544a9c:
    if (ctx->pc == 0x544A9Cu) {
        ctx->pc = 0x544A9Cu;
            // 0x544a9c: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x544AA0u;
        goto label_544aa0;
    }
    ctx->pc = 0x544A98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x544A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x544A98u;
            // 0x544a9c: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x544AA0u;
label_544aa0:
    // 0x544aa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x544aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_544aa4:
    // 0x544aa4: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x544aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_544aa8:
    // 0x544aa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x544aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_544aac:
    // 0x544aac: 0x9042b6d0  lbu         $v0, -0x4930($v0)
    ctx->pc = 0x544aacu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294948560)));
label_544ab0:
    // 0x544ab0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_544ab4:
    if (ctx->pc == 0x544AB4u) {
        ctx->pc = 0x544AB4u;
            // 0x544ab4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x544AB8u;
        goto label_544ab8;
    }
    ctx->pc = 0x544AB0u;
    {
        const bool branch_taken_0x544ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x544AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x544AB0u;
            // 0x544ab4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x544ab0) {
            ctx->pc = 0x544AD4u;
            goto label_544ad4;
        }
    }
    ctx->pc = 0x544AB8u;
label_544ab8:
    // 0x544ab8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x544ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_544abc:
    // 0x544abc: 0x8c44b6c0  lw          $a0, -0x4940($v0)
    ctx->pc = 0x544abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948544)));
label_544ac0:
    // 0x544ac0: 0xc04a4e2  jal         func_129388
label_544ac4:
    if (ctx->pc == 0x544AC4u) {
        ctx->pc = 0x544AC4u;
            // 0x544ac4: 0x3406fd40  ori         $a2, $zero, 0xFD40 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64832);
        ctx->pc = 0x544AC8u;
        goto label_544ac8;
    }
    ctx->pc = 0x544AC0u;
    SET_GPR_U32(ctx, 31, 0x544AC8u);
    ctx->pc = 0x544AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x544AC0u;
            // 0x544ac4: 0x3406fd40  ori         $a2, $zero, 0xFD40 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64832);
        ctx->in_delay_slot = false;
    ctx->pc = 0x129388u;
    if (runtime->hasFunction(0x129388u)) {
        auto targetFn = runtime->lookupFunction(0x129388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x544AC8u; }
        if (ctx->pc != 0x544AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129388_0x129388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x544AC8u; }
        if (ctx->pc != 0x544AC8u) { return; }
    }
    ctx->pc = 0x544AC8u;
label_544ac8:
    // 0x544ac8: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x544ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_544acc:
    // 0x544acc: 0x10000002  b           . + 4 + (0x2 << 2)
label_544ad0:
    if (ctx->pc == 0x544AD0u) {
        ctx->pc = 0x544AD0u;
            // 0x544ad0: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x544AD4u;
        goto label_544ad4;
    }
    ctx->pc = 0x544ACCu;
    {
        const bool branch_taken_0x544acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x544AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x544ACCu;
            // 0x544ad0: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x544acc) {
            ctx->pc = 0x544AD8u;
            goto label_544ad8;
        }
    }
    ctx->pc = 0x544AD4u;
label_544ad4:
    // 0x544ad4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x544ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_544ad8:
    // 0x544ad8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x544ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_544adc:
    // 0x544adc: 0x3e00008  jr          $ra
label_544ae0:
    if (ctx->pc == 0x544AE0u) {
        ctx->pc = 0x544AE0u;
            // 0x544ae0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x544AE4u;
        goto label_544ae4;
    }
    ctx->pc = 0x544ADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x544AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x544ADCu;
            // 0x544ae0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x544AE4u;
label_544ae4:
    // 0x544ae4: 0x0  nop
    ctx->pc = 0x544ae4u;
    // NOP
label_544ae8:
    // 0x544ae8: 0x0  nop
    ctx->pc = 0x544ae8u;
    // NOP
label_544aec:
    // 0x544aec: 0x0  nop
    ctx->pc = 0x544aecu;
    // NOP
label_544af0:
    // 0x544af0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x544af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_544af4:
    // 0x544af4: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x544af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_544af8:
    // 0x544af8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x544af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_544afc:
    // 0x544afc: 0x9042b6c8  lbu         $v0, -0x4938($v0)
    ctx->pc = 0x544afcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294948552)));
label_544b00:
    // 0x544b00: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_544b04:
    if (ctx->pc == 0x544B04u) {
        ctx->pc = 0x544B04u;
            // 0x544b04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x544B08u;
        goto label_544b08;
    }
    ctx->pc = 0x544B00u;
    {
        const bool branch_taken_0x544b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x544B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x544B00u;
            // 0x544b04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x544b00) {
            ctx->pc = 0x544B24u;
            goto label_544b24;
        }
    }
    ctx->pc = 0x544B08u;
label_544b08:
    // 0x544b08: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x544b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_544b0c:
    // 0x544b0c: 0x8c44b6b8  lw          $a0, -0x4948($v0)
    ctx->pc = 0x544b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948536)));
label_544b10:
    // 0x544b10: 0xc04a4e2  jal         func_129388
label_544b14:
    if (ctx->pc == 0x544B14u) {
        ctx->pc = 0x544B14u;
            // 0x544b14: 0x24064000  addiu       $a2, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->pc = 0x544B18u;
        goto label_544b18;
    }
    ctx->pc = 0x544B10u;
    SET_GPR_U32(ctx, 31, 0x544B18u);
    ctx->pc = 0x544B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x544B10u;
            // 0x544b14: 0x24064000  addiu       $a2, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129388u;
    if (runtime->hasFunction(0x129388u)) {
        auto targetFn = runtime->lookupFunction(0x129388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x544B18u; }
        if (ctx->pc != 0x544B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129388_0x129388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x544B18u; }
        if (ctx->pc != 0x544B18u) { return; }
    }
    ctx->pc = 0x544B18u;
label_544b18:
    // 0x544b18: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x544b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_544b1c:
    // 0x544b1c: 0x10000002  b           . + 4 + (0x2 << 2)
label_544b20:
    if (ctx->pc == 0x544B20u) {
        ctx->pc = 0x544B20u;
            // 0x544b20: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x544B24u;
        goto label_544b24;
    }
    ctx->pc = 0x544B1Cu;
    {
        const bool branch_taken_0x544b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x544B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x544B1Cu;
            // 0x544b20: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x544b1c) {
            ctx->pc = 0x544B28u;
            goto label_544b28;
        }
    }
    ctx->pc = 0x544B24u;
label_544b24:
    // 0x544b24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x544b24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_544b28:
    // 0x544b28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x544b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_544b2c:
    // 0x544b2c: 0x3e00008  jr          $ra
label_544b30:
    if (ctx->pc == 0x544B30u) {
        ctx->pc = 0x544B30u;
            // 0x544b30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x544B34u;
        goto label_544b34;
    }
    ctx->pc = 0x544B2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x544B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x544B2Cu;
            // 0x544b30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x544B34u;
label_544b34:
    // 0x544b34: 0x0  nop
    ctx->pc = 0x544b34u;
    // NOP
label_544b38:
    // 0x544b38: 0x0  nop
    ctx->pc = 0x544b38u;
    // NOP
label_544b3c:
    // 0x544b3c: 0x0  nop
    ctx->pc = 0x544b3cu;
    // NOP
}
