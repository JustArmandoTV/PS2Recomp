#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E5640
// Address: 0x1e5640 - 0x1e5880
void sub_001E5640_0x1e5640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5640_0x1e5640");
#endif

    switch (ctx->pc) {
        case 0x1e5640u: goto label_1e5640;
        case 0x1e5644u: goto label_1e5644;
        case 0x1e5648u: goto label_1e5648;
        case 0x1e564cu: goto label_1e564c;
        case 0x1e5650u: goto label_1e5650;
        case 0x1e5654u: goto label_1e5654;
        case 0x1e5658u: goto label_1e5658;
        case 0x1e565cu: goto label_1e565c;
        case 0x1e5660u: goto label_1e5660;
        case 0x1e5664u: goto label_1e5664;
        case 0x1e5668u: goto label_1e5668;
        case 0x1e566cu: goto label_1e566c;
        case 0x1e5670u: goto label_1e5670;
        case 0x1e5674u: goto label_1e5674;
        case 0x1e5678u: goto label_1e5678;
        case 0x1e567cu: goto label_1e567c;
        case 0x1e5680u: goto label_1e5680;
        case 0x1e5684u: goto label_1e5684;
        case 0x1e5688u: goto label_1e5688;
        case 0x1e568cu: goto label_1e568c;
        case 0x1e5690u: goto label_1e5690;
        case 0x1e5694u: goto label_1e5694;
        case 0x1e5698u: goto label_1e5698;
        case 0x1e569cu: goto label_1e569c;
        case 0x1e56a0u: goto label_1e56a0;
        case 0x1e56a4u: goto label_1e56a4;
        case 0x1e56a8u: goto label_1e56a8;
        case 0x1e56acu: goto label_1e56ac;
        case 0x1e56b0u: goto label_1e56b0;
        case 0x1e56b4u: goto label_1e56b4;
        case 0x1e56b8u: goto label_1e56b8;
        case 0x1e56bcu: goto label_1e56bc;
        case 0x1e56c0u: goto label_1e56c0;
        case 0x1e56c4u: goto label_1e56c4;
        case 0x1e56c8u: goto label_1e56c8;
        case 0x1e56ccu: goto label_1e56cc;
        case 0x1e56d0u: goto label_1e56d0;
        case 0x1e56d4u: goto label_1e56d4;
        case 0x1e56d8u: goto label_1e56d8;
        case 0x1e56dcu: goto label_1e56dc;
        case 0x1e56e0u: goto label_1e56e0;
        case 0x1e56e4u: goto label_1e56e4;
        case 0x1e56e8u: goto label_1e56e8;
        case 0x1e56ecu: goto label_1e56ec;
        case 0x1e56f0u: goto label_1e56f0;
        case 0x1e56f4u: goto label_1e56f4;
        case 0x1e56f8u: goto label_1e56f8;
        case 0x1e56fcu: goto label_1e56fc;
        case 0x1e5700u: goto label_1e5700;
        case 0x1e5704u: goto label_1e5704;
        case 0x1e5708u: goto label_1e5708;
        case 0x1e570cu: goto label_1e570c;
        case 0x1e5710u: goto label_1e5710;
        case 0x1e5714u: goto label_1e5714;
        case 0x1e5718u: goto label_1e5718;
        case 0x1e571cu: goto label_1e571c;
        case 0x1e5720u: goto label_1e5720;
        case 0x1e5724u: goto label_1e5724;
        case 0x1e5728u: goto label_1e5728;
        case 0x1e572cu: goto label_1e572c;
        case 0x1e5730u: goto label_1e5730;
        case 0x1e5734u: goto label_1e5734;
        case 0x1e5738u: goto label_1e5738;
        case 0x1e573cu: goto label_1e573c;
        case 0x1e5740u: goto label_1e5740;
        case 0x1e5744u: goto label_1e5744;
        case 0x1e5748u: goto label_1e5748;
        case 0x1e574cu: goto label_1e574c;
        case 0x1e5750u: goto label_1e5750;
        case 0x1e5754u: goto label_1e5754;
        case 0x1e5758u: goto label_1e5758;
        case 0x1e575cu: goto label_1e575c;
        case 0x1e5760u: goto label_1e5760;
        case 0x1e5764u: goto label_1e5764;
        case 0x1e5768u: goto label_1e5768;
        case 0x1e576cu: goto label_1e576c;
        case 0x1e5770u: goto label_1e5770;
        case 0x1e5774u: goto label_1e5774;
        case 0x1e5778u: goto label_1e5778;
        case 0x1e577cu: goto label_1e577c;
        case 0x1e5780u: goto label_1e5780;
        case 0x1e5784u: goto label_1e5784;
        case 0x1e5788u: goto label_1e5788;
        case 0x1e578cu: goto label_1e578c;
        case 0x1e5790u: goto label_1e5790;
        case 0x1e5794u: goto label_1e5794;
        case 0x1e5798u: goto label_1e5798;
        case 0x1e579cu: goto label_1e579c;
        case 0x1e57a0u: goto label_1e57a0;
        case 0x1e57a4u: goto label_1e57a4;
        case 0x1e57a8u: goto label_1e57a8;
        case 0x1e57acu: goto label_1e57ac;
        case 0x1e57b0u: goto label_1e57b0;
        case 0x1e57b4u: goto label_1e57b4;
        case 0x1e57b8u: goto label_1e57b8;
        case 0x1e57bcu: goto label_1e57bc;
        case 0x1e57c0u: goto label_1e57c0;
        case 0x1e57c4u: goto label_1e57c4;
        case 0x1e57c8u: goto label_1e57c8;
        case 0x1e57ccu: goto label_1e57cc;
        case 0x1e57d0u: goto label_1e57d0;
        case 0x1e57d4u: goto label_1e57d4;
        case 0x1e57d8u: goto label_1e57d8;
        case 0x1e57dcu: goto label_1e57dc;
        case 0x1e57e0u: goto label_1e57e0;
        case 0x1e57e4u: goto label_1e57e4;
        case 0x1e57e8u: goto label_1e57e8;
        case 0x1e57ecu: goto label_1e57ec;
        case 0x1e57f0u: goto label_1e57f0;
        case 0x1e57f4u: goto label_1e57f4;
        case 0x1e57f8u: goto label_1e57f8;
        case 0x1e57fcu: goto label_1e57fc;
        case 0x1e5800u: goto label_1e5800;
        case 0x1e5804u: goto label_1e5804;
        case 0x1e5808u: goto label_1e5808;
        case 0x1e580cu: goto label_1e580c;
        case 0x1e5810u: goto label_1e5810;
        case 0x1e5814u: goto label_1e5814;
        case 0x1e5818u: goto label_1e5818;
        case 0x1e581cu: goto label_1e581c;
        case 0x1e5820u: goto label_1e5820;
        case 0x1e5824u: goto label_1e5824;
        case 0x1e5828u: goto label_1e5828;
        case 0x1e582cu: goto label_1e582c;
        case 0x1e5830u: goto label_1e5830;
        case 0x1e5834u: goto label_1e5834;
        case 0x1e5838u: goto label_1e5838;
        case 0x1e583cu: goto label_1e583c;
        case 0x1e5840u: goto label_1e5840;
        case 0x1e5844u: goto label_1e5844;
        case 0x1e5848u: goto label_1e5848;
        case 0x1e584cu: goto label_1e584c;
        case 0x1e5850u: goto label_1e5850;
        case 0x1e5854u: goto label_1e5854;
        case 0x1e5858u: goto label_1e5858;
        case 0x1e585cu: goto label_1e585c;
        case 0x1e5860u: goto label_1e5860;
        case 0x1e5864u: goto label_1e5864;
        case 0x1e5868u: goto label_1e5868;
        case 0x1e586cu: goto label_1e586c;
        case 0x1e5870u: goto label_1e5870;
        case 0x1e5874u: goto label_1e5874;
        case 0x1e5878u: goto label_1e5878;
        case 0x1e587cu: goto label_1e587c;
        default: break;
    }

    ctx->pc = 0x1e5640u;

label_1e5640:
    // 0x1e5640: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e5640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1e5644:
    // 0x1e5644: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1e5644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1e5648:
    // 0x1e5648: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e5648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1e564c:
    // 0x1e564c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e564cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e5650:
    // 0x1e5650: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e5650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e5654:
    // 0x1e5654: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e5654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e5658:
    // 0x1e5658: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1e5658u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e565c:
    // 0x1e565c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e565cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e5660:
    // 0x1e5660: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1e5660u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e5664:
    // 0x1e5664: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e5664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e5668:
    // 0x1e5668: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x1e5668u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_1e566c:
    // 0x1e566c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e566cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e5670:
    // 0x1e5670: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1e5670u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e5674:
    // 0x1e5674: 0x8c63ea64  lw          $v1, -0x159C($v1)
    ctx->pc = 0x1e5674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1e5678:
    // 0x1e5678: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1e5678u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1e567c:
    // 0x1e567c: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1e567cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1e5680:
    // 0x1e5680: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1e5680u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e5684:
    // 0x1e5684: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1e5688:
    if (ctx->pc == 0x1E5688u) {
        ctx->pc = 0x1E5688u;
            // 0x1e5688: 0x24c6ea60  addiu       $a2, $a2, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
        ctx->pc = 0x1E568Cu;
        goto label_1e568c;
    }
    ctx->pc = 0x1E5684u;
    {
        const bool branch_taken_0x1e5684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5684u;
            // 0x1e5688: 0x24c6ea60  addiu       $a2, $a2, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5684) {
            ctx->pc = 0x1E56C0u;
            goto label_1e56c0;
        }
    }
    ctx->pc = 0x1E568Cu;
label_1e568c:
    // 0x1e568c: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x1e568cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1e5690:
    // 0x1e5690: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1e5690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1e5694:
    // 0x1e5694: 0x2463a940  addiu       $v1, $v1, -0x56C0
    ctx->pc = 0x1e5694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945088));
label_1e5698:
    // 0x1e5698: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1e5698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1e569c:
    // 0x1e569c: 0x2442a950  addiu       $v0, $v0, -0x56B0
    ctx->pc = 0x1e569cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945104));
label_1e56a0:
    // 0x1e56a0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1e56a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1e56a4:
    // 0x1e56a4: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1e56a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_1e56a8:
    // 0x1e56a8: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e56a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1e56ac:
    // 0x1e56ac: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1e56acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1e56b0:
    // 0x1e56b0: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e56b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1e56b4:
    // 0x1e56b4: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1e56b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_1e56b8:
    // 0x1e56b8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1e56b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_1e56bc:
    // 0x1e56bc: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1e56bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_1e56c0:
    // 0x1e56c0: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x1e56c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e56c4:
    // 0x1e56c4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e56c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e56c8:
    // 0x1e56c8: 0x2442dfb0  addiu       $v0, $v0, -0x2050
    ctx->pc = 0x1e56c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959024));
label_1e56cc:
    // 0x1e56cc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e56ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e56d0:
    // 0x1e56d0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1e56d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e56d4:
    // 0x1e56d4: 0x27a80078  addiu       $t0, $sp, 0x78
    ctx->pc = 0x1e56d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_1e56d8:
    // 0x1e56d8: 0xafa5006c  sw          $a1, 0x6C($sp)
    ctx->pc = 0x1e56d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 5));
label_1e56dc:
    // 0x1e56dc: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1e56dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1e56e0:
    // 0x1e56e0: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x1e56e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
label_1e56e4:
    // 0x1e56e4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1e56e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1e56e8:
    // 0x1e56e8: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1e56e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1e56ec:
    // 0x1e56ec: 0xafa30064  sw          $v1, 0x64($sp)
    ctx->pc = 0x1e56ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
label_1e56f0:
    // 0x1e56f0: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x1e56f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_1e56f4:
    // 0x1e56f4: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x1e56f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_1e56f8:
    // 0x1e56f8: 0xa3a0007c  sb          $zero, 0x7C($sp)
    ctx->pc = 0x1e56f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 124), (uint8_t)GPR_U32(ctx, 0));
label_1e56fc:
    // 0x1e56fc: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x1e56fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_1e5700:
    // 0x1e5700: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e5700u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e5704:
    // 0x1e5704: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e5704u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e5708:
    // 0x1e5708: 0x320f809  jalr        $t9
label_1e570c:
    if (ctx->pc == 0x1E570Cu) {
        ctx->pc = 0x1E570Cu;
            // 0x1e570c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1E5710u;
        goto label_1e5710;
    }
    ctx->pc = 0x1E5708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E5710u);
        ctx->pc = 0x1E570Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5708u;
            // 0x1e570c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E5710u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E5710u; }
            if (ctx->pc != 0x1E5710u) { return; }
        }
        }
    }
    ctx->pc = 0x1E5710u;
label_1e5710:
    // 0x1e5710: 0x83a3007c  lb          $v1, 0x7C($sp)
    ctx->pc = 0x1e5710u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 124)));
label_1e5714:
    // 0x1e5714: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
label_1e5718:
    if (ctx->pc == 0x1E5718u) {
        ctx->pc = 0x1E571Cu;
        goto label_1e571c;
    }
    ctx->pc = 0x1E5714u;
    {
        const bool branch_taken_0x1e5714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5714) {
            ctx->pc = 0x1E580Cu;
            goto label_1e580c;
        }
    }
    ctx->pc = 0x1E571Cu;
label_1e571c:
    // 0x1e571c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e571cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e5720:
    // 0x1e5720: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1e5720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1e5724:
    // 0x1e5724: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x1e5724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_1e5728:
    // 0x1e5728: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e5728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e572c:
    // 0x1e572c: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1e572cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1e5730:
    // 0x1e5730: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1e5730u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e5734:
    // 0x1e5734: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1e5738:
    if (ctx->pc == 0x1E5738u) {
        ctx->pc = 0x1E5738u;
            // 0x1e5738: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x1E573Cu;
        goto label_1e573c;
    }
    ctx->pc = 0x1E5734u;
    {
        const bool branch_taken_0x1e5734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5734u;
            // 0x1e5738: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5734) {
            ctx->pc = 0x1E5764u;
            goto label_1e5764;
        }
    }
    ctx->pc = 0x1E573Cu;
label_1e573c:
    // 0x1e573c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1e573cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1e5740:
    // 0x1e5740: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1e5740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1e5744:
    // 0x1e5744: 0x2442a960  addiu       $v0, $v0, -0x56A0
    ctx->pc = 0x1e5744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945120));
label_1e5748:
    // 0x1e5748: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e5748u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1e574c:
    // 0x1e574c: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e574cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1e5750:
    // 0x1e5750: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1e5750u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1e5754:
    // 0x1e5754: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e5754u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_1e5758:
    // 0x1e5758: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1e5758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1e575c:
    // 0x1e575c: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1e575cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_1e5760:
    // 0x1e5760: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1e5760u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1e5764:
    // 0x1e5764: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1e5764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_1e5768:
    // 0x1e5768: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1e5768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1e576c:
    // 0x1e576c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1e576cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1e5770:
    // 0x1e5770: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x1e5770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_1e5774:
    // 0x1e5774: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x1e5774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
label_1e5778:
    // 0x1e5778: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x1e5778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_1e577c:
    // 0x1e577c: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
label_1e5780:
    if (ctx->pc == 0x1E5780u) {
        ctx->pc = 0x1E5780u;
            // 0x1e5780: 0x8e840010  lw          $a0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->pc = 0x1E5784u;
        goto label_1e5784;
    }
    ctx->pc = 0x1E577Cu;
    {
        const bool branch_taken_0x1e577c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e577c) {
            ctx->pc = 0x1E5780u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E577Cu;
            // 0x1e5780: 0x8e840010  lw          $a0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E57F0u;
            goto label_1e57f0;
        }
    }
    ctx->pc = 0x1E5784u;
label_1e5784:
    // 0x1e5784: 0x8c69000c  lw          $t1, 0xC($v1)
    ctx->pc = 0x1e5784u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1e5788:
    // 0x1e5788: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1e5788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1e578c:
    // 0x1e578c: 0x82420010  lb          $v0, 0x10($s2)
    ctx->pc = 0x1e578cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
label_1e5790:
    // 0x1e5790: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e5790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e5794:
    // 0x1e5794: 0x8e870008  lw          $a3, 0x8($s4)
    ctx->pc = 0x1e5794u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1e5798:
    // 0x1e5798: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1e5798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e579c:
    // 0x1e579c: 0x8e4a0000  lw          $t2, 0x0($s2)
    ctx->pc = 0x1e579cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e57a0:
    // 0x1e57a0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e57a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e57a4:
    // 0x1e57a4: 0x8c68000c  lw          $t0, 0xC($v1)
    ctx->pc = 0x1e57a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1e57a8:
    // 0x1e57a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1e57ac:
    if (ctx->pc == 0x1E57ACu) {
        ctx->pc = 0x1E57ACu;
            // 0x1e57ac: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E57B0u;
        goto label_1e57b0;
    }
    ctx->pc = 0x1E57A8u;
    {
        const bool branch_taken_0x1e57a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E57ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E57A8u;
            // 0x1e57ac: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e57a8) {
            ctx->pc = 0x1E57B8u;
            goto label_1e57b8;
        }
    }
    ctx->pc = 0x1E57B0u;
label_1e57b0:
    // 0x1e57b0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e57b4:
    if (ctx->pc == 0x1E57B4u) {
        ctx->pc = 0x1E57B4u;
            // 0x1e57b4: 0x254305a0  addiu       $v1, $t2, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 1440));
        ctx->pc = 0x1E57B8u;
        goto label_1e57b8;
    }
    ctx->pc = 0x1E57B0u;
    {
        const bool branch_taken_0x1e57b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E57B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E57B0u;
            // 0x1e57b4: 0x254305a0  addiu       $v1, $t2, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 1440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e57b0) {
            ctx->pc = 0x1E57BCu;
            goto label_1e57bc;
        }
    }
    ctx->pc = 0x1E57B8u;
label_1e57b8:
    // 0x1e57b8: 0x254301a0  addiu       $v1, $t2, 0x1A0
    ctx->pc = 0x1e57b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 416));
label_1e57bc:
    // 0x1e57bc: 0x91140  sll         $v0, $t1, 5
    ctx->pc = 0x1e57bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
label_1e57c0:
    // 0x1e57c0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e57c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e57c4:
    // 0x1e57c4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1e57c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1e57c8:
    // 0x1e57c8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1e57c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1e57cc:
    // 0x1e57cc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1e57ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e57d0:
    // 0x1e57d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e57d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e57d4:
    // 0x1e57d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e57d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e57d8:
    // 0x1e57d8: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1e57d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_1e57dc:
    // 0x1e57dc: 0x8c4209a0  lw          $v0, 0x9A0($v0)
    ctx->pc = 0x1e57dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2464)));
label_1e57e0:
    // 0x1e57e0: 0x40f809  jalr        $v0
label_1e57e4:
    if (ctx->pc == 0x1E57E4u) {
        ctx->pc = 0x1E57E8u;
        goto label_1e57e8;
    }
    ctx->pc = 0x1E57E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E57E8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E57E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E57E8u; }
            if (ctx->pc != 0x1E57E8u) { return; }
        }
        }
    }
    ctx->pc = 0x1E57E8u;
label_1e57e8:
    // 0x1e57e8: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x1e57e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
label_1e57ec:
    // 0x1e57ec: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x1e57ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_1e57f0:
    // 0x1e57f0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e57f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e57f4:
    // 0x1e57f4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1e57f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e57f8:
    // 0x1e57f8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1e57f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e57fc:
    // 0x1e57fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e57fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e5800:
    // 0x1e5800: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1e5800u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1e5804:
    // 0x1e5804: 0x320f809  jalr        $t9
label_1e5808:
    if (ctx->pc == 0x1E5808u) {
        ctx->pc = 0x1E5808u;
            // 0x1e5808: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1E580Cu;
        goto label_1e580c;
    }
    ctx->pc = 0x1E5804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E580Cu);
        ctx->pc = 0x1E5808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5804u;
            // 0x1e5808: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E580Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E580Cu; }
            if (ctx->pc != 0x1E580Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E580Cu;
label_1e580c:
    // 0x1e580c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e580cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e5810:
    // 0x1e5810: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1e5810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1e5814:
    // 0x1e5814: 0x2463d4f0  addiu       $v1, $v1, -0x2B10
    ctx->pc = 0x1e5814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956272));
label_1e5818:
    // 0x1e5818: 0xafa30078  sw          $v1, 0x78($sp)
    ctx->pc = 0x1e5818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
label_1e581c:
    // 0x1e581c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1e581cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1e5820:
    // 0x1e5820: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1e5820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1e5824:
    // 0x1e5824: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1e5824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1e5828:
    // 0x1e5828: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1e5828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1e582c:
    // 0x1e582c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1e582cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e5830:
    // 0x1e5830: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1e5834:
    if (ctx->pc == 0x1E5834u) {
        ctx->pc = 0x1E5834u;
            // 0x1e5834: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1E5838u;
        goto label_1e5838;
    }
    ctx->pc = 0x1E5830u;
    {
        const bool branch_taken_0x1e5830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5830u;
            // 0x1e5834: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5830) {
            ctx->pc = 0x1E5860u;
            goto label_1e5860;
        }
    }
    ctx->pc = 0x1E5838u;
label_1e5838:
    // 0x1e5838: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1e5838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1e583c:
    // 0x1e583c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1e583cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1e5840:
    // 0x1e5840: 0x2463a968  addiu       $v1, $v1, -0x5698
    ctx->pc = 0x1e5840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945128));
label_1e5844:
    // 0x1e5844: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1e5844u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1e5848:
    // 0x1e5848: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e5848u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1e584c:
    // 0x1e584c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1e584cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1e5850:
    // 0x1e5850: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e5850u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1e5854:
    // 0x1e5854: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1e5854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1e5858:
    // 0x1e5858: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1e5858u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1e585c:
    // 0x1e585c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1e585cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1e5860:
    // 0x1e5860: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e5860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1e5864:
    // 0x1e5864: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e5864u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e5868:
    // 0x1e5868: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e5868u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e586c:
    // 0x1e586c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e586cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e5870:
    // 0x1e5870: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e5870u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e5874:
    // 0x1e5874: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e5874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e5878:
    // 0x1e5878: 0x3e00008  jr          $ra
label_1e587c:
    if (ctx->pc == 0x1E587Cu) {
        ctx->pc = 0x1E587Cu;
            // 0x1e587c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1E5880u;
        goto label_fallthrough_0x1e5878;
    }
    ctx->pc = 0x1E5878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E587Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5878u;
            // 0x1e587c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e5878:
    ctx->pc = 0x1E5880u;
}
