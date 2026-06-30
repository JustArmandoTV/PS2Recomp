#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00222780
// Address: 0x222780 - 0x222b30
void sub_00222780_0x222780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222780_0x222780");
#endif

    switch (ctx->pc) {
        case 0x222780u: goto label_222780;
        case 0x222784u: goto label_222784;
        case 0x222788u: goto label_222788;
        case 0x22278cu: goto label_22278c;
        case 0x222790u: goto label_222790;
        case 0x222794u: goto label_222794;
        case 0x222798u: goto label_222798;
        case 0x22279cu: goto label_22279c;
        case 0x2227a0u: goto label_2227a0;
        case 0x2227a4u: goto label_2227a4;
        case 0x2227a8u: goto label_2227a8;
        case 0x2227acu: goto label_2227ac;
        case 0x2227b0u: goto label_2227b0;
        case 0x2227b4u: goto label_2227b4;
        case 0x2227b8u: goto label_2227b8;
        case 0x2227bcu: goto label_2227bc;
        case 0x2227c0u: goto label_2227c0;
        case 0x2227c4u: goto label_2227c4;
        case 0x2227c8u: goto label_2227c8;
        case 0x2227ccu: goto label_2227cc;
        case 0x2227d0u: goto label_2227d0;
        case 0x2227d4u: goto label_2227d4;
        case 0x2227d8u: goto label_2227d8;
        case 0x2227dcu: goto label_2227dc;
        case 0x2227e0u: goto label_2227e0;
        case 0x2227e4u: goto label_2227e4;
        case 0x2227e8u: goto label_2227e8;
        case 0x2227ecu: goto label_2227ec;
        case 0x2227f0u: goto label_2227f0;
        case 0x2227f4u: goto label_2227f4;
        case 0x2227f8u: goto label_2227f8;
        case 0x2227fcu: goto label_2227fc;
        case 0x222800u: goto label_222800;
        case 0x222804u: goto label_222804;
        case 0x222808u: goto label_222808;
        case 0x22280cu: goto label_22280c;
        case 0x222810u: goto label_222810;
        case 0x222814u: goto label_222814;
        case 0x222818u: goto label_222818;
        case 0x22281cu: goto label_22281c;
        case 0x222820u: goto label_222820;
        case 0x222824u: goto label_222824;
        case 0x222828u: goto label_222828;
        case 0x22282cu: goto label_22282c;
        case 0x222830u: goto label_222830;
        case 0x222834u: goto label_222834;
        case 0x222838u: goto label_222838;
        case 0x22283cu: goto label_22283c;
        case 0x222840u: goto label_222840;
        case 0x222844u: goto label_222844;
        case 0x222848u: goto label_222848;
        case 0x22284cu: goto label_22284c;
        case 0x222850u: goto label_222850;
        case 0x222854u: goto label_222854;
        case 0x222858u: goto label_222858;
        case 0x22285cu: goto label_22285c;
        case 0x222860u: goto label_222860;
        case 0x222864u: goto label_222864;
        case 0x222868u: goto label_222868;
        case 0x22286cu: goto label_22286c;
        case 0x222870u: goto label_222870;
        case 0x222874u: goto label_222874;
        case 0x222878u: goto label_222878;
        case 0x22287cu: goto label_22287c;
        case 0x222880u: goto label_222880;
        case 0x222884u: goto label_222884;
        case 0x222888u: goto label_222888;
        case 0x22288cu: goto label_22288c;
        case 0x222890u: goto label_222890;
        case 0x222894u: goto label_222894;
        case 0x222898u: goto label_222898;
        case 0x22289cu: goto label_22289c;
        case 0x2228a0u: goto label_2228a0;
        case 0x2228a4u: goto label_2228a4;
        case 0x2228a8u: goto label_2228a8;
        case 0x2228acu: goto label_2228ac;
        case 0x2228b0u: goto label_2228b0;
        case 0x2228b4u: goto label_2228b4;
        case 0x2228b8u: goto label_2228b8;
        case 0x2228bcu: goto label_2228bc;
        case 0x2228c0u: goto label_2228c0;
        case 0x2228c4u: goto label_2228c4;
        case 0x2228c8u: goto label_2228c8;
        case 0x2228ccu: goto label_2228cc;
        case 0x2228d0u: goto label_2228d0;
        case 0x2228d4u: goto label_2228d4;
        case 0x2228d8u: goto label_2228d8;
        case 0x2228dcu: goto label_2228dc;
        case 0x2228e0u: goto label_2228e0;
        case 0x2228e4u: goto label_2228e4;
        case 0x2228e8u: goto label_2228e8;
        case 0x2228ecu: goto label_2228ec;
        case 0x2228f0u: goto label_2228f0;
        case 0x2228f4u: goto label_2228f4;
        case 0x2228f8u: goto label_2228f8;
        case 0x2228fcu: goto label_2228fc;
        case 0x222900u: goto label_222900;
        case 0x222904u: goto label_222904;
        case 0x222908u: goto label_222908;
        case 0x22290cu: goto label_22290c;
        case 0x222910u: goto label_222910;
        case 0x222914u: goto label_222914;
        case 0x222918u: goto label_222918;
        case 0x22291cu: goto label_22291c;
        case 0x222920u: goto label_222920;
        case 0x222924u: goto label_222924;
        case 0x222928u: goto label_222928;
        case 0x22292cu: goto label_22292c;
        case 0x222930u: goto label_222930;
        case 0x222934u: goto label_222934;
        case 0x222938u: goto label_222938;
        case 0x22293cu: goto label_22293c;
        case 0x222940u: goto label_222940;
        case 0x222944u: goto label_222944;
        case 0x222948u: goto label_222948;
        case 0x22294cu: goto label_22294c;
        case 0x222950u: goto label_222950;
        case 0x222954u: goto label_222954;
        case 0x222958u: goto label_222958;
        case 0x22295cu: goto label_22295c;
        case 0x222960u: goto label_222960;
        case 0x222964u: goto label_222964;
        case 0x222968u: goto label_222968;
        case 0x22296cu: goto label_22296c;
        case 0x222970u: goto label_222970;
        case 0x222974u: goto label_222974;
        case 0x222978u: goto label_222978;
        case 0x22297cu: goto label_22297c;
        case 0x222980u: goto label_222980;
        case 0x222984u: goto label_222984;
        case 0x222988u: goto label_222988;
        case 0x22298cu: goto label_22298c;
        case 0x222990u: goto label_222990;
        case 0x222994u: goto label_222994;
        case 0x222998u: goto label_222998;
        case 0x22299cu: goto label_22299c;
        case 0x2229a0u: goto label_2229a0;
        case 0x2229a4u: goto label_2229a4;
        case 0x2229a8u: goto label_2229a8;
        case 0x2229acu: goto label_2229ac;
        case 0x2229b0u: goto label_2229b0;
        case 0x2229b4u: goto label_2229b4;
        case 0x2229b8u: goto label_2229b8;
        case 0x2229bcu: goto label_2229bc;
        case 0x2229c0u: goto label_2229c0;
        case 0x2229c4u: goto label_2229c4;
        case 0x2229c8u: goto label_2229c8;
        case 0x2229ccu: goto label_2229cc;
        case 0x2229d0u: goto label_2229d0;
        case 0x2229d4u: goto label_2229d4;
        case 0x2229d8u: goto label_2229d8;
        case 0x2229dcu: goto label_2229dc;
        case 0x2229e0u: goto label_2229e0;
        case 0x2229e4u: goto label_2229e4;
        case 0x2229e8u: goto label_2229e8;
        case 0x2229ecu: goto label_2229ec;
        case 0x2229f0u: goto label_2229f0;
        case 0x2229f4u: goto label_2229f4;
        case 0x2229f8u: goto label_2229f8;
        case 0x2229fcu: goto label_2229fc;
        case 0x222a00u: goto label_222a00;
        case 0x222a04u: goto label_222a04;
        case 0x222a08u: goto label_222a08;
        case 0x222a0cu: goto label_222a0c;
        case 0x222a10u: goto label_222a10;
        case 0x222a14u: goto label_222a14;
        case 0x222a18u: goto label_222a18;
        case 0x222a1cu: goto label_222a1c;
        case 0x222a20u: goto label_222a20;
        case 0x222a24u: goto label_222a24;
        case 0x222a28u: goto label_222a28;
        case 0x222a2cu: goto label_222a2c;
        case 0x222a30u: goto label_222a30;
        case 0x222a34u: goto label_222a34;
        case 0x222a38u: goto label_222a38;
        case 0x222a3cu: goto label_222a3c;
        case 0x222a40u: goto label_222a40;
        case 0x222a44u: goto label_222a44;
        case 0x222a48u: goto label_222a48;
        case 0x222a4cu: goto label_222a4c;
        case 0x222a50u: goto label_222a50;
        case 0x222a54u: goto label_222a54;
        case 0x222a58u: goto label_222a58;
        case 0x222a5cu: goto label_222a5c;
        case 0x222a60u: goto label_222a60;
        case 0x222a64u: goto label_222a64;
        case 0x222a68u: goto label_222a68;
        case 0x222a6cu: goto label_222a6c;
        case 0x222a70u: goto label_222a70;
        case 0x222a74u: goto label_222a74;
        case 0x222a78u: goto label_222a78;
        case 0x222a7cu: goto label_222a7c;
        case 0x222a80u: goto label_222a80;
        case 0x222a84u: goto label_222a84;
        case 0x222a88u: goto label_222a88;
        case 0x222a8cu: goto label_222a8c;
        case 0x222a90u: goto label_222a90;
        case 0x222a94u: goto label_222a94;
        case 0x222a98u: goto label_222a98;
        case 0x222a9cu: goto label_222a9c;
        case 0x222aa0u: goto label_222aa0;
        case 0x222aa4u: goto label_222aa4;
        case 0x222aa8u: goto label_222aa8;
        case 0x222aacu: goto label_222aac;
        case 0x222ab0u: goto label_222ab0;
        case 0x222ab4u: goto label_222ab4;
        case 0x222ab8u: goto label_222ab8;
        case 0x222abcu: goto label_222abc;
        case 0x222ac0u: goto label_222ac0;
        case 0x222ac4u: goto label_222ac4;
        case 0x222ac8u: goto label_222ac8;
        case 0x222accu: goto label_222acc;
        case 0x222ad0u: goto label_222ad0;
        case 0x222ad4u: goto label_222ad4;
        case 0x222ad8u: goto label_222ad8;
        case 0x222adcu: goto label_222adc;
        case 0x222ae0u: goto label_222ae0;
        case 0x222ae4u: goto label_222ae4;
        case 0x222ae8u: goto label_222ae8;
        case 0x222aecu: goto label_222aec;
        case 0x222af0u: goto label_222af0;
        case 0x222af4u: goto label_222af4;
        case 0x222af8u: goto label_222af8;
        case 0x222afcu: goto label_222afc;
        case 0x222b00u: goto label_222b00;
        case 0x222b04u: goto label_222b04;
        case 0x222b08u: goto label_222b08;
        case 0x222b0cu: goto label_222b0c;
        case 0x222b10u: goto label_222b10;
        case 0x222b14u: goto label_222b14;
        case 0x222b18u: goto label_222b18;
        case 0x222b1cu: goto label_222b1c;
        case 0x222b20u: goto label_222b20;
        case 0x222b24u: goto label_222b24;
        case 0x222b28u: goto label_222b28;
        case 0x222b2cu: goto label_222b2c;
        default: break;
    }

    ctx->pc = 0x222780u;

label_222780:
    // 0x222780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x222780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_222784:
    // 0x222784: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x222784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_222788:
    // 0x222788: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x222788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22278c:
    // 0x22278c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22278cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_222790:
    // 0x222790: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x222790u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_222794:
    // 0x222794: 0x122000de  beqz        $s1, . + 4 + (0xDE << 2)
label_222798:
    if (ctx->pc == 0x222798u) {
        ctx->pc = 0x222798u;
            // 0x222798: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22279Cu;
        goto label_22279c;
    }
    ctx->pc = 0x222794u;
    {
        const bool branch_taken_0x222794 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x222798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222794u;
            // 0x222798: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222794) {
            ctx->pc = 0x222B10u;
            goto label_222b10;
        }
    }
    ctx->pc = 0x22279Cu;
label_22279c:
    // 0x22279c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22279cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2227a0:
    // 0x2227a0: 0x2442e9b0  addiu       $v0, $v0, -0x1650
    ctx->pc = 0x2227a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961584));
label_2227a4:
    // 0x2227a4: 0xc0894ac  jal         func_2252B0
label_2227a8:
    if (ctx->pc == 0x2227A8u) {
        ctx->pc = 0x2227A8u;
            // 0x2227a8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2227ACu;
        goto label_2227ac;
    }
    ctx->pc = 0x2227A4u;
    SET_GPR_U32(ctx, 31, 0x2227ACu);
    ctx->pc = 0x2227A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2227A4u;
            // 0x2227a8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2252B0u;
    if (runtime->hasFunction(0x2252B0u)) {
        auto targetFn = runtime->lookupFunction(0x2252B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2227ACu; }
        if (ctx->pc != 0x2227ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002252B0_0x2252b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2227ACu; }
        if (ctx->pc != 0x2227ACu) { return; }
    }
    ctx->pc = 0x2227ACu;
label_2227ac:
    // 0x2227ac: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x2227acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_2227b0:
    // 0x2227b0: 0x50800012  beql        $a0, $zero, . + 4 + (0x12 << 2)
label_2227b4:
    if (ctx->pc == 0x2227B4u) {
        ctx->pc = 0x2227B4u;
            // 0x2227b4: 0x262201e8  addiu       $v0, $s1, 0x1E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 488));
        ctx->pc = 0x2227B8u;
        goto label_2227b8;
    }
    ctx->pc = 0x2227B0u;
    {
        const bool branch_taken_0x2227b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2227b0) {
            ctx->pc = 0x2227B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2227B0u;
            // 0x2227b4: 0x262201e8  addiu       $v0, $s1, 0x1E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 488));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2227FCu;
            goto label_2227fc;
        }
    }
    ctx->pc = 0x2227B8u;
label_2227b8:
    // 0x2227b8: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x2227b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_2227bc:
    // 0x2227bc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2227c0:
    if (ctx->pc == 0x2227C0u) {
        ctx->pc = 0x2227C4u;
        goto label_2227c4;
    }
    ctx->pc = 0x2227BCu;
    {
        const bool branch_taken_0x2227bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2227bc) {
            ctx->pc = 0x2227F8u;
            goto label_2227f8;
        }
    }
    ctx->pc = 0x2227C4u;
label_2227c4:
    // 0x2227c4: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x2227c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_2227c8:
    // 0x2227c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2227c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2227cc:
    // 0x2227cc: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x2227ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_2227d0:
    // 0x2227d0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2227d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_2227d4:
    // 0x2227d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2227d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2227d8:
    // 0x2227d8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2227dc:
    if (ctx->pc == 0x2227DCu) {
        ctx->pc = 0x2227E0u;
        goto label_2227e0;
    }
    ctx->pc = 0x2227D8u;
    {
        const bool branch_taken_0x2227d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2227d8) {
            ctx->pc = 0x2227F8u;
            goto label_2227f8;
        }
    }
    ctx->pc = 0x2227E0u;
label_2227e0:
    // 0x2227e0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2227e4:
    if (ctx->pc == 0x2227E4u) {
        ctx->pc = 0x2227E8u;
        goto label_2227e8;
    }
    ctx->pc = 0x2227E0u;
    {
        const bool branch_taken_0x2227e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2227e0) {
            ctx->pc = 0x2227F8u;
            goto label_2227f8;
        }
    }
    ctx->pc = 0x2227E8u;
label_2227e8:
    // 0x2227e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2227e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2227ec:
    // 0x2227ec: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2227ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2227f0:
    // 0x2227f0: 0x320f809  jalr        $t9
label_2227f4:
    if (ctx->pc == 0x2227F4u) {
        ctx->pc = 0x2227F4u;
            // 0x2227f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2227F8u;
        goto label_2227f8;
    }
    ctx->pc = 0x2227F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2227F8u);
        ctx->pc = 0x2227F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2227F0u;
            // 0x2227f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2227F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2227F8u; }
            if (ctx->pc != 0x2227F8u) { return; }
        }
        }
    }
    ctx->pc = 0x2227F8u;
label_2227f8:
    // 0x2227f8: 0x262201e8  addiu       $v0, $s1, 0x1E8
    ctx->pc = 0x2227f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 488));
label_2227fc:
    // 0x2227fc: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_222800:
    if (ctx->pc == 0x222800u) {
        ctx->pc = 0x222800u;
            // 0x222800: 0x262201e0  addiu       $v0, $s1, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
        ctx->pc = 0x222804u;
        goto label_222804;
    }
    ctx->pc = 0x2227FCu;
    {
        const bool branch_taken_0x2227fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2227fc) {
            ctx->pc = 0x222800u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2227FCu;
            // 0x222800: 0x262201e0  addiu       $v0, $s1, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222838u;
            goto label_222838;
        }
    }
    ctx->pc = 0x222804u;
label_222804:
    // 0x222804: 0x962201ee  lhu         $v0, 0x1EE($s1)
    ctx->pc = 0x222804u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 494)));
label_222808:
    // 0x222808: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x222808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_22280c:
    // 0x22280c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_222810:
    if (ctx->pc == 0x222810u) {
        ctx->pc = 0x222814u;
        goto label_222814;
    }
    ctx->pc = 0x22280Cu;
    {
        const bool branch_taken_0x22280c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22280c) {
            ctx->pc = 0x222834u;
            goto label_222834;
        }
    }
    ctx->pc = 0x222814u;
label_222814:
    // 0x222814: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x222814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_222818:
    // 0x222818: 0x962301ee  lhu         $v1, 0x1EE($s1)
    ctx->pc = 0x222818u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 494)));
label_22281c:
    // 0x22281c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22281cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_222820:
    // 0x222820: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x222820u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_222824:
    // 0x222824: 0x8e2501e8  lw          $a1, 0x1E8($s1)
    ctx->pc = 0x222824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 488)));
label_222828:
    // 0x222828: 0x30623fff  andi        $v0, $v1, 0x3FFF
    ctx->pc = 0x222828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
label_22282c:
    // 0x22282c: 0xc0a7ab4  jal         func_29EAD0
label_222830:
    if (ctx->pc == 0x222830u) {
        ctx->pc = 0x222830u;
            // 0x222830: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x222834u;
        goto label_222834;
    }
    ctx->pc = 0x22282Cu;
    SET_GPR_U32(ctx, 31, 0x222834u);
    ctx->pc = 0x222830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22282Cu;
            // 0x222830: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222834u; }
        if (ctx->pc != 0x222834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222834u; }
        if (ctx->pc != 0x222834u) { return; }
    }
    ctx->pc = 0x222834u;
label_222834:
    // 0x222834: 0x262201e0  addiu       $v0, $s1, 0x1E0
    ctx->pc = 0x222834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
label_222838:
    // 0x222838: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_22283c:
    if (ctx->pc == 0x22283Cu) {
        ctx->pc = 0x22283Cu;
            // 0x22283c: 0x262201d8  addiu       $v0, $s1, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 472));
        ctx->pc = 0x222840u;
        goto label_222840;
    }
    ctx->pc = 0x222838u;
    {
        const bool branch_taken_0x222838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222838) {
            ctx->pc = 0x22283Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x222838u;
            // 0x22283c: 0x262201d8  addiu       $v0, $s1, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 472));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222874u;
            goto label_222874;
        }
    }
    ctx->pc = 0x222840u;
label_222840:
    // 0x222840: 0x962201e6  lhu         $v0, 0x1E6($s1)
    ctx->pc = 0x222840u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 486)));
label_222844:
    // 0x222844: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x222844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_222848:
    // 0x222848: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_22284c:
    if (ctx->pc == 0x22284Cu) {
        ctx->pc = 0x222850u;
        goto label_222850;
    }
    ctx->pc = 0x222848u;
    {
        const bool branch_taken_0x222848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x222848) {
            ctx->pc = 0x222870u;
            goto label_222870;
        }
    }
    ctx->pc = 0x222850u;
label_222850:
    // 0x222850: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x222850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_222854:
    // 0x222854: 0x962301e6  lhu         $v1, 0x1E6($s1)
    ctx->pc = 0x222854u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 486)));
label_222858:
    // 0x222858: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x222858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22285c:
    // 0x22285c: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x22285cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_222860:
    // 0x222860: 0x8e2501e0  lw          $a1, 0x1E0($s1)
    ctx->pc = 0x222860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 480)));
label_222864:
    // 0x222864: 0x30623fff  andi        $v0, $v1, 0x3FFF
    ctx->pc = 0x222864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
label_222868:
    // 0x222868: 0xc0a7ab4  jal         func_29EAD0
label_22286c:
    if (ctx->pc == 0x22286Cu) {
        ctx->pc = 0x22286Cu;
            // 0x22286c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x222870u;
        goto label_222870;
    }
    ctx->pc = 0x222868u;
    SET_GPR_U32(ctx, 31, 0x222870u);
    ctx->pc = 0x22286Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222868u;
            // 0x22286c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222870u; }
        if (ctx->pc != 0x222870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222870u; }
        if (ctx->pc != 0x222870u) { return; }
    }
    ctx->pc = 0x222870u;
label_222870:
    // 0x222870: 0x262201d8  addiu       $v0, $s1, 0x1D8
    ctx->pc = 0x222870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 472));
label_222874:
    // 0x222874: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_222878:
    if (ctx->pc == 0x222878u) {
        ctx->pc = 0x222878u;
            // 0x222878: 0x262201d0  addiu       $v0, $s1, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
        ctx->pc = 0x22287Cu;
        goto label_22287c;
    }
    ctx->pc = 0x222874u;
    {
        const bool branch_taken_0x222874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222874) {
            ctx->pc = 0x222878u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x222874u;
            // 0x222878: 0x262201d0  addiu       $v0, $s1, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2228B0u;
            goto label_2228b0;
        }
    }
    ctx->pc = 0x22287Cu;
label_22287c:
    // 0x22287c: 0x962201de  lhu         $v0, 0x1DE($s1)
    ctx->pc = 0x22287cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 478)));
label_222880:
    // 0x222880: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x222880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_222884:
    // 0x222884: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_222888:
    if (ctx->pc == 0x222888u) {
        ctx->pc = 0x22288Cu;
        goto label_22288c;
    }
    ctx->pc = 0x222884u;
    {
        const bool branch_taken_0x222884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x222884) {
            ctx->pc = 0x2228ACu;
            goto label_2228ac;
        }
    }
    ctx->pc = 0x22288Cu;
label_22288c:
    // 0x22288c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22288cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_222890:
    // 0x222890: 0x962301de  lhu         $v1, 0x1DE($s1)
    ctx->pc = 0x222890u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 478)));
label_222894:
    // 0x222894: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x222894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_222898:
    // 0x222898: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x222898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_22289c:
    // 0x22289c: 0x8e2501d8  lw          $a1, 0x1D8($s1)
    ctx->pc = 0x22289cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 472)));
label_2228a0:
    // 0x2228a0: 0x30623fff  andi        $v0, $v1, 0x3FFF
    ctx->pc = 0x2228a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
label_2228a4:
    // 0x2228a4: 0xc0a7ab4  jal         func_29EAD0
label_2228a8:
    if (ctx->pc == 0x2228A8u) {
        ctx->pc = 0x2228A8u;
            // 0x2228a8: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x2228ACu;
        goto label_2228ac;
    }
    ctx->pc = 0x2228A4u;
    SET_GPR_U32(ctx, 31, 0x2228ACu);
    ctx->pc = 0x2228A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2228A4u;
            // 0x2228a8: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2228ACu; }
        if (ctx->pc != 0x2228ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2228ACu; }
        if (ctx->pc != 0x2228ACu) { return; }
    }
    ctx->pc = 0x2228ACu;
label_2228ac:
    // 0x2228ac: 0x262201d0  addiu       $v0, $s1, 0x1D0
    ctx->pc = 0x2228acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
label_2228b0:
    // 0x2228b0: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_2228b4:
    if (ctx->pc == 0x2228B4u) {
        ctx->pc = 0x2228B4u;
            // 0x2228b4: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->pc = 0x2228B8u;
        goto label_2228b8;
    }
    ctx->pc = 0x2228B0u;
    {
        const bool branch_taken_0x2228b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2228b0) {
            ctx->pc = 0x2228B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2228B0u;
            // 0x2228b4: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2228ECu;
            goto label_2228ec;
        }
    }
    ctx->pc = 0x2228B8u;
label_2228b8:
    // 0x2228b8: 0x962201d6  lhu         $v0, 0x1D6($s1)
    ctx->pc = 0x2228b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 470)));
label_2228bc:
    // 0x2228bc: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2228bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_2228c0:
    // 0x2228c0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2228c4:
    if (ctx->pc == 0x2228C4u) {
        ctx->pc = 0x2228C8u;
        goto label_2228c8;
    }
    ctx->pc = 0x2228C0u;
    {
        const bool branch_taken_0x2228c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2228c0) {
            ctx->pc = 0x2228E8u;
            goto label_2228e8;
        }
    }
    ctx->pc = 0x2228C8u;
label_2228c8:
    // 0x2228c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2228c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2228cc:
    // 0x2228cc: 0x962301d6  lhu         $v1, 0x1D6($s1)
    ctx->pc = 0x2228ccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 470)));
label_2228d0:
    // 0x2228d0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2228d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2228d4:
    // 0x2228d4: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2228d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2228d8:
    // 0x2228d8: 0x8e2501d0  lw          $a1, 0x1D0($s1)
    ctx->pc = 0x2228d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 464)));
label_2228dc:
    // 0x2228dc: 0x30623fff  andi        $v0, $v1, 0x3FFF
    ctx->pc = 0x2228dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
label_2228e0:
    // 0x2228e0: 0xc0a7ab4  jal         func_29EAD0
label_2228e4:
    if (ctx->pc == 0x2228E4u) {
        ctx->pc = 0x2228E4u;
            // 0x2228e4: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x2228E8u;
        goto label_2228e8;
    }
    ctx->pc = 0x2228E0u;
    SET_GPR_U32(ctx, 31, 0x2228E8u);
    ctx->pc = 0x2228E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2228E0u;
            // 0x2228e4: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2228E8u; }
        if (ctx->pc != 0x2228E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2228E8u; }
        if (ctx->pc != 0x2228E8u) { return; }
    }
    ctx->pc = 0x2228E8u;
label_2228e8:
    // 0x2228e8: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x2228e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_2228ec:
    // 0x2228ec: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_2228f0:
    if (ctx->pc == 0x2228F0u) {
        ctx->pc = 0x2228F0u;
            // 0x2228f0: 0x26220084  addiu       $v0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->pc = 0x2228F4u;
        goto label_2228f4;
    }
    ctx->pc = 0x2228ECu;
    {
        const bool branch_taken_0x2228ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2228ec) {
            ctx->pc = 0x2228F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2228ECu;
            // 0x2228f0: 0x26220084  addiu       $v0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22290Cu;
            goto label_22290c;
        }
    }
    ctx->pc = 0x2228F4u;
label_2228f4:
    // 0x2228f4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2228f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2228f8:
    // 0x2228f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2228f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2228fc:
    // 0x2228fc: 0x2442eb20  addiu       $v0, $v0, -0x14E0
    ctx->pc = 0x2228fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961952));
label_222900:
    // 0x222900: 0xc0899ac  jal         func_2266B0
label_222904:
    if (ctx->pc == 0x222904u) {
        ctx->pc = 0x222904u;
            // 0x222904: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x222908u;
        goto label_222908;
    }
    ctx->pc = 0x222900u;
    SET_GPR_U32(ctx, 31, 0x222908u);
    ctx->pc = 0x222904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222900u;
            // 0x222904: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2266B0u;
    if (runtime->hasFunction(0x2266B0u)) {
        auto targetFn = runtime->lookupFunction(0x2266B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222908u; }
        if (ctx->pc != 0x222908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002266B0_0x2266b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222908u; }
        if (ctx->pc != 0x222908u) { return; }
    }
    ctx->pc = 0x222908u;
label_222908:
    // 0x222908: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x222908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_22290c:
    // 0x22290c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_222910:
    if (ctx->pc == 0x222910u) {
        ctx->pc = 0x222910u;
            // 0x222910: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x222914u;
        goto label_222914;
    }
    ctx->pc = 0x22290Cu;
    {
        const bool branch_taken_0x22290c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22290c) {
            ctx->pc = 0x222910u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22290Cu;
            // 0x222910: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22294Cu;
            goto label_22294c;
        }
    }
    ctx->pc = 0x222914u;
label_222914:
    // 0x222914: 0x8e23008c  lw          $v1, 0x8C($s1)
    ctx->pc = 0x222914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_222918:
    // 0x222918: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x222918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_22291c:
    // 0x22291c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22291cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_222920:
    // 0x222920: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_222924:
    if (ctx->pc == 0x222924u) {
        ctx->pc = 0x222928u;
        goto label_222928;
    }
    ctx->pc = 0x222920u;
    {
        const bool branch_taken_0x222920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x222920) {
            ctx->pc = 0x222948u;
            goto label_222948;
        }
    }
    ctx->pc = 0x222928u;
label_222928:
    // 0x222928: 0x8e23008c  lw          $v1, 0x8C($s1)
    ctx->pc = 0x222928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_22292c:
    // 0x22292c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22292cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_222930:
    // 0x222930: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x222930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_222934:
    // 0x222934: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x222934u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_222938:
    // 0x222938: 0x8e250084  lw          $a1, 0x84($s1)
    ctx->pc = 0x222938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_22293c:
    // 0x22293c: 0x330bc  dsll32      $a2, $v1, 2
    ctx->pc = 0x22293cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 2));
label_222940:
    // 0x222940: 0xc0a7ab4  jal         func_29EAD0
label_222944:
    if (ctx->pc == 0x222944u) {
        ctx->pc = 0x222944u;
            // 0x222944: 0x630be  dsrl32      $a2, $a2, 2 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 2));
        ctx->pc = 0x222948u;
        goto label_222948;
    }
    ctx->pc = 0x222940u;
    SET_GPR_U32(ctx, 31, 0x222948u);
    ctx->pc = 0x222944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222940u;
            // 0x222944: 0x630be  dsrl32      $a2, $a2, 2 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222948u; }
        if (ctx->pc != 0x222948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222948u; }
        if (ctx->pc != 0x222948u) { return; }
    }
    ctx->pc = 0x222948u;
label_222948:
    // 0x222948: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x222948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_22294c:
    // 0x22294c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_222950:
    if (ctx->pc == 0x222950u) {
        ctx->pc = 0x222950u;
            // 0x222950: 0x26220070  addiu       $v0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->pc = 0x222954u;
        goto label_222954;
    }
    ctx->pc = 0x22294Cu;
    {
        const bool branch_taken_0x22294c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22294c) {
            ctx->pc = 0x222950u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22294Cu;
            // 0x222950: 0x26220070  addiu       $v0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222990u;
            goto label_222990;
        }
    }
    ctx->pc = 0x222954u;
label_222954:
    // 0x222954: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x222954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_222958:
    // 0x222958: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x222958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_22295c:
    // 0x22295c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22295cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_222960:
    // 0x222960: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_222964:
    if (ctx->pc == 0x222964u) {
        ctx->pc = 0x222968u;
        goto label_222968;
    }
    ctx->pc = 0x222960u;
    {
        const bool branch_taken_0x222960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x222960) {
            ctx->pc = 0x22298Cu;
            goto label_22298c;
        }
    }
    ctx->pc = 0x222968u;
label_222968:
    // 0x222968: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x222968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22296c:
    // 0x22296c: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x22296cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_222970:
    // 0x222970: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x222970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_222974:
    // 0x222974: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x222974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_222978:
    // 0x222978: 0x8e250078  lw          $a1, 0x78($s1)
    ctx->pc = 0x222978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_22297c:
    // 0x22297c: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x22297cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_222980:
    // 0x222980: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x222980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_222984:
    // 0x222984: 0xc0a7ab4  jal         func_29EAD0
label_222988:
    if (ctx->pc == 0x222988u) {
        ctx->pc = 0x222988u;
            // 0x222988: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x22298Cu;
        goto label_22298c;
    }
    ctx->pc = 0x222984u;
    SET_GPR_U32(ctx, 31, 0x22298Cu);
    ctx->pc = 0x222988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222984u;
            // 0x222988: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22298Cu; }
        if (ctx->pc != 0x22298Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22298Cu; }
        if (ctx->pc != 0x22298Cu) { return; }
    }
    ctx->pc = 0x22298Cu;
label_22298c:
    // 0x22298c: 0x26220070  addiu       $v0, $s1, 0x70
    ctx->pc = 0x22298cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_222990:
    // 0x222990: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_222994:
    if (ctx->pc == 0x222994u) {
        ctx->pc = 0x222998u;
        goto label_222998;
    }
    ctx->pc = 0x222990u;
    {
        const bool branch_taken_0x222990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222990) {
            ctx->pc = 0x2229D0u;
            goto label_2229d0;
        }
    }
    ctx->pc = 0x222998u;
label_222998:
    // 0x222998: 0x96220076  lhu         $v0, 0x76($s1)
    ctx->pc = 0x222998u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 118)));
label_22299c:
    // 0x22299c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x22299cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_2229a0:
    // 0x2229a0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_2229a4:
    if (ctx->pc == 0x2229A4u) {
        ctx->pc = 0x2229A8u;
        goto label_2229a8;
    }
    ctx->pc = 0x2229A0u;
    {
        const bool branch_taken_0x2229a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2229a0) {
            ctx->pc = 0x2229D0u;
            goto label_2229d0;
        }
    }
    ctx->pc = 0x2229A8u;
label_2229a8:
    // 0x2229a8: 0x96230076  lhu         $v1, 0x76($s1)
    ctx->pc = 0x2229a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 118)));
label_2229ac:
    // 0x2229ac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2229acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2229b0:
    // 0x2229b0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2229b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2229b4:
    // 0x2229b4: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2229b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2229b8:
    // 0x2229b8: 0x8e250070  lw          $a1, 0x70($s1)
    ctx->pc = 0x2229b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_2229bc:
    // 0x2229bc: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x2229bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
label_2229c0:
    // 0x2229c0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2229c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2229c4:
    // 0x2229c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2229c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2229c8:
    // 0x2229c8: 0xc0a7ab4  jal         func_29EAD0
label_2229cc:
    if (ctx->pc == 0x2229CCu) {
        ctx->pc = 0x2229CCu;
            // 0x2229cc: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x2229D0u;
        goto label_2229d0;
    }
    ctx->pc = 0x2229C8u;
    SET_GPR_U32(ctx, 31, 0x2229D0u);
    ctx->pc = 0x2229CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2229C8u;
            // 0x2229cc: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2229D0u; }
        if (ctx->pc != 0x2229D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2229D0u; }
        if (ctx->pc != 0x2229D0u) { return; }
    }
    ctx->pc = 0x2229D0u;
label_2229d0:
    // 0x2229d0: 0x52200046  beql        $s1, $zero, . + 4 + (0x46 << 2)
label_2229d4:
    if (ctx->pc == 0x2229D4u) {
        ctx->pc = 0x2229D4u;
            // 0x2229d4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2229D8u;
        goto label_2229d8;
    }
    ctx->pc = 0x2229D0u;
    {
        const bool branch_taken_0x2229d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2229d0) {
            ctx->pc = 0x2229D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2229D0u;
            // 0x2229d4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222AECu;
            goto label_222aec;
        }
    }
    ctx->pc = 0x2229D8u;
label_2229d8:
    // 0x2229d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2229d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2229dc:
    // 0x2229dc: 0x2442f0e0  addiu       $v0, $v0, -0xF20
    ctx->pc = 0x2229dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963424));
label_2229e0:
    // 0x2229e0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2229e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2229e4:
    // 0x2229e4: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2229e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2229e8:
    // 0x2229e8: 0x50800012  beql        $a0, $zero, . + 4 + (0x12 << 2)
label_2229ec:
    if (ctx->pc == 0x2229ECu) {
        ctx->pc = 0x2229ECu;
            // 0x2229ec: 0x2622004c  addiu       $v0, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->pc = 0x2229F0u;
        goto label_2229f0;
    }
    ctx->pc = 0x2229E8u;
    {
        const bool branch_taken_0x2229e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2229e8) {
            ctx->pc = 0x2229ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2229E8u;
            // 0x2229ec: 0x2622004c  addiu       $v0, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222A34u;
            goto label_222a34;
        }
    }
    ctx->pc = 0x2229F0u;
label_2229f0:
    // 0x2229f0: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x2229f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_2229f4:
    // 0x2229f4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2229f8:
    if (ctx->pc == 0x2229F8u) {
        ctx->pc = 0x2229FCu;
        goto label_2229fc;
    }
    ctx->pc = 0x2229F4u;
    {
        const bool branch_taken_0x2229f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2229f4) {
            ctx->pc = 0x222A30u;
            goto label_222a30;
        }
    }
    ctx->pc = 0x2229FCu;
label_2229fc:
    // 0x2229fc: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x2229fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_222a00:
    // 0x222a00: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x222a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_222a04:
    // 0x222a04: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x222a04u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_222a08:
    // 0x222a08: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x222a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_222a0c:
    // 0x222a0c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x222a0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_222a10:
    // 0x222a10: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_222a14:
    if (ctx->pc == 0x222A14u) {
        ctx->pc = 0x222A18u;
        goto label_222a18;
    }
    ctx->pc = 0x222A10u;
    {
        const bool branch_taken_0x222a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x222a10) {
            ctx->pc = 0x222A30u;
            goto label_222a30;
        }
    }
    ctx->pc = 0x222A18u;
label_222a18:
    // 0x222a18: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_222a1c:
    if (ctx->pc == 0x222A1Cu) {
        ctx->pc = 0x222A20u;
        goto label_222a20;
    }
    ctx->pc = 0x222A18u;
    {
        const bool branch_taken_0x222a18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x222a18) {
            ctx->pc = 0x222A30u;
            goto label_222a30;
        }
    }
    ctx->pc = 0x222A20u;
label_222a20:
    // 0x222a20: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x222a20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_222a24:
    // 0x222a24: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x222a24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_222a28:
    // 0x222a28: 0x320f809  jalr        $t9
label_222a2c:
    if (ctx->pc == 0x222A2Cu) {
        ctx->pc = 0x222A2Cu;
            // 0x222a2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x222A30u;
        goto label_222a30;
    }
    ctx->pc = 0x222A28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x222A30u);
        ctx->pc = 0x222A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222A28u;
            // 0x222a2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x222A30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x222A30u; }
            if (ctx->pc != 0x222A30u) { return; }
        }
        }
    }
    ctx->pc = 0x222A30u;
label_222a30:
    // 0x222a30: 0x2622004c  addiu       $v0, $s1, 0x4C
    ctx->pc = 0x222a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
label_222a34:
    // 0x222a34: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_222a38:
    if (ctx->pc == 0x222A38u) {
        ctx->pc = 0x222A38u;
            // 0x222a38: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x222A3Cu;
        goto label_222a3c;
    }
    ctx->pc = 0x222A34u;
    {
        const bool branch_taken_0x222a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222a34) {
            ctx->pc = 0x222A38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x222A34u;
            // 0x222a38: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222A78u;
            goto label_222a78;
        }
    }
    ctx->pc = 0x222A3Cu;
label_222a3c:
    // 0x222a3c: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x222a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_222a40:
    // 0x222a40: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x222a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_222a44:
    // 0x222a44: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x222a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_222a48:
    // 0x222a48: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_222a4c:
    if (ctx->pc == 0x222A4Cu) {
        ctx->pc = 0x222A50u;
        goto label_222a50;
    }
    ctx->pc = 0x222A48u;
    {
        const bool branch_taken_0x222a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x222a48) {
            ctx->pc = 0x222A74u;
            goto label_222a74;
        }
    }
    ctx->pc = 0x222A50u;
label_222a50:
    // 0x222a50: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x222a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_222a54:
    // 0x222a54: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x222a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_222a58:
    // 0x222a58: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x222a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_222a5c:
    // 0x222a5c: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x222a5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_222a60:
    // 0x222a60: 0x8e25004c  lw          $a1, 0x4C($s1)
    ctx->pc = 0x222a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_222a64:
    // 0x222a64: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x222a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_222a68:
    // 0x222a68: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x222a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_222a6c:
    // 0x222a6c: 0xc0a7ab4  jal         func_29EAD0
label_222a70:
    if (ctx->pc == 0x222A70u) {
        ctx->pc = 0x222A70u;
            // 0x222a70: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x222A74u;
        goto label_222a74;
    }
    ctx->pc = 0x222A6Cu;
    SET_GPR_U32(ctx, 31, 0x222A74u);
    ctx->pc = 0x222A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222A6Cu;
            // 0x222a70: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222A74u; }
        if (ctx->pc != 0x222A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222A74u; }
        if (ctx->pc != 0x222A74u) { return; }
    }
    ctx->pc = 0x222A74u;
label_222a74:
    // 0x222a74: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x222a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_222a78:
    // 0x222a78: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_222a7c:
    if (ctx->pc == 0x222A7Cu) {
        ctx->pc = 0x222A80u;
        goto label_222a80;
    }
    ctx->pc = 0x222A78u;
    {
        const bool branch_taken_0x222a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222a78) {
            ctx->pc = 0x222AC4u;
            goto label_222ac4;
        }
    }
    ctx->pc = 0x222A80u;
label_222a80:
    // 0x222a80: 0x26220034  addiu       $v0, $s1, 0x34
    ctx->pc = 0x222a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
label_222a84:
    // 0x222a84: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_222a88:
    if (ctx->pc == 0x222A88u) {
        ctx->pc = 0x222A8Cu;
        goto label_222a8c;
    }
    ctx->pc = 0x222A84u;
    {
        const bool branch_taken_0x222a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222a84) {
            ctx->pc = 0x222AC4u;
            goto label_222ac4;
        }
    }
    ctx->pc = 0x222A8Cu;
label_222a8c:
    // 0x222a8c: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x222a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_222a90:
    // 0x222a90: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x222a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_222a94:
    // 0x222a94: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x222a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_222a98:
    // 0x222a98: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_222a9c:
    if (ctx->pc == 0x222A9Cu) {
        ctx->pc = 0x222AA0u;
        goto label_222aa0;
    }
    ctx->pc = 0x222A98u;
    {
        const bool branch_taken_0x222a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x222a98) {
            ctx->pc = 0x222AC4u;
            goto label_222ac4;
        }
    }
    ctx->pc = 0x222AA0u;
label_222aa0:
    // 0x222aa0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x222aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_222aa4:
    // 0x222aa4: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x222aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_222aa8:
    // 0x222aa8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x222aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_222aac:
    // 0x222aac: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x222aacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_222ab0:
    // 0x222ab0: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x222ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_222ab4:
    // 0x222ab4: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x222ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_222ab8:
    // 0x222ab8: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x222ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_222abc:
    // 0x222abc: 0xc0a7ab4  jal         func_29EAD0
label_222ac0:
    if (ctx->pc == 0x222AC0u) {
        ctx->pc = 0x222AC0u;
            // 0x222ac0: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->pc = 0x222AC4u;
        goto label_222ac4;
    }
    ctx->pc = 0x222ABCu;
    SET_GPR_U32(ctx, 31, 0x222AC4u);
    ctx->pc = 0x222AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222ABCu;
            // 0x222ac0: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222AC4u; }
        if (ctx->pc != 0x222AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222AC4u; }
        if (ctx->pc != 0x222AC4u) { return; }
    }
    ctx->pc = 0x222AC4u;
label_222ac4:
    // 0x222ac4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_222ac8:
    if (ctx->pc == 0x222AC8u) {
        ctx->pc = 0x222ACCu;
        goto label_222acc;
    }
    ctx->pc = 0x222AC4u;
    {
        const bool branch_taken_0x222ac4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x222ac4) {
            ctx->pc = 0x222AE8u;
            goto label_222ae8;
        }
    }
    ctx->pc = 0x222ACCu;
label_222acc:
    // 0x222acc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x222accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_222ad0:
    // 0x222ad0: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x222ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_222ad4:
    // 0x222ad4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_222ad8:
    if (ctx->pc == 0x222AD8u) {
        ctx->pc = 0x222AD8u;
            // 0x222ad8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x222ADCu;
        goto label_222adc;
    }
    ctx->pc = 0x222AD4u;
    {
        const bool branch_taken_0x222ad4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x222AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222AD4u;
            // 0x222ad8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222ad4) {
            ctx->pc = 0x222AE8u;
            goto label_222ae8;
        }
    }
    ctx->pc = 0x222ADCu;
label_222adc:
    // 0x222adc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x222adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_222ae0:
    // 0x222ae0: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x222ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_222ae4:
    // 0x222ae4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x222ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_222ae8:
    // 0x222ae8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x222ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_222aec:
    // 0x222aec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x222aecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_222af0:
    // 0x222af0: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_222af4:
    if (ctx->pc == 0x222AF4u) {
        ctx->pc = 0x222AF4u;
            // 0x222af4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x222AF8u;
        goto label_222af8;
    }
    ctx->pc = 0x222AF0u;
    {
        const bool branch_taken_0x222af0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x222af0) {
            ctx->pc = 0x222AF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x222AF0u;
            // 0x222af4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222B14u;
            goto label_222b14;
        }
    }
    ctx->pc = 0x222AF8u;
label_222af8:
    // 0x222af8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x222af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_222afc:
    // 0x222afc: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x222afcu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_222b00:
    // 0x222b00: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x222b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_222b04:
    // 0x222b04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x222b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_222b08:
    // 0x222b08: 0xc0a7ab4  jal         func_29EAD0
label_222b0c:
    if (ctx->pc == 0x222B0Cu) {
        ctx->pc = 0x222B0Cu;
            // 0x222b0c: 0x2407002b  addiu       $a3, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->pc = 0x222B10u;
        goto label_222b10;
    }
    ctx->pc = 0x222B08u;
    SET_GPR_U32(ctx, 31, 0x222B10u);
    ctx->pc = 0x222B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222B08u;
            // 0x222b0c: 0x2407002b  addiu       $a3, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222B10u; }
        if (ctx->pc != 0x222B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222B10u; }
        if (ctx->pc != 0x222B10u) { return; }
    }
    ctx->pc = 0x222B10u;
label_222b10:
    // 0x222b10: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x222b10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_222b14:
    // 0x222b14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x222b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_222b18:
    // 0x222b18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x222b18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_222b1c:
    // 0x222b1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x222b1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_222b20:
    // 0x222b20: 0x3e00008  jr          $ra
label_222b24:
    if (ctx->pc == 0x222B24u) {
        ctx->pc = 0x222B24u;
            // 0x222b24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x222B28u;
        goto label_222b28;
    }
    ctx->pc = 0x222B20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222B20u;
            // 0x222b24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x222B28u;
label_222b28:
    // 0x222b28: 0x0  nop
    ctx->pc = 0x222b28u;
    // NOP
label_222b2c:
    // 0x222b2c: 0x0  nop
    ctx->pc = 0x222b2cu;
    // NOP
}
