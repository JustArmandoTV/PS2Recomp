#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00157670
// Address: 0x157670 - 0x157aa0
void sub_00157670_0x157670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157670_0x157670");
#endif

    switch (ctx->pc) {
        case 0x157670u: goto label_157670;
        case 0x157674u: goto label_157674;
        case 0x157678u: goto label_157678;
        case 0x15767cu: goto label_15767c;
        case 0x157680u: goto label_157680;
        case 0x157684u: goto label_157684;
        case 0x157688u: goto label_157688;
        case 0x15768cu: goto label_15768c;
        case 0x157690u: goto label_157690;
        case 0x157694u: goto label_157694;
        case 0x157698u: goto label_157698;
        case 0x15769cu: goto label_15769c;
        case 0x1576a0u: goto label_1576a0;
        case 0x1576a4u: goto label_1576a4;
        case 0x1576a8u: goto label_1576a8;
        case 0x1576acu: goto label_1576ac;
        case 0x1576b0u: goto label_1576b0;
        case 0x1576b4u: goto label_1576b4;
        case 0x1576b8u: goto label_1576b8;
        case 0x1576bcu: goto label_1576bc;
        case 0x1576c0u: goto label_1576c0;
        case 0x1576c4u: goto label_1576c4;
        case 0x1576c8u: goto label_1576c8;
        case 0x1576ccu: goto label_1576cc;
        case 0x1576d0u: goto label_1576d0;
        case 0x1576d4u: goto label_1576d4;
        case 0x1576d8u: goto label_1576d8;
        case 0x1576dcu: goto label_1576dc;
        case 0x1576e0u: goto label_1576e0;
        case 0x1576e4u: goto label_1576e4;
        case 0x1576e8u: goto label_1576e8;
        case 0x1576ecu: goto label_1576ec;
        case 0x1576f0u: goto label_1576f0;
        case 0x1576f4u: goto label_1576f4;
        case 0x1576f8u: goto label_1576f8;
        case 0x1576fcu: goto label_1576fc;
        case 0x157700u: goto label_157700;
        case 0x157704u: goto label_157704;
        case 0x157708u: goto label_157708;
        case 0x15770cu: goto label_15770c;
        case 0x157710u: goto label_157710;
        case 0x157714u: goto label_157714;
        case 0x157718u: goto label_157718;
        case 0x15771cu: goto label_15771c;
        case 0x157720u: goto label_157720;
        case 0x157724u: goto label_157724;
        case 0x157728u: goto label_157728;
        case 0x15772cu: goto label_15772c;
        case 0x157730u: goto label_157730;
        case 0x157734u: goto label_157734;
        case 0x157738u: goto label_157738;
        case 0x15773cu: goto label_15773c;
        case 0x157740u: goto label_157740;
        case 0x157744u: goto label_157744;
        case 0x157748u: goto label_157748;
        case 0x15774cu: goto label_15774c;
        case 0x157750u: goto label_157750;
        case 0x157754u: goto label_157754;
        case 0x157758u: goto label_157758;
        case 0x15775cu: goto label_15775c;
        case 0x157760u: goto label_157760;
        case 0x157764u: goto label_157764;
        case 0x157768u: goto label_157768;
        case 0x15776cu: goto label_15776c;
        case 0x157770u: goto label_157770;
        case 0x157774u: goto label_157774;
        case 0x157778u: goto label_157778;
        case 0x15777cu: goto label_15777c;
        case 0x157780u: goto label_157780;
        case 0x157784u: goto label_157784;
        case 0x157788u: goto label_157788;
        case 0x15778cu: goto label_15778c;
        case 0x157790u: goto label_157790;
        case 0x157794u: goto label_157794;
        case 0x157798u: goto label_157798;
        case 0x15779cu: goto label_15779c;
        case 0x1577a0u: goto label_1577a0;
        case 0x1577a4u: goto label_1577a4;
        case 0x1577a8u: goto label_1577a8;
        case 0x1577acu: goto label_1577ac;
        case 0x1577b0u: goto label_1577b0;
        case 0x1577b4u: goto label_1577b4;
        case 0x1577b8u: goto label_1577b8;
        case 0x1577bcu: goto label_1577bc;
        case 0x1577c0u: goto label_1577c0;
        case 0x1577c4u: goto label_1577c4;
        case 0x1577c8u: goto label_1577c8;
        case 0x1577ccu: goto label_1577cc;
        case 0x1577d0u: goto label_1577d0;
        case 0x1577d4u: goto label_1577d4;
        case 0x1577d8u: goto label_1577d8;
        case 0x1577dcu: goto label_1577dc;
        case 0x1577e0u: goto label_1577e0;
        case 0x1577e4u: goto label_1577e4;
        case 0x1577e8u: goto label_1577e8;
        case 0x1577ecu: goto label_1577ec;
        case 0x1577f0u: goto label_1577f0;
        case 0x1577f4u: goto label_1577f4;
        case 0x1577f8u: goto label_1577f8;
        case 0x1577fcu: goto label_1577fc;
        case 0x157800u: goto label_157800;
        case 0x157804u: goto label_157804;
        case 0x157808u: goto label_157808;
        case 0x15780cu: goto label_15780c;
        case 0x157810u: goto label_157810;
        case 0x157814u: goto label_157814;
        case 0x157818u: goto label_157818;
        case 0x15781cu: goto label_15781c;
        case 0x157820u: goto label_157820;
        case 0x157824u: goto label_157824;
        case 0x157828u: goto label_157828;
        case 0x15782cu: goto label_15782c;
        case 0x157830u: goto label_157830;
        case 0x157834u: goto label_157834;
        case 0x157838u: goto label_157838;
        case 0x15783cu: goto label_15783c;
        case 0x157840u: goto label_157840;
        case 0x157844u: goto label_157844;
        case 0x157848u: goto label_157848;
        case 0x15784cu: goto label_15784c;
        case 0x157850u: goto label_157850;
        case 0x157854u: goto label_157854;
        case 0x157858u: goto label_157858;
        case 0x15785cu: goto label_15785c;
        case 0x157860u: goto label_157860;
        case 0x157864u: goto label_157864;
        case 0x157868u: goto label_157868;
        case 0x15786cu: goto label_15786c;
        case 0x157870u: goto label_157870;
        case 0x157874u: goto label_157874;
        case 0x157878u: goto label_157878;
        case 0x15787cu: goto label_15787c;
        case 0x157880u: goto label_157880;
        case 0x157884u: goto label_157884;
        case 0x157888u: goto label_157888;
        case 0x15788cu: goto label_15788c;
        case 0x157890u: goto label_157890;
        case 0x157894u: goto label_157894;
        case 0x157898u: goto label_157898;
        case 0x15789cu: goto label_15789c;
        case 0x1578a0u: goto label_1578a0;
        case 0x1578a4u: goto label_1578a4;
        case 0x1578a8u: goto label_1578a8;
        case 0x1578acu: goto label_1578ac;
        case 0x1578b0u: goto label_1578b0;
        case 0x1578b4u: goto label_1578b4;
        case 0x1578b8u: goto label_1578b8;
        case 0x1578bcu: goto label_1578bc;
        case 0x1578c0u: goto label_1578c0;
        case 0x1578c4u: goto label_1578c4;
        case 0x1578c8u: goto label_1578c8;
        case 0x1578ccu: goto label_1578cc;
        case 0x1578d0u: goto label_1578d0;
        case 0x1578d4u: goto label_1578d4;
        case 0x1578d8u: goto label_1578d8;
        case 0x1578dcu: goto label_1578dc;
        case 0x1578e0u: goto label_1578e0;
        case 0x1578e4u: goto label_1578e4;
        case 0x1578e8u: goto label_1578e8;
        case 0x1578ecu: goto label_1578ec;
        case 0x1578f0u: goto label_1578f0;
        case 0x1578f4u: goto label_1578f4;
        case 0x1578f8u: goto label_1578f8;
        case 0x1578fcu: goto label_1578fc;
        case 0x157900u: goto label_157900;
        case 0x157904u: goto label_157904;
        case 0x157908u: goto label_157908;
        case 0x15790cu: goto label_15790c;
        case 0x157910u: goto label_157910;
        case 0x157914u: goto label_157914;
        case 0x157918u: goto label_157918;
        case 0x15791cu: goto label_15791c;
        case 0x157920u: goto label_157920;
        case 0x157924u: goto label_157924;
        case 0x157928u: goto label_157928;
        case 0x15792cu: goto label_15792c;
        case 0x157930u: goto label_157930;
        case 0x157934u: goto label_157934;
        case 0x157938u: goto label_157938;
        case 0x15793cu: goto label_15793c;
        case 0x157940u: goto label_157940;
        case 0x157944u: goto label_157944;
        case 0x157948u: goto label_157948;
        case 0x15794cu: goto label_15794c;
        case 0x157950u: goto label_157950;
        case 0x157954u: goto label_157954;
        case 0x157958u: goto label_157958;
        case 0x15795cu: goto label_15795c;
        case 0x157960u: goto label_157960;
        case 0x157964u: goto label_157964;
        case 0x157968u: goto label_157968;
        case 0x15796cu: goto label_15796c;
        case 0x157970u: goto label_157970;
        case 0x157974u: goto label_157974;
        case 0x157978u: goto label_157978;
        case 0x15797cu: goto label_15797c;
        case 0x157980u: goto label_157980;
        case 0x157984u: goto label_157984;
        case 0x157988u: goto label_157988;
        case 0x15798cu: goto label_15798c;
        case 0x157990u: goto label_157990;
        case 0x157994u: goto label_157994;
        case 0x157998u: goto label_157998;
        case 0x15799cu: goto label_15799c;
        case 0x1579a0u: goto label_1579a0;
        case 0x1579a4u: goto label_1579a4;
        case 0x1579a8u: goto label_1579a8;
        case 0x1579acu: goto label_1579ac;
        case 0x1579b0u: goto label_1579b0;
        case 0x1579b4u: goto label_1579b4;
        case 0x1579b8u: goto label_1579b8;
        case 0x1579bcu: goto label_1579bc;
        case 0x1579c0u: goto label_1579c0;
        case 0x1579c4u: goto label_1579c4;
        case 0x1579c8u: goto label_1579c8;
        case 0x1579ccu: goto label_1579cc;
        case 0x1579d0u: goto label_1579d0;
        case 0x1579d4u: goto label_1579d4;
        case 0x1579d8u: goto label_1579d8;
        case 0x1579dcu: goto label_1579dc;
        case 0x1579e0u: goto label_1579e0;
        case 0x1579e4u: goto label_1579e4;
        case 0x1579e8u: goto label_1579e8;
        case 0x1579ecu: goto label_1579ec;
        case 0x1579f0u: goto label_1579f0;
        case 0x1579f4u: goto label_1579f4;
        case 0x1579f8u: goto label_1579f8;
        case 0x1579fcu: goto label_1579fc;
        case 0x157a00u: goto label_157a00;
        case 0x157a04u: goto label_157a04;
        case 0x157a08u: goto label_157a08;
        case 0x157a0cu: goto label_157a0c;
        case 0x157a10u: goto label_157a10;
        case 0x157a14u: goto label_157a14;
        case 0x157a18u: goto label_157a18;
        case 0x157a1cu: goto label_157a1c;
        case 0x157a20u: goto label_157a20;
        case 0x157a24u: goto label_157a24;
        case 0x157a28u: goto label_157a28;
        case 0x157a2cu: goto label_157a2c;
        case 0x157a30u: goto label_157a30;
        case 0x157a34u: goto label_157a34;
        case 0x157a38u: goto label_157a38;
        case 0x157a3cu: goto label_157a3c;
        case 0x157a40u: goto label_157a40;
        case 0x157a44u: goto label_157a44;
        case 0x157a48u: goto label_157a48;
        case 0x157a4cu: goto label_157a4c;
        case 0x157a50u: goto label_157a50;
        case 0x157a54u: goto label_157a54;
        case 0x157a58u: goto label_157a58;
        case 0x157a5cu: goto label_157a5c;
        case 0x157a60u: goto label_157a60;
        case 0x157a64u: goto label_157a64;
        case 0x157a68u: goto label_157a68;
        case 0x157a6cu: goto label_157a6c;
        case 0x157a70u: goto label_157a70;
        case 0x157a74u: goto label_157a74;
        case 0x157a78u: goto label_157a78;
        case 0x157a7cu: goto label_157a7c;
        case 0x157a80u: goto label_157a80;
        case 0x157a84u: goto label_157a84;
        case 0x157a88u: goto label_157a88;
        case 0x157a8cu: goto label_157a8c;
        case 0x157a90u: goto label_157a90;
        case 0x157a94u: goto label_157a94;
        case 0x157a98u: goto label_157a98;
        case 0x157a9cu: goto label_157a9c;
        default: break;
    }

    ctx->pc = 0x157670u;

label_157670:
    // 0x157670: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x157670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_157674:
    // 0x157674: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x157674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_157678:
    // 0x157678: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x157678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_15767c:
    // 0x15767c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15767cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_157680:
    // 0x157680: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x157680u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_157684:
    // 0x157684: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x157684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_157688:
    // 0x157688: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x157688u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_15768c:
    // 0x15768c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15768cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_157690:
    // 0x157690: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x157690u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_157694:
    // 0x157694: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x157694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_157698:
    // 0x157698: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x157698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15769c:
    // 0x15769c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15769cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1576a0:
    // 0x1576a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1576a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1576a4:
    // 0x1576a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1576a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1576a8:
    // 0x1576a8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1576a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1576ac:
    // 0x1576ac: 0x8cb30008  lw          $s3, 0x8($a1)
    ctx->pc = 0x1576acu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1576b0:
    // 0x1576b0: 0xafa600b8  sw          $a2, 0xB8($sp)
    ctx->pc = 0x1576b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 6));
label_1576b4:
    // 0x1576b4: 0xafa900b4  sw          $t1, 0xB4($sp)
    ctx->pc = 0x1576b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 9));
label_1576b8:
    // 0x1576b8: 0xafa500bc  sw          $a1, 0xBC($sp)
    ctx->pc = 0x1576b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 5));
label_1576bc:
    // 0x1576bc: 0x186000ec  blez        $v1, . + 4 + (0xEC << 2)
label_1576c0:
    if (ctx->pc == 0x1576C0u) {
        ctx->pc = 0x1576C0u;
            // 0x1576c0: 0xafa000a0  sw          $zero, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x1576C4u;
        goto label_1576c4;
    }
    ctx->pc = 0x1576BCu;
    {
        const bool branch_taken_0x1576bc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1576C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1576BCu;
            // 0x1576c0: 0xafa000a0  sw          $zero, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1576bc) {
            ctx->pc = 0x157A70u;
            goto label_157a70;
        }
    }
    ctx->pc = 0x1576C4u;
label_1576c4:
    // 0x1576c4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1576c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1576c8:
    // 0x1576c8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1576c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_1576cc:
    // 0x1576cc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1576ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_1576d0:
    // 0x1576d0: 0xac825774  sw          $v0, 0x5774($a0)
    ctx->pc = 0x1576d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 22388), GPR_U32(ctx, 2));
label_1576d4:
    // 0x1576d4: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x1576d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_1576d8:
    // 0x1576d8: 0xac625770  sw          $v0, 0x5770($v1)
    ctx->pc = 0x1576d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22384), GPR_U32(ctx, 2));
label_1576dc:
    // 0x1576dc: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1576dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_1576e0:
    // 0x1576e0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1576e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1576e4:
    // 0x1576e4: 0xc0535e0  jal         func_14D780
label_1576e8:
    if (ctx->pc == 0x1576E8u) {
        ctx->pc = 0x1576E8u;
            // 0x1576e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1576ECu;
        goto label_1576ec;
    }
    ctx->pc = 0x1576E4u;
    SET_GPR_U32(ctx, 31, 0x1576ECu);
    ctx->pc = 0x1576E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1576E4u;
            // 0x1576e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14D780u;
    if (runtime->hasFunction(0x14D780u)) {
        auto targetFn = runtime->lookupFunction(0x14D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1576ECu; }
        if (ctx->pc != 0x1576ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D780_0x14d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1576ECu; }
        if (ctx->pc != 0x1576ECu) { return; }
    }
    ctx->pc = 0x1576ECu;
label_1576ec:
    // 0x1576ec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1576ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1576f0:
    // 0x1576f0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1576f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_1576f4:
    // 0x1576f4: 0x8c445760  lw          $a0, 0x5760($v0)
    ctx->pc = 0x1576f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22368)));
label_1576f8:
    // 0x1576f8: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x1576f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
label_1576fc:
    // 0x1576fc: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x1576fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_157700:
    // 0x157700: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x157700u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
label_157704:
    // 0x157704: 0xac645764  sw          $a0, 0x5764($v1)
    ctx->pc = 0x157704u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22372), GPR_U32(ctx, 4));
label_157708:
    // 0x157708: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x157708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_15770c:
    // 0x15770c: 0x8e690018  lw          $t1, 0x18($s3)
    ctx->pc = 0x15770cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_157710:
    // 0x157710: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x157710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_157714:
    // 0x157714: 0x8c485768  lw          $t0, 0x5768($v0)
    ctx->pc = 0x157714u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22376)));
label_157718:
    // 0x157718: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x157718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_15771c:
    // 0x15771c: 0xace95760  sw          $t1, 0x5760($a3)
    ctx->pc = 0x15771cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 22368), GPR_U32(ctx, 9));
label_157720:
    // 0x157720: 0x8ec70014  lw          $a3, 0x14($s6)
    ctx->pc = 0x157720u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
label_157724:
    // 0x157724: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x157724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_157728:
    // 0x157728: 0x8c425814  lw          $v0, 0x5814($v0)
    ctx->pc = 0x157728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22548)));
label_15772c:
    // 0x15772c: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x15772cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_157730:
    // 0x157730: 0xaca8576c  sw          $t0, 0x576C($a1)
    ctx->pc = 0x157730u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 22380), GPR_U32(ctx, 8));
label_157734:
    // 0x157734: 0xe92821  addu        $a1, $a3, $t1
    ctx->pc = 0x157734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_157738:
    // 0x157738: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x157738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_15773c:
    // 0x15773c: 0xacc5577c  sw          $a1, 0x577C($a2)
    ctx->pc = 0x15773cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 22396), GPR_U32(ctx, 5));
label_157740:
    // 0x157740: 0x8e65001c  lw          $a1, 0x1C($s3)
    ctx->pc = 0x157740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_157744:
    // 0x157744: 0xac855768  sw          $a1, 0x5768($a0)
    ctx->pc = 0x157744u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 22376), GPR_U32(ctx, 5));
label_157748:
    // 0x157748: 0x8ec4001c  lw          $a0, 0x1C($s6)
    ctx->pc = 0x157748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
label_15774c:
    // 0x15774c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x15774cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_157750:
    // 0x157750: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x157750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_157754:
    // 0x157754: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_157758:
    if (ctx->pc == 0x157758u) {
        ctx->pc = 0x157758u;
            // 0x157758: 0xac645780  sw          $a0, 0x5780($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22400), GPR_U32(ctx, 4));
        ctx->pc = 0x15775Cu;
        goto label_15775c;
    }
    ctx->pc = 0x157754u;
    {
        const bool branch_taken_0x157754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157754u;
            // 0x157758: 0xac645780  sw          $a0, 0x5780($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22400), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157754) {
            ctx->pc = 0x157838u;
            goto label_157838;
        }
    }
    ctx->pc = 0x15775Cu;
label_15775c:
    // 0x15775c: 0xc053658  jal         func_14D960
label_157760:
    if (ctx->pc == 0x157760u) {
        ctx->pc = 0x157764u;
        goto label_157764;
    }
    ctx->pc = 0x15775Cu;
    SET_GPR_U32(ctx, 31, 0x157764u);
    ctx->pc = 0x14D960u;
    if (runtime->hasFunction(0x14D960u)) {
        auto targetFn = runtime->lookupFunction(0x14D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157764u; }
        if (ctx->pc != 0x157764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D960_0x14d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157764u; }
        if (ctx->pc != 0x157764u) { return; }
    }
    ctx->pc = 0x157764u;
label_157764:
    // 0x157764: 0x1bc000b8  blez        $fp, . + 4 + (0xB8 << 2)
label_157768:
    if (ctx->pc == 0x157768u) {
        ctx->pc = 0x157768u;
            // 0x157768: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15776Cu;
        goto label_15776c;
    }
    ctx->pc = 0x157764u;
    {
        const bool branch_taken_0x157764 = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x157768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157764u;
            // 0x157768: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157764) {
            ctx->pc = 0x157A48u;
            goto label_157a48;
        }
    }
    ctx->pc = 0x15776Cu;
label_15776c:
    // 0x15776c: 0x8fb100b8  lw          $s1, 0xB8($sp)
    ctx->pc = 0x15776cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_157770:
    // 0x157770: 0x2e0a82d  daddu       $s5, $s7, $zero
    ctx->pc = 0x157770u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_157774:
    // 0x157774: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x157774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_157778:
    // 0x157778: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x157778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_15777c:
    // 0x15777c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_157780:
    if (ctx->pc == 0x157780u) {
        ctx->pc = 0x157784u;
        goto label_157784;
    }
    ctx->pc = 0x15777Cu;
    {
        const bool branch_taken_0x15777c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15777c) {
            ctx->pc = 0x157790u;
            goto label_157790;
        }
    }
    ctx->pc = 0x157784u;
label_157784:
    // 0x157784: 0x10000006  b           . + 4 + (0x6 << 2)
label_157788:
    if (ctx->pc == 0x157788u) {
        ctx->pc = 0x157788u;
            // 0x157788: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15778Cu;
        goto label_15778c;
    }
    ctx->pc = 0x157784u;
    {
        const bool branch_taken_0x157784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157784u;
            // 0x157788: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157784) {
            ctx->pc = 0x1577A0u;
            goto label_1577a0;
        }
    }
    ctx->pc = 0x15778Cu;
label_15778c:
    // 0x15778c: 0x0  nop
    ctx->pc = 0x15778cu;
    // NOP
label_157790:
    // 0x157790: 0x8e140000  lw          $s4, 0x0($s0)
    ctx->pc = 0x157790u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_157794:
    // 0x157794: 0x128000a6  beqz        $s4, . + 4 + (0xA6 << 2)
label_157798:
    if (ctx->pc == 0x157798u) {
        ctx->pc = 0x15779Cu;
        goto label_15779c;
    }
    ctx->pc = 0x157794u;
    {
        const bool branch_taken_0x157794 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x157794) {
            ctx->pc = 0x157A30u;
            goto label_157a30;
        }
    }
    ctx->pc = 0x15779Cu;
label_15779c:
    // 0x15779c: 0x0  nop
    ctx->pc = 0x15779cu;
    // NOP
label_1577a0:
    // 0x1577a0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1577a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1577a4:
    // 0x1577a4: 0x16e00003  bnez        $s7, . + 4 + (0x3 << 2)
label_1577a8:
    if (ctx->pc == 0x1577A8u) {
        ctx->pc = 0x1577A8u;
            // 0x1577a8: 0xac545788  sw          $s4, 0x5788($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22408), GPR_U32(ctx, 20));
        ctx->pc = 0x1577ACu;
        goto label_1577ac;
    }
    ctx->pc = 0x1577A4u;
    {
        const bool branch_taken_0x1577a4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x1577A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1577A4u;
            // 0x1577a8: 0xac545788  sw          $s4, 0x5788($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22408), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1577a4) {
            ctx->pc = 0x1577B4u;
            goto label_1577b4;
        }
    }
    ctx->pc = 0x1577ACu;
label_1577ac:
    // 0x1577ac: 0x10000002  b           . + 4 + (0x2 << 2)
label_1577b0:
    if (ctx->pc == 0x1577B0u) {
        ctx->pc = 0x1577B0u;
            // 0x1577b0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1577B4u;
        goto label_1577b4;
    }
    ctx->pc = 0x1577ACu;
    {
        const bool branch_taken_0x1577ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1577B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1577ACu;
            // 0x1577b0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1577ac) {
            ctx->pc = 0x1577B8u;
            goto label_1577b8;
        }
    }
    ctx->pc = 0x1577B4u;
label_1577b4:
    // 0x1577b4: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x1577b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1577b8:
    // 0x1577b8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1577b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1577bc:
    // 0x1577bc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1577c0:
    if (ctx->pc == 0x1577C0u) {
        ctx->pc = 0x1577C0u;
            // 0x1577c0: 0xac43578c  sw          $v1, 0x578C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22412), GPR_U32(ctx, 3));
        ctx->pc = 0x1577C4u;
        goto label_1577c4;
    }
    ctx->pc = 0x1577BCu;
    {
        const bool branch_taken_0x1577bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1577C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1577BCu;
            // 0x1577c0: 0xac43578c  sw          $v1, 0x578C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22412), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1577bc) {
            ctx->pc = 0x1577DCu;
            goto label_1577dc;
        }
    }
    ctx->pc = 0x1577C4u;
label_1577c4:
    // 0x1577c4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1577c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1577c8:
    // 0x1577c8: 0x8c425770  lw          $v0, 0x5770($v0)
    ctx->pc = 0x1577c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22384)));
label_1577cc:
    // 0x1577cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1577ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1577d0:
    // 0x1577d0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1577d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1577d4:
    // 0x1577d4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1577d8:
    if (ctx->pc == 0x1577D8u) {
        ctx->pc = 0x1577D8u;
            // 0x1577d8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x1577DCu;
        goto label_1577dc;
    }
    ctx->pc = 0x1577D4u;
    {
        const bool branch_taken_0x1577d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1577D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1577D4u;
            // 0x1577d8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1577d4) {
            ctx->pc = 0x1577E0u;
            goto label_1577e0;
        }
    }
    ctx->pc = 0x1577DCu;
label_1577dc:
    // 0x1577dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1577dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1577e0:
    // 0x1577e0: 0xc055500  jal         func_155400
label_1577e4:
    if (ctx->pc == 0x1577E4u) {
        ctx->pc = 0x1577E8u;
        goto label_1577e8;
    }
    ctx->pc = 0x1577E0u;
    SET_GPR_U32(ctx, 31, 0x1577E8u);
    ctx->pc = 0x155400u;
    if (runtime->hasFunction(0x155400u)) {
        auto targetFn = runtime->lookupFunction(0x155400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1577E8u; }
        if (ctx->pc != 0x1577E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155400_0x155400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1577E8u; }
        if (ctx->pc != 0x1577E8u) { return; }
    }
    ctx->pc = 0x1577E8u;
label_1577e8:
    // 0x1577e8: 0x14400091  bnez        $v0, . + 4 + (0x91 << 2)
label_1577ec:
    if (ctx->pc == 0x1577ECu) {
        ctx->pc = 0x1577F0u;
        goto label_1577f0;
    }
    ctx->pc = 0x1577E8u;
    {
        const bool branch_taken_0x1577e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1577e8) {
            ctx->pc = 0x157A30u;
            goto label_157a30;
        }
    }
    ctx->pc = 0x1577F0u;
label_1577f0:
    // 0x1577f0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1577f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1577f4:
    // 0x1577f4: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x1577f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1577f8:
    // 0x1577f8: 0x8c445780  lw          $a0, 0x5780($v0)
    ctx->pc = 0x1577f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22400)));
label_1577fc:
    // 0x1577fc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1577fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_157800:
    // 0x157800: 0x8e670014  lw          $a3, 0x14($s3)
    ctx->pc = 0x157800u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_157804:
    // 0x157804: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x157804u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_157808:
    // 0x157808: 0x8ec20024  lw          $v0, 0x24($s6)
    ctx->pc = 0x157808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
label_15780c:
    // 0x15780c: 0xc053684  jal         func_14DA10
label_157810:
    if (ctx->pc == 0x157810u) {
        ctx->pc = 0x157810u;
            // 0x157810: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x157814u;
        goto label_157814;
    }
    ctx->pc = 0x15780Cu;
    SET_GPR_U32(ctx, 31, 0x157814u);
    ctx->pc = 0x157810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15780Cu;
            // 0x157810: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DA10u;
    if (runtime->hasFunction(0x14DA10u)) {
        auto targetFn = runtime->lookupFunction(0x14DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157814u; }
        if (ctx->pc != 0x157814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014DA10_0x14da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157814u; }
        if (ctx->pc != 0x157814u) { return; }
    }
    ctx->pc = 0x157814u;
label_157814:
    // 0x157814: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x157814u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_157818:
    // 0x157818: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x157818u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_15781c:
    // 0x15781c: 0x25e182a  slt         $v1, $s2, $fp
    ctx->pc = 0x15781cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_157820:
    // 0x157820: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x157820u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_157824:
    // 0x157824: 0x1460ffd4  bnez        $v1, . + 4 + (-0x2C << 2)
label_157828:
    if (ctx->pc == 0x157828u) {
        ctx->pc = 0x157828u;
            // 0x157828: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x15782Cu;
        goto label_15782c;
    }
    ctx->pc = 0x157824u;
    {
        const bool branch_taken_0x157824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157824u;
            // 0x157828: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157824) {
            ctx->pc = 0x157778u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_157778;
        }
    }
    ctx->pc = 0x15782Cu;
label_15782c:
    // 0x15782c: 0x10000086  b           . + 4 + (0x86 << 2)
label_157830:
    if (ctx->pc == 0x157830u) {
        ctx->pc = 0x157834u;
        goto label_157834;
    }
    ctx->pc = 0x15782Cu;
    {
        const bool branch_taken_0x15782c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15782c) {
            ctx->pc = 0x157A48u;
            goto label_157a48;
        }
    }
    ctx->pc = 0x157834u;
label_157834:
    // 0x157834: 0x0  nop
    ctx->pc = 0x157834u;
    // NOP
label_157838:
    // 0x157838: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x157838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_15783c:
    // 0x15783c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x15783cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_157840:
    // 0x157840: 0xac405798  sw          $zero, 0x5798($v0)
    ctx->pc = 0x157840u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22424), GPR_U32(ctx, 0));
label_157844:
    // 0x157844: 0xc05056c  jal         func_1415B0
label_157848:
    if (ctx->pc == 0x157848u) {
        ctx->pc = 0x157848u;
            // 0x157848: 0x24845760  addiu       $a0, $a0, 0x5760 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22368));
        ctx->pc = 0x15784Cu;
        goto label_15784c;
    }
    ctx->pc = 0x157844u;
    SET_GPR_U32(ctx, 31, 0x15784Cu);
    ctx->pc = 0x157848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157844u;
            // 0x157848: 0x24845760  addiu       $a0, $a0, 0x5760 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1415B0u;
    if (runtime->hasFunction(0x1415B0u)) {
        auto targetFn = runtime->lookupFunction(0x1415B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15784Cu; }
        if (ctx->pc != 0x15784Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001415B0_0x1415b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15784Cu; }
        if (ctx->pc != 0x15784Cu) { return; }
    }
    ctx->pc = 0x15784Cu;
label_15784c:
    // 0x15784c: 0x1040007e  beqz        $v0, . + 4 + (0x7E << 2)
label_157850:
    if (ctx->pc == 0x157850u) {
        ctx->pc = 0x157854u;
        goto label_157854;
    }
    ctx->pc = 0x15784Cu;
    {
        const bool branch_taken_0x15784c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15784c) {
            ctx->pc = 0x157A48u;
            goto label_157a48;
        }
    }
    ctx->pc = 0x157854u;
label_157854:
    // 0x157854: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x157854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_157858:
    // 0x157858: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x157858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_15785c:
    // 0x15785c: 0x8c655824  lw          $a1, 0x5824($v1)
    ctx->pc = 0x15785cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22564)));
label_157860:
    // 0x157860: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x157860u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_157864:
    // 0x157864: 0x8c845828  lw          $a0, 0x5828($a0)
    ctx->pc = 0x157864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22568)));
label_157868:
    // 0x157868: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x157868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_15786c:
    // 0x15786c: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x15786cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_157870:
    // 0x157870: 0x10000071  b           . + 4 + (0x71 << 2)
label_157874:
    if (ctx->pc == 0x157874u) {
        ctx->pc = 0x157874u;
            // 0x157874: 0xac645824  sw          $a0, 0x5824($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22564), GPR_U32(ctx, 4));
        ctx->pc = 0x157878u;
        goto label_157878;
    }
    ctx->pc = 0x157870u;
    {
        const bool branch_taken_0x157870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157870u;
            // 0x157874: 0xac645824  sw          $a0, 0x5824($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22564), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157870) {
            ctx->pc = 0x157A38u;
            goto label_157a38;
        }
    }
    ctx->pc = 0x157878u;
label_157878:
    // 0x157878: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x157878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_15787c:
    // 0x15787c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_157880:
    if (ctx->pc == 0x157880u) {
        ctx->pc = 0x157884u;
        goto label_157884;
    }
    ctx->pc = 0x15787Cu;
    {
        const bool branch_taken_0x15787c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15787c) {
            ctx->pc = 0x157898u;
            goto label_157898;
        }
    }
    ctx->pc = 0x157884u;
label_157884:
    // 0x157884: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x157884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_157888:
    // 0x157888: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x157888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
label_15788c:
    // 0x15788c: 0x10000008  b           . + 4 + (0x8 << 2)
label_157890:
    if (ctx->pc == 0x157890u) {
        ctx->pc = 0x157890u;
            // 0x157890: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x157894u;
        goto label_157894;
    }
    ctx->pc = 0x15788Cu;
    {
        const bool branch_taken_0x15788c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15788Cu;
            // 0x157890: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15788c) {
            ctx->pc = 0x1578B0u;
            goto label_1578b0;
        }
    }
    ctx->pc = 0x157894u;
label_157894:
    // 0x157894: 0x0  nop
    ctx->pc = 0x157894u;
    // NOP
label_157898:
    // 0x157898: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x157898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_15789c:
    // 0x15789c: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x15789cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1578a0:
    // 0x1578a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1578a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1578a4:
    // 0x1578a4: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1578a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1578a8:
    // 0x1578a8: 0x12000061  beqz        $s0, . + 4 + (0x61 << 2)
label_1578ac:
    if (ctx->pc == 0x1578ACu) {
        ctx->pc = 0x1578B0u;
        goto label_1578b0;
    }
    ctx->pc = 0x1578A8u;
    {
        const bool branch_taken_0x1578a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1578a8) {
            ctx->pc = 0x157A30u;
            goto label_157a30;
        }
    }
    ctx->pc = 0x1578B0u;
label_1578b0:
    // 0x1578b0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1578b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1578b4:
    // 0x1578b4: 0x16e00003  bnez        $s7, . + 4 + (0x3 << 2)
label_1578b8:
    if (ctx->pc == 0x1578B8u) {
        ctx->pc = 0x1578B8u;
            // 0x1578b8: 0xac505788  sw          $s0, 0x5788($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22408), GPR_U32(ctx, 16));
        ctx->pc = 0x1578BCu;
        goto label_1578bc;
    }
    ctx->pc = 0x1578B4u;
    {
        const bool branch_taken_0x1578b4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x1578B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1578B4u;
            // 0x1578b8: 0xac505788  sw          $s0, 0x5788($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22408), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1578b4) {
            ctx->pc = 0x1578C4u;
            goto label_1578c4;
        }
    }
    ctx->pc = 0x1578BCu;
label_1578bc:
    // 0x1578bc: 0x10000004  b           . + 4 + (0x4 << 2)
label_1578c0:
    if (ctx->pc == 0x1578C0u) {
        ctx->pc = 0x1578C0u;
            // 0x1578c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1578C4u;
        goto label_1578c4;
    }
    ctx->pc = 0x1578BCu;
    {
        const bool branch_taken_0x1578bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1578C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1578BCu;
            // 0x1578c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1578bc) {
            ctx->pc = 0x1578D0u;
            goto label_1578d0;
        }
    }
    ctx->pc = 0x1578C4u;
label_1578c4:
    // 0x1578c4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1578c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1578c8:
    // 0x1578c8: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1578c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_1578cc:
    // 0x1578cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1578ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1578d0:
    // 0x1578d0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1578d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1578d4:
    // 0x1578d4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1578d8:
    if (ctx->pc == 0x1578D8u) {
        ctx->pc = 0x1578D8u;
            // 0x1578d8: 0xac43578c  sw          $v1, 0x578C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22412), GPR_U32(ctx, 3));
        ctx->pc = 0x1578DCu;
        goto label_1578dc;
    }
    ctx->pc = 0x1578D4u;
    {
        const bool branch_taken_0x1578d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1578D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1578D4u;
            // 0x1578d8: 0xac43578c  sw          $v1, 0x578C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22412), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1578d4) {
            ctx->pc = 0x1578F4u;
            goto label_1578f4;
        }
    }
    ctx->pc = 0x1578DCu;
label_1578dc:
    // 0x1578dc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1578dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1578e0:
    // 0x1578e0: 0x8c425770  lw          $v0, 0x5770($v0)
    ctx->pc = 0x1578e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22384)));
label_1578e4:
    // 0x1578e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1578e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1578e8:
    // 0x1578e8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1578e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1578ec:
    // 0x1578ec: 0x10000002  b           . + 4 + (0x2 << 2)
label_1578f0:
    if (ctx->pc == 0x1578F0u) {
        ctx->pc = 0x1578F0u;
            // 0x1578f0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x1578F4u;
        goto label_1578f4;
    }
    ctx->pc = 0x1578ECu;
    {
        const bool branch_taken_0x1578ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1578F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1578ECu;
            // 0x1578f0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1578ec) {
            ctx->pc = 0x1578F8u;
            goto label_1578f8;
        }
    }
    ctx->pc = 0x1578F4u;
label_1578f4:
    // 0x1578f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1578f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1578f8:
    // 0x1578f8: 0xc055500  jal         func_155400
label_1578fc:
    if (ctx->pc == 0x1578FCu) {
        ctx->pc = 0x157900u;
        goto label_157900;
    }
    ctx->pc = 0x1578F8u;
    SET_GPR_U32(ctx, 31, 0x157900u);
    ctx->pc = 0x155400u;
    if (runtime->hasFunction(0x155400u)) {
        auto targetFn = runtime->lookupFunction(0x155400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157900u; }
        if (ctx->pc != 0x157900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155400_0x155400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157900u; }
        if (ctx->pc != 0x157900u) { return; }
    }
    ctx->pc = 0x157900u;
label_157900:
    // 0x157900: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
label_157904:
    if (ctx->pc == 0x157904u) {
        ctx->pc = 0x157908u;
        goto label_157908;
    }
    ctx->pc = 0x157900u;
    {
        const bool branch_taken_0x157900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157900) {
            ctx->pc = 0x157A30u;
            goto label_157a30;
        }
    }
    ctx->pc = 0x157908u;
label_157908:
    // 0x157908: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x157908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_15790c:
    // 0x15790c: 0x8c425804  lw          $v0, 0x5804($v0)
    ctx->pc = 0x15790cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22532)));
label_157910:
    // 0x157910: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_157914:
    if (ctx->pc == 0x157914u) {
        ctx->pc = 0x157918u;
        goto label_157918;
    }
    ctx->pc = 0x157910u;
    {
        const bool branch_taken_0x157910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157910) {
            ctx->pc = 0x157938u;
            goto label_157938;
        }
    }
    ctx->pc = 0x157918u;
label_157918:
    // 0x157918: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x157918u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
label_15791c:
    // 0x15791c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x15791cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_157920:
    // 0x157920: 0x24a51fa0  addiu       $a1, $a1, 0x1FA0
    ctx->pc = 0x157920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8096));
label_157924:
    // 0x157924: 0xc04cd60  jal         func_133580
label_157928:
    if (ctx->pc == 0x157928u) {
        ctx->pc = 0x157928u;
            // 0x157928: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15792Cu;
        goto label_15792c;
    }
    ctx->pc = 0x157924u;
    SET_GPR_U32(ctx, 31, 0x15792Cu);
    ctx->pc = 0x157928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157924u;
            // 0x157928: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15792Cu; }
        if (ctx->pc != 0x15792Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15792Cu; }
        if (ctx->pc != 0x15792Cu) { return; }
    }
    ctx->pc = 0x15792Cu;
label_15792c:
    // 0x15792c: 0xc0534dc  jal         func_14D370
label_157930:
    if (ctx->pc == 0x157930u) {
        ctx->pc = 0x157930u;
            // 0x157930: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x157934u;
        goto label_157934;
    }
    ctx->pc = 0x15792Cu;
    SET_GPR_U32(ctx, 31, 0x157934u);
    ctx->pc = 0x157930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15792Cu;
            // 0x157930: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14D370u;
    if (runtime->hasFunction(0x14D370u)) {
        auto targetFn = runtime->lookupFunction(0x14D370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157934u; }
        if (ctx->pc != 0x157934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D370_0x14d370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157934u; }
        if (ctx->pc != 0x157934u) { return; }
    }
    ctx->pc = 0x157934u;
label_157934:
    // 0x157934: 0x0  nop
    ctx->pc = 0x157934u;
    // NOP
label_157938:
    // 0x157938: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x157938u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_15793c:
    // 0x15793c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x15793cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_157940:
    // 0x157940: 0x24a55520  addiu       $a1, $a1, 0x5520
    ctx->pc = 0x157940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21792));
label_157944:
    // 0x157944: 0xc04cd60  jal         func_133580
label_157948:
    if (ctx->pc == 0x157948u) {
        ctx->pc = 0x157948u;
            // 0x157948: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15794Cu;
        goto label_15794c;
    }
    ctx->pc = 0x157944u;
    SET_GPR_U32(ctx, 31, 0x15794Cu);
    ctx->pc = 0x157948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157944u;
            // 0x157948: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15794Cu; }
        if (ctx->pc != 0x15794Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15794Cu; }
        if (ctx->pc != 0x15794Cu) { return; }
    }
    ctx->pc = 0x15794Cu;
label_15794c:
    // 0x15794c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15794cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_157950:
    // 0x157950: 0xc0573e0  jal         func_15CF80
label_157954:
    if (ctx->pc == 0x157954u) {
        ctx->pc = 0x157954u;
            // 0x157954: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x157958u;
        goto label_157958;
    }
    ctx->pc = 0x157950u;
    SET_GPR_U32(ctx, 31, 0x157958u);
    ctx->pc = 0x157954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157950u;
            // 0x157954: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF80u;
    if (runtime->hasFunction(0x15CF80u)) {
        auto targetFn = runtime->lookupFunction(0x15CF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157958u; }
        if (ctx->pc != 0x157958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF80_0x15cf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157958u; }
        if (ctx->pc != 0x157958u) { return; }
    }
    ctx->pc = 0x157958u;
label_157958:
    // 0x157958: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x157958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_15795c:
    // 0x15795c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15795cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_157960:
    // 0x157960: 0x8c425828  lw          $v0, 0x5828($v0)
    ctx->pc = 0x157960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22568)));
label_157964:
    // 0x157964: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x157964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_157968:
    // 0x157968: 0x1065001d  beq         $v1, $a1, . + 4 + (0x1D << 2)
label_15796c:
    if (ctx->pc == 0x15796Cu) {
        ctx->pc = 0x157970u;
        goto label_157970;
    }
    ctx->pc = 0x157968u;
    {
        const bool branch_taken_0x157968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x157968) {
            ctx->pc = 0x1579E0u;
            goto label_1579e0;
        }
    }
    ctx->pc = 0x157970u;
label_157970:
    // 0x157970: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x157970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_157974:
    // 0x157974: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_157978:
    if (ctx->pc == 0x157978u) {
        ctx->pc = 0x15797Cu;
        goto label_15797c;
    }
    ctx->pc = 0x157974u;
    {
        const bool branch_taken_0x157974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x157974) {
            ctx->pc = 0x1579C8u;
            goto label_1579c8;
        }
    }
    ctx->pc = 0x15797Cu;
label_15797c:
    // 0x15797c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x15797cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_157980:
    // 0x157980: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_157984:
    if (ctx->pc == 0x157984u) {
        ctx->pc = 0x157988u;
        goto label_157988;
    }
    ctx->pc = 0x157980u;
    {
        const bool branch_taken_0x157980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x157980) {
            ctx->pc = 0x1579B8u;
            goto label_1579b8;
        }
    }
    ctx->pc = 0x157988u;
label_157988:
    // 0x157988: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x157988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_15798c:
    // 0x15798c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_157990:
    if (ctx->pc == 0x157990u) {
        ctx->pc = 0x157994u;
        goto label_157994;
    }
    ctx->pc = 0x15798Cu;
    {
        const bool branch_taken_0x15798c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15798c) {
            ctx->pc = 0x1579A0u;
            goto label_1579a0;
        }
    }
    ctx->pc = 0x157994u;
label_157994:
    // 0x157994: 0x10000016  b           . + 4 + (0x16 << 2)
label_157998:
    if (ctx->pc == 0x157998u) {
        ctx->pc = 0x15799Cu;
        goto label_15799c;
    }
    ctx->pc = 0x157994u;
    {
        const bool branch_taken_0x157994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157994) {
            ctx->pc = 0x1579F0u;
            goto label_1579f0;
        }
    }
    ctx->pc = 0x15799Cu;
label_15799c:
    // 0x15799c: 0x0  nop
    ctx->pc = 0x15799cu;
    // NOP
label_1579a0:
    // 0x1579a0: 0x8f828018  lw          $v0, -0x7FE8($gp)
    ctx->pc = 0x1579a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
label_1579a4:
    // 0x1579a4: 0x40f809  jalr        $v0
label_1579a8:
    if (ctx->pc == 0x1579A8u) {
        ctx->pc = 0x1579A8u;
            // 0x1579a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1579ACu;
        goto label_1579ac;
    }
    ctx->pc = 0x1579A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1579ACu);
        ctx->pc = 0x1579A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1579A4u;
            // 0x1579a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1579ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1579ACu; }
            if (ctx->pc != 0x1579ACu) { return; }
        }
        }
    }
    ctx->pc = 0x1579ACu;
label_1579ac:
    // 0x1579ac: 0x10000010  b           . + 4 + (0x10 << 2)
label_1579b0:
    if (ctx->pc == 0x1579B0u) {
        ctx->pc = 0x1579B4u;
        goto label_1579b4;
    }
    ctx->pc = 0x1579ACu;
    {
        const bool branch_taken_0x1579ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1579ac) {
            ctx->pc = 0x1579F0u;
            goto label_1579f0;
        }
    }
    ctx->pc = 0x1579B4u;
label_1579b4:
    // 0x1579b4: 0x0  nop
    ctx->pc = 0x1579b4u;
    // NOP
label_1579b8:
    // 0x1579b8: 0xc04e550  jal         func_139540
label_1579bc:
    if (ctx->pc == 0x1579BCu) {
        ctx->pc = 0x1579BCu;
            // 0x1579bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1579C0u;
        goto label_1579c0;
    }
    ctx->pc = 0x1579B8u;
    SET_GPR_U32(ctx, 31, 0x1579C0u);
    ctx->pc = 0x1579BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1579B8u;
            // 0x1579bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139540u;
    if (runtime->hasFunction(0x139540u)) {
        auto targetFn = runtime->lookupFunction(0x139540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1579C0u; }
        if (ctx->pc != 0x1579C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139540_0x139540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1579C0u; }
        if (ctx->pc != 0x1579C0u) { return; }
    }
    ctx->pc = 0x1579C0u;
label_1579c0:
    // 0x1579c0: 0x1000000b  b           . + 4 + (0xB << 2)
label_1579c4:
    if (ctx->pc == 0x1579C4u) {
        ctx->pc = 0x1579C8u;
        goto label_1579c8;
    }
    ctx->pc = 0x1579C0u;
    {
        const bool branch_taken_0x1579c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1579c0) {
            ctx->pc = 0x1579F0u;
            goto label_1579f0;
        }
    }
    ctx->pc = 0x1579C8u;
label_1579c8:
    // 0x1579c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1579c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1579cc:
    // 0x1579cc: 0x8f828018  lw          $v0, -0x7FE8($gp)
    ctx->pc = 0x1579ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
label_1579d0:
    // 0x1579d0: 0x40f809  jalr        $v0
label_1579d4:
    if (ctx->pc == 0x1579D4u) {
        ctx->pc = 0x1579D4u;
            // 0x1579d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1579D8u;
        goto label_1579d8;
    }
    ctx->pc = 0x1579D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1579D8u);
        ctx->pc = 0x1579D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1579D0u;
            // 0x1579d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1579D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1579D8u; }
            if (ctx->pc != 0x1579D8u) { return; }
        }
        }
    }
    ctx->pc = 0x1579D8u;
label_1579d8:
    // 0x1579d8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1579dc:
    if (ctx->pc == 0x1579DCu) {
        ctx->pc = 0x1579E0u;
        goto label_1579e0;
    }
    ctx->pc = 0x1579D8u;
    {
        const bool branch_taken_0x1579d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1579d8) {
            ctx->pc = 0x1579F0u;
            goto label_1579f0;
        }
    }
    ctx->pc = 0x1579E0u;
label_1579e0:
    // 0x1579e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1579e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1579e4:
    // 0x1579e4: 0xc04e550  jal         func_139540
label_1579e8:
    if (ctx->pc == 0x1579E8u) {
        ctx->pc = 0x1579E8u;
            // 0x1579e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1579ECu;
        goto label_1579ec;
    }
    ctx->pc = 0x1579E4u;
    SET_GPR_U32(ctx, 31, 0x1579ECu);
    ctx->pc = 0x1579E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1579E4u;
            // 0x1579e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139540u;
    if (runtime->hasFunction(0x139540u)) {
        auto targetFn = runtime->lookupFunction(0x139540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1579ECu; }
        if (ctx->pc != 0x1579ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139540_0x139540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1579ECu; }
        if (ctx->pc != 0x1579ECu) { return; }
    }
    ctx->pc = 0x1579ECu;
label_1579ec:
    // 0x1579ec: 0x0  nop
    ctx->pc = 0x1579ecu;
    // NOP
label_1579f0:
    // 0x1579f0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1579f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1579f4:
    // 0x1579f4: 0x8c445780  lw          $a0, 0x5780($v0)
    ctx->pc = 0x1579f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22400)));
label_1579f8:
    // 0x1579f8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1579f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1579fc:
    // 0x1579fc: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1579fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_157a00:
    // 0x157a00: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x157a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_157a04:
    // 0x157a04: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_157a08:
    if (ctx->pc == 0x157A08u) {
        ctx->pc = 0x157A0Cu;
        goto label_157a0c;
    }
    ctx->pc = 0x157A04u;
    {
        const bool branch_taken_0x157a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157a04) {
            ctx->pc = 0x157A28u;
            goto label_157a28;
        }
    }
    ctx->pc = 0x157A0Cu;
label_157a0c:
    // 0x157a0c: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x157a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_157a10:
    // 0x157a10: 0x8ec20024  lw          $v0, 0x24($s6)
    ctx->pc = 0x157a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
label_157a14:
    // 0x157a14: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x157a14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_157a18:
    // 0x157a18: 0xc054484  jal         func_151210
label_157a1c:
    if (ctx->pc == 0x157A1Cu) {
        ctx->pc = 0x157A1Cu;
            // 0x157a1c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x157A20u;
        goto label_157a20;
    }
    ctx->pc = 0x157A18u;
    SET_GPR_U32(ctx, 31, 0x157A20u);
    ctx->pc = 0x157A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157A18u;
            // 0x157a1c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151210u;
    if (runtime->hasFunction(0x151210u)) {
        auto targetFn = runtime->lookupFunction(0x151210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157A20u; }
        if (ctx->pc != 0x157A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00151210_0x151210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157A20u; }
        if (ctx->pc != 0x157A20u) { return; }
    }
    ctx->pc = 0x157A20u;
label_157a20:
    // 0x157a20: 0x10000003  b           . + 4 + (0x3 << 2)
label_157a24:
    if (ctx->pc == 0x157A24u) {
        ctx->pc = 0x157A28u;
        goto label_157a28;
    }
    ctx->pc = 0x157A20u;
    {
        const bool branch_taken_0x157a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157a20) {
            ctx->pc = 0x157A30u;
            goto label_157a30;
        }
    }
    ctx->pc = 0x157A28u;
label_157a28:
    // 0x157a28: 0xc053a0c  jal         func_14E830
label_157a2c:
    if (ctx->pc == 0x157A2Cu) {
        ctx->pc = 0x157A30u;
        goto label_157a30;
    }
    ctx->pc = 0x157A28u;
    SET_GPR_U32(ctx, 31, 0x157A30u);
    ctx->pc = 0x14E830u;
    if (runtime->hasFunction(0x14E830u)) {
        auto targetFn = runtime->lookupFunction(0x14E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157A30u; }
        if (ctx->pc != 0x157A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E830_0x14e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157A30u; }
        if (ctx->pc != 0x157A30u) { return; }
    }
    ctx->pc = 0x157A30u;
label_157a30:
    // 0x157a30: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x157a30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_157a34:
    // 0x157a34: 0x0  nop
    ctx->pc = 0x157a34u;
    // NOP
label_157a38:
    // 0x157a38: 0x25e182a  slt         $v1, $s2, $fp
    ctx->pc = 0x157a38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_157a3c:
    // 0x157a3c: 0x1460ff8e  bnez        $v1, . + 4 + (-0x72 << 2)
label_157a40:
    if (ctx->pc == 0x157A40u) {
        ctx->pc = 0x157A44u;
        goto label_157a44;
    }
    ctx->pc = 0x157A3Cu;
    {
        const bool branch_taken_0x157a3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x157a3c) {
            ctx->pc = 0x157878u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_157878;
        }
    }
    ctx->pc = 0x157A44u;
label_157a44:
    // 0x157a44: 0x0  nop
    ctx->pc = 0x157a44u;
    // NOP
label_157a48:
    // 0x157a48: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x157a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_157a4c:
    // 0x157a4c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x157a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_157a50:
    // 0x157a50: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x157a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_157a54:
    // 0x157a54: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x157a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_157a58:
    // 0x157a58: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x157a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_157a5c:
    // 0x157a5c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x157a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_157a60:
    // 0x157a60: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x157a60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_157a64:
    // 0x157a64: 0x1460ff17  bnez        $v1, . + 4 + (-0xE9 << 2)
label_157a68:
    if (ctx->pc == 0x157A68u) {
        ctx->pc = 0x157A68u;
            // 0x157a68: 0x26730024  addiu       $s3, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->pc = 0x157A6Cu;
        goto label_157a6c;
    }
    ctx->pc = 0x157A64u;
    {
        const bool branch_taken_0x157a64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157A64u;
            // 0x157a68: 0x26730024  addiu       $s3, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157a64) {
            ctx->pc = 0x1576C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1576c4;
        }
    }
    ctx->pc = 0x157A6Cu;
label_157a6c:
    // 0x157a6c: 0x0  nop
    ctx->pc = 0x157a6cu;
    // NOP
label_157a70:
    // 0x157a70: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x157a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_157a74:
    // 0x157a74: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x157a74u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_157a78:
    // 0x157a78: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x157a78u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_157a7c:
    // 0x157a7c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x157a7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_157a80:
    // 0x157a80: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x157a80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_157a84:
    // 0x157a84: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x157a84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_157a88:
    // 0x157a88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x157a88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_157a8c:
    // 0x157a8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x157a8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_157a90:
    // 0x157a90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x157a90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_157a94:
    // 0x157a94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x157a94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_157a98:
    // 0x157a98: 0x3e00008  jr          $ra
label_157a9c:
    if (ctx->pc == 0x157A9Cu) {
        ctx->pc = 0x157A9Cu;
            // 0x157a9c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x157AA0u;
        goto label_fallthrough_0x157a98;
    }
    ctx->pc = 0x157A98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157A98u;
            // 0x157a9c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x157a98:
    ctx->pc = 0x157AA0u;
}
