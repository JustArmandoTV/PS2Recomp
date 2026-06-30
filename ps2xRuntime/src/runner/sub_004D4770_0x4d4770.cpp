#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D4770
// Address: 0x4d4770 - 0x4d4a90
void sub_004D4770_0x4d4770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D4770_0x4d4770");
#endif

    switch (ctx->pc) {
        case 0x4d4770u: goto label_4d4770;
        case 0x4d4774u: goto label_4d4774;
        case 0x4d4778u: goto label_4d4778;
        case 0x4d477cu: goto label_4d477c;
        case 0x4d4780u: goto label_4d4780;
        case 0x4d4784u: goto label_4d4784;
        case 0x4d4788u: goto label_4d4788;
        case 0x4d478cu: goto label_4d478c;
        case 0x4d4790u: goto label_4d4790;
        case 0x4d4794u: goto label_4d4794;
        case 0x4d4798u: goto label_4d4798;
        case 0x4d479cu: goto label_4d479c;
        case 0x4d47a0u: goto label_4d47a0;
        case 0x4d47a4u: goto label_4d47a4;
        case 0x4d47a8u: goto label_4d47a8;
        case 0x4d47acu: goto label_4d47ac;
        case 0x4d47b0u: goto label_4d47b0;
        case 0x4d47b4u: goto label_4d47b4;
        case 0x4d47b8u: goto label_4d47b8;
        case 0x4d47bcu: goto label_4d47bc;
        case 0x4d47c0u: goto label_4d47c0;
        case 0x4d47c4u: goto label_4d47c4;
        case 0x4d47c8u: goto label_4d47c8;
        case 0x4d47ccu: goto label_4d47cc;
        case 0x4d47d0u: goto label_4d47d0;
        case 0x4d47d4u: goto label_4d47d4;
        case 0x4d47d8u: goto label_4d47d8;
        case 0x4d47dcu: goto label_4d47dc;
        case 0x4d47e0u: goto label_4d47e0;
        case 0x4d47e4u: goto label_4d47e4;
        case 0x4d47e8u: goto label_4d47e8;
        case 0x4d47ecu: goto label_4d47ec;
        case 0x4d47f0u: goto label_4d47f0;
        case 0x4d47f4u: goto label_4d47f4;
        case 0x4d47f8u: goto label_4d47f8;
        case 0x4d47fcu: goto label_4d47fc;
        case 0x4d4800u: goto label_4d4800;
        case 0x4d4804u: goto label_4d4804;
        case 0x4d4808u: goto label_4d4808;
        case 0x4d480cu: goto label_4d480c;
        case 0x4d4810u: goto label_4d4810;
        case 0x4d4814u: goto label_4d4814;
        case 0x4d4818u: goto label_4d4818;
        case 0x4d481cu: goto label_4d481c;
        case 0x4d4820u: goto label_4d4820;
        case 0x4d4824u: goto label_4d4824;
        case 0x4d4828u: goto label_4d4828;
        case 0x4d482cu: goto label_4d482c;
        case 0x4d4830u: goto label_4d4830;
        case 0x4d4834u: goto label_4d4834;
        case 0x4d4838u: goto label_4d4838;
        case 0x4d483cu: goto label_4d483c;
        case 0x4d4840u: goto label_4d4840;
        case 0x4d4844u: goto label_4d4844;
        case 0x4d4848u: goto label_4d4848;
        case 0x4d484cu: goto label_4d484c;
        case 0x4d4850u: goto label_4d4850;
        case 0x4d4854u: goto label_4d4854;
        case 0x4d4858u: goto label_4d4858;
        case 0x4d485cu: goto label_4d485c;
        case 0x4d4860u: goto label_4d4860;
        case 0x4d4864u: goto label_4d4864;
        case 0x4d4868u: goto label_4d4868;
        case 0x4d486cu: goto label_4d486c;
        case 0x4d4870u: goto label_4d4870;
        case 0x4d4874u: goto label_4d4874;
        case 0x4d4878u: goto label_4d4878;
        case 0x4d487cu: goto label_4d487c;
        case 0x4d4880u: goto label_4d4880;
        case 0x4d4884u: goto label_4d4884;
        case 0x4d4888u: goto label_4d4888;
        case 0x4d488cu: goto label_4d488c;
        case 0x4d4890u: goto label_4d4890;
        case 0x4d4894u: goto label_4d4894;
        case 0x4d4898u: goto label_4d4898;
        case 0x4d489cu: goto label_4d489c;
        case 0x4d48a0u: goto label_4d48a0;
        case 0x4d48a4u: goto label_4d48a4;
        case 0x4d48a8u: goto label_4d48a8;
        case 0x4d48acu: goto label_4d48ac;
        case 0x4d48b0u: goto label_4d48b0;
        case 0x4d48b4u: goto label_4d48b4;
        case 0x4d48b8u: goto label_4d48b8;
        case 0x4d48bcu: goto label_4d48bc;
        case 0x4d48c0u: goto label_4d48c0;
        case 0x4d48c4u: goto label_4d48c4;
        case 0x4d48c8u: goto label_4d48c8;
        case 0x4d48ccu: goto label_4d48cc;
        case 0x4d48d0u: goto label_4d48d0;
        case 0x4d48d4u: goto label_4d48d4;
        case 0x4d48d8u: goto label_4d48d8;
        case 0x4d48dcu: goto label_4d48dc;
        case 0x4d48e0u: goto label_4d48e0;
        case 0x4d48e4u: goto label_4d48e4;
        case 0x4d48e8u: goto label_4d48e8;
        case 0x4d48ecu: goto label_4d48ec;
        case 0x4d48f0u: goto label_4d48f0;
        case 0x4d48f4u: goto label_4d48f4;
        case 0x4d48f8u: goto label_4d48f8;
        case 0x4d48fcu: goto label_4d48fc;
        case 0x4d4900u: goto label_4d4900;
        case 0x4d4904u: goto label_4d4904;
        case 0x4d4908u: goto label_4d4908;
        case 0x4d490cu: goto label_4d490c;
        case 0x4d4910u: goto label_4d4910;
        case 0x4d4914u: goto label_4d4914;
        case 0x4d4918u: goto label_4d4918;
        case 0x4d491cu: goto label_4d491c;
        case 0x4d4920u: goto label_4d4920;
        case 0x4d4924u: goto label_4d4924;
        case 0x4d4928u: goto label_4d4928;
        case 0x4d492cu: goto label_4d492c;
        case 0x4d4930u: goto label_4d4930;
        case 0x4d4934u: goto label_4d4934;
        case 0x4d4938u: goto label_4d4938;
        case 0x4d493cu: goto label_4d493c;
        case 0x4d4940u: goto label_4d4940;
        case 0x4d4944u: goto label_4d4944;
        case 0x4d4948u: goto label_4d4948;
        case 0x4d494cu: goto label_4d494c;
        case 0x4d4950u: goto label_4d4950;
        case 0x4d4954u: goto label_4d4954;
        case 0x4d4958u: goto label_4d4958;
        case 0x4d495cu: goto label_4d495c;
        case 0x4d4960u: goto label_4d4960;
        case 0x4d4964u: goto label_4d4964;
        case 0x4d4968u: goto label_4d4968;
        case 0x4d496cu: goto label_4d496c;
        case 0x4d4970u: goto label_4d4970;
        case 0x4d4974u: goto label_4d4974;
        case 0x4d4978u: goto label_4d4978;
        case 0x4d497cu: goto label_4d497c;
        case 0x4d4980u: goto label_4d4980;
        case 0x4d4984u: goto label_4d4984;
        case 0x4d4988u: goto label_4d4988;
        case 0x4d498cu: goto label_4d498c;
        case 0x4d4990u: goto label_4d4990;
        case 0x4d4994u: goto label_4d4994;
        case 0x4d4998u: goto label_4d4998;
        case 0x4d499cu: goto label_4d499c;
        case 0x4d49a0u: goto label_4d49a0;
        case 0x4d49a4u: goto label_4d49a4;
        case 0x4d49a8u: goto label_4d49a8;
        case 0x4d49acu: goto label_4d49ac;
        case 0x4d49b0u: goto label_4d49b0;
        case 0x4d49b4u: goto label_4d49b4;
        case 0x4d49b8u: goto label_4d49b8;
        case 0x4d49bcu: goto label_4d49bc;
        case 0x4d49c0u: goto label_4d49c0;
        case 0x4d49c4u: goto label_4d49c4;
        case 0x4d49c8u: goto label_4d49c8;
        case 0x4d49ccu: goto label_4d49cc;
        case 0x4d49d0u: goto label_4d49d0;
        case 0x4d49d4u: goto label_4d49d4;
        case 0x4d49d8u: goto label_4d49d8;
        case 0x4d49dcu: goto label_4d49dc;
        case 0x4d49e0u: goto label_4d49e0;
        case 0x4d49e4u: goto label_4d49e4;
        case 0x4d49e8u: goto label_4d49e8;
        case 0x4d49ecu: goto label_4d49ec;
        case 0x4d49f0u: goto label_4d49f0;
        case 0x4d49f4u: goto label_4d49f4;
        case 0x4d49f8u: goto label_4d49f8;
        case 0x4d49fcu: goto label_4d49fc;
        case 0x4d4a00u: goto label_4d4a00;
        case 0x4d4a04u: goto label_4d4a04;
        case 0x4d4a08u: goto label_4d4a08;
        case 0x4d4a0cu: goto label_4d4a0c;
        case 0x4d4a10u: goto label_4d4a10;
        case 0x4d4a14u: goto label_4d4a14;
        case 0x4d4a18u: goto label_4d4a18;
        case 0x4d4a1cu: goto label_4d4a1c;
        case 0x4d4a20u: goto label_4d4a20;
        case 0x4d4a24u: goto label_4d4a24;
        case 0x4d4a28u: goto label_4d4a28;
        case 0x4d4a2cu: goto label_4d4a2c;
        case 0x4d4a30u: goto label_4d4a30;
        case 0x4d4a34u: goto label_4d4a34;
        case 0x4d4a38u: goto label_4d4a38;
        case 0x4d4a3cu: goto label_4d4a3c;
        case 0x4d4a40u: goto label_4d4a40;
        case 0x4d4a44u: goto label_4d4a44;
        case 0x4d4a48u: goto label_4d4a48;
        case 0x4d4a4cu: goto label_4d4a4c;
        case 0x4d4a50u: goto label_4d4a50;
        case 0x4d4a54u: goto label_4d4a54;
        case 0x4d4a58u: goto label_4d4a58;
        case 0x4d4a5cu: goto label_4d4a5c;
        case 0x4d4a60u: goto label_4d4a60;
        case 0x4d4a64u: goto label_4d4a64;
        case 0x4d4a68u: goto label_4d4a68;
        case 0x4d4a6cu: goto label_4d4a6c;
        case 0x4d4a70u: goto label_4d4a70;
        case 0x4d4a74u: goto label_4d4a74;
        case 0x4d4a78u: goto label_4d4a78;
        case 0x4d4a7cu: goto label_4d4a7c;
        case 0x4d4a80u: goto label_4d4a80;
        case 0x4d4a84u: goto label_4d4a84;
        case 0x4d4a88u: goto label_4d4a88;
        case 0x4d4a8cu: goto label_4d4a8c;
        default: break;
    }

    ctx->pc = 0x4d4770u;

label_4d4770:
    // 0x4d4770: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4d4770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4d4774:
    // 0x4d4774: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4d4774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4d4778:
    // 0x4d4778: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4d4778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4d477c:
    // 0x4d477c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4d477cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4d4780:
    // 0x4d4780: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4d4780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4d4784:
    // 0x4d4784: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4d4784u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d4788:
    // 0x4d4788: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d4788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d478c:
    // 0x4d478c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d478cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d4790:
    // 0x4d4790: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4d4790u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4d4794:
    // 0x4d4794: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4d4794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4d4798:
    // 0x4d4798: 0xc10ca68  jal         func_4329A0
label_4d479c:
    if (ctx->pc == 0x4D479Cu) {
        ctx->pc = 0x4D479Cu;
            // 0x4d479c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4D47A0u;
        goto label_4d47a0;
    }
    ctx->pc = 0x4D4798u;
    SET_GPR_U32(ctx, 31, 0x4D47A0u);
    ctx->pc = 0x4D479Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4798u;
            // 0x4d479c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D47A0u; }
        if (ctx->pc != 0x4D47A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D47A0u; }
        if (ctx->pc != 0x4D47A0u) { return; }
    }
    ctx->pc = 0x4D47A0u;
label_4d47a0:
    // 0x4d47a0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4d47a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4d47a4:
    // 0x4d47a4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4d47a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4d47a8:
    // 0x4d47a8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4d47a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_4d47ac:
    // 0x4d47ac: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4d47acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4d47b0:
    // 0x4d47b0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4d47b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4d47b4:
    // 0x4d47b4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x4d47b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_4d47b8:
    // 0x4d47b8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4d47b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4d47bc:
    // 0x4d47bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4d47bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4d47c0:
    // 0x4d47c0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x4d47c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_4d47c4:
    // 0x4d47c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d47c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4d47c8:
    // 0x4d47c8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x4d47c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_4d47cc:
    // 0x4d47cc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4d47ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4d47d0:
    // 0x4d47d0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x4d47d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_4d47d4:
    // 0x4d47d4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x4d47d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_4d47d8:
    // 0x4d47d8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x4d47d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_4d47dc:
    // 0x4d47dc: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x4d47dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_4d47e0:
    // 0x4d47e0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x4d47e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_4d47e4:
    // 0x4d47e4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4d47e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4d47e8:
    // 0x4d47e8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x4d47e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4d47ec:
    // 0x4d47ec: 0xc0582cc  jal         func_160B30
label_4d47f0:
    if (ctx->pc == 0x4D47F0u) {
        ctx->pc = 0x4D47F0u;
            // 0x4d47f0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x4D47F4u;
        goto label_4d47f4;
    }
    ctx->pc = 0x4D47ECu;
    SET_GPR_U32(ctx, 31, 0x4D47F4u);
    ctx->pc = 0x4D47F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D47ECu;
            // 0x4d47f0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D47F4u; }
        if (ctx->pc != 0x4D47F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D47F4u; }
        if (ctx->pc != 0x4D47F4u) { return; }
    }
    ctx->pc = 0x4D47F4u;
label_4d47f4:
    // 0x4d47f4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d47f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d47f8:
    // 0x4d47f8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x4d47f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_4d47fc:
    // 0x4d47fc: 0x24632458  addiu       $v1, $v1, 0x2458
    ctx->pc = 0x4d47fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9304));
label_4d4800:
    // 0x4d4800: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x4d4800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_4d4804:
    // 0x4d4804: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x4d4804u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_4d4808:
    // 0x4d4808: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4d4808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4d480c:
    // 0x4d480c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d480cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d4810:
    // 0x4d4810: 0xac44aa40  sw          $a0, -0x55C0($v0)
    ctx->pc = 0x4d4810u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945344), GPR_U32(ctx, 4));
label_4d4814:
    // 0x4d4814: 0x24632470  addiu       $v1, $v1, 0x2470
    ctx->pc = 0x4d4814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9328));
label_4d4818:
    // 0x4d4818: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d4818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4d481c:
    // 0x4d481c: 0x244224a8  addiu       $v0, $v0, 0x24A8
    ctx->pc = 0x4d481cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9384));
label_4d4820:
    // 0x4d4820: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4d4820u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4d4824:
    // 0x4d4824: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x4d4824u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_4d4828:
    // 0x4d4828: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x4d4828u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_4d482c:
    // 0x4d482c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x4d482cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_4d4830:
    // 0x4d4830: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x4d4830u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_4d4834:
    // 0x4d4834: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x4d4834u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_4d4838:
    // 0x4d4838: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x4d4838u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_4d483c:
    // 0x4d483c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x4d483cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_4d4840:
    // 0x4d4840: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x4d4840u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_4d4844:
    // 0x4d4844: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x4d4844u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_4d4848:
    // 0x4d4848: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x4d4848u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_4d484c:
    // 0x4d484c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x4d484cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_4d4850:
    // 0x4d4850: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x4d4850u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4d4854:
    // 0x4d4854: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_4d4858:
    if (ctx->pc == 0x4D4858u) {
        ctx->pc = 0x4D485Cu;
        goto label_4d485c;
    }
    ctx->pc = 0x4D4854u;
    {
        const bool branch_taken_0x4d4854 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d4854) {
            ctx->pc = 0x4D48E8u;
            goto label_4d48e8;
        }
    }
    ctx->pc = 0x4D485Cu;
label_4d485c:
    // 0x4d485c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x4d485cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_4d4860:
    // 0x4d4860: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4d4860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4d4864:
    // 0x4d4864: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x4d4864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_4d4868:
    // 0x4d4868: 0xc040138  jal         func_1004E0
label_4d486c:
    if (ctx->pc == 0x4D486Cu) {
        ctx->pc = 0x4D486Cu;
            // 0x4d486c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x4D4870u;
        goto label_4d4870;
    }
    ctx->pc = 0x4D4868u;
    SET_GPR_U32(ctx, 31, 0x4D4870u);
    ctx->pc = 0x4D486Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4868u;
            // 0x4d486c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4870u; }
        if (ctx->pc != 0x4D4870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4870u; }
        if (ctx->pc != 0x4D4870u) { return; }
    }
    ctx->pc = 0x4D4870u;
label_4d4870:
    // 0x4d4870: 0x3c05004d  lui         $a1, 0x4D
    ctx->pc = 0x4d4870u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)77 << 16));
label_4d4874:
    // 0x4d4874: 0x3c06004d  lui         $a2, 0x4D
    ctx->pc = 0x4d4874u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)77 << 16));
label_4d4878:
    // 0x4d4878: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4d4878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d487c:
    // 0x4d487c: 0x24a54910  addiu       $a1, $a1, 0x4910
    ctx->pc = 0x4d487cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18704));
label_4d4880:
    // 0x4d4880: 0x24c641b0  addiu       $a2, $a2, 0x41B0
    ctx->pc = 0x4d4880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16816));
label_4d4884:
    // 0x4d4884: 0x24070180  addiu       $a3, $zero, 0x180
    ctx->pc = 0x4d4884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_4d4888:
    // 0x4d4888: 0xc040840  jal         func_102100
label_4d488c:
    if (ctx->pc == 0x4D488Cu) {
        ctx->pc = 0x4D488Cu;
            // 0x4d488c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D4890u;
        goto label_4d4890;
    }
    ctx->pc = 0x4D4888u;
    SET_GPR_U32(ctx, 31, 0x4D4890u);
    ctx->pc = 0x4D488Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4888u;
            // 0x4d488c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4890u; }
        if (ctx->pc != 0x4D4890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4890u; }
        if (ctx->pc != 0x4D4890u) { return; }
    }
    ctx->pc = 0x4D4890u;
label_4d4890:
    // 0x4d4890: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x4d4890u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_4d4894:
    // 0x4d4894: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4d4894u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d4898:
    // 0x4d4898: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x4d4898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_4d489c:
    // 0x4d489c: 0xc0788fc  jal         func_1E23F0
label_4d48a0:
    if (ctx->pc == 0x4D48A0u) {
        ctx->pc = 0x4D48A0u;
            // 0x4d48a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D48A4u;
        goto label_4d48a4;
    }
    ctx->pc = 0x4D489Cu;
    SET_GPR_U32(ctx, 31, 0x4D48A4u);
    ctx->pc = 0x4D48A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D489Cu;
            // 0x4d48a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D48A4u; }
        if (ctx->pc != 0x4D48A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D48A4u; }
        if (ctx->pc != 0x4D48A4u) { return; }
    }
    ctx->pc = 0x4D48A4u;
label_4d48a4:
    // 0x4d48a4: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4d48a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_4d48a8:
    // 0x4d48a8: 0xc0788fc  jal         func_1E23F0
label_4d48ac:
    if (ctx->pc == 0x4D48ACu) {
        ctx->pc = 0x4D48ACu;
            // 0x4d48ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D48B0u;
        goto label_4d48b0;
    }
    ctx->pc = 0x4D48A8u;
    SET_GPR_U32(ctx, 31, 0x4D48B0u);
    ctx->pc = 0x4D48ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D48A8u;
            // 0x4d48ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D48B0u; }
        if (ctx->pc != 0x4D48B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D48B0u; }
        if (ctx->pc != 0x4D48B0u) { return; }
    }
    ctx->pc = 0x4D48B0u;
label_4d48b0:
    // 0x4d48b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4d48b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d48b4:
    // 0x4d48b4: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x4d48b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_4d48b8:
    // 0x4d48b8: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4d48b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_4d48bc:
    // 0x4d48bc: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x4d48bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_4d48c0:
    // 0x4d48c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4d48c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d48c4:
    // 0x4d48c4: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x4d48c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_4d48c8:
    // 0x4d48c8: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x4d48c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_4d48cc:
    // 0x4d48cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4d48ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4d48d0:
    // 0x4d48d0: 0xc0a997c  jal         func_2A65F0
label_4d48d4:
    if (ctx->pc == 0x4D48D4u) {
        ctx->pc = 0x4D48D4u;
            // 0x4d48d4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4D48D8u;
        goto label_4d48d8;
    }
    ctx->pc = 0x4D48D0u;
    SET_GPR_U32(ctx, 31, 0x4D48D8u);
    ctx->pc = 0x4D48D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D48D0u;
            // 0x4d48d4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D48D8u; }
        if (ctx->pc != 0x4D48D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D48D8u; }
        if (ctx->pc != 0x4D48D8u) { return; }
    }
    ctx->pc = 0x4D48D8u;
label_4d48d8:
    // 0x4d48d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4d48d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4d48dc:
    // 0x4d48dc: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x4d48dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4d48e0:
    // 0x4d48e0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_4d48e4:
    if (ctx->pc == 0x4D48E4u) {
        ctx->pc = 0x4D48E4u;
            // 0x4d48e4: 0x26520180  addiu       $s2, $s2, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
        ctx->pc = 0x4D48E8u;
        goto label_4d48e8;
    }
    ctx->pc = 0x4D48E0u;
    {
        const bool branch_taken_0x4d48e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D48E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D48E0u;
            // 0x4d48e4: 0x26520180  addiu       $s2, $s2, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d48e0) {
            ctx->pc = 0x4D48B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d48b4;
        }
    }
    ctx->pc = 0x4D48E8u;
label_4d48e8:
    // 0x4d48e8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4d48e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4d48ec:
    // 0x4d48ec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4d48ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4d48f0:
    // 0x4d48f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4d48f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4d48f4:
    // 0x4d48f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4d48f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4d48f8:
    // 0x4d48f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d48f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d48fc:
    // 0x4d48fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d48fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d4900:
    // 0x4d4900: 0x3e00008  jr          $ra
label_4d4904:
    if (ctx->pc == 0x4D4904u) {
        ctx->pc = 0x4D4904u;
            // 0x4d4904: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4D4908u;
        goto label_4d4908;
    }
    ctx->pc = 0x4D4900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D4904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4900u;
            // 0x4d4904: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D4908u;
label_4d4908:
    // 0x4d4908: 0x0  nop
    ctx->pc = 0x4d4908u;
    // NOP
label_4d490c:
    // 0x4d490c: 0x0  nop
    ctx->pc = 0x4d490cu;
    // NOP
label_4d4910:
    // 0x4d4910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d4910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4d4914:
    // 0x4d4914: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d4914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4d4918:
    // 0x4d4918: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d4918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d491c:
    // 0x4d491c: 0xc12e6bc  jal         func_4B9AF0
label_4d4920:
    if (ctx->pc == 0x4D4920u) {
        ctx->pc = 0x4D4920u;
            // 0x4d4920: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D4924u;
        goto label_4d4924;
    }
    ctx->pc = 0x4D491Cu;
    SET_GPR_U32(ctx, 31, 0x4D4924u);
    ctx->pc = 0x4D4920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D491Cu;
            // 0x4d4920: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9AF0u;
    if (runtime->hasFunction(0x4B9AF0u)) {
        auto targetFn = runtime->lookupFunction(0x4B9AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4924u; }
        if (ctx->pc != 0x4D4924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9AF0_0x4b9af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4924u; }
        if (ctx->pc != 0x4D4924u) { return; }
    }
    ctx->pc = 0x4D4924u;
label_4d4924:
    // 0x4d4924: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d4924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d4928:
    // 0x4d4928: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d4928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4d492c:
    // 0x4d492c: 0x24632510  addiu       $v1, $v1, 0x2510
    ctx->pc = 0x4d492cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9488));
label_4d4930:
    // 0x4d4930: 0x24422550  addiu       $v0, $v0, 0x2550
    ctx->pc = 0x4d4930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9552));
label_4d4934:
    // 0x4d4934: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d4934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4d4938:
    // 0x4d4938: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4d4938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4d493c:
    // 0x4d493c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4d493cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d4940:
    // 0x4d4940: 0xae000160  sw          $zero, 0x160($s0)
    ctx->pc = 0x4d4940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
label_4d4944:
    // 0x4d4944: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4d4944u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d4948:
    // 0x4d4948: 0xae000164  sw          $zero, 0x164($s0)
    ctx->pc = 0x4d4948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 0));
label_4d494c:
    // 0x4d494c: 0xae000168  sw          $zero, 0x168($s0)
    ctx->pc = 0x4d494cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 0));
label_4d4950:
    // 0x4d4950: 0xa2030170  sb          $v1, 0x170($s0)
    ctx->pc = 0x4d4950u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 368), (uint8_t)GPR_U32(ctx, 3));
label_4d4954:
    // 0x4d4954: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d4954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d4958:
    // 0x4d4958: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d4958u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d495c:
    // 0x4d495c: 0x3e00008  jr          $ra
label_4d4960:
    if (ctx->pc == 0x4D4960u) {
        ctx->pc = 0x4D4960u;
            // 0x4d4960: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4D4964u;
        goto label_4d4964;
    }
    ctx->pc = 0x4D495Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D4960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D495Cu;
            // 0x4d4960: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D4964u;
label_4d4964:
    // 0x4d4964: 0x0  nop
    ctx->pc = 0x4d4964u;
    // NOP
label_4d4968:
    // 0x4d4968: 0x0  nop
    ctx->pc = 0x4d4968u;
    // NOP
label_4d496c:
    // 0x4d496c: 0x0  nop
    ctx->pc = 0x4d496cu;
    // NOP
label_4d4970:
    // 0x4d4970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d4970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4d4974:
    // 0x4d4974: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d4974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4d4978:
    // 0x4d4978: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4d4978u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4d497c:
    // 0x4d497c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d497cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d4980:
    // 0x4d4980: 0xc481016c  lwc1        $f1, 0x16C($a0)
    ctx->pc = 0x4d4980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d4984:
    // 0x4d4984: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4d4984u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4d4988:
    // 0x4d4988: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_4d498c:
    if (ctx->pc == 0x4D498Cu) {
        ctx->pc = 0x4D498Cu;
            // 0x4d498c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D4990u;
        goto label_4d4990;
    }
    ctx->pc = 0x4D4988u;
    {
        const bool branch_taken_0x4d4988 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4D498Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4988u;
            // 0x4d498c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d4988) {
            ctx->pc = 0x4D49A8u;
            goto label_4d49a8;
        }
    }
    ctx->pc = 0x4D4990u;
label_4d4990:
    // 0x4d4990: 0x8e040164  lw          $a0, 0x164($s0)
    ctx->pc = 0x4d4990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
label_4d4994:
    // 0x4d4994: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4d4994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d4998:
    // 0x4d4998: 0xc122d2c  jal         func_48B4B0
label_4d499c:
    if (ctx->pc == 0x4D499Cu) {
        ctx->pc = 0x4D499Cu;
            // 0x4d499c: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x4D49A0u;
        goto label_4d49a0;
    }
    ctx->pc = 0x4D4998u;
    SET_GPR_U32(ctx, 31, 0x4D49A0u);
    ctx->pc = 0x4D499Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4998u;
            // 0x4d499c: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D49A0u; }
        if (ctx->pc != 0x4D49A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D49A0u; }
        if (ctx->pc != 0x4D49A0u) { return; }
    }
    ctx->pc = 0x4D49A0u;
label_4d49a0:
    // 0x4d49a0: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x4d49a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
label_4d49a4:
    // 0x4d49a4: 0xae03016c  sw          $v1, 0x16C($s0)
    ctx->pc = 0x4d49a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 3));
label_4d49a8:
    // 0x4d49a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d49a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d49ac:
    // 0x4d49ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d49acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d49b0:
    // 0x4d49b0: 0x3e00008  jr          $ra
label_4d49b4:
    if (ctx->pc == 0x4D49B4u) {
        ctx->pc = 0x4D49B4u;
            // 0x4d49b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4D49B8u;
        goto label_4d49b8;
    }
    ctx->pc = 0x4D49B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D49B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D49B0u;
            // 0x4d49b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D49B8u;
label_4d49b8:
    // 0x4d49b8: 0x0  nop
    ctx->pc = 0x4d49b8u;
    // NOP
label_4d49bc:
    // 0x4d49bc: 0x0  nop
    ctx->pc = 0x4d49bcu;
    // NOP
label_4d49c0:
    // 0x4d49c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d49c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4d49c4:
    // 0x4d49c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d49c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4d49c8:
    // 0x4d49c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d49c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d49cc:
    // 0x4d49cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d49ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d49d0:
    // 0x4d49d0: 0x8c8400a0  lw          $a0, 0xA0($a0)
    ctx->pc = 0x4d49d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_4d49d4:
    // 0x4d49d4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4d49d8:
    if (ctx->pc == 0x4D49D8u) {
        ctx->pc = 0x4D49D8u;
            // 0x4d49d8: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x4D49DCu;
        goto label_4d49dc;
    }
    ctx->pc = 0x4D49D4u;
    {
        const bool branch_taken_0x4d49d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d49d4) {
            ctx->pc = 0x4D49D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D49D4u;
            // 0x4d49d8: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D49F0u;
            goto label_4d49f0;
        }
    }
    ctx->pc = 0x4D49DCu;
label_4d49dc:
    // 0x4d49dc: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x4d49dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_4d49e0:
    // 0x4d49e0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4d49e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4d49e4:
    // 0x4d49e4: 0x320f809  jalr        $t9
label_4d49e8:
    if (ctx->pc == 0x4D49E8u) {
        ctx->pc = 0x4D49E8u;
            // 0x4d49e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4D49ECu;
        goto label_4d49ec;
    }
    ctx->pc = 0x4D49E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D49ECu);
        ctx->pc = 0x4D49E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D49E4u;
            // 0x4d49e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D49ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D49ECu; }
            if (ctx->pc != 0x4D49ECu) { return; }
        }
        }
    }
    ctx->pc = 0x4D49ECu;
label_4d49ec:
    // 0x4d49ec: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x4d49ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_4d49f0:
    // 0x4d49f0: 0x8e040164  lw          $a0, 0x164($s0)
    ctx->pc = 0x4d49f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
label_4d49f4:
    // 0x4d49f4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4d49f8:
    if (ctx->pc == 0x4D49F8u) {
        ctx->pc = 0x4D49F8u;
            // 0x4d49f8: 0xae000164  sw          $zero, 0x164($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 0));
        ctx->pc = 0x4D49FCu;
        goto label_4d49fc;
    }
    ctx->pc = 0x4D49F4u;
    {
        const bool branch_taken_0x4d49f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d49f4) {
            ctx->pc = 0x4D49F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D49F4u;
            // 0x4d49f8: 0xae000164  sw          $zero, 0x164($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D4A10u;
            goto label_4d4a10;
        }
    }
    ctx->pc = 0x4D49FCu;
label_4d49fc:
    // 0x4d49fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d49fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d4a00:
    // 0x4d4a00: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4d4a00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4d4a04:
    // 0x4d4a04: 0x320f809  jalr        $t9
label_4d4a08:
    if (ctx->pc == 0x4D4A08u) {
        ctx->pc = 0x4D4A08u;
            // 0x4d4a08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4D4A0Cu;
        goto label_4d4a0c;
    }
    ctx->pc = 0x4D4A04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D4A0Cu);
        ctx->pc = 0x4D4A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4A04u;
            // 0x4d4a08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D4A0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D4A0Cu; }
            if (ctx->pc != 0x4D4A0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4D4A0Cu;
label_4d4a0c:
    // 0x4d4a0c: 0xae000164  sw          $zero, 0x164($s0)
    ctx->pc = 0x4d4a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 0));
label_4d4a10:
    // 0x4d4a10: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4d4a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4d4a14:
    // 0x4d4a14: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4d4a18:
    if (ctx->pc == 0x4D4A18u) {
        ctx->pc = 0x4D4A18u;
            // 0x4d4a18: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x4D4A1Cu;
        goto label_4d4a1c;
    }
    ctx->pc = 0x4D4A14u;
    {
        const bool branch_taken_0x4d4a14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d4a14) {
            ctx->pc = 0x4D4A18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4A14u;
            // 0x4d4a18: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D4A30u;
            goto label_4d4a30;
        }
    }
    ctx->pc = 0x4D4A1Cu;
label_4d4a1c:
    // 0x4d4a1c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d4a1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d4a20:
    // 0x4d4a20: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4d4a20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4d4a24:
    // 0x4d4a24: 0x320f809  jalr        $t9
label_4d4a28:
    if (ctx->pc == 0x4D4A28u) {
        ctx->pc = 0x4D4A28u;
            // 0x4d4a28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4D4A2Cu;
        goto label_4d4a2c;
    }
    ctx->pc = 0x4D4A24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D4A2Cu);
        ctx->pc = 0x4D4A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4A24u;
            // 0x4d4a28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D4A2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D4A2Cu; }
            if (ctx->pc != 0x4D4A2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4D4A2Cu;
label_4d4a2c:
    // 0x4d4a2c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x4d4a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_4d4a30:
    // 0x4d4a30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d4a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d4a34:
    // 0x4d4a34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d4a34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d4a38:
    // 0x4d4a38: 0x3e00008  jr          $ra
label_4d4a3c:
    if (ctx->pc == 0x4D4A3Cu) {
        ctx->pc = 0x4D4A3Cu;
            // 0x4d4a3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4D4A40u;
        goto label_4d4a40;
    }
    ctx->pc = 0x4D4A38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D4A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4A38u;
            // 0x4d4a3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D4A40u;
label_4d4a40:
    // 0x4d4a40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d4a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4d4a44:
    // 0x4d4a44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4d4a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d4a48:
    // 0x4d4a48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d4a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4d4a4c:
    // 0x4d4a4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d4a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d4a50:
    // 0x4d4a50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d4a50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d4a54:
    // 0x4d4a54: 0xc0baaa0  jal         func_2EAA80
label_4d4a58:
    if (ctx->pc == 0x4D4A58u) {
        ctx->pc = 0x4D4A58u;
            // 0x4d4a58: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x4D4A5Cu;
        goto label_4d4a5c;
    }
    ctx->pc = 0x4D4A54u;
    SET_GPR_U32(ctx, 31, 0x4D4A5Cu);
    ctx->pc = 0x4D4A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4A54u;
            // 0x4d4a58: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EAA80u;
    if (runtime->hasFunction(0x2EAA80u)) {
        auto targetFn = runtime->lookupFunction(0x2EAA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4A5Cu; }
        if (ctx->pc != 0x4D4A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EAA80_0x2eaa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4A5Cu; }
        if (ctx->pc != 0x4D4A5Cu) { return; }
    }
    ctx->pc = 0x4D4A5Cu;
label_4d4a5c:
    // 0x4d4a5c: 0x92030170  lbu         $v1, 0x170($s0)
    ctx->pc = 0x4d4a5cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 368)));
label_4d4a60:
    // 0x4d4a60: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_4d4a64:
    if (ctx->pc == 0x4D4A64u) {
        ctx->pc = 0x4D4A64u;
            // 0x4d4a64: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4D4A68u;
        goto label_4d4a68;
    }
    ctx->pc = 0x4D4A60u;
    {
        const bool branch_taken_0x4d4a60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d4a60) {
            ctx->pc = 0x4D4A64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4A60u;
            // 0x4d4a64: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D4A80u;
            goto label_4d4a80;
        }
    }
    ctx->pc = 0x4D4A68u;
label_4d4a68:
    // 0x4d4a68: 0x8e040164  lw          $a0, 0x164($s0)
    ctx->pc = 0x4d4a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
label_4d4a6c:
    // 0x4d4a6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4d4a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d4a70:
    // 0x4d4a70: 0xc122d2c  jal         func_48B4B0
label_4d4a74:
    if (ctx->pc == 0x4D4A74u) {
        ctx->pc = 0x4D4A74u;
            // 0x4d4a74: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x4D4A78u;
        goto label_4d4a78;
    }
    ctx->pc = 0x4D4A70u;
    SET_GPR_U32(ctx, 31, 0x4D4A78u);
    ctx->pc = 0x4D4A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4A70u;
            // 0x4d4a74: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4A78u; }
        if (ctx->pc != 0x4D4A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4A78u; }
        if (ctx->pc != 0x4D4A78u) { return; }
    }
    ctx->pc = 0x4D4A78u;
label_4d4a78:
    // 0x4d4a78: 0xa2000170  sb          $zero, 0x170($s0)
    ctx->pc = 0x4d4a78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 368), (uint8_t)GPR_U32(ctx, 0));
label_4d4a7c:
    // 0x4d4a7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d4a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d4a80:
    // 0x4d4a80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d4a80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d4a84:
    // 0x4d4a84: 0x3e00008  jr          $ra
label_4d4a88:
    if (ctx->pc == 0x4D4A88u) {
        ctx->pc = 0x4D4A88u;
            // 0x4d4a88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4D4A8Cu;
        goto label_4d4a8c;
    }
    ctx->pc = 0x4D4A84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D4A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4A84u;
            // 0x4d4a88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D4A8Cu;
label_4d4a8c:
    // 0x4d4a8c: 0x0  nop
    ctx->pc = 0x4d4a8cu;
    // NOP
}
