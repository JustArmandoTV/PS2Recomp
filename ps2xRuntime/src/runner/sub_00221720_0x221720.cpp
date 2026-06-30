#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00221720
// Address: 0x221720 - 0x221ab0
void sub_00221720_0x221720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221720_0x221720");
#endif

    switch (ctx->pc) {
        case 0x221720u: goto label_221720;
        case 0x221724u: goto label_221724;
        case 0x221728u: goto label_221728;
        case 0x22172cu: goto label_22172c;
        case 0x221730u: goto label_221730;
        case 0x221734u: goto label_221734;
        case 0x221738u: goto label_221738;
        case 0x22173cu: goto label_22173c;
        case 0x221740u: goto label_221740;
        case 0x221744u: goto label_221744;
        case 0x221748u: goto label_221748;
        case 0x22174cu: goto label_22174c;
        case 0x221750u: goto label_221750;
        case 0x221754u: goto label_221754;
        case 0x221758u: goto label_221758;
        case 0x22175cu: goto label_22175c;
        case 0x221760u: goto label_221760;
        case 0x221764u: goto label_221764;
        case 0x221768u: goto label_221768;
        case 0x22176cu: goto label_22176c;
        case 0x221770u: goto label_221770;
        case 0x221774u: goto label_221774;
        case 0x221778u: goto label_221778;
        case 0x22177cu: goto label_22177c;
        case 0x221780u: goto label_221780;
        case 0x221784u: goto label_221784;
        case 0x221788u: goto label_221788;
        case 0x22178cu: goto label_22178c;
        case 0x221790u: goto label_221790;
        case 0x221794u: goto label_221794;
        case 0x221798u: goto label_221798;
        case 0x22179cu: goto label_22179c;
        case 0x2217a0u: goto label_2217a0;
        case 0x2217a4u: goto label_2217a4;
        case 0x2217a8u: goto label_2217a8;
        case 0x2217acu: goto label_2217ac;
        case 0x2217b0u: goto label_2217b0;
        case 0x2217b4u: goto label_2217b4;
        case 0x2217b8u: goto label_2217b8;
        case 0x2217bcu: goto label_2217bc;
        case 0x2217c0u: goto label_2217c0;
        case 0x2217c4u: goto label_2217c4;
        case 0x2217c8u: goto label_2217c8;
        case 0x2217ccu: goto label_2217cc;
        case 0x2217d0u: goto label_2217d0;
        case 0x2217d4u: goto label_2217d4;
        case 0x2217d8u: goto label_2217d8;
        case 0x2217dcu: goto label_2217dc;
        case 0x2217e0u: goto label_2217e0;
        case 0x2217e4u: goto label_2217e4;
        case 0x2217e8u: goto label_2217e8;
        case 0x2217ecu: goto label_2217ec;
        case 0x2217f0u: goto label_2217f0;
        case 0x2217f4u: goto label_2217f4;
        case 0x2217f8u: goto label_2217f8;
        case 0x2217fcu: goto label_2217fc;
        case 0x221800u: goto label_221800;
        case 0x221804u: goto label_221804;
        case 0x221808u: goto label_221808;
        case 0x22180cu: goto label_22180c;
        case 0x221810u: goto label_221810;
        case 0x221814u: goto label_221814;
        case 0x221818u: goto label_221818;
        case 0x22181cu: goto label_22181c;
        case 0x221820u: goto label_221820;
        case 0x221824u: goto label_221824;
        case 0x221828u: goto label_221828;
        case 0x22182cu: goto label_22182c;
        case 0x221830u: goto label_221830;
        case 0x221834u: goto label_221834;
        case 0x221838u: goto label_221838;
        case 0x22183cu: goto label_22183c;
        case 0x221840u: goto label_221840;
        case 0x221844u: goto label_221844;
        case 0x221848u: goto label_221848;
        case 0x22184cu: goto label_22184c;
        case 0x221850u: goto label_221850;
        case 0x221854u: goto label_221854;
        case 0x221858u: goto label_221858;
        case 0x22185cu: goto label_22185c;
        case 0x221860u: goto label_221860;
        case 0x221864u: goto label_221864;
        case 0x221868u: goto label_221868;
        case 0x22186cu: goto label_22186c;
        case 0x221870u: goto label_221870;
        case 0x221874u: goto label_221874;
        case 0x221878u: goto label_221878;
        case 0x22187cu: goto label_22187c;
        case 0x221880u: goto label_221880;
        case 0x221884u: goto label_221884;
        case 0x221888u: goto label_221888;
        case 0x22188cu: goto label_22188c;
        case 0x221890u: goto label_221890;
        case 0x221894u: goto label_221894;
        case 0x221898u: goto label_221898;
        case 0x22189cu: goto label_22189c;
        case 0x2218a0u: goto label_2218a0;
        case 0x2218a4u: goto label_2218a4;
        case 0x2218a8u: goto label_2218a8;
        case 0x2218acu: goto label_2218ac;
        case 0x2218b0u: goto label_2218b0;
        case 0x2218b4u: goto label_2218b4;
        case 0x2218b8u: goto label_2218b8;
        case 0x2218bcu: goto label_2218bc;
        case 0x2218c0u: goto label_2218c0;
        case 0x2218c4u: goto label_2218c4;
        case 0x2218c8u: goto label_2218c8;
        case 0x2218ccu: goto label_2218cc;
        case 0x2218d0u: goto label_2218d0;
        case 0x2218d4u: goto label_2218d4;
        case 0x2218d8u: goto label_2218d8;
        case 0x2218dcu: goto label_2218dc;
        case 0x2218e0u: goto label_2218e0;
        case 0x2218e4u: goto label_2218e4;
        case 0x2218e8u: goto label_2218e8;
        case 0x2218ecu: goto label_2218ec;
        case 0x2218f0u: goto label_2218f0;
        case 0x2218f4u: goto label_2218f4;
        case 0x2218f8u: goto label_2218f8;
        case 0x2218fcu: goto label_2218fc;
        case 0x221900u: goto label_221900;
        case 0x221904u: goto label_221904;
        case 0x221908u: goto label_221908;
        case 0x22190cu: goto label_22190c;
        case 0x221910u: goto label_221910;
        case 0x221914u: goto label_221914;
        case 0x221918u: goto label_221918;
        case 0x22191cu: goto label_22191c;
        case 0x221920u: goto label_221920;
        case 0x221924u: goto label_221924;
        case 0x221928u: goto label_221928;
        case 0x22192cu: goto label_22192c;
        case 0x221930u: goto label_221930;
        case 0x221934u: goto label_221934;
        case 0x221938u: goto label_221938;
        case 0x22193cu: goto label_22193c;
        case 0x221940u: goto label_221940;
        case 0x221944u: goto label_221944;
        case 0x221948u: goto label_221948;
        case 0x22194cu: goto label_22194c;
        case 0x221950u: goto label_221950;
        case 0x221954u: goto label_221954;
        case 0x221958u: goto label_221958;
        case 0x22195cu: goto label_22195c;
        case 0x221960u: goto label_221960;
        case 0x221964u: goto label_221964;
        case 0x221968u: goto label_221968;
        case 0x22196cu: goto label_22196c;
        case 0x221970u: goto label_221970;
        case 0x221974u: goto label_221974;
        case 0x221978u: goto label_221978;
        case 0x22197cu: goto label_22197c;
        case 0x221980u: goto label_221980;
        case 0x221984u: goto label_221984;
        case 0x221988u: goto label_221988;
        case 0x22198cu: goto label_22198c;
        case 0x221990u: goto label_221990;
        case 0x221994u: goto label_221994;
        case 0x221998u: goto label_221998;
        case 0x22199cu: goto label_22199c;
        case 0x2219a0u: goto label_2219a0;
        case 0x2219a4u: goto label_2219a4;
        case 0x2219a8u: goto label_2219a8;
        case 0x2219acu: goto label_2219ac;
        case 0x2219b0u: goto label_2219b0;
        case 0x2219b4u: goto label_2219b4;
        case 0x2219b8u: goto label_2219b8;
        case 0x2219bcu: goto label_2219bc;
        case 0x2219c0u: goto label_2219c0;
        case 0x2219c4u: goto label_2219c4;
        case 0x2219c8u: goto label_2219c8;
        case 0x2219ccu: goto label_2219cc;
        case 0x2219d0u: goto label_2219d0;
        case 0x2219d4u: goto label_2219d4;
        case 0x2219d8u: goto label_2219d8;
        case 0x2219dcu: goto label_2219dc;
        case 0x2219e0u: goto label_2219e0;
        case 0x2219e4u: goto label_2219e4;
        case 0x2219e8u: goto label_2219e8;
        case 0x2219ecu: goto label_2219ec;
        case 0x2219f0u: goto label_2219f0;
        case 0x2219f4u: goto label_2219f4;
        case 0x2219f8u: goto label_2219f8;
        case 0x2219fcu: goto label_2219fc;
        case 0x221a00u: goto label_221a00;
        case 0x221a04u: goto label_221a04;
        case 0x221a08u: goto label_221a08;
        case 0x221a0cu: goto label_221a0c;
        case 0x221a10u: goto label_221a10;
        case 0x221a14u: goto label_221a14;
        case 0x221a18u: goto label_221a18;
        case 0x221a1cu: goto label_221a1c;
        case 0x221a20u: goto label_221a20;
        case 0x221a24u: goto label_221a24;
        case 0x221a28u: goto label_221a28;
        case 0x221a2cu: goto label_221a2c;
        case 0x221a30u: goto label_221a30;
        case 0x221a34u: goto label_221a34;
        case 0x221a38u: goto label_221a38;
        case 0x221a3cu: goto label_221a3c;
        case 0x221a40u: goto label_221a40;
        case 0x221a44u: goto label_221a44;
        case 0x221a48u: goto label_221a48;
        case 0x221a4cu: goto label_221a4c;
        case 0x221a50u: goto label_221a50;
        case 0x221a54u: goto label_221a54;
        case 0x221a58u: goto label_221a58;
        case 0x221a5cu: goto label_221a5c;
        case 0x221a60u: goto label_221a60;
        case 0x221a64u: goto label_221a64;
        case 0x221a68u: goto label_221a68;
        case 0x221a6cu: goto label_221a6c;
        case 0x221a70u: goto label_221a70;
        case 0x221a74u: goto label_221a74;
        case 0x221a78u: goto label_221a78;
        case 0x221a7cu: goto label_221a7c;
        case 0x221a80u: goto label_221a80;
        case 0x221a84u: goto label_221a84;
        case 0x221a88u: goto label_221a88;
        case 0x221a8cu: goto label_221a8c;
        case 0x221a90u: goto label_221a90;
        case 0x221a94u: goto label_221a94;
        case 0x221a98u: goto label_221a98;
        case 0x221a9cu: goto label_221a9c;
        case 0x221aa0u: goto label_221aa0;
        case 0x221aa4u: goto label_221aa4;
        case 0x221aa8u: goto label_221aa8;
        case 0x221aacu: goto label_221aac;
        default: break;
    }

    ctx->pc = 0x221720u;

label_221720:
    // 0x221720: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x221720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_221724:
    // 0x221724: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x221724u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_221728:
    // 0x221728: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x221728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_22172c:
    // 0x22172c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x22172cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_221730:
    // 0x221730: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x221730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_221734:
    // 0x221734: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x221734u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_221738:
    // 0x221738: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x221738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_22173c:
    // 0x22173c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x22173cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_221740:
    // 0x221740: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x221740u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_221744:
    // 0x221744: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x221744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_221748:
    // 0x221748: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x221748u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_22174c:
    // 0x22174c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22174cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_221750:
    // 0x221750: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x221750u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_221754:
    // 0x221754: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x221754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_221758:
    // 0x221758: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x221758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22175c:
    // 0x22175c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22175cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_221760:
    // 0x221760: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x221760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_221764:
    // 0x221764: 0x8c940008  lw          $s4, 0x8($a0)
    ctx->pc = 0x221764u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_221768:
    // 0x221768: 0x102000c1  beqz        $at, . + 4 + (0xC1 << 2)
label_22176c:
    if (ctx->pc == 0x22176Cu) {
        ctx->pc = 0x22176Cu;
            // 0x22176c: 0x7fa300a0  sq          $v1, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
        ctx->pc = 0x221770u;
        goto label_221770;
    }
    ctx->pc = 0x221768u;
    {
        const bool branch_taken_0x221768 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22176Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221768u;
            // 0x22176c: 0x7fa300a0  sq          $v1, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221768) {
            ctx->pc = 0x221A70u;
            goto label_221a70;
        }
    }
    ctx->pc = 0x221770u;
label_221770:
    // 0x221770: 0x8ef20000  lw          $s2, 0x0($s7)
    ctx->pc = 0x221770u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_221774:
    // 0x221774: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x221774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_221778:
    // 0x221778: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x221778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_22177c:
    // 0x22177c: 0x9245001c  lbu         $a1, 0x1C($s2)
    ctx->pc = 0x22177cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 28)));
label_221780:
    // 0x221780: 0x8e440028  lw          $a0, 0x28($s2)
    ctx->pc = 0x221780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_221784:
    // 0x221784: 0x38a50004  xori        $a1, $a1, 0x4
    ctx->pc = 0x221784u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)4);
label_221788:
    // 0x221788: 0x2cbe0001  sltiu       $fp, $a1, 0x1
    ctx->pc = 0x221788u;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_22178c:
    // 0x22178c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_221790:
    if (ctx->pc == 0x221790u) {
        ctx->pc = 0x221790u;
            // 0x221790: 0x24930004  addiu       $s3, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x221794u;
        goto label_221794;
    }
    ctx->pc = 0x22178Cu;
    {
        const bool branch_taken_0x22178c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x221790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22178Cu;
            // 0x221790: 0x24930004  addiu       $s3, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22178c) {
            ctx->pc = 0x2217B0u;
            goto label_2217b0;
        }
    }
    ctx->pc = 0x221794u;
label_221794:
    // 0x221794: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x221794u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_221798:
    // 0x221798: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x221798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_22179c:
    // 0x22179c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22179cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2217a0:
    // 0x2217a0: 0x0  nop
    ctx->pc = 0x2217a0u;
    // NOP
label_2217a4:
    // 0x2217a4: 0x0  nop
    ctx->pc = 0x2217a4u;
    // NOP
label_2217a8:
    // 0x2217a8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_2217ac:
    if (ctx->pc == 0x2217ACu) {
        ctx->pc = 0x2217B0u;
        goto label_2217b0;
    }
    ctx->pc = 0x2217A8u;
    {
        const bool branch_taken_0x2217a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2217a8) {
            ctx->pc = 0x221794u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_221794;
        }
    }
    ctx->pc = 0x2217B0u;
label_2217b0:
    // 0x2217b0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2217b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2217b4:
    // 0x2217b4: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x2217b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2217b8:
    // 0x2217b8: 0x8ea5000c  lw          $a1, 0xC($s5)
    ctx->pc = 0x2217b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_2217bc:
    // 0x2217bc: 0x246200a0  addiu       $v0, $v1, 0xA0
    ctx->pc = 0x2217bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
label_2217c0:
    // 0x2217c0: 0x248600a0  addiu       $a2, $a0, 0xA0
    ctx->pc = 0x2217c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
label_2217c4:
    // 0x2217c4: 0x8c630068  lw          $v1, 0x68($v1)
    ctx->pc = 0x2217c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
label_2217c8:
    // 0x2217c8: 0x8c840068  lw          $a0, 0x68($a0)
    ctx->pc = 0x2217c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_2217cc:
    // 0x2217cc: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x2217ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_2217d0:
    // 0x2217d0: 0xa38821  addu        $s1, $a1, $v1
    ctx->pc = 0x2217d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2217d4:
    // 0x2217d4: 0xafa600b4  sw          $a2, 0xB4($sp)
    ctx->pc = 0x2217d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 6));
label_2217d8:
    // 0x2217d8: 0xa48021  addu        $s0, $a1, $a0
    ctx->pc = 0x2217d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2217dc:
    // 0x2217dc: 0xae910030  sw          $s1, 0x30($s4)
    ctx->pc = 0x2217dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 17));
label_2217e0:
    // 0x2217e0: 0xae900034  sw          $s0, 0x34($s4)
    ctx->pc = 0x2217e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 16));
label_2217e4:
    // 0x2217e4: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x2217e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_2217e8:
    // 0x2217e8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2217e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2217ec:
    // 0x2217ec: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2217ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2217f0:
    // 0x2217f0: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x2217f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2217f4:
    // 0x2217f4: 0x8ea60018  lw          $a2, 0x18($s5)
    ctx->pc = 0x2217f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_2217f8:
    // 0x2217f8: 0x8ca50068  lw          $a1, 0x68($a1)
    ctx->pc = 0x2217f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
label_2217fc:
    // 0x2217fc: 0x8c840068  lw          $a0, 0x68($a0)
    ctx->pc = 0x2217fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_221800:
    // 0x221800: 0x529c2  srl         $a1, $a1, 7
    ctx->pc = 0x221800u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
label_221804:
    // 0x221804: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x221804u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_221808:
    // 0x221808: 0x421c2  srl         $a0, $a0, 7
    ctx->pc = 0x221808u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 7));
label_22180c:
    // 0x22180c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x22180cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_221810:
    // 0x221810: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x221810u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_221814:
    // 0x221814: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x221814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_221818:
    // 0x221818: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x221818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_22181c:
    // 0x22181c: 0xe6200040  swc1        $f0, 0x40($s1)
    ctx->pc = 0x22181cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
label_221820:
    // 0x221820: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x221820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_221824:
    // 0x221824: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x221824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
label_221828:
    // 0x221828: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x221828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22182c:
    // 0x22182c: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x22182cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
label_221830:
    // 0x221830: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x221830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_221834:
    // 0x221834: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x221834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
label_221838:
    // 0x221838: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x221838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22183c:
    // 0x22183c: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x22183cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
label_221840:
    // 0x221840: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x221840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_221844:
    // 0x221844: 0xe6200054  swc1        $f0, 0x54($s1)
    ctx->pc = 0x221844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
label_221848:
    // 0x221848: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x221848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22184c:
    // 0x22184c: 0xe6200058  swc1        $f0, 0x58($s1)
    ctx->pc = 0x22184cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
label_221850:
    // 0x221850: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x221850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_221854:
    // 0x221854: 0xe620005c  swc1        $f0, 0x5C($s1)
    ctx->pc = 0x221854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
label_221858:
    // 0x221858: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x221858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22185c:
    // 0x22185c: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x22185cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
label_221860:
    // 0x221860: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x221860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_221864:
    // 0x221864: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x221864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
label_221868:
    // 0x221868: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x221868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22186c:
    // 0x22186c: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x22186cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
label_221870:
    // 0x221870: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x221870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_221874:
    // 0x221874: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x221874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
label_221878:
    // 0x221878: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x221878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22187c:
    // 0x22187c: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x22187cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
label_221880:
    // 0x221880: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x221880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_221884:
    // 0x221884: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x221884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
label_221888:
    // 0x221888: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x221888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22188c:
    // 0x22188c: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x22188cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_221890:
    // 0x221890: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x221890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_221894:
    // 0x221894: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x221894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
label_221898:
    // 0x221898: 0xae820038  sw          $v0, 0x38($s4)
    ctx->pc = 0x221898u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 2));
label_22189c:
    // 0x22189c: 0xae83003c  sw          $v1, 0x3C($s4)
    ctx->pc = 0x22189cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 3));
label_2218a0:
    // 0x2218a0: 0xae920048  sw          $s2, 0x48($s4)
    ctx->pc = 0x2218a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 18));
label_2218a4:
    // 0x2218a4: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x2218a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_2218a8:
    // 0x2218a8: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x2218a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_2218ac:
    // 0x2218ac: 0xae82004c  sw          $v0, 0x4C($s4)
    ctx->pc = 0x2218acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
label_2218b0:
    // 0x2218b0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2218b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2218b4:
    // 0x2218b4: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x2218b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
label_2218b8:
    // 0x2218b8: 0x211c2  srl         $v0, $v0, 7
    ctx->pc = 0x2218b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
label_2218bc:
    // 0x2218bc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2218bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2218c0:
    // 0x2218c0: 0xae820050  sw          $v0, 0x50($s4)
    ctx->pc = 0x2218c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 2));
label_2218c4:
    // 0x2218c4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2218c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2218c8:
    // 0x2218c8: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x2218c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
label_2218cc:
    // 0x2218cc: 0x211c2  srl         $v0, $v0, 7
    ctx->pc = 0x2218ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
label_2218d0:
    // 0x2218d0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2218d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2218d4:
    // 0x2218d4: 0xae820054  sw          $v0, 0x54($s4)
    ctx->pc = 0x2218d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
label_2218d8:
    // 0x2218d8: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x2218d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_2218dc:
    // 0x2218dc: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x2218dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_2218e0:
    // 0x2218e0: 0xae820058  sw          $v0, 0x58($s4)
    ctx->pc = 0x2218e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 2));
label_2218e4:
    // 0x2218e4: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x2218e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_2218e8:
    // 0x2218e8: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x2218e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_2218ec:
    // 0x2218ec: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x2218ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_2218f0:
    // 0x2218f0: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2218f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_2218f4:
    // 0x2218f4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_2218f8:
    if (ctx->pc == 0x2218F8u) {
        ctx->pc = 0x2218FCu;
        goto label_2218fc;
    }
    ctx->pc = 0x2218F4u;
    {
        const bool branch_taken_0x2218f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2218f4) {
            ctx->pc = 0x221908u;
            goto label_221908;
        }
    }
    ctx->pc = 0x2218FCu;
label_2218fc:
    // 0x2218fc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2218fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_221900:
    // 0x221900: 0xc0a728c  jal         func_29CA30
label_221904:
    if (ctx->pc == 0x221904u) {
        ctx->pc = 0x221904u;
            // 0x221904: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x221908u;
        goto label_221908;
    }
    ctx->pc = 0x221900u;
    SET_GPR_U32(ctx, 31, 0x221908u);
    ctx->pc = 0x221904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221900u;
            // 0x221904: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221908u; }
        if (ctx->pc != 0x221908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221908u; }
        if (ctx->pc != 0x221908u) { return; }
    }
    ctx->pc = 0x221908u;
label_221908:
    // 0x221908: 0x8ec50004  lw          $a1, 0x4($s6)
    ctx->pc = 0x221908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_22190c:
    // 0x22190c: 0x1e1100  sll         $v0, $fp, 4
    ctx->pc = 0x22190cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
label_221910:
    // 0x221910: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x221910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_221914:
    // 0x221914: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x221914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_221918:
    // 0x221918: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x221918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_22191c:
    // 0x22191c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x22191cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_221920:
    // 0x221920: 0xaec40004  sw          $a0, 0x4($s6)
    ctx->pc = 0x221920u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 4));
label_221924:
    // 0x221924: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x221924u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_221928:
    // 0x221928: 0x245e0028  addiu       $fp, $v0, 0x28
    ctx->pc = 0x221928u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_22192c:
    // 0x22192c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x22192cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_221930:
    // 0x221930: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x221930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_221934:
    // 0x221934: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x221934u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 18));
label_221938:
    // 0x221938: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x221938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_22193c:
    // 0x22193c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x22193cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_221940:
    // 0x221940: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x221940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_221944:
    // 0x221944: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x221944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_221948:
    // 0x221948: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x221948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22194c:
    // 0x22194c: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x22194cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_221950:
    // 0x221950: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x221950u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_221954:
    // 0x221954: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_221958:
    if (ctx->pc == 0x221958u) {
        ctx->pc = 0x221958u;
            // 0x221958: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x22195Cu;
        goto label_22195c;
    }
    ctx->pc = 0x221954u;
    {
        const bool branch_taken_0x221954 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x221954) {
            ctx->pc = 0x221958u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x221954u;
            // 0x221958: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x22195Cu;
            goto label_22195c;
        }
    }
    ctx->pc = 0x22195Cu;
label_22195c:
    // 0x22195c: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x22195cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_221960:
    // 0x221960: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x221960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_221964:
    // 0x221964: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x221964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_221968:
    // 0x221968: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x221968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_22196c:
    // 0x22196c: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x22196cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
label_221970:
    // 0x221970: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x221970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_221974:
    // 0x221974: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_221978:
    if (ctx->pc == 0x221978u) {
        ctx->pc = 0x22197Cu;
        goto label_22197c;
    }
    ctx->pc = 0x221974u;
    {
        const bool branch_taken_0x221974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221974) {
            ctx->pc = 0x221990u;
            goto label_221990;
        }
    }
    ctx->pc = 0x22197Cu;
label_22197c:
    // 0x22197c: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x22197cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_221980:
    // 0x221980: 0x8c860028  lw          $a2, 0x28($a0)
    ctx->pc = 0x221980u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_221984:
    // 0x221984: 0xc087b30  jal         func_21ECC0
label_221988:
    if (ctx->pc == 0x221988u) {
        ctx->pc = 0x221988u;
            // 0x221988: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22198Cu;
        goto label_22198c;
    }
    ctx->pc = 0x221984u;
    SET_GPR_U32(ctx, 31, 0x22198Cu);
    ctx->pc = 0x221988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221984u;
            // 0x221988: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21ECC0u;
    if (runtime->hasFunction(0x21ECC0u)) {
        auto targetFn = runtime->lookupFunction(0x21ECC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22198Cu; }
        if (ctx->pc != 0x22198Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021ECC0_0x21ecc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22198Cu; }
        if (ctx->pc != 0x22198Cu) { return; }
    }
    ctx->pc = 0x22198Cu;
label_22198c:
    // 0x22198c: 0x0  nop
    ctx->pc = 0x22198cu;
    // NOP
label_221990:
    // 0x221990: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x221990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_221994:
    // 0x221994: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x221994u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
label_221998:
    // 0x221998: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x221998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_22199c:
    // 0x22199c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2219a0:
    if (ctx->pc == 0x2219A0u) {
        ctx->pc = 0x2219A4u;
        goto label_2219a4;
    }
    ctx->pc = 0x22199Cu;
    {
        const bool branch_taken_0x22199c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22199c) {
            ctx->pc = 0x2219B8u;
            goto label_2219b8;
        }
    }
    ctx->pc = 0x2219A4u;
label_2219a4:
    // 0x2219a4: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x2219a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2219a8:
    // 0x2219a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2219a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2219ac:
    // 0x2219ac: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2219acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2219b0:
    // 0x2219b0: 0x320f809  jalr        $t9
label_2219b4:
    if (ctx->pc == 0x2219B4u) {
        ctx->pc = 0x2219B4u;
            // 0x2219b4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2219B8u;
        goto label_2219b8;
    }
    ctx->pc = 0x2219B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2219B8u);
        ctx->pc = 0x2219B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2219B0u;
            // 0x2219b4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2219B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2219B8u; }
            if (ctx->pc != 0x2219B8u) { return; }
        }
        }
    }
    ctx->pc = 0x2219B8u;
label_2219b8:
    // 0x2219b8: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x2219b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_2219bc:
    // 0x2219bc: 0x94450010  lhu         $a1, 0x10($v0)
    ctx->pc = 0x2219bcu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_2219c0:
    // 0x2219c0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2219c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2219c4:
    // 0x2219c4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x2219c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_2219c8:
    // 0x2219c8: 0x38420016  xori        $v0, $v0, 0x16
    ctx->pc = 0x2219c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)22);
label_2219cc:
    // 0x2219cc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2219ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2219d0:
    // 0x2219d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2219d4:
    if (ctx->pc == 0x2219D4u) {
        ctx->pc = 0x2219D8u;
        goto label_2219d8;
    }
    ctx->pc = 0x2219D0u;
    {
        const bool branch_taken_0x2219d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2219d0) {
            ctx->pc = 0x2219F0u;
            goto label_2219f0;
        }
    }
    ctx->pc = 0x2219D8u;
label_2219d8:
    // 0x2219d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2219d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2219dc:
    // 0x2219dc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2219dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2219e0:
    // 0x2219e0: 0xc0847da  jal         func_211F68
label_2219e4:
    if (ctx->pc == 0x2219E4u) {
        ctx->pc = 0x2219E4u;
            // 0x2219e4: 0x27a700bc  addiu       $a3, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->pc = 0x2219E8u;
        goto label_2219e8;
    }
    ctx->pc = 0x2219E0u;
    SET_GPR_U32(ctx, 31, 0x2219E8u);
    ctx->pc = 0x2219E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2219E0u;
            // 0x2219e4: 0x27a700bc  addiu       $a3, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211F68u;
    if (runtime->hasFunction(0x211F68u)) {
        auto targetFn = runtime->lookupFunction(0x211F68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2219E8u; }
        if (ctx->pc != 0x2219E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211F68_0x211f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2219E8u; }
        if (ctx->pc != 0x2219E8u) { return; }
    }
    ctx->pc = 0x2219E8u;
label_2219e8:
    // 0x2219e8: 0x10000005  b           . + 4 + (0x5 << 2)
label_2219ec:
    if (ctx->pc == 0x2219ECu) {
        ctx->pc = 0x2219F0u;
        goto label_2219f0;
    }
    ctx->pc = 0x2219E8u;
    {
        const bool branch_taken_0x2219e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2219e8) {
            ctx->pc = 0x221A00u;
            goto label_221a00;
        }
    }
    ctx->pc = 0x2219F0u;
label_2219f0:
    // 0x2219f0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2219f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2219f4:
    // 0x2219f4: 0xc08349e  jal         func_20D278
label_2219f8:
    if (ctx->pc == 0x2219F8u) {
        ctx->pc = 0x2219F8u;
            // 0x2219f8: 0x27a700bc  addiu       $a3, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->pc = 0x2219FCu;
        goto label_2219fc;
    }
    ctx->pc = 0x2219F4u;
    SET_GPR_U32(ctx, 31, 0x2219FCu);
    ctx->pc = 0x2219F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2219F4u;
            // 0x2219f8: 0x27a700bc  addiu       $a3, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D278u;
    if (runtime->hasFunction(0x20D278u)) {
        auto targetFn = runtime->lookupFunction(0x20D278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2219FCu; }
        if (ctx->pc != 0x2219FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020D278_0x20d278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2219FCu; }
        if (ctx->pc != 0x2219FCu) { return; }
    }
    ctx->pc = 0x2219FCu;
label_2219fc:
    // 0x2219fc: 0x0  nop
    ctx->pc = 0x2219fcu;
    // NOP
label_221a00:
    // 0x221a00: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x221a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_221a04:
    // 0x221a04: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x221a04u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_221a08:
    // 0x221a08: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x221a08u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_221a0c:
    // 0x221a0c: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x221a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_221a10:
    // 0x221a10: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x221a10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_221a14:
    // 0x221a14: 0x2e3182b  sltu        $v1, $s7, $v1
    ctx->pc = 0x221a14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_221a18:
    // 0x221a18: 0x8ea40048  lw          $a0, 0x48($s5)
    ctx->pc = 0x221a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
label_221a1c:
    // 0x221a1c: 0x94a50018  lhu         $a1, 0x18($a1)
    ctx->pc = 0x221a1cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 24)));
label_221a20:
    // 0x221a20: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x221a20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_221a24:
    // 0x221a24: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x221a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_221a28:
    // 0x221a28: 0xaea40048  sw          $a0, 0x48($s5)
    ctx->pc = 0x221a28u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 72), GPR_U32(ctx, 4));
label_221a2c:
    // 0x221a2c: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x221a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
label_221a30:
    // 0x221a30: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x221a30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_221a34:
    // 0x221a34: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x221a34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
label_221a38:
    // 0x221a38: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x221a38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
label_221a3c:
    // 0x221a3c: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x221a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
label_221a40:
    // 0x221a40: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x221a40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
label_221a44:
    // 0x221a44: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x221a44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
label_221a48:
    // 0x221a48: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x221a48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_221a4c:
    // 0x221a4c: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x221a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
label_221a50:
    // 0x221a50: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x221a50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
label_221a54:
    // 0x221a54: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x221a54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_221a58:
    // 0x221a58: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x221a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_221a5c:
    // 0x221a5c: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x221a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
label_221a60:
    // 0x221a60: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x221a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_221a64:
    // 0x221a64: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x221a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_221a68:
    // 0x221a68: 0x1460ff41  bnez        $v1, . + 4 + (-0xBF << 2)
label_221a6c:
    if (ctx->pc == 0x221A6Cu) {
        ctx->pc = 0x221A6Cu;
            // 0x221a6c: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x221A70u;
        goto label_221a70;
    }
    ctx->pc = 0x221A68u;
    {
        const bool branch_taken_0x221a68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x221A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221A68u;
            // 0x221a6c: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221a68) {
            ctx->pc = 0x221770u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_221770;
        }
    }
    ctx->pc = 0x221A70u;
label_221a70:
    // 0x221a70: 0x8ea30028  lw          $v1, 0x28($s5)
    ctx->pc = 0x221a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_221a74:
    // 0x221a74: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x221a74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_221a78:
    // 0x221a78: 0x8ea30038  lw          $v1, 0x38($s5)
    ctx->pc = 0x221a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
label_221a7c:
    // 0x221a7c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x221a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_221a80:
    // 0x221a80: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x221a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_221a84:
    // 0x221a84: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x221a84u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_221a88:
    // 0x221a88: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x221a88u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_221a8c:
    // 0x221a8c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x221a8cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_221a90:
    // 0x221a90: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x221a90u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_221a94:
    // 0x221a94: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x221a94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_221a98:
    // 0x221a98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x221a98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_221a9c:
    // 0x221a9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x221a9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_221aa0:
    // 0x221aa0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x221aa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_221aa4:
    // 0x221aa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x221aa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_221aa8:
    // 0x221aa8: 0x3e00008  jr          $ra
label_221aac:
    if (ctx->pc == 0x221AACu) {
        ctx->pc = 0x221AACu;
            // 0x221aac: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x221AB0u;
        goto label_fallthrough_0x221aa8;
    }
    ctx->pc = 0x221AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221AA8u;
            // 0x221aac: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x221aa8:
    ctx->pc = 0x221AB0u;
}
