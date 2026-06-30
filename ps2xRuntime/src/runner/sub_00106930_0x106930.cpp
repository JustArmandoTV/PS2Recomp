#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00106930
// Address: 0x106930 - 0x106a58
void sub_00106930_0x106930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106930_0x106930");
#endif

    switch (ctx->pc) {
        case 0x106968u: goto label_106968;
        case 0x106988u: goto label_106988;
        case 0x1069c0u: goto label_1069c0;
        case 0x1069dcu: goto label_1069dc;
        case 0x106a2cu: goto label_106a2c;
        default: break;
    }

    ctx->pc = 0x106930u;

    // 0x106930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x106930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x106934: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x106934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x106938: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x106938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10693c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10693cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x106940: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x106940u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106944: 0x8e020828  lw          $v0, 0x828($s0)
    ctx->pc = 0x106944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2088)));
    // 0x106948: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x106948u;
    {
        const bool branch_taken_0x106948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10694Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106948u;
            // 0x10694c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106948) {
            ctx->pc = 0x106960u;
            goto label_106960;
        }
    }
    ctx->pc = 0x106950u;
    // 0x106950: 0x8e02084c  lw          $v0, 0x84C($s0)
    ctx->pc = 0x106950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2124)));
    // 0x106954: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x106954u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x106958: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x106958u;
    {
        const bool branch_taken_0x106958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106958) {
            ctx->pc = 0x10695Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106958u;
            // 0x10695c: 0x8e030848  lw          $v1, 0x848($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1069A0u;
            goto label_1069a0;
        }
    }
    ctx->pc = 0x106960u;
label_106960:
    // 0x106960: 0xc041a96  jal         func_106A58
    ctx->pc = 0x106960u;
    SET_GPR_U32(ctx, 31, 0x106968u);
    ctx->pc = 0x106964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106960u;
            // 0x106964: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106A58u;
    if (runtime->hasFunction(0x106A58u)) {
        auto targetFn = runtime->lookupFunction(0x106A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106968u; }
        if (ctx->pc != 0x106968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106A58_0x106a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106968u; }
        if (ctx->pc != 0x106968u) { return; }
    }
    ctx->pc = 0x106968u;
label_106968:
    // 0x106968: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x106968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10696c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x10696cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x106970: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x106970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x106974: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x106974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106978: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x106978u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x10697c: 0xae000828  sw          $zero, 0x828($s0)
    ctx->pc = 0x10697cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
    // 0x106980: 0xc0419b2  jal         func_1066C8
    ctx->pc = 0x106980u;
    SET_GPR_U32(ctx, 31, 0x106988u);
    ctx->pc = 0x106984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106980u;
            // 0x106984: 0xae03082c  sw          $v1, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1066C8u;
    if (runtime->hasFunction(0x1066C8u)) {
        auto targetFn = runtime->lookupFunction(0x1066C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106988u; }
        if (ctx->pc != 0x106988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001066C8_0x1066c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106988u; }
        if (ctx->pc != 0x106988u) { return; }
    }
    ctx->pc = 0x106988u;
label_106988:
    // 0x106988: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x106988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x10698c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10698cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x106990: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x106990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x106994: 0xae020848  sw          $v0, 0x848($s0)
    ctx->pc = 0x106994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 2));
    // 0x106998: 0xae03084c  sw          $v1, 0x84C($s0)
    ctx->pc = 0x106998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2124), GPR_U32(ctx, 3));
    // 0x10699c: 0x8e030848  lw          $v1, 0x848($s0)
    ctx->pc = 0x10699cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
label_1069a0:
    // 0x1069a0: 0x111023  negu        $v0, $s1
    ctx->pc = 0x1069a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x1069a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1069a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1069a8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1069a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1069ac: 0x431006  srlv        $v0, $v1, $v0
    ctx->pc = 0x1069acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1069b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1069b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1069b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1069B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1069B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1069B4u;
            // 0x1069b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1069BCu;
    // 0x1069bc: 0x0  nop
    ctx->pc = 0x1069bcu;
    // NOP
label_1069c0:
    // 0x1069c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1069c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1069c4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1069c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1069c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1069c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1069cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1069ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1069d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1069d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1069d4: 0xc041a96  jal         func_106A58
    ctx->pc = 0x1069D4u;
    SET_GPR_U32(ctx, 31, 0x1069DCu);
    ctx->pc = 0x1069D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1069D4u;
            // 0x1069d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106A58u;
    if (runtime->hasFunction(0x106A58u)) {
        auto targetFn = runtime->lookupFunction(0x106A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1069DCu; }
        if (ctx->pc != 0x1069DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106A58_0x106a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1069DCu; }
        if (ctx->pc != 0x1069DCu) { return; }
    }
    ctx->pc = 0x1069DCu;
label_1069dc:
    // 0x1069dc: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x1069dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x1069e0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1069e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1069e4: 0x2048025  or          $s0, $s0, $a0
    ctx->pc = 0x1069e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x1069e8: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1069e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1069ec: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1069ecu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16)); // MMIO: 0x10000000
    // 0x1069f0: 0x3c03f000  lui         $v1, 0xF000
    ctx->pc = 0x1069f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61440 << 16));
    // 0x1069f4: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x1069f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x1069f8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1069f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1069fc: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1069FCu;
    {
        const bool branch_taken_0x1069fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x106A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1069FCu;
            // 0x106a00: 0xae30082c  sw          $s0, 0x82C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1069fc) {
            ctx->pc = 0x106A18u;
            goto label_106a18;
        }
    }
    ctx->pc = 0x106A04u;
    // 0x106a04: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x106a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x106a08: 0x52020006  beql        $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x106A08u;
    {
        const bool branch_taken_0x106a08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x106a08) {
            ctx->pc = 0x106A0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106A08u;
            // 0x106a0c: 0xae200828  sw          $zero, 0x828($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106A24u;
            goto label_106a24;
        }
    }
    ctx->pc = 0x106A10u;
    // 0x106a10: 0x16040003  bne         $s0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x106A10u;
    {
        const bool branch_taken_0x106a10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x106A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106A10u;
            // 0x106a14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106a10) {
            ctx->pc = 0x106A20u;
            goto label_106a20;
        }
    }
    ctx->pc = 0x106A18u;
label_106a18:
    // 0x106a18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x106A18u;
    {
        const bool branch_taken_0x106a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106A18u;
            // 0x106a1c: 0xae200828  sw          $zero, 0x828($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106a18) {
            ctx->pc = 0x106A24u;
            goto label_106a24;
        }
    }
    ctx->pc = 0x106A20u;
label_106a20:
    // 0x106a20: 0xae220828  sw          $v0, 0x828($s1)
    ctx->pc = 0x106a20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 2));
label_106a24:
    // 0x106a24: 0xc0419b2  jal         func_1066C8
    ctx->pc = 0x106A24u;
    SET_GPR_U32(ctx, 31, 0x106A2Cu);
    ctx->pc = 0x106A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106A24u;
            // 0x106a28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1066C8u;
    if (runtime->hasFunction(0x1066C8u)) {
        auto targetFn = runtime->lookupFunction(0x1066C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106A2Cu; }
        if (ctx->pc != 0x106A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001066C8_0x1066c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106A2Cu; }
        if (ctx->pc != 0x106A2Cu) { return; }
    }
    ctx->pc = 0x106A2Cu;
label_106a2c:
    // 0x106a2c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x106a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x106a30: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x106a30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x106a34: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x106a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x106a38: 0xae23084c  sw          $v1, 0x84C($s1)
    ctx->pc = 0x106a38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 3));
    // 0x106a3c: 0xae220848  sw          $v0, 0x848($s1)
    ctx->pc = 0x106a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
    // 0x106a40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x106a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106a44: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x106a44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106a48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x106a48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x106A4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106A4Cu;
            // 0x106a50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x106A54u;
    // 0x106a54: 0x0  nop
    ctx->pc = 0x106a54u;
    // NOP
}
