#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010D8E0
// Address: 0x10d8e0 - 0x10dab8
void sub_0010D8E0_0x10d8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D8E0_0x10d8e0");
#endif

    switch (ctx->pc) {
        case 0x10d98cu: goto label_10d98c;
        case 0x10d9a4u: goto label_10d9a4;
        case 0x10d9bcu: goto label_10d9bc;
        case 0x10d9f0u: goto label_10d9f0;
        case 0x10da10u: goto label_10da10;
        case 0x10da40u: goto label_10da40;
        case 0x10da58u: goto label_10da58;
        case 0x10da98u: goto label_10da98;
        default: break;
    }

    ctx->pc = 0x10d8e0u;

    // 0x10d8e0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x10d8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d8e4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x10d8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x10d8e8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x10d8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x10d8ec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x10d8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10d8f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10d8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10d8f4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x10d8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x10d8f8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x10d8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x10d8fc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x10d8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x10d900: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x10d900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x10d904: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10D904u;
    {
        const bool branch_taken_0x10d904 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x10D908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D904u;
            // 0x10d908: 0xaca40008  sw          $a0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d904) {
            ctx->pc = 0x10D914u;
            goto label_10d914;
        }
    }
    ctx->pc = 0x10D90Cu;
    // 0x10d90c: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x10d90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x10d910: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x10d910u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_10d914:
    // 0x10d914: 0x3e00008  jr          $ra
    ctx->pc = 0x10D914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10D91Cu;
    // 0x10d91c: 0x0  nop
    ctx->pc = 0x10d91cu;
    // NOP
    // 0x10d920: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10d920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10d924: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10d924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10d928: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10d928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10d92c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10d92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10d930: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10d930u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d934: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10d934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10d938: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10d938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d93c: 0x1082003b  beq         $a0, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x10D93Cu;
    {
        const bool branch_taken_0x10d93c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x10D940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D93Cu;
            // 0x10d940: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d93c) {
            ctx->pc = 0x10DA2Cu;
            goto label_10da2c;
        }
    }
    ctx->pc = 0x10D944u;
    // 0x10d944: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x10d944u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x10d948: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10D948u;
    {
        const bool branch_taken_0x10d948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D948u;
            // 0x10d94c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d948) {
            ctx->pc = 0x10D960u;
            goto label_10d960;
        }
    }
    ctx->pc = 0x10D950u;
    // 0x10d950: 0x1082004a  beq         $a0, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x10D950u;
    {
        const bool branch_taken_0x10d950 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x10D954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D950u;
            // 0x10d954: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d950) {
            ctx->pc = 0x10DA7Cu;
            goto label_10da7c;
        }
    }
    ctx->pc = 0x10D958u;
    // 0x10d958: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x10D958u;
    {
        const bool branch_taken_0x10d958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D958u;
            // 0x10d95c: 0xdfb20020  ld          $s2, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d958) {
            ctx->pc = 0x10DAA4u;
            goto label_10daa4;
        }
    }
    ctx->pc = 0x10D960u;
label_10d960:
    // 0x10d960: 0x1880004f  blez        $a0, . + 4 + (0x4F << 2)
    ctx->pc = 0x10D960u;
    {
        const bool branch_taken_0x10d960 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x10D964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D960u;
            // 0x10d964: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d960) {
            ctx->pc = 0x10DAA0u;
            goto label_10daa0;
        }
    }
    ctx->pc = 0x10D968u;
    // 0x10d968: 0x52000019  beql        $s0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x10D968u;
    {
        const bool branch_taken_0x10d968 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d968) {
            ctx->pc = 0x10D96Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10D968u;
            // 0x10d96c: 0x8e320014  lw          $s2, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10D9D0u;
            goto label_10d9d0;
        }
    }
    ctx->pc = 0x10D970u;
    // 0x10d970: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x10d970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x10d974: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x10d974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x10d978: 0x2c420141  sltiu       $v0, $v0, 0x141
    ctx->pc = 0x10d978u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)321) ? 1 : 0);
    // 0x10d97c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10D97Cu;
    {
        const bool branch_taken_0x10d97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D97Cu;
            // 0x10d980: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d97c) {
            ctx->pc = 0x10D98Cu;
            goto label_10d98c;
        }
    }
    ctx->pc = 0x10D984u;
    // 0x10d984: 0xc043c32  jal         func_10F0C8
    ctx->pc = 0x10D984u;
    SET_GPR_U32(ctx, 31, 0x10D98Cu);
    ctx->pc = 0x10D988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10D984u;
            // 0x10d988: 0x2484ec28  addiu       $a0, $a0, -0x13D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F0C8u;
    if (runtime->hasFunction(0x10F0C8u)) {
        auto targetFn = runtime->lookupFunction(0x10F0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D98Cu; }
        if (ctx->pc != 0x10D98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F0C8_0x10f0c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D98Cu; }
        if (ctx->pc != 0x10D98Cu) { return; }
    }
    ctx->pc = 0x10D98Cu;
label_10d98c:
    // 0x10d98c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x10d98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x10d990: 0x3206ffff  andi        $a2, $s0, 0xFFFF
    ctx->pc = 0x10d990u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x10d994: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x10d994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x10d998: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x10d998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10d99c: 0xc0435d8  jal         func_10D760
    ctx->pc = 0x10D99Cu;
    SET_GPR_U32(ctx, 31, 0x10D9A4u);
    ctx->pc = 0x10D9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10D99Cu;
            // 0x10d9a0: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D760u;
    if (runtime->hasFunction(0x10D760u)) {
        auto targetFn = runtime->lookupFunction(0x10D760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D9A4u; }
        if (ctx->pc != 0x10D9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D760_0x10d760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D9A4u; }
        if (ctx->pc != 0x10D9A4u) { return; }
    }
    ctx->pc = 0x10D9A4u;
label_10d9a4:
    // 0x10d9a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10d9a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d9a8: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D9A8u;
    {
        const bool branch_taken_0x10d9a8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x10d9a8) {
            ctx->pc = 0x10D9BCu;
            goto label_10d9bc;
        }
    }
    ctx->pc = 0x10D9B0u;
    // 0x10d9b0: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x10d9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x10d9b4: 0xc043c32  jal         func_10F0C8
    ctx->pc = 0x10D9B4u;
    SET_GPR_U32(ctx, 31, 0x10D9BCu);
    ctx->pc = 0x10D9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10D9B4u;
            // 0x10d9b8: 0x2484ec50  addiu       $a0, $a0, -0x13B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F0C8u;
    if (runtime->hasFunction(0x10F0C8u)) {
        auto targetFn = runtime->lookupFunction(0x10F0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D9BCu; }
        if (ctx->pc != 0x10D9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F0C8_0x10f0c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D9BCu; }
        if (ctx->pc != 0x10D9BCu) { return; }
    }
    ctx->pc = 0x10D9BCu;
label_10d9bc:
    // 0x10d9bc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x10d9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x10d9c0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x10d9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x10d9c4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x10d9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x10d9c8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x10D9C8u;
    {
        const bool branch_taken_0x10d9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D9CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D9C8u;
            // 0x10d9cc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d9c8) {
            ctx->pc = 0x10DAA0u;
            goto label_10daa0;
        }
    }
    ctx->pc = 0x10D9D0u;
label_10d9d0:
    // 0x10d9d0: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x10d9d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x10d9d4: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x10d9d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10d9d8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x10d9d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10d9dc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x10D9DCu;
    {
        const bool branch_taken_0x10d9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D9DCu;
            // 0x10d9e0: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d9dc) {
            ctx->pc = 0x10DA20u;
            goto label_10da20;
        }
    }
    ctx->pc = 0x10D9E4u;
    // 0x10d9e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10D9E4u;
    {
        const bool branch_taken_0x10d9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D9E4u;
            // 0x10d9e8: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d9e4) {
            ctx->pc = 0x10D9F4u;
            goto label_10d9f4;
        }
    }
    ctx->pc = 0x10D9ECu;
    // 0x10d9ec: 0x0  nop
    ctx->pc = 0x10d9ecu;
    // NOP
label_10d9f0:
    // 0x10d9f0: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x10d9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_10d9f4:
    // 0x10d9f4: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x10d9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x10d9f8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x10d9f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10d9fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10d9fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x10da00: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x10da00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x10da04: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x10da04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x10da08: 0xc043628  jal         func_10D8A0
    ctx->pc = 0x10DA08u;
    SET_GPR_U32(ctx, 31, 0x10DA10u);
    ctx->pc = 0x10DA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DA08u;
            // 0x10da0c: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D8A0u;
    if (runtime->hasFunction(0x10D8A0u)) {
        auto targetFn = runtime->lookupFunction(0x10D8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DA10u; }
        if (ctx->pc != 0x10DA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D8A0_0x10d8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DA10u; }
        if (ctx->pc != 0x10DA10u) { return; }
    }
    ctx->pc = 0x10DA10u;
label_10da10:
    // 0x10da10: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x10da10u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10da14: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x10da14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10da18: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x10DA18u;
    {
        const bool branch_taken_0x10da18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10da18) {
            ctx->pc = 0x10DA1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10DA18u;
            // 0x10da1c: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10D9F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10d9f0;
        }
    }
    ctx->pc = 0x10DA20u;
label_10da20:
    // 0x10da20: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x10da20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x10da24: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x10DA24u;
    {
        const bool branch_taken_0x10da24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DA28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DA24u;
            // 0x10da28: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10da24) {
            ctx->pc = 0x10DAA0u;
            goto label_10daa0;
        }
    }
    ctx->pc = 0x10DA2Cu;
label_10da2c:
    // 0x10da2c: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x10da2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x10da30: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x10da30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10da34: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x10da34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x10da38: 0xc0435e6  jal         func_10D798
    ctx->pc = 0x10DA38u;
    SET_GPR_U32(ctx, 31, 0x10DA40u);
    ctx->pc = 0x10DA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DA38u;
            // 0x10da3c: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D798u;
    if (runtime->hasFunction(0x10D798u)) {
        auto targetFn = runtime->lookupFunction(0x10D798u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DA40u; }
        if (ctx->pc != 0x10DA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D798_0x10d798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DA40u; }
        if (ctx->pc != 0x10DA40u) { return; }
    }
    ctx->pc = 0x10DA40u;
label_10da40:
    // 0x10da40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10da40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10da44: 0x4a30006  bgezl       $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10DA44u;
    {
        const bool branch_taken_0x10da44 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x10da44) {
            ctx->pc = 0x10DA48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10DA44u;
            // 0x10da48: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10DA60u;
            goto label_10da60;
        }
    }
    ctx->pc = 0x10DA4Cu;
    // 0x10da4c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x10da4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x10da50: 0xc043c32  jal         func_10F0C8
    ctx->pc = 0x10DA50u;
    SET_GPR_U32(ctx, 31, 0x10DA58u);
    ctx->pc = 0x10DA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DA50u;
            // 0x10da54: 0x2484ec68  addiu       $a0, $a0, -0x1398 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F0C8u;
    if (runtime->hasFunction(0x10F0C8u)) {
        auto targetFn = runtime->lookupFunction(0x10F0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DA58u; }
        if (ctx->pc != 0x10DA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F0C8_0x10f0c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DA58u; }
        if (ctx->pc != 0x10DA58u) { return; }
    }
    ctx->pc = 0x10DA58u;
label_10da58:
    // 0x10da58: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x10DA58u;
    {
        const bool branch_taken_0x10da58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10da58) {
            ctx->pc = 0x10DA98u;
            goto label_10da98;
        }
    }
    ctx->pc = 0x10DA60u;
label_10da60:
    // 0x10da60: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x10da60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x10da64: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x10da64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x10da68: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x10da68u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x10da6c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x10da6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x10da70: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x10da70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x10da74: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x10DA74u;
    {
        const bool branch_taken_0x10da74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DA78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DA74u;
            // 0x10da78: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10da74) {
            ctx->pc = 0x10DAA0u;
            goto label_10daa0;
        }
    }
    ctx->pc = 0x10DA7Cu;
label_10da7c:
    // 0x10da7c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x10da7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x10da80: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10DA80u;
    {
        const bool branch_taken_0x10da80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10da80) {
            ctx->pc = 0x10DA98u;
            goto label_10da98;
        }
    }
    ctx->pc = 0x10DA88u;
    // 0x10da88: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x10da88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x10da8c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x10da8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x10da90: 0xc043c32  jal         func_10F0C8
    ctx->pc = 0x10DA90u;
    SET_GPR_U32(ctx, 31, 0x10DA98u);
    ctx->pc = 0x10DA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DA90u;
            // 0x10da94: 0x2484ec80  addiu       $a0, $a0, -0x1380 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F0C8u;
    if (runtime->hasFunction(0x10F0C8u)) {
        auto targetFn = runtime->lookupFunction(0x10F0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DA98u; }
        if (ctx->pc != 0x10DA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F0C8_0x10f0c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DA98u; }
        if (ctx->pc != 0x10DA98u) { return; }
    }
    ctx->pc = 0x10DA98u;
label_10da98:
    // 0x10da98: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x10da98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x10da9c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10da9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_10daa0:
    // 0x10daa0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10daa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10daa4:
    // 0x10daa4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10daa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10daa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10daa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10daac: 0x3e00008  jr          $ra
    ctx->pc = 0x10DAACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DAACu;
            // 0x10dab0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10DAB4u;
    // 0x10dab4: 0x0  nop
    ctx->pc = 0x10dab4u;
    // NOP
}
