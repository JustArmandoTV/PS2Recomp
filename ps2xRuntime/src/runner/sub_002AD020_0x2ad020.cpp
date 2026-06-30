#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AD020
// Address: 0x2ad020 - 0x2ad170
void sub_002AD020_0x2ad020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD020_0x2ad020");
#endif

    switch (ctx->pc) {
        case 0x2ad064u: goto label_2ad064;
        case 0x2ad088u: goto label_2ad088;
        case 0x2ad090u: goto label_2ad090;
        case 0x2ad09cu: goto label_2ad09c;
        case 0x2ad0c0u: goto label_2ad0c0;
        case 0x2ad0c8u: goto label_2ad0c8;
        case 0x2ad124u: goto label_2ad124;
        case 0x2ad148u: goto label_2ad148;
        default: break;
    }

    ctx->pc = 0x2ad020u;

    // 0x2ad020: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ad020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ad024: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2ad024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2ad028: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ad028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ad02c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ad02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ad030: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ad030u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad034: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ad034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ad038: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2ad038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ad03c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AD03Cu;
    {
        const bool branch_taken_0x2ad03c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AD040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD03Cu;
            // 0x2ad040: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad03c) {
            ctx->pc = 0x2AD04Cu;
            goto label_2ad04c;
        }
    }
    ctx->pc = 0x2AD044u;
    // 0x2ad044: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AD044u;
    {
        const bool branch_taken_0x2ad044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD044u;
            // 0x2ad048: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad044) {
            ctx->pc = 0x2AD050u;
            goto label_2ad050;
        }
    }
    ctx->pc = 0x2AD04Cu;
label_2ad04c:
    // 0x2ad04c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2ad04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2ad050:
    // 0x2ad050: 0x71082b  sltu        $at, $v1, $s1
    ctx->pc = 0x2ad050u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2ad054: 0x50200041  beql        $at, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x2AD054u;
    {
        const bool branch_taken_0x2ad054 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad054) {
            ctx->pc = 0x2AD058u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD054u;
            // 0x2ad058: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AD15Cu;
            goto label_2ad15c;
        }
    }
    ctx->pc = 0x2AD05Cu;
    // 0x2ad05c: 0xc0ab4e4  jal         func_2AD390
    ctx->pc = 0x2AD05Cu;
    SET_GPR_U32(ctx, 31, 0x2AD064u);
    ctx->pc = 0x2AD060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD05Cu;
            // 0x2ad060: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AD390u;
    if (runtime->hasFunction(0x2AD390u)) {
        auto targetFn = runtime->lookupFunction(0x2AD390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD064u; }
        if (ctx->pc != 0x2AD064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AD390_0x2ad390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD064u; }
        if (ctx->pc != 0x2AD064u) { return; }
    }
    ctx->pc = 0x2AD064u;
label_2ad064:
    // 0x2ad064: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x2ad064u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2ad068: 0x5020000a  beql        $at, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2AD068u;
    {
        const bool branch_taken_0x2ad068 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad068) {
            ctx->pc = 0x2AD06Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD068u;
            // 0x2ad06c: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AD094u;
            goto label_2ad094;
        }
    }
    ctx->pc = 0x2AD070u;
    // 0x2ad070: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2ad070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2ad074: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2ad074u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2ad078: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x2ad078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x2ad07c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2ad07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2ad080: 0xc049e92  jal         func_127A48
    ctx->pc = 0x2AD080u;
    SET_GPR_U32(ctx, 31, 0x2AD088u);
    ctx->pc = 0x2AD084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD080u;
            // 0x2ad084: 0x24a510a0  addiu       $a1, $a1, 0x10A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD088u; }
        if (ctx->pc != 0x2AD088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD088u; }
        if (ctx->pc != 0x2AD088u) { return; }
    }
    ctx->pc = 0x2AD088u;
label_2ad088:
    // 0x2ad088: 0xc04981a  jal         func_126068
    ctx->pc = 0x2AD088u;
    SET_GPR_U32(ctx, 31, 0x2AD090u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD090u; }
        if (ctx->pc != 0x2AD090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD090u; }
        if (ctx->pc != 0x2AD090u) { return; }
    }
    ctx->pc = 0x2AD090u;
label_2ad090:
    // 0x2ad090: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x2ad090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2ad094:
    // 0x2ad094: 0xc040180  jal         func_100600
    ctx->pc = 0x2AD094u;
    SET_GPR_U32(ctx, 31, 0x2AD09Cu);
    ctx->pc = 0x2AD098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD094u;
            // 0x2ad098: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD09Cu; }
        if (ctx->pc != 0x2AD09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD09Cu; }
        if (ctx->pc != 0x2AD09Cu) { return; }
    }
    ctx->pc = 0x2AD09Cu;
label_2ad09c:
    // 0x2ad09c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ad09cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad0a0: 0x5600000a  bnel        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2AD0A0u;
    {
        const bool branch_taken_0x2ad0a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ad0a0) {
            ctx->pc = 0x2AD0A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD0A0u;
            // 0x2ad0a4: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AD0CCu;
            goto label_2ad0cc;
        }
    }
    ctx->pc = 0x2AD0A8u;
    // 0x2ad0a8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2ad0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2ad0ac: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2ad0acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2ad0b0: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x2ad0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x2ad0b4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2ad0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2ad0b8: 0xc049e92  jal         func_127A48
    ctx->pc = 0x2AD0B8u;
    SET_GPR_U32(ctx, 31, 0x2AD0C0u);
    ctx->pc = 0x2AD0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD0B8u;
            // 0x2ad0bc: 0x24a5c870  addiu       $a1, $a1, -0x3790 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD0C0u; }
        if (ctx->pc != 0x2AD0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD0C0u; }
        if (ctx->pc != 0x2AD0C0u) { return; }
    }
    ctx->pc = 0x2AD0C0u;
label_2ad0c0:
    // 0x2ad0c0: 0xc04981a  jal         func_126068
    ctx->pc = 0x2AD0C0u;
    SET_GPR_U32(ctx, 31, 0x2AD0C8u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD0C8u; }
        if (ctx->pc != 0x2AD0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD0C8u; }
        if (ctx->pc != 0x2AD0C8u) { return; }
    }
    ctx->pc = 0x2AD0C8u;
label_2ad0c8:
    // 0x2ad0c8: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x2ad0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2ad0cc:
    // 0x2ad0cc: 0x50a0001f  beql        $a1, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x2AD0CCu;
    {
        const bool branch_taken_0x2ad0cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad0cc) {
            ctx->pc = 0x2AD0D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD0CCu;
            // 0x2ad0d0: 0xae50000c  sw          $s0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AD14Cu;
            goto label_2ad14c;
        }
    }
    ctx->pc = 0x2AD0D4u;
    // 0x2ad0d4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2ad0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ad0d8: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AD0D8u;
    {
        const bool branch_taken_0x2ad0d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD0D8u;
            // 0x2ad0dc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad0d8) {
            ctx->pc = 0x2AD0FCu;
            goto label_2ad0fc;
        }
    }
    ctx->pc = 0x2AD0E0u;
    // 0x2ad0e0: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x2ad0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2ad0e4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2ad0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2ad0e8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2ad0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ad0ec: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x2ad0ecu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2ad0f0: 0x1010  mfhi        $v0
    ctx->pc = 0x2ad0f0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2ad0f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AD0F4u;
    {
        const bool branch_taken_0x2ad0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD0F4u;
            // 0x2ad0f8: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad0f4) {
            ctx->pc = 0x2AD104u;
            goto label_2ad104;
        }
    }
    ctx->pc = 0x2AD0FCu;
label_2ad0fc:
    // 0x2ad0fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ad0fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad100: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2ad100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2ad104:
    // 0x2ad104: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2ad104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ad108: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x2ad108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ad10c: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x2ad10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2ad110: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2ad110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2ad114: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ad114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ad118: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x2ad118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2ad11c: 0x10c40008  beq         $a2, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AD11Cu;
    {
        const bool branch_taken_0x2ad11c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x2ad11c) {
            ctx->pc = 0x2AD140u;
            goto label_2ad140;
        }
    }
    ctx->pc = 0x2AD124u;
label_2ad124:
    // 0x2ad124: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2ad124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ad128: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2ad128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2ad12c: 0x14c30002  bne         $a2, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AD12Cu;
    {
        const bool branch_taken_0x2ad12c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x2AD130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD12Cu;
            // 0x2ad130: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad12c) {
            ctx->pc = 0x2AD138u;
            goto label_2ad138;
        }
    }
    ctx->pc = 0x2AD134u;
    // 0x2ad134: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2ad134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ad138:
    // 0x2ad138: 0x14c4fffa  bne         $a2, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2AD138u;
    {
        const bool branch_taken_0x2ad138 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x2AD13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD138u;
            // 0x2ad13c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad138) {
            ctx->pc = 0x2AD124u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ad124;
        }
    }
    ctx->pc = 0x2AD140u;
label_2ad140:
    // 0x2ad140: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2AD140u;
    SET_GPR_U32(ctx, 31, 0x2AD148u);
    ctx->pc = 0x2AD144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD140u;
            // 0x2ad144: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD148u; }
        if (ctx->pc != 0x2AD148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD148u; }
        if (ctx->pc != 0x2AD148u) { return; }
    }
    ctx->pc = 0x2AD148u;
label_2ad148:
    // 0x2ad148: 0xae50000c  sw          $s0, 0xC($s2)
    ctx->pc = 0x2ad148u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 16));
label_2ad14c:
    // 0x2ad14c: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x2ad14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2ad150: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2ad150u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x2ad154: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x2ad154u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x2ad158: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ad158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2ad15c:
    // 0x2ad15c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ad15cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ad160: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ad160u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad164: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ad164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad168: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD168u;
            // 0x2ad16c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AD170u;
}
