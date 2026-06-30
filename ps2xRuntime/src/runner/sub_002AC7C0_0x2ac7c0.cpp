#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AC7C0
// Address: 0x2ac7c0 - 0x2aca20
void sub_002AC7C0_0x2ac7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC7C0_0x2ac7c0");
#endif

    switch (ctx->pc) {
        case 0x2ac7c0u: goto label_2ac7c0;
        case 0x2ac7c4u: goto label_2ac7c4;
        case 0x2ac7c8u: goto label_2ac7c8;
        case 0x2ac7ccu: goto label_2ac7cc;
        case 0x2ac7d0u: goto label_2ac7d0;
        case 0x2ac7d4u: goto label_2ac7d4;
        case 0x2ac7d8u: goto label_2ac7d8;
        case 0x2ac7dcu: goto label_2ac7dc;
        case 0x2ac7e0u: goto label_2ac7e0;
        case 0x2ac7e4u: goto label_2ac7e4;
        case 0x2ac7e8u: goto label_2ac7e8;
        case 0x2ac7ecu: goto label_2ac7ec;
        case 0x2ac7f0u: goto label_2ac7f0;
        case 0x2ac7f4u: goto label_2ac7f4;
        case 0x2ac7f8u: goto label_2ac7f8;
        case 0x2ac7fcu: goto label_2ac7fc;
        case 0x2ac800u: goto label_2ac800;
        case 0x2ac804u: goto label_2ac804;
        case 0x2ac808u: goto label_2ac808;
        case 0x2ac80cu: goto label_2ac80c;
        case 0x2ac810u: goto label_2ac810;
        case 0x2ac814u: goto label_2ac814;
        case 0x2ac818u: goto label_2ac818;
        case 0x2ac81cu: goto label_2ac81c;
        case 0x2ac820u: goto label_2ac820;
        case 0x2ac824u: goto label_2ac824;
        case 0x2ac828u: goto label_2ac828;
        case 0x2ac82cu: goto label_2ac82c;
        case 0x2ac830u: goto label_2ac830;
        case 0x2ac834u: goto label_2ac834;
        case 0x2ac838u: goto label_2ac838;
        case 0x2ac83cu: goto label_2ac83c;
        case 0x2ac840u: goto label_2ac840;
        case 0x2ac844u: goto label_2ac844;
        case 0x2ac848u: goto label_2ac848;
        case 0x2ac84cu: goto label_2ac84c;
        case 0x2ac850u: goto label_2ac850;
        case 0x2ac854u: goto label_2ac854;
        case 0x2ac858u: goto label_2ac858;
        case 0x2ac85cu: goto label_2ac85c;
        case 0x2ac860u: goto label_2ac860;
        case 0x2ac864u: goto label_2ac864;
        case 0x2ac868u: goto label_2ac868;
        case 0x2ac86cu: goto label_2ac86c;
        case 0x2ac870u: goto label_2ac870;
        case 0x2ac874u: goto label_2ac874;
        case 0x2ac878u: goto label_2ac878;
        case 0x2ac87cu: goto label_2ac87c;
        case 0x2ac880u: goto label_2ac880;
        case 0x2ac884u: goto label_2ac884;
        case 0x2ac888u: goto label_2ac888;
        case 0x2ac88cu: goto label_2ac88c;
        case 0x2ac890u: goto label_2ac890;
        case 0x2ac894u: goto label_2ac894;
        case 0x2ac898u: goto label_2ac898;
        case 0x2ac89cu: goto label_2ac89c;
        case 0x2ac8a0u: goto label_2ac8a0;
        case 0x2ac8a4u: goto label_2ac8a4;
        case 0x2ac8a8u: goto label_2ac8a8;
        case 0x2ac8acu: goto label_2ac8ac;
        case 0x2ac8b0u: goto label_2ac8b0;
        case 0x2ac8b4u: goto label_2ac8b4;
        case 0x2ac8b8u: goto label_2ac8b8;
        case 0x2ac8bcu: goto label_2ac8bc;
        case 0x2ac8c0u: goto label_2ac8c0;
        case 0x2ac8c4u: goto label_2ac8c4;
        case 0x2ac8c8u: goto label_2ac8c8;
        case 0x2ac8ccu: goto label_2ac8cc;
        case 0x2ac8d0u: goto label_2ac8d0;
        case 0x2ac8d4u: goto label_2ac8d4;
        case 0x2ac8d8u: goto label_2ac8d8;
        case 0x2ac8dcu: goto label_2ac8dc;
        case 0x2ac8e0u: goto label_2ac8e0;
        case 0x2ac8e4u: goto label_2ac8e4;
        case 0x2ac8e8u: goto label_2ac8e8;
        case 0x2ac8ecu: goto label_2ac8ec;
        case 0x2ac8f0u: goto label_2ac8f0;
        case 0x2ac8f4u: goto label_2ac8f4;
        case 0x2ac8f8u: goto label_2ac8f8;
        case 0x2ac8fcu: goto label_2ac8fc;
        case 0x2ac900u: goto label_2ac900;
        case 0x2ac904u: goto label_2ac904;
        case 0x2ac908u: goto label_2ac908;
        case 0x2ac90cu: goto label_2ac90c;
        case 0x2ac910u: goto label_2ac910;
        case 0x2ac914u: goto label_2ac914;
        case 0x2ac918u: goto label_2ac918;
        case 0x2ac91cu: goto label_2ac91c;
        case 0x2ac920u: goto label_2ac920;
        case 0x2ac924u: goto label_2ac924;
        case 0x2ac928u: goto label_2ac928;
        case 0x2ac92cu: goto label_2ac92c;
        case 0x2ac930u: goto label_2ac930;
        case 0x2ac934u: goto label_2ac934;
        case 0x2ac938u: goto label_2ac938;
        case 0x2ac93cu: goto label_2ac93c;
        case 0x2ac940u: goto label_2ac940;
        case 0x2ac944u: goto label_2ac944;
        case 0x2ac948u: goto label_2ac948;
        case 0x2ac94cu: goto label_2ac94c;
        case 0x2ac950u: goto label_2ac950;
        case 0x2ac954u: goto label_2ac954;
        case 0x2ac958u: goto label_2ac958;
        case 0x2ac95cu: goto label_2ac95c;
        case 0x2ac960u: goto label_2ac960;
        case 0x2ac964u: goto label_2ac964;
        case 0x2ac968u: goto label_2ac968;
        case 0x2ac96cu: goto label_2ac96c;
        case 0x2ac970u: goto label_2ac970;
        case 0x2ac974u: goto label_2ac974;
        case 0x2ac978u: goto label_2ac978;
        case 0x2ac97cu: goto label_2ac97c;
        case 0x2ac980u: goto label_2ac980;
        case 0x2ac984u: goto label_2ac984;
        case 0x2ac988u: goto label_2ac988;
        case 0x2ac98cu: goto label_2ac98c;
        case 0x2ac990u: goto label_2ac990;
        case 0x2ac994u: goto label_2ac994;
        case 0x2ac998u: goto label_2ac998;
        case 0x2ac99cu: goto label_2ac99c;
        case 0x2ac9a0u: goto label_2ac9a0;
        case 0x2ac9a4u: goto label_2ac9a4;
        case 0x2ac9a8u: goto label_2ac9a8;
        case 0x2ac9acu: goto label_2ac9ac;
        case 0x2ac9b0u: goto label_2ac9b0;
        case 0x2ac9b4u: goto label_2ac9b4;
        case 0x2ac9b8u: goto label_2ac9b8;
        case 0x2ac9bcu: goto label_2ac9bc;
        case 0x2ac9c0u: goto label_2ac9c0;
        case 0x2ac9c4u: goto label_2ac9c4;
        case 0x2ac9c8u: goto label_2ac9c8;
        case 0x2ac9ccu: goto label_2ac9cc;
        case 0x2ac9d0u: goto label_2ac9d0;
        case 0x2ac9d4u: goto label_2ac9d4;
        case 0x2ac9d8u: goto label_2ac9d8;
        case 0x2ac9dcu: goto label_2ac9dc;
        case 0x2ac9e0u: goto label_2ac9e0;
        case 0x2ac9e4u: goto label_2ac9e4;
        case 0x2ac9e8u: goto label_2ac9e8;
        case 0x2ac9ecu: goto label_2ac9ec;
        case 0x2ac9f0u: goto label_2ac9f0;
        case 0x2ac9f4u: goto label_2ac9f4;
        case 0x2ac9f8u: goto label_2ac9f8;
        case 0x2ac9fcu: goto label_2ac9fc;
        case 0x2aca00u: goto label_2aca00;
        case 0x2aca04u: goto label_2aca04;
        case 0x2aca08u: goto label_2aca08;
        case 0x2aca0cu: goto label_2aca0c;
        case 0x2aca10u: goto label_2aca10;
        case 0x2aca14u: goto label_2aca14;
        case 0x2aca18u: goto label_2aca18;
        case 0x2aca1cu: goto label_2aca1c;
        default: break;
    }

    ctx->pc = 0x2ac7c0u;

label_2ac7c0:
    // 0x2ac7c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2ac7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2ac7c4:
    // 0x2ac7c4: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x2ac7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_2ac7c8:
    // 0x2ac7c8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2ac7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2ac7cc:
    // 0x2ac7cc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2ac7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2ac7d0:
    // 0x2ac7d0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ac7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2ac7d4:
    // 0x2ac7d4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ac7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2ac7d8:
    // 0x2ac7d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ac7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2ac7dc:
    // 0x2ac7dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ac7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ac7e0:
    // 0x2ac7e0: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2ac7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_2ac7e4:
    // 0x2ac7e4: 0x10640082  beq         $v1, $a0, . + 4 + (0x82 << 2)
label_2ac7e8:
    if (ctx->pc == 0x2AC7E8u) {
        ctx->pc = 0x2AC7E8u;
            // 0x2ac7e8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2AC7ECu;
        goto label_2ac7ec;
    }
    ctx->pc = 0x2AC7E4u;
    {
        const bool branch_taken_0x2ac7e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2AC7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC7E4u;
            // 0x2ac7e8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac7e4) {
            ctx->pc = 0x2AC9F0u;
            goto label_2ac9f0;
        }
    }
    ctx->pc = 0x2AC7ECu;
label_2ac7ec:
    // 0x2ac7ec: 0x8ca90000  lw          $t1, 0x0($a1)
    ctx->pc = 0x2ac7ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2ac7f0:
    // 0x2ac7f0: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x2ac7f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2ac7f4:
    // 0x2ac7f4: 0x8cca0008  lw          $t2, 0x8($a2)
    ctx->pc = 0x2ac7f4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2ac7f8:
    // 0x2ac7f8: 0x1093823  subu        $a3, $t0, $t1
    ctx->pc = 0x2ac7f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_2ac7fc:
    // 0x2ac7fc: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
label_2ac800:
    if (ctx->pc == 0x2AC800u) {
        ctx->pc = 0x2AC800u;
            // 0x2ac800: 0x75883  sra         $t3, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 7), 2));
        ctx->pc = 0x2AC804u;
        goto label_2ac804;
    }
    ctx->pc = 0x2AC7FCu;
    {
        const bool branch_taken_0x2ac7fc = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x2AC800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC7FCu;
            // 0x2ac800: 0x75883  sra         $t3, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac7fc) {
            ctx->pc = 0x2AC80Cu;
            goto label_2ac80c;
        }
    }
    ctx->pc = 0x2AC804u;
label_2ac804:
    // 0x2ac804: 0x24e70003  addiu       $a3, $a3, 0x3
    ctx->pc = 0x2ac804u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
label_2ac808:
    // 0x2ac808: 0x75883  sra         $t3, $a3, 2
    ctx->pc = 0x2ac808u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 7), 2));
label_2ac80c:
    // 0x2ac80c: 0x10a382b  sltu        $a3, $t0, $t2
    ctx->pc = 0x2ac80cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_2ac810:
    // 0x2ac810: 0x54e0000d  bnel        $a3, $zero, . + 4 + (0xD << 2)
label_2ac814:
    if (ctx->pc == 0x2AC814u) {
        ctx->pc = 0x2AC814u;
            // 0x2ac814: 0x12a382b  sltu        $a3, $t1, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
        ctx->pc = 0x2AC818u;
        goto label_2ac818;
    }
    ctx->pc = 0x2AC810u;
    {
        const bool branch_taken_0x2ac810 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac810) {
            ctx->pc = 0x2AC814u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC810u;
            // 0x2ac814: 0x12a382b  sltu        $a3, $t1, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AC848u;
            goto label_2ac848;
        }
    }
    ctx->pc = 0x2AC818u;
label_2ac818:
    // 0x2ac818: 0x12a082b  sltu        $at, $t1, $t2
    ctx->pc = 0x2ac818u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_2ac81c:
    // 0x2ac81c: 0x50200015  beql        $at, $zero, . + 4 + (0x15 << 2)
label_2ac820:
    if (ctx->pc == 0x2AC820u) {
        ctx->pc = 0x2AC820u;
            // 0x2ac820: 0x8cca0014  lw          $t2, 0x14($a2) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
        ctx->pc = 0x2AC824u;
        goto label_2ac824;
    }
    ctx->pc = 0x2AC81Cu;
    {
        const bool branch_taken_0x2ac81c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac81c) {
            ctx->pc = 0x2AC820u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC81Cu;
            // 0x2ac820: 0x8cca0014  lw          $t2, 0x14($a2) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AC874u;
            goto label_2ac874;
        }
    }
    ctx->pc = 0x2AC824u;
label_2ac824:
    // 0x2ac824: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x2ac824u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_2ac828:
    // 0x2ac828: 0x8cc70004  lw          $a3, 0x4($a2)
    ctx->pc = 0x2ac828u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_2ac82c:
    // 0x2ac82c: 0x1074023  subu        $t0, $t0, $a3
    ctx->pc = 0x2ac82cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_2ac830:
    // 0x2ac830: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
label_2ac834:
    if (ctx->pc == 0x2AC834u) {
        ctx->pc = 0x2AC834u;
            // 0x2ac834: 0x83883  sra         $a3, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 2));
        ctx->pc = 0x2AC838u;
        goto label_2ac838;
    }
    ctx->pc = 0x2AC830u;
    {
        const bool branch_taken_0x2ac830 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x2AC834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC830u;
            // 0x2ac834: 0x83883  sra         $a3, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac830) {
            ctx->pc = 0x2AC840u;
            goto label_2ac840;
        }
    }
    ctx->pc = 0x2AC838u;
label_2ac838:
    // 0x2ac838: 0x25070003  addiu       $a3, $t0, 0x3
    ctx->pc = 0x2ac838u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
label_2ac83c:
    // 0x2ac83c: 0x73883  sra         $a3, $a3, 2
    ctx->pc = 0x2ac83cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 2));
label_2ac840:
    // 0x2ac840: 0x1000000b  b           . + 4 + (0xB << 2)
label_2ac844:
    if (ctx->pc == 0x2AC844u) {
        ctx->pc = 0x2AC844u;
            // 0x2ac844: 0x1675823  subu        $t3, $t3, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
        ctx->pc = 0x2AC848u;
        goto label_2ac848;
    }
    ctx->pc = 0x2AC840u;
    {
        const bool branch_taken_0x2ac840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC840u;
            // 0x2ac844: 0x1675823  subu        $t3, $t3, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac840) {
            ctx->pc = 0x2AC870u;
            goto label_2ac870;
        }
    }
    ctx->pc = 0x2AC848u;
label_2ac848:
    // 0x2ac848: 0x14e00009  bnez        $a3, . + 4 + (0x9 << 2)
label_2ac84c:
    if (ctx->pc == 0x2AC84Cu) {
        ctx->pc = 0x2AC850u;
        goto label_2ac850;
    }
    ctx->pc = 0x2AC848u;
    {
        const bool branch_taken_0x2ac848 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac848) {
            ctx->pc = 0x2AC870u;
            goto label_2ac870;
        }
    }
    ctx->pc = 0x2AC850u;
label_2ac850:
    // 0x2ac850: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x2ac850u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_2ac854:
    // 0x2ac854: 0x8cc70004  lw          $a3, 0x4($a2)
    ctx->pc = 0x2ac854u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_2ac858:
    // 0x2ac858: 0x1074023  subu        $t0, $t0, $a3
    ctx->pc = 0x2ac858u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_2ac85c:
    // 0x2ac85c: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
label_2ac860:
    if (ctx->pc == 0x2AC860u) {
        ctx->pc = 0x2AC860u;
            // 0x2ac860: 0x83883  sra         $a3, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 2));
        ctx->pc = 0x2AC864u;
        goto label_2ac864;
    }
    ctx->pc = 0x2AC85Cu;
    {
        const bool branch_taken_0x2ac85c = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x2AC860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC85Cu;
            // 0x2ac860: 0x83883  sra         $a3, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac85c) {
            ctx->pc = 0x2AC86Cu;
            goto label_2ac86c;
        }
    }
    ctx->pc = 0x2AC864u;
label_2ac864:
    // 0x2ac864: 0x25070003  addiu       $a3, $t0, 0x3
    ctx->pc = 0x2ac864u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
label_2ac868:
    // 0x2ac868: 0x73883  sra         $a3, $a3, 2
    ctx->pc = 0x2ac868u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 2));
label_2ac86c:
    // 0x2ac86c: 0x1675821  addu        $t3, $t3, $a3
    ctx->pc = 0x2ac86cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
label_2ac870:
    // 0x2ac870: 0x8cca0014  lw          $t2, 0x14($a2)
    ctx->pc = 0x2ac870u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_2ac874:
    // 0x2ac874: 0x3c0851eb  lui         $t0, 0x51EB
    ctx->pc = 0x2ac874u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20971 << 16));
label_2ac878:
    // 0x2ac878: 0x3509851f  ori         $t1, $t0, 0x851F
    ctx->pc = 0x2ac878u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)34079);
label_2ac87c:
    // 0x2ac87c: 0x8cb30000  lw          $s3, 0x0($a1)
    ctx->pc = 0x2ac87cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2ac880:
    // 0x2ac880: 0x8cb20004  lw          $s2, 0x4($a1)
    ctx->pc = 0x2ac880u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2ac884:
    // 0x2ac884: 0xb38c0  sll         $a3, $t3, 3
    ctx->pc = 0x2ac884u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
label_2ac888:
    // 0x2ac888: 0x8ca60014  lw          $a2, 0x14($a1)
    ctx->pc = 0x2ac888u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_2ac88c:
    // 0x2ac88c: 0x1445023  subu        $t2, $t2, $a0
    ctx->pc = 0x2ac88cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_2ac890:
    // 0x2ac890: 0x12a0018  mult        $zero, $t1, $t2
    ctx->pc = 0x2ac890u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2ac894:
    // 0x2ac894: 0x8cb1000c  lw          $s1, 0xC($a1)
    ctx->pc = 0x2ac894u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2ac898:
    // 0x2ac898: 0x8cb50010  lw          $s5, 0x10($a1)
    ctx->pc = 0x2ac898u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_2ac89c:
    // 0x2ac89c: 0xa47c2  srl         $t0, $t2, 31
    ctx->pc = 0x2ac89cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
label_2ac8a0:
    // 0x2ac8a0: 0xc32023  subu        $a0, $a2, $v1
    ctx->pc = 0x2ac8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_2ac8a4:
    // 0x2ac8a4: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x2ac8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_2ac8a8:
    // 0x2ac8a8: 0x437c2  srl         $a2, $a0, 31
    ctx->pc = 0x2ac8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_2ac8ac:
    // 0x2ac8ac: 0x2810  mfhi        $a1
    ctx->pc = 0x2ac8acu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_2ac8b0:
    // 0x2ac8b0: 0x751823  subu        $v1, $v1, $s5
    ctx->pc = 0x2ac8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_2ac8b4:
    // 0x2ac8b4: 0x1240018  mult        $zero, $t1, $a0
    ctx->pc = 0x2ac8b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2ac8b8:
    // 0x2ac8b8: 0x52143  sra         $a0, $a1, 5
    ctx->pc = 0x2ac8b8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 5));
label_2ac8bc:
    // 0x2ac8bc: 0x0  nop
    ctx->pc = 0x2ac8bcu;
    // NOP
label_2ac8c0:
    // 0x2ac8c0: 0x2810  mfhi        $a1
    ctx->pc = 0x2ac8c0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_2ac8c4:
    // 0x2ac8c4: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x2ac8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_2ac8c8:
    // 0x2ac8c8: 0x1230018  mult        $zero, $t1, $v1
    ctx->pc = 0x2ac8c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2ac8cc:
    // 0x2ac8cc: 0xe43823  subu        $a3, $a3, $a0
    ctx->pc = 0x2ac8ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_2ac8d0:
    // 0x2ac8d0: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x2ac8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_2ac8d4:
    // 0x2ac8d4: 0x51943  sra         $v1, $a1, 5
    ctx->pc = 0x2ac8d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 5));
label_2ac8d8:
    // 0x2ac8d8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2ac8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2ac8dc:
    // 0x2ac8dc: 0x672821  addu        $a1, $v1, $a3
    ctx->pc = 0x2ac8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2ac8e0:
    // 0x2ac8e0: 0x1810  mfhi        $v1
    ctx->pc = 0x2ac8e0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2ac8e4:
    // 0x2ac8e4: 0xafa5007c  sw          $a1, 0x7C($sp)
    ctx->pc = 0x2ac8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 5));
label_2ac8e8:
    // 0x2ac8e8: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x2ac8e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_2ac8ec:
    // 0x2ac8ec: 0xafa50078  sw          $a1, 0x78($sp)
    ctx->pc = 0x2ac8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 5));
label_2ac8f0:
    // 0x2ac8f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ac8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2ac8f4:
    // 0x2ac8f4: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x2ac8f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2ac8f8:
    // 0x2ac8f8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2ac8fc:
    if (ctx->pc == 0x2AC8FCu) {
        ctx->pc = 0x2AC8FCu;
            // 0x2ac8fc: 0xafa30074  sw          $v1, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
        ctx->pc = 0x2AC900u;
        goto label_2ac900;
    }
    ctx->pc = 0x2AC8F8u;
    {
        const bool branch_taken_0x2ac8f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC8F8u;
            // 0x2ac8fc: 0xafa30074  sw          $v1, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac8f8) {
            ctx->pc = 0x2AC908u;
            goto label_2ac908;
        }
    }
    ctx->pc = 0x2AC900u;
label_2ac900:
    // 0x2ac900: 0x10000002  b           . + 4 + (0x2 << 2)
label_2ac904:
    if (ctx->pc == 0x2AC904u) {
        ctx->pc = 0x2AC904u;
            // 0x2ac904: 0x27a30074  addiu       $v1, $sp, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
        ctx->pc = 0x2AC908u;
        goto label_2ac908;
    }
    ctx->pc = 0x2AC900u;
    {
        const bool branch_taken_0x2ac900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC900u;
            // 0x2ac904: 0x27a30074  addiu       $v1, $sp, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac900) {
            ctx->pc = 0x2AC90Cu;
            goto label_2ac90c;
        }
    }
    ctx->pc = 0x2AC908u;
label_2ac908:
    // 0x2ac908: 0x27a30078  addiu       $v1, $sp, 0x78
    ctx->pc = 0x2ac908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_2ac90c:
    // 0x2ac90c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2ac90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2ac910:
    // 0x2ac910: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x2ac910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_2ac914:
    // 0x2ac914: 0x8c701090  lw          $s0, 0x1090($v1)
    ctx->pc = 0x2ac914u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4240)));
label_2ac918:
    // 0x2ac918: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ac918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2ac91c:
    // 0x2ac91c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2ac91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2ac920:
    // 0x2ac920: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ac920u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2ac924:
    // 0x2ac924: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2ac924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2ac928:
    // 0x2ac928: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ac928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2ac92c:
    // 0x2ac92c: 0x2a3a021  addu        $s4, $s5, $v1
    ctx->pc = 0x2ac92cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_2ac930:
    // 0x2ac930: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x2ac930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
label_2ac934:
    // 0x2ac934: 0x2952023  subu        $a0, $s4, $s5
    ctx->pc = 0x2ac934u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
label_2ac938:
    // 0x2ac938: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x2ac938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
label_2ac93c:
    // 0x2ac93c: 0x437c2  srl         $a2, $a0, 31
    ctx->pc = 0x2ac93cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_2ac940:
    // 0x2ac940: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x2ac940u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2ac944:
    // 0x2ac944: 0x2810  mfhi        $a1
    ctx->pc = 0x2ac944u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_2ac948:
    // 0x2ac948: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x2ac948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_2ac94c:
    // 0x2ac94c: 0x52943  sra         $a1, $a1, 5
    ctx->pc = 0x2ac94cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
label_2ac950:
    // 0x2ac950: 0x2b4182b  sltu        $v1, $s5, $s4
    ctx->pc = 0x2ac950u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_2ac954:
    // 0x2ac954: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2ac954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2ac958:
    // 0x2ac958: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2ac958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_2ac95c:
    // 0x2ac95c: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x2ac95cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2ac960:
    // 0x2ac960: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_2ac964:
    if (ctx->pc == 0x2AC964u) {
        ctx->pc = 0x2AC964u;
            // 0x2ac964: 0xafa4007c  sw          $a0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 4));
        ctx->pc = 0x2AC968u;
        goto label_2ac968;
    }
    ctx->pc = 0x2AC960u;
    {
        const bool branch_taken_0x2ac960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC960u;
            // 0x2ac964: 0xafa4007c  sw          $a0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac960) {
            ctx->pc = 0x2AC990u;
            goto label_2ac990;
        }
    }
    ctx->pc = 0x2AC968u;
label_2ac968:
    // 0x2ac968: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x2ac968u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2ac96c:
    // 0x2ac96c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ac96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2ac970:
    // 0x2ac970: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2ac970u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2ac974:
    // 0x2ac974: 0x320f809  jalr        $t9
label_2ac978:
    if (ctx->pc == 0x2AC978u) {
        ctx->pc = 0x2AC978u;
            // 0x2ac978: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2AC97Cu;
        goto label_2ac97c;
    }
    ctx->pc = 0x2AC974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2AC97Cu);
        ctx->pc = 0x2AC978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC974u;
            // 0x2ac978: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AC97Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AC97Cu; }
            if (ctx->pc != 0x2AC97Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2AC97Cu;
label_2ac97c:
    // 0x2ac97c: 0x26b50064  addiu       $s5, $s5, 0x64
    ctx->pc = 0x2ac97cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 100));
label_2ac980:
    // 0x2ac980: 0x2b4182b  sltu        $v1, $s5, $s4
    ctx->pc = 0x2ac980u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_2ac984:
    // 0x2ac984: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_2ac988:
    if (ctx->pc == 0x2AC988u) {
        ctx->pc = 0x2AC98Cu;
        goto label_2ac98c;
    }
    ctx->pc = 0x2AC984u;
    {
        const bool branch_taken_0x2ac984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac984) {
            ctx->pc = 0x2AC968u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ac968;
        }
    }
    ctx->pc = 0x2AC98Cu;
label_2ac98c:
    // 0x2ac98c: 0x0  nop
    ctx->pc = 0x2ac98cu;
    // NOP
label_2ac990:
    // 0x2ac990: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x2ac990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_2ac994:
    // 0x2ac994: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_2ac998:
    if (ctx->pc == 0x2AC998u) {
        ctx->pc = 0x2AC99Cu;
        goto label_2ac99c;
    }
    ctx->pc = 0x2AC994u;
    {
        const bool branch_taken_0x2ac994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac994) {
            ctx->pc = 0x2AC9F0u;
            goto label_2ac9f0;
        }
    }
    ctx->pc = 0x2AC99Cu;
label_2ac99c:
    // 0x2ac99c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2ac99cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_2ac9a0:
    // 0x2ac9a0: 0x16710003  bne         $s3, $s1, . + 4 + (0x3 << 2)
label_2ac9a4:
    if (ctx->pc == 0x2AC9A4u) {
        ctx->pc = 0x2AC9A8u;
        goto label_2ac9a8;
    }
    ctx->pc = 0x2AC9A0u;
    {
        const bool branch_taken_0x2ac9a0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 17));
        if (branch_taken_0x2ac9a0) {
            ctx->pc = 0x2AC9B0u;
            goto label_2ac9b0;
        }
    }
    ctx->pc = 0x2AC9A8u;
label_2ac9a8:
    // 0x2ac9a8: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x2ac9a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ac9ac:
    // 0x2ac9ac: 0x0  nop
    ctx->pc = 0x2ac9acu;
    // NOP
label_2ac9b0:
    // 0x2ac9b0: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x2ac9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_2ac9b4:
    // 0x2ac9b4: 0x203082b  sltu        $at, $s0, $v1
    ctx->pc = 0x2ac9b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2ac9b8:
    // 0x2ac9b8: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_2ac9bc:
    if (ctx->pc == 0x2AC9BCu) {
        ctx->pc = 0x2AC9BCu;
            // 0x2ac9bc: 0x8e750000  lw          $s5, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x2AC9C0u;
        goto label_2ac9c0;
    }
    ctx->pc = 0x2AC9B8u;
    {
        const bool branch_taken_0x2ac9b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC9B8u;
            // 0x2ac9bc: 0x8e750000  lw          $s5, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac9b8) {
            ctx->pc = 0x2AC9CCu;
            goto label_2ac9cc;
        }
    }
    ctx->pc = 0x2AC9C0u;
label_2ac9c0:
    // 0x2ac9c0: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x2ac9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_2ac9c4:
    // 0x2ac9c4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2ac9c8:
    if (ctx->pc == 0x2AC9C8u) {
        ctx->pc = 0x2AC9C8u;
            // 0x2ac9c8: 0x24631090  addiu       $v1, $v1, 0x1090 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4240));
        ctx->pc = 0x2AC9CCu;
        goto label_2ac9cc;
    }
    ctx->pc = 0x2AC9C4u;
    {
        const bool branch_taken_0x2ac9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC9C4u;
            // 0x2ac9c8: 0x24631090  addiu       $v1, $v1, 0x1090 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac9c4) {
            ctx->pc = 0x2AC9D0u;
            goto label_2ac9d0;
        }
    }
    ctx->pc = 0x2AC9CCu;
label_2ac9cc:
    // 0x2ac9cc: 0x27a3007c  addiu       $v1, $sp, 0x7C
    ctx->pc = 0x2ac9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_2ac9d0:
    // 0x2ac9d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2ac9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2ac9d4:
    // 0x2ac9d4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ac9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2ac9d8:
    // 0x2ac9d8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2ac9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2ac9dc:
    // 0x2ac9dc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ac9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2ac9e0:
    // 0x2ac9e0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2ac9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2ac9e4:
    // 0x2ac9e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ac9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2ac9e8:
    // 0x2ac9e8: 0x1000ffd1  b           . + 4 + (-0x2F << 2)
label_2ac9ec:
    if (ctx->pc == 0x2AC9ECu) {
        ctx->pc = 0x2AC9ECu;
            // 0x2ac9ec: 0x2a3a021  addu        $s4, $s5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
        ctx->pc = 0x2AC9F0u;
        goto label_2ac9f0;
    }
    ctx->pc = 0x2AC9E8u;
    {
        const bool branch_taken_0x2ac9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC9E8u;
            // 0x2ac9ec: 0x2a3a021  addu        $s4, $s5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac9e8) {
            ctx->pc = 0x2AC930u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ac930;
        }
    }
    ctx->pc = 0x2AC9F0u;
label_2ac9f0:
    // 0x2ac9f0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2ac9f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2ac9f4:
    // 0x2ac9f4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2ac9f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2ac9f8:
    // 0x2ac9f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ac9f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ac9fc:
    // 0x2ac9fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ac9fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2aca00:
    // 0x2aca00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2aca00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2aca04:
    // 0x2aca04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2aca04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2aca08:
    // 0x2aca08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2aca08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2aca0c:
    // 0x2aca0c: 0x3e00008  jr          $ra
label_2aca10:
    if (ctx->pc == 0x2ACA10u) {
        ctx->pc = 0x2ACA10u;
            // 0x2aca10: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2ACA14u;
        goto label_2aca14;
    }
    ctx->pc = 0x2ACA0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACA0Cu;
            // 0x2aca10: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ACA14u;
label_2aca14:
    // 0x2aca14: 0x0  nop
    ctx->pc = 0x2aca14u;
    // NOP
label_2aca18:
    // 0x2aca18: 0x0  nop
    ctx->pc = 0x2aca18u;
    // NOP
label_2aca1c:
    // 0x2aca1c: 0x0  nop
    ctx->pc = 0x2aca1cu;
    // NOP
}
