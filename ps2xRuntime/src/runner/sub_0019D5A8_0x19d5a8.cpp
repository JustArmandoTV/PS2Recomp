#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019D5A8
// Address: 0x19d5a8 - 0x19d6c0
void sub_0019D5A8_0x19d5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D5A8_0x19d5a8");
#endif

    switch (ctx->pc) {
        case 0x19d5c8u: goto label_19d5c8;
        case 0x19d5f4u: goto label_19d5f4;
        case 0x19d664u: goto label_19d664;
        case 0x19d684u: goto label_19d684;
        case 0x19d698u: goto label_19d698;
        default: break;
    }

    ctx->pc = 0x19d5a8u;

label_19d5a8:
    // 0x19d5a8: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19D5A8u;
    {
        const bool branch_taken_0x19d5a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D5A8u;
            // 0x19d5ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d5a8) {
            ctx->pc = 0x19D5B4u;
            goto label_19d5b4;
        }
    }
    ctx->pc = 0x19D5B0u;
    // 0x19d5b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19d5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19d5b4:
    // 0x19d5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x19D5B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19D5BCu;
    // 0x19d5bc: 0x0  nop
    ctx->pc = 0x19d5bcu;
    // NOP
    // 0x19d5c0: 0x3e00008  jr          $ra
    ctx->pc = 0x19D5C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D5C0u;
            // 0x19d5c4: 0x8c820054  lw          $v0, 0x54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19D5C8u;
label_19d5c8:
    // 0x19d5c8: 0x3e00008  jr          $ra
    ctx->pc = 0x19D5C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D5C8u;
            // 0x19d5cc: 0x8c820050  lw          $v0, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19D5D0u;
    // 0x19d5d0: 0x3e00008  jr          $ra
    ctx->pc = 0x19D5D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D5D0u;
            // 0x19d5d4: 0x8c8200b8  lw          $v0, 0xB8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19D5D8u;
    // 0x19d5d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19d5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19d5dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19d5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19d5e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19d5e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d5e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19d5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19d5e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19d5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19d5ec: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19D5ECu;
    SET_GPR_U32(ctx, 31, 0x19D5F4u);
    ctx->pc = 0x19D5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D5ECu;
            // 0x19d5f0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    goto label_19d5a8;
    ctx->pc = 0x19D5F4u;
label_19d5f4:
    // 0x19d5f4: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x19d5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x19d5f8: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19d5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19d5fc: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x19d5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19d600: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19d600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d604: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19d604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19d608: 0x24849978  addiu       $a0, $a0, -0x6688
    ctx->pc = 0x19d608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941048));
    // 0x19d60c: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x19d60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x19d610: 0x10460007  beq         $v0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x19D610u;
    {
        const bool branch_taken_0x19d610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x19D614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D610u;
            // 0x19d614: 0x701821  addu        $v1, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d610) {
            ctx->pc = 0x19D630u;
            goto label_19d630;
        }
    }
    ctx->pc = 0x19D618u;
    // 0x19d618: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19d618u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d61c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19d61cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19d620: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19d620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d624: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x19D624u;
    ctx->pc = 0x19D628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D624u;
            // 0x19d628: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19D62Cu;
    // 0x19d62c: 0x0  nop
    ctx->pc = 0x19d62cu;
    // NOP
label_19d630:
    // 0x19d630: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19d630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d634: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19d634u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19d638: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19d638u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d63c: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x19d63cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19d640: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19d640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d644: 0x8067522  j           func_19D488
    ctx->pc = 0x19D644u;
    ctx->pc = 0x19D648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D644u;
            // 0x19d648: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D488u;
    if (runtime->hasFunction(0x19D488u)) {
        auto targetFn = runtime->lookupFunction(0x19D488u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0019D488_0x19d488(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19D64Cu;
    // 0x19d64c: 0x0  nop
    ctx->pc = 0x19d64cu;
    // NOP
    // 0x19d650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19d650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19d654: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x19d654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x19d658: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19d658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x19d65c: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19D65Cu;
    SET_GPR_U32(ctx, 31, 0x19D664u);
    ctx->pc = 0x19D660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D65Cu;
            // 0x19d660: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    goto label_19d5a8;
    ctx->pc = 0x19D664u;
label_19d664:
    // 0x19d664: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19d664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d668: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19d668u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d66c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19d66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d670: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19D670u;
    {
        const bool branch_taken_0x19d670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19D674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D670u;
            // 0x19d674: 0x24050036  addiu       $a1, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d670) {
            ctx->pc = 0x19D690u;
            goto label_19d690;
        }
    }
    ctx->pc = 0x19D678u;
    // 0x19d678: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19d678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19d67c: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19D67Cu;
    SET_GPR_U32(ctx, 31, 0x19D684u);
    ctx->pc = 0x19D680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D67Cu;
            // 0x19d680: 0x248499a8  addiu       $a0, $a0, -0x6658 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D684u; }
        if (ctx->pc != 0x19D684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D684u; }
        if (ctx->pc != 0x19D684u) { return; }
    }
    ctx->pc = 0x19D684u;
label_19d684:
    // 0x19d684: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19D684u;
    {
        const bool branch_taken_0x19d684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D684u;
            // 0x19d688: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d684) {
            ctx->pc = 0x19D6B0u;
            goto label_19d6b0;
        }
    }
    ctx->pc = 0x19D68Cu;
    // 0x19d68c: 0x0  nop
    ctx->pc = 0x19d68cu;
    // NOP
label_19d690:
    // 0x19d690: 0xc06752c  jal         func_19D4B0
    ctx->pc = 0x19D690u;
    SET_GPR_U32(ctx, 31, 0x19D698u);
    ctx->pc = 0x19D4B0u;
    if (runtime->hasFunction(0x19D4B0u)) {
        auto targetFn = runtime->lookupFunction(0x19D4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D698u; }
        if (ctx->pc != 0x19D698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D4B0_0x19d4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D698u; }
        if (ctx->pc != 0x19D698u) { return; }
    }
    ctx->pc = 0x19D698u;
label_19d698:
    // 0x19d698: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x19d698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x19d69c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19d69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d6a0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x19D6A0u;
    {
        const bool branch_taken_0x19d6a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d6a0) {
            ctx->pc = 0x19D6A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19D6A0u;
            // 0x19d6a4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x19D6A8u;
            goto label_19d6a8;
        }
    }
    ctx->pc = 0x19D6A8u;
label_19d6a8:
    // 0x19d6a8: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x19d6a8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x19d6ac: 0x1012  mflo        $v0
    ctx->pc = 0x19d6acu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_19d6b0:
    // 0x19d6b0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x19d6b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d6b4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19d6b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19d6b8: 0x3e00008  jr          $ra
    ctx->pc = 0x19D6B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D6B8u;
            // 0x19d6bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19D6C0u;
}
