#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00488680
// Address: 0x488680 - 0x488af0
void sub_00488680_0x488680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488680_0x488680");
#endif

    switch (ctx->pc) {
        case 0x488680u: goto label_488680;
        case 0x488684u: goto label_488684;
        case 0x488688u: goto label_488688;
        case 0x48868cu: goto label_48868c;
        case 0x488690u: goto label_488690;
        case 0x488694u: goto label_488694;
        case 0x488698u: goto label_488698;
        case 0x48869cu: goto label_48869c;
        case 0x4886a0u: goto label_4886a0;
        case 0x4886a4u: goto label_4886a4;
        case 0x4886a8u: goto label_4886a8;
        case 0x4886acu: goto label_4886ac;
        case 0x4886b0u: goto label_4886b0;
        case 0x4886b4u: goto label_4886b4;
        case 0x4886b8u: goto label_4886b8;
        case 0x4886bcu: goto label_4886bc;
        case 0x4886c0u: goto label_4886c0;
        case 0x4886c4u: goto label_4886c4;
        case 0x4886c8u: goto label_4886c8;
        case 0x4886ccu: goto label_4886cc;
        case 0x4886d0u: goto label_4886d0;
        case 0x4886d4u: goto label_4886d4;
        case 0x4886d8u: goto label_4886d8;
        case 0x4886dcu: goto label_4886dc;
        case 0x4886e0u: goto label_4886e0;
        case 0x4886e4u: goto label_4886e4;
        case 0x4886e8u: goto label_4886e8;
        case 0x4886ecu: goto label_4886ec;
        case 0x4886f0u: goto label_4886f0;
        case 0x4886f4u: goto label_4886f4;
        case 0x4886f8u: goto label_4886f8;
        case 0x4886fcu: goto label_4886fc;
        case 0x488700u: goto label_488700;
        case 0x488704u: goto label_488704;
        case 0x488708u: goto label_488708;
        case 0x48870cu: goto label_48870c;
        case 0x488710u: goto label_488710;
        case 0x488714u: goto label_488714;
        case 0x488718u: goto label_488718;
        case 0x48871cu: goto label_48871c;
        case 0x488720u: goto label_488720;
        case 0x488724u: goto label_488724;
        case 0x488728u: goto label_488728;
        case 0x48872cu: goto label_48872c;
        case 0x488730u: goto label_488730;
        case 0x488734u: goto label_488734;
        case 0x488738u: goto label_488738;
        case 0x48873cu: goto label_48873c;
        case 0x488740u: goto label_488740;
        case 0x488744u: goto label_488744;
        case 0x488748u: goto label_488748;
        case 0x48874cu: goto label_48874c;
        case 0x488750u: goto label_488750;
        case 0x488754u: goto label_488754;
        case 0x488758u: goto label_488758;
        case 0x48875cu: goto label_48875c;
        case 0x488760u: goto label_488760;
        case 0x488764u: goto label_488764;
        case 0x488768u: goto label_488768;
        case 0x48876cu: goto label_48876c;
        case 0x488770u: goto label_488770;
        case 0x488774u: goto label_488774;
        case 0x488778u: goto label_488778;
        case 0x48877cu: goto label_48877c;
        case 0x488780u: goto label_488780;
        case 0x488784u: goto label_488784;
        case 0x488788u: goto label_488788;
        case 0x48878cu: goto label_48878c;
        case 0x488790u: goto label_488790;
        case 0x488794u: goto label_488794;
        case 0x488798u: goto label_488798;
        case 0x48879cu: goto label_48879c;
        case 0x4887a0u: goto label_4887a0;
        case 0x4887a4u: goto label_4887a4;
        case 0x4887a8u: goto label_4887a8;
        case 0x4887acu: goto label_4887ac;
        case 0x4887b0u: goto label_4887b0;
        case 0x4887b4u: goto label_4887b4;
        case 0x4887b8u: goto label_4887b8;
        case 0x4887bcu: goto label_4887bc;
        case 0x4887c0u: goto label_4887c0;
        case 0x4887c4u: goto label_4887c4;
        case 0x4887c8u: goto label_4887c8;
        case 0x4887ccu: goto label_4887cc;
        case 0x4887d0u: goto label_4887d0;
        case 0x4887d4u: goto label_4887d4;
        case 0x4887d8u: goto label_4887d8;
        case 0x4887dcu: goto label_4887dc;
        case 0x4887e0u: goto label_4887e0;
        case 0x4887e4u: goto label_4887e4;
        case 0x4887e8u: goto label_4887e8;
        case 0x4887ecu: goto label_4887ec;
        case 0x4887f0u: goto label_4887f0;
        case 0x4887f4u: goto label_4887f4;
        case 0x4887f8u: goto label_4887f8;
        case 0x4887fcu: goto label_4887fc;
        case 0x488800u: goto label_488800;
        case 0x488804u: goto label_488804;
        case 0x488808u: goto label_488808;
        case 0x48880cu: goto label_48880c;
        case 0x488810u: goto label_488810;
        case 0x488814u: goto label_488814;
        case 0x488818u: goto label_488818;
        case 0x48881cu: goto label_48881c;
        case 0x488820u: goto label_488820;
        case 0x488824u: goto label_488824;
        case 0x488828u: goto label_488828;
        case 0x48882cu: goto label_48882c;
        case 0x488830u: goto label_488830;
        case 0x488834u: goto label_488834;
        case 0x488838u: goto label_488838;
        case 0x48883cu: goto label_48883c;
        case 0x488840u: goto label_488840;
        case 0x488844u: goto label_488844;
        case 0x488848u: goto label_488848;
        case 0x48884cu: goto label_48884c;
        case 0x488850u: goto label_488850;
        case 0x488854u: goto label_488854;
        case 0x488858u: goto label_488858;
        case 0x48885cu: goto label_48885c;
        case 0x488860u: goto label_488860;
        case 0x488864u: goto label_488864;
        case 0x488868u: goto label_488868;
        case 0x48886cu: goto label_48886c;
        case 0x488870u: goto label_488870;
        case 0x488874u: goto label_488874;
        case 0x488878u: goto label_488878;
        case 0x48887cu: goto label_48887c;
        case 0x488880u: goto label_488880;
        case 0x488884u: goto label_488884;
        case 0x488888u: goto label_488888;
        case 0x48888cu: goto label_48888c;
        case 0x488890u: goto label_488890;
        case 0x488894u: goto label_488894;
        case 0x488898u: goto label_488898;
        case 0x48889cu: goto label_48889c;
        case 0x4888a0u: goto label_4888a0;
        case 0x4888a4u: goto label_4888a4;
        case 0x4888a8u: goto label_4888a8;
        case 0x4888acu: goto label_4888ac;
        case 0x4888b0u: goto label_4888b0;
        case 0x4888b4u: goto label_4888b4;
        case 0x4888b8u: goto label_4888b8;
        case 0x4888bcu: goto label_4888bc;
        case 0x4888c0u: goto label_4888c0;
        case 0x4888c4u: goto label_4888c4;
        case 0x4888c8u: goto label_4888c8;
        case 0x4888ccu: goto label_4888cc;
        case 0x4888d0u: goto label_4888d0;
        case 0x4888d4u: goto label_4888d4;
        case 0x4888d8u: goto label_4888d8;
        case 0x4888dcu: goto label_4888dc;
        case 0x4888e0u: goto label_4888e0;
        case 0x4888e4u: goto label_4888e4;
        case 0x4888e8u: goto label_4888e8;
        case 0x4888ecu: goto label_4888ec;
        case 0x4888f0u: goto label_4888f0;
        case 0x4888f4u: goto label_4888f4;
        case 0x4888f8u: goto label_4888f8;
        case 0x4888fcu: goto label_4888fc;
        case 0x488900u: goto label_488900;
        case 0x488904u: goto label_488904;
        case 0x488908u: goto label_488908;
        case 0x48890cu: goto label_48890c;
        case 0x488910u: goto label_488910;
        case 0x488914u: goto label_488914;
        case 0x488918u: goto label_488918;
        case 0x48891cu: goto label_48891c;
        case 0x488920u: goto label_488920;
        case 0x488924u: goto label_488924;
        case 0x488928u: goto label_488928;
        case 0x48892cu: goto label_48892c;
        case 0x488930u: goto label_488930;
        case 0x488934u: goto label_488934;
        case 0x488938u: goto label_488938;
        case 0x48893cu: goto label_48893c;
        case 0x488940u: goto label_488940;
        case 0x488944u: goto label_488944;
        case 0x488948u: goto label_488948;
        case 0x48894cu: goto label_48894c;
        case 0x488950u: goto label_488950;
        case 0x488954u: goto label_488954;
        case 0x488958u: goto label_488958;
        case 0x48895cu: goto label_48895c;
        case 0x488960u: goto label_488960;
        case 0x488964u: goto label_488964;
        case 0x488968u: goto label_488968;
        case 0x48896cu: goto label_48896c;
        case 0x488970u: goto label_488970;
        case 0x488974u: goto label_488974;
        case 0x488978u: goto label_488978;
        case 0x48897cu: goto label_48897c;
        case 0x488980u: goto label_488980;
        case 0x488984u: goto label_488984;
        case 0x488988u: goto label_488988;
        case 0x48898cu: goto label_48898c;
        case 0x488990u: goto label_488990;
        case 0x488994u: goto label_488994;
        case 0x488998u: goto label_488998;
        case 0x48899cu: goto label_48899c;
        case 0x4889a0u: goto label_4889a0;
        case 0x4889a4u: goto label_4889a4;
        case 0x4889a8u: goto label_4889a8;
        case 0x4889acu: goto label_4889ac;
        case 0x4889b0u: goto label_4889b0;
        case 0x4889b4u: goto label_4889b4;
        case 0x4889b8u: goto label_4889b8;
        case 0x4889bcu: goto label_4889bc;
        case 0x4889c0u: goto label_4889c0;
        case 0x4889c4u: goto label_4889c4;
        case 0x4889c8u: goto label_4889c8;
        case 0x4889ccu: goto label_4889cc;
        case 0x4889d0u: goto label_4889d0;
        case 0x4889d4u: goto label_4889d4;
        case 0x4889d8u: goto label_4889d8;
        case 0x4889dcu: goto label_4889dc;
        case 0x4889e0u: goto label_4889e0;
        case 0x4889e4u: goto label_4889e4;
        case 0x4889e8u: goto label_4889e8;
        case 0x4889ecu: goto label_4889ec;
        case 0x4889f0u: goto label_4889f0;
        case 0x4889f4u: goto label_4889f4;
        case 0x4889f8u: goto label_4889f8;
        case 0x4889fcu: goto label_4889fc;
        case 0x488a00u: goto label_488a00;
        case 0x488a04u: goto label_488a04;
        case 0x488a08u: goto label_488a08;
        case 0x488a0cu: goto label_488a0c;
        case 0x488a10u: goto label_488a10;
        case 0x488a14u: goto label_488a14;
        case 0x488a18u: goto label_488a18;
        case 0x488a1cu: goto label_488a1c;
        case 0x488a20u: goto label_488a20;
        case 0x488a24u: goto label_488a24;
        case 0x488a28u: goto label_488a28;
        case 0x488a2cu: goto label_488a2c;
        case 0x488a30u: goto label_488a30;
        case 0x488a34u: goto label_488a34;
        case 0x488a38u: goto label_488a38;
        case 0x488a3cu: goto label_488a3c;
        case 0x488a40u: goto label_488a40;
        case 0x488a44u: goto label_488a44;
        case 0x488a48u: goto label_488a48;
        case 0x488a4cu: goto label_488a4c;
        case 0x488a50u: goto label_488a50;
        case 0x488a54u: goto label_488a54;
        case 0x488a58u: goto label_488a58;
        case 0x488a5cu: goto label_488a5c;
        case 0x488a60u: goto label_488a60;
        case 0x488a64u: goto label_488a64;
        case 0x488a68u: goto label_488a68;
        case 0x488a6cu: goto label_488a6c;
        case 0x488a70u: goto label_488a70;
        case 0x488a74u: goto label_488a74;
        case 0x488a78u: goto label_488a78;
        case 0x488a7cu: goto label_488a7c;
        case 0x488a80u: goto label_488a80;
        case 0x488a84u: goto label_488a84;
        case 0x488a88u: goto label_488a88;
        case 0x488a8cu: goto label_488a8c;
        case 0x488a90u: goto label_488a90;
        case 0x488a94u: goto label_488a94;
        case 0x488a98u: goto label_488a98;
        case 0x488a9cu: goto label_488a9c;
        case 0x488aa0u: goto label_488aa0;
        case 0x488aa4u: goto label_488aa4;
        case 0x488aa8u: goto label_488aa8;
        case 0x488aacu: goto label_488aac;
        case 0x488ab0u: goto label_488ab0;
        case 0x488ab4u: goto label_488ab4;
        case 0x488ab8u: goto label_488ab8;
        case 0x488abcu: goto label_488abc;
        case 0x488ac0u: goto label_488ac0;
        case 0x488ac4u: goto label_488ac4;
        case 0x488ac8u: goto label_488ac8;
        case 0x488accu: goto label_488acc;
        case 0x488ad0u: goto label_488ad0;
        case 0x488ad4u: goto label_488ad4;
        case 0x488ad8u: goto label_488ad8;
        case 0x488adcu: goto label_488adc;
        case 0x488ae0u: goto label_488ae0;
        case 0x488ae4u: goto label_488ae4;
        case 0x488ae8u: goto label_488ae8;
        case 0x488aecu: goto label_488aec;
        default: break;
    }

    ctx->pc = 0x488680u;

label_488680:
    // 0x488680: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x488680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_488684:
    // 0x488684: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x488684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_488688:
    // 0x488688: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x488688u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48868c:
    // 0x48868c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x48868cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_488690:
    // 0x488690: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x488690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_488694:
    // 0x488694: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x488694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_488698:
    // 0x488698: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x488698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48869c:
    // 0x48869c: 0xc481006c  lwc1        $f1, 0x6C($a0)
    ctx->pc = 0x48869cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4886a0:
    // 0x4886a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4886a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4886a4:
    // 0x4886a4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_4886a8:
    if (ctx->pc == 0x4886A8u) {
        ctx->pc = 0x4886A8u;
            // 0x4886a8: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4886ACu;
        goto label_4886ac;
    }
    ctx->pc = 0x4886A4u;
    {
        const bool branch_taken_0x4886a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4886A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4886A4u;
            // 0x4886a8: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4886a4) {
            ctx->pc = 0x4886C0u;
            goto label_4886c0;
        }
    }
    ctx->pc = 0x4886ACu;
label_4886ac:
    // 0x4886ac: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4886acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4886b0:
    // 0x4886b0: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4886b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4886b4:
    // 0x4886b4: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x4886b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4886b8:
    // 0x4886b8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4886b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4886bc:
    // 0x4886bc: 0xe660006c  swc1        $f0, 0x6C($s3)
    ctx->pc = 0x4886bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 108), bits); }
label_4886c0:
    // 0x4886c0: 0x8e640050  lw          $a0, 0x50($s3)
    ctx->pc = 0x4886c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_4886c4:
    // 0x4886c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4886c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4886c8:
    // 0x4886c8: 0x5083001a  beql        $a0, $v1, . + 4 + (0x1A << 2)
label_4886cc:
    if (ctx->pc == 0x4886CCu) {
        ctx->pc = 0x4886CCu;
            // 0x4886cc: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x4886D0u;
        goto label_4886d0;
    }
    ctx->pc = 0x4886C8u;
    {
        const bool branch_taken_0x4886c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4886c8) {
            ctx->pc = 0x4886CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4886C8u;
            // 0x4886cc: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x488734u;
            goto label_488734;
        }
    }
    ctx->pc = 0x4886D0u;
label_4886d0:
    // 0x4886d0: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_4886d4:
    if (ctx->pc == 0x4886D4u) {
        ctx->pc = 0x4886D4u;
            // 0x4886d4: 0x8e720054  lw          $s2, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->pc = 0x4886D8u;
        goto label_4886d8;
    }
    ctx->pc = 0x4886D0u;
    {
        const bool branch_taken_0x4886d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4886d0) {
            ctx->pc = 0x4886D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4886D0u;
            // 0x4886d4: 0x8e720054  lw          $s2, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4886E0u;
            goto label_4886e0;
        }
    }
    ctx->pc = 0x4886D8u;
label_4886d8:
    // 0x4886d8: 0x10000015  b           . + 4 + (0x15 << 2)
label_4886dc:
    if (ctx->pc == 0x4886DCu) {
        ctx->pc = 0x4886E0u;
        goto label_4886e0;
    }
    ctx->pc = 0x4886D8u;
    {
        const bool branch_taken_0x4886d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4886d8) {
            ctx->pc = 0x488730u;
            goto label_488730;
        }
    }
    ctx->pc = 0x4886E0u;
label_4886e0:
    // 0x4886e0: 0x12400013  beqz        $s2, . + 4 + (0x13 << 2)
label_4886e4:
    if (ctx->pc == 0x4886E4u) {
        ctx->pc = 0x4886E8u;
        goto label_4886e8;
    }
    ctx->pc = 0x4886E0u;
    {
        const bool branch_taken_0x4886e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x4886e0) {
            ctx->pc = 0x488730u;
            goto label_488730;
        }
    }
    ctx->pc = 0x4886E8u;
label_4886e8:
    // 0x4886e8: 0x8e710058  lw          $s1, 0x58($s3)
    ctx->pc = 0x4886e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4886ec:
    // 0x4886ec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4886ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4886f0:
    // 0x4886f0: 0xc121e28  jal         func_4878A0
label_4886f4:
    if (ctx->pc == 0x4886F4u) {
        ctx->pc = 0x4886F4u;
            // 0x4886f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4886F8u;
        goto label_4886f8;
    }
    ctx->pc = 0x4886F0u;
    SET_GPR_U32(ctx, 31, 0x4886F8u);
    ctx->pc = 0x4886F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4886F0u;
            // 0x4886f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4878A0u;
    if (runtime->hasFunction(0x4878A0u)) {
        auto targetFn = runtime->lookupFunction(0x4878A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4886F8u; }
        if (ctx->pc != 0x4886F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004878A0_0x4878a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4886F8u; }
        if (ctx->pc != 0x4886F8u) { return; }
    }
    ctx->pc = 0x4886F8u;
label_4886f8:
    // 0x4886f8: 0xc0e3658  jal         func_38D960
label_4886fc:
    if (ctx->pc == 0x4886FCu) {
        ctx->pc = 0x4886FCu;
            // 0x4886fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x488700u;
        goto label_488700;
    }
    ctx->pc = 0x4886F8u;
    SET_GPR_U32(ctx, 31, 0x488700u);
    ctx->pc = 0x4886FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4886F8u;
            // 0x4886fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488700u; }
        if (ctx->pc != 0x488700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488700u; }
        if (ctx->pc != 0x488700u) { return; }
    }
    ctx->pc = 0x488700u;
label_488700:
    // 0x488700: 0x8e2300e0  lw          $v1, 0xE0($s1)
    ctx->pc = 0x488700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_488704:
    // 0x488704: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x488704u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_488708:
    // 0x488708: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x488708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
label_48870c:
    // 0x48870c: 0x26310280  addiu       $s1, $s1, 0x280
    ctx->pc = 0x48870cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 640));
label_488710:
    // 0x488710: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x488710u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_488714:
    // 0x488714: 0x1640fff6  bnez        $s2, . + 4 + (-0xA << 2)
label_488718:
    if (ctx->pc == 0x488718u) {
        ctx->pc = 0x488718u;
            // 0x488718: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->pc = 0x48871Cu;
        goto label_48871c;
    }
    ctx->pc = 0x488714u;
    {
        const bool branch_taken_0x488714 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x488718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x488714u;
            // 0x488718: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488714) {
            ctx->pc = 0x4886F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4886f0;
        }
    }
    ctx->pc = 0x48871Cu;
label_48871c:
    // 0x48871c: 0x8e630054  lw          $v1, 0x54($s3)
    ctx->pc = 0x48871cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_488720:
    // 0x488720: 0x16030003  bne         $s0, $v1, . + 4 + (0x3 << 2)
label_488724:
    if (ctx->pc == 0x488724u) {
        ctx->pc = 0x488728u;
        goto label_488728;
    }
    ctx->pc = 0x488720u;
    {
        const bool branch_taken_0x488720 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x488720) {
            ctx->pc = 0x488730u;
            goto label_488730;
        }
    }
    ctx->pc = 0x488728u;
label_488728:
    // 0x488728: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x488728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48872c:
    // 0x48872c: 0xae630050  sw          $v1, 0x50($s3)
    ctx->pc = 0x48872cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 3));
label_488730:
    // 0x488730: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x488730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_488734:
    // 0x488734: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x488734u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_488738:
    // 0x488738: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x488738u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_48873c:
    // 0x48873c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48873cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_488740:
    // 0x488740: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x488740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_488744:
    // 0x488744: 0x3e00008  jr          $ra
label_488748:
    if (ctx->pc == 0x488748u) {
        ctx->pc = 0x488748u;
            // 0x488748: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x48874Cu;
        goto label_48874c;
    }
    ctx->pc = 0x488744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x488748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x488744u;
            // 0x488748: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48874Cu;
label_48874c:
    // 0x48874c: 0x0  nop
    ctx->pc = 0x48874cu;
    // NOP
label_488750:
    // 0x488750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x488750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_488754:
    // 0x488754: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x488754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_488758:
    // 0x488758: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x488758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48875c:
    // 0x48875c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x48875cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_488760:
    // 0x488760: 0x8c840058  lw          $a0, 0x58($a0)
    ctx->pc = 0x488760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_488764:
    // 0x488764: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_488768:
    if (ctx->pc == 0x488768u) {
        ctx->pc = 0x488768u;
            // 0x488768: 0xae000058  sw          $zero, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
        ctx->pc = 0x48876Cu;
        goto label_48876c;
    }
    ctx->pc = 0x488764u;
    {
        const bool branch_taken_0x488764 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x488764) {
            ctx->pc = 0x488768u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x488764u;
            // 0x488768: 0xae000058  sw          $zero, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48877Cu;
            goto label_48877c;
        }
    }
    ctx->pc = 0x48876Cu;
label_48876c:
    // 0x48876c: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x48876cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
label_488770:
    // 0x488770: 0xc0407c0  jal         func_101F00
label_488774:
    if (ctx->pc == 0x488774u) {
        ctx->pc = 0x488774u;
            // 0x488774: 0x24a587b0  addiu       $a1, $a1, -0x7850 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936496));
        ctx->pc = 0x488778u;
        goto label_488778;
    }
    ctx->pc = 0x488770u;
    SET_GPR_U32(ctx, 31, 0x488778u);
    ctx->pc = 0x488774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x488770u;
            // 0x488774: 0x24a587b0  addiu       $a1, $a1, -0x7850 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488778u; }
        if (ctx->pc != 0x488778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488778u; }
        if (ctx->pc != 0x488778u) { return; }
    }
    ctx->pc = 0x488778u;
label_488778:
    // 0x488778: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x488778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_48877c:
    // 0x48877c: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x48877cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_488780:
    // 0x488780: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_488784:
    if (ctx->pc == 0x488784u) {
        ctx->pc = 0x488784u;
            // 0x488784: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->pc = 0x488788u;
        goto label_488788;
    }
    ctx->pc = 0x488780u;
    {
        const bool branch_taken_0x488780 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x488780) {
            ctx->pc = 0x488784u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x488780u;
            // 0x488784: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
            ctx->pc = 0x488794u;
            goto label_488794;
        }
    }
    ctx->pc = 0x488788u;
label_488788:
    // 0x488788: 0xc04008c  jal         func_100230
label_48878c:
    if (ctx->pc == 0x48878Cu) {
        ctx->pc = 0x488790u;
        goto label_488790;
    }
    ctx->pc = 0x488788u;
    SET_GPR_U32(ctx, 31, 0x488790u);
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488790u; }
        if (ctx->pc != 0x488790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488790u; }
        if (ctx->pc != 0x488790u) { return; }
    }
    ctx->pc = 0x488790u;
label_488790:
    // 0x488790: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x488790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_488794:
    // 0x488794: 0xc0d37dc  jal         func_34DF70
label_488798:
    if (ctx->pc == 0x488798u) {
        ctx->pc = 0x488798u;
            // 0x488798: 0xae00005c  sw          $zero, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
        ctx->pc = 0x48879Cu;
        goto label_48879c;
    }
    ctx->pc = 0x488794u;
    SET_GPR_U32(ctx, 31, 0x48879Cu);
    ctx->pc = 0x488798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x488794u;
            // 0x488798: 0xae00005c  sw          $zero, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48879Cu; }
        if (ctx->pc != 0x48879Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48879Cu; }
        if (ctx->pc != 0x48879Cu) { return; }
    }
    ctx->pc = 0x48879Cu;
label_48879c:
    // 0x48879c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x48879cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4887a0:
    // 0x4887a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4887a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4887a4:
    // 0x4887a4: 0x3e00008  jr          $ra
label_4887a8:
    if (ctx->pc == 0x4887A8u) {
        ctx->pc = 0x4887A8u;
            // 0x4887a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4887ACu;
        goto label_4887ac;
    }
    ctx->pc = 0x4887A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4887A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4887A4u;
            // 0x4887a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4887ACu;
label_4887ac:
    // 0x4887ac: 0x0  nop
    ctx->pc = 0x4887acu;
    // NOP
label_4887b0:
    // 0x4887b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4887b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4887b4:
    // 0x4887b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4887b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4887b8:
    // 0x4887b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4887b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4887bc:
    // 0x4887bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4887bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4887c0:
    // 0x4887c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4887c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4887c4:
    // 0x4887c4: 0x12200022  beqz        $s1, . + 4 + (0x22 << 2)
label_4887c8:
    if (ctx->pc == 0x4887C8u) {
        ctx->pc = 0x4887C8u;
            // 0x4887c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4887CCu;
        goto label_4887cc;
    }
    ctx->pc = 0x4887C4u;
    {
        const bool branch_taken_0x4887c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4887C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4887C4u;
            // 0x4887c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4887c4) {
            ctx->pc = 0x488850u;
            goto label_488850;
        }
    }
    ctx->pc = 0x4887CCu;
label_4887cc:
    // 0x4887cc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4887ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4887d0:
    // 0x4887d0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4887d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4887d4:
    // 0x4887d4: 0x2463f710  addiu       $v1, $v1, -0x8F0
    ctx->pc = 0x4887d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965008));
label_4887d8:
    // 0x4887d8: 0x2442f750  addiu       $v0, $v0, -0x8B0
    ctx->pc = 0x4887d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965072));
label_4887dc:
    // 0x4887dc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4887dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4887e0:
    // 0x4887e0: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x4887e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_4887e4:
    // 0x4887e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4887e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4887e8:
    // 0x4887e8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4887e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4887ec:
    // 0x4887ec: 0x320f809  jalr        $t9
label_4887f0:
    if (ctx->pc == 0x4887F0u) {
        ctx->pc = 0x4887F4u;
        goto label_4887f4;
    }
    ctx->pc = 0x4887ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4887F4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4887F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4887F4u; }
            if (ctx->pc != 0x4887F4u) { return; }
        }
        }
    }
    ctx->pc = 0x4887F4u;
label_4887f4:
    // 0x4887f4: 0x262200f0  addiu       $v0, $s1, 0xF0
    ctx->pc = 0x4887f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
label_4887f8:
    // 0x4887f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4887fc:
    if (ctx->pc == 0x4887FCu) {
        ctx->pc = 0x488800u;
        goto label_488800;
    }
    ctx->pc = 0x4887F8u;
    {
        const bool branch_taken_0x4887f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4887f8) {
            ctx->pc = 0x48880Cu;
            goto label_48880c;
        }
    }
    ctx->pc = 0x488800u;
label_488800:
    // 0x488800: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x488800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_488804:
    // 0x488804: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x488804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
label_488808:
    // 0x488808: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x488808u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
label_48880c:
    // 0x48880c: 0x5220000b  beql        $s1, $zero, . + 4 + (0xB << 2)
label_488810:
    if (ctx->pc == 0x488810u) {
        ctx->pc = 0x488810u;
            // 0x488810: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x488814u;
        goto label_488814;
    }
    ctx->pc = 0x48880Cu;
    {
        const bool branch_taken_0x48880c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x48880c) {
            ctx->pc = 0x488810u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48880Cu;
            // 0x488810: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48883Cu;
            goto label_48883c;
        }
    }
    ctx->pc = 0x488814u;
label_488814:
    // 0x488814: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x488814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_488818:
    // 0x488818: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x488818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_48881c:
    // 0x48881c: 0x24638470  addiu       $v1, $v1, -0x7B90
    ctx->pc = 0x48881cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935664));
label_488820:
    // 0x488820: 0x244284b0  addiu       $v0, $v0, -0x7B50
    ctx->pc = 0x488820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935728));
label_488824:
    // 0x488824: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x488824u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_488828:
    // 0x488828: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x488828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_48882c:
    // 0x48882c: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x48882cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_488830:
    // 0x488830: 0xc0aee40  jal         func_2BB900
label_488834:
    if (ctx->pc == 0x488834u) {
        ctx->pc = 0x488834u;
            // 0x488834: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x488838u;
        goto label_488838;
    }
    ctx->pc = 0x488830u;
    SET_GPR_U32(ctx, 31, 0x488838u);
    ctx->pc = 0x488834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x488830u;
            // 0x488834: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB900u;
    if (runtime->hasFunction(0x2BB900u)) {
        auto targetFn = runtime->lookupFunction(0x2BB900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488838u; }
        if (ctx->pc != 0x488838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB900_0x2bb900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488838u; }
        if (ctx->pc != 0x488838u) { return; }
    }
    ctx->pc = 0x488838u;
label_488838:
    // 0x488838: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x488838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_48883c:
    // 0x48883c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x48883cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_488840:
    // 0x488840: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_488844:
    if (ctx->pc == 0x488844u) {
        ctx->pc = 0x488844u;
            // 0x488844: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x488848u;
        goto label_488848;
    }
    ctx->pc = 0x488840u;
    {
        const bool branch_taken_0x488840 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x488840) {
            ctx->pc = 0x488844u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x488840u;
            // 0x488844: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x488854u;
            goto label_488854;
        }
    }
    ctx->pc = 0x488848u;
label_488848:
    // 0x488848: 0xc0400a8  jal         func_1002A0
label_48884c:
    if (ctx->pc == 0x48884Cu) {
        ctx->pc = 0x48884Cu;
            // 0x48884c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x488850u;
        goto label_488850;
    }
    ctx->pc = 0x488848u;
    SET_GPR_U32(ctx, 31, 0x488850u);
    ctx->pc = 0x48884Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x488848u;
            // 0x48884c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488850u; }
        if (ctx->pc != 0x488850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488850u; }
        if (ctx->pc != 0x488850u) { return; }
    }
    ctx->pc = 0x488850u;
label_488850:
    // 0x488850: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x488850u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_488854:
    // 0x488854: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x488854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_488858:
    // 0x488858: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x488858u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48885c:
    // 0x48885c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48885cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_488860:
    // 0x488860: 0x3e00008  jr          $ra
label_488864:
    if (ctx->pc == 0x488864u) {
        ctx->pc = 0x488864u;
            // 0x488864: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x488868u;
        goto label_488868;
    }
    ctx->pc = 0x488860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x488864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x488860u;
            // 0x488864: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x488868u;
label_488868:
    // 0x488868: 0x0  nop
    ctx->pc = 0x488868u;
    // NOP
label_48886c:
    // 0x48886c: 0x0  nop
    ctx->pc = 0x48886cu;
    // NOP
label_488870:
    // 0x488870: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x488870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_488874:
    // 0x488874: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x488874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_488878:
    // 0x488878: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x488878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_48887c:
    // 0x48887c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x48887cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_488880:
    // 0x488880: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x488880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_488884:
    // 0x488884: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x488884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_488888:
    // 0x488888: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x488888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_48888c:
    // 0x48888c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x48888cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_488890:
    // 0x488890: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x488890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_488894:
    // 0x488894: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x488894u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_488898:
    // 0x488898: 0x24040f10  addiu       $a0, $zero, 0xF10
    ctx->pc = 0x488898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3856));
label_48889c:
    // 0x48889c: 0xc040138  jal         func_1004E0
label_4888a0:
    if (ctx->pc == 0x4888A0u) {
        ctx->pc = 0x4888A0u;
            // 0x4888a0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x4888A4u;
        goto label_4888a4;
    }
    ctx->pc = 0x48889Cu;
    SET_GPR_U32(ctx, 31, 0x4888A4u);
    ctx->pc = 0x4888A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48889Cu;
            // 0x4888a0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4888A4u; }
        if (ctx->pc != 0x4888A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4888A4u; }
        if (ctx->pc != 0x4888A4u) { return; }
    }
    ctx->pc = 0x4888A4u;
label_4888a4:
    // 0x4888a4: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x4888a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
label_4888a8:
    // 0x4888a8: 0x3c060049  lui         $a2, 0x49
    ctx->pc = 0x4888a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)73 << 16));
label_4888ac:
    // 0x4888ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4888acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4888b0:
    // 0x4888b0: 0x24a58990  addiu       $a1, $a1, -0x7670
    ctx->pc = 0x4888b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936976));
label_4888b4:
    // 0x4888b4: 0x24c687b0  addiu       $a2, $a2, -0x7850
    ctx->pc = 0x4888b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936496));
label_4888b8:
    // 0x4888b8: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x4888b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_4888bc:
    // 0x4888bc: 0xc040840  jal         func_102100
label_4888c0:
    if (ctx->pc == 0x4888C0u) {
        ctx->pc = 0x4888C0u;
            // 0x4888c0: 0x24080006  addiu       $t0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x4888C4u;
        goto label_4888c4;
    }
    ctx->pc = 0x4888BCu;
    SET_GPR_U32(ctx, 31, 0x4888C4u);
    ctx->pc = 0x4888C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4888BCu;
            // 0x4888c0: 0x24080006  addiu       $t0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4888C4u; }
        if (ctx->pc != 0x4888C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4888C4u; }
        if (ctx->pc != 0x4888C4u) { return; }
    }
    ctx->pc = 0x4888C4u;
label_4888c4:
    // 0x4888c4: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x4888c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
label_4888c8:
    // 0x4888c8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4888c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4888cc:
    // 0x4888cc: 0xc040138  jal         func_1004E0
label_4888d0:
    if (ctx->pc == 0x4888D0u) {
        ctx->pc = 0x4888D0u;
            // 0x4888d0: 0x24040138  addiu       $a0, $zero, 0x138 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
        ctx->pc = 0x4888D4u;
        goto label_4888d4;
    }
    ctx->pc = 0x4888CCu;
    SET_GPR_U32(ctx, 31, 0x4888D4u);
    ctx->pc = 0x4888D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4888CCu;
            // 0x4888d0: 0x24040138  addiu       $a0, $zero, 0x138 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4888D4u; }
        if (ctx->pc != 0x4888D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4888D4u; }
        if (ctx->pc != 0x4888D4u) { return; }
    }
    ctx->pc = 0x4888D4u;
label_4888d4:
    // 0x4888d4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4888d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4888d8:
    // 0x4888d8: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x4888d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
label_4888dc:
    // 0x4888dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4888dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4888e0:
    // 0x4888e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4888e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4888e4:
    // 0x4888e4: 0xc04a576  jal         func_1295D8
label_4888e8:
    if (ctx->pc == 0x4888E8u) {
        ctx->pc = 0x4888E8u;
            // 0x4888e8: 0x24060138  addiu       $a2, $zero, 0x138 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
        ctx->pc = 0x4888ECu;
        goto label_4888ec;
    }
    ctx->pc = 0x4888E4u;
    SET_GPR_U32(ctx, 31, 0x4888ECu);
    ctx->pc = 0x4888E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4888E4u;
            // 0x4888e8: 0x24060138  addiu       $a2, $zero, 0x138 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4888ECu; }
        if (ctx->pc != 0x4888ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4888ECu; }
        if (ctx->pc != 0x4888ECu) { return; }
    }
    ctx->pc = 0x4888ECu;
label_4888ec:
    // 0x4888ec: 0x8e110040  lw          $s1, 0x40($s0)
    ctx->pc = 0x4888ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_4888f0:
    // 0x4888f0: 0xc6150030  lwc1        $f21, 0x30($s0)
    ctx->pc = 0x4888f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4888f4:
    // 0x4888f4: 0xc6140034  lwc1        $f20, 0x34($s0)
    ctx->pc = 0x4888f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4888f8:
    // 0x4888f8: 0x24120006  addiu       $s2, $zero, 0x6
    ctx->pc = 0x4888f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4888fc:
    // 0x4888fc: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x4888fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_488900:
    // 0x488900: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x488900u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_488904:
    // 0x488904: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x488904u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_488908:
    // 0x488908: 0x320f809  jalr        $t9
label_48890c:
    if (ctx->pc == 0x48890Cu) {
        ctx->pc = 0x48890Cu;
            // 0x48890c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x488910u;
        goto label_488910;
    }
    ctx->pc = 0x488908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x488910u);
        ctx->pc = 0x48890Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x488908u;
            // 0x48890c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x488910u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x488910u; }
            if (ctx->pc != 0x488910u) { return; }
        }
        }
    }
    ctx->pc = 0x488910u;
label_488910:
    // 0x488910: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x488910u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
label_488914:
    // 0x488914: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x488914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_488918:
    // 0x488918: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x488918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_48891c:
    // 0x48891c: 0xae710008  sw          $s1, 0x8($s3)
    ctx->pc = 0x48891cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
label_488920:
    // 0x488920: 0xae620024  sw          $v0, 0x24($s3)
    ctx->pc = 0x488920u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
label_488924:
    // 0x488924: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x488924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_488928:
    // 0x488928: 0xe6750028  swc1        $f21, 0x28($s3)
    ctx->pc = 0x488928u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
label_48892c:
    // 0x48892c: 0xc0d879c  jal         func_361E70
label_488930:
    if (ctx->pc == 0x488930u) {
        ctx->pc = 0x488930u;
            // 0x488930: 0xe676002c  swc1        $f22, 0x2C($s3) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 44), bits); }
        ctx->pc = 0x488934u;
        goto label_488934;
    }
    ctx->pc = 0x48892Cu;
    SET_GPR_U32(ctx, 31, 0x488934u);
    ctx->pc = 0x488930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48892Cu;
            // 0x488930: 0xe676002c  swc1        $f22, 0x2C($s3) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488934u; }
        if (ctx->pc != 0x488934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488934u; }
        if (ctx->pc != 0x488934u) { return; }
    }
    ctx->pc = 0x488934u;
label_488934:
    // 0x488934: 0x4614b580  add.s       $f22, $f22, $f20
    ctx->pc = 0x488934u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
label_488938:
    // 0x488938: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x488938u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_48893c:
    // 0x48893c: 0x26730034  addiu       $s3, $s3, 0x34
    ctx->pc = 0x48893cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 52));
label_488940:
    // 0x488940: 0x1640ffef  bnez        $s2, . + 4 + (-0x11 << 2)
label_488944:
    if (ctx->pc == 0x488944u) {
        ctx->pc = 0x488944u;
            // 0x488944: 0x26940280  addiu       $s4, $s4, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 640));
        ctx->pc = 0x488948u;
        goto label_488948;
    }
    ctx->pc = 0x488940u;
    {
        const bool branch_taken_0x488940 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x488944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x488940u;
            // 0x488944: 0x26940280  addiu       $s4, $s4, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488940) {
            ctx->pc = 0x488900u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_488900;
        }
    }
    ctx->pc = 0x488948u;
label_488948:
    // 0x488948: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x488948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_48894c:
    // 0x48894c: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x48894cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_488950:
    // 0x488950: 0x8c427ba8  lw          $v0, 0x7BA8($v0)
    ctx->pc = 0x488950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31656)));
label_488954:
    // 0x488954: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x488954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_488958:
    // 0x488958: 0x8c47005c  lw          $a3, 0x5C($v0)
    ctx->pc = 0x488958u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_48895c:
    // 0x48895c: 0xc0d37ec  jal         func_34DFB0
label_488960:
    if (ctx->pc == 0x488960u) {
        ctx->pc = 0x488960u;
            // 0x488960: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x488964u;
        goto label_488964;
    }
    ctx->pc = 0x48895Cu;
    SET_GPR_U32(ctx, 31, 0x488964u);
    ctx->pc = 0x488960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48895Cu;
            // 0x488960: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488964u; }
        if (ctx->pc != 0x488964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488964u; }
        if (ctx->pc != 0x488964u) { return; }
    }
    ctx->pc = 0x488964u;
label_488964:
    // 0x488964: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x488964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_488968:
    // 0x488968: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x488968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_48896c:
    // 0x48896c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x48896cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_488970:
    // 0x488970: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x488970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_488974:
    // 0x488974: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x488974u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_488978:
    // 0x488978: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x488978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_48897c:
    // 0x48897c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x48897cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_488980:
    // 0x488980: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x488980u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_488984:
    // 0x488984: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x488984u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_488988:
    // 0x488988: 0x3e00008  jr          $ra
label_48898c:
    if (ctx->pc == 0x48898Cu) {
        ctx->pc = 0x48898Cu;
            // 0x48898c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x488990u;
        goto label_488990;
    }
    ctx->pc = 0x488988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48898Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x488988u;
            // 0x48898c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x488990u;
label_488990:
    // 0x488990: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x488990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_488994:
    // 0x488994: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x488994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_488998:
    // 0x488998: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x488998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_48899c:
    // 0x48899c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48899cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4889a0:
    // 0x4889a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4889a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4889a4:
    // 0x4889a4: 0xc0b1370  jal         func_2C4DC0
label_4889a8:
    if (ctx->pc == 0x4889A8u) {
        ctx->pc = 0x4889A8u;
            // 0x4889a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4889ACu;
        goto label_4889ac;
    }
    ctx->pc = 0x4889A4u;
    SET_GPR_U32(ctx, 31, 0x4889ACu);
    ctx->pc = 0x4889A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4889A4u;
            // 0x4889a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4DC0u;
    if (runtime->hasFunction(0x2C4DC0u)) {
        auto targetFn = runtime->lookupFunction(0x2C4DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4889ACu; }
        if (ctx->pc != 0x4889ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4DC0_0x2c4dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4889ACu; }
        if (ctx->pc != 0x4889ACu) { return; }
    }
    ctx->pc = 0x4889ACu;
label_4889ac:
    // 0x4889ac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4889acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4889b0:
    // 0x4889b0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4889b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4889b4:
    // 0x4889b4: 0x24638470  addiu       $v1, $v1, -0x7B90
    ctx->pc = 0x4889b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935664));
label_4889b8:
    // 0x4889b8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x4889b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_4889bc:
    // 0x4889bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4889bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4889c0:
    // 0x4889c0: 0x244284b0  addiu       $v0, $v0, -0x7B50
    ctx->pc = 0x4889c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935728));
label_4889c4:
    // 0x4889c4: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4889c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4889c8:
    // 0x4889c8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4889c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4889cc:
    // 0x4889cc: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x4889ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_4889d0:
    // 0x4889d0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4889d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4889d4:
    // 0x4889d4: 0xa20000d4  sb          $zero, 0xD4($s0)
    ctx->pc = 0x4889d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 212), (uint8_t)GPR_U32(ctx, 0));
label_4889d8:
    // 0x4889d8: 0x261100f0  addiu       $s1, $s0, 0xF0
    ctx->pc = 0x4889d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
label_4889dc:
    // 0x4889dc: 0x2484f710  addiu       $a0, $a0, -0x8F0
    ctx->pc = 0x4889dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965008));
label_4889e0:
    // 0x4889e0: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x4889e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
label_4889e4:
    // 0x4889e4: 0x2463f750  addiu       $v1, $v1, -0x8B0
    ctx->pc = 0x4889e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965072));
label_4889e8:
    // 0x4889e8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4889e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_4889ec:
    // 0x4889ec: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x4889ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_4889f0:
    // 0x4889f0: 0x26320010  addiu       $s2, $s1, 0x10
    ctx->pc = 0x4889f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_4889f4:
    // 0x4889f4: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x4889f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_4889f8:
    // 0x4889f8: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x4889f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
label_4889fc:
    // 0x4889fc: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x4889fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
label_488a00:
    // 0x488a00: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x488a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_488a04:
    // 0x488a04: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x488a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
label_488a08:
    // 0x488a08: 0xae000190  sw          $zero, 0x190($s0)
    ctx->pc = 0x488a08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 0));
label_488a0c:
    // 0x488a0c: 0xae000194  sw          $zero, 0x194($s0)
    ctx->pc = 0x488a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 0));
label_488a10:
    // 0x488a10: 0xc04c968  jal         func_1325A0
label_488a14:
    if (ctx->pc == 0x488A14u) {
        ctx->pc = 0x488A14u;
            // 0x488a14: 0xa2000198  sb          $zero, 0x198($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 408), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x488A18u;
        goto label_488a18;
    }
    ctx->pc = 0x488A10u;
    SET_GPR_U32(ctx, 31, 0x488A18u);
    ctx->pc = 0x488A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x488A10u;
            // 0x488a14: 0xa2000198  sb          $zero, 0x198($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 408), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488A18u; }
        if (ctx->pc != 0x488A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488A18u; }
        if (ctx->pc != 0x488A18u) { return; }
    }
    ctx->pc = 0x488A18u;
label_488a18:
    // 0x488a18: 0xc04c968  jal         func_1325A0
label_488a1c:
    if (ctx->pc == 0x488A1Cu) {
        ctx->pc = 0x488A1Cu;
            // 0x488a1c: 0x26440070  addiu       $a0, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->pc = 0x488A20u;
        goto label_488a20;
    }
    ctx->pc = 0x488A18u;
    SET_GPR_U32(ctx, 31, 0x488A20u);
    ctx->pc = 0x488A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x488A18u;
            // 0x488a1c: 0x26440070  addiu       $a0, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488A20u; }
        if (ctx->pc != 0x488A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488A20u; }
        if (ctx->pc != 0x488A20u) { return; }
    }
    ctx->pc = 0x488A20u;
label_488a20:
    // 0x488a20: 0xc04c968  jal         func_1325A0
label_488a24:
    if (ctx->pc == 0x488A24u) {
        ctx->pc = 0x488A24u;
            // 0x488a24: 0x26440080  addiu       $a0, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->pc = 0x488A28u;
        goto label_488a28;
    }
    ctx->pc = 0x488A20u;
    SET_GPR_U32(ctx, 31, 0x488A28u);
    ctx->pc = 0x488A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x488A20u;
            // 0x488a24: 0x26440080  addiu       $a0, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488A28u; }
        if (ctx->pc != 0x488A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488A28u; }
        if (ctx->pc != 0x488A28u) { return; }
    }
    ctx->pc = 0x488A28u;
label_488a28:
    // 0x488a28: 0xae40009c  sw          $zero, 0x9C($s2)
    ctx->pc = 0x488a28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 0));
label_488a2c:
    // 0x488a2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x488a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_488a30:
    // 0x488a30: 0xae4000a0  sw          $zero, 0xA0($s2)
    ctx->pc = 0x488a30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 0));
label_488a34:
    // 0x488a34: 0xae4000a4  sw          $zero, 0xA4($s2)
    ctx->pc = 0x488a34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 0));
label_488a38:
    // 0x488a38: 0xc04f26c  jal         func_13C9B0
label_488a3c:
    if (ctx->pc == 0x488A3Cu) {
        ctx->pc = 0x488A3Cu;
            // 0x488a3c: 0xae4000a8  sw          $zero, 0xA8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 0));
        ctx->pc = 0x488A40u;
        goto label_488a40;
    }
    ctx->pc = 0x488A38u;
    SET_GPR_U32(ctx, 31, 0x488A40u);
    ctx->pc = 0x488A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x488A38u;
            // 0x488a3c: 0xae4000a8  sw          $zero, 0xA8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488A40u; }
        if (ctx->pc != 0x488A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488A40u; }
        if (ctx->pc != 0x488A40u) { return; }
    }
    ctx->pc = 0x488A40u;
label_488a40:
    // 0x488a40: 0xc04c968  jal         func_1325A0
label_488a44:
    if (ctx->pc == 0x488A44u) {
        ctx->pc = 0x488A44u;
            // 0x488a44: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x488A48u;
        goto label_488a48;
    }
    ctx->pc = 0x488A40u;
    SET_GPR_U32(ctx, 31, 0x488A48u);
    ctx->pc = 0x488A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x488A40u;
            // 0x488a44: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488A48u; }
        if (ctx->pc != 0x488A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488A48u; }
        if (ctx->pc != 0x488A48u) { return; }
    }
    ctx->pc = 0x488A48u;
label_488a48:
    // 0x488a48: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x488a48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_488a4c:
    // 0x488a4c: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x488a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_488a50:
    // 0x488a50: 0xc04cc04  jal         func_133010
label_488a54:
    if (ctx->pc == 0x488A54u) {
        ctx->pc = 0x488A54u;
            // 0x488a54: 0x24a5fe80  addiu       $a1, $a1, -0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966912));
        ctx->pc = 0x488A58u;
        goto label_488a58;
    }
    ctx->pc = 0x488A50u;
    SET_GPR_U32(ctx, 31, 0x488A58u);
    ctx->pc = 0x488A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x488A50u;
            // 0x488a54: 0x24a5fe80  addiu       $a1, $a1, -0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488A58u; }
        if (ctx->pc != 0x488A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488A58u; }
        if (ctx->pc != 0x488A58u) { return; }
    }
    ctx->pc = 0x488A58u;
label_488a58:
    // 0x488a58: 0xae200100  sw          $zero, 0x100($s1)
    ctx->pc = 0x488a58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
label_488a5c:
    // 0x488a5c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x488a5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_488a60:
    // 0x488a60: 0xae200104  sw          $zero, 0x104($s1)
    ctx->pc = 0x488a60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 0));
label_488a64:
    // 0x488a64: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x488a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_488a68:
    // 0x488a68: 0xae200108  sw          $zero, 0x108($s1)
    ctx->pc = 0x488a68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 0));
label_488a6c:
    // 0x488a6c: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x488a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
label_488a70:
    // 0x488a70: 0xa6200110  sh          $zero, 0x110($s1)
    ctx->pc = 0x488a70u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 272), (uint16_t)GPR_U32(ctx, 0));
label_488a74:
    // 0x488a74: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x488a74u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_488a78:
    // 0x488a78: 0xa6200112  sh          $zero, 0x112($s1)
    ctx->pc = 0x488a78u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 274), (uint16_t)GPR_U32(ctx, 0));
label_488a7c:
    // 0x488a7c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x488a7cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_488a80:
    // 0x488a80: 0xa6220114  sh          $v0, 0x114($s1)
    ctx->pc = 0x488a80u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 276), (uint16_t)GPR_U32(ctx, 2));
label_488a84:
    // 0x488a84: 0xc04cbd8  jal         func_132F60
label_488a88:
    if (ctx->pc == 0x488A88u) {
        ctx->pc = 0x488A88u;
            // 0x488a88: 0xa6200116  sh          $zero, 0x116($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 278), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x488A8Cu;
        goto label_488a8c;
    }
    ctx->pc = 0x488A84u;
    SET_GPR_U32(ctx, 31, 0x488A8Cu);
    ctx->pc = 0x488A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x488A84u;
            // 0x488a88: 0xa6200116  sh          $zero, 0x116($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 278), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488A8Cu; }
        if (ctx->pc != 0x488A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488A8Cu; }
        if (ctx->pc != 0x488A8Cu) { return; }
    }
    ctx->pc = 0x488A8Cu;
label_488a8c:
    // 0x488a8c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x488a8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_488a90:
    // 0x488a90: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x488a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_488a94:
    // 0x488a94: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x488a94u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_488a98:
    // 0x488a98: 0xc04cbd8  jal         func_132F60
label_488a9c:
    if (ctx->pc == 0x488A9Cu) {
        ctx->pc = 0x488A9Cu;
            // 0x488a9c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x488AA0u;
        goto label_488aa0;
    }
    ctx->pc = 0x488A98u;
    SET_GPR_U32(ctx, 31, 0x488AA0u);
    ctx->pc = 0x488A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x488A98u;
            // 0x488a9c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488AA0u; }
        if (ctx->pc != 0x488AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488AA0u; }
        if (ctx->pc != 0x488AA0u) { return; }
    }
    ctx->pc = 0x488AA0u;
label_488aa0:
    // 0x488aa0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x488aa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_488aa4:
    // 0x488aa4: 0x262400e0  addiu       $a0, $s1, 0xE0
    ctx->pc = 0x488aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_488aa8:
    // 0x488aa8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x488aa8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_488aac:
    // 0x488aac: 0xc04cbd8  jal         func_132F60
label_488ab0:
    if (ctx->pc == 0x488AB0u) {
        ctx->pc = 0x488AB0u;
            // 0x488ab0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x488AB4u;
        goto label_488ab4;
    }
    ctx->pc = 0x488AACu;
    SET_GPR_U32(ctx, 31, 0x488AB4u);
    ctx->pc = 0x488AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x488AACu;
            // 0x488ab0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488AB4u; }
        if (ctx->pc != 0x488AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488AB4u; }
        if (ctx->pc != 0x488AB4u) { return; }
    }
    ctx->pc = 0x488AB4u;
label_488ab4:
    // 0x488ab4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x488ab4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_488ab8:
    // 0x488ab8: 0x262400f0  addiu       $a0, $s1, 0xF0
    ctx->pc = 0x488ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
label_488abc:
    // 0x488abc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x488abcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_488ac0:
    // 0x488ac0: 0xc04cbd8  jal         func_132F60
label_488ac4:
    if (ctx->pc == 0x488AC4u) {
        ctx->pc = 0x488AC4u;
            // 0x488ac4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x488AC8u;
        goto label_488ac8;
    }
    ctx->pc = 0x488AC0u;
    SET_GPR_U32(ctx, 31, 0x488AC8u);
    ctx->pc = 0x488AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x488AC0u;
            // 0x488ac4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488AC8u; }
        if (ctx->pc != 0x488AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x488AC8u; }
        if (ctx->pc != 0x488AC8u) { return; }
    }
    ctx->pc = 0x488AC8u;
label_488ac8:
    // 0x488ac8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x488ac8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_488acc:
    // 0x488acc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x488accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_488ad0:
    // 0x488ad0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x488ad0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_488ad4:
    // 0x488ad4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x488ad4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_488ad8:
    // 0x488ad8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x488ad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_488adc:
    // 0x488adc: 0x3e00008  jr          $ra
label_488ae0:
    if (ctx->pc == 0x488AE0u) {
        ctx->pc = 0x488AE0u;
            // 0x488ae0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x488AE4u;
        goto label_488ae4;
    }
    ctx->pc = 0x488ADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x488AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x488ADCu;
            // 0x488ae0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x488AE4u;
label_488ae4:
    // 0x488ae4: 0x0  nop
    ctx->pc = 0x488ae4u;
    // NOP
label_488ae8:
    // 0x488ae8: 0x0  nop
    ctx->pc = 0x488ae8u;
    // NOP
label_488aec:
    // 0x488aec: 0x0  nop
    ctx->pc = 0x488aecu;
    // NOP
}
