#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AA898
// Address: 0x1aa898 - 0x1aa9f8
void sub_001AA898_0x1aa898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA898_0x1aa898");
#endif

    switch (ctx->pc) {
        case 0x1aa970u: goto label_1aa970;
        case 0x1aa994u: goto label_1aa994;
        case 0x1aa99cu: goto label_1aa99c;
        case 0x1aa9b0u: goto label_1aa9b0;
        default: break;
    }

    ctx->pc = 0x1aa898u;

    // 0x1aa898: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aa898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aa89c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aa89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aa8a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aa8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa8a4: 0x8064b4e  j           func_192D38
    ctx->pc = 0x1AA8A4u;
    ctx->pc = 0x1AA8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA8A4u;
            // 0x1aa8a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192D38u;
    if (runtime->hasFunction(0x192D38u)) {
        auto targetFn = runtime->lookupFunction(0x192D38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00192D38_0x192d38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AA8ACu;
    // 0x1aa8ac: 0x0  nop
    ctx->pc = 0x1aa8acu;
    // NOP
    // 0x1aa8b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA8B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA8B0u;
            // 0x1aa8b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AA8B8u;
    // 0x1aa8b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA8B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA8B8u;
            // 0x1aa8bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AA8C0u;
    // 0x1aa8c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA8C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA8C0u;
            // 0x1aa8c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AA8C8u;
    // 0x1aa8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA8C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA8C8u;
            // 0x1aa8cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AA8D0u;
    // 0x1aa8d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aa8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aa8d4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1aa8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1aa8d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aa8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aa8dc: 0x34a50d0b  ori         $a1, $a1, 0xD0B
    ctx->pc = 0x1aa8dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3339);
    // 0x1aa8e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aa8e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa8e4: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1AA8E4u;
    ctx->pc = 0x1AA8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA8E4u;
            // 0x1aa8e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AA8ECu;
    // 0x1aa8ec: 0x0  nop
    ctx->pc = 0x1aa8ecu;
    // NOP
    // 0x1aa8f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aa8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aa8f4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1aa8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1aa8f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aa8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aa8fc: 0x34a50d0b  ori         $a1, $a1, 0xD0B
    ctx->pc = 0x1aa8fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3339);
    // 0x1aa900: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aa900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa904: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1AA904u;
    ctx->pc = 0x1AA908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA904u;
            // 0x1aa908: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AA90Cu;
    // 0x1aa90c: 0x0  nop
    ctx->pc = 0x1aa90cu;
    // NOP
    // 0x1aa910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aa910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aa914: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1aa914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1aa918: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aa918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aa91c: 0x34a50d0b  ori         $a1, $a1, 0xD0B
    ctx->pc = 0x1aa91cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3339);
    // 0x1aa920: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aa920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa924: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1AA924u;
    ctx->pc = 0x1AA928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA924u;
            // 0x1aa928: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AA92Cu;
    // 0x1aa92c: 0x0  nop
    ctx->pc = 0x1aa92cu;
    // NOP
    // 0x1aa930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aa930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aa934: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1aa934u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1aa938: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aa938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aa93c: 0x34a50d0b  ori         $a1, $a1, 0xD0B
    ctx->pc = 0x1aa93cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3339);
    // 0x1aa940: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aa940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa944: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1AA944u;
    ctx->pc = 0x1AA948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA944u;
            // 0x1aa948: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AA94Cu;
    // 0x1aa94c: 0x0  nop
    ctx->pc = 0x1aa94cu;
    // NOP
    // 0x1aa950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aa950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aa954: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aa954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aa958: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1aa958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1aa95c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1aa95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1aa960: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1aa960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1aa964: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1aa964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1aa968: 0xc06aaa8  jal         func_1AAAA0
    ctx->pc = 0x1AA968u;
    SET_GPR_U32(ctx, 31, 0x1AA970u);
    ctx->pc = 0x1AA96Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA968u;
            // 0x1aa96c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AAAA0u;
    if (runtime->hasFunction(0x1AAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x1AAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA970u; }
        if (ctx->pc != 0x1AA970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AAAA0_0x1aaaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA970u; }
        if (ctx->pc != 0x1AA970u) { return; }
    }
    ctx->pc = 0x1AA970u;
label_1aa970:
    // 0x1aa970: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1aa970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa974: 0x52000019  beql        $s0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1AA974u;
    {
        const bool branch_taken_0x1aa974 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa974) {
            ctx->pc = 0x1AA978u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA974u;
            // 0x1aa978: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA9DCu;
            goto label_1aa9dc;
        }
    }
    ctx->pc = 0x1AA97Cu;
    // 0x1aa97c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1aa97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1aa980: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1AA980u;
    {
        const bool branch_taken_0x1aa980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA980u;
            // 0x1aa984: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa980) {
            ctx->pc = 0x1AA9D8u;
            goto label_1aa9d8;
        }
    }
    ctx->pc = 0x1AA988u;
    // 0x1aa988: 0x8e321fec  lw          $s2, 0x1FEC($s1)
    ctx->pc = 0x1aa988u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8172)));
    // 0x1aa98c: 0xc069f46  jal         func_1A7D18
    ctx->pc = 0x1AA98Cu;
    SET_GPR_U32(ctx, 31, 0x1AA994u);
    ctx->pc = 0x1AA990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA98Cu;
            // 0x1aa990: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A7D18u;
    if (runtime->hasFunction(0x1A7D18u)) {
        auto targetFn = runtime->lookupFunction(0x1A7D18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA994u; }
        if (ctx->pc != 0x1AA994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7D18_0x1a7d18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA994u; }
        if (ctx->pc != 0x1AA994u) { return; }
    }
    ctx->pc = 0x1AA994u;
label_1aa994:
    // 0x1aa994: 0xc06aa7e  jal         func_1AA9F8
    ctx->pc = 0x1AA994u;
    SET_GPR_U32(ctx, 31, 0x1AA99Cu);
    ctx->pc = 0x1AA998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA994u;
            // 0x1aa998: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA9F8u;
    if (runtime->hasFunction(0x1AA9F8u)) {
        auto targetFn = runtime->lookupFunction(0x1AA9F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA99Cu; }
        if (ctx->pc != 0x1AA99Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AA9F8_0x1aa9f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA99Cu; }
        if (ctx->pc != 0x1AA99Cu) { return; }
    }
    ctx->pc = 0x1AA99Cu;
label_1aa99c:
    // 0x1aa99c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aa99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa9a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1aa9a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa9a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1aa9a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa9a8: 0xc06aa80  jal         func_1AAA00
    ctx->pc = 0x1AA9A8u;
    SET_GPR_U32(ctx, 31, 0x1AA9B0u);
    ctx->pc = 0x1AA9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA9A8u;
            // 0x1aa9ac: 0x26330d88  addiu       $s3, $s1, 0xD88 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 3464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AAA00u;
    if (runtime->hasFunction(0x1AAA00u)) {
        auto targetFn = runtime->lookupFunction(0x1AAA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA9B0u; }
        if (ctx->pc != 0x1AA9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AAA00_0x1aaa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA9B0u; }
        if (ctx->pc != 0x1AA9B0u) { return; }
    }
    ctx->pc = 0x1AA9B0u;
label_1aa9b0:
    // 0x1aa9b0: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1AA9B0u;
    {
        const bool branch_taken_0x1aa9b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa9b0) {
            ctx->pc = 0x1AA9B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA9B0u;
            // 0x1aa9b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA9DCu;
            goto label_1aa9dc;
        }
    }
    ctx->pc = 0x1AA9B8u;
    // 0x1aa9b8: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x1aa9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1aa9bc: 0xde030018  ld          $v1, 0x18($s0)
    ctx->pc = 0x1aa9bcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1aa9c0: 0xae44002c  sw          $a0, 0x2C($s2)
    ctx->pc = 0x1aa9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 4));
    // 0x1aa9c4: 0xfe630150  sd          $v1, 0x150($s3)
    ctx->pc = 0x1aa9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 336), GPR_U64(ctx, 3));
    // 0x1aa9c8: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x1aa9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1aa9cc: 0xde030020  ld          $v1, 0x20($s0)
    ctx->pc = 0x1aa9ccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1aa9d0: 0xae440030  sw          $a0, 0x30($s2)
    ctx->pc = 0x1aa9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 4));
    // 0x1aa9d4: 0xfe430010  sd          $v1, 0x10($s2)
    ctx->pc = 0x1aa9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 3));
label_1aa9d8:
    // 0x1aa9d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aa9d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aa9dc:
    // 0x1aa9dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1aa9dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aa9e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1aa9e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa9e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1aa9e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa9e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1aa9e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aa9ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA9ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA9ECu;
            // 0x1aa9f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AA9F4u;
    // 0x1aa9f4: 0x0  nop
    ctx->pc = 0x1aa9f4u;
    // NOP
}
