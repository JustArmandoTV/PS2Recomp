#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F58C0
// Address: 0x1f58c0 - 0x1f5a50
void sub_001F58C0_0x1f58c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F58C0_0x1f58c0");
#endif

    switch (ctx->pc) {
        case 0x1f58c0u: goto label_1f58c0;
        case 0x1f58c4u: goto label_1f58c4;
        case 0x1f58c8u: goto label_1f58c8;
        case 0x1f58ccu: goto label_1f58cc;
        case 0x1f58d0u: goto label_1f58d0;
        case 0x1f58d4u: goto label_1f58d4;
        case 0x1f58d8u: goto label_1f58d8;
        case 0x1f58dcu: goto label_1f58dc;
        case 0x1f58e0u: goto label_1f58e0;
        case 0x1f58e4u: goto label_1f58e4;
        case 0x1f58e8u: goto label_1f58e8;
        case 0x1f58ecu: goto label_1f58ec;
        case 0x1f58f0u: goto label_1f58f0;
        case 0x1f58f4u: goto label_1f58f4;
        case 0x1f58f8u: goto label_1f58f8;
        case 0x1f58fcu: goto label_1f58fc;
        case 0x1f5900u: goto label_1f5900;
        case 0x1f5904u: goto label_1f5904;
        case 0x1f5908u: goto label_1f5908;
        case 0x1f590cu: goto label_1f590c;
        case 0x1f5910u: goto label_1f5910;
        case 0x1f5914u: goto label_1f5914;
        case 0x1f5918u: goto label_1f5918;
        case 0x1f591cu: goto label_1f591c;
        case 0x1f5920u: goto label_1f5920;
        case 0x1f5924u: goto label_1f5924;
        case 0x1f5928u: goto label_1f5928;
        case 0x1f592cu: goto label_1f592c;
        case 0x1f5930u: goto label_1f5930;
        case 0x1f5934u: goto label_1f5934;
        case 0x1f5938u: goto label_1f5938;
        case 0x1f593cu: goto label_1f593c;
        case 0x1f5940u: goto label_1f5940;
        case 0x1f5944u: goto label_1f5944;
        case 0x1f5948u: goto label_1f5948;
        case 0x1f594cu: goto label_1f594c;
        case 0x1f5950u: goto label_1f5950;
        case 0x1f5954u: goto label_1f5954;
        case 0x1f5958u: goto label_1f5958;
        case 0x1f595cu: goto label_1f595c;
        case 0x1f5960u: goto label_1f5960;
        case 0x1f5964u: goto label_1f5964;
        case 0x1f5968u: goto label_1f5968;
        case 0x1f596cu: goto label_1f596c;
        case 0x1f5970u: goto label_1f5970;
        case 0x1f5974u: goto label_1f5974;
        case 0x1f5978u: goto label_1f5978;
        case 0x1f597cu: goto label_1f597c;
        case 0x1f5980u: goto label_1f5980;
        case 0x1f5984u: goto label_1f5984;
        case 0x1f5988u: goto label_1f5988;
        case 0x1f598cu: goto label_1f598c;
        case 0x1f5990u: goto label_1f5990;
        case 0x1f5994u: goto label_1f5994;
        case 0x1f5998u: goto label_1f5998;
        case 0x1f599cu: goto label_1f599c;
        case 0x1f59a0u: goto label_1f59a0;
        case 0x1f59a4u: goto label_1f59a4;
        case 0x1f59a8u: goto label_1f59a8;
        case 0x1f59acu: goto label_1f59ac;
        case 0x1f59b0u: goto label_1f59b0;
        case 0x1f59b4u: goto label_1f59b4;
        case 0x1f59b8u: goto label_1f59b8;
        case 0x1f59bcu: goto label_1f59bc;
        case 0x1f59c0u: goto label_1f59c0;
        case 0x1f59c4u: goto label_1f59c4;
        case 0x1f59c8u: goto label_1f59c8;
        case 0x1f59ccu: goto label_1f59cc;
        case 0x1f59d0u: goto label_1f59d0;
        case 0x1f59d4u: goto label_1f59d4;
        case 0x1f59d8u: goto label_1f59d8;
        case 0x1f59dcu: goto label_1f59dc;
        case 0x1f59e0u: goto label_1f59e0;
        case 0x1f59e4u: goto label_1f59e4;
        case 0x1f59e8u: goto label_1f59e8;
        case 0x1f59ecu: goto label_1f59ec;
        case 0x1f59f0u: goto label_1f59f0;
        case 0x1f59f4u: goto label_1f59f4;
        case 0x1f59f8u: goto label_1f59f8;
        case 0x1f59fcu: goto label_1f59fc;
        case 0x1f5a00u: goto label_1f5a00;
        case 0x1f5a04u: goto label_1f5a04;
        case 0x1f5a08u: goto label_1f5a08;
        case 0x1f5a0cu: goto label_1f5a0c;
        case 0x1f5a10u: goto label_1f5a10;
        case 0x1f5a14u: goto label_1f5a14;
        case 0x1f5a18u: goto label_1f5a18;
        case 0x1f5a1cu: goto label_1f5a1c;
        case 0x1f5a20u: goto label_1f5a20;
        case 0x1f5a24u: goto label_1f5a24;
        case 0x1f5a28u: goto label_1f5a28;
        case 0x1f5a2cu: goto label_1f5a2c;
        case 0x1f5a30u: goto label_1f5a30;
        case 0x1f5a34u: goto label_1f5a34;
        case 0x1f5a38u: goto label_1f5a38;
        case 0x1f5a3cu: goto label_1f5a3c;
        case 0x1f5a40u: goto label_1f5a40;
        case 0x1f5a44u: goto label_1f5a44;
        case 0x1f5a48u: goto label_1f5a48;
        case 0x1f5a4cu: goto label_1f5a4c;
        default: break;
    }

    ctx->pc = 0x1f58c0u;

label_1f58c0:
    // 0x1f58c0: 0x27bdfd60  addiu       $sp, $sp, -0x2A0
    ctx->pc = 0x1f58c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966624));
label_1f58c4:
    // 0x1f58c4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1f58c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1f58c8:
    // 0x1f58c8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1f58c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1f58cc:
    // 0x1f58cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f58ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f58d0:
    // 0x1f58d0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1f58d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1f58d4:
    // 0x1f58d4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1f58d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1f58d8:
    // 0x1f58d8: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x1f58d8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1f58dc:
    // 0x1f58dc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f58dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1f58e0:
    // 0x1f58e0: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x1f58e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1f58e4:
    // 0x1f58e4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f58e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f58e8:
    // 0x1f58e8: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1f58e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f58ec:
    // 0x1f58ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f58ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f58f0:
    // 0x1f58f0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1f58f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f58f4:
    // 0x1f58f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f58f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f58f8:
    // 0x1f58f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f58f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f58fc:
    // 0x1f58fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f58fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f5900:
    // 0x1f5900: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f5900u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f5904:
    // 0x1f5904: 0x8c63ea64  lw          $v1, -0x159C($v1)
    ctx->pc = 0x1f5904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1f5908:
    // 0x1f5908: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1f5908u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1f590c:
    // 0x1f590c: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1f590cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1f5910:
    // 0x1f5910: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f5910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f5914:
    // 0x1f5914: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1f5914u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f5918:
    // 0x1f5918: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1f591c:
    if (ctx->pc == 0x1F591Cu) {
        ctx->pc = 0x1F591Cu;
            // 0x1f591c: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x1F5920u;
        goto label_1f5920;
    }
    ctx->pc = 0x1F5918u;
    {
        const bool branch_taken_0x1f5918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F591Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5918u;
            // 0x1f591c: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5918) {
            ctx->pc = 0x1F5948u;
            goto label_1f5948;
        }
    }
    ctx->pc = 0x1F5920u;
label_1f5920:
    // 0x1f5920: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1f5920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1f5924:
    // 0x1f5924: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1f5924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1f5928:
    // 0x1f5928: 0x2442af70  addiu       $v0, $v0, -0x5090
    ctx->pc = 0x1f5928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946672));
label_1f592c:
    // 0x1f592c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f592cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1f5930:
    // 0x1f5930: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f5930u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1f5934:
    // 0x1f5934: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1f5934u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1f5938:
    // 0x1f5938: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f5938u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_1f593c:
    // 0x1f593c: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1f593cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1f5940:
    // 0x1f5940: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1f5940u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_1f5944:
    // 0x1f5944: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1f5944u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1f5948:
    // 0x1f5948: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1f5948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f594c:
    // 0x1f594c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f594cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f5950:
    // 0x1f5950: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1f5950u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1f5954:
    // 0x1f5954: 0x320f809  jalr        $t9
label_1f5958:
    if (ctx->pc == 0x1F5958u) {
        ctx->pc = 0x1F595Cu;
        goto label_1f595c;
    }
    ctx->pc = 0x1F5954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F595Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F595Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F595Cu; }
            if (ctx->pc != 0x1F595Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1F595Cu;
label_1f595c:
    // 0x1f595c: 0xafb0029c  sw          $s0, 0x29C($sp)
    ctx->pc = 0x1f595cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 16));
label_1f5960:
    // 0x1f5960: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1f5960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f5964:
    // 0x1f5964: 0xafa30298  sw          $v1, 0x298($sp)
    ctx->pc = 0x1f5964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 3));
label_1f5968:
    // 0x1f5968: 0x8e32000c  lw          $s2, 0xC($s1)
    ctx->pc = 0x1f5968u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1f596c:
    // 0x1f596c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1f596cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1f5970:
    // 0x1f5970: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x1f5970u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1f5974:
    // 0x1f5974: 0x6200016  bltz        $s1, . + 4 + (0x16 << 2)
label_1f5978:
    if (ctx->pc == 0x1F5978u) {
        ctx->pc = 0x1F5978u;
            // 0x1f5978: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F597Cu;
        goto label_1f597c;
    }
    ctx->pc = 0x1F5974u;
    {
        const bool branch_taken_0x1f5974 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1F5978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5974u;
            // 0x1f5978: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5974) {
            ctx->pc = 0x1F59D0u;
            goto label_1f59d0;
        }
    }
    ctx->pc = 0x1F597Cu;
label_1f597c:
    // 0x1f597c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1f597cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1f5980:
    // 0x1f5980: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f5980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f5984:
    // 0x1f5984: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1f5984u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f5988:
    // 0x1f5988: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1f5988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1f598c:
    // 0x1f598c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1f598cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1f5990:
    // 0x1f5990: 0x320f809  jalr        $t9
label_1f5994:
    if (ctx->pc == 0x1F5994u) {
        ctx->pc = 0x1F5994u;
            // 0x1f5994: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F5998u;
        goto label_1f5998;
    }
    ctx->pc = 0x1F5990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F5998u);
        ctx->pc = 0x1F5994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5990u;
            // 0x1f5994: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F5998u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F5998u; }
            if (ctx->pc != 0x1F5998u) { return; }
        }
        }
    }
    ctx->pc = 0x1F5998u;
label_1f5998:
    // 0x1f5998: 0xafb00294  sw          $s0, 0x294($sp)
    ctx->pc = 0x1f5998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 16));
label_1f599c:
    // 0x1f599c: 0x27a50290  addiu       $a1, $sp, 0x290
    ctx->pc = 0x1f599cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_1f59a0:
    // 0x1f59a0: 0xafa20290  sw          $v0, 0x290($sp)
    ctx->pc = 0x1f59a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 2));
label_1f59a4:
    // 0x1f59a4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1f59a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f59a8:
    // 0x1f59a8: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1f59a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1f59ac:
    // 0x1f59ac: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1f59acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f59b0:
    // 0x1f59b0: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x1f59b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f59b4:
    // 0x1f59b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f59b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f59b8:
    // 0x1f59b8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1f59b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1f59bc:
    // 0x1f59bc: 0x320f809  jalr        $t9
label_1f59c0:
    if (ctx->pc == 0x1F59C0u) {
        ctx->pc = 0x1F59C0u;
            // 0x1f59c0: 0x2e0482d  daddu       $t1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F59C4u;
        goto label_1f59c4;
    }
    ctx->pc = 0x1F59BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F59C4u);
        ctx->pc = 0x1F59C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F59BCu;
            // 0x1f59c0: 0x2e0482d  daddu       $t1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F59C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F59C4u; }
            if (ctx->pc != 0x1F59C4u) { return; }
        }
        }
    }
    ctx->pc = 0x1F59C4u;
label_1f59c4:
    // 0x1f59c4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1f59c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1f59c8:
    // 0x1f59c8: 0x621ffec  bgez        $s1, . + 4 + (-0x14 << 2)
label_1f59cc:
    if (ctx->pc == 0x1F59CCu) {
        ctx->pc = 0x1F59CCu;
            // 0x1f59cc: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->pc = 0x1F59D0u;
        goto label_1f59d0;
    }
    ctx->pc = 0x1F59C8u;
    {
        const bool branch_taken_0x1f59c8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1F59CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F59C8u;
            // 0x1f59cc: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f59c8) {
            ctx->pc = 0x1F597Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f597c;
        }
    }
    ctx->pc = 0x1F59D0u;
label_1f59d0:
    // 0x1f59d0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1f59d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1f59d4:
    // 0x1f59d4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1f59d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1f59d8:
    // 0x1f59d8: 0x8c84ea64  lw          $a0, -0x159C($a0)
    ctx->pc = 0x1f59d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961764)));
label_1f59dc:
    // 0x1f59dc: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1f59dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1f59e0:
    // 0x1f59e0: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1f59e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1f59e4:
    // 0x1f59e4: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1f59e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1f59e8:
    // 0x1f59e8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1f59ec:
    if (ctx->pc == 0x1F59ECu) {
        ctx->pc = 0x1F59ECu;
            // 0x1f59ec: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1F59F0u;
        goto label_1f59f0;
    }
    ctx->pc = 0x1F59E8u;
    {
        const bool branch_taken_0x1f59e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F59ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F59E8u;
            // 0x1f59ec: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f59e8) {
            ctx->pc = 0x1F5A18u;
            goto label_1f5a18;
        }
    }
    ctx->pc = 0x1F59F0u;
label_1f59f0:
    // 0x1f59f0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1f59f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1f59f4:
    // 0x1f59f4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1f59f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1f59f8:
    // 0x1f59f8: 0x2463af88  addiu       $v1, $v1, -0x5078
    ctx->pc = 0x1f59f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946696));
label_1f59fc:
    // 0x1f59fc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1f59fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1f5a00:
    // 0x1f5a00: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f5a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1f5a04:
    // 0x1f5a04: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1f5a04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1f5a08:
    // 0x1f5a08: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f5a08u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1f5a0c:
    // 0x1f5a0c: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1f5a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1f5a10:
    // 0x1f5a10: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1f5a10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1f5a14:
    // 0x1f5a14: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1f5a14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1f5a18:
    // 0x1f5a18: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1f5a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1f5a1c:
    // 0x1f5a1c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1f5a1cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1f5a20:
    // 0x1f5a20: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1f5a20u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f5a24:
    // 0x1f5a24: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f5a24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f5a28:
    // 0x1f5a28: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f5a28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f5a2c:
    // 0x1f5a2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f5a2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f5a30:
    // 0x1f5a30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f5a30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f5a34:
    // 0x1f5a34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f5a34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5a38:
    // 0x1f5a38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f5a38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f5a3c:
    // 0x1f5a3c: 0x3e00008  jr          $ra
label_1f5a40:
    if (ctx->pc == 0x1F5A40u) {
        ctx->pc = 0x1F5A40u;
            // 0x1f5a40: 0x27bd02a0  addiu       $sp, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->pc = 0x1F5A44u;
        goto label_1f5a44;
    }
    ctx->pc = 0x1F5A3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5A3Cu;
            // 0x1f5a40: 0x27bd02a0  addiu       $sp, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F5A44u;
label_1f5a44:
    // 0x1f5a44: 0x0  nop
    ctx->pc = 0x1f5a44u;
    // NOP
label_1f5a48:
    // 0x1f5a48: 0x0  nop
    ctx->pc = 0x1f5a48u;
    // NOP
label_1f5a4c:
    // 0x1f5a4c: 0x0  nop
    ctx->pc = 0x1f5a4cu;
    // NOP
}
