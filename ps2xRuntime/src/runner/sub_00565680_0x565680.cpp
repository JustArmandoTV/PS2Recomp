#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00565680
// Address: 0x565680 - 0x565920
void sub_00565680_0x565680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00565680_0x565680");
#endif

    switch (ctx->pc) {
        case 0x565680u: goto label_565680;
        case 0x565684u: goto label_565684;
        case 0x565688u: goto label_565688;
        case 0x56568cu: goto label_56568c;
        case 0x565690u: goto label_565690;
        case 0x565694u: goto label_565694;
        case 0x565698u: goto label_565698;
        case 0x56569cu: goto label_56569c;
        case 0x5656a0u: goto label_5656a0;
        case 0x5656a4u: goto label_5656a4;
        case 0x5656a8u: goto label_5656a8;
        case 0x5656acu: goto label_5656ac;
        case 0x5656b0u: goto label_5656b0;
        case 0x5656b4u: goto label_5656b4;
        case 0x5656b8u: goto label_5656b8;
        case 0x5656bcu: goto label_5656bc;
        case 0x5656c0u: goto label_5656c0;
        case 0x5656c4u: goto label_5656c4;
        case 0x5656c8u: goto label_5656c8;
        case 0x5656ccu: goto label_5656cc;
        case 0x5656d0u: goto label_5656d0;
        case 0x5656d4u: goto label_5656d4;
        case 0x5656d8u: goto label_5656d8;
        case 0x5656dcu: goto label_5656dc;
        case 0x5656e0u: goto label_5656e0;
        case 0x5656e4u: goto label_5656e4;
        case 0x5656e8u: goto label_5656e8;
        case 0x5656ecu: goto label_5656ec;
        case 0x5656f0u: goto label_5656f0;
        case 0x5656f4u: goto label_5656f4;
        case 0x5656f8u: goto label_5656f8;
        case 0x5656fcu: goto label_5656fc;
        case 0x565700u: goto label_565700;
        case 0x565704u: goto label_565704;
        case 0x565708u: goto label_565708;
        case 0x56570cu: goto label_56570c;
        case 0x565710u: goto label_565710;
        case 0x565714u: goto label_565714;
        case 0x565718u: goto label_565718;
        case 0x56571cu: goto label_56571c;
        case 0x565720u: goto label_565720;
        case 0x565724u: goto label_565724;
        case 0x565728u: goto label_565728;
        case 0x56572cu: goto label_56572c;
        case 0x565730u: goto label_565730;
        case 0x565734u: goto label_565734;
        case 0x565738u: goto label_565738;
        case 0x56573cu: goto label_56573c;
        case 0x565740u: goto label_565740;
        case 0x565744u: goto label_565744;
        case 0x565748u: goto label_565748;
        case 0x56574cu: goto label_56574c;
        case 0x565750u: goto label_565750;
        case 0x565754u: goto label_565754;
        case 0x565758u: goto label_565758;
        case 0x56575cu: goto label_56575c;
        case 0x565760u: goto label_565760;
        case 0x565764u: goto label_565764;
        case 0x565768u: goto label_565768;
        case 0x56576cu: goto label_56576c;
        case 0x565770u: goto label_565770;
        case 0x565774u: goto label_565774;
        case 0x565778u: goto label_565778;
        case 0x56577cu: goto label_56577c;
        case 0x565780u: goto label_565780;
        case 0x565784u: goto label_565784;
        case 0x565788u: goto label_565788;
        case 0x56578cu: goto label_56578c;
        case 0x565790u: goto label_565790;
        case 0x565794u: goto label_565794;
        case 0x565798u: goto label_565798;
        case 0x56579cu: goto label_56579c;
        case 0x5657a0u: goto label_5657a0;
        case 0x5657a4u: goto label_5657a4;
        case 0x5657a8u: goto label_5657a8;
        case 0x5657acu: goto label_5657ac;
        case 0x5657b0u: goto label_5657b0;
        case 0x5657b4u: goto label_5657b4;
        case 0x5657b8u: goto label_5657b8;
        case 0x5657bcu: goto label_5657bc;
        case 0x5657c0u: goto label_5657c0;
        case 0x5657c4u: goto label_5657c4;
        case 0x5657c8u: goto label_5657c8;
        case 0x5657ccu: goto label_5657cc;
        case 0x5657d0u: goto label_5657d0;
        case 0x5657d4u: goto label_5657d4;
        case 0x5657d8u: goto label_5657d8;
        case 0x5657dcu: goto label_5657dc;
        case 0x5657e0u: goto label_5657e0;
        case 0x5657e4u: goto label_5657e4;
        case 0x5657e8u: goto label_5657e8;
        case 0x5657ecu: goto label_5657ec;
        case 0x5657f0u: goto label_5657f0;
        case 0x5657f4u: goto label_5657f4;
        case 0x5657f8u: goto label_5657f8;
        case 0x5657fcu: goto label_5657fc;
        case 0x565800u: goto label_565800;
        case 0x565804u: goto label_565804;
        case 0x565808u: goto label_565808;
        case 0x56580cu: goto label_56580c;
        case 0x565810u: goto label_565810;
        case 0x565814u: goto label_565814;
        case 0x565818u: goto label_565818;
        case 0x56581cu: goto label_56581c;
        case 0x565820u: goto label_565820;
        case 0x565824u: goto label_565824;
        case 0x565828u: goto label_565828;
        case 0x56582cu: goto label_56582c;
        case 0x565830u: goto label_565830;
        case 0x565834u: goto label_565834;
        case 0x565838u: goto label_565838;
        case 0x56583cu: goto label_56583c;
        case 0x565840u: goto label_565840;
        case 0x565844u: goto label_565844;
        case 0x565848u: goto label_565848;
        case 0x56584cu: goto label_56584c;
        case 0x565850u: goto label_565850;
        case 0x565854u: goto label_565854;
        case 0x565858u: goto label_565858;
        case 0x56585cu: goto label_56585c;
        case 0x565860u: goto label_565860;
        case 0x565864u: goto label_565864;
        case 0x565868u: goto label_565868;
        case 0x56586cu: goto label_56586c;
        case 0x565870u: goto label_565870;
        case 0x565874u: goto label_565874;
        case 0x565878u: goto label_565878;
        case 0x56587cu: goto label_56587c;
        case 0x565880u: goto label_565880;
        case 0x565884u: goto label_565884;
        case 0x565888u: goto label_565888;
        case 0x56588cu: goto label_56588c;
        case 0x565890u: goto label_565890;
        case 0x565894u: goto label_565894;
        case 0x565898u: goto label_565898;
        case 0x56589cu: goto label_56589c;
        case 0x5658a0u: goto label_5658a0;
        case 0x5658a4u: goto label_5658a4;
        case 0x5658a8u: goto label_5658a8;
        case 0x5658acu: goto label_5658ac;
        case 0x5658b0u: goto label_5658b0;
        case 0x5658b4u: goto label_5658b4;
        case 0x5658b8u: goto label_5658b8;
        case 0x5658bcu: goto label_5658bc;
        case 0x5658c0u: goto label_5658c0;
        case 0x5658c4u: goto label_5658c4;
        case 0x5658c8u: goto label_5658c8;
        case 0x5658ccu: goto label_5658cc;
        case 0x5658d0u: goto label_5658d0;
        case 0x5658d4u: goto label_5658d4;
        case 0x5658d8u: goto label_5658d8;
        case 0x5658dcu: goto label_5658dc;
        case 0x5658e0u: goto label_5658e0;
        case 0x5658e4u: goto label_5658e4;
        case 0x5658e8u: goto label_5658e8;
        case 0x5658ecu: goto label_5658ec;
        case 0x5658f0u: goto label_5658f0;
        case 0x5658f4u: goto label_5658f4;
        case 0x5658f8u: goto label_5658f8;
        case 0x5658fcu: goto label_5658fc;
        case 0x565900u: goto label_565900;
        case 0x565904u: goto label_565904;
        case 0x565908u: goto label_565908;
        case 0x56590cu: goto label_56590c;
        case 0x565910u: goto label_565910;
        case 0x565914u: goto label_565914;
        case 0x565918u: goto label_565918;
        case 0x56591cu: goto label_56591c;
        default: break;
    }

    ctx->pc = 0x565680u;

label_565680:
    // 0x565680: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x565680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_565684:
    // 0x565684: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x565684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_565688:
    // 0x565688: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x565688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_56568c:
    // 0x56568c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x56568cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_565690:
    // 0x565690: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x565690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_565694:
    // 0x565694: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x565694u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_565698:
    // 0x565698: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x565698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_56569c:
    // 0x56569c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x56569cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_5656a0:
    // 0x5656a0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x5656a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_5656a4:
    // 0x5656a4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x5656a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5656a8:
    // 0x5656a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x5656a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_5656ac:
    // 0x5656ac: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x5656acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_5656b0:
    // 0x5656b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x5656b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_5656b4:
    // 0x5656b4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x5656b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_5656b8:
    // 0x5656b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5656b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5656bc:
    // 0x5656bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5656bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5656c0:
    // 0x5656c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x5656c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_5656c4:
    // 0x5656c4: 0x8c530e68  lw          $s3, 0xE68($v0)
    ctx->pc = 0x5656c4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_5656c8:
    // 0x5656c8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x5656c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_5656cc:
    // 0x5656cc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x5656ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_5656d0:
    // 0x5656d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5656d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5656d4:
    // 0x5656d4: 0x8e720010  lw          $s2, 0x10($s3)
    ctx->pc = 0x5656d4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_5656d8:
    // 0x5656d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x5656d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_5656dc:
    // 0x5656dc: 0xc0ee398  jal         func_3B8E60
label_5656e0:
    if (ctx->pc == 0x5656E0u) {
        ctx->pc = 0x5656E0u;
            // 0x5656e0: 0xae710010  sw          $s1, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 17));
        ctx->pc = 0x5656E4u;
        goto label_5656e4;
    }
    ctx->pc = 0x5656DCu;
    SET_GPR_U32(ctx, 31, 0x5656E4u);
    ctx->pc = 0x5656E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5656DCu;
            // 0x5656e0: 0xae710010  sw          $s1, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8E60u;
    if (runtime->hasFunction(0x3B8E60u)) {
        auto targetFn = runtime->lookupFunction(0x3B8E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5656E4u; }
        if (ctx->pc != 0x5656E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8E60_0x3b8e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5656E4u; }
        if (ctx->pc != 0x5656E4u) { return; }
    }
    ctx->pc = 0x5656E4u;
label_5656e4:
    // 0x5656e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x5656e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_5656e8:
    // 0x5656e8: 0x12820058  beq         $s4, $v0, . + 4 + (0x58 << 2)
label_5656ec:
    if (ctx->pc == 0x5656ECu) {
        ctx->pc = 0x5656ECu;
            // 0x5656ec: 0xae720010  sw          $s2, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 18));
        ctx->pc = 0x5656F0u;
        goto label_5656f0;
    }
    ctx->pc = 0x5656E8u;
    {
        const bool branch_taken_0x5656e8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x5656ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5656E8u;
            // 0x5656ec: 0xae720010  sw          $s2, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5656e8) {
            ctx->pc = 0x56584Cu;
            goto label_56584c;
        }
    }
    ctx->pc = 0x5656F0u;
label_5656f0:
    // 0x5656f0: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x5656f0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_5656f4:
    // 0x5656f4: 0x82a3007d  lb          $v1, 0x7D($s5)
    ctx->pc = 0x5656f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 125)));
label_5656f8:
    // 0x5656f8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x5656f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_5656fc:
    // 0x5656fc: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x5656fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_565700:
    // 0x565700: 0x3c070067  lui         $a3, 0x67
    ctx->pc = 0x565700u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)103 << 16));
label_565704:
    // 0x565704: 0x3c0b40c0  lui         $t3, 0x40C0
    ctx->pc = 0x565704u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16576 << 16));
label_565708:
    // 0x565708: 0x741826  xor         $v1, $v1, $s4
    ctx->pc = 0x565708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 20));
label_56570c:
    // 0x56570c: 0x3c090067  lui         $t1, 0x67
    ctx->pc = 0x56570cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)103 << 16));
label_565710:
    // 0x565710: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x565710u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_565714:
    // 0x565714: 0x3c080067  lui         $t0, 0x67
    ctx->pc = 0x565714u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)103 << 16));
label_565718:
    // 0x565718: 0x2442fb28  addiu       $v0, $v0, -0x4D8
    ctx->pc = 0x565718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966056));
label_56571c:
    // 0x56571c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x56571cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_565720:
    // 0x565720: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x565720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_565724:
    // 0x565724: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x565724u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_565728:
    // 0x565728: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x565728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_56572c:
    // 0x56572c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x56572cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_565730:
    // 0x565730: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x565730u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_565734:
    // 0x565734: 0xc4e2f798  lwc1        $f2, -0x868($a3)
    ctx->pc = 0x565734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294965144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_565738:
    // 0x565738: 0x846af780  lh          $t2, -0x880($v1)
    ctx->pc = 0x565738u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294965120)));
label_56573c:
    // 0x56573c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x56573cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_565740:
    // 0x565740: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x565740u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_565744:
    // 0x565744: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x565744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_565748:
    // 0x565748: 0x8443f782  lh          $v1, -0x87E($v0)
    ctx->pc = 0x565748u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294965122)));
label_56574c:
    // 0x56574c: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x56574cu;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_565750:
    // 0x565750: 0x0  nop
    ctx->pc = 0x565750u;
    // NOP
label_565754:
    // 0x565754: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x565754u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_565758:
    // 0x565758: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x565758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_56575c:
    // 0x56575c: 0x8c440eb8  lw          $a0, 0xEB8($v0)
    ctx->pc = 0x56575cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3768)));
label_565760:
    // 0x565760: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x565760u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_565764:
    // 0x565764: 0xc521f790  lwc1        $f1, -0x870($t1)
    ctx->pc = 0x565764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294965136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_565768:
    // 0x565768: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x565768u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
label_56576c:
    // 0x56576c: 0xc500f794  lwc1        $f0, -0x86C($t0)
    ctx->pc = 0x56576cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294965140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_565770:
    // 0x565770: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x565770u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_565774:
    // 0x565774: 0xc4c1f79c  lwc1        $f1, -0x864($a2)
    ctx->pc = 0x565774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294965148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_565778:
    // 0x565778: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x565778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_56577c:
    // 0x56577c: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x56577cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_565780:
    // 0x565780: 0xe7a1008c  swc1        $f1, 0x8C($sp)
    ctx->pc = 0x565780u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_565784:
    // 0x565784: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x565784u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_565788:
    // 0x565788: 0xc7a40080  lwc1        $f4, 0x80($sp)
    ctx->pc = 0x565788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_56578c:
    // 0x56578c: 0xc7a30088  lwc1        $f3, 0x88($sp)
    ctx->pc = 0x56578cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_565790:
    // 0x565790: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x565790u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_565794:
    // 0x565794: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x565794u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_565798:
    // 0x565798: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x565798u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[0];
label_56579c:
    // 0x56579c: 0x46002003  div.s       $f0, $f4, $f0
    ctx->pc = 0x56579cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[0] = ctx->f[4] / ctx->f[0];
label_5657a0:
    // 0x5657a0: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x5657a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_5657a4:
    // 0x5657a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5657a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5657a8:
    // 0x5657a8: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x5657a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5657ac:
    // 0x5657ac: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x5657acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5657b0:
    // 0x5657b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x5657b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_5657b4:
    // 0x5657b4: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x5657b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_5657b8:
    // 0x5657b8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x5657b8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_5657bc:
    // 0x5657bc: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x5657bcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
label_5657c0:
    // 0x5657c0: 0xe7a30088  swc1        $f3, 0x88($sp)
    ctx->pc = 0x5657c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_5657c4:
    // 0x5657c4: 0x0  nop
    ctx->pc = 0x5657c4u;
    // NOP
label_5657c8:
    // 0x5657c8: 0xe7a1008c  swc1        $f1, 0x8C($sp)
    ctx->pc = 0x5657c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_5657cc:
    // 0x5657cc: 0xc0506ac  jal         func_141AB0
label_5657d0:
    if (ctx->pc == 0x5657D0u) {
        ctx->pc = 0x5657D0u;
            // 0x5657d0: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->pc = 0x5657D4u;
        goto label_5657d4;
    }
    ctx->pc = 0x5657CCu;
    SET_GPR_U32(ctx, 31, 0x5657D4u);
    ctx->pc = 0x5657D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5657CCu;
            // 0x5657d0: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5657D4u; }
        if (ctx->pc != 0x5657D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5657D4u; }
        if (ctx->pc != 0x5657D4u) { return; }
    }
    ctx->pc = 0x5657D4u;
label_5657d4:
    // 0x5657d4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5657d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_5657d8:
    // 0x5657d8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x5657d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5657dc:
    // 0x5657dc: 0x8c4289e0  lw          $v0, -0x7620($v0)
    ctx->pc = 0x5657dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_5657e0:
    // 0x5657e0: 0x8c590008  lw          $t9, 0x8($v0)
    ctx->pc = 0x5657e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_5657e4:
    // 0x5657e4: 0x24540004  addiu       $s4, $v0, 0x4
    ctx->pc = 0x5657e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_5657e8:
    // 0x5657e8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x5657e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_5657ec:
    // 0x5657ec: 0x320f809  jalr        $t9
label_5657f0:
    if (ctx->pc == 0x5657F0u) {
        ctx->pc = 0x5657F0u;
            // 0x5657f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5657F4u;
        goto label_5657f4;
    }
    ctx->pc = 0x5657ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5657F4u);
        ctx->pc = 0x5657F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5657ECu;
            // 0x5657f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5657F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5657F4u; }
            if (ctx->pc != 0x5657F4u) { return; }
        }
        }
    }
    ctx->pc = 0x5657F4u;
label_5657f4:
    // 0x5657f4: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x5657f4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5657f8:
    // 0x5657f8: 0x8e990004  lw          $t9, 0x4($s4)
    ctx->pc = 0x5657f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_5657fc:
    // 0x5657fc: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x5657fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_565800:
    // 0x565800: 0x2609fffa  addiu       $t1, $s0, -0x6
    ctx->pc = 0x565800u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967290));
label_565804:
    // 0x565804: 0x3c084334  lui         $t0, 0x4334
    ctx->pc = 0x565804u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17204 << 16));
label_565808:
    // 0x565808: 0x3c0343e6  lui         $v1, 0x43E6
    ctx->pc = 0x565808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17382 << 16));
label_56580c:
    // 0x56580c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x56580cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_565810:
    // 0x565810: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x565810u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_565814:
    // 0x565814: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x565814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_565818:
    // 0x565818: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x565818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_56581c:
    // 0x56581c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x56581cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_565820:
    // 0x565820: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x565820u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_565824:
    // 0x565824: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x565824u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_565828:
    // 0x565828: 0x44886000  mtc1        $t0, $f12
    ctx->pc = 0x565828u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_56582c:
    // 0x56582c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x56582cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_565830:
    // 0x565830: 0x44828000  mtc1        $v0, $f16
    ctx->pc = 0x565830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_565834:
    // 0x565834: 0x320f809  jalr        $t9
label_565838:
    if (ctx->pc == 0x565838u) {
        ctx->pc = 0x565838u;
            // 0x565838: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x56583Cu;
        goto label_56583c;
    }
    ctx->pc = 0x565834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x56583Cu);
        ctx->pc = 0x565838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x565834u;
            // 0x565838: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x56583Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x56583Cu; }
            if (ctx->pc != 0x56583Cu) { return; }
        }
        }
    }
    ctx->pc = 0x56583Cu;
label_56583c:
    // 0x56583c: 0x8e990004  lw          $t9, 0x4($s4)
    ctx->pc = 0x56583cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_565840:
    // 0x565840: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x565840u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_565844:
    // 0x565844: 0x320f809  jalr        $t9
label_565848:
    if (ctx->pc == 0x565848u) {
        ctx->pc = 0x565848u;
            // 0x565848: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56584Cu;
        goto label_56584c;
    }
    ctx->pc = 0x565844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x56584Cu);
        ctx->pc = 0x565848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x565844u;
            // 0x565848: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x56584Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x56584Cu; }
            if (ctx->pc != 0x56584Cu) { return; }
        }
        }
    }
    ctx->pc = 0x56584Cu;
label_56584c:
    // 0x56584c: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x56584cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_565850:
    // 0x565850: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x565850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_565854:
    // 0x565854: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x565854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_565858:
    // 0x565858: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x565858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_56585c:
    // 0x56585c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x56585cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_565860:
    // 0x565860: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x565860u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_565864:
    // 0x565864: 0x0  nop
    ctx->pc = 0x565864u;
    // NOP
label_565868:
    // 0x565868: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x565868u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_56586c:
    // 0x56586c: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x56586cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_565870:
    // 0x565870: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x565870u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_565874:
    // 0x565874: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_565878:
    if (ctx->pc == 0x565878u) {
        ctx->pc = 0x565878u;
            // 0x565878: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x56587Cu;
        goto label_56587c;
    }
    ctx->pc = 0x565874u;
    {
        const bool branch_taken_0x565874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x565878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x565874u;
            // 0x565878: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x565874) {
            ctx->pc = 0x565898u;
            goto label_565898;
        }
    }
    ctx->pc = 0x56587Cu;
label_56587c:
    // 0x56587c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x56587cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_565880:
    // 0x565880: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x565880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_565884:
    // 0x565884: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x565884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_565888:
    // 0x565888: 0x0  nop
    ctx->pc = 0x565888u;
    // NOP
label_56588c:
    // 0x56588c: 0x0  nop
    ctx->pc = 0x56588cu;
    // NOP
label_565890:
    // 0x565890: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_565894:
    if (ctx->pc == 0x565894u) {
        ctx->pc = 0x565898u;
        goto label_565898;
    }
    ctx->pc = 0x565890u;
    {
        const bool branch_taken_0x565890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x565890) {
            ctx->pc = 0x56587Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_56587c;
        }
    }
    ctx->pc = 0x565898u;
label_565898:
    // 0x565898: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x565898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_56589c:
    // 0x56589c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x56589cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_5658a0:
    // 0x5658a0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x5658a0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5658a4:
    // 0x5658a4: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x5658a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
label_5658a8:
    // 0x5658a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x5658a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_5658ac:
    // 0x5658ac: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x5658acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_5658b0:
    // 0x5658b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x5658b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_5658b4:
    // 0x5658b4: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x5658b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_5658b8:
    // 0x5658b8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x5658b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_5658bc:
    // 0x5658bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x5658bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5658c0:
    // 0x5658c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x5658c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5658c4:
    // 0x5658c4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x5658c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5658c8:
    // 0x5658c8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x5658c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5658cc:
    // 0x5658cc: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x5658ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_5658d0:
    // 0x5658d0: 0x8e700010  lw          $s0, 0x10($s3)
    ctx->pc = 0x5658d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_5658d4:
    // 0x5658d4: 0xc0ee334  jal         func_3B8CD0
label_5658d8:
    if (ctx->pc == 0x5658D8u) {
        ctx->pc = 0x5658D8u;
            // 0x5658d8: 0xae710010  sw          $s1, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 17));
        ctx->pc = 0x5658DCu;
        goto label_5658dc;
    }
    ctx->pc = 0x5658D4u;
    SET_GPR_U32(ctx, 31, 0x5658DCu);
    ctx->pc = 0x5658D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5658D4u;
            // 0x5658d8: 0xae710010  sw          $s1, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8CD0u;
    if (runtime->hasFunction(0x3B8CD0u)) {
        auto targetFn = runtime->lookupFunction(0x3B8CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5658DCu; }
        if (ctx->pc != 0x5658DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8CD0_0x3b8cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5658DCu; }
        if (ctx->pc != 0x5658DCu) { return; }
    }
    ctx->pc = 0x5658DCu;
label_5658dc:
    // 0x5658dc: 0xae700010  sw          $s0, 0x10($s3)
    ctx->pc = 0x5658dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 16));
label_5658e0:
    // 0x5658e0: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x5658e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5658e4:
    // 0x5658e4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x5658e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_5658e8:
    // 0x5658e8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x5658e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_5658ec:
    // 0x5658ec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x5658ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_5658f0:
    // 0x5658f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5658f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_5658f4:
    // 0x5658f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x5658f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_5658f8:
    // 0x5658f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x5658f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_5658fc:
    // 0x5658fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x5658fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_565900:
    // 0x565900: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x565900u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_565904:
    // 0x565904: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x565904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_565908:
    // 0x565908: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x565908u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_56590c:
    // 0x56590c: 0x3e00008  jr          $ra
label_565910:
    if (ctx->pc == 0x565910u) {
        ctx->pc = 0x565910u;
            // 0x565910: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x565914u;
        goto label_565914;
    }
    ctx->pc = 0x56590Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x565910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56590Cu;
            // 0x565910: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x565914u;
label_565914:
    // 0x565914: 0x0  nop
    ctx->pc = 0x565914u;
    // NOP
label_565918:
    // 0x565918: 0x0  nop
    ctx->pc = 0x565918u;
    // NOP
label_56591c:
    // 0x56591c: 0x0  nop
    ctx->pc = 0x56591cu;
    // NOP
}
