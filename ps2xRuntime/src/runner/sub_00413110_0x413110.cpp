#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00413110
// Address: 0x413110 - 0x413210
void sub_00413110_0x413110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00413110_0x413110");
#endif

    switch (ctx->pc) {
        case 0x413134u: goto label_413134;
        case 0x41313cu: goto label_41313c;
        case 0x41315cu: goto label_41315c;
        case 0x413164u: goto label_413164;
        case 0x4131a8u: goto label_4131a8;
        case 0x4131b0u: goto label_4131b0;
        default: break;
    }

    ctx->pc = 0x413110u;

    // 0x413110: 0x80788fc  j           func_1E23F0
    ctx->pc = 0x413110u;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x413118u;
    // 0x413118: 0x0  nop
    ctx->pc = 0x413118u;
    // NOP
    // 0x41311c: 0x0  nop
    ctx->pc = 0x41311cu;
    // NOP
    // 0x413120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x413120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x413124: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x413124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x413128: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x413128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x41312c: 0xc0aeebc  jal         func_2BBAF0
    ctx->pc = 0x41312Cu;
    SET_GPR_U32(ctx, 31, 0x413134u);
    ctx->pc = 0x413130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41312Cu;
            // 0x413130: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413134u; }
        if (ctx->pc != 0x413134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413134u; }
        if (ctx->pc != 0x413134u) { return; }
    }
    ctx->pc = 0x413134u;
label_413134:
    // 0x413134: 0xc0aeeb4  jal         func_2BBAD0
    ctx->pc = 0x413134u;
    SET_GPR_U32(ctx, 31, 0x41313Cu);
    ctx->pc = 0x413138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x413134u;
            // 0x413138: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41313Cu; }
        if (ctx->pc != 0x41313Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41313Cu; }
        if (ctx->pc != 0x41313Cu) { return; }
    }
    ctx->pc = 0x41313Cu;
label_41313c:
    // 0x41313c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x41313cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x413140: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x413140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x413144: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x413144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
    // 0x413148: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x413148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
    // 0x41314c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x41314cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x413150: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x413150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x413154: 0xc0aeea4  jal         func_2BBA90
    ctx->pc = 0x413154u;
    SET_GPR_U32(ctx, 31, 0x41315Cu);
    ctx->pc = 0x413158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x413154u;
            // 0x413158: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41315Cu; }
        if (ctx->pc != 0x41315Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41315Cu; }
        if (ctx->pc != 0x41315Cu) { return; }
    }
    ctx->pc = 0x41315Cu;
label_41315c:
    // 0x41315c: 0xc0aee8c  jal         func_2BBA30
    ctx->pc = 0x41315Cu;
    SET_GPR_U32(ctx, 31, 0x413164u);
    ctx->pc = 0x413160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41315Cu;
            // 0x413160: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413164u; }
        if (ctx->pc != 0x413164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x413164u; }
        if (ctx->pc != 0x413164u) { return; }
    }
    ctx->pc = 0x413164u;
label_413164:
    // 0x413164: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x413164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x413168: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x413168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x41316c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x41316cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x413170: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x413170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
    // 0x413174: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x413174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x413178: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x413178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41317c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x41317cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x413180: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x413180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x413184: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x413184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x413188: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x413188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
    // 0x41318c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x41318cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x413190: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x413190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x413194: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x413194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x413198: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x413198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
    // 0x41319c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x41319cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x4131a0: 0xc0775b8  jal         func_1DD6E0
    ctx->pc = 0x4131A0u;
    SET_GPR_U32(ctx, 31, 0x4131A8u);
    ctx->pc = 0x4131A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4131A0u;
            // 0x4131a4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4131A8u; }
        if (ctx->pc != 0x4131A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4131A8u; }
        if (ctx->pc != 0x4131A8u) { return; }
    }
    ctx->pc = 0x4131A8u;
label_4131a8:
    // 0x4131a8: 0xc077314  jal         func_1DCC50
    ctx->pc = 0x4131A8u;
    SET_GPR_U32(ctx, 31, 0x4131B0u);
    ctx->pc = 0x4131ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4131A8u;
            // 0x4131ac: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4131B0u; }
        if (ctx->pc != 0x4131B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4131B0u; }
        if (ctx->pc != 0x4131B0u) { return; }
    }
    ctx->pc = 0x4131B0u;
label_4131b0:
    // 0x4131b0: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x4131b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x4131b4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x4131b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x4131b8: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x4131b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
    // 0x4131bc: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x4131bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x4131c0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4131c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4131c4: 0x2484afb0  addiu       $a0, $a0, -0x5050
    ctx->pc = 0x4131c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946736));
    // 0x4131c8: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x4131c8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4131cc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4131ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4131d0: 0x2463aff0  addiu       $v1, $v1, -0x5010
    ctx->pc = 0x4131d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946800));
    // 0x4131d4: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x4131d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4131d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4131d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4131dc: 0xae0500c8  sw          $a1, 0xC8($s0)
    ctx->pc = 0x4131dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 5));
    // 0x4131e0: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4131e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4131e4: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x4131e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x4131e8: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x4131e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x4131ec: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x4131ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x4131f0: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x4131f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x4131f4: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x4131f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x4131f8: 0xa20000f0  sb          $zero, 0xF0($s0)
    ctx->pc = 0x4131f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 240), (uint8_t)GPR_U32(ctx, 0));
    // 0x4131fc: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x4131fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
    // 0x413200: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x413200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x413204: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x413204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x413208: 0x3e00008  jr          $ra
    ctx->pc = 0x413208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41320Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x413208u;
            // 0x41320c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x413210u;
}
