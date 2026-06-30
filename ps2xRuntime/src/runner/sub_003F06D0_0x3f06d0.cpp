#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F06D0
// Address: 0x3f06d0 - 0x3f07d0
void sub_003F06D0_0x3f06d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F06D0_0x3f06d0");
#endif

    switch (ctx->pc) {
        case 0x3f06f4u: goto label_3f06f4;
        case 0x3f06fcu: goto label_3f06fc;
        case 0x3f071cu: goto label_3f071c;
        case 0x3f0724u: goto label_3f0724;
        case 0x3f0768u: goto label_3f0768;
        case 0x3f0770u: goto label_3f0770;
        default: break;
    }

    ctx->pc = 0x3f06d0u;

    // 0x3f06d0: 0x80788fc  j           func_1E23F0
    ctx->pc = 0x3F06D0u;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3F06D8u;
    // 0x3f06d8: 0x0  nop
    ctx->pc = 0x3f06d8u;
    // NOP
    // 0x3f06dc: 0x0  nop
    ctx->pc = 0x3f06dcu;
    // NOP
    // 0x3f06e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f06e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3f06e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f06e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3f06e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f06e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3f06ec: 0xc0aeebc  jal         func_2BBAF0
    ctx->pc = 0x3F06ECu;
    SET_GPR_U32(ctx, 31, 0x3F06F4u);
    ctx->pc = 0x3F06F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F06ECu;
            // 0x3f06f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F06F4u; }
        if (ctx->pc != 0x3F06F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F06F4u; }
        if (ctx->pc != 0x3F06F4u) { return; }
    }
    ctx->pc = 0x3F06F4u;
label_3f06f4:
    // 0x3f06f4: 0xc0aeeb4  jal         func_2BBAD0
    ctx->pc = 0x3F06F4u;
    SET_GPR_U32(ctx, 31, 0x3F06FCu);
    ctx->pc = 0x3F06F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F06F4u;
            // 0x3f06f8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F06FCu; }
        if (ctx->pc != 0x3F06FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F06FCu; }
        if (ctx->pc != 0x3F06FCu) { return; }
    }
    ctx->pc = 0x3F06FCu;
label_3f06fc:
    // 0x3f06fc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3f06fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x3f0700: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3f0700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x3f0704: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x3f0704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
    // 0x3f0708: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x3f0708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
    // 0x3f070c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3f070cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3f0710: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x3f0710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x3f0714: 0xc0aeea4  jal         func_2BBA90
    ctx->pc = 0x3F0714u;
    SET_GPR_U32(ctx, 31, 0x3F071Cu);
    ctx->pc = 0x3F0718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0714u;
            // 0x3f0718: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F071Cu; }
        if (ctx->pc != 0x3F071Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F071Cu; }
        if (ctx->pc != 0x3F071Cu) { return; }
    }
    ctx->pc = 0x3F071Cu;
label_3f071c:
    // 0x3f071c: 0xc0aee8c  jal         func_2BBA30
    ctx->pc = 0x3F071Cu;
    SET_GPR_U32(ctx, 31, 0x3F0724u);
    ctx->pc = 0x3F0720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F071Cu;
            // 0x3f0720: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0724u; }
        if (ctx->pc != 0x3F0724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0724u; }
        if (ctx->pc != 0x3F0724u) { return; }
    }
    ctx->pc = 0x3F0724u;
label_3f0724:
    // 0x3f0724: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x3f0724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x3f0728: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x3f0728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x3f072c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x3f072cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x3f0730: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x3f0730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
    // 0x3f0734: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x3f0734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x3f0738: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f0738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f073c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x3f073cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x3f0740: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3f0740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3f0744: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x3f0744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x3f0748: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x3f0748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
    // 0x3f074c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x3f074cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x3f0750: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x3f0750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x3f0754: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x3f0754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x3f0758: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x3f0758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
    // 0x3f075c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x3f075cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x3f0760: 0xc0775b8  jal         func_1DD6E0
    ctx->pc = 0x3F0760u;
    SET_GPR_U32(ctx, 31, 0x3F0768u);
    ctx->pc = 0x3F0764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0760u;
            // 0x3f0764: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0768u; }
        if (ctx->pc != 0x3F0768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0768u; }
        if (ctx->pc != 0x3F0768u) { return; }
    }
    ctx->pc = 0x3F0768u;
label_3f0768:
    // 0x3f0768: 0xc077314  jal         func_1DCC50
    ctx->pc = 0x3F0768u;
    SET_GPR_U32(ctx, 31, 0x3F0770u);
    ctx->pc = 0x3F076Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0768u;
            // 0x3f076c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0770u; }
        if (ctx->pc != 0x3F0770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0770u; }
        if (ctx->pc != 0x3F0770u) { return; }
    }
    ctx->pc = 0x3F0770u;
label_3f0770:
    // 0x3f0770: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x3f0770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x3f0774: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x3f0774u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x3f0778: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x3f0778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
    // 0x3f077c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x3f077cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x3f0780: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3f0780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3f0784: 0x8e0600c8  lw          $a2, 0xC8($s0)
    ctx->pc = 0x3f0784u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x3f0788: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x3f0788u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3f078c: 0x24a59fa0  addiu       $a1, $a1, -0x6060
    ctx->pc = 0x3f078cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942624));
    // 0x3f0790: 0x24849fe0  addiu       $a0, $a0, -0x6020
    ctx->pc = 0x3f0790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942688));
    // 0x3f0794: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f0794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f0798: 0xc73018  mult        $a2, $a2, $a3
    ctx->pc = 0x3f0798u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3f079c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3f079cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f07a0: 0xae0600c8  sw          $a2, 0xC8($s0)
    ctx->pc = 0x3f07a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 6));
    // 0x3f07a4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x3f07a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x3f07a8: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x3f07a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
    // 0x3f07ac: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x3f07acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x3f07b0: 0xae000138  sw          $zero, 0x138($s0)
    ctx->pc = 0x3f07b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 0));
    // 0x3f07b4: 0xae00013c  sw          $zero, 0x13C($s0)
    ctx->pc = 0x3f07b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 0));
    // 0x3f07b8: 0xae000140  sw          $zero, 0x140($s0)
    ctx->pc = 0x3f07b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
    // 0x3f07bc: 0xae000148  sw          $zero, 0x148($s0)
    ctx->pc = 0x3f07bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 0));
    // 0x3f07c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f07c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f07c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f07c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f07c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3F07C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F07CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F07C8u;
            // 0x3f07cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F07D0u;
}
