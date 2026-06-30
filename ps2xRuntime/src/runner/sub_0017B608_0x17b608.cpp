#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017B608
// Address: 0x17b608 - 0x17b6c8
void sub_0017B608_0x17b608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B608_0x17b608");
#endif

    switch (ctx->pc) {
        case 0x17b640u: goto label_17b640;
        case 0x17b668u: goto label_17b668;
        case 0x17b67cu: goto label_17b67c;
        case 0x17b684u: goto label_17b684;
        case 0x17b690u: goto label_17b690;
        case 0x17b6a0u: goto label_17b6a0;
        default: break;
    }

    ctx->pc = 0x17b608u;

    // 0x17b608: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17b608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17b60c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17b60cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17b610: 0x8c4343fc  lw          $v1, 0x43FC($v0)
    ctx->pc = 0x17b610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17404)));
    // 0x17b614: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17b614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b618: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17B618u;
    {
        const bool branch_taken_0x17b618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x17B61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B618u;
            // 0x17b61c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b618) {
            ctx->pc = 0x17B630u;
            goto label_17b630;
        }
    }
    ctx->pc = 0x17B620u;
    // 0x17b620: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b624: 0x8061faa  j           func_187EA8
    ctx->pc = 0x17B624u;
    ctx->pc = 0x17B628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B624u;
            // 0x17b628: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187EA8u;
    if (runtime->hasFunction(0x187EA8u)) {
        auto targetFn = runtime->lookupFunction(0x187EA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00187EA8_0x187ea8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x17B62Cu;
    // 0x17b62c: 0x0  nop
    ctx->pc = 0x17b62cu;
    // NOP
label_17b630:
    // 0x17b630: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b634: 0x3e00008  jr          $ra
    ctx->pc = 0x17B634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B634u;
            // 0x17b638: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B63Cu;
    // 0x17b63c: 0x0  nop
    ctx->pc = 0x17b63cu;
    // NOP
label_17b640:
    // 0x17b640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17b644: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17b644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17b648: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17b648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17b64c: 0x245243c4  addiu       $s2, $v0, 0x43C4
    ctx->pc = 0x17b64cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 17348));
    // 0x17b650: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17b650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17b654: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17b654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b658: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17b658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17b65c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17b65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17b660: 0xc06229a  jal         func_188A68
    ctx->pc = 0x17B660u;
    SET_GPR_U32(ctx, 31, 0x17B668u);
    ctx->pc = 0x17B664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B660u;
            // 0x17b664: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188A68u;
    if (runtime->hasFunction(0x188A68u)) {
        auto targetFn = runtime->lookupFunction(0x188A68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B668u; }
        if (ctx->pc != 0x17B668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188A68_0x188a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B668u; }
        if (ctx->pc != 0x17B668u) { return; }
    }
    ctx->pc = 0x17B668u;
label_17b668:
    // 0x17b668: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17b668u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b66c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x17B66Cu;
    {
        const bool branch_taken_0x17b66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B66Cu;
            // 0x17b670: 0x34049600  ori         $a0, $zero, 0x9600 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38400);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b66c) {
            ctx->pc = 0x17B6ACu;
            goto label_17b6ac;
        }
    }
    ctx->pc = 0x17B674u;
    // 0x17b674: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17B674u;
    SET_GPR_U32(ctx, 31, 0x17B67Cu);
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B67Cu; }
        if (ctx->pc != 0x17B67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B67Cu; }
        if (ctx->pc != 0x17B67Cu) { return; }
    }
    ctx->pc = 0x17B67Cu;
label_17b67c:
    // 0x17b67c: 0xc047df4  jal         func_11F7D0
    ctx->pc = 0x17B67Cu;
    SET_GPR_U32(ctx, 31, 0x17B684u);
    ctx->pc = 0x17B680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B67Cu;
            // 0x17b680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F7D0u;
    if (runtime->hasFunction(0x11F7D0u)) {
        auto targetFn = runtime->lookupFunction(0x11F7D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B684u; }
        if (ctx->pc != 0x17B684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011F7D0_0x11f7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B684u; }
        if (ctx->pc != 0x17B684u) { return; }
    }
    ctx->pc = 0x17B684u;
label_17b684:
    // 0x17b684: 0x34049601  ori         $a0, $zero, 0x9601
    ctx->pc = 0x17b684u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38401);
    // 0x17b688: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17B688u;
    SET_GPR_U32(ctx, 31, 0x17B690u);
    ctx->pc = 0x17B68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B688u;
            // 0x17b68c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B690u; }
        if (ctx->pc != 0x17B690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B690u; }
        if (ctx->pc != 0x17B690u) { return; }
    }
    ctx->pc = 0x17B690u;
label_17b690:
    // 0x17b690: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x17B690u;
    {
        const bool branch_taken_0x17b690 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b690) {
            ctx->pc = 0x17B694u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17B690u;
            // 0x17b694: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17B6A8u;
            goto label_17b6a8;
        }
    }
    ctx->pc = 0x17B698u;
    // 0x17b698: 0xc047e28  jal         func_11F8A0
    ctx->pc = 0x17B698u;
    SET_GPR_U32(ctx, 31, 0x17B6A0u);
    ctx->pc = 0x11F8A0u;
    if (runtime->hasFunction(0x11F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x11F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B6A0u; }
        if (ctx->pc != 0x17B6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011F8A0_0x11f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B6A0u; }
        if (ctx->pc != 0x17B6A0u) { return; }
    }
    ctx->pc = 0x17B6A0u;
label_17b6a0:
    // 0x17b6a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17b6a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b6a4: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x17b6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_17b6a8:
    // 0x17b6a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x17b6a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17b6ac:
    // 0x17b6ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17b6acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b6b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17b6b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b6b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17b6b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b6b8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17b6b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17b6bc: 0x3e00008  jr          $ra
    ctx->pc = 0x17B6BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B6BCu;
            // 0x17b6c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B6C4u;
    // 0x17b6c4: 0x0  nop
    ctx->pc = 0x17b6c4u;
    // NOP
}
