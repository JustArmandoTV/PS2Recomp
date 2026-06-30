#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00463FF0
// Address: 0x463ff0 - 0x4641e0
void sub_00463FF0_0x463ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00463FF0_0x463ff0");
#endif

    switch (ctx->pc) {
        case 0x464038u: goto label_464038;
        case 0x464074u: goto label_464074;
        case 0x4640ecu: goto label_4640ec;
        case 0x4640f4u: goto label_4640f4;
        case 0x464134u: goto label_464134;
        case 0x464144u: goto label_464144;
        case 0x464154u: goto label_464154;
        case 0x464174u: goto label_464174;
        case 0x4641c0u: goto label_4641c0;
        default: break;
    }

    ctx->pc = 0x463ff0u;

    // 0x463ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x463FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x463FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x463FF0u;
            // 0x463ff4: 0x8c8200d4  lw          $v0, 0xD4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x463FF8u;
    // 0x463ff8: 0x0  nop
    ctx->pc = 0x463ff8u;
    // NOP
    // 0x463ffc: 0x0  nop
    ctx->pc = 0x463ffcu;
    // NOP
    // 0x464000: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x464000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x464004: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x464004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x464008: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x464008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x46400c: 0x90830301  lbu         $v1, 0x301($a0)
    ctx->pc = 0x46400cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 769)));
    // 0x464010: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x464010u;
    {
        const bool branch_taken_0x464010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x464014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x464010u;
            // 0x464014: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464010) {
            ctx->pc = 0x464044u;
            goto label_464044;
        }
    }
    ctx->pc = 0x464018u;
    // 0x464018: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x464018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x46401c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x46401cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x464020: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x464020u;
    {
        const bool branch_taken_0x464020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x464020) {
            ctx->pc = 0x464024u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x464020u;
            // 0x464024: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x464048u;
            goto label_464048;
        }
    }
    ctx->pc = 0x464028u;
    // 0x464028: 0x8e04029c  lw          $a0, 0x29C($s0)
    ctx->pc = 0x464028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 668)));
    // 0x46402c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x46402cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464030: 0xc122d2c  jal         func_48B4B0
    ctx->pc = 0x464030u;
    SET_GPR_U32(ctx, 31, 0x464038u);
    ctx->pc = 0x464034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464030u;
            // 0x464034: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464038u; }
        if (ctx->pc != 0x464038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464038u; }
        if (ctx->pc != 0x464038u) { return; }
    }
    ctx->pc = 0x464038u;
label_464038:
    // 0x464038: 0x92030301  lbu         $v1, 0x301($s0)
    ctx->pc = 0x464038u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 769)));
    // 0x46403c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x46403cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x464040: 0xa2030301  sb          $v1, 0x301($s0)
    ctx->pc = 0x464040u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 769), (uint8_t)GPR_U32(ctx, 3));
label_464044:
    // 0x464044: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x464044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_464048:
    // 0x464048: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x464048u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46404c: 0x3e00008  jr          $ra
    ctx->pc = 0x46404Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x464050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46404Cu;
            // 0x464050: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x464054u;
    // 0x464054: 0x0  nop
    ctx->pc = 0x464054u;
    // NOP
    // 0x464058: 0x0  nop
    ctx->pc = 0x464058u;
    // NOP
    // 0x46405c: 0x0  nop
    ctx->pc = 0x46405cu;
    // NOP
    // 0x464060: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x464060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x464064: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x464064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x464068: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x464068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x46406c: 0xc0e34b0  jal         func_38D2C0
    ctx->pc = 0x46406Cu;
    SET_GPR_U32(ctx, 31, 0x464074u);
    ctx->pc = 0x464070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46406Cu;
            // 0x464070: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D2C0u;
    if (runtime->hasFunction(0x38D2C0u)) {
        auto targetFn = runtime->lookupFunction(0x38D2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464074u; }
        if (ctx->pc != 0x464074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D2C0_0x38d2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464074u; }
        if (ctx->pc != 0x464074u) { return; }
    }
    ctx->pc = 0x464074u;
label_464074:
    // 0x464074: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x464074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x464078: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x464078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x46407c: 0x54830004  bnel        $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x46407Cu;
    {
        const bool branch_taken_0x46407c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x46407c) {
            ctx->pc = 0x464080u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46407Cu;
            // 0x464080: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x464090u;
            goto label_464090;
        }
    }
    ctx->pc = 0x464084u;
    // 0x464084: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x464084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x464088: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x464088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x46408c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x46408cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_464090:
    // 0x464090: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x464090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x464094: 0x3e00008  jr          $ra
    ctx->pc = 0x464094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x464098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x464094u;
            // 0x464098: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x46409Cu;
    // 0x46409c: 0x0  nop
    ctx->pc = 0x46409cu;
    // NOP
    // 0x4640a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4640a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4640a4: 0x3c02ff1e  lui         $v0, 0xFF1E
    ctx->pc = 0x4640a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65310 << 16));
    // 0x4640a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4640a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4640ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4640acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4640b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4640b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4640b4: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x4640b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x4640b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4640b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4640bc: 0x8ca8002c  lw          $t0, 0x2C($a1)
    ctx->pc = 0x4640bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x4640c0: 0x3444fe7f  ori         $a0, $v0, 0xFE7F
    ctx->pc = 0x4640c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65151);
    // 0x4640c4: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x4640c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
    // 0x4640c8: 0x34430180  ori         $v1, $v0, 0x180
    ctx->pc = 0x4640c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)384);
    // 0x4640cc: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x4640ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x4640d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4640d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4640d4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x4640d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4640d8: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x4640d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x4640dc: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4640dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x4640e0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4640e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4640e4: 0xc08bff0  jal         func_22FFC0
    ctx->pc = 0x4640E4u;
    SET_GPR_U32(ctx, 31, 0x4640ECu);
    ctx->pc = 0x4640E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4640E4u;
            // 0x4640e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4640ECu; }
        if (ctx->pc != 0x4640ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4640ECu; }
        if (ctx->pc != 0x4640ECu) { return; }
    }
    ctx->pc = 0x4640ECu;
label_4640ec:
    // 0x4640ec: 0xc122c94  jal         func_48B250
    ctx->pc = 0x4640ECu;
    SET_GPR_U32(ctx, 31, 0x4640F4u);
    ctx->pc = 0x4640F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4640ECu;
            // 0x4640f0: 0x8e04029c  lw          $a0, 0x29C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 668)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B250u;
    if (runtime->hasFunction(0x48B250u)) {
        auto targetFn = runtime->lookupFunction(0x48B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4640F4u; }
        if (ctx->pc != 0x4640F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B250_0x48b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4640F4u; }
        if (ctx->pc != 0x4640F4u) { return; }
    }
    ctx->pc = 0x4640F4u;
label_4640f4:
    // 0x4640f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4640f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4640f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4640f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4640fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4640FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x464100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4640FCu;
            // 0x464100: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x464104u;
    // 0x464104: 0x0  nop
    ctx->pc = 0x464104u;
    // NOP
    // 0x464108: 0x0  nop
    ctx->pc = 0x464108u;
    // NOP
    // 0x46410c: 0x0  nop
    ctx->pc = 0x46410cu;
    // NOP
    // 0x464110: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x464110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x464114: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x464114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464118: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x464118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x46411c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x46411cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x464120: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x464120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x464124: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x464124u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464128: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x464128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x46412c: 0xc0baaa0  jal         func_2EAA80
    ctx->pc = 0x46412Cu;
    SET_GPR_U32(ctx, 31, 0x464134u);
    ctx->pc = 0x464130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46412Cu;
            // 0x464130: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EAA80u;
    if (runtime->hasFunction(0x2EAA80u)) {
        auto targetFn = runtime->lookupFunction(0x2EAA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464134u; }
        if (ctx->pc != 0x464134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EAA80_0x2eaa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464134u; }
        if (ctx->pc != 0x464134u) { return; }
    }
    ctx->pc = 0x464134u;
label_464134:
    // 0x464134: 0x8e24029c  lw          $a0, 0x29C($s1)
    ctx->pc = 0x464134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 668)));
    // 0x464138: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x464138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x46413c: 0xc122d2c  jal         func_48B4B0
    ctx->pc = 0x46413Cu;
    SET_GPR_U32(ctx, 31, 0x464144u);
    ctx->pc = 0x464140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46413Cu;
            // 0x464140: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464144u; }
        if (ctx->pc != 0x464144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464144u; }
        if (ctx->pc != 0x464144u) { return; }
    }
    ctx->pc = 0x464144u;
label_464144:
    // 0x464144: 0x9230004c  lbu         $s0, 0x4C($s1)
    ctx->pc = 0x464144u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x464148: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x464148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x46414c: 0xc040180  jal         func_100600
    ctx->pc = 0x46414Cu;
    SET_GPR_U32(ctx, 31, 0x464154u);
    ctx->pc = 0x464150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46414Cu;
            // 0x464150: 0x26320010  addiu       $s2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464154u; }
        if (ctx->pc != 0x464154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464154u; }
        if (ctx->pc != 0x464154u) { return; }
    }
    ctx->pc = 0x464154u;
label_464154:
    // 0x464154: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x464154u;
    {
        const bool branch_taken_0x464154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x464158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x464154u;
            // 0x464158: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464154) {
            ctx->pc = 0x4641C8u;
            goto label_4641c8;
        }
    }
    ctx->pc = 0x46415Cu;
    // 0x46415c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x46415cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x464160: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x464160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x464164: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x464164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464168: 0x34458a88  ori         $a1, $v0, 0x8A88
    ctx->pc = 0x464168u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x46416c: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x46416Cu;
    SET_GPR_U32(ctx, 31, 0x464174u);
    ctx->pc = 0x464170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46416Cu;
            // 0x464170: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464174u; }
        if (ctx->pc != 0x464174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464174u; }
        if (ctx->pc != 0x464174u) { return; }
    }
    ctx->pc = 0x464174u;
label_464174:
    // 0x464174: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x464174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x464178: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x464178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x46417c: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x46417cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
    // 0x464180: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x464180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464184: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x464184u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x464188: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x464188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x46418c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x46418cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x464190: 0x244276a0  addiu       $v0, $v0, 0x76A0
    ctx->pc = 0x464190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30368));
    // 0x464194: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x464194u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x464198: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x464198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x46419c: 0xae220070  sw          $v0, 0x70($s1)
    ctx->pc = 0x46419cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
    // 0x4641a0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4641a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4641a4: 0xc440da20  lwc1        $f0, -0x25E0($v0)
    ctx->pc = 0x4641a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4641a8: 0xe6200074  swc1        $f0, 0x74($s1)
    ctx->pc = 0x4641a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
    // 0x4641ac: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x4641acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x4641b0: 0xae230078  sw          $v1, 0x78($s1)
    ctx->pc = 0x4641b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 3));
    // 0x4641b4: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x4641b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
    // 0x4641b8: 0xc04cc04  jal         func_133010
    ctx->pc = 0x4641B8u;
    SET_GPR_U32(ctx, 31, 0x4641C0u);
    ctx->pc = 0x4641BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4641B8u;
            // 0x4641bc: 0xa2300080  sb          $s0, 0x80($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 128), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4641C0u; }
        if (ctx->pc != 0x4641C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4641C0u; }
        if (ctx->pc != 0x4641C0u) { return; }
    }
    ctx->pc = 0x4641C0u;
label_4641c0:
    // 0x4641c0: 0xc6200074  lwc1        $f0, 0x74($s1)
    ctx->pc = 0x4641c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4641c4: 0xe6200070  swc1        $f0, 0x70($s1)
    ctx->pc = 0x4641c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
label_4641c8:
    // 0x4641c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4641c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4641cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4641ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4641d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4641d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4641d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4641d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4641d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4641D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4641DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4641D8u;
            // 0x4641dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4641E0u;
}
