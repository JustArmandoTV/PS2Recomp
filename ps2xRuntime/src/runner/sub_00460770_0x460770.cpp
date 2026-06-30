#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00460770
// Address: 0x460770 - 0x460a90
void sub_00460770_0x460770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00460770_0x460770");
#endif

    switch (ctx->pc) {
        case 0x460770u: goto label_460770;
        case 0x460774u: goto label_460774;
        case 0x460778u: goto label_460778;
        case 0x46077cu: goto label_46077c;
        case 0x460780u: goto label_460780;
        case 0x460784u: goto label_460784;
        case 0x460788u: goto label_460788;
        case 0x46078cu: goto label_46078c;
        case 0x460790u: goto label_460790;
        case 0x460794u: goto label_460794;
        case 0x460798u: goto label_460798;
        case 0x46079cu: goto label_46079c;
        case 0x4607a0u: goto label_4607a0;
        case 0x4607a4u: goto label_4607a4;
        case 0x4607a8u: goto label_4607a8;
        case 0x4607acu: goto label_4607ac;
        case 0x4607b0u: goto label_4607b0;
        case 0x4607b4u: goto label_4607b4;
        case 0x4607b8u: goto label_4607b8;
        case 0x4607bcu: goto label_4607bc;
        case 0x4607c0u: goto label_4607c0;
        case 0x4607c4u: goto label_4607c4;
        case 0x4607c8u: goto label_4607c8;
        case 0x4607ccu: goto label_4607cc;
        case 0x4607d0u: goto label_4607d0;
        case 0x4607d4u: goto label_4607d4;
        case 0x4607d8u: goto label_4607d8;
        case 0x4607dcu: goto label_4607dc;
        case 0x4607e0u: goto label_4607e0;
        case 0x4607e4u: goto label_4607e4;
        case 0x4607e8u: goto label_4607e8;
        case 0x4607ecu: goto label_4607ec;
        case 0x4607f0u: goto label_4607f0;
        case 0x4607f4u: goto label_4607f4;
        case 0x4607f8u: goto label_4607f8;
        case 0x4607fcu: goto label_4607fc;
        case 0x460800u: goto label_460800;
        case 0x460804u: goto label_460804;
        case 0x460808u: goto label_460808;
        case 0x46080cu: goto label_46080c;
        case 0x460810u: goto label_460810;
        case 0x460814u: goto label_460814;
        case 0x460818u: goto label_460818;
        case 0x46081cu: goto label_46081c;
        case 0x460820u: goto label_460820;
        case 0x460824u: goto label_460824;
        case 0x460828u: goto label_460828;
        case 0x46082cu: goto label_46082c;
        case 0x460830u: goto label_460830;
        case 0x460834u: goto label_460834;
        case 0x460838u: goto label_460838;
        case 0x46083cu: goto label_46083c;
        case 0x460840u: goto label_460840;
        case 0x460844u: goto label_460844;
        case 0x460848u: goto label_460848;
        case 0x46084cu: goto label_46084c;
        case 0x460850u: goto label_460850;
        case 0x460854u: goto label_460854;
        case 0x460858u: goto label_460858;
        case 0x46085cu: goto label_46085c;
        case 0x460860u: goto label_460860;
        case 0x460864u: goto label_460864;
        case 0x460868u: goto label_460868;
        case 0x46086cu: goto label_46086c;
        case 0x460870u: goto label_460870;
        case 0x460874u: goto label_460874;
        case 0x460878u: goto label_460878;
        case 0x46087cu: goto label_46087c;
        case 0x460880u: goto label_460880;
        case 0x460884u: goto label_460884;
        case 0x460888u: goto label_460888;
        case 0x46088cu: goto label_46088c;
        case 0x460890u: goto label_460890;
        case 0x460894u: goto label_460894;
        case 0x460898u: goto label_460898;
        case 0x46089cu: goto label_46089c;
        case 0x4608a0u: goto label_4608a0;
        case 0x4608a4u: goto label_4608a4;
        case 0x4608a8u: goto label_4608a8;
        case 0x4608acu: goto label_4608ac;
        case 0x4608b0u: goto label_4608b0;
        case 0x4608b4u: goto label_4608b4;
        case 0x4608b8u: goto label_4608b8;
        case 0x4608bcu: goto label_4608bc;
        case 0x4608c0u: goto label_4608c0;
        case 0x4608c4u: goto label_4608c4;
        case 0x4608c8u: goto label_4608c8;
        case 0x4608ccu: goto label_4608cc;
        case 0x4608d0u: goto label_4608d0;
        case 0x4608d4u: goto label_4608d4;
        case 0x4608d8u: goto label_4608d8;
        case 0x4608dcu: goto label_4608dc;
        case 0x4608e0u: goto label_4608e0;
        case 0x4608e4u: goto label_4608e4;
        case 0x4608e8u: goto label_4608e8;
        case 0x4608ecu: goto label_4608ec;
        case 0x4608f0u: goto label_4608f0;
        case 0x4608f4u: goto label_4608f4;
        case 0x4608f8u: goto label_4608f8;
        case 0x4608fcu: goto label_4608fc;
        case 0x460900u: goto label_460900;
        case 0x460904u: goto label_460904;
        case 0x460908u: goto label_460908;
        case 0x46090cu: goto label_46090c;
        case 0x460910u: goto label_460910;
        case 0x460914u: goto label_460914;
        case 0x460918u: goto label_460918;
        case 0x46091cu: goto label_46091c;
        case 0x460920u: goto label_460920;
        case 0x460924u: goto label_460924;
        case 0x460928u: goto label_460928;
        case 0x46092cu: goto label_46092c;
        case 0x460930u: goto label_460930;
        case 0x460934u: goto label_460934;
        case 0x460938u: goto label_460938;
        case 0x46093cu: goto label_46093c;
        case 0x460940u: goto label_460940;
        case 0x460944u: goto label_460944;
        case 0x460948u: goto label_460948;
        case 0x46094cu: goto label_46094c;
        case 0x460950u: goto label_460950;
        case 0x460954u: goto label_460954;
        case 0x460958u: goto label_460958;
        case 0x46095cu: goto label_46095c;
        case 0x460960u: goto label_460960;
        case 0x460964u: goto label_460964;
        case 0x460968u: goto label_460968;
        case 0x46096cu: goto label_46096c;
        case 0x460970u: goto label_460970;
        case 0x460974u: goto label_460974;
        case 0x460978u: goto label_460978;
        case 0x46097cu: goto label_46097c;
        case 0x460980u: goto label_460980;
        case 0x460984u: goto label_460984;
        case 0x460988u: goto label_460988;
        case 0x46098cu: goto label_46098c;
        case 0x460990u: goto label_460990;
        case 0x460994u: goto label_460994;
        case 0x460998u: goto label_460998;
        case 0x46099cu: goto label_46099c;
        case 0x4609a0u: goto label_4609a0;
        case 0x4609a4u: goto label_4609a4;
        case 0x4609a8u: goto label_4609a8;
        case 0x4609acu: goto label_4609ac;
        case 0x4609b0u: goto label_4609b0;
        case 0x4609b4u: goto label_4609b4;
        case 0x4609b8u: goto label_4609b8;
        case 0x4609bcu: goto label_4609bc;
        case 0x4609c0u: goto label_4609c0;
        case 0x4609c4u: goto label_4609c4;
        case 0x4609c8u: goto label_4609c8;
        case 0x4609ccu: goto label_4609cc;
        case 0x4609d0u: goto label_4609d0;
        case 0x4609d4u: goto label_4609d4;
        case 0x4609d8u: goto label_4609d8;
        case 0x4609dcu: goto label_4609dc;
        case 0x4609e0u: goto label_4609e0;
        case 0x4609e4u: goto label_4609e4;
        case 0x4609e8u: goto label_4609e8;
        case 0x4609ecu: goto label_4609ec;
        case 0x4609f0u: goto label_4609f0;
        case 0x4609f4u: goto label_4609f4;
        case 0x4609f8u: goto label_4609f8;
        case 0x4609fcu: goto label_4609fc;
        case 0x460a00u: goto label_460a00;
        case 0x460a04u: goto label_460a04;
        case 0x460a08u: goto label_460a08;
        case 0x460a0cu: goto label_460a0c;
        case 0x460a10u: goto label_460a10;
        case 0x460a14u: goto label_460a14;
        case 0x460a18u: goto label_460a18;
        case 0x460a1cu: goto label_460a1c;
        case 0x460a20u: goto label_460a20;
        case 0x460a24u: goto label_460a24;
        case 0x460a28u: goto label_460a28;
        case 0x460a2cu: goto label_460a2c;
        case 0x460a30u: goto label_460a30;
        case 0x460a34u: goto label_460a34;
        case 0x460a38u: goto label_460a38;
        case 0x460a3cu: goto label_460a3c;
        case 0x460a40u: goto label_460a40;
        case 0x460a44u: goto label_460a44;
        case 0x460a48u: goto label_460a48;
        case 0x460a4cu: goto label_460a4c;
        case 0x460a50u: goto label_460a50;
        case 0x460a54u: goto label_460a54;
        case 0x460a58u: goto label_460a58;
        case 0x460a5cu: goto label_460a5c;
        case 0x460a60u: goto label_460a60;
        case 0x460a64u: goto label_460a64;
        case 0x460a68u: goto label_460a68;
        case 0x460a6cu: goto label_460a6c;
        case 0x460a70u: goto label_460a70;
        case 0x460a74u: goto label_460a74;
        case 0x460a78u: goto label_460a78;
        case 0x460a7cu: goto label_460a7c;
        case 0x460a80u: goto label_460a80;
        case 0x460a84u: goto label_460a84;
        case 0x460a88u: goto label_460a88;
        case 0x460a8cu: goto label_460a8c;
        default: break;
    }

    ctx->pc = 0x460770u;

label_460770:
    // 0x460770: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x460770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_460774:
    // 0x460774: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x460774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_460778:
    // 0x460778: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x460778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_46077c:
    // 0x46077c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x46077cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_460780:
    // 0x460780: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x460780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_460784:
    // 0x460784: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x460784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_460788:
    // 0x460788: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x460788u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46078c:
    // 0x46078c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x46078cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_460790:
    // 0x460790: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x460790u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_460794:
    // 0x460794: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x460794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_460798:
    // 0x460798: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x460798u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_46079c:
    // 0x46079c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46079cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4607a0:
    // 0x4607a0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x4607a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4607a4:
    // 0x4607a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4607a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4607a8:
    // 0x4607a8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x4607a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4607ac:
    // 0x4607ac: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x4607acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_4607b0:
    // 0x4607b0: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x4607b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_4607b4:
    // 0x4607b4: 0x8c560008  lw          $s6, 0x8($v0)
    ctx->pc = 0x4607b4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4607b8:
    // 0x4607b8: 0xc0c9a58  jal         func_326960
label_4607bc:
    if (ctx->pc == 0x4607BCu) {
        ctx->pc = 0x4607BCu;
            // 0x4607bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4607C0u;
        goto label_4607c0;
    }
    ctx->pc = 0x4607B8u;
    SET_GPR_U32(ctx, 31, 0x4607C0u);
    ctx->pc = 0x4607BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4607B8u;
            // 0x4607bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4607C0u; }
        if (ctx->pc != 0x4607C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4607C0u; }
        if (ctx->pc != 0x4607C0u) { return; }
    }
    ctx->pc = 0x4607C0u;
label_4607c0:
    // 0x4607c0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4607c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4607c4:
    // 0x4607c4: 0xc123328  jal         func_48CCA0
label_4607c8:
    if (ctx->pc == 0x4607C8u) {
        ctx->pc = 0x4607C8u;
            // 0x4607c8: 0x2405002c  addiu       $a1, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->pc = 0x4607CCu;
        goto label_4607cc;
    }
    ctx->pc = 0x4607C4u;
    SET_GPR_U32(ctx, 31, 0x4607CCu);
    ctx->pc = 0x4607C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4607C4u;
            // 0x4607c8: 0x2405002c  addiu       $a1, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4607CCu; }
        if (ctx->pc != 0x4607CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4607CCu; }
        if (ctx->pc != 0x4607CCu) { return; }
    }
    ctx->pc = 0x4607CCu;
label_4607cc:
    // 0x4607cc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_4607d0:
    if (ctx->pc == 0x4607D0u) {
        ctx->pc = 0x4607D0u;
            // 0x4607d0: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->pc = 0x4607D4u;
        goto label_4607d4;
    }
    ctx->pc = 0x4607CCu;
    {
        const bool branch_taken_0x4607cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4607cc) {
            ctx->pc = 0x4607D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4607CCu;
            // 0x4607d0: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4607E4u;
            goto label_4607e4;
        }
    }
    ctx->pc = 0x4607D4u;
label_4607d4:
    // 0x4607d4: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x4607d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_4607d8:
    // 0x4607d8: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x4607d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4607dc:
    // 0x4607dc: 0xa064015d  sb          $a0, 0x15D($v1)
    ctx->pc = 0x4607dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 349), (uint8_t)GPR_U32(ctx, 4));
label_4607e0:
    // 0x4607e0: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x4607e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_4607e4:
    // 0x4607e4: 0x1283009a  beq         $s4, $v1, . + 4 + (0x9A << 2)
label_4607e8:
    if (ctx->pc == 0x4607E8u) {
        ctx->pc = 0x4607E8u;
            // 0x4607e8: 0x26500001  addiu       $s0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x4607ECu;
        goto label_4607ec;
    }
    ctx->pc = 0x4607E4u;
    {
        const bool branch_taken_0x4607e4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        ctx->pc = 0x4607E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4607E4u;
            // 0x4607e8: 0x26500001  addiu       $s0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4607e4) {
            ctx->pc = 0x460A50u;
            goto label_460a50;
        }
    }
    ctx->pc = 0x4607ECu;
label_4607ec:
    // 0x4607ec: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x4607ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_4607f0:
    // 0x4607f0: 0x52830092  beql        $s4, $v1, . + 4 + (0x92 << 2)
label_4607f4:
    if (ctx->pc == 0x4607F4u) {
        ctx->pc = 0x4607F4u;
            // 0x4607f4: 0x8eb90000  lw          $t9, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x4607F8u;
        goto label_4607f8;
    }
    ctx->pc = 0x4607F0u;
    {
        const bool branch_taken_0x4607f0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x4607f0) {
            ctx->pc = 0x4607F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4607F0u;
            // 0x4607f4: 0x8eb90000  lw          $t9, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x460A3Cu;
            goto label_460a3c;
        }
    }
    ctx->pc = 0x4607F8u;
label_4607f8:
    // 0x4607f8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x4607f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4607fc:
    // 0x4607fc: 0x12840087  beq         $s4, $a0, . + 4 + (0x87 << 2)
label_460800:
    if (ctx->pc == 0x460800u) {
        ctx->pc = 0x460804u;
        goto label_460804;
    }
    ctx->pc = 0x4607FCu;
    {
        const bool branch_taken_0x4607fc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 4));
        if (branch_taken_0x4607fc) {
            ctx->pc = 0x460A1Cu;
            goto label_460a1c;
        }
    }
    ctx->pc = 0x460804u;
label_460804:
    // 0x460804: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x460804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_460808:
    // 0x460808: 0x5286007a  beql        $s4, $a2, . + 4 + (0x7A << 2)
label_46080c:
    if (ctx->pc == 0x46080Cu) {
        ctx->pc = 0x46080Cu;
            // 0x46080c: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->pc = 0x460810u;
        goto label_460810;
    }
    ctx->pc = 0x460808u;
    {
        const bool branch_taken_0x460808 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 6));
        if (branch_taken_0x460808) {
            ctx->pc = 0x46080Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x460808u;
            // 0x46080c: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4609F4u;
            goto label_4609f4;
        }
    }
    ctx->pc = 0x460810u;
label_460810:
    // 0x460810: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x460810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_460814:
    // 0x460814: 0x12850059  beq         $s4, $a1, . + 4 + (0x59 << 2)
label_460818:
    if (ctx->pc == 0x460818u) {
        ctx->pc = 0x46081Cu;
        goto label_46081c;
    }
    ctx->pc = 0x460814u;
    {
        const bool branch_taken_0x460814 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 5));
        if (branch_taken_0x460814) {
            ctx->pc = 0x46097Cu;
            goto label_46097c;
        }
    }
    ctx->pc = 0x46081Cu;
label_46081c:
    // 0x46081c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x46081cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_460820:
    // 0x460820: 0x1283003a  beq         $s4, $v1, . + 4 + (0x3A << 2)
label_460824:
    if (ctx->pc == 0x460824u) {
        ctx->pc = 0x460828u;
        goto label_460828;
    }
    ctx->pc = 0x460820u;
    {
        const bool branch_taken_0x460820 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x460820) {
            ctx->pc = 0x46090Cu;
            goto label_46090c;
        }
    }
    ctx->pc = 0x460828u;
label_460828:
    // 0x460828: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_46082c:
    if (ctx->pc == 0x46082Cu) {
        ctx->pc = 0x460830u;
        goto label_460830;
    }
    ctx->pc = 0x460828u;
    {
        const bool branch_taken_0x460828 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x460828) {
            ctx->pc = 0x460838u;
            goto label_460838;
        }
    }
    ctx->pc = 0x460830u;
label_460830:
    // 0x460830: 0x1000008b  b           . + 4 + (0x8B << 2)
label_460834:
    if (ctx->pc == 0x460834u) {
        ctx->pc = 0x460834u;
            // 0x460834: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x460838u;
        goto label_460838;
    }
    ctx->pc = 0x460830u;
    {
        const bool branch_taken_0x460830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x460834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x460830u;
            // 0x460834: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460830) {
            ctx->pc = 0x460A60u;
            goto label_460a60;
        }
    }
    ctx->pc = 0x460838u;
label_460838:
    // 0x460838: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x460838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_46083c:
    // 0x46083c: 0x2e430010  sltiu       $v1, $s2, 0x10
    ctx->pc = 0x46083cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_460840:
    // 0x460840: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x460840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_460844:
    // 0x460844: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_460848:
    if (ctx->pc == 0x460848u) {
        ctx->pc = 0x460848u;
            // 0x460848: 0xa053003d  sb          $s3, 0x3D($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 61), (uint8_t)GPR_U32(ctx, 19));
        ctx->pc = 0x46084Cu;
        goto label_46084c;
    }
    ctx->pc = 0x460844u;
    {
        const bool branch_taken_0x460844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x460848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x460844u;
            // 0x460848: 0xa053003d  sb          $s3, 0x3D($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 61), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460844) {
            ctx->pc = 0x460854u;
            goto label_460854;
        }
    }
    ctx->pc = 0x46084Cu;
label_46084c:
    // 0x46084c: 0x2652fff8  addiu       $s2, $s2, -0x8
    ctx->pc = 0x46084cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
label_460850:
    // 0x460850: 0x26500001  addiu       $s0, $s2, 0x1
    ctx->pc = 0x460850u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_460854:
    // 0x460854: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x460854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_460858:
    // 0x460858: 0x56420003  bnel        $s2, $v0, . + 4 + (0x3 << 2)
label_46085c:
    if (ctx->pc == 0x46085Cu) {
        ctx->pc = 0x46085Cu;
            // 0x46085c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x460860u;
        goto label_460860;
    }
    ctx->pc = 0x460858u;
    {
        const bool branch_taken_0x460858 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x460858) {
            ctx->pc = 0x46085Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x460858u;
            // 0x46085c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x460868u;
            goto label_460868;
        }
    }
    ctx->pc = 0x460860u;
label_460860:
    // 0x460860: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x460860u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_460864:
    // 0x460864: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x460864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_460868:
    // 0x460868: 0x56420003  bnel        $s2, $v0, . + 4 + (0x3 << 2)
label_46086c:
    if (ctx->pc == 0x46086Cu) {
        ctx->pc = 0x46086Cu;
            // 0x46086c: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x460870u;
        goto label_460870;
    }
    ctx->pc = 0x460868u;
    {
        const bool branch_taken_0x460868 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x460868) {
            ctx->pc = 0x46086Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x460868u;
            // 0x46086c: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
            ctx->pc = 0x460878u;
            goto label_460878;
        }
    }
    ctx->pc = 0x460870u;
label_460870:
    // 0x460870: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x460870u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_460874:
    // 0x460874: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x460874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_460878:
    // 0x460878: 0x16420002  bne         $s2, $v0, . + 4 + (0x2 << 2)
label_46087c:
    if (ctx->pc == 0x46087Cu) {
        ctx->pc = 0x460880u;
        goto label_460880;
    }
    ctx->pc = 0x460878u;
    {
        const bool branch_taken_0x460878 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x460878) {
            ctx->pc = 0x460884u;
            goto label_460884;
        }
    }
    ctx->pc = 0x460880u;
label_460880:
    // 0x460880: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x460880u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_460884:
    // 0x460884: 0x52200003  beql        $s1, $zero, . + 4 + (0x3 << 2)
label_460888:
    if (ctx->pc == 0x460888u) {
        ctx->pc = 0x460888u;
            // 0x460888: 0x8ea20054  lw          $v0, 0x54($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
        ctx->pc = 0x46088Cu;
        goto label_46088c;
    }
    ctx->pc = 0x460884u;
    {
        const bool branch_taken_0x460884 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x460884) {
            ctx->pc = 0x460888u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x460884u;
            // 0x460888: 0x8ea20054  lw          $v0, 0x54($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x460894u;
            goto label_460894;
        }
    }
    ctx->pc = 0x46088Cu;
label_46088c:
    // 0x46088c: 0x1000000d  b           . + 4 + (0xD << 2)
label_460890:
    if (ctx->pc == 0x460890u) {
        ctx->pc = 0x460890u;
            // 0x460890: 0x8ea20054  lw          $v0, 0x54($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
        ctx->pc = 0x460894u;
        goto label_460894;
    }
    ctx->pc = 0x46088Cu;
    {
        const bool branch_taken_0x46088c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x460890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46088Cu;
            // 0x460890: 0x8ea20054  lw          $v0, 0x54($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46088c) {
            ctx->pc = 0x4608C4u;
            goto label_4608c4;
        }
    }
    ctx->pc = 0x460894u;
label_460894:
    // 0x460894: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x460894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_460898:
    // 0x460898: 0xc1182a4  jal         func_460A90
label_46089c:
    if (ctx->pc == 0x46089Cu) {
        ctx->pc = 0x46089Cu;
            // 0x46089c: 0xac400064  sw          $zero, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 0));
        ctx->pc = 0x4608A0u;
        goto label_4608a0;
    }
    ctx->pc = 0x460898u;
    SET_GPR_U32(ctx, 31, 0x4608A0u);
    ctx->pc = 0x46089Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460898u;
            // 0x46089c: 0xac400064  sw          $zero, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x460A90u;
    if (runtime->hasFunction(0x460A90u)) {
        auto targetFn = runtime->lookupFunction(0x460A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4608A0u; }
        if (ctx->pc != 0x4608A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00460A90_0x460a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4608A0u; }
        if (ctx->pc != 0x4608A0u) { return; }
    }
    ctx->pc = 0x4608A0u;
label_4608a0:
    // 0x4608a0: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x4608a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_4608a4:
    // 0x4608a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4608a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4608a8:
    // 0x4608a8: 0x1666000e  bne         $s3, $a2, . + 4 + (0xE << 2)
label_4608ac:
    if (ctx->pc == 0x4608ACu) {
        ctx->pc = 0x4608ACu;
            // 0x4608ac: 0xa050008c  sb          $s0, 0x8C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 140), (uint8_t)GPR_U32(ctx, 16));
        ctx->pc = 0x4608B0u;
        goto label_4608b0;
    }
    ctx->pc = 0x4608A8u;
    {
        const bool branch_taken_0x4608a8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 6));
        ctx->pc = 0x4608ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4608A8u;
            // 0x4608ac: 0xa050008c  sb          $s0, 0x8C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 140), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4608a8) {
            ctx->pc = 0x4608E4u;
            goto label_4608e4;
        }
    }
    ctx->pc = 0x4608B0u;
label_4608b0:
    // 0x4608b0: 0x26c40060  addiu       $a0, $s6, 0x60
    ctx->pc = 0x4608b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 96));
label_4608b4:
    // 0x4608b4: 0xc0ca4b0  jal         func_3292C0
label_4608b8:
    if (ctx->pc == 0x4608B8u) {
        ctx->pc = 0x4608B8u;
            // 0x4608b8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x4608BCu;
        goto label_4608bc;
    }
    ctx->pc = 0x4608B4u;
    SET_GPR_U32(ctx, 31, 0x4608BCu);
    ctx->pc = 0x4608B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4608B4u;
            // 0x4608b8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4608BCu; }
        if (ctx->pc != 0x4608BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4608BCu; }
        if (ctx->pc != 0x4608BCu) { return; }
    }
    ctx->pc = 0x4608BCu;
label_4608bc:
    // 0x4608bc: 0x10000009  b           . + 4 + (0x9 << 2)
label_4608c0:
    if (ctx->pc == 0x4608C0u) {
        ctx->pc = 0x4608C4u;
        goto label_4608c4;
    }
    ctx->pc = 0x4608BCu;
    {
        const bool branch_taken_0x4608bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4608bc) {
            ctx->pc = 0x4608E4u;
            goto label_4608e4;
        }
    }
    ctx->pc = 0x4608C4u;
label_4608c4:
    // 0x4608c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4608c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4608c8:
    // 0x4608c8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x4608c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_4608cc:
    // 0x4608cc: 0xac430064  sw          $v1, 0x64($v0)
    ctx->pc = 0x4608ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
label_4608d0:
    // 0x4608d0: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x4608d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_4608d4:
    // 0x4608d4: 0xc1182a4  jal         func_460A90
label_4608d8:
    if (ctx->pc == 0x4608D8u) {
        ctx->pc = 0x4608D8u;
            // 0x4608d8: 0xac510068  sw          $s1, 0x68($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 17));
        ctx->pc = 0x4608DCu;
        goto label_4608dc;
    }
    ctx->pc = 0x4608D4u;
    SET_GPR_U32(ctx, 31, 0x4608DCu);
    ctx->pc = 0x4608D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4608D4u;
            // 0x4608d8: 0xac510068  sw          $s1, 0x68($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x460A90u;
    if (runtime->hasFunction(0x460A90u)) {
        auto targetFn = runtime->lookupFunction(0x460A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4608DCu; }
        if (ctx->pc != 0x4608DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00460A90_0x460a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4608DCu; }
        if (ctx->pc != 0x4608DCu) { return; }
    }
    ctx->pc = 0x4608DCu;
label_4608dc:
    // 0x4608dc: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x4608dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_4608e0:
    // 0x4608e0: 0xa050008c  sb          $s0, 0x8C($v0)
    ctx->pc = 0x4608e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 140), (uint8_t)GPR_U32(ctx, 16));
label_4608e4:
    // 0x4608e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4608e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4608e8:
    // 0x4608e8: 0x8c440e68  lw          $a0, 0xE68($v0)
    ctx->pc = 0x4608e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_4608ec:
    // 0x4608ec: 0xc0fd080  jal         func_3F4200
label_4608f0:
    if (ctx->pc == 0x4608F0u) {
        ctx->pc = 0x4608F0u;
            // 0x4608f0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4608F4u;
        goto label_4608f4;
    }
    ctx->pc = 0x4608ECu;
    SET_GPR_U32(ctx, 31, 0x4608F4u);
    ctx->pc = 0x4608F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4608ECu;
            // 0x4608f0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F4200u;
    if (runtime->hasFunction(0x3F4200u)) {
        auto targetFn = runtime->lookupFunction(0x3F4200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4608F4u; }
        if (ctx->pc != 0x4608F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4200_0x3f4200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4608F4u; }
        if (ctx->pc != 0x4608F4u) { return; }
    }
    ctx->pc = 0x4608F4u;
label_4608f4:
    // 0x4608f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4608f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4608f8:
    // 0x4608f8: 0x8c440e68  lw          $a0, 0xE68($v0)
    ctx->pc = 0x4608f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_4608fc:
    // 0x4608fc: 0xc0fd080  jal         func_3F4200
label_460900:
    if (ctx->pc == 0x460900u) {
        ctx->pc = 0x460900u;
            // 0x460900: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x460904u;
        goto label_460904;
    }
    ctx->pc = 0x4608FCu;
    SET_GPR_U32(ctx, 31, 0x460904u);
    ctx->pc = 0x460900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4608FCu;
            // 0x460900: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F4200u;
    if (runtime->hasFunction(0x3F4200u)) {
        auto targetFn = runtime->lookupFunction(0x3F4200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460904u; }
        if (ctx->pc != 0x460904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4200_0x3f4200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460904u; }
        if (ctx->pc != 0x460904u) { return; }
    }
    ctx->pc = 0x460904u;
label_460904:
    // 0x460904: 0x10000055  b           . + 4 + (0x55 << 2)
label_460908:
    if (ctx->pc == 0x460908u) {
        ctx->pc = 0x46090Cu;
        goto label_46090c;
    }
    ctx->pc = 0x460904u;
    {
        const bool branch_taken_0x460904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x460904) {
            ctx->pc = 0x460A5Cu;
            goto label_460a5c;
        }
    }
    ctx->pc = 0x46090Cu;
label_46090c:
    // 0x46090c: 0x52650014  beql        $s3, $a1, . + 4 + (0x14 << 2)
label_460910:
    if (ctx->pc == 0x460910u) {
        ctx->pc = 0x460910u;
            // 0x460910: 0x8ea20054  lw          $v0, 0x54($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
        ctx->pc = 0x460914u;
        goto label_460914;
    }
    ctx->pc = 0x46090Cu;
    {
        const bool branch_taken_0x46090c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 5));
        if (branch_taken_0x46090c) {
            ctx->pc = 0x460910u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46090Cu;
            // 0x460910: 0x8ea20054  lw          $v0, 0x54($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x460960u;
            goto label_460960;
        }
    }
    ctx->pc = 0x460914u;
label_460914:
    // 0x460914: 0x5263000b  beql        $s3, $v1, . + 4 + (0xB << 2)
label_460918:
    if (ctx->pc == 0x460918u) {
        ctx->pc = 0x460918u;
            // 0x460918: 0x8ea20054  lw          $v0, 0x54($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
        ctx->pc = 0x46091Cu;
        goto label_46091c;
    }
    ctx->pc = 0x460914u;
    {
        const bool branch_taken_0x460914 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x460914) {
            ctx->pc = 0x460918u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x460914u;
            // 0x460918: 0x8ea20054  lw          $v0, 0x54($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x460944u;
            goto label_460944;
        }
    }
    ctx->pc = 0x46091Cu;
label_46091c:
    // 0x46091c: 0x52600003  beql        $s3, $zero, . + 4 + (0x3 << 2)
label_460920:
    if (ctx->pc == 0x460920u) {
        ctx->pc = 0x460920u;
            // 0x460920: 0x8ea20054  lw          $v0, 0x54($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
        ctx->pc = 0x460924u;
        goto label_460924;
    }
    ctx->pc = 0x46091Cu;
    {
        const bool branch_taken_0x46091c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x46091c) {
            ctx->pc = 0x460920u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46091Cu;
            // 0x460920: 0x8ea20054  lw          $v0, 0x54($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46092Cu;
            goto label_46092c;
        }
    }
    ctx->pc = 0x460924u;
label_460924:
    // 0x460924: 0x1000004d  b           . + 4 + (0x4D << 2)
label_460928:
    if (ctx->pc == 0x460928u) {
        ctx->pc = 0x46092Cu;
        goto label_46092c;
    }
    ctx->pc = 0x460924u;
    {
        const bool branch_taken_0x460924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x460924) {
            ctx->pc = 0x460A5Cu;
            goto label_460a5c;
        }
    }
    ctx->pc = 0x46092Cu;
label_46092c:
    // 0x46092c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x46092cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_460930:
    // 0x460930: 0xc1182a4  jal         func_460A90
label_460934:
    if (ctx->pc == 0x460934u) {
        ctx->pc = 0x460934u;
            // 0x460934: 0xac450064  sw          $a1, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 5));
        ctx->pc = 0x460938u;
        goto label_460938;
    }
    ctx->pc = 0x460930u;
    SET_GPR_U32(ctx, 31, 0x460938u);
    ctx->pc = 0x460934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460930u;
            // 0x460934: 0xac450064  sw          $a1, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x460A90u;
    if (runtime->hasFunction(0x460A90u)) {
        auto targetFn = runtime->lookupFunction(0x460A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460938u; }
        if (ctx->pc != 0x460938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00460A90_0x460a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460938u; }
        if (ctx->pc != 0x460938u) { return; }
    }
    ctx->pc = 0x460938u;
label_460938:
    // 0x460938: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x460938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_46093c:
    // 0x46093c: 0x10000047  b           . + 4 + (0x47 << 2)
label_460940:
    if (ctx->pc == 0x460940u) {
        ctx->pc = 0x460940u;
            // 0x460940: 0xa070008c  sb          $s0, 0x8C($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 140), (uint8_t)GPR_U32(ctx, 16));
        ctx->pc = 0x460944u;
        goto label_460944;
    }
    ctx->pc = 0x46093Cu;
    {
        const bool branch_taken_0x46093c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x460940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46093Cu;
            // 0x460940: 0xa070008c  sb          $s0, 0x8C($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 140), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46093c) {
            ctx->pc = 0x460A5Cu;
            goto label_460a5c;
        }
    }
    ctx->pc = 0x460944u;
label_460944:
    // 0x460944: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x460944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_460948:
    // 0x460948: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x460948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_46094c:
    // 0x46094c: 0xc1182a4  jal         func_460A90
label_460950:
    if (ctx->pc == 0x460950u) {
        ctx->pc = 0x460950u;
            // 0x460950: 0xac430064  sw          $v1, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
        ctx->pc = 0x460954u;
        goto label_460954;
    }
    ctx->pc = 0x46094Cu;
    SET_GPR_U32(ctx, 31, 0x460954u);
    ctx->pc = 0x460950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46094Cu;
            // 0x460950: 0xac430064  sw          $v1, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x460A90u;
    if (runtime->hasFunction(0x460A90u)) {
        auto targetFn = runtime->lookupFunction(0x460A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460954u; }
        if (ctx->pc != 0x460954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00460A90_0x460a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460954u; }
        if (ctx->pc != 0x460954u) { return; }
    }
    ctx->pc = 0x460954u;
label_460954:
    // 0x460954: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x460954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_460958:
    // 0x460958: 0x10000040  b           . + 4 + (0x40 << 2)
label_46095c:
    if (ctx->pc == 0x46095Cu) {
        ctx->pc = 0x46095Cu;
            // 0x46095c: 0xa070008c  sb          $s0, 0x8C($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 140), (uint8_t)GPR_U32(ctx, 16));
        ctx->pc = 0x460960u;
        goto label_460960;
    }
    ctx->pc = 0x460958u;
    {
        const bool branch_taken_0x460958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46095Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x460958u;
            // 0x46095c: 0xa070008c  sb          $s0, 0x8C($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 140), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460958) {
            ctx->pc = 0x460A5Cu;
            goto label_460a5c;
        }
    }
    ctx->pc = 0x460960u;
label_460960:
    // 0x460960: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x460960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_460964:
    // 0x460964: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x460964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_460968:
    // 0x460968: 0xc1182a4  jal         func_460A90
label_46096c:
    if (ctx->pc == 0x46096Cu) {
        ctx->pc = 0x46096Cu;
            // 0x46096c: 0xac430064  sw          $v1, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
        ctx->pc = 0x460970u;
        goto label_460970;
    }
    ctx->pc = 0x460968u;
    SET_GPR_U32(ctx, 31, 0x460970u);
    ctx->pc = 0x46096Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460968u;
            // 0x46096c: 0xac430064  sw          $v1, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x460A90u;
    if (runtime->hasFunction(0x460A90u)) {
        auto targetFn = runtime->lookupFunction(0x460A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460970u; }
        if (ctx->pc != 0x460970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00460A90_0x460a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460970u; }
        if (ctx->pc != 0x460970u) { return; }
    }
    ctx->pc = 0x460970u;
label_460970:
    // 0x460970: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x460970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_460974:
    // 0x460974: 0x10000039  b           . + 4 + (0x39 << 2)
label_460978:
    if (ctx->pc == 0x460978u) {
        ctx->pc = 0x460978u;
            // 0x460978: 0xac720068  sw          $s2, 0x68($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 18));
        ctx->pc = 0x46097Cu;
        goto label_46097c;
    }
    ctx->pc = 0x460974u;
    {
        const bool branch_taken_0x460974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x460978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x460974u;
            // 0x460978: 0xac720068  sw          $s2, 0x68($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460974) {
            ctx->pc = 0x460A5Cu;
            goto label_460a5c;
        }
    }
    ctx->pc = 0x46097Cu;
label_46097c:
    // 0x46097c: 0x52650016  beql        $s3, $a1, . + 4 + (0x16 << 2)
label_460980:
    if (ctx->pc == 0x460980u) {
        ctx->pc = 0x460980u;
            // 0x460980: 0x8ea20054  lw          $v0, 0x54($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
        ctx->pc = 0x460984u;
        goto label_460984;
    }
    ctx->pc = 0x46097Cu;
    {
        const bool branch_taken_0x46097c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 5));
        if (branch_taken_0x46097c) {
            ctx->pc = 0x460980u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46097Cu;
            // 0x460980: 0x8ea20054  lw          $v0, 0x54($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4609D8u;
            goto label_4609d8;
        }
    }
    ctx->pc = 0x460984u;
label_460984:
    // 0x460984: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x460984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_460988:
    // 0x460988: 0x5263000d  beql        $s3, $v1, . + 4 + (0xD << 2)
label_46098c:
    if (ctx->pc == 0x46098Cu) {
        ctx->pc = 0x46098Cu;
            // 0x46098c: 0x8ea20054  lw          $v0, 0x54($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
        ctx->pc = 0x460990u;
        goto label_460990;
    }
    ctx->pc = 0x460988u;
    {
        const bool branch_taken_0x460988 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x460988) {
            ctx->pc = 0x46098Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x460988u;
            // 0x46098c: 0x8ea20054  lw          $v0, 0x54($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4609C0u;
            goto label_4609c0;
        }
    }
    ctx->pc = 0x460990u;
label_460990:
    // 0x460990: 0x52600003  beql        $s3, $zero, . + 4 + (0x3 << 2)
label_460994:
    if (ctx->pc == 0x460994u) {
        ctx->pc = 0x460994u;
            // 0x460994: 0x8ea20054  lw          $v0, 0x54($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
        ctx->pc = 0x460998u;
        goto label_460998;
    }
    ctx->pc = 0x460990u;
    {
        const bool branch_taken_0x460990 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x460990) {
            ctx->pc = 0x460994u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x460990u;
            // 0x460994: 0x8ea20054  lw          $v0, 0x54($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4609A0u;
            goto label_4609a0;
        }
    }
    ctx->pc = 0x460998u;
label_460998:
    // 0x460998: 0x10000030  b           . + 4 + (0x30 << 2)
label_46099c:
    if (ctx->pc == 0x46099Cu) {
        ctx->pc = 0x4609A0u;
        goto label_4609a0;
    }
    ctx->pc = 0x460998u;
    {
        const bool branch_taken_0x460998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x460998) {
            ctx->pc = 0x460A5Cu;
            goto label_460a5c;
        }
    }
    ctx->pc = 0x4609A0u;
label_4609a0:
    // 0x4609a0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x4609a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_4609a4:
    // 0x4609a4: 0xc1182a4  jal         func_460A90
label_4609a8:
    if (ctx->pc == 0x4609A8u) {
        ctx->pc = 0x4609A8u;
            // 0x4609a8: 0xac460064  sw          $a2, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 6));
        ctx->pc = 0x4609ACu;
        goto label_4609ac;
    }
    ctx->pc = 0x4609A4u;
    SET_GPR_U32(ctx, 31, 0x4609ACu);
    ctx->pc = 0x4609A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4609A4u;
            // 0x4609a8: 0xac460064  sw          $a2, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x460A90u;
    if (runtime->hasFunction(0x460A90u)) {
        auto targetFn = runtime->lookupFunction(0x460A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4609ACu; }
        if (ctx->pc != 0x4609ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00460A90_0x460a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4609ACu; }
        if (ctx->pc != 0x4609ACu) { return; }
    }
    ctx->pc = 0x4609ACu;
label_4609ac:
    // 0x4609ac: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x4609acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_4609b0:
    // 0x4609b0: 0xa070008c  sb          $s0, 0x8C($v1)
    ctx->pc = 0x4609b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 140), (uint8_t)GPR_U32(ctx, 16));
label_4609b4:
    // 0x4609b4: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x4609b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_4609b8:
    // 0x4609b8: 0x10000028  b           . + 4 + (0x28 << 2)
label_4609bc:
    if (ctx->pc == 0x4609BCu) {
        ctx->pc = 0x4609BCu;
            // 0x4609bc: 0xa071008f  sb          $s1, 0x8F($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 143), (uint8_t)GPR_U32(ctx, 17));
        ctx->pc = 0x4609C0u;
        goto label_4609c0;
    }
    ctx->pc = 0x4609B8u;
    {
        const bool branch_taken_0x4609b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4609BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4609B8u;
            // 0x4609bc: 0xa071008f  sb          $s1, 0x8F($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 143), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4609b8) {
            ctx->pc = 0x460A5Cu;
            goto label_460a5c;
        }
    }
    ctx->pc = 0x4609C0u;
label_4609c0:
    // 0x4609c0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x4609c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4609c4:
    // 0x4609c4: 0xc1182a4  jal         func_460A90
label_4609c8:
    if (ctx->pc == 0x4609C8u) {
        ctx->pc = 0x4609C8u;
            // 0x4609c8: 0xac430064  sw          $v1, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
        ctx->pc = 0x4609CCu;
        goto label_4609cc;
    }
    ctx->pc = 0x4609C4u;
    SET_GPR_U32(ctx, 31, 0x4609CCu);
    ctx->pc = 0x4609C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4609C4u;
            // 0x4609c8: 0xac430064  sw          $v1, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x460A90u;
    if (runtime->hasFunction(0x460A90u)) {
        auto targetFn = runtime->lookupFunction(0x460A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4609CCu; }
        if (ctx->pc != 0x4609CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00460A90_0x460a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4609CCu; }
        if (ctx->pc != 0x4609CCu) { return; }
    }
    ctx->pc = 0x4609CCu;
label_4609cc:
    // 0x4609cc: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x4609ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_4609d0:
    // 0x4609d0: 0x10000022  b           . + 4 + (0x22 << 2)
label_4609d4:
    if (ctx->pc == 0x4609D4u) {
        ctx->pc = 0x4609D4u;
            // 0x4609d4: 0xa070008c  sb          $s0, 0x8C($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 140), (uint8_t)GPR_U32(ctx, 16));
        ctx->pc = 0x4609D8u;
        goto label_4609d8;
    }
    ctx->pc = 0x4609D0u;
    {
        const bool branch_taken_0x4609d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4609D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4609D0u;
            // 0x4609d4: 0xa070008c  sb          $s0, 0x8C($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 140), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4609d0) {
            ctx->pc = 0x460A5Cu;
            goto label_460a5c;
        }
    }
    ctx->pc = 0x4609D8u;
label_4609d8:
    // 0x4609d8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x4609d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_4609dc:
    // 0x4609dc: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x4609dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_4609e0:
    // 0x4609e0: 0xc1182a4  jal         func_460A90
label_4609e4:
    if (ctx->pc == 0x4609E4u) {
        ctx->pc = 0x4609E4u;
            // 0x4609e4: 0xac430064  sw          $v1, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
        ctx->pc = 0x4609E8u;
        goto label_4609e8;
    }
    ctx->pc = 0x4609E0u;
    SET_GPR_U32(ctx, 31, 0x4609E8u);
    ctx->pc = 0x4609E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4609E0u;
            // 0x4609e4: 0xac430064  sw          $v1, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x460A90u;
    if (runtime->hasFunction(0x460A90u)) {
        auto targetFn = runtime->lookupFunction(0x460A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4609E8u; }
        if (ctx->pc != 0x4609E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00460A90_0x460a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4609E8u; }
        if (ctx->pc != 0x4609E8u) { return; }
    }
    ctx->pc = 0x4609E8u;
label_4609e8:
    // 0x4609e8: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x4609e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_4609ec:
    // 0x4609ec: 0x1000001b  b           . + 4 + (0x1B << 2)
label_4609f0:
    if (ctx->pc == 0x4609F0u) {
        ctx->pc = 0x4609F0u;
            // 0x4609f0: 0xa070008c  sb          $s0, 0x8C($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 140), (uint8_t)GPR_U32(ctx, 16));
        ctx->pc = 0x4609F4u;
        goto label_4609f4;
    }
    ctx->pc = 0x4609ECu;
    {
        const bool branch_taken_0x4609ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4609F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4609ECu;
            // 0x4609f0: 0xa070008c  sb          $s0, 0x8C($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 140), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4609ec) {
            ctx->pc = 0x460A5Cu;
            goto label_460a5c;
        }
    }
    ctx->pc = 0x4609F4u;
label_4609f4:
    // 0x4609f4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x4609f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4609f8:
    // 0x4609f8: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x4609f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_4609fc:
    // 0x4609fc: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x4609fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_460a00:
    // 0x460a00: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x460a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_460a04:
    // 0x460a04: 0x24700001  addiu       $s0, $v1, 0x1
    ctx->pc = 0x460a04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_460a08:
    // 0x460a08: 0xc1182a4  jal         func_460A90
label_460a0c:
    if (ctx->pc == 0x460A0Cu) {
        ctx->pc = 0x460A0Cu;
            // 0x460a0c: 0xac440064  sw          $a0, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 4));
        ctx->pc = 0x460A10u;
        goto label_460a10;
    }
    ctx->pc = 0x460A08u;
    SET_GPR_U32(ctx, 31, 0x460A10u);
    ctx->pc = 0x460A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460A08u;
            // 0x460a0c: 0xac440064  sw          $a0, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x460A90u;
    if (runtime->hasFunction(0x460A90u)) {
        auto targetFn = runtime->lookupFunction(0x460A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460A10u; }
        if (ctx->pc != 0x460A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00460A90_0x460a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460A10u; }
        if (ctx->pc != 0x460A10u) { return; }
    }
    ctx->pc = 0x460A10u;
label_460a10:
    // 0x460a10: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x460a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_460a14:
    // 0x460a14: 0x10000011  b           . + 4 + (0x11 << 2)
label_460a18:
    if (ctx->pc == 0x460A18u) {
        ctx->pc = 0x460A18u;
            // 0x460a18: 0xa070008c  sb          $s0, 0x8C($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 140), (uint8_t)GPR_U32(ctx, 16));
        ctx->pc = 0x460A1Cu;
        goto label_460a1c;
    }
    ctx->pc = 0x460A14u;
    {
        const bool branch_taken_0x460a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x460A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x460A14u;
            // 0x460a18: 0xa070008c  sb          $s0, 0x8C($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 140), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460a14) {
            ctx->pc = 0x460A5Cu;
            goto label_460a5c;
        }
    }
    ctx->pc = 0x460A1Cu;
label_460a1c:
    // 0x460a1c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x460a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_460a20:
    // 0x460a20: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x460a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_460a24:
    // 0x460a24: 0xc05cc84  jal         func_173210
label_460a28:
    if (ctx->pc == 0x460A28u) {
        ctx->pc = 0x460A28u;
            // 0x460a28: 0x8c440188  lw          $a0, 0x188($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 392)));
        ctx->pc = 0x460A2Cu;
        goto label_460a2c;
    }
    ctx->pc = 0x460A24u;
    SET_GPR_U32(ctx, 31, 0x460A2Cu);
    ctx->pc = 0x460A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x460A24u;
            // 0x460a28: 0x8c440188  lw          $a0, 0x188($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173210u;
    if (runtime->hasFunction(0x173210u)) {
        auto targetFn = runtime->lookupFunction(0x173210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460A2Cu; }
        if (ctx->pc != 0x460A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173210_0x173210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x460A2Cu; }
        if (ctx->pc != 0x460A2Cu) { return; }
    }
    ctx->pc = 0x460A2Cu;
label_460a2c:
    // 0x460a2c: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x460a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_460a30:
    // 0x460a30: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x460a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_460a34:
    // 0x460a34: 0x10000009  b           . + 4 + (0x9 << 2)
label_460a38:
    if (ctx->pc == 0x460A38u) {
        ctx->pc = 0x460A38u;
            // 0x460a38: 0xac640064  sw          $a0, 0x64($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 4));
        ctx->pc = 0x460A3Cu;
        goto label_460a3c;
    }
    ctx->pc = 0x460A34u;
    {
        const bool branch_taken_0x460a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x460A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x460A34u;
            // 0x460a38: 0xac640064  sw          $a0, 0x64($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460a34) {
            ctx->pc = 0x460A5Cu;
            goto label_460a5c;
        }
    }
    ctx->pc = 0x460A3Cu;
label_460a3c:
    // 0x460a3c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x460a3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_460a40:
    // 0x460a40: 0x320f809  jalr        $t9
label_460a44:
    if (ctx->pc == 0x460A44u) {
        ctx->pc = 0x460A44u;
            // 0x460a44: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x460A48u;
        goto label_460a48;
    }
    ctx->pc = 0x460A40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x460A48u);
        ctx->pc = 0x460A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x460A40u;
            // 0x460a44: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x460A48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x460A48u; }
            if (ctx->pc != 0x460A48u) { return; }
        }
        }
    }
    ctx->pc = 0x460A48u;
label_460a48:
    // 0x460a48: 0x10000004  b           . + 4 + (0x4 << 2)
label_460a4c:
    if (ctx->pc == 0x460A4Cu) {
        ctx->pc = 0x460A50u;
        goto label_460a50;
    }
    ctx->pc = 0x460A48u;
    {
        const bool branch_taken_0x460a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x460a48) {
            ctx->pc = 0x460A5Cu;
            goto label_460a5c;
        }
    }
    ctx->pc = 0x460A50u;
label_460a50:
    // 0x460a50: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x460a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_460a54:
    // 0x460a54: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x460a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_460a58:
    // 0x460a58: 0xac640064  sw          $a0, 0x64($v1)
    ctx->pc = 0x460a58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 4));
label_460a5c:
    // 0x460a5c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x460a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_460a60:
    // 0x460a60: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x460a60u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_460a64:
    // 0x460a64: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x460a64u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_460a68:
    // 0x460a68: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x460a68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_460a6c:
    // 0x460a6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x460a6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_460a70:
    // 0x460a70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x460a70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_460a74:
    // 0x460a74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x460a74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_460a78:
    // 0x460a78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x460a78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_460a7c:
    // 0x460a7c: 0x3e00008  jr          $ra
label_460a80:
    if (ctx->pc == 0x460A80u) {
        ctx->pc = 0x460A80u;
            // 0x460a80: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x460A84u;
        goto label_460a84;
    }
    ctx->pc = 0x460A7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x460A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x460A7Cu;
            // 0x460a80: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x460A84u;
label_460a84:
    // 0x460a84: 0x0  nop
    ctx->pc = 0x460a84u;
    // NOP
label_460a88:
    // 0x460a88: 0x0  nop
    ctx->pc = 0x460a88u;
    // NOP
label_460a8c:
    // 0x460a8c: 0x0  nop
    ctx->pc = 0x460a8cu;
    // NOP
}
