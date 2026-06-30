#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051B540
// Address: 0x51b540 - 0x51b6f0
void sub_0051B540_0x51b540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051B540_0x51b540");
#endif

    switch (ctx->pc) {
        case 0x51b554u: goto label_51b554;
        case 0x51b55cu: goto label_51b55c;
        case 0x51b5e0u: goto label_51b5e0;
        case 0x51b61cu: goto label_51b61c;
        case 0x51b6c0u: goto label_51b6c0;
        case 0x51b6d0u: goto label_51b6d0;
        default: break;
    }

    ctx->pc = 0x51b540u;

    // 0x51b540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x51b540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x51b544: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x51b544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x51b548: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51b548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51b54c: 0xc147248  jal         func_51C920
    ctx->pc = 0x51B54Cu;
    SET_GPR_U32(ctx, 31, 0x51B554u);
    ctx->pc = 0x51B550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51B54Cu;
            // 0x51b550: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51C920u;
    if (runtime->hasFunction(0x51C920u)) {
        auto targetFn = runtime->lookupFunction(0x51C920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B554u; }
        if (ctx->pc != 0x51B554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051C920_0x51c920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B554u; }
        if (ctx->pc != 0x51B554u) { return; }
    }
    ctx->pc = 0x51B554u;
label_51b554:
    // 0x51b554: 0xc12e3a0  jal         func_4B8E80
    ctx->pc = 0x51B554u;
    SET_GPR_U32(ctx, 31, 0x51B55Cu);
    ctx->pc = 0x51B558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51B554u;
            // 0x51b558: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B8E80u;
    if (runtime->hasFunction(0x4B8E80u)) {
        auto targetFn = runtime->lookupFunction(0x4B8E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B55Cu; }
        if (ctx->pc != 0x51B55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B8E80_0x4b8e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B55Cu; }
        if (ctx->pc != 0x51B55Cu) { return; }
    }
    ctx->pc = 0x51B55Cu;
label_51b55c:
    // 0x51b55c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51b55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51b560: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x51b560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x51b564: 0x24425a60  addiu       $v0, $v0, 0x5A60
    ctx->pc = 0x51b564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23136));
    // 0x51b568: 0x24635a6c  addiu       $v1, $v1, 0x5A6C
    ctx->pc = 0x51b568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23148));
    // 0x51b56c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x51b56cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x51b570: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x51b570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x51b574: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x51b574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x51b578: 0x2442b6a0  addiu       $v0, $v0, -0x4960
    ctx->pc = 0x51b578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948512));
    // 0x51b57c: 0x3c030052  lui         $v1, 0x52
    ctx->pc = 0x51b57cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)82 << 16));
    // 0x51b580: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x51b580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x51b584: 0x2463b600  addiu       $v1, $v1, -0x4A00
    ctx->pc = 0x51b584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948352));
    // 0x51b588: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x51b588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x51b58c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x51b58cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51b590: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51b590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51b594: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51b594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51b598: 0x3e00008  jr          $ra
    ctx->pc = 0x51B598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51B59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51B598u;
            // 0x51b59c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51B5A0u;
    // 0x51b5a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x51b5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x51b5a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x51b5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x51b5a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51b5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51b5ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x51b5acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51b5b0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x51B5B0u;
    {
        const bool branch_taken_0x51b5b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x51b5b0) {
            ctx->pc = 0x51B5B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51B5B0u;
            // 0x51b5b4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51B5E4u;
            goto label_51b5e4;
        }
    }
    ctx->pc = 0x51B5B8u;
    // 0x51b5b8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51b5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51b5bc: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x51b5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x51b5c0: 0x24425a48  addiu       $v0, $v0, 0x5A48
    ctx->pc = 0x51b5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23112));
    // 0x51b5c4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x51b5c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x51b5c8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x51b5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x51b5cc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x51b5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x51b5d0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x51B5D0u;
    {
        const bool branch_taken_0x51b5d0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x51B5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51B5D0u;
            // 0x51b5d4: 0xac403e40  sw          $zero, 0x3E40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 15936), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51b5d0) {
            ctx->pc = 0x51B5E0u;
            goto label_51b5e0;
        }
    }
    ctx->pc = 0x51B5D8u;
    // 0x51b5d8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x51B5D8u;
    SET_GPR_U32(ctx, 31, 0x51B5E0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B5E0u; }
        if (ctx->pc != 0x51B5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B5E0u; }
        if (ctx->pc != 0x51B5E0u) { return; }
    }
    ctx->pc = 0x51B5E0u;
label_51b5e0:
    // 0x51b5e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x51b5e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51b5e4:
    // 0x51b5e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51b5e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51b5e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51b5e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51b5ec: 0x3e00008  jr          $ra
    ctx->pc = 0x51B5ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51B5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51B5ECu;
            // 0x51b5f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51B5F4u;
    // 0x51b5f4: 0x0  nop
    ctx->pc = 0x51b5f4u;
    // NOP
    // 0x51b5f8: 0x0  nop
    ctx->pc = 0x51b5f8u;
    // NOP
    // 0x51b5fc: 0x0  nop
    ctx->pc = 0x51b5fcu;
    // NOP
    // 0x51b600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x51b600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x51b604: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x51b604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x51b608: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x51b608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x51b60c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x51b60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x51b610: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x51b610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x51b614: 0xc040140  jal         func_100500
    ctx->pc = 0x51B614u;
    SET_GPR_U32(ctx, 31, 0x51B61Cu);
    ctx->pc = 0x51B618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51B614u;
            // 0x51b618: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B61Cu; }
        if (ctx->pc != 0x51B61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B61Cu; }
        if (ctx->pc != 0x51B61Cu) { return; }
    }
    ctx->pc = 0x51B61Cu;
label_51b61c:
    // 0x51b61c: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x51B61Cu;
    {
        const bool branch_taken_0x51b61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51b61c) {
            ctx->pc = 0x51B620u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51B61Cu;
            // 0x51b620: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51B694u;
            goto label_51b694;
        }
    }
    ctx->pc = 0x51B624u;
    // 0x51b624: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x51b624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x51b628: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x51b628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x51b62c: 0x2463f9c0  addiu       $v1, $v1, -0x640
    ctx->pc = 0x51b62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965696));
    // 0x51b630: 0x3c05c040  lui         $a1, 0xC040
    ctx->pc = 0x51b630u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49216 << 16));
    // 0x51b634: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x51b634u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x51b638: 0x2484fa20  addiu       $a0, $a0, -0x5E0
    ctx->pc = 0x51b638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965792));
    // 0x51b63c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x51b63cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x51b640: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x51b640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x51b644: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x51b644u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x51b648: 0x24630c80  addiu       $v1, $v1, 0xC80
    ctx->pc = 0x51b648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3200));
    // 0x51b64c: 0xa040000c  sb          $zero, 0xC($v0)
    ctx->pc = 0x51b64cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x51b650: 0xac450010  sw          $a1, 0x10($v0)
    ctx->pc = 0x51b650u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
    // 0x51b654: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x51b654u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x51b658: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x51b658u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x51b65c: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x51b65cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x51b660: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x51b660u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x51b664: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x51b664u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x51b668: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x51b668u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x51b66c: 0xa0400039  sb          $zero, 0x39($v0)
    ctx->pc = 0x51b66cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 57), (uint8_t)GPR_U32(ctx, 0));
    // 0x51b670: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x51b670u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x51b674: 0xa4400020  sh          $zero, 0x20($v0)
    ctx->pc = 0x51b674u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x51b678: 0xa0400022  sb          $zero, 0x22($v0)
    ctx->pc = 0x51b678u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x51b67c: 0xa0400023  sb          $zero, 0x23($v0)
    ctx->pc = 0x51b67cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 35), (uint8_t)GPR_U32(ctx, 0));
    // 0x51b680: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x51b680u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x51b684: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x51b684u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x51b688: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x51b688u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x51b68c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x51b68cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x51b690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x51b690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_51b694:
    // 0x51b694: 0x3e00008  jr          $ra
    ctx->pc = 0x51B694u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51B698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51B694u;
            // 0x51b698: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51B69Cu;
    // 0x51b69c: 0x0  nop
    ctx->pc = 0x51b69cu;
    // NOP
    // 0x51b6a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x51b6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x51b6a4: 0x240400f0  addiu       $a0, $zero, 0xF0
    ctx->pc = 0x51b6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x51b6a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x51b6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x51b6ac: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x51b6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x51b6b0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x51b6b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x51b6b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x51b6b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51b6b8: 0xc040140  jal         func_100500
    ctx->pc = 0x51B6B8u;
    SET_GPR_U32(ctx, 31, 0x51B6C0u);
    ctx->pc = 0x51B6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51B6B8u;
            // 0x51b6bc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B6C0u; }
        if (ctx->pc != 0x51B6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B6C0u; }
        if (ctx->pc != 0x51B6C0u) { return; }
    }
    ctx->pc = 0x51B6C0u;
label_51b6c0:
    // 0x51b6c0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x51B6C0u;
    {
        const bool branch_taken_0x51b6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x51B6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51B6C0u;
            // 0x51b6c4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51b6c0) {
            ctx->pc = 0x51B6DCu;
            goto label_51b6dc;
        }
    }
    ctx->pc = 0x51B6C8u;
    // 0x51b6c8: 0xc146dbc  jal         func_51B6F0
    ctx->pc = 0x51B6C8u;
    SET_GPR_U32(ctx, 31, 0x51B6D0u);
    ctx->pc = 0x51B6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51B6C8u;
            // 0x51b6cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51B6F0u;
    if (runtime->hasFunction(0x51B6F0u)) {
        auto targetFn = runtime->lookupFunction(0x51B6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B6D0u; }
        if (ctx->pc != 0x51B6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051B6F0_0x51b6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B6D0u; }
        if (ctx->pc != 0x51B6D0u) { return; }
    }
    ctx->pc = 0x51B6D0u;
label_51b6d0:
    // 0x51b6d0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51b6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51b6d4: 0x24420cd0  addiu       $v0, $v0, 0xCD0
    ctx->pc = 0x51b6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3280));
    // 0x51b6d8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x51b6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_51b6dc:
    // 0x51b6dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x51b6dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51b6e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51b6e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51b6e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51b6e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51b6e8: 0x3e00008  jr          $ra
    ctx->pc = 0x51B6E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51B6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51B6E8u;
            // 0x51b6ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51B6F0u;
}
