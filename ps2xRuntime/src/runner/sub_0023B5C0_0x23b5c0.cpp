#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023B5C0
// Address: 0x23b5c0 - 0x23b6e0
void sub_0023B5C0_0x23b5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B5C0_0x23b5c0");
#endif

    switch (ctx->pc) {
        case 0x23b628u: goto label_23b628;
        case 0x23b670u: goto label_23b670;
        case 0x23b6acu: goto label_23b6ac;
        default: break;
    }

    ctx->pc = 0x23b5c0u;

    // 0x23b5c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23b5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23b5c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23b5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23b5c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23b5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23b5cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23b5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23b5d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23b5d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b5d4: 0x1220003b  beqz        $s1, . + 4 + (0x3B << 2)
    ctx->pc = 0x23B5D4u;
    {
        const bool branch_taken_0x23b5d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B5D4u;
            // 0x23b5d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b5d4) {
            ctx->pc = 0x23B6C4u;
            goto label_23b6c4;
        }
    }
    ctx->pc = 0x23B5DCu;
    // 0x23b5dc: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x23b5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x23b5e0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23B5E0u;
    {
        const bool branch_taken_0x23b5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b5e0) {
            ctx->pc = 0x23B628u;
            goto label_23b628;
        }
    }
    ctx->pc = 0x23B5E8u;
    // 0x23b5e8: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x23b5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x23b5ec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x23b5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x23b5f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x23b5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23b5f4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23B5F4u;
    {
        const bool branch_taken_0x23b5f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b5f4) {
            ctx->pc = 0x23B628u;
            goto label_23b628;
        }
    }
    ctx->pc = 0x23B5FCu;
    // 0x23b5fc: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x23b5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x23b600: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23b600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x23b604: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23b604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x23b608: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x23b608u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x23b60c: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x23b60cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x23b610: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x23b610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x23b614: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x23b614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x23b618: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x23b618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23b61c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23b61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23b620: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x23B620u;
    SET_GPR_U32(ctx, 31, 0x23B628u);
    ctx->pc = 0x23B624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B620u;
            // 0x23b624: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B628u; }
        if (ctx->pc != 0x23B628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B628u; }
        if (ctx->pc != 0x23B628u) { return; }
    }
    ctx->pc = 0x23B628u;
label_23b628:
    // 0x23b628: 0x52200012  beql        $s1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x23B628u;
    {
        const bool branch_taken_0x23b628 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b628) {
            ctx->pc = 0x23B62Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23B628u;
            // 0x23b62c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23B674u;
            goto label_23b674;
        }
    }
    ctx->pc = 0x23B630u;
    // 0x23b630: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x23b630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x23b634: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x23b634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x23b638: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x23b638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23b63c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23B63Cu;
    {
        const bool branch_taken_0x23b63c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b63c) {
            ctx->pc = 0x23B670u;
            goto label_23b670;
        }
    }
    ctx->pc = 0x23B644u;
    // 0x23b644: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x23b644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x23b648: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23b648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x23b64c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23b64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x23b650: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x23b650u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x23b654: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x23b654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23b658: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x23b658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x23b65c: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x23b65cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x23b660: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x23b660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23b664: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23b664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23b668: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x23B668u;
    SET_GPR_U32(ctx, 31, 0x23B670u);
    ctx->pc = 0x23B66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B668u;
            // 0x23b66c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B670u; }
        if (ctx->pc != 0x23B670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B670u; }
        if (ctx->pc != 0x23B670u) { return; }
    }
    ctx->pc = 0x23B670u;
label_23b670:
    // 0x23b670: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x23b670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_23b674:
    // 0x23b674: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23b674u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x23b678: 0x58400013  blezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x23B678u;
    {
        const bool branch_taken_0x23b678 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23b678) {
            ctx->pc = 0x23B67Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23B678u;
            // 0x23b67c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23B6C8u;
            goto label_23b6c8;
        }
    }
    ctx->pc = 0x23B680u;
    // 0x23b680: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23b680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x23b684: 0x8c50ea40  lw          $s0, -0x15C0($v0)
    ctx->pc = 0x23b684u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x23b688: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x23b688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x23b68c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x23b68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x23b690: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x23b690u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23b694: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x23B694u;
    {
        const bool branch_taken_0x23b694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b694) {
            ctx->pc = 0x23B698u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23B694u;
            // 0x23b698: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23B6B0u;
            goto label_23b6b0;
        }
    }
    ctx->pc = 0x23B69Cu;
    // 0x23b69c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23b69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b6a0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x23b6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23b6a4: 0xc0a79ec  jal         func_29E7B0
    ctx->pc = 0x23B6A4u;
    SET_GPR_U32(ctx, 31, 0x23B6ACu);
    ctx->pc = 0x23B6A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B6A4u;
            // 0x23b6a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E7B0u;
    if (runtime->hasFunction(0x29E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x29E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B6ACu; }
        if (ctx->pc != 0x23B6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E7B0_0x29e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B6ACu; }
        if (ctx->pc != 0x23B6ACu) { return; }
    }
    ctx->pc = 0x23B6ACu;
label_23b6ac:
    // 0x23b6ac: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x23b6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_23b6b0:
    // 0x23b6b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23b6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23b6b4: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x23b6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x23b6b8: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x23b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x23b6bc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x23b6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x23b6c0: 0xae11003c  sw          $s1, 0x3C($s0)
    ctx->pc = 0x23b6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 17));
label_23b6c4:
    // 0x23b6c4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x23b6c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23b6c8:
    // 0x23b6c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23b6c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23b6cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23b6ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b6d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23b6d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b6d4: 0x3e00008  jr          $ra
    ctx->pc = 0x23B6D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B6D4u;
            // 0x23b6d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23B6DCu;
    // 0x23b6dc: 0x0  nop
    ctx->pc = 0x23b6dcu;
    // NOP
}
