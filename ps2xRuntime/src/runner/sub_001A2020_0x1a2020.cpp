#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A2020
// Address: 0x1a2020 - 0x1a2130
void sub_001A2020_0x1a2020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2020_0x1a2020");
#endif

    switch (ctx->pc) {
        case 0x1a2054u: goto label_1a2054;
        case 0x1a2064u: goto label_1a2064;
        case 0x1a207cu: goto label_1a207c;
        case 0x1a208cu: goto label_1a208c;
        case 0x1a20a4u: goto label_1a20a4;
        case 0x1a20b8u: goto label_1a20b8;
        case 0x1a20c8u: goto label_1a20c8;
        case 0x1a20d8u: goto label_1a20d8;
        case 0x1a20e8u: goto label_1a20e8;
        default: break;
    }

    ctx->pc = 0x1a2020u;

    // 0x1a2020: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a2020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a2024: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a2024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2028: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a2028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a202c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a202cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2030: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a2030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a2034: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a2034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a2038: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a2038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a203c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a203cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a2040: 0x82020081  lb          $v0, 0x81($s0)
    ctx->pc = 0x1a2040u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 129)));
    // 0x1a2044: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A2044u;
    {
        const bool branch_taken_0x1a2044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A2048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2044u;
            // 0x1a2048: 0x8e110048  lw          $s1, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2044) {
            ctx->pc = 0x1A2068u;
            goto label_1a2068;
        }
    }
    ctx->pc = 0x1A204Cu;
    // 0x1a204c: 0xc0601a4  jal         func_180690
    ctx->pc = 0x1A204Cu;
    SET_GPR_U32(ctx, 31, 0x1A2054u);
    ctx->pc = 0x1A2050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A204Cu;
            // 0x1a2050: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180690u;
    if (runtime->hasFunction(0x180690u)) {
        auto targetFn = runtime->lookupFunction(0x180690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2054u; }
        if (ctx->pc != 0x1A2054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180690_0x180690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2054u; }
        if (ctx->pc != 0x1A2054u) { return; }
    }
    ctx->pc = 0x1A2054u;
label_1a2054:
    // 0x1a2054: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A2054u;
    {
        const bool branch_taken_0x1a2054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2054) {
            ctx->pc = 0x1A2058u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2054u;
            // 0x1a2058: 0x96020080  lhu         $v0, 0x80($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A206Cu;
            goto label_1a206c;
        }
    }
    ctx->pc = 0x1A205Cu;
    // 0x1a205c: 0xc066f56  jal         func_19BD58
    ctx->pc = 0x1A205Cu;
    SET_GPR_U32(ctx, 31, 0x1A2064u);
    ctx->pc = 0x1A2060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A205Cu;
            // 0x1a2060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BD58u;
    if (runtime->hasFunction(0x19BD58u)) {
        auto targetFn = runtime->lookupFunction(0x19BD58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2064u; }
        if (ctx->pc != 0x1A2064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019BD58_0x19bd58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2064u; }
        if (ctx->pc != 0x1A2064u) { return; }
    }
    ctx->pc = 0x1A2064u;
label_1a2064:
    // 0x1a2064: 0xa2000081  sb          $zero, 0x81($s0)
    ctx->pc = 0x1a2064u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 129), (uint8_t)GPR_U32(ctx, 0));
label_1a2068:
    // 0x1a2068: 0x96020080  lhu         $v0, 0x80($s0)
    ctx->pc = 0x1a2068u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 128)));
label_1a206c:
    // 0x1a206c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A206Cu;
    {
        const bool branch_taken_0x1a206c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a206c) {
            ctx->pc = 0x1A2070u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A206Cu;
            // 0x1a2070: 0x8e020590  lw          $v0, 0x590($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A2090u;
            goto label_1a2090;
        }
    }
    ctx->pc = 0x1A2074u;
    // 0x1a2074: 0xc0601a4  jal         func_180690
    ctx->pc = 0x1A2074u;
    SET_GPR_U32(ctx, 31, 0x1A207Cu);
    ctx->pc = 0x1A2078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2074u;
            // 0x1a2078: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180690u;
    if (runtime->hasFunction(0x180690u)) {
        auto targetFn = runtime->lookupFunction(0x180690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A207Cu; }
        if (ctx->pc != 0x1A207Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180690_0x180690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A207Cu; }
        if (ctx->pc != 0x1A207Cu) { return; }
    }
    ctx->pc = 0x1A207Cu;
label_1a207c:
    // 0x1a207c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A207Cu;
    {
        const bool branch_taken_0x1a207c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a207c) {
            ctx->pc = 0x1A2080u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A207Cu;
            // 0x1a2080: 0x8e020590  lw          $v0, 0x590($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A2090u;
            goto label_1a2090;
        }
    }
    ctx->pc = 0x1A2084u;
    // 0x1a2084: 0xc067186  jal         func_19C618
    ctx->pc = 0x1A2084u;
    SET_GPR_U32(ctx, 31, 0x1A208Cu);
    ctx->pc = 0x1A2088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2084u;
            // 0x1a2088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C618u;
    if (runtime->hasFunction(0x19C618u)) {
        auto targetFn = runtime->lookupFunction(0x19C618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A208Cu; }
        if (ctx->pc != 0x1A208Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019C618_0x19c618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A208Cu; }
        if (ctx->pc != 0x1A208Cu) { return; }
    }
    ctx->pc = 0x1A208Cu;
label_1a208c:
    // 0x1a208c: 0x8e020590  lw          $v0, 0x590($s0)
    ctx->pc = 0x1a208cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1424)));
label_1a2090:
    // 0x1a2090: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x1A2090u;
    {
        const bool branch_taken_0x1a2090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2090) {
            ctx->pc = 0x1A2094u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2090u;
            // 0x1a2094: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A2114u;
            goto label_1a2114;
        }
    }
    ctx->pc = 0x1A2098u;
    // 0x1a2098: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a2098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a209c: 0xc06d74a  jal         func_1B5D28
    ctx->pc = 0x1A209Cu;
    SET_GPR_U32(ctx, 31, 0x1A20A4u);
    ctx->pc = 0x1A20A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A209Cu;
            // 0x1a20a0: 0x24130004  addiu       $s3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D28u;
    if (runtime->hasFunction(0x1B5D28u)) {
        auto targetFn = runtime->lookupFunction(0x1B5D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A20A4u; }
        if (ctx->pc != 0x1A20A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5D28_0x1b5d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A20A4u; }
        if (ctx->pc != 0x1A20A4u) { return; }
    }
    ctx->pc = 0x1A20A4u;
label_1a20a4:
    // 0x1a20a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a20a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a20a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a20a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a20ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a20acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a20b0: 0xc0683f2  jal         func_1A0FC8
    ctx->pc = 0x1A20B0u;
    SET_GPR_U32(ctx, 31, 0x1A20B8u);
    ctx->pc = 0x1A20B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A20B0u;
            // 0x1a20b4: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0FC8u;
    if (runtime->hasFunction(0x1A0FC8u)) {
        auto targetFn = runtime->lookupFunction(0x1A0FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A20B8u; }
        if (ctx->pc != 0x1A20B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0FC8_0x1a0fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A20B8u; }
        if (ctx->pc != 0x1A20B8u) { return; }
    }
    ctx->pc = 0x1A20B8u;
label_1a20b8:
    // 0x1a20b8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A20B8u;
    {
        const bool branch_taken_0x1a20b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a20b8) {
            ctx->pc = 0x1A20BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A20B8u;
            // 0x1a20bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A20D0u;
            goto label_1a20d0;
        }
    }
    ctx->pc = 0x1A20C0u;
    // 0x1a20c0: 0xc06849e  jal         func_1A1278
    ctx->pc = 0x1A20C0u;
    SET_GPR_U32(ctx, 31, 0x1A20C8u);
    ctx->pc = 0x1A20C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A20C0u;
            // 0x1a20c4: 0x260404f8  addiu       $a0, $s0, 0x4F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1278u;
    if (runtime->hasFunction(0x1A1278u)) {
        auto targetFn = runtime->lookupFunction(0x1A1278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A20C8u; }
        if (ctx->pc != 0x1A20C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1278_0x1a1278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A20C8u; }
        if (ctx->pc != 0x1A20C8u) { return; }
    }
    ctx->pc = 0x1A20C8u;
label_1a20c8:
    // 0x1a20c8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a20c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a20cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a20ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a20d0:
    // 0x1a20d0: 0xc0683f2  jal         func_1A0FC8
    ctx->pc = 0x1A20D0u;
    SET_GPR_U32(ctx, 31, 0x1A20D8u);
    ctx->pc = 0x1A20D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A20D0u;
            // 0x1a20d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0FC8u;
    if (runtime->hasFunction(0x1A0FC8u)) {
        auto targetFn = runtime->lookupFunction(0x1A0FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A20D8u; }
        if (ctx->pc != 0x1A20D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0FC8_0x1a0fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A20D8u; }
        if (ctx->pc != 0x1A20D8u) { return; }
    }
    ctx->pc = 0x1A20D8u;
label_1a20d8:
    // 0x1a20d8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A20D8u;
    {
        const bool branch_taken_0x1a20d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a20d8) {
            ctx->pc = 0x1A20DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A20D8u;
            // 0x1a20dc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A20F0u;
            goto label_1a20f0;
        }
    }
    ctx->pc = 0x1A20E0u;
    // 0x1a20e0: 0xc06849e  jal         func_1A1278
    ctx->pc = 0x1A20E0u;
    SET_GPR_U32(ctx, 31, 0x1A20E8u);
    ctx->pc = 0x1A20E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A20E0u;
            // 0x1a20e4: 0x2604051c  addiu       $a0, $s0, 0x51C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1308));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1278u;
    if (runtime->hasFunction(0x1A1278u)) {
        auto targetFn = runtime->lookupFunction(0x1A1278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A20E8u; }
        if (ctx->pc != 0x1A20E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1278_0x1a1278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A20E8u; }
        if (ctx->pc != 0x1A20E8u) { return; }
    }
    ctx->pc = 0x1A20E8u;
label_1a20e8:
    // 0x1a20e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a20e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a20ec: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1a20ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a20f0:
    // 0x1a20f0: 0x56220008  bnel        $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A20F0u;
    {
        const bool branch_taken_0x1a20f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a20f0) {
            ctx->pc = 0x1A20F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A20F0u;
            // 0x1a20f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A2114u;
            goto label_1a2114;
        }
    }
    ctx->pc = 0x1A20F8u;
    // 0x1a20f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a20f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a20fc: 0x52620005  beql        $s3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A20FCu;
    {
        const bool branch_taken_0x1a20fc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a20fc) {
            ctx->pc = 0x1A2100u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A20FCu;
            // 0x1a2100: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A2114u;
            goto label_1a2114;
        }
    }
    ctx->pc = 0x1A2104u;
    // 0x1a2104: 0x12420002  beq         $s2, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A2104u;
    {
        const bool branch_taken_0x1a2104 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A2108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2104u;
            // 0x1a2108: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2104) {
            ctx->pc = 0x1A2110u;
            goto label_1a2110;
        }
    }
    ctx->pc = 0x1A210Cu;
    // 0x1a210c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a210cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1a2110:
    // 0x1a2110: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a2110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2114:
    // 0x1a2114: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a2114u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a2118: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a2118u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a211c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a211cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2120: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a2120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a2124: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2124u;
            // 0x1a2128: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A212Cu;
    // 0x1a212c: 0x0  nop
    ctx->pc = 0x1a212cu;
    // NOP
}
