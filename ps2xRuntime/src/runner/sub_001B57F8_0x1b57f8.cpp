#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B57F8
// Address: 0x1b57f8 - 0x1b5988
void sub_001B57F8_0x1b57f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B57F8_0x1b57f8");
#endif

    switch (ctx->pc) {
        case 0x1b585cu: goto label_1b585c;
        case 0x1b58b0u: goto label_1b58b0;
        case 0x1b58ecu: goto label_1b58ec;
        case 0x1b5904u: goto label_1b5904;
        case 0x1b5920u: goto label_1b5920;
        case 0x1b5938u: goto label_1b5938;
        default: break;
    }

    ctx->pc = 0x1b57f8u;

    // 0x1b57f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b57f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b57fc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1b57fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5800: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b5800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b5804: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1b5804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5808: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b5808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b580c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1b580cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5810: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b5810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b5814: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1b5814u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5818: 0x8c620dc0  lw          $v0, 0xDC0($v1)
    ctx->pc = 0x1b5818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3520)));
    // 0x1b581c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B581Cu;
    {
        const bool branch_taken_0x1b581c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B581Cu;
            // 0x1b5820: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b581c) {
            ctx->pc = 0x1B5838u;
            goto label_1b5838;
        }
    }
    ctx->pc = 0x1B5824u;
    // 0x1b5824: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b5824u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5828: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b5828u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b582c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b582cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5830: 0x806d620  j           func_1B5880
    ctx->pc = 0x1B5830u;
    ctx->pc = 0x1B5834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5830u;
            // 0x1b5834: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5880u;
    goto label_1b5880;
    ctx->pc = 0x1B5838u;
label_1b5838:
    // 0x1b5838: 0x8c620da8  lw          $v0, 0xDA8($v1)
    ctx->pc = 0x1b5838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3496)));
    // 0x1b583c: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B583Cu;
    {
        const bool branch_taken_0x1b583c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1B5840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B583Cu;
            // 0x1b5840: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b583c) {
            ctx->pc = 0x1B5850u;
            goto label_1b5850;
        }
    }
    ctx->pc = 0x1B5844u;
    // 0x1b5844: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5844u;
    {
        const bool branch_taken_0x1b5844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5844u;
            // 0x1b5848: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5844) {
            ctx->pc = 0x1B5860u;
            goto label_1b5860;
        }
    }
    ctx->pc = 0x1B584Cu;
    // 0x1b584c: 0x0  nop
    ctx->pc = 0x1b584cu;
    // NOP
label_1b5850:
    // 0x1b5850: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1b5850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5854: 0xc065a72  jal         func_1969C8
    ctx->pc = 0x1B5854u;
    SET_GPR_U32(ctx, 31, 0x1B585Cu);
    ctx->pc = 0x1B5858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5854u;
            // 0x1b5858: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1969C8u;
    if (runtime->hasFunction(0x1969C8u)) {
        auto targetFn = runtime->lookupFunction(0x1969C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B585Cu; }
        if (ctx->pc != 0x1B585Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001969C8_0x1969c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B585Cu; }
        if (ctx->pc != 0x1B585Cu) { return; }
    }
    ctx->pc = 0x1B585Cu;
label_1b585c:
    // 0x1b585c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b585cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1b5860:
    // 0x1b5860: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x1b5860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x1b5864: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b5864u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5868: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1b5868u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1b586c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b586cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5870: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b5870u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b5874: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5874u;
            // 0x1b5878: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B587Cu;
    // 0x1b587c: 0x0  nop
    ctx->pc = 0x1b587cu;
    // NOP
label_1b5880:
    // 0x1b5880: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x1b5880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x1b5884: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1b5884u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1b5888: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B588Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5888u;
            // 0x1b588c: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5890u;
    // 0x1b5890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b5890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b5894: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b5894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b5898: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b5898u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b589c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b589cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b58a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b58a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b58a4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b58a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b58a8: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B58A8u;
    SET_GPR_U32(ctx, 31, 0x1B58B0u);
    ctx->pc = 0x1B58ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B58A8u;
            // 0x1b58ac: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B58B0u; }
        if (ctx->pc != 0x1B58B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B58B0u; }
        if (ctx->pc != 0x1B58B0u) { return; }
    }
    ctx->pc = 0x1B58B0u;
label_1b58b0:
    // 0x1b58b0: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b58b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b58b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B58B4u;
    {
        const bool branch_taken_0x1b58b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B58B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B58B4u;
            // 0x1b58b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b58b4) {
            ctx->pc = 0x1B58D8u;
            goto label_1b58d8;
        }
    }
    ctx->pc = 0x1B58BCu;
    // 0x1b58bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b58bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b58c0: 0x34a50158  ori         $a1, $a1, 0x158
    ctx->pc = 0x1b58c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)344);
    // 0x1b58c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b58c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b58c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b58c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b58cc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b58ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b58d0: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B58D0u;
    ctx->pc = 0x1B58D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B58D0u;
            // 0x1b58d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B58D8u;
label_1b58d8:
    // 0x1b58d8: 0x8e113720  lw          $s1, 0x3720($s0)
    ctx->pc = 0x1b58d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14112)));
    // 0x1b58dc: 0x52200025  beql        $s1, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x1B58DCu;
    {
        const bool branch_taken_0x1b58dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b58dc) {
            ctx->pc = 0x1B58E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B58DCu;
            // 0x1b58e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B5974u;
            goto label_1b5974;
        }
    }
    ctx->pc = 0x1B58E4u;
    // 0x1b58e4: 0xc06cf52  jal         func_1B3D48
    ctx->pc = 0x1B58E4u;
    SET_GPR_U32(ctx, 31, 0x1B58ECu);
    ctx->pc = 0x1B58E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B58E4u;
            // 0x1b58e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3D48u;
    if (runtime->hasFunction(0x1B3D48u)) {
        auto targetFn = runtime->lookupFunction(0x1B3D48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B58ECu; }
        if (ctx->pc != 0x1B58ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3D48_0x1b3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B58ECu; }
        if (ctx->pc != 0x1B58ECu) { return; }
    }
    ctx->pc = 0x1B58ECu;
label_1b58ec:
    // 0x1b58ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b58ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b58f0: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x1b58f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1b58f4: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1B58F4u;
    {
        const bool branch_taken_0x1b58f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B58F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B58F4u;
            // 0x1b58f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b58f4) {
            ctx->pc = 0x1B5970u;
            goto label_1b5970;
        }
    }
    ctx->pc = 0x1B58FCu;
    // 0x1b58fc: 0xc06d7aa  jal         func_1B5EA8
    ctx->pc = 0x1B58FCu;
    SET_GPR_U32(ctx, 31, 0x1B5904u);
    ctx->pc = 0x1B5EA8u;
    if (runtime->hasFunction(0x1B5EA8u)) {
        auto targetFn = runtime->lookupFunction(0x1B5EA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5904u; }
        if (ctx->pc != 0x1B5904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5EA8_0x1b5ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5904u; }
        if (ctx->pc != 0x1B5904u) { return; }
    }
    ctx->pc = 0x1B5904u;
label_1b5904:
    // 0x1b5904: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b5904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5908: 0x8e220db8  lw          $v0, 0xDB8($s1)
    ctx->pc = 0x1b5908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3512)));
    // 0x1b590c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b590cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b5910: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5910u;
    {
        const bool branch_taken_0x1b5910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5910u;
            // 0x1b5914: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5910) {
            ctx->pc = 0x1B5920u;
            goto label_1b5920;
        }
    }
    ctx->pc = 0x1B5918u;
    // 0x1b5918: 0xc06d7aa  jal         func_1B5EA8
    ctx->pc = 0x1B5918u;
    SET_GPR_U32(ctx, 31, 0x1B5920u);
    ctx->pc = 0x1B5EA8u;
    if (runtime->hasFunction(0x1B5EA8u)) {
        auto targetFn = runtime->lookupFunction(0x1B5EA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5920u; }
        if (ctx->pc != 0x1B5920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5EA8_0x1b5ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5920u; }
        if (ctx->pc != 0x1B5920u) { return; }
    }
    ctx->pc = 0x1B5920u;
label_1b5920:
    // 0x1b5920: 0x8e220dbc  lw          $v0, 0xDBC($s1)
    ctx->pc = 0x1b5920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3516)));
    // 0x1b5924: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B5924u;
    {
        const bool branch_taken_0x1b5924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5924u;
            // 0x1b5928: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5924) {
            ctx->pc = 0x1B5938u;
            goto label_1b5938;
        }
    }
    ctx->pc = 0x1B592Cu;
    // 0x1b592c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1b592cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b5930: 0xc06d7aa  jal         func_1B5EA8
    ctx->pc = 0x1B5930u;
    SET_GPR_U32(ctx, 31, 0x1B5938u);
    ctx->pc = 0x1B5934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5930u;
            // 0x1b5934: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5EA8u;
    if (runtime->hasFunction(0x1B5EA8u)) {
        auto targetFn = runtime->lookupFunction(0x1B5EA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5938u; }
        if (ctx->pc != 0x1B5938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5EA8_0x1b5ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5938u; }
        if (ctx->pc != 0x1B5938u) { return; }
    }
    ctx->pc = 0x1B5938u;
label_1b5938:
    // 0x1b5938: 0x6a420007  ldl         $v0, 0x7($s2)
    ctx->pc = 0x1b5938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1b593c: 0x6e420000  ldr         $v0, 0x0($s2)
    ctx->pc = 0x1b593cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1b5940: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1b5940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1b5944: 0xb202372b  sdl         $v0, 0x372B($s0)
    ctx->pc = 0x1b5944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 14123); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b5948: 0xb6023724  sdr         $v0, 0x3724($s0)
    ctx->pc = 0x1b5948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 14116); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b594c: 0xae03372c  sw          $v1, 0x372C($s0)
    ctx->pc = 0x1b594cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 14124), GPR_U32(ctx, 3));
    // 0x1b5950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b5950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5954: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b5954u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b5958: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b5958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b595c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b595cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5960: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b5960u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5964: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b5964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b5968: 0x806e336  j           func_1B8CD8
    ctx->pc = 0x1B5968u;
    ctx->pc = 0x1B596Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5968u;
            // 0x1b596c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8CD8u;
    {
        auto targetFn = runtime->lookupFunction(0x1B8CD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B5970u;
label_1b5970:
    // 0x1b5970: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b5970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5974:
    // 0x1b5974: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b5974u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b5978: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b5978u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b597c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b597cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b5980: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5980u;
            // 0x1b5984: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5988u;
}
