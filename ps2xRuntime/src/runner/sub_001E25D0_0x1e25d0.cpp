#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E25D0
// Address: 0x1e25d0 - 0x1e27a0
void sub_001E25D0_0x1e25d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E25D0_0x1e25d0");
#endif

    switch (ctx->pc) {
        case 0x1e2620u: goto label_1e2620;
        case 0x1e2628u: goto label_1e2628;
        case 0x1e263cu: goto label_1e263c;
        case 0x1e2660u: goto label_1e2660;
        case 0x1e2668u: goto label_1e2668;
        case 0x1e268cu: goto label_1e268c;
        case 0x1e2710u: goto label_1e2710;
        case 0x1e2724u: goto label_1e2724;
        default: break;
    }

    ctx->pc = 0x1e25d0u;

    // 0x1e25d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e25d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e25d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e25d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1e25d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e25d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e25dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e25dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e25e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e25e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e25e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e25e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e25e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e25e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e25ec: 0x71082b  sltu        $at, $v1, $s1
    ctx->pc = 0x1e25ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1e25f0: 0x1020004c  beqz        $at, . + 4 + (0x4C << 2)
    ctx->pc = 0x1E25F0u;
    {
        const bool branch_taken_0x1e25f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E25F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E25F0u;
            // 0x1e25f4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e25f0) {
            ctx->pc = 0x1E2724u;
            goto label_1e2724;
        }
    }
    ctx->pc = 0x1E25F8u;
    // 0x1e25f8: 0x3c012000  lui         $at, 0x2000
    ctx->pc = 0x1e25f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8192 << 16));
    // 0x1e25fc: 0x221082b  sltu        $at, $s1, $at
    ctx->pc = 0x1e25fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e2600: 0x5420000a  bnel        $at, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1E2600u;
    {
        const bool branch_taken_0x1e2600 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2600) {
            ctx->pc = 0x1E2604u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2600u;
            // 0x1e2604: 0x1120c0  sll         $a0, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E262Cu;
            goto label_1e262c;
        }
    }
    ctx->pc = 0x1E2608u;
    // 0x1e2608: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1e2608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1e260c: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1e260cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x1e2610: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x1e2610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x1e2614: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1e2614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1e2618: 0xc049e92  jal         func_127A48
    ctx->pc = 0x1E2618u;
    SET_GPR_U32(ctx, 31, 0x1E2620u);
    ctx->pc = 0x1E261Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2618u;
            // 0x1e261c: 0x24a5c830  addiu       $a1, $a1, -0x37D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2620u; }
        if (ctx->pc != 0x1E2620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2620u; }
        if (ctx->pc != 0x1E2620u) { return; }
    }
    ctx->pc = 0x1E2620u;
label_1e2620:
    // 0x1e2620: 0xc04981a  jal         func_126068
    ctx->pc = 0x1E2620u;
    SET_GPR_U32(ctx, 31, 0x1E2628u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2628u; }
        if (ctx->pc != 0x1E2628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2628u; }
        if (ctx->pc != 0x1E2628u) { return; }
    }
    ctx->pc = 0x1E2628u;
label_1e2628:
    // 0x1e2628: 0x1120c0  sll         $a0, $s1, 3
    ctx->pc = 0x1e2628u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_1e262c:
    // 0x1e262c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1e262cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x1e2630: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1e2630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x1e2634: 0xc040180  jal         func_100600
    ctx->pc = 0x1E2634u;
    SET_GPR_U32(ctx, 31, 0x1E263Cu);
    ctx->pc = 0x1E2638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2634u;
            // 0x1e2638: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E263Cu; }
        if (ctx->pc != 0x1E263Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E263Cu; }
        if (ctx->pc != 0x1E263Cu) { return; }
    }
    ctx->pc = 0x1E263Cu;
label_1e263c:
    // 0x1e263c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e263cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2640: 0x5600000a  bnel        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1E2640u;
    {
        const bool branch_taken_0x1e2640 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2640) {
            ctx->pc = 0x1E2644u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2640u;
            // 0x1e2644: 0xafb10040  sw          $s1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E266Cu;
            goto label_1e266c;
        }
    }
    ctx->pc = 0x1E2648u;
    // 0x1e2648: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1e2648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1e264c: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1e264cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x1e2650: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x1e2650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x1e2654: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1e2654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1e2658: 0xc049e92  jal         func_127A48
    ctx->pc = 0x1E2658u;
    SET_GPR_U32(ctx, 31, 0x1E2660u);
    ctx->pc = 0x1E265Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2658u;
            // 0x1e265c: 0x24a5c850  addiu       $a1, $a1, -0x37B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2660u; }
        if (ctx->pc != 0x1E2660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2660u; }
        if (ctx->pc != 0x1E2660u) { return; }
    }
    ctx->pc = 0x1E2660u;
label_1e2660:
    // 0x1e2660: 0xc04981a  jal         func_126068
    ctx->pc = 0x1E2660u;
    SET_GPR_U32(ctx, 31, 0x1E2668u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2668u; }
        if (ctx->pc != 0x1E2668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2668u; }
        if (ctx->pc != 0x1E2668u) { return; }
    }
    ctx->pc = 0x1E2668u;
label_1e2668:
    // 0x1e2668: 0xafb10040  sw          $s1, 0x40($sp)
    ctx->pc = 0x1e2668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 17));
label_1e266c:
    // 0x1e266c: 0xafb00048  sw          $s0, 0x48($sp)
    ctx->pc = 0x1e266cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 16));
    // 0x1e2670: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1e2670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1e2674: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1e2674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e2678: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1e2678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1e267c: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x1e267cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1e2680: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x1e2680u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1e2684: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E2684u;
    {
        const bool branch_taken_0x1e2684 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2684) {
            ctx->pc = 0x1E26C8u;
            goto label_1e26c8;
        }
    }
    ctx->pc = 0x1E268Cu;
label_1e268c:
    // 0x1e268c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E268Cu;
    {
        const bool branch_taken_0x1e268c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e268c) {
            ctx->pc = 0x1E26A8u;
            goto label_1e26a8;
        }
    }
    ctx->pc = 0x1E2694u;
    // 0x1e2694: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x1e2694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e2698: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1e2698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e269c: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x1e269cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1e26a0: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1e26a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1e26a4: 0x0  nop
    ctx->pc = 0x1e26a4u;
    // NOP
label_1e26a8:
    // 0x1e26a8: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x1e26a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1e26ac: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1e26acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1e26b0: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1e26b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1e26b4: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x1e26b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1e26b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e26b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e26bc: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1E26BCu;
    {
        const bool branch_taken_0x1e26bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E26C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E26BCu;
            // 0x1e26c0: 0xafa30044  sw          $v1, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e26bc) {
            ctx->pc = 0x1E268Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e268c;
        }
    }
    ctx->pc = 0x1E26C4u;
    // 0x1e26c4: 0x0  nop
    ctx->pc = 0x1e26c4u;
    // NOP
label_1e26c8:
    // 0x1e26c8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1e26c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e26cc: 0x5052000e  beql        $v0, $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x1E26CCu;
    {
        const bool branch_taken_0x1e26cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x1e26cc) {
            ctx->pc = 0x1E26D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E26CCu;
            // 0x1e26d0: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E2708u;
            goto label_1e2708;
        }
    }
    ctx->pc = 0x1E26D4u;
    // 0x1e26d4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1e26d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e26d8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1e26d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e26dc: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1e26dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1e26e0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1e26e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1e26e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1e26e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1e26e8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1e26e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e26ec: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1e26ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x1e26f0: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x1e26f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x1e26f4: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x1e26f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1e26f8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1e26f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1e26fc: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x1e26fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x1e2700: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x1e2700u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x1e2704: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e2704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e2708:
    // 0x1e2708: 0xc075e98  jal         func_1D7A60
    ctx->pc = 0x1E2708u;
    SET_GPR_U32(ctx, 31, 0x1E2710u);
    ctx->pc = 0x1D7A60u;
    if (runtime->hasFunction(0x1D7A60u)) {
        auto targetFn = runtime->lookupFunction(0x1D7A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2710u; }
        if (ctx->pc != 0x1E2710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7A60_0x1d7a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2710u; }
        if (ctx->pc != 0x1E2710u) { return; }
    }
    ctx->pc = 0x1E2710u;
label_1e2710:
    // 0x1e2710: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1e2710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1e2714: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E2714u;
    {
        const bool branch_taken_0x1e2714 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2714) {
            ctx->pc = 0x1E2718u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2714u;
            // 0x1e2718: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E2728u;
            goto label_1e2728;
        }
    }
    ctx->pc = 0x1E271Cu;
    // 0x1e271c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x1E271Cu;
    SET_GPR_U32(ctx, 31, 0x1E2724u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2724u; }
        if (ctx->pc != 0x1E2724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2724u; }
        if (ctx->pc != 0x1E2724u) { return; }
    }
    ctx->pc = 0x1E2724u;
label_1e2724:
    // 0x1e2724: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e2724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e2728:
    // 0x1e2728: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e2728u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e272c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e272cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2730: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e2730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2734: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2734u;
            // 0x1e2738: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E273Cu;
    // 0x1e273c: 0x0  nop
    ctx->pc = 0x1e273cu;
    // NOP
    // 0x1e2740: 0x80c62a0  j           func_318A80
    ctx->pc = 0x1E2740u;
    ctx->pc = 0x1E2744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2740u;
            // 0x1e2744: 0x2484ffc0  addiu       $a0, $a0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318A80u;
    {
        auto targetFn = runtime->lookupFunction(0x318A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E2748u;
    // 0x1e2748: 0x0  nop
    ctx->pc = 0x1e2748u;
    // NOP
    // 0x1e274c: 0x0  nop
    ctx->pc = 0x1e274cu;
    // NOP
    // 0x1e2750: 0x80787ac  j           func_1E1EB0
    ctx->pc = 0x1E2750u;
    ctx->pc = 0x1E2754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2750u;
            // 0x1e2754: 0x2484ffc0  addiu       $a0, $a0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1EB0u;
    {
        auto targetFn = runtime->lookupFunction(0x1E1EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E2758u;
    // 0x1e2758: 0x0  nop
    ctx->pc = 0x1e2758u;
    // NOP
    // 0x1e275c: 0x0  nop
    ctx->pc = 0x1e275cu;
    // NOP
    // 0x1e2760: 0x8077fa8  j           func_1DFEA0
    ctx->pc = 0x1E2760u;
    ctx->pc = 0x1E2764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2760u;
            // 0x1e2764: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEA0u;
    {
        auto targetFn = runtime->lookupFunction(0x1DFEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E2768u;
    // 0x1e2768: 0x0  nop
    ctx->pc = 0x1e2768u;
    // NOP
    // 0x1e276c: 0x0  nop
    ctx->pc = 0x1e276cu;
    // NOP
    // 0x1e2770: 0x8076808  j           func_1DA020
    ctx->pc = 0x1E2770u;
    ctx->pc = 0x1E2774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2770u;
            // 0x1e2774: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA020u;
    {
        auto targetFn = runtime->lookupFunction(0x1DA020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E2778u;
    // 0x1e2778: 0x0  nop
    ctx->pc = 0x1e2778u;
    // NOP
    // 0x1e277c: 0x0  nop
    ctx->pc = 0x1e277cu;
    // NOP
    // 0x1e2780: 0x8076a04  j           func_1DA810
    ctx->pc = 0x1E2780u;
    ctx->pc = 0x1E2784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2780u;
            // 0x1e2784: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA810u;
    {
        auto targetFn = runtime->lookupFunction(0x1DA810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E2788u;
    // 0x1e2788: 0x0  nop
    ctx->pc = 0x1e2788u;
    // NOP
    // 0x1e278c: 0x0  nop
    ctx->pc = 0x1e278cu;
    // NOP
    // 0x1e2790: 0x807861c  j           func_1E1870
    ctx->pc = 0x1E2790u;
    ctx->pc = 0x1E2794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2790u;
            // 0x1e2794: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1870u;
    if (runtime->hasFunction(0x1E1870u)) {
        auto targetFn = runtime->lookupFunction(0x1E1870u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E1870_0x1e1870(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E2798u;
    // 0x1e2798: 0x0  nop
    ctx->pc = 0x1e2798u;
    // NOP
    // 0x1e279c: 0x0  nop
    ctx->pc = 0x1e279cu;
    // NOP
}
