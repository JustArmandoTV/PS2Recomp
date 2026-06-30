#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00274680
// Address: 0x274680 - 0x274bd0
void sub_00274680_0x274680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274680_0x274680");
#endif

    switch (ctx->pc) {
        case 0x274680u: goto label_274680;
        case 0x274684u: goto label_274684;
        case 0x274688u: goto label_274688;
        case 0x27468cu: goto label_27468c;
        case 0x274690u: goto label_274690;
        case 0x274694u: goto label_274694;
        case 0x274698u: goto label_274698;
        case 0x27469cu: goto label_27469c;
        case 0x2746a0u: goto label_2746a0;
        case 0x2746a4u: goto label_2746a4;
        case 0x2746a8u: goto label_2746a8;
        case 0x2746acu: goto label_2746ac;
        case 0x2746b0u: goto label_2746b0;
        case 0x2746b4u: goto label_2746b4;
        case 0x2746b8u: goto label_2746b8;
        case 0x2746bcu: goto label_2746bc;
        case 0x2746c0u: goto label_2746c0;
        case 0x2746c4u: goto label_2746c4;
        case 0x2746c8u: goto label_2746c8;
        case 0x2746ccu: goto label_2746cc;
        case 0x2746d0u: goto label_2746d0;
        case 0x2746d4u: goto label_2746d4;
        case 0x2746d8u: goto label_2746d8;
        case 0x2746dcu: goto label_2746dc;
        case 0x2746e0u: goto label_2746e0;
        case 0x2746e4u: goto label_2746e4;
        case 0x2746e8u: goto label_2746e8;
        case 0x2746ecu: goto label_2746ec;
        case 0x2746f0u: goto label_2746f0;
        case 0x2746f4u: goto label_2746f4;
        case 0x2746f8u: goto label_2746f8;
        case 0x2746fcu: goto label_2746fc;
        case 0x274700u: goto label_274700;
        case 0x274704u: goto label_274704;
        case 0x274708u: goto label_274708;
        case 0x27470cu: goto label_27470c;
        case 0x274710u: goto label_274710;
        case 0x274714u: goto label_274714;
        case 0x274718u: goto label_274718;
        case 0x27471cu: goto label_27471c;
        case 0x274720u: goto label_274720;
        case 0x274724u: goto label_274724;
        case 0x274728u: goto label_274728;
        case 0x27472cu: goto label_27472c;
        case 0x274730u: goto label_274730;
        case 0x274734u: goto label_274734;
        case 0x274738u: goto label_274738;
        case 0x27473cu: goto label_27473c;
        case 0x274740u: goto label_274740;
        case 0x274744u: goto label_274744;
        case 0x274748u: goto label_274748;
        case 0x27474cu: goto label_27474c;
        case 0x274750u: goto label_274750;
        case 0x274754u: goto label_274754;
        case 0x274758u: goto label_274758;
        case 0x27475cu: goto label_27475c;
        case 0x274760u: goto label_274760;
        case 0x274764u: goto label_274764;
        case 0x274768u: goto label_274768;
        case 0x27476cu: goto label_27476c;
        case 0x274770u: goto label_274770;
        case 0x274774u: goto label_274774;
        case 0x274778u: goto label_274778;
        case 0x27477cu: goto label_27477c;
        case 0x274780u: goto label_274780;
        case 0x274784u: goto label_274784;
        case 0x274788u: goto label_274788;
        case 0x27478cu: goto label_27478c;
        case 0x274790u: goto label_274790;
        case 0x274794u: goto label_274794;
        case 0x274798u: goto label_274798;
        case 0x27479cu: goto label_27479c;
        case 0x2747a0u: goto label_2747a0;
        case 0x2747a4u: goto label_2747a4;
        case 0x2747a8u: goto label_2747a8;
        case 0x2747acu: goto label_2747ac;
        case 0x2747b0u: goto label_2747b0;
        case 0x2747b4u: goto label_2747b4;
        case 0x2747b8u: goto label_2747b8;
        case 0x2747bcu: goto label_2747bc;
        case 0x2747c0u: goto label_2747c0;
        case 0x2747c4u: goto label_2747c4;
        case 0x2747c8u: goto label_2747c8;
        case 0x2747ccu: goto label_2747cc;
        case 0x2747d0u: goto label_2747d0;
        case 0x2747d4u: goto label_2747d4;
        case 0x2747d8u: goto label_2747d8;
        case 0x2747dcu: goto label_2747dc;
        case 0x2747e0u: goto label_2747e0;
        case 0x2747e4u: goto label_2747e4;
        case 0x2747e8u: goto label_2747e8;
        case 0x2747ecu: goto label_2747ec;
        case 0x2747f0u: goto label_2747f0;
        case 0x2747f4u: goto label_2747f4;
        case 0x2747f8u: goto label_2747f8;
        case 0x2747fcu: goto label_2747fc;
        case 0x274800u: goto label_274800;
        case 0x274804u: goto label_274804;
        case 0x274808u: goto label_274808;
        case 0x27480cu: goto label_27480c;
        case 0x274810u: goto label_274810;
        case 0x274814u: goto label_274814;
        case 0x274818u: goto label_274818;
        case 0x27481cu: goto label_27481c;
        case 0x274820u: goto label_274820;
        case 0x274824u: goto label_274824;
        case 0x274828u: goto label_274828;
        case 0x27482cu: goto label_27482c;
        case 0x274830u: goto label_274830;
        case 0x274834u: goto label_274834;
        case 0x274838u: goto label_274838;
        case 0x27483cu: goto label_27483c;
        case 0x274840u: goto label_274840;
        case 0x274844u: goto label_274844;
        case 0x274848u: goto label_274848;
        case 0x27484cu: goto label_27484c;
        case 0x274850u: goto label_274850;
        case 0x274854u: goto label_274854;
        case 0x274858u: goto label_274858;
        case 0x27485cu: goto label_27485c;
        case 0x274860u: goto label_274860;
        case 0x274864u: goto label_274864;
        case 0x274868u: goto label_274868;
        case 0x27486cu: goto label_27486c;
        case 0x274870u: goto label_274870;
        case 0x274874u: goto label_274874;
        case 0x274878u: goto label_274878;
        case 0x27487cu: goto label_27487c;
        case 0x274880u: goto label_274880;
        case 0x274884u: goto label_274884;
        case 0x274888u: goto label_274888;
        case 0x27488cu: goto label_27488c;
        case 0x274890u: goto label_274890;
        case 0x274894u: goto label_274894;
        case 0x274898u: goto label_274898;
        case 0x27489cu: goto label_27489c;
        case 0x2748a0u: goto label_2748a0;
        case 0x2748a4u: goto label_2748a4;
        case 0x2748a8u: goto label_2748a8;
        case 0x2748acu: goto label_2748ac;
        case 0x2748b0u: goto label_2748b0;
        case 0x2748b4u: goto label_2748b4;
        case 0x2748b8u: goto label_2748b8;
        case 0x2748bcu: goto label_2748bc;
        case 0x2748c0u: goto label_2748c0;
        case 0x2748c4u: goto label_2748c4;
        case 0x2748c8u: goto label_2748c8;
        case 0x2748ccu: goto label_2748cc;
        case 0x2748d0u: goto label_2748d0;
        case 0x2748d4u: goto label_2748d4;
        case 0x2748d8u: goto label_2748d8;
        case 0x2748dcu: goto label_2748dc;
        case 0x2748e0u: goto label_2748e0;
        case 0x2748e4u: goto label_2748e4;
        case 0x2748e8u: goto label_2748e8;
        case 0x2748ecu: goto label_2748ec;
        case 0x2748f0u: goto label_2748f0;
        case 0x2748f4u: goto label_2748f4;
        case 0x2748f8u: goto label_2748f8;
        case 0x2748fcu: goto label_2748fc;
        case 0x274900u: goto label_274900;
        case 0x274904u: goto label_274904;
        case 0x274908u: goto label_274908;
        case 0x27490cu: goto label_27490c;
        case 0x274910u: goto label_274910;
        case 0x274914u: goto label_274914;
        case 0x274918u: goto label_274918;
        case 0x27491cu: goto label_27491c;
        case 0x274920u: goto label_274920;
        case 0x274924u: goto label_274924;
        case 0x274928u: goto label_274928;
        case 0x27492cu: goto label_27492c;
        case 0x274930u: goto label_274930;
        case 0x274934u: goto label_274934;
        case 0x274938u: goto label_274938;
        case 0x27493cu: goto label_27493c;
        case 0x274940u: goto label_274940;
        case 0x274944u: goto label_274944;
        case 0x274948u: goto label_274948;
        case 0x27494cu: goto label_27494c;
        case 0x274950u: goto label_274950;
        case 0x274954u: goto label_274954;
        case 0x274958u: goto label_274958;
        case 0x27495cu: goto label_27495c;
        case 0x274960u: goto label_274960;
        case 0x274964u: goto label_274964;
        case 0x274968u: goto label_274968;
        case 0x27496cu: goto label_27496c;
        case 0x274970u: goto label_274970;
        case 0x274974u: goto label_274974;
        case 0x274978u: goto label_274978;
        case 0x27497cu: goto label_27497c;
        case 0x274980u: goto label_274980;
        case 0x274984u: goto label_274984;
        case 0x274988u: goto label_274988;
        case 0x27498cu: goto label_27498c;
        case 0x274990u: goto label_274990;
        case 0x274994u: goto label_274994;
        case 0x274998u: goto label_274998;
        case 0x27499cu: goto label_27499c;
        case 0x2749a0u: goto label_2749a0;
        case 0x2749a4u: goto label_2749a4;
        case 0x2749a8u: goto label_2749a8;
        case 0x2749acu: goto label_2749ac;
        case 0x2749b0u: goto label_2749b0;
        case 0x2749b4u: goto label_2749b4;
        case 0x2749b8u: goto label_2749b8;
        case 0x2749bcu: goto label_2749bc;
        case 0x2749c0u: goto label_2749c0;
        case 0x2749c4u: goto label_2749c4;
        case 0x2749c8u: goto label_2749c8;
        case 0x2749ccu: goto label_2749cc;
        case 0x2749d0u: goto label_2749d0;
        case 0x2749d4u: goto label_2749d4;
        case 0x2749d8u: goto label_2749d8;
        case 0x2749dcu: goto label_2749dc;
        case 0x2749e0u: goto label_2749e0;
        case 0x2749e4u: goto label_2749e4;
        case 0x2749e8u: goto label_2749e8;
        case 0x2749ecu: goto label_2749ec;
        case 0x2749f0u: goto label_2749f0;
        case 0x2749f4u: goto label_2749f4;
        case 0x2749f8u: goto label_2749f8;
        case 0x2749fcu: goto label_2749fc;
        case 0x274a00u: goto label_274a00;
        case 0x274a04u: goto label_274a04;
        case 0x274a08u: goto label_274a08;
        case 0x274a0cu: goto label_274a0c;
        case 0x274a10u: goto label_274a10;
        case 0x274a14u: goto label_274a14;
        case 0x274a18u: goto label_274a18;
        case 0x274a1cu: goto label_274a1c;
        case 0x274a20u: goto label_274a20;
        case 0x274a24u: goto label_274a24;
        case 0x274a28u: goto label_274a28;
        case 0x274a2cu: goto label_274a2c;
        case 0x274a30u: goto label_274a30;
        case 0x274a34u: goto label_274a34;
        case 0x274a38u: goto label_274a38;
        case 0x274a3cu: goto label_274a3c;
        case 0x274a40u: goto label_274a40;
        case 0x274a44u: goto label_274a44;
        case 0x274a48u: goto label_274a48;
        case 0x274a4cu: goto label_274a4c;
        case 0x274a50u: goto label_274a50;
        case 0x274a54u: goto label_274a54;
        case 0x274a58u: goto label_274a58;
        case 0x274a5cu: goto label_274a5c;
        case 0x274a60u: goto label_274a60;
        case 0x274a64u: goto label_274a64;
        case 0x274a68u: goto label_274a68;
        case 0x274a6cu: goto label_274a6c;
        case 0x274a70u: goto label_274a70;
        case 0x274a74u: goto label_274a74;
        case 0x274a78u: goto label_274a78;
        case 0x274a7cu: goto label_274a7c;
        case 0x274a80u: goto label_274a80;
        case 0x274a84u: goto label_274a84;
        case 0x274a88u: goto label_274a88;
        case 0x274a8cu: goto label_274a8c;
        case 0x274a90u: goto label_274a90;
        case 0x274a94u: goto label_274a94;
        case 0x274a98u: goto label_274a98;
        case 0x274a9cu: goto label_274a9c;
        case 0x274aa0u: goto label_274aa0;
        case 0x274aa4u: goto label_274aa4;
        case 0x274aa8u: goto label_274aa8;
        case 0x274aacu: goto label_274aac;
        case 0x274ab0u: goto label_274ab0;
        case 0x274ab4u: goto label_274ab4;
        case 0x274ab8u: goto label_274ab8;
        case 0x274abcu: goto label_274abc;
        case 0x274ac0u: goto label_274ac0;
        case 0x274ac4u: goto label_274ac4;
        case 0x274ac8u: goto label_274ac8;
        case 0x274accu: goto label_274acc;
        case 0x274ad0u: goto label_274ad0;
        case 0x274ad4u: goto label_274ad4;
        case 0x274ad8u: goto label_274ad8;
        case 0x274adcu: goto label_274adc;
        case 0x274ae0u: goto label_274ae0;
        case 0x274ae4u: goto label_274ae4;
        case 0x274ae8u: goto label_274ae8;
        case 0x274aecu: goto label_274aec;
        case 0x274af0u: goto label_274af0;
        case 0x274af4u: goto label_274af4;
        case 0x274af8u: goto label_274af8;
        case 0x274afcu: goto label_274afc;
        case 0x274b00u: goto label_274b00;
        case 0x274b04u: goto label_274b04;
        case 0x274b08u: goto label_274b08;
        case 0x274b0cu: goto label_274b0c;
        case 0x274b10u: goto label_274b10;
        case 0x274b14u: goto label_274b14;
        case 0x274b18u: goto label_274b18;
        case 0x274b1cu: goto label_274b1c;
        case 0x274b20u: goto label_274b20;
        case 0x274b24u: goto label_274b24;
        case 0x274b28u: goto label_274b28;
        case 0x274b2cu: goto label_274b2c;
        case 0x274b30u: goto label_274b30;
        case 0x274b34u: goto label_274b34;
        case 0x274b38u: goto label_274b38;
        case 0x274b3cu: goto label_274b3c;
        case 0x274b40u: goto label_274b40;
        case 0x274b44u: goto label_274b44;
        case 0x274b48u: goto label_274b48;
        case 0x274b4cu: goto label_274b4c;
        case 0x274b50u: goto label_274b50;
        case 0x274b54u: goto label_274b54;
        case 0x274b58u: goto label_274b58;
        case 0x274b5cu: goto label_274b5c;
        case 0x274b60u: goto label_274b60;
        case 0x274b64u: goto label_274b64;
        case 0x274b68u: goto label_274b68;
        case 0x274b6cu: goto label_274b6c;
        case 0x274b70u: goto label_274b70;
        case 0x274b74u: goto label_274b74;
        case 0x274b78u: goto label_274b78;
        case 0x274b7cu: goto label_274b7c;
        case 0x274b80u: goto label_274b80;
        case 0x274b84u: goto label_274b84;
        case 0x274b88u: goto label_274b88;
        case 0x274b8cu: goto label_274b8c;
        case 0x274b90u: goto label_274b90;
        case 0x274b94u: goto label_274b94;
        case 0x274b98u: goto label_274b98;
        case 0x274b9cu: goto label_274b9c;
        case 0x274ba0u: goto label_274ba0;
        case 0x274ba4u: goto label_274ba4;
        case 0x274ba8u: goto label_274ba8;
        case 0x274bacu: goto label_274bac;
        case 0x274bb0u: goto label_274bb0;
        case 0x274bb4u: goto label_274bb4;
        case 0x274bb8u: goto label_274bb8;
        case 0x274bbcu: goto label_274bbc;
        case 0x274bc0u: goto label_274bc0;
        case 0x274bc4u: goto label_274bc4;
        case 0x274bc8u: goto label_274bc8;
        case 0x274bccu: goto label_274bcc;
        default: break;
    }

    ctx->pc = 0x274680u;

label_274680:
    // 0x274680: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x274680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_274684:
    // 0x274684: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x274684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_274688:
    // 0x274688: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x274688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_27468c:
    // 0x27468c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x27468cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_274690:
    // 0x274690: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x274690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_274694:
    // 0x274694: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x274694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_274698:
    // 0x274698: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x274698u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_27469c:
    // 0x27469c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x27469cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2746a0:
    // 0x2746a0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2746a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2746a4:
    // 0x2746a4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2746a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2746a8:
    // 0x2746a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2746a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2746ac:
    // 0x2746ac: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2746acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2746b0:
    // 0x2746b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2746b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2746b4:
    // 0x2746b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2746b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2746b8:
    // 0x2746b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2746b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2746bc:
    // 0x2746bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2746bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2746c0:
    // 0x2746c0: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x2746c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_2746c4:
    // 0x2746c4: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
label_2746c8:
    if (ctx->pc == 0x2746C8u) {
        ctx->pc = 0x2746C8u;
            // 0x2746c8: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2746CCu;
        goto label_2746cc;
    }
    ctx->pc = 0x2746C4u;
    {
        const bool branch_taken_0x2746c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2746C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2746C4u;
            // 0x2746c8: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2746c4) {
            ctx->pc = 0x274720u;
            goto label_274720;
        }
    }
    ctx->pc = 0x2746CCu;
label_2746cc:
    // 0x2746cc: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x2746ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_2746d0:
    // 0x2746d0: 0x80420014  lb          $v0, 0x14($v0)
    ctx->pc = 0x2746d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
label_2746d4:
    // 0x2746d4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2746d8:
    if (ctx->pc == 0x2746D8u) {
        ctx->pc = 0x2746DCu;
        goto label_2746dc;
    }
    ctx->pc = 0x2746D4u;
    {
        const bool branch_taken_0x2746d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2746d4) {
            ctx->pc = 0x274708u;
            goto label_274708;
        }
    }
    ctx->pc = 0x2746DCu;
label_2746dc:
    // 0x2746dc: 0x8ea2001c  lw          $v0, 0x1C($s5)
    ctx->pc = 0x2746dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_2746e0:
    // 0x2746e0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2746e4:
    if (ctx->pc == 0x2746E4u) {
        ctx->pc = 0x2746E8u;
        goto label_2746e8;
    }
    ctx->pc = 0x2746E0u;
    {
        const bool branch_taken_0x2746e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2746e0) {
            ctx->pc = 0x274708u;
            goto label_274708;
        }
    }
    ctx->pc = 0x2746E8u;
label_2746e8:
    // 0x2746e8: 0x8ea40024  lw          $a0, 0x24($s5)
    ctx->pc = 0x2746e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
label_2746ec:
    // 0x2746ec: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2746ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2746f0:
    // 0x2746f0: 0x8ea5002c  lw          $a1, 0x2C($s5)
    ctx->pc = 0x2746f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
label_2746f4:
    // 0x2746f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2746f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2746f8:
    // 0x2746f8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2746f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2746fc:
    // 0x2746fc: 0x320f809  jalr        $t9
label_274700:
    if (ctx->pc == 0x274700u) {
        ctx->pc = 0x274700u;
            // 0x274700: 0x24070800  addiu       $a3, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->pc = 0x274704u;
        goto label_274704;
    }
    ctx->pc = 0x2746FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x274704u);
        ctx->pc = 0x274700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2746FCu;
            // 0x274700: 0x24070800  addiu       $a3, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x274704u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x274704u; }
            if (ctx->pc != 0x274704u) { return; }
        }
        }
    }
    ctx->pc = 0x274704u;
label_274704:
    // 0x274704: 0x0  nop
    ctx->pc = 0x274704u;
    // NOP
label_274708:
    // 0x274708: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x274708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_27470c:
    // 0x27470c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27470cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_274710:
    // 0x274710: 0xc09d090  jal         func_274240
label_274714:
    if (ctx->pc == 0x274714u) {
        ctx->pc = 0x274714u;
            // 0x274714: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x274718u;
        goto label_274718;
    }
    ctx->pc = 0x274710u;
    SET_GPR_U32(ctx, 31, 0x274718u);
    ctx->pc = 0x274714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274710u;
            // 0x274714: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274240u;
    if (runtime->hasFunction(0x274240u)) {
        auto targetFn = runtime->lookupFunction(0x274240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274718u; }
        if (ctx->pc != 0x274718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00274240_0x274240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274718u; }
        if (ctx->pc != 0x274718u) { return; }
    }
    ctx->pc = 0x274718u;
label_274718:
    // 0x274718: 0x10000107  b           . + 4 + (0x107 << 2)
label_27471c:
    if (ctx->pc == 0x27471Cu) {
        ctx->pc = 0x274720u;
        goto label_274720;
    }
    ctx->pc = 0x274718u;
    {
        const bool branch_taken_0x274718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274718) {
            ctx->pc = 0x274B38u;
            goto label_274b38;
        }
    }
    ctx->pc = 0x274720u;
label_274720:
    // 0x274720: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x274720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_274724:
    // 0x274724: 0x80420014  lb          $v0, 0x14($v0)
    ctx->pc = 0x274724u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
label_274728:
    // 0x274728: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_27472c:
    if (ctx->pc == 0x27472Cu) {
        ctx->pc = 0x274730u;
        goto label_274730;
    }
    ctx->pc = 0x274728u;
    {
        const bool branch_taken_0x274728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x274728) {
            ctx->pc = 0x274758u;
            goto label_274758;
        }
    }
    ctx->pc = 0x274730u;
label_274730:
    // 0x274730: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x274730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_274734:
    // 0x274734: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_274738:
    if (ctx->pc == 0x274738u) {
        ctx->pc = 0x27473Cu;
        goto label_27473c;
    }
    ctx->pc = 0x274734u;
    {
        const bool branch_taken_0x274734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274734) {
            ctx->pc = 0x274758u;
            goto label_274758;
        }
    }
    ctx->pc = 0x27473Cu;
label_27473c:
    // 0x27473c: 0x8ea40024  lw          $a0, 0x24($s5)
    ctx->pc = 0x27473cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
label_274740:
    // 0x274740: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x274740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_274744:
    // 0x274744: 0x8ea5002c  lw          $a1, 0x2C($s5)
    ctx->pc = 0x274744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
label_274748:
    // 0x274748: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x274748u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27474c:
    // 0x27474c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x27474cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_274750:
    // 0x274750: 0x320f809  jalr        $t9
label_274754:
    if (ctx->pc == 0x274754u) {
        ctx->pc = 0x274754u;
            // 0x274754: 0x24070800  addiu       $a3, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->pc = 0x274758u;
        goto label_274758;
    }
    ctx->pc = 0x274750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x274758u);
        ctx->pc = 0x274754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274750u;
            // 0x274754: 0x24070800  addiu       $a3, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x274758u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x274758u; }
            if (ctx->pc != 0x274758u) { return; }
        }
        }
    }
    ctx->pc = 0x274758u;
label_274758:
    // 0x274758: 0xc09d110  jal         func_274440
label_27475c:
    if (ctx->pc == 0x27475Cu) {
        ctx->pc = 0x27475Cu;
            // 0x27475c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x274760u;
        goto label_274760;
    }
    ctx->pc = 0x274758u;
    SET_GPR_U32(ctx, 31, 0x274760u);
    ctx->pc = 0x27475Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274758u;
            // 0x27475c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274440u;
    if (runtime->hasFunction(0x274440u)) {
        auto targetFn = runtime->lookupFunction(0x274440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274760u; }
        if (ctx->pc != 0x274760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00274440_0x274440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274760u; }
        if (ctx->pc != 0x274760u) { return; }
    }
    ctx->pc = 0x274760u;
label_274760:
    // 0x274760: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x274760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_274764:
    // 0x274764: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x274764u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_274768:
    // 0x274768: 0xac430078  sw          $v1, 0x78($v0)
    ctx->pc = 0x274768u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 3));
label_27476c:
    // 0x27476c: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
label_274770:
    if (ctx->pc == 0x274770u) {
        ctx->pc = 0x274770u;
            // 0x274770: 0xac510000  sw          $s1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
        ctx->pc = 0x274774u;
        goto label_274774;
    }
    ctx->pc = 0x27476Cu;
    {
        const bool branch_taken_0x27476c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x274770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27476Cu;
            // 0x274770: 0xac510000  sw          $s1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27476c) {
            ctx->pc = 0x274780u;
            goto label_274780;
        }
    }
    ctx->pc = 0x274774u;
label_274774:
    // 0x274774: 0x10000014  b           . + 4 + (0x14 << 2)
label_274778:
    if (ctx->pc == 0x274778u) {
        ctx->pc = 0x274778u;
            // 0x274778: 0xaeb3002c  sw          $s3, 0x2C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 19));
        ctx->pc = 0x27477Cu;
        goto label_27477c;
    }
    ctx->pc = 0x274774u;
    {
        const bool branch_taken_0x274774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274774u;
            // 0x274778: 0xaeb3002c  sw          $s3, 0x2C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274774) {
            ctx->pc = 0x2747C8u;
            goto label_2747c8;
        }
    }
    ctx->pc = 0x27477Cu;
label_27477c:
    // 0x27477c: 0x0  nop
    ctx->pc = 0x27477cu;
    // NOP
label_274780:
    // 0x274780: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_274784:
    if (ctx->pc == 0x274784u) {
        ctx->pc = 0x274788u;
        goto label_274788;
    }
    ctx->pc = 0x274780u;
    {
        const bool branch_taken_0x274780 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x274780) {
            ctx->pc = 0x274790u;
            goto label_274790;
        }
    }
    ctx->pc = 0x274788u;
label_274788:
    // 0x274788: 0x10000003  b           . + 4 + (0x3 << 2)
label_27478c:
    if (ctx->pc == 0x27478Cu) {
        ctx->pc = 0x27478Cu;
            // 0x27478c: 0xae330070  sw          $s3, 0x70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 19));
        ctx->pc = 0x274790u;
        goto label_274790;
    }
    ctx->pc = 0x274788u;
    {
        const bool branch_taken_0x274788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27478Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274788u;
            // 0x27478c: 0xae330070  sw          $s3, 0x70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274788) {
            ctx->pc = 0x274798u;
            goto label_274798;
        }
    }
    ctx->pc = 0x274790u;
label_274790:
    // 0x274790: 0xae330074  sw          $s3, 0x74($s1)
    ctx->pc = 0x274790u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 19));
label_274794:
    // 0x274794: 0x0  nop
    ctx->pc = 0x274794u;
    // NOP
label_274798:
    // 0x274798: 0xc623000c  lwc1        $f3, 0xC($s1)
    ctx->pc = 0x274798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27479c:
    // 0x27479c: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x27479cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2747a0:
    // 0x2747a0: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x2747a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2747a4:
    // 0x2747a4: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x2747a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2747a8:
    // 0x2747a8: 0xe663000c  swc1        $f3, 0xC($s3)
    ctx->pc = 0x2747a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_2747ac:
    // 0x2747ac: 0xe6620010  swc1        $f2, 0x10($s3)
    ctx->pc = 0x2747acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
label_2747b0:
    // 0x2747b0: 0xe6610014  swc1        $f1, 0x14($s3)
    ctx->pc = 0x2747b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
label_2747b4:
    // 0x2747b4: 0xe6600018  swc1        $f0, 0x18($s3)
    ctx->pc = 0x2747b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
label_2747b8:
    // 0x2747b8: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x2747b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2747bc:
    // 0x2747bc: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x2747bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2747c0:
    // 0x2747c0: 0xe661001c  swc1        $f1, 0x1C($s3)
    ctx->pc = 0x2747c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
label_2747c4:
    // 0x2747c4: 0xe6600020  swc1        $f0, 0x20($s3)
    ctx->pc = 0x2747c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
label_2747c8:
    // 0x2747c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2747c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2747cc:
    // 0x2747cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2747ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2747d0:
    // 0x2747d0: 0x27a600d8  addiu       $a2, $sp, 0xD8
    ctx->pc = 0x2747d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_2747d4:
    // 0x2747d4: 0x27a700e8  addiu       $a3, $sp, 0xE8
    ctx->pc = 0x2747d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_2747d8:
    // 0x2747d8: 0xc09d12c  jal         func_2744B0
label_2747dc:
    if (ctx->pc == 0x2747DCu) {
        ctx->pc = 0x2747DCu;
            // 0x2747dc: 0xafa000ac  sw          $zero, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
        ctx->pc = 0x2747E0u;
        goto label_2747e0;
    }
    ctx->pc = 0x2747D8u;
    SET_GPR_U32(ctx, 31, 0x2747E0u);
    ctx->pc = 0x2747DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2747D8u;
            // 0x2747dc: 0xafa000ac  sw          $zero, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2744B0u;
    if (runtime->hasFunction(0x2744B0u)) {
        auto targetFn = runtime->lookupFunction(0x2744B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2747E0u; }
        if (ctx->pc != 0x2747E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002744B0_0x2744b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2747E0u; }
        if (ctx->pc != 0x2747E0u) { return; }
    }
    ctx->pc = 0x2747E0u;
label_2747e0:
    // 0x2747e0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2747e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2747e4:
    // 0x2747e4: 0x27b600d8  addiu       $s6, $sp, 0xD8
    ctx->pc = 0x2747e4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_2747e8:
    // 0x2747e8: 0x27be00e8  addiu       $fp, $sp, 0xE8
    ctx->pc = 0x2747e8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_2747ec:
    // 0x2747ec: 0x0  nop
    ctx->pc = 0x2747ecu;
    // NOP
label_2747f0:
    // 0x2747f0: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x2747f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2747f4:
    // 0x2747f4: 0x8ea20034  lw          $v0, 0x34($s5)
    ctx->pc = 0x2747f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_2747f8:
    // 0x2747f8: 0xc7c10000  lwc1        $f1, 0x0($fp)
    ctx->pc = 0x2747f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2747fc:
    // 0x2747fc: 0xc660006c  lwc1        $f0, 0x6C($s3)
    ctx->pc = 0x2747fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_274800:
    // 0x274800: 0x61940  sll         $v1, $a2, 5
    ctx->pc = 0x274800u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_274804:
    // 0x274804: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x274804u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_274808:
    // 0x274808: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x274808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27480c:
    // 0x27480c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x27480cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_274810:
    // 0x274810: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x274810u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_274814:
    // 0x274814: 0x450000c4  bc1f        . + 4 + (0xC4 << 2)
label_274818:
    if (ctx->pc == 0x274818u) {
        ctx->pc = 0x27481Cu;
        goto label_27481c;
    }
    ctx->pc = 0x274814u;
    {
        const bool branch_taken_0x274814 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x274814) {
            ctx->pc = 0x274B28u;
            goto label_274b28;
        }
    }
    ctx->pc = 0x27481Cu;
label_27481c:
    // 0x27481c: 0x8ea40028  lw          $a0, 0x28($s5)
    ctx->pc = 0x27481cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_274820:
    // 0x274820: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x274820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_274824:
    // 0x274824: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x274824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_274828:
    // 0x274828: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x274828u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_27482c:
    // 0x27482c: 0x2450000c  addiu       $s0, $v0, 0xC
    ctx->pc = 0x27482cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_274830:
    // 0x274830: 0x8e880004  lw          $t0, 0x4($s4)
    ctx->pc = 0x274830u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_274834:
    // 0x274834: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x274834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_274838:
    // 0x274838: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x274838u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27483c:
    // 0x27483c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27483cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_274840:
    // 0x274840: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x274840u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_274844:
    // 0x274844: 0x320f809  jalr        $t9
label_274848:
    if (ctx->pc == 0x274848u) {
        ctx->pc = 0x274848u;
            // 0x274848: 0x260a0004  addiu       $t2, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x27484Cu;
        goto label_27484c;
    }
    ctx->pc = 0x274844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27484Cu);
        ctx->pc = 0x274848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274844u;
            // 0x274848: 0x260a0004  addiu       $t2, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27484Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27484Cu; }
            if (ctx->pc != 0x27484Cu) { return; }
        }
        }
    }
    ctx->pc = 0x27484Cu;
label_27484c:
    // 0x27484c: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x27484cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_274850:
    // 0x274850: 0xc09d404  jal         func_275010
label_274854:
    if (ctx->pc == 0x274854u) {
        ctx->pc = 0x274854u;
            // 0x274854: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x274858u;
        goto label_274858;
    }
    ctx->pc = 0x274850u;
    SET_GPR_U32(ctx, 31, 0x274858u);
    ctx->pc = 0x274854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274850u;
            // 0x274854: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x275010u;
    if (runtime->hasFunction(0x275010u)) {
        auto targetFn = runtime->lookupFunction(0x275010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274858u; }
        if (ctx->pc != 0x274858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00275010_0x275010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274858u; }
        if (ctx->pc != 0x274858u) { return; }
    }
    ctx->pc = 0x274858u;
label_274858:
    // 0x274858: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x274858u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27485c:
    // 0x27485c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27485cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_274860:
    // 0x274860: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x274860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_274864:
    // 0x274864: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x274864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_274868:
    // 0x274868: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x274868u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27486c:
    // 0x27486c: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x27486cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_274870:
    // 0x274870: 0xc09cd1c  jal         func_273470
label_274874:
    if (ctx->pc == 0x274874u) {
        ctx->pc = 0x274874u;
            // 0x274874: 0xafb100ac  sw          $s1, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 17));
        ctx->pc = 0x274878u;
        goto label_274878;
    }
    ctx->pc = 0x274870u;
    SET_GPR_U32(ctx, 31, 0x274878u);
    ctx->pc = 0x274874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274870u;
            // 0x274874: 0xafb100ac  sw          $s1, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x273470u;
    if (runtime->hasFunction(0x273470u)) {
        auto targetFn = runtime->lookupFunction(0x273470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274878u; }
        if (ctx->pc != 0x274878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00273470_0x273470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274878u; }
        if (ctx->pc != 0x274878u) { return; }
    }
    ctx->pc = 0x274878u;
label_274878:
    // 0x274878: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x274878u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_27487c:
    // 0x27487c: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x27487cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_274880:
    // 0x274880: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x274880u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
label_274884:
    // 0x274884: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_274888:
    if (ctx->pc == 0x274888u) {
        ctx->pc = 0x274888u;
            // 0x274888: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->pc = 0x27488Cu;
        goto label_27488c;
    }
    ctx->pc = 0x274884u;
    {
        const bool branch_taken_0x274884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x274888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274884u;
            // 0x274888: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274884) {
            ctx->pc = 0x2747F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2747f0;
        }
    }
    ctx->pc = 0x27488Cu;
label_27488c:
    // 0x27488c: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_274890:
    if (ctx->pc == 0x274890u) {
        ctx->pc = 0x274894u;
        goto label_274894;
    }
    ctx->pc = 0x27488Cu;
    {
        const bool branch_taken_0x27488c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27488c) {
            ctx->pc = 0x274B28u;
            goto label_274b28;
        }
    }
    ctx->pc = 0x274894u;
label_274894:
    // 0x274894: 0x0  nop
    ctx->pc = 0x274894u;
    // NOP
label_274898:
    // 0x274898: 0x8ea40028  lw          $a0, 0x28($s5)
    ctx->pc = 0x274898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_27489c:
    // 0x27489c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x27489cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2748a0:
    // 0x2748a0: 0x8ea20034  lw          $v0, 0x34($s5)
    ctx->pc = 0x2748a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_2748a4:
    // 0x2748a4: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x2748a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2748a8:
    // 0x2748a8: 0x8e880004  lw          $t0, 0x4($s4)
    ctx->pc = 0x2748a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2748ac:
    // 0x2748ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2748acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2748b0:
    // 0x2748b0: 0x61940  sll         $v1, $a2, 5
    ctx->pc = 0x2748b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_2748b4:
    // 0x2748b4: 0x648c0  sll         $t1, $a2, 3
    ctx->pc = 0x2748b4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2748b8:
    // 0x2748b8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2748b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2748bc:
    // 0x2748bc: 0x2691021  addu        $v0, $s3, $t1
    ctx->pc = 0x2748bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 9)));
label_2748c0:
    // 0x2748c0: 0x2449000c  addiu       $t1, $v0, 0xC
    ctx->pc = 0x2748c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_2748c4:
    // 0x2748c4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2748c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2748c8:
    // 0x2748c8: 0x320f809  jalr        $t9
label_2748cc:
    if (ctx->pc == 0x2748CCu) {
        ctx->pc = 0x2748CCu;
            // 0x2748cc: 0x252a0004  addiu       $t2, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->pc = 0x2748D0u;
        goto label_2748d0;
    }
    ctx->pc = 0x2748C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2748D0u);
        ctx->pc = 0x2748CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2748C8u;
            // 0x2748cc: 0x252a0004  addiu       $t2, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2748D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2748D0u; }
            if (ctx->pc != 0x2748D0u) { return; }
        }
        }
    }
    ctx->pc = 0x2748D0u;
label_2748d0:
    // 0x2748d0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2748d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2748d4:
    // 0x2748d4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2748d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2748d8:
    // 0x2748d8: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x2748d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
label_2748dc:
    // 0x2748dc: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_2748e0:
    if (ctx->pc == 0x2748E0u) {
        ctx->pc = 0x2748E4u;
        goto label_2748e4;
    }
    ctx->pc = 0x2748DCu;
    {
        const bool branch_taken_0x2748dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2748dc) {
            ctx->pc = 0x274898u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_274898;
        }
    }
    ctx->pc = 0x2748E4u;
label_2748e4:
    // 0x2748e4: 0x8ea20030  lw          $v0, 0x30($s5)
    ctx->pc = 0x2748e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
label_2748e8:
    // 0x2748e8: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x2748e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_2748ec:
    // 0x2748ec: 0x14200026  bnez        $at, . + 4 + (0x26 << 2)
label_2748f0:
    if (ctx->pc == 0x2748F0u) {
        ctx->pc = 0x2748F0u;
            // 0x2748f0: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2748F4u;
        goto label_2748f4;
    }
    ctx->pc = 0x2748ECu;
    {
        const bool branch_taken_0x2748ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2748F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2748ECu;
            // 0x2748f0: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2748ec) {
            ctx->pc = 0x274988u;
            goto label_274988;
        }
    }
    ctx->pc = 0x2748F4u;
label_2748f4:
    // 0x2748f4: 0x24120060  addiu       $s2, $zero, 0x60
    ctx->pc = 0x2748f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_2748f8:
    // 0x2748f8: 0x27b600d4  addiu       $s6, $sp, 0xD4
    ctx->pc = 0x2748f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_2748fc:
    // 0x2748fc: 0x0  nop
    ctx->pc = 0x2748fcu;
    // NOP
label_274900:
    // 0x274900: 0x8ea20034  lw          $v0, 0x34($s5)
    ctx->pc = 0x274900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_274904:
    // 0x274904: 0xc660006c  lwc1        $f0, 0x6C($s3)
    ctx->pc = 0x274904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_274908:
    // 0x274908: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x274908u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_27490c:
    // 0x27490c: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x27490cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_274910:
    // 0x274910: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x274910u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_274914:
    // 0x274914: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
label_274918:
    if (ctx->pc == 0x274918u) {
        ctx->pc = 0x27491Cu;
        goto label_27491c;
    }
    ctx->pc = 0x274914u;
    {
        const bool branch_taken_0x274914 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x274914) {
            ctx->pc = 0x274988u;
            goto label_274988;
        }
    }
    ctx->pc = 0x27491Cu;
label_27491c:
    // 0x27491c: 0x8ea40028  lw          $a0, 0x28($s5)
    ctx->pc = 0x27491cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_274920:
    // 0x274920: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x274920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_274924:
    // 0x274924: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x274924u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_274928:
    // 0x274928: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x274928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27492c:
    // 0x27492c: 0x8e880004  lw          $t0, 0x4($s4)
    ctx->pc = 0x27492cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_274930:
    // 0x274930: 0x27a900d0  addiu       $t1, $sp, 0xD0
    ctx->pc = 0x274930u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_274934:
    // 0x274934: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x274934u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_274938:
    // 0x274938: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x274938u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_27493c:
    // 0x27493c: 0x320f809  jalr        $t9
label_274940:
    if (ctx->pc == 0x274940u) {
        ctx->pc = 0x274940u;
            // 0x274940: 0x2c0502d  daddu       $t2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x274944u;
        goto label_274944;
    }
    ctx->pc = 0x27493Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x274944u);
        ctx->pc = 0x274940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27493Cu;
            // 0x274940: 0x2c0502d  daddu       $t2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x274944u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x274944u; }
            if (ctx->pc != 0x274944u) { return; }
        }
        }
    }
    ctx->pc = 0x274944u;
label_274944:
    // 0x274944: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x274944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_274948:
    // 0x274948: 0xc09d404  jal         func_275010
label_27494c:
    if (ctx->pc == 0x27494Cu) {
        ctx->pc = 0x27494Cu;
            // 0x27494c: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x274950u;
        goto label_274950;
    }
    ctx->pc = 0x274948u;
    SET_GPR_U32(ctx, 31, 0x274950u);
    ctx->pc = 0x27494Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274948u;
            // 0x27494c: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x275010u;
    if (runtime->hasFunction(0x275010u)) {
        auto targetFn = runtime->lookupFunction(0x275010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274950u; }
        if (ctx->pc != 0x274950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00275010_0x275010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274950u; }
        if (ctx->pc != 0x274950u) { return; }
    }
    ctx->pc = 0x274950u;
label_274950:
    // 0x274950: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x274950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_274954:
    // 0x274954: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x274954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_274958:
    // 0x274958: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x274958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27495c:
    // 0x27495c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x27495cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_274960:
    // 0x274960: 0x27a800d0  addiu       $t0, $sp, 0xD0
    ctx->pc = 0x274960u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_274964:
    // 0x274964: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x274964u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_274968:
    // 0x274968: 0xc09cd1c  jal         func_273470
label_27496c:
    if (ctx->pc == 0x27496Cu) {
        ctx->pc = 0x27496Cu;
            // 0x27496c: 0xafb000ac  sw          $s0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 16));
        ctx->pc = 0x274970u;
        goto label_274970;
    }
    ctx->pc = 0x274968u;
    SET_GPR_U32(ctx, 31, 0x274970u);
    ctx->pc = 0x27496Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274968u;
            // 0x27496c: 0xafb000ac  sw          $s0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x273470u;
    if (runtime->hasFunction(0x273470u)) {
        auto targetFn = runtime->lookupFunction(0x273470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274970u; }
        if (ctx->pc != 0x274970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00273470_0x273470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274970u; }
        if (ctx->pc != 0x274970u) { return; }
    }
    ctx->pc = 0x274970u;
label_274970:
    // 0x274970: 0x8ea20030  lw          $v0, 0x30($s5)
    ctx->pc = 0x274970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
label_274974:
    // 0x274974: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x274974u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_274978:
    // 0x274978: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x274978u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_27497c:
    // 0x27497c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_274980:
    if (ctx->pc == 0x274980u) {
        ctx->pc = 0x274980u;
            // 0x274980: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x274984u;
        goto label_274984;
    }
    ctx->pc = 0x27497Cu;
    {
        const bool branch_taken_0x27497c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x274980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27497Cu;
            // 0x274980: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27497c) {
            ctx->pc = 0x274900u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_274900;
        }
    }
    ctx->pc = 0x274984u;
label_274984:
    // 0x274984: 0x0  nop
    ctx->pc = 0x274984u;
    // NOP
label_274988:
    // 0x274988: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x274988u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_27498c:
    // 0x27498c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27498cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_274990:
    // 0x274990: 0x2676002c  addiu       $s6, $s3, 0x2C
    ctx->pc = 0x274990u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
label_274994:
    // 0x274994: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x274994u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_274998:
    // 0x274998: 0xae60002c  sw          $zero, 0x2C($s3)
    ctx->pc = 0x274998u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 0));
label_27499c:
    // 0x27499c: 0xae620030  sw          $v0, 0x30($s3)
    ctx->pc = 0x27499cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
label_2749a0:
    // 0x2749a0: 0xae600034  sw          $zero, 0x34($s3)
    ctx->pc = 0x2749a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 0));
label_2749a4:
    // 0x2749a4: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2749a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2749a8:
    // 0x2749a8: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x2749a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2749ac:
    // 0x2749ac: 0x6000034  bltz        $s0, . + 4 + (0x34 << 2)
label_2749b0:
    if (ctx->pc == 0x2749B0u) {
        ctx->pc = 0x2749B0u;
            // 0x2749b0: 0x220f02d  daddu       $fp, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2749B4u;
        goto label_2749b4;
    }
    ctx->pc = 0x2749ACu;
    {
        const bool branch_taken_0x2749ac = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2749B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2749ACu;
            // 0x2749b0: 0x220f02d  daddu       $fp, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2749ac) {
            ctx->pc = 0x274A80u;
            goto label_274a80;
        }
    }
    ctx->pc = 0x2749B4u;
label_2749b4:
    // 0x2749b4: 0x0  nop
    ctx->pc = 0x2749b4u;
    // NOP
label_2749b8:
    // 0x2749b8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2749b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2749bc:
    // 0x2749bc: 0x3c2082b  sltu        $at, $fp, $v0
    ctx->pc = 0x2749bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2749c0:
    // 0x2749c0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2749c4:
    if (ctx->pc == 0x2749C4u) {
        ctx->pc = 0x2749C8u;
        goto label_2749c8;
    }
    ctx->pc = 0x2749C0u;
    {
        const bool branch_taken_0x2749c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2749c0) {
            ctx->pc = 0x2749D0u;
            goto label_2749d0;
        }
    }
    ctx->pc = 0x2749C8u;
label_2749c8:
    // 0x2749c8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2749c8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2749cc:
    // 0x2749cc: 0x0  nop
    ctx->pc = 0x2749ccu;
    // NOP
label_2749d0:
    // 0x2749d0: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x2749d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_2749d4:
    // 0x2749d4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_2749d8:
    if (ctx->pc == 0x2749D8u) {
        ctx->pc = 0x2749DCu;
        goto label_2749dc;
    }
    ctx->pc = 0x2749D4u;
    {
        const bool branch_taken_0x2749d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2749d4) {
            ctx->pc = 0x2749E0u;
            goto label_2749e0;
        }
    }
    ctx->pc = 0x2749DCu;
label_2749dc:
    // 0x2749dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2749dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2749e0:
    // 0x2749e0: 0x8ea40028  lw          $a0, 0x28($s5)
    ctx->pc = 0x2749e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_2749e4:
    // 0x2749e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2749e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2749e8:
    // 0x2749e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2749e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2749ec:
    // 0x2749ec: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2749ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2749f0:
    // 0x2749f0: 0x320f809  jalr        $t9
label_2749f4:
    if (ctx->pc == 0x2749F4u) {
        ctx->pc = 0x2749F4u;
            // 0x2749f4: 0x27a600f4  addiu       $a2, $sp, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
        ctx->pc = 0x2749F8u;
        goto label_2749f8;
    }
    ctx->pc = 0x2749F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2749F8u);
        ctx->pc = 0x2749F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2749F0u;
            // 0x2749f4: 0x27a600f4  addiu       $a2, $sp, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2749F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2749F8u; }
            if (ctx->pc != 0x2749F8u) { return; }
        }
        }
    }
    ctx->pc = 0x2749F8u;
label_2749f8:
    // 0x2749f8: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x2749f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2749fc:
    // 0x2749fc: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x2749fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_274a00:
    // 0x274a00: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_274a04:
    if (ctx->pc == 0x274A04u) {
        ctx->pc = 0x274A08u;
        goto label_274a08;
    }
    ctx->pc = 0x274A00u;
    {
        const bool branch_taken_0x274a00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x274a00) {
            ctx->pc = 0x274A10u;
            goto label_274a10;
        }
    }
    ctx->pc = 0x274A08u;
label_274a08:
    // 0x274a08: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x274a08u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_274a0c:
    // 0x274a0c: 0x0  nop
    ctx->pc = 0x274a0cu;
    // NOP
label_274a10:
    // 0x274a10: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x274a10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_274a14:
    // 0x274a14: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_274a18:
    if (ctx->pc == 0x274A18u) {
        ctx->pc = 0x274A18u;
            // 0x274a18: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x274A1Cu;
        goto label_274a1c;
    }
    ctx->pc = 0x274A14u;
    {
        const bool branch_taken_0x274a14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x274A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274A14u;
            // 0x274a18: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274a14) {
            ctx->pc = 0x274A70u;
            goto label_274a70;
        }
    }
    ctx->pc = 0x274A1Cu;
label_274a1c:
    // 0x274a1c: 0x27a600f4  addiu       $a2, $sp, 0xF4
    ctx->pc = 0x274a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
label_274a20:
    // 0x274a20: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x274a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_274a24:
    // 0x274a24: 0x0  nop
    ctx->pc = 0x274a24u;
    // NOP
label_274a28:
    // 0x274a28: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x274a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_274a2c:
    // 0x274a2c: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x274a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_274a30:
    // 0x274a30: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x274a30u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_274a34:
    // 0x274a34: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_274a38:
    if (ctx->pc == 0x274A38u) {
        ctx->pc = 0x274A3Cu;
        goto label_274a3c;
    }
    ctx->pc = 0x274A34u;
    {
        const bool branch_taken_0x274a34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x274a34) {
            ctx->pc = 0x274A40u;
            goto label_274a40;
        }
    }
    ctx->pc = 0x274A3Cu;
label_274a3c:
    // 0x274a3c: 0xaca40030  sw          $a0, 0x30($a1)
    ctx->pc = 0x274a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 4));
label_274a40:
    // 0x274a40: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x274a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_274a44:
    // 0x274a44: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x274a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_274a48:
    // 0x274a48: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x274a48u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_274a4c:
    // 0x274a4c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_274a50:
    if (ctx->pc == 0x274A50u) {
        ctx->pc = 0x274A54u;
        goto label_274a54;
    }
    ctx->pc = 0x274A4Cu;
    {
        const bool branch_taken_0x274a4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x274a4c) {
            ctx->pc = 0x274A58u;
            goto label_274a58;
        }
    }
    ctx->pc = 0x274A54u;
label_274a54:
    // 0x274a54: 0xaca40034  sw          $a0, 0x34($a1)
    ctx->pc = 0x274a54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 4));
label_274a58:
    // 0x274a58: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x274a58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_274a5c:
    // 0x274a5c: 0xe2182a  slt         $v1, $a3, $v0
    ctx->pc = 0x274a5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_274a60:
    // 0x274a60: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x274a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_274a64:
    // 0x274a64: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_274a68:
    if (ctx->pc == 0x274A68u) {
        ctx->pc = 0x274A68u;
            // 0x274a68: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x274A6Cu;
        goto label_274a6c;
    }
    ctx->pc = 0x274A64u;
    {
        const bool branch_taken_0x274a64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x274A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274A64u;
            // 0x274a68: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274a64) {
            ctx->pc = 0x274A28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_274a28;
        }
    }
    ctx->pc = 0x274A6Cu;
label_274a6c:
    // 0x274a6c: 0x0  nop
    ctx->pc = 0x274a6cu;
    // NOP
label_274a70:
    // 0x274a70: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x274a70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_274a74:
    // 0x274a74: 0x601ffd0  bgez        $s0, . + 4 + (-0x30 << 2)
label_274a78:
    if (ctx->pc == 0x274A78u) {
        ctx->pc = 0x274A78u;
            // 0x274a78: 0x26520014  addiu       $s2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->pc = 0x274A7Cu;
        goto label_274a7c;
    }
    ctx->pc = 0x274A74u;
    {
        const bool branch_taken_0x274a74 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x274A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274A74u;
            // 0x274a78: 0x26520014  addiu       $s2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274a74) {
            ctx->pc = 0x2749B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2749b8;
        }
    }
    ctx->pc = 0x274A7Cu;
label_274a7c:
    // 0x274a7c: 0x0  nop
    ctx->pc = 0x274a7cu;
    // NOP
label_274a80:
    // 0x274a80: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x274a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_274a84:
    // 0x274a84: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x274a84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_274a88:
    // 0x274a88: 0xae710024  sw          $s1, 0x24($s3)
    ctx->pc = 0x274a88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 17));
label_274a8c:
    // 0x274a8c: 0xae7e0028  sw          $fp, 0x28($s3)
    ctx->pc = 0x274a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 30));
label_274a90:
    // 0x274a90: 0x8e650060  lw          $a1, 0x60($s3)
    ctx->pc = 0x274a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_274a94:
    // 0x274a94: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x274a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_274a98:
    // 0x274a98: 0x1045000b  beq         $v0, $a1, . + 4 + (0xB << 2)
label_274a9c:
    if (ctx->pc == 0x274A9Cu) {
        ctx->pc = 0x274AA0u;
        goto label_274aa0;
    }
    ctx->pc = 0x274A98u;
    {
        const bool branch_taken_0x274a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x274a98) {
            ctx->pc = 0x274AC8u;
            goto label_274ac8;
        }
    }
    ctx->pc = 0x274AA0u;
label_274aa0:
    // 0x274aa0: 0x8ea40028  lw          $a0, 0x28($s5)
    ctx->pc = 0x274aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_274aa4:
    // 0x274aa4: 0x27a900fc  addiu       $t1, $sp, 0xFC
    ctx->pc = 0x274aa4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
label_274aa8:
    // 0x274aa8: 0x8ca60014  lw          $a2, 0x14($a1)
    ctx->pc = 0x274aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_274aac:
    // 0x274aac: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x274aacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_274ab0:
    // 0x274ab0: 0x8e880004  lw          $t0, 0x4($s4)
    ctx->pc = 0x274ab0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_274ab4:
    // 0x274ab4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x274ab4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_274ab8:
    // 0x274ab8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x274ab8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_274abc:
    // 0x274abc: 0x320f809  jalr        $t9
label_274ac0:
    if (ctx->pc == 0x274AC0u) {
        ctx->pc = 0x274AC0u;
            // 0x274ac0: 0x27aa00f8  addiu       $t2, $sp, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
        ctx->pc = 0x274AC4u;
        goto label_274ac4;
    }
    ctx->pc = 0x274ABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x274AC4u);
        ctx->pc = 0x274AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274ABCu;
            // 0x274ac0: 0x27aa00f8  addiu       $t2, $sp, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x274AC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x274AC4u; }
            if (ctx->pc != 0x274AC4u) { return; }
        }
        }
    }
    ctx->pc = 0x274AC4u;
label_274ac4:
    // 0x274ac4: 0x0  nop
    ctx->pc = 0x274ac4u;
    // NOP
label_274ac8:
    // 0x274ac8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x274ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_274acc:
    // 0x274acc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x274accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_274ad0:
    // 0x274ad0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x274ad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_274ad4:
    // 0x274ad4: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x274ad4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_274ad8:
    // 0x274ad8: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x274ad8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_274adc:
    // 0x274adc: 0xc09ceb4  jal         func_273AD0
label_274ae0:
    if (ctx->pc == 0x274AE0u) {
        ctx->pc = 0x274AE0u;
            // 0x274ae0: 0x27a900b0  addiu       $t1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x274AE4u;
        goto label_274ae4;
    }
    ctx->pc = 0x274ADCu;
    SET_GPR_U32(ctx, 31, 0x274AE4u);
    ctx->pc = 0x274AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274ADCu;
            // 0x274ae0: 0x27a900b0  addiu       $t1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x273AD0u;
    if (runtime->hasFunction(0x273AD0u)) {
        auto targetFn = runtime->lookupFunction(0x273AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274AE4u; }
        if (ctx->pc != 0x274AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00273AD0_0x273ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274AE4u; }
        if (ctx->pc != 0x274AE4u) { return; }
    }
    ctx->pc = 0x274AE4u;
label_274ae4:
    // 0x274ae4: 0x26e80001  addiu       $t0, $s7, 0x1
    ctx->pc = 0x274ae4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_274ae8:
    // 0x274ae8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x274ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_274aec:
    // 0x274aec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x274aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_274af0:
    // 0x274af0: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x274af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_274af4:
    // 0x274af4: 0xc09d1a0  jal         func_274680
label_274af8:
    if (ctx->pc == 0x274AF8u) {
        ctx->pc = 0x274AF8u;
            // 0x274af8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x274AFCu;
        goto label_274afc;
    }
    ctx->pc = 0x274AF4u;
    SET_GPR_U32(ctx, 31, 0x274AFCu);
    ctx->pc = 0x274AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274AF4u;
            // 0x274af8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274680u;
    goto label_274680;
    ctx->pc = 0x274AFCu;
label_274afc:
    // 0x274afc: 0x26e80001  addiu       $t0, $s7, 0x1
    ctx->pc = 0x274afcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_274b00:
    // 0x274b00: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x274b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_274b04:
    // 0x274b04: 0xae620074  sw          $v0, 0x74($s3)
    ctx->pc = 0x274b04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 2));
label_274b08:
    // 0x274b08: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x274b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_274b0c:
    // 0x274b0c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x274b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_274b10:
    // 0x274b10: 0xc09d1a0  jal         func_274680
label_274b14:
    if (ctx->pc == 0x274B14u) {
        ctx->pc = 0x274B14u;
            // 0x274b14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x274B18u;
        goto label_274b18;
    }
    ctx->pc = 0x274B10u;
    SET_GPR_U32(ctx, 31, 0x274B18u);
    ctx->pc = 0x274B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274B10u;
            // 0x274b14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274680u;
    goto label_274680;
    ctx->pc = 0x274B18u;
label_274b18:
    // 0x274b18: 0xae620070  sw          $v0, 0x70($s3)
    ctx->pc = 0x274b18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 2));
label_274b1c:
    // 0x274b1c: 0x10000006  b           . + 4 + (0x6 << 2)
label_274b20:
    if (ctx->pc == 0x274B20u) {
        ctx->pc = 0x274B20u;
            // 0x274b20: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x274B24u;
        goto label_274b24;
    }
    ctx->pc = 0x274B1Cu;
    {
        const bool branch_taken_0x274b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274B1Cu;
            // 0x274b20: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274b1c) {
            ctx->pc = 0x274B38u;
            goto label_274b38;
        }
    }
    ctx->pc = 0x274B24u;
label_274b24:
    // 0x274b24: 0x0  nop
    ctx->pc = 0x274b24u;
    // NOP
label_274b28:
    // 0x274b28: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x274b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_274b2c:
    // 0x274b2c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x274b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_274b30:
    // 0x274b30: 0x1000ff69  b           . + 4 + (-0x97 << 2)
label_274b34:
    if (ctx->pc == 0x274B34u) {
        ctx->pc = 0x274B34u;
            // 0x274b34: 0x245000d8  addiu       $s0, $v0, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
        ctx->pc = 0x274B38u;
        goto label_274b38;
    }
    ctx->pc = 0x274B30u;
    {
        const bool branch_taken_0x274b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274B30u;
            // 0x274b34: 0x245000d8  addiu       $s0, $v0, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274b30) {
            ctx->pc = 0x2748D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2748d8;
        }
    }
    ctx->pc = 0x274B38u;
label_274b38:
    // 0x274b38: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x274b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_274b3c:
    // 0x274b3c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x274b3cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_274b40:
    // 0x274b40: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x274b40u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_274b44:
    // 0x274b44: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x274b44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_274b48:
    // 0x274b48: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x274b48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_274b4c:
    // 0x274b4c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x274b4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_274b50:
    // 0x274b50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x274b50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_274b54:
    // 0x274b54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x274b54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_274b58:
    // 0x274b58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x274b58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_274b5c:
    // 0x274b5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x274b5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_274b60:
    // 0x274b60: 0x3e00008  jr          $ra
label_274b64:
    if (ctx->pc == 0x274B64u) {
        ctx->pc = 0x274B64u;
            // 0x274b64: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x274B68u;
        goto label_274b68;
    }
    ctx->pc = 0x274B60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274B60u;
            // 0x274b64: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x274B68u;
label_274b68:
    // 0x274b68: 0x0  nop
    ctx->pc = 0x274b68u;
    // NOP
label_274b6c:
    // 0x274b6c: 0x0  nop
    ctx->pc = 0x274b6cu;
    // NOP
label_274b70:
    // 0x274b70: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
label_274b74:
    if (ctx->pc == 0x274B74u) {
        ctx->pc = 0x274B78u;
        goto label_274b78;
    }
    ctx->pc = 0x274B70u;
    {
        const bool branch_taken_0x274b70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x274b70) {
            ctx->pc = 0x274BB8u;
            goto label_274bb8;
        }
    }
    ctx->pc = 0x274B78u;
label_274b78:
    // 0x274b78: 0x80a30004  lb          $v1, 0x4($a1)
    ctx->pc = 0x274b78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
label_274b7c:
    // 0x274b7c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_274b80:
    if (ctx->pc == 0x274B80u) {
        ctx->pc = 0x274B84u;
        goto label_274b84;
    }
    ctx->pc = 0x274B7Cu;
    {
        const bool branch_taken_0x274b7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x274b7c) {
            ctx->pc = 0x274BA0u;
            goto label_274ba0;
        }
    }
    ctx->pc = 0x274B84u;
label_274b84:
    // 0x274b84: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x274b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_274b88:
    // 0x274b88: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x274b88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_274b8c:
    // 0x274b8c: 0xac850018  sw          $a1, 0x18($a0)
    ctx->pc = 0x274b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
label_274b90:
    // 0x274b90: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x274b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_274b94:
    // 0x274b94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x274b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_274b98:
    // 0x274b98: 0x10000007  b           . + 4 + (0x7 << 2)
label_274b9c:
    if (ctx->pc == 0x274B9Cu) {
        ctx->pc = 0x274B9Cu;
            // 0x274b9c: 0xac83001c  sw          $v1, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
        ctx->pc = 0x274BA0u;
        goto label_274ba0;
    }
    ctx->pc = 0x274B98u;
    {
        const bool branch_taken_0x274b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274B98u;
            // 0x274b9c: 0xac83001c  sw          $v1, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274b98) {
            ctx->pc = 0x274BB8u;
            goto label_274bb8;
        }
    }
    ctx->pc = 0x274BA0u;
label_274ba0:
    // 0x274ba0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x274ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_274ba4:
    // 0x274ba4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x274ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_274ba8:
    // 0x274ba8: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x274ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
label_274bac:
    // 0x274bac: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x274bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_274bb0:
    // 0x274bb0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x274bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_274bb4:
    // 0x274bb4: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x274bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_274bb8:
    // 0x274bb8: 0x3e00008  jr          $ra
label_274bbc:
    if (ctx->pc == 0x274BBCu) {
        ctx->pc = 0x274BC0u;
        goto label_274bc0;
    }
    ctx->pc = 0x274BB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x274BC0u;
label_274bc0:
    // 0x274bc0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x274bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_274bc4:
    // 0x274bc4: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x274bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_274bc8:
    // 0x274bc8: 0x3e00008  jr          $ra
label_274bcc:
    if (ctx->pc == 0x274BCCu) {
        ctx->pc = 0x274BCCu;
            // 0x274bcc: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x274BD0u;
        goto label_fallthrough_0x274bc8;
    }
    ctx->pc = 0x274BC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274BC8u;
            // 0x274bcc: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x274bc8:
    ctx->pc = 0x274BD0u;
}
