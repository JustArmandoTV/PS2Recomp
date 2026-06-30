#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004FD4C0
// Address: 0x4fd4c0 - 0x4fd840
void sub_004FD4C0_0x4fd4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FD4C0_0x4fd4c0");
#endif

    switch (ctx->pc) {
        case 0x4fd4c0u: goto label_4fd4c0;
        case 0x4fd4c4u: goto label_4fd4c4;
        case 0x4fd4c8u: goto label_4fd4c8;
        case 0x4fd4ccu: goto label_4fd4cc;
        case 0x4fd4d0u: goto label_4fd4d0;
        case 0x4fd4d4u: goto label_4fd4d4;
        case 0x4fd4d8u: goto label_4fd4d8;
        case 0x4fd4dcu: goto label_4fd4dc;
        case 0x4fd4e0u: goto label_4fd4e0;
        case 0x4fd4e4u: goto label_4fd4e4;
        case 0x4fd4e8u: goto label_4fd4e8;
        case 0x4fd4ecu: goto label_4fd4ec;
        case 0x4fd4f0u: goto label_4fd4f0;
        case 0x4fd4f4u: goto label_4fd4f4;
        case 0x4fd4f8u: goto label_4fd4f8;
        case 0x4fd4fcu: goto label_4fd4fc;
        case 0x4fd500u: goto label_4fd500;
        case 0x4fd504u: goto label_4fd504;
        case 0x4fd508u: goto label_4fd508;
        case 0x4fd50cu: goto label_4fd50c;
        case 0x4fd510u: goto label_4fd510;
        case 0x4fd514u: goto label_4fd514;
        case 0x4fd518u: goto label_4fd518;
        case 0x4fd51cu: goto label_4fd51c;
        case 0x4fd520u: goto label_4fd520;
        case 0x4fd524u: goto label_4fd524;
        case 0x4fd528u: goto label_4fd528;
        case 0x4fd52cu: goto label_4fd52c;
        case 0x4fd530u: goto label_4fd530;
        case 0x4fd534u: goto label_4fd534;
        case 0x4fd538u: goto label_4fd538;
        case 0x4fd53cu: goto label_4fd53c;
        case 0x4fd540u: goto label_4fd540;
        case 0x4fd544u: goto label_4fd544;
        case 0x4fd548u: goto label_4fd548;
        case 0x4fd54cu: goto label_4fd54c;
        case 0x4fd550u: goto label_4fd550;
        case 0x4fd554u: goto label_4fd554;
        case 0x4fd558u: goto label_4fd558;
        case 0x4fd55cu: goto label_4fd55c;
        case 0x4fd560u: goto label_4fd560;
        case 0x4fd564u: goto label_4fd564;
        case 0x4fd568u: goto label_4fd568;
        case 0x4fd56cu: goto label_4fd56c;
        case 0x4fd570u: goto label_4fd570;
        case 0x4fd574u: goto label_4fd574;
        case 0x4fd578u: goto label_4fd578;
        case 0x4fd57cu: goto label_4fd57c;
        case 0x4fd580u: goto label_4fd580;
        case 0x4fd584u: goto label_4fd584;
        case 0x4fd588u: goto label_4fd588;
        case 0x4fd58cu: goto label_4fd58c;
        case 0x4fd590u: goto label_4fd590;
        case 0x4fd594u: goto label_4fd594;
        case 0x4fd598u: goto label_4fd598;
        case 0x4fd59cu: goto label_4fd59c;
        case 0x4fd5a0u: goto label_4fd5a0;
        case 0x4fd5a4u: goto label_4fd5a4;
        case 0x4fd5a8u: goto label_4fd5a8;
        case 0x4fd5acu: goto label_4fd5ac;
        case 0x4fd5b0u: goto label_4fd5b0;
        case 0x4fd5b4u: goto label_4fd5b4;
        case 0x4fd5b8u: goto label_4fd5b8;
        case 0x4fd5bcu: goto label_4fd5bc;
        case 0x4fd5c0u: goto label_4fd5c0;
        case 0x4fd5c4u: goto label_4fd5c4;
        case 0x4fd5c8u: goto label_4fd5c8;
        case 0x4fd5ccu: goto label_4fd5cc;
        case 0x4fd5d0u: goto label_4fd5d0;
        case 0x4fd5d4u: goto label_4fd5d4;
        case 0x4fd5d8u: goto label_4fd5d8;
        case 0x4fd5dcu: goto label_4fd5dc;
        case 0x4fd5e0u: goto label_4fd5e0;
        case 0x4fd5e4u: goto label_4fd5e4;
        case 0x4fd5e8u: goto label_4fd5e8;
        case 0x4fd5ecu: goto label_4fd5ec;
        case 0x4fd5f0u: goto label_4fd5f0;
        case 0x4fd5f4u: goto label_4fd5f4;
        case 0x4fd5f8u: goto label_4fd5f8;
        case 0x4fd5fcu: goto label_4fd5fc;
        case 0x4fd600u: goto label_4fd600;
        case 0x4fd604u: goto label_4fd604;
        case 0x4fd608u: goto label_4fd608;
        case 0x4fd60cu: goto label_4fd60c;
        case 0x4fd610u: goto label_4fd610;
        case 0x4fd614u: goto label_4fd614;
        case 0x4fd618u: goto label_4fd618;
        case 0x4fd61cu: goto label_4fd61c;
        case 0x4fd620u: goto label_4fd620;
        case 0x4fd624u: goto label_4fd624;
        case 0x4fd628u: goto label_4fd628;
        case 0x4fd62cu: goto label_4fd62c;
        case 0x4fd630u: goto label_4fd630;
        case 0x4fd634u: goto label_4fd634;
        case 0x4fd638u: goto label_4fd638;
        case 0x4fd63cu: goto label_4fd63c;
        case 0x4fd640u: goto label_4fd640;
        case 0x4fd644u: goto label_4fd644;
        case 0x4fd648u: goto label_4fd648;
        case 0x4fd64cu: goto label_4fd64c;
        case 0x4fd650u: goto label_4fd650;
        case 0x4fd654u: goto label_4fd654;
        case 0x4fd658u: goto label_4fd658;
        case 0x4fd65cu: goto label_4fd65c;
        case 0x4fd660u: goto label_4fd660;
        case 0x4fd664u: goto label_4fd664;
        case 0x4fd668u: goto label_4fd668;
        case 0x4fd66cu: goto label_4fd66c;
        case 0x4fd670u: goto label_4fd670;
        case 0x4fd674u: goto label_4fd674;
        case 0x4fd678u: goto label_4fd678;
        case 0x4fd67cu: goto label_4fd67c;
        case 0x4fd680u: goto label_4fd680;
        case 0x4fd684u: goto label_4fd684;
        case 0x4fd688u: goto label_4fd688;
        case 0x4fd68cu: goto label_4fd68c;
        case 0x4fd690u: goto label_4fd690;
        case 0x4fd694u: goto label_4fd694;
        case 0x4fd698u: goto label_4fd698;
        case 0x4fd69cu: goto label_4fd69c;
        case 0x4fd6a0u: goto label_4fd6a0;
        case 0x4fd6a4u: goto label_4fd6a4;
        case 0x4fd6a8u: goto label_4fd6a8;
        case 0x4fd6acu: goto label_4fd6ac;
        case 0x4fd6b0u: goto label_4fd6b0;
        case 0x4fd6b4u: goto label_4fd6b4;
        case 0x4fd6b8u: goto label_4fd6b8;
        case 0x4fd6bcu: goto label_4fd6bc;
        case 0x4fd6c0u: goto label_4fd6c0;
        case 0x4fd6c4u: goto label_4fd6c4;
        case 0x4fd6c8u: goto label_4fd6c8;
        case 0x4fd6ccu: goto label_4fd6cc;
        case 0x4fd6d0u: goto label_4fd6d0;
        case 0x4fd6d4u: goto label_4fd6d4;
        case 0x4fd6d8u: goto label_4fd6d8;
        case 0x4fd6dcu: goto label_4fd6dc;
        case 0x4fd6e0u: goto label_4fd6e0;
        case 0x4fd6e4u: goto label_4fd6e4;
        case 0x4fd6e8u: goto label_4fd6e8;
        case 0x4fd6ecu: goto label_4fd6ec;
        case 0x4fd6f0u: goto label_4fd6f0;
        case 0x4fd6f4u: goto label_4fd6f4;
        case 0x4fd6f8u: goto label_4fd6f8;
        case 0x4fd6fcu: goto label_4fd6fc;
        case 0x4fd700u: goto label_4fd700;
        case 0x4fd704u: goto label_4fd704;
        case 0x4fd708u: goto label_4fd708;
        case 0x4fd70cu: goto label_4fd70c;
        case 0x4fd710u: goto label_4fd710;
        case 0x4fd714u: goto label_4fd714;
        case 0x4fd718u: goto label_4fd718;
        case 0x4fd71cu: goto label_4fd71c;
        case 0x4fd720u: goto label_4fd720;
        case 0x4fd724u: goto label_4fd724;
        case 0x4fd728u: goto label_4fd728;
        case 0x4fd72cu: goto label_4fd72c;
        case 0x4fd730u: goto label_4fd730;
        case 0x4fd734u: goto label_4fd734;
        case 0x4fd738u: goto label_4fd738;
        case 0x4fd73cu: goto label_4fd73c;
        case 0x4fd740u: goto label_4fd740;
        case 0x4fd744u: goto label_4fd744;
        case 0x4fd748u: goto label_4fd748;
        case 0x4fd74cu: goto label_4fd74c;
        case 0x4fd750u: goto label_4fd750;
        case 0x4fd754u: goto label_4fd754;
        case 0x4fd758u: goto label_4fd758;
        case 0x4fd75cu: goto label_4fd75c;
        case 0x4fd760u: goto label_4fd760;
        case 0x4fd764u: goto label_4fd764;
        case 0x4fd768u: goto label_4fd768;
        case 0x4fd76cu: goto label_4fd76c;
        case 0x4fd770u: goto label_4fd770;
        case 0x4fd774u: goto label_4fd774;
        case 0x4fd778u: goto label_4fd778;
        case 0x4fd77cu: goto label_4fd77c;
        case 0x4fd780u: goto label_4fd780;
        case 0x4fd784u: goto label_4fd784;
        case 0x4fd788u: goto label_4fd788;
        case 0x4fd78cu: goto label_4fd78c;
        case 0x4fd790u: goto label_4fd790;
        case 0x4fd794u: goto label_4fd794;
        case 0x4fd798u: goto label_4fd798;
        case 0x4fd79cu: goto label_4fd79c;
        case 0x4fd7a0u: goto label_4fd7a0;
        case 0x4fd7a4u: goto label_4fd7a4;
        case 0x4fd7a8u: goto label_4fd7a8;
        case 0x4fd7acu: goto label_4fd7ac;
        case 0x4fd7b0u: goto label_4fd7b0;
        case 0x4fd7b4u: goto label_4fd7b4;
        case 0x4fd7b8u: goto label_4fd7b8;
        case 0x4fd7bcu: goto label_4fd7bc;
        case 0x4fd7c0u: goto label_4fd7c0;
        case 0x4fd7c4u: goto label_4fd7c4;
        case 0x4fd7c8u: goto label_4fd7c8;
        case 0x4fd7ccu: goto label_4fd7cc;
        case 0x4fd7d0u: goto label_4fd7d0;
        case 0x4fd7d4u: goto label_4fd7d4;
        case 0x4fd7d8u: goto label_4fd7d8;
        case 0x4fd7dcu: goto label_4fd7dc;
        case 0x4fd7e0u: goto label_4fd7e0;
        case 0x4fd7e4u: goto label_4fd7e4;
        case 0x4fd7e8u: goto label_4fd7e8;
        case 0x4fd7ecu: goto label_4fd7ec;
        case 0x4fd7f0u: goto label_4fd7f0;
        case 0x4fd7f4u: goto label_4fd7f4;
        case 0x4fd7f8u: goto label_4fd7f8;
        case 0x4fd7fcu: goto label_4fd7fc;
        case 0x4fd800u: goto label_4fd800;
        case 0x4fd804u: goto label_4fd804;
        case 0x4fd808u: goto label_4fd808;
        case 0x4fd80cu: goto label_4fd80c;
        case 0x4fd810u: goto label_4fd810;
        case 0x4fd814u: goto label_4fd814;
        case 0x4fd818u: goto label_4fd818;
        case 0x4fd81cu: goto label_4fd81c;
        case 0x4fd820u: goto label_4fd820;
        case 0x4fd824u: goto label_4fd824;
        case 0x4fd828u: goto label_4fd828;
        case 0x4fd82cu: goto label_4fd82c;
        case 0x4fd830u: goto label_4fd830;
        case 0x4fd834u: goto label_4fd834;
        case 0x4fd838u: goto label_4fd838;
        case 0x4fd83cu: goto label_4fd83c;
        default: break;
    }

    ctx->pc = 0x4fd4c0u;

label_4fd4c0:
    // 0x4fd4c0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x4fd4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_4fd4c4:
    // 0x4fd4c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4fd4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4fd4c8:
    // 0x4fd4c8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4fd4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_4fd4cc:
    // 0x4fd4cc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x4fd4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_4fd4d0:
    // 0x4fd4d0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4fd4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4fd4d4:
    // 0x4fd4d4: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x4fd4d4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4fd4d8:
    // 0x4fd4d8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4fd4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4fd4dc:
    // 0x4fd4dc: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x4fd4dcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4fd4e0:
    // 0x4fd4e0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4fd4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4fd4e4:
    // 0x4fd4e4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4fd4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4fd4e8:
    // 0x4fd4e8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x4fd4e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4fd4ec:
    // 0x4fd4ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4fd4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4fd4f0:
    // 0x4fd4f0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x4fd4f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4fd4f4:
    // 0x4fd4f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4fd4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4fd4f8:
    // 0x4fd4f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4fd4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4fd4fc:
    // 0x4fd4fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4fd4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4fd500:
    // 0x4fd500: 0x8c530e80  lw          $s3, 0xE80($v0)
    ctx->pc = 0x4fd500u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4fd504:
    // 0x4fd504: 0x8cb00e38  lw          $s0, 0xE38($a1)
    ctx->pc = 0x4fd504u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3640)));
label_4fd508:
    // 0x4fd508: 0xafa800ac  sw          $t0, 0xAC($sp)
    ctx->pc = 0x4fd508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 8));
label_4fd50c:
    // 0x4fd50c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x4fd50cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4fd510:
    // 0x4fd510: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x4fd510u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_4fd514:
    // 0x4fd514: 0x320f809  jalr        $t9
label_4fd518:
    if (ctx->pc == 0x4FD518u) {
        ctx->pc = 0x4FD518u;
            // 0x4fd518: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FD51Cu;
        goto label_4fd51c;
    }
    ctx->pc = 0x4FD514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FD51Cu);
        ctx->pc = 0x4FD518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD514u;
            // 0x4fd518: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FD51Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FD51Cu; }
            if (ctx->pc != 0x4FD51Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4FD51Cu;
label_4fd51c:
    // 0x4fd51c: 0x202001b  divu        $zero, $s0, $v0
    ctx->pc = 0x4fd51cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
label_4fd520:
    // 0x4fd520: 0x8ea30d78  lw          $v1, 0xD78($s5)
    ctx->pc = 0x4fd520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3448)));
label_4fd524:
    // 0x4fd524: 0x8c710020  lw          $s1, 0x20($v1)
    ctx->pc = 0x4fd524u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_4fd528:
    // 0x4fd528: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4fd528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4fd52c:
    // 0x4fd52c: 0x9012  mflo        $s2
    ctx->pc = 0x4fd52cu;
    SET_GPR_U64(ctx, 18, ctx->lo);
label_4fd530:
    // 0x4fd530: 0x16020002  bne         $s0, $v0, . + 4 + (0x2 << 2)
label_4fd534:
    if (ctx->pc == 0x4FD534u) {
        ctx->pc = 0x4FD534u;
            // 0x4fd534: 0x8e76078c  lw          $s6, 0x78C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1932)));
        ctx->pc = 0x4FD538u;
        goto label_4fd538;
    }
    ctx->pc = 0x4FD530u;
    {
        const bool branch_taken_0x4fd530 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x4FD534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD530u;
            // 0x4fd534: 0x8e76078c  lw          $s6, 0x78C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1932)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd530) {
            ctx->pc = 0x4FD53Cu;
            goto label_4fd53c;
        }
    }
    ctx->pc = 0x4FD538u;
label_4fd538:
    // 0x4fd538: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x4fd538u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4fd53c:
    // 0x4fd53c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x4fd53cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4fd540:
    // 0x4fd540: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4fd540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4fd544:
    // 0x4fd544: 0x8eb00d98  lw          $s0, 0xD98($s5)
    ctx->pc = 0x4fd544u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3480)));
label_4fd548:
    // 0x4fd548: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4fd548u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4fd54c:
    // 0x4fd54c: 0x320f809  jalr        $t9
label_4fd550:
    if (ctx->pc == 0x4FD550u) {
        ctx->pc = 0x4FD550u;
            // 0x4fd550: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FD554u;
        goto label_4fd554;
    }
    ctx->pc = 0x4FD54Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FD554u);
        ctx->pc = 0x4FD550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD54Cu;
            // 0x4fd550: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FD554u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FD554u; }
            if (ctx->pc != 0x4FD554u) { return; }
        }
        }
    }
    ctx->pc = 0x4FD554u;
label_4fd554:
    // 0x4fd554: 0x56020064  bnel        $s0, $v0, . + 4 + (0x64 << 2)
label_4fd558:
    if (ctx->pc == 0x4FD558u) {
        ctx->pc = 0x4FD558u;
            // 0x4fd558: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x4FD55Cu;
        goto label_4fd55c;
    }
    ctx->pc = 0x4FD554u;
    {
        const bool branch_taken_0x4fd554 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x4fd554) {
            ctx->pc = 0x4FD558u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD554u;
            // 0x4fd558: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FD6E8u;
            goto label_4fd6e8;
        }
    }
    ctx->pc = 0x4FD55Cu;
label_4fd55c:
    // 0x4fd55c: 0x8e640968  lw          $a0, 0x968($s3)
    ctx->pc = 0x4fd55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2408)));
label_4fd560:
    // 0x4fd560: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x4fd560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_4fd564:
    // 0x4fd564: 0x54830018  bnel        $a0, $v1, . + 4 + (0x18 << 2)
label_4fd568:
    if (ctx->pc == 0x4FD568u) {
        ctx->pc = 0x4FD568u;
            // 0x4fd568: 0x236082a  slt         $at, $s1, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
        ctx->pc = 0x4FD56Cu;
        goto label_4fd56c;
    }
    ctx->pc = 0x4FD564u;
    {
        const bool branch_taken_0x4fd564 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4fd564) {
            ctx->pc = 0x4FD568u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD564u;
            // 0x4fd568: 0x236082a  slt         $at, $s1, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FD5C8u;
            goto label_4fd5c8;
        }
    }
    ctx->pc = 0x4FD56Cu;
label_4fd56c:
    // 0x4fd56c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4fd56cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4fd570:
    // 0x4fd570: 0x8c633da0  lw          $v1, 0x3DA0($v1)
    ctx->pc = 0x4fd570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15776)));
label_4fd574:
    // 0x4fd574: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_4fd578:
    if (ctx->pc == 0x4FD578u) {
        ctx->pc = 0x4FD578u;
            // 0x4fd578: 0x8ea50d78  lw          $a1, 0xD78($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3448)));
        ctx->pc = 0x4FD57Cu;
        goto label_4fd57c;
    }
    ctx->pc = 0x4FD574u;
    {
        const bool branch_taken_0x4fd574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FD578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD574u;
            // 0x4fd578: 0x8ea50d78  lw          $a1, 0xD78($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd574) {
            ctx->pc = 0x4FD5A4u;
            goto label_4fd5a4;
        }
    }
    ctx->pc = 0x4FD57Cu;
label_4fd57c:
    // 0x4fd57c: 0x8c630074  lw          $v1, 0x74($v1)
    ctx->pc = 0x4fd57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_4fd580:
    // 0x4fd580: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4fd580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4fd584:
    // 0x4fd584: 0x8c6302c4  lw          $v1, 0x2C4($v1)
    ctx->pc = 0x4fd584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 708)));
label_4fd588:
    // 0x4fd588: 0x54600011  bnel        $v1, $zero, . + 4 + (0x11 << 2)
label_4fd58c:
    if (ctx->pc == 0x4FD58Cu) {
        ctx->pc = 0x4FD58Cu;
            // 0x4fd58c: 0x8cb10048  lw          $s1, 0x48($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
        ctx->pc = 0x4FD590u;
        goto label_4fd590;
    }
    ctx->pc = 0x4FD588u;
    {
        const bool branch_taken_0x4fd588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4fd588) {
            ctx->pc = 0x4FD58Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD588u;
            // 0x4fd58c: 0x8cb10048  lw          $s1, 0x48($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FD5D0u;
            goto label_4fd5d0;
        }
    }
    ctx->pc = 0x4FD590u;
label_4fd590:
    // 0x4fd590: 0x236182a  slt         $v1, $s1, $s6
    ctx->pc = 0x4fd590u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_4fd594:
    // 0x4fd594: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_4fd598:
    if (ctx->pc == 0x4FD598u) {
        ctx->pc = 0x4FD59Cu;
        goto label_4fd59c;
    }
    ctx->pc = 0x4FD594u;
    {
        const bool branch_taken_0x4fd594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4fd594) {
            ctx->pc = 0x4FD5BCu;
            goto label_4fd5bc;
        }
    }
    ctx->pc = 0x4FD59Cu;
label_4fd59c:
    // 0x4fd59c: 0x10000051  b           . + 4 + (0x51 << 2)
label_4fd5a0:
    if (ctx->pc == 0x4FD5A0u) {
        ctx->pc = 0x4FD5A4u;
        goto label_4fd5a4;
    }
    ctx->pc = 0x4FD59Cu;
    {
        const bool branch_taken_0x4fd59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fd59c) {
            ctx->pc = 0x4FD6E4u;
            goto label_4fd6e4;
        }
    }
    ctx->pc = 0x4FD5A4u;
label_4fd5a4:
    // 0x4fd5a4: 0x8e63078c  lw          $v1, 0x78C($s3)
    ctx->pc = 0x4fd5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1932)));
label_4fd5a8:
    // 0x4fd5a8: 0x8ca40048  lw          $a0, 0x48($a1)
    ctx->pc = 0x4fd5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_4fd5ac:
    // 0x4fd5ac: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4fd5acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_4fd5b0:
    // 0x4fd5b0: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x4fd5b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_4fd5b4:
    // 0x4fd5b4: 0x1020004b  beqz        $at, . + 4 + (0x4B << 2)
label_4fd5b8:
    if (ctx->pc == 0x4FD5B8u) {
        ctx->pc = 0x4FD5BCu;
        goto label_4fd5bc;
    }
    ctx->pc = 0x4FD5B4u;
    {
        const bool branch_taken_0x4fd5b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fd5b4) {
            ctx->pc = 0x4FD6E4u;
            goto label_4fd6e4;
        }
    }
    ctx->pc = 0x4FD5BCu;
label_4fd5bc:
    // 0x4fd5bc: 0x8cb10048  lw          $s1, 0x48($a1)
    ctx->pc = 0x4fd5bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_4fd5c0:
    // 0x4fd5c0: 0x10000003  b           . + 4 + (0x3 << 2)
label_4fd5c4:
    if (ctx->pc == 0x4FD5C4u) {
        ctx->pc = 0x4FD5C8u;
        goto label_4fd5c8;
    }
    ctx->pc = 0x4FD5C0u;
    {
        const bool branch_taken_0x4fd5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fd5c0) {
            ctx->pc = 0x4FD5D0u;
            goto label_4fd5d0;
        }
    }
    ctx->pc = 0x4FD5C8u;
label_4fd5c8:
    // 0x4fd5c8: 0x10200046  beqz        $at, . + 4 + (0x46 << 2)
label_4fd5cc:
    if (ctx->pc == 0x4FD5CCu) {
        ctx->pc = 0x4FD5D0u;
        goto label_4fd5d0;
    }
    ctx->pc = 0x4FD5C8u;
    {
        const bool branch_taken_0x4fd5c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fd5c8) {
            ctx->pc = 0x4FD6E4u;
            goto label_4fd6e4;
        }
    }
    ctx->pc = 0x4FD5D0u;
label_4fd5d0:
    // 0x4fd5d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4fd5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4fd5d4:
    // 0x4fd5d4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x4fd5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_4fd5d8:
    // 0x4fd5d8: 0x8c50e370  lw          $s0, -0x1C90($v0)
    ctx->pc = 0x4fd5d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_4fd5dc:
    // 0x4fd5dc: 0x26a502c0  addiu       $a1, $s5, 0x2C0
    ctx->pc = 0x4fd5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 704));
label_4fd5e0:
    // 0x4fd5e0: 0xc04cc90  jal         func_133240
label_4fd5e4:
    if (ctx->pc == 0x4FD5E4u) {
        ctx->pc = 0x4FD5E4u;
            // 0x4fd5e4: 0x26a602d0  addiu       $a2, $s5, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 720));
        ctx->pc = 0x4FD5E8u;
        goto label_4fd5e8;
    }
    ctx->pc = 0x4FD5E0u;
    SET_GPR_U32(ctx, 31, 0x4FD5E8u);
    ctx->pc = 0x4FD5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD5E0u;
            // 0x4fd5e4: 0x26a602d0  addiu       $a2, $s5, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD5E8u; }
        if (ctx->pc != 0x4FD5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD5E8u; }
        if (ctx->pc != 0x4FD5E8u) { return; }
    }
    ctx->pc = 0x4FD5E8u;
label_4fd5e8:
    // 0x4fd5e8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x4fd5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_4fd5ec:
    // 0x4fd5ec: 0xc04cc44  jal         func_133110
label_4fd5f0:
    if (ctx->pc == 0x4FD5F0u) {
        ctx->pc = 0x4FD5F0u;
            // 0x4fd5f0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FD5F4u;
        goto label_4fd5f4;
    }
    ctx->pc = 0x4FD5ECu;
    SET_GPR_U32(ctx, 31, 0x4FD5F4u);
    ctx->pc = 0x4FD5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD5ECu;
            // 0x4fd5f0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD5F4u; }
        if (ctx->pc != 0x4FD5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD5F4u; }
        if (ctx->pc != 0x4FD5F4u) { return; }
    }
    ctx->pc = 0x4FD5F4u;
label_4fd5f4:
    // 0x4fd5f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4fd5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4fd5f8:
    // 0x4fd5f8: 0xc04f278  jal         func_13C9E0
label_4fd5fc:
    if (ctx->pc == 0x4FD5FCu) {
        ctx->pc = 0x4FD5FCu;
            // 0x4fd5fc: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->pc = 0x4FD600u;
        goto label_4fd600;
    }
    ctx->pc = 0x4FD5F8u;
    SET_GPR_U32(ctx, 31, 0x4FD600u);
    ctx->pc = 0x4FD5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD5F8u;
            // 0x4fd5fc: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD600u; }
        if (ctx->pc != 0x4FD600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD600u; }
        if (ctx->pc != 0x4FD600u) { return; }
    }
    ctx->pc = 0x4FD600u;
label_4fd600:
    // 0x4fd600: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x4fd600u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_4fd604:
    // 0x4fd604: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4fd604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4fd608:
    // 0x4fd608: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4fd608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4fd60c:
    // 0x4fd60c: 0xc04cca0  jal         func_133280
label_4fd610:
    if (ctx->pc == 0x4FD610u) {
        ctx->pc = 0x4FD610u;
            // 0x4fd610: 0x24c68d90  addiu       $a2, $a2, -0x7270 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938000));
        ctx->pc = 0x4FD614u;
        goto label_4fd614;
    }
    ctx->pc = 0x4FD60Cu;
    SET_GPR_U32(ctx, 31, 0x4FD614u);
    ctx->pc = 0x4FD610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD60Cu;
            // 0x4fd610: 0x24c68d90  addiu       $a2, $a2, -0x7270 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD614u; }
        if (ctx->pc != 0x4FD614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD614u; }
        if (ctx->pc != 0x4FD614u) { return; }
    }
    ctx->pc = 0x4FD614u;
label_4fd614:
    // 0x4fd614: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4fd614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4fd618:
    // 0x4fd618: 0xc04cc44  jal         func_133110
label_4fd61c:
    if (ctx->pc == 0x4FD61Cu) {
        ctx->pc = 0x4FD61Cu;
            // 0x4fd61c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FD620u;
        goto label_4fd620;
    }
    ctx->pc = 0x4FD618u;
    SET_GPR_U32(ctx, 31, 0x4FD620u);
    ctx->pc = 0x4FD61Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD618u;
            // 0x4fd61c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD620u; }
        if (ctx->pc != 0x4FD620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD620u; }
        if (ctx->pc != 0x4FD620u) { return; }
    }
    ctx->pc = 0x4FD620u;
label_4fd620:
    // 0x4fd620: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x4fd620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_4fd624:
    // 0x4fd624: 0xc04cc08  jal         func_133020
label_4fd628:
    if (ctx->pc == 0x4FD628u) {
        ctx->pc = 0x4FD628u;
            // 0x4fd628: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x4FD62Cu;
        goto label_4fd62c;
    }
    ctx->pc = 0x4FD624u;
    SET_GPR_U32(ctx, 31, 0x4FD62Cu);
    ctx->pc = 0x4FD628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD624u;
            // 0x4fd628: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD62Cu; }
        if (ctx->pc != 0x4FD62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD62Cu; }
        if (ctx->pc != 0x4FD62Cu) { return; }
    }
    ctx->pc = 0x4FD62Cu;
label_4fd62c:
    // 0x4fd62c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4fd62cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4fd630:
    // 0x4fd630: 0x0  nop
    ctx->pc = 0x4fd630u;
    // NOP
label_4fd634:
    // 0x4fd634: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4fd634u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fd638:
    // 0x4fd638: 0x4501002a  bc1t        . + 4 + (0x2A << 2)
label_4fd63c:
    if (ctx->pc == 0x4FD63Cu) {
        ctx->pc = 0x4FD640u;
        goto label_4fd640;
    }
    ctx->pc = 0x4FD638u;
    {
        const bool branch_taken_0x4fd638 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4fd638) {
            ctx->pc = 0x4FD6E4u;
            goto label_4fd6e4;
        }
    }
    ctx->pc = 0x4FD640u;
label_4fd640:
    // 0x4fd640: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x4fd640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_4fd644:
    // 0x4fd644: 0x732821  addu        $a1, $v1, $s3
    ctx->pc = 0x4fd644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_4fd648:
    // 0x4fd648: 0x8ca30cc8  lw          $v1, 0xCC8($a1)
    ctx->pc = 0x4fd648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3272)));
label_4fd64c:
    // 0x4fd64c: 0x71082a  slt         $at, $v1, $s1
    ctx->pc = 0x4fd64cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_4fd650:
    // 0x4fd650: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
label_4fd654:
    if (ctx->pc == 0x4FD654u) {
        ctx->pc = 0x4FD658u;
        goto label_4fd658;
    }
    ctx->pc = 0x4FD650u;
    {
        const bool branch_taken_0x4fd650 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fd650) {
            ctx->pc = 0x4FD6E4u;
            goto label_4fd6e4;
        }
    }
    ctx->pc = 0x4FD658u;
label_4fd658:
    // 0x4fd658: 0x8ea40db0  lw          $a0, 0xDB0($s5)
    ctx->pc = 0x4fd658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3504)));
label_4fd65c:
    // 0x4fd65c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x4fd65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_4fd660:
    // 0x4fd660: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
label_4fd664:
    if (ctx->pc == 0x4FD664u) {
        ctx->pc = 0x4FD668u;
        goto label_4fd668;
    }
    ctx->pc = 0x4FD660u;
    {
        const bool branch_taken_0x4fd660 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4fd660) {
            ctx->pc = 0x4FD6E4u;
            goto label_4fd6e4;
        }
    }
    ctx->pc = 0x4FD668u;
label_4fd668:
    // 0x4fd668: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x4fd668u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4fd66c:
    // 0x4fd66c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4fd66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4fd670:
    // 0x4fd670: 0x8cb00cd8  lw          $s0, 0xCD8($a1)
    ctx->pc = 0x4fd670u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3288)));
label_4fd674:
    // 0x4fd674: 0x26910010  addiu       $s1, $s4, 0x10
    ctx->pc = 0x4fd674u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_4fd678:
    // 0x4fd678: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4fd678u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4fd67c:
    // 0x4fd67c: 0x320f809  jalr        $t9
label_4fd680:
    if (ctx->pc == 0x4FD680u) {
        ctx->pc = 0x4FD680u;
            // 0x4fd680: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FD684u;
        goto label_4fd684;
    }
    ctx->pc = 0x4FD67Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FD684u);
        ctx->pc = 0x4FD680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD67Cu;
            // 0x4fd680: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FD684u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FD684u; }
            if (ctx->pc != 0x4FD684u) { return; }
        }
        }
    }
    ctx->pc = 0x4FD684u;
label_4fd684:
    // 0x4fd684: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x4fd684u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_4fd688:
    // 0x4fd688: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4fd688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4fd68c:
    // 0x4fd68c: 0x972021  addu        $a0, $a0, $s7
    ctx->pc = 0x4fd68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
label_4fd690:
    // 0x4fd690: 0x8c9500e0  lw          $s5, 0xE0($a0)
    ctx->pc = 0x4fd690u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
label_4fd694:
    // 0x4fd694: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4fd694u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fd698:
    // 0x4fd698: 0xa2a00128  sb          $zero, 0x128($s5)
    ctx->pc = 0x4fd698u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 296), (uint8_t)GPR_U32(ctx, 0));
label_4fd69c:
    // 0x4fd69c: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x4fd69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_4fd6a0:
    // 0x4fd6a0: 0xaea20120  sw          $v0, 0x120($s5)
    ctx->pc = 0x4fd6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 288), GPR_U32(ctx, 2));
label_4fd6a4:
    // 0x4fd6a4: 0xaeb00124  sw          $s0, 0x124($s5)
    ctx->pc = 0x4fd6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 292), GPR_U32(ctx, 16));
label_4fd6a8:
    // 0x4fd6a8: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x4fd6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4fd6ac:
    // 0x4fd6ac: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x4fd6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4fd6b0:
    // 0x4fd6b0: 0xc62e0008  lwc1        $f14, 0x8($s1)
    ctx->pc = 0x4fd6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4fd6b4:
    // 0x4fd6b4: 0xc04cbd8  jal         func_132F60
label_4fd6b8:
    if (ctx->pc == 0x4FD6B8u) {
        ctx->pc = 0x4FD6B8u;
            // 0x4fd6b8: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x4FD6BCu;
        goto label_4fd6bc;
    }
    ctx->pc = 0x4FD6B4u;
    SET_GPR_U32(ctx, 31, 0x4FD6BCu);
    ctx->pc = 0x4FD6B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD6B4u;
            // 0x4fd6b8: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD6BCu; }
        if (ctx->pc != 0x4FD6BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD6BCu; }
        if (ctx->pc != 0x4FD6BCu) { return; }
    }
    ctx->pc = 0x4FD6BCu;
label_4fd6bc:
    // 0x4fd6bc: 0x26a40020  addiu       $a0, $s5, 0x20
    ctx->pc = 0x4fd6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_4fd6c0:
    // 0x4fd6c0: 0xc04c720  jal         func_131C80
label_4fd6c4:
    if (ctx->pc == 0x4FD6C4u) {
        ctx->pc = 0x4FD6C4u;
            // 0x4fd6c4: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->pc = 0x4FD6C8u;
        goto label_4fd6c8;
    }
    ctx->pc = 0x4FD6C0u;
    SET_GPR_U32(ctx, 31, 0x4FD6C8u);
    ctx->pc = 0x4FD6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD6C0u;
            // 0x4fd6c4: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD6C8u; }
        if (ctx->pc != 0x4FD6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD6C8u; }
        if (ctx->pc != 0x4FD6C8u) { return; }
    }
    ctx->pc = 0x4FD6C8u;
label_4fd6c8:
    // 0x4fd6c8: 0x8fa800ac  lw          $t0, 0xAC($sp)
    ctx->pc = 0x4fd6c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_4fd6cc:
    // 0x4fd6cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4fd6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4fd6d0:
    // 0x4fd6d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4fd6d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4fd6d4:
    // 0x4fd6d4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x4fd6d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4fd6d8:
    // 0x4fd6d8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x4fd6d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4fd6dc:
    // 0x4fd6dc: 0xc12ee70  jal         func_4BB9C0
label_4fd6e0:
    if (ctx->pc == 0x4FD6E0u) {
        ctx->pc = 0x4FD6E0u;
            // 0x4fd6e0: 0x26890030  addiu       $t1, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->pc = 0x4FD6E4u;
        goto label_4fd6e4;
    }
    ctx->pc = 0x4FD6DCu;
    SET_GPR_U32(ctx, 31, 0x4FD6E4u);
    ctx->pc = 0x4FD6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD6DCu;
            // 0x4fd6e0: 0x26890030  addiu       $t1, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4BB9C0u;
    if (runtime->hasFunction(0x4BB9C0u)) {
        auto targetFn = runtime->lookupFunction(0x4BB9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD6E4u; }
        if (ctx->pc != 0x4FD6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004BB9C0_0x4bb9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD6E4u; }
        if (ctx->pc != 0x4FD6E4u) { return; }
    }
    ctx->pc = 0x4FD6E4u;
label_4fd6e4:
    // 0x4fd6e4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4fd6e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4fd6e8:
    // 0x4fd6e8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x4fd6e8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4fd6ec:
    // 0x4fd6ec: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4fd6ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4fd6f0:
    // 0x4fd6f0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4fd6f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4fd6f4:
    // 0x4fd6f4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4fd6f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4fd6f8:
    // 0x4fd6f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4fd6f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4fd6fc:
    // 0x4fd6fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4fd6fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4fd700:
    // 0x4fd700: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4fd700u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4fd704:
    // 0x4fd704: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4fd704u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4fd708:
    // 0x4fd708: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4fd708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4fd70c:
    // 0x4fd70c: 0x3e00008  jr          $ra
label_4fd710:
    if (ctx->pc == 0x4FD710u) {
        ctx->pc = 0x4FD710u;
            // 0x4fd710: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x4FD714u;
        goto label_4fd714;
    }
    ctx->pc = 0x4FD70Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FD710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD70Cu;
            // 0x4fd710: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FD714u;
label_4fd714:
    // 0x4fd714: 0x0  nop
    ctx->pc = 0x4fd714u;
    // NOP
label_4fd718:
    // 0x4fd718: 0x0  nop
    ctx->pc = 0x4fd718u;
    // NOP
label_4fd71c:
    // 0x4fd71c: 0x0  nop
    ctx->pc = 0x4fd71cu;
    // NOP
label_4fd720:
    // 0x4fd720: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4fd720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4fd724:
    // 0x4fd724: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4fd724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4fd728:
    // 0x4fd728: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4fd728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4fd72c:
    // 0x4fd72c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4fd72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4fd730:
    // 0x4fd730: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4fd730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4fd734:
    // 0x4fd734: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4fd734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4fd738:
    // 0x4fd738: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4fd738u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4fd73c:
    // 0x4fd73c: 0x12200035  beqz        $s1, . + 4 + (0x35 << 2)
label_4fd740:
    if (ctx->pc == 0x4FD740u) {
        ctx->pc = 0x4FD740u;
            // 0x4fd740: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FD744u;
        goto label_4fd744;
    }
    ctx->pc = 0x4FD73Cu;
    {
        const bool branch_taken_0x4fd73c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FD740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD73Cu;
            // 0x4fd740: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd73c) {
            ctx->pc = 0x4FD814u;
            goto label_4fd814;
        }
    }
    ctx->pc = 0x4FD744u;
label_4fd744:
    // 0x4fd744: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4fd744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4fd748:
    // 0x4fd748: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4fd748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4fd74c:
    // 0x4fd74c: 0x246345a0  addiu       $v1, $v1, 0x45A0
    ctx->pc = 0x4fd74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17824));
label_4fd750:
    // 0x4fd750: 0x244245d8  addiu       $v0, $v0, 0x45D8
    ctx->pc = 0x4fd750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17880));
label_4fd754:
    // 0x4fd754: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4fd754u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4fd758:
    // 0x4fd758: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x4fd758u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4fd75c:
    // 0x4fd75c: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4fd75cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4fd760:
    // 0x4fd760: 0x26320004  addiu       $s2, $s1, 0x4
    ctx->pc = 0x4fd760u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_4fd764:
    // 0x4fd764: 0x8e4400e0  lw          $a0, 0xE0($s2)
    ctx->pc = 0x4fd764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
label_4fd768:
    // 0x4fd768: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_4fd76c:
    if (ctx->pc == 0x4FD76Cu) {
        ctx->pc = 0x4FD770u;
        goto label_4fd770;
    }
    ctx->pc = 0x4FD768u;
    {
        const bool branch_taken_0x4fd768 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fd768) {
            ctx->pc = 0x4FD780u;
            goto label_4fd780;
        }
    }
    ctx->pc = 0x4FD770u;
label_4fd770:
    // 0x4fd770: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4fd770u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4fd774:
    // 0x4fd774: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4fd774u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4fd778:
    // 0x4fd778: 0x320f809  jalr        $t9
label_4fd77c:
    if (ctx->pc == 0x4FD77Cu) {
        ctx->pc = 0x4FD77Cu;
            // 0x4fd77c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4FD780u;
        goto label_4fd780;
    }
    ctx->pc = 0x4FD778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FD780u);
        ctx->pc = 0x4FD77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD778u;
            // 0x4fd77c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FD780u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FD780u; }
            if (ctx->pc != 0x4FD780u) { return; }
        }
        }
    }
    ctx->pc = 0x4FD780u;
label_4fd780:
    // 0x4fd780: 0xae4000e0  sw          $zero, 0xE0($s2)
    ctx->pc = 0x4fd780u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 0));
label_4fd784:
    // 0x4fd784: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x4fd784u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_4fd788:
    // 0x4fd788: 0x661fff6  bgez        $s3, . + 4 + (-0xA << 2)
label_4fd78c:
    if (ctx->pc == 0x4FD78Cu) {
        ctx->pc = 0x4FD78Cu;
            // 0x4fd78c: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->pc = 0x4FD790u;
        goto label_4fd790;
    }
    ctx->pc = 0x4FD788u;
    {
        const bool branch_taken_0x4fd788 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x4FD78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD788u;
            // 0x4fd78c: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd788) {
            ctx->pc = 0x4FD764u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4fd764;
        }
    }
    ctx->pc = 0x4FD790u;
label_4fd790:
    // 0x4fd790: 0x5220001b  beql        $s1, $zero, . + 4 + (0x1B << 2)
label_4fd794:
    if (ctx->pc == 0x4FD794u) {
        ctx->pc = 0x4FD794u;
            // 0x4fd794: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4FD798u;
        goto label_4fd798;
    }
    ctx->pc = 0x4FD790u;
    {
        const bool branch_taken_0x4fd790 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fd790) {
            ctx->pc = 0x4FD794u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD790u;
            // 0x4fd794: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FD800u;
            goto label_4fd800;
        }
    }
    ctx->pc = 0x4FD798u;
label_4fd798:
    // 0x4fd798: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4fd798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4fd79c:
    // 0x4fd79c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4fd79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4fd7a0:
    // 0x4fd7a0: 0x24634640  addiu       $v1, $v1, 0x4640
    ctx->pc = 0x4fd7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17984));
label_4fd7a4:
    // 0x4fd7a4: 0x3c050050  lui         $a1, 0x50
    ctx->pc = 0x4fd7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)80 << 16));
label_4fd7a8:
    // 0x4fd7a8: 0x24424678  addiu       $v0, $v0, 0x4678
    ctx->pc = 0x4fd7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18040));
label_4fd7ac:
    // 0x4fd7ac: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4fd7acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4fd7b0:
    // 0x4fd7b0: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4fd7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4fd7b4:
    // 0x4fd7b4: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x4fd7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4fd7b8:
    // 0x4fd7b8: 0xc0407c0  jal         func_101F00
label_4fd7bc:
    if (ctx->pc == 0x4FD7BCu) {
        ctx->pc = 0x4FD7BCu;
            // 0x4fd7bc: 0x24a5d9a0  addiu       $a1, $a1, -0x2660 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957472));
        ctx->pc = 0x4FD7C0u;
        goto label_4fd7c0;
    }
    ctx->pc = 0x4FD7B8u;
    SET_GPR_U32(ctx, 31, 0x4FD7C0u);
    ctx->pc = 0x4FD7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD7B8u;
            // 0x4fd7bc: 0x24a5d9a0  addiu       $a1, $a1, -0x2660 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD7C0u; }
        if (ctx->pc != 0x4FD7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD7C0u; }
        if (ctx->pc != 0x4FD7C0u) { return; }
    }
    ctx->pc = 0x4FD7C0u;
label_4fd7c0:
    // 0x4fd7c0: 0x26240084  addiu       $a0, $s1, 0x84
    ctx->pc = 0x4fd7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4fd7c4:
    // 0x4fd7c4: 0xc13f644  jal         func_4FD910
label_4fd7c8:
    if (ctx->pc == 0x4FD7C8u) {
        ctx->pc = 0x4FD7C8u;
            // 0x4fd7c8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4FD7CCu;
        goto label_4fd7cc;
    }
    ctx->pc = 0x4FD7C4u;
    SET_GPR_U32(ctx, 31, 0x4FD7CCu);
    ctx->pc = 0x4FD7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD7C4u;
            // 0x4fd7c8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FD910u;
    if (runtime->hasFunction(0x4FD910u)) {
        auto targetFn = runtime->lookupFunction(0x4FD910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD7CCu; }
        if (ctx->pc != 0x4FD7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FD910_0x4fd910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD7CCu; }
        if (ctx->pc != 0x4FD7CCu) { return; }
    }
    ctx->pc = 0x4FD7CCu;
label_4fd7cc:
    // 0x4fd7cc: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x4fd7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4fd7d0:
    // 0x4fd7d0: 0xc13f628  jal         func_4FD8A0
label_4fd7d4:
    if (ctx->pc == 0x4FD7D4u) {
        ctx->pc = 0x4FD7D4u;
            // 0x4fd7d4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4FD7D8u;
        goto label_4fd7d8;
    }
    ctx->pc = 0x4FD7D0u;
    SET_GPR_U32(ctx, 31, 0x4FD7D8u);
    ctx->pc = 0x4FD7D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD7D0u;
            // 0x4fd7d4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FD8A0u;
    if (runtime->hasFunction(0x4FD8A0u)) {
        auto targetFn = runtime->lookupFunction(0x4FD8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD7D8u; }
        if (ctx->pc != 0x4FD7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FD8A0_0x4fd8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD7D8u; }
        if (ctx->pc != 0x4FD7D8u) { return; }
    }
    ctx->pc = 0x4FD7D8u;
label_4fd7d8:
    // 0x4fd7d8: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x4fd7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4fd7dc:
    // 0x4fd7dc: 0xc13f628  jal         func_4FD8A0
label_4fd7e0:
    if (ctx->pc == 0x4FD7E0u) {
        ctx->pc = 0x4FD7E0u;
            // 0x4fd7e0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4FD7E4u;
        goto label_4fd7e4;
    }
    ctx->pc = 0x4FD7DCu;
    SET_GPR_U32(ctx, 31, 0x4FD7E4u);
    ctx->pc = 0x4FD7E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD7DCu;
            // 0x4fd7e0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FD8A0u;
    if (runtime->hasFunction(0x4FD8A0u)) {
        auto targetFn = runtime->lookupFunction(0x4FD8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD7E4u; }
        if (ctx->pc != 0x4FD7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FD8A0_0x4fd8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD7E4u; }
        if (ctx->pc != 0x4FD7E4u) { return; }
    }
    ctx->pc = 0x4FD7E4u;
label_4fd7e4:
    // 0x4fd7e4: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x4fd7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4fd7e8:
    // 0x4fd7e8: 0xc13f610  jal         func_4FD840
label_4fd7ec:
    if (ctx->pc == 0x4FD7ECu) {
        ctx->pc = 0x4FD7ECu;
            // 0x4fd7ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FD7F0u;
        goto label_4fd7f0;
    }
    ctx->pc = 0x4FD7E8u;
    SET_GPR_U32(ctx, 31, 0x4FD7F0u);
    ctx->pc = 0x4FD7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD7E8u;
            // 0x4fd7ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FD840u;
    if (runtime->hasFunction(0x4FD840u)) {
        auto targetFn = runtime->lookupFunction(0x4FD840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD7F0u; }
        if (ctx->pc != 0x4FD7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FD840_0x4fd840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD7F0u; }
        if (ctx->pc != 0x4FD7F0u) { return; }
    }
    ctx->pc = 0x4FD7F0u;
label_4fd7f0:
    // 0x4fd7f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4fd7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4fd7f4:
    // 0x4fd7f4: 0xc0ae1c0  jal         func_2B8700
label_4fd7f8:
    if (ctx->pc == 0x4FD7F8u) {
        ctx->pc = 0x4FD7F8u;
            // 0x4fd7f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FD7FCu;
        goto label_4fd7fc;
    }
    ctx->pc = 0x4FD7F4u;
    SET_GPR_U32(ctx, 31, 0x4FD7FCu);
    ctx->pc = 0x4FD7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD7F4u;
            // 0x4fd7f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD7FCu; }
        if (ctx->pc != 0x4FD7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD7FCu; }
        if (ctx->pc != 0x4FD7FCu) { return; }
    }
    ctx->pc = 0x4FD7FCu;
label_4fd7fc:
    // 0x4fd7fc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4fd7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4fd800:
    // 0x4fd800: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4fd800u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4fd804:
    // 0x4fd804: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4fd808:
    if (ctx->pc == 0x4FD808u) {
        ctx->pc = 0x4FD808u;
            // 0x4fd808: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FD80Cu;
        goto label_4fd80c;
    }
    ctx->pc = 0x4FD804u;
    {
        const bool branch_taken_0x4fd804 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4fd804) {
            ctx->pc = 0x4FD808u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD804u;
            // 0x4fd808: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FD818u;
            goto label_4fd818;
        }
    }
    ctx->pc = 0x4FD80Cu;
label_4fd80c:
    // 0x4fd80c: 0xc0400a8  jal         func_1002A0
label_4fd810:
    if (ctx->pc == 0x4FD810u) {
        ctx->pc = 0x4FD810u;
            // 0x4fd810: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FD814u;
        goto label_4fd814;
    }
    ctx->pc = 0x4FD80Cu;
    SET_GPR_U32(ctx, 31, 0x4FD814u);
    ctx->pc = 0x4FD810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD80Cu;
            // 0x4fd810: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD814u; }
        if (ctx->pc != 0x4FD814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FD814u; }
        if (ctx->pc != 0x4FD814u) { return; }
    }
    ctx->pc = 0x4FD814u;
label_4fd814:
    // 0x4fd814: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4fd814u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4fd818:
    // 0x4fd818: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4fd818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4fd81c:
    // 0x4fd81c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4fd81cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4fd820:
    // 0x4fd820: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4fd820u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4fd824:
    // 0x4fd824: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4fd824u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4fd828:
    // 0x4fd828: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4fd828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4fd82c:
    // 0x4fd82c: 0x3e00008  jr          $ra
label_4fd830:
    if (ctx->pc == 0x4FD830u) {
        ctx->pc = 0x4FD830u;
            // 0x4fd830: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4FD834u;
        goto label_4fd834;
    }
    ctx->pc = 0x4FD82Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FD830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FD82Cu;
            // 0x4fd830: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FD834u;
label_4fd834:
    // 0x4fd834: 0x0  nop
    ctx->pc = 0x4fd834u;
    // NOP
label_4fd838:
    // 0x4fd838: 0x0  nop
    ctx->pc = 0x4fd838u;
    // NOP
label_4fd83c:
    // 0x4fd83c: 0x0  nop
    ctx->pc = 0x4fd83cu;
    // NOP
}
