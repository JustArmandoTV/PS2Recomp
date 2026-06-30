#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017A988
// Address: 0x17a988 - 0x17aab8
void sub_0017A988_0x17a988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A988_0x17a988");
#endif

    switch (ctx->pc) {
        case 0x17a9b0u: goto label_17a9b0;
        case 0x17a9ccu: goto label_17a9cc;
        case 0x17a9e8u: goto label_17a9e8;
        case 0x17a9f0u: goto label_17a9f0;
        case 0x17aa00u: goto label_17aa00;
        case 0x17aa30u: goto label_17aa30;
        case 0x17aa4cu: goto label_17aa4c;
        default: break;
    }

    ctx->pc = 0x17a988u;

label_17a988:
    // 0x17a988: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17a988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17a98c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17a98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17a990: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17a990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a994: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17a994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17a998: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17a998u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a99c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17a99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17a9a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17a9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17a9a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17a9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17a9a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17A9A8u;
    {
        const bool branch_taken_0x17a9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A9A8u;
            // 0x17a9ac: 0x3c13005e  lui         $s3, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a9a8) {
            ctx->pc = 0x17A9B8u;
            goto label_17a9b8;
        }
    }
    ctx->pc = 0x17A9B0u;
label_17a9b0:
    // 0x17a9b0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x17a9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x17a9b4: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x17a9b4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
label_17a9b8:
    // 0x17a9b8: 0x2a0203e8  slti        $v0, $s0, 0x3E8
    ctx->pc = 0x17a9b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x17a9bc: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x17A9BCu;
    {
        const bool branch_taken_0x17a9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a9bc) {
            ctx->pc = 0x17A9C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17A9BCu;
            // 0x17a9c0: 0x82320002  lb          $s2, 0x2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17AA04u;
            goto label_17aa04;
        }
    }
    ctx->pc = 0x17A9C4u;
    // 0x17a9c4: 0xc061f74  jal         func_187DD0
    ctx->pc = 0x17A9C4u;
    SET_GPR_U32(ctx, 31, 0x17A9CCu);
    ctx->pc = 0x187DD0u;
    if (runtime->hasFunction(0x187DD0u)) {
        auto targetFn = runtime->lookupFunction(0x187DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A9CCu; }
        if (ctx->pc != 0x17A9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187DD0_0x187dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A9CCu; }
        if (ctx->pc != 0x17A9CCu) { return; }
    }
    ctx->pc = 0x17A9CCu;
label_17a9cc:
    // 0x17a9cc: 0x266443c4  addiu       $a0, $s3, 0x43C4
    ctx->pc = 0x17a9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 17348));
    // 0x17a9d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17a9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17a9d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17a9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a9d8: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x17A9D8u;
    {
        const bool branch_taken_0x17a9d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17a9d8) {
            ctx->pc = 0x17A9F8u;
            goto label_17a9f8;
        }
    }
    ctx->pc = 0x17A9E0u;
    // 0x17a9e0: 0xc061f7a  jal         func_187DE8
    ctx->pc = 0x17A9E0u;
    SET_GPR_U32(ctx, 31, 0x17A9E8u);
    ctx->pc = 0x187DE8u;
    if (runtime->hasFunction(0x187DE8u)) {
        auto targetFn = runtime->lookupFunction(0x187DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A9E8u; }
        if (ctx->pc != 0x17A9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187DE8_0x187de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A9E8u; }
        if (ctx->pc != 0x17A9E8u) { return; }
    }
    ctx->pc = 0x17A9E8u;
label_17a9e8:
    // 0x17a9e8: 0xc05e9ee  jal         func_17A7B8
    ctx->pc = 0x17A9E8u;
    SET_GPR_U32(ctx, 31, 0x17A9F0u);
    ctx->pc = 0x17A7B8u;
    if (runtime->hasFunction(0x17A7B8u)) {
        auto targetFn = runtime->lookupFunction(0x17A7B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A9F0u; }
        if (ctx->pc != 0x17A9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A7B8_0x17a7b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A9F0u; }
        if (ctx->pc != 0x17A9F0u) { return; }
    }
    ctx->pc = 0x17A9F0u;
label_17a9f0:
    // 0x17a9f0: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x17A9F0u;
    {
        const bool branch_taken_0x17a9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A9F0u;
            // 0x17a9f4: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a9f0) {
            ctx->pc = 0x17A9B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17a9b0;
        }
    }
    ctx->pc = 0x17A9F8u;
label_17a9f8:
    // 0x17a9f8: 0xc061f7a  jal         func_187DE8
    ctx->pc = 0x17A9F8u;
    SET_GPR_U32(ctx, 31, 0x17AA00u);
    ctx->pc = 0x17A9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A9F8u;
            // 0x17a9fc: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187DE8u;
    if (runtime->hasFunction(0x187DE8u)) {
        auto targetFn = runtime->lookupFunction(0x187DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AA00u; }
        if (ctx->pc != 0x17AA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187DE8_0x187de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AA00u; }
        if (ctx->pc != 0x17AA00u) { return; }
    }
    ctx->pc = 0x17AA00u;
label_17aa00:
    // 0x17aa00: 0x82320002  lb          $s2, 0x2($s1)
    ctx->pc = 0x17aa00u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_17aa04:
    // 0x17aa04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17aa04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17aa08: 0x5642001b  bnel        $s2, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x17AA08u;
    {
        const bool branch_taken_0x17aa08 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x17aa08) {
            ctx->pc = 0x17AA0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17AA08u;
            // 0x17aa0c: 0xae6043c4  sw          $zero, 0x43C4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 17348), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17AA78u;
            goto label_17aa78;
        }
    }
    ctx->pc = 0x17AA10u;
    // 0x17aa10: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17aa10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17aa14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17aa14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17aa18: 0x24504388  addiu       $s0, $v0, 0x4388
    ctx->pc = 0x17aa18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 17288));
    // 0x17aa1c: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x17aa1cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x17aa20: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17AA20u;
    {
        const bool branch_taken_0x17aa20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x17AA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AA20u;
            // 0x17aa24: 0x92020001  lbu         $v0, 0x1($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aa20) {
            ctx->pc = 0x17AA34u;
            goto label_17aa34;
        }
    }
    ctx->pc = 0x17AA28u;
    // 0x17aa28: 0xc05e9fa  jal         func_17A7E8
    ctx->pc = 0x17AA28u;
    SET_GPR_U32(ctx, 31, 0x17AA30u);
    ctx->pc = 0x17AA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AA28u;
            // 0x17aa2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A7E8u;
    if (runtime->hasFunction(0x17A7E8u)) {
        auto targetFn = runtime->lookupFunction(0x17A7E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AA30u; }
        if (ctx->pc != 0x17AA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A7E8_0x17a7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AA30u; }
        if (ctx->pc != 0x17AA30u) { return; }
    }
    ctx->pc = 0x17AA30u;
label_17aa30:
    // 0x17aa30: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x17aa30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_17aa34:
    // 0x17aa34: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x17aa34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x17aa38: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x17aa38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x17aa3c: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x17AA3Cu;
    {
        const bool branch_taken_0x17aa3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x17aa3c) {
            ctx->pc = 0x17AA40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17AA3Cu;
            // 0x17aa40: 0x82230002  lb          $v1, 0x2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17AA50u;
            goto label_17aa50;
        }
    }
    ctx->pc = 0x17AA44u;
    // 0x17aa44: 0xc05ea04  jal         func_17A810
    ctx->pc = 0x17AA44u;
    SET_GPR_U32(ctx, 31, 0x17AA4Cu);
    ctx->pc = 0x17AA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AA44u;
            // 0x17aa48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A810u;
    if (runtime->hasFunction(0x17A810u)) {
        auto targetFn = runtime->lookupFunction(0x17A810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AA4Cu; }
        if (ctx->pc != 0x17AA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A810_0x17a810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AA4Cu; }
        if (ctx->pc != 0x17AA4Cu) { return; }
    }
    ctx->pc = 0x17AA4Cu;
label_17aa4c:
    // 0x17aa4c: 0x82230002  lb          $v1, 0x2($s1)
    ctx->pc = 0x17aa4cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_17aa50:
    // 0x17aa50: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x17aa50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17aa54: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17AA54u;
    {
        const bool branch_taken_0x17aa54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17AA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AA54u;
            // 0x17aa58: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aa54) {
            ctx->pc = 0x17AA74u;
            goto label_17aa74;
        }
    }
    ctx->pc = 0x17AA5Cu;
    // 0x17aa5c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17aa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17aa60: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x17aa60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x17aa64: 0x246343e4  addiu       $v1, $v1, 0x43E4
    ctx->pc = 0x17aa64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17380));
    // 0x17aa68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17aa68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17aa6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17aa70: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x17aa70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_17aa74:
    // 0x17aa74: 0xae6043c4  sw          $zero, 0x43C4($s3)
    ctx->pc = 0x17aa74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 17348), GPR_U32(ctx, 0));
label_17aa78:
    // 0x17aa78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17aa78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17aa7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17aa7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17aa80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17aa80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17aa84: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17aa84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17aa88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17aa88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17aa8c: 0x3e00008  jr          $ra
    ctx->pc = 0x17AA8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AA8Cu;
            // 0x17aa90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17AA94u;
    // 0x17aa94: 0x0  nop
    ctx->pc = 0x17aa94u;
    // NOP
    // 0x17aa98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17aa98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17aa9c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x17aa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x17aaa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17aaa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17aaa4: 0x24844388  addiu       $a0, $a0, 0x4388
    ctx->pc = 0x17aaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17288));
    // 0x17aaa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17aaa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17aaac: 0x805ea62  j           func_17A988
    ctx->pc = 0x17AAACu;
    ctx->pc = 0x17AAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AAACu;
            // 0x17aab0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A988u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_17a988;
    ctx->pc = 0x17AAB4u;
    // 0x17aab4: 0x0  nop
    ctx->pc = 0x17aab4u;
    // NOP
}
