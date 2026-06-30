#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E0460
// Address: 0x1e0460 - 0x1e0730
void sub_001E0460_0x1e0460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0460_0x1e0460");
#endif

    switch (ctx->pc) {
        case 0x1e0460u: goto label_1e0460;
        case 0x1e0464u: goto label_1e0464;
        case 0x1e0468u: goto label_1e0468;
        case 0x1e046cu: goto label_1e046c;
        case 0x1e0470u: goto label_1e0470;
        case 0x1e0474u: goto label_1e0474;
        case 0x1e0478u: goto label_1e0478;
        case 0x1e047cu: goto label_1e047c;
        case 0x1e0480u: goto label_1e0480;
        case 0x1e0484u: goto label_1e0484;
        case 0x1e0488u: goto label_1e0488;
        case 0x1e048cu: goto label_1e048c;
        case 0x1e0490u: goto label_1e0490;
        case 0x1e0494u: goto label_1e0494;
        case 0x1e0498u: goto label_1e0498;
        case 0x1e049cu: goto label_1e049c;
        case 0x1e04a0u: goto label_1e04a0;
        case 0x1e04a4u: goto label_1e04a4;
        case 0x1e04a8u: goto label_1e04a8;
        case 0x1e04acu: goto label_1e04ac;
        case 0x1e04b0u: goto label_1e04b0;
        case 0x1e04b4u: goto label_1e04b4;
        case 0x1e04b8u: goto label_1e04b8;
        case 0x1e04bcu: goto label_1e04bc;
        case 0x1e04c0u: goto label_1e04c0;
        case 0x1e04c4u: goto label_1e04c4;
        case 0x1e04c8u: goto label_1e04c8;
        case 0x1e04ccu: goto label_1e04cc;
        case 0x1e04d0u: goto label_1e04d0;
        case 0x1e04d4u: goto label_1e04d4;
        case 0x1e04d8u: goto label_1e04d8;
        case 0x1e04dcu: goto label_1e04dc;
        case 0x1e04e0u: goto label_1e04e0;
        case 0x1e04e4u: goto label_1e04e4;
        case 0x1e04e8u: goto label_1e04e8;
        case 0x1e04ecu: goto label_1e04ec;
        case 0x1e04f0u: goto label_1e04f0;
        case 0x1e04f4u: goto label_1e04f4;
        case 0x1e04f8u: goto label_1e04f8;
        case 0x1e04fcu: goto label_1e04fc;
        case 0x1e0500u: goto label_1e0500;
        case 0x1e0504u: goto label_1e0504;
        case 0x1e0508u: goto label_1e0508;
        case 0x1e050cu: goto label_1e050c;
        case 0x1e0510u: goto label_1e0510;
        case 0x1e0514u: goto label_1e0514;
        case 0x1e0518u: goto label_1e0518;
        case 0x1e051cu: goto label_1e051c;
        case 0x1e0520u: goto label_1e0520;
        case 0x1e0524u: goto label_1e0524;
        case 0x1e0528u: goto label_1e0528;
        case 0x1e052cu: goto label_1e052c;
        case 0x1e0530u: goto label_1e0530;
        case 0x1e0534u: goto label_1e0534;
        case 0x1e0538u: goto label_1e0538;
        case 0x1e053cu: goto label_1e053c;
        case 0x1e0540u: goto label_1e0540;
        case 0x1e0544u: goto label_1e0544;
        case 0x1e0548u: goto label_1e0548;
        case 0x1e054cu: goto label_1e054c;
        case 0x1e0550u: goto label_1e0550;
        case 0x1e0554u: goto label_1e0554;
        case 0x1e0558u: goto label_1e0558;
        case 0x1e055cu: goto label_1e055c;
        case 0x1e0560u: goto label_1e0560;
        case 0x1e0564u: goto label_1e0564;
        case 0x1e0568u: goto label_1e0568;
        case 0x1e056cu: goto label_1e056c;
        case 0x1e0570u: goto label_1e0570;
        case 0x1e0574u: goto label_1e0574;
        case 0x1e0578u: goto label_1e0578;
        case 0x1e057cu: goto label_1e057c;
        case 0x1e0580u: goto label_1e0580;
        case 0x1e0584u: goto label_1e0584;
        case 0x1e0588u: goto label_1e0588;
        case 0x1e058cu: goto label_1e058c;
        case 0x1e0590u: goto label_1e0590;
        case 0x1e0594u: goto label_1e0594;
        case 0x1e0598u: goto label_1e0598;
        case 0x1e059cu: goto label_1e059c;
        case 0x1e05a0u: goto label_1e05a0;
        case 0x1e05a4u: goto label_1e05a4;
        case 0x1e05a8u: goto label_1e05a8;
        case 0x1e05acu: goto label_1e05ac;
        case 0x1e05b0u: goto label_1e05b0;
        case 0x1e05b4u: goto label_1e05b4;
        case 0x1e05b8u: goto label_1e05b8;
        case 0x1e05bcu: goto label_1e05bc;
        case 0x1e05c0u: goto label_1e05c0;
        case 0x1e05c4u: goto label_1e05c4;
        case 0x1e05c8u: goto label_1e05c8;
        case 0x1e05ccu: goto label_1e05cc;
        case 0x1e05d0u: goto label_1e05d0;
        case 0x1e05d4u: goto label_1e05d4;
        case 0x1e05d8u: goto label_1e05d8;
        case 0x1e05dcu: goto label_1e05dc;
        case 0x1e05e0u: goto label_1e05e0;
        case 0x1e05e4u: goto label_1e05e4;
        case 0x1e05e8u: goto label_1e05e8;
        case 0x1e05ecu: goto label_1e05ec;
        case 0x1e05f0u: goto label_1e05f0;
        case 0x1e05f4u: goto label_1e05f4;
        case 0x1e05f8u: goto label_1e05f8;
        case 0x1e05fcu: goto label_1e05fc;
        case 0x1e0600u: goto label_1e0600;
        case 0x1e0604u: goto label_1e0604;
        case 0x1e0608u: goto label_1e0608;
        case 0x1e060cu: goto label_1e060c;
        case 0x1e0610u: goto label_1e0610;
        case 0x1e0614u: goto label_1e0614;
        case 0x1e0618u: goto label_1e0618;
        case 0x1e061cu: goto label_1e061c;
        case 0x1e0620u: goto label_1e0620;
        case 0x1e0624u: goto label_1e0624;
        case 0x1e0628u: goto label_1e0628;
        case 0x1e062cu: goto label_1e062c;
        case 0x1e0630u: goto label_1e0630;
        case 0x1e0634u: goto label_1e0634;
        case 0x1e0638u: goto label_1e0638;
        case 0x1e063cu: goto label_1e063c;
        case 0x1e0640u: goto label_1e0640;
        case 0x1e0644u: goto label_1e0644;
        case 0x1e0648u: goto label_1e0648;
        case 0x1e064cu: goto label_1e064c;
        case 0x1e0650u: goto label_1e0650;
        case 0x1e0654u: goto label_1e0654;
        case 0x1e0658u: goto label_1e0658;
        case 0x1e065cu: goto label_1e065c;
        case 0x1e0660u: goto label_1e0660;
        case 0x1e0664u: goto label_1e0664;
        case 0x1e0668u: goto label_1e0668;
        case 0x1e066cu: goto label_1e066c;
        case 0x1e0670u: goto label_1e0670;
        case 0x1e0674u: goto label_1e0674;
        case 0x1e0678u: goto label_1e0678;
        case 0x1e067cu: goto label_1e067c;
        case 0x1e0680u: goto label_1e0680;
        case 0x1e0684u: goto label_1e0684;
        case 0x1e0688u: goto label_1e0688;
        case 0x1e068cu: goto label_1e068c;
        case 0x1e0690u: goto label_1e0690;
        case 0x1e0694u: goto label_1e0694;
        case 0x1e0698u: goto label_1e0698;
        case 0x1e069cu: goto label_1e069c;
        case 0x1e06a0u: goto label_1e06a0;
        case 0x1e06a4u: goto label_1e06a4;
        case 0x1e06a8u: goto label_1e06a8;
        case 0x1e06acu: goto label_1e06ac;
        case 0x1e06b0u: goto label_1e06b0;
        case 0x1e06b4u: goto label_1e06b4;
        case 0x1e06b8u: goto label_1e06b8;
        case 0x1e06bcu: goto label_1e06bc;
        case 0x1e06c0u: goto label_1e06c0;
        case 0x1e06c4u: goto label_1e06c4;
        case 0x1e06c8u: goto label_1e06c8;
        case 0x1e06ccu: goto label_1e06cc;
        case 0x1e06d0u: goto label_1e06d0;
        case 0x1e06d4u: goto label_1e06d4;
        case 0x1e06d8u: goto label_1e06d8;
        case 0x1e06dcu: goto label_1e06dc;
        case 0x1e06e0u: goto label_1e06e0;
        case 0x1e06e4u: goto label_1e06e4;
        case 0x1e06e8u: goto label_1e06e8;
        case 0x1e06ecu: goto label_1e06ec;
        case 0x1e06f0u: goto label_1e06f0;
        case 0x1e06f4u: goto label_1e06f4;
        case 0x1e06f8u: goto label_1e06f8;
        case 0x1e06fcu: goto label_1e06fc;
        case 0x1e0700u: goto label_1e0700;
        case 0x1e0704u: goto label_1e0704;
        case 0x1e0708u: goto label_1e0708;
        case 0x1e070cu: goto label_1e070c;
        case 0x1e0710u: goto label_1e0710;
        case 0x1e0714u: goto label_1e0714;
        case 0x1e0718u: goto label_1e0718;
        case 0x1e071cu: goto label_1e071c;
        case 0x1e0720u: goto label_1e0720;
        case 0x1e0724u: goto label_1e0724;
        case 0x1e0728u: goto label_1e0728;
        case 0x1e072cu: goto label_1e072c;
        default: break;
    }

    ctx->pc = 0x1e0460u;

label_1e0460:
    // 0x1e0460: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e0460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1e0464:
    // 0x1e0464: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e0464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1e0468:
    // 0x1e0468: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e0468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1e046c:
    // 0x1e046c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e046cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1e0470:
    // 0x1e0470: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e0470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1e0474:
    // 0x1e0474: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1e0474u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1e0478:
    // 0x1e0478: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e0478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e047c:
    // 0x1e047c: 0xc077fd4  jal         func_1DFF50
label_1e0480:
    if (ctx->pc == 0x1E0480u) {
        ctx->pc = 0x1E0480u;
            // 0x1e0480: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1E0484u;
        goto label_1e0484;
    }
    ctx->pc = 0x1E047Cu;
    SET_GPR_U32(ctx, 31, 0x1E0484u);
    ctx->pc = 0x1E0480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E047Cu;
            // 0x1e0480: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFF50u;
    if (runtime->hasFunction(0x1DFF50u)) {
        auto targetFn = runtime->lookupFunction(0x1DFF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0484u; }
        if (ctx->pc != 0x1E0484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFF50_0x1dff50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0484u; }
        if (ctx->pc != 0x1E0484u) { return; }
    }
    ctx->pc = 0x1E0484u;
label_1e0484:
    // 0x1e0484: 0x8e060e34  lw          $a2, 0xE34($s0)
    ctx->pc = 0x1e0484u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_1e0488:
    // 0x1e0488: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1e0488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1e048c:
    // 0x1e048c: 0x50c30099  beql        $a2, $v1, . + 4 + (0x99 << 2)
label_1e0490:
    if (ctx->pc == 0x1E0490u) {
        ctx->pc = 0x1E0490u;
            // 0x1e0490: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x1E0494u;
        goto label_1e0494;
    }
    ctx->pc = 0x1E048Cu;
    {
        const bool branch_taken_0x1e048c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e048c) {
            ctx->pc = 0x1E0490u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E048Cu;
            // 0x1e0490: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E06F4u;
            goto label_1e06f4;
        }
    }
    ctx->pc = 0x1E0494u;
label_1e0494:
    // 0x1e0494: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1e0494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_1e0498:
    // 0x1e0498: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1e0498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1e049c:
    // 0x1e049c: 0x8c6589d0  lw          $a1, -0x7630($v1)
    ctx->pc = 0x1e049cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_1e04a0:
    // 0x1e04a0: 0x8ca30084  lw          $v1, 0x84($a1)
    ctx->pc = 0x1e04a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 132)));
label_1e04a4:
    // 0x1e04a4: 0x54640026  bnel        $v1, $a0, . + 4 + (0x26 << 2)
label_1e04a8:
    if (ctx->pc == 0x1E04A8u) {
        ctx->pc = 0x1E04A8u;
            // 0x1e04a8: 0xe6140e50  swc1        $f20, 0xE50($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3664), bits); }
        ctx->pc = 0x1E04ACu;
        goto label_1e04ac;
    }
    ctx->pc = 0x1E04A4u;
    {
        const bool branch_taken_0x1e04a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1e04a4) {
            ctx->pc = 0x1E04A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E04A4u;
            // 0x1e04a8: 0xe6140e50  swc1        $f20, 0xE50($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3664), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0540u;
            goto label_1e0540;
        }
    }
    ctx->pc = 0x1E04ACu;
label_1e04ac:
    // 0x1e04ac: 0xc0182a  slt         $v1, $a2, $zero
    ctx->pc = 0x1e04acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_1e04b0:
    // 0x1e04b0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1e04b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_1e04b4:
    // 0x1e04b4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1e04b8:
    if (ctx->pc == 0x1E04B8u) {
        ctx->pc = 0x1E04BCu;
        goto label_1e04bc;
    }
    ctx->pc = 0x1E04B4u;
    {
        const bool branch_taken_0x1e04b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e04b4) {
            ctx->pc = 0x1E04C0u;
            goto label_1e04c0;
        }
    }
    ctx->pc = 0x1E04BCu;
label_1e04bc:
    // 0x1e04bc: 0x28c30004  slti        $v1, $a2, 0x4
    ctx->pc = 0x1e04bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
label_1e04c0:
    // 0x1e04c0: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_1e04c4:
    if (ctx->pc == 0x1E04C4u) {
        ctx->pc = 0x1E04C8u;
        goto label_1e04c8;
    }
    ctx->pc = 0x1E04C0u;
    {
        const bool branch_taken_0x1e04c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e04c0) {
            ctx->pc = 0x1E04ECu;
            goto label_1e04ec;
        }
    }
    ctx->pc = 0x1E04C8u;
label_1e04c8:
    // 0x1e04c8: 0x820311aa  lb          $v1, 0x11AA($s0)
    ctx->pc = 0x1e04c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
label_1e04cc:
    // 0x1e04cc: 0x60182a  slt         $v1, $v1, $zero
    ctx->pc = 0x1e04ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_1e04d0:
    // 0x1e04d0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1e04d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_1e04d4:
    // 0x1e04d4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1e04d8:
    if (ctx->pc == 0x1E04D8u) {
        ctx->pc = 0x1E04DCu;
        goto label_1e04dc;
    }
    ctx->pc = 0x1E04D4u;
    {
        const bool branch_taken_0x1e04d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e04d4) {
            ctx->pc = 0x1E04ECu;
            goto label_1e04ec;
        }
    }
    ctx->pc = 0x1E04DCu;
label_1e04dc:
    // 0x1e04dc: 0x80a3008d  lb          $v1, 0x8D($a1)
    ctx->pc = 0x1e04dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 141)));
label_1e04e0:
    // 0x1e04e0: 0x601827  not         $v1, $v1
    ctx->pc = 0x1e04e0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_1e04e4:
    // 0x1e04e4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1e04e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e04e8:
    // 0x1e04e8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1e04e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e04ec:
    // 0x1e04ec: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_1e04f0:
    if (ctx->pc == 0x1E04F0u) {
        ctx->pc = 0x1E04F4u;
        goto label_1e04f4;
    }
    ctx->pc = 0x1E04ECu;
    {
        const bool branch_taken_0x1e04ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e04ec) {
            ctx->pc = 0x1E053Cu;
            goto label_1e053c;
        }
    }
    ctx->pc = 0x1E04F4u;
label_1e04f4:
    // 0x1e04f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1e04f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1e04f8:
    // 0x1e04f8: 0x8e110d98  lw          $s1, 0xD98($s0)
    ctx->pc = 0x1e04f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_1e04fc:
    // 0x1e04fc: 0x8c520e80  lw          $s2, 0xE80($v0)
    ctx->pc = 0x1e04fcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_1e0500:
    // 0x1e0500: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e0500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0504:
    // 0x1e0504: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1e0504u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e0508:
    // 0x1e0508: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1e0508u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1e050c:
    // 0x1e050c: 0x320f809  jalr        $t9
label_1e0510:
    if (ctx->pc == 0x1E0510u) {
        ctx->pc = 0x1E0510u;
            // 0x1e0510: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E0514u;
        goto label_1e0514;
    }
    ctx->pc = 0x1E050Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E0514u);
        ctx->pc = 0x1E0510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E050Cu;
            // 0x1e0510: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E0514u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E0514u; }
            if (ctx->pc != 0x1E0514u) { return; }
        }
        }
    }
    ctx->pc = 0x1E0514u;
label_1e0514:
    // 0x1e0514: 0x12220009  beq         $s1, $v0, . + 4 + (0x9 << 2)
label_1e0518:
    if (ctx->pc == 0x1E0518u) {
        ctx->pc = 0x1E051Cu;
        goto label_1e051c;
    }
    ctx->pc = 0x1E0514u;
    {
        const bool branch_taken_0x1e0514 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e0514) {
            ctx->pc = 0x1E053Cu;
            goto label_1e053c;
        }
    }
    ctx->pc = 0x1E051Cu;
label_1e051c:
    // 0x1e051c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1e051cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e0520:
    // 0x1e0520: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e0520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e0524:
    // 0x1e0524: 0x8e110d98  lw          $s1, 0xD98($s0)
    ctx->pc = 0x1e0524u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_1e0528:
    // 0x1e0528: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1e0528u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1e052c:
    // 0x1e052c: 0x320f809  jalr        $t9
label_1e0530:
    if (ctx->pc == 0x1E0530u) {
        ctx->pc = 0x1E0530u;
            // 0x1e0530: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1E0534u;
        goto label_1e0534;
    }
    ctx->pc = 0x1E052Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E0534u);
        ctx->pc = 0x1E0530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E052Cu;
            // 0x1e0530: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E0534u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E0534u; }
            if (ctx->pc != 0x1E0534u) { return; }
        }
        }
    }
    ctx->pc = 0x1E0534u;
label_1e0534:
    // 0x1e0534: 0x1622006e  bne         $s1, $v0, . + 4 + (0x6E << 2)
label_1e0538:
    if (ctx->pc == 0x1E0538u) {
        ctx->pc = 0x1E053Cu;
        goto label_1e053c;
    }
    ctx->pc = 0x1E0534u;
    {
        const bool branch_taken_0x1e0534 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e0534) {
            ctx->pc = 0x1E06F0u;
            goto label_1e06f0;
        }
    }
    ctx->pc = 0x1E053Cu;
label_1e053c:
    // 0x1e053c: 0xe6140e50  swc1        $f20, 0xE50($s0)
    ctx->pc = 0x1e053cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3664), bits); }
label_1e0540:
    // 0x1e0540: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x1e0540u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1e0544:
    // 0x1e0544: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x1e0544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_1e0548:
    // 0x1e0548: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
label_1e054c:
    if (ctx->pc == 0x1E054Cu) {
        ctx->pc = 0x1E054Cu;
            // 0x1e054c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E0550u;
        goto label_1e0550;
    }
    ctx->pc = 0x1E0548u;
    {
        const bool branch_taken_0x1e0548 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1E054Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0548u;
            // 0x1e054c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0548) {
            ctx->pc = 0x1E0560u;
            goto label_1e0560;
        }
    }
    ctx->pc = 0x1E0550u;
label_1e0550:
    // 0x1e0550: 0x28810004  slti        $at, $a0, 0x4
    ctx->pc = 0x1e0550u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_1e0554:
    // 0x1e0554: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1e0558:
    if (ctx->pc == 0x1E0558u) {
        ctx->pc = 0x1E055Cu;
        goto label_1e055c;
    }
    ctx->pc = 0x1E0554u;
    {
        const bool branch_taken_0x1e0554 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0554) {
            ctx->pc = 0x1E0560u;
            goto label_1e0560;
        }
    }
    ctx->pc = 0x1E055Cu;
label_1e055c:
    // 0x1e055c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1e055cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e0560:
    // 0x1e0560: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_1e0564:
    if (ctx->pc == 0x1E0564u) {
        ctx->pc = 0x1E0568u;
        goto label_1e0568;
    }
    ctx->pc = 0x1E0560u;
    {
        const bool branch_taken_0x1e0560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0560) {
            ctx->pc = 0x1E05A0u;
            goto label_1e05a0;
        }
    }
    ctx->pc = 0x1E0568u;
label_1e0568:
    // 0x1e0568: 0x820311aa  lb          $v1, 0x11AA($s0)
    ctx->pc = 0x1e0568u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
label_1e056c:
    // 0x1e056c: 0x60182a  slt         $v1, $v1, $zero
    ctx->pc = 0x1e056cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_1e0570:
    // 0x1e0570: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1e0570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_1e0574:
    // 0x1e0574: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1e0578:
    if (ctx->pc == 0x1E0578u) {
        ctx->pc = 0x1E057Cu;
        goto label_1e057c;
    }
    ctx->pc = 0x1E0574u;
    {
        const bool branch_taken_0x1e0574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0574) {
            ctx->pc = 0x1E0594u;
            goto label_1e0594;
        }
    }
    ctx->pc = 0x1E057Cu;
label_1e057c:
    // 0x1e057c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1e057cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_1e0580:
    // 0x1e0580: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x1e0580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_1e0584:
    // 0x1e0584: 0x8063008d  lb          $v1, 0x8D($v1)
    ctx->pc = 0x1e0584u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 141)));
label_1e0588:
    // 0x1e0588: 0x601827  not         $v1, $v1
    ctx->pc = 0x1e0588u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_1e058c:
    // 0x1e058c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1e058cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e0590:
    // 0x1e0590: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1e0590u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e0594:
    // 0x1e0594: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_1e0598:
    if (ctx->pc == 0x1E0598u) {
        ctx->pc = 0x1E059Cu;
        goto label_1e059c;
    }
    ctx->pc = 0x1E0594u;
    {
        const bool branch_taken_0x1e0594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0594) {
            ctx->pc = 0x1E05A0u;
            goto label_1e05a0;
        }
    }
    ctx->pc = 0x1E059Cu;
label_1e059c:
    // 0x1e059c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e059cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e05a0:
    // 0x1e05a0: 0x50a00021  beql        $a1, $zero, . + 4 + (0x21 << 2)
label_1e05a4:
    if (ctx->pc == 0x1E05A4u) {
        ctx->pc = 0x1E05A4u;
            // 0x1e05a4: 0x38830004  xori        $v1, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
        ctx->pc = 0x1E05A8u;
        goto label_1e05a8;
    }
    ctx->pc = 0x1E05A0u;
    {
        const bool branch_taken_0x1e05a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e05a0) {
            ctx->pc = 0x1E05A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E05A0u;
            // 0x1e05a4: 0x38830004  xori        $v1, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0628u;
            goto label_1e0628;
        }
    }
    ctx->pc = 0x1E05A8u;
label_1e05a8:
    // 0x1e05a8: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x1e05a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
label_1e05ac:
    // 0x1e05ac: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1e05acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1e05b0:
    // 0x1e05b0: 0xae030e54  sw          $v1, 0xE54($s0)
    ctx->pc = 0x1e05b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3668), GPR_U32(ctx, 3));
label_1e05b4:
    // 0x1e05b4: 0xae000e58  sw          $zero, 0xE58($s0)
    ctx->pc = 0x1e05b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3672), GPR_U32(ctx, 0));
label_1e05b8:
    // 0x1e05b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e05b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e05bc:
    // 0x1e05bc: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x1e05bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_1e05c0:
    // 0x1e05c0: 0x8042007a  lb          $v0, 0x7A($v0)
    ctx->pc = 0x1e05c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 122)));
label_1e05c4:
    // 0x1e05c4: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_1e05c8:
    if (ctx->pc == 0x1E05C8u) {
        ctx->pc = 0x1E05C8u;
            // 0x1e05c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1E05CCu;
        goto label_1e05cc;
    }
    ctx->pc = 0x1E05C4u;
    {
        const bool branch_taken_0x1e05c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e05c4) {
            ctx->pc = 0x1E05C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E05C4u;
            // 0x1e05c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E05DCu;
            goto label_1e05dc;
        }
    }
    ctx->pc = 0x1E05CCu;
label_1e05cc:
    // 0x1e05cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e05ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e05d0:
    // 0x1e05d0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e05d4:
    if (ctx->pc == 0x1E05D4u) {
        ctx->pc = 0x1E05D4u;
            // 0x1e05d4: 0xae020e5c  sw          $v0, 0xE5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3676), GPR_U32(ctx, 2));
        ctx->pc = 0x1E05D8u;
        goto label_1e05d8;
    }
    ctx->pc = 0x1E05D0u;
    {
        const bool branch_taken_0x1e05d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E05D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E05D0u;
            // 0x1e05d4: 0xae020e5c  sw          $v0, 0xE5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e05d0) {
            ctx->pc = 0x1E05E0u;
            goto label_1e05e0;
        }
    }
    ctx->pc = 0x1E05D8u;
label_1e05d8:
    // 0x1e05d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e05d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e05dc:
    // 0x1e05dc: 0xae020e5c  sw          $v0, 0xE5C($s0)
    ctx->pc = 0x1e05dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3676), GPR_U32(ctx, 2));
label_1e05e0:
    // 0x1e05e0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1e05e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1e05e4:
    // 0x1e05e4: 0x920411aa  lbu         $a0, 0x11AA($s0)
    ctx->pc = 0x1e05e4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
label_1e05e8:
    // 0x1e05e8: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x1e05e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_1e05ec:
    // 0x1e05ec: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x1e05ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1e05f0:
    // 0x1e05f0: 0x26060890  addiu       $a2, $s0, 0x890
    ctx->pc = 0x1e05f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_1e05f4:
    // 0x1e05f4: 0x260702c0  addiu       $a3, $s0, 0x2C0
    ctx->pc = 0x1e05f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_1e05f8:
    // 0x1e05f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e05f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e05fc:
    // 0x1e05fc: 0xc0bb404  jal         func_2ED010
label_1e0600:
    if (ctx->pc == 0x1E0600u) {
        ctx->pc = 0x1E0600u;
            // 0x1e0600: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1E0604u;
        goto label_1e0604;
    }
    ctx->pc = 0x1E05FCu;
    SET_GPR_U32(ctx, 31, 0x1E0604u);
    ctx->pc = 0x1E0600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E05FCu;
            // 0x1e0600: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0604u; }
        if (ctx->pc != 0x1E0604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0604u; }
        if (ctx->pc != 0x1E0604u) { return; }
    }
    ctx->pc = 0x1E0604u;
label_1e0604:
    // 0x1e0604: 0x8e040d60  lw          $a0, 0xD60($s0)
    ctx->pc = 0x1e0604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_1e0608:
    // 0x1e0608: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x1e0608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
label_1e060c:
    // 0x1e060c: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x1e060cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_1e0610:
    // 0x1e0610: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e0610u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e0614:
    // 0x1e0614: 0x320f809  jalr        $t9
label_1e0618:
    if (ctx->pc == 0x1E0618u) {
        ctx->pc = 0x1E0618u;
            // 0x1e0618: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x1E061Cu;
        goto label_1e061c;
    }
    ctx->pc = 0x1E0614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E061Cu);
        ctx->pc = 0x1E0618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0614u;
            // 0x1e0618: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E061Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E061Cu; }
            if (ctx->pc != 0x1E061Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E061Cu;
label_1e061c:
    // 0x1e061c: 0x10000032  b           . + 4 + (0x32 << 2)
label_1e0620:
    if (ctx->pc == 0x1E0620u) {
        ctx->pc = 0x1E0620u;
            // 0x1e0620: 0x8e030da0  lw          $v1, 0xDA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
        ctx->pc = 0x1E0624u;
        goto label_1e0624;
    }
    ctx->pc = 0x1E061Cu;
    {
        const bool branch_taken_0x1e061c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E061Cu;
            // 0x1e0620: 0x8e030da0  lw          $v1, 0xDA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e061c) {
            ctx->pc = 0x1E06E8u;
            goto label_1e06e8;
        }
    }
    ctx->pc = 0x1E0624u;
label_1e0624:
    // 0x1e0624: 0x38830004  xori        $v1, $a0, 0x4
    ctx->pc = 0x1e0624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
label_1e0628:
    // 0x1e0628: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1e0628u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1e062c:
    // 0x1e062c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_1e0630:
    if (ctx->pc == 0x1E0630u) {
        ctx->pc = 0x1E0634u;
        goto label_1e0634;
    }
    ctx->pc = 0x1E062Cu;
    {
        const bool branch_taken_0x1e062c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e062c) {
            ctx->pc = 0x1E0664u;
            goto label_1e0664;
        }
    }
    ctx->pc = 0x1E0634u;
label_1e0634:
    // 0x1e0634: 0x820311aa  lb          $v1, 0x11AA($s0)
    ctx->pc = 0x1e0634u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
label_1e0638:
    // 0x1e0638: 0x60182a  slt         $v1, $v1, $zero
    ctx->pc = 0x1e0638u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_1e063c:
    // 0x1e063c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1e063cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_1e0640:
    // 0x1e0640: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
label_1e0644:
    if (ctx->pc == 0x1E0644u) {
        ctx->pc = 0x1E0644u;
            // 0x1e0644: 0x38630001  xori        $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->pc = 0x1E0648u;
        goto label_1e0648;
    }
    ctx->pc = 0x1E0640u;
    {
        const bool branch_taken_0x1e0640 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0640) {
            ctx->pc = 0x1E0644u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0640u;
            // 0x1e0644: 0x38630001  xori        $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0664u;
            goto label_1e0664;
        }
    }
    ctx->pc = 0x1E0648u;
label_1e0648:
    // 0x1e0648: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1e0648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_1e064c:
    // 0x1e064c: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x1e064cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_1e0650:
    // 0x1e0650: 0x8063008d  lb          $v1, 0x8D($v1)
    ctx->pc = 0x1e0650u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 141)));
label_1e0654:
    // 0x1e0654: 0x601827  not         $v1, $v1
    ctx->pc = 0x1e0654u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_1e0658:
    // 0x1e0658: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1e0658u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e065c:
    // 0x1e065c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1e065cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e0660:
    // 0x1e0660: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1e0660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_1e0664:
    // 0x1e0664: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_1e0668:
    if (ctx->pc == 0x1E0668u) {
        ctx->pc = 0x1E066Cu;
        goto label_1e066c;
    }
    ctx->pc = 0x1E0664u;
    {
        const bool branch_taken_0x1e0664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0664) {
            ctx->pc = 0x1E06F0u;
            goto label_1e06f0;
        }
    }
    ctx->pc = 0x1E066Cu;
label_1e066c:
    // 0x1e066c: 0x8e030d70  lw          $v1, 0xD70($s0)
    ctx->pc = 0x1e066cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
label_1e0670:
    // 0x1e0670: 0x8c6300cc  lw          $v1, 0xCC($v1)
    ctx->pc = 0x1e0670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_1e0674:
    // 0x1e0674: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_1e0678:
    if (ctx->pc == 0x1E0678u) {
        ctx->pc = 0x1E067Cu;
        goto label_1e067c;
    }
    ctx->pc = 0x1E0674u;
    {
        const bool branch_taken_0x1e0674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0674) {
            ctx->pc = 0x1E06E4u;
            goto label_1e06e4;
        }
    }
    ctx->pc = 0x1E067Cu;
label_1e067c:
    // 0x1e067c: 0x8e050550  lw          $a1, 0x550($s0)
    ctx->pc = 0x1e067cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
label_1e0680:
    // 0x1e0680: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e0680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1e0684:
    // 0x1e0684: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1e0684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1e0688:
    // 0x1e0688: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e0688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e068c:
    // 0x1e068c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1e068cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e0690:
    // 0x1e0690: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1e0690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1e0694:
    // 0x1e0694: 0x80a2010c  lb          $v0, 0x10C($a1)
    ctx->pc = 0x1e0694u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 268)));
label_1e0698:
    // 0x1e0698: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e0698u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e069c:
    // 0x1e069c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1e069cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e06a0:
    // 0x1e06a0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1e06a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1e06a4:
    // 0x1e06a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e06a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e06a8:
    // 0x1e06a8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1e06a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1e06ac:
    // 0x1e06ac: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1e06acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1e06b0:
    // 0x1e06b0: 0xac440080  sw          $a0, 0x80($v0)
    ctx->pc = 0x1e06b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 4));
label_1e06b4:
    // 0x1e06b4: 0x8e040550  lw          $a0, 0x550($s0)
    ctx->pc = 0x1e06b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
label_1e06b8:
    // 0x1e06b8: 0x8c990058  lw          $t9, 0x58($a0)
    ctx->pc = 0x1e06b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_1e06bc:
    // 0x1e06bc: 0x8085010d  lb          $a1, 0x10D($a0)
    ctx->pc = 0x1e06bcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 269)));
label_1e06c0:
    // 0x1e06c0: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1e06c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1e06c4:
    // 0x1e06c4: 0x320f809  jalr        $t9
label_1e06c8:
    if (ctx->pc == 0x1E06C8u) {
        ctx->pc = 0x1E06C8u;
            // 0x1e06c8: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x1E06CCu;
        goto label_1e06cc;
    }
    ctx->pc = 0x1E06C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E06CCu);
        ctx->pc = 0x1E06C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E06C4u;
            // 0x1e06c8: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E06CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E06CCu; }
            if (ctx->pc != 0x1E06CCu) { return; }
        }
        }
    }
    ctx->pc = 0x1E06CCu;
label_1e06cc:
    // 0x1e06cc: 0x8e040550  lw          $a0, 0x550($s0)
    ctx->pc = 0x1e06ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
label_1e06d0:
    // 0x1e06d0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1e06d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e06d4:
    // 0x1e06d4: 0x8c990058  lw          $t9, 0x58($a0)
    ctx->pc = 0x1e06d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_1e06d8:
    // 0x1e06d8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1e06d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1e06dc:
    // 0x1e06dc: 0x320f809  jalr        $t9
label_1e06e0:
    if (ctx->pc == 0x1E06E0u) {
        ctx->pc = 0x1E06E0u;
            // 0x1e06e0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E06E4u;
        goto label_1e06e4;
    }
    ctx->pc = 0x1E06DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E06E4u);
        ctx->pc = 0x1E06E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E06DCu;
            // 0x1e06e0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E06E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E06E4u; }
            if (ctx->pc != 0x1E06E4u) { return; }
        }
        }
    }
    ctx->pc = 0x1E06E4u;
label_1e06e4:
    // 0x1e06e4: 0x8e030da0  lw          $v1, 0xDA0($s0)
    ctx->pc = 0x1e06e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
label_1e06e8:
    // 0x1e06e8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1e06e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_1e06ec:
    // 0x1e06ec: 0xae030da0  sw          $v1, 0xDA0($s0)
    ctx->pc = 0x1e06ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3488), GPR_U32(ctx, 3));
label_1e06f0:
    // 0x1e06f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e06f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e06f4:
    // 0x1e06f4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e06f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e06f8:
    // 0x1e06f8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e06f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e06fc:
    // 0x1e06fc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e06fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e0700:
    // 0x1e0700: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e0700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e0704:
    // 0x1e0704: 0x3e00008  jr          $ra
label_1e0708:
    if (ctx->pc == 0x1E0708u) {
        ctx->pc = 0x1E0708u;
            // 0x1e0708: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1E070Cu;
        goto label_1e070c;
    }
    ctx->pc = 0x1E0704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0704u;
            // 0x1e0708: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E070Cu;
label_1e070c:
    // 0x1e070c: 0x0  nop
    ctx->pc = 0x1e070cu;
    // NOP
label_1e0710:
    // 0x1e0710: 0xac800e48  sw          $zero, 0xE48($a0)
    ctx->pc = 0x1e0710u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3656), GPR_U32(ctx, 0));
label_1e0714:
    // 0x1e0714: 0xe48c0e4c  swc1        $f12, 0xE4C($a0)
    ctx->pc = 0x1e0714u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3660), bits); }
label_1e0718:
    // 0x1e0718: 0x8c830da0  lw          $v1, 0xDA0($a0)
    ctx->pc = 0x1e0718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
label_1e071c:
    // 0x1e071c: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x1e071cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_1e0720:
    // 0x1e0720: 0x3e00008  jr          $ra
label_1e0724:
    if (ctx->pc == 0x1E0724u) {
        ctx->pc = 0x1E0724u;
            // 0x1e0724: 0xac830da0  sw          $v1, 0xDA0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3488), GPR_U32(ctx, 3));
        ctx->pc = 0x1E0728u;
        goto label_1e0728;
    }
    ctx->pc = 0x1E0720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0720u;
            // 0x1e0724: 0xac830da0  sw          $v1, 0xDA0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3488), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E0728u;
label_1e0728:
    // 0x1e0728: 0x0  nop
    ctx->pc = 0x1e0728u;
    // NOP
label_1e072c:
    // 0x1e072c: 0x0  nop
    ctx->pc = 0x1e072cu;
    // NOP
}
