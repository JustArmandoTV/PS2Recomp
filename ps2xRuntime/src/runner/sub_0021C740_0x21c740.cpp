#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021C740
// Address: 0x21c740 - 0x21c9f0
void sub_0021C740_0x21c740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C740_0x21c740");
#endif

    switch (ctx->pc) {
        case 0x21c740u: goto label_21c740;
        case 0x21c744u: goto label_21c744;
        case 0x21c748u: goto label_21c748;
        case 0x21c74cu: goto label_21c74c;
        case 0x21c750u: goto label_21c750;
        case 0x21c754u: goto label_21c754;
        case 0x21c758u: goto label_21c758;
        case 0x21c75cu: goto label_21c75c;
        case 0x21c760u: goto label_21c760;
        case 0x21c764u: goto label_21c764;
        case 0x21c768u: goto label_21c768;
        case 0x21c76cu: goto label_21c76c;
        case 0x21c770u: goto label_21c770;
        case 0x21c774u: goto label_21c774;
        case 0x21c778u: goto label_21c778;
        case 0x21c77cu: goto label_21c77c;
        case 0x21c780u: goto label_21c780;
        case 0x21c784u: goto label_21c784;
        case 0x21c788u: goto label_21c788;
        case 0x21c78cu: goto label_21c78c;
        case 0x21c790u: goto label_21c790;
        case 0x21c794u: goto label_21c794;
        case 0x21c798u: goto label_21c798;
        case 0x21c79cu: goto label_21c79c;
        case 0x21c7a0u: goto label_21c7a0;
        case 0x21c7a4u: goto label_21c7a4;
        case 0x21c7a8u: goto label_21c7a8;
        case 0x21c7acu: goto label_21c7ac;
        case 0x21c7b0u: goto label_21c7b0;
        case 0x21c7b4u: goto label_21c7b4;
        case 0x21c7b8u: goto label_21c7b8;
        case 0x21c7bcu: goto label_21c7bc;
        case 0x21c7c0u: goto label_21c7c0;
        case 0x21c7c4u: goto label_21c7c4;
        case 0x21c7c8u: goto label_21c7c8;
        case 0x21c7ccu: goto label_21c7cc;
        case 0x21c7d0u: goto label_21c7d0;
        case 0x21c7d4u: goto label_21c7d4;
        case 0x21c7d8u: goto label_21c7d8;
        case 0x21c7dcu: goto label_21c7dc;
        case 0x21c7e0u: goto label_21c7e0;
        case 0x21c7e4u: goto label_21c7e4;
        case 0x21c7e8u: goto label_21c7e8;
        case 0x21c7ecu: goto label_21c7ec;
        case 0x21c7f0u: goto label_21c7f0;
        case 0x21c7f4u: goto label_21c7f4;
        case 0x21c7f8u: goto label_21c7f8;
        case 0x21c7fcu: goto label_21c7fc;
        case 0x21c800u: goto label_21c800;
        case 0x21c804u: goto label_21c804;
        case 0x21c808u: goto label_21c808;
        case 0x21c80cu: goto label_21c80c;
        case 0x21c810u: goto label_21c810;
        case 0x21c814u: goto label_21c814;
        case 0x21c818u: goto label_21c818;
        case 0x21c81cu: goto label_21c81c;
        case 0x21c820u: goto label_21c820;
        case 0x21c824u: goto label_21c824;
        case 0x21c828u: goto label_21c828;
        case 0x21c82cu: goto label_21c82c;
        case 0x21c830u: goto label_21c830;
        case 0x21c834u: goto label_21c834;
        case 0x21c838u: goto label_21c838;
        case 0x21c83cu: goto label_21c83c;
        case 0x21c840u: goto label_21c840;
        case 0x21c844u: goto label_21c844;
        case 0x21c848u: goto label_21c848;
        case 0x21c84cu: goto label_21c84c;
        case 0x21c850u: goto label_21c850;
        case 0x21c854u: goto label_21c854;
        case 0x21c858u: goto label_21c858;
        case 0x21c85cu: goto label_21c85c;
        case 0x21c860u: goto label_21c860;
        case 0x21c864u: goto label_21c864;
        case 0x21c868u: goto label_21c868;
        case 0x21c86cu: goto label_21c86c;
        case 0x21c870u: goto label_21c870;
        case 0x21c874u: goto label_21c874;
        case 0x21c878u: goto label_21c878;
        case 0x21c87cu: goto label_21c87c;
        case 0x21c880u: goto label_21c880;
        case 0x21c884u: goto label_21c884;
        case 0x21c888u: goto label_21c888;
        case 0x21c88cu: goto label_21c88c;
        case 0x21c890u: goto label_21c890;
        case 0x21c894u: goto label_21c894;
        case 0x21c898u: goto label_21c898;
        case 0x21c89cu: goto label_21c89c;
        case 0x21c8a0u: goto label_21c8a0;
        case 0x21c8a4u: goto label_21c8a4;
        case 0x21c8a8u: goto label_21c8a8;
        case 0x21c8acu: goto label_21c8ac;
        case 0x21c8b0u: goto label_21c8b0;
        case 0x21c8b4u: goto label_21c8b4;
        case 0x21c8b8u: goto label_21c8b8;
        case 0x21c8bcu: goto label_21c8bc;
        case 0x21c8c0u: goto label_21c8c0;
        case 0x21c8c4u: goto label_21c8c4;
        case 0x21c8c8u: goto label_21c8c8;
        case 0x21c8ccu: goto label_21c8cc;
        case 0x21c8d0u: goto label_21c8d0;
        case 0x21c8d4u: goto label_21c8d4;
        case 0x21c8d8u: goto label_21c8d8;
        case 0x21c8dcu: goto label_21c8dc;
        case 0x21c8e0u: goto label_21c8e0;
        case 0x21c8e4u: goto label_21c8e4;
        case 0x21c8e8u: goto label_21c8e8;
        case 0x21c8ecu: goto label_21c8ec;
        case 0x21c8f0u: goto label_21c8f0;
        case 0x21c8f4u: goto label_21c8f4;
        case 0x21c8f8u: goto label_21c8f8;
        case 0x21c8fcu: goto label_21c8fc;
        case 0x21c900u: goto label_21c900;
        case 0x21c904u: goto label_21c904;
        case 0x21c908u: goto label_21c908;
        case 0x21c90cu: goto label_21c90c;
        case 0x21c910u: goto label_21c910;
        case 0x21c914u: goto label_21c914;
        case 0x21c918u: goto label_21c918;
        case 0x21c91cu: goto label_21c91c;
        case 0x21c920u: goto label_21c920;
        case 0x21c924u: goto label_21c924;
        case 0x21c928u: goto label_21c928;
        case 0x21c92cu: goto label_21c92c;
        case 0x21c930u: goto label_21c930;
        case 0x21c934u: goto label_21c934;
        case 0x21c938u: goto label_21c938;
        case 0x21c93cu: goto label_21c93c;
        case 0x21c940u: goto label_21c940;
        case 0x21c944u: goto label_21c944;
        case 0x21c948u: goto label_21c948;
        case 0x21c94cu: goto label_21c94c;
        case 0x21c950u: goto label_21c950;
        case 0x21c954u: goto label_21c954;
        case 0x21c958u: goto label_21c958;
        case 0x21c95cu: goto label_21c95c;
        case 0x21c960u: goto label_21c960;
        case 0x21c964u: goto label_21c964;
        case 0x21c968u: goto label_21c968;
        case 0x21c96cu: goto label_21c96c;
        case 0x21c970u: goto label_21c970;
        case 0x21c974u: goto label_21c974;
        case 0x21c978u: goto label_21c978;
        case 0x21c97cu: goto label_21c97c;
        case 0x21c980u: goto label_21c980;
        case 0x21c984u: goto label_21c984;
        case 0x21c988u: goto label_21c988;
        case 0x21c98cu: goto label_21c98c;
        case 0x21c990u: goto label_21c990;
        case 0x21c994u: goto label_21c994;
        case 0x21c998u: goto label_21c998;
        case 0x21c99cu: goto label_21c99c;
        case 0x21c9a0u: goto label_21c9a0;
        case 0x21c9a4u: goto label_21c9a4;
        case 0x21c9a8u: goto label_21c9a8;
        case 0x21c9acu: goto label_21c9ac;
        case 0x21c9b0u: goto label_21c9b0;
        case 0x21c9b4u: goto label_21c9b4;
        case 0x21c9b8u: goto label_21c9b8;
        case 0x21c9bcu: goto label_21c9bc;
        case 0x21c9c0u: goto label_21c9c0;
        case 0x21c9c4u: goto label_21c9c4;
        case 0x21c9c8u: goto label_21c9c8;
        case 0x21c9ccu: goto label_21c9cc;
        case 0x21c9d0u: goto label_21c9d0;
        case 0x21c9d4u: goto label_21c9d4;
        case 0x21c9d8u: goto label_21c9d8;
        case 0x21c9dcu: goto label_21c9dc;
        case 0x21c9e0u: goto label_21c9e0;
        case 0x21c9e4u: goto label_21c9e4;
        case 0x21c9e8u: goto label_21c9e8;
        case 0x21c9ecu: goto label_21c9ec;
        default: break;
    }

    ctx->pc = 0x21c740u;

label_21c740:
    // 0x21c740: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21c740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_21c744:
    // 0x21c744: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x21c744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_21c748:
    // 0x21c748: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21c748u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_21c74c:
    // 0x21c74c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21c74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_21c750:
    // 0x21c750: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x21c750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_21c754:
    // 0x21c754: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21c754u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_21c758:
    // 0x21c758: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21c758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21c75c:
    // 0x21c75c: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x21c75cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_21c760:
    // 0x21c760: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21c760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_21c764:
    // 0x21c764: 0x2442e6d0  addiu       $v0, $v0, -0x1930
    ctx->pc = 0x21c764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960848));
label_21c768:
    // 0x21c768: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21c768u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_21c76c:
    // 0x21c76c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21c76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_21c770:
    // 0x21c770: 0x2442e790  addiu       $v0, $v0, -0x1870
    ctx->pc = 0x21c770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961040));
label_21c774:
    // 0x21c774: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21c774u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_21c778:
    // 0x21c778: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x21c778u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21c77c:
    // 0x21c77c: 0x3e00008  jr          $ra
label_21c780:
    if (ctx->pc == 0x21C780u) {
        ctx->pc = 0x21C780u;
            // 0x21c780: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->pc = 0x21C784u;
        goto label_21c784;
    }
    ctx->pc = 0x21C77Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C77Cu;
            // 0x21c780: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21C784u;
label_21c784:
    // 0x21c784: 0x0  nop
    ctx->pc = 0x21c784u;
    // NOP
label_21c788:
    // 0x21c788: 0x0  nop
    ctx->pc = 0x21c788u;
    // NOP
label_21c78c:
    // 0x21c78c: 0x0  nop
    ctx->pc = 0x21c78cu;
    // NOP
label_21c790:
    // 0x21c790: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21c790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_21c794:
    // 0x21c794: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x21c794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_21c798:
    // 0x21c798: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21c798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_21c79c:
    // 0x21c79c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21c79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_21c7a0:
    // 0x21c7a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21c7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_21c7a4:
    // 0x21c7a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21c7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_21c7a8:
    // 0x21c7a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21c7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_21c7ac:
    // 0x21c7ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21c7acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21c7b0:
    // 0x21c7b0: 0x80a30010  lb          $v1, 0x10($a1)
    ctx->pc = 0x21c7b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
label_21c7b4:
    // 0x21c7b4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x21c7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_21c7b8:
    // 0x21c7b8: 0xa39821  addu        $s3, $a1, $v1
    ctx->pc = 0x21c7b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_21c7bc:
    // 0x21c7bc: 0x80c20010  lb          $v0, 0x10($a2)
    ctx->pc = 0x21c7bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
label_21c7c0:
    // 0x21c7c0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x21c7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_21c7c4:
    // 0x21c7c4: 0xc29021  addu        $s2, $a2, $v0
    ctx->pc = 0x21c7c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_21c7c8:
    // 0x21c7c8: 0xc0a7a88  jal         func_29EA20
label_21c7cc:
    if (ctx->pc == 0x21C7CCu) {
        ctx->pc = 0x21C7CCu;
            // 0x21c7cc: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x21C7D0u;
        goto label_21c7d0;
    }
    ctx->pc = 0x21C7C8u;
    SET_GPR_U32(ctx, 31, 0x21C7D0u);
    ctx->pc = 0x21C7CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C7C8u;
            // 0x21c7cc: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C7D0u; }
        if (ctx->pc != 0x21C7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C7D0u; }
        if (ctx->pc != 0x21C7D0u) { return; }
    }
    ctx->pc = 0x21C7D0u;
label_21c7d0:
    // 0x21c7d0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x21c7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_21c7d4:
    // 0x21c7d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21c7d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21c7d8:
    // 0x21c7d8: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_21c7dc:
    if (ctx->pc == 0x21C7DCu) {
        ctx->pc = 0x21C7DCu;
            // 0x21c7dc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x21C7E0u;
        goto label_21c7e0;
    }
    ctx->pc = 0x21C7D8u;
    {
        const bool branch_taken_0x21c7d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C7D8u;
            // 0x21c7dc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c7d8) {
            ctx->pc = 0x21C7F4u;
            goto label_21c7f4;
        }
    }
    ctx->pc = 0x21C7E0u;
label_21c7e0:
    // 0x21c7e0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x21c7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_21c7e4:
    // 0x21c7e4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x21c7e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21c7e8:
    // 0x21c7e8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x21c7e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21c7ec:
    // 0x21c7ec: 0xc086ce8  jal         func_21B3A0
label_21c7f0:
    if (ctx->pc == 0x21C7F0u) {
        ctx->pc = 0x21C7F0u;
            // 0x21c7f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21C7F4u;
        goto label_21c7f4;
    }
    ctx->pc = 0x21C7ECu;
    SET_GPR_U32(ctx, 31, 0x21C7F4u);
    ctx->pc = 0x21C7F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C7ECu;
            // 0x21c7f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21B3A0u;
    if (runtime->hasFunction(0x21B3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21B3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C7F4u; }
        if (ctx->pc != 0x21C7F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021B3A0_0x21b3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C7F4u; }
        if (ctx->pc != 0x21C7F4u) { return; }
    }
    ctx->pc = 0x21C7F4u;
label_21c7f4:
    // 0x21c7f4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x21c7f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21c7f8:
    // 0x21c7f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x21c7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_21c7fc:
    // 0x21c7fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21c7fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21c800:
    // 0x21c800: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21c800u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21c804:
    // 0x21c804: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21c804u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21c808:
    // 0x21c808: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21c808u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21c80c:
    // 0x21c80c: 0x3e00008  jr          $ra
label_21c810:
    if (ctx->pc == 0x21C810u) {
        ctx->pc = 0x21C810u;
            // 0x21c810: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x21C814u;
        goto label_21c814;
    }
    ctx->pc = 0x21C80Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C80Cu;
            // 0x21c810: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21C814u;
label_21c814:
    // 0x21c814: 0x0  nop
    ctx->pc = 0x21c814u;
    // NOP
label_21c818:
    // 0x21c818: 0x0  nop
    ctx->pc = 0x21c818u;
    // NOP
label_21c81c:
    // 0x21c81c: 0x0  nop
    ctx->pc = 0x21c81cu;
    // NOP
label_21c820:
    // 0x21c820: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21c820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_21c824:
    // 0x21c824: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x21c824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_21c828:
    // 0x21c828: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21c828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_21c82c:
    // 0x21c82c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21c82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_21c830:
    // 0x21c830: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21c830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_21c834:
    // 0x21c834: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21c834u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21c838:
    // 0x21c838: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21c838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21c83c:
    // 0x21c83c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21c83cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21c840:
    // 0x21c840: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x21c840u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21c844:
    // 0x21c844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21c848:
    // 0x21c848: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x21c848u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_21c84c:
    // 0x21c84c: 0x320f809  jalr        $t9
label_21c850:
    if (ctx->pc == 0x21C850u) {
        ctx->pc = 0x21C850u;
            // 0x21c850: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21C854u;
        goto label_21c854;
    }
    ctx->pc = 0x21C84Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x21C854u);
        ctx->pc = 0x21C850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C84Cu;
            // 0x21c850: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x21C854u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x21C854u; }
            if (ctx->pc != 0x21C854u) { return; }
        }
        }
    }
    ctx->pc = 0x21C854u;
label_21c854:
    // 0x21c854: 0x8e27003c  lw          $a3, 0x3C($s1)
    ctx->pc = 0x21c854u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_21c858:
    // 0x21c858: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x21c858u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_21c85c:
    // 0x21c85c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x21c85cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21c860:
    // 0x21c860: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21c864:
    // 0x21c864: 0x24a5c2a8  addiu       $a1, $a1, -0x3D58
    ctx->pc = 0x21c864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951592));
label_21c868:
    // 0x21c868: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x21c868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_21c86c:
    // 0x21c86c: 0x94e80002  lhu         $t0, 0x2($a3)
    ctx->pc = 0x21c86cu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_21c870:
    // 0x21c870: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x21c870u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_21c874:
    // 0x21c874: 0x320f809  jalr        $t9
label_21c878:
    if (ctx->pc == 0x21C878u) {
        ctx->pc = 0x21C878u;
            // 0x21c878: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21C87Cu;
        goto label_21c87c;
    }
    ctx->pc = 0x21C874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x21C87Cu);
        ctx->pc = 0x21C878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C874u;
            // 0x21c878: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x21C87Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x21C87Cu; }
            if (ctx->pc != 0x21C87Cu) { return; }
        }
        }
    }
    ctx->pc = 0x21C87Cu;
label_21c87c:
    // 0x21c87c: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x21c87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_21c880:
    // 0x21c880: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x21c880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_21c884:
    // 0x21c884: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x21c884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_21c888:
    // 0x21c888: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_21c88c:
    if (ctx->pc == 0x21C88Cu) {
        ctx->pc = 0x21C88Cu;
            // 0x21c88c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x21C890u;
        goto label_21c890;
    }
    ctx->pc = 0x21C888u;
    {
        const bool branch_taken_0x21c888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c888) {
            ctx->pc = 0x21C88Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21C888u;
            // 0x21c88c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21C8C0u;
            goto label_21c8c0;
        }
    }
    ctx->pc = 0x21C890u;
label_21c890:
    // 0x21c890: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x21c890u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21c894:
    // 0x21c894: 0x348bc  dsll32      $t1, $v1, 2
    ctx->pc = 0x21c894u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (32 + 2));
label_21c898:
    // 0x21c898: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x21c898u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_21c89c:
    // 0x21c89c: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x21c89cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_21c8a0:
    // 0x21c8a0: 0x8e280024  lw          $t0, 0x24($s1)
    ctx->pc = 0x21c8a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_21c8a4:
    // 0x21c8a4: 0x948be  dsrl32      $t1, $t1, 2
    ctx->pc = 0x21c8a4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 2));
label_21c8a8:
    // 0x21c8a8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x21c8a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_21c8ac:
    // 0x21c8ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21c8b0:
    // 0x21c8b0: 0x24a5c2b8  addiu       $a1, $a1, -0x3D48
    ctx->pc = 0x21c8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951608));
label_21c8b4:
    // 0x21c8b4: 0x320f809  jalr        $t9
label_21c8b8:
    if (ctx->pc == 0x21C8B8u) {
        ctx->pc = 0x21C8B8u;
            // 0x21c8b8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x21C8BCu;
        goto label_21c8bc;
    }
    ctx->pc = 0x21C8B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x21C8BCu);
        ctx->pc = 0x21C8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C8B4u;
            // 0x21c8b8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x21C8BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x21C8BCu; }
            if (ctx->pc != 0x21C8BCu) { return; }
        }
        }
    }
    ctx->pc = 0x21C8BCu;
label_21c8bc:
    // 0x21c8bc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x21c8bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21c8c0:
    // 0x21c8c0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x21c8c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_21c8c4:
    // 0x21c8c4: 0x320f809  jalr        $t9
label_21c8c8:
    if (ctx->pc == 0x21C8C8u) {
        ctx->pc = 0x21C8C8u;
            // 0x21c8c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21C8CCu;
        goto label_21c8cc;
    }
    ctx->pc = 0x21C8C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x21C8CCu);
        ctx->pc = 0x21C8C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C8C4u;
            // 0x21c8c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x21C8CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x21C8CCu; }
            if (ctx->pc != 0x21C8CCu) { return; }
        }
        }
    }
    ctx->pc = 0x21C8CCu;
label_21c8cc:
    // 0x21c8cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21c8ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_21c8d0:
    // 0x21c8d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21c8d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21c8d4:
    // 0x21c8d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21c8d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21c8d8:
    // 0x21c8d8: 0x3e00008  jr          $ra
label_21c8dc:
    if (ctx->pc == 0x21C8DCu) {
        ctx->pc = 0x21C8DCu;
            // 0x21c8dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x21C8E0u;
        goto label_21c8e0;
    }
    ctx->pc = 0x21C8D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C8DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C8D8u;
            // 0x21c8dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21C8E0u;
label_21c8e0:
    // 0x21c8e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21c8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_21c8e4:
    // 0x21c8e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21c8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_21c8e8:
    // 0x21c8e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21c8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_21c8ec:
    // 0x21c8ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21c8ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21c8f0:
    // 0x21c8f0: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
label_21c8f4:
    if (ctx->pc == 0x21C8F4u) {
        ctx->pc = 0x21C8F4u;
            // 0x21c8f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21C8F8u;
        goto label_21c8f8;
    }
    ctx->pc = 0x21C8F0u;
    {
        const bool branch_taken_0x21c8f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c8f0) {
            ctx->pc = 0x21C8F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21C8F0u;
            // 0x21c8f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21C960u;
            goto label_21c960;
        }
    }
    ctx->pc = 0x21C8F8u;
label_21c8f8:
    // 0x21c8f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21c8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_21c8fc:
    // 0x21c8fc: 0x2442e790  addiu       $v0, $v0, -0x1870
    ctx->pc = 0x21c8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961040));
label_21c900:
    // 0x21c900: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_21c904:
    if (ctx->pc == 0x21C904u) {
        ctx->pc = 0x21C904u;
            // 0x21c904: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x21C908u;
        goto label_21c908;
    }
    ctx->pc = 0x21C900u;
    {
        const bool branch_taken_0x21c900 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C900u;
            // 0x21c904: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c900) {
            ctx->pc = 0x21C934u;
            goto label_21c934;
        }
    }
    ctx->pc = 0x21C908u;
label_21c908:
    // 0x21c908: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21c908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_21c90c:
    // 0x21c90c: 0x2442e6d0  addiu       $v0, $v0, -0x1930
    ctx->pc = 0x21c90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960848));
label_21c910:
    // 0x21c910: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_21c914:
    if (ctx->pc == 0x21C914u) {
        ctx->pc = 0x21C914u;
            // 0x21c914: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x21C918u;
        goto label_21c918;
    }
    ctx->pc = 0x21C910u;
    {
        const bool branch_taken_0x21c910 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C910u;
            // 0x21c914: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c910) {
            ctx->pc = 0x21C934u;
            goto label_21c934;
        }
    }
    ctx->pc = 0x21C918u;
label_21c918:
    // 0x21c918: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21c918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_21c91c:
    // 0x21c91c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x21c91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_21c920:
    // 0x21c920: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_21c924:
    if (ctx->pc == 0x21C924u) {
        ctx->pc = 0x21C924u;
            // 0x21c924: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x21C928u;
        goto label_21c928;
    }
    ctx->pc = 0x21C920u;
    {
        const bool branch_taken_0x21c920 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C920u;
            // 0x21c924: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c920) {
            ctx->pc = 0x21C934u;
            goto label_21c934;
        }
    }
    ctx->pc = 0x21C928u;
label_21c928:
    // 0x21c928: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21c928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_21c92c:
    // 0x21c92c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x21c92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_21c930:
    // 0x21c930: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x21c930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_21c934:
    // 0x21c934: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x21c934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_21c938:
    // 0x21c938: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x21c938u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_21c93c:
    // 0x21c93c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_21c940:
    if (ctx->pc == 0x21C940u) {
        ctx->pc = 0x21C944u;
        goto label_21c944;
    }
    ctx->pc = 0x21C93Cu;
    {
        const bool branch_taken_0x21c93c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x21c93c) {
            ctx->pc = 0x21C95Cu;
            goto label_21c95c;
        }
    }
    ctx->pc = 0x21C944u;
label_21c944:
    // 0x21c944: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x21c944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_21c948:
    // 0x21c948: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x21c948u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_21c94c:
    // 0x21c94c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x21c94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_21c950:
    // 0x21c950: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21c950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21c954:
    // 0x21c954: 0xc0a7ab4  jal         func_29EAD0
label_21c958:
    if (ctx->pc == 0x21C958u) {
        ctx->pc = 0x21C958u;
            // 0x21c958: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x21C95Cu;
        goto label_21c95c;
    }
    ctx->pc = 0x21C954u;
    SET_GPR_U32(ctx, 31, 0x21C95Cu);
    ctx->pc = 0x21C958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C954u;
            // 0x21c958: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C95Cu; }
        if (ctx->pc != 0x21C95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C95Cu; }
        if (ctx->pc != 0x21C95Cu) { return; }
    }
    ctx->pc = 0x21C95Cu;
label_21c95c:
    // 0x21c95c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21c95cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21c960:
    // 0x21c960: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21c960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21c964:
    // 0x21c964: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21c964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21c968:
    // 0x21c968: 0x3e00008  jr          $ra
label_21c96c:
    if (ctx->pc == 0x21C96Cu) {
        ctx->pc = 0x21C96Cu;
            // 0x21c96c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x21C970u;
        goto label_21c970;
    }
    ctx->pc = 0x21C968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C96Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C968u;
            // 0x21c96c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21C970u;
label_21c970:
    // 0x21c970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21c970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_21c974:
    // 0x21c974: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_21c978:
    if (ctx->pc == 0x21C978u) {
        ctx->pc = 0x21C978u;
            // 0x21c978: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x21C97Cu;
        goto label_21c97c;
    }
    ctx->pc = 0x21C974u;
    {
        const bool branch_taken_0x21c974 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C974u;
            // 0x21c978: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c974) {
            ctx->pc = 0x21C98Cu;
            goto label_21c98c;
        }
    }
    ctx->pc = 0x21C97Cu;
label_21c97c:
    // 0x21c97c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x21c97cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_21c980:
    // 0x21c980: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x21c980u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_21c984:
    // 0x21c984: 0x320f809  jalr        $t9
label_21c988:
    if (ctx->pc == 0x21C988u) {
        ctx->pc = 0x21C988u;
            // 0x21c988: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x21C98Cu;
        goto label_21c98c;
    }
    ctx->pc = 0x21C984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x21C98Cu);
        ctx->pc = 0x21C988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C984u;
            // 0x21c988: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x21C98Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x21C98Cu; }
            if (ctx->pc != 0x21C98Cu) { return; }
        }
        }
    }
    ctx->pc = 0x21C98Cu;
label_21c98c:
    // 0x21c98c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21c98cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21c990:
    // 0x21c990: 0x3e00008  jr          $ra
label_21c994:
    if (ctx->pc == 0x21C994u) {
        ctx->pc = 0x21C994u;
            // 0x21c994: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x21C998u;
        goto label_21c998;
    }
    ctx->pc = 0x21C990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C990u;
            // 0x21c994: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21C998u;
label_21c998:
    // 0x21c998: 0x0  nop
    ctx->pc = 0x21c998u;
    // NOP
label_21c99c:
    // 0x21c99c: 0x0  nop
    ctx->pc = 0x21c99cu;
    // NOP
label_21c9a0:
    // 0x21c9a0: 0x3e00008  jr          $ra
label_21c9a4:
    if (ctx->pc == 0x21C9A4u) {
        ctx->pc = 0x21C9A4u;
            // 0x21c9a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21C9A8u;
        goto label_21c9a8;
    }
    ctx->pc = 0x21C9A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C9A0u;
            // 0x21c9a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21C9A8u;
label_21c9a8:
    // 0x21c9a8: 0x0  nop
    ctx->pc = 0x21c9a8u;
    // NOP
label_21c9ac:
    // 0x21c9ac: 0x0  nop
    ctx->pc = 0x21c9acu;
    // NOP
label_21c9b0:
    // 0x21c9b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21c9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_21c9b4:
    // 0x21c9b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21c9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_21c9b8:
    // 0x21c9b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x21c9b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_21c9bc:
    // 0x21c9bc: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x21c9bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_21c9c0:
    // 0x21c9c0: 0x320f809  jalr        $t9
label_21c9c4:
    if (ctx->pc == 0x21C9C4u) {
        ctx->pc = 0x21C9C8u;
        goto label_21c9c8;
    }
    ctx->pc = 0x21C9C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x21C9C8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x21C9C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x21C9C8u; }
            if (ctx->pc != 0x21C9C8u) { return; }
        }
        }
    }
    ctx->pc = 0x21C9C8u;
label_21c9c8:
    // 0x21c9c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21c9c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21c9cc:
    // 0x21c9cc: 0x3e00008  jr          $ra
label_21c9d0:
    if (ctx->pc == 0x21C9D0u) {
        ctx->pc = 0x21C9D0u;
            // 0x21c9d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x21C9D4u;
        goto label_21c9d4;
    }
    ctx->pc = 0x21C9CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C9CCu;
            // 0x21c9d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21C9D4u;
label_21c9d4:
    // 0x21c9d4: 0x0  nop
    ctx->pc = 0x21c9d4u;
    // NOP
label_21c9d8:
    // 0x21c9d8: 0x0  nop
    ctx->pc = 0x21c9d8u;
    // NOP
label_21c9dc:
    // 0x21c9dc: 0x0  nop
    ctx->pc = 0x21c9dcu;
    // NOP
label_21c9e0:
    // 0x21c9e0: 0x3e00008  jr          $ra
label_21c9e4:
    if (ctx->pc == 0x21C9E4u) {
        ctx->pc = 0x21C9E8u;
        goto label_21c9e8;
    }
    ctx->pc = 0x21C9E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21C9E8u;
label_21c9e8:
    // 0x21c9e8: 0x0  nop
    ctx->pc = 0x21c9e8u;
    // NOP
label_21c9ec:
    // 0x21c9ec: 0x0  nop
    ctx->pc = 0x21c9ecu;
    // NOP
}
