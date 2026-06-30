#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00108380
// Address: 0x108380 - 0x108420
void sub_00108380_0x108380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108380_0x108380");
#endif

    switch (ctx->pc) {
        case 0x1083b0u: goto label_1083b0;
        case 0x1083bcu: goto label_1083bc;
        case 0x1083c8u: goto label_1083c8;
        case 0x1083d4u: goto label_1083d4;
        case 0x1083e0u: goto label_1083e0;
        case 0x1083ecu: goto label_1083ec;
        case 0x1083f8u: goto label_1083f8;
        case 0x108408u: goto label_108408;
        default: break;
    }

    ctx->pc = 0x108380u;

    // 0x108380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x108380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x108384: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x108384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108388: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x108388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10838c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10838cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108390: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x108390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x108394: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x108394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108398: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x108398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
    // 0x10839c: 0x8e020860  lw          $v0, 0x860($s0)
    ctx->pc = 0x10839cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2144)));
    // 0x1083a0: 0xae030864  sw          $v1, 0x864($s0)
    ctx->pc = 0x1083a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2148), GPR_U32(ctx, 3));
    // 0x1083a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1083a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1083a8: 0xc041a12  jal         func_106848
    ctx->pc = 0x1083A8u;
    SET_GPR_U32(ctx, 31, 0x1083B0u);
    ctx->pc = 0x1083ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1083A8u;
            // 0x1083ac: 0xae02085c  sw          $v0, 0x85C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1083B0u; }
        if (ctx->pc != 0x1083B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1083B0u; }
        if (ctx->pc != 0x1083B0u) { return; }
    }
    ctx->pc = 0x1083B0u;
label_1083b0:
    // 0x1083b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1083b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1083b4: 0xc041a12  jal         func_106848
    ctx->pc = 0x1083B4u;
    SET_GPR_U32(ctx, 31, 0x1083BCu);
    ctx->pc = 0x1083B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1083B4u;
            // 0x1083b8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1083BCu; }
        if (ctx->pc != 0x1083BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1083BCu; }
        if (ctx->pc != 0x1083BCu) { return; }
    }
    ctx->pc = 0x1083BCu;
label_1083bc:
    // 0x1083bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1083bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1083c0: 0xc041a12  jal         func_106848
    ctx->pc = 0x1083C0u;
    SET_GPR_U32(ctx, 31, 0x1083C8u);
    ctx->pc = 0x1083C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1083C0u;
            // 0x1083c4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1083C8u; }
        if (ctx->pc != 0x1083C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1083C8u; }
        if (ctx->pc != 0x1083C8u) { return; }
    }
    ctx->pc = 0x1083C8u;
label_1083c8:
    // 0x1083c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1083c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1083cc: 0xc041a12  jal         func_106848
    ctx->pc = 0x1083CCu;
    SET_GPR_U32(ctx, 31, 0x1083D4u);
    ctx->pc = 0x1083D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1083CCu;
            // 0x1083d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1083D4u; }
        if (ctx->pc != 0x1083D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1083D4u; }
        if (ctx->pc != 0x1083D4u) { return; }
    }
    ctx->pc = 0x1083D4u;
label_1083d4:
    // 0x1083d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1083d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1083d8: 0xc041a12  jal         func_106848
    ctx->pc = 0x1083D8u;
    SET_GPR_U32(ctx, 31, 0x1083E0u);
    ctx->pc = 0x1083DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1083D8u;
            // 0x1083dc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1083E0u; }
        if (ctx->pc != 0x1083E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1083E0u; }
        if (ctx->pc != 0x1083E0u) { return; }
    }
    ctx->pc = 0x1083E0u;
label_1083e0:
    // 0x1083e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1083e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1083e4: 0xc041a12  jal         func_106848
    ctx->pc = 0x1083E4u;
    SET_GPR_U32(ctx, 31, 0x1083ECu);
    ctx->pc = 0x1083E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1083E4u;
            // 0x1083e8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1083ECu; }
        if (ctx->pc != 0x1083ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1083ECu; }
        if (ctx->pc != 0x1083ECu) { return; }
    }
    ctx->pc = 0x1083ECu;
label_1083ec:
    // 0x1083ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1083ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1083f0: 0xc041a12  jal         func_106848
    ctx->pc = 0x1083F0u;
    SET_GPR_U32(ctx, 31, 0x1083F8u);
    ctx->pc = 0x1083F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1083F0u;
            // 0x1083f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1083F8u; }
        if (ctx->pc != 0x1083F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1083F8u; }
        if (ctx->pc != 0x1083F8u) { return; }
    }
    ctx->pc = 0x1083F8u;
label_1083f8:
    // 0x1083f8: 0xae0201b4  sw          $v0, 0x1B4($s0)
    ctx->pc = 0x1083f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 2));
    // 0x1083fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1083fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108400: 0xc041a12  jal         func_106848
    ctx->pc = 0x108400u;
    SET_GPR_U32(ctx, 31, 0x108408u);
    ctx->pc = 0x108404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108400u;
            // 0x108404: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108408u; }
        if (ctx->pc != 0x108408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108408u; }
        if (ctx->pc != 0x108408u) { return; }
    }
    ctx->pc = 0x108408u;
label_108408:
    // 0x108408: 0xae0201b8  sw          $v0, 0x1B8($s0)
    ctx->pc = 0x108408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 2));
    // 0x10840c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10840cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108410: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x108410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108414: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x108414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108418: 0x804226e  j           func_1089B8
    ctx->pc = 0x108418u;
    ctx->pc = 0x10841Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108418u;
            // 0x10841c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1089B8u;
    if (runtime->hasFunction(0x1089B8u)) {
        auto targetFn = runtime->lookupFunction(0x1089B8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001089B8_0x1089b8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x108420u;
}
