#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B6560
// Address: 0x1b6560 - 0x1b6788
void sub_001B6560_0x1b6560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6560_0x1b6560");
#endif

    switch (ctx->pc) {
        case 0x1b6588u: goto label_1b6588;
        case 0x1b659cu: goto label_1b659c;
        case 0x1b65acu: goto label_1b65ac;
        case 0x1b65c0u: goto label_1b65c0;
        case 0x1b65d4u: goto label_1b65d4;
        case 0x1b65e8u: goto label_1b65e8;
        case 0x1b65f4u: goto label_1b65f4;
        case 0x1b6600u: goto label_1b6600;
        case 0x1b6610u: goto label_1b6610;
        case 0x1b661cu: goto label_1b661c;
        case 0x1b6628u: goto label_1b6628;
        case 0x1b6634u: goto label_1b6634;
        case 0x1b6644u: goto label_1b6644;
        case 0x1b6670u: goto label_1b6670;
        case 0x1b66a8u: goto label_1b66a8;
        default: break;
    }

    ctx->pc = 0x1b6560u;

    // 0x1b6560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b6560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b6564: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x1b6564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x1b6568: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b6568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b656c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b656cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6570: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b6570u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6574: 0x24457008  addiu       $a1, $v0, 0x7008
    ctx->pc = 0x1b6574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 28680));
    // 0x1b6578: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b6578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b657c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b657cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b6580: 0xc06dd7a  jal         func_1B75E8
    ctx->pc = 0x1B6580u;
    SET_GPR_U32(ctx, 31, 0x1B6588u);
    ctx->pc = 0x1B6584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6580u;
            // 0x1b6584: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B75E8u;
    if (runtime->hasFunction(0x1B75E8u)) {
        auto targetFn = runtime->lookupFunction(0x1B75E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6588u; }
        if (ctx->pc != 0x1B6588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B75E8_0x1b75e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6588u; }
        if (ctx->pc != 0x1B6588u) { return; }
    }
    ctx->pc = 0x1B6588u;
label_1b6588:
    // 0x1b6588: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1b6588u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x1b658c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b658cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6590: 0x24a57050  addiu       $a1, $a1, 0x7050
    ctx->pc = 0x1b6590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28752));
    // 0x1b6594: 0xc06dd7a  jal         func_1B75E8
    ctx->pc = 0x1B6594u;
    SET_GPR_U32(ctx, 31, 0x1B659Cu);
    ctx->pc = 0x1B6598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6594u;
            // 0x1b6598: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B75E8u;
    if (runtime->hasFunction(0x1B75E8u)) {
        auto targetFn = runtime->lookupFunction(0x1B75E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B659Cu; }
        if (ctx->pc != 0x1B659Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B75E8_0x1b75e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B659Cu; }
        if (ctx->pc != 0x1B659Cu) { return; }
    }
    ctx->pc = 0x1B659Cu;
label_1b659c:
    // 0x1b659c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b659cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b65a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b65a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b65a4: 0xc06dd7a  jal         func_1B75E8
    ctx->pc = 0x1B65A4u;
    SET_GPR_U32(ctx, 31, 0x1B65ACu);
    ctx->pc = 0x1B65A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B65A4u;
            // 0x1b65a8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B75E8u;
    if (runtime->hasFunction(0x1B75E8u)) {
        auto targetFn = runtime->lookupFunction(0x1B75E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B65ACu; }
        if (ctx->pc != 0x1B65ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B75E8_0x1b75e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B65ACu; }
        if (ctx->pc != 0x1B65ACu) { return; }
    }
    ctx->pc = 0x1B65ACu;
label_1b65ac:
    // 0x1b65ac: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1b65acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x1b65b0: 0x24a570b0  addiu       $a1, $a1, 0x70B0
    ctx->pc = 0x1b65b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28848));
    // 0x1b65b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b65b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b65b8: 0xc06dd7a  jal         func_1B75E8
    ctx->pc = 0x1B65B8u;
    SET_GPR_U32(ctx, 31, 0x1B65C0u);
    ctx->pc = 0x1B65BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B65B8u;
            // 0x1b65bc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B75E8u;
    if (runtime->hasFunction(0x1B75E8u)) {
        auto targetFn = runtime->lookupFunction(0x1B75E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B65C0u; }
        if (ctx->pc != 0x1B65C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B75E8_0x1b75e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B65C0u; }
        if (ctx->pc != 0x1B65C0u) { return; }
    }
    ctx->pc = 0x1B65C0u;
label_1b65c0:
    // 0x1b65c0: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1b65c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x1b65c4: 0x24a570d0  addiu       $a1, $a1, 0x70D0
    ctx->pc = 0x1b65c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28880));
    // 0x1b65c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b65c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b65cc: 0xc06dd7a  jal         func_1B75E8
    ctx->pc = 0x1B65CCu;
    SET_GPR_U32(ctx, 31, 0x1B65D4u);
    ctx->pc = 0x1B65D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B65CCu;
            // 0x1b65d0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B75E8u;
    if (runtime->hasFunction(0x1B75E8u)) {
        auto targetFn = runtime->lookupFunction(0x1B75E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B65D4u; }
        if (ctx->pc != 0x1B65D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B75E8_0x1b75e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B65D4u; }
        if (ctx->pc != 0x1B65D4u) { return; }
    }
    ctx->pc = 0x1B65D4u;
label_1b65d4:
    // 0x1b65d4: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1b65d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x1b65d8: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1b65d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b65dc: 0x24a57148  addiu       $a1, $a1, 0x7148
    ctx->pc = 0x1b65dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29000));
    // 0x1b65e0: 0xc06dd7a  jal         func_1B75E8
    ctx->pc = 0x1B65E0u;
    SET_GPR_U32(ctx, 31, 0x1B65E8u);
    ctx->pc = 0x1B65E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B65E0u;
            // 0x1b65e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B75E8u;
    if (runtime->hasFunction(0x1B75E8u)) {
        auto targetFn = runtime->lookupFunction(0x1B75E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B65E8u; }
        if (ctx->pc != 0x1B65E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B75E8_0x1b75e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B65E8u; }
        if (ctx->pc != 0x1B65E8u) { return; }
    }
    ctx->pc = 0x1B65E8u;
label_1b65e8:
    // 0x1b65e8: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x1b65e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x1b65ec: 0xc06d9f4  jal         func_1B67D0
    ctx->pc = 0x1B65ECu;
    SET_GPR_U32(ctx, 31, 0x1B65F4u);
    ctx->pc = 0x1B65F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B65ECu;
            // 0x1b65f0: 0x2624001c  addiu       $a0, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B67D0u;
    if (runtime->hasFunction(0x1B67D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B67D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B65F4u; }
        if (ctx->pc != 0x1B65F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B67D0_0x1b67d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B65F4u; }
        if (ctx->pc != 0x1B65F4u) { return; }
    }
    ctx->pc = 0x1B65F4u;
label_1b65f4:
    // 0x1b65f4: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x1b65f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x1b65f8: 0xc06d9e2  jal         func_1B6788
    ctx->pc = 0x1B65F8u;
    SET_GPR_U32(ctx, 31, 0x1B6600u);
    ctx->pc = 0x1B65FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B65F8u;
            // 0x1b65fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6788u;
    if (runtime->hasFunction(0x1B6788u)) {
        auto targetFn = runtime->lookupFunction(0x1B6788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6600u; }
        if (ctx->pc != 0x1B6600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6788_0x1b6788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6600u; }
        if (ctx->pc != 0x1B6600u) { return; }
    }
    ctx->pc = 0x1B6600u;
label_1b6600:
    // 0x1b6600: 0x2624003c  addiu       $a0, $s1, 0x3C
    ctx->pc = 0x1b6600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x1b6604: 0x3c057fff  lui         $a1, 0x7FFF
    ctx->pc = 0x1b6604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
    // 0x1b6608: 0xc06d9e2  jal         func_1B6788
    ctx->pc = 0x1B6608u;
    SET_GPR_U32(ctx, 31, 0x1B6610u);
    ctx->pc = 0x1B660Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6608u;
            // 0x1b660c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6788u;
    if (runtime->hasFunction(0x1B6788u)) {
        auto targetFn = runtime->lookupFunction(0x1B6788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6610u; }
        if (ctx->pc != 0x1B6610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6788_0x1b6788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6610u; }
        if (ctx->pc != 0x1B6610u) { return; }
    }
    ctx->pc = 0x1B6610u;
label_1b6610:
    // 0x1b6610: 0x26240068  addiu       $a0, $s1, 0x68
    ctx->pc = 0x1b6610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    // 0x1b6614: 0xc06d9e2  jal         func_1B6788
    ctx->pc = 0x1B6614u;
    SET_GPR_U32(ctx, 31, 0x1B661Cu);
    ctx->pc = 0x1B6618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6614u;
            // 0x1b6618: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6788u;
    if (runtime->hasFunction(0x1B6788u)) {
        auto targetFn = runtime->lookupFunction(0x1B6788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B661Cu; }
        if (ctx->pc != 0x1B661Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6788_0x1b6788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B661Cu; }
        if (ctx->pc != 0x1B661Cu) { return; }
    }
    ctx->pc = 0x1B661Cu;
label_1b661c:
    // 0x1b661c: 0x26240094  addiu       $a0, $s1, 0x94
    ctx->pc = 0x1b661cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
    // 0x1b6620: 0xc06d9e2  jal         func_1B6788
    ctx->pc = 0x1B6620u;
    SET_GPR_U32(ctx, 31, 0x1B6628u);
    ctx->pc = 0x1B6624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6620u;
            // 0x1b6624: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6788u;
    if (runtime->hasFunction(0x1B6788u)) {
        auto targetFn = runtime->lookupFunction(0x1B6788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6628u; }
        if (ctx->pc != 0x1B6628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6788_0x1b6788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6628u; }
        if (ctx->pc != 0x1B6628u) { return; }
    }
    ctx->pc = 0x1B6628u;
label_1b6628:
    // 0x1b6628: 0x262400ec  addiu       $a0, $s1, 0xEC
    ctx->pc = 0x1b6628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 236));
    // 0x1b662c: 0xc06d9e2  jal         func_1B6788
    ctx->pc = 0x1B662Cu;
    SET_GPR_U32(ctx, 31, 0x1B6634u);
    ctx->pc = 0x1B6630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B662Cu;
            // 0x1b6630: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6788u;
    if (runtime->hasFunction(0x1B6788u)) {
        auto targetFn = runtime->lookupFunction(0x1B6788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6634u; }
        if (ctx->pc != 0x1B6634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6788_0x1b6788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6634u; }
        if (ctx->pc != 0x1B6634u) { return; }
    }
    ctx->pc = 0x1B6634u;
label_1b6634:
    // 0x1b6634: 0x26240118  addiu       $a0, $s1, 0x118
    ctx->pc = 0x1b6634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 280));
    // 0x1b6638: 0x3c057fff  lui         $a1, 0x7FFF
    ctx->pc = 0x1b6638u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
    // 0x1b663c: 0xc06d9e2  jal         func_1B6788
    ctx->pc = 0x1B663Cu;
    SET_GPR_U32(ctx, 31, 0x1B6644u);
    ctx->pc = 0x1B6640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B663Cu;
            // 0x1b6640: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6788u;
    if (runtime->hasFunction(0x1B6788u)) {
        auto targetFn = runtime->lookupFunction(0x1B6788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6644u; }
        if (ctx->pc != 0x1B6644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6788_0x1b6788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6644u; }
        if (ctx->pc != 0x1B6644u) { return; }
    }
    ctx->pc = 0x1B6644u;
label_1b6644:
    // 0x1b6644: 0xae200144  sw          $zero, 0x144($s1)
    ctx->pc = 0x1b6644u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 0));
    // 0x1b6648: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b6648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b664c: 0xae200148  sw          $zero, 0x148($s1)
    ctx->pc = 0x1b664cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 0));
    // 0x1b6650: 0xae200160  sw          $zero, 0x160($s1)
    ctx->pc = 0x1b6650u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 0));
    // 0x1b6654: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x1b6654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1b6658: 0xae200164  sw          $zero, 0x164($s1)
    ctx->pc = 0x1b6658u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 356), GPR_U32(ctx, 0));
    // 0x1b665c: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1b665cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1b6660: 0xae200168  sw          $zero, 0x168($s1)
    ctx->pc = 0x1b6660u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 360), GPR_U32(ctx, 0));
    // 0x1b6664: 0xfe220158  sd          $v0, 0x158($s1)
    ctx->pc = 0x1b6664u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 344), GPR_U64(ctx, 2));
    // 0x1b6668: 0xfe220150  sd          $v0, 0x150($s1)
    ctx->pc = 0x1b6668u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 336), GPR_U64(ctx, 2));
    // 0x1b666c: 0x262201e8  addiu       $v0, $s1, 0x1E8
    ctx->pc = 0x1b666cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 488));
label_1b6670:
    // 0x1b6670: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1b6670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b6674: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b6674u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b6678: 0x0  nop
    ctx->pc = 0x1b6678u;
    // NOP
    // 0x1b667c: 0x0  nop
    ctx->pc = 0x1b667cu;
    // NOP
    // 0x1b6680: 0x0  nop
    ctx->pc = 0x1b6680u;
    // NOP
    // 0x1b6684: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B6684u;
    {
        const bool branch_taken_0x1b6684 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1B6688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6684u;
            // 0x1b6688: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6684) {
            ctx->pc = 0x1B6670u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b6670;
        }
    }
    ctx->pc = 0x1B668Cu;
    // 0x1b668c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b668cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6690: 0xae2001f0  sw          $zero, 0x1F0($s1)
    ctx->pc = 0x1b6690u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 496), GPR_U32(ctx, 0));
    // 0x1b6694: 0xae2001f4  sw          $zero, 0x1F4($s1)
    ctx->pc = 0x1b6694u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 500), GPR_U32(ctx, 0));
    // 0x1b6698: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1b6698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1b669c: 0xae2001f8  sw          $zero, 0x1F8($s1)
    ctx->pc = 0x1b669cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 504), GPR_U32(ctx, 0));
    // 0x1b66a0: 0xae2201ec  sw          $v0, 0x1EC($s1)
    ctx->pc = 0x1b66a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 492), GPR_U32(ctx, 2));
    // 0x1b66a4: 0x2482026c  addiu       $v0, $a0, 0x26C
    ctx->pc = 0x1b66a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 620));
label_1b66a8:
    // 0x1b66a8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1b66a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b66ac: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b66acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b66b0: 0x0  nop
    ctx->pc = 0x1b66b0u;
    // NOP
    // 0x1b66b4: 0x0  nop
    ctx->pc = 0x1b66b4u;
    // NOP
    // 0x1b66b8: 0x0  nop
    ctx->pc = 0x1b66b8u;
    // NOP
    // 0x1b66bc: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B66BCu;
    {
        const bool branch_taken_0x1b66bc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1B66C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B66BCu;
            // 0x1b66c0: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b66bc) {
            ctx->pc = 0x1B66A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b66a8;
        }
    }
    ctx->pc = 0x1B66C4u;
    // 0x1b66c4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1b66c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b66c8: 0xae2002a8  sw          $zero, 0x2A8($s1)
    ctx->pc = 0x1b66c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 680), GPR_U32(ctx, 0));
    // 0x1b66cc: 0xae2702cc  sw          $a3, 0x2CC($s1)
    ctx->pc = 0x1b66ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 716), GPR_U32(ctx, 7));
    // 0x1b66d0: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x1b66d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
    // 0x1b66d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b66d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b66d8: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x1b66d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1b66dc: 0x8e2802a8  lw          $t0, 0x2A8($s1)
    ctx->pc = 0x1b66dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
    // 0x1b66e0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1b66e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1b66e4: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x1b66e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x1b66e8: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x1b66e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1b66ec: 0xae2202e0  sw          $v0, 0x2E0($s1)
    ctx->pc = 0x1b66ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 736), GPR_U32(ctx, 2));
    // 0x1b66f0: 0xae2602a0  sw          $a2, 0x2A0($s1)
    ctx->pc = 0x1b66f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 672), GPR_U32(ctx, 6));
    // 0x1b66f4: 0xae2002e4  sw          $zero, 0x2E4($s1)
    ctx->pc = 0x1b66f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 740), GPR_U32(ctx, 0));
    // 0x1b66f8: 0xae2302ac  sw          $v1, 0x2AC($s1)
    ctx->pc = 0x1b66f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 684), GPR_U32(ctx, 3));
    // 0x1b66fc: 0xae2502e8  sw          $a1, 0x2E8($s1)
    ctx->pc = 0x1b66fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 744), GPR_U32(ctx, 5));
    // 0x1b6700: 0xae2402bc  sw          $a0, 0x2BC($s1)
    ctx->pc = 0x1b6700u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 700), GPR_U32(ctx, 4));
    // 0x1b6704: 0xae2802d0  sw          $t0, 0x2D0($s1)
    ctx->pc = 0x1b6704u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 720), GPR_U32(ctx, 8));
    // 0x1b6708: 0xae2702ec  sw          $a3, 0x2EC($s1)
    ctx->pc = 0x1b6708u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 748), GPR_U32(ctx, 7));
    // 0x1b670c: 0xae22027c  sw          $v0, 0x27C($s1)
    ctx->pc = 0x1b670cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 636), GPR_U32(ctx, 2));
    // 0x1b6710: 0xae250280  sw          $a1, 0x280($s1)
    ctx->pc = 0x1b6710u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 640), GPR_U32(ctx, 5));
    // 0x1b6714: 0xae220284  sw          $v0, 0x284($s1)
    ctx->pc = 0x1b6714u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 644), GPR_U32(ctx, 2));
    // 0x1b6718: 0xae250288  sw          $a1, 0x288($s1)
    ctx->pc = 0x1b6718u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 648), GPR_U32(ctx, 5));
    // 0x1b671c: 0xae27028c  sw          $a3, 0x28C($s1)
    ctx->pc = 0x1b671cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 652), GPR_U32(ctx, 7));
    // 0x1b6720: 0xae250290  sw          $a1, 0x290($s1)
    ctx->pc = 0x1b6720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 656), GPR_U32(ctx, 5));
    // 0x1b6724: 0xae220294  sw          $v0, 0x294($s1)
    ctx->pc = 0x1b6724u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 660), GPR_U32(ctx, 2));
    // 0x1b6728: 0xae260298  sw          $a2, 0x298($s1)
    ctx->pc = 0x1b6728u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 664), GPR_U32(ctx, 6));
    // 0x1b672c: 0xae2502b8  sw          $a1, 0x2B8($s1)
    ctx->pc = 0x1b672cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 696), GPR_U32(ctx, 5));
    // 0x1b6730: 0xae2702c0  sw          $a3, 0x2C0($s1)
    ctx->pc = 0x1b6730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 704), GPR_U32(ctx, 7));
    // 0x1b6734: 0xae2702c8  sw          $a3, 0x2C8($s1)
    ctx->pc = 0x1b6734u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 712), GPR_U32(ctx, 7));
    // 0x1b6738: 0xae20029c  sw          $zero, 0x29C($s1)
    ctx->pc = 0x1b6738u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 668), GPR_U32(ctx, 0));
    // 0x1b673c: 0xae2002a4  sw          $zero, 0x2A4($s1)
    ctx->pc = 0x1b673cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 676), GPR_U32(ctx, 0));
    // 0x1b6740: 0xae2002b0  sw          $zero, 0x2B0($s1)
    ctx->pc = 0x1b6740u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 688), GPR_U32(ctx, 0));
    // 0x1b6744: 0xae2002b4  sw          $zero, 0x2B4($s1)
    ctx->pc = 0x1b6744u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 692), GPR_U32(ctx, 0));
    // 0x1b6748: 0xae2002c4  sw          $zero, 0x2C4($s1)
    ctx->pc = 0x1b6748u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 708), GPR_U32(ctx, 0));
    // 0x1b674c: 0xae2002dc  sw          $zero, 0x2DC($s1)
    ctx->pc = 0x1b674cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 732), GPR_U32(ctx, 0));
    // 0x1b6750: 0xae2002f0  sw          $zero, 0x2F0($s1)
    ctx->pc = 0x1b6750u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 752), GPR_U32(ctx, 0));
    // 0x1b6754: 0xae2005b8  sw          $zero, 0x5B8($s1)
    ctx->pc = 0x1b6754u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1464), GPR_U32(ctx, 0));
    // 0x1b6758: 0xae2005bc  sw          $zero, 0x5BC($s1)
    ctx->pc = 0x1b6758u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1468), GPR_U32(ctx, 0));
    // 0x1b675c: 0xae2005c0  sw          $zero, 0x5C0($s1)
    ctx->pc = 0x1b675cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1472), GPR_U32(ctx, 0));
    // 0x1b6760: 0xae2005c4  sw          $zero, 0x5C4($s1)
    ctx->pc = 0x1b6760u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1476), GPR_U32(ctx, 0));
    // 0x1b6764: 0xae2005c8  sw          $zero, 0x5C8($s1)
    ctx->pc = 0x1b6764u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1480), GPR_U32(ctx, 0));
    // 0x1b6768: 0xae2005d0  sw          $zero, 0x5D0($s1)
    ctx->pc = 0x1b6768u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1488), GPR_U32(ctx, 0));
    // 0x1b676c: 0xae2005cc  sw          $zero, 0x5CC($s1)
    ctx->pc = 0x1b676cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1484), GPR_U32(ctx, 0));
    // 0x1b6770: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6774: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b6774u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b6778: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b6778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b677c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B677Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B677Cu;
            // 0x1b6780: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B6784u;
    // 0x1b6784: 0x0  nop
    ctx->pc = 0x1b6784u;
    // NOP
}
