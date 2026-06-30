#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016A908
// Address: 0x16a908 - 0x16a9f0
void sub_0016A908_0x16a908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A908_0x16a908");
#endif

    switch (ctx->pc) {
        case 0x16a928u: goto label_16a928;
        case 0x16a954u: goto label_16a954;
        case 0x16a960u: goto label_16a960;
        case 0x16a98cu: goto label_16a98c;
        case 0x16a9a4u: goto label_16a9a4;
        case 0x16a9b8u: goto label_16a9b8;
        case 0x16a9ccu: goto label_16a9cc;
        default: break;
    }

    ctx->pc = 0x16a908u;

    // 0x16a908: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16a908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16a90c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16a90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16a910: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16a910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a914: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16a914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16a918: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16a918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16a91c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x16a91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x16a920: 0xc05c2e2  jal         func_170B88
    ctx->pc = 0x16A920u;
    SET_GPR_U32(ctx, 31, 0x16A928u);
    ctx->pc = 0x16A924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A920u;
            // 0x16a924: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170B88u;
    if (runtime->hasFunction(0x170B88u)) {
        auto targetFn = runtime->lookupFunction(0x170B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A928u; }
        if (ctx->pc != 0x16A928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170B88_0x170b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A928u; }
        if (ctx->pc != 0x16A928u) { return; }
    }
    ctx->pc = 0x16A928u;
label_16a928:
    // 0x16a928: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16a928u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a92c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x16a92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16a930: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16A930u;
    {
        const bool branch_taken_0x16a930 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16A934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A930u;
            // 0x16a934: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a930) {
            ctx->pc = 0x16A940u;
            goto label_16a940;
        }
    }
    ctx->pc = 0x16A938u;
    // 0x16a938: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x16A938u;
    {
        const bool branch_taken_0x16a938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A938u;
            // 0x16a93c: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a938) {
            ctx->pc = 0x16A9D4u;
            goto label_16a9d4;
        }
    }
    ctx->pc = 0x16A940u;
label_16a940:
    // 0x16a940: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x16a940u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x16a944: 0x54440012  bnel        $v0, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x16A944u;
    {
        const bool branch_taken_0x16a944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x16a944) {
            ctx->pc = 0x16A948u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16A944u;
            // 0x16a948: 0x82110003  lb          $s1, 0x3($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16A990u;
            goto label_16a990;
        }
    }
    ctx->pc = 0x16A94Cu;
    // 0x16a94c: 0xc05c2e2  jal         func_170B88
    ctx->pc = 0x16A94Cu;
    SET_GPR_U32(ctx, 31, 0x16A954u);
    ctx->pc = 0x16A950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A94Cu;
            // 0x16a950: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170B88u;
    if (runtime->hasFunction(0x170B88u)) {
        auto targetFn = runtime->lookupFunction(0x170B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A954u; }
        if (ctx->pc != 0x16A954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170B88_0x170b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A954u; }
        if (ctx->pc != 0x16A954u) { return; }
    }
    ctx->pc = 0x16A954u;
label_16a954:
    // 0x16a954: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x16a954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16a958: 0xc05c30c  jal         func_170C30
    ctx->pc = 0x16A958u;
    SET_GPR_U32(ctx, 31, 0x16A960u);
    ctx->pc = 0x16A95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A958u;
            // 0x16a95c: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170C30u;
    if (runtime->hasFunction(0x170C30u)) {
        auto targetFn = runtime->lookupFunction(0x170C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A960u; }
        if (ctx->pc != 0x16A960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170C30_0x170c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A960u; }
        if (ctx->pc != 0x16A960u) { return; }
    }
    ctx->pc = 0x16A960u;
label_16a960:
    // 0x16a960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a964: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x16a964u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x16a968: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x16a968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x16a96c: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x16a96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x16a970: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x16a970u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16a974: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x16a974u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x16a978: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x16a978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x16a97c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16A97Cu;
    {
        const bool branch_taken_0x16a97c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A97Cu;
            // 0x16a980: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a97c) {
            ctx->pc = 0x16A98Cu;
            goto label_16a98c;
        }
    }
    ctx->pc = 0x16A984u;
    // 0x16a984: 0xc05a7e8  jal         func_169FA0
    ctx->pc = 0x16A984u;
    SET_GPR_U32(ctx, 31, 0x16A98Cu);
    ctx->pc = 0x16A988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A984u;
            // 0x16a988: 0xae050010  sw          $a1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x169FA0u;
    if (runtime->hasFunction(0x169FA0u)) {
        auto targetFn = runtime->lookupFunction(0x169FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A98Cu; }
        if (ctx->pc != 0x16A98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00169FA0_0x169fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A98Cu; }
        if (ctx->pc != 0x16A98Cu) { return; }
    }
    ctx->pc = 0x16A98Cu;
label_16a98c:
    // 0x16a98c: 0x82110003  lb          $s1, 0x3($s0)
    ctx->pc = 0x16a98cu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_16a990:
    // 0x16a990: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16a990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a994: 0x56220010  bnel        $s1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x16A994u;
    {
        const bool branch_taken_0x16a994 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x16a994) {
            ctx->pc = 0x16A998u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16A994u;
            // 0x16a998: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16A9D8u;
            goto label_16a9d8;
        }
    }
    ctx->pc = 0x16A99Cu;
    // 0x16a99c: 0xc05c2e2  jal         func_170B88
    ctx->pc = 0x16A99Cu;
    SET_GPR_U32(ctx, 31, 0x16A9A4u);
    ctx->pc = 0x16A9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A99Cu;
            // 0x16a9a0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170B88u;
    if (runtime->hasFunction(0x170B88u)) {
        auto targetFn = runtime->lookupFunction(0x170B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A9A4u; }
        if (ctx->pc != 0x16A9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170B88_0x170b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A9A4u; }
        if (ctx->pc != 0x16A9A4u) { return; }
    }
    ctx->pc = 0x16A9A4u;
label_16a9a4:
    // 0x16a9a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x16a9a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a9a8: 0x5651000b  bnel        $s2, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x16A9A8u;
    {
        const bool branch_taken_0x16a9a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        if (branch_taken_0x16a9a8) {
            ctx->pc = 0x16A9ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16A9A8u;
            // 0x16a9ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16A9D8u;
            goto label_16a9d8;
        }
    }
    ctx->pc = 0x16A9B0u;
    // 0x16a9b0: 0xc05c30c  jal         func_170C30
    ctx->pc = 0x16A9B0u;
    SET_GPR_U32(ctx, 31, 0x16A9B8u);
    ctx->pc = 0x16A9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A9B0u;
            // 0x16a9b4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170C30u;
    if (runtime->hasFunction(0x170C30u)) {
        auto targetFn = runtime->lookupFunction(0x170C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A9B8u; }
        if (ctx->pc != 0x16A9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170C30_0x170c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A9B8u; }
        if (ctx->pc != 0x16A9B8u) { return; }
    }
    ctx->pc = 0x16A9B8u;
label_16a9b8:
    // 0x16a9b8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x16a9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x16a9bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a9c0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16a9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16a9c4: 0xc05a7e8  jal         func_169FA0
    ctx->pc = 0x16A9C4u;
    SET_GPR_U32(ctx, 31, 0x16A9CCu);
    ctx->pc = 0x16A9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A9C4u;
            // 0x16a9c8: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x169FA0u;
    if (runtime->hasFunction(0x169FA0u)) {
        auto targetFn = runtime->lookupFunction(0x169FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A9CCu; }
        if (ctx->pc != 0x16A9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00169FA0_0x169fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A9CCu; }
        if (ctx->pc != 0x16A9CCu) { return; }
    }
    ctx->pc = 0x16A9CCu;
label_16a9cc:
    // 0x16a9cc: 0xa2120001  sb          $s2, 0x1($s0)
    ctx->pc = 0x16a9ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 18));
    // 0x16a9d0: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x16a9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_16a9d4:
    // 0x16a9d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16a9d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16a9d8:
    // 0x16a9d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16a9d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16a9dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16a9dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a9e0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16a9e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16a9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x16A9E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A9E4u;
            // 0x16a9e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16A9ECu;
    // 0x16a9ec: 0x0  nop
    ctx->pc = 0x16a9ecu;
    // NOP
}
