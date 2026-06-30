#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CE5F0
// Address: 0x2ce5f0 - 0x2ce700
void sub_002CE5F0_0x2ce5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE5F0_0x2ce5f0");
#endif

    switch (ctx->pc) {
        case 0x2ce614u: goto label_2ce614;
        case 0x2ce664u: goto label_2ce664;
        case 0x2ce68cu: goto label_2ce68c;
        case 0x2ce6e0u: goto label_2ce6e0;
        default: break;
    }

    ctx->pc = 0x2ce5f0u;

    // 0x2ce5f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ce5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ce5f4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2ce5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2ce5f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ce5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ce5fc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2ce5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ce600: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ce600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ce604: 0x34458a92  ori         $a1, $v0, 0x8A92
    ctx->pc = 0x2ce604u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35474);
    // 0x2ce608: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ce608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce60c: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2CE60Cu;
    SET_GPR_U32(ctx, 31, 0x2CE614u);
    ctx->pc = 0x2CE610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE60Cu;
            // 0x2ce610: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE614u; }
        if (ctx->pc != 0x2CE614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE614u; }
        if (ctx->pc != 0x2CE614u) { return; }
    }
    ctx->pc = 0x2CE614u;
label_2ce614:
    // 0x2ce614: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ce614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ce618: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ce618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2ce61c: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x2ce61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
    // 0x2ce620: 0x2463fe00  addiu       $v1, $v1, -0x200
    ctx->pc = 0x2ce620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966784));
    // 0x2ce624: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2ce624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2ce628: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ce628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce62c: 0x26020054  addiu       $v0, $s0, 0x54
    ctx->pc = 0x2ce62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x2ce630: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x2ce630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x2ce634: 0x2444ffac  addiu       $a0, $v0, -0x54
    ctx->pc = 0x2ce634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967212));
    // 0x2ce638: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ce638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2ce63c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ce63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ce640: 0x2463fdc0  addiu       $v1, $v1, -0x240
    ctx->pc = 0x2ce640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966720));
    // 0x2ce644: 0xac440e58  sw          $a0, 0xE58($v0)
    ctx->pc = 0x2ce644u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3672), GPR_U32(ctx, 4));
    // 0x2ce648: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x2ce648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x2ce64c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ce64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ce650: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2ce650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2ce654: 0x2442fdf0  addiu       $v0, $v0, -0x210
    ctx->pc = 0x2ce654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966768));
    // 0x2ce658: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x2ce658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x2ce65c: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x2CE65Cu;
    SET_GPR_U32(ctx, 31, 0x2CE664u);
    ctx->pc = 0x2CE660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE65Cu;
            // 0x2ce660: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE664u; }
        if (ctx->pc != 0x2CE664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE664u; }
        if (ctx->pc != 0x2CE664u) { return; }
    }
    ctx->pc = 0x2CE664u;
label_2ce664:
    // 0x2ce664: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ce664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ce668: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x2ce668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x2ce66c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x2ce66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x2ce670: 0x27a60024  addiu       $a2, $sp, 0x24
    ctx->pc = 0x2ce670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x2ce674: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2ce674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2ce678: 0xafb0002c  sw          $s0, 0x2C($sp)
    ctx->pc = 0x2ce678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 16));
    // 0x2ce67c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2ce67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2ce680: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x2ce680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2ce684: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x2CE684u;
    SET_GPR_U32(ctx, 31, 0x2CE68Cu);
    ctx->pc = 0x2CE688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE684u;
            // 0x2ce688: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE68Cu; }
        if (ctx->pc != 0x2CE68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE68Cu; }
        if (ctx->pc != 0x2CE68Cu) { return; }
    }
    ctx->pc = 0x2CE68Cu;
label_2ce68c:
    // 0x2ce68c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ce68cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce690: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ce690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce694: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ce694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce698: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE698u;
            // 0x2ce69c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE6A0u;
    // 0x2ce6a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ce6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ce6a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ce6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ce6a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ce6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ce6ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ce6acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce6b0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2CE6B0u;
    {
        const bool branch_taken_0x2ce6b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce6b0) {
            ctx->pc = 0x2CE6B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE6B0u;
            // 0x2ce6b4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CE6E4u;
            goto label_2ce6e4;
        }
    }
    ctx->pc = 0x2CE6B8u;
    // 0x2ce6b8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ce6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ce6bc: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x2ce6bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2ce6c0: 0x2442fe00  addiu       $v0, $v0, -0x200
    ctx->pc = 0x2ce6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966784));
    // 0x2ce6c4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2ce6c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2ce6c8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2ce6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2ce6cc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ce6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ce6d0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE6D0u;
    {
        const bool branch_taken_0x2ce6d0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2CE6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE6D0u;
            // 0x2ce6d4: 0xac400e58  sw          $zero, 0xE58($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3672), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce6d0) {
            ctx->pc = 0x2CE6E0u;
            goto label_2ce6e0;
        }
    }
    ctx->pc = 0x2CE6D8u;
    // 0x2ce6d8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2CE6D8u;
    SET_GPR_U32(ctx, 31, 0x2CE6E0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE6E0u; }
        if (ctx->pc != 0x2CE6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE6E0u; }
        if (ctx->pc != 0x2CE6E0u) { return; }
    }
    ctx->pc = 0x2CE6E0u;
label_2ce6e0:
    // 0x2ce6e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ce6e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ce6e4:
    // 0x2ce6e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ce6e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce6e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ce6e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE6ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE6ECu;
            // 0x2ce6f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE6F4u;
    // 0x2ce6f4: 0x0  nop
    ctx->pc = 0x2ce6f4u;
    // NOP
    // 0x2ce6f8: 0x0  nop
    ctx->pc = 0x2ce6f8u;
    // NOP
    // 0x2ce6fc: 0x0  nop
    ctx->pc = 0x2ce6fcu;
    // NOP
}
