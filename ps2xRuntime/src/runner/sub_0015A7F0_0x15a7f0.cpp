#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015A7F0
// Address: 0x15a7f0 - 0x15aab0
void sub_0015A7F0_0x15a7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A7F0_0x15a7f0");
#endif

    switch (ctx->pc) {
        case 0x15a7f0u: goto label_15a7f0;
        case 0x15a7f4u: goto label_15a7f4;
        case 0x15a7f8u: goto label_15a7f8;
        case 0x15a7fcu: goto label_15a7fc;
        case 0x15a800u: goto label_15a800;
        case 0x15a804u: goto label_15a804;
        case 0x15a808u: goto label_15a808;
        case 0x15a80cu: goto label_15a80c;
        case 0x15a810u: goto label_15a810;
        case 0x15a814u: goto label_15a814;
        case 0x15a818u: goto label_15a818;
        case 0x15a81cu: goto label_15a81c;
        case 0x15a820u: goto label_15a820;
        case 0x15a824u: goto label_15a824;
        case 0x15a828u: goto label_15a828;
        case 0x15a82cu: goto label_15a82c;
        case 0x15a830u: goto label_15a830;
        case 0x15a834u: goto label_15a834;
        case 0x15a838u: goto label_15a838;
        case 0x15a83cu: goto label_15a83c;
        case 0x15a840u: goto label_15a840;
        case 0x15a844u: goto label_15a844;
        case 0x15a848u: goto label_15a848;
        case 0x15a84cu: goto label_15a84c;
        case 0x15a850u: goto label_15a850;
        case 0x15a854u: goto label_15a854;
        case 0x15a858u: goto label_15a858;
        case 0x15a85cu: goto label_15a85c;
        case 0x15a860u: goto label_15a860;
        case 0x15a864u: goto label_15a864;
        case 0x15a868u: goto label_15a868;
        case 0x15a86cu: goto label_15a86c;
        case 0x15a870u: goto label_15a870;
        case 0x15a874u: goto label_15a874;
        case 0x15a878u: goto label_15a878;
        case 0x15a87cu: goto label_15a87c;
        case 0x15a880u: goto label_15a880;
        case 0x15a884u: goto label_15a884;
        case 0x15a888u: goto label_15a888;
        case 0x15a88cu: goto label_15a88c;
        case 0x15a890u: goto label_15a890;
        case 0x15a894u: goto label_15a894;
        case 0x15a898u: goto label_15a898;
        case 0x15a89cu: goto label_15a89c;
        case 0x15a8a0u: goto label_15a8a0;
        case 0x15a8a4u: goto label_15a8a4;
        case 0x15a8a8u: goto label_15a8a8;
        case 0x15a8acu: goto label_15a8ac;
        case 0x15a8b0u: goto label_15a8b0;
        case 0x15a8b4u: goto label_15a8b4;
        case 0x15a8b8u: goto label_15a8b8;
        case 0x15a8bcu: goto label_15a8bc;
        case 0x15a8c0u: goto label_15a8c0;
        case 0x15a8c4u: goto label_15a8c4;
        case 0x15a8c8u: goto label_15a8c8;
        case 0x15a8ccu: goto label_15a8cc;
        case 0x15a8d0u: goto label_15a8d0;
        case 0x15a8d4u: goto label_15a8d4;
        case 0x15a8d8u: goto label_15a8d8;
        case 0x15a8dcu: goto label_15a8dc;
        case 0x15a8e0u: goto label_15a8e0;
        case 0x15a8e4u: goto label_15a8e4;
        case 0x15a8e8u: goto label_15a8e8;
        case 0x15a8ecu: goto label_15a8ec;
        case 0x15a8f0u: goto label_15a8f0;
        case 0x15a8f4u: goto label_15a8f4;
        case 0x15a8f8u: goto label_15a8f8;
        case 0x15a8fcu: goto label_15a8fc;
        case 0x15a900u: goto label_15a900;
        case 0x15a904u: goto label_15a904;
        case 0x15a908u: goto label_15a908;
        case 0x15a90cu: goto label_15a90c;
        case 0x15a910u: goto label_15a910;
        case 0x15a914u: goto label_15a914;
        case 0x15a918u: goto label_15a918;
        case 0x15a91cu: goto label_15a91c;
        case 0x15a920u: goto label_15a920;
        case 0x15a924u: goto label_15a924;
        case 0x15a928u: goto label_15a928;
        case 0x15a92cu: goto label_15a92c;
        case 0x15a930u: goto label_15a930;
        case 0x15a934u: goto label_15a934;
        case 0x15a938u: goto label_15a938;
        case 0x15a93cu: goto label_15a93c;
        case 0x15a940u: goto label_15a940;
        case 0x15a944u: goto label_15a944;
        case 0x15a948u: goto label_15a948;
        case 0x15a94cu: goto label_15a94c;
        case 0x15a950u: goto label_15a950;
        case 0x15a954u: goto label_15a954;
        case 0x15a958u: goto label_15a958;
        case 0x15a95cu: goto label_15a95c;
        case 0x15a960u: goto label_15a960;
        case 0x15a964u: goto label_15a964;
        case 0x15a968u: goto label_15a968;
        case 0x15a96cu: goto label_15a96c;
        case 0x15a970u: goto label_15a970;
        case 0x15a974u: goto label_15a974;
        case 0x15a978u: goto label_15a978;
        case 0x15a97cu: goto label_15a97c;
        case 0x15a980u: goto label_15a980;
        case 0x15a984u: goto label_15a984;
        case 0x15a988u: goto label_15a988;
        case 0x15a98cu: goto label_15a98c;
        case 0x15a990u: goto label_15a990;
        case 0x15a994u: goto label_15a994;
        case 0x15a998u: goto label_15a998;
        case 0x15a99cu: goto label_15a99c;
        case 0x15a9a0u: goto label_15a9a0;
        case 0x15a9a4u: goto label_15a9a4;
        case 0x15a9a8u: goto label_15a9a8;
        case 0x15a9acu: goto label_15a9ac;
        case 0x15a9b0u: goto label_15a9b0;
        case 0x15a9b4u: goto label_15a9b4;
        case 0x15a9b8u: goto label_15a9b8;
        case 0x15a9bcu: goto label_15a9bc;
        case 0x15a9c0u: goto label_15a9c0;
        case 0x15a9c4u: goto label_15a9c4;
        case 0x15a9c8u: goto label_15a9c8;
        case 0x15a9ccu: goto label_15a9cc;
        case 0x15a9d0u: goto label_15a9d0;
        case 0x15a9d4u: goto label_15a9d4;
        case 0x15a9d8u: goto label_15a9d8;
        case 0x15a9dcu: goto label_15a9dc;
        case 0x15a9e0u: goto label_15a9e0;
        case 0x15a9e4u: goto label_15a9e4;
        case 0x15a9e8u: goto label_15a9e8;
        case 0x15a9ecu: goto label_15a9ec;
        case 0x15a9f0u: goto label_15a9f0;
        case 0x15a9f4u: goto label_15a9f4;
        case 0x15a9f8u: goto label_15a9f8;
        case 0x15a9fcu: goto label_15a9fc;
        case 0x15aa00u: goto label_15aa00;
        case 0x15aa04u: goto label_15aa04;
        case 0x15aa08u: goto label_15aa08;
        case 0x15aa0cu: goto label_15aa0c;
        case 0x15aa10u: goto label_15aa10;
        case 0x15aa14u: goto label_15aa14;
        case 0x15aa18u: goto label_15aa18;
        case 0x15aa1cu: goto label_15aa1c;
        case 0x15aa20u: goto label_15aa20;
        case 0x15aa24u: goto label_15aa24;
        case 0x15aa28u: goto label_15aa28;
        case 0x15aa2cu: goto label_15aa2c;
        case 0x15aa30u: goto label_15aa30;
        case 0x15aa34u: goto label_15aa34;
        case 0x15aa38u: goto label_15aa38;
        case 0x15aa3cu: goto label_15aa3c;
        case 0x15aa40u: goto label_15aa40;
        case 0x15aa44u: goto label_15aa44;
        case 0x15aa48u: goto label_15aa48;
        case 0x15aa4cu: goto label_15aa4c;
        case 0x15aa50u: goto label_15aa50;
        case 0x15aa54u: goto label_15aa54;
        case 0x15aa58u: goto label_15aa58;
        case 0x15aa5cu: goto label_15aa5c;
        case 0x15aa60u: goto label_15aa60;
        case 0x15aa64u: goto label_15aa64;
        case 0x15aa68u: goto label_15aa68;
        case 0x15aa6cu: goto label_15aa6c;
        case 0x15aa70u: goto label_15aa70;
        case 0x15aa74u: goto label_15aa74;
        case 0x15aa78u: goto label_15aa78;
        case 0x15aa7cu: goto label_15aa7c;
        case 0x15aa80u: goto label_15aa80;
        case 0x15aa84u: goto label_15aa84;
        case 0x15aa88u: goto label_15aa88;
        case 0x15aa8cu: goto label_15aa8c;
        case 0x15aa90u: goto label_15aa90;
        case 0x15aa94u: goto label_15aa94;
        case 0x15aa98u: goto label_15aa98;
        case 0x15aa9cu: goto label_15aa9c;
        case 0x15aaa0u: goto label_15aaa0;
        case 0x15aaa4u: goto label_15aaa4;
        case 0x15aaa8u: goto label_15aaa8;
        case 0x15aaacu: goto label_15aaac;
        default: break;
    }

    ctx->pc = 0x15a7f0u;

label_15a7f0:
    // 0x15a7f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15a7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_15a7f4:
    // 0x15a7f4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x15a7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_15a7f8:
    // 0x15a7f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15a7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_15a7fc:
    // 0x15a7fc: 0x244224f0  addiu       $v0, $v0, 0x24F0
    ctx->pc = 0x15a7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9456));
label_15a800:
    // 0x15a800: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15a800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15a804:
    // 0x15a804: 0x3c0b006d  lui         $t3, 0x6D
    ctx->pc = 0x15a804u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)109 << 16));
label_15a808:
    // 0x15a808: 0xaf82843c  sw          $v0, -0x7BC4($gp)
    ctx->pc = 0x15a808u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935612), GPR_U32(ctx, 2));
label_15a80c:
    // 0x15a80c: 0x3c0a006d  lui         $t2, 0x6D
    ctx->pc = 0x15a80cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)109 << 16));
label_15a810:
    // 0x15a810: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x15a810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_15a814:
    // 0x15a814: 0x3c08006d  lui         $t0, 0x6D
    ctx->pc = 0x15a814u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)109 << 16));
label_15a818:
    // 0x15a818: 0x8c422560  lw          $v0, 0x2560($v0)
    ctx->pc = 0x15a818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9568)));
label_15a81c:
    // 0x15a81c: 0x3c07006d  lui         $a3, 0x6D
    ctx->pc = 0x15a81cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)109 << 16));
label_15a820:
    // 0x15a820: 0x3c06006d  lui         $a2, 0x6D
    ctx->pc = 0x15a820u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)109 << 16));
label_15a824:
    // 0x15a824: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x15a824u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
label_15a828:
    // 0x15a828: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x15a828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_15a82c:
    // 0x15a82c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15a82cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15a830:
    // 0x15a830: 0xaf828440  sw          $v0, -0x7BC0($gp)
    ctx->pc = 0x15a830u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935616), GPR_U32(ctx, 2));
label_15a834:
    // 0x15a834: 0x8c8c0000  lw          $t4, 0x0($a0)
    ctx->pc = 0x15a834u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15a838:
    // 0x15a838: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x15a838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_15a83c:
    // 0x15a83c: 0xad6ccc50  sw          $t4, -0x33B0($t3)
    ctx->pc = 0x15a83cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4294954064), GPR_U32(ctx, 12));
label_15a840:
    // 0x15a840: 0x8c8b0004  lw          $t3, 0x4($a0)
    ctx->pc = 0x15a840u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_15a844:
    // 0x15a844: 0xad4bcc54  sw          $t3, -0x33AC($t2)
    ctx->pc = 0x15a844u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4294954068), GPR_U32(ctx, 11));
label_15a848:
    // 0x15a848: 0x8c8a0008  lw          $t2, 0x8($a0)
    ctx->pc = 0x15a848u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15a84c:
    // 0x15a84c: 0xad0acc58  sw          $t2, -0x33A8($t0)
    ctx->pc = 0x15a84cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294954072), GPR_U32(ctx, 10));
label_15a850:
    // 0x15a850: 0x8c88000c  lw          $t0, 0xC($a0)
    ctx->pc = 0x15a850u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_15a854:
    // 0x15a854: 0xace8cc5c  sw          $t0, -0x33A4($a3)
    ctx->pc = 0x15a854u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294954076), GPR_U32(ctx, 8));
label_15a858:
    // 0x15a858: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x15a858u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_15a85c:
    // 0x15a85c: 0xacc7cc60  sw          $a3, -0x33A0($a2)
    ctx->pc = 0x15a85cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294954080), GPR_U32(ctx, 7));
label_15a860:
    // 0x15a860: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x15a860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_15a864:
    // 0x15a864: 0xaca6cc64  sw          $a2, -0x339C($a1)
    ctx->pc = 0x15a864u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294954084), GPR_U32(ctx, 6));
label_15a868:
    // 0x15a868: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x15a868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_15a86c:
    // 0x15a86c: 0xac65cc68  sw          $a1, -0x3398($v1)
    ctx->pc = 0x15a86cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954088), GPR_U32(ctx, 5));
label_15a870:
    // 0x15a870: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x15a870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_15a874:
    // 0x15a874: 0xac43cc6c  sw          $v1, -0x3394($v0)
    ctx->pc = 0x15a874u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954092), GPR_U32(ctx, 3));
label_15a878:
    // 0x15a878: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x15a878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_15a87c:
    // 0x15a87c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_15a880:
    if (ctx->pc == 0x15A880u) {
        ctx->pc = 0x15A880u;
            // 0x15a880: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x15A884u;
        goto label_15a884;
    }
    ctx->pc = 0x15A87Cu;
    {
        const bool branch_taken_0x15a87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A87Cu;
            // 0x15a880: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a87c) {
            ctx->pc = 0x15A888u;
            goto label_15a888;
        }
    }
    ctx->pc = 0x15A884u;
label_15a884:
    // 0x15a884: 0x35290200  ori         $t1, $t1, 0x200
    ctx->pc = 0x15a884u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)512);
label_15a888:
    // 0x15a888: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x15a888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15a88c:
    // 0x15a88c: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x15a88cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
label_15a890:
    // 0x15a890: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x15a890u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15a894:
    // 0x15a894: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x15a894u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15a898:
    // 0x15a898: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x15a898u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15a89c:
    // 0x15a89c: 0xc056b54  jal         func_15AD50
label_15a8a0:
    if (ctx->pc == 0x15A8A0u) {
        ctx->pc = 0x15A8A0u;
            // 0x15a8a0: 0x2484cd70  addiu       $a0, $a0, -0x3290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954352));
        ctx->pc = 0x15A8A4u;
        goto label_15a8a4;
    }
    ctx->pc = 0x15A89Cu;
    SET_GPR_U32(ctx, 31, 0x15A8A4u);
    ctx->pc = 0x15A8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A89Cu;
            // 0x15a8a0: 0x2484cd70  addiu       $a0, $a0, -0x3290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AD50u;
    if (runtime->hasFunction(0x15AD50u)) {
        auto targetFn = runtime->lookupFunction(0x15AD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A8A4u; }
        if (ctx->pc != 0x15A8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AD50_0x15ad50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A8A4u; }
        if (ctx->pc != 0x15A8A4u) { return; }
    }
    ctx->pc = 0x15A8A4u;
label_15a8a4:
    // 0x15a8a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_15a8a8:
    if (ctx->pc == 0x15A8A8u) {
        ctx->pc = 0x15A8A8u;
            // 0x15a8a8: 0xaf828414  sw          $v0, -0x7BEC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935572), GPR_U32(ctx, 2));
        ctx->pc = 0x15A8ACu;
        goto label_15a8ac;
    }
    ctx->pc = 0x15A8A4u;
    {
        const bool branch_taken_0x15a8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A8A4u;
            // 0x15a8a8: 0xaf828414  sw          $v0, -0x7BEC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935572), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a8a4) {
            ctx->pc = 0x15A8B4u;
            goto label_15a8b4;
        }
    }
    ctx->pc = 0x15A8ACu;
label_15a8ac:
    // 0x15a8ac: 0x10000051  b           . + 4 + (0x51 << 2)
label_15a8b0:
    if (ctx->pc == 0x15A8B0u) {
        ctx->pc = 0x15A8B0u;
            // 0x15a8b0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x15A8B4u;
        goto label_15a8b4;
    }
    ctx->pc = 0x15A8ACu;
    {
        const bool branch_taken_0x15a8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A8ACu;
            // 0x15a8b0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a8ac) {
            ctx->pc = 0x15A9F4u;
            goto label_15a9f4;
        }
    }
    ctx->pc = 0x15A8B4u;
label_15a8b4:
    // 0x15a8b4: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x15a8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
label_15a8b8:
    // 0x15a8b8: 0xaf828418  sw          $v0, -0x7BE8($gp)
    ctx->pc = 0x15a8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935576), GPR_U32(ctx, 2));
label_15a8bc:
    // 0x15a8bc: 0x2484cc70  addiu       $a0, $a0, -0x3390
    ctx->pc = 0x15a8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954096));
label_15a8c0:
    // 0x15a8c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15a8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a8c4:
    // 0x15a8c4: 0xc04a576  jal         func_1295D8
label_15a8c8:
    if (ctx->pc == 0x15A8C8u) {
        ctx->pc = 0x15A8C8u;
            // 0x15a8c8: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x15A8CCu;
        goto label_15a8cc;
    }
    ctx->pc = 0x15A8C4u;
    SET_GPR_U32(ctx, 31, 0x15A8CCu);
    ctx->pc = 0x15A8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A8C4u;
            // 0x15a8c8: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A8CCu; }
        if (ctx->pc != 0x15A8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A8CCu; }
        if (ctx->pc != 0x15A8CCu) { return; }
    }
    ctx->pc = 0x15A8CCu;
label_15a8cc:
    // 0x15a8cc: 0xc057250  jal         func_15C940
label_15a8d0:
    if (ctx->pc == 0x15A8D0u) {
        ctx->pc = 0x15A8D0u;
            // 0x15a8d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15A8D4u;
        goto label_15a8d4;
    }
    ctx->pc = 0x15A8CCu;
    SET_GPR_U32(ctx, 31, 0x15A8D4u);
    ctx->pc = 0x15A8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A8CCu;
            // 0x15a8d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C940u;
    if (runtime->hasFunction(0x15C940u)) {
        auto targetFn = runtime->lookupFunction(0x15C940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A8D4u; }
        if (ctx->pc != 0x15A8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C940_0x15c940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A8D4u; }
        if (ctx->pc != 0x15A8D4u) { return; }
    }
    ctx->pc = 0x15A8D4u;
label_15a8d4:
    // 0x15a8d4: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x15a8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_15a8d8:
    // 0x15a8d8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x15a8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_15a8dc:
    // 0x15a8dc: 0xc057240  jal         func_15C900
label_15a8e0:
    if (ctx->pc == 0x15A8E0u) {
        ctx->pc = 0x15A8E0u;
            // 0x15a8e0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15A8E4u;
        goto label_15a8e4;
    }
    ctx->pc = 0x15A8DCu;
    SET_GPR_U32(ctx, 31, 0x15A8E4u);
    ctx->pc = 0x15A8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A8DCu;
            // 0x15a8e0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C900u;
    if (runtime->hasFunction(0x15C900u)) {
        auto targetFn = runtime->lookupFunction(0x15C900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A8E4u; }
        if (ctx->pc != 0x15A8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C900_0x15c900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A8E4u; }
        if (ctx->pc != 0x15A8E4u) { return; }
    }
    ctx->pc = 0x15A8E4u;
label_15a8e4:
    // 0x15a8e4: 0xc05724c  jal         func_15C930
label_15a8e8:
    if (ctx->pc == 0x15A8E8u) {
        ctx->pc = 0x15A8E8u;
            // 0x15a8e8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x15A8ECu;
        goto label_15a8ec;
    }
    ctx->pc = 0x15A8E4u;
    SET_GPR_U32(ctx, 31, 0x15A8ECu);
    ctx->pc = 0x15A8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A8E4u;
            // 0x15a8e8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C930u;
    if (runtime->hasFunction(0x15C930u)) {
        auto targetFn = runtime->lookupFunction(0x15C930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A8ECu; }
        if (ctx->pc != 0x15A8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C930_0x15c930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A8ECu; }
        if (ctx->pc != 0x15A8ECu) { return; }
    }
    ctx->pc = 0x15A8ECu;
label_15a8ec:
    // 0x15a8ec: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x15a8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_15a8f0:
    // 0x15a8f0: 0xc05722c  jal         func_15C8B0
label_15a8f4:
    if (ctx->pc == 0x15A8F4u) {
        ctx->pc = 0x15A8F4u;
            // 0x15a8f4: 0x24844e50  addiu       $a0, $a0, 0x4E50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20048));
        ctx->pc = 0x15A8F8u;
        goto label_15a8f8;
    }
    ctx->pc = 0x15A8F0u;
    SET_GPR_U32(ctx, 31, 0x15A8F8u);
    ctx->pc = 0x15A8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A8F0u;
            // 0x15a8f4: 0x24844e50  addiu       $a0, $a0, 0x4E50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C8B0u;
    if (runtime->hasFunction(0x15C8B0u)) {
        auto targetFn = runtime->lookupFunction(0x15C8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A8F8u; }
        if (ctx->pc != 0x15A8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C8B0_0x15c8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A8F8u; }
        if (ctx->pc != 0x15A8F8u) { return; }
    }
    ctx->pc = 0x15A8F8u;
label_15a8f8:
    // 0x15a8f8: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x15a8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_15a8fc:
    // 0x15a8fc: 0xc057230  jal         func_15C8C0
label_15a900:
    if (ctx->pc == 0x15A900u) {
        ctx->pc = 0x15A900u;
            // 0x15a900: 0x24844e50  addiu       $a0, $a0, 0x4E50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20048));
        ctx->pc = 0x15A904u;
        goto label_15a904;
    }
    ctx->pc = 0x15A8FCu;
    SET_GPR_U32(ctx, 31, 0x15A904u);
    ctx->pc = 0x15A900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A8FCu;
            // 0x15a900: 0x24844e50  addiu       $a0, $a0, 0x4E50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C8C0u;
    if (runtime->hasFunction(0x15C8C0u)) {
        auto targetFn = runtime->lookupFunction(0x15C8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A904u; }
        if (ctx->pc != 0x15A904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C8C0_0x15c8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A904u; }
        if (ctx->pc != 0x15A904u) { return; }
    }
    ctx->pc = 0x15A904u;
label_15a904:
    // 0x15a904: 0xc0574b8  jal         func_15D2E0
label_15a908:
    if (ctx->pc == 0x15A908u) {
        ctx->pc = 0x15A908u;
            // 0x15a908: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15A90Cu;
        goto label_15a90c;
    }
    ctx->pc = 0x15A904u;
    SET_GPR_U32(ctx, 31, 0x15A90Cu);
    ctx->pc = 0x15A908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A904u;
            // 0x15a908: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D2E0u;
    if (runtime->hasFunction(0x15D2E0u)) {
        auto targetFn = runtime->lookupFunction(0x15D2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A90Cu; }
        if (ctx->pc != 0x15A90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D2E0_0x15d2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A90Cu; }
        if (ctx->pc != 0x15A90Cu) { return; }
    }
    ctx->pc = 0x15A90Cu;
label_15a90c:
    // 0x15a90c: 0xc0574b8  jal         func_15D2E0
label_15a910:
    if (ctx->pc == 0x15A910u) {
        ctx->pc = 0x15A910u;
            // 0x15a910: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x15A914u;
        goto label_15a914;
    }
    ctx->pc = 0x15A90Cu;
    SET_GPR_U32(ctx, 31, 0x15A914u);
    ctx->pc = 0x15A910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A90Cu;
            // 0x15a910: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D2E0u;
    if (runtime->hasFunction(0x15D2E0u)) {
        auto targetFn = runtime->lookupFunction(0x15D2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A914u; }
        if (ctx->pc != 0x15A914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D2E0_0x15d2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A914u; }
        if (ctx->pc != 0x15A914u) { return; }
    }
    ctx->pc = 0x15A914u;
label_15a914:
    // 0x15a914: 0x3c0244ff  lui         $v0, 0x44FF
    ctx->pc = 0x15a914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17663 << 16));
label_15a918:
    // 0x15a918: 0xc057428  jal         func_15D0A0
label_15a91c:
    if (ctx->pc == 0x15A91Cu) {
        ctx->pc = 0x15A91Cu;
            // 0x15a91c: 0xaf82841c  sw          $v0, -0x7BE4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935580), GPR_U32(ctx, 2));
        ctx->pc = 0x15A920u;
        goto label_15a920;
    }
    ctx->pc = 0x15A918u;
    SET_GPR_U32(ctx, 31, 0x15A920u);
    ctx->pc = 0x15A91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A918u;
            // 0x15a91c: 0xaf82841c  sw          $v0, -0x7BE4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935580), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D0A0u;
    if (runtime->hasFunction(0x15D0A0u)) {
        auto targetFn = runtime->lookupFunction(0x15D0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A920u; }
        if (ctx->pc != 0x15A920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D0A0_0x15d0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A920u; }
        if (ctx->pc != 0x15A920u) { return; }
    }
    ctx->pc = 0x15A920u;
label_15a920:
    // 0x15a920: 0xc057480  jal         func_15D200
label_15a924:
    if (ctx->pc == 0x15A924u) {
        ctx->pc = 0x15A928u;
        goto label_15a928;
    }
    ctx->pc = 0x15A920u;
    SET_GPR_U32(ctx, 31, 0x15A928u);
    ctx->pc = 0x15D200u;
    if (runtime->hasFunction(0x15D200u)) {
        auto targetFn = runtime->lookupFunction(0x15D200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A928u; }
        if (ctx->pc != 0x15A928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D200_0x15d200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A928u; }
        if (ctx->pc != 0x15A928u) { return; }
    }
    ctx->pc = 0x15A928u;
label_15a928:
    // 0x15a928: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15a928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_15a92c:
    // 0x15a92c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15a92cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15a930:
    // 0x15a930: 0x0  nop
    ctx->pc = 0x15a930u;
    // NOP
label_15a934:
    // 0x15a934: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x15a934u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_15a938:
    // 0x15a938: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x15a938u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_15a93c:
    // 0x15a93c: 0xc057224  jal         func_15C890
label_15a940:
    if (ctx->pc == 0x15A940u) {
        ctx->pc = 0x15A940u;
            // 0x15a940: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x15A944u;
        goto label_15a944;
    }
    ctx->pc = 0x15A93Cu;
    SET_GPR_U32(ctx, 31, 0x15A944u);
    ctx->pc = 0x15A940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A93Cu;
            // 0x15a940: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C890u;
    if (runtime->hasFunction(0x15C890u)) {
        auto targetFn = runtime->lookupFunction(0x15C890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A944u; }
        if (ctx->pc != 0x15A944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C890_0x15c890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A944u; }
        if (ctx->pc != 0x15A944u) { return; }
    }
    ctx->pc = 0x15A944u;
label_15a944:
    // 0x15a944: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x15a944u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_15a948:
    // 0x15a948: 0xc056b0c  jal         func_15AC30
label_15a94c:
    if (ctx->pc == 0x15A94Cu) {
        ctx->pc = 0x15A94Cu;
            // 0x15a94c: 0x2484bd50  addiu       $a0, $a0, -0x42B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950224));
        ctx->pc = 0x15A950u;
        goto label_15a950;
    }
    ctx->pc = 0x15A948u;
    SET_GPR_U32(ctx, 31, 0x15A950u);
    ctx->pc = 0x15A94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A948u;
            // 0x15a94c: 0x2484bd50  addiu       $a0, $a0, -0x42B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AC30u;
    if (runtime->hasFunction(0x15AC30u)) {
        auto targetFn = runtime->lookupFunction(0x15AC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A950u; }
        if (ctx->pc != 0x15A950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC30_0x15ac30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A950u; }
        if (ctx->pc != 0x15A950u) { return; }
    }
    ctx->pc = 0x15A950u;
label_15a950:
    // 0x15a950: 0x3c0343a0  lui         $v1, 0x43A0
    ctx->pc = 0x15a950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
label_15a954:
    // 0x15a954: 0x3c02c2e0  lui         $v0, 0xC2E0
    ctx->pc = 0x15a954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49888 << 16));
label_15a958:
    // 0x15a958: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x15a958u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15a95c:
    // 0x15a95c: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x15a95cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
label_15a960:
    // 0x15a960: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15a960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_15a964:
    // 0x15a964: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x15a964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
label_15a968:
    // 0x15a968: 0x3c024b7f  lui         $v0, 0x4B7F
    ctx->pc = 0x15a968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19327 << 16));
label_15a96c:
    // 0x15a96c: 0x2484ce40  addiu       $a0, $a0, -0x31C0
    ctx->pc = 0x15a96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954560));
label_15a970:
    // 0x15a970: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x15a970u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_15a974:
    // 0x15a974: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x15a974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_15a978:
    // 0x15a978: 0x44828000  mtc1        $v0, $f16
    ctx->pc = 0x15a978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_15a97c:
    // 0x15a97c: 0x44808800  mtc1        $zero, $f17
    ctx->pc = 0x15a97cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
label_15a980:
    // 0x15a980: 0xc0573c0  jal         func_15CF00
label_15a984:
    if (ctx->pc == 0x15A984u) {
        ctx->pc = 0x15A984u;
            // 0x15a984: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->pc = 0x15A988u;
        goto label_15a988;
    }
    ctx->pc = 0x15A980u;
    SET_GPR_U32(ctx, 31, 0x15A988u);
    ctx->pc = 0x15A984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A980u;
            // 0x15a984: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF00u;
    if (runtime->hasFunction(0x15CF00u)) {
        auto targetFn = runtime->lookupFunction(0x15CF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A988u; }
        if (ctx->pc != 0x15A988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF00_0x15cf00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A988u; }
        if (ctx->pc != 0x15A988u) { return; }
    }
    ctx->pc = 0x15A988u;
label_15a988:
    // 0x15a988: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x15a988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
label_15a98c:
    // 0x15a98c: 0xc0573cc  jal         func_15CF30
label_15a990:
    if (ctx->pc == 0x15A990u) {
        ctx->pc = 0x15A990u;
            // 0x15a990: 0x2484ce40  addiu       $a0, $a0, -0x31C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954560));
        ctx->pc = 0x15A994u;
        goto label_15a994;
    }
    ctx->pc = 0x15A98Cu;
    SET_GPR_U32(ctx, 31, 0x15A994u);
    ctx->pc = 0x15A990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A98Cu;
            // 0x15a990: 0x2484ce40  addiu       $a0, $a0, -0x31C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF30u;
    if (runtime->hasFunction(0x15CF30u)) {
        auto targetFn = runtime->lookupFunction(0x15CF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A994u; }
        if (ctx->pc != 0x15A994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF30_0x15cf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A994u; }
        if (ctx->pc != 0x15A994u) { return; }
    }
    ctx->pc = 0x15A994u;
label_15a994:
    // 0x15a994: 0xc056b2c  jal         func_15ACB0
label_15a998:
    if (ctx->pc == 0x15A998u) {
        ctx->pc = 0x15A99Cu;
        goto label_15a99c;
    }
    ctx->pc = 0x15A994u;
    SET_GPR_U32(ctx, 31, 0x15A99Cu);
    ctx->pc = 0x15ACB0u;
    if (runtime->hasFunction(0x15ACB0u)) {
        auto targetFn = runtime->lookupFunction(0x15ACB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A99Cu; }
        if (ctx->pc != 0x15A99Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ACB0_0x15acb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A99Cu; }
        if (ctx->pc != 0x15A99Cu) { return; }
    }
    ctx->pc = 0x15A99Cu;
label_15a99c:
    // 0x15a99c: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x15a99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_15a9a0:
    // 0x15a9a0: 0xc056b04  jal         func_15AC10
label_15a9a4:
    if (ctx->pc == 0x15A9A4u) {
        ctx->pc = 0x15A9A4u;
            // 0x15a9a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x15A9A8u;
        goto label_15a9a8;
    }
    ctx->pc = 0x15A9A0u;
    SET_GPR_U32(ctx, 31, 0x15A9A8u);
    ctx->pc = 0x15A9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A9A0u;
            // 0x15a9a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AC10u;
    if (runtime->hasFunction(0x15AC10u)) {
        auto targetFn = runtime->lookupFunction(0x15AC10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A9A8u; }
        if (ctx->pc != 0x15A9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC10_0x15ac10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A9A8u; }
        if (ctx->pc != 0x15A9A8u) { return; }
    }
    ctx->pc = 0x15A9A8u;
label_15a9a8:
    // 0x15a9a8: 0x24040049  addiu       $a0, $zero, 0x49
    ctx->pc = 0x15a9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
label_15a9ac:
    // 0x15a9ac: 0xc056b04  jal         func_15AC10
label_15a9b0:
    if (ctx->pc == 0x15A9B0u) {
        ctx->pc = 0x15A9B0u;
            // 0x15a9b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15A9B4u;
        goto label_15a9b4;
    }
    ctx->pc = 0x15A9ACu;
    SET_GPR_U32(ctx, 31, 0x15A9B4u);
    ctx->pc = 0x15A9B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A9ACu;
            // 0x15a9b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AC10u;
    if (runtime->hasFunction(0x15AC10u)) {
        auto targetFn = runtime->lookupFunction(0x15AC10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A9B4u; }
        if (ctx->pc != 0x15A9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC10_0x15ac10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A9B4u; }
        if (ctx->pc != 0x15A9B4u) { return; }
    }
    ctx->pc = 0x15A9B4u;
label_15a9b4:
    // 0x15a9b4: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x15a9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_15a9b8:
    // 0x15a9b8: 0xc056b04  jal         func_15AC10
label_15a9bc:
    if (ctx->pc == 0x15A9BCu) {
        ctx->pc = 0x15A9BCu;
            // 0x15a9bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15A9C0u;
        goto label_15a9c0;
    }
    ctx->pc = 0x15A9B8u;
    SET_GPR_U32(ctx, 31, 0x15A9C0u);
    ctx->pc = 0x15A9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A9B8u;
            // 0x15a9bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AC10u;
    if (runtime->hasFunction(0x15AC10u)) {
        auto targetFn = runtime->lookupFunction(0x15AC10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A9C0u; }
        if (ctx->pc != 0x15A9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC10_0x15ac10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A9C0u; }
        if (ctx->pc != 0x15A9C0u) { return; }
    }
    ctx->pc = 0x15A9C0u;
label_15a9c0:
    // 0x15a9c0: 0xaf808420  sw          $zero, -0x7BE0($gp)
    ctx->pc = 0x15a9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935584), GPR_U32(ctx, 0));
label_15a9c4:
    // 0x15a9c4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x15a9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_15a9c8:
    // 0x15a9c8: 0xaf808424  sw          $zero, -0x7BDC($gp)
    ctx->pc = 0x15a9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935588), GPR_U32(ctx, 0));
label_15a9cc:
    // 0x15a9cc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x15a9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_15a9d0:
    // 0x15a9d0: 0xaf808428  sw          $zero, -0x7BD8($gp)
    ctx->pc = 0x15a9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935592), GPR_U32(ctx, 0));
label_15a9d4:
    // 0x15a9d4: 0xac433010  sw          $v1, 0x3010($v0)
    ctx->pc = 0x15a9d4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 12304), GPR_U32(ctx, 3)); // MMIO: 0x10003010
label_15a9d8:
    // 0x15a9d8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x15a9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_15a9dc:
    // 0x15a9dc: 0x30440700  andi        $a0, $v0, 0x700
    ctx->pc = 0x15a9dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1792);
label_15a9e0:
    // 0x15a9e0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_15a9e4:
    if (ctx->pc == 0x15A9E4u) {
        ctx->pc = 0x15A9E4u;
            // 0x15a9e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15A9E8u;
        goto label_15a9e8;
    }
    ctx->pc = 0x15A9E0u;
    {
        const bool branch_taken_0x15a9e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a9e0) {
            ctx->pc = 0x15A9E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15A9E0u;
            // 0x15a9e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15A9F4u;
            goto label_15a9f4;
        }
    }
    ctx->pc = 0x15A9E8u;
label_15a9e8:
    // 0x15a9e8: 0xc056aac  jal         func_15AAB0
label_15a9ec:
    if (ctx->pc == 0x15A9ECu) {
        ctx->pc = 0x15A9F0u;
        goto label_15a9f0;
    }
    ctx->pc = 0x15A9E8u;
    SET_GPR_U32(ctx, 31, 0x15A9F0u);
    ctx->pc = 0x15AAB0u;
    if (runtime->hasFunction(0x15AAB0u)) {
        auto targetFn = runtime->lookupFunction(0x15AAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A9F0u; }
        if (ctx->pc != 0x15A9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AAB0_0x15aab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A9F0u; }
        if (ctx->pc != 0x15A9F0u) { return; }
    }
    ctx->pc = 0x15A9F0u;
label_15a9f0:
    // 0x15a9f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15a9f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a9f4:
    // 0x15a9f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15a9f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15a9f8:
    // 0x15a9f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15a9f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15a9fc:
    // 0x15a9fc: 0x3e00008  jr          $ra
label_15aa00:
    if (ctx->pc == 0x15AA00u) {
        ctx->pc = 0x15AA00u;
            // 0x15aa00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x15AA04u;
        goto label_15aa04;
    }
    ctx->pc = 0x15A9FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15AA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A9FCu;
            // 0x15aa00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15AA04u;
label_15aa04:
    // 0x15aa04: 0x0  nop
    ctx->pc = 0x15aa04u;
    // NOP
label_15aa08:
    // 0x15aa08: 0x0  nop
    ctx->pc = 0x15aa08u;
    // NOP
label_15aa0c:
    // 0x15aa0c: 0x0  nop
    ctx->pc = 0x15aa0cu;
    // NOP
label_15aa10:
    // 0x15aa10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15aa10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_15aa14:
    // 0x15aa14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15aa14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_15aa18:
    // 0x15aa18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15aa18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15aa1c:
    // 0x15aa1c: 0x1480001b  bnez        $a0, . + 4 + (0x1B << 2)
label_15aa20:
    if (ctx->pc == 0x15AA20u) {
        ctx->pc = 0x15AA20u;
            // 0x15aa20: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x15AA24u;
        goto label_15aa24;
    }
    ctx->pc = 0x15AA1Cu;
    {
        const bool branch_taken_0x15aa1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15AA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AA1Cu;
            // 0x15aa20: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa1c) {
            ctx->pc = 0x15AA8Cu;
            goto label_15aa8c;
        }
    }
    ctx->pc = 0x15AA24u;
label_15aa24:
    // 0x15aa24: 0xc040e50  jal         func_103940
label_15aa28:
    if (ctx->pc == 0x15AA28u) {
        ctx->pc = 0x15AA28u;
            // 0x15aa28: 0x3404ff00  ori         $a0, $zero, 0xFF00 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
        ctx->pc = 0x15AA2Cu;
        goto label_15aa2c;
    }
    ctx->pc = 0x15AA24u;
    SET_GPR_U32(ctx, 31, 0x15AA2Cu);
    ctx->pc = 0x15AA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AA24u;
            // 0x15aa28: 0x3404ff00  ori         $a0, $zero, 0xFF00 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
        ctx->in_delay_slot = false;
    ctx->pc = 0x103940u;
    if (runtime->hasFunction(0x103940u)) {
        auto targetFn = runtime->lookupFunction(0x103940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AA2Cu; }
        if (ctx->pc != 0x15AA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103940_0x103940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AA2Cu; }
        if (ctx->pc != 0x15AA2Cu) { return; }
    }
    ctx->pc = 0x15AA2Cu;
label_15aa2c:
    // 0x15aa2c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15aa2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15aa30:
    // 0x15aa30: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x15aa30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
label_15aa34:
    // 0x15aa34: 0xdc501000  ld          $s0, 0x1000($v0)
    ctx->pc = 0x15aa34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 4096)));
label_15aa38:
    // 0x15aa38: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x15aa38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_15aa3c:
    // 0x15aa3c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_15aa40:
    if (ctx->pc == 0x15AA40u) {
        ctx->pc = 0x15AA40u;
            // 0x15aa40: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x15AA44u;
        goto label_15aa44;
    }
    ctx->pc = 0x15AA3Cu;
    {
        const bool branch_taken_0x15aa3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15aa3c) {
            ctx->pc = 0x15AA40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15AA3Cu;
            // 0x15aa40: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x15AA6Cu;
            goto label_15aa6c;
        }
    }
    ctx->pc = 0x15AA44u;
label_15aa44:
    // 0x15aa44: 0x8f828424  lw          $v0, -0x7BDC($gp)
    ctx->pc = 0x15aa44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935588)));
label_15aa48:
    // 0x15aa48: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_15aa4c:
    if (ctx->pc == 0x15AA4Cu) {
        ctx->pc = 0x15AA4Cu;
            // 0x15aa4c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x15AA50u;
        goto label_15aa50;
    }
    ctx->pc = 0x15AA48u;
    {
        const bool branch_taken_0x15aa48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15aa48) {
            ctx->pc = 0x15AA4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15AA48u;
            // 0x15aa4c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15AA5Cu;
            goto label_15aa5c;
        }
    }
    ctx->pc = 0x15AA50u;
label_15aa50:
    // 0x15aa50: 0x40f809  jalr        $v0
label_15aa54:
    if (ctx->pc == 0x15AA54u) {
        ctx->pc = 0x15AA54u;
            // 0x15aa54: 0x8f848428  lw          $a0, -0x7BD8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935592)));
        ctx->pc = 0x15AA58u;
        goto label_15aa58;
    }
    ctx->pc = 0x15AA50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15AA58u);
        ctx->pc = 0x15AA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AA50u;
            // 0x15aa54: 0x8f848428  lw          $a0, -0x7BD8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935592)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15AA58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15AA58u; }
            if (ctx->pc != 0x15AA58u) { return; }
        }
        }
    }
    ctx->pc = 0x15AA58u;
label_15aa58:
    // 0x15aa58: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15aa58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15aa5c:
    // 0x15aa5c: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x15aa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
label_15aa60:
    // 0x15aa60: 0xfc431000  sd          $v1, 0x1000($v0)
    ctx->pc = 0x15aa60u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 4096), GPR_U64(ctx, 3));
label_15aa64:
    // 0x15aa64: 0xaf808434  sw          $zero, -0x7BCC($gp)
    ctx->pc = 0x15aa64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935604), GPR_U32(ctx, 0));
label_15aa68:
    // 0x15aa68: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x15aa68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_15aa6c:
    // 0x15aa6c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_15aa70:
    if (ctx->pc == 0x15AA70u) {
        ctx->pc = 0x15AA70u;
            // 0x15aa70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15AA74u;
        goto label_15aa74;
    }
    ctx->pc = 0x15AA6Cu;
    {
        const bool branch_taken_0x15aa6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15aa6c) {
            ctx->pc = 0x15AA70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15AA6Cu;
            // 0x15aa70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15AA84u;
            goto label_15aa84;
        }
    }
    ctx->pc = 0x15AA74u;
label_15aa74:
    // 0x15aa74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15aa74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15aa78:
    // 0x15aa78: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x15aa78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
label_15aa7c:
    // 0x15aa7c: 0xfc431000  sd          $v1, 0x1000($v0)
    ctx->pc = 0x15aa7cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 4096), GPR_U64(ctx, 3));
label_15aa80:
    // 0x15aa80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15aa80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15aa84:
    // 0x15aa84: 0xc040e50  jal         func_103940
label_15aa88:
    if (ctx->pc == 0x15AA88u) {
        ctx->pc = 0x15AA8Cu;
        goto label_15aa8c;
    }
    ctx->pc = 0x15AA84u;
    SET_GPR_U32(ctx, 31, 0x15AA8Cu);
    ctx->pc = 0x103940u;
    if (runtime->hasFunction(0x103940u)) {
        auto targetFn = runtime->lookupFunction(0x103940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AA8Cu; }
        if (ctx->pc != 0x15AA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103940_0x103940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AA8Cu; }
        if (ctx->pc != 0x15AA8Cu) { return; }
    }
    ctx->pc = 0x15AA8Cu;
label_15aa8c:
    // 0x15aa8c: 0xf  sync
    ctx->pc = 0x15aa8cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_15aa90:
    // 0x15aa90: 0x42000038  ei
    ctx->pc = 0x15aa90u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_15aa94:
    // 0x15aa94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15aa94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15aa98:
    // 0x15aa98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15aa98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15aa9c:
    // 0x15aa9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15aa9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15aaa0:
    // 0x15aaa0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15aaa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15aaa4:
    // 0x15aaa4: 0x3e00008  jr          $ra
label_15aaa8:
    if (ctx->pc == 0x15AAA8u) {
        ctx->pc = 0x15AAA8u;
            // 0x15aaa8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x15AAACu;
        goto label_15aaac;
    }
    ctx->pc = 0x15AAA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15AAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AAA4u;
            // 0x15aaa8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15AAACu;
label_15aaac:
    // 0x15aaac: 0x0  nop
    ctx->pc = 0x15aaacu;
    // NOP
}
