#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003EE650
// Address: 0x3ee650 - 0x3eea40
void sub_003EE650_0x3ee650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EE650_0x3ee650");
#endif

    switch (ctx->pc) {
        case 0x3ee650u: goto label_3ee650;
        case 0x3ee654u: goto label_3ee654;
        case 0x3ee658u: goto label_3ee658;
        case 0x3ee65cu: goto label_3ee65c;
        case 0x3ee660u: goto label_3ee660;
        case 0x3ee664u: goto label_3ee664;
        case 0x3ee668u: goto label_3ee668;
        case 0x3ee66cu: goto label_3ee66c;
        case 0x3ee670u: goto label_3ee670;
        case 0x3ee674u: goto label_3ee674;
        case 0x3ee678u: goto label_3ee678;
        case 0x3ee67cu: goto label_3ee67c;
        case 0x3ee680u: goto label_3ee680;
        case 0x3ee684u: goto label_3ee684;
        case 0x3ee688u: goto label_3ee688;
        case 0x3ee68cu: goto label_3ee68c;
        case 0x3ee690u: goto label_3ee690;
        case 0x3ee694u: goto label_3ee694;
        case 0x3ee698u: goto label_3ee698;
        case 0x3ee69cu: goto label_3ee69c;
        case 0x3ee6a0u: goto label_3ee6a0;
        case 0x3ee6a4u: goto label_3ee6a4;
        case 0x3ee6a8u: goto label_3ee6a8;
        case 0x3ee6acu: goto label_3ee6ac;
        case 0x3ee6b0u: goto label_3ee6b0;
        case 0x3ee6b4u: goto label_3ee6b4;
        case 0x3ee6b8u: goto label_3ee6b8;
        case 0x3ee6bcu: goto label_3ee6bc;
        case 0x3ee6c0u: goto label_3ee6c0;
        case 0x3ee6c4u: goto label_3ee6c4;
        case 0x3ee6c8u: goto label_3ee6c8;
        case 0x3ee6ccu: goto label_3ee6cc;
        case 0x3ee6d0u: goto label_3ee6d0;
        case 0x3ee6d4u: goto label_3ee6d4;
        case 0x3ee6d8u: goto label_3ee6d8;
        case 0x3ee6dcu: goto label_3ee6dc;
        case 0x3ee6e0u: goto label_3ee6e0;
        case 0x3ee6e4u: goto label_3ee6e4;
        case 0x3ee6e8u: goto label_3ee6e8;
        case 0x3ee6ecu: goto label_3ee6ec;
        case 0x3ee6f0u: goto label_3ee6f0;
        case 0x3ee6f4u: goto label_3ee6f4;
        case 0x3ee6f8u: goto label_3ee6f8;
        case 0x3ee6fcu: goto label_3ee6fc;
        case 0x3ee700u: goto label_3ee700;
        case 0x3ee704u: goto label_3ee704;
        case 0x3ee708u: goto label_3ee708;
        case 0x3ee70cu: goto label_3ee70c;
        case 0x3ee710u: goto label_3ee710;
        case 0x3ee714u: goto label_3ee714;
        case 0x3ee718u: goto label_3ee718;
        case 0x3ee71cu: goto label_3ee71c;
        case 0x3ee720u: goto label_3ee720;
        case 0x3ee724u: goto label_3ee724;
        case 0x3ee728u: goto label_3ee728;
        case 0x3ee72cu: goto label_3ee72c;
        case 0x3ee730u: goto label_3ee730;
        case 0x3ee734u: goto label_3ee734;
        case 0x3ee738u: goto label_3ee738;
        case 0x3ee73cu: goto label_3ee73c;
        case 0x3ee740u: goto label_3ee740;
        case 0x3ee744u: goto label_3ee744;
        case 0x3ee748u: goto label_3ee748;
        case 0x3ee74cu: goto label_3ee74c;
        case 0x3ee750u: goto label_3ee750;
        case 0x3ee754u: goto label_3ee754;
        case 0x3ee758u: goto label_3ee758;
        case 0x3ee75cu: goto label_3ee75c;
        case 0x3ee760u: goto label_3ee760;
        case 0x3ee764u: goto label_3ee764;
        case 0x3ee768u: goto label_3ee768;
        case 0x3ee76cu: goto label_3ee76c;
        case 0x3ee770u: goto label_3ee770;
        case 0x3ee774u: goto label_3ee774;
        case 0x3ee778u: goto label_3ee778;
        case 0x3ee77cu: goto label_3ee77c;
        case 0x3ee780u: goto label_3ee780;
        case 0x3ee784u: goto label_3ee784;
        case 0x3ee788u: goto label_3ee788;
        case 0x3ee78cu: goto label_3ee78c;
        case 0x3ee790u: goto label_3ee790;
        case 0x3ee794u: goto label_3ee794;
        case 0x3ee798u: goto label_3ee798;
        case 0x3ee79cu: goto label_3ee79c;
        case 0x3ee7a0u: goto label_3ee7a0;
        case 0x3ee7a4u: goto label_3ee7a4;
        case 0x3ee7a8u: goto label_3ee7a8;
        case 0x3ee7acu: goto label_3ee7ac;
        case 0x3ee7b0u: goto label_3ee7b0;
        case 0x3ee7b4u: goto label_3ee7b4;
        case 0x3ee7b8u: goto label_3ee7b8;
        case 0x3ee7bcu: goto label_3ee7bc;
        case 0x3ee7c0u: goto label_3ee7c0;
        case 0x3ee7c4u: goto label_3ee7c4;
        case 0x3ee7c8u: goto label_3ee7c8;
        case 0x3ee7ccu: goto label_3ee7cc;
        case 0x3ee7d0u: goto label_3ee7d0;
        case 0x3ee7d4u: goto label_3ee7d4;
        case 0x3ee7d8u: goto label_3ee7d8;
        case 0x3ee7dcu: goto label_3ee7dc;
        case 0x3ee7e0u: goto label_3ee7e0;
        case 0x3ee7e4u: goto label_3ee7e4;
        case 0x3ee7e8u: goto label_3ee7e8;
        case 0x3ee7ecu: goto label_3ee7ec;
        case 0x3ee7f0u: goto label_3ee7f0;
        case 0x3ee7f4u: goto label_3ee7f4;
        case 0x3ee7f8u: goto label_3ee7f8;
        case 0x3ee7fcu: goto label_3ee7fc;
        case 0x3ee800u: goto label_3ee800;
        case 0x3ee804u: goto label_3ee804;
        case 0x3ee808u: goto label_3ee808;
        case 0x3ee80cu: goto label_3ee80c;
        case 0x3ee810u: goto label_3ee810;
        case 0x3ee814u: goto label_3ee814;
        case 0x3ee818u: goto label_3ee818;
        case 0x3ee81cu: goto label_3ee81c;
        case 0x3ee820u: goto label_3ee820;
        case 0x3ee824u: goto label_3ee824;
        case 0x3ee828u: goto label_3ee828;
        case 0x3ee82cu: goto label_3ee82c;
        case 0x3ee830u: goto label_3ee830;
        case 0x3ee834u: goto label_3ee834;
        case 0x3ee838u: goto label_3ee838;
        case 0x3ee83cu: goto label_3ee83c;
        case 0x3ee840u: goto label_3ee840;
        case 0x3ee844u: goto label_3ee844;
        case 0x3ee848u: goto label_3ee848;
        case 0x3ee84cu: goto label_3ee84c;
        case 0x3ee850u: goto label_3ee850;
        case 0x3ee854u: goto label_3ee854;
        case 0x3ee858u: goto label_3ee858;
        case 0x3ee85cu: goto label_3ee85c;
        case 0x3ee860u: goto label_3ee860;
        case 0x3ee864u: goto label_3ee864;
        case 0x3ee868u: goto label_3ee868;
        case 0x3ee86cu: goto label_3ee86c;
        case 0x3ee870u: goto label_3ee870;
        case 0x3ee874u: goto label_3ee874;
        case 0x3ee878u: goto label_3ee878;
        case 0x3ee87cu: goto label_3ee87c;
        case 0x3ee880u: goto label_3ee880;
        case 0x3ee884u: goto label_3ee884;
        case 0x3ee888u: goto label_3ee888;
        case 0x3ee88cu: goto label_3ee88c;
        case 0x3ee890u: goto label_3ee890;
        case 0x3ee894u: goto label_3ee894;
        case 0x3ee898u: goto label_3ee898;
        case 0x3ee89cu: goto label_3ee89c;
        case 0x3ee8a0u: goto label_3ee8a0;
        case 0x3ee8a4u: goto label_3ee8a4;
        case 0x3ee8a8u: goto label_3ee8a8;
        case 0x3ee8acu: goto label_3ee8ac;
        case 0x3ee8b0u: goto label_3ee8b0;
        case 0x3ee8b4u: goto label_3ee8b4;
        case 0x3ee8b8u: goto label_3ee8b8;
        case 0x3ee8bcu: goto label_3ee8bc;
        case 0x3ee8c0u: goto label_3ee8c0;
        case 0x3ee8c4u: goto label_3ee8c4;
        case 0x3ee8c8u: goto label_3ee8c8;
        case 0x3ee8ccu: goto label_3ee8cc;
        case 0x3ee8d0u: goto label_3ee8d0;
        case 0x3ee8d4u: goto label_3ee8d4;
        case 0x3ee8d8u: goto label_3ee8d8;
        case 0x3ee8dcu: goto label_3ee8dc;
        case 0x3ee8e0u: goto label_3ee8e0;
        case 0x3ee8e4u: goto label_3ee8e4;
        case 0x3ee8e8u: goto label_3ee8e8;
        case 0x3ee8ecu: goto label_3ee8ec;
        case 0x3ee8f0u: goto label_3ee8f0;
        case 0x3ee8f4u: goto label_3ee8f4;
        case 0x3ee8f8u: goto label_3ee8f8;
        case 0x3ee8fcu: goto label_3ee8fc;
        case 0x3ee900u: goto label_3ee900;
        case 0x3ee904u: goto label_3ee904;
        case 0x3ee908u: goto label_3ee908;
        case 0x3ee90cu: goto label_3ee90c;
        case 0x3ee910u: goto label_3ee910;
        case 0x3ee914u: goto label_3ee914;
        case 0x3ee918u: goto label_3ee918;
        case 0x3ee91cu: goto label_3ee91c;
        case 0x3ee920u: goto label_3ee920;
        case 0x3ee924u: goto label_3ee924;
        case 0x3ee928u: goto label_3ee928;
        case 0x3ee92cu: goto label_3ee92c;
        case 0x3ee930u: goto label_3ee930;
        case 0x3ee934u: goto label_3ee934;
        case 0x3ee938u: goto label_3ee938;
        case 0x3ee93cu: goto label_3ee93c;
        case 0x3ee940u: goto label_3ee940;
        case 0x3ee944u: goto label_3ee944;
        case 0x3ee948u: goto label_3ee948;
        case 0x3ee94cu: goto label_3ee94c;
        case 0x3ee950u: goto label_3ee950;
        case 0x3ee954u: goto label_3ee954;
        case 0x3ee958u: goto label_3ee958;
        case 0x3ee95cu: goto label_3ee95c;
        case 0x3ee960u: goto label_3ee960;
        case 0x3ee964u: goto label_3ee964;
        case 0x3ee968u: goto label_3ee968;
        case 0x3ee96cu: goto label_3ee96c;
        case 0x3ee970u: goto label_3ee970;
        case 0x3ee974u: goto label_3ee974;
        case 0x3ee978u: goto label_3ee978;
        case 0x3ee97cu: goto label_3ee97c;
        case 0x3ee980u: goto label_3ee980;
        case 0x3ee984u: goto label_3ee984;
        case 0x3ee988u: goto label_3ee988;
        case 0x3ee98cu: goto label_3ee98c;
        case 0x3ee990u: goto label_3ee990;
        case 0x3ee994u: goto label_3ee994;
        case 0x3ee998u: goto label_3ee998;
        case 0x3ee99cu: goto label_3ee99c;
        case 0x3ee9a0u: goto label_3ee9a0;
        case 0x3ee9a4u: goto label_3ee9a4;
        case 0x3ee9a8u: goto label_3ee9a8;
        case 0x3ee9acu: goto label_3ee9ac;
        case 0x3ee9b0u: goto label_3ee9b0;
        case 0x3ee9b4u: goto label_3ee9b4;
        case 0x3ee9b8u: goto label_3ee9b8;
        case 0x3ee9bcu: goto label_3ee9bc;
        case 0x3ee9c0u: goto label_3ee9c0;
        case 0x3ee9c4u: goto label_3ee9c4;
        case 0x3ee9c8u: goto label_3ee9c8;
        case 0x3ee9ccu: goto label_3ee9cc;
        case 0x3ee9d0u: goto label_3ee9d0;
        case 0x3ee9d4u: goto label_3ee9d4;
        case 0x3ee9d8u: goto label_3ee9d8;
        case 0x3ee9dcu: goto label_3ee9dc;
        case 0x3ee9e0u: goto label_3ee9e0;
        case 0x3ee9e4u: goto label_3ee9e4;
        case 0x3ee9e8u: goto label_3ee9e8;
        case 0x3ee9ecu: goto label_3ee9ec;
        case 0x3ee9f0u: goto label_3ee9f0;
        case 0x3ee9f4u: goto label_3ee9f4;
        case 0x3ee9f8u: goto label_3ee9f8;
        case 0x3ee9fcu: goto label_3ee9fc;
        case 0x3eea00u: goto label_3eea00;
        case 0x3eea04u: goto label_3eea04;
        case 0x3eea08u: goto label_3eea08;
        case 0x3eea0cu: goto label_3eea0c;
        case 0x3eea10u: goto label_3eea10;
        case 0x3eea14u: goto label_3eea14;
        case 0x3eea18u: goto label_3eea18;
        case 0x3eea1cu: goto label_3eea1c;
        case 0x3eea20u: goto label_3eea20;
        case 0x3eea24u: goto label_3eea24;
        case 0x3eea28u: goto label_3eea28;
        case 0x3eea2cu: goto label_3eea2c;
        case 0x3eea30u: goto label_3eea30;
        case 0x3eea34u: goto label_3eea34;
        case 0x3eea38u: goto label_3eea38;
        case 0x3eea3cu: goto label_3eea3c;
        default: break;
    }

    ctx->pc = 0x3ee650u;

label_3ee650:
    // 0x3ee650: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3ee650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3ee654:
    // 0x3ee654: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3ee654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3ee658:
    // 0x3ee658: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3ee658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3ee65c:
    // 0x3ee65c: 0x240500b0  addiu       $a1, $zero, 0xB0
    ctx->pc = 0x3ee65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_3ee660:
    // 0x3ee660: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3ee660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3ee664:
    // 0x3ee664: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x3ee664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3ee668:
    // 0x3ee668: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ee668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3ee66c:
    // 0x3ee66c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ee66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3ee670:
    // 0x3ee670: 0x8c9102d8  lw          $s1, 0x2D8($a0)
    ctx->pc = 0x3ee670u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 728)));
label_3ee674:
    // 0x3ee674: 0x8c5289f0  lw          $s2, -0x7610($v0)
    ctx->pc = 0x3ee674u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_3ee678:
    // 0x3ee678: 0xc05750c  jal         func_15D430
label_3ee67c:
    if (ctx->pc == 0x3EE67Cu) {
        ctx->pc = 0x3EE67Cu;
            // 0x3ee67c: 0x3c047000  lui         $a0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
        ctx->pc = 0x3EE680u;
        goto label_3ee680;
    }
    ctx->pc = 0x3EE678u;
    SET_GPR_U32(ctx, 31, 0x3EE680u);
    ctx->pc = 0x3EE67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE678u;
            // 0x3ee67c: 0x3c047000  lui         $a0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D430u;
    if (runtime->hasFunction(0x15D430u)) {
        auto targetFn = runtime->lookupFunction(0x15D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EE680u; }
        if (ctx->pc != 0x3EE680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D430_0x15d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EE680u; }
        if (ctx->pc != 0x3EE680u) { return; }
    }
    ctx->pc = 0x3EE680u;
label_3ee680:
    // 0x3ee680: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ee680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ee684:
    // 0x3ee684: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x3ee684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3ee688:
    // 0x3ee688: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3ee688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3ee68c:
    // 0x3ee68c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3ee690:
    if (ctx->pc == 0x3EE690u) {
        ctx->pc = 0x3EE690u;
            // 0x3ee690: 0xde260000  ld          $a2, 0x0($s1) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x3EE694u;
        goto label_3ee694;
    }
    ctx->pc = 0x3EE68Cu;
    {
        const bool branch_taken_0x3ee68c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE68Cu;
            // 0x3ee690: 0xde260000  ld          $a2, 0x0($s1) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee68c) {
            ctx->pc = 0x3EE6A8u;
            goto label_3ee6a8;
        }
    }
    ctx->pc = 0x3EE694u;
label_3ee694:
    // 0x3ee694: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3ee694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3ee698:
    // 0x3ee698: 0x9442eb70  lhu         $v0, -0x1490($v0)
    ctx->pc = 0x3ee698u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962032)));
label_3ee69c:
    // 0x3ee69c: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x3ee69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_3ee6a0:
    // 0x3ee6a0: 0x10000005  b           . + 4 + (0x5 << 2)
label_3ee6a4:
    if (ctx->pc == 0x3EE6A4u) {
        ctx->pc = 0x3EE6A4u;
            // 0x3ee6a4: 0x21340  sll         $v0, $v0, 13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
        ctx->pc = 0x3EE6A8u;
        goto label_3ee6a8;
    }
    ctx->pc = 0x3EE6A0u;
    {
        const bool branch_taken_0x3ee6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE6A0u;
            // 0x3ee6a4: 0x21340  sll         $v0, $v0, 13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee6a0) {
            ctx->pc = 0x3EE6B8u;
            goto label_3ee6b8;
        }
    }
    ctx->pc = 0x3EE6A8u;
label_3ee6a8:
    // 0x3ee6a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3ee6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3ee6ac:
    // 0x3ee6ac: 0x9442ece0  lhu         $v0, -0x1320($v0)
    ctx->pc = 0x3ee6acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962400)));
label_3ee6b0:
    // 0x3ee6b0: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x3ee6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_3ee6b4:
    // 0x3ee6b4: 0x21340  sll         $v0, $v0, 13
    ctx->pc = 0x3ee6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
label_3ee6b8:
    // 0x3ee6b8: 0x21b42  srl         $v1, $v0, 13
    ctx->pc = 0x3ee6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
label_3ee6bc:
    // 0x3ee6bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ee6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ee6c0:
    // 0x3ee6c0: 0xde220008  ld          $v0, 0x8($s1)
    ctx->pc = 0x3ee6c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 8)));
label_3ee6c4:
    // 0x3ee6c4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3ee6c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_3ee6c8:
    // 0x3ee6c8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3ee6c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_3ee6cc:
    // 0x3ee6cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ee6ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ee6d0:
    // 0x3ee6d0: 0xc057540  jal         func_15D500
label_3ee6d4:
    if (ctx->pc == 0x3EE6D4u) {
        ctx->pc = 0x3EE6D4u;
            // 0x3ee6d4: 0x433825  or          $a3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->pc = 0x3EE6D8u;
        goto label_3ee6d8;
    }
    ctx->pc = 0x3EE6D0u;
    SET_GPR_U32(ctx, 31, 0x3EE6D8u);
    ctx->pc = 0x3EE6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE6D0u;
            // 0x3ee6d4: 0x433825  or          $a3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EE6D8u; }
        if (ctx->pc != 0x3EE6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EE6D8u; }
        if (ctx->pc != 0x3EE6D8u) { return; }
    }
    ctx->pc = 0x3EE6D8u;
label_3ee6d8:
    // 0x3ee6d8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3ee6d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ee6dc:
    // 0x3ee6dc: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x3ee6dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3ee6e0:
    // 0x3ee6e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ee6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ee6e4:
    // 0x3ee6e4: 0xde260000  ld          $a2, 0x0($s1)
    ctx->pc = 0x3ee6e4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_3ee6e8:
    // 0x3ee6e8: 0xde270008  ld          $a3, 0x8($s1)
    ctx->pc = 0x3ee6e8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 17), 8)));
label_3ee6ec:
    // 0x3ee6ec: 0xc057540  jal         func_15D500
label_3ee6f0:
    if (ctx->pc == 0x3EE6F0u) {
        ctx->pc = 0x3EE6F0u;
            // 0x3ee6f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EE6F4u;
        goto label_3ee6f4;
    }
    ctx->pc = 0x3EE6ECu;
    SET_GPR_U32(ctx, 31, 0x3EE6F4u);
    ctx->pc = 0x3EE6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE6ECu;
            // 0x3ee6f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EE6F4u; }
        if (ctx->pc != 0x3EE6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EE6F4u; }
        if (ctx->pc != 0x3EE6F4u) { return; }
    }
    ctx->pc = 0x3EE6F4u;
label_3ee6f4:
    // 0x3ee6f4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3ee6f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3ee6f8:
    // 0x3ee6f8: 0x2e42000a  sltiu       $v0, $s2, 0xA
    ctx->pc = 0x3ee6f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_3ee6fc:
    // 0x3ee6fc: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_3ee700:
    if (ctx->pc == 0x3EE700u) {
        ctx->pc = 0x3EE700u;
            // 0x3ee700: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x3EE704u;
        goto label_3ee704;
    }
    ctx->pc = 0x3EE6FCu;
    {
        const bool branch_taken_0x3ee6fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ee6fc) {
            ctx->pc = 0x3EE700u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE6FCu;
            // 0x3ee700: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EE6E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ee6e0;
        }
    }
    ctx->pc = 0x3EE704u;
label_3ee704:
    // 0x3ee704: 0xc057528  jal         func_15D4A0
label_3ee708:
    if (ctx->pc == 0x3EE708u) {
        ctx->pc = 0x3EE708u;
            // 0x3ee708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EE70Cu;
        goto label_3ee70c;
    }
    ctx->pc = 0x3EE704u;
    SET_GPR_U32(ctx, 31, 0x3EE70Cu);
    ctx->pc = 0x3EE708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE704u;
            // 0x3ee708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D4A0u;
    if (runtime->hasFunction(0x15D4A0u)) {
        auto targetFn = runtime->lookupFunction(0x15D4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EE70Cu; }
        if (ctx->pc != 0x3EE70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D4A0_0x15d4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EE70Cu; }
        if (ctx->pc != 0x3EE70Cu) { return; }
    }
    ctx->pc = 0x3EE70Cu;
label_3ee70c:
    // 0x3ee70c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3ee70cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3ee710:
    // 0x3ee710: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3ee710u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ee714:
    // 0x3ee714: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ee714u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ee718:
    // 0x3ee718: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ee718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ee71c:
    // 0x3ee71c: 0x3e00008  jr          $ra
label_3ee720:
    if (ctx->pc == 0x3EE720u) {
        ctx->pc = 0x3EE720u;
            // 0x3ee720: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3EE724u;
        goto label_3ee724;
    }
    ctx->pc = 0x3EE71Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EE720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE71Cu;
            // 0x3ee720: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3EE724u;
label_3ee724:
    // 0x3ee724: 0x0  nop
    ctx->pc = 0x3ee724u;
    // NOP
label_3ee728:
    // 0x3ee728: 0x0  nop
    ctx->pc = 0x3ee728u;
    // NOP
label_3ee72c:
    // 0x3ee72c: 0x0  nop
    ctx->pc = 0x3ee72cu;
    // NOP
label_3ee730:
    // 0x3ee730: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x3ee730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_3ee734:
    // 0x3ee734: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x3ee734u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ee738:
    // 0x3ee738: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3ee738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_3ee73c:
    // 0x3ee73c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x3ee73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_3ee740:
    // 0x3ee740: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3ee740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_3ee744:
    // 0x3ee744: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3ee744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3ee748:
    // 0x3ee748: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3ee748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3ee74c:
    // 0x3ee74c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3ee74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3ee750:
    // 0x3ee750: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3ee750u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ee754:
    // 0x3ee754: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3ee754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3ee758:
    // 0x3ee758: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3ee758u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3ee75c:
    // 0x3ee75c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3ee75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3ee760:
    // 0x3ee760: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x3ee760u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_3ee764:
    // 0x3ee764: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3ee764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3ee768:
    // 0x3ee768: 0x24130020  addiu       $s3, $zero, 0x20
    ctx->pc = 0x3ee768u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3ee76c:
    // 0x3ee76c: 0xafa5012c  sw          $a1, 0x12C($sp)
    ctx->pc = 0x3ee76cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 5));
label_3ee770:
    // 0x3ee770: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3ee770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3ee774:
    // 0x3ee774: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x3ee774u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3ee778:
    // 0x3ee778: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3ee778u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3ee77c:
    // 0x3ee77c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3ee77cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3ee780:
    // 0x3ee780: 0x8c668a08  lw          $a2, -0x75F8($v1)
    ctx->pc = 0x3ee780u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3ee784:
    // 0x3ee784: 0xa3a8012b  sb          $t0, 0x12B($sp)
    ctx->pc = 0x3ee784u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 299), (uint8_t)GPR_U32(ctx, 8));
label_3ee788:
    // 0x3ee788: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ee788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ee78c:
    // 0x3ee78c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3ee78cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3ee790:
    // 0x3ee790: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x3ee790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
label_3ee794:
    // 0x3ee794: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x3ee794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ee798:
    // 0x3ee798: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3ee798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3ee79c:
    // 0x3ee79c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x3ee79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3ee7a0:
    // 0x3ee7a0: 0x24630e80  addiu       $v1, $v1, 0xE80
    ctx->pc = 0x3ee7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3712));
label_3ee7a4:
    // 0x3ee7a4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3ee7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3ee7a8:
    // 0x3ee7a8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3ee7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3ee7ac:
    // 0x3ee7ac: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3ee7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3ee7b0:
    // 0x3ee7b0: 0x8ca70050  lw          $a3, 0x50($a1)
    ctx->pc = 0x3ee7b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_3ee7b4:
    // 0x3ee7b4: 0x46006502  mul.s       $f20, $f12, $f0
    ctx->pc = 0x3ee7b4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_3ee7b8:
    // 0x3ee7b8: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x3ee7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
label_3ee7bc:
    // 0x3ee7bc: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x3ee7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3ee7c0:
    // 0x3ee7c0: 0x80c5007a  lb          $a1, 0x7A($a2)
    ctx->pc = 0x3ee7c0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 122)));
label_3ee7c4:
    // 0x3ee7c4: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x3ee7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
label_3ee7c8:
    // 0x3ee7c8: 0x2ca30003  sltiu       $v1, $a1, 0x3
    ctx->pc = 0x3ee7c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_3ee7cc:
    // 0x3ee7cc: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x3ee7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_3ee7d0:
    // 0x3ee7d0: 0x38650001  xori        $a1, $v1, 0x1
    ctx->pc = 0x3ee7d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_3ee7d4:
    // 0x3ee7d4: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x3ee7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_3ee7d8:
    // 0x3ee7d8: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x3ee7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
label_3ee7dc:
    // 0x3ee7dc: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x3ee7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_3ee7e0:
    // 0x3ee7e0: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x3ee7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
label_3ee7e4:
    // 0x3ee7e4: 0x64b806  srlv        $s7, $a0, $v1
    ctx->pc = 0x3ee7e4u;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_3ee7e8:
    // 0x3ee7e8: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x3ee7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3ee7ec:
    // 0x3ee7ec: 0x8ce5000c  lw          $a1, 0xC($a3)
    ctx->pc = 0x3ee7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_3ee7f0:
    // 0x3ee7f0: 0x7fa300f0  sq          $v1, 0xF0($sp)
    ctx->pc = 0x3ee7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 3));
label_3ee7f4:
    // 0x3ee7f4: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x3ee7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3ee7f8:
    // 0x3ee7f8: 0x7fa300e0  sq          $v1, 0xE0($sp)
    ctx->pc = 0x3ee7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
label_3ee7fc:
    // 0x3ee7fc: 0x92a502d4  lbu         $a1, 0x2D4($s5)
    ctx->pc = 0x3ee7fcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 724)));
label_3ee800:
    // 0x3ee800: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3ee800u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ee804:
    // 0x3ee804: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x3ee804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3ee808:
    // 0x3ee808: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3ee808u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3ee80c:
    // 0x3ee80c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3ee80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3ee810:
    // 0x3ee810: 0xa2a402d4  sb          $a0, 0x2D4($s5)
    ctx->pc = 0x3ee810u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 724), (uint8_t)GPR_U32(ctx, 4));
label_3ee814:
    // 0x3ee814: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x3ee814u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3ee818:
    // 0x3ee818: 0x92a302d4  lbu         $v1, 0x2D4($s5)
    ctx->pc = 0x3ee818u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 724)));
label_3ee81c:
    // 0x3ee81c: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x3ee81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_3ee820:
    // 0x3ee820: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x3ee820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_3ee824:
    // 0x3ee824: 0xa2a302d4  sb          $v1, 0x2D4($s5)
    ctx->pc = 0x3ee824u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 724), (uint8_t)GPR_U32(ctx, 3));
label_3ee828:
    // 0x3ee828: 0xc4810054  lwc1        $f1, 0x54($a0)
    ctx->pc = 0x3ee828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ee82c:
    // 0x3ee82c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3ee82cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ee830:
    // 0x3ee830: 0x45000067  bc1f        . + 4 + (0x67 << 2)
label_3ee834:
    if (ctx->pc == 0x3EE834u) {
        ctx->pc = 0x3EE834u;
            // 0x3ee834: 0x24910054  addiu       $s1, $a0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 84));
        ctx->pc = 0x3EE838u;
        goto label_3ee838;
    }
    ctx->pc = 0x3EE830u;
    {
        const bool branch_taken_0x3ee830 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3EE834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE830u;
            // 0x3ee834: 0x24910054  addiu       $s1, $a0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee830) {
            ctx->pc = 0x3EE9D0u;
            goto label_3ee9d0;
        }
    }
    ctx->pc = 0x3EE838u;
label_3ee838:
    // 0x3ee838: 0x8fa3012c  lw          $v1, 0x12C($sp)
    ctx->pc = 0x3ee838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_3ee83c:
    // 0x3ee83c: 0xe6340000  swc1        $f20, 0x0($s1)
    ctx->pc = 0x3ee83cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_3ee840:
    // 0x3ee840: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x3ee840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
label_3ee844:
    // 0x3ee844: 0xa223000b  sb          $v1, 0xB($s1)
    ctx->pc = 0x3ee844u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11), (uint8_t)GPR_U32(ctx, 3));
label_3ee848:
    // 0x3ee848: 0x93a3012b  lbu         $v1, 0x12B($sp)
    ctx->pc = 0x3ee848u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 299)));
label_3ee84c:
    // 0x3ee84c: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
label_3ee850:
    if (ctx->pc == 0x3EE850u) {
        ctx->pc = 0x3EE850u;
            // 0x3ee850: 0xae24000c  sw          $a0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
        ctx->pc = 0x3EE854u;
        goto label_3ee854;
    }
    ctx->pc = 0x3EE84Cu;
    {
        const bool branch_taken_0x3ee84c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE84Cu;
            // 0x3ee850: 0xae24000c  sw          $a0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee84c) {
            ctx->pc = 0x3EE8F8u;
            goto label_3ee8f8;
        }
    }
    ctx->pc = 0x3EE854u;
label_3ee854:
    // 0x3ee854: 0xa2370008  sb          $s7, 0x8($s1)
    ctx->pc = 0x3ee854u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 23));
label_3ee858:
    // 0x3ee858: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3ee858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ee85c:
    // 0x3ee85c: 0x92230008  lbu         $v1, 0x8($s1)
    ctx->pc = 0x3ee85cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
label_3ee860:
    // 0x3ee860: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x3ee860u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_3ee864:
    // 0x3ee864: 0xa2230009  sb          $v1, 0x9($s1)
    ctx->pc = 0x3ee864u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 9), (uint8_t)GPR_U32(ctx, 3));
label_3ee868:
    // 0x3ee868: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x3ee868u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3ee86c:
    // 0x3ee86c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x3ee86cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3ee870:
    // 0x3ee870: 0x80a311ad  lb          $v1, 0x11AD($a1)
    ctx->pc = 0x3ee870u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 4525)));
label_3ee874:
    // 0x3ee874: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
label_3ee878:
    if (ctx->pc == 0x3EE878u) {
        ctx->pc = 0x3EE878u;
            // 0x3ee878: 0x32f200ff  andi        $s2, $s7, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3EE87Cu;
        goto label_3ee87c;
    }
    ctx->pc = 0x3EE874u;
    {
        const bool branch_taken_0x3ee874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x3EE878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE874u;
            // 0x3ee878: 0x32f200ff  andi        $s2, $s7, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee874) {
            ctx->pc = 0x3EE890u;
            goto label_3ee890;
        }
    }
    ctx->pc = 0x3EE87Cu;
label_3ee87c:
    // 0x3ee87c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x3ee87cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3ee880:
    // 0x3ee880: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3ee880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3ee884:
    // 0x3ee884: 0x24630e80  addiu       $v1, $v1, 0xE80
    ctx->pc = 0x3ee884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3712));
label_3ee888:
    // 0x3ee888: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3ee888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3ee88c:
    // 0x3ee88c: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x3ee88cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3ee890:
    // 0x3ee890: 0x24a602c0  addiu       $a2, $a1, 0x2C0
    ctx->pc = 0x3ee890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 704));
label_3ee894:
    // 0x3ee894: 0x10c00048  beqz        $a2, . + 4 + (0x48 << 2)
label_3ee898:
    if (ctx->pc == 0x3EE898u) {
        ctx->pc = 0x3EE898u;
            // 0x3ee898: 0xae260010  sw          $a2, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 6));
        ctx->pc = 0x3EE89Cu;
        goto label_3ee89c;
    }
    ctx->pc = 0x3EE894u;
    {
        const bool branch_taken_0x3ee894 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE894u;
            // 0x3ee898: 0xae260010  sw          $a2, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee894) {
            ctx->pc = 0x3EE9B8u;
            goto label_3ee9b8;
        }
    }
    ctx->pc = 0x3EE89Cu;
label_3ee89c:
    // 0x3ee89c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3ee89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3ee8a0:
    // 0x3ee8a0: 0x9223000b  lbu         $v1, 0xB($s1)
    ctx->pc = 0x3ee8a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11)));
label_3ee8a4:
    // 0x3ee8a4: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x3ee8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_3ee8a8:
    // 0x3ee8a8: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3ee8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_3ee8ac:
    // 0x3ee8ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3ee8acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3ee8b0:
    // 0x3ee8b0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3ee8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3ee8b4:
    // 0x3ee8b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ee8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3ee8b8:
    // 0x3ee8b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3ee8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ee8bc:
    // 0x3ee8bc: 0xc075094  jal         func_1D4250
label_3ee8c0:
    if (ctx->pc == 0x3EE8C0u) {
        ctx->pc = 0x3EE8C0u;
            // 0x3ee8c0: 0x24450150  addiu       $a1, $v0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
        ctx->pc = 0x3EE8C4u;
        goto label_3ee8c4;
    }
    ctx->pc = 0x3EE8BCu;
    SET_GPR_U32(ctx, 31, 0x3EE8C4u);
    ctx->pc = 0x3EE8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE8BCu;
            // 0x3ee8c0: 0x24450150  addiu       $a1, $v0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4250u;
    if (runtime->hasFunction(0x1D4250u)) {
        auto targetFn = runtime->lookupFunction(0x1D4250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EE8C4u; }
        if (ctx->pc != 0x3EE8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4250_0x1d4250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EE8C4u; }
        if (ctx->pc != 0x3EE8C4u) { return; }
    }
    ctx->pc = 0x3EE8C4u;
label_3ee8c4:
    // 0x3ee8c4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3ee8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3ee8c8:
    // 0x3ee8c8: 0x9227000b  lbu         $a3, 0xB($s1)
    ctx->pc = 0x3ee8c8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11)));
label_3ee8cc:
    // 0x3ee8cc: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x3ee8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_3ee8d0:
    // 0x3ee8d0: 0x27a5014c  addiu       $a1, $sp, 0x14C
    ctx->pc = 0x3ee8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
label_3ee8d4:
    // 0x3ee8d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ee8d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ee8d8:
    // 0x3ee8d8: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x3ee8d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_3ee8dc:
    // 0x3ee8dc: 0x320f809  jalr        $t9
label_3ee8e0:
    if (ctx->pc == 0x3EE8E0u) {
        ctx->pc = 0x3EE8E0u;
            // 0x3ee8e0: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x3EE8E4u;
        goto label_3ee8e4;
    }
    ctx->pc = 0x3EE8DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3EE8E4u);
        ctx->pc = 0x3EE8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE8DCu;
            // 0x3ee8e0: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3EE8E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3EE8E4u; }
            if (ctx->pc != 0x3EE8E4u) { return; }
        }
        }
    }
    ctx->pc = 0x3EE8E4u;
label_3ee8e4:
    // 0x3ee8e4: 0x87a3014c  lh          $v1, 0x14C($sp)
    ctx->pc = 0x3ee8e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 332)));
label_3ee8e8:
    // 0x3ee8e8: 0xa6230004  sh          $v1, 0x4($s1)
    ctx->pc = 0x3ee8e8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 3));
label_3ee8ec:
    // 0x3ee8ec: 0x87a3014e  lh          $v1, 0x14E($sp)
    ctx->pc = 0x3ee8ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 334)));
label_3ee8f0:
    // 0x3ee8f0: 0x10000031  b           . + 4 + (0x31 << 2)
label_3ee8f4:
    if (ctx->pc == 0x3EE8F4u) {
        ctx->pc = 0x3EE8F4u;
            // 0x3ee8f4: 0xa6230006  sh          $v1, 0x6($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3EE8F8u;
        goto label_3ee8f8;
    }
    ctx->pc = 0x3EE8F0u;
    {
        const bool branch_taken_0x3ee8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE8F0u;
            // 0x3ee8f4: 0xa6230006  sh          $v1, 0x6($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee8f0) {
            ctx->pc = 0x3EE9B8u;
            goto label_3ee9b8;
        }
    }
    ctx->pc = 0x3EE8F8u;
label_3ee8f8:
    // 0x3ee8f8: 0xc04ab66  jal         func_12AD98
label_3ee8fc:
    if (ctx->pc == 0x3EE8FCu) {
        ctx->pc = 0x3EE900u;
        goto label_3ee900;
    }
    ctx->pc = 0x3EE8F8u;
    SET_GPR_U32(ctx, 31, 0x3EE900u);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EE900u; }
        if (ctx->pc != 0x3EE900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EE900u; }
        if (ctx->pc != 0x3EE900u) { return; }
    }
    ctx->pc = 0x3EE900u;
label_3ee900:
    // 0x3ee900: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3ee900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3ee904:
    // 0x3ee904: 0xc04ab66  jal         func_12AD98
label_3ee908:
    if (ctx->pc == 0x3EE908u) {
        ctx->pc = 0x3EE908u;
            // 0x3ee908: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x3EE90Cu;
        goto label_3ee90c;
    }
    ctx->pc = 0x3EE904u;
    SET_GPR_U32(ctx, 31, 0x3EE90Cu);
    ctx->pc = 0x3EE908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE904u;
            // 0x3ee908: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EE90Cu; }
        if (ctx->pc != 0x3EE90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EE90Cu; }
        if (ctx->pc != 0x3EE90Cu) { return; }
    }
    ctx->pc = 0x3EE90Cu;
label_3ee90c:
    // 0x3ee90c: 0x501825  or          $v1, $v0, $s0
    ctx->pc = 0x3ee90cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_3ee910:
    // 0x3ee910: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x3ee910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3ee914:
    // 0x3ee914: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x3ee914u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_3ee918:
    // 0x3ee918: 0x1010  mfhi        $v0
    ctx->pc = 0x3ee918u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_3ee91c:
    // 0x3ee91c: 0x2443000a  addiu       $v1, $v0, 0xA
    ctx->pc = 0x3ee91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
label_3ee920:
    // 0x3ee920: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x3ee920u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3ee924:
    // 0x3ee924: 0x431006  srlv        $v0, $v1, $v0
    ctx->pc = 0x3ee924u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_3ee928:
    // 0x3ee928: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x3ee928u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3ee92c:
    // 0x3ee92c: 0xa2220008  sb          $v0, 0x8($s1)
    ctx->pc = 0x3ee92cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
label_3ee930:
    // 0x3ee930: 0x92220008  lbu         $v0, 0x8($s1)
    ctx->pc = 0x3ee930u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
label_3ee934:
    // 0x3ee934: 0x128040  sll         $s0, $s2, 1
    ctx->pc = 0x3ee934u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_3ee938:
    // 0x3ee938: 0x12b080  sll         $s6, $s2, 2
    ctx->pc = 0x3ee938u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_3ee93c:
    // 0x3ee93c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3ee93cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_3ee940:
    // 0x3ee940: 0xc04ab66  jal         func_12AD98
label_3ee944:
    if (ctx->pc == 0x3EE944u) {
        ctx->pc = 0x3EE944u;
            // 0x3ee944: 0xa2220009  sb          $v0, 0x9($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 9), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3EE948u;
        goto label_3ee948;
    }
    ctx->pc = 0x3EE940u;
    SET_GPR_U32(ctx, 31, 0x3EE948u);
    ctx->pc = 0x3EE944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE940u;
            // 0x3ee944: 0xa2220009  sb          $v0, 0x9($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 9), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EE948u; }
        if (ctx->pc != 0x3EE948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EE948u; }
        if (ctx->pc != 0x3EE948u) { return; }
    }
    ctx->pc = 0x3EE948u;
label_3ee948:
    // 0x3ee948: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3ee948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3ee94c:
    // 0x3ee94c: 0xc04ab66  jal         func_12AD98
label_3ee950:
    if (ctx->pc == 0x3EE950u) {
        ctx->pc = 0x3EE950u;
            // 0x3ee950: 0x2f740  sll         $fp, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x3EE954u;
        goto label_3ee954;
    }
    ctx->pc = 0x3EE94Cu;
    SET_GPR_U32(ctx, 31, 0x3EE954u);
    ctx->pc = 0x3EE950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE94Cu;
            // 0x3ee950: 0x2f740  sll         $fp, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EE954u; }
        if (ctx->pc != 0x3EE954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EE954u; }
        if (ctx->pc != 0x3EE954u) { return; }
    }
    ctx->pc = 0x3EE954u;
label_3ee954:
    // 0x3ee954: 0x5e1825  or          $v1, $v0, $fp
    ctx->pc = 0x3ee954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
label_3ee958:
    // 0x3ee958: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x3ee958u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3ee95c:
    // 0x3ee95c: 0x561023  subu        $v0, $v0, $s6
    ctx->pc = 0x3ee95cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_3ee960:
    // 0x3ee960: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x3ee960u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_3ee964:
    // 0x3ee964: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x3ee964u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_3ee968:
    // 0x3ee968: 0x0  nop
    ctx->pc = 0x3ee968u;
    // NOP
label_3ee96c:
    // 0x3ee96c: 0x1810  mfhi        $v1
    ctx->pc = 0x3ee96cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_3ee970:
    // 0x3ee970: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ee970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3ee974:
    // 0x3ee974: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3ee974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3ee978:
    // 0x3ee978: 0xc04ab66  jal         func_12AD98
label_3ee97c:
    if (ctx->pc == 0x3EE97Cu) {
        ctx->pc = 0x3EE97Cu;
            // 0x3ee97c: 0xa6220004  sh          $v0, 0x4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3EE980u;
        goto label_3ee980;
    }
    ctx->pc = 0x3EE978u;
    SET_GPR_U32(ctx, 31, 0x3EE980u);
    ctx->pc = 0x3EE97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE978u;
            // 0x3ee97c: 0xa6220004  sh          $v0, 0x4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EE980u; }
        if (ctx->pc != 0x3EE980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EE980u; }
        if (ctx->pc != 0x3EE980u) { return; }
    }
    ctx->pc = 0x3EE980u;
label_3ee980:
    // 0x3ee980: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3ee980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3ee984:
    // 0x3ee984: 0xc04ab66  jal         func_12AD98
label_3ee988:
    if (ctx->pc == 0x3EE988u) {
        ctx->pc = 0x3EE988u;
            // 0x3ee988: 0x2f740  sll         $fp, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x3EE98Cu;
        goto label_3ee98c;
    }
    ctx->pc = 0x3EE984u;
    SET_GPR_U32(ctx, 31, 0x3EE98Cu);
    ctx->pc = 0x3EE988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE984u;
            // 0x3ee988: 0x2f740  sll         $fp, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EE98Cu; }
        if (ctx->pc != 0x3EE98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EE98Cu; }
        if (ctx->pc != 0x3EE98Cu) { return; }
    }
    ctx->pc = 0x3EE98Cu;
label_3ee98c:
    // 0x3ee98c: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x3ee98cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3ee990:
    // 0x3ee990: 0x5e2025  or          $a0, $v0, $fp
    ctx->pc = 0x3ee990u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
label_3ee994:
    // 0x3ee994: 0x761823  subu        $v1, $v1, $s6
    ctx->pc = 0x3ee994u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_3ee998:
    // 0x3ee998: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x3ee998u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_3ee99c:
    // 0x3ee99c: 0x7ba30100  lq          $v1, 0x100($sp)
    ctx->pc = 0x3ee99cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_3ee9a0:
    // 0x3ee9a0: 0x0  nop
    ctx->pc = 0x3ee9a0u;
    // NOP
label_3ee9a4:
    // 0x3ee9a4: 0x2010  mfhi        $a0
    ctx->pc = 0x3ee9a4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_3ee9a8:
    // 0x3ee9a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3ee9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3ee9ac:
    // 0x3ee9ac: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x3ee9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_3ee9b0:
    // 0x3ee9b0: 0xa6230006  sh          $v1, 0x6($s1)
    ctx->pc = 0x3ee9b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 3));
label_3ee9b4:
    // 0x3ee9b4: 0x0  nop
    ctx->pc = 0x3ee9b4u;
    // NOP
label_3ee9b8:
    // 0x3ee9b8: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x3ee9b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3ee9bc:
    // 0x3ee9bc: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3ee9bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_3ee9c0:
    // 0x3ee9c0: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x3ee9c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3ee9c4:
    // 0x3ee9c4: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_3ee9c8:
    if (ctx->pc == 0x3EE9C8u) {
        ctx->pc = 0x3EE9C8u;
            // 0x3ee9c8: 0xa223000a  sb          $v1, 0xA($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 10), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3EE9CCu;
        goto label_3ee9cc;
    }
    ctx->pc = 0x3EE9C4u;
    {
        const bool branch_taken_0x3ee9c4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE9C4u;
            // 0x3ee9c8: 0xa223000a  sb          $v1, 0xA($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 10), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee9c4) {
            ctx->pc = 0x3EE9DCu;
            goto label_3ee9dc;
        }
    }
    ctx->pc = 0x3EE9CCu;
label_3ee9cc:
    // 0x3ee9cc: 0x0  nop
    ctx->pc = 0x3ee9ccu;
    // NOP
label_3ee9d0:
    // 0x3ee9d0: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3ee9d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_3ee9d4:
    // 0x3ee9d4: 0x5660ff8a  bnel        $s3, $zero, . + 4 + (-0x76 << 2)
label_3ee9d8:
    if (ctx->pc == 0x3EE9D8u) {
        ctx->pc = 0x3EE9D8u;
            // 0x3ee9d8: 0x92a502d4  lbu         $a1, 0x2D4($s5) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 724)));
        ctx->pc = 0x3EE9DCu;
        goto label_3ee9dc;
    }
    ctx->pc = 0x3EE9D4u;
    {
        const bool branch_taken_0x3ee9d4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ee9d4) {
            ctx->pc = 0x3EE9D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EE9D4u;
            // 0x3ee9d8: 0x92a502d4  lbu         $a1, 0x2D4($s5) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 724)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EE800u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ee800;
        }
    }
    ctx->pc = 0x3EE9DCu;
label_3ee9dc:
    // 0x3ee9dc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3ee9dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3ee9e0:
    // 0x3ee9e0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3ee9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3ee9e4:
    // 0x3ee9e4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x3ee9e4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3ee9e8:
    // 0x3ee9e8: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3ee9e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3ee9ec:
    // 0x3ee9ec: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3ee9ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3ee9f0:
    // 0x3ee9f0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3ee9f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ee9f4:
    // 0x3ee9f4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3ee9f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ee9f8:
    // 0x3ee9f8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3ee9f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ee9fc:
    // 0x3ee9fc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3ee9fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3eea00:
    // 0x3eea00: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3eea00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3eea04:
    // 0x3eea04: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3eea04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3eea08:
    // 0x3eea08: 0x3e00008  jr          $ra
label_3eea0c:
    if (ctx->pc == 0x3EEA0Cu) {
        ctx->pc = 0x3EEA0Cu;
            // 0x3eea0c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x3EEA10u;
        goto label_3eea10;
    }
    ctx->pc = 0x3EEA08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EEA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EEA08u;
            // 0x3eea0c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3EEA10u;
label_3eea10:
    // 0x3eea10: 0x24840054  addiu       $a0, $a0, 0x54
    ctx->pc = 0x3eea10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 84));
label_3eea14:
    // 0x3eea14: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x3eea14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3eea18:
    // 0x3eea18: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3eea18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_3eea1c:
    // 0x3eea1c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3eea1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3eea20:
    // 0x3eea20: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x3eea20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_3eea24:
    // 0x3eea24: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x3eea24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_3eea28:
    // 0x3eea28: 0x0  nop
    ctx->pc = 0x3eea28u;
    // NOP
label_3eea2c:
    // 0x3eea2c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_3eea30:
    if (ctx->pc == 0x3EEA30u) {
        ctx->pc = 0x3EEA34u;
        goto label_3eea34;
    }
    ctx->pc = 0x3EEA2Cu;
    {
        const bool branch_taken_0x3eea2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eea2c) {
            ctx->pc = 0x3EEA18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3eea18;
        }
    }
    ctx->pc = 0x3EEA34u;
label_3eea34:
    // 0x3eea34: 0x3e00008  jr          $ra
label_3eea38:
    if (ctx->pc == 0x3EEA38u) {
        ctx->pc = 0x3EEA3Cu;
        goto label_3eea3c;
    }
    ctx->pc = 0x3EEA34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3EEA3Cu;
label_3eea3c:
    // 0x3eea3c: 0x0  nop
    ctx->pc = 0x3eea3cu;
    // NOP
}
