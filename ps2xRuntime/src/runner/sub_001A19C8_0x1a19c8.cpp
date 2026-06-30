#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A19C8
// Address: 0x1a19c8 - 0x1a1b00
void sub_001A19C8_0x1a19c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A19C8_0x1a19c8");
#endif

    switch (ctx->pc) {
        case 0x1a19dcu: goto label_1a19dc;
        case 0x1a1a30u: goto label_1a1a30;
        case 0x1a1a68u: goto label_1a1a68;
        case 0x1a1aa0u: goto label_1a1aa0;
        case 0x1a1ad8u: goto label_1a1ad8;
        default: break;
    }

    ctx->pc = 0x1a19c8u;

    // 0x1a19c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a19c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a19cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a19ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a19d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a19d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a19d4: 0xc0622c4  jal         func_188B10
    ctx->pc = 0x1A19D4u;
    SET_GPR_U32(ctx, 31, 0x1A19DCu);
    ctx->pc = 0x1A19D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A19D4u;
            // 0x1a19d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188B10u;
    if (runtime->hasFunction(0x188B10u)) {
        auto targetFn = runtime->lookupFunction(0x188B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A19DCu; }
        if (ctx->pc != 0x1A19DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188B10_0x188b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A19DCu; }
        if (ctx->pc != 0x1A19DCu) { return; }
    }
    ctx->pc = 0x1A19DCu;
label_1a19dc:
    // 0x1a19dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a19dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a19e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a19e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a19e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a19e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a19e8: 0x80622ca  j           func_188B28
    ctx->pc = 0x1A19E8u;
    ctx->pc = 0x1A19ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A19E8u;
            // 0x1a19ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188B28u;
    {
        auto targetFn = runtime->lookupFunction(0x188B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1A19F0u;
    // 0x1a19f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a19f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a19f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a19f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a19f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a19f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a19fc: 0x806739c  j           func_19CE70
    ctx->pc = 0x1A19FCu;
    ctx->pc = 0x1A1A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A19FCu;
            // 0x1a1a00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CE70u;
    if (runtime->hasFunction(0x19CE70u)) {
        auto targetFn = runtime->lookupFunction(0x19CE70u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0019CE70_0x19ce70(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A1A04u;
    // 0x1a1a04: 0x0  nop
    ctx->pc = 0x1a1a04u;
    // NOP
    // 0x1a1a08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a1a0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1a10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1a14: 0x80673a2  j           func_19CE88
    ctx->pc = 0x1A1A14u;
    ctx->pc = 0x1A1A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1A14u;
            // 0x1a1a18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CE88u;
    if (runtime->hasFunction(0x19CE88u)) {
        auto targetFn = runtime->lookupFunction(0x19CE88u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0019CE88_0x19ce88(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A1A1Cu;
    // 0x1a1a1c: 0x0  nop
    ctx->pc = 0x1a1a1cu;
    // NOP
    // 0x1a1a20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a1a24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1a28: 0xc061f80  jal         func_187E00
    ctx->pc = 0x1A1A28u;
    SET_GPR_U32(ctx, 31, 0x1A1A30u);
    ctx->pc = 0x187E00u;
    if (runtime->hasFunction(0x187E00u)) {
        auto targetFn = runtime->lookupFunction(0x187E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1A30u; }
        if (ctx->pc != 0x1A1A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187E00_0x187e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1A30u; }
        if (ctx->pc != 0x1A1A30u) { return; }
    }
    ctx->pc = 0x1A1A30u;
label_1a1a30:
    // 0x1a1a30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1a34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a1a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1a38: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1A38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1A38u;
            // 0x1a1a3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A1A40u;
    // 0x1a1a40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a1a44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1a48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1a4c: 0x8061f9e  j           func_187E78
    ctx->pc = 0x1A1A4Cu;
    ctx->pc = 0x1A1A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1A4Cu;
            // 0x1a1a50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187E78u;
    if (runtime->hasFunction(0x187E78u)) {
        auto targetFn = runtime->lookupFunction(0x187E78u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00187E78_0x187e78(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A1A54u;
    // 0x1a1a54: 0x0  nop
    ctx->pc = 0x1a1a54u;
    // NOP
    // 0x1a1a58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a1a5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1a60: 0xc061f86  jal         func_187E18
    ctx->pc = 0x1A1A60u;
    SET_GPR_U32(ctx, 31, 0x1A1A68u);
    ctx->pc = 0x187E18u;
    if (runtime->hasFunction(0x187E18u)) {
        auto targetFn = runtime->lookupFunction(0x187E18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1A68u; }
        if (ctx->pc != 0x1A1A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187E18_0x187e18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1A68u; }
        if (ctx->pc != 0x1A1A68u) { return; }
    }
    ctx->pc = 0x1A1A68u;
label_1a1a68:
    // 0x1a1a68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1a6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a1a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1a70: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1A70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1A70u;
            // 0x1a1a74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A1A78u;
    // 0x1a1a78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a1a7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1a80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1a84: 0x8061fa4  j           func_187E90
    ctx->pc = 0x1A1A84u;
    ctx->pc = 0x1A1A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1A84u;
            // 0x1a1a88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187E90u;
    {
        auto targetFn = runtime->lookupFunction(0x187E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1A1A8Cu;
    // 0x1a1a8c: 0x0  nop
    ctx->pc = 0x1a1a8cu;
    // NOP
    // 0x1a1a90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a1a94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1a98: 0xc061f8c  jal         func_187E30
    ctx->pc = 0x1A1A98u;
    SET_GPR_U32(ctx, 31, 0x1A1AA0u);
    ctx->pc = 0x187E30u;
    if (runtime->hasFunction(0x187E30u)) {
        auto targetFn = runtime->lookupFunction(0x187E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1AA0u; }
        if (ctx->pc != 0x1A1AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187E30_0x187e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1AA0u; }
        if (ctx->pc != 0x1A1AA0u) { return; }
    }
    ctx->pc = 0x1A1AA0u;
label_1a1aa0:
    // 0x1a1aa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1aa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a1aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1AA8u;
            // 0x1a1aac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A1AB0u;
    // 0x1a1ab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a1ab4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1ab8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1abc: 0x8061faa  j           func_187EA8
    ctx->pc = 0x1A1ABCu;
    ctx->pc = 0x1A1AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1ABCu;
            // 0x1a1ac0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187EA8u;
    if (runtime->hasFunction(0x187EA8u)) {
        auto targetFn = runtime->lookupFunction(0x187EA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00187EA8_0x187ea8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A1AC4u;
    // 0x1a1ac4: 0x0  nop
    ctx->pc = 0x1a1ac4u;
    // NOP
    // 0x1a1ac8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a1acc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1ad0: 0xc061f92  jal         func_187E48
    ctx->pc = 0x1A1AD0u;
    SET_GPR_U32(ctx, 31, 0x1A1AD8u);
    ctx->pc = 0x187E48u;
    if (runtime->hasFunction(0x187E48u)) {
        auto targetFn = runtime->lookupFunction(0x187E48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1AD8u; }
        if (ctx->pc != 0x1A1AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187E48_0x187e48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1AD8u; }
        if (ctx->pc != 0x1A1AD8u) { return; }
    }
    ctx->pc = 0x1A1AD8u;
label_1a1ad8:
    // 0x1a1ad8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1adc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a1adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1AE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1AE0u;
            // 0x1a1ae4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A1AE8u;
    // 0x1a1ae8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a1aec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1af0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1af4: 0x8061fb0  j           func_187EC0
    ctx->pc = 0x1A1AF4u;
    ctx->pc = 0x1A1AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1AF4u;
            // 0x1a1af8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187EC0u;
    {
        auto targetFn = runtime->lookupFunction(0x187EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1A1AFCu;
    // 0x1a1afc: 0x0  nop
    ctx->pc = 0x1a1afcu;
    // NOP
}
