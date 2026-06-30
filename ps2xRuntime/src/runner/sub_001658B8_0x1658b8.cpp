#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001658B8
// Address: 0x1658b8 - 0x165a68
void sub_001658B8_0x1658b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001658B8_0x1658b8");
#endif

    switch (ctx->pc) {
        case 0x1658b8u: goto label_1658b8;
        case 0x1658bcu: goto label_1658bc;
        case 0x1658c0u: goto label_1658c0;
        case 0x1658c4u: goto label_1658c4;
        case 0x1658c8u: goto label_1658c8;
        case 0x1658ccu: goto label_1658cc;
        case 0x1658d0u: goto label_1658d0;
        case 0x1658d4u: goto label_1658d4;
        case 0x1658d8u: goto label_1658d8;
        case 0x1658dcu: goto label_1658dc;
        case 0x1658e0u: goto label_1658e0;
        case 0x1658e4u: goto label_1658e4;
        case 0x1658e8u: goto label_1658e8;
        case 0x1658ecu: goto label_1658ec;
        case 0x1658f0u: goto label_1658f0;
        case 0x1658f4u: goto label_1658f4;
        case 0x1658f8u: goto label_1658f8;
        case 0x1658fcu: goto label_1658fc;
        case 0x165900u: goto label_165900;
        case 0x165904u: goto label_165904;
        case 0x165908u: goto label_165908;
        case 0x16590cu: goto label_16590c;
        case 0x165910u: goto label_165910;
        case 0x165914u: goto label_165914;
        case 0x165918u: goto label_165918;
        case 0x16591cu: goto label_16591c;
        case 0x165920u: goto label_165920;
        case 0x165924u: goto label_165924;
        case 0x165928u: goto label_165928;
        case 0x16592cu: goto label_16592c;
        case 0x165930u: goto label_165930;
        case 0x165934u: goto label_165934;
        case 0x165938u: goto label_165938;
        case 0x16593cu: goto label_16593c;
        case 0x165940u: goto label_165940;
        case 0x165944u: goto label_165944;
        case 0x165948u: goto label_165948;
        case 0x16594cu: goto label_16594c;
        case 0x165950u: goto label_165950;
        case 0x165954u: goto label_165954;
        case 0x165958u: goto label_165958;
        case 0x16595cu: goto label_16595c;
        case 0x165960u: goto label_165960;
        case 0x165964u: goto label_165964;
        case 0x165968u: goto label_165968;
        case 0x16596cu: goto label_16596c;
        case 0x165970u: goto label_165970;
        case 0x165974u: goto label_165974;
        case 0x165978u: goto label_165978;
        case 0x16597cu: goto label_16597c;
        case 0x165980u: goto label_165980;
        case 0x165984u: goto label_165984;
        case 0x165988u: goto label_165988;
        case 0x16598cu: goto label_16598c;
        case 0x165990u: goto label_165990;
        case 0x165994u: goto label_165994;
        case 0x165998u: goto label_165998;
        case 0x16599cu: goto label_16599c;
        case 0x1659a0u: goto label_1659a0;
        case 0x1659a4u: goto label_1659a4;
        case 0x1659a8u: goto label_1659a8;
        case 0x1659acu: goto label_1659ac;
        case 0x1659b0u: goto label_1659b0;
        case 0x1659b4u: goto label_1659b4;
        case 0x1659b8u: goto label_1659b8;
        case 0x1659bcu: goto label_1659bc;
        case 0x1659c0u: goto label_1659c0;
        case 0x1659c4u: goto label_1659c4;
        case 0x1659c8u: goto label_1659c8;
        case 0x1659ccu: goto label_1659cc;
        case 0x1659d0u: goto label_1659d0;
        case 0x1659d4u: goto label_1659d4;
        case 0x1659d8u: goto label_1659d8;
        case 0x1659dcu: goto label_1659dc;
        case 0x1659e0u: goto label_1659e0;
        case 0x1659e4u: goto label_1659e4;
        case 0x1659e8u: goto label_1659e8;
        case 0x1659ecu: goto label_1659ec;
        case 0x1659f0u: goto label_1659f0;
        case 0x1659f4u: goto label_1659f4;
        case 0x1659f8u: goto label_1659f8;
        case 0x1659fcu: goto label_1659fc;
        case 0x165a00u: goto label_165a00;
        case 0x165a04u: goto label_165a04;
        case 0x165a08u: goto label_165a08;
        case 0x165a0cu: goto label_165a0c;
        case 0x165a10u: goto label_165a10;
        case 0x165a14u: goto label_165a14;
        case 0x165a18u: goto label_165a18;
        case 0x165a1cu: goto label_165a1c;
        case 0x165a20u: goto label_165a20;
        case 0x165a24u: goto label_165a24;
        case 0x165a28u: goto label_165a28;
        case 0x165a2cu: goto label_165a2c;
        case 0x165a30u: goto label_165a30;
        case 0x165a34u: goto label_165a34;
        case 0x165a38u: goto label_165a38;
        case 0x165a3cu: goto label_165a3c;
        case 0x165a40u: goto label_165a40;
        case 0x165a44u: goto label_165a44;
        case 0x165a48u: goto label_165a48;
        case 0x165a4cu: goto label_165a4c;
        case 0x165a50u: goto label_165a50;
        case 0x165a54u: goto label_165a54;
        case 0x165a58u: goto label_165a58;
        case 0x165a5cu: goto label_165a5c;
        case 0x165a60u: goto label_165a60;
        case 0x165a64u: goto label_165a64;
        default: break;
    }

    ctx->pc = 0x1658b8u;

label_1658b8:
    // 0x1658b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1658b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1658bc:
    // 0x1658bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1658bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1658c0:
    // 0x1658c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1658c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1658c4:
    // 0x1658c4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1658c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1658c8:
    // 0x1658c8: 0x86030098  lh          $v1, 0x98($s0)
    ctx->pc = 0x1658c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 152)));
label_1658cc:
    // 0x1658cc: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_1658d0:
    if (ctx->pc == 0x1658D0u) {
        ctx->pc = 0x1658D0u;
            // 0x1658d0: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x1658D4u;
        goto label_1658d4;
    }
    ctx->pc = 0x1658CCu;
    {
        const bool branch_taken_0x1658cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1658cc) {
            ctx->pc = 0x1658D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1658CCu;
            // 0x1658d0: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1658E8u;
            goto label_1658e8;
        }
    }
    ctx->pc = 0x1658D4u;
label_1658d4:
    // 0x1658d4: 0xc0595da  jal         func_165768
label_1658d8:
    if (ctx->pc == 0x1658D8u) {
        ctx->pc = 0x1658DCu;
        goto label_1658dc;
    }
    ctx->pc = 0x1658D4u;
    SET_GPR_U32(ctx, 31, 0x1658DCu);
    ctx->pc = 0x165768u;
    if (runtime->hasFunction(0x165768u)) {
        auto targetFn = runtime->lookupFunction(0x165768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1658DCu; }
        if (ctx->pc != 0x1658DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00165768_0x165768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1658DCu; }
        if (ctx->pc != 0x1658DCu) { return; }
    }
    ctx->pc = 0x1658DCu;
label_1658dc:
    // 0x1658dc: 0x10000025  b           . + 4 + (0x25 << 2)
label_1658e0:
    if (ctx->pc == 0x1658E0u) {
        ctx->pc = 0x1658E0u;
            // 0x1658e0: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->pc = 0x1658E4u;
        goto label_1658e4;
    }
    ctx->pc = 0x1658DCu;
    {
        const bool branch_taken_0x1658dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1658E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1658DCu;
            // 0x1658e0: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1658dc) {
            ctx->pc = 0x165974u;
            goto label_165974;
        }
    }
    ctx->pc = 0x1658E4u;
label_1658e4:
    // 0x1658e4: 0x0  nop
    ctx->pc = 0x1658e4u;
    // NOP
label_1658e8:
    // 0x1658e8: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_1658ec:
    if (ctx->pc == 0x1658ECu) {
        ctx->pc = 0x1658ECu;
            // 0x1658ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1658F0u;
        goto label_1658f0;
    }
    ctx->pc = 0x1658E8u;
    {
        const bool branch_taken_0x1658e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1658e8) {
            ctx->pc = 0x1658ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1658E8u;
            // 0x1658ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x165900u;
            goto label_165900;
        }
    }
    ctx->pc = 0x1658F0u;
label_1658f0:
    // 0x1658f0: 0xc058bc0  jal         func_162F00
label_1658f4:
    if (ctx->pc == 0x1658F4u) {
        ctx->pc = 0x1658F8u;
        goto label_1658f8;
    }
    ctx->pc = 0x1658F0u;
    SET_GPR_U32(ctx, 31, 0x1658F8u);
    ctx->pc = 0x162F00u;
    if (runtime->hasFunction(0x162F00u)) {
        auto targetFn = runtime->lookupFunction(0x162F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1658F8u; }
        if (ctx->pc != 0x1658F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00162F00_0x162f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1658F8u; }
        if (ctx->pc != 0x1658F8u) { return; }
    }
    ctx->pc = 0x1658F8u;
label_1658f8:
    // 0x1658f8: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1658fc:
    if (ctx->pc == 0x1658FCu) {
        ctx->pc = 0x1658FCu;
            // 0x1658fc: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->pc = 0x165900u;
        goto label_165900;
    }
    ctx->pc = 0x1658F8u;
    {
        const bool branch_taken_0x1658f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1658FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1658F8u;
            // 0x1658fc: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1658f8) {
            ctx->pc = 0x165974u;
            goto label_165974;
        }
    }
    ctx->pc = 0x165900u;
label_165900:
    // 0x165900: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_165904:
    if (ctx->pc == 0x165904u) {
        ctx->pc = 0x165904u;
            // 0x165904: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x165908u;
        goto label_165908;
    }
    ctx->pc = 0x165900u;
    {
        const bool branch_taken_0x165900 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x165900) {
            ctx->pc = 0x165904u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x165900u;
            // 0x165904: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x165918u;
            goto label_165918;
        }
    }
    ctx->pc = 0x165908u;
label_165908:
    // 0x165908: 0xc059720  jal         func_165C80
label_16590c:
    if (ctx->pc == 0x16590Cu) {
        ctx->pc = 0x165910u;
        goto label_165910;
    }
    ctx->pc = 0x165908u;
    SET_GPR_U32(ctx, 31, 0x165910u);
    ctx->pc = 0x165C80u;
    if (runtime->hasFunction(0x165C80u)) {
        auto targetFn = runtime->lookupFunction(0x165C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165910u; }
        if (ctx->pc != 0x165910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00165C80_0x165c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165910u; }
        if (ctx->pc != 0x165910u) { return; }
    }
    ctx->pc = 0x165910u;
label_165910:
    // 0x165910: 0x10000018  b           . + 4 + (0x18 << 2)
label_165914:
    if (ctx->pc == 0x165914u) {
        ctx->pc = 0x165914u;
            // 0x165914: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->pc = 0x165918u;
        goto label_165918;
    }
    ctx->pc = 0x165910u;
    {
        const bool branch_taken_0x165910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165910u;
            // 0x165914: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165910) {
            ctx->pc = 0x165974u;
            goto label_165974;
        }
    }
    ctx->pc = 0x165918u;
label_165918:
    // 0x165918: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_16591c:
    if (ctx->pc == 0x16591Cu) {
        ctx->pc = 0x16591Cu;
            // 0x16591c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x165920u;
        goto label_165920;
    }
    ctx->pc = 0x165918u;
    {
        const bool branch_taken_0x165918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x165918) {
            ctx->pc = 0x16591Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x165918u;
            // 0x16591c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x165930u;
            goto label_165930;
        }
    }
    ctx->pc = 0x165920u;
label_165920:
    // 0x165920: 0xc058e30  jal         func_1638C0
label_165924:
    if (ctx->pc == 0x165924u) {
        ctx->pc = 0x165928u;
        goto label_165928;
    }
    ctx->pc = 0x165920u;
    SET_GPR_U32(ctx, 31, 0x165928u);
    ctx->pc = 0x1638C0u;
    if (runtime->hasFunction(0x1638C0u)) {
        auto targetFn = runtime->lookupFunction(0x1638C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165928u; }
        if (ctx->pc != 0x165928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001638C0_0x1638c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165928u; }
        if (ctx->pc != 0x165928u) { return; }
    }
    ctx->pc = 0x165928u;
label_165928:
    // 0x165928: 0x10000012  b           . + 4 + (0x12 << 2)
label_16592c:
    if (ctx->pc == 0x16592Cu) {
        ctx->pc = 0x16592Cu;
            // 0x16592c: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->pc = 0x165930u;
        goto label_165930;
    }
    ctx->pc = 0x165928u;
    {
        const bool branch_taken_0x165928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16592Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165928u;
            // 0x16592c: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165928) {
            ctx->pc = 0x165974u;
            goto label_165974;
        }
    }
    ctx->pc = 0x165930u;
label_165930:
    // 0x165930: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_165934:
    if (ctx->pc == 0x165934u) {
        ctx->pc = 0x165934u;
            // 0x165934: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x165938u;
        goto label_165938;
    }
    ctx->pc = 0x165930u;
    {
        const bool branch_taken_0x165930 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x165930) {
            ctx->pc = 0x165934u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x165930u;
            // 0x165934: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x165948u;
            goto label_165948;
        }
    }
    ctx->pc = 0x165938u;
label_165938:
    // 0x165938: 0xc0590ce  jal         func_164338
label_16593c:
    if (ctx->pc == 0x16593Cu) {
        ctx->pc = 0x165940u;
        goto label_165940;
    }
    ctx->pc = 0x165938u;
    SET_GPR_U32(ctx, 31, 0x165940u);
    ctx->pc = 0x164338u;
    if (runtime->hasFunction(0x164338u)) {
        auto targetFn = runtime->lookupFunction(0x164338u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165940u; }
        if (ctx->pc != 0x165940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164338_0x164338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165940u; }
        if (ctx->pc != 0x165940u) { return; }
    }
    ctx->pc = 0x165940u;
label_165940:
    // 0x165940: 0x1000000c  b           . + 4 + (0xC << 2)
label_165944:
    if (ctx->pc == 0x165944u) {
        ctx->pc = 0x165944u;
            // 0x165944: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->pc = 0x165948u;
        goto label_165948;
    }
    ctx->pc = 0x165940u;
    {
        const bool branch_taken_0x165940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165940u;
            // 0x165944: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165940) {
            ctx->pc = 0x165974u;
            goto label_165974;
        }
    }
    ctx->pc = 0x165948u;
label_165948:
    // 0x165948: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_16594c:
    if (ctx->pc == 0x16594Cu) {
        ctx->pc = 0x16594Cu;
            // 0x16594c: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x165950u;
        goto label_165950;
    }
    ctx->pc = 0x165948u;
    {
        const bool branch_taken_0x165948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x165948) {
            ctx->pc = 0x16594Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x165948u;
            // 0x16594c: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
            ctx->pc = 0x165960u;
            goto label_165960;
        }
    }
    ctx->pc = 0x165950u;
label_165950:
    // 0x165950: 0xc0599a4  jal         func_166690
label_165954:
    if (ctx->pc == 0x165954u) {
        ctx->pc = 0x165958u;
        goto label_165958;
    }
    ctx->pc = 0x165950u;
    SET_GPR_U32(ctx, 31, 0x165958u);
    ctx->pc = 0x166690u;
    if (runtime->hasFunction(0x166690u)) {
        auto targetFn = runtime->lookupFunction(0x166690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165958u; }
        if (ctx->pc != 0x165958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166690_0x166690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165958u; }
        if (ctx->pc != 0x165958u) { return; }
    }
    ctx->pc = 0x165958u;
label_165958:
    // 0x165958: 0x10000006  b           . + 4 + (0x6 << 2)
label_16595c:
    if (ctx->pc == 0x16595Cu) {
        ctx->pc = 0x16595Cu;
            // 0x16595c: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->pc = 0x165960u;
        goto label_165960;
    }
    ctx->pc = 0x165958u;
    {
        const bool branch_taken_0x165958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16595Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165958u;
            // 0x16595c: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165958) {
            ctx->pc = 0x165974u;
            goto label_165974;
        }
    }
    ctx->pc = 0x165960u;
label_165960:
    // 0x165960: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_165964:
    if (ctx->pc == 0x165964u) {
        ctx->pc = 0x165964u;
            // 0x165964: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->pc = 0x165968u;
        goto label_165968;
    }
    ctx->pc = 0x165960u;
    {
        const bool branch_taken_0x165960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x165960) {
            ctx->pc = 0x165964u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x165960u;
            // 0x165964: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x165974u;
            goto label_165974;
        }
    }
    ctx->pc = 0x165968u;
label_165968:
    // 0x165968: 0xc058b40  jal         func_162D00
label_16596c:
    if (ctx->pc == 0x16596Cu) {
        ctx->pc = 0x165970u;
        goto label_165970;
    }
    ctx->pc = 0x165968u;
    SET_GPR_U32(ctx, 31, 0x165970u);
    ctx->pc = 0x162D00u;
    if (runtime->hasFunction(0x162D00u)) {
        auto targetFn = runtime->lookupFunction(0x162D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165970u; }
        if (ctx->pc != 0x165970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00162D00_0x162d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165970u; }
        if (ctx->pc != 0x165970u) { return; }
    }
    ctx->pc = 0x165970u;
label_165970:
    // 0x165970: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x165970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_165974:
    // 0x165974: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_165978:
    if (ctx->pc == 0x165978u) {
        ctx->pc = 0x165978u;
            // 0x165978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16597Cu;
        goto label_16597c;
    }
    ctx->pc = 0x165974u;
    {
        const bool branch_taken_0x165974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165974u;
            // 0x165978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165974) {
            ctx->pc = 0x165990u;
            goto label_165990;
        }
    }
    ctx->pc = 0x16597Cu;
label_16597c:
    // 0x16597c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16597cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_165980:
    // 0x165980: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x165980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_165984:
    // 0x165984: 0x8059668  j           func_1659A0
label_165988:
    if (ctx->pc == 0x165988u) {
        ctx->pc = 0x165988u;
            // 0x165988: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x16598Cu;
        goto label_16598c;
    }
    ctx->pc = 0x165984u;
    ctx->pc = 0x165988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165984u;
            // 0x165988: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1659A0u;
    goto label_1659a0;
    ctx->pc = 0x16598Cu;
label_16598c:
    // 0x16598c: 0x0  nop
    ctx->pc = 0x16598cu;
    // NOP
label_165990:
    // 0x165990: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x165990u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_165994:
    // 0x165994: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x165994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_165998:
    // 0x165998: 0x3e00008  jr          $ra
label_16599c:
    if (ctx->pc == 0x16599Cu) {
        ctx->pc = 0x16599Cu;
            // 0x16599c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1659A0u;
        goto label_1659a0;
    }
    ctx->pc = 0x165998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16599Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165998u;
            // 0x16599c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1659A0u;
label_1659a0:
    // 0x1659a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1659a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1659a4:
    // 0x1659a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1659a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1659a8:
    // 0x1659a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1659a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1659ac:
    // 0x1659ac: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1659acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1659b0:
    // 0x1659b0: 0x8202000e  lb          $v0, 0xE($s0)
    ctx->pc = 0x1659b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1659b4:
    // 0x1659b4: 0x8e060090  lw          $a2, 0x90($s0)
    ctx->pc = 0x1659b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_1659b8:
    // 0x1659b8: 0x8e0300f4  lw          $v1, 0xF4($s0)
    ctx->pc = 0x1659b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_1659bc:
    // 0x1659bc: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x1659bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1659c0:
    // 0x1659c0: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x1659c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_1659c4:
    // 0x1659c4: 0x8e0700fc  lw          $a3, 0xFC($s0)
    ctx->pc = 0x1659c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1659c8:
    // 0x1659c8: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x1659c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1659cc:
    // 0x1659cc: 0x8e040100  lw          $a0, 0x100($s0)
    ctx->pc = 0x1659ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_1659d0:
    // 0x1659d0: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1659d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_1659d4:
    // 0x1659d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1659d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1659d8:
    // 0x1659d8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1659d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1659dc:
    // 0x1659dc: 0x28a20000  slti        $v0, $a1, 0x0
    ctx->pc = 0x1659dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
label_1659e0:
    // 0x1659e0: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x1659e0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_1659e4:
    // 0x1659e4: 0xe0f809  jalr        $a3
label_1659e8:
    if (ctx->pc == 0x1659E8u) {
        ctx->pc = 0x1659E8u;
            // 0x1659e8: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x1659ECu;
        goto label_1659ec;
    }
    ctx->pc = 0x1659E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x1659ECu);
        ctx->pc = 0x1659E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1659E4u;
            // 0x1659e8: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1659ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1659ECu; }
            if (ctx->pc != 0x1659ECu) { return; }
        }
        }
    }
    ctx->pc = 0x1659ECu;
label_1659ec:
    // 0x1659ec: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x1659ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1659f0:
    // 0x1659f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1659f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1659f4:
    // 0x1659f4: 0xae0200f4  sw          $v0, 0xF4($s0)
    ctx->pc = 0x1659f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
label_1659f8:
    // 0x1659f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1659f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1659fc:
    // 0x1659fc: 0x3e00008  jr          $ra
label_165a00:
    if (ctx->pc == 0x165A00u) {
        ctx->pc = 0x165A00u;
            // 0x165a00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x165A04u;
        goto label_165a04;
    }
    ctx->pc = 0x1659FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1659FCu;
            // 0x165a00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x165A04u;
label_165a04:
    // 0x165a04: 0x0  nop
    ctx->pc = 0x165a04u;
    // NOP
label_165a08:
    // 0x165a08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x165a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_165a0c:
    // 0x165a0c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x165a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_165a10:
    // 0x165a10: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x165a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_165a14:
    // 0x165a14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x165a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_165a18:
    // 0x165a18: 0x24506200  addiu       $s0, $v0, 0x6200
    ctx->pc = 0x165a18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 25088));
label_165a1c:
    // 0x165a1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x165a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_165a20:
    // 0x165a20: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x165a20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_165a24:
    // 0x165a24: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x165a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_165a28:
    // 0x165a28: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x165a28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_165a2c:
    // 0x165a2c: 0x0  nop
    ctx->pc = 0x165a2cu;
    // NOP
label_165a30:
    // 0x165a30: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x165a30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_165a34:
    // 0x165a34: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
label_165a38:
    if (ctx->pc == 0x165A38u) {
        ctx->pc = 0x165A38u;
            // 0x165a38: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x165A3Cu;
        goto label_165a3c;
    }
    ctx->pc = 0x165A34u;
    {
        const bool branch_taken_0x165a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x165a34) {
            ctx->pc = 0x165A38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x165A34u;
            // 0x165a38: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x165A48u;
            goto label_165a48;
        }
    }
    ctx->pc = 0x165A3Cu;
label_165a3c:
    // 0x165a3c: 0xc05962e  jal         func_1658B8
label_165a40:
    if (ctx->pc == 0x165A40u) {
        ctx->pc = 0x165A40u;
            // 0x165a40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x165A44u;
        goto label_165a44;
    }
    ctx->pc = 0x165A3Cu;
    SET_GPR_U32(ctx, 31, 0x165A44u);
    ctx->pc = 0x165A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165A3Cu;
            // 0x165a40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1658B8u;
    goto label_1658b8;
    ctx->pc = 0x165A44u;
label_165a44:
    // 0x165a44: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x165a44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_165a48:
    // 0x165a48: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
label_165a4c:
    if (ctx->pc == 0x165A4Cu) {
        ctx->pc = 0x165A4Cu;
            // 0x165a4c: 0x26100104  addiu       $s0, $s0, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
        ctx->pc = 0x165A50u;
        goto label_165a50;
    }
    ctx->pc = 0x165A48u;
    {
        const bool branch_taken_0x165a48 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x165A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165A48u;
            // 0x165a4c: 0x26100104  addiu       $s0, $s0, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165a48) {
            ctx->pc = 0x165A30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_165a30;
        }
    }
    ctx->pc = 0x165A50u;
label_165a50:
    // 0x165a50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x165a50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_165a54:
    // 0x165a54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x165a54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_165a58:
    // 0x165a58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x165a58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_165a5c:
    // 0x165a5c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x165a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_165a60:
    // 0x165a60: 0x3e00008  jr          $ra
label_165a64:
    if (ctx->pc == 0x165A64u) {
        ctx->pc = 0x165A64u;
            // 0x165a64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x165A68u;
        goto label_fallthrough_0x165a60;
    }
    ctx->pc = 0x165A60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165A60u;
            // 0x165a64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x165a60:
    ctx->pc = 0x165A68u;
}
