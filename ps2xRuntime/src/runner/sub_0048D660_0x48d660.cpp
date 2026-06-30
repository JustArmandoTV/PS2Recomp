#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048D660
// Address: 0x48d660 - 0x48d950
void sub_0048D660_0x48d660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048D660_0x48d660");
#endif

    switch (ctx->pc) {
        case 0x48d660u: goto label_48d660;
        case 0x48d664u: goto label_48d664;
        case 0x48d668u: goto label_48d668;
        case 0x48d66cu: goto label_48d66c;
        case 0x48d670u: goto label_48d670;
        case 0x48d674u: goto label_48d674;
        case 0x48d678u: goto label_48d678;
        case 0x48d67cu: goto label_48d67c;
        case 0x48d680u: goto label_48d680;
        case 0x48d684u: goto label_48d684;
        case 0x48d688u: goto label_48d688;
        case 0x48d68cu: goto label_48d68c;
        case 0x48d690u: goto label_48d690;
        case 0x48d694u: goto label_48d694;
        case 0x48d698u: goto label_48d698;
        case 0x48d69cu: goto label_48d69c;
        case 0x48d6a0u: goto label_48d6a0;
        case 0x48d6a4u: goto label_48d6a4;
        case 0x48d6a8u: goto label_48d6a8;
        case 0x48d6acu: goto label_48d6ac;
        case 0x48d6b0u: goto label_48d6b0;
        case 0x48d6b4u: goto label_48d6b4;
        case 0x48d6b8u: goto label_48d6b8;
        case 0x48d6bcu: goto label_48d6bc;
        case 0x48d6c0u: goto label_48d6c0;
        case 0x48d6c4u: goto label_48d6c4;
        case 0x48d6c8u: goto label_48d6c8;
        case 0x48d6ccu: goto label_48d6cc;
        case 0x48d6d0u: goto label_48d6d0;
        case 0x48d6d4u: goto label_48d6d4;
        case 0x48d6d8u: goto label_48d6d8;
        case 0x48d6dcu: goto label_48d6dc;
        case 0x48d6e0u: goto label_48d6e0;
        case 0x48d6e4u: goto label_48d6e4;
        case 0x48d6e8u: goto label_48d6e8;
        case 0x48d6ecu: goto label_48d6ec;
        case 0x48d6f0u: goto label_48d6f0;
        case 0x48d6f4u: goto label_48d6f4;
        case 0x48d6f8u: goto label_48d6f8;
        case 0x48d6fcu: goto label_48d6fc;
        case 0x48d700u: goto label_48d700;
        case 0x48d704u: goto label_48d704;
        case 0x48d708u: goto label_48d708;
        case 0x48d70cu: goto label_48d70c;
        case 0x48d710u: goto label_48d710;
        case 0x48d714u: goto label_48d714;
        case 0x48d718u: goto label_48d718;
        case 0x48d71cu: goto label_48d71c;
        case 0x48d720u: goto label_48d720;
        case 0x48d724u: goto label_48d724;
        case 0x48d728u: goto label_48d728;
        case 0x48d72cu: goto label_48d72c;
        case 0x48d730u: goto label_48d730;
        case 0x48d734u: goto label_48d734;
        case 0x48d738u: goto label_48d738;
        case 0x48d73cu: goto label_48d73c;
        case 0x48d740u: goto label_48d740;
        case 0x48d744u: goto label_48d744;
        case 0x48d748u: goto label_48d748;
        case 0x48d74cu: goto label_48d74c;
        case 0x48d750u: goto label_48d750;
        case 0x48d754u: goto label_48d754;
        case 0x48d758u: goto label_48d758;
        case 0x48d75cu: goto label_48d75c;
        case 0x48d760u: goto label_48d760;
        case 0x48d764u: goto label_48d764;
        case 0x48d768u: goto label_48d768;
        case 0x48d76cu: goto label_48d76c;
        case 0x48d770u: goto label_48d770;
        case 0x48d774u: goto label_48d774;
        case 0x48d778u: goto label_48d778;
        case 0x48d77cu: goto label_48d77c;
        case 0x48d780u: goto label_48d780;
        case 0x48d784u: goto label_48d784;
        case 0x48d788u: goto label_48d788;
        case 0x48d78cu: goto label_48d78c;
        case 0x48d790u: goto label_48d790;
        case 0x48d794u: goto label_48d794;
        case 0x48d798u: goto label_48d798;
        case 0x48d79cu: goto label_48d79c;
        case 0x48d7a0u: goto label_48d7a0;
        case 0x48d7a4u: goto label_48d7a4;
        case 0x48d7a8u: goto label_48d7a8;
        case 0x48d7acu: goto label_48d7ac;
        case 0x48d7b0u: goto label_48d7b0;
        case 0x48d7b4u: goto label_48d7b4;
        case 0x48d7b8u: goto label_48d7b8;
        case 0x48d7bcu: goto label_48d7bc;
        case 0x48d7c0u: goto label_48d7c0;
        case 0x48d7c4u: goto label_48d7c4;
        case 0x48d7c8u: goto label_48d7c8;
        case 0x48d7ccu: goto label_48d7cc;
        case 0x48d7d0u: goto label_48d7d0;
        case 0x48d7d4u: goto label_48d7d4;
        case 0x48d7d8u: goto label_48d7d8;
        case 0x48d7dcu: goto label_48d7dc;
        case 0x48d7e0u: goto label_48d7e0;
        case 0x48d7e4u: goto label_48d7e4;
        case 0x48d7e8u: goto label_48d7e8;
        case 0x48d7ecu: goto label_48d7ec;
        case 0x48d7f0u: goto label_48d7f0;
        case 0x48d7f4u: goto label_48d7f4;
        case 0x48d7f8u: goto label_48d7f8;
        case 0x48d7fcu: goto label_48d7fc;
        case 0x48d800u: goto label_48d800;
        case 0x48d804u: goto label_48d804;
        case 0x48d808u: goto label_48d808;
        case 0x48d80cu: goto label_48d80c;
        case 0x48d810u: goto label_48d810;
        case 0x48d814u: goto label_48d814;
        case 0x48d818u: goto label_48d818;
        case 0x48d81cu: goto label_48d81c;
        case 0x48d820u: goto label_48d820;
        case 0x48d824u: goto label_48d824;
        case 0x48d828u: goto label_48d828;
        case 0x48d82cu: goto label_48d82c;
        case 0x48d830u: goto label_48d830;
        case 0x48d834u: goto label_48d834;
        case 0x48d838u: goto label_48d838;
        case 0x48d83cu: goto label_48d83c;
        case 0x48d840u: goto label_48d840;
        case 0x48d844u: goto label_48d844;
        case 0x48d848u: goto label_48d848;
        case 0x48d84cu: goto label_48d84c;
        case 0x48d850u: goto label_48d850;
        case 0x48d854u: goto label_48d854;
        case 0x48d858u: goto label_48d858;
        case 0x48d85cu: goto label_48d85c;
        case 0x48d860u: goto label_48d860;
        case 0x48d864u: goto label_48d864;
        case 0x48d868u: goto label_48d868;
        case 0x48d86cu: goto label_48d86c;
        case 0x48d870u: goto label_48d870;
        case 0x48d874u: goto label_48d874;
        case 0x48d878u: goto label_48d878;
        case 0x48d87cu: goto label_48d87c;
        case 0x48d880u: goto label_48d880;
        case 0x48d884u: goto label_48d884;
        case 0x48d888u: goto label_48d888;
        case 0x48d88cu: goto label_48d88c;
        case 0x48d890u: goto label_48d890;
        case 0x48d894u: goto label_48d894;
        case 0x48d898u: goto label_48d898;
        case 0x48d89cu: goto label_48d89c;
        case 0x48d8a0u: goto label_48d8a0;
        case 0x48d8a4u: goto label_48d8a4;
        case 0x48d8a8u: goto label_48d8a8;
        case 0x48d8acu: goto label_48d8ac;
        case 0x48d8b0u: goto label_48d8b0;
        case 0x48d8b4u: goto label_48d8b4;
        case 0x48d8b8u: goto label_48d8b8;
        case 0x48d8bcu: goto label_48d8bc;
        case 0x48d8c0u: goto label_48d8c0;
        case 0x48d8c4u: goto label_48d8c4;
        case 0x48d8c8u: goto label_48d8c8;
        case 0x48d8ccu: goto label_48d8cc;
        case 0x48d8d0u: goto label_48d8d0;
        case 0x48d8d4u: goto label_48d8d4;
        case 0x48d8d8u: goto label_48d8d8;
        case 0x48d8dcu: goto label_48d8dc;
        case 0x48d8e0u: goto label_48d8e0;
        case 0x48d8e4u: goto label_48d8e4;
        case 0x48d8e8u: goto label_48d8e8;
        case 0x48d8ecu: goto label_48d8ec;
        case 0x48d8f0u: goto label_48d8f0;
        case 0x48d8f4u: goto label_48d8f4;
        case 0x48d8f8u: goto label_48d8f8;
        case 0x48d8fcu: goto label_48d8fc;
        case 0x48d900u: goto label_48d900;
        case 0x48d904u: goto label_48d904;
        case 0x48d908u: goto label_48d908;
        case 0x48d90cu: goto label_48d90c;
        case 0x48d910u: goto label_48d910;
        case 0x48d914u: goto label_48d914;
        case 0x48d918u: goto label_48d918;
        case 0x48d91cu: goto label_48d91c;
        case 0x48d920u: goto label_48d920;
        case 0x48d924u: goto label_48d924;
        case 0x48d928u: goto label_48d928;
        case 0x48d92cu: goto label_48d92c;
        case 0x48d930u: goto label_48d930;
        case 0x48d934u: goto label_48d934;
        case 0x48d938u: goto label_48d938;
        case 0x48d93cu: goto label_48d93c;
        case 0x48d940u: goto label_48d940;
        case 0x48d944u: goto label_48d944;
        case 0x48d948u: goto label_48d948;
        case 0x48d94cu: goto label_48d94c;
        default: break;
    }

    ctx->pc = 0x48d660u;

label_48d660:
    // 0x48d660: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x48d660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_48d664:
    // 0x48d664: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x48d664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_48d668:
    // 0x48d668: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x48d668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_48d66c:
    // 0x48d66c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x48d66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_48d670:
    // 0x48d670: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x48d670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_48d674:
    // 0x48d674: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48d674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_48d678:
    // 0x48d678: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x48d678u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48d67c:
    // 0x48d67c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48d67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48d680:
    // 0x48d680: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48d680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48d684:
    // 0x48d684: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x48d684u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_48d688:
    // 0x48d688: 0xac900008  sw          $s0, 0x8($a0)
    ctx->pc = 0x48d688u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 16));
label_48d68c:
    // 0x48d68c: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x48d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_48d690:
    // 0x48d690: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x48d690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_48d694:
    // 0x48d694: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_48d698:
    if (ctx->pc == 0x48D698u) {
        ctx->pc = 0x48D698u;
            // 0x48d698: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48D69Cu;
        goto label_48d69c;
    }
    ctx->pc = 0x48D694u;
    {
        const bool branch_taken_0x48d694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48D694u;
            // 0x48d698: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d694) {
            ctx->pc = 0x48D740u;
            goto label_48d740;
        }
    }
    ctx->pc = 0x48D69Cu;
label_48d69c:
    // 0x48d69c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x48d69cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48d6a0:
    // 0x48d6a0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x48d6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_48d6a4:
    // 0x48d6a4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x48d6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_48d6a8:
    // 0x48d6a8: 0x40f809  jalr        $v0
label_48d6ac:
    if (ctx->pc == 0x48D6ACu) {
        ctx->pc = 0x48D6B0u;
        goto label_48d6b0;
    }
    ctx->pc = 0x48D6A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48D6B0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x48D6B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48D6B0u; }
            if (ctx->pc != 0x48D6B0u) { return; }
        }
        }
    }
    ctx->pc = 0x48D6B0u;
label_48d6b0:
    // 0x48d6b0: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x48d6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_48d6b4:
    // 0x48d6b4: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x48d6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_48d6b8:
    // 0x48d6b8: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x48d6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_48d6bc:
    // 0x48d6bc: 0x922821  addu        $a1, $a0, $s2
    ctx->pc = 0x48d6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_48d6c0:
    // 0x48d6c0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x48d6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_48d6c4:
    // 0x48d6c4: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_48d6c8:
    if (ctx->pc == 0x48D6C8u) {
        ctx->pc = 0x48D6CCu;
        goto label_48d6cc;
    }
    ctx->pc = 0x48D6C4u;
    {
        const bool branch_taken_0x48d6c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x48d6c4) {
            ctx->pc = 0x48D6D8u;
            goto label_48d6d8;
        }
    }
    ctx->pc = 0x48D6CCu;
label_48d6cc:
    // 0x48d6cc: 0x10000008  b           . + 4 + (0x8 << 2)
label_48d6d0:
    if (ctx->pc == 0x48D6D0u) {
        ctx->pc = 0x48D6D4u;
        goto label_48d6d4;
    }
    ctx->pc = 0x48D6CCu;
    {
        const bool branch_taken_0x48d6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d6cc) {
            ctx->pc = 0x48D6F0u;
            goto label_48d6f0;
        }
    }
    ctx->pc = 0x48D6D4u;
label_48d6d4:
    // 0x48d6d4: 0x0  nop
    ctx->pc = 0x48d6d4u;
    // NOP
label_48d6d8:
    // 0x48d6d8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x48d6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_48d6dc:
    // 0x48d6dc: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x48d6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_48d6e0:
    // 0x48d6e0: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x48d6e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_48d6e4:
    // 0x48d6e4: 0x10000006  b           . + 4 + (0x6 << 2)
label_48d6e8:
    if (ctx->pc == 0x48D6E8u) {
        ctx->pc = 0x48D6E8u;
            // 0x48d6e8: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
        ctx->pc = 0x48D6ECu;
        goto label_48d6ec;
    }
    ctx->pc = 0x48D6E4u;
    {
        const bool branch_taken_0x48d6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48D6E4u;
            // 0x48d6e8: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d6e4) {
            ctx->pc = 0x48D700u;
            goto label_48d700;
        }
    }
    ctx->pc = 0x48D6ECu;
label_48d6ec:
    // 0x48d6ec: 0x0  nop
    ctx->pc = 0x48d6ecu;
    // NOP
label_48d6f0:
    // 0x48d6f0: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x48d6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_48d6f4:
    // 0x48d6f4: 0xc123eb8  jal         func_48FAE0
label_48d6f8:
    if (ctx->pc == 0x48D6F8u) {
        ctx->pc = 0x48D6F8u;
            // 0x48d6f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48D6FCu;
        goto label_48d6fc;
    }
    ctx->pc = 0x48D6F4u;
    SET_GPR_U32(ctx, 31, 0x48D6FCu);
    ctx->pc = 0x48D6F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48D6F4u;
            // 0x48d6f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48FAE0u;
    if (runtime->hasFunction(0x48FAE0u)) {
        auto targetFn = runtime->lookupFunction(0x48FAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D6FCu; }
        if (ctx->pc != 0x48D6FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048FAE0_0x48fae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D6FCu; }
        if (ctx->pc != 0x48D6FCu) { return; }
    }
    ctx->pc = 0x48D6FCu;
label_48d6fc:
    // 0x48d6fc: 0x0  nop
    ctx->pc = 0x48d6fcu;
    // NOP
label_48d700:
    // 0x48d700: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x48d700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_48d704:
    // 0x48d704: 0x26240024  addiu       $a0, $s1, 0x24
    ctx->pc = 0x48d704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
label_48d708:
    // 0x48d708: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x48d708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48d70c:
    // 0x48d70c: 0x27a7007c  addiu       $a3, $sp, 0x7C
    ctx->pc = 0x48d70cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_48d710:
    // 0x48d710: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x48d710u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
label_48d714:
    // 0x48d714: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x48d714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_48d718:
    // 0x48d718: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x48d718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_48d71c:
    // 0x48d71c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48d71cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_48d720:
    // 0x48d720: 0xc0a997c  jal         func_2A65F0
label_48d724:
    if (ctx->pc == 0x48D724u) {
        ctx->pc = 0x48D724u;
            // 0x48d724: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x48D728u;
        goto label_48d728;
    }
    ctx->pc = 0x48D720u;
    SET_GPR_U32(ctx, 31, 0x48D728u);
    ctx->pc = 0x48D724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48D720u;
            // 0x48d724: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D728u; }
        if (ctx->pc != 0x48D728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D728u; }
        if (ctx->pc != 0x48D728u) { return; }
    }
    ctx->pc = 0x48D728u;
label_48d728:
    // 0x48d728: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x48d728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_48d72c:
    // 0x48d72c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x48d72cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_48d730:
    // 0x48d730: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x48d730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_48d734:
    // 0x48d734: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x48d734u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_48d738:
    // 0x48d738: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_48d73c:
    if (ctx->pc == 0x48D73Cu) {
        ctx->pc = 0x48D73Cu;
            // 0x48d73c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->pc = 0x48D740u;
        goto label_48d740;
    }
    ctx->pc = 0x48D738u;
    {
        const bool branch_taken_0x48d738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48D73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48D738u;
            // 0x48d73c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d738) {
            ctx->pc = 0x48D6A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48d6a0;
        }
    }
    ctx->pc = 0x48D740u;
label_48d740:
    // 0x48d740: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x48d740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_48d744:
    // 0x48d744: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_48d748:
    if (ctx->pc == 0x48D748u) {
        ctx->pc = 0x48D748u;
            // 0x48d748: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48D74Cu;
        goto label_48d74c;
    }
    ctx->pc = 0x48D744u;
    {
        const bool branch_taken_0x48d744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48D744u;
            // 0x48d748: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d744) {
            ctx->pc = 0x48D7F8u;
            goto label_48d7f8;
        }
    }
    ctx->pc = 0x48D74Cu;
label_48d74c:
    // 0x48d74c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x48d74cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48d750:
    // 0x48d750: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x48d750u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48d754:
    // 0x48d754: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x48d754u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48d758:
    // 0x48d758: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x48d758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_48d75c:
    // 0x48d75c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x48d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_48d760:
    // 0x48d760: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x48d760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_48d764:
    // 0x48d764: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x48d764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_48d768:
    // 0x48d768: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x48d768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_48d76c:
    // 0x48d76c: 0xc12e370  jal         func_4B8DC0
label_48d770:
    if (ctx->pc == 0x48D770u) {
        ctx->pc = 0x48D770u;
            // 0x48d770: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x48D774u;
        goto label_48d774;
    }
    ctx->pc = 0x48D76Cu;
    SET_GPR_U32(ctx, 31, 0x48D774u);
    ctx->pc = 0x48D770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48D76Cu;
            // 0x48d770: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B8DC0u;
    if (runtime->hasFunction(0x4B8DC0u)) {
        auto targetFn = runtime->lookupFunction(0x4B8DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D774u; }
        if (ctx->pc != 0x48D774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B8DC0_0x4b8dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D774u; }
        if (ctx->pc != 0x48D774u) { return; }
    }
    ctx->pc = 0x48D774u;
label_48d774:
    // 0x48d774: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x48d774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_48d778:
    // 0x48d778: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x48d778u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48d77c:
    // 0x48d77c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x48d77cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_48d780:
    // 0x48d780: 0x320f809  jalr        $t9
label_48d784:
    if (ctx->pc == 0x48D784u) {
        ctx->pc = 0x48D784u;
            // 0x48d784: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48D788u;
        goto label_48d788;
    }
    ctx->pc = 0x48D780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48D788u);
        ctx->pc = 0x48D784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48D780u;
            // 0x48d784: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48D788u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48D788u; }
            if (ctx->pc != 0x48D788u) { return; }
        }
        }
    }
    ctx->pc = 0x48D788u;
label_48d788:
    // 0x48d788: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x48d788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_48d78c:
    // 0x48d78c: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x48d78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_48d790:
    // 0x48d790: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x48d790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_48d794:
    // 0x48d794: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x48d794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48d798:
    // 0x48d798: 0x27a70074  addiu       $a3, $sp, 0x74
    ctx->pc = 0x48d798u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_48d79c:
    // 0x48d79c: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x48d79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_48d7a0:
    // 0x48d7a0: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x48d7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_48d7a4:
    // 0x48d7a4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x48d7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_48d7a8:
    // 0x48d7a8: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x48d7a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_48d7ac:
    // 0x48d7ac: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x48d7acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_48d7b0:
    // 0x48d7b0: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x48d7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_48d7b4:
    // 0x48d7b4: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x48d7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_48d7b8:
    // 0x48d7b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48d7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_48d7bc:
    // 0x48d7bc: 0xc0a997c  jal         func_2A65F0
label_48d7c0:
    if (ctx->pc == 0x48D7C0u) {
        ctx->pc = 0x48D7C0u;
            // 0x48d7c0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x48D7C4u;
        goto label_48d7c4;
    }
    ctx->pc = 0x48D7BCu;
    SET_GPR_U32(ctx, 31, 0x48D7C4u);
    ctx->pc = 0x48D7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48D7BCu;
            // 0x48d7c0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D7C4u; }
        if (ctx->pc != 0x48D7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D7C4u; }
        if (ctx->pc != 0x48D7C4u) { return; }
    }
    ctx->pc = 0x48D7C4u;
label_48d7c4:
    // 0x48d7c4: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x48d7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_48d7c8:
    // 0x48d7c8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x48d7c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_48d7cc:
    // 0x48d7cc: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x48d7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_48d7d0:
    // 0x48d7d0: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x48d7d0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_48d7d4:
    // 0x48d7d4: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x48d7d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_48d7d8:
    // 0x48d7d8: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
label_48d7dc:
    if (ctx->pc == 0x48D7DCu) {
        ctx->pc = 0x48D7DCu;
            // 0x48d7dc: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->pc = 0x48D7E0u;
        goto label_48d7e0;
    }
    ctx->pc = 0x48D7D8u;
    {
        const bool branch_taken_0x48d7d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48D7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48D7D8u;
            // 0x48d7dc: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d7d8) {
            ctx->pc = 0x48D758u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48d758;
        }
    }
    ctx->pc = 0x48D7E0u;
label_48d7e0:
    // 0x48d7e0: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x48d7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_48d7e4:
    // 0x48d7e4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x48d7e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_48d7e8:
    // 0x48d7e8: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x48d7e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_48d7ec:
    // 0x48d7ec: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
label_48d7f0:
    if (ctx->pc == 0x48D7F0u) {
        ctx->pc = 0x48D7F0u;
            // 0x48d7f0: 0x2694000c  addiu       $s4, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->pc = 0x48D7F4u;
        goto label_48d7f4;
    }
    ctx->pc = 0x48D7ECu;
    {
        const bool branch_taken_0x48d7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48D7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48D7ECu;
            // 0x48d7f0: 0x2694000c  addiu       $s4, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d7ec) {
            ctx->pc = 0x48D750u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48d750;
        }
    }
    ctx->pc = 0x48D7F4u;
label_48d7f4:
    // 0x48d7f4: 0x0  nop
    ctx->pc = 0x48d7f4u;
    // NOP
label_48d7f8:
    // 0x48d7f8: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x48d7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_48d7fc:
    // 0x48d7fc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_48d800:
    if (ctx->pc == 0x48D800u) {
        ctx->pc = 0x48D800u;
            // 0x48d800: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48D804u;
        goto label_48d804;
    }
    ctx->pc = 0x48D7FCu;
    {
        const bool branch_taken_0x48d7fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48D7FCu;
            // 0x48d800: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d7fc) {
            ctx->pc = 0x48D868u;
            goto label_48d868;
        }
    }
    ctx->pc = 0x48D804u;
label_48d804:
    // 0x48d804: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x48d804u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48d808:
    // 0x48d808: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x48d808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_48d80c:
    // 0x48d80c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x48d80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_48d810:
    // 0x48d810: 0x40f809  jalr        $v0
label_48d814:
    if (ctx->pc == 0x48D814u) {
        ctx->pc = 0x48D818u;
        goto label_48d818;
    }
    ctx->pc = 0x48D810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48D818u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x48D818u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48D818u; }
            if (ctx->pc != 0x48D818u) { return; }
        }
        }
    }
    ctx->pc = 0x48D818u;
label_48d818:
    // 0x48d818: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x48d818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_48d81c:
    // 0x48d81c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x48d81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48d820:
    // 0x48d820: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x48d820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_48d824:
    // 0x48d824: 0xc125160  jal         func_494580
label_48d828:
    if (ctx->pc == 0x48D828u) {
        ctx->pc = 0x48D828u;
            // 0x48d828: 0x532821  addu        $a1, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->pc = 0x48D82Cu;
        goto label_48d82c;
    }
    ctx->pc = 0x48D824u;
    SET_GPR_U32(ctx, 31, 0x48D82Cu);
    ctx->pc = 0x48D828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48D824u;
            // 0x48d828: 0x532821  addu        $a1, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494580u;
    if (runtime->hasFunction(0x494580u)) {
        auto targetFn = runtime->lookupFunction(0x494580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D82Cu; }
        if (ctx->pc != 0x48D82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494580_0x494580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D82Cu; }
        if (ctx->pc != 0x48D82Cu) { return; }
    }
    ctx->pc = 0x48D82Cu;
label_48d82c:
    // 0x48d82c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x48d82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_48d830:
    // 0x48d830: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x48d830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_48d834:
    // 0x48d834: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x48d834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48d838:
    // 0x48d838: 0x27a70078  addiu       $a3, $sp, 0x78
    ctx->pc = 0x48d838u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_48d83c:
    // 0x48d83c: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x48d83cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
label_48d840:
    // 0x48d840: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x48d840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_48d844:
    // 0x48d844: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x48d844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_48d848:
    // 0x48d848: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48d848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_48d84c:
    // 0x48d84c: 0xc0a997c  jal         func_2A65F0
label_48d850:
    if (ctx->pc == 0x48D850u) {
        ctx->pc = 0x48D850u;
            // 0x48d850: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x48D854u;
        goto label_48d854;
    }
    ctx->pc = 0x48D84Cu;
    SET_GPR_U32(ctx, 31, 0x48D854u);
    ctx->pc = 0x48D850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48D84Cu;
            // 0x48d850: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D854u; }
        if (ctx->pc != 0x48D854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D854u; }
        if (ctx->pc != 0x48D854u) { return; }
    }
    ctx->pc = 0x48D854u;
label_48d854:
    // 0x48d854: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x48d854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_48d858:
    // 0x48d858: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x48d858u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_48d85c:
    // 0x48d85c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x48d85cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_48d860:
    // 0x48d860: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_48d864:
    if (ctx->pc == 0x48D864u) {
        ctx->pc = 0x48D864u;
            // 0x48d864: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->pc = 0x48D868u;
        goto label_48d868;
    }
    ctx->pc = 0x48D860u;
    {
        const bool branch_taken_0x48d860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48D864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48D860u;
            // 0x48d864: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d860) {
            ctx->pc = 0x48D808u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48d808;
        }
    }
    ctx->pc = 0x48D868u;
label_48d868:
    // 0x48d868: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x48d868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_48d86c:
    // 0x48d86c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x48d86cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_48d870:
    // 0x48d870: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x48d870u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48d874:
    // 0x48d874: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x48d874u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_48d878:
    // 0x48d878: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x48d878u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_48d87c:
    // 0x48d87c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x48d87cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_48d880:
    // 0x48d880: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48d880u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48d884:
    // 0x48d884: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48d884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48d888:
    // 0x48d888: 0x3e00008  jr          $ra
label_48d88c:
    if (ctx->pc == 0x48D88Cu) {
        ctx->pc = 0x48D88Cu;
            // 0x48d88c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x48D890u;
        goto label_48d890;
    }
    ctx->pc = 0x48D888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48D88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48D888u;
            // 0x48d88c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48D890u;
label_48d890:
    // 0x48d890: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x48d890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_48d894:
    // 0x48d894: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x48d894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_48d898:
    // 0x48d898: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48d898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48d89c:
    // 0x48d89c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48d89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48d8a0:
    // 0x48d8a0: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x48d8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_48d8a4:
    // 0x48d8a4: 0x8c90002c  lw          $s0, 0x2C($a0)
    ctx->pc = 0x48d8a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_48d8a8:
    // 0x48d8a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48d8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_48d8ac:
    // 0x48d8ac: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x48d8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_48d8b0:
    // 0x48d8b0: 0x2031826  xor         $v1, $s0, $v1
    ctx->pc = 0x48d8b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
label_48d8b4:
    // 0x48d8b4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x48d8b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_48d8b8:
    // 0x48d8b8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x48d8b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_48d8bc:
    // 0x48d8bc: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_48d8c0:
    if (ctx->pc == 0x48D8C0u) {
        ctx->pc = 0x48D8C0u;
            // 0x48d8c0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48D8C4u;
        goto label_48d8c4;
    }
    ctx->pc = 0x48D8BCu;
    {
        const bool branch_taken_0x48d8bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48D8BCu;
            // 0x48d8c0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d8bc) {
            ctx->pc = 0x48D920u;
            goto label_48d920;
        }
    }
    ctx->pc = 0x48D8C4u;
label_48d8c4:
    // 0x48d8c4: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x48d8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_48d8c8:
    // 0x48d8c8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x48d8c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_48d8cc:
    // 0x48d8cc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x48d8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_48d8d0:
    // 0x48d8d0: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x48d8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_48d8d4:
    // 0x48d8d4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_48d8d8:
    if (ctx->pc == 0x48D8D8u) {
        ctx->pc = 0x48D8DCu;
        goto label_48d8dc;
    }
    ctx->pc = 0x48D8D4u;
    {
        const bool branch_taken_0x48d8d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d8d4) {
            ctx->pc = 0x48D8F0u;
            goto label_48d8f0;
        }
    }
    ctx->pc = 0x48D8DCu;
label_48d8dc:
    // 0x48d8dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x48d8dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48d8e0:
    // 0x48d8e0: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x48d8e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_48d8e4:
    // 0x48d8e4: 0x320f809  jalr        $t9
label_48d8e8:
    if (ctx->pc == 0x48D8E8u) {
        ctx->pc = 0x48D8ECu;
        goto label_48d8ec;
    }
    ctx->pc = 0x48D8E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48D8ECu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x48D8ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48D8ECu; }
            if (ctx->pc != 0x48D8ECu) { return; }
        }
        }
    }
    ctx->pc = 0x48D8ECu;
label_48d8ec:
    // 0x48d8ec: 0x0  nop
    ctx->pc = 0x48d8ecu;
    // NOP
label_48d8f0:
    // 0x48d8f0: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x48d8f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_48d8f4:
    // 0x48d8f4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x48d8f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_48d8f8:
    // 0x48d8f8: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x48d8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_48d8fc:
    // 0x48d8fc: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x48d8fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_48d900:
    // 0x48d900: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x48d900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_48d904:
    // 0x48d904: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x48d904u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_48d908:
    // 0x48d908: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x48d908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_48d90c:
    // 0x48d90c: 0x2031826  xor         $v1, $s0, $v1
    ctx->pc = 0x48d90cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
label_48d910:
    // 0x48d910: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x48d910u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_48d914:
    // 0x48d914: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x48d914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_48d918:
    // 0x48d918: 0x5460ffeb  bnel        $v1, $zero, . + 4 + (-0x15 << 2)
label_48d91c:
    if (ctx->pc == 0x48D91Cu) {
        ctx->pc = 0x48D91Cu;
            // 0x48d91c: 0x10183c  dsll32      $v1, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
        ctx->pc = 0x48D920u;
        goto label_48d920;
    }
    ctx->pc = 0x48D918u;
    {
        const bool branch_taken_0x48d918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48d918) {
            ctx->pc = 0x48D91Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48D918u;
            // 0x48d91c: 0x10183c  dsll32      $v1, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48D8C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48d8c8;
        }
    }
    ctx->pc = 0x48D920u;
label_48d920:
    // 0x48d920: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x48d920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_48d924:
    // 0x48d924: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48d924u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48d928:
    // 0x48d928: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48d928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48d92c:
    // 0x48d92c: 0x3e00008  jr          $ra
label_48d930:
    if (ctx->pc == 0x48D930u) {
        ctx->pc = 0x48D930u;
            // 0x48d930: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x48D934u;
        goto label_48d934;
    }
    ctx->pc = 0x48D92Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48D930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48D92Cu;
            // 0x48d930: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48D934u;
label_48d934:
    // 0x48d934: 0x0  nop
    ctx->pc = 0x48d934u;
    // NOP
label_48d938:
    // 0x48d938: 0x0  nop
    ctx->pc = 0x48d938u;
    // NOP
label_48d93c:
    // 0x48d93c: 0x0  nop
    ctx->pc = 0x48d93cu;
    // NOP
label_48d940:
    // 0x48d940: 0x3e00008  jr          $ra
label_48d944:
    if (ctx->pc == 0x48D944u) {
        ctx->pc = 0x48D948u;
        goto label_48d948;
    }
    ctx->pc = 0x48D940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48D948u;
label_48d948:
    // 0x48d948: 0x0  nop
    ctx->pc = 0x48d948u;
    // NOP
label_48d94c:
    // 0x48d94c: 0x0  nop
    ctx->pc = 0x48d94cu;
    // NOP
}
