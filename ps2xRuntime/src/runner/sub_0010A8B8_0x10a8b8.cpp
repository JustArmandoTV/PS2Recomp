#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010A8B8
// Address: 0x10a8b8 - 0x10acd8
void sub_0010A8B8_0x10a8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A8B8_0x10a8b8");
#endif

    switch (ctx->pc) {
        case 0x10a98cu: goto label_10a98c;
        case 0x10ac18u: goto label_10ac18;
        case 0x10ac24u: goto label_10ac24;
        case 0x10ac68u: goto label_10ac68;
        case 0x10ac78u: goto label_10ac78;
        default: break;
    }

    ctx->pc = 0x10a8b8u;

    // 0x10a8b8: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x10a8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x10a8bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10a8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10a8c0: 0xffbe0190  sd          $fp, 0x190($sp)
    ctx->pc = 0x10a8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 30));
    // 0x10a8c4: 0xffb40150  sd          $s4, 0x150($sp)
    ctx->pc = 0x10a8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 20));
    // 0x10a8c8: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x10a8c8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a8cc: 0xffb20130  sd          $s2, 0x130($sp)
    ctx->pc = 0x10a8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 18));
    // 0x10a8d0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x10a8d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a8d4: 0xffbf01a0  sd          $ra, 0x1A0($sp)
    ctx->pc = 0x10a8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 31));
    // 0x10a8d8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10a8d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a8dc: 0xffb70180  sd          $s7, 0x180($sp)
    ctx->pc = 0x10a8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 23));
    // 0x10a8e0: 0xffb60170  sd          $s6, 0x170($sp)
    ctx->pc = 0x10a8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 22));
    // 0x10a8e4: 0xffb50160  sd          $s5, 0x160($sp)
    ctx->pc = 0x10a8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 21));
    // 0x10a8e8: 0xffb30140  sd          $s3, 0x140($sp)
    ctx->pc = 0x10a8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 19));
    // 0x10a8ec: 0xffb10120  sd          $s1, 0x120($sp)
    ctx->pc = 0x10a8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 17));
    // 0x10a8f0: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x10a8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x10a8f4: 0x8e430184  lw          $v1, 0x184($s2)
    ctx->pc = 0x10a8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 388)));
    // 0x10a8f8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10A8F8u;
    {
        const bool branch_taken_0x10a8f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10A8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A8F8u;
            // 0x10a8fc: 0xafa00100  sw          $zero, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a8f8) {
            ctx->pc = 0x10A914u;
            goto label_10a914;
        }
    }
    ctx->pc = 0x10A900u;
    // 0x10a900: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x10a900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x10a904: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x10a904u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a908: 0x3c0b02d  daddu       $s6, $fp, $zero
    ctx->pc = 0x10a908u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a90c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10A90Cu;
    {
        const bool branch_taken_0x10a90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A90Cu;
            // 0x10a910: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a90c) {
            ctx->pc = 0x10A91Cu;
            goto label_10a91c;
        }
    }
    ctx->pc = 0x10A914u;
label_10a914:
    // 0x10a914: 0x3c0a82d  daddu       $s5, $fp, $zero
    ctx->pc = 0x10a914u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a918: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x10a918u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10a91c:
    // 0x10a91c: 0x8e530868  lw          $s3, 0x868($s2)
    ctx->pc = 0x10a91cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2152)));
    // 0x10a920: 0x8e49008c  lw          $t1, 0x8C($s2)
    ctx->pc = 0x10a920u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x10a924: 0x26630018  addiu       $v1, $s3, 0x18
    ctx->pc = 0x10a924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x10a928: 0x26620020  addiu       $v0, $s3, 0x20
    ctx->pc = 0x10a928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x10a92c: 0x26770010  addiu       $s7, $s3, 0x10
    ctx->pc = 0x10a92cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x10a930: 0xafa30104  sw          $v1, 0x104($sp)
    ctx->pc = 0x10a930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
    // 0x10a934: 0x11200024  beqz        $t1, . + 4 + (0x24 << 2)
    ctx->pc = 0x10A934u;
    {
        const bool branch_taken_0x10a934 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A934u;
            // 0x10a938: 0xafa20108  sw          $v0, 0x108($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a934) {
            ctx->pc = 0x10A9C8u;
            goto label_10a9c8;
        }
    }
    ctx->pc = 0x10A93Cu;
    // 0x10a93c: 0xdea30018  ld          $v1, 0x18($s5)
    ctx->pc = 0x10a93cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x10a940: 0x4630025  bgezl       $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x10A940u;
    {
        const bool branch_taken_0x10a940 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x10a940) {
            ctx->pc = 0x10A944u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A940u;
            // 0x10a944: 0xfee30000  sd          $v1, 0x0($s7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A9D8u;
            goto label_10a9d8;
        }
    }
    ctx->pc = 0x10A948u;
    // 0x10a948: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x10a948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x10a94c: 0x4420022  bltzl       $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x10A94Cu;
    {
        const bool branch_taken_0x10a94c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10a94c) {
            ctx->pc = 0x10A950u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A94Cu;
            // 0x10a950: 0xfee30000  sd          $v1, 0x0($s7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A9D8u;
            goto label_10a9d8;
        }
    }
    ctx->pc = 0x10A954u;
    // 0x10a954: 0xde4500a0  ld          $a1, 0xA0($s2)
    ctx->pc = 0x10a954u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x10a958: 0x8e50009c  lw          $s0, 0x9C($s2)
    ctx->pc = 0x10a958u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x10a95c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x10a95cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x10a960: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x10a960u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x10a964: 0xde440090  ld          $a0, 0x90($s2)
    ctx->pc = 0x10a964u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x10a968: 0x30b10001  andi        $s1, $a1, 0x1
    ctx->pc = 0x10a968u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x10a96c: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x10a96cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x10a970: 0x2308024  and         $s0, $s1, $s0
    ctx->pc = 0x10a970u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x10a974: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x10a974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x10a978: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x10a978u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x10a97c: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x10a97cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x10a980: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x10a980u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x10a984: 0xc048ce6  jal         func_123398
    ctx->pc = 0x10A984u;
    SET_GPR_U32(ctx, 31, 0x10A98Cu);
    ctx->pc = 0x10A988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A984u;
            // 0x10a988: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123398u;
    if (runtime->hasFunction(0x123398u)) {
        auto targetFn = runtime->lookupFunction(0x123398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A98Cu; }
        if (ctx->pc != 0x10A98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123398_0x123398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A98Cu; }
        if (ctx->pc != 0x10A98Cu) { return; }
    }
    ctx->pc = 0x10A98Cu;
label_10a98c:
    // 0x10a98c: 0x217f8  dsll        $v0, $v0, 31
    ctx->pc = 0x10a98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x10a990: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10a990u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x10a994: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x10a994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x10a998: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x10a998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x10a99c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10a99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10a9a0: 0xfe630010  sd          $v1, 0x10($s3)
    ctx->pc = 0x10a9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 3));
    // 0x10a9a4: 0xde420090  ld          $v0, 0x90($s2)
    ctx->pc = 0x10a9a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x10a9a8: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x10a9a8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x10a9ac: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x10A9ACu;
    {
        const bool branch_taken_0x10a9ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A9ACu;
            // 0x10a9b0: 0x8e530868  lw          $s3, 0x868($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a9ac) {
            ctx->pc = 0x10A9D4u;
            goto label_10a9d4;
        }
    }
    ctx->pc = 0x10A9B4u;
    // 0x10a9b4: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x10a9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x10a9b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10a9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10a9bc: 0x8e49008c  lw          $t1, 0x8C($s2)
    ctx->pc = 0x10a9bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x10a9c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10A9C0u;
    {
        const bool branch_taken_0x10a9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A9C0u;
            // 0x10a9c4: 0xae42009c  sw          $v0, 0x9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a9c0) {
            ctx->pc = 0x10A9D8u;
            goto label_10a9d8;
        }
    }
    ctx->pc = 0x10A9C8u;
label_10a9c8:
    // 0x10a9c8: 0xdea30018  ld          $v1, 0x18($s5)
    ctx->pc = 0x10a9c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x10a9cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10A9CCu;
    {
        const bool branch_taken_0x10a9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A9CCu;
            // 0x10a9d0: 0xfee30000  sd          $v1, 0x0($s7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a9cc) {
            ctx->pc = 0x10A9D8u;
            goto label_10a9d8;
        }
    }
    ctx->pc = 0x10A9D4u;
label_10a9d4:
    // 0x10a9d4: 0x8e49008c  lw          $t1, 0x8C($s2)
    ctx->pc = 0x10a9d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_10a9d8:
    // 0x10a9d8: 0x8e430108  lw          $v1, 0x108($s2)
    ctx->pc = 0x10a9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
    // 0x10a9dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10a9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10a9e0: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10A9E0u;
    {
        const bool branch_taken_0x10a9e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10a9e0) {
            ctx->pc = 0x10A9E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A9E0u;
            // 0x10a9e4: 0x8ea60040  lw          $a2, 0x40($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10AA08u;
            goto label_10aa08;
        }
    }
    ctx->pc = 0x10A9E8u;
    // 0x10a9e8: 0xde420100  ld          $v0, 0x100($s2)
    ctx->pc = 0x10a9e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x10a9ec: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10A9ECu;
    {
        const bool branch_taken_0x10a9ec = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10a9ec) {
            ctx->pc = 0x10A9F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A9ECu;
            // 0x10a9f0: 0x8ea60040  lw          $a2, 0x40($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10AA08u;
            goto label_10aa08;
        }
    }
    ctx->pc = 0x10A9F4u;
    // 0x10a9f4: 0xfee20000  sd          $v0, 0x0($s7)
    ctx->pc = 0x10a9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 2));
    // 0x10a9f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10a9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10a9fc: 0xae400108  sw          $zero, 0x108($s2)
    ctx->pc = 0x10a9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 0));
    // 0x10aa00: 0xfe420100  sd          $v0, 0x100($s2)
    ctx->pc = 0x10aa00u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 256), GPR_U64(ctx, 2));
    // 0x10aa04: 0x8ea60040  lw          $a2, 0x40($s5)
    ctx->pc = 0x10aa04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_10aa08:
    // 0x10aa08: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x10aa08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10aa0c: 0x8ea5003c  lw          $a1, 0x3C($s5)
    ctx->pc = 0x10aa0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
    // 0x10aa10: 0x266a0028  addiu       $t2, $s3, 0x28
    ctx->pc = 0x10aa10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
    // 0x10aa14: 0x8ea40038  lw          $a0, 0x38($s5)
    ctx->pc = 0x10aa14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x10aa18: 0x63178  dsll        $a2, $a2, 5
    ctx->pc = 0x10aa18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 5);
    // 0x10aa1c: 0x8ea30030  lw          $v1, 0x30($s5)
    ctx->pc = 0x10aa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x10aa20: 0x529b8  dsll        $a1, $a1, 6
    ctx->pc = 0x10aa20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 6);
    // 0x10aa24: 0x421f8  dsll        $a0, $a0, 7
    ctx->pc = 0x10aa24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 7);
    // 0x10aa28: 0x8ea20034  lw          $v0, 0x34($s5)
    ctx->pc = 0x10aa28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x10aa2c: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x10aa2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x10aa30: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x10aa30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x10aa34: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x10aa34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x10aa38: 0xdea50020  ld          $a1, 0x20($s5)
    ctx->pc = 0x10aa38u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x10aa3c: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x10aa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x10aa40: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x10aa40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x10aa44: 0x8ea7002c  lw          $a3, 0x2C($s5)
    ctx->pc = 0x10aa44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x10aa48: 0x266b0030  addiu       $t3, $s3, 0x30
    ctx->pc = 0x10aa48u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x10aa4c: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x10aa4cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x10aa50: 0x266c0038  addiu       $t4, $s3, 0x38
    ctx->pc = 0x10aa50u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
    // 0x10aa54: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x10aa54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x10aa58: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x10aa58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x10aa5c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x10aa5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x10aa60: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x10aa60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x10aa64: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x10aa64u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x10aa68: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x10aa68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x10aa6c: 0xfe4800a0  sd          $t0, 0xA0($s2)
    ctx->pc = 0x10aa6cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 160), GPR_U64(ctx, 8));
    // 0x10aa70: 0x11200018  beqz        $t1, . + 4 + (0x18 << 2)
    ctx->pc = 0x10AA70u;
    {
        const bool branch_taken_0x10aa70 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AA70u;
            // 0x10aa74: 0xae430098  sw          $v1, 0x98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aa70) {
            ctx->pc = 0x10AAD4u;
            goto label_10aad4;
        }
    }
    ctx->pc = 0x10AA78u;
    // 0x10aa78: 0xdec20018  ld          $v0, 0x18($s6)
    ctx->pc = 0x10aa78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x10aa7c: 0x4430017  bgezl       $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x10AA7Cu;
    {
        const bool branch_taken_0x10aa7c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x10aa7c) {
            ctx->pc = 0x10AA80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10AA7Cu;
            // 0x10aa80: 0xfd420000  sd          $v0, 0x0($t2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10AADCu;
            goto label_10aadc;
        }
    }
    ctx->pc = 0x10AA84u;
    // 0x10aa84: 0x4620015  bltzl       $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x10AA84u;
    {
        const bool branch_taken_0x10aa84 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x10aa84) {
            ctx->pc = 0x10AA88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10AA84u;
            // 0x10aa88: 0xfd420000  sd          $v0, 0x0($t2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10AADCu;
            goto label_10aadc;
        }
    }
    ctx->pc = 0x10AA8Cu;
    // 0x10aa8c: 0xde440090  ld          $a0, 0x90($s2)
    ctx->pc = 0x10aa8cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x10aa90: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x10aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x10aa94: 0x30850001  andi        $a1, $a0, 0x1
    ctx->pc = 0x10aa94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x10aa98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10aa98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10aa9c: 0x427f8  dsll        $a0, $a0, 31
    ctx->pc = 0x10aa9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 31);
    // 0x10aaa0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x10aaa0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x10aaa4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x10aaa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x10aaa8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10aaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10aaac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10aaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10aab0: 0xfe630028  sd          $v1, 0x28($s3)
    ctx->pc = 0x10aab0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 40), GPR_U64(ctx, 3));
    // 0x10aab4: 0xde420090  ld          $v0, 0x90($s2)
    ctx->pc = 0x10aab4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x10aab8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10aab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10aabc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10AABCu;
    {
        const bool branch_taken_0x10aabc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AABCu;
            // 0x10aac0: 0x8e530868  lw          $s3, 0x868($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aabc) {
            ctx->pc = 0x10AADCu;
            goto label_10aadc;
        }
    }
    ctx->pc = 0x10AAC4u;
    // 0x10aac4: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x10aac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x10aac8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10aac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10aacc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10AACCu;
    {
        const bool branch_taken_0x10aacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AACCu;
            // 0x10aad0: 0xae42009c  sw          $v0, 0x9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aacc) {
            ctx->pc = 0x10AADCu;
            goto label_10aadc;
        }
    }
    ctx->pc = 0x10AAD4u;
label_10aad4:
    // 0x10aad4: 0xdec20018  ld          $v0, 0x18($s6)
    ctx->pc = 0x10aad4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x10aad8: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x10aad8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
label_10aadc:
    // 0x10aadc: 0x8e430108  lw          $v1, 0x108($s2)
    ctx->pc = 0x10aadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
    // 0x10aae0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10aae4: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10AAE4u;
    {
        const bool branch_taken_0x10aae4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10aae4) {
            ctx->pc = 0x10AAE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10AAE4u;
            // 0x10aae8: 0x8ec60040  lw          $a2, 0x40($s6) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10AB0Cu;
            goto label_10ab0c;
        }
    }
    ctx->pc = 0x10AAECu;
    // 0x10aaec: 0xde420100  ld          $v0, 0x100($s2)
    ctx->pc = 0x10aaecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x10aaf0: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10AAF0u;
    {
        const bool branch_taken_0x10aaf0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10aaf0) {
            ctx->pc = 0x10AAF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10AAF0u;
            // 0x10aaf4: 0x8ec60040  lw          $a2, 0x40($s6) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10AB0Cu;
            goto label_10ab0c;
        }
    }
    ctx->pc = 0x10AAF8u;
    // 0x10aaf8: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x10aaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x10aafc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10aafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10ab00: 0xae400108  sw          $zero, 0x108($s2)
    ctx->pc = 0x10ab00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 0));
    // 0x10ab04: 0xfe420100  sd          $v0, 0x100($s2)
    ctx->pc = 0x10ab04u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 256), GPR_U64(ctx, 2));
    // 0x10ab08: 0x8ec60040  lw          $a2, 0x40($s6)
    ctx->pc = 0x10ab08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
label_10ab0c:
    // 0x10ab0c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x10ab0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ab10: 0x8ec5003c  lw          $a1, 0x3C($s6)
    ctx->pc = 0x10ab10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 60)));
    // 0x10ab14: 0x8ec20034  lw          $v0, 0x34($s6)
    ctx->pc = 0x10ab14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
    // 0x10ab18: 0x63178  dsll        $a2, $a2, 5
    ctx->pc = 0x10ab18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 5);
    // 0x10ab1c: 0x8ec7002c  lw          $a3, 0x2C($s6)
    ctx->pc = 0x10ab1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x10ab20: 0x529b8  dsll        $a1, $a1, 6
    ctx->pc = 0x10ab20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 6);
    // 0x10ab24: 0x8ec40038  lw          $a0, 0x38($s6)
    ctx->pc = 0x10ab24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 56)));
    // 0x10ab28: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x10ab28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x10ab2c: 0x8ec30030  lw          $v1, 0x30($s6)
    ctx->pc = 0x10ab2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x10ab30: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x10ab30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x10ab34: 0xdec50020  ld          $a1, 0x20($s6)
    ctx->pc = 0x10ab34u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x10ab38: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x10ab38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x10ab3c: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x10ab3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x10ab40: 0x421f8  dsll        $a0, $a0, 7
    ctx->pc = 0x10ab40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 7);
    // 0x10ab44: 0x8fa80100  lw          $t0, 0x100($sp)
    ctx->pc = 0x10ab44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x10ab48: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x10ab48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x10ab4c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x10ab4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x10ab50: 0xfd650000  sd          $a1, 0x0($t3)
    ctx->pc = 0x10ab50u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 5));
    // 0x10ab54: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x10ab54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x10ab58: 0x8e4500f4  lw          $a1, 0xF4($s2)
    ctx->pc = 0x10ab58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
    // 0x10ab5c: 0xfd820000  sd          $v0, 0x0($t4)
    ctx->pc = 0x10ab5cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 2));
    // 0x10ab60: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x10ab60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x10ab64: 0xfe4900a0  sd          $t1, 0xA0($s2)
    ctx->pc = 0x10ab64u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 160), GPR_U64(ctx, 9));
    // 0x10ab68: 0xae430098  sw          $v1, 0x98($s2)
    ctx->pc = 0x10ab68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
    // 0x10ab6c: 0xde620020  ld          $v0, 0x20($s3)
    ctx->pc = 0x10ab6cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x10ab70: 0x8ea4005c  lw          $a0, 0x5C($s5)
    ctx->pc = 0x10ab70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 92)));
    // 0x10ab74: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x10ab74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x10ab78: 0xde630038  ld          $v1, 0x38($s3)
    ctx->pc = 0x10ab78u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x10ab7c: 0xae4400e0  sw          $a0, 0xE0($s2)
    ctx->pc = 0x10ab7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 4));
    // 0x10ab80: 0xfe620020  sd          $v0, 0x20($s3)
    ctx->pc = 0x10ab80u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 32), GPR_U64(ctx, 2));
    // 0x10ab84: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x10ab84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x10ab88: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x10ab88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x10ab8c: 0xfe630038  sd          $v1, 0x38($s3)
    ctx->pc = 0x10ab8cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 56), GPR_U64(ctx, 3));
    // 0x10ab90: 0xae4400e4  sw          $a0, 0xE4($s2)
    ctx->pc = 0x10ab90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 4));
    // 0x10ab94: 0x8ea20044  lw          $v0, 0x44($s5)
    ctx->pc = 0x10ab94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x10ab98: 0xae4200c8  sw          $v0, 0xC8($s2)
    ctx->pc = 0x10ab98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 2));
    // 0x10ab9c: 0x8ec30048  lw          $v1, 0x48($s6)
    ctx->pc = 0x10ab9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
    // 0x10aba0: 0xae4300cc  sw          $v1, 0xCC($s2)
    ctx->pc = 0x10aba0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 3));
    // 0x10aba4: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x10aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x10aba8: 0xae4200d4  sw          $v0, 0xD4($s2)
    ctx->pc = 0x10aba8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 2));
    // 0x10abac: 0x8ec30054  lw          $v1, 0x54($s6)
    ctx->pc = 0x10abacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 84)));
    // 0x10abb0: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x10ABB0u;
    {
        const bool branch_taken_0x10abb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ABB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10ABB0u;
            // 0x10abb4: 0xae4300d8  sw          $v1, 0xD8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10abb0) {
            ctx->pc = 0x10ABDCu;
            goto label_10abdc;
        }
    }
    ctx->pc = 0x10ABB8u;
    // 0x10abb8: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x10abb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x10abbc: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x10abbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x10abc0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x10abc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10abc4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x10ABC4u;
    {
        const bool branch_taken_0x10abc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10ABC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10ABC4u;
            // 0x10abc8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10abc4) {
            ctx->pc = 0x10ABF4u;
            goto label_10abf4;
        }
    }
    ctx->pc = 0x10ABCCu;
    // 0x10abcc: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x10abccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x10abd0: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x10abd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10abd4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10ABD4u;
    {
        const bool branch_taken_0x10abd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ABD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10ABD4u;
            // 0x10abd8: 0x38500001  xori        $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10abd4) {
            ctx->pc = 0x10ABF4u;
            goto label_10abf4;
        }
    }
    ctx->pc = 0x10ABDCu;
label_10abdc:
    // 0x10abdc: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x10abdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x10abe0: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x10abe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x10abe4: 0x8e4200f8  lw          $v0, 0xF8($s2)
    ctx->pc = 0x10abe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x10abe8: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x10abe8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10abec: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x10abecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10abf0: 0x38500001  xori        $s0, $v0, 0x1
    ctx->pc = 0x10abf0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10abf4:
    // 0x10abf4: 0x5600000e  bnel        $s0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x10ABF4u;
    {
        const bool branch_taken_0x10abf4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x10abf4) {
            ctx->pc = 0x10ABF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10ABF4u;
            // 0x10abf8: 0x8e830028  lw          $v1, 0x28($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10AC30u;
            goto label_10ac30;
        }
    }
    ctx->pc = 0x10ABFCu;
    // 0x10abfc: 0x3c060063  lui         $a2, 0x63
    ctx->pc = 0x10abfcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)99 << 16));
    // 0x10ac00: 0x8e870004  lw          $a3, 0x4($s4)
    ctx->pc = 0x10ac00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x10ac04: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x10ac04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x10ac08: 0x24c6eb38  addiu       $a2, $a2, -0x14C8
    ctx->pc = 0x10ac08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961976));
    // 0x10ac0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10ac0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ac10: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x10AC10u;
    SET_GPR_U32(ctx, 31, 0x10AC18u);
    ctx->pc = 0x10AC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AC10u;
            // 0x10ac14: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AC18u; }
        if (ctx->pc != 0x10AC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AC18u; }
        if (ctx->pc != 0x10AC18u) { return; }
    }
    ctx->pc = 0x10AC18u;
label_10ac18:
    // 0x10ac18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10ac18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ac1c: 0xc042e16  jal         func_10B858
    ctx->pc = 0x10AC1Cu;
    SET_GPR_U32(ctx, 31, 0x10AC24u);
    ctx->pc = 0x10AC20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AC1Cu;
            // 0x10ac20: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B858u;
    if (runtime->hasFunction(0x10B858u)) {
        auto targetFn = runtime->lookupFunction(0x10B858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AC24u; }
        if (ctx->pc != 0x10AC24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B858_0x10b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AC24u; }
        if (ctx->pc != 0x10AC24u) { return; }
    }
    ctx->pc = 0x10AC24u;
label_10ac24:
    // 0x10ac24: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x10AC24u;
    {
        const bool branch_taken_0x10ac24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AC24u;
            // 0x10ac28: 0xdfbf01a0  ld          $ra, 0x1A0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ac24) {
            ctx->pc = 0x10ACACu;
            goto label_10acac;
        }
    }
    ctx->pc = 0x10AC2Cu;
    // 0x10ac2c: 0x8e830028  lw          $v1, 0x28($s4)
    ctx->pc = 0x10ac2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_10ac30:
    // 0x10ac30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10ac30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ac34: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x10AC34u;
    {
        const bool branch_taken_0x10ac34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10AC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AC34u;
            // 0x10ac38: 0xdfbf01a0  ld          $ra, 0x1A0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ac34) {
            ctx->pc = 0x10ACACu;
            goto label_10acac;
        }
    }
    ctx->pc = 0x10AC3Cu;
    // 0x10ac3c: 0x8fc20028  lw          $v0, 0x28($fp)
    ctx->pc = 0x10ac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x10ac40: 0x5443001b  bnel        $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x10AC40u;
    {
        const bool branch_taken_0x10ac40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10ac40) {
            ctx->pc = 0x10AC44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10AC40u;
            // 0x10ac44: 0xdfbe0190  ld          $fp, 0x190($sp) (Delay Slot)
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10ACB0u;
            goto label_10acb0;
        }
    }
    ctx->pc = 0x10AC48u;
    // 0x10ac48: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x10ac48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x10ac4c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x10ac4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x10ac50: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x10ac50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    // 0x10ac54: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x10ac54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x10ac58: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10AC58u;
    {
        const bool branch_taken_0x10ac58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AC58u;
            // 0x10ac5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ac58) {
            ctx->pc = 0x10AC70u;
            goto label_10ac70;
        }
    }
    ctx->pc = 0x10AC60u;
    // 0x10ac60: 0xc042bfa  jal         func_10AFE8
    ctx->pc = 0x10AC60u;
    SET_GPR_U32(ctx, 31, 0x10AC68u);
    ctx->pc = 0x10AC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AC60u;
            // 0x10ac64: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AFE8u;
    if (runtime->hasFunction(0x10AFE8u)) {
        auto targetFn = runtime->lookupFunction(0x10AFE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AC68u; }
        if (ctx->pc != 0x10AC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFE8_0x10afe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AC68u; }
        if (ctx->pc != 0x10AC68u) { return; }
    }
    ctx->pc = 0x10AC68u;
label_10ac68:
    // 0x10ac68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10AC68u;
    {
        const bool branch_taken_0x10ac68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AC68u;
            // 0x10ac6c: 0x8e820010  lw          $v0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ac68) {
            ctx->pc = 0x10AC7Cu;
            goto label_10ac7c;
        }
    }
    ctx->pc = 0x10AC70u;
label_10ac70:
    // 0x10ac70: 0xc0428da  jal         func_10A368
    ctx->pc = 0x10AC70u;
    SET_GPR_U32(ctx, 31, 0x10AC78u);
    ctx->pc = 0x10AC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AC70u;
            // 0x10ac74: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A368u;
    if (runtime->hasFunction(0x10A368u)) {
        auto targetFn = runtime->lookupFunction(0x10A368u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AC78u; }
        if (ctx->pc != 0x10AC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A368_0x10a368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AC78u; }
        if (ctx->pc != 0x10AC78u) { return; }
    }
    ctx->pc = 0x10AC78u;
label_10ac78:
    // 0x10ac78: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x10ac78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_10ac7c:
    // 0x10ac7c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x10ac7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10ac80: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x10ac80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x10ac84: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x10ac84u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    // 0x10ac88: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x10ac88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x10ac8c: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10AC8Cu;
    {
        const bool branch_taken_0x10ac8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x10AC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AC8Cu;
            // 0x10ac90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ac8c) {
            ctx->pc = 0x10ACA4u;
            goto label_10aca4;
        }
    }
    ctx->pc = 0x10AC94u;
    // 0x10ac94: 0x8e420128  lw          $v0, 0x128($s2)
    ctx->pc = 0x10ac94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
    // 0x10ac98: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x10ac98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x10ac9c: 0xae4200c0  sw          $v0, 0xC0($s2)
    ctx->pc = 0x10ac9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 2));
    // 0x10aca0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10aca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10aca4:
    // 0x10aca4: 0xae420834  sw          $v0, 0x834($s2)
    ctx->pc = 0x10aca4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2100), GPR_U32(ctx, 2));
    // 0x10aca8: 0xdfbf01a0  ld          $ra, 0x1A0($sp)
    ctx->pc = 0x10aca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
label_10acac:
    // 0x10acac: 0xdfbe0190  ld          $fp, 0x190($sp)
    ctx->pc = 0x10acacu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
label_10acb0:
    // 0x10acb0: 0xdfb70180  ld          $s7, 0x180($sp)
    ctx->pc = 0x10acb0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x10acb4: 0xdfb60170  ld          $s6, 0x170($sp)
    ctx->pc = 0x10acb4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x10acb8: 0xdfb50160  ld          $s5, 0x160($sp)
    ctx->pc = 0x10acb8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x10acbc: 0xdfb40150  ld          $s4, 0x150($sp)
    ctx->pc = 0x10acbcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x10acc0: 0xdfb30140  ld          $s3, 0x140($sp)
    ctx->pc = 0x10acc0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x10acc4: 0xdfb20130  ld          $s2, 0x130($sp)
    ctx->pc = 0x10acc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x10acc8: 0xdfb10120  ld          $s1, 0x120($sp)
    ctx->pc = 0x10acc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x10accc: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x10acccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x10acd0: 0x3e00008  jr          $ra
    ctx->pc = 0x10ACD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10ACD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10ACD0u;
            // 0x10acd4: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10ACD8u;
}
