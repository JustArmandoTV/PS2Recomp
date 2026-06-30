#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AA698
// Address: 0x1aa698 - 0x1aa7a8
void sub_001AA698_0x1aa698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA698_0x1aa698");
#endif

    switch (ctx->pc) {
        case 0x1aa6c0u: goto label_1aa6c0;
        case 0x1aa6ccu: goto label_1aa6cc;
        case 0x1aa708u: goto label_1aa708;
        case 0x1aa710u: goto label_1aa710;
        case 0x1aa754u: goto label_1aa754;
        case 0x1aa764u: goto label_1aa764;
        default: break;
    }

    ctx->pc = 0x1aa698u;

    // 0x1aa698: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aa698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1aa69c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1aa69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1aa6a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aa6a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa6a4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1aa6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1aa6a8: 0x8e021394  lw          $v0, 0x1394($s0)
    ctx->pc = 0x1aa6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5012)));
    // 0x1aa6ac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AA6ACu;
    {
        const bool branch_taken_0x1aa6ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA6ACu;
            // 0x1aa6b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa6ac) {
            ctx->pc = 0x1AA6D0u;
            goto label_1aa6d0;
        }
    }
    ctx->pc = 0x1AA6B4u;
    // 0x1aa6b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1aa6b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa6b8: 0xc069984  jal         func_1A6610
    ctx->pc = 0x1AA6B8u;
    SET_GPR_U32(ctx, 31, 0x1AA6C0u);
    ctx->pc = 0x1AA6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA6B8u;
            // 0x1aa6bc: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6610u;
    if (runtime->hasFunction(0x1A6610u)) {
        auto targetFn = runtime->lookupFunction(0x1A6610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA6C0u; }
        if (ctx->pc != 0x1AA6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6610_0x1a6610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA6C0u; }
        if (ctx->pc != 0x1AA6C0u) { return; }
    }
    ctx->pc = 0x1AA6C0u;
label_1aa6c0:
    // 0x1aa6c0: 0xde040988  ld          $a0, 0x988($s0)
    ctx->pc = 0x1aa6c0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 2440)));
    // 0x1aa6c4: 0xc0699f2  jal         func_1A67C8
    ctx->pc = 0x1AA6C4u;
    SET_GPR_U32(ctx, 31, 0x1AA6CCu);
    ctx->pc = 0x1AA6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA6C4u;
            // 0x1aa6c8: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A67C8u;
    if (runtime->hasFunction(0x1A67C8u)) {
        auto targetFn = runtime->lookupFunction(0x1A67C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA6CCu; }
        if (ctx->pc != 0x1AA6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A67C8_0x1a67c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA6CCu; }
        if (ctx->pc != 0x1AA6CCu) { return; }
    }
    ctx->pc = 0x1AA6CCu;
label_1aa6cc:
    // 0x1aa6cc: 0xfe020988  sd          $v0, 0x988($s0)
    ctx->pc = 0x1aa6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2440), GPR_U64(ctx, 2));
label_1aa6d0:
    // 0x1aa6d0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1aa6d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa6d4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1aa6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA6D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA6D8u;
            // 0x1aa6dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AA6E0u;
    // 0x1aa6e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aa6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1aa6e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aa6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aa6e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aa6e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa6ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1aa6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1aa6f0: 0x26122208  addiu       $s2, $s0, 0x2208
    ctx->pc = 0x1aa6f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 8712));
    // 0x1aa6f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1aa6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1aa6f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aa6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa6fc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1aa6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1aa700: 0xc06a9ea  jal         func_1AA7A8
    ctx->pc = 0x1AA700u;
    SET_GPR_U32(ctx, 31, 0x1AA708u);
    ctx->pc = 0x1AA704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA700u;
            // 0x1aa704: 0xae121fec  sw          $s2, 0x1FEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8172), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA7A8u;
    if (runtime->hasFunction(0x1AA7A8u)) {
        auto targetFn = runtime->lookupFunction(0x1AA7A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA708u; }
        if (ctx->pc != 0x1AA708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AA7A8_0x1aa7a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA708u; }
        if (ctx->pc != 0x1AA708u) { return; }
    }
    ctx->pc = 0x1AA708u;
label_1aa708:
    // 0x1aa708: 0xc064ae6  jal         func_192B98
    ctx->pc = 0x1AA708u;
    SET_GPR_U32(ctx, 31, 0x1AA710u);
    ctx->pc = 0x192B98u;
    if (runtime->hasFunction(0x192B98u)) {
        auto targetFn = runtime->lookupFunction(0x192B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA710u; }
        if (ctx->pc != 0x1AA710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192B98_0x192b98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA710u; }
        if (ctx->pc != 0x1AA710u) { return; }
    }
    ctx->pc = 0x1AA710u;
label_1aa710:
    // 0x1aa710: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1aa710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa714: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1aa714u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1aa718: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1aa718u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa71c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aa71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa720: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AA720u;
    {
        const bool branch_taken_0x1aa720 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA720u;
            // 0x1aa724: 0x34a50d08  ori         $a1, $a1, 0xD08 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3336);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa720) {
            ctx->pc = 0x1AA748u;
            goto label_1aa748;
        }
    }
    ctx->pc = 0x1AA728u;
    // 0x1aa728: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aa728u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa72c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1aa72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa730: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1aa730u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aa734: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1aa734u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa738: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1aa738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa73c: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1AA73Cu;
    ctx->pc = 0x1AA740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA73Cu;
            // 0x1aa740: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AA744u;
    // 0x1aa744: 0x0  nop
    ctx->pc = 0x1aa744u;
    // NOP
label_1aa748:
    // 0x1aa748: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1aa748u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x1aa74c: 0xc064a8a  jal         func_192A28
    ctx->pc = 0x1AA74Cu;
    SET_GPR_U32(ctx, 31, 0x1AA754u);
    ctx->pc = 0x1AA750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA74Cu;
            // 0x1aa750: 0x24a5a830  addiu       $a1, $a1, -0x57D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192A28u;
    if (runtime->hasFunction(0x192A28u)) {
        auto targetFn = runtime->lookupFunction(0x192A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA754u; }
        if (ctx->pc != 0x1AA754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192A28_0x192a28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA754u; }
        if (ctx->pc != 0x1AA754u) { return; }
    }
    ctx->pc = 0x1AA754u;
label_1aa754:
    // 0x1aa754: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1AA754u;
    {
        const bool branch_taken_0x1aa754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA754u;
            // 0x1aa758: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa754) {
            ctx->pc = 0x1AA788u;
            goto label_1aa788;
        }
    }
    ctx->pc = 0x1AA75Cu;
    // 0x1aa75c: 0xc06aa26  jal         func_1AA898
    ctx->pc = 0x1AA75Cu;
    SET_GPR_U32(ctx, 31, 0x1AA764u);
    ctx->pc = 0x1AA898u;
    if (runtime->hasFunction(0x1AA898u)) {
        auto targetFn = runtime->lookupFunction(0x1AA898u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA764u; }
        if (ctx->pc != 0x1AA764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AA898_0x1aa898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA764u; }
        if (ctx->pc != 0x1AA764u) { return; }
    }
    ctx->pc = 0x1AA764u;
label_1aa764:
    // 0x1aa764: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1aa764u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1aa768: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aa768u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa76c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1aa76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa770: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1aa770u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aa774: 0x34a50d09  ori         $a1, $a1, 0xD09
    ctx->pc = 0x1aa774u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3337);
    // 0x1aa778: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1aa778u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa77c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1aa77cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa780: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1AA780u;
    ctx->pc = 0x1AA784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA780u;
            // 0x1aa784: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AA788u;
label_1aa788:
    // 0x1aa788: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x1aa788u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x1aa78c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aa78cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa790: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1aa790u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aa794: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1aa794u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa798: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1aa798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa79c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA79Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA79Cu;
            // 0x1aa7a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AA7A4u;
    // 0x1aa7a4: 0x0  nop
    ctx->pc = 0x1aa7a4u;
    // NOP
}
