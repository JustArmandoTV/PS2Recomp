#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F56C0
// Address: 0x1f56c0 - 0x1f58c0
void sub_001F56C0_0x1f56c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F56C0_0x1f56c0");
#endif

    switch (ctx->pc) {
        case 0x1f56c0u: goto label_1f56c0;
        case 0x1f56c4u: goto label_1f56c4;
        case 0x1f56c8u: goto label_1f56c8;
        case 0x1f56ccu: goto label_1f56cc;
        case 0x1f56d0u: goto label_1f56d0;
        case 0x1f56d4u: goto label_1f56d4;
        case 0x1f56d8u: goto label_1f56d8;
        case 0x1f56dcu: goto label_1f56dc;
        case 0x1f56e0u: goto label_1f56e0;
        case 0x1f56e4u: goto label_1f56e4;
        case 0x1f56e8u: goto label_1f56e8;
        case 0x1f56ecu: goto label_1f56ec;
        case 0x1f56f0u: goto label_1f56f0;
        case 0x1f56f4u: goto label_1f56f4;
        case 0x1f56f8u: goto label_1f56f8;
        case 0x1f56fcu: goto label_1f56fc;
        case 0x1f5700u: goto label_1f5700;
        case 0x1f5704u: goto label_1f5704;
        case 0x1f5708u: goto label_1f5708;
        case 0x1f570cu: goto label_1f570c;
        case 0x1f5710u: goto label_1f5710;
        case 0x1f5714u: goto label_1f5714;
        case 0x1f5718u: goto label_1f5718;
        case 0x1f571cu: goto label_1f571c;
        case 0x1f5720u: goto label_1f5720;
        case 0x1f5724u: goto label_1f5724;
        case 0x1f5728u: goto label_1f5728;
        case 0x1f572cu: goto label_1f572c;
        case 0x1f5730u: goto label_1f5730;
        case 0x1f5734u: goto label_1f5734;
        case 0x1f5738u: goto label_1f5738;
        case 0x1f573cu: goto label_1f573c;
        case 0x1f5740u: goto label_1f5740;
        case 0x1f5744u: goto label_1f5744;
        case 0x1f5748u: goto label_1f5748;
        case 0x1f574cu: goto label_1f574c;
        case 0x1f5750u: goto label_1f5750;
        case 0x1f5754u: goto label_1f5754;
        case 0x1f5758u: goto label_1f5758;
        case 0x1f575cu: goto label_1f575c;
        case 0x1f5760u: goto label_1f5760;
        case 0x1f5764u: goto label_1f5764;
        case 0x1f5768u: goto label_1f5768;
        case 0x1f576cu: goto label_1f576c;
        case 0x1f5770u: goto label_1f5770;
        case 0x1f5774u: goto label_1f5774;
        case 0x1f5778u: goto label_1f5778;
        case 0x1f577cu: goto label_1f577c;
        case 0x1f5780u: goto label_1f5780;
        case 0x1f5784u: goto label_1f5784;
        case 0x1f5788u: goto label_1f5788;
        case 0x1f578cu: goto label_1f578c;
        case 0x1f5790u: goto label_1f5790;
        case 0x1f5794u: goto label_1f5794;
        case 0x1f5798u: goto label_1f5798;
        case 0x1f579cu: goto label_1f579c;
        case 0x1f57a0u: goto label_1f57a0;
        case 0x1f57a4u: goto label_1f57a4;
        case 0x1f57a8u: goto label_1f57a8;
        case 0x1f57acu: goto label_1f57ac;
        case 0x1f57b0u: goto label_1f57b0;
        case 0x1f57b4u: goto label_1f57b4;
        case 0x1f57b8u: goto label_1f57b8;
        case 0x1f57bcu: goto label_1f57bc;
        case 0x1f57c0u: goto label_1f57c0;
        case 0x1f57c4u: goto label_1f57c4;
        case 0x1f57c8u: goto label_1f57c8;
        case 0x1f57ccu: goto label_1f57cc;
        case 0x1f57d0u: goto label_1f57d0;
        case 0x1f57d4u: goto label_1f57d4;
        case 0x1f57d8u: goto label_1f57d8;
        case 0x1f57dcu: goto label_1f57dc;
        case 0x1f57e0u: goto label_1f57e0;
        case 0x1f57e4u: goto label_1f57e4;
        case 0x1f57e8u: goto label_1f57e8;
        case 0x1f57ecu: goto label_1f57ec;
        case 0x1f57f0u: goto label_1f57f0;
        case 0x1f57f4u: goto label_1f57f4;
        case 0x1f57f8u: goto label_1f57f8;
        case 0x1f57fcu: goto label_1f57fc;
        case 0x1f5800u: goto label_1f5800;
        case 0x1f5804u: goto label_1f5804;
        case 0x1f5808u: goto label_1f5808;
        case 0x1f580cu: goto label_1f580c;
        case 0x1f5810u: goto label_1f5810;
        case 0x1f5814u: goto label_1f5814;
        case 0x1f5818u: goto label_1f5818;
        case 0x1f581cu: goto label_1f581c;
        case 0x1f5820u: goto label_1f5820;
        case 0x1f5824u: goto label_1f5824;
        case 0x1f5828u: goto label_1f5828;
        case 0x1f582cu: goto label_1f582c;
        case 0x1f5830u: goto label_1f5830;
        case 0x1f5834u: goto label_1f5834;
        case 0x1f5838u: goto label_1f5838;
        case 0x1f583cu: goto label_1f583c;
        case 0x1f5840u: goto label_1f5840;
        case 0x1f5844u: goto label_1f5844;
        case 0x1f5848u: goto label_1f5848;
        case 0x1f584cu: goto label_1f584c;
        case 0x1f5850u: goto label_1f5850;
        case 0x1f5854u: goto label_1f5854;
        case 0x1f5858u: goto label_1f5858;
        case 0x1f585cu: goto label_1f585c;
        case 0x1f5860u: goto label_1f5860;
        case 0x1f5864u: goto label_1f5864;
        case 0x1f5868u: goto label_1f5868;
        case 0x1f586cu: goto label_1f586c;
        case 0x1f5870u: goto label_1f5870;
        case 0x1f5874u: goto label_1f5874;
        case 0x1f5878u: goto label_1f5878;
        case 0x1f587cu: goto label_1f587c;
        case 0x1f5880u: goto label_1f5880;
        case 0x1f5884u: goto label_1f5884;
        case 0x1f5888u: goto label_1f5888;
        case 0x1f588cu: goto label_1f588c;
        case 0x1f5890u: goto label_1f5890;
        case 0x1f5894u: goto label_1f5894;
        case 0x1f5898u: goto label_1f5898;
        case 0x1f589cu: goto label_1f589c;
        case 0x1f58a0u: goto label_1f58a0;
        case 0x1f58a4u: goto label_1f58a4;
        case 0x1f58a8u: goto label_1f58a8;
        case 0x1f58acu: goto label_1f58ac;
        case 0x1f58b0u: goto label_1f58b0;
        case 0x1f58b4u: goto label_1f58b4;
        case 0x1f58b8u: goto label_1f58b8;
        case 0x1f58bcu: goto label_1f58bc;
        default: break;
    }

    ctx->pc = 0x1f56c0u;

label_1f56c0:
    // 0x1f56c0: 0x27bdfd60  addiu       $sp, $sp, -0x2A0
    ctx->pc = 0x1f56c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966624));
label_1f56c4:
    // 0x1f56c4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1f56c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1f56c8:
    // 0x1f56c8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1f56c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1f56cc:
    // 0x1f56cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f56ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f56d0:
    // 0x1f56d0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1f56d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1f56d4:
    // 0x1f56d4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f56d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1f56d8:
    // 0x1f56d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f56d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f56dc:
    // 0x1f56dc: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1f56dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f56e0:
    // 0x1f56e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f56e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f56e4:
    // 0x1f56e4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1f56e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f56e8:
    // 0x1f56e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f56e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f56ec:
    // 0x1f56ec: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1f56ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1f56f0:
    // 0x1f56f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f56f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f56f4:
    // 0x1f56f4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1f56f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f56f8:
    // 0x1f56f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f56f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f56fc:
    // 0x1f56fc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1f56fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f5700:
    // 0x1f5700: 0x8c63ea64  lw          $v1, -0x159C($v1)
    ctx->pc = 0x1f5700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1f5704:
    // 0x1f5704: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1f5704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1f5708:
    // 0x1f5708: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1f5708u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f570c:
    // 0x1f570c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1f5710:
    if (ctx->pc == 0x1F5710u) {
        ctx->pc = 0x1F5710u;
            // 0x1f5710: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x1F5714u;
        goto label_1f5714;
    }
    ctx->pc = 0x1F570Cu;
    {
        const bool branch_taken_0x1f570c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F570Cu;
            // 0x1f5710: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f570c) {
            ctx->pc = 0x1F573Cu;
            goto label_1f573c;
        }
    }
    ctx->pc = 0x1F5714u;
label_1f5714:
    // 0x1f5714: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1f5714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1f5718:
    // 0x1f5718: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1f5718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1f571c:
    // 0x1f571c: 0x2442af70  addiu       $v0, $v0, -0x5090
    ctx->pc = 0x1f571cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946672));
label_1f5720:
    // 0x1f5720: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f5720u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1f5724:
    // 0x1f5724: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f5724u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1f5728:
    // 0x1f5728: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1f5728u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1f572c:
    // 0x1f572c: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f572cu;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_1f5730:
    // 0x1f5730: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1f5730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1f5734:
    // 0x1f5734: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1f5734u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_1f5738:
    // 0x1f5738: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1f5738u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1f573c:
    // 0x1f573c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1f573cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1f5740:
    // 0x1f5740: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f5740u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f5744:
    // 0x1f5744: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1f5744u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1f5748:
    // 0x1f5748: 0x320f809  jalr        $t9
label_1f574c:
    if (ctx->pc == 0x1F574Cu) {
        ctx->pc = 0x1F5750u;
        goto label_1f5750;
    }
    ctx->pc = 0x1F5748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F5750u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F5750u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F5750u; }
            if (ctx->pc != 0x1F5750u) { return; }
        }
        }
    }
    ctx->pc = 0x1F5750u;
label_1f5750:
    // 0x1f5750: 0xafb4028c  sw          $s4, 0x28C($sp)
    ctx->pc = 0x1f5750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 20));
label_1f5754:
    // 0x1f5754: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f5754u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5758:
    // 0x1f5758: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x1f5758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1f575c:
    // 0x1f575c: 0xafa30288  sw          $v1, 0x288($sp)
    ctx->pc = 0x1f575cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 648), GPR_U32(ctx, 3));
label_1f5760:
    // 0x1f5760: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1f5760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1f5764:
    // 0x1f5764: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1f5764u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f5768:
    // 0x1f5768: 0x8c76000c  lw          $s6, 0xC($v1)
    ctx->pc = 0x1f5768u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1f576c:
    // 0x1f576c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1f576cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1f5770:
    // 0x1f5770: 0x320f809  jalr        $t9
label_1f5774:
    if (ctx->pc == 0x1F5774u) {
        ctx->pc = 0x1F5774u;
            // 0x1f5774: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F5778u;
        goto label_1f5778;
    }
    ctx->pc = 0x1F5770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F5778u);
        ctx->pc = 0x1F5774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5770u;
            // 0x1f5774: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F5778u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F5778u; }
            if (ctx->pc != 0x1F5778u) { return; }
        }
        }
    }
    ctx->pc = 0x1F5778u;
label_1f5778:
    // 0x1f5778: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f5778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f577c:
    // 0x1f577c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f577cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f5780:
    // 0x1f5780: 0x12030031  beq         $s0, $v1, . + 4 + (0x31 << 2)
label_1f5784:
    if (ctx->pc == 0x1F5784u) {
        ctx->pc = 0x1F5788u;
        goto label_1f5788;
    }
    ctx->pc = 0x1F5780u;
    {
        const bool branch_taken_0x1f5780 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f5780) {
            ctx->pc = 0x1F5848u;
            goto label_1f5848;
        }
    }
    ctx->pc = 0x1F5788u;
label_1f5788:
    // 0x1f5788: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1f5788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1f578c:
    // 0x1f578c: 0x27a4029c  addiu       $a0, $sp, 0x29C
    ctx->pc = 0x1f578cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 668));
label_1f5790:
    // 0x1f5790: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1f5790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f5794:
    // 0x1f5794: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1f5794u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f5798:
    // 0x1f5798: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1f5798u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f579c:
    // 0x1f579c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1f579cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f57a0:
    // 0x1f57a0: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x1f57a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f57a4:
    // 0x1f57a4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1f57a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1f57a8:
    // 0x1f57a8: 0x320f809  jalr        $t9
label_1f57ac:
    if (ctx->pc == 0x1F57ACu) {
        ctx->pc = 0x1F57ACu;
            // 0x1f57ac: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F57B0u;
        goto label_1f57b0;
    }
    ctx->pc = 0x1F57A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F57B0u);
        ctx->pc = 0x1F57ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F57A8u;
            // 0x1f57ac: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F57B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F57B0u; }
            if (ctx->pc != 0x1F57B0u) { return; }
        }
        }
    }
    ctx->pc = 0x1F57B0u;
label_1f57b0:
    // 0x1f57b0: 0x27a2029c  addiu       $v0, $sp, 0x29C
    ctx->pc = 0x1f57b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 668));
label_1f57b4:
    // 0x1f57b4: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1f57b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1f57b8:
    // 0x1f57b8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1f57bc:
    if (ctx->pc == 0x1F57BCu) {
        ctx->pc = 0x1F57C0u;
        goto label_1f57c0;
    }
    ctx->pc = 0x1F57B8u;
    {
        const bool branch_taken_0x1f57b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f57b8) {
            ctx->pc = 0x1F5820u;
            goto label_1f5820;
        }
    }
    ctx->pc = 0x1F57C0u;
label_1f57c0:
    // 0x1f57c0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1f57c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f57c4:
    // 0x1f57c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f57c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f57c8:
    // 0x1f57c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f57c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f57cc:
    // 0x1f57cc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1f57ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1f57d0:
    // 0x1f57d0: 0x320f809  jalr        $t9
label_1f57d4:
    if (ctx->pc == 0x1F57D4u) {
        ctx->pc = 0x1F57D4u;
            // 0x1f57d4: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1F57D8u;
        goto label_1f57d8;
    }
    ctx->pc = 0x1F57D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F57D8u);
        ctx->pc = 0x1F57D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F57D0u;
            // 0x1f57d4: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F57D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F57D8u; }
            if (ctx->pc != 0x1F57D8u) { return; }
        }
        }
    }
    ctx->pc = 0x1F57D8u;
label_1f57d8:
    // 0x1f57d8: 0xafa20280  sw          $v0, 0x280($sp)
    ctx->pc = 0x1f57d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 2));
label_1f57dc:
    // 0x1f57dc: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x1f57dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_1f57e0:
    // 0x1f57e0: 0xafb00284  sw          $s0, 0x284($sp)
    ctx->pc = 0x1f57e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 16));
label_1f57e4:
    // 0x1f57e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f57e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f57e8:
    // 0x1f57e8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1f57e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1f57ec:
    // 0x1f57ec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1f57ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f57f0:
    // 0x1f57f0: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x1f57f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f57f4:
    // 0x1f57f4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1f57f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1f57f8:
    // 0x1f57f8: 0x2c81821  addu        $v1, $s6, $t0
    ctx->pc = 0x1f57f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 8)));
label_1f57fc:
    // 0x1f57fc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f57fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f5800:
    // 0x1f5800: 0x904301a0  lbu         $v1, 0x1A0($v0)
    ctx->pc = 0x1f5800u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 416)));
label_1f5804:
    // 0x1f5804: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1f5804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f5808:
    // 0x1f5808: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f5808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f580c:
    // 0x1f580c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f580cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f5810:
    // 0x1f5810: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1f5810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_1f5814:
    // 0x1f5814: 0x8c4209a8  lw          $v0, 0x9A8($v0)
    ctx->pc = 0x1f5814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2472)));
label_1f5818:
    // 0x1f5818: 0x40f809  jalr        $v0
label_1f581c:
    if (ctx->pc == 0x1F581Cu) {
        ctx->pc = 0x1F581Cu;
            // 0x1f581c: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F5820u;
        goto label_1f5820;
    }
    ctx->pc = 0x1F5818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F5820u);
        ctx->pc = 0x1F581Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5818u;
            // 0x1f581c: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F5820u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F5820u; }
            if (ctx->pc != 0x1F5820u) { return; }
        }
        }
    }
    ctx->pc = 0x1F5820u;
label_1f5820:
    // 0x1f5820: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1f5820u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f5824:
    // 0x1f5824: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f5824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f5828:
    // 0x1f5828: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1f5828u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1f582c:
    // 0x1f582c: 0x320f809  jalr        $t9
label_1f5830:
    if (ctx->pc == 0x1F5830u) {
        ctx->pc = 0x1F5830u;
            // 0x1f5830: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F5834u;
        goto label_1f5834;
    }
    ctx->pc = 0x1F582Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F5834u);
        ctx->pc = 0x1F5830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F582Cu;
            // 0x1f5830: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F5834u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F5834u; }
            if (ctx->pc != 0x1F5834u) { return; }
        }
        }
    }
    ctx->pc = 0x1F5834u;
label_1f5834:
    // 0x1f5834: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f5834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5838:
    // 0x1f5838: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f5838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f583c:
    // 0x1f583c: 0x5603ffd3  bnel        $s0, $v1, . + 4 + (-0x2D << 2)
label_1f5840:
    if (ctx->pc == 0x1F5840u) {
        ctx->pc = 0x1F5840u;
            // 0x1f5840: 0x8e450008  lw          $a1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->pc = 0x1F5844u;
        goto label_1f5844;
    }
    ctx->pc = 0x1F583Cu;
    {
        const bool branch_taken_0x1f583c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f583c) {
            ctx->pc = 0x1F5840u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F583Cu;
            // 0x1f5840: 0x8e450008  lw          $a1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F578Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f578c;
        }
    }
    ctx->pc = 0x1F5844u;
label_1f5844:
    // 0x1f5844: 0x0  nop
    ctx->pc = 0x1f5844u;
    // NOP
label_1f5848:
    // 0x1f5848: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1f5848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1f584c:
    // 0x1f584c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1f584cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1f5850:
    // 0x1f5850: 0x8c84ea64  lw          $a0, -0x159C($a0)
    ctx->pc = 0x1f5850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961764)));
label_1f5854:
    // 0x1f5854: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1f5854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1f5858:
    // 0x1f5858: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1f5858u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1f585c:
    // 0x1f585c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1f585cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1f5860:
    // 0x1f5860: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1f5864:
    if (ctx->pc == 0x1F5864u) {
        ctx->pc = 0x1F5864u;
            // 0x1f5864: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1F5868u;
        goto label_1f5868;
    }
    ctx->pc = 0x1F5860u;
    {
        const bool branch_taken_0x1f5860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5860u;
            // 0x1f5864: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5860) {
            ctx->pc = 0x1F5890u;
            goto label_1f5890;
        }
    }
    ctx->pc = 0x1F5868u;
label_1f5868:
    // 0x1f5868: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1f5868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1f586c:
    // 0x1f586c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1f586cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1f5870:
    // 0x1f5870: 0x2463af88  addiu       $v1, $v1, -0x5078
    ctx->pc = 0x1f5870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946696));
label_1f5874:
    // 0x1f5874: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1f5874u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1f5878:
    // 0x1f5878: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f5878u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1f587c:
    // 0x1f587c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1f587cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1f5880:
    // 0x1f5880: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f5880u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1f5884:
    // 0x1f5884: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1f5884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1f5888:
    // 0x1f5888: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1f5888u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1f588c:
    // 0x1f588c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1f588cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1f5890:
    // 0x1f5890: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1f5890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1f5894:
    // 0x1f5894: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1f5894u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f5898:
    // 0x1f5898: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f5898u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f589c:
    // 0x1f589c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f589cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f58a0:
    // 0x1f58a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f58a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f58a4:
    // 0x1f58a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f58a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f58a8:
    // 0x1f58a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f58a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f58ac:
    // 0x1f58ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f58acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f58b0:
    // 0x1f58b0: 0x3e00008  jr          $ra
label_1f58b4:
    if (ctx->pc == 0x1F58B4u) {
        ctx->pc = 0x1F58B4u;
            // 0x1f58b4: 0x27bd02a0  addiu       $sp, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->pc = 0x1F58B8u;
        goto label_1f58b8;
    }
    ctx->pc = 0x1F58B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F58B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F58B0u;
            // 0x1f58b4: 0x27bd02a0  addiu       $sp, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F58B8u;
label_1f58b8:
    // 0x1f58b8: 0x0  nop
    ctx->pc = 0x1f58b8u;
    // NOP
label_1f58bc:
    // 0x1f58bc: 0x0  nop
    ctx->pc = 0x1f58bcu;
    // NOP
}
