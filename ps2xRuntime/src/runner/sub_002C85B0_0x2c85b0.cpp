#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C85B0
// Address: 0x2c85b0 - 0x2c86f0
void sub_002C85B0_0x2c85b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C85B0_0x2c85b0");
#endif

    switch (ctx->pc) {
        case 0x2c85ccu: goto label_2c85cc;
        case 0x2c85d4u: goto label_2c85d4;
        case 0x2c8620u: goto label_2c8620;
        case 0x2c8680u: goto label_2c8680;
        case 0x2c868cu: goto label_2c868c;
        case 0x2c8698u: goto label_2c8698;
        case 0x2c86a4u: goto label_2c86a4;
        case 0x2c86b0u: goto label_2c86b0;
        case 0x2c86bcu: goto label_2c86bc;
        case 0x2c86d4u: goto label_2c86d4;
        default: break;
    }

    ctx->pc = 0x2c85b0u;

    // 0x2c85b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c85b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c85b4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2c85b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2c85b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c85b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c85bc: 0x34468a92  ori         $a2, $v0, 0x8A92
    ctx->pc = 0x2c85bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35474);
    // 0x2c85c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c85c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c85c4: 0xc0b2274  jal         func_2C89D0
    ctx->pc = 0x2C85C4u;
    SET_GPR_U32(ctx, 31, 0x2C85CCu);
    ctx->pc = 0x2C85C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C85C4u;
            // 0x2c85c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C89D0u;
    if (runtime->hasFunction(0x2C89D0u)) {
        auto targetFn = runtime->lookupFunction(0x2C89D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C85CCu; }
        if (ctx->pc != 0x2C85CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C89D0_0x2c89d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C85CCu; }
        if (ctx->pc != 0x2C85CCu) { return; }
    }
    ctx->pc = 0x2C85CCu;
label_2c85cc:
    // 0x2c85cc: 0xc0aed9c  jal         func_2BB670
    ctx->pc = 0x2C85CCu;
    SET_GPR_U32(ctx, 31, 0x2C85D4u);
    ctx->pc = 0x2C85D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C85CCu;
            // 0x2c85d0: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB670u;
    if (runtime->hasFunction(0x2BB670u)) {
        auto targetFn = runtime->lookupFunction(0x2BB670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C85D4u; }
        if (ctx->pc != 0x2C85D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB670_0x2bb670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C85D4u; }
        if (ctx->pc != 0x2C85D4u) { return; }
    }
    ctx->pc = 0x2C85D4u;
label_2c85d4:
    // 0x2c85d4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c85d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c85d8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c85d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c85dc: 0x24420700  addiu       $v0, $v0, 0x700
    ctx->pc = 0x2c85dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x2c85e0: 0x24630738  addiu       $v1, $v1, 0x738
    ctx->pc = 0x2c85e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1848));
    // 0x2c85e4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c85e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c85e8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2c85e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2c85ec: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x2c85ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x2c85f0: 0x24428270  addiu       $v0, $v0, -0x7D90
    ctx->pc = 0x2c85f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935152));
    // 0x2c85f4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2c85f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2c85f8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c85f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c85fc: 0x246382a8  addiu       $v1, $v1, -0x7D58
    ctx->pc = 0x2c85fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935208));
    // 0x2c8600: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x2c8600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x2c8604: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c8604u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8608: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c8608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c860c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c860cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8610: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8610u;
            // 0x2c8614: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C8618u;
    // 0x2c8618: 0x0  nop
    ctx->pc = 0x2c8618u;
    // NOP
    // 0x2c861c: 0x0  nop
    ctx->pc = 0x2c861cu;
    // NOP
label_2c8620:
    // 0x2c8620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c8620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c8624: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c8624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c8628: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c8628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c862c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c862cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c8630: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c8630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8634: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2C8634u;
    {
        const bool branch_taken_0x2c8634 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8634u;
            // 0x2c8638: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8634) {
            ctx->pc = 0x2C86D4u;
            goto label_2c86d4;
        }
    }
    ctx->pc = 0x2C863Cu;
    // 0x2c863c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c863cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c8640: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c8640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c8644: 0x24630700  addiu       $v1, $v1, 0x700
    ctx->pc = 0x2c8644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1792));
    // 0x2c8648: 0x24420738  addiu       $v0, $v0, 0x738
    ctx->pc = 0x2c8648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1848));
    // 0x2c864c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c864cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c8650: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C8650u;
    {
        const bool branch_taken_0x2c8650 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8650u;
            // 0x2c8654: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8650) {
            ctx->pc = 0x2C86BCu;
            goto label_2c86bc;
        }
    }
    ctx->pc = 0x2C8658u;
    // 0x2c8658: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c8658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c865c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c865cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c8660: 0x246306b0  addiu       $v1, $v1, 0x6B0
    ctx->pc = 0x2c8660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1712));
    // 0x2c8664: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2c8664u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x2c8668: 0x244206e8  addiu       $v0, $v0, 0x6E8
    ctx->pc = 0x2c8668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1768));
    // 0x2c866c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c866cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c8670: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2c8670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2c8674: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x2c8674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2c8678: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x2C8678u;
    SET_GPR_U32(ctx, 31, 0x2C8680u);
    ctx->pc = 0x2C867Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8678u;
            // 0x2c867c: 0x24a587c0  addiu       $a1, $a1, -0x7840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8680u; }
        if (ctx->pc != 0x2C8680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8680u; }
        if (ctx->pc != 0x2C8680u) { return; }
    }
    ctx->pc = 0x2C8680u;
label_2c8680:
    // 0x2c8680: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x2c8680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x2c8684: 0xc0b1208  jal         func_2C4820
    ctx->pc = 0x2C8684u;
    SET_GPR_U32(ctx, 31, 0x2C868Cu);
    ctx->pc = 0x2C8688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8684u;
            // 0x2c8688: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4820u;
    if (runtime->hasFunction(0x2C4820u)) {
        auto targetFn = runtime->lookupFunction(0x2C4820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C868Cu; }
        if (ctx->pc != 0x2C868Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4820_0x2c4820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C868Cu; }
        if (ctx->pc != 0x2C868Cu) { return; }
    }
    ctx->pc = 0x2C868Cu;
label_2c868c:
    // 0x2c868c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x2c868cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2c8690: 0xc0b21d4  jal         func_2C8750
    ctx->pc = 0x2C8690u;
    SET_GPR_U32(ctx, 31, 0x2C8698u);
    ctx->pc = 0x2C8694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8690u;
            // 0x2c8694: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8750u;
    if (runtime->hasFunction(0x2C8750u)) {
        auto targetFn = runtime->lookupFunction(0x2C8750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8698u; }
        if (ctx->pc != 0x2C8698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C8750_0x2c8750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8698u; }
        if (ctx->pc != 0x2C8698u) { return; }
    }
    ctx->pc = 0x2C8698u;
label_2c8698:
    // 0x2c8698: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2c8698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x2c869c: 0xc0b21d4  jal         func_2C8750
    ctx->pc = 0x2C869Cu;
    SET_GPR_U32(ctx, 31, 0x2C86A4u);
    ctx->pc = 0x2C86A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C869Cu;
            // 0x2c86a0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8750u;
    if (runtime->hasFunction(0x2C8750u)) {
        auto targetFn = runtime->lookupFunction(0x2C8750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C86A4u; }
        if (ctx->pc != 0x2C86A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C8750_0x2c8750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C86A4u; }
        if (ctx->pc != 0x2C86A4u) { return; }
    }
    ctx->pc = 0x2C86A4u;
label_2c86a4:
    // 0x2c86a4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x2c86a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x2c86a8: 0xc0b21bc  jal         func_2C86F0
    ctx->pc = 0x2C86A8u;
    SET_GPR_U32(ctx, 31, 0x2C86B0u);
    ctx->pc = 0x2C86ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C86A8u;
            // 0x2c86ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C86F0u;
    if (runtime->hasFunction(0x2C86F0u)) {
        auto targetFn = runtime->lookupFunction(0x2C86F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C86B0u; }
        if (ctx->pc != 0x2C86B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C86F0_0x2c86f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C86B0u; }
        if (ctx->pc != 0x2C86B0u) { return; }
    }
    ctx->pc = 0x2C86B0u;
label_2c86b0:
    // 0x2c86b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c86b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c86b4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x2C86B4u;
    SET_GPR_U32(ctx, 31, 0x2C86BCu);
    ctx->pc = 0x2C86B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C86B4u;
            // 0x2c86b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C86BCu; }
        if (ctx->pc != 0x2C86BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C86BCu; }
        if (ctx->pc != 0x2C86BCu) { return; }
    }
    ctx->pc = 0x2C86BCu;
label_2c86bc:
    // 0x2c86bc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2c86bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2c86c0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c86c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c86c4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C86C4u;
    {
        const bool branch_taken_0x2c86c4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c86c4) {
            ctx->pc = 0x2C86C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C86C4u;
            // 0x2c86c8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C86D8u;
            goto label_2c86d8;
        }
    }
    ctx->pc = 0x2C86CCu;
    // 0x2c86cc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C86CCu;
    SET_GPR_U32(ctx, 31, 0x2C86D4u);
    ctx->pc = 0x2C86D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C86CCu;
            // 0x2c86d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C86D4u; }
        if (ctx->pc != 0x2C86D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C86D4u; }
        if (ctx->pc != 0x2C86D4u) { return; }
    }
    ctx->pc = 0x2C86D4u;
label_2c86d4:
    // 0x2c86d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c86d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c86d8:
    // 0x2c86d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c86d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c86dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c86dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c86e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c86e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c86e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C86E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C86E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C86E4u;
            // 0x2c86e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C86ECu;
    // 0x2c86ec: 0x0  nop
    ctx->pc = 0x2c86ecu;
    // NOP
}
