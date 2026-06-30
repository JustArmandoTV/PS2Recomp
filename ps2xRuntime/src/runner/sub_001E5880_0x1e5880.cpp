#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E5880
// Address: 0x1e5880 - 0x1e5a90
void sub_001E5880_0x1e5880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5880_0x1e5880");
#endif

    switch (ctx->pc) {
        case 0x1e5880u: goto label_1e5880;
        case 0x1e5884u: goto label_1e5884;
        case 0x1e5888u: goto label_1e5888;
        case 0x1e588cu: goto label_1e588c;
        case 0x1e5890u: goto label_1e5890;
        case 0x1e5894u: goto label_1e5894;
        case 0x1e5898u: goto label_1e5898;
        case 0x1e589cu: goto label_1e589c;
        case 0x1e58a0u: goto label_1e58a0;
        case 0x1e58a4u: goto label_1e58a4;
        case 0x1e58a8u: goto label_1e58a8;
        case 0x1e58acu: goto label_1e58ac;
        case 0x1e58b0u: goto label_1e58b0;
        case 0x1e58b4u: goto label_1e58b4;
        case 0x1e58b8u: goto label_1e58b8;
        case 0x1e58bcu: goto label_1e58bc;
        case 0x1e58c0u: goto label_1e58c0;
        case 0x1e58c4u: goto label_1e58c4;
        case 0x1e58c8u: goto label_1e58c8;
        case 0x1e58ccu: goto label_1e58cc;
        case 0x1e58d0u: goto label_1e58d0;
        case 0x1e58d4u: goto label_1e58d4;
        case 0x1e58d8u: goto label_1e58d8;
        case 0x1e58dcu: goto label_1e58dc;
        case 0x1e58e0u: goto label_1e58e0;
        case 0x1e58e4u: goto label_1e58e4;
        case 0x1e58e8u: goto label_1e58e8;
        case 0x1e58ecu: goto label_1e58ec;
        case 0x1e58f0u: goto label_1e58f0;
        case 0x1e58f4u: goto label_1e58f4;
        case 0x1e58f8u: goto label_1e58f8;
        case 0x1e58fcu: goto label_1e58fc;
        case 0x1e5900u: goto label_1e5900;
        case 0x1e5904u: goto label_1e5904;
        case 0x1e5908u: goto label_1e5908;
        case 0x1e590cu: goto label_1e590c;
        case 0x1e5910u: goto label_1e5910;
        case 0x1e5914u: goto label_1e5914;
        case 0x1e5918u: goto label_1e5918;
        case 0x1e591cu: goto label_1e591c;
        case 0x1e5920u: goto label_1e5920;
        case 0x1e5924u: goto label_1e5924;
        case 0x1e5928u: goto label_1e5928;
        case 0x1e592cu: goto label_1e592c;
        case 0x1e5930u: goto label_1e5930;
        case 0x1e5934u: goto label_1e5934;
        case 0x1e5938u: goto label_1e5938;
        case 0x1e593cu: goto label_1e593c;
        case 0x1e5940u: goto label_1e5940;
        case 0x1e5944u: goto label_1e5944;
        case 0x1e5948u: goto label_1e5948;
        case 0x1e594cu: goto label_1e594c;
        case 0x1e5950u: goto label_1e5950;
        case 0x1e5954u: goto label_1e5954;
        case 0x1e5958u: goto label_1e5958;
        case 0x1e595cu: goto label_1e595c;
        case 0x1e5960u: goto label_1e5960;
        case 0x1e5964u: goto label_1e5964;
        case 0x1e5968u: goto label_1e5968;
        case 0x1e596cu: goto label_1e596c;
        case 0x1e5970u: goto label_1e5970;
        case 0x1e5974u: goto label_1e5974;
        case 0x1e5978u: goto label_1e5978;
        case 0x1e597cu: goto label_1e597c;
        case 0x1e5980u: goto label_1e5980;
        case 0x1e5984u: goto label_1e5984;
        case 0x1e5988u: goto label_1e5988;
        case 0x1e598cu: goto label_1e598c;
        case 0x1e5990u: goto label_1e5990;
        case 0x1e5994u: goto label_1e5994;
        case 0x1e5998u: goto label_1e5998;
        case 0x1e599cu: goto label_1e599c;
        case 0x1e59a0u: goto label_1e59a0;
        case 0x1e59a4u: goto label_1e59a4;
        case 0x1e59a8u: goto label_1e59a8;
        case 0x1e59acu: goto label_1e59ac;
        case 0x1e59b0u: goto label_1e59b0;
        case 0x1e59b4u: goto label_1e59b4;
        case 0x1e59b8u: goto label_1e59b8;
        case 0x1e59bcu: goto label_1e59bc;
        case 0x1e59c0u: goto label_1e59c0;
        case 0x1e59c4u: goto label_1e59c4;
        case 0x1e59c8u: goto label_1e59c8;
        case 0x1e59ccu: goto label_1e59cc;
        case 0x1e59d0u: goto label_1e59d0;
        case 0x1e59d4u: goto label_1e59d4;
        case 0x1e59d8u: goto label_1e59d8;
        case 0x1e59dcu: goto label_1e59dc;
        case 0x1e59e0u: goto label_1e59e0;
        case 0x1e59e4u: goto label_1e59e4;
        case 0x1e59e8u: goto label_1e59e8;
        case 0x1e59ecu: goto label_1e59ec;
        case 0x1e59f0u: goto label_1e59f0;
        case 0x1e59f4u: goto label_1e59f4;
        case 0x1e59f8u: goto label_1e59f8;
        case 0x1e59fcu: goto label_1e59fc;
        case 0x1e5a00u: goto label_1e5a00;
        case 0x1e5a04u: goto label_1e5a04;
        case 0x1e5a08u: goto label_1e5a08;
        case 0x1e5a0cu: goto label_1e5a0c;
        case 0x1e5a10u: goto label_1e5a10;
        case 0x1e5a14u: goto label_1e5a14;
        case 0x1e5a18u: goto label_1e5a18;
        case 0x1e5a1cu: goto label_1e5a1c;
        case 0x1e5a20u: goto label_1e5a20;
        case 0x1e5a24u: goto label_1e5a24;
        case 0x1e5a28u: goto label_1e5a28;
        case 0x1e5a2cu: goto label_1e5a2c;
        case 0x1e5a30u: goto label_1e5a30;
        case 0x1e5a34u: goto label_1e5a34;
        case 0x1e5a38u: goto label_1e5a38;
        case 0x1e5a3cu: goto label_1e5a3c;
        case 0x1e5a40u: goto label_1e5a40;
        case 0x1e5a44u: goto label_1e5a44;
        case 0x1e5a48u: goto label_1e5a48;
        case 0x1e5a4cu: goto label_1e5a4c;
        case 0x1e5a50u: goto label_1e5a50;
        case 0x1e5a54u: goto label_1e5a54;
        case 0x1e5a58u: goto label_1e5a58;
        case 0x1e5a5cu: goto label_1e5a5c;
        case 0x1e5a60u: goto label_1e5a60;
        case 0x1e5a64u: goto label_1e5a64;
        case 0x1e5a68u: goto label_1e5a68;
        case 0x1e5a6cu: goto label_1e5a6c;
        case 0x1e5a70u: goto label_1e5a70;
        case 0x1e5a74u: goto label_1e5a74;
        case 0x1e5a78u: goto label_1e5a78;
        case 0x1e5a7cu: goto label_1e5a7c;
        case 0x1e5a80u: goto label_1e5a80;
        case 0x1e5a84u: goto label_1e5a84;
        case 0x1e5a88u: goto label_1e5a88;
        case 0x1e5a8cu: goto label_1e5a8c;
        default: break;
    }

    ctx->pc = 0x1e5880u;

label_1e5880:
    // 0x1e5880: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e5880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1e5884:
    // 0x1e5884: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e5884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e5888:
    // 0x1e5888: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e5888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1e588c:
    // 0x1e588c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e588cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e5890:
    // 0x1e5890: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e5890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e5894:
    // 0x1e5894: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1e5894u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e5898:
    // 0x1e5898: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e5898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e589c:
    // 0x1e589c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1e589cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e58a0:
    // 0x1e58a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e58a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e58a4:
    // 0x1e58a4: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x1e58a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_1e58a8:
    // 0x1e58a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e58a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e58ac:
    // 0x1e58ac: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1e58acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e58b0:
    // 0x1e58b0: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x1e58b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_1e58b4:
    // 0x1e58b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e58b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e58b8:
    // 0x1e58b8: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1e58b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1e58bc:
    // 0x1e58bc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1e58bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e58c0:
    // 0x1e58c0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1e58c4:
    if (ctx->pc == 0x1E58C4u) {
        ctx->pc = 0x1E58C4u;
            // 0x1e58c4: 0x24c6ea60  addiu       $a2, $a2, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
        ctx->pc = 0x1E58C8u;
        goto label_1e58c8;
    }
    ctx->pc = 0x1E58C0u;
    {
        const bool branch_taken_0x1e58c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E58C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E58C0u;
            // 0x1e58c4: 0x24c6ea60  addiu       $a2, $a2, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e58c0) {
            ctx->pc = 0x1E58FCu;
            goto label_1e58fc;
        }
    }
    ctx->pc = 0x1E58C8u;
label_1e58c8:
    // 0x1e58c8: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x1e58c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1e58cc:
    // 0x1e58cc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1e58ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1e58d0:
    // 0x1e58d0: 0x2463a940  addiu       $v1, $v1, -0x56C0
    ctx->pc = 0x1e58d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945088));
label_1e58d4:
    // 0x1e58d4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1e58d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1e58d8:
    // 0x1e58d8: 0x2442a950  addiu       $v0, $v0, -0x56B0
    ctx->pc = 0x1e58d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945104));
label_1e58dc:
    // 0x1e58dc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1e58dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_1e58e0:
    // 0x1e58e0: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x1e58e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_1e58e4:
    // 0x1e58e4: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e58e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1e58e8:
    // 0x1e58e8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1e58e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_1e58ec:
    // 0x1e58ec: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e58ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1e58f0:
    // 0x1e58f0: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x1e58f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_1e58f4:
    // 0x1e58f4: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1e58f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1e58f8:
    // 0x1e58f8: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1e58f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_1e58fc:
    // 0x1e58fc: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x1e58fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e5900:
    // 0x1e5900: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e5900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e5904:
    // 0x1e5904: 0x2442dfb0  addiu       $v0, $v0, -0x2050
    ctx->pc = 0x1e5904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959024));
label_1e5908:
    // 0x1e5908: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1e5908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e590c:
    // 0x1e590c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e590cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e5910:
    // 0x1e5910: 0x27a70078  addiu       $a3, $sp, 0x78
    ctx->pc = 0x1e5910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_1e5914:
    // 0x1e5914: 0xafa4006c  sw          $a0, 0x6C($sp)
    ctx->pc = 0x1e5914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 4));
label_1e5918:
    // 0x1e5918: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1e5918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1e591c:
    // 0x1e591c: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x1e591cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
label_1e5920:
    // 0x1e5920: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1e5920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1e5924:
    // 0x1e5924: 0x8e280010  lw          $t0, 0x10($s1)
    ctx->pc = 0x1e5924u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1e5928:
    // 0x1e5928: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1e5928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1e592c:
    // 0x1e592c: 0xafa30064  sw          $v1, 0x64($sp)
    ctx->pc = 0x1e592cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
label_1e5930:
    // 0x1e5930: 0xafa80060  sw          $t0, 0x60($sp)
    ctx->pc = 0x1e5930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 8));
label_1e5934:
    // 0x1e5934: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x1e5934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_1e5938:
    // 0x1e5938: 0x8e690000  lw          $t1, 0x0($s3)
    ctx->pc = 0x1e5938u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e593c:
    // 0x1e593c: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x1e593cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1e5940:
    // 0x1e5940: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1e5940u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1e5944:
    // 0x1e5944: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1e5944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1e5948:
    // 0x1e5948: 0x8d10000c  lw          $s0, 0xC($t0)
    ctx->pc = 0x1e5948u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_1e594c:
    // 0x1e594c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1e594cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1e5950:
    // 0x1e5950: 0x906801a0  lbu         $t0, 0x1A0($v1)
    ctx->pc = 0x1e5950u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 416)));
label_1e5954:
    // 0x1e5954: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1e5954u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1e5958:
    // 0x1e5958: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1e5958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1e595c:
    // 0x1e595c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e595cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e5960:
    // 0x1e5960: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1e5960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1e5964:
    // 0x1e5964: 0x8c6309a4  lw          $v1, 0x9A4($v1)
    ctx->pc = 0x1e5964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2468)));
label_1e5968:
    // 0x1e5968: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x1e5968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_1e596c:
    // 0x1e596c: 0x60f809  jalr        $v1
label_1e5970:
    if (ctx->pc == 0x1E5970u) {
        ctx->pc = 0x1E5970u;
            // 0x1e5970: 0xa3a0007c  sb          $zero, 0x7C($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 124), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1E5974u;
        goto label_1e5974;
    }
    ctx->pc = 0x1E596Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E5974u);
        ctx->pc = 0x1E5970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E596Cu;
            // 0x1e5970: 0xa3a0007c  sb          $zero, 0x7C($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 124), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E5974u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E5974u; }
            if (ctx->pc != 0x1E5974u) { return; }
        }
        }
    }
    ctx->pc = 0x1E5974u;
label_1e5974:
    // 0x1e5974: 0x83a3007c  lb          $v1, 0x7C($sp)
    ctx->pc = 0x1e5974u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 124)));
label_1e5978:
    // 0x1e5978: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_1e597c:
    if (ctx->pc == 0x1E597Cu) {
        ctx->pc = 0x1E5980u;
        goto label_1e5980;
    }
    ctx->pc = 0x1E5978u;
    {
        const bool branch_taken_0x1e5978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5978) {
            ctx->pc = 0x1E5A1Cu;
            goto label_1e5a1c;
        }
    }
    ctx->pc = 0x1E5980u;
label_1e5980:
    // 0x1e5980: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e5980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e5984:
    // 0x1e5984: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1e5984u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1e5988:
    // 0x1e5988: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x1e5988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_1e598c:
    // 0x1e598c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e598cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e5990:
    // 0x1e5990: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1e5990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1e5994:
    // 0x1e5994: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1e5994u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e5998:
    // 0x1e5998: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1e599c:
    if (ctx->pc == 0x1E599Cu) {
        ctx->pc = 0x1E599Cu;
            // 0x1e599c: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x1E59A0u;
        goto label_1e59a0;
    }
    ctx->pc = 0x1E5998u;
    {
        const bool branch_taken_0x1e5998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E599Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5998u;
            // 0x1e599c: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5998) {
            ctx->pc = 0x1E59C8u;
            goto label_1e59c8;
        }
    }
    ctx->pc = 0x1E59A0u;
label_1e59a0:
    // 0x1e59a0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1e59a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1e59a4:
    // 0x1e59a4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1e59a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1e59a8:
    // 0x1e59a8: 0x2442a960  addiu       $v0, $v0, -0x56A0
    ctx->pc = 0x1e59a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945120));
label_1e59ac:
    // 0x1e59ac: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e59acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1e59b0:
    // 0x1e59b0: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e59b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1e59b4:
    // 0x1e59b4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1e59b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1e59b8:
    // 0x1e59b8: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e59b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_1e59bc:
    // 0x1e59bc: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1e59bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1e59c0:
    // 0x1e59c0: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1e59c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_1e59c4:
    // 0x1e59c4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1e59c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1e59c8:
    // 0x1e59c8: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1e59c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_1e59cc:
    // 0x1e59cc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1e59ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e59d0:
    // 0x1e59d0: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x1e59d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1e59d4:
    // 0x1e59d4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1e59d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e59d8:
    // 0x1e59d8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1e59d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1e59dc:
    // 0x1e59dc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1e59dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1e59e0:
    // 0x1e59e0: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x1e59e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_1e59e4:
    // 0x1e59e4: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x1e59e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
label_1e59e8:
    // 0x1e59e8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1e59e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1e59ec:
    // 0x1e59ec: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x1e59ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e59f0:
    // 0x1e59f0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1e59f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1e59f4:
    // 0x1e59f4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1e59f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1e59f8:
    // 0x1e59f8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1e59f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1e59fc:
    // 0x1e59fc: 0x904301a0  lbu         $v1, 0x1A0($v0)
    ctx->pc = 0x1e59fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 416)));
label_1e5a00:
    // 0x1e5a00: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1e5a00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e5a04:
    // 0x1e5a04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e5a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e5a08:
    // 0x1e5a08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e5a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e5a0c:
    // 0x1e5a0c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1e5a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1e5a10:
    // 0x1e5a10: 0x8c4209a8  lw          $v0, 0x9A8($v0)
    ctx->pc = 0x1e5a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2472)));
label_1e5a14:
    // 0x1e5a14: 0x40f809  jalr        $v0
label_1e5a18:
    if (ctx->pc == 0x1E5A18u) {
        ctx->pc = 0x1E5A18u;
            // 0x1e5a18: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E5A1Cu;
        goto label_1e5a1c;
    }
    ctx->pc = 0x1E5A14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E5A1Cu);
        ctx->pc = 0x1E5A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5A14u;
            // 0x1e5a18: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E5A1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E5A1Cu; }
            if (ctx->pc != 0x1E5A1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E5A1Cu;
label_1e5a1c:
    // 0x1e5a1c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e5a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e5a20:
    // 0x1e5a20: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1e5a20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1e5a24:
    // 0x1e5a24: 0x2463d4f0  addiu       $v1, $v1, -0x2B10
    ctx->pc = 0x1e5a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956272));
label_1e5a28:
    // 0x1e5a28: 0xafa30078  sw          $v1, 0x78($sp)
    ctx->pc = 0x1e5a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
label_1e5a2c:
    // 0x1e5a2c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1e5a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1e5a30:
    // 0x1e5a30: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1e5a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1e5a34:
    // 0x1e5a34: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1e5a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1e5a38:
    // 0x1e5a38: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1e5a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1e5a3c:
    // 0x1e5a3c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1e5a3cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e5a40:
    // 0x1e5a40: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1e5a44:
    if (ctx->pc == 0x1E5A44u) {
        ctx->pc = 0x1E5A44u;
            // 0x1e5a44: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1E5A48u;
        goto label_1e5a48;
    }
    ctx->pc = 0x1E5A40u;
    {
        const bool branch_taken_0x1e5a40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5A40u;
            // 0x1e5a44: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5a40) {
            ctx->pc = 0x1E5A70u;
            goto label_1e5a70;
        }
    }
    ctx->pc = 0x1E5A48u;
label_1e5a48:
    // 0x1e5a48: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1e5a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1e5a4c:
    // 0x1e5a4c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1e5a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1e5a50:
    // 0x1e5a50: 0x2463a968  addiu       $v1, $v1, -0x5698
    ctx->pc = 0x1e5a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945128));
label_1e5a54:
    // 0x1e5a54: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1e5a54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1e5a58:
    // 0x1e5a58: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e5a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1e5a5c:
    // 0x1e5a5c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1e5a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1e5a60:
    // 0x1e5a60: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e5a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1e5a64:
    // 0x1e5a64: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1e5a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1e5a68:
    // 0x1e5a68: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1e5a68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1e5a6c:
    // 0x1e5a6c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1e5a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1e5a70:
    // 0x1e5a70: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e5a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1e5a74:
    // 0x1e5a74: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e5a74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e5a78:
    // 0x1e5a78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e5a78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e5a7c:
    // 0x1e5a7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e5a7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e5a80:
    // 0x1e5a80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e5a80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e5a84:
    // 0x1e5a84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e5a84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e5a88:
    // 0x1e5a88: 0x3e00008  jr          $ra
label_1e5a8c:
    if (ctx->pc == 0x1E5A8Cu) {
        ctx->pc = 0x1E5A8Cu;
            // 0x1e5a8c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1E5A90u;
        goto label_fallthrough_0x1e5a88;
    }
    ctx->pc = 0x1E5A88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5A88u;
            // 0x1e5a8c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e5a88:
    ctx->pc = 0x1E5A90u;
}
