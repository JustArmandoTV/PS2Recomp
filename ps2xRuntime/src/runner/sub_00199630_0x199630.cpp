#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00199630
// Address: 0x199630 - 0x1998e0
void sub_00199630_0x199630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199630_0x199630");
#endif

    switch (ctx->pc) {
        case 0x199658u: goto label_199658;
        case 0x199694u: goto label_199694;
        case 0x1996dcu: goto label_1996dc;
        case 0x199734u: goto label_199734;
        case 0x199784u: goto label_199784;
        case 0x19979cu: goto label_19979c;
        case 0x1997fcu: goto label_1997fc;
        case 0x199814u: goto label_199814;
        case 0x199834u: goto label_199834;
        case 0x199848u: goto label_199848;
        case 0x199850u: goto label_199850;
        case 0x19986cu: goto label_19986c;
        case 0x199884u: goto label_199884;
        case 0x199894u: goto label_199894;
        case 0x1998b0u: goto label_1998b0;
        case 0x1998bcu: goto label_1998bc;
        default: break;
    }

    ctx->pc = 0x199630u;

    // 0x199630: 0x3e00008  jr          $ra
    ctx->pc = 0x199630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199630u;
            // 0x199634: 0x8c820474  lw          $v0, 0x474($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1140)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x199638u;
    // 0x199638: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x199638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19963c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19963cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x199640: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x199640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199644: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x199644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x199648: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x199648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19964c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19964cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x199650: 0xc0673f2  jal         func_19CFC8
    ctx->pc = 0x199650u;
    SET_GPR_U32(ctx, 31, 0x199658u);
    ctx->pc = 0x199654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199650u;
            // 0x199654: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CFC8u;
    if (runtime->hasFunction(0x19CFC8u)) {
        auto targetFn = runtime->lookupFunction(0x19CFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199658u; }
        if (ctx->pc != 0x199658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CFC8_0x19cfc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199658u; }
        if (ctx->pc != 0x199658u) { return; }
    }
    ctx->pc = 0x199658u;
label_199658:
    // 0x199658: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x199658u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19965c: 0x8e42054c  lw          $v0, 0x54C($s2)
    ctx->pc = 0x19965cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1356)));
    // 0x199660: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x199660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199664: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x199664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199668: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x199668u;
    {
        const bool branch_taken_0x199668 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x19966Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199668u;
            // 0x19966c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199668) {
            ctx->pc = 0x199688u;
            goto label_199688;
        }
    }
    ctx->pc = 0x199670u;
    // 0x199670: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x199670u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199674: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x199674u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x199678: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x199678u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19967c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19967cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x199680: 0x806a3ac  j           func_1A8EB0
    ctx->pc = 0x199680u;
    ctx->pc = 0x199684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199680u;
            // 0x199684: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EB0u;
    {
        auto targetFn = runtime->lookupFunction(0x1A8EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x199688u;
label_199688:
    // 0x199688: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x199688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19968c: 0xc065c92  jal         func_197248
    ctx->pc = 0x19968Cu;
    SET_GPR_U32(ctx, 31, 0x199694u);
    ctx->pc = 0x199690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19968Cu;
            // 0x199690: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197248u;
    if (runtime->hasFunction(0x197248u)) {
        auto targetFn = runtime->lookupFunction(0x197248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199694u; }
        if (ctx->pc != 0x199694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197248_0x197248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199694u; }
        if (ctx->pc != 0x199694u) { return; }
    }
    ctx->pc = 0x199694u;
label_199694:
    // 0x199694: 0x3c05001a  lui         $a1, 0x1A
    ctx->pc = 0x199694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
    // 0x199698: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x199698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19969c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19969cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1996a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1996a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1996a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1996a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1996a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1996a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1996ac: 0x24a59700  addiu       $a1, $a1, -0x6900
    ctx->pc = 0x1996acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940416));
    // 0x1996b0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1996b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1996b4: 0x806a3ac  j           func_1A8EB0
    ctx->pc = 0x1996B4u;
    ctx->pc = 0x1996B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1996B4u;
            // 0x1996b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EB0u;
    {
        auto targetFn = runtime->lookupFunction(0x1A8EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1996BCu;
    // 0x1996bc: 0x0  nop
    ctx->pc = 0x1996bcu;
    // NOP
    // 0x1996c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1996c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1996c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1996c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1996c8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1996c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1996cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1996ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1996d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1996d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1996d4: 0xc0673f2  jal         func_19CFC8
    ctx->pc = 0x1996D4u;
    SET_GPR_U32(ctx, 31, 0x1996DCu);
    ctx->pc = 0x1996D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1996D4u;
            // 0x1996d8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CFC8u;
    if (runtime->hasFunction(0x19CFC8u)) {
        auto targetFn = runtime->lookupFunction(0x19CFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1996DCu; }
        if (ctx->pc != 0x1996DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CFC8_0x19cfc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1996DCu; }
        if (ctx->pc != 0x1996DCu) { return; }
    }
    ctx->pc = 0x1996DCu;
label_1996dc:
    // 0x1996dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1996dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1996e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1996e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1996e4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1996e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1996e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1996e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1996ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1996ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1996f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1996f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1996f4: 0x806a3ac  j           func_1A8EB0
    ctx->pc = 0x1996F4u;
    ctx->pc = 0x1996F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1996F4u;
            // 0x1996f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EB0u;
    {
        auto targetFn = runtime->lookupFunction(0x1A8EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1996FCu;
    // 0x1996fc: 0x0  nop
    ctx->pc = 0x1996fcu;
    // NOP
    // 0x199700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x199700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x199704: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x199704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x199708: 0x8c84054c  lw          $a0, 0x54C($a0)
    ctx->pc = 0x199708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1356)));
    // 0x19970c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19970cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199710: 0x8065d26  j           func_197498
    ctx->pc = 0x199710u;
    ctx->pc = 0x199714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199710u;
            // 0x199714: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197498u;
    if (runtime->hasFunction(0x197498u)) {
        auto targetFn = runtime->lookupFunction(0x197498u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00197498_0x197498(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x199718u;
    // 0x199718: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x199718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19971c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19971cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x199720: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x199720u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199724: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x199724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x199728: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x199728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19972c: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19972Cu;
    SET_GPR_U32(ctx, 31, 0x199734u);
    ctx->pc = 0x199730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19972Cu;
            // 0x199730: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199734u; }
        if (ctx->pc != 0x199734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199734u; }
        if (ctx->pc != 0x199734u) { return; }
    }
    ctx->pc = 0x199734u;
label_199734:
    // 0x199734: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x199734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x199738: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x199738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19973c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19973Cu;
    {
        const bool branch_taken_0x19973c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x199740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19973Cu;
            // 0x199740: 0x24848b60  addiu       $a0, $a0, -0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19973c) {
            ctx->pc = 0x199758u;
            goto label_199758;
        }
    }
    ctx->pc = 0x199744u;
    // 0x199744: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x199744u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199748: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x199748u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19974c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19974cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199750: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x199750u;
    ctx->pc = 0x199754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199750u;
            // 0x199754: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x199758u;
label_199758:
    // 0x199758: 0xae110060  sw          $s1, 0x60($s0)
    ctx->pc = 0x199758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 17));
    // 0x19975c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19975cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199760: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x199760u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199764: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x199764u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x199768: 0x3e00008  jr          $ra
    ctx->pc = 0x199768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19976Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199768u;
            // 0x19976c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x199770u;
    // 0x199770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x199770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x199774: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x199774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x199778: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x199778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19977c: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19977Cu;
    SET_GPR_U32(ctx, 31, 0x199784u);
    ctx->pc = 0x199780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19977Cu;
            // 0x199780: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199784u; }
        if (ctx->pc != 0x199784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199784u; }
        if (ctx->pc != 0x199784u) { return; }
    }
    ctx->pc = 0x199784u;
label_199784:
    // 0x199784: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x199784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199788: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x199788u;
    {
        const bool branch_taken_0x199788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19978Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199788u;
            // 0x19978c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199788) {
            ctx->pc = 0x1997B0u;
            goto label_1997b0;
        }
    }
    ctx->pc = 0x199790u;
    // 0x199790: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x199790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x199794: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x199794u;
    SET_GPR_U32(ctx, 31, 0x19979Cu);
    ctx->pc = 0x199798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199794u;
            // 0x199798: 0x24848b90  addiu       $a0, $a0, -0x7470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19979Cu; }
        if (ctx->pc != 0x19979Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19979Cu; }
        if (ctx->pc != 0x19979Cu) { return; }
    }
    ctx->pc = 0x19979Cu;
label_19979c:
    // 0x19979c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19979cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1997a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1997a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1997a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1997a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1997a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1997A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1997ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1997A8u;
            // 0x1997ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1997B0u;
label_1997b0:
    // 0x1997b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1997b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1997b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1997b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1997b8: 0x80665f0  j           func_1997C0
    ctx->pc = 0x1997B8u;
    ctx->pc = 0x1997BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1997B8u;
            // 0x1997bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1997C0u;
    goto label_1997c0;
    ctx->pc = 0x1997C0u;
label_1997c0:
    // 0x1997c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1997C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1997C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1997C0u;
            // 0x1997c4: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1997C8u;
    // 0x1997c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1997c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1997cc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1997ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1997d0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1997d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1997d4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1997d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1997d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1997d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1997dc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1997dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1997e0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1997e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1997e4: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x1997e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1997e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1997e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1997ec: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1997ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1997f0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1997f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1997f4: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1997F4u;
    SET_GPR_U32(ctx, 31, 0x1997FCu);
    ctx->pc = 0x1997F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1997F4u;
            // 0x1997f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1997FCu; }
        if (ctx->pc != 0x1997FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1997FCu; }
        if (ctx->pc != 0x1997FCu) { return; }
    }
    ctx->pc = 0x1997FCu;
label_1997fc:
    // 0x1997fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1997fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x199800: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x199800u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x199804: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x199804u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x199808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x199808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19980c: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19980Cu;
    SET_GPR_U32(ctx, 31, 0x199814u);
    ctx->pc = 0x199810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19980Cu;
            // 0x199810: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199814u; }
        if (ctx->pc != 0x199814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199814u; }
        if (ctx->pc != 0x199814u) { return; }
    }
    ctx->pc = 0x199814u;
label_199814:
    // 0x199814: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x199814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199818: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x199818u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19981c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19981cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199820: 0x12620007  beq         $s3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x199820u;
    {
        const bool branch_taken_0x199820 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x199824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199820u;
            // 0x199824: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199820) {
            ctx->pc = 0x199840u;
            goto label_199840;
        }
    }
    ctx->pc = 0x199828u;
    // 0x199828: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x199828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19982c: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19982Cu;
    SET_GPR_U32(ctx, 31, 0x199834u);
    ctx->pc = 0x199830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19982Cu;
            // 0x199830: 0x24848bc0  addiu       $a0, $a0, -0x7440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199834u; }
        if (ctx->pc != 0x199834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199834u; }
        if (ctx->pc != 0x199834u) { return; }
    }
    ctx->pc = 0x199834u;
label_199834:
    // 0x199834: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x199834u;
    {
        const bool branch_taken_0x199834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199834u;
            // 0x199838: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199834) {
            ctx->pc = 0x1998C0u;
            goto label_1998c0;
        }
    }
    ctx->pc = 0x19983Cu;
    // 0x19983c: 0x0  nop
    ctx->pc = 0x19983cu;
    // NOP
label_199840:
    // 0x199840: 0xc0666b2  jal         func_199AC8
    ctx->pc = 0x199840u;
    SET_GPR_U32(ctx, 31, 0x199848u);
    ctx->pc = 0x199AC8u;
    if (runtime->hasFunction(0x199AC8u)) {
        auto targetFn = runtime->lookupFunction(0x199AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199848u; }
        if (ctx->pc != 0x199848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00199AC8_0x199ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199848u; }
        if (ctx->pc != 0x199848u) { return; }
    }
    ctx->pc = 0x199848u;
label_199848:
    // 0x199848: 0xc0673f2  jal         func_19CFC8
    ctx->pc = 0x199848u;
    SET_GPR_U32(ctx, 31, 0x199850u);
    ctx->pc = 0x19984Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199848u;
            // 0x19984c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CFC8u;
    if (runtime->hasFunction(0x19CFC8u)) {
        auto targetFn = runtime->lookupFunction(0x19CFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199850u; }
        if (ctx->pc != 0x199850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CFC8_0x19cfc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199850u; }
        if (ctx->pc != 0x199850u) { return; }
    }
    ctx->pc = 0x199850u;
label_199850:
    // 0x199850: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x199850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199854: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x199854u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199858: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x199858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19985c: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x19985Cu;
    {
        const bool branch_taken_0x19985c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x199860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19985Cu;
            // 0x199860: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19985c) {
            ctx->pc = 0x1998C0u;
            goto label_1998c0;
        }
    }
    ctx->pc = 0x199864u;
    // 0x199864: 0xc06d1be  jal         func_1B46F8
    ctx->pc = 0x199864u;
    SET_GPR_U32(ctx, 31, 0x19986Cu);
    ctx->pc = 0x1B46F8u;
    if (runtime->hasFunction(0x1B46F8u)) {
        auto targetFn = runtime->lookupFunction(0x1B46F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19986Cu; }
        if (ctx->pc != 0x19986Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B46F8_0x1b46f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19986Cu; }
        if (ctx->pc != 0x19986Cu) { return; }
    }
    ctx->pc = 0x19986Cu;
label_19986c:
    // 0x19986c: 0x54530015  bnel        $v0, $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x19986Cu;
    {
        const bool branch_taken_0x19986c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x19986c) {
            ctx->pc = 0x199870u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19986Cu;
            // 0x199870: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1998C4u;
            goto label_1998c4;
        }
    }
    ctx->pc = 0x199874u;
    // 0x199874: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x199874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x199878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19987c: 0xc0667da  jal         func_199F68
    ctx->pc = 0x19987Cu;
    SET_GPR_U32(ctx, 31, 0x199884u);
    ctx->pc = 0x199880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19987Cu;
            // 0x199880: 0xae050088  sw          $a1, 0x88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199F68u;
    if (runtime->hasFunction(0x199F68u)) {
        auto targetFn = runtime->lookupFunction(0x199F68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199884u; }
        if (ctx->pc != 0x199884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00199F68_0x199f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199884u; }
        if (ctx->pc != 0x199884u) { return; }
    }
    ctx->pc = 0x199884u;
label_199884:
    // 0x199884: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x199884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199888: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x199888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19988c: 0xc0666d8  jal         func_199B60
    ctx->pc = 0x19988Cu;
    SET_GPR_U32(ctx, 31, 0x199894u);
    ctx->pc = 0x199890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19988Cu;
            // 0x199890: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199B60u;
    if (runtime->hasFunction(0x199B60u)) {
        auto targetFn = runtime->lookupFunction(0x199B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199894u; }
        if (ctx->pc != 0x199894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00199B60_0x199b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199894u; }
        if (ctx->pc != 0x199894u) { return; }
    }
    ctx->pc = 0x199894u;
label_199894:
    // 0x199894: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x199894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x199898: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x199898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x19989c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19989cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1998a0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1998a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1998a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1998a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1998a8: 0xc0666c4  jal         func_199B10
    ctx->pc = 0x1998A8u;
    SET_GPR_U32(ctx, 31, 0x1998B0u);
    ctx->pc = 0x1998ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1998A8u;
            // 0x1998ac: 0xae0300c8  sw          $v1, 0xC8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199B10u;
    if (runtime->hasFunction(0x199B10u)) {
        auto targetFn = runtime->lookupFunction(0x199B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1998B0u; }
        if (ctx->pc != 0x1998B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00199B10_0x199b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1998B0u; }
        if (ctx->pc != 0x1998B0u) { return; }
    }
    ctx->pc = 0x1998B0u;
label_1998b0:
    // 0x1998b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1998b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1998b4: 0xc066696  jal         func_199A58
    ctx->pc = 0x1998B4u;
    SET_GPR_U32(ctx, 31, 0x1998BCu);
    ctx->pc = 0x1998B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1998B4u;
            // 0x1998b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199A58u;
    if (runtime->hasFunction(0x199A58u)) {
        auto targetFn = runtime->lookupFunction(0x199A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1998BCu; }
        if (ctx->pc != 0x1998BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00199A58_0x199a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1998BCu; }
        if (ctx->pc != 0x1998BCu) { return; }
    }
    ctx->pc = 0x1998BCu;
label_1998bc:
    // 0x1998bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1998bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1998c0:
    // 0x1998c0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1998c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1998c4:
    // 0x1998c4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1998c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1998c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1998c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1998cc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1998ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1998d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1998d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1998d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1998D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1998D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1998D4u;
            // 0x1998d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1998DCu;
    // 0x1998dc: 0x0  nop
    ctx->pc = 0x1998dcu;
    // NOP
}
