#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EF670
// Address: 0x1ef670 - 0x1efa10
void sub_001EF670_0x1ef670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF670_0x1ef670");
#endif

    switch (ctx->pc) {
        case 0x1ef670u: goto label_1ef670;
        case 0x1ef674u: goto label_1ef674;
        case 0x1ef678u: goto label_1ef678;
        case 0x1ef67cu: goto label_1ef67c;
        case 0x1ef680u: goto label_1ef680;
        case 0x1ef684u: goto label_1ef684;
        case 0x1ef688u: goto label_1ef688;
        case 0x1ef68cu: goto label_1ef68c;
        case 0x1ef690u: goto label_1ef690;
        case 0x1ef694u: goto label_1ef694;
        case 0x1ef698u: goto label_1ef698;
        case 0x1ef69cu: goto label_1ef69c;
        case 0x1ef6a0u: goto label_1ef6a0;
        case 0x1ef6a4u: goto label_1ef6a4;
        case 0x1ef6a8u: goto label_1ef6a8;
        case 0x1ef6acu: goto label_1ef6ac;
        case 0x1ef6b0u: goto label_1ef6b0;
        case 0x1ef6b4u: goto label_1ef6b4;
        case 0x1ef6b8u: goto label_1ef6b8;
        case 0x1ef6bcu: goto label_1ef6bc;
        case 0x1ef6c0u: goto label_1ef6c0;
        case 0x1ef6c4u: goto label_1ef6c4;
        case 0x1ef6c8u: goto label_1ef6c8;
        case 0x1ef6ccu: goto label_1ef6cc;
        case 0x1ef6d0u: goto label_1ef6d0;
        case 0x1ef6d4u: goto label_1ef6d4;
        case 0x1ef6d8u: goto label_1ef6d8;
        case 0x1ef6dcu: goto label_1ef6dc;
        case 0x1ef6e0u: goto label_1ef6e0;
        case 0x1ef6e4u: goto label_1ef6e4;
        case 0x1ef6e8u: goto label_1ef6e8;
        case 0x1ef6ecu: goto label_1ef6ec;
        case 0x1ef6f0u: goto label_1ef6f0;
        case 0x1ef6f4u: goto label_1ef6f4;
        case 0x1ef6f8u: goto label_1ef6f8;
        case 0x1ef6fcu: goto label_1ef6fc;
        case 0x1ef700u: goto label_1ef700;
        case 0x1ef704u: goto label_1ef704;
        case 0x1ef708u: goto label_1ef708;
        case 0x1ef70cu: goto label_1ef70c;
        case 0x1ef710u: goto label_1ef710;
        case 0x1ef714u: goto label_1ef714;
        case 0x1ef718u: goto label_1ef718;
        case 0x1ef71cu: goto label_1ef71c;
        case 0x1ef720u: goto label_1ef720;
        case 0x1ef724u: goto label_1ef724;
        case 0x1ef728u: goto label_1ef728;
        case 0x1ef72cu: goto label_1ef72c;
        case 0x1ef730u: goto label_1ef730;
        case 0x1ef734u: goto label_1ef734;
        case 0x1ef738u: goto label_1ef738;
        case 0x1ef73cu: goto label_1ef73c;
        case 0x1ef740u: goto label_1ef740;
        case 0x1ef744u: goto label_1ef744;
        case 0x1ef748u: goto label_1ef748;
        case 0x1ef74cu: goto label_1ef74c;
        case 0x1ef750u: goto label_1ef750;
        case 0x1ef754u: goto label_1ef754;
        case 0x1ef758u: goto label_1ef758;
        case 0x1ef75cu: goto label_1ef75c;
        case 0x1ef760u: goto label_1ef760;
        case 0x1ef764u: goto label_1ef764;
        case 0x1ef768u: goto label_1ef768;
        case 0x1ef76cu: goto label_1ef76c;
        case 0x1ef770u: goto label_1ef770;
        case 0x1ef774u: goto label_1ef774;
        case 0x1ef778u: goto label_1ef778;
        case 0x1ef77cu: goto label_1ef77c;
        case 0x1ef780u: goto label_1ef780;
        case 0x1ef784u: goto label_1ef784;
        case 0x1ef788u: goto label_1ef788;
        case 0x1ef78cu: goto label_1ef78c;
        case 0x1ef790u: goto label_1ef790;
        case 0x1ef794u: goto label_1ef794;
        case 0x1ef798u: goto label_1ef798;
        case 0x1ef79cu: goto label_1ef79c;
        case 0x1ef7a0u: goto label_1ef7a0;
        case 0x1ef7a4u: goto label_1ef7a4;
        case 0x1ef7a8u: goto label_1ef7a8;
        case 0x1ef7acu: goto label_1ef7ac;
        case 0x1ef7b0u: goto label_1ef7b0;
        case 0x1ef7b4u: goto label_1ef7b4;
        case 0x1ef7b8u: goto label_1ef7b8;
        case 0x1ef7bcu: goto label_1ef7bc;
        case 0x1ef7c0u: goto label_1ef7c0;
        case 0x1ef7c4u: goto label_1ef7c4;
        case 0x1ef7c8u: goto label_1ef7c8;
        case 0x1ef7ccu: goto label_1ef7cc;
        case 0x1ef7d0u: goto label_1ef7d0;
        case 0x1ef7d4u: goto label_1ef7d4;
        case 0x1ef7d8u: goto label_1ef7d8;
        case 0x1ef7dcu: goto label_1ef7dc;
        case 0x1ef7e0u: goto label_1ef7e0;
        case 0x1ef7e4u: goto label_1ef7e4;
        case 0x1ef7e8u: goto label_1ef7e8;
        case 0x1ef7ecu: goto label_1ef7ec;
        case 0x1ef7f0u: goto label_1ef7f0;
        case 0x1ef7f4u: goto label_1ef7f4;
        case 0x1ef7f8u: goto label_1ef7f8;
        case 0x1ef7fcu: goto label_1ef7fc;
        case 0x1ef800u: goto label_1ef800;
        case 0x1ef804u: goto label_1ef804;
        case 0x1ef808u: goto label_1ef808;
        case 0x1ef80cu: goto label_1ef80c;
        case 0x1ef810u: goto label_1ef810;
        case 0x1ef814u: goto label_1ef814;
        case 0x1ef818u: goto label_1ef818;
        case 0x1ef81cu: goto label_1ef81c;
        case 0x1ef820u: goto label_1ef820;
        case 0x1ef824u: goto label_1ef824;
        case 0x1ef828u: goto label_1ef828;
        case 0x1ef82cu: goto label_1ef82c;
        case 0x1ef830u: goto label_1ef830;
        case 0x1ef834u: goto label_1ef834;
        case 0x1ef838u: goto label_1ef838;
        case 0x1ef83cu: goto label_1ef83c;
        case 0x1ef840u: goto label_1ef840;
        case 0x1ef844u: goto label_1ef844;
        case 0x1ef848u: goto label_1ef848;
        case 0x1ef84cu: goto label_1ef84c;
        case 0x1ef850u: goto label_1ef850;
        case 0x1ef854u: goto label_1ef854;
        case 0x1ef858u: goto label_1ef858;
        case 0x1ef85cu: goto label_1ef85c;
        case 0x1ef860u: goto label_1ef860;
        case 0x1ef864u: goto label_1ef864;
        case 0x1ef868u: goto label_1ef868;
        case 0x1ef86cu: goto label_1ef86c;
        case 0x1ef870u: goto label_1ef870;
        case 0x1ef874u: goto label_1ef874;
        case 0x1ef878u: goto label_1ef878;
        case 0x1ef87cu: goto label_1ef87c;
        case 0x1ef880u: goto label_1ef880;
        case 0x1ef884u: goto label_1ef884;
        case 0x1ef888u: goto label_1ef888;
        case 0x1ef88cu: goto label_1ef88c;
        case 0x1ef890u: goto label_1ef890;
        case 0x1ef894u: goto label_1ef894;
        case 0x1ef898u: goto label_1ef898;
        case 0x1ef89cu: goto label_1ef89c;
        case 0x1ef8a0u: goto label_1ef8a0;
        case 0x1ef8a4u: goto label_1ef8a4;
        case 0x1ef8a8u: goto label_1ef8a8;
        case 0x1ef8acu: goto label_1ef8ac;
        case 0x1ef8b0u: goto label_1ef8b0;
        case 0x1ef8b4u: goto label_1ef8b4;
        case 0x1ef8b8u: goto label_1ef8b8;
        case 0x1ef8bcu: goto label_1ef8bc;
        case 0x1ef8c0u: goto label_1ef8c0;
        case 0x1ef8c4u: goto label_1ef8c4;
        case 0x1ef8c8u: goto label_1ef8c8;
        case 0x1ef8ccu: goto label_1ef8cc;
        case 0x1ef8d0u: goto label_1ef8d0;
        case 0x1ef8d4u: goto label_1ef8d4;
        case 0x1ef8d8u: goto label_1ef8d8;
        case 0x1ef8dcu: goto label_1ef8dc;
        case 0x1ef8e0u: goto label_1ef8e0;
        case 0x1ef8e4u: goto label_1ef8e4;
        case 0x1ef8e8u: goto label_1ef8e8;
        case 0x1ef8ecu: goto label_1ef8ec;
        case 0x1ef8f0u: goto label_1ef8f0;
        case 0x1ef8f4u: goto label_1ef8f4;
        case 0x1ef8f8u: goto label_1ef8f8;
        case 0x1ef8fcu: goto label_1ef8fc;
        case 0x1ef900u: goto label_1ef900;
        case 0x1ef904u: goto label_1ef904;
        case 0x1ef908u: goto label_1ef908;
        case 0x1ef90cu: goto label_1ef90c;
        case 0x1ef910u: goto label_1ef910;
        case 0x1ef914u: goto label_1ef914;
        case 0x1ef918u: goto label_1ef918;
        case 0x1ef91cu: goto label_1ef91c;
        case 0x1ef920u: goto label_1ef920;
        case 0x1ef924u: goto label_1ef924;
        case 0x1ef928u: goto label_1ef928;
        case 0x1ef92cu: goto label_1ef92c;
        case 0x1ef930u: goto label_1ef930;
        case 0x1ef934u: goto label_1ef934;
        case 0x1ef938u: goto label_1ef938;
        case 0x1ef93cu: goto label_1ef93c;
        case 0x1ef940u: goto label_1ef940;
        case 0x1ef944u: goto label_1ef944;
        case 0x1ef948u: goto label_1ef948;
        case 0x1ef94cu: goto label_1ef94c;
        case 0x1ef950u: goto label_1ef950;
        case 0x1ef954u: goto label_1ef954;
        case 0x1ef958u: goto label_1ef958;
        case 0x1ef95cu: goto label_1ef95c;
        case 0x1ef960u: goto label_1ef960;
        case 0x1ef964u: goto label_1ef964;
        case 0x1ef968u: goto label_1ef968;
        case 0x1ef96cu: goto label_1ef96c;
        case 0x1ef970u: goto label_1ef970;
        case 0x1ef974u: goto label_1ef974;
        case 0x1ef978u: goto label_1ef978;
        case 0x1ef97cu: goto label_1ef97c;
        case 0x1ef980u: goto label_1ef980;
        case 0x1ef984u: goto label_1ef984;
        case 0x1ef988u: goto label_1ef988;
        case 0x1ef98cu: goto label_1ef98c;
        case 0x1ef990u: goto label_1ef990;
        case 0x1ef994u: goto label_1ef994;
        case 0x1ef998u: goto label_1ef998;
        case 0x1ef99cu: goto label_1ef99c;
        case 0x1ef9a0u: goto label_1ef9a0;
        case 0x1ef9a4u: goto label_1ef9a4;
        case 0x1ef9a8u: goto label_1ef9a8;
        case 0x1ef9acu: goto label_1ef9ac;
        case 0x1ef9b0u: goto label_1ef9b0;
        case 0x1ef9b4u: goto label_1ef9b4;
        case 0x1ef9b8u: goto label_1ef9b8;
        case 0x1ef9bcu: goto label_1ef9bc;
        case 0x1ef9c0u: goto label_1ef9c0;
        case 0x1ef9c4u: goto label_1ef9c4;
        case 0x1ef9c8u: goto label_1ef9c8;
        case 0x1ef9ccu: goto label_1ef9cc;
        case 0x1ef9d0u: goto label_1ef9d0;
        case 0x1ef9d4u: goto label_1ef9d4;
        case 0x1ef9d8u: goto label_1ef9d8;
        case 0x1ef9dcu: goto label_1ef9dc;
        case 0x1ef9e0u: goto label_1ef9e0;
        case 0x1ef9e4u: goto label_1ef9e4;
        case 0x1ef9e8u: goto label_1ef9e8;
        case 0x1ef9ecu: goto label_1ef9ec;
        case 0x1ef9f0u: goto label_1ef9f0;
        case 0x1ef9f4u: goto label_1ef9f4;
        case 0x1ef9f8u: goto label_1ef9f8;
        case 0x1ef9fcu: goto label_1ef9fc;
        case 0x1efa00u: goto label_1efa00;
        case 0x1efa04u: goto label_1efa04;
        case 0x1efa08u: goto label_1efa08;
        case 0x1efa0cu: goto label_1efa0c;
        default: break;
    }

    ctx->pc = 0x1ef670u;

label_1ef670:
    // 0x1ef670: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x1ef670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
label_1ef674:
    // 0x1ef674: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ef674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1ef678:
    // 0x1ef678: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1ef678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1ef67c:
    // 0x1ef67c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ef67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1ef680:
    // 0x1ef680: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ef680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1ef684:
    // 0x1ef684: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1ef684u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ef688:
    // 0x1ef688: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ef688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ef68c:
    // 0x1ef68c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1ef68cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1ef690:
    // 0x1ef690: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ef690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ef694:
    // 0x1ef694: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1ef694u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ef698:
    // 0x1ef698: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ef698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ef69c:
    // 0x1ef69c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1ef69cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1ef6a0:
    // 0x1ef6a0: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x1ef6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_1ef6a4:
    // 0x1ef6a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ef6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1ef6a8:
    // 0x1ef6a8: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1ef6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1ef6ac:
    // 0x1ef6ac: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1ef6acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ef6b0:
    // 0x1ef6b0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1ef6b4:
    if (ctx->pc == 0x1EF6B4u) {
        ctx->pc = 0x1EF6B4u;
            // 0x1ef6b4: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x1EF6B8u;
        goto label_1ef6b8;
    }
    ctx->pc = 0x1EF6B0u;
    {
        const bool branch_taken_0x1ef6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF6B0u;
            // 0x1ef6b4: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef6b0) {
            ctx->pc = 0x1EF6E0u;
            goto label_1ef6e0;
        }
    }
    ctx->pc = 0x1EF6B8u;
label_1ef6b8:
    // 0x1ef6b8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1ef6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1ef6bc:
    // 0x1ef6bc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1ef6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1ef6c0:
    // 0x1ef6c0: 0x2442ade0  addiu       $v0, $v0, -0x5220
    ctx->pc = 0x1ef6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946272));
label_1ef6c4:
    // 0x1ef6c4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ef6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1ef6c8:
    // 0x1ef6c8: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1ef6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1ef6cc:
    // 0x1ef6cc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1ef6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1ef6d0:
    // 0x1ef6d0: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1ef6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_1ef6d4:
    // 0x1ef6d4: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1ef6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1ef6d8:
    // 0x1ef6d8: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1ef6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_1ef6dc:
    // 0x1ef6dc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1ef6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1ef6e0:
    // 0x1ef6e0: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x1ef6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1ef6e4:
    // 0x1ef6e4: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x1ef6e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1ef6e8:
    // 0x1ef6e8: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x1ef6e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1ef6ec:
    // 0x1ef6ec: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1ef6ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ef6f0:
    // 0x1ef6f0: 0xc0a45a0  jal         func_291680
label_1ef6f4:
    if (ctx->pc == 0x1EF6F4u) {
        ctx->pc = 0x1EF6F4u;
            // 0x1ef6f4: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x1EF6F8u;
        goto label_1ef6f8;
    }
    ctx->pc = 0x1EF6F0u;
    SET_GPR_U32(ctx, 31, 0x1EF6F8u);
    ctx->pc = 0x1EF6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF6F0u;
            // 0x1ef6f4: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291680u;
    if (runtime->hasFunction(0x291680u)) {
        auto targetFn = runtime->lookupFunction(0x291680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF6F8u; }
        if (ctx->pc != 0x1EF6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291680_0x291680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF6F8u; }
        if (ctx->pc != 0x1EF6F8u) { return; }
    }
    ctx->pc = 0x1EF6F8u;
label_1ef6f8:
    // 0x1ef6f8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1ef6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1ef6fc:
    // 0x1ef6fc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1ef6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ef700:
    // 0x1ef700: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
label_1ef704:
    if (ctx->pc == 0x1EF704u) {
        ctx->pc = 0x1EF704u;
            // 0x1ef704: 0x27a40230  addiu       $a0, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->pc = 0x1EF708u;
        goto label_1ef708;
    }
    ctx->pc = 0x1EF700u;
    {
        const bool branch_taken_0x1ef700 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ef700) {
            ctx->pc = 0x1EF704u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF700u;
            // 0x1ef704: 0x27a40230  addiu       $a0, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EF724u;
            goto label_1ef724;
        }
    }
    ctx->pc = 0x1EF708u;
label_1ef708:
    // 0x1ef708: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x1ef708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_1ef70c:
    // 0x1ef70c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ef70cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ef710:
    // 0x1ef710: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ef710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ef714:
    // 0x1ef714: 0xc09978c  jal         func_265E30
label_1ef718:
    if (ctx->pc == 0x1EF718u) {
        ctx->pc = 0x1EF718u;
            // 0x1ef718: 0x27a701f0  addiu       $a3, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x1EF71Cu;
        goto label_1ef71c;
    }
    ctx->pc = 0x1EF714u;
    SET_GPR_U32(ctx, 31, 0x1EF71Cu);
    ctx->pc = 0x1EF718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF714u;
            // 0x1ef718: 0x27a701f0  addiu       $a3, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x265E30u;
    if (runtime->hasFunction(0x265E30u)) {
        auto targetFn = runtime->lookupFunction(0x265E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF71Cu; }
        if (ctx->pc != 0x1EF71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00265E30_0x265e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF71Cu; }
        if (ctx->pc != 0x1EF71Cu) { return; }
    }
    ctx->pc = 0x1EF71Cu;
label_1ef71c:
    // 0x1ef71c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ef720:
    if (ctx->pc == 0x1EF720u) {
        ctx->pc = 0x1EF720u;
            // 0x1ef720: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1EF724u;
        goto label_1ef724;
    }
    ctx->pc = 0x1EF71Cu;
    {
        const bool branch_taken_0x1ef71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF71Cu;
            // 0x1ef720: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef71c) {
            ctx->pc = 0x1EF738u;
            goto label_1ef738;
        }
    }
    ctx->pc = 0x1EF724u;
label_1ef724:
    // 0x1ef724: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ef724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ef728:
    // 0x1ef728: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ef728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ef72c:
    // 0x1ef72c: 0xc099878  jal         func_2661E0
label_1ef730:
    if (ctx->pc == 0x1EF730u) {
        ctx->pc = 0x1EF730u;
            // 0x1ef730: 0x27a701f0  addiu       $a3, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x1EF734u;
        goto label_1ef734;
    }
    ctx->pc = 0x1EF72Cu;
    SET_GPR_U32(ctx, 31, 0x1EF734u);
    ctx->pc = 0x1EF730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF72Cu;
            // 0x1ef730: 0x27a701f0  addiu       $a3, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2661E0u;
    if (runtime->hasFunction(0x2661E0u)) {
        auto targetFn = runtime->lookupFunction(0x2661E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF734u; }
        if (ctx->pc != 0x1EF734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002661E0_0x2661e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF734u; }
        if (ctx->pc != 0x1EF734u) { return; }
    }
    ctx->pc = 0x1EF734u;
label_1ef734:
    // 0x1ef734: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ef734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ef738:
    // 0x1ef738: 0x93a60238  lbu         $a2, 0x238($sp)
    ctx->pc = 0x1ef738u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 568)));
label_1ef73c:
    // 0x1ef73c: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x1ef73cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_1ef740:
    // 0x1ef740: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ef740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ef744:
    // 0x1ef744: 0x93a2023a  lbu         $v0, 0x23A($sp)
    ctx->pc = 0x1ef744u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 570)));
label_1ef748:
    // 0x1ef748: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x1ef748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_1ef74c:
    // 0x1ef74c: 0x93a30239  lbu         $v1, 0x239($sp)
    ctx->pc = 0x1ef74cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 569)));
label_1ef750:
    // 0x1ef750: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x1ef750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_1ef754:
    // 0x1ef754: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x1ef754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_1ef758:
    // 0x1ef758: 0x93a2023b  lbu         $v0, 0x23B($sp)
    ctx->pc = 0x1ef758u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 571)));
label_1ef75c:
    // 0x1ef75c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x1ef75cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
label_1ef760:
    // 0x1ef760: 0xafa30074  sw          $v1, 0x74($sp)
    ctx->pc = 0x1ef760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
label_1ef764:
    // 0x1ef764: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x1ef764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_1ef768:
    // 0x1ef768: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1ef768u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ef76c:
    // 0x1ef76c: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1ef76cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1ef770:
    // 0x1ef770: 0x320f809  jalr        $t9
label_1ef774:
    if (ctx->pc == 0x1EF774u) {
        ctx->pc = 0x1EF774u;
            // 0x1ef774: 0x27a70090  addiu       $a3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x1EF778u;
        goto label_1ef778;
    }
    ctx->pc = 0x1EF770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EF778u);
        ctx->pc = 0x1EF774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF770u;
            // 0x1ef774: 0x27a70090  addiu       $a3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EF778u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EF778u; }
            if (ctx->pc != 0x1EF778u) { return; }
        }
        }
    }
    ctx->pc = 0x1EF778u;
label_1ef778:
    // 0x1ef778: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1ef778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1ef77c:
    // 0x1ef77c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ef77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ef780:
    // 0x1ef780: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1ef780u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ef784:
    // 0x1ef784: 0x27a70150  addiu       $a3, $sp, 0x150
    ctx->pc = 0x1ef784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1ef788:
    // 0x1ef788: 0x8fa60074  lw          $a2, 0x74($sp)
    ctx->pc = 0x1ef788u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_1ef78c:
    // 0x1ef78c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1ef78cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1ef790:
    // 0x1ef790: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1ef790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_1ef794:
    // 0x1ef794: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1ef794u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1ef798:
    // 0x1ef798: 0x320f809  jalr        $t9
label_1ef79c:
    if (ctx->pc == 0x1EF79Cu) {
        ctx->pc = 0x1EF79Cu;
            // 0x1ef79c: 0x24450230  addiu       $a1, $v0, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 560));
        ctx->pc = 0x1EF7A0u;
        goto label_1ef7a0;
    }
    ctx->pc = 0x1EF798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EF7A0u);
        ctx->pc = 0x1EF79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF798u;
            // 0x1ef79c: 0x24450230  addiu       $a1, $v0, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 560));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EF7A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EF7A0u; }
            if (ctx->pc != 0x1EF7A0u) { return; }
        }
        }
    }
    ctx->pc = 0x1EF7A0u;
label_1ef7a0:
    // 0x1ef7a0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1ef7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1ef7a4:
    // 0x1ef7a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ef7a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ef7a8:
    // 0x1ef7a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ef7a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ef7ac:
    // 0x1ef7ac: 0x27a701f0  addiu       $a3, $sp, 0x1F0
    ctx->pc = 0x1ef7acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_1ef7b0:
    // 0x1ef7b0: 0xc098b60  jal         func_262D80
label_1ef7b4:
    if (ctx->pc == 0x1EF7B4u) {
        ctx->pc = 0x1EF7B4u;
            // 0x1ef7b4: 0x27a80060  addiu       $t0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1EF7B8u;
        goto label_1ef7b8;
    }
    ctx->pc = 0x1EF7B0u;
    SET_GPR_U32(ctx, 31, 0x1EF7B8u);
    ctx->pc = 0x1EF7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF7B0u;
            // 0x1ef7b4: 0x27a80060  addiu       $t0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262D80u;
    if (runtime->hasFunction(0x262D80u)) {
        auto targetFn = runtime->lookupFunction(0x262D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF7B8u; }
        if (ctx->pc != 0x1EF7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262D80_0x262d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF7B8u; }
        if (ctx->pc != 0x1EF7B8u) { return; }
    }
    ctx->pc = 0x1EF7B8u;
label_1ef7b8:
    // 0x1ef7b8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1ef7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1ef7bc:
    // 0x1ef7bc: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1ef7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1ef7c0:
    // 0x1ef7c0: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1ef7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1ef7c4:
    // 0x1ef7c4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1ef7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1ef7c8:
    // 0x1ef7c8: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1ef7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1ef7cc:
    // 0x1ef7cc: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1ef7ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1ef7d0:
    // 0x1ef7d0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1ef7d4:
    if (ctx->pc == 0x1EF7D4u) {
        ctx->pc = 0x1EF7D4u;
            // 0x1ef7d4: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1EF7D8u;
        goto label_1ef7d8;
    }
    ctx->pc = 0x1EF7D0u;
    {
        const bool branch_taken_0x1ef7d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF7D0u;
            // 0x1ef7d4: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef7d0) {
            ctx->pc = 0x1EF800u;
            goto label_1ef800;
        }
    }
    ctx->pc = 0x1EF7D8u;
label_1ef7d8:
    // 0x1ef7d8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1ef7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1ef7dc:
    // 0x1ef7dc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1ef7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1ef7e0:
    // 0x1ef7e0: 0x2463ade8  addiu       $v1, $v1, -0x5218
    ctx->pc = 0x1ef7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946280));
label_1ef7e4:
    // 0x1ef7e4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1ef7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1ef7e8:
    // 0x1ef7e8: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1ef7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1ef7ec:
    // 0x1ef7ec: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1ef7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1ef7f0:
    // 0x1ef7f0: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1ef7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1ef7f4:
    // 0x1ef7f4: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1ef7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1ef7f8:
    // 0x1ef7f8: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1ef7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1ef7fc:
    // 0x1ef7fc: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1ef7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1ef800:
    // 0x1ef800: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_1ef804:
    if (ctx->pc == 0x1EF804u) {
        ctx->pc = 0x1EF804u;
            // 0x1ef804: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x1EF808u;
        goto label_1ef808;
    }
    ctx->pc = 0x1EF800u;
    {
        const bool branch_taken_0x1ef800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef800) {
            ctx->pc = 0x1EF804u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF800u;
            // 0x1ef804: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EF84Cu;
            goto label_1ef84c;
        }
    }
    ctx->pc = 0x1EF808u;
label_1ef808:
    // 0x1ef808: 0xc6230010  lwc1        $f3, 0x10($s1)
    ctx->pc = 0x1ef808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ef80c:
    // 0x1ef80c: 0xc7a2006c  lwc1        $f2, 0x6C($sp)
    ctx->pc = 0x1ef80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ef810:
    // 0x1ef810: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x1ef810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ef814:
    // 0x1ef814: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ef814u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ef818:
    // 0x1ef818: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x1ef818u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_1ef81c:
    // 0x1ef81c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1ef81cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1ef820:
    // 0x1ef820: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ef820u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ef824:
    // 0x1ef824: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
label_1ef828:
    if (ctx->pc == 0x1EF828u) {
        ctx->pc = 0x1EF828u;
            // 0x1ef828: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x1EF82Cu;
        goto label_1ef82c;
    }
    ctx->pc = 0x1EF824u;
    {
        const bool branch_taken_0x1ef824 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ef824) {
            ctx->pc = 0x1EF828u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF824u;
            // 0x1ef828: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EF864u;
            goto label_1ef864;
        }
    }
    ctx->pc = 0x1EF82Cu;
label_1ef82c:
    // 0x1ef82c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1ef82cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1ef830:
    // 0x1ef830: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ef830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ef834:
    // 0x1ef834: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ef834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ef838:
    // 0x1ef838: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1ef838u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1ef83c:
    // 0x1ef83c: 0x320f809  jalr        $t9
label_1ef840:
    if (ctx->pc == 0x1EF840u) {
        ctx->pc = 0x1EF840u;
            // 0x1ef840: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EF844u;
        goto label_1ef844;
    }
    ctx->pc = 0x1EF83Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EF844u);
        ctx->pc = 0x1EF840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF83Cu;
            // 0x1ef840: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EF844u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EF844u; }
            if (ctx->pc != 0x1EF844u) { return; }
        }
        }
    }
    ctx->pc = 0x1EF844u;
label_1ef844:
    // 0x1ef844: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ef848:
    if (ctx->pc == 0x1EF848u) {
        ctx->pc = 0x1EF84Cu;
        goto label_1ef84c;
    }
    ctx->pc = 0x1EF844u;
    {
        const bool branch_taken_0x1ef844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef844) {
            ctx->pc = 0x1EF860u;
            goto label_1ef860;
        }
    }
    ctx->pc = 0x1EF84Cu;
label_1ef84c:
    // 0x1ef84c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ef84cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ef850:
    // 0x1ef850: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ef850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ef854:
    // 0x1ef854: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1ef854u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1ef858:
    // 0x1ef858: 0x320f809  jalr        $t9
label_1ef85c:
    if (ctx->pc == 0x1EF85Cu) {
        ctx->pc = 0x1EF85Cu;
            // 0x1ef85c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EF860u;
        goto label_1ef860;
    }
    ctx->pc = 0x1EF858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EF860u);
        ctx->pc = 0x1EF85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF858u;
            // 0x1ef85c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EF860u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EF860u; }
            if (ctx->pc != 0x1EF860u) { return; }
        }
        }
    }
    ctx->pc = 0x1EF860u;
label_1ef860:
    // 0x1ef860: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ef860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1ef864:
    // 0x1ef864: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ef864u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ef868:
    // 0x1ef868: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ef868u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ef86c:
    // 0x1ef86c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ef86cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ef870:
    // 0x1ef870: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ef870u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ef874:
    // 0x1ef874: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ef874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ef878:
    // 0x1ef878: 0x3e00008  jr          $ra
label_1ef87c:
    if (ctx->pc == 0x1EF87Cu) {
        ctx->pc = 0x1EF87Cu;
            // 0x1ef87c: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->pc = 0x1EF880u;
        goto label_1ef880;
    }
    ctx->pc = 0x1EF878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF878u;
            // 0x1ef87c: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EF880u;
label_1ef880:
    // 0x1ef880: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1ef880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_1ef884:
    // 0x1ef884: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ef884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1ef888:
    // 0x1ef888: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1ef888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1ef88c:
    // 0x1ef88c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ef88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1ef890:
    // 0x1ef890: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ef890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1ef894:
    // 0x1ef894: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1ef894u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ef898:
    // 0x1ef898: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ef898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ef89c:
    // 0x1ef89c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1ef89cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1ef8a0:
    // 0x1ef8a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ef8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ef8a4:
    // 0x1ef8a4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1ef8a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ef8a8:
    // 0x1ef8a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ef8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ef8ac:
    // 0x1ef8ac: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ef8acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ef8b0:
    // 0x1ef8b0: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x1ef8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_1ef8b4:
    // 0x1ef8b4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1ef8b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1ef8b8:
    // 0x1ef8b8: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1ef8b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1ef8bc:
    // 0x1ef8bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ef8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1ef8c0:
    // 0x1ef8c0: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1ef8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1ef8c4:
    // 0x1ef8c4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1ef8c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ef8c8:
    // 0x1ef8c8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1ef8cc:
    if (ctx->pc == 0x1EF8CCu) {
        ctx->pc = 0x1EF8CCu;
            // 0x1ef8cc: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x1EF8D0u;
        goto label_1ef8d0;
    }
    ctx->pc = 0x1EF8C8u;
    {
        const bool branch_taken_0x1ef8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF8C8u;
            // 0x1ef8cc: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef8c8) {
            ctx->pc = 0x1EF8F8u;
            goto label_1ef8f8;
        }
    }
    ctx->pc = 0x1EF8D0u;
label_1ef8d0:
    // 0x1ef8d0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1ef8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1ef8d4:
    // 0x1ef8d4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1ef8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1ef8d8:
    // 0x1ef8d8: 0x2442ade0  addiu       $v0, $v0, -0x5220
    ctx->pc = 0x1ef8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946272));
label_1ef8dc:
    // 0x1ef8dc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ef8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1ef8e0:
    // 0x1ef8e0: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1ef8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1ef8e4:
    // 0x1ef8e4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1ef8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1ef8e8:
    // 0x1ef8e8: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1ef8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_1ef8ec:
    // 0x1ef8ec: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1ef8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1ef8f0:
    // 0x1ef8f0: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1ef8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_1ef8f4:
    // 0x1ef8f4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1ef8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1ef8f8:
    // 0x1ef8f8: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1ef8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1ef8fc:
    // 0x1ef8fc: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x1ef8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1ef900:
    // 0x1ef900: 0xc0a45a0  jal         func_291680
label_1ef904:
    if (ctx->pc == 0x1EF904u) {
        ctx->pc = 0x1EF904u;
            // 0x1ef904: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1EF908u;
        goto label_1ef908;
    }
    ctx->pc = 0x1EF900u;
    SET_GPR_U32(ctx, 31, 0x1EF908u);
    ctx->pc = 0x1EF904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF900u;
            // 0x1ef904: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291680u;
    if (runtime->hasFunction(0x291680u)) {
        auto targetFn = runtime->lookupFunction(0x291680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF908u; }
        if (ctx->pc != 0x1EF908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291680_0x291680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF908u; }
        if (ctx->pc != 0x1EF908u) { return; }
    }
    ctx->pc = 0x1EF908u;
label_1ef908:
    // 0x1ef908: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ef908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ef90c:
    // 0x1ef90c: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x1ef90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1ef910:
    // 0x1ef910: 0x2685000c  addiu       $a1, $s4, 0xC
    ctx->pc = 0x1ef910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_1ef914:
    // 0x1ef914: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1ef914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1ef918:
    // 0x1ef918: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1ef918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1ef91c:
    // 0x1ef91c: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x1ef91cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1ef920:
    // 0x1ef920: 0xafa300f8  sw          $v1, 0xF8($sp)
    ctx->pc = 0x1ef920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 3));
label_1ef924:
    // 0x1ef924: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1ef924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1ef928:
    // 0x1ef928: 0xafa300fc  sw          $v1, 0xFC($sp)
    ctx->pc = 0x1ef928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 3));
label_1ef92c:
    // 0x1ef92c: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x1ef92cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_1ef930:
    // 0x1ef930: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1ef930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1ef934:
    // 0x1ef934: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x1ef934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
label_1ef938:
    // 0x1ef938: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1ef938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ef93c:
    // 0x1ef93c: 0xc0991e4  jal         func_264790
label_1ef940:
    if (ctx->pc == 0x1EF940u) {
        ctx->pc = 0x1EF940u;
            // 0x1ef940: 0xe7a00100  swc1        $f0, 0x100($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
        ctx->pc = 0x1EF944u;
        goto label_1ef944;
    }
    ctx->pc = 0x1EF93Cu;
    SET_GPR_U32(ctx, 31, 0x1EF944u);
    ctx->pc = 0x1EF940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF93Cu;
            // 0x1ef940: 0xe7a00100  swc1        $f0, 0x100($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x264790u;
    if (runtime->hasFunction(0x264790u)) {
        auto targetFn = runtime->lookupFunction(0x264790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF944u; }
        if (ctx->pc != 0x1EF944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264790_0x264790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF944u; }
        if (ctx->pc != 0x1EF944u) { return; }
    }
    ctx->pc = 0x1EF944u;
label_1ef944:
    // 0x1ef944: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_1ef948:
    if (ctx->pc == 0x1EF948u) {
        ctx->pc = 0x1EF94Cu;
        goto label_1ef94c;
    }
    ctx->pc = 0x1EF944u;
    {
        const bool branch_taken_0x1ef944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef944) {
            ctx->pc = 0x1EF9A8u;
            goto label_1ef9a8;
        }
    }
    ctx->pc = 0x1EF94Cu;
label_1ef94c:
    // 0x1ef94c: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x1ef94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ef950:
    // 0x1ef950: 0xafb30080  sw          $s3, 0x80($sp)
    ctx->pc = 0x1ef950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 19));
label_1ef954:
    // 0x1ef954: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x1ef954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ef958:
    // 0x1ef958: 0xafb20084  sw          $s2, 0x84($sp)
    ctx->pc = 0x1ef958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 18));
label_1ef95c:
    // 0x1ef95c: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x1ef95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ef960:
    // 0x1ef960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ef960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ef964:
    // 0x1ef964: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x1ef964u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_1ef968:
    // 0x1ef968: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1ef968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1ef96c:
    // 0x1ef96c: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x1ef96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ef970:
    // 0x1ef970: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1ef970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ef974:
    // 0x1ef974: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x1ef974u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1ef978:
    // 0x1ef978: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x1ef978u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1ef97c:
    // 0x1ef97c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1ef97cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1ef980:
    // 0x1ef980: 0xc7a2009c  lwc1        $f2, 0x9C($sp)
    ctx->pc = 0x1ef980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ef984:
    // 0x1ef984: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x1ef984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ef988:
    // 0x1ef988: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x1ef988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ef98c:
    // 0x1ef98c: 0xe7a2006c  swc1        $f2, 0x6C($sp)
    ctx->pc = 0x1ef98cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_1ef990:
    // 0x1ef990: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x1ef990u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1ef994:
    // 0x1ef994: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1ef994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_1ef998:
    // 0x1ef998: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1ef998u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ef99c:
    // 0x1ef99c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1ef99cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1ef9a0:
    // 0x1ef9a0: 0x320f809  jalr        $t9
label_1ef9a4:
    if (ctx->pc == 0x1EF9A4u) {
        ctx->pc = 0x1EF9A4u;
            // 0x1ef9a4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1EF9A8u;
        goto label_1ef9a8;
    }
    ctx->pc = 0x1EF9A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EF9A8u);
        ctx->pc = 0x1EF9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF9A0u;
            // 0x1ef9a4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EF9A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EF9A8u; }
            if (ctx->pc != 0x1EF9A8u) { return; }
        }
        }
    }
    ctx->pc = 0x1EF9A8u;
label_1ef9a8:
    // 0x1ef9a8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1ef9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1ef9ac:
    // 0x1ef9ac: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1ef9acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1ef9b0:
    // 0x1ef9b0: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1ef9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1ef9b4:
    // 0x1ef9b4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1ef9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1ef9b8:
    // 0x1ef9b8: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1ef9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1ef9bc:
    // 0x1ef9bc: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1ef9bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1ef9c0:
    // 0x1ef9c0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1ef9c4:
    if (ctx->pc == 0x1EF9C4u) {
        ctx->pc = 0x1EF9C4u;
            // 0x1ef9c4: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1EF9C8u;
        goto label_1ef9c8;
    }
    ctx->pc = 0x1EF9C0u;
    {
        const bool branch_taken_0x1ef9c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF9C0u;
            // 0x1ef9c4: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef9c0) {
            ctx->pc = 0x1EF9F0u;
            goto label_1ef9f0;
        }
    }
    ctx->pc = 0x1EF9C8u;
label_1ef9c8:
    // 0x1ef9c8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1ef9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1ef9cc:
    // 0x1ef9cc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1ef9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1ef9d0:
    // 0x1ef9d0: 0x2463ade8  addiu       $v1, $v1, -0x5218
    ctx->pc = 0x1ef9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946280));
label_1ef9d4:
    // 0x1ef9d4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1ef9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1ef9d8:
    // 0x1ef9d8: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1ef9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1ef9dc:
    // 0x1ef9dc: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1ef9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1ef9e0:
    // 0x1ef9e0: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1ef9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1ef9e4:
    // 0x1ef9e4: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1ef9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1ef9e8:
    // 0x1ef9e8: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1ef9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1ef9ec:
    // 0x1ef9ec: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1ef9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1ef9f0:
    // 0x1ef9f0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ef9f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1ef9f4:
    // 0x1ef9f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ef9f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ef9f8:
    // 0x1ef9f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ef9f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ef9fc:
    // 0x1ef9fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ef9fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1efa00:
    // 0x1efa00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1efa00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1efa04:
    // 0x1efa04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1efa04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1efa08:
    // 0x1efa08: 0x3e00008  jr          $ra
label_1efa0c:
    if (ctx->pc == 0x1EFA0Cu) {
        ctx->pc = 0x1EFA0Cu;
            // 0x1efa0c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x1EFA10u;
        goto label_fallthrough_0x1efa08;
    }
    ctx->pc = 0x1EFA08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFA08u;
            // 0x1efa0c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1efa08:
    ctx->pc = 0x1EFA10u;
}
