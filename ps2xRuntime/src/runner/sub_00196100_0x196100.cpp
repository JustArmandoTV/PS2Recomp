#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00196100
// Address: 0x196100 - 0x1961c0
void sub_00196100_0x196100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196100_0x196100");
#endif

    switch (ctx->pc) {
        case 0x196168u: goto label_196168;
        case 0x196174u: goto label_196174;
        case 0x19618cu: goto label_19618c;
        default: break;
    }

    ctx->pc = 0x196100u;

    // 0x196100: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x196100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x196104: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x196104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x196108: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x196108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19610c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19610cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196110: 0x1230c0  sll         $a2, $s2, 3
    ctx->pc = 0x196110u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x196114: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x196114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x196118: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x196118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x19611c: 0x128900  sll         $s1, $s2, 4
    ctx->pc = 0x19611cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x196120: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x196120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x196124: 0x24b3003f  addiu       $s3, $a1, 0x3F
    ctx->pc = 0x196124u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x196128: 0x2328821  addu        $s1, $s1, $s2
    ctx->pc = 0x196128u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x19612c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x19612cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x196130: 0x2629824  and         $s3, $s3, $v0
    ctx->pc = 0x196130u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x196134: 0xd23023  subu        $a2, $a2, $s2
    ctx->pc = 0x196134u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x196138: 0x118980  sll         $s1, $s1, 6
    ctx->pc = 0x196138u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x19613c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x19613cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x196140: 0x2718821  addu        $s1, $s3, $s1
    ctx->pc = 0x196140u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x196144: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x196144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x196148: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x196148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19614c: 0x24c60800  addiu       $a2, $a2, 0x800
    ctx->pc = 0x19614cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2048));
    // 0x196150: 0x26340420  addiu       $s4, $s1, 0x420
    ctx->pc = 0x196150u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 1056));
    // 0x196154: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x196154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196158: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x196158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19615c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x19615cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x196160: 0xc06419c  jal         func_190670
    ctx->pc = 0x196160u;
    SET_GPR_U32(ctx, 31, 0x196168u);
    ctx->pc = 0x196164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196160u;
            // 0x196164: 0x3c10006d  lui         $s0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190670u;
    if (runtime->hasFunction(0x190670u)) {
        auto targetFn = runtime->lookupFunction(0x190670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196168u; }
        if (ctx->pc != 0x196168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00190670_0x190670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196168u; }
        if (ctx->pc != 0x196168u) { return; }
    }
    ctx->pc = 0x196168u;
label_196168:
    // 0x196168: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x196168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19616c: 0xc065928  jal         func_1964A0
    ctx->pc = 0x19616Cu;
    SET_GPR_U32(ctx, 31, 0x196174u);
    ctx->pc = 0x196170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19616Cu;
            // 0x196170: 0x24051be0  addiu       $a1, $zero, 0x1BE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1964A0u;
    if (runtime->hasFunction(0x1964A0u)) {
        auto targetFn = runtime->lookupFunction(0x1964A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196174u; }
        if (ctx->pc != 0x196174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001964A0_0x1964a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196174u; }
        if (ctx->pc != 0x196174u) { return; }
    }
    ctx->pc = 0x196174u;
label_196174:
    // 0x196174: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x196174u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x196178: 0x2610fed8  addiu       $s0, $s0, -0x128
    ctx->pc = 0x196178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967000));
    // 0x19617c: 0x24a583e0  addiu       $a1, $a1, -0x7C20
    ctx->pc = 0x19617cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935520));
    // 0x196180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x196180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196184: 0xc064080  jal         func_190200
    ctx->pc = 0x196184u;
    SET_GPR_U32(ctx, 31, 0x19618Cu);
    ctx->pc = 0x196188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196184u;
            // 0x196188: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190200u;
    if (runtime->hasFunction(0x190200u)) {
        auto targetFn = runtime->lookupFunction(0x190200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19618Cu; }
        if (ctx->pc != 0x19618Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00190200_0x190200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19618Cu; }
        if (ctx->pc != 0x19618Cu) { return; }
    }
    ctx->pc = 0x19618Cu;
label_19618c:
    // 0x19618c: 0xae11004c  sw          $s1, 0x4C($s0)
    ctx->pc = 0x19618cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 17));
    // 0x196190: 0xae130058  sw          $s3, 0x58($s0)
    ctx->pc = 0x196190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 19));
    // 0x196194: 0xae140050  sw          $s4, 0x50($s0)
    ctx->pc = 0x196194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 20));
    // 0x196198: 0xae120054  sw          $s2, 0x54($s0)
    ctx->pc = 0x196198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 18));
    // 0x19619c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19619cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1961a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1961a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1961a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1961a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1961a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1961a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1961ac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1961acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1961b0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1961b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1961b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1961B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1961B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1961B4u;
            // 0x1961b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1961BCu;
    // 0x1961bc: 0x0  nop
    ctx->pc = 0x1961bcu;
    // NOP
}
